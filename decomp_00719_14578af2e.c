// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14578af2e FUN_14578af2e body=200 status=ok
// SIG undefined FUN_14578af2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578af2e(void)

{
  if ((DAT_14c9c1cf7 & 2) != 0) {
    return;
  }
  DAT_14c9c1cf7 = DAT_14c9c1cf7 | 2;
  _DAT_14c9c1c98 = L"FMeshDecalsPS";
  _DAT_14c9c1cb0 = FUN_146826540;
  _DAT_14c9c1cb8 = FUN_146825d77;
  _DAT_14c9c1cc0 = FUN_146825fd6;
  _DAT_14c9c1cc8 = FUN_1407e02ea;
  _DAT_14c9c1cd0 = FUN_146826273;
  _DAT_14c9c1ca8 = FUN_147144e70;
  _DAT_14c9c1ce8 = 0xffffffff00000108;
  _DAT_14c9c1cf0 = 8;
  DAT_14c9c1cf4 = 0;
  _DAT_14c9c1cd8 = &LAB_147144ea6;
  FUN_14578aff6();
  FUN_1407e00cc(&DAT_14c9c1c90);
  return;
}



// FUNCTION 14578aff6 FUN_14578aff6 body=123 status=ok
// SIG undefined FUN_14578aff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578aff6(void)

{
  _DAT_14c9c41e8 = L"BASE";
  DAT_14c9c4212 = 4;
  _DAT_14c9c41f0 = FUN_141092e92();
  _DAT_14c9c41f8 = DAT_14c9c1ca0;
  _DAT_14c9c4200 = &LAB_14682652b;
  DAT_14c9c1ca0 = &DAT_14c9c41e8;
  DAT_14c9c1cf5 = DAT_14c9c1cf5 + '\x01';
  _DAT_14c9c4208 = 0x100000000;
  if (*(char *)(_DAT_14c9c41f0 + 100) != '\0') {
    DAT_14c9c1cf6 = DAT_14c9c1cf6 + '\x01';
  }
  return;
}



// FUNCTION 14578b072 FUN_14578b072 body=205 status=ok
// SIG undefined FUN_14578b072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578b072(void)

{
  if ((DAT_14c9c1bcf & 2) == 0) {
    DAT_14c9c1bcf = DAT_14c9c1bcf | 2;
    _DAT_14c9c1b70 = L"FMeshDecalsVS";
    _DAT_14c9c1b88 = FUN_146826540;
    _DAT_14c9c1b90 = FUN_146825d77;
    _DAT_14c9c1b98 = FUN_146825fd6;
    _DAT_14c9c1ba0 = FUN_1407e02ea;
    _DAT_14c9c1ba8 = FUN_146826273;
    _DAT_14c9c1b80 = FUN_147144dbe;
    _DAT_14c9c1bc0 = 0xffffffff00000108;
    _DAT_14c9c1bc8 = 8;
    DAT_14c9c1bcc = 0;
    _DAT_14c9c1bb0 = &LAB_147144df4;
    FUN_14578b140();
    FUN_1407e00cc(&DAT_14c9c1b68);
    return;
  }
  return;
}



// FUNCTION 14578b140 FUN_14578b140 body=123 status=ok
// SIG undefined FUN_14578b140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578b140(void)

{
  _DAT_14c9c41b8 = L"BASE";
  DAT_14c9c41e2 = 4;
  _DAT_14c9c41c0 = FUN_141092e92();
  _DAT_14c9c41c8 = DAT_14c9c1b78;
  _DAT_14c9c41d0 = &LAB_14682652b;
  DAT_14c9c1b78 = &DAT_14c9c41b8;
  DAT_14c9c1bcd = DAT_14c9c1bcd + '\x01';
  _DAT_14c9c41d8 = 0x100000000;
  if (*(char *)(_DAT_14c9c41c0 + 100) != '\0') {
    DAT_14c9c1bce = DAT_14c9c1bce + '\x01';
  }
  return;
}



// FUNCTION 14578b1bc FUN_14578b1bc body=85 status=ok
// SIG undefined FUN_14578b1bc(void)

void FUN_14578b1bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14578b212();
  return;
}



// FUNCTION 14578b212 FUN_14578b212 body=89 status=ok
// SIG undefined FUN_14578b212(void)

void FUN_14578b212(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar1 != 0) {
    lVar3 = 0x10;
    do {
      plVar2 = *(longlong **)(lVar1 + -8 + lVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    FUN_1400020a8(lVar1);
  }
  FUN_14578b26c(param_1,param_2);
  return;
}



// FUNCTION 14578b26c FUN_14578b26c body=116 status=ok
// SIG undefined FUN_14578b26c(void)

void FUN_14578b26c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 14578b2e0 FUN_14578b2e0 body=162 status=ok
// SIG undefined FUN_14578b2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578b2e0(void)

{
  if (DAT_14caeff10 != 0) {
    _DAT_14caeff0c = 0;
    if (DAT_14caeff18 != (undefined *)0x0) {
      thunk_FUN_1400020a8();
    }
    DAT_14caeff18 = &DAT_14c7585e0;
    if (DAT_14caeff20 != 0) {
      thunk_FUN_1400020a8();
    }
    DAT_14caeff20 = 0;
  }
  if (DAT_14caefef8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caefee8 != 0) {
    FUN_1400020a8();
  }
  FUN_140c7c34f(DAT_14caefed8,DAT_14caefee0);
  if (DAT_14caefed8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14578b382 FUN_14578b382 body=87 status=ok
// SIG undefined FUN_14578b382(void)

void FUN_14578b382(longlong *param_1,float param_2)

{
  if ((0.0001 < param_2) &&
     (((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)))) {
    *(float *)((longlong)param_1 + 0xee4) = param_2;
    *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) | 4;
    (**(code **)(*param_1 + 0x388))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014578b3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6b0))(param_1);
    return;
  }
  return;
}



// FUNCTION 14578b3da FUN_14578b3da body=132 status=ok
// SIG undefined FUN_14578b3da(void)

void FUN_14578b3da(longlong param_1,int param_2)

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



// FUNCTION 14578b45e FUN_14578b45e body=276 status=ok
// SIG undefined FUN_14578b45e(void)

undefined8 * FUN_14578b45e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14ae0eda8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x169) = 0;
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  lVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_14578b574(lVar1 + 0x10,local_20,param_1,FUN_14024d5f0);
  FUN_14578b574(lVar1 + 0x28,local_20,param_1,&LAB_14024d5e6);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578b574 FUN_14578b574 body=228 status=ok
// SIG undefined FUN_14578b574(void)

undefined8
FUN_14578b574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14adffd30;
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
  *local_40 = &PTR_FUN_14ae0edb0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_140c7d8c8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578b674 FUN_14578b674 body=36 status=ok
// SIG undefined FUN_14578b674(void)

void FUN_14578b674(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = FUN_1407aff76();
    iVar2 = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x40) = iVar2;
  }
  return;
}



// FUNCTION 14578b698 FUN_14578b698 body=101 status=ok
// SIG undefined FUN_14578b698(void)

void FUN_14578b698(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14578b6fe(lVar1 + 0x3c28,param_1 + 0x38,param_1 + 0x40,param_1 + 0x48,param_1 + 0x50);
    }
  }
  return;
}



// FUNCTION 14578b6fe FUN_14578b6fe body=352 status=ok
// SIG undefined FUN_14578b6fe(void)

void FUN_14578b6fe(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*param_2 == DAT_14cbe51b8) {
    plVar3 = (longlong *)FUN_140161f86(param_1);
    lVar1 = *plVar3;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
    *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
    if (*param_3 == *(longlong *)(lVar1 + 0x48)) {
      if (*(int *)(lVar1 + 0x50) == 0) {
        iVar4 = 1;
        goto LAB_14578b769;
      }
    }
    else {
      iVar4 = *(int *)(lVar1 + 0x50) + 1;
LAB_14578b769:
      *(longlong *)(lVar1 + 0x48) = *param_3;
      *(int *)(lVar1 + 0x50) = iVar4;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
    FUN_14578b85e(param_1,param_4,param_5);
  }
  plVar3 = (longlong *)FUN_140161f86(param_1);
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  lVar1 = *(longlong *)(lVar1 + 0x48);
  lVar2 = *param_3;
  ReleaseSRWLockShared(SRWLock);
  if (lVar1 != lVar2) {
    return;
  }
  if (*param_2 != DAT_14cbe51c0) {
    if (*param_2 != DAT_14cbe51c8) {
      return;
    }
    FUN_146224a96(param_1);
    return;
  }
  plVar3 = (longlong *)FUN_140161f86(param_1);
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*param_4 == *(longlong *)(lVar1 + 0x54)) {
    if (*(int *)(lVar1 + 0x5c) != 0) goto LAB_14578b845;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x5c) + 1;
  }
  *(longlong *)(lVar1 + 0x54) = *param_4;
  *(int *)(lVar1 + 0x5c) = iVar4;
LAB_14578b845:
                    /* WARNING: Could not recover jumptable at 0x00014578b857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 14578b85e FUN_14578b85e body=599 status=ok
// SIG undefined FUN_14578b85e(void)

void FUN_14578b85e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  longlong *local_80;
  undefined1 local_74;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (((lVar2 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
     (lVar3 = FUN_140c83306(), lVar3 == 0)) goto LAB_14578b9bd;
  uVar11 = *param_2 != 0;
  if (*param_2 == 0) {
    uVar7 = 0;
  }
  else {
    local_81 = uVar11;
    FUN_1446dcdd4(local_70,param_2);
    lVar4 = FUN_14578babe(local_70);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 == 0) {
      lVar6 = FUN_145c6216a();
      lVar8 = *(longlong *)(lVar6 + 0x40);
      if (lVar8 == 0) {
        uVar7 = FUN_14122bc66();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(lVar6 + 0x40) = lVar8;
      }
      lVar4 = *(longlong *)(lVar6 + 0x48);
      if (lVar4 != 0) goto LAB_14578b8fe;
      uVar7 = 2;
      if ((lVar8 != 0) && (local_80 = (longlong *)(lVar6 + 0x38), *local_80 != 0)) {
        plVar5 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar5 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 != '\0')) {
          uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar4 = FUN_144aff482(uVar9,local_80);
          *(longlong *)(lVar6 + 0x48) = lVar4;
          uVar11 = local_81;
          if (lVar4 == 0) goto LAB_14578b928;
          goto LAB_14578b8fe;
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
      }
    }
    else {
LAB_14578b8fe:
      FUN_14578bbb4(lVar2,param_3);
      local_74 = 0;
      FUN_14154f13a(lVar2,lVar4);
    }
    uVar7 = 2;
    uVar11 = local_81;
  }
LAB_14578b928:
  FUN_14578bad4(lVar3,uVar7);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar2 + 0x440) != 0) {
    lVar3 = FUN_1412016fe();
    lVar2 = *(longlong *)(lVar2 + 0x440);
    if (((lVar2 != 0) && (lVar3 != 0)) &&
       ((lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      *(undefined1 *)(lVar2 + 0x480) = uVar11;
    }
  }
  plVar5 = (longlong *)FUN_140161f86(param_1);
  lVar2 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*param_2 == *(longlong *)(lVar2 + 0x54)) {
    if (*(int *)(lVar2 + 0x5c) == 0) {
      iVar10 = 1;
      goto LAB_14578b9ad;
    }
  }
  else {
    iVar10 = *(int *)(lVar2 + 0x5c) + 1;
LAB_14578b9ad:
    *(longlong *)(lVar2 + 0x54) = *param_2;
    *(int *)(lVar2 + 0x5c) = iVar10;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
LAB_14578b9bd:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578bab6 FUN_14578bab6 body=8 status=ok
// SIG undefined FUN_14578bab6(void)

undefined8 FUN_14578bab6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x3cd0);
}



// FUNCTION 14578babe FUN_14578babe body=22 status=ok
// SIG undefined FUN_14578babe(void)

undefined8 FUN_14578babe(int *param_1)

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
  
  plVar4 = DAT_14cb80e90;
  if (DAT_14cb80e90 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb80e90 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb80e90 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb80e90[0x3a] <= *(int *)((longlong)DAT_14cb80e90 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb80e90 + 0x300))(DAT_14cb80e90);
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



// FUNCTION 14578bad4 FUN_14578bad4 body=64 status=ok
// SIG undefined FUN_14578bad4(void)

void FUN_14578bad4(longlong *param_1,int param_2)

{
  if ((int)param_1[0x82] != param_2) {
    *(int *)(param_1 + 0x82) = param_2;
    (**(code **)(*param_1 + 0x640))();
    FUN_14578bb14(param_1 + 0x72,(int)param_1[0x82]);
    return;
  }
  return;
}



// FUNCTION 14578bb14 FUN_14578bb14 body=160 status=ok
// SIG undefined FUN_14578bb14(void)

void FUN_14578bb14(longlong *param_1,undefined4 param_2)

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
        goto LAB_14578bb9f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14578bb9f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14578bbb4 FUN_14578bbb4 body=107 status=ok
// SIG undefined FUN_14578bbb4(void)

void FUN_14578bbb4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_2 + 0x10) != '\x01') {
    return;
  }
  FUN_145989806(plVar1,param_2);
  return;
}



// FUNCTION 14578bc20 FUN_14578bc20 body=36 status=ok
// SIG undefined FUN_14578bc20(void)

undefined4 FUN_14578bc20(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,param_2[3]);
  uVar1 = uVar1 ^ 1 | *(uint *)((longlong)param_2 + 100);
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
}



// FUNCTION 14578bc44 FUN_14578bc44 body=724 status=ok
// SIG undefined FUN_14578bc44(void)

void FUN_14578bc44(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong lStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140402d60();
  local_88 = (longlong *)&LAB_143dfc032;
  local_80 = &local_60;
  FUN_140b7a69a(param_1);
  plVar1 = (longlong *)(param_1 + 0x248);
  lVar2 = param_1 + 600;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  lStack_58 = lVar2;
  if (*(int *)(param_1 + 0x270) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x270);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80._0_4_ = (undefined4)local_60;
  local_80._4_4_ = local_60._4_4_;
  lStack_78 = lStack_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (lStack_58 != lVar2)) {
    do {
      do {
        FUN_140c8afa4(*(undefined8 *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20));
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar5);
    } while ((lStack_78 != lVar2) || (local_88 != plVar1));
  }
  local_88 = (longlong *)&LAB_143dfc03a;
  local_80 = &local_60;
  FUN_140c8a89a(param_1);
  plVar1 = (longlong *)(param_1 + 0x298);
  lVar2 = param_1 + 0x2a8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  iVar5 = 0;
  lStack_58 = lVar2;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x2c0);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined8 *)local_60;
  lStack_78 = lStack_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (lStack_58 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar4 = FUN_14070f4be();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_1404d1282(plVar3);
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar5) || (lStack_78 != lVar2)) || (local_88 != plVar1));
  }
  if (*(int *)(param_1 + 0x34c) != *(int *)(param_1 + 0x348)) {
    FUN_14578bf2c(param_1 + 0x340);
  }
  FUN_14578bf9e(param_1 + 0x350);
  FUN_14578c14a(param_1 + 0x360);
  FUN_14578c2f6(param_1 + 0x560);
  iVar5 = *(int *)(param_1 + 0x568);
  if ((longlong)iVar5 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x560);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        FUN_14578bf1a();
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar5 * 0x10 != lVar6);
  }
  FUN_14578c4bc(param_1 + 0x370);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14578bf1a FUN_14578bf1a body=18 status=ok
// SIG undefined FUN_14578bf1a(void)

void FUN_14578bf1a(longlong param_1)

{
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x20)) {
    FUN_1447ab16c(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14578bf2c FUN_14578bf2c body=113 status=ok
// SIG undefined FUN_14578bf2c(void)

void FUN_14578bf2c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14578bf9e FUN_14578bf9e body=216 status=ok
// SIG undefined FUN_14578bf9e(void)

void FUN_14578bf9e(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_14578c078(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_14578c078(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140c8a5af(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578c078 FUN_14578c078 body=93 status=ok
// SIG undefined FUN_14578c078(void)

undefined8 * FUN_14578c078(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c8a5af(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14578c0d6(param_1,iVar1);
      FUN_140c8a613(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14578c0d6 FUN_14578c0d6 body=115 status=ok
// SIG undefined FUN_14578c0d6(void)

void FUN_14578c0d6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14578c14a FUN_14578c14a body=216 status=ok
// SIG undefined FUN_14578c14a(void)

void FUN_14578c14a(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_14578c224(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_14578c224(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140c8a6d9(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578c224 FUN_14578c224 body=93 status=ok
// SIG undefined FUN_14578c224(void)

undefined8 * FUN_14578c224(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c8a6d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14578c282(param_1,iVar1);
      FUN_140c8a7be(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14578c282 FUN_14578c282 body=115 status=ok
// SIG undefined FUN_14578c282(void)

void FUN_14578c282(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14578c2f6 FUN_14578c2f6 body=216 status=ok
// SIG undefined FUN_14578c2f6(void)

void FUN_14578c2f6(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_14578c3d0(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_14578c3d0(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140bd4e4b(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578c3d0 FUN_14578c3d0 body=93 status=ok
// SIG undefined FUN_14578c3d0(void)

undefined8 * FUN_14578c3d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bd4e4b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14578c45a(param_1,iVar1);
      FUN_14578c42d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14578c42d FUN_14578c42d body=45 status=ok
// SIG undefined FUN_14578c42d(void)

void FUN_14578c42d(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14578c45a FUN_14578c45a body=98 status=ok
// SIG undefined FUN_14578c45a(void)

void FUN_14578c45a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14578c4bc FUN_14578c4bc body=216 status=ok
// SIG undefined FUN_14578c4bc(void)

void FUN_14578c4bc(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = (undefined4)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar3 + 0xc80) & 1) == 0) {
    FUN_14578c596(param_1,&local_30);
  }
  else {
    puVar1 = (undefined1 *)(lVar3 + 0xc80);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc7c);
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0xc7c) = 0xffffffff;
    FUN_14578c596(param_1,&local_30);
    *(undefined4 *)(lVar3 + 0xc7c) = uVar2;
    *puVar1 = 1;
  }
  FUN_140c8a73d(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14578c596 FUN_14578c596 body=93 status=ok
// SIG undefined FUN_14578c596(void)

undefined8 * FUN_14578c596(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c8a73d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14578c5f4(param_1,iVar1);
      FUN_140c8a769(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14578c5f4 FUN_14578c5f4 body=115 status=ok
// SIG undefined FUN_14578c5f4(void)

void FUN_14578c5f4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14578c668 FUN_14578c668 body=77 status=ok
// SIG undefined FUN_14578c668(void)

void FUN_14578c668(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != *(int *)(param_1 + 0x18)) {
    FUN_1407ed7ac((longlong *)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)iVar1 << 4;
    do {
      FUN_143d268da(lVar2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14578c6b6 FUN_14578c6b6 body=96 status=ok
// SIG undefined FUN_14578c6b6(void)

void FUN_14578c6b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14578c716 FUN_14578c716 body=96 status=ok
// SIG undefined FUN_14578c716(void)

void FUN_14578c716(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14578c776 FUN_14578c776 body=97 status=ok
// SIG undefined FUN_14578c776(void)

void FUN_14578c776(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < param_2) {
    FUN_148dbff72(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  if (param_2 != 0) {
    memset((void *)((longlong)iVar1 * 0x20 + lVar2),0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 14578c7d8 FUN_14578c7d8 body=3 status=ok
// SIG undefined FUN_14578c7d8(void)

undefined8 FUN_14578c7d8(void)

{
  return 0;
}



// FUNCTION 14578c7dc FUN_14578c7dc body=33 status=ok
// SIG undefined FUN_14578c7dc(void)

bool FUN_14578c7dc(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_FORMAT_NAMED",0x13);
  return iVar1 == 0;
}



// FUNCTION 14578c7fe FUN_14578c7fe body=33 status=ok
// SIG undefined FUN_14578c7fe(void)

bool FUN_14578c7fe(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_FORMAT_ORDERED",0x15);
  return iVar1 == 0;
}



// FUNCTION 14578c820 FUN_14578c820 body=33 status=ok
// SIG undefined FUN_14578c820(void)

bool FUN_14578c820(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_NUMBER",0xd);
  return iVar1 == 0;
}



// FUNCTION 14578c842 FUN_14578c842 body=33 status=ok
// SIG undefined FUN_14578c842(void)

bool FUN_14578c842(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_PERCENT",0xe);
  return iVar1 == 0;
}



// FUNCTION 14578c864 FUN_14578c864 body=33 status=ok
// SIG undefined FUN_14578c864(void)

bool FUN_14578c864(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_CURRENCY",0xf);
  return iVar1 == 0;
}



// FUNCTION 14578c886 FUN_14578c886 body=33 status=ok
// SIG undefined FUN_14578c886(void)

bool FUN_14578c886(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_DATETIME",0xf);
  return iVar1 == 0;
}



// FUNCTION 14578c8a8 FUN_14578c8a8 body=33 status=ok
// SIG undefined FUN_14578c8a8(void)

bool FUN_14578c8a8(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_DATE",0xb);
  return iVar1 == 0;
}



// FUNCTION 14578c8ca FUN_14578c8ca body=33 status=ok
// SIG undefined FUN_14578c8ca(void)

bool FUN_14578c8ca(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_TIME",0xb);
  return iVar1 == 0;
}



// FUNCTION 14578c8ec FUN_14578c8ec body=33 status=ok
// SIG undefined FUN_14578c8ec(void)

bool FUN_14578c8ec(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,L"LOCTABLE",8);
  return iVar1 == 0;
}



// FUNCTION 14578c90e FUN_14578c90e body=68 status=ok
// SIG undefined FUN_14578c90e(void)

bool FUN_14578c90e(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = wcsncmp(param_1,L"LOCGEN_TOLOWER",0xe);
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = wcsncmp(param_1,L"LOCGEN_TOUPPER",0xe);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 14578c952 FUN_14578c952 body=40 status=ok
// SIG undefined FUN_14578c952(void)

undefined8 FUN_14578c952(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14578c97a FUN_14578c97a body=123 status=ok
// SIG undefined FUN_14578c97a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578c97a(void)

{
  _DAT_14caf1260 = L"BASE";
  DAT_14caf128a = 4;
  _DAT_14caf1268 = FUN_1457fb4a4();
  _DAT_14caf1270 = DAT_14caef920;
  _DAT_14caf1278 = &LAB_14682652b;
  DAT_14caef920 = &DAT_14caf1260;
  DAT_14caef975 = DAT_14caef975 + '\x01';
  _DAT_14caf1280 = 0x100000000;
  if (*(char *)(_DAT_14caf1268 + 100) != '\0') {
    DAT_14caef976 = DAT_14caef976 + '\x01';
  }
  return;
}



// FUNCTION 14578c9f6 FUN_14578c9f6 body=275 status=ok
// SIG undefined FUN_14578c9f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578c9f6(void)

{
  FUN_14578cb0a();
  _DAT_14caf0a90 = L"OrderedMeshShaderMaps";
  DAT_14caf0aba = FUN_140850cc5();
  if ((DAT_14caf0c47 & 2) == 0) {
    DAT_14caf0c47 = DAT_14caf0c47 | 3;
    _DAT_14caf0be8 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0c00 = &LAB_147bc47c2;
    _DAT_14caf0c08 = FUN_147bc47d0;
    _DAT_14caf0c10 = &LAB_147bc47f0;
    _DAT_14caf0c18 = &LAB_147bc47fe;
    _DAT_14caf0c20 = &LAB_147bc480c;
    _DAT_14caf0bf8 = FUN_147bc4818;
    _DAT_14caf0c38 = 0x1000000010;
    _DAT_14caf0c40 = 8;
    DAT_14caf0c44 = 0;
  }
  _DAT_14caf0a98 = &DAT_14caf0be0;
  _DAT_14caf0aa8 = &LAB_14682652b;
  _DAT_14caf0ab0 = &DAT_100000060;
  _DAT_14caf0ab8 = 0;
  _DAT_14caf0aa0 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0a90;
  return;
}



// FUNCTION 14578cb0a FUN_14578cb0a body=128 status=ok
// SIG undefined FUN_14578cb0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578cb0a(void)

{
  FUN_14578f4d4();
  _DAT_14caf0ac0 = L"MaterialCompilationOutput";
  DAT_14caf0aea = FUN_140850cc5();
  FUN_14578cb8a();
  _DAT_14caf0ac8 = &DAT_14caef7c0;
  _DAT_14caf0ad8 = &LAB_14682652b;
  _DAT_14caf0ae0 = 0x100000070;
  _DAT_14caf0ae8 = 0;
  _DAT_14caf0ad0 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0ac0;
  return;
}



// FUNCTION 14578cb8a FUN_14578cb8a body=205 status=ok
// SIG undefined FUN_14578cb8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578cb8a(void)

{
  if ((DAT_14caef827 & 2) == 0) {
    DAT_14caef827 = DAT_14caef827 | 2;
    _DAT_14caef7c8 = L"FMaterialCompilationOutput";
    _DAT_14caef7e0 = FUN_146826540;
    _DAT_14caef7e8 = FUN_146825d77;
    _DAT_14caef7f0 = FUN_146825fd6;
    _DAT_14caef7f8 = FUN_1407e02ea;
    _DAT_14caef800 = FUN_146826273;
    _DAT_14caef7d8 = FUN_147bbff8c;
    _DAT_14caef818 = 0xffffffff000001d8;
    _DAT_14caef820 = 8;
    DAT_14caef824 = 0;
    _DAT_14caef808 = &LAB_147bbffd2;
    FUN_14578cc58();
    FUN_1407e00cc(&DAT_14caef7c0);
    return;
  }
  return;
}



// FUNCTION 14578cc58 FUN_14578cc58 body=128 status=ok
// SIG undefined FUN_14578cc58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578cc58(void)

{
  FUN_14578d41e();
  _DAT_14caf05b0 = L"UniformExpressionSet";
  DAT_14caf05da = FUN_140850cc5();
  FUN_14578ccd8();
  _DAT_14caf05b8 = &DAT_14caef750;
  _DAT_14caf05c8 = &LAB_14682652b;
  _DAT_14caf05d0 = 0x100000000;
  _DAT_14caf05d8 = 0;
  _DAT_14caf05c0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf05b0;
  return;
}



// FUNCTION 14578ccd8 FUN_14578ccd8 body=205 status=ok
// SIG undefined FUN_14578ccd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ccd8(void)

{
  if ((DAT_14caef7b7 & 2) == 0) {
    DAT_14caef7b7 = DAT_14caef7b7 | 2;
    _DAT_14caef758 = L"FUniformExpressionSet";
    _DAT_14caef770 = FUN_146826540;
    _DAT_14caef778 = FUN_146825d77;
    _DAT_14caef780 = FUN_146825fd6;
    _DAT_14caef788 = FUN_1407e02ea;
    _DAT_14caef790 = FUN_146826273;
    _DAT_14caef768 = FUN_147bbff5c;
    _DAT_14caef7a8 = 0xffffffff000001b8;
    _DAT_14caef7b0 = 8;
    DAT_14caef7b4 = 0;
    _DAT_14caef798 = &LAB_147bbff88;
    FUN_14578cda6();
    FUN_1407e00cc(&DAT_14caef750);
    return;
  }
  return;
}



// FUNCTION 14578cda6 FUN_14578cda6 body=275 status=ok
// SIG undefined FUN_14578cda6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578cda6(void)

{
  FUN_14578ceba();
  _DAT_14caf0030 = L"UniformPreshaders";
  DAT_14caf005a = FUN_140850cc5();
  if ((DAT_14caf05af & 2) == 0) {
    DAT_14caf05af = DAT_14caf05af | 3;
    _DAT_14caf0550 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0568 = &LAB_147bc3f50;
    _DAT_14caf0570 = FUN_147bc3f5e;
    _DAT_14caf0578 = &LAB_147bc3f7e;
    _DAT_14caf0580 = &LAB_147bc3f8c;
    _DAT_14caf0588 = FUN_147bc3f9a;
    _DAT_14caf0560 = FUN_147bc3fe4;
    _DAT_14caf05a0 = 0x1000000010;
    _DAT_14caf05a8 = 8;
    DAT_14caf05ac = 0;
  }
  _DAT_14caf0038 = &DAT_14caf0548;
  _DAT_14caf0048 = &LAB_14682652b;
  _DAT_14caf0050 = 0x100000000;
  _DAT_14caf0058 = 0;
  _DAT_14caf0040 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0030;
  return;
}



// FUNCTION 14578ceba FUN_14578ceba body=275 status=ok
// SIG undefined FUN_14578ceba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ceba(void)

{
  FUN_14578cfce();
  _DAT_14caf0060 = L"UniformPreshaderFields";
  DAT_14caf008a = FUN_140850cc5();
  if ((DAT_14caf0547 & 2) == 0) {
    DAT_14caf0547 = DAT_14caf0547 | 3;
    _DAT_14caf04e8 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0500 = &LAB_147bc3be4;
    _DAT_14caf0508 = FUN_147bc3bf2;
    _DAT_14caf0510 = &LAB_147bc3c12;
    _DAT_14caf0518 = &LAB_147bc3c20;
    _DAT_14caf0520 = FUN_147bc3c2e;
    _DAT_14caf04f8 = FUN_147bc3c78;
    _DAT_14caf0538 = 0x1000000010;
    _DAT_14caf0540 = 8;
    DAT_14caf0544 = 0;
  }
  _DAT_14caf0068 = &DAT_14caf04e0;
  _DAT_14caf0078 = &LAB_14682652b;
  _DAT_14caf0080 = &DAT_100000010;
  _DAT_14caf0088 = 0;
  _DAT_14caf0070 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0060;
  return;
}



// FUNCTION 14578cfce FUN_14578cfce body=275 status=ok
// SIG undefined FUN_14578cfce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578cfce(void)

{
  FUN_14578d0e2();
  _DAT_14caf0090 = L"UniformNumericParameters";
  DAT_14caf00ba = FUN_140850cc5();
  if ((DAT_14caf04df & 2) == 0) {
    DAT_14caf04df = DAT_14caf04df | 3;
    _DAT_14caf0480 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0498 = &LAB_147bc385c;
    _DAT_14caf04a0 = FUN_147bc386a;
    _DAT_14caf04a8 = &LAB_147bc388a;
    _DAT_14caf04b0 = &LAB_147bc3898;
    _DAT_14caf04b8 = FUN_147bc38a6;
    _DAT_14caf0490 = FUN_147bc38f0;
    _DAT_14caf04d0 = 0x1000000010;
    _DAT_14caf04d8 = 8;
    DAT_14caf04dc = 0;
  }
  _DAT_14caf0098 = &DAT_14caf0478;
  _DAT_14caf00a8 = &LAB_14682652b;
  _DAT_14caf00b0 = &DAT_100000020;
  _DAT_14caf00b8 = 0;
  _DAT_14caf00a0 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0090;
  return;
}



// FUNCTION 14578d0e2 FUN_14578d0e2 body=275 status=ok
// SIG undefined FUN_14578d0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d0e2(void)

{
  FUN_14578d1f6();
  _DAT_14caf00c0 = L"UniformTextureParameters";
  DAT_14caf00ea = FUN_140850cc5();
  if ((DAT_14caf0477 & 2) == 0) {
    DAT_14caf0477 = DAT_14caf0477 | 3;
    _DAT_14caf0418 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0430 = &LAB_147bc34d4;
    _DAT_14caf0438 = FUN_147bc34e2;
    _DAT_14caf0440 = &LAB_147bc3502;
    _DAT_14caf0448 = &LAB_147bc3510;
    _DAT_14caf0450 = FUN_147bc351e;
    _DAT_14caf0428 = FUN_147bc3568;
    _DAT_14caf0468 = 0x1000000010;
    _DAT_14caf0470 = 8;
    DAT_14caf0474 = 0;
  }
  _DAT_14caf00c8 = &DAT_14caf0410;
  _DAT_14caf00d8 = &LAB_14682652b;
  _DAT_14caf00e0 = 0x700000030;
  _DAT_14caf00e8 = 0;
  _DAT_14caf00d0 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf00c0;
  return;
}



// FUNCTION 14578d1f6 FUN_14578d1f6 body=275 status=ok
// SIG undefined FUN_14578d1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d1f6(void)

{
  FUN_14578d30a();
  _DAT_14caf00f0 = L"UniformExternalTextureParameters";
  DAT_14caf011a = FUN_140850cc5();
  if ((DAT_14caf040f & 2) == 0) {
    DAT_14caf040f = DAT_14caf040f | 3;
    _DAT_14caf03b0 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf03c8 = &LAB_147bc318a;
    _DAT_14caf03d0 = FUN_147bc3198;
    _DAT_14caf03d8 = &LAB_147bc31b8;
    _DAT_14caf03e0 = &LAB_147bc31c6;
    _DAT_14caf03e8 = FUN_147bc31d4;
    _DAT_14caf03c0 = FUN_147bc321e;
    _DAT_14caf0400 = 0x1000000010;
    _DAT_14caf0408 = 8;
    DAT_14caf040c = 0;
  }
  _DAT_14caf00f8 = &DAT_14caf03a8;
  _DAT_14caf0108 = &LAB_14682652b;
  _DAT_14caf0110 = 0x1000000a0;
  _DAT_14caf0118 = 0;
  _DAT_14caf0100 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf00f0;
  return;
}



// FUNCTION 14578d30a FUN_14578d30a body=275 status=ok
// SIG undefined FUN_14578d30a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d30a(void)

{
  FUN_14578d532();
  _DAT_14caf0120 = L"UniformTextureCollectionParameters";
  DAT_14caf014a = FUN_140850cc5();
  if ((DAT_14caf03a7 & 2) == 0) {
    DAT_14caf03a7 = DAT_14caf03a7 | 3;
    _DAT_14caf0348 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0360 = &LAB_147bc2e1e;
    _DAT_14caf0368 = FUN_147bc2e2c;
    _DAT_14caf0370 = &LAB_147bc2e4c;
    _DAT_14caf0378 = &LAB_147bc2e5a;
    _DAT_14caf0380 = FUN_147bc2e68;
    _DAT_14caf0358 = FUN_147bc2eb2;
    _DAT_14caf0398 = 0x1000000010;
    _DAT_14caf03a0 = 8;
    DAT_14caf03a4 = 0;
  }
  _DAT_14caf0128 = &DAT_14caf0340;
  _DAT_14caf0138 = &LAB_14682652b;
  _DAT_14caf0140 = 0x1000000b0;
  _DAT_14caf0148 = 0;
  _DAT_14caf0130 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0120;
  return;
}



// FUNCTION 14578d41e FUN_14578d41e body=276 status=ok
// SIG undefined FUN_14578d41e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d41e(void)

{
  FUN_14578de00();
  _DAT_14caf05e0 = L"UserSceneTextureInputs";
  DAT_14caf060a = FUN_140850cc5();
  if ((DAT_14caf130f & 2) == 0) {
    DAT_14caf130f = DAT_14caf130f | 3;
    _DAT_14caf12b0 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf12c8 = &LAB_147bc429a;
    _DAT_14caf12d0 = FUN_147bc42a8;
    _DAT_14caf12d8 = &LAB_147bc42c8;
    _DAT_14caf12e0 = &LAB_147bc42d6;
    _DAT_14caf12e8 = &LAB_147bc42e4;
    _DAT_14caf12c0 = FUN_147bc42f0;
    _DAT_14caf1300 = 0x1000000010;
    _DAT_14caf1308 = 8;
    DAT_14caf130c = 0;
  }
  _DAT_14caf05e8 = &DAT_14caf12a8;
  _DAT_14caf05f8 = &LAB_14682652b;
  _DAT_14caf0600 = 0x1000001b8;
  _DAT_14caf0608 = 0;
  _DAT_14caf05f0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf05e0;
  return;
}



// FUNCTION 14578d532 FUN_14578d532 body=276 status=ok
// SIG undefined FUN_14578d532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d532(void)

{
  FUN_14578d646();
  _DAT_14caf0150 = L"UniformPreshaderBufferSize";
  DAT_14caf017a = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0158 = &DAT_14c87e638;
  _DAT_14caf0168 = &LAB_14682652b;
  _DAT_14caf0170 = 0x1000000c0;
  _DAT_14caf0178 = 0;
  _DAT_14caf0160 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0150;
  return;
}



// FUNCTION 14578d646 FUN_14578d646 body=121 status=ok
// SIG undefined FUN_14578d646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d646(void)

{
  FUN_14578dbd8();
  _DAT_14caf0180 = L"UniformPreshaderData";
  DAT_14caf01aa = FUN_140850cc5();
  _DAT_14caf0188 = FUN_14578d6c0();
  _DAT_14caf0198 = &LAB_14682652b;
  _DAT_14caf01a0 = 0x1000000c8;
  _DAT_14caf01a8 = 0;
  _DAT_14caf0190 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0180;
  return;
}



// FUNCTION 14578d6c0 FUN_14578d6c0 body=206 status=ok
// SIG undefined FUN_14578d6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14578d6c0(void)

{
  if ((DAT_14cb058bf & 2) == 0) {
    DAT_14cb058bf = DAT_14cb058bf | 2;
    _DAT_14cb05860 = L"UE::Shader::FPreshaderData";
    _DAT_14cb05878 = FUN_146826540;
    _DAT_14cb05880 = FUN_146825d77;
    _DAT_14cb05888 = FUN_146825fd6;
    _DAT_14cb05890 = FUN_1407e02ea;
    _DAT_14cb05898 = FUN_146826273;
    _DAT_14cb05870 = FUN_147d0c970;
    _DAT_14cb058b0 = 0xffffffff00000040;
    _DAT_14cb058b8 = 8;
    DAT_14cb058bc = 0;
    _DAT_14cb058a0 = &LAB_147d0c9bc;
    FUN_14578d78e();
    FUN_1407e00cc(&DAT_14cb05858);
  }
  return &DAT_14cb05858;
}



// FUNCTION 14578d78e FUN_14578d78e body=275 status=ok
// SIG undefined FUN_14578d78e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d78e(void)

{
  FUN_14578d8a2();
  _DAT_14cb05a78 = L"Names";
  DAT_14cb05aa2 = FUN_140850cc5();
  if ((DAT_14caf130f & 2) == 0) {
    DAT_14caf130f = DAT_14caf130f | 3;
    _DAT_14caf12b0 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf12c8 = &LAB_147bc429a;
    _DAT_14caf12d0 = FUN_147bc42a8;
    _DAT_14caf12d8 = &LAB_147bc42c8;
    _DAT_14caf12e0 = &LAB_147bc42d6;
    _DAT_14caf12e8 = &LAB_147bc42e4;
    _DAT_14caf12c0 = FUN_147bc42f0;
    _DAT_14caf1300 = 0x1000000010;
    _DAT_14caf1308 = 8;
    DAT_14caf130c = 0;
  }
  _DAT_14cb05a80 = &DAT_14caf12a8;
  _DAT_14cb05a90 = &LAB_14682652b;
  _DAT_14cb05a98 = 0x100000000;
  _DAT_14cb05aa0 = 0;
  _DAT_14cb05a88 = DAT_14cb05868;
  DAT_14cb05868 = &DAT_14cb05a78;
  return;
}



// FUNCTION 14578d8a2 FUN_14578d8a2 body=275 status=ok
// SIG undefined FUN_14578d8a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d8a2(void)

{
  FUN_14578d9b6();
  _DAT_14cb05aa8 = L"StructTypes";
  DAT_14cb05ad2 = FUN_140850cc5();
  if ((DAT_14cb05c6f & 2) == 0) {
    DAT_14cb05c6f = DAT_14cb05c6f | 3;
    _DAT_14cb05c10 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb05c28 = &LAB_147d12756;
    _DAT_14cb05c30 = FUN_147d12764;
    _DAT_14cb05c38 = &LAB_147d12784;
    _DAT_14cb05c40 = &LAB_147d12792;
    _DAT_14cb05c48 = FUN_147d127a0;
    _DAT_14cb05c20 = FUN_147d127ea;
    _DAT_14cb05c60 = 0x1000000010;
    _DAT_14cb05c68 = 8;
    DAT_14cb05c6c = 0;
  }
  _DAT_14cb05ab0 = &DAT_14cb05c08;
  _DAT_14cb05ac0 = &LAB_14682652b;
  _DAT_14cb05ac8 = &DAT_100000010;
  _DAT_14cb05ad0 = 0;
  _DAT_14cb05ab8 = DAT_14cb05868;
  DAT_14cb05868 = &DAT_14cb05aa8;
  return;
}



// FUNCTION 14578d9b6 FUN_14578d9b6 body=275 status=ok
// SIG undefined FUN_14578d9b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578d9b6(void)

{
  FUN_14578daca();
  _DAT_14cb05ad8 = L"StructComponentTypes";
  DAT_14cb05b02 = FUN_140850cc5();
  if ((DAT_14cb05b9f & 2) == 0) {
    DAT_14cb05b9f = DAT_14cb05b9f | 3;
    _DAT_14cb05b40 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb05b58 = &LAB_147d1227e;
    _DAT_14cb05b60 = FUN_147d1228c;
    _DAT_14cb05b68 = &LAB_147d122ac;
    _DAT_14cb05b70 = &LAB_147d122ba;
    _DAT_14cb05b78 = &LAB_147d122c8;
    _DAT_14cb05b50 = FUN_147d122d4;
    _DAT_14cb05b90 = 0x1000000010;
    _DAT_14cb05b98 = 8;
    DAT_14cb05b9c = 0;
  }
  _DAT_14cb05ae0 = &DAT_14cb05b38;
  _DAT_14cb05af0 = &LAB_14682652b;
  _DAT_14cb05af8 = &DAT_100000020;
  _DAT_14cb05b00 = 0;
  _DAT_14cb05ae8 = DAT_14cb05868;
  DAT_14cb05868 = &DAT_14cb05ad8;
  return;
}



// FUNCTION 14578daca FUN_14578daca body=270 status=ok
// SIG undefined FUN_14578daca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578daca(void)

{
  _DAT_14cb05b08 = &DAT_149e383f0;
  DAT_14cb05b32 = FUN_140850cc5();
  if ((DAT_14caa7a17 & 2) == 0) {
    DAT_14caa7a17 = DAT_14caa7a17 | 3;
    _DAT_14caa79b8 = L"(TArray<T, AllocatorType>)";
    _DAT_14caa79d0 = &LAB_14746f788;
    _DAT_14caa79d8 = FUN_14746f796;
    _DAT_14caa79e0 = &LAB_14746f7b6;
    _DAT_14caa79e8 = &LAB_14746f7c4;
    _DAT_14caa79f0 = &LAB_14746f7d2;
    _DAT_14caa79c8 = FUN_14746f7de;
    _DAT_14caa7a08 = 0x1000000010;
    _DAT_14caa7a10 = 8;
    DAT_14caa7a14 = 0;
  }
  _DAT_14cb05b10 = &DAT_14caa79b0;
  _DAT_14cb05b20 = &LAB_14682652b;
  _DAT_14cb05b28 = &DAT_100000030;
  _DAT_14cb05b30 = 0;
  _DAT_14cb05b18 = DAT_14cb05868;
  DAT_14cb05868 = &DAT_14cb05b08;
  return;
}



// FUNCTION 14578dbd8 FUN_14578dbd8 body=276 status=ok
// SIG undefined FUN_14578dbd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578dbd8(void)

{
  FUN_14578dcec();
  _DAT_14caf01b0 = L"DefaultValues";
  DAT_14caf01da = FUN_140850cc5();
  if ((DAT_14caa7a17 & 2) == 0) {
    DAT_14caa7a17 = DAT_14caa7a17 | 3;
    _DAT_14caa79b8 = L"(TArray<T, AllocatorType>)";
    _DAT_14caa79d0 = &LAB_14746f788;
    _DAT_14caa79d8 = FUN_14746f796;
    _DAT_14caa79e0 = &LAB_14746f7b6;
    _DAT_14caa79e8 = &LAB_14746f7c4;
    _DAT_14caa79f0 = &LAB_14746f7d2;
    _DAT_14caa79c8 = FUN_14746f7de;
    _DAT_14caa7a08 = 0x1000000010;
    _DAT_14caa7a10 = 8;
    DAT_14caa7a14 = 0;
  }
  _DAT_14caf01b8 = &DAT_14caa79b0;
  _DAT_14caf01c8 = &LAB_14682652b;
  _DAT_14caf01d0 = &DAT_100000108;
  _DAT_14caf01d8 = 0;
  _DAT_14caf01c0 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf01b0;
  return;
}



// FUNCTION 14578dcec FUN_14578dcec body=275 status=ok
// SIG undefined FUN_14578dcec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578dcec(void)

{
  FUN_14578fd64();
  _DAT_14caf01e0 = L"VTStacks";
  DAT_14caf020a = FUN_140850cc5();
  if ((DAT_14caf033f & 2) == 0) {
    DAT_14caf033f = DAT_14caf033f | 3;
    _DAT_14caf02e0 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf02f8 = &LAB_147bc2ab2;
    _DAT_14caf0300 = FUN_147bc2ac0;
    _DAT_14caf0308 = &LAB_147bc2ae0;
    _DAT_14caf0310 = &LAB_147bc2aee;
    _DAT_14caf0318 = FUN_147bc2afc;
    _DAT_14caf02f0 = FUN_147bc2b46;
    _DAT_14caf0330 = 0x1000000010;
    _DAT_14caf0338 = 8;
    DAT_14caf033c = 0;
  }
  _DAT_14caf01e8 = &DAT_14caf02d8;
  _DAT_14caf01f8 = &LAB_14682652b;
  _DAT_14caf0200 = 0x100000118;
  _DAT_14caf0208 = 0;
  _DAT_14caf01f0 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf01e0;
  return;
}



// FUNCTION 14578de00 FUN_14578de00 body=276 status=ok
// SIG undefined FUN_14578de00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578de00(void)

{
  FUN_14578df14();
  _DAT_14caf0610 = L"UsedSceneTextures";
  DAT_14caf063a = FUN_140850cc5();
  if ((DAT_14c87e707 & 2) == 0) {
    DAT_14c87e707 = DAT_14c87e707 | 3;
    _DAT_14c87e6a8 = L"unsigned long long";
    _DAT_14c87e6c0 = FUN_146828f6a;
    _DAT_14c87e6c8 = &LAB_146828f9c;
    _DAT_14c87e6d0 = &LAB_146828fa8;
    _DAT_14c87e6d8 = &LAB_146828fae;
    _DAT_14c87e6e0 = FUN_146828fb2;
    _DAT_14c87e6b8 = &LAB_146828fce;
    _DAT_14c87e6f8 = 0x800000008;
    _DAT_14c87e700 = 8;
    DAT_14c87e704 = 0;
  }
  _DAT_14caf0618 = &DAT_14c87e6a0;
  _DAT_14caf0628 = &LAB_14682652b;
  _DAT_14caf0630 = 0x1000001c8;
  _DAT_14caf0638 = 0;
  _DAT_14caf0620 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0610;
  return;
}



// FUNCTION 14578df14 FUN_14578df14 body=276 status=ok
// SIG undefined FUN_14578df14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578df14(void)

{
  FUN_14578e028();
  _DAT_14caf0640 = L"UsedPathTracingBufferTextures";
  DAT_14caf066a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0648 = &DAT_14ca76fe8;
  _DAT_14caf0658 = &LAB_14682652b;
  _DAT_14caf0660 = 0x1000001d0;
  _DAT_14caf0668 = 0;
  _DAT_14caf0650 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0640;
  return;
}



// FUNCTION 14578e028 FUN_14578e028 body=121 status=ok
// SIG undefined FUN_14578e028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e028(void)

{
  FUN_14578e170();
  _DAT_14caf0670 = L"SubstrateMaterialCompilationOutput";
  DAT_14caf069a = FUN_140850cc5();
  _DAT_14caf0678 = FUN_14578e0a2();
  _DAT_14caf0688 = &LAB_14682652b;
  _DAT_14caf0690 = 0x1000001d1;
  _DAT_14caf0698 = 0;
  _DAT_14caf0680 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0670;
  return;
}



// FUNCTION 14578e0a2 FUN_14578e0a2 body=206 status=ok
// SIG undefined FUN_14578e0a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14578e0a2(void)

{
  if ((DAT_14cb1234f & 2) == 0) {
    DAT_14cb1234f = DAT_14cb1234f | 2;
    _DAT_14cb122f0 = L"FSubstrateMaterialCompilationOutput";
    _DAT_14cb12308 = FUN_146826540;
    _DAT_14cb12310 = FUN_146825d77;
    _DAT_14cb12318 = FUN_146825fd6;
    _DAT_14cb12320 = FUN_1407e02ea;
    _DAT_14cb12328 = FUN_146826273;
    _DAT_14cb12300 = &LAB_147dd9988;
    _DAT_14cb12340 = 0xffffffff00000003;
    _DAT_14cb12348 = 1;
    DAT_14cb1234c = 0;
    _DAT_14cb12330 = &LAB_147dd9992;
    FUN_14578fa34();
    FUN_1407e00cc(&DAT_14cb122e8);
  }
  return &DAT_14cb122e8;
}



// FUNCTION 14578e170 FUN_14578e170 body=276 status=ok
// SIG undefined FUN_14578e170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e170(void)

{
  FUN_14578e284();
  _DAT_14caf06a0 = L"UsedDBufferTextures";
  DAT_14caf06ca = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf06a8 = &DAT_14ca76fe8;
  _DAT_14caf06b8 = &LAB_14682652b;
  _DAT_14caf06c0 = 0x1000001d4;
  _DAT_14caf06c8 = 0;
  _DAT_14caf06b0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf06a0;
  return;
}



// FUNCTION 14578e284 FUN_14578e284 body=276 status=ok
// SIG undefined FUN_14578e284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e284(void)

{
  FUN_14578e398();
  _DAT_14caf06d0 = L"RuntimeVirtualTextureOutputAttributeMask";
  DAT_14caf06fa = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf06d8 = &DAT_14ca76fe8;
  _DAT_14caf06e8 = &LAB_14682652b;
  _DAT_14caf06f0 = 0x1000001d5;
  _DAT_14caf06f8 = 0;
  _DAT_14caf06e0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf06d0;
  return;
}



// FUNCTION 14578e398 FUN_14578e398 body=276 status=ok
// SIG undefined FUN_14578e398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e398(void)

{
  FUN_14578e4ac();
  _DAT_14caf0700 = L"bNeedsSceneTextures";
  DAT_14caf072a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0708 = &DAT_14ca76fe8;
  _DAT_14caf0718 = &LAB_14682652b;
  _DAT_14caf0720 = 0x1ffffffff;
  _DAT_14caf0728 = 0x100;
  _DAT_14caf0710 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0700;
  return;
}



// FUNCTION 14578e4ac FUN_14578e4ac body=276 status=ok
// SIG undefined FUN_14578e4ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e4ac(void)

{
  FUN_14578e5c0();
  _DAT_14caf0730 = L"bUsesDBufferTextureLookup";
  DAT_14caf075a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0738 = &DAT_14ca76fe8;
  _DAT_14caf0748 = &LAB_14682652b;
  _DAT_14caf0750 = 0x1ffffffff;
  _DAT_14caf0758 = 0x100;
  _DAT_14caf0740 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0730;
  return;
}



// FUNCTION 14578e5c0 FUN_14578e5c0 body=276 status=ok
// SIG undefined FUN_14578e5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e5c0(void)

{
  FUN_14578e6d4();
  _DAT_14caf0760 = L"bUsesEyeAdaptation";
  DAT_14caf078a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0768 = &DAT_14ca76fe8;
  _DAT_14caf0778 = &LAB_14682652b;
  _DAT_14caf0780 = 0x1ffffffff;
  _DAT_14caf0788 = 0x100;
  _DAT_14caf0770 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0760;
  return;
}



// FUNCTION 14578e6d4 FUN_14578e6d4 body=276 status=ok
// SIG undefined FUN_14578e6d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e6d4(void)

{
  FUN_14578e7e8();
  _DAT_14caf0790 = L"bModifiesMeshPosition";
  DAT_14caf07ba = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0798 = &DAT_14ca76fe8;
  _DAT_14caf07a8 = &LAB_14682652b;
  _DAT_14caf07b0 = 0x1ffffffff;
  _DAT_14caf07b8 = 0x100;
  _DAT_14caf07a0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0790;
  return;
}



// FUNCTION 14578e7e8 FUN_14578e7e8 body=276 status=ok
// SIG undefined FUN_14578e7e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e7e8(void)

{
  FUN_14578e8fc();
  _DAT_14caf07c0 = L"bUsesWorldPositionOffset";
  DAT_14caf07ea = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf07c8 = &DAT_14ca76fe8;
  _DAT_14caf07d8 = &LAB_14682652b;
  _DAT_14caf07e0 = 0x1ffffffff;
  _DAT_14caf07e8 = 0x100;
  _DAT_14caf07d0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf07c0;
  return;
}



// FUNCTION 14578e8fc FUN_14578e8fc body=276 status=ok
// SIG undefined FUN_14578e8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578e8fc(void)

{
  FUN_14578ea10();
  _DAT_14caf07f0 = L"bUsesGlobalDistanceField";
  DAT_14caf081a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf07f8 = &DAT_14ca76fe8;
  _DAT_14caf0808 = &LAB_14682652b;
  _DAT_14caf0810 = 0x1ffffffff;
  _DAT_14caf0818 = 0x100;
  _DAT_14caf0800 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf07f0;
  return;
}



// FUNCTION 14578ea10 FUN_14578ea10 body=276 status=ok
// SIG undefined FUN_14578ea10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ea10(void)

{
  FUN_14578eb24();
  _DAT_14caf0820 = L"bUsesPixelDepthOffset";
  DAT_14caf084a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0828 = &DAT_14ca76fe8;
  _DAT_14caf0838 = &LAB_14682652b;
  _DAT_14caf0840 = 0x1ffffffff;
  _DAT_14caf0848 = 0x100;
  _DAT_14caf0830 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0820;
  return;
}



// FUNCTION 14578eb24 FUN_14578eb24 body=276 status=ok
// SIG undefined FUN_14578eb24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578eb24(void)

{
  FUN_14578ec38();
  _DAT_14caf0850 = L"bUsesDistanceCullFade";
  DAT_14caf087a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0858 = &DAT_14ca76fe8;
  _DAT_14caf0868 = &LAB_14682652b;
  _DAT_14caf0870 = 0x1ffffffff;
  _DAT_14caf0878 = 0x100;
  _DAT_14caf0860 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0850;
  return;
}



// FUNCTION 14578ec38 FUN_14578ec38 body=276 status=ok
// SIG undefined FUN_14578ec38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ec38(void)

{
  FUN_14578ed4c();
  _DAT_14caf0880 = L"bUsesPerInstanceCustomData";
  DAT_14caf08aa = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0888 = &DAT_14ca76fe8;
  _DAT_14caf0898 = &LAB_14682652b;
  _DAT_14caf08a0 = 0x1ffffffff;
  _DAT_14caf08a8 = 0x100;
  _DAT_14caf0890 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0880;
  return;
}



// FUNCTION 14578ed4c FUN_14578ed4c body=276 status=ok
// SIG undefined FUN_14578ed4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ed4c(void)

{
  FUN_14578ee60();
  _DAT_14caf08b0 = L"bUsesVertexInterpolator";
  DAT_14caf08da = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf08b8 = &DAT_14ca76fe8;
  _DAT_14caf08c8 = &LAB_14682652b;
  _DAT_14caf08d0 = 0x1ffffffff;
  _DAT_14caf08d8 = 0x100;
  _DAT_14caf08c0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf08b0;
  return;
}



// FUNCTION 14578ee60 FUN_14578ee60 body=276 status=ok
// SIG undefined FUN_14578ee60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ee60(void)

{
  FUN_14578ef74();
  _DAT_14caf08e0 = L"bHasRuntimeVirtualTextureOutputNode";
  DAT_14caf090a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf08e8 = &DAT_14ca76fe8;
  _DAT_14caf08f8 = &LAB_14682652b;
  _DAT_14caf0900 = 0x1ffffffff;
  _DAT_14caf0908 = 0x100;
  _DAT_14caf08f0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf08e0;
  return;
}



// FUNCTION 14578ef74 FUN_14578ef74 body=276 status=ok
// SIG undefined FUN_14578ef74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ef74(void)

{
  FUN_14578f088();
  _DAT_14caf0910 = L"bUsesAnisotropy";
  DAT_14caf093a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0918 = &DAT_14ca76fe8;
  _DAT_14caf0928 = &LAB_14682652b;
  _DAT_14caf0930 = 0x1ffffffff;
  _DAT_14caf0938 = 0x100;
  _DAT_14caf0920 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0910;
  return;
}



// FUNCTION 14578f088 FUN_14578f088 body=276 status=ok
// SIG undefined FUN_14578f088(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f088(void)

{
  FUN_14578f19c();
  _DAT_14caf0940 = L"bIsLightFunctionAtlasCompatible";
  DAT_14caf096a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0948 = &DAT_14ca76fe8;
  _DAT_14caf0958 = &LAB_14682652b;
  _DAT_14caf0960 = 0x1ffffffff;
  _DAT_14caf0968 = 0x100;
  _DAT_14caf0950 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0940;
  return;
}



// FUNCTION 14578f19c FUN_14578f19c body=276 status=ok
// SIG undefined FUN_14578f19c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f19c(void)

{
  FUN_14578f2b0();
  _DAT_14caf0970 = L"bUsesDisplacement";
  DAT_14caf099a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0978 = &DAT_14ca76fe8;
  _DAT_14caf0988 = &LAB_14682652b;
  _DAT_14caf0990 = 0x1ffffffff;
  _DAT_14caf0998 = 0x100;
  _DAT_14caf0980 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf0970;
  return;
}



// FUNCTION 14578f2b0 FUN_14578f2b0 body=276 status=ok
// SIG undefined FUN_14578f2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f2b0(void)

{
  FUN_14578f3c4();
  _DAT_14caf09a0 = L"bUsedWithNeuralNetworks";
  DAT_14caf09ca = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf09a8 = &DAT_14ca76fe8;
  _DAT_14caf09b8 = &LAB_14682652b;
  _DAT_14caf09c0 = 0x1ffffffff;
  _DAT_14caf09c8 = 0x100;
  _DAT_14caf09b0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf09a0;
  return;
}



// FUNCTION 14578f3c4 FUN_14578f3c4 body=271 status=ok
// SIG undefined FUN_14578f3c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f3c4(void)

{
  _DAT_14caf09d0 = L"bUsesCustomizedUVs";
  DAT_14caf09fa = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf09d8 = &DAT_14ca76fe8;
  _DAT_14caf09e8 = &LAB_14682652b;
  _DAT_14caf09f0 = 0x1ffffffff;
  _DAT_14caf09f8 = 0x100;
  _DAT_14caf09e0 = DAT_14caef7d0;
  DAT_14caef7d0 = &DAT_14caf09d0;
  return;
}



// FUNCTION 14578f4d4 FUN_14578f4d4 body=276 status=ok
// SIG undefined FUN_14578f4d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f4d4(void)

{
  FUN_14578f5e8();
  _DAT_14caf0af0 = L"ShaderContentHash";
  DAT_14caf0b1a = FUN_140850cc5();
  if ((DAT_14ca9a2df & 2) == 0) {
    DAT_14ca9a2df = DAT_14ca9a2df | 3;
    _DAT_14ca9a280 = L"FSHAHash";
    _DAT_14ca9a298 = &LAB_1474386da;
    _DAT_14ca9a2a0 = &LAB_1474386e6;
    _DAT_14ca9a2a8 = &LAB_1474386fa;
    _DAT_14ca9a2b0 = &LAB_147438700;
    _DAT_14ca9a2b8 = &LAB_147438704;
    _DAT_14ca9a290 = &LAB_14743870a;
    _DAT_14ca9a2d0 = 0x1400000014;
    _DAT_14ca9a2d8 = 4;
    DAT_14ca9a2dc = 0;
  }
  _DAT_14caf0af8 = &DAT_14ca9a278;
  _DAT_14caf0b08 = &LAB_14682652b;
  _DAT_14caf0b10 = 0x100000248;
  _DAT_14caf0b18 = 0;
  _DAT_14caf0b00 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0af0;
  return;
}



// FUNCTION 14578f5e8 FUN_14578f5e8 body=276 status=ok
// SIG undefined FUN_14578f5e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f5e8(void)

{
  FUN_14578f6fc();
  _DAT_14caf0b20 = L"UserSceneTextureOutput";
  DAT_14caf0b4a = FUN_140850cc5();
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  _DAT_14caf0b28 = &DAT_14caf1310;
  _DAT_14caf0b38 = &LAB_14682652b;
  _DAT_14caf0b40 = 0x10000025c;
  _DAT_14caf0b48 = 0;
  _DAT_14caf0b30 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0b20;
  return;
}



// FUNCTION 14578f6fc FUN_14578f6fc body=276 status=ok
// SIG undefined FUN_14578f6fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f6fc(void)

{
  FUN_14578f810();
  _DAT_14caf0b50 = L"UserTextureDivisorX";
  DAT_14caf0b7a = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf0b58 = &DAT_14c951bf8;
  _DAT_14caf0b68 = &LAB_14682652b;
  _DAT_14caf0b70 = 0x100000268;
  _DAT_14caf0b78 = 0;
  _DAT_14caf0b60 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0b50;
  return;
}



// FUNCTION 14578f810 FUN_14578f810 body=276 status=ok
// SIG undefined FUN_14578f810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f810(void)

{
  FUN_14578f924();
  _DAT_14caf0b80 = L"UserTextureDivisorY";
  DAT_14caf0baa = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf0b88 = &DAT_14c951bf8;
  _DAT_14caf0b98 = &LAB_14682652b;
  _DAT_14caf0ba0 = 0x10000026c;
  _DAT_14caf0ba8 = 0;
  _DAT_14caf0b90 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0b80;
  return;
}



// FUNCTION 14578f924 FUN_14578f924 body=271 status=ok
// SIG undefined FUN_14578f924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578f924(void)

{
  _DAT_14caf0bb0 = L"ResolutionRelativeToInput";
  DAT_14caf0bda = FUN_140850cc5();
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  _DAT_14caf0bb8 = &DAT_14caf1310;
  _DAT_14caf0bc8 = &LAB_14682652b;
  _DAT_14caf0bd0 = &DAT_100000270;
  _DAT_14caf0bd8 = 0;
  _DAT_14caf0bc0 = DAT_14caef920;
  DAT_14caef920 = &DAT_14caf0bb0;
  return;
}



// FUNCTION 14578fa34 FUN_14578fa34 body=276 status=ok
// SIG undefined FUN_14578fa34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578fa34(void)

{
  FUN_14578fb48();
  _DAT_14cb12438 = L"SubstrateMaterialType";
  DAT_14cb12462 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14cb12440 = &DAT_14ca76fe8;
  _DAT_14cb12450 = &LAB_14682652b;
  _DAT_14cb12458 = 0x100000000;
  _DAT_14cb12460 = 0;
  _DAT_14cb12448 = DAT_14cb122f8;
  DAT_14cb122f8 = &DAT_14cb12438;
  return;
}



// FUNCTION 14578fb48 FUN_14578fb48 body=268 status=ok
// SIG undefined FUN_14578fb48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578fb48(void)

{
  FUN_14578fc54();
  _DAT_14cb12468 = L"SubstrateClosureCount";
  DAT_14cb12492 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14cb12470 = &DAT_14ca76fe8;
  _DAT_14cb12480 = &LAB_14682652b;
  _DAT_14cb12488 = &DAT_100000001;
  _DAT_14cb12490 = 0;
  _DAT_14cb12478 = DAT_14cb122f8;
  DAT_14cb122f8 = &DAT_14cb12468;
  return;
}



// FUNCTION 14578fc54 FUN_14578fc54 body=271 status=ok
// SIG undefined FUN_14578fc54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578fc54(void)

{
  _DAT_14cb12498 = L"SubstrateUintPerPixel";
  DAT_14cb124c2 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14cb124a0 = &DAT_14ca76fe8;
  _DAT_14cb124b0 = &LAB_14682652b;
  _DAT_14cb124b8 = &DAT_100000002;
  _DAT_14cb124c0 = 0;
  _DAT_14cb124a8 = DAT_14cb122f8;
  DAT_14cb122f8 = &DAT_14cb12498;
  return;
}



// FUNCTION 14578fd64 FUN_14578fd64 body=372 status=ok
// SIG undefined FUN_14578fd64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578fd64(void)

{
  _DAT_14caf0240 = L"UniformBufferLayoutInitializer";
  DAT_14caf026a = FUN_140850cc5();
  _DAT_14caf0248 = FUN_14578fed8();
  _DAT_14caf0258 = &LAB_14682652b;
  _DAT_14caf0260 = 0x100000138;
  _DAT_14caf0268 = 0;
  _DAT_14caf0250 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0240;
  _DAT_14caf0210 = L"ParameterCollections";
  DAT_14caf023a = FUN_140850cc5();
  if ((DAT_14caf02d7 & 2) == 0) {
    DAT_14caf02d7 = DAT_14caf02d7 | 3;
    _DAT_14caf0278 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf0290 = &LAB_147bc258a;
    _DAT_14caf0298 = FUN_147bc2598;
    _DAT_14caf02a0 = &LAB_147bc25b8;
    _DAT_14caf02a8 = &LAB_147bc25c6;
    _DAT_14caf02b0 = &LAB_147bc25d4;
    _DAT_14caf0288 = FUN_147bc25e0;
    _DAT_14caf02c8 = 0x1000000010;
    _DAT_14caf02d0 = 8;
    DAT_14caf02d4 = 0;
  }
  _DAT_14caf0218 = &DAT_14caf0270;
  _DAT_14caf0228 = &LAB_14682652b;
  _DAT_14caf0230 = 0x100000128;
  _DAT_14caf0238 = 0;
  _DAT_14caf0220 = DAT_14caef760;
  DAT_14caef760 = &DAT_14caf0210;
  return;
}



// FUNCTION 14578fed8 FUN_14578fed8 body=206 status=ok
// SIG undefined FUN_14578fed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14578fed8(void)

{
  if ((DAT_14ca83977 & 2) == 0) {
    DAT_14ca83977 = DAT_14ca83977 | 2;
    _DAT_14ca83918 = L"FRHIUniformBufferLayoutInitializer";
    _DAT_14ca83930 = FUN_146826540;
    _DAT_14ca83938 = FUN_146825d77;
    _DAT_14ca83940 = FUN_146825fd6;
    _DAT_14ca83948 = FUN_1407e02ea;
    _DAT_14ca83950 = FUN_146826273;
    _DAT_14ca83928 = FUN_147412158;
    _DAT_14ca83968 = 0xffffffff00000080;
    _DAT_14ca83970 = 8;
    DAT_14ca83974 = 0;
    _DAT_14ca83958 = &LAB_14741219a;
    FUN_14578ffa6();
    FUN_1407e00cc(&DAT_14ca83910);
  }
  return &DAT_14ca83910;
}



// FUNCTION 14578ffa6 FUN_14578ffa6 body=121 status=ok
// SIG undefined FUN_14578ffa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14578ffa6(void)

{
  FUN_1457900f0();
  _DAT_14ca84638 = L"Name";
  DAT_14ca84662 = FUN_140850cc5();
  _DAT_14ca84640 = FUN_145790020();
  _DAT_14ca84650 = &LAB_14682652b;
  _DAT_14ca84658 = 0x100000000;
  _DAT_14ca84660 = 0;
  _DAT_14ca84648 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84638;
  return;
}



// FUNCTION 145790020 FUN_145790020 body=207 status=ok
// SIG undefined FUN_145790020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145790020(void)

{
  if ((DAT_14c874e3f & 2) == 0) {
    DAT_14c874e3f = DAT_14c874e3f | 2;
    _DAT_14c874de0 = L"FMemoryImageString";
    _DAT_14c874df8 = FUN_146826540;
    _DAT_14c874e00 = FUN_146825d77;
    _DAT_14c874e08 = FUN_146825fd6;
    _DAT_14c874e10 = FUN_1407e02ea;
    _DAT_14c874e18 = FUN_146826273;
    _DAT_14c874df0 = FUN_146825d52;
    _DAT_14c874e30 = 0xffffffff00000010;
    _DAT_14c874e38 = 8;
    DAT_14c874e3c = 0;
    _DAT_14c874e20 = &LAB_1468263b8;
    FUN_145790dda();
    FUN_1407e00cc(&DAT_14c874dd8);
  }
  return &DAT_14c874dd8;
}



// FUNCTION 1457900f0 FUN_1457900f0 body=276 status=ok
// SIG undefined FUN_1457900f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457900f0(void)

{
  FUN_145790204();
  _DAT_14ca84668 = L"Resources";
  DAT_14ca84692 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca84670 = &DAT_14ca84978;
  _DAT_14ca84680 = &LAB_14682652b;
  _DAT_14ca84688 = &DAT_100000010;
  _DAT_14ca84690 = 0;
  _DAT_14ca84678 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84668;
  return;
}



// FUNCTION 145790204 FUN_145790204 body=276 status=ok
// SIG undefined FUN_145790204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790204(void)

{
  FUN_145790318();
  _DAT_14ca84698 = L"GraphResources";
  DAT_14ca846c2 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca846a0 = &DAT_14ca84978;
  _DAT_14ca846b0 = &LAB_14682652b;
  _DAT_14ca846b8 = &DAT_100000020;
  _DAT_14ca846c0 = 0;
  _DAT_14ca846a8 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84698;
  return;
}



// FUNCTION 145790318 FUN_145790318 body=276 status=ok
// SIG undefined FUN_145790318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790318(void)

{
  FUN_14579042c();
  _DAT_14ca846c8 = L"GraphTextures";
  DAT_14ca846f2 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca846d0 = &DAT_14ca84978;
  _DAT_14ca846e0 = &LAB_14682652b;
  _DAT_14ca846e8 = &DAT_100000030;
  _DAT_14ca846f0 = 0;
  _DAT_14ca846d8 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca846c8;
  return;
}



// FUNCTION 14579042c FUN_14579042c body=276 status=ok
// SIG undefined FUN_14579042c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14579042c(void)

{
  FUN_145790540();
  _DAT_14ca846f8 = L"GraphBuffers";
  DAT_14ca84722 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca84700 = &DAT_14ca84978;
  _DAT_14ca84710 = &LAB_14682652b;
  _DAT_14ca84718 = 0x100000040;
  _DAT_14ca84720 = 0;
  _DAT_14ca84708 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca846f8;
  return;
}



// FUNCTION 145790540 FUN_145790540 body=276 status=ok
// SIG undefined FUN_145790540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790540(void)

{
  FUN_145790654();
  _DAT_14ca84728 = L"GraphUniformBuffers";
  DAT_14ca84752 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca84730 = &DAT_14ca84978;
  _DAT_14ca84740 = &LAB_14682652b;
  _DAT_14ca84748 = 0x100000050;
  _DAT_14ca84750 = 0;
  _DAT_14ca84738 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84728;
  return;
}



// FUNCTION 145790654 FUN_145790654 body=275 status=ok
// SIG undefined FUN_145790654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790654(void)

{
  FUN_145790768();
  _DAT_14ca84758 = L"UniformBuffers";
  DAT_14ca84782 = FUN_140850cc5();
  if ((DAT_14ca849df & 2) == 0) {
    DAT_14ca849df = DAT_14ca849df | 3;
    _DAT_14ca84980 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca84998 = &LAB_147413eec;
    _DAT_14ca849a0 = FUN_147413efa;
    _DAT_14ca849a8 = &LAB_147413f1a;
    _DAT_14ca849b0 = &LAB_147413f28;
    _DAT_14ca849b8 = FUN_147413f36;
    _DAT_14ca84990 = FUN_147413f80;
    _DAT_14ca849d0 = 0x1000000010;
    _DAT_14ca849d8 = 8;
    DAT_14ca849dc = 0;
  }
  _DAT_14ca84760 = &DAT_14ca84978;
  _DAT_14ca84770 = &LAB_14682652b;
  _DAT_14ca84778 = &DAT_100000060;
  _DAT_14ca84780 = 0;
  _DAT_14ca84768 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84758;
  return;
}



// FUNCTION 145790768 FUN_145790768 body=276 status=ok
// SIG undefined FUN_145790768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790768(void)

{
  FUN_14579087c();
  _DAT_14ca84788 = &DAT_149e385f8;
  DAT_14ca847b2 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14ca84790 = &DAT_14c87e638;
  _DAT_14ca847a0 = &LAB_14682652b;
  _DAT_14ca847a8 = 0x100000070;
  _DAT_14ca847b0 = 0;
  _DAT_14ca84798 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84788;
  return;
}



// FUNCTION 14579087c FUN_14579087c body=276 status=ok
// SIG undefined FUN_14579087c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14579087c(void)

{
  FUN_145790990();
  _DAT_14ca847b8 = L"ConstantBufferSize";
  DAT_14ca847e2 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14ca847c0 = &DAT_14c87e638;
  _DAT_14ca847d0 = &LAB_14682652b;
  _DAT_14ca847d8 = 0x100000074;
  _DAT_14ca847e0 = 0;
  _DAT_14ca847c8 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca847b8;
  return;
}



// FUNCTION 145790990 FUN_145790990 body=276 status=ok
// SIG undefined FUN_145790990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790990(void)

{
  FUN_145790aa4();
  _DAT_14ca847e8 = L"RenderTargetsOffset";
  DAT_14ca84812 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca847f0 = &DAT_14ca84cb0;
  _DAT_14ca84800 = &LAB_14682652b;
  _DAT_14ca84808 = 0x100000078;
  _DAT_14ca84810 = 0;
  _DAT_14ca847f8 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca847e8;
  return;
}



// FUNCTION 145790aa4 FUN_145790aa4 body=276 status=ok
// SIG undefined FUN_145790aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790aa4(void)

{
  FUN_145790bb8();
  _DAT_14ca84818 = L"StaticSlot";
  DAT_14ca84842 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14ca84820 = &DAT_14ca76fe8;
  _DAT_14ca84830 = &LAB_14682652b;
  _DAT_14ca84838 = 0x10000007a;
  _DAT_14ca84840 = 0;
  _DAT_14ca84828 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84818;
  return;
}



// FUNCTION 145790bb8 FUN_145790bb8 body=275 status=ok
// SIG undefined FUN_145790bb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790bb8(void)

{
  FUN_145790ccc();
  _DAT_14ca84848 = L"BindingFlags";
  DAT_14ca84872 = FUN_140850cc5();
  if ((DAT_14ca84977 & 2) == 0) {
    DAT_14ca84977 = DAT_14ca84977 | 3;
    _DAT_14ca84918 = L"EUniformBufferBindingFlags";
    _DAT_14ca84930 = &LAB_147413e92;
    _DAT_14ca84938 = &LAB_147413e9e;
    _DAT_14ca84940 = &LAB_147413eaa;
    _DAT_14ca84948 = &LAB_147413eb0;
    _DAT_14ca84950 = &LAB_147413eb4;
    _DAT_14ca84928 = &LAB_147413eba;
    _DAT_14ca84968 = &DAT_100000001;
    _DAT_14ca84970 = 1;
    DAT_14ca84974 = 0;
  }
  _DAT_14ca84850 = &DAT_14ca84910;
  _DAT_14ca84860 = &LAB_14682652b;
  _DAT_14ca84868 = 0x10000007b;
  _DAT_14ca84870 = 0;
  _DAT_14ca84858 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84848;
  return;
}



// FUNCTION 145790ccc FUN_145790ccc body=270 status=ok
// SIG undefined FUN_145790ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790ccc(void)

{
  _DAT_14ca84878 = L"Flags";
  DAT_14ca848a2 = FUN_140850cc5();
  if ((DAT_14ca8490f & 2) == 0) {
    DAT_14ca8490f = DAT_14ca8490f | 3;
    _DAT_14ca848b0 = L"ERHIUniformBufferFlags";
    _DAT_14ca848c8 = &LAB_147413e66;
    _DAT_14ca848d0 = &LAB_147413e72;
    _DAT_14ca848d8 = &LAB_147413e7e;
    _DAT_14ca848e0 = &LAB_147413e84;
    _DAT_14ca848e8 = &LAB_147413e88;
    _DAT_14ca848c0 = &LAB_147413e8e;
    _DAT_14ca84900 = &DAT_100000001;
    _DAT_14ca84908 = 1;
    DAT_14ca8490c = 0;
  }
  _DAT_14ca84880 = &DAT_14ca848a8;
  _DAT_14ca84890 = &LAB_14682652b;
  _DAT_14ca84898 = 0x10000007c;
  _DAT_14ca848a0 = 0;
  _DAT_14ca84888 = DAT_14ca83920;
  DAT_14ca83920 = &DAT_14ca84878;
  return;
}



// FUNCTION 145790dda FUN_145790dda body=375 status=ok
// SIG undefined FUN_145790dda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145790dda(void)

{
  wchar_t *pwVar1;
  short sVar2;
  short *psVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  
  _DAT_14c874e18 = &LAB_1468289ae;
  psVar3 = &DAT_149e383f0;
  _DAT_14c87e498 = &DAT_149e383f0;
  DAT_14c87e4c2 = '\0';
  while (sVar2 = *psVar3, sVar2 != 0) {
    psVar3 = psVar3 + 1;
    if (sVar2 == 0x5f) {
      if (*psVar3 == 0x44) {
        wVar6 = L'D';
        pwVar5 = L"DEPRECATED";
        do {
          if (wVar6 == L'\0') goto LAB_145790e44;
          pwVar4 = pwVar5 + 1;
          wVar6 = psVar3[1];
          psVar3 = psVar3 + 1;
          pwVar1 = pwVar5 + 1;
          pwVar5 = pwVar4;
        } while (wVar6 == *pwVar1);
      }
      else {
        pwVar4 = L"DEPRECATED";
      }
      DAT_14c87e4c2 = DAT_14c87e4c2 + (char)((int)pwVar4 + 0xb61c7ce8U >> 1);
    }
    DAT_14c87e4c2 = DAT_14c87e4c2 + '\x01';
  }
LAB_145790e44:
  if ((DAT_14c87e52f & 2) == 0) {
    DAT_14c87e52f = DAT_14c87e52f | 3;
    _DAT_14c87e4d0 = L"(TArray<T, AllocatorType>)";
    _DAT_14c87e4e8 = &LAB_1468289b6;
    _DAT_14c87e4f0 = FUN_1468289c4;
    _DAT_14c87e4f8 = FUN_1468289e4;
    _DAT_14c87e500 = &LAB_146828a5c;
    _DAT_14c87e508 = &LAB_146828a6a;
    _DAT_14c87e4e0 = FUN_146828a76;
    _DAT_14c87e520 = 0x1000000010;
    _DAT_14c87e528 = 8;
    DAT_14c87e52c = 0;
  }
  _DAT_14c87e4a0 = &DAT_14c87e4c8;
  _DAT_14c87e4b0 = &LAB_14682652b;
  _DAT_14c87e4b8 = 0x100000000;
  _DAT_14c87e4c0 = 0;
  _DAT_14c87e4a8 = DAT_14c874de8;
  DAT_14c874de8 = &DAT_14c87e498;
  return;
}



// FUNCTION 145790f52 FUN_145790f52 body=504 status=ok
// SIG undefined FUN_145790f52(void)

undefined8 FUN_145790f52(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_1;
  local_28 = param_2;
  switch(*(undefined1 *)((longlong)param_1 + 0x14)) {
  case 1:
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = FUN_144a3a302();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar1 + 0x620))(plVar1,&local_40);
        uVar4 = FUN_140ca12d6(&local_30);
        lVar2 = param_1[1];
        if ((lVar2 != 0) && ((longlong)local_38 != 0)) {
          lVar3 = 0;
          do {
            if (*(longlong *)(local_40 + lVar3) == lVar2) {
              (**(code **)(*plVar1 + 0x640))(plVar1,lVar2,uVar4);
              goto LAB_14579102a;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)local_38 * 8 != lVar3);
        }
        (**(code **)(*plVar1 + 0x638))(plVar1,(int)param_1[2],uVar4);
LAB_14579102a:
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        goto LAB_145791039;
      }
    }
    break;
  case 2:
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar3 = FUN_14081cebe();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = FUN_140ca12d6(&local_30);
        FUN_14054853a(lVar2,uVar4);
        goto LAB_145791039;
      }
    }
    break;
  case 3:
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar3 = FUN_1405fc15c();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
    break;
  case 4:
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar3 = FUN_14586b90e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = FUN_140ca12d6(&local_30);
        FUN_140fa388e(lVar2,uVar4);
        goto LAB_145791039;
      }
    }
  }
  uVar4 = 0;
LAB_145791039:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145791164 FUN_145791164 body=487 status=ok
// SIG undefined FUN_145791164(void)

longlong * FUN_145791164(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b4058d0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_143d56636;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b4058d0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_143d56636;
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
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145791352 FUN_145791352 body=132 status=ok
// SIG undefined FUN_145791352(void)

void FUN_145791352(longlong param_1,int param_2)

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



// FUNCTION 1457913e0 FUN_1457913e0 body=147 status=ok
// SIG undefined FUN_1457913e0(void)

undefined8 * FUN_1457913e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145791474(param_1,uVar1);
  *param_1 = &PTR_FUN_14ae53a30;
  param_1[5] = &PTR_FUN_14ae53fd0;
  param_1[0x2d] = &PTR_FUN_14ae54010;
  param_1[0x276] = 0;
  *(undefined4 *)(param_1 + 0x277) = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  *(undefined4 *)(param_1 + 0x27e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x13f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13fc) = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  FUN_14579168e(param_1,1);
  return param_1;
}



// FUNCTION 145791474 FUN_145791474 body=537 status=ok
// SIG undefined FUN_145791474(void)

undefined8 * FUN_145791474(undefined8 *param_1)

{
  FUN_140e2f36c();
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *param_1 = &PTR_FUN_14ae4af00;
  param_1[5] = &PTR_FUN_14ae4b4a0;
  param_1[0x2d] = &PTR_FUN_14ae4b4e0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  memset(param_1 + 99,0,0x90);
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x10 | 0x81;
  *(byte *)((longlong)param_1 + 0x3a9) = *(byte *)((longlong)param_1 + 0x3a9) & 0xf9 | 2;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x77) = 1;
  *(byte *)((longlong)param_1 + 0x3b9) = *(byte *)((longlong)param_1 + 0x3b9) & 0xf8 | 6;
  memset(param_1 + 0x79,0,0x98);
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined2 *)(param_1 + 0x93) = 0;
  FUN_144a5dc74(param_1 + 0x94);
  FUN_144a5dc74(param_1 + 0x96);
  param_1[0x98] = 0;
  FUN_140ca8d78(param_1 + 0x9a);
  FUN_140ca8d78(param_1 + 0x108);
  FUN_140ca8d78(param_1 + 0x176);
  FUN_140ca8d78(param_1 + 0x1e4);
  *(undefined8 *)((longlong)param_1 + 0x1294) = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 2;
  *(undefined8 *)((longlong)param_1 + 0x12b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x12fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1324) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x132c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x133c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x1354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134c) = 0;
  *(undefined4 *)(param_1 + 0x26b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x135c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x137c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1384) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x139c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1394) = 0;
  param_1[0x274] = 2;
  param_1[0x275] = 0;
  FUN_14579168e(param_1,1);
  return param_1;
}



// FUNCTION 14579168e FUN_14579168e body=94 status=ok
// SIG undefined FUN_14579168e(void)

void FUN_14579168e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1457916ec();
  cVar1 = FUN_144729dda(param_1 + 0x1294);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x1294);
    FUN_1476d46f4(lVar2,param_2);
    lVar2 = *(longlong *)(lVar2 + 0x5d8);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x33b) = *(byte *)(lVar2 + 0x33b) & 0xfe | (byte)param_2;
    }
  }
  return;
}



// FUNCTION 1457916ec FUN_1457916ec body=23 status=ok
// SIG undefined FUN_1457916ec(void)

void FUN_1457916ec(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) & 0xfe | param_2;
  FUN_145791704(param_1,2);
  return;
}



// FUNCTION 145791704 FUN_145791704 body=144 status=ok
// SIG undefined FUN_145791704(void)

void FUN_145791704(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1417aaa18(param_1);
    FUN_140163244(local_30,param_2);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457917a6 FUN_1457917a6 body=174 status=ok
// SIG undefined FUN_1457917a6(void)

void FUN_1457917a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  cVar4 = FUN_1402799c0();
  if (((cVar4 != '\0') && (*(int *)(param_1 + 0x120) == 2)) &&
     (plVar5 = (longlong *)FUN_140caa0c0(param_1), plVar5 != (longlong *)0x0)) {
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_140caa3de(uVar6,param_1 + 0x1d0);
  }
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x148);
    plVar5 = plVar7 + *(int *)(param_1 + 0x150);
    do {
      lVar2 = *plVar7;
      if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x38);
        lVar8 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x2c8))();
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar8);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar5);
  }
  return;
}



// FUNCTION 145791854 FUN_145791854 body=123 status=ok
// SIG undefined FUN_145791854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791854(void)

{
  _DAT_14cb35810 = L"BASE";
  DAT_14cb3583a = 4;
  _DAT_14cb35818 = FUN_1457fb4a4();
  _DAT_14cb35820 = DAT_14cb32d30;
  _DAT_14cb35828 = &LAB_14682652b;
  DAT_14cb32d30 = &DAT_14cb35810;
  DAT_14cb32d85 = DAT_14cb32d85 + '\x01';
  _DAT_14cb35830 = 0x100000000;
  if (*(char *)(_DAT_14cb35818 + 100) != '\0') {
    DAT_14cb32d86 = DAT_14cb32d86 + '\x01';
  }
  return;
}



// FUNCTION 1457918d0 FUN_1457918d0 body=205 status=ok
// SIG undefined FUN_1457918d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457918d0(void)

{
  if ((DAT_14cb32df7 & 2) == 0) {
    DAT_14cb32df7 = DAT_14cb32df7 | 2;
    _DAT_14cb32d98 = L"FNiagaraShaderMapId";
    _DAT_14cb32db0 = FUN_146826540;
    _DAT_14cb32db8 = FUN_146825d77;
    _DAT_14cb32dc0 = FUN_146825fd6;
    _DAT_14cb32dc8 = FUN_1407e02ea;
    _DAT_14cb32dd0 = FUN_146826273;
    _DAT_14cb32da8 = FUN_14804e970;
    _DAT_14cb32de8 = 0xffffffff00000090;
    _DAT_14cb32df0 = 8;
    DAT_14cb32df4 = 0;
    _DAT_14cb32dd8 = &LAB_14804e9d2;
    FUN_14579199e();
    FUN_1407e00cc(&DAT_14cb32d90);
    return;
  }
  return;
}



// FUNCTION 14579199e FUN_14579199e body=276 status=ok
// SIG undefined FUN_14579199e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14579199e(void)

{
  FUN_145791ab2();
  _DAT_14cb342e0 = L"CompilerVersionID";
  DAT_14cb3430a = FUN_140850cc5();
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  _DAT_14cb342e8 = &DAT_14caf1378;
  _DAT_14cb342f8 = &LAB_14682652b;
  _DAT_14cb34300 = 0x100000000;
  _DAT_14cb34308 = 0;
  _DAT_14cb342f0 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb342e0;
  return;
}



// FUNCTION 145791ab2 FUN_145791ab2 body=276 status=ok
// SIG undefined FUN_145791ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791ab2(void)

{
  FUN_145791bc6();
  _DAT_14cb34310 = L"FeatureLevel";
  DAT_14cb3433a = FUN_140850cc5();
  if ((DAT_14cb3465f & 2) == 0) {
    DAT_14cb3465f = DAT_14cb3465f | 3;
    _DAT_14cb34600 = L"ERHIFeatureLevel::Type";
    _DAT_14cb34618 = &LAB_14805533e;
    _DAT_14cb34620 = &LAB_14805534a;
    _DAT_14cb34628 = &LAB_148055356;
    _DAT_14cb34630 = &LAB_14805535c;
    _DAT_14cb34638 = &LAB_148055360;
    _DAT_14cb34610 = &LAB_148055366;
    _DAT_14cb34650 = 0x400000004;
    _DAT_14cb34658 = 4;
    DAT_14cb3465c = 0;
  }
  _DAT_14cb34318 = &DAT_14cb345f8;
  _DAT_14cb34328 = &LAB_14682652b;
  _DAT_14cb34330 = &DAT_100000010;
  _DAT_14cb34338 = 0;
  _DAT_14cb34320 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34310;
  return;
}



// FUNCTION 145791bc6 FUN_145791bc6 body=275 status=ok
// SIG undefined FUN_145791bc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791bc6(void)

{
  FUN_145791cda();
  _DAT_14cb34340 = L"BaseScriptID_DEPRECATED";
  DAT_14cb3436a = FUN_140850cc5();
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  _DAT_14cb34348 = &DAT_14caf1378;
  _DAT_14cb34358 = &LAB_14682652b;
  _DAT_14cb34360 = &DAT_100000014;
  _DAT_14cb34368 = 0;
  _DAT_14cb34350 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34340;
  return;
}



// FUNCTION 145791cda FUN_145791cda body=276 status=ok
// SIG undefined FUN_145791cda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791cda(void)

{
  FUN_145791dee();
  _DAT_14cb34370 = L"AdditionalDefines";
  DAT_14cb3439a = FUN_140850cc5();
  if ((DAT_14cb345f7 & 2) == 0) {
    DAT_14cb345f7 = DAT_14cb345f7 | 3;
    _DAT_14cb34598 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb345b0 = &LAB_148054f90;
    _DAT_14cb345b8 = FUN_148054f9e;
    _DAT_14cb345c0 = &LAB_148054fbe;
    _DAT_14cb345c8 = &LAB_148054fcc;
    _DAT_14cb345d0 = FUN_148054fda;
    _DAT_14cb345a8 = FUN_148055020;
    _DAT_14cb345e8 = 0x1000000010;
    _DAT_14cb345f0 = 8;
    DAT_14cb345f4 = 0;
  }
  _DAT_14cb34378 = &DAT_14cb34590;
  _DAT_14cb34388 = &LAB_14682652b;
  _DAT_14cb34390 = &DAT_100000028;
  _DAT_14cb34398 = 0;
  _DAT_14cb34380 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34370;
  return;
}



// FUNCTION 145791dee FUN_145791dee body=275 status=ok
// SIG undefined FUN_145791dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791dee(void)

{
  FUN_145791f02();
  _DAT_14cb343a0 = L"AdditionalVariables";
  DAT_14cb343ca = FUN_140850cc5();
  if ((DAT_14cb345f7 & 2) == 0) {
    DAT_14cb345f7 = DAT_14cb345f7 | 3;
    _DAT_14cb34598 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb345b0 = &LAB_148054f90;
    _DAT_14cb345b8 = FUN_148054f9e;
    _DAT_14cb345c0 = &LAB_148054fbe;
    _DAT_14cb345c8 = &LAB_148054fcc;
    _DAT_14cb345d0 = FUN_148054fda;
    _DAT_14cb345a8 = FUN_148055020;
    _DAT_14cb345e8 = 0x1000000010;
    _DAT_14cb345f0 = 8;
    DAT_14cb345f4 = 0;
  }
  _DAT_14cb343a8 = &DAT_14cb34590;
  _DAT_14cb343b8 = &LAB_14682652b;
  _DAT_14cb343c0 = &DAT_100000038;
  _DAT_14cb343c8 = 0;
  _DAT_14cb343b0 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb343a0;
  return;
}



// FUNCTION 145791f02 FUN_145791f02 body=275 status=ok
// SIG undefined FUN_145791f02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145791f02(void)

{
  FUN_145792016();
  _DAT_14cb343d0 = L"BaseCompileHash";
  DAT_14cb343fa = FUN_140850cc5();
  if ((DAT_14ca9a2df & 2) == 0) {
    DAT_14ca9a2df = DAT_14ca9a2df | 3;
    _DAT_14ca9a280 = L"FSHAHash";
    _DAT_14ca9a298 = &LAB_1474386da;
    _DAT_14ca9a2a0 = &LAB_1474386e6;
    _DAT_14ca9a2a8 = &LAB_1474386fa;
    _DAT_14ca9a2b0 = &LAB_147438700;
    _DAT_14ca9a2b8 = &LAB_147438704;
    _DAT_14ca9a290 = &LAB_14743870a;
    _DAT_14ca9a2d0 = 0x1400000014;
    _DAT_14ca9a2d8 = 4;
    DAT_14ca9a2dc = 0;
  }
  _DAT_14cb343d8 = &DAT_14ca9a278;
  _DAT_14cb343e8 = &LAB_14682652b;
  _DAT_14cb343f0 = 0x100000048;
  _DAT_14cb343f8 = 0;
  _DAT_14cb343e0 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb343d0;
  return;
}



// FUNCTION 145792016 FUN_145792016 body=275 status=ok
// SIG undefined FUN_145792016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145792016(void)

{
  FUN_14579212a();
  _DAT_14cb34400 = L"ReferencedCompileHashes";
  DAT_14cb3442a = FUN_140850cc5();
  if ((DAT_14cb3458f & 2) == 0) {
    DAT_14cb3458f = DAT_14cb3458f | 3;
    _DAT_14cb34530 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb34548 = &LAB_148054a7c;
    _DAT_14cb34550 = FUN_148054a8a;
    _DAT_14cb34558 = &LAB_148054aaa;
    _DAT_14cb34560 = &LAB_148054ab8;
    _DAT_14cb34568 = &LAB_148054ac6;
    _DAT_14cb34540 = FUN_148054ad2;
    _DAT_14cb34580 = 0x1000000010;
    _DAT_14cb34588 = 8;
    DAT_14cb3458c = 0;
  }
  _DAT_14cb34408 = &DAT_14cb34528;
  _DAT_14cb34418 = &LAB_14682652b;
  _DAT_14cb34420 = &DAT_100000060;
  _DAT_14cb34428 = 0;
  _DAT_14cb34410 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34400;
  return;
}



// FUNCTION 14579212a FUN_14579212a body=121 status=ok
// SIG undefined FUN_14579212a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14579212a(void)

{
  FUN_145792272();
  _DAT_14cb34430 = L"LayoutParams";
  DAT_14cb3445a = FUN_140850cc5();
  _DAT_14cb34438 = FUN_1457921a4();
  _DAT_14cb34448 = &LAB_14682652b;
  _DAT_14cb34450 = 0x100000070;
  _DAT_14cb34458 = 0;
  _DAT_14cb34440 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34430;
  return;
}



// FUNCTION 1457921a4 FUN_1457921a4 body=206 status=ok
// SIG undefined FUN_1457921a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1457921a4(void)

{
  if ((DAT_14c874eaf & 2) == 0) {
    DAT_14c874eaf = DAT_14c874eaf | 2;
    _DAT_14c874e50 = L"FPlatformTypeLayoutParameters";
    _DAT_14c874e68 = FUN_146826540;
    _DAT_14c874e70 = FUN_146825d77;
    _DAT_14c874e78 = FUN_146825fd6;
    _DAT_14c874e80 = FUN_1407e02ea;
    _DAT_14c874e88 = FUN_146826273;
    _DAT_14c874e60 = &LAB_1468263bc;
    _DAT_14c874ea0 = 0xffffffff00000008;
    _DAT_14c874ea8 = 4;
    DAT_14c874eac = 0;
    _DAT_14c874e90 = &LAB_1468263ca;
    FUN_140caa8b8();
    FUN_1407e00cc(&DAT_14c874e48);
  }
  return &DAT_14c874e48;
}



// FUNCTION 145792272 FUN_145792272 body=276 status=ok
// SIG undefined FUN_145792272(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145792272(void)

{
  FUN_145792386();
  _DAT_14cb34460 = L"ShaderTypeDependencies";
  DAT_14cb3448a = FUN_140850cc5();
  if ((DAT_14cb34527 & 2) == 0) {
    DAT_14cb34527 = DAT_14cb34527 | 3;
    _DAT_14cb344c8 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb344e0 = &LAB_14805472a;
    _DAT_14cb344e8 = FUN_148054738;
    _DAT_14cb344f0 = &LAB_148054758;
    _DAT_14cb344f8 = &LAB_148054766;
    _DAT_14cb34500 = FUN_148054774;
    _DAT_14cb344d8 = FUN_1480547ba;
    _DAT_14cb34518 = 0x1000000010;
    _DAT_14cb34520 = 8;
    DAT_14cb34524 = 0;
  }
  _DAT_14cb34468 = &DAT_14cb344c0;
  _DAT_14cb34478 = &LAB_14682652b;
  _DAT_14cb34480 = 0x100000078;
  _DAT_14cb34488 = 0;
  _DAT_14cb34470 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34460;
  return;
}



// FUNCTION 145792386 FUN_145792386 body=271 status=ok
// SIG undefined FUN_145792386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145792386(void)

{
  _DAT_14cb34490 = L"bUsesRapidIterationParams";
  DAT_14cb344ba = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb34498 = &DAT_14c9cfcf0;
  _DAT_14cb344a8 = &LAB_14682652b;
  _DAT_14cb344b0 = 0x100000088;
  _DAT_14cb344b8 = 0;
  _DAT_14cb344a0 = DAT_14cb32da0;
  DAT_14cb32da0 = &DAT_14cb34490;
  return;
}



// FUNCTION 145792496 FUN_145792496 body=359 status=ok
// SIG undefined FUN_145792496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145792496(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  
  pwVar2 = L"Flags";
  _DAT_14c87e5c8 = L"Flags";
  DAT_14c87e5f2 = '\0';
  while (wVar5 = *pwVar2, wVar5 != L'\0') {
    pwVar2 = pwVar2 + 1;
    if (wVar5 == L'_') {
      if (*pwVar2 == L'D') {
        wVar5 = L'D';
        pwVar4 = L"DEPRECATED";
        do {
          if (wVar5 == L'\0') goto LAB_1457924ef;
          pwVar3 = pwVar4 + 1;
          wVar5 = pwVar2[1];
          pwVar2 = pwVar2 + 1;
          pwVar1 = pwVar4 + 1;
          pwVar4 = pwVar3;
        } while (wVar5 == *pwVar1);
      }
      else {
        pwVar3 = L"DEPRECATED";
      }
      DAT_14c87e5f2 = DAT_14c87e5f2 + (char)((int)pwVar3 + 0xb61c7ce8U >> 1);
    }
    DAT_14c87e5f2 = DAT_14c87e5f2 + '\x01';
  }
LAB_1457924ef:
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14c87e5d0 = &DAT_14c87e638;
  _DAT_14c87e5e0 = &LAB_14682652b;
  _DAT_14c87e5e8 = &DAT_100000004;
  _DAT_14c87e5f0 = 0;
  _DAT_14c87e5d8 = DAT_14c874e58;
  DAT_14c874e58 = &DAT_14c87e5c8;
  return;
}



// FUNCTION 1457925fe FUN_1457925fe body=923 status=ok
// SIG undefined FUN_1457925fe(void)

void FUN_1457925fe(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 0x7012;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_140be4ae0();
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
  iVar5 = local_7c;
  local_80 = 0;
  FUN_144a7452c();
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
  iVar3 = local_84;
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  uVar4 = local_80;
  uVar2 = local_88;
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_78;
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_70;
  local_b8 = local_60;
  local_b0 = local_58;
  local_a8 = 0;
  local_d0 = iVar3 != 0;
  local_c0 = uVar1;
  local_c8 = uVar2;
  local_d8 = uVar4;
  FUN_14579299a(local_48,&local_b8,&local_a0,iVar5 != 0);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579299a FUN_14579299a body=158 status=ok
// SIG undefined FUN_14579299a(void)

void FUN_14579299a(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3[1];
  }
  local_30 = *param_2;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_20 = 0;
  local_40 = param_8;
  local_48 = param_7;
  local_50 = param_6;
  local_58 = param_4;
  FUN_140cab292(param_7,&local_30,param_5,lVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145792a3a FUN_145792a3a body=54 status=ok
// SIG undefined FUN_145792a3a(void)

void FUN_145792a3a(void)

{
  FUN_140cabe9a();
  if (DAT_14c966dc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c966da0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145792a70 FUN_145792a70 body=159 status=ok
// SIG undefined FUN_145792a70(void)

uint FUN_145792a70(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x718) == '\x01') {
    uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x18);
    uVar3 = (uint)(uVar1 >> 0x20);
    uVar3 = uVar3 >> 0x15 & 8 |
            (uint)(uVar1 >> 0xd) & 0x80 | uVar3 >> 9 & 0x60 | (uint)(uVar1 >> 0x11) & 0x10;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(param_1 + 0x721) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x710);
    lVar4 = *(longlong *)(param_2 + 8);
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) {
        return uVar3;
      }
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return uVar3;
    }
  }
  return uVar3 | 1;
}



// FUNCTION 145792b10 FUN_145792b10 body=109 status=ok
// SIG undefined FUN_145792b10(void)

void FUN_145792b10(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 145792b8a FUN_145792b8a body=194 status=ok
// SIG undefined FUN_145792b8a(void)

void FUN_145792b8a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140cb21a8(&local_60);
  FUN_140cb1648(param_1 + 8,&local_60);
  FUN_140cb1696(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb1980(&local_60,param_2);
  FUN_140cb1718(param_1 + 0x18,&local_60);
  FUN_14154e5cc(&local_60);
  uVar1 = FUN_145879c38(param_1);
  lVar2 = FUN_140cb1480(uVar1);
  if (lVar2 != 0) {
    FUN_145792c4e(lVar2,*(undefined4 *)(param_1 + 0x58),param_1 + 8,param_1 + 0x18);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145792c4e FUN_145792c4e body=167 status=ok
// SIG undefined FUN_145792c4e(void)

void FUN_145792c4e(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar1 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x70;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x70) == param_2) {
          if (lVar1 == 0) {
            return;
          }
          lVar3 = lVar1 + 8;
          if (lVar3 == 0) {
            return;
          }
          FUN_140b702ac(lVar3,param_3);
          FUN_1410d422e(lVar1 + 0x18,param_4);
          FUN_145792cf6(param_1,lVar3);
          FUN_140cb1814(param_1,lVar3);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x68);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145792cf6 FUN_145792cf6 body=1251 status=ok
// SIG undefined FUN_145792cf6(void)

void FUN_145792cf6(undefined8 param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  ulonglong local_e0;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  undefined4 *local_c0;
  ulonglong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar3 = (int)param_2[1];
  lVar16 = (longlong)iVar3;
  local_b8 = param_2;
  if (lVar16 != 0) {
    uVar8 = *param_2;
    bVar5 = FUN_140b7030a(param_1,*(undefined4 *)((longlong)param_2 + 0x5c),uVar8 + 0x10,uVar8);
    local_c0 = (undefined4 *)(uVar8 + 0x38);
    iVar18 = 0;
    iVar10 = 0;
    local_e0 = uVar8;
    local_a8 = param_1;
    do {
      local_e2 = bVar5 ^ 1;
      lVar9 = (longlong)iVar10;
      iVar19 = iVar10 + 1;
      if (iVar10 + 1 < iVar3) {
        iVar19 = iVar3;
      }
      local_d0 = lVar9 * 0x38;
      puVar20 = local_c0 + lVar9 * 0xe;
      iVar12 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar13 = iVar19;
        if (lVar16 <= lVar9) break;
        local_b0 = (longlong *)CONCAT44(local_b0._4_4_,iVar18);
        bVar6 = FUN_140b7030a(local_a8,*(undefined4 *)((longlong)local_b8 + 0x5c),puVar20 + 4,
                              puVar20);
        iVar12 = iVar12 + 1;
        puVar20 = puVar20 + 0xe;
        iVar13 = iVar12;
        iVar18 = (int)local_b0;
      } while ((bVar5 & 1) == bVar6);
      param_1 = local_a8;
      bVar6 = local_e2;
      iVar19 = iVar13 - iVar10;
      if ((bVar5 & 1) == 0) {
        FUN_140cb1696(local_d0 + local_e0,iVar19);
        param_1 = local_a8;
        bVar5 = local_e2;
      }
      else {
        if (iVar18 != iVar10) {
          memmove((void *)((longlong)iVar18 * 0x38 + local_e0),(void *)(local_d0 + local_e0),
                  (longlong)iVar19 * 0x38);
        }
        iVar18 = iVar18 + iVar19;
        bVar5 = bVar6;
      }
      iVar10 = iVar13;
    } while (lVar9 < lVar16);
    *(int *)(local_b8 + 1) = iVar18;
  }
  iVar3 = (int)local_b8[10];
  lVar16 = (longlong)iVar3;
  puVar14 = local_b8;
  if (lVar16 != 0) {
    plVar17 = (longlong *)local_b8[9];
    local_98 = *plVar17;
    plVar15 = (longlong *)plVar17[1];
    plStack_90 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      local_c0 = (undefined4 *)((longlong)local_b8 + 0x5c);
      uVar8 = FUN_145daf7a6(param_1,*(undefined4 *)((longlong)local_b8 + 0x5c),&local_98);
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      local_c0 = (undefined4 *)((longlong)local_b8 + 0x5c);
      uVar8 = FUN_145daf7a6(param_1,*(undefined4 *)((longlong)local_b8 + 0x5c));
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar15 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          uVar8 = uVar8 & 0xffffffff;
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
    }
    plVar15 = plVar17 + 3;
    iVar18 = 0;
    iVar10 = 0;
    do {
      local_e2 = (byte)uVar8;
      uVar8 = (ulonglong)(local_e2 ^ 1);
      lVar9 = (longlong)iVar10;
      iVar19 = iVar10 + 1;
      if (iVar10 + 1 < iVar3) {
        iVar19 = iVar3;
      }
      local_a0 = lVar9 * 0x10;
      plVar11 = plVar15 + lVar9 * 2;
      bVar5 = local_e2 & 1;
      iVar12 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar13 = iVar19;
        if (lVar16 <= lVar9) break;
        local_d0 = CONCAT44(local_d0._4_4_,iVar18);
        local_e0 = CONCAT71(local_e0._1_7_,(char)uVar8);
        local_98 = plVar11[-1];
        plVar4 = (longlong *)*plVar11;
        local_d4 = iVar12;
        local_c8 = plVar15;
        local_b0 = plVar17;
        plStack_90 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          bVar6 = FUN_145daf7a6(param_1,*local_c0,&local_98);
          iVar18 = (int)local_d0;
LAB_145793190:
          uVar8 = (ulonglong)(byte)local_e0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          bVar6 = FUN_145daf7a6(param_1,*local_c0,&local_98);
          iVar18 = (int)local_d0;
          if (plVar4 == (longlong *)0x0) goto LAB_145793190;
          LOCK();
          plVar17 = plVar4 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          uVar8 = local_e0 & 0xff;
          if ((int)*plVar17 == 0) {
            local_e1 = bVar6;
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
            uVar8 = local_e0 & 0xff;
            iVar18 = (int)local_d0;
            bVar6 = local_e1;
          }
        }
        iVar10 = iVar10 + 1;
        plVar11 = plVar11 + 2;
        plVar15 = local_c8;
        plVar17 = local_b0;
        iVar12 = local_d4;
        iVar13 = iVar10;
      } while (bVar5 == bVar6);
      iVar10 = iVar13;
      puVar14 = local_b8;
      iVar19 = iVar10 - iVar12;
      if ((local_e2 & 1) == 0) {
        local_e0 = CONCAT71(local_e0._1_7_,(char)uVar8);
        FUN_14127b1cd(local_a0 + (longlong)plVar17,iVar19);
        uVar8 = local_e0 & 0xff;
        puVar14 = local_b8;
      }
      else {
        if (iVar18 != iVar12) {
          local_e0 = CONCAT71(local_e0._1_7_,(char)uVar8);
          local_d0 = CONCAT44(local_d0._4_4_,iVar18);
          local_c8 = plVar15;
          memmove(plVar17 + (longlong)iVar18 * 2,(void *)(local_a0 + (longlong)plVar17),
                  (longlong)iVar19 << 4);
          uVar8 = local_e0 & 0xff;
          plVar15 = local_c8;
          iVar18 = (int)local_d0;
        }
        iVar18 = iVar18 + iVar19;
      }
    } while (lVar9 < lVar16);
    *(int *)(puVar14 + 10) = iVar18;
  }
  puVar1 = puVar14 + 2;
  cVar7 = FUN_140b7030a(param_1,*(undefined4 *)((longlong)puVar14 + 0x5c),puVar14 + 4,puVar1);
  if ((cVar7 == '\0') && (uVar8 = *puVar1, uVar8 != 0)) {
    local_50 = puVar14[3];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_58 = uVar8;
    cVar7 = FUN_1457931da(param_1,*(undefined4 *)((longlong)puVar14 + 0x5c),&local_58);
    if (cVar7 == '\0') {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      local_68 = 0;
      FUN_140cb1718(puVar1,&local_98);
      FUN_14154e5cc(&local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457931da FUN_1457931da body=352 status=ok
// SIG undefined FUN_1457931da(void)

ulonglong FUN_1457931da(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined1 auStack_78 [32];
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_14111b834(param_1 + 0x10,0);
  if (cVar4 == '\0') {
    uVar6 = FUN_14479d2ce(param_1 + 0x10);
    plVar7 = (longlong *)FUN_140cb3e38(uVar6,param_2);
    if (plVar7 != (longlong *)0x0) {
      pppuVar9 = &local_58;
      (**(code **)(*plVar7 + 0x350))(plVar7,pppuVar9);
      if ((&DAT_149fc1b6e)[local_40] == '\x01') {
        if (((longlong *)CONCAT44(uStack_4c,local_50) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))(), cVar4 == '\0'
           )) goto LAB_145793316;
LAB_145793273:
        uVar6 = *param_3;
        puVar8 = (undefined8 *)FUN_14127b0d4(&local_58);
        uVar5 = (**(code **)*puVar8)(puVar8,uVar6);
        pppuVar9 = (undefined ***)(ulonglong)uVar5;
        bVar3 = false;
      }
      else {
        if ((local_50 & 0xffffff) != 0) goto LAB_145793273;
LAB_145793316:
        bVar3 = true;
      }
      local_58 = &PTR_FUN_14a5af930;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_58 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
      if (!bVar3) goto LAB_1457932cc;
    }
  }
  pppuVar9 = (undefined ***)0x0;
LAB_1457932cc:
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pppuVar9 & 0xffffff01;
}



// FUNCTION 14579333c FUN_14579333c body=72 status=ok
// SIG undefined FUN_14579333c(void)

void FUN_14579333c(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_140cb5226(param_1 + 0x90);
  FUN_140cb5138(param_1 + 8);
  return;
}



// FUNCTION 145793384 FUN_145793384 body=132 status=ok
// SIG undefined FUN_145793384(void)

void FUN_145793384(longlong param_1,int param_2)

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



// FUNCTION 14579340a FUN_14579340a body=132 status=ok
// SIG undefined FUN_14579340a(void)

void FUN_14579340a(longlong param_1,int param_2)

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



// FUNCTION 145793492 FUN_145793492 body=275 status=ok
// SIG undefined FUN_145793492(void)

undefined4 * FUN_145793492(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14579362c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1457935a6(param_1,param_3,local_40,local_48);
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
      FUN_1457938da(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457935a6 FUN_1457935a6 body=132 status=ok
// SIG undefined FUN_1457935a6(void)

undefined8 FUN_1457935a6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1406a22a4();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_145793866(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1457935ca;
    }
  }
  uVar6 = 0;
LAB_1457935ca:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579362c FUN_14579362c body=231 status=ok
// SIG undefined FUN_14579362c(void)

int * FUN_14579362c(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 145793714 FUN_145793714 body=250 status=ok
// SIG undefined FUN_145793714(void)

void FUN_145793714(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_1400ff418();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_1457937a0;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1400ff418(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_145793810(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_1457937a0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145793810 FUN_145793810 body=85 status=ok
// SIG undefined FUN_145793810(void)

void FUN_145793810(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145793866();
  return;
}



// FUNCTION 145793866 FUN_145793866 body=116 status=ok
// SIG undefined FUN_145793866(void)

void FUN_145793866(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1457938da FUN_1457938da body=445 status=ok
// SIG undefined FUN_1457938da(void)

void FUN_1457938da(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 145793a98 FUN_145793a98 body=40 status=ok
// SIG undefined FUN_145793a98(void)

undefined8 FUN_145793a98(undefined8 param_1,int param_2)

{
  FUN_140cbad32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145793ac0 FUN_145793ac0 body=93 status=ok
// SIG undefined FUN_145793ac0(void)

undefined8 * FUN_145793ac0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0de370;
  param_1[0xad] = &PTR_LAB_14b0de718;
  param_1[0xc6] = &PTR_LAB_14b0de730;
  FUN_140cbe2d4(param_1 + 0xe4);
  FUN_140945f4c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145793b1e FUN_145793b1e body=428 status=ok
// SIG undefined FUN_145793b1e(void)

void FUN_145793b1e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 145793ccc FUN_145793ccc body=287 status=ok
// SIG undefined FUN_145793ccc(void)

void FUN_145793ccc(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
    puVar5 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8bc80);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_14b26bec0;
    *param_2 = (longlong)puVar5;
    *(undefined8 **)(param_3 + 0x30) = puVar5;
    if (*(char *)(param_3 + 0x2a) == -1) {
      FUN_1407d81c6(param_1,param_3);
    }
    else if (*param_2 != 0) {
      FUN_1407d81de(*param_2 + 8,param_3);
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))(param_1,local_48,param_3);
  if (cVar4 != '\0') {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_58,local_48,0);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_58);
    }
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145793dec FUN_145793dec body=41 status=ok
// SIG undefined FUN_145793dec(void)

void FUN_145793dec(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145793e16 FUN_145793e16 body=323 status=ok
// SIG undefined FUN_145793e16(void)

void FUN_145793e16(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 == 0) {
    puVar5 = (undefined8 *)FUN_140f99404(&DAT_14cb8bb90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14b26be90;
    memset(puVar5 + 4,0,0x98);
    *param_2 = (longlong)puVar5;
    *(undefined8 **)(param_3 + 0x30) = puVar5;
    if (*(char *)(param_3 + 0x2a) == -1) {
      FUN_1407d81c6(param_1,param_3);
    }
    else if (*param_2 != 0) {
      FUN_1407d81de(*param_2 + 8,param_3);
    }
  }
  local_58[0] = 0;
  local_58[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))(param_1,local_58,param_3);
  if (cVar4 != '\0') {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_68,local_58,0);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_68);
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145793f5a FUN_145793f5a body=41 status=ok
// SIG undefined FUN_145793f5a(void)

void FUN_145793f5a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_144a34c66(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145793f84 FUN_145793f84 body=54 status=ok
// SIG undefined FUN_145793f84(void)

void FUN_145793f84(void)

{
  FUN_140cbf076();
  if (DAT_14c9a15b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1598 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145793fba FUN_145793fba body=97 status=ok
// SIG undefined FUN_145793fba(void)

void FUN_145793fba(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_2[1] ^ *param_2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(uint *)(lVar2 + lVar4 * 0x24) == *param_2) &&
           (*(uint *)(lVar2 + 4 + lVar4 * 0x24) == param_2[1])) {
          FUN_145750382();
          return;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x24 + 0x1c);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14579401c FUN_14579401c body=67 status=ok
// SIG undefined FUN_14579401c(void)

undefined8 FUN_14579401c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x28) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x00014579404f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145794060 FUN_145794060 body=554 status=ok
// SIG undefined FUN_145794060(void)

void FUN_145794060(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if ((plVar2 != (longlong *)0x0) &&
     ((cVar3 = (**(code **)(*plVar2 + 0x700))(plVar2), cVar3 != '\0' ||
      ((plVar2[0x78] == 0 && (*(char *)(param_1 + 0x178) == '\x03')))))) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    uVar4 = (ulonglong)bVar1;
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (lVar6 = *(longlong *)(param_1 + 0xbe8),
       *(longlong *)(lVar6 + 8 + (ulonglong)bVar1 * 0x80 + uVar4 * 8) != 0)) {
      if (*(longlong *)(lVar6 + 0x20 + (ulonglong)bVar1 * 0x80 + uVar4 * 8) == 0) {
        plVar2 = *(longlong **)(lVar6 + 0x10 + (ulonglong)bVar1 * 0x80 + uVar4 * 8);
        if (((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x91) & 4) != 0)) &&
           (cVar3 = (**(code **)(*plVar2 + 0x338))(plVar2,0), cVar3 == '\0')) {
LAB_145794271:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
      else if ((((*(byte *)(param_1 + 0xd50) & 0x40) != 0) &&
               (plVar2 = *(longlong **)(lVar6 + 0x10 + (ulonglong)bVar1 * 0x80 + uVar4 * 8),
               plVar2 != (longlong *)0x0)) &&
              (cVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,0), cVar3 == '\0')) {
        if (*(char *)(param_1 + 0xbd8) != '\0') goto LAB_145794271;
        if ((longlong)*(int *)(param_1 + 0xbf0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xbe8);
          lVar5 = (longlong)*(int *)(param_1 + 0xbf0) * 0x88;
          do {
            plVar2 = *(longlong **)(lVar6 + 0x10);
            if ((plVar2 != (longlong *)0x0) &&
               (cVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,0), cVar3 != '\0')) {
              if (lVar6 != 0) goto LAB_145794271;
              break;
            }
            lVar6 = lVar6 + 0x88;
            lVar5 = lVar5 + -0x88;
          } while (lVar5 != 0);
        }
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
      (lVar6 = *(longlong *)
                (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar6 != 0)) &&
     (*(longlong *)(param_1 + 0xb58) == 0)) {
    local_38 = FUN_14619551a;
    local_30 = 0;
    FUN_1457942a0(lVar6 + 0x40,&local_28,param_1);
    *(undefined8 *)(param_1 + 0xb58) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457942a0 FUN_1457942a0 body=326 status=ok
// SIG undefined FUN_1457942a0(void)

undefined8
FUN_1457942a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
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
  *local_48 = &PTR_FUN_14b4aba60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_145794373;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_145794373:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457943e8 FUN_1457943e8 body=132 status=ok
// SIG undefined FUN_1457943e8(void)

void FUN_1457943e8(longlong param_1,int param_2)

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



// FUNCTION 14579446e FUN_14579446e body=51 status=ok
// SIG undefined FUN_14579446e(void)

bool FUN_14579446e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14048bbc8(param_1 + 0x758);
  lVar2 = FUN_14048bbc8(param_2 + 0x758);
  return lVar1 == lVar2;
}



// FUNCTION 1457944a2 FUN_1457944a2 body=78 status=ok
// SIG undefined FUN_1457944a2(void)

void FUN_1457944a2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_141092d32(&DAT_14cacedd0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_1457944f0(param_1 + 0x90);
  FUN_1457945b4(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1457944f0 FUN_1457944f0 body=82 status=ok
// SIG undefined FUN_1457944f0(void)

void FUN_1457944f0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  FUN_145794544(0,&local_28);
  FUN_14051bf10(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145794544 FUN_145794544 body=111 status=ok
// SIG undefined FUN_145794544(void)

undefined8 * FUN_145794544(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar3 = FUN_14479d2ce();
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *param_1 = *param_2;
  if (((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) && (lVar2 != 0)) {
    FUN_147972d68(DAT_14cace0c0,uVar1,uVar3);
  }
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 1457945b4 FUN_1457945b4 body=212 status=ok
// SIG undefined FUN_1457945b4(void)

void FUN_1457945b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_145794694(param_1 + 0x220);
  plVar7 = *(longlong **)(param_1 + 0x128);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_1457945da:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_1457945da;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_145794688();
    }
    bVar4 = false;
  }
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1457945e8;
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
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x58))();
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
LAB_1457945e8:
  if (!bVar4) {
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
                    /* WARNING: Could not recover jumptable at 0x000145794684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145794688 FUN_145794688 body=12 status=ok
// SIG undefined FUN_145794688(void)

void FUN_145794688(longlong param_1)

{
  FUN_145794824(param_1 + 0x1e0);
  return;
}



// FUNCTION 145794694 FUN_145794694 body=63 status=ok
// SIG undefined FUN_145794694(void)

void FUN_145794694(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457946d4(param_1);
    FUN_1459c273e(param_1);
    return;
  }
  FUN_1459c273e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147ad32c2(param_1);
  return;
}



// FUNCTION 1457946d4 FUN_1457946d4 body=335 status=ok
// SIG undefined FUN_1457946d4(void)

void FUN_1457946d4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145794824 FUN_145794824 body=174 status=ok
// SIG undefined FUN_145794824(void)

void FUN_145794824(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_1c = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_140cc7497(0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140a55110(param_1 + 0x18,0);
  }
  FUN_1457948d4(&local_28);
  FUN_14579490a(param_1 + 0x18,&local_28);
  FUN_140cc7497(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457948d4 FUN_1457948d4 body=53 status=ok
// SIG undefined FUN_1457948d4(void)

void FUN_1457948d4(undefined8 *param_1)

{
  FUN_140cc7497(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_140a55110(param_1,0);
  return;
}



// FUNCTION 14579490a FUN_14579490a body=80 status=ok
// SIG undefined FUN_14579490a(void)

longlong * FUN_14579490a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cc7497(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14579495a FUN_14579495a body=134 status=ok
// SIG undefined FUN_14579495a(void)

undefined8 * FUN_14579495a(undefined8 *param_1)

{
  char cVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_144a66780();
  if ((DAT_14c949800 & 1) != 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 != '\0') {
      lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
      goto LAB_145794981;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = lpCriticalSection;
LAB_145794981:
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457949e0(param_1,lpCriticalSection + 9);
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return param_1;
}



// FUNCTION 1457949e0 FUN_1457949e0 body=120 status=ok
// SIG undefined FUN_1457949e0(void)

longlong FUN_1457949e0(longlong param_1,longlong param_2)

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
    FUN_140cc7d4e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145794a58 FUN_145794a58 body=357 status=ok
// SIG undefined FUN_145794a58(void)

LPCRITICAL_SECTION FUN_145794a58(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].SpinCount = 0;
  *(undefined4 *)&param_1[2].DebugInfo = 0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[2].DebugInfo + 4) = 0xffffffff00000080;
  param_1[2].RecursionCount = 0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[2].SpinCount = 0;
  param_1[3].SpinCount = 0;
  *(undefined4 *)&param_1[4].DebugInfo = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[3].LockCount = 0;
  param_1[3].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[4].DebugInfo + 4) = 0xffffffff00000080;
  param_1[4].RecursionCount = 0;
  param_1[4].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[4].SpinCount = 0;
  param_1[5].SpinCount = 0;
  *(undefined4 *)&param_1[6].DebugInfo = 0;
  param_1[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[5].LockCount = 0;
  param_1[5].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[6].DebugInfo + 4) = 0xffffffff00000080;
  param_1[6].RecursionCount = 0;
  param_1[6].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[6].SpinCount = 0;
  param_1[7].SpinCount = 0;
  *(undefined4 *)&param_1[8].DebugInfo = 0;
  param_1[7].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[7].LockCount = 0;
  param_1[7].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[8].DebugInfo + 4) = 0xffffffff00000080;
  param_1[8].RecursionCount = 0;
  param_1[8].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[8].SpinCount = 0;
  param_1[9].SpinCount = 0;
  *(undefined4 *)&param_1[10].DebugInfo = 0;
  param_1[9].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[9].LockCount = 0;
  param_1[9].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[10].DebugInfo + 4) = 0xffffffff00000080;
  param_1[10].RecursionCount = 0;
  param_1[10].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[10].SpinCount = 0;
  param_1[0xc].LockCount = 0;
  param_1[0xc].RecursionCount = 0;
  *(undefined4 *)&param_1[0xc].OwningThread = 0;
  param_1[0xb].OwningThread = (HANDLE)0x0;
  param_1[0xb].LockSemaphore = (HANDLE)0x0;
  param_1[0xb].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[0xb].LockCount = 0;
  param_1[0xb].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[0xc].OwningThread + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[0xc].LockSemaphore + 4) = 0;
  param_1[0xd].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[0xd].LockCount = 0;
  param_1[0xe].LockCount = 0;
  param_1[0xe].RecursionCount = 0;
  *(undefined4 *)&param_1[0xe].OwningThread = 0;
  param_1[0xd].OwningThread = (HANDLE)0x0;
  param_1[0xd].LockSemaphore = (HANDLE)0x0;
  *(undefined8 *)((longlong)&param_1[0xe].OwningThread + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[0xe].LockSemaphore + 4) = 0;
  param_1[0xf].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[0xf].LockCount = 0;
  return param_1;
}



// FUNCTION 145794bbe FUN_145794bbe body=416 status=ok
// SIG undefined FUN_145794bbe(void)

longlong * FUN_145794bbe(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_145794c95:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b422b20;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145794c95;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b422b20;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 145794d5e FUN_145794d5e body=2199 status=ok
// SIG undefined FUN_145794d5e(void)

void FUN_145794d5e(double param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  double *pdVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_518 [32];
  undefined8 *local_4f8;
  undefined1 local_4f0;
  undefined4 local_4e4;
  ulonglong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  double local_4b8;
  longlong local_4a8;
  longlong *local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined1 local_478 [16];
  double local_468;
  undefined1 local_460 [8];
  double local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  double local_428;
  double dStack_420;
  double local_418;
  undefined8 local_408 [2];
  undefined8 local_3f8;
  double local_3c8;
  double dStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  ulonglong uStack_3a0;
  double local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  longlong local_340;
  undefined8 local_338;
  undefined1 local_330 [296];
  byte local_208;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_4e4 = param_2;
  if (*(longlong **)((longlong)param_1 + 0x3b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x3b8) + 0x2b0))();
    *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x3b0) != 0) {
    local_428 = 0.0;
    dStack_420 = (double)((ulonglong)dStack_420 & 0xffffffff00000000);
    lVar8 = FUN_140b51ce6();
    if (lVar8 == 0) {
      lVar8 = FUN_1402d1dc0(*(longlong *)((longlong)param_1 + 0x3b0) + 0x168);
    }
    else {
      dStack_3c0 = 0.0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3c8 = param_1;
      lVar8 = FUN_1415d7f30(lVar8,&local_3c8,&local_428,0);
    }
    if (lVar8 != 0) {
      lVar15 = *(longlong *)((longlong)param_1 + 0x1c8);
      if (lVar15 == 0) {
        puVar13 = &DAT_14c8464e0;
        local_398 = DAT_14c8464f0;
      }
      else {
        puVar13 = (undefined8 *)(lVar15 + 0x260);
        local_398 = *(double *)(lVar15 + 0x270);
      }
      local_3a8 = *(undefined4 *)puVar13;
      uStack_3a4 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_3a0 = puVar13[1];
      local_3c8 = 0.0;
      dStack_3c0 = 0.0;
      local_3b8 = 0;
      uStack_3b4 = 0;
      uStack_3b0 = 0x3ff0000000000000;
      uStack_390 = 0;
      local_388 = 0x3ff0000000000000;
      uStack_380 = 0x3ff0000000000000;
      local_378 = 0x3ff0000000000000;
      uStack_370 = 0;
      uVar10 = FUN_1447210f0(param_1);
      local_4f0 = 1;
      local_4f8 = (undefined8 *)((ulonglong)local_4f8 & 0xffffffffffffff00);
      lVar8 = FUN_1405837ac(uVar10,lVar8,&local_3c8,1);
      if ((lVar8 != 0) && (0 < dStack_420._0_4_)) {
        local_3c8 = (double)((ulonglong)local_3c8 & 0xffffffffffffff00);
        uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
        FUN_1456bb102(&local_3c8,param_1);
        FUN_140e99737(lVar8,&local_428,&local_3c8);
        FUN_144a5ac3a(&local_3c8);
      }
    }
  }
  if ((*(longlong *)((longlong)param_1 + 0x550) != 0) &&
     (*(longlong *)((longlong)param_1 + 0x540) != 0)) {
    FUN_140ccfb62();
  }
  pdVar14 = (double *)(*(longlong *)((longlong)param_1 + 0x3b0) + 0x388);
  if (*(longlong *)((longlong)param_1 + 0x3b0) == 0) {
    pdVar14 = &DAT_14c8464e0;
  }
  dVar3 = *pdVar14;
  dVar4 = pdVar14[1];
  dVar5 = pdVar14[2];
  if ((longlong)*(int *)((longlong)param_1 + 0x418) != 0) {
    lVar8 = *(longlong *)((longlong)param_1 + 0x410);
    lVar15 = (longlong)*(int *)((longlong)param_1 + 0x418) * 0x18;
    do {
      lVar9 = FUN_14479d2ce(lVar8);
      if (lVar9 != 0) {
        uVar10 = FUN_14479d2ce(lVar8);
        FUN_140cd0164(uVar10,param_1);
        local_428 = dVar3;
        dStack_420 = dVar4;
        local_418 = dVar5;
        if ((((dVar3 != DAT_14c8464e0) || (NAN(dVar3) || NAN(DAT_14c8464e0))) ||
            (dVar4 != DAT_14c8464e8)) || (NAN(dVar4) || NAN(DAT_14c8464e8))) {
LAB_145794f11:
          lVar9 = FUN_14479d2ce(lVar8 + 8);
          if (lVar9 != 0) {
            local_448 = 0;
            uStack_440 = 0;
            local_438 = 0x3ff0000000000000;
            lVar9 = FUN_14479d2ce(lVar8);
            lVar9 = *(longlong *)(lVar9 + 0x1c8);
            if (lVar9 == 0) {
              pdVar14 = &DAT_14c8464e0;
              local_468 = DAT_14c8464f0;
            }
            else {
              pdVar14 = (double *)(lVar9 + 0x260);
              local_468 = *(double *)(lVar9 + 0x270);
            }
            lVar9 = *(longlong *)((longlong)param_1 + 0x1c8);
            if (lVar9 == 0) {
              uVar16 = SUB84(DAT_14c8464f0,0);
              uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              pdVar11 = &DAT_14c8464e0;
            }
            else {
              uVar16 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
              uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
              pdVar11 = (double *)(lVar9 + 0x260);
            }
            local_468 = local_468 - (double)CONCAT44(uVar17,uVar16);
            local_478._8_4_ = SUB84(pdVar14[1] - pdVar11[1],0);
            local_478._0_8_ = *pdVar14 - *pdVar11;
            local_478._12_4_ = (int)((ulonglong)(pdVar14[1] - pdVar11[1]) >> 0x20);
            FUN_144a79a9c(local_478,local_460);
            FUN_140ccff96(&local_428,&local_3c8,SUB84(local_458 * 0.017453292519943295,0),&local_448
                         );
            local_418 = (double)CONCAT44(uStack_3b4,local_3b8);
            local_428 = local_3c8;
            dStack_420 = dStack_3c0;
            plVar12 = (longlong *)FUN_14479d2ce(lVar8 + 8);
            local_498 = local_428;
            dStack_490 = dStack_420;
            local_488 = local_418;
            (**(code **)(*plVar12 + 0x6d0))(plVar12,&local_498,0,0);
          }
        }
        else if ((dVar5 != DAT_14c8464f0) || (NAN(dVar5) || NAN(DAT_14c8464f0))) goto LAB_145794f11;
        if (0.0001 < *(float *)((longlong)param_1 + 0x428)) {
          uVar10 = FUN_14479d2ce(lVar8);
          FUN_14082cf0e(&local_3c8,uVar10,0,0);
          local_4e0 = *(ulonglong *)((longlong)param_1 + 0x168);
          if ((local_4e0 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_4e0);
          }
          local_4d8 = (longlong)param_1 + 0x430;
          local_4d0 = (longlong)param_1 + 0x480;
          uStack_3a0 = local_4e0;
          local_208 = local_208 | 8;
          local_388 = (**(code **)(*(longlong *)((longlong)param_1 + 0x3a8) + 0x18))
                                ((longlong)param_1 + 0x3a8);
          FUN_14118c70e(&uStack_380,local_4d8);
          (**(code **)(local_340 + 0x20))(&local_340,0);
          local_338 = *(undefined8 *)((longlong)param_1 + 0x478);
          FUN_1406022fe(local_330,local_4d0);
          local_4f8 = local_408;
          local_408[0] = 0;
          local_3f8 = 0;
          FUN_14082d216(&local_3c8,*(undefined4 *)((longlong)param_1 + 0x428));
          FUN_1403dfdc4(&local_3c8);
        }
        uVar10 = FUN_14479d2ce(lVar8);
        lVar9 = FUN_140ccfb74(uVar10);
        if ((lVar9 != 0) && (lVar9 = FUN_144a6781a(lVar9,DAT_14c9abbf0), lVar9 != 0)) {
          FUN_144a79b68(&local_3c8,*(undefined8 *)((longlong)param_1 + 0x3b0));
          FUN_14124a00a(lVar9 + 0x368,&local_3c8);
        }
      }
      lVar8 = lVar8 + 0x18;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != 0);
  }
  *(undefined4 *)((longlong)param_1 + 0x418) = 0;
  if (*(int *)((longlong)param_1 + 0x41c) != 0) {
    FUN_1457955f6((longlong)param_1 + 0x410);
  }
  if ((DAT_14cb259f8 != 0) && (lVar8 = *(longlong *)((longlong)param_1 + 0x558), lVar8 != 0)) {
    uVar10 = *(undefined8 *)(DAT_14cb259f8 + 0x70);
    plVar12 = *(longlong **)(DAT_14cb259f8 + 0x78);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      lVar8 = *(longlong *)((longlong)param_1 + 0x558);
    }
    plVar6 = *(longlong **)((longlong)param_1 + 0x560);
    local_4a8 = lVar8;
    if (plVar6 == (longlong *)0x0) {
      local_4a0 = (longlong *)0x0;
      FUN_147f7c92a(uVar10);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_4a0 = plVar6;
      FUN_147f7c92a(uVar10);
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
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  lVar8 = *(longlong *)((longlong)param_1 + 0x568);
  if (lVar8 != 0) {
    lVar15 = *(longlong *)(lVar8 + 800);
    if (lVar15 == 0) {
      uVar10 = FUN_140067708();
      lVar15 = FUN_14477b664(uVar10);
      *(longlong *)(lVar8 + 800) = lVar15;
    }
    lVar9 = *(longlong *)(lVar8 + 0x328);
    if (lVar9 == 0) {
      if ((*(longlong *)(lVar8 + 0x318) == 0) || (lVar15 == 0)) {
        lVar9 = 0;
      }
      else {
        plVar12 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar7 == '\0')) {
          lVar9 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar9 = FUN_144aff482(uVar10,(longlong *)(lVar8 + 0x318));
        }
        *(longlong *)(lVar8 + 0x328) = lVar9;
      }
    }
    FUN_140bd765a((longlong)param_1 + 0x578,lVar9,0);
  }
  uVar10 = FUN_140ccfc10();
  uVar16 = FUN_140ccfb96(uVar10,(float)SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
  lVar8 = *(longlong *)((longlong)param_1 + 0x1c8);
  if (lVar8 == 0) {
    puVar13 = &DAT_14c8464e0;
    local_4b8 = DAT_14c8464f0;
  }
  else {
    puVar13 = (undefined8 *)(lVar8 + 0x260);
    local_4b8 = *(double *)(lVar8 + 0x270);
  }
  local_4c8 = *(undefined4 *)puVar13;
  uStack_4c4 = *(undefined4 *)((longlong)puVar13 + 4);
  uStack_4c0 = *(undefined4 *)(puVar13 + 1);
  uStack_4bc = *(undefined4 *)((longlong)puVar13 + 0xc);
  uVar17 = *(undefined4 *)((longlong)param_1 + 0x3e0);
  uVar10 = FUN_1447210f0(param_1);
  FUN_140ccfdcb(uVar10,&local_4c8,uVar17,uVar16);
  FUN_1403d8a98(param_1,local_4e4);
  if ((local_b0 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457955f6 FUN_1457955f6 body=48 status=ok
// SIG undefined FUN_1457955f6(void)

void FUN_1457955f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 145795626 FUN_145795626 body=123 status=ok
// SIG undefined FUN_145795626(void)

longlong FUN_145795626(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 == 0) {
    if ((longlong)*(int *)(param_1 + 0x58) == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar3 = (longlong)*(int *)(param_1 + 0x58) << 3;
      lVar4 = 0;
      do {
        lVar2 = FUN_14479d2ce(lVar1);
        if (lVar2 != 0) {
          lVar1 = FUN_1447210f0(lVar2);
          return lVar1;
        }
        lVar1 = lVar1 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0xb0);
    if (lVar4 == 0) {
      lVar1 = FUN_1448abda6(lVar1);
      return lVar1;
    }
  }
  return lVar4;
}



// FUNCTION 1457956a2 FUN_1457956a2 body=213 status=ok
// SIG undefined FUN_1457956a2(void)

void FUN_1457956a2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,8);
  FUN_145795778(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c75a0;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145795778 FUN_145795778 body=111 status=ok
// SIG undefined FUN_145795778(void)

void FUN_145795778(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c75c0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}



// FUNCTION 1457957ee FUN_1457957ee body=466 status=ok
// SIG undefined FUN_1457957ee(void)

undefined8 *
FUN_1457957ee(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_1447262c2(param_4);
  if (plVar2 == (longlong *)0x0) {
LAB_1457959a0:
    *param_2 = *param_5;
    if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  uVar3 = FUN_1403ec9c0();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
  if (plVar2 == (longlong *)0x0) goto LAB_1457959a0;
  uVar3 = FUN_1403ec9c0();
  plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
  if ((plVar2 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_1457959a0;
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  local_48 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    local_40 = plVar2;
    if ((int)*plVar4 == 0) {
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
  lVar5 = FUN_1457959c2(uVar3,*(undefined1 *)(param_1 + 8),param_3,&local_48);
  if (lVar5 == 0) goto LAB_1457959a0;
  if (param_6 == '\x01') {
    lVar5 = lVar5 + 0x18;
  }
  else if (param_6 == '\0') {
    lVar5 = lVar5 + 0x24;
  }
  else {
    if (param_6 != '\x02') {
      if (param_6 != '\x03') goto LAB_1457959a0;
      lVar5 = lVar5 + 0x30;
      uVar3 = 3;
      goto LAB_145795906;
    }
    lVar5 = lVar5 + 0x3c;
  }
  uVar3 = 1;
LAB_145795906:
  local_50 = param_8;
  local_58 = param_7;
  FUN_140cda184(lVar5,param_2,param_5,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1457959c2 FUN_1457959c2 body=266 status=ok
// SIG undefined FUN_1457959c2(void)

longlong * FUN_1457959c2(longlong param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = (ulonglong)(param_2 != '\0') * 0x10;
  plVar4 = *(longlong **)(lVar7 + 400 + param_1);
  iVar3 = *(int *)(lVar7 + 0x198 + param_1);
  lVar8 = (longlong)iVar3;
  if (lVar8 != 0) {
    lVar5 = lVar8 * 0x48;
    plVar6 = plVar4;
    do {
      if (*plVar6 == param_3) {
        if (plVar6 != (longlong *)0x0) goto LAB_145795a1b;
        break;
      }
      plVar6 = plVar6 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
  }
  lVar7 = lVar7 + param_1;
  *(uint *)(lVar7 + 0x198) = iVar3 + 1U;
  if (*(uint *)(lVar7 + 0x19c) < iVar3 + 1U) {
    FUN_14654a738((undefined8 *)(lVar7 + 400),iVar3);
    plVar4 = *(longlong **)(lVar7 + 400);
  }
  local_38 = *param_4;
  local_30 = param_4[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  plVar6 = plVar4 + lVar8 * 9;
  FUN_14654a6aa(plVar6,param_3,&local_38);
LAB_145795a1b:
  plVar4 = (longlong *)param_4[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145795ace FUN_145795ace body=132 status=ok
// SIG undefined FUN_145795ace(void)

void FUN_145795ace(longlong param_1,int param_2)

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



// FUNCTION 145795b53 FUN_145795b53 body=193 status=ok
// SIG undefined FUN_145795b53(void)

void FUN_145795b53(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (DAT_14cb82368 != DAT_14cb82394) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar6 = &DAT_14cb82398;
    if (DAT_14cb823a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb823a0;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14cb823a8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb82360 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14cb82360 + (longlong)iVar2 * 0x20) == lVar3) {
        if ((lVar1 != 0) && (lVar1 != -8)) {
          *param_1 = *(undefined8 *)(lVar1 + 8);
          lVar3 = *(longlong *)(lVar1 + 0x10);
          param_1[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145795c14 FUN_145795c14 body=360 status=ok
// SIG undefined FUN_145795c14(void)

void FUN_145795c14(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (ulonglong)(int)param_1[0x11];
  if (0 < (longlong)uVar7) {
    iVar8 = -(int)param_1[0x11];
    lVar6 = uVar7 * 0x18;
    do {
      lVar4 = FUN_14479d2ce(param_1[0x10] + lVar6 + -0x18);
      if (lVar4 == 0) {
        uVar3 = *(uint *)(param_1 + 0x11);
        if (uVar7 != uVar3) {
          iVar5 = 1;
          if ((int)(iVar8 + uVar3) < 1) {
            iVar5 = iVar8 + uVar3;
          }
          memmove((void *)(param_1[0x10] + lVar6 + -0x18),
                  (void *)(param_1[0x10] + (longlong)(int)(uVar3 - iVar5) * 0x18),
                  (longlong)iVar5 * 0x18);
          uVar3 = *(uint *)(param_1 + 0x11);
        }
        *(uint *)(param_1 + 0x11) = uVar3 - 1;
        FUN_1410608a2(param_1 + 0x10);
      }
      else {
        lVar1 = *(longlong *)(param_1[0x10] + -0x10 + lVar6);
        if ((*(byte *)(param_1 + 3) & 2) == 0) {
          if (lVar1 != 0) {
            (**(code **)(*param_1 + 0x38))(param_1,lVar4,param_1[0x10] + lVar6 + -0x10);
            *(undefined8 *)(param_1[0x10] + -0x10 + lVar6) = 0;
          }
        }
        else if (lVar1 == 0) {
          (**(code **)(*param_1 + 0x30))(param_1,&local_40,lVar4);
          *(undefined8 *)(param_1[0x10] + -0x10 + lVar6) = local_40;
        }
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + -0x18;
      bVar2 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145795d7e FUN_145795d7e body=47 status=ok
// SIG undefined FUN_145795d7e(void)

undefined8 FUN_145795d7e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140ce03de();
  if ((lVar1 != 0) && (*param_3 != 0)) {
    uVar2 = FUN_14480f766(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145795dae FUN_145795dae body=151 status=ok
// SIG undefined FUN_145795dae(void)

undefined8 * FUN_145795dae(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140ce03de(param_1,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    local_48 = FUN_140cb5a68;
    local_40 = 0;
    FUN_145795e46(local_38,param_1);
    FUN_1403524de(lVar1,param_2,local_38);
    FUN_1449db362(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145795e46 FUN_145795e46 body=428 status=ok
// SIG undefined FUN_145795e46(void)

longlong * FUN_145795e46(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145795f26:
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b427ee0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145795f26;
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
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b427ee0;
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



// FUNCTION 145795ff2 FUN_145795ff2 body=206 status=ok
// SIG undefined FUN_145795ff2(void)

undefined8 FUN_145795ff2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1457960c2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457960c2 FUN_1457960c2 body=221 status=ok
// SIG undefined FUN_1457960c2(void)

longlong FUN_1457960c2(void)

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
  if (DAT_14c9ab410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470f4c39;
    local_40 = FUN_142b4d006;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DGeneratedSimulationData",&DAT_14c9ab410,&DAT_1470f4c38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457961a0 FUN_1457961a0 body=429 status=ok
// SIG undefined FUN_1457961a0(void)

void FUN_1457961a0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140880bb4();
  uVar2 = FUN_14088155e(param_1,&DAT_14cb88c28,0x3039);
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar2;
  cVar1 = FUN_1408814c2(param_1,&DAT_14cb88c30,0);
  *(char *)((longlong)param_1 + 0x122) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = FUN_1408814c2(param_1,&DAT_14cb88c38,0);
    *(char *)((longlong)param_1 + 0x121) = cVar1;
    *(undefined1 *)((longlong)param_1 + 0x131) = 0;
    if (cVar1 != '\0') goto LAB_145796342;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x121) = 1;
    *(undefined1 *)((longlong)param_1 + 0x131) = 0;
LAB_145796342:
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    lVar3 = FUN_14070cc62();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_20 = *(undefined8 *)(param_1[0x34] + 0x18);
      FUN_1409e8532(lVar4,&local_20,1);
    }
  }
  lVar4 = FUN_140ce3e30(param_1);
  if (lVar4 == 0) goto LAB_145796301;
  lVar3 = FUN_14061d078();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_145796301;
  FUN_14485c47a(param_1 + 0x36,lVar4);
  lVar4 = (**(code **)(*(longlong *)param_1[0x13] + 0x58))((longlong *)param_1[0x13],&DAT_14cb8d438)
  ;
  if (lVar4 == 0) goto LAB_145796301;
  lVar4 = FUN_144a7a45a(lVar4);
  if (lVar4 == 0) {
LAB_145796330:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_140890cca();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_145796330;
  }
  FUN_14485c47a(param_1 + 0x35,lVar4);
LAB_145796301:
  FUN_1457969bc(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14579634e FUN_14579634e body=145 status=ok
// SIG undefined FUN_14579634e(void)

void FUN_14579634e(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_140ce3ff6(*(undefined4 *)(param_1 + 0x124));
  uVar3 = FUN_140ce4006();
  uVar1 = FUN_140ce3ffe();
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  uVar2 = FUN_145796430(*(longlong *)(param_1 + 0x1a0) + 0x228,*(undefined8 *)(param_1 + 0x38),uVar3
                       );
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 0x230))) {
    FUN_1408838b6(param_1,*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x228) +
                          (ulonglong)uVar2 * 0x188 + 0x38,1,1);
    return;
  }
  return;
}



// FUNCTION 1457963e0 FUN_1457963e0 body=80 status=ok
// SIG undefined FUN_1457963e0(void)

void FUN_1457963e0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x131) == '\x01') {
    lVar1 = FUN_14479d2ce(param_1 + 0x1b0);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x66b) != '\0')) {
      return;
    }
  }
  FUN_1408838b6(param_1,*(longlong *)(param_1 + 0x1a0) + 0x238,0,1);
  return;
}



// FUNCTION 145796430 FUN_145796430 body=437 status=ok
// SIG undefined FUN_145796430(void)

ulonglong FUN_145796430(longlong *param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 < 0.0) {
    uVar2 = rand();
    param_3 = (float)(uVar2 & 0x7fff) / 32767.0;
  }
  local_60 = (undefined1 *)0x0;
  local_54 = 0x20;
  local_58 = (int)param_1[1];
  uVar4 = (ulonglong)local_58;
  if (0x20 < uVar4) {
    FUN_140fb08bc(local_e0);
  }
  puVar3 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar3 = local_e0;
  }
  memset(puVar3,0,uVar4 << 2);
  if ((int)param_1[1] < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar10 = 0.0;
    lVar5 = 0;
    lVar7 = 0;
    do {
      uVar8 = FUN_1457965e6(*param_1 + lVar5,param_2);
      puVar3 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar3 = local_e0;
      }
      *(undefined4 *)(puVar3 + lVar7 * 4) = uVar8;
      puVar3 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar3 = local_e0;
      }
      fVar10 = fVar10 + *(float *)(puVar3 + lVar7 * 4);
      lVar7 = lVar7 + 1;
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = lVar5 + 0x188;
    } while (lVar7 < (int)uVar2);
    uVar4 = 0xffffffff;
    if (0 < (int)uVar2) {
      fVar9 = 0.0;
      uVar6 = 0;
      do {
        bVar1 = fVar9 <= param_3 * fVar10;
        fVar9 = fVar9 + *(float *)(puVar3 + uVar6 * 4);
        if ((bVar1) && (param_3 * fVar10 <= fVar9)) {
          uVar4 = uVar6 & 0xffffffff;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1457965e6 FUN_1457965e6 body=214 status=ok
// SIG undefined FUN_1457965e6(void)

undefined4 FUN_1457965e6(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  FUN_1447c3578(param_1,local_58,local_88);
  uVar3 = FUN_144a7ecd0(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457966be FUN_1457966be body=465 status=ok
// SIG undefined FUN_1457966be(void)

void FUN_1457966be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  code *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_1408814c2(param_1,&DAT_14cb88c48,0);
  if ((cVar6 != '\0') && (lVar8 = FUN_140519fd4(*(undefined8 *)(param_1 + 0x38)), lVar8 != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_145796843:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_145796843;
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
      local_88 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_80 = plVar3;
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
    local_70 = FUN_14892a928;
    local_68 = 0;
    FUN_145796890(local_60,&local_88);
    FUN_140d0168e(lVar8,&local_70,local_60);
    FUN_1449db362(local_60);
    plVar3 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
  cVar6 = FUN_1408814c2(param_1,&DAT_14cb88c50,0);
  if (cVar6 == '\0') {
    fVar10 = (float)FUN_140ed0982(param_1,&DAT_14cb88c58,0);
    if ((fVar10 <= 0.0) && (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x388) == '\0')) {
      fVar10 = 0.0001;
    }
    dVar4 = (double)FUN_140ce3fd2(param_1);
    *(double *)(param_1 + 0x128) = (double)fVar10 + dVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145796890 FUN_145796890 body=300 status=ok
// SIG undefined FUN_145796890(void)

longlong * FUN_145796890(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_LAB_14ac89870;
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
    *puVar5 = &PTR_FUN_14b41f430;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ac89870;
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
    *puVar5 = &PTR_FUN_14b41f430;
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



// FUNCTION 1457969bc FUN_1457969bc body=2860 status=ok
// SIG undefined FUN_1457969bc(void)

void FUN_1457969bc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  double *pdVar18;
  char cVar19;
  undefined4 uVar20;
  uint uVar21;
  ulonglong uVar22;
  double *pdVar23;
  longlong *plVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  bool bVar27;
  float extraout_XMM0_Da;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  char *local_108;
  undefined1 local_f8 [16];
  double local_e8;
  longlong *local_d8;
  longlong *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar14 = FUN_140ce3e30();
  if (lVar14 == 0) goto LAB_145796f5a;
  lVar15 = FUN_14061d078();
  if ((((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8
         ) != lVar15 + 0x30)) || (lVar15 = *(longlong *)(lVar14 + 0x638), lVar15 == 0)) ||
     ((*(char *)(param_1 + 0x121) == '\0' && (*(char *)(lVar15 + 0x8b) == '\0'))))
  goto LAB_145796f5a;
  plVar2 = *(longlong **)(param_1 + 0x38);
  pcVar16 = (char *)FUN_14070cbf4(&local_d8,plVar2);
  if ((local_d8 == (longlong *)0x0) || ((int)local_d8[0x4a] == -1)) {
    plVar24 = local_d8;
    if (plVar2 != (longlong *)0x0) {
      lVar17 = FUN_144a78b9e();
      if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar17 + 0x38)) ||
         (plVar24 = *(longlong **)(plVar2[2] + 0x30),
         plVar24[*(int *)(lVar17 + 0x38)] != lVar17 + 0x30)) {
        pcVar16 = (char *)FUN_1412308c8();
        plVar24 = (longlong *)(longlong)*(int *)(pcVar16 + 0x38);
        if (*(int *)(pcVar16 + 0x38) <= *(int *)(plVar2[2] + 0x38)) {
          pcVar16 = pcVar16 + 0x30;
          iVar13 = 3;
          if (*(char **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)plVar24 * 8) == pcVar16)
          goto LAB_145796ada;
        }
      }
      else {
        lVar17 = plVar2[0x27f];
        pcVar16 = (char *)0x0;
        if (lVar17 != 0) {
          bVar11 = *(char *)(lVar17 + 0x90) - 1;
          pcVar16 = (char *)CONCAT71((int7)((ulonglong)lVar17 >> 8),bVar11);
          iVar13 = 0;
          if (bVar11 < 4) {
            pcVar16 = (char *)(ulonglong)bVar11;
            plVar24 = (longlong *)&DAT_14b41f860;
            iVar13 = *(int *)(&DAT_14b41f860 + (longlong)pcVar16 * 4);
          }
          goto LAB_145796ada;
        }
      }
    }
    iVar13 = 1;
  }
  else {
    FUN_144a540c6(local_d8,&local_178);
    pcVar16 = (char *)FUN_144a67f34((ulonglong)dStack_170 & 0xffffffff);
    iVar13 = (int)pcVar16;
    plVar24 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_160 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pcVar16 = (char *)(**(code **)(*plStack_160 + 0x10))();
      }
    }
  }
LAB_145796ada:
  uVar20 = SUB84(plVar24,0);
  lVar17 = plVar2[0x39];
  if (lVar17 == 0) {
    local_e8 = DAT_14c8464f0;
    local_f8._8_8_ = DAT_14c8464e8;
    local_f8._0_8_ = DAT_14c8464e0;
    local_108 = DAT_14c846508;
    local_118 = DAT_14c8464f8;
    dStack_110 = DAT_14c846500;
  }
  else {
    local_f8 = *(undefined1 (*) [16])(lVar17 + 0x260);
    local_e8 = *(double *)(lVar17 + 0x270);
    dVar28 = *(double *)(lVar17 + 0x240);
    dVar8 = *(double *)(lVar17 + 0x248);
    dVar9 = *(double *)(lVar17 + 0x250);
    plVar24 = *(longlong **)(lVar17 + 600);
    pdVar18 = *(double **)(lVar17 + 0x228);
    local_178 = dVar28;
    dStack_170 = dVar8;
    local_168 = dVar9;
    plStack_160 = plVar24;
    if (pdVar18 == (double *)0x0) {
      uVar20 = 0x40;
      pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
      dVar29 = DAT_14c8463d8;
      *pdVar18 = DAT_14c8463d0;
      pdVar18[1] = dVar29;
      dVar29 = DAT_14c8463e8;
      pdVar18[2] = DAT_14c8463e0;
      pdVar18[3] = dVar29;
      dVar29 = DAT_14c846500;
      pdVar18[4] = DAT_14c8464f8;
      pdVar18[5] = dVar29;
      pcVar16 = DAT_14c846508;
      pdVar18[6] = (double)DAT_14c846508;
      *(double **)(lVar17 + 0x228) = pdVar18;
    }
    auVar37._8_8_ = -(ulonglong)(dVar8 != pdVar18[1]);
    auVar37._0_8_ = -(ulonglong)(dVar28 != *pdVar18);
    iVar12 = movmskpd((int)pcVar16,auVar37);
    auVar3._8_4_ = (int)-(ulonglong)((double)plVar24 != pdVar18[3]);
    auVar3._0_8_ = -(ulonglong)(dVar9 != pdVar18[2]);
    auVar3._12_4_ = (int)(-(ulonglong)((double)plVar24 != pdVar18[3]) >> 0x20);
    uVar21 = movmskpd(uVar20,auVar3);
    uVar20 = 0;
    if ((uVar21 & 0x3fffffff) != 0 || iVar12 != 0) {
      pdVar23 = &local_178;
      pdVar18[2] = local_168;
      pdVar18[3] = (double)plStack_160;
      *pdVar18 = local_178;
      pdVar18[1] = dStack_170;
      FUN_1448052ee(pdVar23,&local_c8);
      uVar20 = SUB84(pdVar23,0);
      pdVar18[6] = local_b8;
      pdVar18[4] = local_c8;
      pdVar18[5] = dStack_c0;
    }
    local_108 = (char *)pdVar18[6];
    local_118 = pdVar18[4];
    dStack_110 = pdVar18[5];
  }
  dVar8 = *(double *)*(undefined1 (*) [16])(lVar14 + 0x260);
  dVar28 = *(double *)(lVar14 + 0x268);
  auVar3 = *(undefined1 (*) [16])(lVar14 + 0x260);
  dVar9 = *(double *)(lVar14 + 0x270);
  if (*(char *)(param_1 + 0x121) == '\x01') {
    local_f8 = auVar3;
    local_e8 = dVar9;
    if (iVar13 == 1) {
      (**(code **)(*plVar2 + 0x528))(plVar2,&local_178,&local_c8);
      local_e8 = (double)local_c8._0_4_ + dVar9;
    }
    uVar25 = *(undefined8 *)(param_1 + 0x1a0);
    pcVar16 = (char *)FUN_145797688(uVar25,*(undefined8 *)(param_1 + 0x98));
    uVar20 = (undefined4)uVar25;
    dVar28 = *(double *)(lVar14 + 0x240);
    dVar8 = *(double *)(lVar14 + 0x248);
    dVar9 = *(double *)(lVar14 + 0x250);
    plVar24 = *(longlong **)(lVar14 + 600);
    pdVar18 = *(double **)(lVar14 + 0x228);
    local_178 = dVar28;
    dStack_170 = dVar8;
    local_168 = dVar9;
    plStack_160 = plVar24;
    if (pdVar18 == (double *)0x0) {
      uVar20 = 0x40;
      pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
      dVar29 = DAT_14c8463d8;
      *pdVar18 = DAT_14c8463d0;
      pdVar18[1] = dVar29;
      dVar29 = DAT_14c8463e8;
      pdVar18[2] = DAT_14c8463e0;
      pdVar18[3] = dVar29;
      dVar29 = DAT_14c846500;
      pdVar18[4] = DAT_14c8464f8;
      pdVar18[5] = dVar29;
      pcVar16 = DAT_14c846508;
      pdVar18[6] = (double)DAT_14c846508;
      *(double **)(lVar14 + 0x228) = pdVar18;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar18[1]);
    auVar4._0_8_ = -(ulonglong)(dVar28 != *pdVar18);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar18[1]) >> 0x20);
    iVar13 = movmskpd((int)pcVar16,auVar4);
    auVar6._8_4_ = (int)-(ulonglong)((double)plVar24 != pdVar18[3]);
    auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar18[2]);
    auVar6._12_4_ = (int)(-(ulonglong)((double)plVar24 != pdVar18[3]) >> 0x20);
    uVar21 = movmskpd(uVar20,auVar6);
    if ((uVar21 & 0x3fffffff) != 0 || iVar13 != 0) {
      pdVar18[2] = local_168;
      pdVar18[3] = (double)plStack_160;
      *pdVar18 = local_178;
      pdVar18[1] = dStack_170;
      FUN_1448052ee(&local_178,&local_c8);
      pdVar18[6] = local_b8;
      pdVar18[4] = local_c8;
      pdVar18[5] = dStack_c0;
    }
    local_108 = (char *)pdVar18[6];
    local_118 = pdVar18[4];
    dStack_110 = pdVar18[5];
    dVar28 = (double)FUN_144719204((double)extraout_XMM0_Da + dStack_110);
    dVar28 = (double)(~-(ulonglong)(dVar28 < 0.0) & (ulonglong)dVar28 |
                     (ulonglong)(dVar28 + 360.0) & -(ulonglong)(dVar28 < 0.0));
    dStack_110 = (double)(~-(ulonglong)(180.0 < dVar28) & (ulonglong)dVar28 |
                         (ulonglong)(dVar28 + -360.0) & -(ulonglong)(180.0 < dVar28));
  }
  else {
    bVar11 = *(byte *)(lVar15 + 0x8b);
    if (*(char *)(lVar14 + 0x683) == '\x01') {
      pcVar16 = (char *)(lVar14 + 0x682);
LAB_145796bbe:
      uVar22 = (ulonglong)bVar11 & 0xfffffffffffffffe;
      uVar20 = (undefined4)uVar22;
      cVar19 = (char)uVar22;
      bVar27 = cVar19 != '\x02';
      if ((*pcVar16 != '\x01') || (cVar19 == '\x02')) goto LAB_145796bd9;
      pdVar18 = (double *)&DAT_14c8464e0;
      if (plVar2[0x39] != 0) {
        pdVar18 = (double *)(plVar2[0x39] + 0x260);
      }
      dVar32 = dVar8 - *pdVar18;
      dVar34 = dVar28 - pdVar18[1];
      dVar29 = 0.0;
      if ((((dVar34 != 0.0) || (NAN(dVar34))) || (dVar32 != 0.0)) || (NAN(dVar32))) {
        dVar29 = atan2(dVar34,dVar32);
      }
      dVar29 = dVar29 * 57.29577951308232;
      bVar27 = true;
    }
    else {
      if (*(longlong *)(lVar14 + 0x638) != 0) {
        pcVar16 = (char *)(*(longlong *)(lVar14 + 0x638) + 0x88);
        goto LAB_145796bbe;
      }
      pcVar16 = (char *)((ulonglong)bVar11 & 0xfffffffffffffffe);
      bVar27 = (char)pcVar16 != '\x02';
LAB_145796bd9:
      dVar29 = *(double *)(lVar14 + 0x240);
      dVar32 = *(double *)(lVar14 + 0x248);
      dVar34 = *(double *)(lVar14 + 0x250);
      plVar24 = *(longlong **)(lVar14 + 600);
      pdVar18 = *(double **)(lVar14 + 0x228);
      local_178 = dVar29;
      dStack_170 = dVar32;
      local_168 = dVar34;
      plStack_160 = plVar24;
      if (pdVar18 == (double *)0x0) {
        uVar20 = 0x40;
        pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar18 = DAT_14c8463d0;
        pdVar18[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar18[2] = DAT_14c8463e0;
        pdVar18[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar18[4] = DAT_14c8464f8;
        pdVar18[5] = dVar10;
        pcVar16 = DAT_14c846508;
        pdVar18[6] = (double)DAT_14c846508;
        *(double **)(lVar14 + 0x228) = pdVar18;
      }
      auVar5._8_4_ = (int)-(ulonglong)(dVar32 != pdVar18[1]);
      auVar5._0_8_ = -(ulonglong)(dVar29 != *pdVar18);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar18[1]) >> 0x20);
      iVar12 = movmskpd((int)pcVar16,auVar5);
      auVar7._8_4_ = (int)-(ulonglong)((double)plVar24 != pdVar18[3]);
      auVar7._0_8_ = -(ulonglong)(dVar34 != pdVar18[2]);
      auVar7._12_4_ = (int)(-(ulonglong)((double)plVar24 != pdVar18[3]) >> 0x20);
      uVar21 = movmskpd(uVar20,auVar7);
      if ((uVar21 & 0x3fffffff) != 0 || iVar12 != 0) {
        pdVar18[2] = local_168;
        pdVar18[3] = (double)plStack_160;
        *pdVar18 = local_178;
        pdVar18[1] = dStack_170;
        FUN_1448052ee(&local_178,&local_c8);
        pdVar18[6] = local_b8;
        pdVar18[4] = local_c8;
        pdVar18[5] = dStack_c0;
      }
      dVar29 = pdVar18[5];
    }
    local_c8 = 0.0;
    local_b8 = 0.0;
    dStack_c0 = (double)(float)dVar29;
    FUN_144a7484c(&local_c8,&local_178);
    plVar24 = plStack_160;
    dVar10 = local_168;
    dVar34 = dStack_170;
    dVar32 = local_178;
    *(double *)(param_1 + 0x140) = local_178;
    *(double *)(param_1 + 0x148) = dStack_170;
    *(double *)(param_1 + 0x150) = local_168;
    *(longlong **)(param_1 + 0x158) = plStack_160;
    *(double *)(param_1 + 0x160) = dVar8;
    *(double *)(param_1 + 0x168) = dVar28;
    *(double *)(param_1 + 0x170) = dVar9;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x188) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 400) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x198) = 0;
    if ((bVar11 == 3) || (bVar11 == 1)) {
      local_188 = 0;
      FUN_140bb49c8(*(undefined8 *)(param_1 + 0x1a0),&local_178,*(undefined8 *)(param_1 + 0x98),
                    0x3f800000);
      dVar30 = -dStack_170;
      dVar35 = -local_178;
      dVar36 = dVar35 * dVar10 - dVar32 * -local_168;
      dVar31 = dVar30 * dVar32 - dVar34 * dVar35;
      dVar33 = -local_168 * dVar34 - dVar10 * dVar30;
      dVar33 = dVar33 + dVar33;
      dVar36 = dVar36 + dVar36;
      dVar31 = dVar31 + dVar31;
      dVar28 = dVar28 + (dVar10 * dVar33 - dVar32 * dVar31) + (double)plVar24 * dVar36 + dVar30;
      local_e8 = ((double)plVar24 * dVar31 - local_168) + (dVar36 * dVar32 - dVar33 * dVar34) +
                 dVar9;
      local_f8._8_4_ = SUB84(dVar28,0);
      local_f8._0_8_ =
           dVar8 + (dVar31 * dVar34 - dVar36 * dVar10) + (double)plVar24 * dVar33 + dVar35;
      local_f8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      if ((iVar13 == 1) &&
         (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8), local_e8 = DAT_14c8464f0,
         lVar15 != 0)) {
        local_e8 = *(double *)(lVar15 + 0x270);
      }
    }
    if (!bVar27) {
      local_118 = 0.0;
      local_108 = (char *)0x0;
      dStack_110 = (double)(float)dVar29;
    }
  }
  if (plVar2 == (longlong *)0x0) {
LAB_14579704a:
    if (-1 < (char)plVar2[0xc]) {
LAB_145797054:
      lVar15 = FUN_1457974ea(plVar2);
      if (lVar15 != 0) {
        if (*(char *)(lVar14 + 0x688) == '\x01') {
          puVar26 = (undefined4 *)(lVar14 + 0x684);
LAB_145797095:
          uVar20 = *puVar26;
        }
        else {
          lVar14 = *(longlong *)(lVar14 + 0x638);
          uVar20 = 0;
          if ((lVar14 != 0) && (*(char *)(lVar14 + 0x8b) != '\0')) {
            puVar26 = (undefined4 *)(lVar14 + 0x8c);
            goto LAB_145797095;
          }
        }
        FUN_144a7484c(&local_118,&local_178);
        local_158 = local_f8._0_8_;
        uStack_150 = local_f8._8_8_;
        local_148 = local_e8;
        uStack_140 = 0;
        local_138 = 0x3ff0000000000000;
        uStack_130 = 0x3ff0000000000000;
        local_128 = 0x3ff0000000000000;
        uStack_120 = 0;
        FUN_145797552(lVar15,&local_178,uVar20);
        goto LAB_145796f43;
      }
    }
LAB_14579710c:
    local_188 = CONCAT71(local_188._1_7_,1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x4d0))
              (*(longlong **)(param_1 + 0x38),local_f8,&local_118,0);
  }
  else {
    lVar15 = FUN_14070cc62();
    if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar15 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) goto LAB_14579704a;
    if ((char)plVar2[0xc] < '\0') goto LAB_14579710c;
    lVar15 = plVar2[0x10b];
    if (lVar15 == 0) goto LAB_145797054;
    if (*(char *)(lVar14 + 0x688) == '\x01') {
      puVar26 = (undefined4 *)(lVar14 + 0x684);
LAB_145796ece:
      uVar20 = *puVar26;
    }
    else {
      lVar14 = *(longlong *)(lVar14 + 0x638);
      uVar20 = 0;
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x8b) != '\0')) {
        puVar26 = (undefined4 *)(lVar14 + 0x8c);
        goto LAB_145796ece;
      }
    }
    FUN_144a7484c(&local_118,&local_178);
    local_158 = local_f8._0_8_;
    uStack_150 = local_f8._8_8_;
    local_148 = local_e8;
    uStack_140 = 0;
    local_138 = 0x3ff0000000000000;
    uStack_130 = 0x3ff0000000000000;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0;
    FUN_140ce4034(lVar15,&local_178,uVar20,0);
  }
LAB_145796f43:
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
LAB_145796f5a:
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457974ea FUN_1457974ea body=102 status=ok
// SIG undefined FUN_1457974ea(void)

void FUN_1457974ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1411deb24();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145797552 FUN_145797552 body=308 status=ok
// SIG undefined FUN_145797552(void)

void FUN_145797552(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_14479d2ce(param_1 + 0x520);
  if (lVar1 != 0) {
    puVar4 = &DAT_14c846480;
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x240);
    }
    uVar3 = 0;
    local_90 = 0;
    local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffffffffff00);
    FUN_140ce40e4(param_1 + 0x530,puVar4,param_2,param_3);
    local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffffffffff00);
    FUN_1413d4c10(lVar1,param_2,0,0);
    local_68 = *(undefined8 *)(lVar1 + 0x1900);
    uStack_60 = *(undefined8 *)(lVar1 + 0x1908);
    local_58 = *(undefined4 *)(lVar1 + 0x1910);
    uStack_54 = *(undefined4 *)(lVar1 + 0x1914);
    uStack_50 = *(undefined4 *)(lVar1 + 0x1918);
    uStack_4c = *(undefined4 *)(lVar1 + 0x191c);
    local_88 = *(undefined4 *)(lVar1 + 0x18e8);
    uStack_84 = *(undefined4 *)(lVar1 + 0x18ec);
    uStack_80 = *(undefined4 *)(lVar1 + 0x18f0);
    uStack_7c = *(undefined4 *)(lVar1 + 0x18f4);
    local_78 = *(undefined8 *)(&DAT_000018f8 + lVar1);
    lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x398) + 0x10))(lVar1 + 0x398);
    if (lVar2 != 0) {
      uVar3 = FUN_140849bbe(lVar2);
    }
    local_98 = &local_68;
    FUN_140d63a3c(param_1 + 0x530,*(undefined8 *)(lVar1 + 0x1c8),uVar3,&local_88);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145797688 FUN_145797688 body=248 status=ok
// SIG undefined FUN_145797688(void)

float FUN_145797688(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  double local_b0;
  undefined1 local_a0 [8];
  longlong local_98;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140bb5078(param_1 + 0xd8,local_a0,param_2,&DAT_14cb8d438);
  fVar3 = 0.0;
  if (local_98 != 0) {
    lVar2 = FUN_1402576f0();
    if ((((local_98 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(local_98 + 0x10), lVar1 != 0))
       && ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)))) {
      FUN_1409cd860(local_98,&local_138,0,0x7f7fffff);
      local_d8 = local_138;
      uStack_d4 = uStack_134;
      uStack_d0 = uStack_130;
      uStack_cc = uStack_12c;
      local_c8 = local_128;
      uStack_c4 = uStack_124;
      uStack_c0 = uStack_120;
      uStack_bc = uStack_11c;
      FUN_1448052ee(&local_d8,local_b8);
      fVar3 = (float)local_b0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145797782 FUN_145797782 body=146 status=ok
// SIG undefined FUN_145797782(void)

void FUN_145797782(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145797816 FUN_145797816 body=62 status=ok
// SIG undefined FUN_145797816(void)

void FUN_145797816(longlong param_1)

{
  FUN_145797854(param_1,0);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145797854 FUN_145797854 body=137 status=ok
// SIG undefined FUN_145797854(void)

void FUN_145797854(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != param_2) {
    FUN_140373856(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x1a4)) && (*(int *)(param_1 + 0x1a4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x1a4) = uVar1;
  FUN_14008f53c(param_1 + 400,0);
  return;
}



// FUNCTION 1457978de FUN_1457978de body=132 status=ok
// SIG undefined FUN_1457978de(void)

void FUN_1457978de(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 3) {
    iVar3 = 8;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 8;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x1d8))) &&
     (*(int *)(param_1 + 0x1d8) <= iVar3)) {
    FUN_1488b712e(param_1);
    FUN_145797854(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_145797854(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 0x1d8) = iVar3;
  FUN_140ce78c6(param_1);
  return;
}



// FUNCTION 145797962 FUN_145797962 body=389 status=ok
// SIG undefined FUN_145797962(void)

undefined8 FUN_145797962(float *param_1,undefined8 *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 < 0.0) {
    uVar5 = rand();
    param_3 = (float)(uVar5 & 0x7fff) / 32767.0;
  }
  fVar3 = *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x66;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x6a] == 0.0) {
    fVar8 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar8 = param_1[0x6a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar8) || (uStack_68 != pfVar2)) {
    fVar9 = 0.0;
    do {
      pfVar7 = *(float **)(local_98 + 0x60);
      if (*(float **)(local_98 + 0x60) == (float *)0x0) {
        pfVar7 = local_98;
      }
      bVar4 = fVar9 <= param_3 * fVar3;
      fVar9 = fVar9 + pfVar7[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar4) && (param_3 * fVar3 <= fVar9)) {
        uVar6 = *(undefined8 *)(pfVar7 + (longlong)(int)fStack_7c * 6);
        *param_2 = uVar6;
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        goto LAB_145797a90;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar8));
  }
  uVar6 = 0;
LAB_145797a90:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145797ae8 FUN_145797ae8 body=738 status=ok
// SIG undefined FUN_145797ae8(void)

void FUN_145797ae8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  longlong *plVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  double local_108;
  longlong *plStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar13 = *(longlong *)(param_1 + 0xb0);
  if (lVar13 == 0) {
    lVar13 = FUN_1448abda6(param_1);
  }
  FUN_141246736(&local_108,lVar13);
  if (plStack_100 != (longlong *)0x0) {
    iVar11 = (int)plStack_100[1];
    do {
      if (iVar11 == 0) {
        plVar16 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plStack_100[1];
      bVar17 = iVar11 == iVar9;
      if (bVar17) {
        *(int *)(plStack_100 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
      plVar16 = plStack_100;
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)plStack_100 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_100 + 0x10))();
    }
    if (plVar16 != (longlong *)0x0) {
      if (local_108 != 0.0) {
        uVar12 = FUN_145797dcc();
        cVar10 = FUN_140cee66a(param_1);
        if (cVar10 == '\0') {
          pdVar14 = (double *)(param_1 + 0x240);
          pdVar15 = &local_108;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *pdVar15 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar15 = pdVar15 + 1;
          }
        }
        else {
          local_108 = *(double *)(param_1 + 0x240);
          plStack_100 = *(longlong **)(param_1 + 0x248);
          local_f8 = *(double *)(param_1 + 0x250);
          dStack_f0 = *(double *)(param_1 + 600);
          local_e8 = *(undefined8 *)(param_1 + 0x260);
          uStack_e0 = *(undefined8 *)(param_1 + 0x268);
          local_d8 = *(undefined8 *)(param_1 + 0x270);
          if (*(char *)(param_1 + 0x6c0) == '\x01') {
            dVar7 = *(double *)(param_1 + 0x6a0);
            dVar8 = *(double *)(param_1 + 0x6a8);
            dVar20 = *(double *)(param_1 + 0x6b0) * -1.0;
            dVar21 = *(double *)(param_1 + 0x6b8) * 1.0;
            dVar18 = (double)plStack_100 * dVar7;
            dVar19 = (double)plStack_100 * dVar8;
            dVar6 = local_108 * dVar20;
            dVar4 = local_108 * dVar8;
            dVar5 = local_108 * dVar7;
            dVar3 = dVar20 * local_f8;
            local_108 = (dVar20 * (double)plStack_100 +
                        (local_108 * dVar21 * 1.0 - dStack_f0 * dVar7)) - dVar8 * local_f8 * -1.0;
            plStack_100 = (longlong *)
                          ((dVar21 * (double)plStack_100 + (dVar6 * -1.0 - dStack_f0 * dVar8)) -
                          dVar7 * local_f8 * 1.0);
            local_f8 = dVar21 * local_f8 * 1.0 + dVar18 + (dStack_f0 * dVar20 - dVar4 * 1.0);
            dStack_f0 = dVar3 * -1.0 + dVar19 + (dStack_f0 * dVar21 - dVar5 * -1.0);
          }
          uStack_d0 = 0;
          local_c8 = 0x3ff0000000000000;
          uStack_c0 = 0x3ff0000000000000;
          local_b8 = 0x3ff0000000000000;
          uStack_b0 = 0;
        }
        local_110 = 0;
        FUN_14485c47a(&local_110,param_1);
        FUN_145797dd4(uVar12,&local_110,&local_108);
      }
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145797dcc FUN_145797dcc body=8 status=ok
// SIG undefined FUN_145797dcc(void)

undefined8 FUN_145797dcc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x598);
}



// FUNCTION 145797dd4 FUN_145797dd4 body=415 status=ok
// SIG undefined FUN_145797dd4(void)

void FUN_145797dd4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 in_RDX;
  longlong lVar8;
  double *in_R8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar10;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [32];
  float local_b8;
  float fStack_b4;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  ulonglong local_60;
  
  uVar10 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = FUN_14479d2ce(in_RDX);
  if (lVar7 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar7 = FUN_140cee79e(lVar2 + 0x478,lVar7);
    if (lVar7 != 0) {
      if ((((*(int *)(lVar7 + 8) == 8) && (*(int *)(lVar7 + 0x28) == 0)) &&
          (*(int *)(lVar7 + 0x30) == 0)) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x140), lVar3 != 0)) {
        auVar11._4_12_ = in_XMM3._4_12_;
        auVar11._0_4_ = (float)*in_R8;
        auVar6._4_4_ = uVar10;
        auVar6._0_4_ = (float)in_R8[1];
        auVar6._8_4_ = in_XMM2_Dc;
        auVar6._12_4_ = in_XMM2_Dd;
        auVar12 = insertps(auVar11,auVar6,0x10);
        auVar13._4_4_ = uVar9;
        auVar13._0_4_ = (float)in_R8[2];
        auVar13._8_4_ = in_XMM1_Dc;
        auVar13._12_4_ = in_XMM1_Dd;
        auVar13 = insertps(auVar12,auVar13,0x20);
        auVar12._4_4_ = extraout_XMM0_Db;
        auVar12._0_4_ = (float)in_R8[3];
        auVar12._8_4_ = extraout_XMM0_Dc;
        auVar12._12_4_ = extraout_XMM0_Dd;
        local_78 = insertps(auVar13,auVar12,0x30);
        fStack_b4 = (float)in_R8[5];
        local_b8 = (float)in_R8[4];
        fVar14 = local_b8 * 0.01;
        fVar15 = fStack_b4 * 0.01;
        fVar16 = (float)in_R8[6] * 0.01;
        fVar17 = (float)in_R8[6] * 0.01;
        FUN_144b45650(&local_b8);
        iVar1 = *(int *)(lVar7 + 0x18);
        local_88 = fVar14;
        fStack_84 = fVar15;
        fStack_80 = fVar16;
        fStack_7c = fVar17;
        if ((longlong)iVar1 != 0) {
          lVar4 = *(longlong *)(lVar7 + 0x10);
          lVar8 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + 0x28 + lVar8);
            if (lVar5 != 0) {
              FUN_144b46340(lVar3,lVar5,&local_b8);
            }
            lVar8 = lVar8 + 0x60;
          } while ((longlong)iVar1 * 0x60 != lVar8);
        }
        *(undefined1 *)(lVar7 + 0x49) = 1;
      }
      *(undefined1 *)(lVar2 + 0x500) = 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145797f74 FUN_145797f74 body=48 status=ok
// SIG undefined FUN_145797f74(void)

void FUN_145797f74(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 145797fa4 FUN_145797fa4 body=103 status=ok
// SIG undefined FUN_145797fa4(void)

void FUN_145797fa4(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 1);
  if (((cVar1 != '\0') && (*param_1 != 0)) && (param_1[2] != 0)) {
    FUN_14480f766(*param_1 + 8);
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14579800c(param_1 + 3);
  return;
}



// FUNCTION 14579800c FUN_14579800c body=53 status=ok
// SIG undefined FUN_14579800c(void)

void FUN_14579800c(longlong *param_1)

{
  FUN_145798042();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145798042 FUN_145798042 body=344 status=ok
// SIG undefined FUN_145798042(void)

void FUN_145798042(longlong *param_1)

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
      FUN_14579819c(*local_68 + (longlong)iStack_4c * 0x48 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 14579819c FUN_14579819c body=89 status=ok
// SIG undefined FUN_14579819c(void)

void FUN_14579819c(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1457981f6 FUN_1457981f6 body=116 status=ok
// SIG undefined FUN_1457981f6(void)

longlong FUN_1457981f6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x848))();
  *(undefined1 *)(lVar2 + 8) = 1;
  FUN_1412bcb7a(lVar2,param_3,param_2);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  if (lVar1 != 0) {
    lVar3 = FUN_144a745da();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      (**(code **)(*param_1 + 0x638))(param_1,lVar1);
    }
  }
  return lVar2;
}



// FUNCTION 14579826a FUN_14579826a body=47 status=ok
// SIG undefined FUN_14579826a(void)

longlong FUN_14579826a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144a7e912(param_1 + 0xb0);
  lVar2 = param_1 + 0x118;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0xb0;
  }
  return lVar2;
}



// FUNCTION 14579829a FUN_14579829a body=147 status=ok
// SIG undefined FUN_14579829a(void)

void FUN_14579829a(char *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  cVar2 = *param_1;
  if (param_2 == (longlong *)0x0) {
    if (cVar2 != '\0') {
      if (cVar2 == '\x03') {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else if (cVar2 == '\x01') {
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
      }
      *param_1 = '\0';
    }
  }
  else {
    if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\x01';
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 14579832e FUN_14579832e body=228 status=ok
// SIG undefined FUN_14579832e(void)

undefined8 FUN_14579832e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b95fe50;
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
  *local_38 = &PTR_FUN_14b961660;
  local_38[3] = param_3;
  local_38[4] = &LAB_140f4b61e;
  FUN_140cfdcd0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145798418 FUN_145798418 body=253 status=ok
// SIG undefined FUN_145798418(void)

void FUN_145798418(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0xd70) != 0) &&
      (plVar5 = *(longlong **)(param_1 + 0xd78), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    lVar6 = 0;
    iVar4 = (int)plVar5[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_14579846f;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0xd70);
LAB_14579846f:
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FUN_14480f766(lVar6 + 0xf0);
      *(undefined8 *)(param_1 + 0xb88) = 0;
    }
    if (*(longlong *)(param_1 + 0xb90) != 0) {
      FUN_14480f766(lVar6 + 0x108);
      *(undefined8 *)(param_1 + 0xb90) = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0xd78);
    *(undefined8 *)(param_1 + 0xd70) = 0;
    *(undefined8 *)(param_1 + 0xd78) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (iVar3 != 0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145798511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145798516 FUN_145798516 body=318 status=ok
// SIG undefined FUN_145798516(void)

void FUN_145798516(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_140cfa896();
  if (cVar2 != '\0') {
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar3 = FUN_1447210f0();
      if (lVar3 != 0) {
        uVar5 = *(undefined4 *)(lVar3 + 0x930);
      }
    }
    *(undefined4 *)(param_1 + 0x144) = uVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x150);
  lVar3 = param_1 + 0x160;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar3;
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x178);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar3)) {
    do {
      if (*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x20) != 0) {
        FUN_1408a2052();
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar4) || (CONCAT44(uStack_74,uStack_78) != lVar3)) ||
            (local_88 != plVar1));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145798656 FUN_145798656 body=325 status=ok
// SIG undefined FUN_145798656(void)

void FUN_145798656(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14579879c FUN_14579879c body=282 status=ok
// SIG undefined FUN_14579879c(void)

void FUN_14579879c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    lVar1 = param_1 + -0x2600;
    if (*(char *)(param_1 + 0x1dc) == '\0') {
      if (*(longlong *)(param_1 + -0x2438) != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x1c8);
        local_48 = *(undefined8 *)(param_1 + 0x1b8);
        uStack_40 = *(undefined4 *)(param_1 + 0x1c0);
        uStack_3c = *(undefined4 *)(param_1 + 0x1c4);
        FUN_141226a1c();
      }
      FUN_1458fe636(lVar1);
    }
    FUN_145749ea6(lVar1);
    FUN_1407fcb18(lVar1);
    FUN_1457988b8(lVar1,param_2);
    local_24 = 0;
    local_48 = DAT_14c9a63f8;
    uStack_40 = 0xffffffff;
    local_58 = DAT_14cbc54b0;
    local_50 = 0xffffffff;
    FUN_140f8b8f2(param_1 + -0x2128);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1412d3646(param_1 + 0x38,uVar2);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1400da9ba(param_1 + 0x48,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457988b8 FUN_1457988b8 body=556 status=ok
// SIG undefined FUN_1457988b8(void)

void FUN_1457988b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_14579890f;
  }
  lVar2 = 0;
LAB_14579890f:
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if ((lVar3 != 0 && lVar2 != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x1c8), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_140c7aaec();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_14574a59c(param_1,&local_48,param_2);
      FUN_1436034f6(lVar2,&local_78);
      local_60 = 0;
      local_58 = local_70;
      local_50 = 0;
      FUN_144a76660(&local_60,&local_78);
      fVar5 = sinf(*(float *)(lVar3 + 0x1b8) * 0.017453292);
      dVar6 = (double)fVar5;
      local_68 = DAT_14c8462d0 * dVar6 + local_68;
      local_70 = DAT_14c8462c8 * dVar6 + local_70;
      local_78 = dVar6 * DAT_14c8462c0 + local_78;
      dVar6 = local_68 * local_68 + local_78 * local_78 + local_70 * local_70;
      if (((dVar6 != 1.0) || (dVar7 = local_78, dVar8 = local_68, dVar9 = local_70, NAN(dVar6))) &&
         (dVar7 = DAT_14c8464e0, dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar7 = local_78 * dVar6;
        dVar8 = local_68 * dVar6;
        dVar9 = local_70 * dVar6;
      }
      dVar6 = (double)*(float *)(lVar3 + 0x1b4);
      local_80 = dVar8 * dVar6 + local_38;
      local_88 = dVar9 * dVar6 + local_40;
      local_90 = dVar7 * dVar6 + local_48;
      (**(code **)(*plVar1 + 0x6a8))(plVar1,&local_90,0,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145798ae6 FUN_145798ae6 body=20 status=ok
// SIG undefined FUN_145798ae6(void)

void FUN_145798ae6(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xfb | param_2 << 2;
  return;
}



// FUNCTION 145798afa FUN_145798afa body=20 status=ok
// SIG undefined FUN_145798afa(void)

void FUN_145798afa(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xf7 | param_2 << 3;
  return;
}



// FUNCTION 145798b0e FUN_145798b0e body=12 status=ok
// SIG undefined FUN_145798b0e(void)

void FUN_145798b0e(longlong param_1)

{
  FUN_1412d53e0(*(undefined2 *)(param_1 + 0xe12));
  return;
}



// FUNCTION 145798b1a FUN_145798b1a body=102 status=ok
// SIG undefined FUN_145798b1a(void)

void FUN_145798b1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140d013a8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145798b82 FUN_145798b82 body=102 status=ok
// SIG undefined FUN_145798b82(void)

void FUN_145798b82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140d011dc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145798bea FUN_145798bea body=146 status=ok
// SIG undefined FUN_145798bea(void)

void FUN_145798bea(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x21d0;
  FUN_140457ffc(lVar1,param_1);
  FUN_14035c1e0(lVar1,param_1,*(undefined8 *)(param_1 + 0x1a00),param_1 + 0x16d8);
  local_30 = &LAB_145aca98e;
  local_28 = 0;
  FUN_145798d54(lVar1,local_20,param_1);
  *(undefined8 *)(param_1 + 0x15e0) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145798c7e FUN_145798c7e body=155 status=ok
// SIG undefined FUN_145798c7e(void)

void FUN_145798c7e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1978) = uVar3;
  *(longlong *)(param_1 + 0x1980) = lVar4;
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
  *(bool *)(param_1 + 0x1988) = *(longlong *)(param_1 + 0x1978) != 0;
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145798d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145798d1a FUN_145798d1a body=57 status=ok
// SIG undefined FUN_145798d1a(void)

void FUN_145798d1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcef0 = FUN_140002ddd(FUN_14660d130,uVar1,L"OakVehicleLightSettings");
  }
  return;
}



// FUNCTION 145798d54 FUN_145798d54 body=254 status=ok
// SIG undefined FUN_145798d54(void)

undefined8
FUN_145798d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e7b60;
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
  *local_48 = &PTR_FUN_14b95f7b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f4dcf0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


