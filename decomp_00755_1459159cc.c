// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459159cc FUN_1459159cc body=9 status=ok
// SIG undefined FUN_1459159cc(void)

void FUN_1459159cc(longlong param_1)

{
  FUN_1459159d6(param_1 + 0x10);
  return;
}



// FUNCTION 1459159d6 FUN_1459159d6 body=147 status=ok
// SIG undefined FUN_1459159d6(void)

void FUN_1459159d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43820;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000145915a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145915a6a FUN_145915a6a body=24 status=ok
// SIG undefined FUN_145915a6a(void)

void FUN_145915a6a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145915a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145915a82 FUN_145915a82 body=83 status=ok
// SIG undefined FUN_145915a82(void)

undefined8 * FUN_145915a82(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba46fd0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145915ad6 FUN_145915ad6 body=67 status=ok
// SIG undefined FUN_145915ad6(void)

void FUN_145915ad6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba46fd0;
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
                    /* WARNING: Could not recover jumptable at 0x000145915b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145915b1a FUN_145915b1a body=40 status=ok
// SIG undefined FUN_145915b1a(void)

undefined8 FUN_145915b1a(undefined8 param_1,int param_2)

{
  FUN_145915b42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145915b42 FUN_145915b42 body=109 status=ok
// SIG undefined FUN_145915b42(void)

void FUN_145915b42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b45e210;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145915bb0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145915be6(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145915bb0 FUN_145915bb0 body=53 status=ok
// SIG undefined FUN_145915bb0(void)

void FUN_145915bb0(longlong *param_1)

{
  FUN_145915c1c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145915be6 FUN_145915be6 body=53 status=ok
// SIG undefined FUN_145915be6(void)

void FUN_145915be6(longlong *param_1)

{
  FUN_145915c74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145915c1c FUN_145915c1c body=88 status=ok
// SIG undefined FUN_145915c1c(void)

void FUN_145915c1c(longlong param_1)

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



// FUNCTION 145915c74 FUN_145915c74 body=88 status=ok
// SIG undefined FUN_145915c74(void)

void FUN_145915c74(longlong param_1)

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



// FUNCTION 145915ccc FUN_145915ccc body=132 status=ok
// SIG undefined FUN_145915ccc(void)

void FUN_145915ccc(longlong param_1,int param_2)

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



// FUNCTION 145915d52 FUN_145915d52 body=63 status=ok
// SIG undefined FUN_145915d52(void)

void FUN_145915d52(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145915d92(param_1);
    FUN_14134c698(param_1);
    return;
  }
  FUN_14134c698(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140f8aa92(param_1);
  return;
}



// FUNCTION 145915d92 FUN_145915d92 body=339 status=ok
// SIG undefined FUN_145915d92(void)

void FUN_145915d92(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 145915ee6 FUN_145915ee6 body=253 status=ok
// SIG undefined FUN_145915ee6(void)

void FUN_145915ee6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0();
  puVar3 = *(undefined8 **)(local_40 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (0 < (int)*(uint *)(puVar3 + 1)) {
    plVar5 = (longlong *)*puVar3;
    iVar2 = *(int *)(puVar3 + 2);
    uVar6 = 0;
    do {
      *(int *)(puVar3 + 2) = iVar2 + 1 + (int)uVar6;
      if (*plVar5 == *param_2) {
        FUN_145915fe4(puVar3);
        *(int *)(puVar3 + 0x3f) = *(int *)(puVar3 + 0x3f) + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 0x17;
    } while (*(uint *)(puVar3 + 1) != uVar6);
  }
  if (*(int *)(puVar3 + 4) < 1) {
    bVar4 = 0 < *(int *)(puVar3 + 1);
  }
  else {
    bVar4 = true;
  }
  *(bool *)(param_1 + 0x98) = bVar4;
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145915fe4 FUN_145915fe4 body=111 status=ok
// SIG undefined FUN_145915fe4(void)

void FUN_145915fe4(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0xb8 + *param_1);
    FUN_140f9ed8d(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0xb8),(longlong)iVar2 * 0xb8);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_145916054(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145916054 FUN_145916054 body=62 status=ok
// SIG undefined FUN_145916054(void)

void FUN_145916054(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145916092(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 145916092 FUN_145916092 body=112 status=ok
// SIG undefined FUN_145916092(void)

ulonglong FUN_145916092(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xb8) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xb8,8);
      uVar1 = uVar1 / 0xb8;
    }
  }
  return uVar1;
}



// FUNCTION 145916102 FUN_145916102 body=44 status=ok
// SIG undefined FUN_145916102(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145916102(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc6254 = _DAT_14cbc6254 + -1;
  *param_1 = DAT_14cbc6248;
  DAT_14cbc6248 = param_1;
  return;
}



// FUNCTION 14591612e FUN_14591612e body=40 status=ok
// SIG undefined FUN_14591612e(void)

undefined8 FUN_14591612e(undefined8 param_1,int param_2)

{
  FUN_145916156();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145916156 FUN_145916156 body=175 status=ok
// SIG undefined FUN_145916156(void)

void FUN_145916156(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b021d90;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145916206 FUN_145916206 body=118 status=ok
// SIG undefined FUN_145916206(void)

void FUN_145916206(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014591626e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 145916282 FUN_145916282 body=103 status=ok
// SIG undefined FUN_145916282(void)

void FUN_145916282(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acc3810;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  FUN_144a5dc74(puVar1 + 7);
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 1459162ea FUN_1459162ea body=278 status=ok
// SIG undefined FUN_1459162ea(void)

longlong FUN_1459162ea(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_128 [40];
  undefined1 local_100 [112];
  undefined1 local_90 [16];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*plVar2 + 0x48))(plVar2,local_90);
  lVar3 = FUN_145916402(param_1,local_80);
  FUN_141478002(local_90);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0xa0))(param_2);
    FUN_140d600ee(local_90,uVar4);
    FUN_140d600ee(local_100,local_90);
    if ((longlong)*(int *)(lVar3 + 0x90) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x88);
      lVar3 = (longlong)*(int *)(lVar3 + 0x90) * 0xd8;
      do {
        cVar1 = FUN_1414b3116(local_100,lVar5 + 0x60);
        if (cVar1 != '\0') goto LAB_1459163be;
        lVar5 = lVar5 + 0xd8;
        lVar3 = lVar3 + -0xd8;
      } while (lVar3 != 0);
    }
    lVar5 = 0;
LAB_1459163be:
    FUN_140d5fbf2(local_100);
    FUN_140d5fbf2(local_90);
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145916402 FUN_145916402 body=100 status=ok
// SIG undefined FUN_145916402(void)

ulonglong FUN_145916402(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_14134e836((longlong *)(param_1 + 0xb0),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulonglong *)(lVar3 + 0x10);
    }
  }
  return uVar6;
}



// FUNCTION 145916466 FUN_145916466 body=40 status=ok
// SIG undefined FUN_145916466(void)

undefined8 FUN_145916466(undefined8 param_1,int param_2)

{
  FUN_14591648e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591648e FUN_14591648e body=104 status=ok
// SIG undefined FUN_14591648e(void)

void FUN_14591648e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b015a40;
  FUN_1400e59f7(param_1[0x148],*(undefined4 *)(param_1 + 0x149));
  if (param_1[0x148] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x146] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x135] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459164f6 FUN_1459164f6 body=157 status=ok
// SIG undefined FUN_1459164f6(void)

void FUN_1459164f6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1403ae288(param_1 + 0x70);
  if (cVar1 != '\0') {
    uVar2 = FUN_14008e0ae(param_1 + 0x70);
    lVar3 = FUN_14008e0a4(uVar2);
    local_40 = FUN_140b0b23a;
    local_38 = 0;
    FUN_145916594(local_30,param_1);
    FUN_140e2bd22(lVar3 + 0x138,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145916594 FUN_145916594 body=428 status=ok
// SIG undefined FUN_145916594(void)

longlong * FUN_145916594(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145916674:
    *puVar5 = &PTR_LAB_14b3f7900;
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
    *puVar5 = &PTR_FUN_14b429760;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145916674;
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
    *puVar5 = &PTR_LAB_14b3f7900;
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
    *puVar5 = &PTR_FUN_14b429760;
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



// FUNCTION 145916740 FUN_145916740 body=52 status=ok
// SIG undefined FUN_145916740(void)

void FUN_145916740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14134f0de();
  FUN_145916774(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 145916774 FUN_145916774 body=278 status=ok
// SIG undefined FUN_145916774(void)

void FUN_145916774(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14591688c(param_2);
  if (cVar1 != '\0') {
    FUN_140936648(param_1,param_2,param_3,param_4);
    if (0 < (int)param_1[0x26]) {
      (**(code **)(*param_1 + 0xc0))(param_1,param_2);
      if (param_2 != 0) {
        lVar2 = FUN_144a78b9e();
        if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
           (lVar2 = *(longlong *)(param_2 + 0x3c0), lVar2 != 0)) {
          lVar3 = FUN_1449f3324();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_145791164(local_38,param_1);
            FUN_140ca2242(lVar2 + 0xce0,&local_40,local_38);
            FUN_1449db362(local_38);
            param_1[0x39] = local_40;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x37) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591688c FUN_14591688c body=163 status=ok
// SIG undefined FUN_14591688c(void)

ulonglong FUN_14591688c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (param_1 != 0) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      plVar1 = *(longlong **)(param_1 + 0x3c0);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = FUN_1449f3324();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          if ((*(byte *)(plVar1 + 0x84) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459168fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
            return uVar3;
          }
          uVar3 = 0;
          goto LAB_14591691d;
        }
      }
      uVar3 = 0;
    }
  }
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x152) == '\x04')) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
LAB_14591691d:
  return uVar3 & 0xffffffff;
}



// FUNCTION 145916930 FUN_145916930 body=4 status=ok
// SIG undefined FUN_145916930(void)

undefined4 FUN_145916930(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 145916934 FUN_145916934 body=8 status=ok
// SIG undefined FUN_145916934(void)

bool FUN_145916934(longlong param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// FUNCTION 14591693c FUN_14591693c body=61 status=ok
// SIG undefined FUN_14591693c(void)

longlong FUN_14591693c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148eb31d2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_145916979(lVar2);
  return lVar2;
}



// FUNCTION 145916979 FUN_145916979 body=7 status=ok
// SIG undefined FUN_145916979(void)

void FUN_145916979(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145916980 FUN_145916980 body=93 status=ok
// SIG undefined FUN_145916980(void)

undefined8 * FUN_145916980(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141286eab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145916a46(param_1,iVar1);
      FUN_1413502ea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459169de FUN_1459169de body=104 status=ok
// SIG undefined FUN_1459169de(void)

void FUN_1459169de(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_145916b62(lVar1);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    if (*(longlong *)(param_1 + 0x288) != 0) {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x328);
    }
  }
  FUN_141354436(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  return;
}



// FUNCTION 145916a46 FUN_145916a46 body=116 status=ok
// SIG undefined FUN_145916a46(void)

void FUN_145916a46(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x430,8);
    iVar2 = (int)(uVar1 / 0x430);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x430,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145916aba FUN_145916aba body=123 status=ok
// SIG undefined FUN_145916aba(void)

longlong FUN_145916aba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145916b36 FUN_145916b36 body=42 status=ok
// SIG undefined FUN_145916b36(void)

void FUN_145916b36(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1459174f0();
    return;
  }
  return;
}



// FUNCTION 145916b62 FUN_145916b62 body=458 status=ok
// SIG undefined FUN_145916b62(void)

void FUN_145916b62(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  iVar7 = -1;
  iVar6 = 0;
  if (((char)param_1[0x11f] < '\0') && (iVar6 = 0, (longlong)(int)param_1[0x81] != 0)) {
    lVar4 = param_1[0x80];
    lVar5 = 0;
    iVar6 = 0;
    do {
      if ((*(byte *)(lVar4 + 0x9f + lVar5) & 1) != 0) {
        iVar7 = *(int *)(lVar4 + 0x254 + lVar5);
        iVar6 = *(int *)(lVar4 + 600 + lVar5);
        break;
      }
      lVar5 = lVar5 + 0x268;
    } while ((longlong)(int)param_1[0x81] * 0x268 - lVar5 != 0);
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 0x68))(param_1);
  if ((char)param_1[0x11f] < '\0') {
    iVar2 = (int)param_1[0x81];
    if ((longlong)iVar2 != 0) {
      lVar4 = param_1[0x80];
      lVar5 = 0;
      do {
        if ((*(int *)(lVar4 + 0x254 + lVar5) == iVar7) && (*(int *)(lVar4 + 600 + lVar5) == iVar6))
        {
          uVar8 = (int)(lVar5 >> 3) * 0x3f2b3885;
          if (((int)uVar8 < iVar2 && -1 < (int)uVar8) &&
             (((lVar5 = (ulonglong)(uVar8 & 0x7fffffff) * 0x268,
               *(int *)(lVar4 + 0x254 + lVar5) != -1 || (*(int *)(lVar4 + lVar5 + 600) != 0)) ||
              ((*(byte *)(lVar4 + lVar5 + 0x9f) & 0x20) != 0)))) {
            pbVar1 = (byte *)(lVar4 + 0x9f + lVar5);
            *pbVar1 = *pbVar1 | 1;
          }
          break;
        }
        lVar5 = lVar5 + 0x268;
      } while ((longlong)iVar2 * 0x268 - lVar5 != 0);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1,(int)param_1[0x65]);
  (**(code **)(*param_1 + 0x88))(param_1,*(undefined4 *)((longlong)param_1 + 0x32c));
  bVar9 = (int)param_1[0x81] == 0;
  *(byte *)((longlong)param_1 + 0x8f9) =
       *(byte *)((longlong)param_1 + 0x8f9) & 0xfb | bVar9 * '\x04';
  bVar10 = DAT_14c76409a != 0;
  *(byte *)(param_1 + 0x23) = DAT_14c76409a & bVar9;
  *(bool *)(param_1 + 0x43) = bVar10 && bVar9;
  puVar3 = (ushort *)param_1[0x10];
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
  }
  return;
}



// FUNCTION 145916d2c FUN_145916d2c body=33 status=ok
// SIG undefined FUN_145916d2c(void)

void FUN_145916d2c(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_1413522ca(param_1,uVar1);
  return;
}



// FUNCTION 145916d4e FUN_145916d4e body=201 status=ok
// SIG undefined FUN_145916d4e(void)

void FUN_145916d4e(longlong param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x928) == '\0') {
    if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xb68))) &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0xb60) + 0x254 + (ulonglong)param_2 * 0x280),
        iVar1 != -1)) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x3f0);
      lVar3 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
      do {
        if (*(int *)(lVar4 + 0x254) == iVar1) {
          if (lVar4 != 0) {
            FUN_14135191a(param_1 + 0x428);
            goto LAB_145916d72;
          }
          break;
        }
        lVar4 = lVar4 + 0x268;
        lVar3 = lVar3 + -0x268;
      } while (lVar3 != 0);
    }
    FUN_1401e0130(param_1 + 0x428);
LAB_145916d72:
    *(uint *)(param_1 + 0x328) = param_2;
    FUN_141354aaa(param_1);
    puVar2 = *(ushort **)(param_1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 145916e18 FUN_145916e18 body=194 status=ok
// SIG undefined FUN_145916e18(void)

undefined8 * FUN_145916e18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9d8410;
  FUN_1446ddc76(&local_38,"QueueThumbnailRender",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9d8410;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145916edc FUN_145916edc body=121 status=ok
// SIG undefined FUN_145916edc(void)

void FUN_145916edc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14591741c(param_1,iVar1);
    }
    FUN_141352695((longlong)iVar1 * 0x268 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_145917550(param_1,param_2,iVar1 - param_2);
    FUN_1459174b0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145916f56 FUN_145916f56 body=136 status=ok
// SIG undefined FUN_145916f56(void)

int FUN_145916f56(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0xb00);
  iVar4 = *(int *)(param_1 + 0x3d8);
  if ((bVar1 & 4) != 0) {
    iVar4 = iVar4 + *(int *)(param_1 + 0x3ec);
  }
  iVar3 = *(int *)(param_1 + 0x408);
  if (((bVar1 & 1) != 0) && (iVar3 < iVar4)) {
    iVar3 = iVar4;
  }
  if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
    iVar3 = iVar3 - *(int *)(param_1 + 0x900);
    if (*(int *)(param_1 + 0x8fc) <= iVar3) {
      iVar3 = *(int *)(param_1 + 0x8fc);
    }
  }
  iVar4 = *(int *)(param_1 + 0x908);
  iVar2 = iVar3;
  if (iVar3 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar4 < 1) {
    iVar2 = iVar3;
  }
  if ((((bVar1 & 0x10) != 0) && (iVar4 = *(int *)(param_1 + 0x390), 0 < iVar4)) &&
     (iVar2 % iVar4 != 0)) {
    iVar2 = (iVar4 + iVar2) - iVar2 % iVar4;
  }
  return iVar2;
}



// FUNCTION 145916fde FUN_145916fde body=142 status=ok
// SIG undefined FUN_145916fde(void)

undefined8 FUN_145916fde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  cVar5 = FUN_144729dda(param_1 + 0x54);
  if (cVar5 != '\0') {
    uVar7 = FUN_14479d2ce(param_1 + 0x54);
    uVar7 = FUN_140391a3c(uVar7);
    return uVar7;
  }
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_140391552();
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
  return uVar7;
}



// FUNCTION 14591706c FUN_14591706c body=195 status=ok
// SIG undefined FUN_14591706c(void)

void FUN_14591706c(undefined8 *param_1)

{
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b895fa0;
  FUN_141352c8a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145917130 FUN_145917130 body=97 status=ok
// SIG undefined FUN_145917130(void)

longlong FUN_145917130(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1459172b8(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x50 + *param_1;
  }
  lVar3 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 145917192 FUN_145917192 body=120 status=ok
// SIG undefined FUN_145917192(void)

longlong FUN_145917192(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591720c FUN_14591720c body=171 status=ok
// SIG undefined FUN_14591720c(void)

bool FUN_14591720c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((((((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
         (cVar1 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18)),
         cVar1 != '\0')) && (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) &&
       ((cVar1 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28)),
        cVar1 != '\0' && (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))))) &&
      ((cVar1 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38)),
       cVar1 != '\0' &&
       ((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
        (cVar1 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48)),
        cVar1 != '\0')))))) &&
     ((*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60) &&
      (cVar1 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58)),
      cVar1 != '\0')))) {
    return *(char *)(param_1 + 0x68) == *(char *)(param_2 + 0x68);
  }
  return false;
}



// FUNCTION 1459172b8 FUN_1459172b8 body=207 status=ok
// SIG undefined FUN_1459172b8(void)

int FUN_1459172b8(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_145917302:
      lVar10 = (longlong)iVar1 * 0x50;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14591737c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14591737c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14591736d;
    }
  }
  return -1;
LAB_14591737c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14591736d:
  iVar1 = *(int *)(lVar4 + 0x48 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_145917302;
}



// FUNCTION 145917388 FUN_145917388 body=146 status=ok
// SIG undefined FUN_145917388(void)

void FUN_145917388(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x430,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x430)) {
      uVar5 = uVar4 / 0x430 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x430,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14591741c FUN_14591741c body=146 status=ok
// SIG undefined FUN_14591741c(void)

void FUN_14591741c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x268,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x268)) {
      uVar5 = uVar4 / 0x268 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x268,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459174b0 FUN_1459174b0 body=63 status=ok
// SIG undefined FUN_1459174b0(void)

void FUN_1459174b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1459175b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x268,8);
  }
  return;
}



// FUNCTION 1459174f0 FUN_1459174f0 body=95 status=ok
// SIG undefined FUN_1459174f0(void)

void FUN_1459174f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 145917550 FUN_145917550 body=100 status=ok
// SIG undefined FUN_145917550(void)

void FUN_145917550(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x268 + *param_1);
  FUN_1412d6a39(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x268 + (longlong)_Dst),(longlong)iVar2 * 0x268);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1459175b4 FUN_1459175b4 body=103 status=ok
// SIG undefined FUN_1459175b4(void)

ulonglong FUN_1459175b4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x268) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x268,8);
      uVar1 = uVar1 / 0x268;
    }
  }
  return uVar1;
}



// FUNCTION 14591761c FUN_14591761c body=821 status=ok
// SIG undefined FUN_14591761c(void)

void FUN_14591761c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 == 0) || (cVar3 = FUN_144729dda(param_1 + 0x30), cVar3 == '\0'))
  goto switchD_1459176a3_default;
  *(undefined1 *)(lVar1 + 0x928) = 0;
  *(undefined1 *)(lVar1 + 0xc0) = 0;
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  switch(param_2) {
  case 1:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    uVar5 = DAT_14cbd9418;
    goto LAB_14591790b;
  case 2:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    puVar4[7] = DAT_14cbd9410;
    FUN_140391314(param_1,puVar4);
    goto switchD_1459176a3_default;
  case 3:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    puVar4[7] = DAT_14cbd9408;
    FUN_140391314(param_1,puVar4);
    FUN_145da3a42(param_1);
    goto switchD_1459176a3_default;
  case 4:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    puVar4[7] = DAT_14cbd93f0;
    FUN_140391314(param_1,puVar4);
    puVar4 = &DAT_14cbde088;
    break;
  case 5:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    puVar4[7] = DAT_14cbd9420;
    FUN_140391314(param_1,puVar4);
    puVar4 = &DAT_14cbde0a8;
    break;
  case 6:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar4,uVar5,local_38,1);
    *puVar4 = &PTR_FUN_14b9c1410;
    uVar5 = DAT_14cbd9458;
LAB_14591790b:
    puVar4[7] = uVar5;
    FUN_140391314(param_1,puVar4);
    puVar4 = &DAT_14cbde068;
    break;
  default:
    goto switchD_1459176a3_default;
  }
  FUN_140de1078(param_1,puVar4,0,0);
switchD_1459176a3_default:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145917952 FUN_145917952 body=1834 status=ok
// SIG undefined FUN_145917952(void)

void FUN_145917952(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  PSRWLOCK SRWLock;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  void *_Src;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 *local_190;
  PSRWLOCK local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  void **local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((param_2 < 0x32 && lVar5 != 0) && ((int)param_2 < *(int *)(lVar5 + 0xb68))) {
    if ((*(byte *)(*(longlong *)(lVar5 + 0xb60) + 0x9d + (ulonglong)param_2 * 0x280) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_1b8);
    }
    FUN_14135151e(lVar5,param_2);
    plVar6 = (longlong *)FUN_14134fd62(param_1);
    lVar13 = *plVar6;
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x1478));
    lVar12 = (ulonglong)param_2 * 0x68;
    ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0x1478));
    plVar6 = (longlong *)FUN_14134fce6(param_1);
    lVar10 = *plVar6;
    local_180 = (PSRWLOCK)(lVar10 + 0xb0);
    AcquireSRWLockExclusive(local_180);
    *(int *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa8) + 1;
    FUN_1449a0272((undefined8 *)(lVar10 + 0x38),lVar13 + lVar12 + 0x30);
    if (*(int *)(lVar10 + 0x40) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(lVar10 + 0x38);
    }
    lVar13 = lVar13 + lVar12;
    lVar12 = 0;
    do {
      uVar4 = puVar8[lVar12];
      bVar3 = "weapon"[lVar12];
      iVar11 = (uint)uVar4 - (uint)bVar3;
      if (iVar11 == 0) {
        if (uVar4 == 0) goto LAB_145917d32;
      }
      else {
        if (0x7f < ((uint)bVar3 | (uint)uVar4)) goto LAB_145917a91;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar3]) goto code_r0x000145917a8e;
      }
      lVar12 = lVar12 + 1;
    } while( true );
  }
  goto LAB_145917c53;
code_r0x000145917a8e:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_145917a91:
  if (iVar11 == 0) {
LAB_145917d32:
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    FUN_1413a454c(local_118,param_2 + 1,0);
    FUN_140009b9a(local_138,lVar13);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_1446ddda2(&local_c8,"WeaponSlotNumberConcatString",0);
    FUN_1410d1eba(local_158,&local_c8);
    FUN_14023409e(&local_148,local_158,1);
    local_a0 = (void *)CONCAT44(local_a0._4_4_,4);
    FUN_14023423e(local_90,local_138);
    local_80 = 4;
    FUN_14023423e(local_70,local_118);
    local_e8 = &local_a0;
    local_e0 = local_60;
    FUN_14010d304(&local_d8);
    local_f8 = local_148;
    local_f0 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_108,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,local_d0);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    lVar13 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_a0 + lVar13) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a0 + lVar13) + 0x10))();
        *(undefined8 *)((longlong)&local_a0 + lVar13) = 0;
        *(undefined4 *)((longlong)local_98 + lVar13) = 0;
      }
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != -0x10);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_140 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    uVar9 = FUN_1447a1f4a(local_108);
    FUN_1449a0272(lVar10 + 0x20,uVar9);
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    plVar6 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_120)(plStack_120);
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
  else {
    FUN_1449a0272(lVar10 + 0x20,lVar13);
  }
  if (*(uint *)(lVar10 + 0x18) == param_2) {
    if (*(int *)(lVar10 + 0x1c) == 0) {
      iVar11 = 1;
      goto LAB_145917b00;
    }
  }
  else {
    iVar11 = *(int *)(lVar10 + 0x1c) + 1;
LAB_145917b00:
    *(uint *)(lVar10 + 0x18) = param_2;
    *(int *)(lVar10 + 0x1c) = iVar11;
  }
  ReleaseSRWLockExclusive(local_180);
  lVar13 = *(longlong *)(param_1 + 0x288);
  if (lVar13 == 0) {
    lVar10 = 0;
  }
  else if ((*(int *)(lVar13 + 0x8e4) == -1) && (*(int *)(lVar13 + 0x8e8) == 0)) {
    lVar10 = 0;
    if ((*(byte *)(lVar13 + 0x72f) & 0x20) != 0) {
      lVar10 = lVar13 + 0x690;
    }
  }
  else {
    lVar10 = lVar13 + 0x690;
  }
  plVar6 = (longlong *)FUN_14134fce6(param_1);
  lVar13 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0xb0));
  *(int *)(lVar13 + 0xa8) = *(int *)(lVar13 + 0xa8) + 1;
  FUN_148e1cd3a(lVar13,lVar10,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0xb0));
  _Src = DAT_14cbde148;
  if (lVar10 == 0) {
    local_a0 = (void *)0x0;
    lVar13 = (longlong)DAT_14cbde150;
    local_98[0] = DAT_14cbde150;
    if (lVar13 == 0) {
      local_98[1] = 0;
    }
    else {
      FUN_1446dd670(&local_a0,DAT_14cbde150,0);
      memcpy(local_a0,_Src,lVar13 * 2);
    }
  }
  else {
    FUN_148ee3dae(lVar10,&local_a0);
  }
  FUN_140de1078(param_1,&local_a0,0,0);
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar10 == 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(&local_a0,"ClearItem",1);
    FUN_14039176c(puVar7,uVar9,local_a0,1);
    *puVar7 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar7 + 7) = 1;
    FUN_140391314(param_1,puVar7);
  }
  else {
    uVar9 = FUN_14001cc68(0x148,0x10);
    local_190 = &local_178;
    local_178 = (undefined4)DAT_14c8464e0;
    uStack_174 = DAT_14c8464e0._4_4_;
    uStack_170 = (undefined4)DAT_14c8464e8;
    uStack_16c = DAT_14c8464e8._4_4_;
    local_168 = DAT_14c8464f0;
    local_198 = *(undefined4 *)(lVar10 + 0x254);
    FUN_14664e342(uVar9,*(undefined8 *)(param_1 + 0x30),1,*(undefined8 *)(lVar10 + 0x25c));
    FUN_140391314(param_1,uVar9);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_a0,"SetVisible",1);
    FUN_14039176c(puVar7,uVar9,local_a0,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
    FUN_140391314(param_1,puVar7);
    plVar6 = (longlong *)FUN_14134fce6(param_1);
    lVar13 = *plVar6;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0xb0));
    *(int *)(lVar13 + 0xa8) = *(int *)(lVar13 + 0xa8) + 1;
    FUN_148e1ce8a(lVar13,lVar10,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0xb0));
    FUN_146234f2c(lVar5,*(undefined4 *)(lVar5 + 0x32c));
  }
  plVar6 = (longlong *)FUN_14134fce6(param_1);
  lVar5 = *plVar6;
  SRWLock = (PSRWLOCK)(lVar5 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar11 = *(int *)(lVar5 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (iVar11 == 0) {
    FUN_1442e2a90(param_1,1);
  }
LAB_145917c53:
  if ((local_60[0] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459180aa FUN_1459180aa body=2605 status=ok
// SIG undefined FUN_1459180aa(void)

void FUN_1459180aa(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  PSRWLOCK pRVar9;
  undefined1 auStack_78 [32];
  PSRWLOCK local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_145918840;
  puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar7 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_50,"SetVisible",1);
  FUN_14039176c(puVar7,uVar2,local_50,1);
  *puVar7 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
  FUN_140391314(param_1,puVar7);
  if (param_2 != 1) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar7,uVar2,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    FUN_140391314(param_1,puVar7);
    FUN_14135151e(lVar1,0xffffffff);
    FUN_145916d4e(lVar1,0xffffffff);
  }
  plVar8 = (longlong *)FUN_14134fce6(param_1);
  lVar3 = *plVar8;
  pRVar9 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockExclusive(pRVar9);
  *(int *)(lVar3 + 0xa8) = *(int *)(lVar3 + 0xa8) + 1;
  bVar5 = FUN_141304ab2(param_1);
  switch(param_2) {
  case 0:
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (*(int *)(lVar3 + 0x14) == 0) {
        iVar6 = 1;
        goto LAB_1459181a8;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
LAB_1459181a8:
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(int *)(lVar3 + 0x14) = iVar6;
    }
    if (*(int *)(lVar3 + 0x18) == -1) {
      if (*(int *)(lVar3 + 0x1c) == 0) {
        iVar6 = 1;
        goto LAB_1459181c5;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x1c) + 1;
LAB_1459181c5:
      *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
      *(int *)(lVar3 + 0x1c) = iVar6;
    }
    if (*(char *)(lVar3 + 0x70) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_14591898f:
      *(undefined1 *)(lVar3 + 0x70) = 1;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    else if (*(int *)(lVar3 + 0x74) == 0) {
      iVar6 = 1;
      goto LAB_14591898f;
    }
    if (*(char *)(lVar3 + 0x78) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x7c) + 1;
LAB_1459189bf:
      *(undefined1 *)(lVar3 + 0x78) = 1;
      *(int *)(lVar3 + 0x7c) = iVar6;
    }
    else if (*(int *)(lVar3 + 0x7c) == 0) {
      iVar6 = 1;
      goto LAB_1459189bf;
    }
    if (*(char *)(lVar3 + 0x80) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
LAB_1459189e9:
      *(undefined1 *)(lVar3 + 0x80) = 1;
      *(int *)(lVar3 + 0x84) = iVar6;
    }
    else if (*(int *)(lVar3 + 0x84) == 0) {
      iVar6 = 1;
      goto LAB_1459189e9;
    }
    FUN_146234ee6(lVar3);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(&local_50,"ClearItem",1);
    FUN_14039176c(puVar7,uVar2,local_50,1);
    *puVar7 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar7 + 7) = 1;
    FUN_140391314(param_1,puVar7);
    ReleaseSRWLockExclusive(pRVar9);
    plVar8 = (longlong *)FUN_14134fdde(param_1);
    lVar3 = *plVar8;
    pRVar9 = (PSRWLOCK)(lVar3 + 0x88);
    AcquireSRWLockShared(pRVar9);
    bVar5 = FUN_145916934(lVar3);
    *(byte *)(lVar1 + 0xb80) = *(byte *)(lVar1 + 0xb80) & 0xfe | bVar5;
    ReleaseSRWLockShared(pRVar9);
    goto LAB_145918818;
  case 1:
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd9418;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (DAT_14c764095 == *(char *)(lVar3 + 0x70)) {
      if (*(int *)(lVar3 + 0x74) == 0) goto LAB_1459186cb;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_1459186cb:
      *(char *)(lVar3 + 0x70) = DAT_14c764095;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    FUN_140de1078(param_1,&DAT_14cbde058,0,0);
    if (*(char *)(lVar3 + 0x80) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
    }
    else {
      if (*(int *)(lVar3 + 0x84) != 0) break;
      iVar6 = 1;
    }
    *(undefined1 *)(lVar3 + 0x80) = 1;
    goto LAB_145918801;
  case 2:
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd9410;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (*(int *)(lVar3 + 0x10) == 2) {
      if (*(int *)(lVar3 + 0x14) == 0) goto LAB_1459185c0;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
LAB_1459185c0:
      *(undefined4 *)(lVar3 + 0x10) = 2;
      *(int *)(lVar3 + 0x14) = iVar6;
    }
    if (*(char *)(lVar3 + 0x70) == '\0') {
      if (*(int *)(lVar3 + 0x74) == 0) {
        iVar6 = 1;
        goto LAB_1459185dd;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_1459185dd:
      *(undefined1 *)(lVar3 + 0x70) = 0;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    if (*(char *)(lVar3 + 0x78) == '\0') {
      if (*(int *)(lVar3 + 0x7c) == 0) {
        iVar6 = 1;
        goto LAB_1459185f7;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x7c) + 1;
LAB_1459185f7:
      *(undefined1 *)(lVar3 + 0x78) = 0;
      *(int *)(lVar3 + 0x7c) = iVar6;
    }
    if (*(char *)(lVar3 + 0x80) == '\0') {
      if (*(int *)(lVar3 + 0x84) == 0) {
        iVar6 = 1;
        goto LAB_145918617;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
LAB_145918617:
      *(undefined1 *)(lVar3 + 0x80) = 0;
      *(int *)(lVar3 + 0x84) = iVar6;
    }
    if (*(int *)(lVar3 + 0x18) == -1) {
      if (*(int *)(lVar3 + 0x1c) == 0) {
        iVar6 = 1;
        goto LAB_145918637;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x1c) + 1;
LAB_145918637:
      *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
      *(int *)(lVar3 + 0x1c) = iVar6;
    }
    FUN_146234ee6(lVar3);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(&local_50,"ClearItem",1);
    FUN_14039176c(puVar7,uVar2,local_50,1);
    *puVar7 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar7 + 7) = 1;
    FUN_140391314(param_1,puVar7);
    break;
  case 3:
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd9408;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (*(int *)(lVar3 + 0x10) == 3) {
      if (*(int *)(lVar3 + 0x14) != 0) goto LAB_1459187e6;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
    }
    *(undefined4 *)(lVar3 + 0x10) = 3;
    *(int *)(lVar3 + 0x14) = iVar6;
    goto LAB_1459187e6;
  case 4:
    local_58 = pRVar9;
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd93f0;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (*(int *)(lVar3 + 0x14) == 0) goto LAB_145918278;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
LAB_145918278:
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(int *)(lVar3 + 0x14) = iVar6;
    }
    if (*(char *)(lVar3 + 0x70) == '\0') {
      if (*(int *)(lVar3 + 0x74) == 0) {
        iVar6 = 1;
        goto LAB_14591829a;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_14591829a:
      *(undefined1 *)(lVar3 + 0x70) = 0;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    if (*(byte *)(lVar3 + 0x78) == (bVar5 ^ 1)) {
      if (*(int *)(lVar3 + 0x7c) == 0) {
        iVar6 = 1;
        goto LAB_145918582;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x7c) + 1;
LAB_145918582:
      *(byte *)(lVar3 + 0x78) = bVar5 ^ 1;
      *(int *)(lVar3 + 0x7c) = iVar6;
    }
    if (*(char *)(lVar3 + 0x80) == '\0') {
      if (*(int *)(lVar3 + 0x84) == 0) {
        iVar6 = 1;
        goto LAB_1459185a1;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
LAB_1459185a1:
      *(undefined1 *)(lVar3 + 0x80) = 0;
      *(int *)(lVar3 + 0x84) = iVar6;
    }
    puVar7 = &DAT_14cbde078;
    goto LAB_145918ac5;
  case 5:
    local_58 = pRVar9;
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd9420;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (*(int *)(lVar3 + 0x10) == 5) {
      if (*(int *)(lVar3 + 0x14) == 0) goto LAB_145918714;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
LAB_145918714:
      *(undefined4 *)(lVar3 + 0x10) = 5;
      *(int *)(lVar3 + 0x14) = iVar6;
    }
    bVar5 = bVar5 ^ 1;
    if (*(byte *)(lVar3 + 0x70) == bVar5) {
      if (*(int *)(lVar3 + 0x74) == 0) {
        iVar6 = 1;
        goto LAB_145918740;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_145918740:
      *(byte *)(lVar3 + 0x70) = bVar5;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    if (*(byte *)(lVar3 + 0x78) == bVar5) {
      if (*(int *)(lVar3 + 0x7c) == 0) {
        iVar6 = 1;
        goto LAB_14591875f;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x7c) + 1;
LAB_14591875f:
      *(byte *)(lVar3 + 0x78) = bVar5;
      *(int *)(lVar3 + 0x7c) = iVar6;
    }
    if (*(char *)(lVar3 + 0x80) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
LAB_145918aaf:
      *(undefined1 *)(lVar3 + 0x80) = 1;
      *(int *)(lVar3 + 0x84) = iVar6;
    }
    else if (*(int *)(lVar3 + 0x84) == 0) {
      iVar6 = 1;
      goto LAB_145918aaf;
    }
    puVar7 = &DAT_14cbde098;
LAB_145918ac5:
    pRVar9 = local_58;
    FUN_140de1078(param_1,puVar7,0,0);
    break;
  case 6:
    local_58 = pRVar9;
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar7 = &PTR_FUN_14b9c13e0;
    iVar6 = 1;
    FUN_1446ddc76(&local_50,"AddState",1);
    FUN_14039176c(puVar7,*(undefined8 *)(param_1 + 0x30),local_50,1);
    *puVar7 = &PTR_FUN_14b9c13e0;
    puVar7[7] = DAT_14cbd9458;
    *(undefined1 *)(puVar7 + 8) = 0;
    FUN_140391314(param_1,puVar7);
    if (*(int *)(lVar3 + 0x10) == 6) {
      if (*(int *)(lVar3 + 0x14) == 0) goto LAB_145918793;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x14) + 1;
LAB_145918793:
      *(undefined4 *)(lVar3 + 0x10) = 6;
      *(int *)(lVar3 + 0x14) = iVar6;
    }
    bVar5 = bVar5 ^ 1;
    if (*(byte *)(lVar3 + 0x70) == bVar5) {
      if (*(int *)(lVar3 + 0x74) == 0) {
        iVar6 = 1;
        goto LAB_1459187bf;
      }
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x74) + 1;
LAB_1459187bf:
      *(byte *)(lVar3 + 0x70) = bVar5;
      *(int *)(lVar3 + 0x74) = iVar6;
    }
    pRVar9 = local_58;
    if (*(byte *)(lVar3 + 0x78) == bVar5) {
      if (*(int *)(lVar3 + 0x7c) != 0) goto LAB_1459187e6;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x7c) + 1;
    }
    *(byte *)(lVar3 + 0x78) = bVar5;
    *(int *)(lVar3 + 0x7c) = iVar6;
LAB_1459187e6:
    if (*(char *)(lVar3 + 0x80) == '\0') {
      if (*(int *)(lVar3 + 0x84) != 0) break;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x84) + 1;
    }
    *(undefined1 *)(lVar3 + 0x80) = 0;
LAB_145918801:
    *(int *)(lVar3 + 0x84) = iVar6;
  }
  ReleaseSRWLockExclusive(pRVar9);
  *(byte *)(lVar1 + 0xb80) = *(byte *)(lVar1 + 0xb80) & 0xfe;
LAB_145918818:
  *(undefined1 *)(lVar1 + 0x928) = 0;
  *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | 0x20;
  puVar4 = *(ushort **)(lVar1 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
LAB_145918840:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145918ad8 FUN_145918ad8 body=64 status=ok
// SIG undefined FUN_145918ad8(void)

longlong FUN_145918ad8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e6082a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1e8 + *param_1;
  thunk_FUN_145918b1e(lVar2);
  return lVar2;
}



// FUNCTION 145918b18 thunk_FUN_145918b1e body=5 status=ok
// SIG undefined thunk_FUN_145918b1e(void)

longlong * thunk_FUN_145918b1e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_141355620(param_1 + 5);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_141355620(param_1 + 0x23);
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  return param_1;
}



// FUNCTION 145918b1e FUN_145918b1e body=134 status=ok
// SIG undefined FUN_145918b1e(void)

longlong * FUN_145918b1e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_141355620(param_1 + 5);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_141355620(param_1 + 0x23);
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  return param_1;
}



// FUNCTION 145918ba4 FUN_145918ba4 body=293 status=ok
// SIG undefined FUN_145918ba4(void)

uint * FUN_145918ba4(longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_144a815a6(param_4);
  if (((lVar5 == 0) || (lVar6 = FUN_1402a1246(lVar5), lVar6 == 0)) ||
     (lVar6 = *(longlong *)(lVar6 + 0xf78), lVar6 == 0)) {
    cVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    if ((cVar2 != '\x01') || (*(char *)((longlong)param_1 + 10) != '\0'))
    goto switchD_145918c02_default;
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 1;
  }
  else {
    switch((char)param_1[1]) {
    case '\0':
      uVar1 = *(uint *)(lVar6 + 0x34);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar1;
      uVar3 = 2;
      goto LAB_145918c61;
    case '\x01':
      if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
        bVar4 = *(int *)(lVar6 + 0xe8) == 0;
      }
      else {
        bVar4 = 0 < *(int *)(lVar6 + 0xe8);
      }
      *(undefined2 *)(param_2 + 6) = 4;
      break;
    case '\x02':
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = 0;
      goto LAB_145918c5f;
    case '\x03':
      lVar5 = FUN_140254ee4(lVar5);
      if (lVar5 == 0) goto switchD_145918c02_default;
      if (*(char *)(lVar5 + 0x138) == '\0') {
        bVar4 = *(int *)(lVar5 + 0x94) <= *(int *)(lVar5 + 0x9c);
      }
      else {
        bVar4 = false;
      }
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        bVar4 = (bool)(bVar4 ^ 1);
      }
      *(undefined2 *)(param_2 + 6) = 4;
      break;
    default:
switchD_145918c02_default:
      *(undefined2 *)(param_2 + 6) = 0;
      uVar3 = 0;
      goto LAB_145918c61;
    }
    *param_2 = (uint)bVar4;
  }
LAB_145918c5f:
  uVar3 = 1;
LAB_145918c61:
  *(undefined1 *)(param_2 + 8) = uVar3;
  return param_2;
}



// FUNCTION 145918cca FUN_145918cca body=55 status=ok
// SIG undefined FUN_145918cca(void)

void FUN_145918cca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x150);
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b2b45a0;
  *(undefined1 *)(param_2 + 0x29) = 7;
  return;
}



// FUNCTION 145918d02 FUN_145918d02 body=40 status=ok
// SIG undefined FUN_145918d02(void)

undefined8 FUN_145918d02(undefined8 param_1,int param_2)

{
  FUN_145918d2a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145918d2a FUN_145918d2a body=249 status=ok
// SIG undefined FUN_145918d2a(void)

void FUN_145918d2a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b4b84b0;
  param_1[5] = &PTR_FUN_14b4b8980;
  lVar3 = param_1[0x133];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  FUN_1459a8f7a(param_1[0x12f],*(undefined4 *)(param_1 + 0x130));
  if (param_1[0x12f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x128];
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
  puVar5 = (undefined8 *)param_1[0x126];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  plVar4 = (longlong *)param_1[0x125];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,1);
  }
  plVar4 = (longlong *)param_1[0x124];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
  }
  FUN_145918e54(param_1);
  return;
}



// FUNCTION 145918e23 FUN_145918e23 body=49 status=ok
// SIG undefined FUN_145918e23(void)

void FUN_145918e23(longlong param_1)

{
  FUN_141462cfc(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145918e54 FUN_145918e54 body=1482 status=ok
// SIG undefined FUN_145918e54(void)

void FUN_145918e54(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a9e9430;
  param_1[5] = &PTR_FUN_14a9e98e0;
  if (param_1[0x112] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10c];
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
  lVar4 = param_1[0x10a];
  if (lVar4 != 0) {
    (**(code **)(lVar4 + -0x10))(lVar4 + -0x10);
  }
  lVar4 = param_1[0x107];
  if (lVar4 != 0) {
    FUN_14591a28e(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_1449db362(param_1 + 0xfe);
  FUN_1449db362(param_1 + 0xfc);
  FUN_1449db362(param_1 + 0xfa);
  plVar3 = (longlong *)param_1[0xf9];
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
  FUN_145919616(param_1 + 0xdd);
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  FUN_1404427ee(param_1 + 0xce);
  *(undefined4 *)(param_1 + 0xcd) = 0;
  if (param_1[0xcc] != 0) {
    FUN_1400020a8();
  }
  FUN_1404427ee(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc2) = 0;
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_145919466(param_1 + 0xb9);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_14591949c(param_1 + 0xaf);
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  FUN_1459194d2(param_1 + 0xa5);
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x9a);
  *(undefined4 *)(param_1 + 0x99) = 0;
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  FUN_145919508(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_14591953e(param_1 + 0x7c);
  FUN_144760e21(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_145919574(param_1 + 0x52);
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_1459195aa(param_1 + 0x43);
  FUN_141355a01(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3a];
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
  plVar3 = (longlong *)param_1[0x38];
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
  plVar3 = (longlong *)param_1[0x34];
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
  plVar3 = (longlong *)param_1[0x32];
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
  plVar3 = (longlong *)param_1[0x30];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  lVar4 = param_1[0x2e];
  if (lVar4 != 0) {
    FUN_145c6ba12(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_145919693(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1459195e0(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6bc(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14591941e FUN_14591941e body=30 status=ok
// SIG undefined FUN_14591941e(void)

void FUN_14591941e(longlong param_1)

{
  FUN_14591973a(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14591943c FUN_14591943c body=42 status=ok
// SIG undefined FUN_14591943c(void)

void FUN_14591943c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145919aae(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145919466 FUN_145919466 body=53 status=ok
// SIG undefined FUN_145919466(void)

void FUN_145919466(longlong *param_1)

{
  FUN_1459197c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591949c FUN_14591949c body=53 status=ok
// SIG undefined FUN_14591949c(void)

void FUN_14591949c(longlong *param_1)

{
  FUN_141355cf6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459194d2 FUN_1459194d2 body=53 status=ok
// SIG undefined FUN_1459194d2(void)

void FUN_1459194d2(longlong *param_1)

{
  FUN_141355ed6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919508 FUN_145919508 body=53 status=ok
// SIG undefined FUN_145919508(void)

void FUN_145919508(longlong *param_1)

{
  FUN_141356290();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591953e FUN_14591953e body=53 status=ok
// SIG undefined FUN_14591953e(void)

void FUN_14591953e(longlong *param_1)

{
  FUN_1413560b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919574 FUN_145919574 body=53 status=ok
// SIG undefined FUN_145919574(void)

void FUN_145919574(longlong *param_1)

{
  FUN_1459196e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459195aa FUN_1459195aa body=53 status=ok
// SIG undefined FUN_1459195aa(void)

void FUN_1459195aa(longlong *param_1)

{
  FUN_141356480();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459195e0 FUN_1459195e0 body=53 status=ok
// SIG undefined FUN_1459195e0(void)

void FUN_1459195e0(longlong *param_1)

{
  FUN_145919934();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919616 FUN_145919616 body=76 status=ok
// SIG undefined FUN_145919616(void)

void FUN_145919616(longlong param_1)

{
  FUN_1449db362(param_1 + 200);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_145919662(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919662 FUN_145919662 body=49 status=ok
// SIG undefined FUN_145919662(void)

void FUN_145919662(longlong param_1,int param_2)

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



// FUNCTION 145919693 FUN_145919693 body=77 status=ok
// SIG undefined FUN_145919693(void)

void FUN_145919693(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459196e0 FUN_1459196e0 body=90 status=ok
// SIG undefined FUN_1459196e0(void)

void FUN_1459196e0(longlong param_1)

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



// FUNCTION 14591973a FUN_14591973a body=94 status=ok
// SIG undefined FUN_14591973a(void)

void FUN_14591973a(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14021c5f2(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_14021c5f2(param_1 + 0x30);
  return;
}



// FUNCTION 145919798 FUN_145919798 body=42 status=ok
// SIG undefined FUN_145919798(void)

void FUN_145919798(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14591a220(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1459197c2 FUN_1459197c2 body=368 status=ok
// SIG undefined FUN_1459197c2(void)

void FUN_1459197c2(longlong *param_1)

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
      FUN_1404427ee(lVar2 + lVar3 + 8);
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



// FUNCTION 145919934 FUN_145919934 body=376 status=ok
// SIG undefined FUN_145919934(void)

void FUN_145919934(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
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
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145919aae FUN_145919aae body=389 status=ok
// SIG undefined FUN_145919aae(void)

void FUN_145919aae(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  FUN_145919c34(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  FUN_145919c6a(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  FUN_145919ca2(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_145919cda(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(param_1);
  return;
}



// FUNCTION 145919c34 FUN_145919c34 body=53 status=ok
// SIG undefined FUN_145919c34(void)

void FUN_145919c34(longlong *param_1)

{
  FUN_14591a0da();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919c6a FUN_145919c6a body=55 status=ok
// SIG undefined FUN_145919c6a(void)

void FUN_145919c6a(longlong *param_1)

{
  FUN_145919f34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919ca2 FUN_145919ca2 body=55 status=ok
// SIG undefined FUN_145919ca2(void)

void FUN_145919ca2(longlong *param_1)

{
  FUN_145919d8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919cda FUN_145919cda body=55 status=ok
// SIG undefined FUN_145919cda(void)

void FUN_145919cda(longlong *param_1)

{
  FUN_145919d12(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145919d12 FUN_145919d12 body=123 status=ok
// SIG undefined FUN_145919d12(void)

void FUN_145919d12(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 145919d8e FUN_145919d8e body=420 status=ok
// SIG undefined FUN_145919d8e(void)

void FUN_145919d8e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_141355aac(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145919f34 FUN_145919f34 body=420 status=ok
// SIG undefined FUN_145919f34(void)

void FUN_145919f34(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_145919ca2(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591a0da FUN_14591a0da body=325 status=ok
// SIG undefined FUN_14591a0da(void)

void FUN_14591a0da(longlong *param_1)

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
      FUN_147bd781c((longlong)iStack_4c * 0x78 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 14591a220 FUN_14591a220 body=53 status=ok
// SIG undefined FUN_14591a220(void)

void FUN_14591a220(longlong param_1)

{
  FUN_141356754();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14591a256(param_1 + 8);
  return;
}



// FUNCTION 14591a256 FUN_14591a256 body=55 status=ok
// SIG undefined FUN_14591a256(void)

void FUN_14591a256(longlong *param_1)

{
  FUN_14591a4c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591a28e FUN_14591a28e body=117 status=ok
// SIG undefined FUN_14591a28e(void)

void FUN_14591a28e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14591a303(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_141356701(param_1[1],(int)param_1[2]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = 0x80;
    do {
      if (*(longlong *)(lVar1 + -0x10 + lVar2) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14591a303 FUN_14591a303 body=52 status=ok
// SIG undefined FUN_14591a303(void)

void FUN_14591a303(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14591a338 FUN_14591a338 body=38 status=ok
// SIG undefined FUN_14591a338(void)

undefined8 FUN_14591a338(undefined8 param_1,int param_2)

{
  FUN_14591a35e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591a35e FUN_14591a35e body=105 status=ok
// SIG undefined FUN_14591a35e(void)

void FUN_14591a35e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f99b50;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14591a3c8(param_1 + 5);
  *param_1 = &PTR_LAB_149f9a4a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14591a3c8 FUN_14591a3c8 body=55 status=ok
// SIG undefined FUN_14591a3c8(void)

void FUN_14591a3c8(longlong *param_1)

{
  FUN_14591a400(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591a400 FUN_14591a400 body=123 status=ok
// SIG undefined FUN_14591a400(void)

void FUN_14591a400(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 14591a47c FUN_14591a47c body=67 status=ok
// SIG undefined FUN_14591a47c(void)

void FUN_14591a47c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14591a4c0(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141356a50(param_1);
    return;
  }
  FUN_14591a540(param_1);
  FUN_14591a4c0(param_1,0);
  return;
}



// FUNCTION 14591a4c0 FUN_14591a4c0 body=127 status=ok
// SIG undefined FUN_14591a4c0(void)

void FUN_14591a4c0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 14591a540 FUN_14591a540 body=335 status=ok
// SIG undefined FUN_14591a540(void)

void FUN_14591a540(longlong *param_1)

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



// FUNCTION 14591a698 FUN_14591a698 body=310 status=ok
// SIG undefined FUN_14591a698(void)

undefined8 * FUN_14591a698(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b60a8e0;
  FUN_140440628(param_1 + 0x33,&DAT_14cbcaa98,0);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0x41f00000;
  *(undefined1 *)(param_1 + 0x40) = 3;
  *(char *)(param_1 + 0x41) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x46) = 4;
  *(undefined4 *)(param_1 + 0x43) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x47) = 3;
  *(char *)(param_1 + 0x48) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 4;
  *(undefined4 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)(param_1 + 0x4f) = 2;
  *(byte *)(param_1 + 0x50) = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_140440628(param_1 + 0x51,&DAT_14cbcaae8,0);
  param_1[0x58] = 0x4120000001000100;
  *(undefined4 *)(param_1 + 0x59) = 0x1000001;
  param_1[0x5a] = 0;
  FUN_14112fbd2(param_1 + 0x5b);
  param_1[0xa8] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  return param_1;
}



// FUNCTION 14591a7ce FUN_14591a7ce body=158 status=ok
// SIG undefined FUN_14591a7ce(void)

bool FUN_14591a7ce(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591a86e FUN_14591a86e body=133 status=ok
// SIG undefined FUN_14591a86e(void)

void FUN_14591a86e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_141356c7a(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_1447210f0(lVar1);
      lVar3 = FUN_1447210f0(param_2);
      if ((lVar2 != lVar3) || (*(int *)(lVar1 + 0x394) != *(int *)(param_2 + 0x394))) {
        return;
      }
    }
  }
  FUN_141356dbe(param_1 + 0x30);
  return;
}



// FUNCTION 14591a8fa FUN_14591a8fa body=234 status=ok
// SIG undefined FUN_14591a8fa(void)

void FUN_14591a8fa(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140b70372(uVar1);
  if (lVar2 != 0) {
    FUN_14591c87c(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_14591aac6(uVar1);
  if (lVar2 != 0) {
    FUN_14591b312(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_141356fb0(uVar1);
  if (lVar2 != 0) {
    FUN_14591abb4(lVar2,param_2);
  }
  lVar2 = FUN_1400b465c(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_1459b10c6(lVar2);
    if (lVar2 != 0) {
      FUN_14591ac6a(lVar2,param_2);
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_14591a9e4(uVar1);
  if (lVar2 != 0) {
    FUN_148aa966a(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_140cb1480(uVar1);
  if (lVar2 != 0) {
    FUN_14135725e(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14591a9e4 FUN_14591a9e4 body=44 status=ok
// SIG undefined FUN_14591a9e4(void)

undefined8 FUN_14591a9e4(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_14591aa10(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 14591aa10 FUN_14591aa10 body=105 status=ok
// SIG undefined FUN_14591aa10(void)

void FUN_14591aa10(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141357178();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_14591aa7a(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591aa7a FUN_14591aa7a body=76 status=ok
// SIG undefined FUN_14591aa7a(void)

void FUN_14591aa7a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141357178();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14591aab7;
    }
  }
  lVar2 = 0;
LAB_14591aab7:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14591aac6 FUN_14591aac6 body=55 status=ok
// SIG undefined FUN_14591aac6(void)

undefined8 FUN_14591aac6(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    plVar1 = (longlong *)FUN_14591aafe();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014591aaef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14591aafe FUN_14591aafe body=105 status=ok
// SIG undefined FUN_14591aafe(void)

void FUN_14591aafe(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145922ada();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_14591ab68(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591ab68 FUN_14591ab68 body=76 status=ok
// SIG undefined FUN_14591ab68(void)

void FUN_14591ab68(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145922ada();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14591aba5;
    }
  }
  lVar2 = 0;
LAB_14591aba5:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14591abb4 FUN_14591abb4 body=180 status=ok
// SIG undefined FUN_14591abb4(void)

void FUN_14591abb4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) goto LAB_14591ac05;
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  FUN_1447cbafe((longlong *)(param_1 + 0x18),local_20,&local_1c,0);
  FUN_14591af3e(param_1,local_1c);
  FUN_14591ad70(param_1,local_1c);
LAB_14591ac05:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591ac6a FUN_14591ac6a body=260 status=ok
// SIG undefined FUN_14591ac6a(void)

void FUN_14591ac6a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  if ((int)param_1[10] != *(int *)((longlong)param_1 + 0x7c)) {
    plVar2 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x11];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0x12] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = param_1[9];
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0xc) == param_2) goto LAB_14591acff;
        iVar3 = *(int *)(lVar1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  FUN_1447cbafe(param_1 + 9,local_18,&local_14,0);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) &&
      (lVar1 = FUN_141030f66(), lVar1 != 0)) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    FUN_14591b552(*(longlong *)(lVar1 + 0x30),local_14,DAT_14cb978e0);
  }
  FUN_14591b11a(param_1,local_14);
  FUN_1413575ba(param_1,local_14);
LAB_14591acff:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591ad70 FUN_14591ad70 body=461 status=ok
// SIG undefined FUN_14591ad70(void)

void FUN_14591ad70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0xc) == param_2) {
          FUN_140f0cb98(&local_28);
          if (local_28 != 0) {
            plVar5 = (longlong *)FUN_140a68038(1);
            if (plVar5 == (longlong *)0x0) {
              local_38 = (longlong *)0x0;
              plStack_30 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar5 + 0xa8))(plVar5,&local_38);
              plVar5 = local_38;
              if (local_38 != (longlong *)0x0) {
                local_48 = (undefined8 *)0x0;
                local_40 = 0;
                FUN_1446efa72(&local_48,0,2,0x10);
                local_40 = 2;
                *local_48 = &PTR_LAB_14b438700;
                LOCK();
                UNLOCK();
                lVar6 = DAT_14c758608 + 1;
                lVar4 = DAT_14c758608 + 1;
                if (lVar6 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar6 = DAT_14c758608 + 2;
                  lVar4 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar4;
                local_48[2] = lVar6;
                *local_48 = &PTR_FUN_14b4e0530;
                (**(code **)(*plVar5 + 0x10))(plVar5,local_28,&local_48);
                FUN_1449db362(&local_48);
              }
            }
            plVar5 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_30)(plStack_30);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_20 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)local_20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_20 + 0x10))(local_20);
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591af3e FUN_14591af3e body=475 status=ok
// SIG undefined FUN_14591af3e(void)

void FUN_14591af3e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *plStack_60;
  uint local_4c;
  uint *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = param_2;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      do {
        if (*(uint *)(lVar4 + (longlong)iVar5 * 0x18) == param_2) goto LAB_14591b06b;
        iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_68);
    plVar3 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_48 = (uint *)0x0;
      local_40 = (undefined1 *)((ulonglong)local_40 & 0xffffffff00000000);
      FUN_1446efa72(&local_48,0,2,0x10);
      local_40 = (undefined1 *)CONCAT44(local_40._4_4_,2);
      *(undefined ***)local_48 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      *(longlong *)(local_48 + 4) = lVar6;
      *(undefined ***)local_48 = &PTR_FUN_14b4e05a0;
      *(longlong *)(local_48 + 6) = param_1;
      (**(code **)(*plVar3 + 0x28))(plVar3,local_70,param_2,&local_48);
      FUN_1449db362(&local_48);
      local_48 = &local_4c;
      local_40 = local_70;
      FUN_14580a48e((longlong *)(param_1 + 0x68),local_34,&local_48,0);
    }
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
LAB_14591b06b:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591b11a FUN_14591b11a body=503 status=ok
// SIG undefined FUN_14591b11a(void)

void FUN_14591b11a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *plStack_60;
  uint local_4c;
  uint *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = param_2;
  if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1b];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x1c] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = param_1[0x13];
      do {
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0x18) == param_2) goto LAB_14591b263;
        iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_48 = (uint *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_68);
    plVar4 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_48 = (uint *)0x0;
      local_40 = (undefined1 *)((ulonglong)local_40 & 0xffffffff00000000);
      FUN_1446efa72(&local_48,0,2,0x10);
      local_40 = (undefined1 *)CONCAT44(local_40._4_4_,2);
      *(undefined ***)local_48 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      *(longlong *)(local_48 + 4) = lVar6;
      *(undefined ***)local_48 = &PTR_FUN_14b4f6670;
      *(longlong **)(local_48 + 6) = param_1;
      (**(code **)(*plVar4 + 0x28))(plVar4,local_70,param_2,&local_48);
      FUN_1449db362(&local_48);
      local_48 = &local_4c;
      local_40 = local_70;
      FUN_14580a48e(param_1 + 0x13,local_34,&local_48,0);
    }
  }
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14591b263:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591b312 FUN_14591b312 body=575 status=ok
// SIG undefined FUN_14591b312(void)

void FUN_14591b312(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = param_2;
  if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
    plVar4 = param_1 + 0xc;
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xd];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0xe] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = param_1[5];
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0xc) == param_2) goto LAB_14591b485;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  FUN_1447cbafe(param_1 + 5,&local_40,&local_2c,0);
  if ((int)param_1[6] - *(int *)((longlong)param_1 + 0x5c) == 1) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_14047a6d2(param_1,local_2c);
  FUN_14591bdb2(param_1,local_2c);
  if ((((param_1[0x23] == 0) || (param_1[0x24] == 0)) || (*(int *)(param_1[0x24] + 8) < 1)) &&
     (0.0 < *(float *)((longlong)param_1 + 300))) {
    *(float *)(param_1 + 0x25) = *(float *)((longlong)param_1 + 300);
    uVar3 = FUN_1401cb356();
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    *local_50 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_50[2] = lVar5;
    *local_50 = &PTR_FUN_14b4f1ef0;
    local_50[3] = param_1;
    local_50[4] = FUN_14047a4f6;
    *(undefined4 *)(local_50 + 5) = 0;
    local_58 = 0;
    FUN_1405f67fc(uVar3,&local_40,&local_50,L"FGbxPresence_Tick");
    param_1[0x23] = local_40;
    local_40 = 0;
    plVar4 = (longlong *)param_1[0x24];
    param_1[0x24] = (longlong)local_38;
    local_38 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_50);
  }
LAB_14591b485:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591b552 FUN_14591b552 body=652 status=ok
// SIG undefined FUN_14591b552(void)

void FUN_14591b552(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = (uint)param_2;
  local_48 = param_3;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar5 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & local_4c) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
      do {
        if (*(uint *)(lVar5 + (longlong)iVar3 * 0xc) == local_4c) goto LAB_14591b5ac;
        iVar3 = *(int *)(lVar5 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  FUN_1447cbafe((longlong *)(param_1 + 0xa8),&local_78,&local_4c,0);
  param_2 = (ulonglong)local_4c;
LAB_14591b5ac:
  lVar5 = local_48;
  plVar4 = (longlong *)FUN_14591b7e0(param_1 + 0x148,param_2,&local_4c);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar7 = (uint)lVar5 & 0xffff;
    plVar6 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar4[8];
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar7) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        uVar2 = local_60;
        if (*(longlong *)(*plVar4 + (longlong)iVar3 * 0x10) == lVar5) goto LAB_14591b683;
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *plVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  FUN_144a13f80(plVar4,&local_78,&local_48,0);
  uVar2 = local_60;
  if ((int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34) == 1) {
    if (1 < *(int *)(param_1 + 0x1a0)) {
      FUN_145ea8fe8(param_1,local_4c);
    }
    local_38 = param_1 + 0x2a8;
    local_40 = 0x100000000;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (*(int *)(param_1 + 0x2c0) != 0) {
      FUN_1449c0562(&local_40);
    }
    local_60 = local_30;
    uVar2 = local_60;
    local_58 = local_28;
    local_54 = local_24;
    local_70 = local_40;
    local_68 = local_38;
    local_60._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    local_78 = (longlong *)(param_1 + 0x298);
    if (local_60._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        FUN_1415816cc(param_1,local_4c,*local_78 + (longlong)iVar3 * 0x78 + 0x10);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
LAB_14591b683:
  local_60 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591b7e0 FUN_14591b7e0 body=197 status=ok
// SIG undefined FUN_14591b7e0(void)

longlong FUN_14591b7e0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar2 != 0) goto LAB_14591b833;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14591b8a6(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x60 + *param_1;
LAB_14591b833:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 14591b8a6 FUN_14591b8a6 body=269 status=ok
// SIG undefined FUN_14591b8a6(void)

undefined4 * FUN_14591b8a6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14591bb10(param_1,local_48);
  FUN_14591b9b4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14591ba52(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_14591bc00(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591b9b4 FUN_14591b9b4 body=156 status=ok
// SIG undefined FUN_14591b9b4(void)

undefined4 * FUN_14591b9b4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_144a87124(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591ba52 FUN_14591ba52 body=189 status=ok
// SIG undefined FUN_14591ba52(void)

undefined8 FUN_14591ba52(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14472eaf0((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145819864(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14591bb10 FUN_14591bb10 body=239 status=ok
// SIG undefined FUN_14591bb10(void)

int * FUN_14591bb10(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14591bc00 FUN_14591bc00 body=432 status=ok
// SIG undefined FUN_14591bc00(void)

void FUN_14591bc00(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 14591bdb2 FUN_14591bdb2 body=654 status=ok
// SIG undefined FUN_14591bdb2(void)

void FUN_14591bdb2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  uint local_54;
  undefined1 *local_50;
  undefined1 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_54 = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0xc) == param_2) {
          local_50 = (undefined1 *)0x0;
          FUN_141164a58(param_1);
          plVar4 = (longlong *)FUN_1401e3228(&local_50);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x80))(plVar4,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,local_70);
              plVar4 = local_68;
              local_80 = &LAB_148a99d08;
              local_78 = 0;
              FUN_14591c104(&local_50,param_1,&local_80,local_70);
              (**(code **)(*plVar4 + 0x28))(plVar4,&local_80,local_54,&local_50);
              FUN_1449db362(&local_50);
              uVar5 = FUN_14591c042(param_1 + 0x78,local_54,&local_54);
              local_50 = local_70;
              local_48 = &local_80;
              FUN_1413f0b32(uVar5,local_3c,&local_50,0);
            }
            plVar4 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
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
          plVar4 = (longlong *)FUN_140a68038(1);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x80))(plVar4,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,local_70);
              local_80 = &LAB_148a99d08;
              local_78 = 0;
              FUN_14591c104(&local_50,param_1,&local_80,local_70);
              (**(code **)(*local_68 + 0x28))(local_68,&local_80,local_54,&local_50);
              FUN_1449db362(&local_50);
              uVar5 = FUN_14591c042(param_1 + 0x78,local_54,&local_54);
              local_50 = local_70;
              local_48 = &local_80;
              FUN_1413f0b32(uVar5,local_3c,&local_50,0);
            }
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_60 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)local_60 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_60 + 0x10))(local_60);
                }
              }
            }
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591c042 FUN_14591c042 body=193 status=ok
// SIG undefined FUN_14591c042(void)

longlong FUN_14591c042(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar2 != 0) goto LAB_14591c0d9;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14591c264(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x60 + *param_1;
LAB_14591c0d9:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 14591c104 FUN_14591c104 body=351 status=ok
// SIG undefined FUN_14591c104(void)

longlong * FUN_14591c104(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14591c1fa:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14591c1fa;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b4f1ff0;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b4f1f80;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 14591c264 FUN_14591c264 body=269 status=ok
// SIG undefined FUN_14591c264(void)

undefined4 * FUN_14591c264(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14591c5da(param_1,local_48);
  FUN_14591c372(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14591c51c(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_14591c6ca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591c372 FUN_14591c372 body=149 status=ok
// SIG undefined FUN_14591c372(void)

undefined4 * FUN_14591c372(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14591c408(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591c408 FUN_14591c408 body=125 status=ok
// SIG undefined FUN_14591c408(void)

undefined8 * FUN_14591c408(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14591c486();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14591c486 FUN_14591c486 body=150 status=ok
// SIG undefined FUN_14591c486(void)

longlong * FUN_14591c486(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14591c51c FUN_14591c51c body=189 status=ok
// SIG undefined FUN_14591c51c(void)

undefined8 FUN_14591c51c(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140ea1a4e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145819f02(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14591c5da FUN_14591c5da body=239 status=ok
// SIG undefined FUN_14591c5da(void)

int * FUN_14591c5da(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14591c6ca FUN_14591c6ca body=432 status=ok
// SIG undefined FUN_14591c6ca(void)

void FUN_14591c6ca(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 14591c87c FUN_14591c87c body=1118 status=ok
// SIG undefined FUN_14591c87c(void)

void FUN_14591c87c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  uint local_54;
  uint *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = param_2;
  if ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4)) {
    plVar5 = param_1 + 0x1d;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x1e];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x1f] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = param_1[0x16];
      do {
        if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == param_2) goto LAB_14591cb8a;
        iVar4 = *(int *)(lVar3 + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
    }
  }
  FUN_1447cbafe(param_1 + 0x16,&local_50,&local_54,0);
  local_50 = &local_54;
  FUN_14591ccdc(param_1 + 0xb9,&local_68,&local_50);
  local_50 = &local_54;
  FUN_14591ccdc(param_1 + 0xc3,&local_68,&local_50);
  FUN_140b708a0(param_1);
  local_50 = (uint *)0x0;
  plVar5 = (longlong *)FUN_1401e3228(&local_50);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
    plVar5 = local_60;
    if (local_68 == (longlong *)0x0) {
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      iVar4 = (**(code **)(*local_68 + 0x138))(local_68,local_54);
      plVar5 = local_68;
      local_50 = (uint *)0x0;
      local_48 = (undefined1 *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48 = (undefined1 *)CONCAT44(local_48._4_4_,3);
      *(undefined ***)local_50 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      *(longlong *)(local_50 + 4) = lVar6;
      *(undefined ***)local_50 = &PTR_FUN_14b4e2ae0;
      *(longlong **)(local_50 + 6) = param_1;
      *(code **)(local_50 + 8) = FUN_148a6cc98;
      local_50[10] = 0;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_70,local_54,&local_50);
      FUN_1449db362(&local_50);
      local_50 = &local_54;
      local_48 = local_70;
      FUN_14580a48e(param_1 + 0x48,local_3c,&local_50,0);
      plVar5 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (iVar4 == 2) {
        FUN_14591d6f0(param_1,local_54);
      }
    }
  }
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
    if (local_68 == (longlong *)0x0) {
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_60 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
    else {
      iVar4 = (**(code **)(*local_68 + 0x138))(local_68,local_54);
      local_50 = (uint *)0x0;
      local_48 = (undefined1 *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48 = (undefined1 *)CONCAT44(local_48._4_4_,3);
      *(undefined ***)local_50 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      *(longlong *)(local_50 + 4) = lVar6;
      *(undefined ***)local_50 = &PTR_FUN_14b4e2ae0;
      *(longlong **)(local_50 + 6) = param_1;
      *(code **)(local_50 + 8) = FUN_148a6ce2c;
      local_50[10] = 0;
      (**(code **)(*local_68 + 0x28))(local_68,local_70,local_54,&local_50);
      FUN_1449db362(&local_50);
      local_50 = &local_54;
      local_48 = local_70;
      FUN_14580a48e(param_1 + 0x52,local_3c,&local_50,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_60 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
      if (iVar4 == 2) {
        FUN_14591d144(param_1,local_54);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1,local_54);
LAB_14591cb8a:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591ccdc FUN_14591ccdc body=291 status=ok
// SIG undefined FUN_14591ccdc(void)

undefined4 * FUN_14591ccdc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14591ceae(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  *(undefined1 *)(local_40 + 7) = 1;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_14591ce00(param_1,uVar4,local_40,&local_4c);
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
      local_40[9] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14591cf96(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591ce00 FUN_14591ce00 body=174 status=ok
// SIG undefined FUN_14591ce00(void)

undefined8 FUN_14591ce00(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        if (*piVar2 == *param_3) {
          plVar10 = *(longlong **)(piVar2 + 4);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          piVar2[4] = param_3[4];
          piVar2[5] = iVar7;
          piVar2[6] = iVar8;
          piVar2[7] = iVar9;
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_14581b724(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = piVar2[8];
      } while (iVar11 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14591ceae FUN_14591ceae body=231 status=ok
// SIG undefined FUN_14591ceae(void)

int * FUN_14591ceae(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14591cf96 FUN_14591cf96 body=428 status=ok
// SIG undefined FUN_14591cf96(void)

void FUN_14591cf96(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 14591d144 FUN_14591d144 body=1451 status=ok
// SIG undefined FUN_14591d144(void)

void FUN_14591d144(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  longlong *plVar3;
  int *piVar4;
  uint *puVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_70;
  longlong *local_68;
  uint local_5c;
  uint *puStack_58;
  longlong **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_5c = param_2;
  if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
    lVar8 = param_1 + 0x368;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x370);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x378) - 1U & param_2) * 4);
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x330);
      do {
        if (*(uint *)(lVar8 + (longlong)iVar10 * 0xc) == param_2) goto LAB_14591d535;
        iVar10 = *(int *)(lVar8 + (longlong)iVar10 * 0xc + 4);
      } while (iVar10 != -1);
    }
  }
  FUN_1447cbafe((longlong *)(param_1 + 0x330),&puStack_58,&local_5c,0);
  plVar7 = (longlong *)FUN_140a68038(1);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_70);
    plVar1 = local_70;
    if (local_70 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
        lVar8 = param_1 + 0x228;
        if (*(longlong *)(param_1 + 0x230) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x230);
        }
        iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x238) - 1U & local_5c) * 4);
        if (iVar10 != -1) {
          lVar8 = *(longlong *)(param_1 + 0x1f0);
          do {
            if (*(uint *)(lVar8 + (longlong)iVar10 * 0x18) == local_5c) goto LAB_14591d2b4;
            iVar10 = *(int *)(lVar8 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      puStack_58 = (uint *)0x0;
      local_50 = (longlong **)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&puStack_58,0,3,0x10);
      local_50 = (longlong **)CONCAT44(local_50._4_4_,3);
      *(undefined ***)puStack_58 = &PTR_LAB_14b42c990;
      puStack_58[2] = local_5c;
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
      *(longlong *)(puStack_58 + 4) = lVar9;
      *(undefined ***)puStack_58 = &PTR_FUN_14b4e2bc0;
      *(longlong *)(puStack_58 + 6) = param_1;
      *(undefined1 **)(puStack_58 + 8) = &LAB_148a6ced2;
      puStack_58[10] = 0;
      (**(code **)(*plVar1 + 8))(plVar1,&local_88,local_5c,&puStack_58);
      FUN_1449db362(&puStack_58);
      puStack_58 = &local_5c;
      local_50 = &local_88;
      FUN_14580a48e((longlong *)(param_1 + 0x1f0),&local_98,&puStack_58,0);
LAB_14591d2b4:
      FUN_14591dd0c(param_1,local_5c,1);
      (**(code **)(*plVar7 + 0x80))(plVar7,&puStack_58);
      if (puStack_58 == (uint *)0x0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar7 + 0x80))(plVar7,&local_98);
        (**(code **)(*local_98 + 0x110))(local_98,&local_88,local_5c);
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar4 = (int *)((longlong)local_90 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
            }
          }
        }
      }
      pplVar6 = local_50;
      if (local_50 != (longlong **)0x0) {
        LOCK();
        pplVar2 = local_50 + 1;
        *(int *)pplVar2 = *(int *)pplVar2 + -1;
        UNLOCK();
        if (*(int *)pplVar2 == 0) {
          (*(code *)**pplVar6)(pplVar6);
          LOCK();
          piVar4 = (int *)((longlong)pplVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pplVar6)[2])(pplVar6);
          }
        }
      }
      plVar1 = local_70;
      if (local_88 != (longlong *)0x0) {
        puStack_58 = (uint *)0x0;
        local_50 = (longlong **)((ulonglong)local_50 & 0xffffffff00000000);
        FUN_1446efa72(&puStack_58,0,3,0x10);
        local_50 = (longlong **)CONCAT44(local_50._4_4_,3);
        *(undefined ***)puStack_58 = &PTR_LAB_14b4e2ca0;
        puStack_58[2] = local_5c;
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
        *(longlong *)(puStack_58 + 4) = lVar9;
        *(undefined ***)puStack_58 = &PTR_FUN_14b4e2c30;
        *(longlong *)(puStack_58 + 6) = param_1;
        *(code **)(puStack_58 + 8) = FUN_14152df52;
        puStack_58[10] = 0;
        (**(code **)(*plVar1 + 0x210))(plVar1,&local_98,&puStack_58);
        FUN_1449db362(&puStack_58);
        puStack_58 = &local_5c;
        local_50 = &local_98;
        FUN_14580a48e(param_1 + 0x150,local_44,&puStack_58,0);
        (**(code **)(*local_70 + 0x270))(local_70,local_88);
      }
      plVar1 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x4c8) == 0) {
        (**(code **)(*plVar7 + 200))(plVar7,&puStack_58);
        puVar5 = puStack_58;
        if (puStack_58 != (uint *)0x0) {
          local_88 = (longlong *)0x0;
          plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
          FUN_1446efa72(&local_88,0,3,0x10);
          plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,3);
          *local_88 = (longlong)&PTR_LAB_14b438a40;
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
          local_88[2] = lVar9;
          *local_88 = (longlong)&PTR_FUN_14b4e2d10;
          local_88[3] = param_1;
          local_88[4] = (longlong)FUN_14124290c;
          *(undefined4 *)(local_88 + 5) = 0;
          (**(code **)(*(longlong *)puVar5 + 0x28))(puVar5,&local_98,&local_88);
          *(longlong **)(param_1 + 0x4c8) = local_98;
          FUN_1449db362(&local_88);
        }
        pplVar6 = local_50;
        if (local_50 != (longlong **)0x0) {
          LOCK();
          pplVar2 = local_50 + 1;
          *(int *)pplVar2 = *(int *)pplVar2 + -1;
          UNLOCK();
          if (*(int *)pplVar2 == 0) {
            (*(code *)**pplVar6)(pplVar6);
            LOCK();
            piVar4 = (int *)((longlong)pplVar6 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (*(code *)(*pplVar6)[2])(pplVar6);
            }
          }
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_68 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar4 = (int *)((longlong)local_68 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
LAB_14591d535:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591d6f0 FUN_14591d6f0 body=1562 status=ok
// SIG undefined FUN_14591d6f0(void)

void FUN_14591d6f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 **ppuVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *plStack_70;
  uint local_5c;
  uint *puStack_58;
  undefined8 **ppuStack_50;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_5c = param_2;
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar7 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar7 = *(longlong *)(param_1 + 800);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x328) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x2e0);
      do {
        if (*(uint *)(lVar7 + (longlong)iVar9 * 0xc) == param_2) goto LAB_14591db70;
        iVar9 = *(int *)(lVar7 + (longlong)iVar9 * 0xc + 4);
      } while (iVar9 != -1);
    }
  }
  FUN_1447cbafe((longlong *)(param_1 + 0x2e0),&puStack_58,&local_5c,0);
  FUN_140b708a0(param_1);
  puStack_58 = (uint *)0x0;
  plVar6 = (longlong *)FUN_1401e3228(&puStack_58);
  if (plVar6 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_78);
    plVar6 = local_78;
    if (local_78 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
        lVar7 = param_1 + 0x1d8;
        if (*(longlong *)(param_1 + 0x1e0) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x1e0);
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & local_5c) * 4);
        if (iVar9 != -1) {
          lVar7 = *(longlong *)(param_1 + 0x1a0);
          do {
            if (*(uint *)(lVar7 + (longlong)iVar9 * 0x18) == local_5c) goto LAB_14591d871;
            iVar9 = *(int *)(lVar7 + (longlong)iVar9 * 0x18 + 0x10);
          } while (iVar9 != -1);
        }
      }
      puStack_58 = (uint *)0x0;
      ppuStack_50 = (undefined8 **)((ulonglong)ppuStack_50 & 0xffffffff00000000);
      FUN_1446efa72(&puStack_58,0,3,0x10);
      ppuStack_50 = (undefined8 **)CONCAT44(ppuStack_50._4_4_,3);
      *(undefined ***)puStack_58 = &PTR_LAB_14b42c990;
      puStack_58[2] = local_5c;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      *(longlong *)(puStack_58 + 4) = lVar8;
      *(undefined ***)puStack_58 = &PTR_FUN_14b4e2bc0;
      *(longlong *)(puStack_58 + 6) = param_1;
      *(undefined1 **)(puStack_58 + 8) = &LAB_1458f9d90;
      puStack_58[10] = 0;
      (**(code **)(*plVar6 + 8))(plVar6,&local_88,local_5c,&puStack_58);
      FUN_1449db362(&puStack_58);
      puStack_58 = &local_5c;
      ppuStack_50 = &local_88;
      FUN_14580a48e((longlong *)(param_1 + 0x1a0),&local_90,&puStack_58,0);
LAB_14591d871:
      FUN_14591dd0c(param_1,local_5c,0);
      FUN_145cf83a8(param_1,&local_88,local_5c,0);
      plVar6 = local_78;
      if (local_88 != (undefined8 *)0x0) {
        puStack_58 = (uint *)0x0;
        ppuStack_50 = (undefined8 **)((ulonglong)ppuStack_50 & 0xffffffff00000000);
        FUN_1446efa72(&puStack_58,0,3,0x10);
        ppuStack_50 = (undefined8 **)CONCAT44(ppuStack_50._4_4_,3);
        *(undefined ***)puStack_58 = &PTR_LAB_14b4e2ca0;
        puStack_58[2] = local_5c;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(puStack_58 + 4) = lVar8;
        *(undefined ***)puStack_58 = &PTR_FUN_14b4e2c30;
        *(longlong *)(puStack_58 + 6) = param_1;
        *(code **)(puStack_58 + 8) = FUN_14152ded8;
        puStack_58[10] = 0;
        (**(code **)(*plVar6 + 0x210))(plVar6,&local_90,&puStack_58);
        FUN_1449db362(&puStack_58);
        puStack_58 = &local_5c;
        ppuStack_50 = &local_90;
        FUN_14580a48e(param_1 + 0x100,local_3c,&puStack_58,0);
        (**(code **)(*local_78 + 0x270))(local_78,local_88);
      }
      plVar6 = (longlong *)CONCAT44(uStack_7c,local_80);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x4c0) == 0) {
        FUN_140b708a0(param_1);
        local_88 = (undefined8 *)0x0;
        plVar6 = (longlong *)FUN_1401e3228();
        if (plVar6 == (longlong *)0x0) {
          puStack_58 = (uint *)0x0;
          ppuStack_50 = (undefined8 **)0x0;
        }
        else {
          (**(code **)(*plVar6 + 200))(plVar6,&puStack_58);
          puVar4 = puStack_58;
          if (puStack_58 != (uint *)0x0) {
            local_88 = (undefined8 *)0x0;
            local_80 = 0;
            FUN_1446efa72(&local_88,0,3,0x10);
            local_80 = 3;
            *local_88 = &PTR_LAB_14b438a40;
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar8 == 0) {
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_88[2] = lVar8;
            *local_88 = &PTR_FUN_14b4e2d10;
            local_88[3] = param_1;
            local_88[4] = FUN_14124290c;
            *(undefined4 *)(local_88 + 5) = 0;
            (**(code **)(*(longlong *)puVar4 + 0x28))(puVar4,&local_90,&local_88);
            *(undefined8 **)(param_1 + 0x4c0) = local_90;
            FUN_1449db362(&local_88);
          }
        }
        ppuVar5 = ppuStack_50;
        if (ppuStack_50 != (undefined8 **)0x0) {
          LOCK();
          ppuVar2 = ppuStack_50 + 1;
          *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
          UNLOCK();
          if (*(int *)ppuVar2 == 0) {
            (*(code *)**ppuVar5)(ppuVar5);
            LOCK();
            piVar3 = (int *)((longlong)ppuVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (*(code *)(*ppuVar5)[2])(ppuVar5);
            }
          }
        }
      }
      plVar6 = local_78;
      if (*(longlong *)(param_1 + 0x4e0) == 0) {
        puStack_58 = (uint *)0x0;
        ppuStack_50 = (undefined8 **)((ulonglong)ppuStack_50 & 0xffffffff00000000);
        FUN_1446efa72(&puStack_58,0,3,0x10);
        ppuStack_50 = (undefined8 **)CONCAT44(ppuStack_50._4_4_,3);
        *(undefined ***)puStack_58 = &PTR_LAB_14b4e27a0;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(puStack_58 + 4) = lVar8;
        *(undefined ***)puStack_58 = &PTR_FUN_14b4e2d80;
        *(longlong *)(puStack_58 + 6) = param_1;
        *(undefined1 **)(puStack_58 + 8) = &LAB_143f11f72;
        puStack_58[10] = 0;
        (**(code **)(*plVar6 + 0x48))(plVar6,&local_88,&puStack_58);
        *(undefined8 **)(param_1 + 0x4e0) = local_88;
        FUN_1449db362(&puStack_58);
      }
    }
  }
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_14591db70:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591dd0c FUN_14591dd0c body=681 status=ok
// SIG undefined FUN_14591dd0c(void)

void FUN_14591dd0c(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 1) {
    plVar7 = (longlong *)FUN_140a68038(1);
    if (plVar7 == (longlong *)0x0) goto LAB_14591de97;
LAB_14591dd70:
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_50);
    plVar7 = (longlong *)CONCAT44(uStack_44,local_48);
    plVar9 = local_50;
  }
  else {
    if (param_3 != 0) goto LAB_14591de97;
    FUN_140b708a0(param_1);
    local_40 = 0;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 != (longlong *)0x0) goto LAB_14591dd70;
    plVar9 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,4,0x10);
    local_48 = 4;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14591debb:
      *local_50 = (longlong)&PTR_LAB_14b4392c0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_50[2] = lVar8;
      *local_50 = (longlong)&PTR_FUN_14b4e3020;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = param_1;
      *(int *)(local_50 + 6) = param_3;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14591debb;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar11);
      lVar4 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_50 = (longlong)&PTR_LAB_14b4392c0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_50[2] = lVar10;
      *local_50 = (longlong)&PTR_FUN_14b4e3020;
      local_50[3] = lVar4;
      local_50[4] = (longlong)plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_50[5] = param_1;
      *(int *)(local_50 + 6) = param_3;
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
    (**(code **)(*plVar9 + 0xe8))(plVar9,param_2,&DAT_14cb97068,&local_50);
    FUN_1449db362(&local_50);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14591de97:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591dfb6 FUN_14591dfb6 body=488 status=ok
// SIG undefined FUN_14591dfb6(void)

undefined8 FUN_14591dfb6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  iVar2 = *(int *)(param_1 + 0x248);
  lVar15 = (longlong)iVar2;
  if (lVar15 != 0) {
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar3 = *plVar1;
    bVar5 = FUN_144729dda(lVar3);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar11 + 1;
      if (iVar11 + 1 < iVar2) {
        iVar13 = iVar2;
      }
      lVar17 = lVar9 * 0x30;
      lVar14 = lVar3 + 0x30 + lVar17;
      iVar12 = iVar11;
      do {
        lVar9 = lVar9 + 1;
        iVar4 = iVar13;
        if (lVar15 <= lVar9) break;
        bVar7 = FUN_144729dda(lVar14);
        iVar12 = iVar12 + 1;
        lVar14 = lVar14 + 0x30;
        iVar4 = iVar12;
      } while ((bVar5 & 1) == bVar7);
      iVar13 = iVar4 - iVar11;
      if ((bVar5 & 1) == 0) {
        FUN_148e14651(lVar17 + lVar3,iVar13);
      }
      else {
        if (iVar10 != iVar11) {
          memmove((void *)((longlong)iVar10 * 0x30 + lVar3),(void *)(lVar17 + lVar3),
                  (longlong)iVar13 * 0x30);
        }
        iVar10 = iVar10 + iVar13;
      }
      iVar11 = iVar4;
      bVar5 = bVar5 ^ 1;
    } while (lVar9 < lVar15);
    *(int *)(param_1 + 0x248) = iVar10;
    if (0 < iVar10) {
      lVar15 = 8;
      uVar16 = 0;
      do {
        cVar6 = FUN_14088ccfe(*plVar1 + lVar15 + -8,param_2);
        if (cVar6 != '\0') {
          uVar8 = FUN_140963a30(lVar15 + *plVar1);
          FUN_14591e24c(plVar1,uVar16 & 0xffffffff);
          FUN_14591e19e(plVar1);
          return uVar8;
        }
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x30;
      } while ((longlong)uVar16 < (longlong)*(int *)(param_1 + 0x248));
    }
  }
  return 0;
}



// FUNCTION 14591e19e FUN_14591e19e body=62 status=ok
// SIG undefined FUN_14591e19e(void)

void FUN_14591e19e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14591e1dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14591e1dc FUN_14591e1dc body=111 status=ok
// SIG undefined FUN_14591e1dc(void)

ulonglong FUN_14591e1dc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 14591e24c FUN_14591e24c body=121 status=ok
// SIG undefined FUN_14591e24c(void)

void FUN_14591e24c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x30 + lVar1),(longlong)iVar3 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14591e2c6 FUN_14591e2c6 body=1385 status=ok
// SIG undefined FUN_14591e2c6(void)

void FUN_14591e2c6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f1;
  undefined1 local_f0 [8];
  undefined2 *local_e8;
  int local_e0;
  undefined1 local_98 [80];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar8 = 0x40001;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar8 = 0x48;
  }
  plVar6 = (longlong *)param_1[0x2a];
  lVar3 = FUN_1403ff07a();
  lVar4 = FUN_141357b6a(plVar6);
  if (lVar4 != lVar3) {
    (**(code **)(*plVar6 + 8))(plVar6,lVar3);
  }
  FUN_140457ffc(plVar6 + 0x3e,param_1);
  local_e8 = (undefined2 *)&LAB_140478844;
  local_e0 = 0;
  FUN_14591ea98(plVar6 + 0x3e,local_f0,param_1);
  FUN_14591e884(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_144a4a122(&local_f1);
    FUN_1446f470e(&local_100,L"DynamicHierarchy",1);
    uVar5 = FUN_141095a0a();
    local_120 = (ulonglong)local_120._4_4_ << 0x20;
    local_128 = 0x40000;
    plVar6 = (longlong *)FUN_140be85e0(uVar5,param_1,local_100,1);
    if (plVar6 != (longlong *)0x0) {
      FUN_1446f470e(&local_108,L"DynamicHierarchy_Deleted",1);
      uVar5 = FUN_141095a0a();
      local_128 = 0;
      FUN_140af9fb2(local_f0,DAT_14c951640,uVar5,local_108);
      uVar5 = DAT_14c951640;
      FUN_1400021e4(local_f0,&local_e8);
      puVar7 = local_e8;
      if (local_e0 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar6 + 0x170))(plVar6,puVar7,uVar5,0x234);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_144757f48();
      uVar1 = *(uint *)((longlong)plVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      do {
        uVar1 = *(uint *)(lVar3 + 8);
        if ((uVar1 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar9 = uVar1 == *(uint *)(lVar3 + 8);
        if (bVar9) {
          *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
        }
        UNLOCK();
      } while (!bVar9);
    }
    FUN_144a49ece(&local_f1);
  }
  cVar2 = FUN_140124222(param_1);
  if (cVar2 == '\0') {
    FUN_1446f470e(&local_110,L"DynamicHierarchy",1);
    local_120 = 0;
    local_128 = local_128 & 0xffffff00;
    lVar3 = FUN_14591e996(param_1,local_110,uVar8,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x5f] = lVar3;
    cVar2 = FUN_144a61b4f();
    if (cVar2 == '\0') {
      uVar1 = *(uint *)(param_1[0x5f] + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_14482b126(lVar3);
    }
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (param_2 == 0) goto LAB_14591e506;
    if ((param_1[0xb] == 0) || (FUN_14591e85c(param_2), param_1[0xb] == 0)) {
      lVar3 = FUN_14591e85c(param_2);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0xb] = lVar3;
    }
    cVar2 = FUN_140124222(param_1);
    if (cVar2 == '\0') {
      FUN_140ad4952(param_1[0x5f],*(undefined8 *)(param_2 + 0x2f8),1);
    }
  }
  else {
    if (param_1[0xb] == 0) {
      FUN_1446f470e(&local_118,L"ControlRig_VM",1);
      local_120 = 0;
      local_128 = local_128 & 0xffffff00;
      lVar3 = FUN_14591ec7d(param_1,local_118,uVar8,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0xb] = lVar3;
      cVar2 = FUN_144a61b4f();
      if (cVar2 == '\0') {
        uVar1 = *(uint *)(param_1[0xb] + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3);
      }
    }
    uVar1 = *(uint *)(param_1[2] + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x19 & 1) != 0) {
      uVar1 = *(uint *)(param_1[0xb] + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
      cVar2 = FUN_140124222(param_1);
      if (cVar2 == '\0') {
        uVar1 = *(uint *)(param_1[0x5f] + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_1447f71cc(lVar3,0x40000000);
      }
    }
    if (param_2 == 0) goto LAB_14591e506;
  }
  lVar3 = FUN_1401242c6();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      == lVar3 + 0x30)) {
    FUN_14576d170(&local_e8,param_2 + 0x6b0,param_1[0x5f]);
    FUN_14576cdd4(param_1 + 0xd6,&local_e8);
    FUN_14576ce32(param_1 + 0xe0,local_98);
    *(undefined4 *)(param_1 + 0xea) = local_48;
    FUN_1456e440c(&local_e8);
  }
LAB_14591e506:
  (**(code **)(*param_1 + 0x308))(param_1);
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14591e830 FUN_14591e830 body=30 status=ok
// SIG undefined FUN_14591e830(void)

void FUN_14591e830(longlong *param_1)

{
  (**(code **)(*param_1 + 0x3a0))();
  FUN_141357988(param_1);
  return;
}



// FUNCTION 14591e85c FUN_14591e85c body=40 status=ok
// SIG undefined FUN_14591e85c(void)

longlong FUN_14591e85c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xb];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,1);
    lVar1 = param_1[0xb];
  }
  return lVar1;
}



// FUNCTION 14591e884 FUN_14591e884 body=109 status=ok
// SIG undefined FUN_14591e884(void)

void FUN_14591e884(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x150);
    local_20[0] = *(undefined4 *)(param_1 + 0x30);
    local_18 = *(undefined8 *)(param_1 + 0x38);
    local_10 = *(longlong *)(param_1 + 0x40);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_14591e8f2(uVar1,local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591e8f2 FUN_14591e8f2 body=74 status=ok
// SIG undefined FUN_14591e8f2(void)

void FUN_14591e8f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14591e93c(*(longlong *)(param_1 + 0xc0) + 0x38);
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014591e938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14591e93c FUN_14591e93c body=90 status=ok
// SIG undefined FUN_14591e93c(void)

undefined4 * FUN_14591e93c(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(longlong *)(param_1 + 4) = lVar4;
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
  return param_1;
}



// FUNCTION 14591e996 FUN_14591e996 body=257 status=ok
// SIG undefined FUN_14591e996(void)

undefined8
FUN_14591e996(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_141095a0a();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591ea98 FUN_14591ea98 body=254 status=ok
// SIG undefined FUN_14591ea98(void)

undefined8
FUN_14591ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b422d40;
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
  *local_48 = &PTR_FUN_14bb767a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14591eb98(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591eb98 FUN_14591eb98 body=216 status=ok
// SIG undefined FUN_14591eb98(void)

undefined8 * FUN_14591eb98(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14591ec7d FUN_14591ec7d body=221 status=ok
// SIG undefined FUN_14591ec7d(void)

undefined8
FUN_14591ec7d(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458937a8();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591ed64 FUN_14591ed64 body=50 status=ok
// SIG undefined FUN_14591ed64(void)

undefined8 * FUN_14591ed64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145974a56(param_1,uVar1);
  *param_1 = &PTR_FUN_149f8fd30;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14591ed9e FUN_14591ed9e body=79 status=ok
// SIG undefined FUN_14591ed9e(void)

undefined8 * FUN_14591ed9e(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14a1693a0;
  *(undefined1 *)(param_1 + 6) = 1;
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



// FUNCTION 14591edf8 FUN_14591edf8 body=47 status=ok
// SIG undefined FUN_14591edf8(void)

undefined8 * FUN_14591edf8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6be270;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xe0;
  return param_1;
}



// FUNCTION 14591ee28 FUN_14591ee28 body=40 status=ok
// SIG undefined FUN_14591ee28(void)

undefined8 FUN_14591ee28(undefined8 param_1,int param_2)

{
  FUN_14591ee50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591ee50 FUN_14591ee50 body=47 status=ok
// SIG undefined FUN_14591ee50(void)

void FUN_14591ee50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d79a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14591ee80 FUN_14591ee80 body=73 status=ok
// SIG undefined FUN_14591ee80(void)

undefined8 * FUN_14591ee80(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14b3ec630;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591eeca FUN_14591eeca body=12 status=ok
// SIG undefined FUN_14591eeca(void)

void FUN_14591eeca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014591eed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14591eed6 FUN_14591eed6 body=31 status=ok
// SIG undefined FUN_14591eed6(void)

undefined8 FUN_14591eed6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591eef6 FUN_14591eef6 body=40 status=ok
// SIG undefined FUN_14591eef6(void)

undefined8 FUN_14591eef6(undefined8 param_1,int param_2)

{
  FUN_14591ef1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591ef1e FUN_14591ef1e body=76 status=ok
// SIG undefined FUN_14591ef1e(void)

void FUN_14591ef1e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40d220;
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b40d290;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591ef6a FUN_14591ef6a body=40 status=ok
// SIG undefined FUN_14591ef6a(void)

undefined8 FUN_14591ef6a(undefined8 param_1,int param_2)

{
  FUN_14591ef92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591ef92 FUN_14591ef92 body=70 status=ok
// SIG undefined FUN_14591ef92(void)

void FUN_14591ef92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b36cb60;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_14591efd8(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 14591efd8 FUN_14591efd8 body=53 status=ok
// SIG undefined FUN_14591efd8(void)

void FUN_14591efd8(longlong *param_1)

{
  FUN_14591f00e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591f00e FUN_14591f00e body=306 status=ok
// SIG undefined FUN_14591f00e(void)

void FUN_14591f00e(longlong *param_1)

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
      FUN_14591f142((longlong)iStack_4c * 0x40 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591f142 FUN_14591f142 body=74 status=ok
// SIG undefined FUN_14591f142(void)

void FUN_14591f142(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591f18c FUN_14591f18c body=184 status=ok
// SIG undefined FUN_14591f18c(void)

undefined8 * FUN_14591f18c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14591f246(param_3);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8);
    local_50 = &LAB_141092ae8;
    local_48 = 0;
    FUN_14591f56a(local_40,param_1);
    local_58 = uVar1;
    FUN_14591f2a2(lVar2,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10),local_40);
    FUN_1449db362(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591f246 FUN_14591f246 body=91 status=ok
// SIG undefined FUN_14591f246(void)

undefined8 FUN_14591f246(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014591f295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14591f2a2 FUN_14591f2a2 body=67 status=ok
// SIG undefined FUN_14591f2a2(void)

undefined8 *
FUN_14591f2a2(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_1413584e0(param_1,param_3);
    FUN_14591f2e6(uVar1,param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,
                  param_4);
  }
  return param_2;
}



// FUNCTION 14591f2e6 FUN_14591f2e6 body=154 status=ok
// SIG undefined FUN_14591f2e6(void)

undefined8 * FUN_14591f2e6(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = 0x20;
  if (param_3 == '\x02') {
LAB_14591f30d:
    if (param_1 + lVar1 != 0) {
      local_30 = 0;
      local_28 = 0;
      FUN_14591f382(&local_30,param_4);
      FUN_14591f400(param_1 + lVar1,param_2,&local_30);
      FUN_1449db362(&local_30);
      goto LAB_14591f346;
    }
  }
  else if (param_3 == '\x01') {
    lVar1 = 8;
    goto LAB_14591f30d;
  }
  *param_2 = 0;
LAB_14591f346:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591f382 FUN_14591f382 body=124 status=ok
// SIG undefined FUN_14591f382(void)

void FUN_14591f382(longlong *param_1,longlong *param_2)

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



// FUNCTION 14591f400 FUN_14591f400 body=216 status=ok
// SIG undefined FUN_14591f400(void)

undefined8 * FUN_14591f400(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14591f4da FUN_14591f4da body=143 status=ok
// SIG undefined FUN_14591f4da(void)

void FUN_14591f4da(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14591f56a FUN_14591f56a body=428 status=ok
// SIG undefined FUN_14591f56a(void)

longlong * FUN_14591f56a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14591f64a:
    *puVar5 = &PTR_LAB_14b42a740;
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
    *puVar5 = &PTR_FUN_14b4284d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14591f64a;
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
    *puVar5 = &PTR_LAB_14b42a740;
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
    *puVar5 = &PTR_FUN_14b4284d0;
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



// FUNCTION 14591f72a FUN_14591f72a body=38 status=ok
// SIG undefined FUN_14591f72a(void)

undefined8 FUN_14591f72a(undefined8 param_1,int param_2)

{
  FUN_14591f750();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591f750 FUN_14591f750 body=363 status=ok
// SIG undefined FUN_14591f750(void)

void FUN_14591f750(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  *param_1 = &PTR_LAB_149e13bd0;
  if ((param_1[9] != 0) && (*(char *)(param_1[9] + 0x10) == '\x01')) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c83f438;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c83f450 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c83f450;
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_78 = &DAT_14c83f428;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c83f438)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        FUN_1467be528(*(undefined8 *)(*local_78 + 8 + (longlong)iVar3 * 0x18),param_1);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != &DAT_14c83f428 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c83f438 ||
               local_60._4_4_ != iVar4));
    }
    local_60 = uVar2;
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      FUN_1467c12e2(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  FUN_14591f8bc(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14591f8bc FUN_14591f8bc body=72 status=ok
// SIG undefined FUN_14591f8bc(void)

void FUN_14591f8bc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e12290;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14591f904 FUN_14591f904 body=132 status=ok
// SIG undefined FUN_14591f904(void)

void FUN_14591f904(longlong param_1,int param_2)

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



// FUNCTION 14591f98a FUN_14591f98a body=180 status=ok
// SIG undefined FUN_14591f98a(void)

undefined8 * FUN_14591f98a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14591fa3e();
  *param_1 = &PTR_LAB_14ab45fe0;
  lVar2 = 0x80;
  do {
    FUN_1413586a6((longlong)param_1 + lVar2);
    lVar2 = lVar2 + 0x1200;
  } while (lVar2 != 0x6c80);
  param_1[0xd90] = &DAT_14c82ba00;
  lVar2 = *param_2;
  param_1[0xd92] = lVar2;
  param_1[0xd94] = 0;
  if (lVar2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,param_1 + 0xd94);
  }
  *(undefined4 *)((longlong)param_1 + 0x6cd3) = 0;
  *(undefined4 *)(param_1 + 0xd9a) = 0;
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}



// FUNCTION 14591fa3e FUN_14591fa3e body=14 status=ok
// SIG undefined FUN_14591fa3e(void)

void FUN_14591fa3e(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149e15d30;
  return;
}



// FUNCTION 14591fa4c FUN_14591fa4c body=40 status=ok
// SIG undefined FUN_14591fa4c(void)

undefined8 FUN_14591fa4c(undefined8 param_1,int param_2)

{
  FUN_14591fa74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14591fa74 FUN_14591fa74 body=251 status=ok
// SIG undefined FUN_14591fa74(void)

void FUN_14591fa74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7b3730;
  param_1[5] = &PTR_FUN_14a7b3b30;
  param_1[6] = &PTR_FUN_14a7b3b70;
  param_1[7] = &PTR_FUN_14a7b3ba0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_14591fb6f(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_14591fba9(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f240(param_1);
  return;
}



// FUNCTION 14591fb6f FUN_14591fb6f body=58 status=ok
// SIG undefined FUN_14591fb6f(void)

void FUN_14591fb6f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140eff75d(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14591fba9 FUN_14591fba9 body=58 status=ok
// SIG undefined FUN_14591fba9(void)

void FUN_14591fba9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a7b9fd0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 14591fbe4 FUN_14591fbe4 body=87 status=ok
// SIG undefined FUN_14591fbe4(void)

undefined1 FUN_14591fbe4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14591fc3c(param_2,param_3);
    FUN_14591fc9a(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14591fc3c FUN_14591fc3c body=93 status=ok
// SIG undefined FUN_14591fc3c(void)

undefined8 * FUN_14591fc3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140861e20(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140a1e386(param_1,iVar1);
      FUN_140a1e307(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14591fc9a FUN_14591fc9a body=93 status=ok
// SIG undefined FUN_14591fc9a(void)

undefined8 * FUN_14591fc9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457f57bc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14591fddc(param_1,iVar1);
      FUN_14591fcf7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14591fcf7 FUN_14591fcf7 body=52 status=ok
// SIG undefined FUN_14591fcf7(void)

void FUN_14591fcf7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14591fd2c(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14591fd2c FUN_14591fd2c body=175 status=ok
// SIG undefined FUN_14591fd2c(void)

undefined8 * FUN_14591fd2c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_140a1e386(param_1 + 5,iVar1,0);
    FUN_140a1e307(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14591fddc FUN_14591fddc body=111 status=ok
// SIG undefined FUN_14591fddc(void)

void FUN_14591fddc(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14591fe62 FUN_14591fe62 body=92 status=ok
// SIG undefined FUN_14591fe62(void)

void FUN_14591fe62(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14591febe(lVar1 + 0xe18,param_1 + 0x8a0);
      return;
    }
  }
  return;
}



// FUNCTION 14591febe FUN_14591febe body=9 status=ok
// SIG undefined FUN_14591febe(void)

void FUN_14591febe(longlong param_1)

{
  FUN_1413590b2(param_1 + 8);
  return;
}



// FUNCTION 14591fec8 FUN_14591fec8 body=54 status=ok
// SIG undefined FUN_14591fec8(void)

void FUN_14591fec8(void)

{
  FUN_14591fefe();
  if (DAT_14cb7c640 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7c620 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14591fefe FUN_14591fefe body=373 status=ok
// SIG undefined FUN_14591fefe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14591fefe(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb7c630;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb7c648 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb7c620;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb7c628 = 0;
  if (DAT_14cb7c62c != 0) {
    FUN_1446f4a44(&DAT_14cb7c620,0);
  }
  _DAT_14cb7c650 = 0xffffffff;
  DAT_14cb7c648 = 0;
  if (0x80 < DAT_14cb7c64c) {
    DAT_14cb7c64c = 0x80;
    FUN_1446efbd8(&DAT_14cb7c630,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920086 FUN_145920086 body=168 status=ok
// SIG undefined FUN_145920086(void)

undefined8 * FUN_145920086(undefined8 *param_1)

{
  FUN_14592012e();
  *param_1 = &PTR_FUN_149f86c40;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  FUN_14592016a(param_1 + 0xf,0);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x2a] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 14592012e FUN_14592012e body=59 status=ok
// SIG undefined FUN_14592012e(void)

undefined8 * FUN_14592012e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f85b30;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 14592016a FUN_14592016a body=115 status=ok
// SIG undefined FUN_14592016a(void)

void FUN_14592016a(longlong *param_1,int param_2)

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
        thunk_FUN_1400020a8(lVar2,0xfff0);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1459201de FUN_1459201de body=291 status=ok
// SIG undefined FUN_1459201de(void)

void FUN_1459201de(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_3 = (longlong *)*param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  *(int *)(param_3 + 0x2c) = (int)param_3[0x2c] + 1;
  local_60 = param_1;
  local_58 = param_4;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar3 = 0x28;
    lVar2 = 0;
    do {
      cVar1 = FUN_140280fd6(param_2,*(longlong *)(param_1 + 0x60) + lVar3 + -0x18);
      if (cVar1 != '\0') {
        if ((int)param_3[1] <= (int)lVar2) goto LAB_14592026d;
        plVar4 = (longlong *)(lVar3 + *param_3);
        goto LAB_14592025d;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar2 < *(int *)(param_1 + 0x68));
  }
  cVar1 = FUN_140280fd6(param_2,param_1 + 0x70);
  if (cVar1 == '\0') {
    cVar1 = FUN_140280fd6(param_2,param_1 + 0xa8);
    if (cVar1 == '\0') {
      cVar1 = FUN_140280fd6(param_2,param_1 + 0xe0);
      if (cVar1 == '\0') goto LAB_14592026d;
      plVar4 = param_3 + 0xe;
    }
    else {
      plVar4 = param_3 + 8;
    }
  }
  else {
    plVar4 = param_3 + 2;
  }
LAB_14592025d:
  FUN_1413593d0(&local_60,param_2,plVar4);
LAB_14592026d:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000145920293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  return;
}



// FUNCTION 145920302 FUN_145920302 body=51 status=ok
// SIG undefined FUN_145920302(void)

void FUN_145920302(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x1d38) != 0) {
    FUN_14096c230(*(longlong *)(param_1 + 0x1d38),param_2);
  }
  FUN_1413594aa(param_1,param_2);
  return;
}



// FUNCTION 145920336 FUN_145920336 body=154 status=ok
// SIG undefined FUN_145920336(void)

void FUN_145920336(void)

{
  FUN_141359509(DAT_14c8731f8,DAT_14c873200);
  if (DAT_14c8731f8 != 0) {
    FUN_1400020a8();
  }
  FUN_141359509(DAT_14c8731e0,DAT_14c8731e8);
  if (DAT_14c8731e0 != 0) {
    FUN_1400020a8();
  }
  FUN_141359509(DAT_14c8731c8,DAT_14c8731d0);
  if (DAT_14c8731c8 != 0) {
    FUN_1400020a8();
  }
  FUN_141359509(DAT_14c8731b0,DAT_14c8731b8);
  if (DAT_14c8731b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459203d6 FUN_1459203d6 body=228 status=ok
// SIG undefined FUN_1459203d6(void)

longlong FUN_1459203d6(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a08c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_147089103;
    local_40 = &LAB_1462a167e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_BaseStore",&DAT_14c9a08c0,&DAT_147089102)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a08c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459204c0 FUN_1459204c0 body=228 status=ok
// SIG undefined FUN_1459204c0(void)

longlong FUN_1459204c0(void)

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
  if (DAT_14c9a4db0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470c760f;
    local_40 = FUN_1462aaee6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardDefaultsProvider",&DAT_14c9a4db0,
                  &DAT_1470c760e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4db0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459205aa FUN_1459205aa body=228 status=ok
// SIG undefined FUN_1459205aa(void)

longlong FUN_1459205aa(void)

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
  if (DAT_14caa1680 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_14744f0df;
    local_40 = &LAB_141040841;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Landscape",L"ControlPointMeshComponent",&DAT_14caa1680,&DAT_14744f0de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1680;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920694 FUN_145920694 body=228 status=ok
// SIG undefined FUN_145920694(void)

longlong FUN_145920694(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1ca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146323840;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14745218b;
    local_40 = &LAB_146323cc2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSplineSegment",&DAT_14caa1ca0,&DAT_14745218a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592077e FUN_14592077e body=228 status=ok
// SIG undefined FUN_14592077e(void)

longlong FUN_14592077e(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1bc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146323840;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147452047;
    local_40 = &LAB_146323845;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSplineControlPoint",&DAT_14caa1bc0,&DAT_147452046)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1bc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592086a FUN_14592086a body=228 status=ok
// SIG undefined FUN_14592086a(void)

longlong FUN_14592086a(void)

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
  if (DAT_14cac9fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1478c911d;
    local_40 = &LAB_14639e84e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"PartitionActor",&DAT_14cac9fc8,&DAT_1478c911c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac9fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920956 FUN_145920956 body=228 status=ok
// SIG undefined FUN_145920956(void)

longlong FUN_145920956(void)

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
  if (DAT_14cab2cf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147552f5b;
    local_40 = FUN_14633cd15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSpawnablesSystem",&DAT_14cab2cf0,&DAT_147552f5a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2cf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920a42 FUN_145920a42 body=228 status=ok
// SIG undefined FUN_145920a42(void)

longlong FUN_145920a42(void)

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
  if (DAT_14cab5a08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147655e6b;
    local_40 = FUN_1417a2d03;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"ByteChannelEvaluatorSystem",&DAT_14cab5a08,
                  &DAT_147655e6a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5a08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920b2e FUN_145920b2e body=228 status=ok
// SIG undefined FUN_145920b2e(void)

longlong FUN_145920b2e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab5c90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14120a94e;
    local_38 = &LAB_14765914b;
    local_40 = FUN_1408bac65;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneComponentTransformSystem",&DAT_14cab5c90,
                  &DAT_14765914a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5c90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920c18 FUN_145920c18 body=228 status=ok
// SIG undefined FUN_145920c18(void)

longlong FUN_145920c18(void)

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
  if (DAT_14cab7008 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1476ce2bd;
    local_40 = FUN_146350b98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"UserListEntry",&DAT_14cab7008,&DAT_1476ce2bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920d02 FUN_145920d02 body=228 status=ok
// SIG undefined FUN_145920d02(void)

longlong FUN_145920d02(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab7ac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_147734fc2;
    local_40 = FUN_146353f7e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/UMG",L"GridSlot",&DAT_14cab7ac0,FUN_146353f5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7ac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920dec FUN_145920dec body=228 status=ok
// SIG undefined FUN_145920dec(void)

longlong FUN_145920dec(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab7b18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_147735f69;
    local_40 = FUN_1433339df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/UMG",L"HorizontalBoxSlot",&DAT_14cab7b18,FUN_146354148);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7b18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920ed8 FUN_145920ed8 body=228 status=ok
// SIG undefined FUN_145920ed8(void)

longlong FUN_145920ed8(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_1477556c5;
    local_40 = &LAB_14635847e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x188;
    FUN_14081cfa3(L"/Script/UMG",L"TextLayoutWidget",&DAT_14cab8920,FUN_14635845c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145920fc2 FUN_145920fc2 body=228 status=ok
// SIG undefined FUN_145920fc2(void)

longlong FUN_145920fc2(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8a48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_147758082;
    local_40 = FUN_146358b02;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/UMG",L"UniformGridSlot",&DAT_14cab8a48,FUN_146358ae0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8a48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459210ac FUN_1459210ac body=228 status=ok
// SIG undefined FUN_1459210ac(void)

longlong FUN_1459210ac(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8aa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_147758bf9;
    local_40 = FUN_143334df1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/UMG",L"VerticalBoxSlot",&DAT_14cab8aa0,FUN_146358cce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921192 FUN_145921192 body=34 status=ok
// SIG undefined FUN_145921192(void)

undefined8 FUN_145921192(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 1459211b4 FUN_1459211b4 body=83 status=ok
// SIG undefined FUN_1459211b4(void)

void FUN_1459211b4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1412864c6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145921200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x180))(plVar1);
      return;
    }
  }
  FUN_14475ec7e(param_1);
  return;
}



// FUNCTION 14592120c FUN_14592120c body=228 status=ok
// SIG undefined FUN_14592120c(void)

longlong FUN_14592120c(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab9390 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_14778a138;
    local_40 = FUN_14635b6fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/UMG",L"WrapBoxSlot",&DAT_14cab9390,FUN_14635b6da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab9390;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459212f6 FUN_1459212f6 body=228 status=ok
// SIG undefined FUN_1459212f6(void)

longlong FUN_1459212f6(void)

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
  if (DAT_14cac1bb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147874a2d;
    local_40 = FUN_14637b76f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AnimationDataModel",&DAT_14cac1bb8,FUN_14637b748);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1bb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459213e2 FUN_1459213e2 body=228 status=ok
// SIG undefined FUN_1459213e2(void)

longlong FUN_1459213e2(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac3560 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147881475;
    local_40 = &LAB_146381ac8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionParameter",&DAT_14cac3560,&DAT_147881474);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac3560;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459214ce FUN_1459214ce body=228 status=ok
// SIG undefined FUN_1459214ce(void)

longlong FUN_1459214ce(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac51f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147885433;
    local_40 = &LAB_145acec72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleAccelerationBase",&DAT_14cac51f8,&DAT_147885432)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac51f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459215ba FUN_1459215ba body=228 status=ok
// SIG undefined FUN_1459215ba(void)

longlong FUN_1459215ba(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac5b78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147887b85;
    local_40 = &LAB_145acf0d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleRotationRateBase",&DAT_14cac5b78,&DAT_147887b84)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5b78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459216a6 FUN_1459216a6 body=228 status=ok
// SIG undefined FUN_1459216a6(void)

longlong FUN_1459216a6(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11c90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146371ddc;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dccd63;
    local_40 = FUN_1464123aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeHash",&DAT_14cb11c90,&DAT_147dccd62);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11c90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921792 FUN_145921792 body=228 status=ok
// SIG undefined FUN_145921792(void)

longlong FUN_145921792(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caccd70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636f686;
    local_38 = &LAB_1479398a1;
    local_40 = FUN_1417b71b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d8;
    FUN_14081cfa3(L"/Script/Engine",L"BlendSpace1D",&DAT_14caccd70,&DAT_1479398a0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caccd70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592187e FUN_14592187e body=228 status=ok
// SIG undefined FUN_14592187e(void)

longlong FUN_14592187e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacda58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893078;
    local_38 = &LAB_147957eeb;
    local_40 = FUN_1463ac766;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/Engine",L"AsyncActionLoadPrimaryAssetBase",&DAT_14cacda58,&DAT_147957eea
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacda58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921968 FUN_145921968 body=228 status=ok
// SIG undefined FUN_145921968(void)

longlong FUN_145921968(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacdb28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145921878;
    local_38 = &LAB_147958b5f;
    local_40 = FUN_1463acc69;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"AsyncActionChangePrimaryAssetBundles",&DAT_14cacdb28,
                  FUN_1463acc42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacdb28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921a52 FUN_145921a52 body=228 status=ok
// SIG undefined FUN_145921a52(void)

longlong FUN_145921a52(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cada2d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893078;
    local_38 = &LAB_147a98fb4;
    local_40 = FUN_1463c883b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"AsyncActionHandleSaveGame",&DAT_14cada2d0,FUN_1463c8814);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada2d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921b3e FUN_145921b3e body=228 status=ok
// SIG undefined FUN_145921b3e(void)

longlong FUN_145921b3e(void)

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
  if (DAT_14cae9858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147ba31d5;
    local_40 = &LAB_146036807;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x418;
    FUN_14081cfa3(L"/Script/Engine",L"LODActor",&DAT_14cae9858,FUN_1463e9480);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921c28 FUN_145921c28 body=228 status=ok
// SIG undefined FUN_145921c28(void)

longlong FUN_145921c28(void)

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
  if (DAT_14caf1bd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147bcbc53;
    local_40 = &LAB_1463ebd8b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/Engine",L"NavigationObjectBase",&DAT_14caf1bd0,&DAT_147bcbc52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf1bd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921d12 FUN_145921d12 body=228 status=ok
// SIG undefined FUN_145921d12(void)

longlong FUN_145921d12(void)

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
  if (DAT_14cb11278 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147db78c5;
    local_40 = FUN_146410810;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x2c0;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionDestructibleHLODComponent",&DAT_14cb11278,
                  &DAT_147db78c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11278;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921e02 FUN_145921e02 body=228 status=ok
// SIG undefined FUN_145921e02(void)

longlong FUN_145921e02(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1baa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a541a6;
    local_38 = &LAB_147e31d9b;
    local_40 = FUN_14583b128;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavCustomSection",&DAT_14cb1baa8,&DAT_147e31d9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1baa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921eec FUN_145921eec body=228 status=ok
// SIG undefined FUN_145921eec(void)

longlong FUN_145921eec(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1df00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14642549a;
    local_38 = &LAB_147e984b6;
    local_40 = FUN_1464257b5;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GameplayTasks",L"GameplayTask_ClaimResource",&DAT_14cb1df00,
                  FUN_14642578e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1df00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145921fd8 FUN_145921fd8 body=228 status=ok
// SIG undefined FUN_145921fd8(void)

longlong FUN_145921fd8(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb39398 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459eca8c;
    local_38 = &LAB_1480d3091;
    local_40 = FUN_14646b62c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/Niagara",L"MovieSceneNiagaraParameterTrack",&DAT_14cb39398,
                  &DAT_1480d3090);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb39398;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459220c4 FUN_1459220c4 body=228 status=ok
// SIG undefined FUN_1459220c4(void)

longlong FUN_1459220c4(void)

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
  if (DAT_14cb3b2f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1438fdbac;
    local_38 = &LAB_148161c0b;
    local_40 = &LAB_14646fcaa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterfaceCurveBase",&DAT_14cb3b2f0,&DAT_148161c0a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3b2f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459221ae FUN_1459221ae body=228 status=ok
// SIG undefined FUN_1459221ae(void)

longlong FUN_1459221ae(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d7194;
    local_38 = &LAB_14823c830;
    local_40 = &LAB_145f986ed;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonButtonGroupBase",&DAT_14cb46068,FUN_146483d7a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145922298 FUN_145922298 body=228 status=ok
// SIG undefined FUN_145922298(void)

longlong FUN_145922298(void)

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
  if (DAT_14cb4b008 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148430728;
    local_40 = FUN_14648d371;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoFloatParameterSource",&DAT_14cb4b008,
                  FUN_14648d34a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145922384 FUN_145922384 body=228 status=ok
// SIG undefined FUN_145922384(void)

longlong FUN_145922384(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b488 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145995692;
    local_38 = &LAB_148441ce9;
    local_40 = &LAB_14648e483;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"MeshSurfacePointTool",&DAT_14cb4b488,
                  &DAT_148441ce8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b488;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


