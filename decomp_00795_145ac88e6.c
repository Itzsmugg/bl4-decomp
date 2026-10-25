// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ac88e6 FUN_145ac88e6 body=64 status=ok
// SIG undefined FUN_145ac88e6(void)

void FUN_145ac88e6(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_3)) {
    FUN_145ac8926(param_1);
  }
  FUN_14128c22a(param_1);
  FUN_1458ff23e(param_1);
  return;
}



// FUNCTION 145ac8926 FUN_145ac8926 body=902 status=ok
// SIG undefined FUN_145ac8926(void)

void FUN_145ac8926(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [40];
  longlong local_130;
  int local_128;
  longlong *local_120;
  int local_110;
  longlong *local_108;
  longlong local_f0;
  int local_e8;
  longlong *local_e0;
  int local_d0;
  longlong *local_c8;
  longlong local_b0;
  int local_a8;
  longlong *local_a0;
  int local_90;
  longlong *local_88;
  longlong local_70;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1402815f4(param_1,&local_70);
  lVar5 = *(longlong *)(local_70 + 0x3e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xc0));
  *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + 1;
  plVar4 = (longlong *)CONCAT44(uStack_64,local_68);
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
  lVar6 = lVar5 + 0x38;
  iVar3 = *(int *)(lVar5 + 0x44);
  FUN_140dd876d(*(undefined8 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x40));
  *(undefined4 *)(lVar5 + 0x40) = 0;
  if ((iVar3 < 0) && (*(int *)(lVar5 + 0x44) != 0)) {
    FUN_148e63a20(lVar6);
  }
  *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
  FUN_145ac8cae(&local_70);
  if (local_68 == 0 || DAT_14cbd8838 != local_70) {
    local_70 = DAT_14cbd8838;
    local_68 = local_68 + 1;
  }
  local_50 = local_50 + 1;
  FUN_140ac6c96(&DAT_14cbd8840);
  FUN_145ac8d1e(lVar6,&local_70);
  FUN_145ac8cae(&local_b0);
  if (local_a8 == 0 || DAT_14cbd8868 != local_b0) {
    local_b0 = DAT_14cbd8868;
    local_a8 = local_a8 + 1;
  }
  local_90 = local_90 + 1;
  FUN_140ac6c96(&DAT_14cbd8870);
  FUN_145ac8d1e(lVar6,&local_b0);
  FUN_145ac8cae(&local_f0);
  if (local_e8 == 0 || DAT_14cbd8808 != local_f0) {
    local_f0 = DAT_14cbd8808;
    local_e8 = local_e8 + 1;
  }
  local_d0 = local_d0 + 1;
  FUN_140ac6c96(&DAT_14cbd8810);
  FUN_145ac8d1e(lVar6,&local_f0);
  FUN_145ac8cae(&local_130);
  if (local_128 == 0 || DAT_14cbd8780 != local_130) {
    local_130 = DAT_14cbd8780;
    local_128 = local_128 + 1;
  }
  local_110 = local_110 + 1;
  FUN_140ac6c96(&DAT_14cbd87b0);
  FUN_145ac8d1e(lVar6,&local_130);
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))();
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xc0));
  lVar5 = FUN_1408bb964(param_1 + 0x44);
  if (lVar5 != 0) {
    lVar6 = FUN_1403ca142();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (plVar4 = *(longlong **)(lVar5 + 0x48), plVar4 != (longlong *)0x0)) {
      lVar5 = FUN_140b6d0be();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        (**(code **)(*plVar4 + 0x308))(plVar4,&local_70);
        FUN_145ac8daa(param_1,&local_70);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac8cae FUN_145ac8cae body=111 status=ok
// SIG undefined FUN_145ac8cae(void)

undefined8 * FUN_145ac8cae(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[5] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 6) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145ac8d1e FUN_145ac8d1e body=139 status=ok
// SIG undefined FUN_145ac8d1e(void)

void FUN_145ac8d1e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145ac8ee8(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x40);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_140dd90de(puVar1 + 2,param_2 + 2);
  FUN_140dd90de(lVar3 + (longlong)iVar2 * 0x40 + 0x28,param_2 + 5);
  if (iVar2 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145ac8daa FUN_145ac8daa body=316 status=ok
// SIG undefined FUN_145ac8daa(void)

void FUN_145ac8daa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x3e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  cVar4 = FUN_14149aca2(param_2,&DAT_14cb977f8);
  lVar6 = DAT_14cbd8780;
  if ((((cVar4 != '\0') ||
       (cVar4 = FUN_14149aca2(param_2,&DAT_14cb97828), lVar6 = DAT_14cbd8808, cVar4 != '\0')) ||
      (cVar4 = FUN_14149aca2(param_2,&DAT_14cb97818), lVar6 = DAT_14cbd8838, cVar4 != '\0')) ||
     (cVar4 = FUN_14149aca2(param_2,&DAT_14cb97830), lVar6 = DAT_14cbd8868, cVar4 != '\0')) {
    if (lVar6 == *(longlong *)(lVar3 + 0x50)) {
      if (*(int *)(lVar3 + 0x58) != 0) goto LAB_145ac8e34;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(lVar3 + 0x58) + 1;
    }
    *(longlong *)(lVar3 + 0x50) = lVar6;
    *(int *)(lVar3 + 0x58) = iVar5;
  }
LAB_145ac8e34:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000145ac8e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  return;
}



// FUNCTION 145ac8ee8 FUN_145ac8ee8 body=132 status=ok
// SIG undefined FUN_145ac8ee8(void)

void FUN_145ac8ee8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ac8f6c FUN_145ac8f6c body=213 status=ok
// SIG undefined FUN_145ac8f6c(void)

bool FUN_145ac8f6c(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac9048 FUN_145ac9048 body=263 status=ok
// SIG undefined FUN_145ac9048(void)

void FUN_145ac9048(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  cVar3 = FUN_145ac9150();
  if (cVar3 == '\0') {
    return;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x348,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3e5d80;
  FUN_145ac9208(plVar4 + 2);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 == (longlong *)0x0) goto LAB_145ac90c6;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB_145ac90f0:
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
    if (plVar4 == (longlong *)0x0) goto LAB_145ac90c6;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x40) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x48) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_145ac90f0;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_145ac90c6:
  FUN_14149c36e(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 145ac9150 FUN_145ac9150 body=184 status=ok
// SIG undefined FUN_145ac9150(void)

bool FUN_145ac9150(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  plVar3 = (longlong *)FUN_1400b465c();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_144a79464();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) goto LAB_145ac9191;
  }
  plVar3 = (longlong *)0x0;
LAB_145ac9191:
  bVar5 = true;
  bVar6 = true;
  if (param_2 != 0) {
    bVar6 = (*(byte *)(param_2 + 0x152) & 0xfd) != 1;
  }
  if (plVar3 != (longlong *)0x0) {
    bVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
    bVar5 = bVar1 < 3;
  }
  if (param_2 != 0) {
    iVar2 = FUN_14490d72a(param_2);
    if ((bool)(bVar6 | bVar5)) {
      return false;
    }
    if (2 < iVar2) {
      return false;
    }
    if ((*(char *)(param_2 + 0x152) != '\x01') || (*(int *)(param_1 + 0x50) == 5)) {
      return *(longlong *)(param_1 + 0x40) == 0;
    }
  }
  return false;
}



// FUNCTION 145ac9208 FUN_145ac9208 body=565 status=ok
// SIG undefined FUN_145ac9208(void)

undefined4 * FUN_145ac9208(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x16));
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0xffffffff00000080;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x49) = 0xffffffff00000080;
  param_1[0x4b] = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0xffffffff00000080;
  param_1[0x5f] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  param_1[100] = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x75) = 0xffffffff00000080;
  param_1[0x77] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x89) = 0xffffffff00000080;
  param_1[0x8b] = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  param_1[0xac] = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xad) = 0xffffffff00000080;
  param_1[0xaf] = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc1) = 0xffffffff00000080;
  param_1[0xc3] = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  param_1[200] = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_145ac943d(uVar2);
  lVar1 = *(longlong *)(param_1 + 0x9a);
  if (lVar3 == 0) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar1 == lVar3) {
      return param_1;
    }
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
  }
  *(longlong *)(param_1 + 0x9a) = lVar3;
  return param_1;
}



// FUNCTION 145ac943d FUN_145ac943d body=150 status=ok
// SIG undefined FUN_145ac943d(void)

undefined8 FUN_145ac943d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d7c4a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac94d4 FUN_145ac94d4 body=121 status=ok
// SIG undefined FUN_145ac94d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac94d4(void)

{
  FUN_145ac954e();
  _DAT_14cae2648 = L"NumVertices";
  DAT_14cae2672 = FUN_140850cc5();
  _DAT_14cae2650 = FUN_140ec6960();
  _DAT_14cae2660 = &LAB_14682652b;
  _DAT_14cae2668 = 0x1000000e0;
  _DAT_14cae2670 = 0;
  _DAT_14cae2658 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2648;
  return;
}



// FUNCTION 145ac954e FUN_145ac954e body=121 status=ok
// SIG undefined FUN_145ac954e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac954e(void)

{
  FUN_145ac95c8();
  _DAT_14cae2678 = L"SkinCacheDebug";
  DAT_14cae26a2 = FUN_140850cc5();
  _DAT_14cae2680 = FUN_140ec6960();
  _DAT_14cae2690 = &LAB_14682652b;
  _DAT_14cae2698 = 0x1000000e6;
  _DAT_14cae26a0 = 0;
  _DAT_14cae2688 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2678;
  return;
}



// FUNCTION 145ac95c8 FUN_145ac95c8 body=121 status=ok
// SIG undefined FUN_145ac95c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac95c8(void)

{
  FUN_145ac9642();
  _DAT_14cae26a8 = L"InputStreamStart";
  DAT_14cae26d2 = FUN_140850cc5();
  _DAT_14cae26b0 = FUN_140ec6960();
  _DAT_14cae26c0 = &LAB_14682652b;
  _DAT_14cae26c8 = 0x1000000ec;
  _DAT_14cae26d0 = 0;
  _DAT_14cae26b8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae26a8;
  return;
}



// FUNCTION 145ac9642 FUN_145ac9642 body=121 status=ok
// SIG undefined FUN_145ac9642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9642(void)

{
  FUN_145ac96bc();
  _DAT_14cae26d8 = L"SkinCacheStart";
  DAT_14cae2702 = FUN_140850cc5();
  _DAT_14cae26e0 = FUN_140ec6960();
  _DAT_14cae26f0 = &LAB_14682652b;
  _DAT_14cae26f8 = 0x1000000f2;
  _DAT_14cae2700 = 0;
  _DAT_14cae26e8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae26d8;
  return;
}



// FUNCTION 145ac96bc FUN_145ac96bc body=121 status=ok
// SIG undefined FUN_145ac96bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac96bc(void)

{
  FUN_145ac9736();
  _DAT_14cae2708 = L"SkinUniformBuffer";
  DAT_14cae2732 = FUN_140850cc5();
  _DAT_14cae2710 = FUN_14106a12a();
  _DAT_14cae2720 = &LAB_14682652b;
  _DAT_14cae2728 = 0x1000000f8;
  _DAT_14cae2730 = 0;
  _DAT_14cae2718 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2708;
  return;
}



// FUNCTION 145ac9736 FUN_145ac9736 body=121 status=ok
// SIG undefined FUN_145ac9736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9736(void)

{
  FUN_145ac97b0();
  _DAT_14cae2738 = L"BoneMatrices";
  DAT_14cae2762 = FUN_140850cc5();
  _DAT_14cae2740 = FUN_140fb78d0();
  _DAT_14cae2750 = &LAB_14682652b;
  _DAT_14cae2758 = 0x1000000fa;
  _DAT_14cae2760 = 0;
  _DAT_14cae2748 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2738;
  return;
}



// FUNCTION 145ac97b0 FUN_145ac97b0 body=121 status=ok
// SIG undefined FUN_145ac97b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac97b0(void)

{
  FUN_145ac982a();
  _DAT_14cae2768 = L"TangentInputBuffer";
  DAT_14cae2792 = FUN_140850cc5();
  _DAT_14cae2770 = FUN_140fb78d0();
  _DAT_14cae2780 = &LAB_14682652b;
  _DAT_14cae2788 = 0x1000000fe;
  _DAT_14cae2790 = 0;
  _DAT_14cae2778 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2768;
  return;
}



// FUNCTION 145ac982a FUN_145ac982a body=121 status=ok
// SIG undefined FUN_145ac982a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac982a(void)

{
  FUN_145ac98a4();
  _DAT_14cae2798 = L"PositionInputBuffer";
  DAT_14cae27c2 = FUN_140850cc5();
  _DAT_14cae27a0 = FUN_140fb78d0();
  _DAT_14cae27b0 = &LAB_14682652b;
  _DAT_14cae27b8 = 0x100000102;
  _DAT_14cae27c0 = 0;
  _DAT_14cae27a8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2798;
  return;
}



// FUNCTION 145ac98a4 FUN_145ac98a4 body=121 status=ok
// SIG undefined FUN_145ac98a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac98a4(void)

{
  FUN_145ac991e();
  _DAT_14cae27c8 = L"PositionBufferUAV";
  DAT_14cae27f2 = FUN_140850cc5();
  _DAT_14cae27d0 = FUN_140fb78d0();
  _DAT_14cae27e0 = &LAB_14682652b;
  _DAT_14cae27e8 = 0x100000106;
  _DAT_14cae27f0 = 0;
  _DAT_14cae27d8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae27c8;
  return;
}



// FUNCTION 145ac991e FUN_145ac991e body=121 status=ok
// SIG undefined FUN_145ac991e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac991e(void)

{
  FUN_145ac9998();
  _DAT_14cae27f8 = L"TangentBufferUAV";
  DAT_14cae2822 = FUN_140850cc5();
  _DAT_14cae2800 = FUN_140fb78d0();
  _DAT_14cae2810 = &LAB_14682652b;
  _DAT_14cae2818 = 0x10000010a;
  _DAT_14cae2820 = 0;
  _DAT_14cae2808 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae27f8;
  return;
}



// FUNCTION 145ac9998 FUN_145ac9998 body=121 status=ok
// SIG undefined FUN_145ac9998(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9998(void)

{
  FUN_145ac9a12();
  _DAT_14cae2828 = L"NumBoneInfluences";
  DAT_14cae2852 = FUN_140850cc5();
  _DAT_14cae2830 = FUN_140ec6960();
  _DAT_14cae2840 = &LAB_14682652b;
  _DAT_14cae2848 = 0x10000010e;
  _DAT_14cae2850 = 0;
  _DAT_14cae2838 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2828;
  return;
}



// FUNCTION 145ac9a12 FUN_145ac9a12 body=121 status=ok
// SIG undefined FUN_145ac9a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9a12(void)

{
  FUN_145ac9a8c();
  _DAT_14cae2858 = L"InputWeightIndexSize";
  DAT_14cae2882 = FUN_140850cc5();
  _DAT_14cae2860 = FUN_140ec6960();
  _DAT_14cae2870 = &LAB_14682652b;
  _DAT_14cae2878 = 0x100000114;
  _DAT_14cae2880 = 0;
  _DAT_14cae2868 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2858;
  return;
}



// FUNCTION 145ac9a8c FUN_145ac9a8c body=121 status=ok
// SIG undefined FUN_145ac9a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9a8c(void)

{
  FUN_145ac9b06();
  _DAT_14cae2888 = L"InputWeightStart";
  DAT_14cae28b2 = FUN_140850cc5();
  _DAT_14cae2890 = FUN_140ec6960();
  _DAT_14cae28a0 = &LAB_14682652b;
  _DAT_14cae28a8 = 0x10000011a;
  _DAT_14cae28b0 = 0;
  _DAT_14cae2898 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2888;
  return;
}



// FUNCTION 145ac9b06 FUN_145ac9b06 body=121 status=ok
// SIG undefined FUN_145ac9b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9b06(void)

{
  FUN_145ac9b80();
  _DAT_14cae28b8 = L"InputWeightStride";
  DAT_14cae28e2 = FUN_140850cc5();
  _DAT_14cae28c0 = FUN_140ec6960();
  _DAT_14cae28d0 = &LAB_14682652b;
  _DAT_14cae28d8 = 0x100000120;
  _DAT_14cae28e0 = 0;
  _DAT_14cae28c8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae28b8;
  return;
}



// FUNCTION 145ac9b80 FUN_145ac9b80 body=121 status=ok
// SIG undefined FUN_145ac9b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9b80(void)

{
  FUN_145ac9bfa();
  _DAT_14cae28e8 = L"InputWeightStream";
  DAT_14cae2912 = FUN_140850cc5();
  _DAT_14cae28f0 = FUN_140fb78d0();
  _DAT_14cae2900 = &LAB_14682652b;
  _DAT_14cae2908 = 0x100000126;
  _DAT_14cae2910 = 0;
  _DAT_14cae28f8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae28e8;
  return;
}



// FUNCTION 145ac9bfa FUN_145ac9bfa body=121 status=ok
// SIG undefined FUN_145ac9bfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9bfa(void)

{
  FUN_145ac9c74();
  _DAT_14cae2918 = L"InputWeightLookupStream";
  DAT_14cae2942 = FUN_140850cc5();
  _DAT_14cae2920 = FUN_140fb78d0();
  _DAT_14cae2930 = &LAB_14682652b;
  _DAT_14cae2938 = 0x10000012a;
  _DAT_14cae2940 = 0;
  _DAT_14cae2928 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2918;
  return;
}



// FUNCTION 145ac9c74 FUN_145ac9c74 body=121 status=ok
// SIG undefined FUN_145ac9c74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9c74(void)

{
  FUN_145ac9cee();
  _DAT_14cae2948 = L"MorphBuffer";
  DAT_14cae2972 = FUN_140850cc5();
  _DAT_14cae2950 = FUN_140fb78d0();
  _DAT_14cae2960 = &LAB_14682652b;
  _DAT_14cae2968 = 0x10000012e;
  _DAT_14cae2970 = 0;
  _DAT_14cae2958 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2948;
  return;
}



// FUNCTION 145ac9cee FUN_145ac9cee body=121 status=ok
// SIG undefined FUN_145ac9cee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9cee(void)

{
  FUN_145ac9d68();
  _DAT_14cae2978 = L"MorphBufferOffset";
  DAT_14cae29a2 = FUN_140850cc5();
  _DAT_14cae2980 = FUN_140ec6960();
  _DAT_14cae2990 = &LAB_14682652b;
  _DAT_14cae2998 = 0x100000132;
  _DAT_14cae29a0 = 0;
  _DAT_14cae2988 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2978;
  return;
}



// FUNCTION 145ac9d68 FUN_145ac9d68 body=121 status=ok
// SIG undefined FUN_145ac9d68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9d68(void)

{
  FUN_145ac9de2();
  _DAT_14cae29a8 = L"ClothBuffer";
  DAT_14cae29d2 = FUN_140850cc5();
  _DAT_14cae29b0 = FUN_140fb78d0();
  _DAT_14cae29c0 = &LAB_14682652b;
  _DAT_14cae29c8 = 0x100000138;
  _DAT_14cae29d0 = 0;
  _DAT_14cae29b8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae29a8;
  return;
}



// FUNCTION 145ac9de2 FUN_145ac9de2 body=121 status=ok
// SIG undefined FUN_145ac9de2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9de2(void)

{
  FUN_145ac9e5c();
  _DAT_14cae29d8 = L"ClothPositionsAndNormalsBuffer";
  DAT_14cae2a02 = FUN_140850cc5();
  _DAT_14cae29e0 = FUN_140fb78d0();
  _DAT_14cae29f0 = &LAB_14682652b;
  _DAT_14cae29f8 = 0x10000013c;
  _DAT_14cae2a00 = 0;
  _DAT_14cae29e8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae29d8;
  return;
}



// FUNCTION 145ac9e5c FUN_145ac9e5c body=121 status=ok
// SIG undefined FUN_145ac9e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9e5c(void)

{
  FUN_145ac9ed6();
  _DAT_14cae2a08 = L"ClothBufferOffset";
  DAT_14cae2a32 = FUN_140850cc5();
  _DAT_14cae2a10 = FUN_140ec6960();
  _DAT_14cae2a20 = &LAB_14682652b;
  _DAT_14cae2a28 = 0x100000140;
  _DAT_14cae2a30 = 0;
  _DAT_14cae2a18 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2a08;
  return;
}



// FUNCTION 145ac9ed6 FUN_145ac9ed6 body=121 status=ok
// SIG undefined FUN_145ac9ed6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9ed6(void)

{
  FUN_145ac9f50();
  _DAT_14cae2a38 = L"ClothBlendWeight";
  DAT_14cae2a62 = FUN_140850cc5();
  _DAT_14cae2a40 = FUN_140ec6960();
  _DAT_14cae2a50 = &LAB_14682652b;
  _DAT_14cae2a58 = 0x100000146;
  _DAT_14cae2a60 = 0;
  _DAT_14cae2a48 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2a38;
  return;
}



// FUNCTION 145ac9f50 FUN_145ac9f50 body=121 status=ok
// SIG undefined FUN_145ac9f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9f50(void)

{
  FUN_145aca046();
  _DAT_14cae2a68 = L"ClothToLocal";
  DAT_14cae2a92 = FUN_140850cc5();
  _DAT_14cae2a70 = FUN_140ec6960();
  _DAT_14cae2a80 = &LAB_14682652b;
  _DAT_14cae2a88 = 0x10000014c;
  _DAT_14cae2a90 = 0;
  _DAT_14cae2a78 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2a68;
  return;
}



// FUNCTION 145ac9fca FUN_145ac9fca body=123 status=ok
// SIG undefined FUN_145ac9fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac9fca(void)

{
  _DAT_14cae2af8 = L"BASE";
  DAT_14cae2b22 = 4;
  _DAT_14cae2b00 = FUN_140b35ae4();
  _DAT_14cae2b08 = DAT_14cae25f0;
  _DAT_14cae2b10 = &LAB_14682652b;
  DAT_14cae25f0 = &DAT_14cae2af8;
  DAT_14cae2645 = DAT_14cae2645 + '\x01';
  _DAT_14cae2b18 = 0x100000000;
  if (*(char *)(_DAT_14cae2b00 + 100) != '\0') {
    DAT_14cae2646 = DAT_14cae2646 + '\x01';
  }
  return;
}



// FUNCTION 145aca046 FUN_145aca046 body=216 status=ok
// SIG undefined FUN_145aca046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aca046(void)

{
  _DAT_14cae2ac8 = L"WorldScale";
  DAT_14cae2af2 = FUN_140850cc5();
  _DAT_14cae2ad0 = FUN_140ec6960();
  _DAT_14cae2ae0 = &LAB_14682652b;
  _DAT_14cae2ae8 = 0x100000158;
  _DAT_14cae2af0 = 0;
  _DAT_14cae2ad8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2ac8;
  _DAT_14cae2a98 = L"ClothNumInfluencesPerVertex";
  DAT_14cae2ac2 = FUN_140850cc5();
  _DAT_14cae2aa0 = FUN_140ec6960();
  _DAT_14cae2ab0 = &LAB_14682652b;
  _DAT_14cae2ab8 = 0x100000152;
  _DAT_14cae2ac0 = 0;
  _DAT_14cae2aa8 = DAT_14cae25f0;
  DAT_14cae25f0 = &DAT_14cae2a98;
  return;
}



// FUNCTION 145aca11e FUN_145aca11e body=19 status=ok
// SIG undefined FUN_145aca11e(void)

void FUN_145aca11e(void)

{
  FUN_145aca132();
  FUN_145aca16a();
  return;
}



// FUNCTION 145aca132 FUN_145aca132 body=56 status=ok
// SIG undefined FUN_145aca132(void)

void FUN_145aca132(void)

{
  longlong lVar1;
  
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  return;
}



// FUNCTION 145aca16a FUN_145aca16a body=82 status=ok
// SIG undefined FUN_145aca16a(void)

void FUN_145aca16a(void)

{
  longlong lVar1;
  
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  lVar1 = DAT_14c947fe0;
  FUN_145aca1bc(DAT_14c947fe0);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 145aca1bc FUN_145aca1bc body=107 status=ok
// SIG undefined FUN_145aca1bc(void)

void FUN_145aca1bc(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  FUN_145aca228(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145aca25c(param_1);
  return;
}



// FUNCTION 145aca228 FUN_145aca228 body=51 status=ok
// SIG undefined FUN_145aca228(void)

void FUN_145aca228(longlong param_1)

{
  FUN_140028a14(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145aca2ec(param_1);
  return;
}



// FUNCTION 145aca25c FUN_145aca25c body=53 status=ok
// SIG undefined FUN_145aca25c(void)

void FUN_145aca25c(longlong *param_1)

{
  FUN_145aca292();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aca292 FUN_145aca292 body=89 status=ok
// SIG undefined FUN_145aca292(void)

void FUN_145aca292(longlong param_1)

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



// FUNCTION 145aca2ec FUN_145aca2ec body=55 status=ok
// SIG undefined FUN_145aca2ec(void)

void FUN_145aca2ec(longlong *param_1)

{
  FUN_1456b2188(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aca32e FUN_145aca32e body=53 status=ok
// SIG undefined FUN_145aca32e(void)

undefined8 * FUN_145aca32e(undefined8 *param_1)

{
  FUN_145a3d894();
  *param_1 = &PTR_FUN_14a5ddf90;
  param_1[5] = &PTR_FUN_14a5de330;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 145aca36e FUN_145aca36e body=53 status=ok
// SIG undefined FUN_145aca36e(void)

undefined8 * FUN_145aca36e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a628960;
  FUN_14109baa4(param_1 + 5);
  FUN_14109baa4(param_1 + 0x16);
  return param_1;
}



// FUNCTION 145aca3ae FUN_145aca3ae body=181 status=ok
// SIG undefined FUN_145aca3ae(void)

undefined8 * FUN_145aca3ae(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a865560;
  param_1[5] = &PTR_LAB_14a865b50;
  param_1[6] = &PTR_LAB_14a865b90;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_144a78564(param_1 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *param_1 = &PTR_FUN_14a7580f0;
  param_1[5] = &PTR_FUN_14a7586e0;
  param_1[6] = &PTR_LAB_14a758720;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x453b8000;
  return param_1;
}



// FUNCTION 145aca46c FUN_145aca46c body=62 status=ok
// SIG undefined FUN_145aca46c(void)

void FUN_145aca46c(longlong *param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfd;
  FUN_145aca4aa(param_1 + 7);
  lVar1 = (**(code **)(*param_1 + 0x160))(param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_147d8e13a(lVar1,0);
  return;
}



// FUNCTION 145aca4aa FUN_145aca4aa body=58 status=ok
// SIG undefined FUN_145aca4aa(void)

void FUN_145aca4aa(longlong param_1)

{
  FUN_14477c0e3(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_147b4e50a(param_1 + 0x30,0);
  return;
}



// FUNCTION 145aca4f0 FUN_145aca4f0 body=117 status=ok
// SIG undefined FUN_145aca4f0(void)

undefined8 * FUN_145aca4f0(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab91eb0;
  param_1[5] = &PTR_LAB_14ab928b0;
  param_1[6] = &PTR_LAB_14ab928f0;
  param_1[0x55] = &PTR_LAB_14ab92940;
  param_1[0x56] = &PTR_LAB_14ab929c0;
  param_1[0x57] = &PTR_LAB_14ab929d0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  return param_1;
}



// FUNCTION 145aca572 FUN_145aca572 body=53 status=ok
// SIG undefined FUN_145aca572(void)

void FUN_145aca572(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14acb53d0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145aca5b2 FUN_145aca5b2 body=75 status=ok
// SIG undefined FUN_145aca5b2(void)

undefined8 * FUN_145aca5b2(undefined8 *param_1)

{
  FUN_140e3eb4e();
  *param_1 = &PTR_FUN_14afdc7e0;
  param_1[0x75] = &PTR_FUN_14afdce20;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_145aca5fe(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0xbd) = 1;
  return param_1;
}



// FUNCTION 145aca5fe FUN_145aca5fe body=170 status=ok
// SIG undefined FUN_145aca5fe(void)

void FUN_145aca5fe(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *param_1 = &DAT_14a176f00;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar2 = 0xf8;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x34) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x7f7fffff;
    *(undefined2 *)((longlong)param_1 + lVar2 + -4) = 0x404;
    *(undefined **)((longlong)param_1 + lVar2 + -0x70) = &DAT_14a176f00;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x278);
  return;
}



// FUNCTION 145aca6a8 FUN_145aca6a8 body=110 status=ok
// SIG undefined FUN_145aca6a8(void)

void FUN_145aca6a8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14149c8b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0eff20;
  puVar1[5] = &PTR_FUN_14b0f0920;
  puVar1[6] = &PTR_LAB_14b0f0960;
  puVar1[0x55] = &PTR_FUN_14b0f09b0;
  puVar1[0x56] = &PTR_FUN_14b0f0a30;
  puVar1[0x57] = &PTR_FUN_14b0f0a40;
  puVar1[0xc9] = 0;
  return;
}



// FUNCTION 145aca722 FUN_145aca722 body=149 status=ok
// SIG undefined FUN_145aca722(void)

undefined8 * FUN_145aca722(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b12ba40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145aca7b8 FUN_145aca7b8 body=40 status=ok
// SIG undefined FUN_145aca7b8(void)

undefined8 FUN_145aca7b8(undefined8 param_1,int param_2)

{
  FUN_145aca7e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aca7e0 FUN_145aca7e0 body=88 status=ok
// SIG undefined FUN_145aca7e0(void)

void FUN_145aca7e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3e3950;
  FUN_14105732d(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14105732d(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aca838 FUN_145aca838 body=30 status=ok
// SIG undefined FUN_145aca838(void)

void FUN_145aca838(longlong *param_1)

{
  (**(code **)(*param_1 + 0x698))();
  FUN_1410b16f8(param_1);
  return;
}



// FUNCTION 145aca856 FUN_145aca856 body=66 status=ok
// SIG undefined FUN_145aca856(void)

void FUN_145aca856(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_140c733be();
    puVar1 = *(undefined8 **)(param_1 + 0x540);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  return;
}



// FUNCTION 145aca8a4 FUN_145aca8a4 body=53 status=ok
// SIG undefined FUN_145aca8a4(void)

void FUN_145aca8a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_FUN_14b477c40;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 145aca8da FUN_145aca8da body=179 status=ok
// SIG undefined FUN_145aca8da(void)

bool FUN_145aca8da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aca9a4 FUN_145aca9a4 body=87 status=ok
// SIG undefined FUN_145aca9a4(void)

void FUN_145aca9a4(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x6c);
  if (cVar1 != '\x01') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_140da8596(*(longlong *)(param_1 + 0x10),param_2,0xff,0);
    }
    if (cVar1 == '\x02') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_140da8596(*(longlong *)(param_1 + 0x18),param_2,0xff,0);
  return;
}



// FUNCTION 145aca9fc FUN_145aca9fc body=107 status=ok
// SIG undefined FUN_145aca9fc(void)

ulonglong FUN_145aca9fc(longlong param_1)

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
LAB_145acaa4a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145acaa4a;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined1 *)(param_1 + 8));
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



// FUNCTION 145acaa7a FUN_145acaa7a body=53 status=ok
// SIG undefined FUN_145acaa7a(void)

void FUN_145acaa7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14ba41a90;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145acaabc FUN_145acaabc body=53 status=ok
// SIG undefined FUN_145acaabc(void)

void FUN_145acaabc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14be88df0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 145acaaf2 FUN_145acaaf2 body=1455 status=ok
// SIG undefined FUN_145acaaf2(void)

void FUN_145acaaf2(longlong param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  longlong *plVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  byte *local_1a0;
  float local_198;
  undefined4 local_194;
  float local_190;
  undefined4 local_18c;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_16c [3];
  undefined8 local_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong *local_118;
  undefined2 local_110;
  undefined1 uStack_10e;
  undefined5 uStack_10d;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  char local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a0 = param_3;
  if ((*(byte *)(param_1 + 0x39) & *param_3) == 0) goto LAB_145acadab;
  FUN_1414a336c(param_1,local_188);
  local_158._0_4_ = 0x3f800000;
  local_1b8 = &local_158;
  FUN_140519909(&local_190);
  local_158._0_4_ = 0x3f800000;
  local_1b8 = &local_158;
  FUN_1405199d3(&local_198);
  pbVar7 = local_1a0;
  local_16c[0] = 0x3f800000;
  local_178 = local_18c;
  uStack_174 = local_194;
  local_120 = *(longlong *)(param_1 + 0x208);
  local_c0 = *(char *)(local_120 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_c0 != '\0') {
      local_c8 = *(ulonglong *)(local_120 + 400);
      local_d8 = *(undefined8 *)(local_120 + 0x180);
      uStack_d0 = *(undefined8 *)(local_120 + 0x188);
      goto LAB_145acae6d;
    }
LAB_145acac20:
    uVar5 = *(undefined1 *)(param_2 + 0x34);
    fStack_150 = *(float *)(param_2 + 8);
    fStack_13c = *(float *)(param_2 + 0x1c);
    fVar9 = *(float *)(param_2 + 0x20);
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x24);
    fVar8 = local_190 * fVar9 + fVar3 * local_198 + *(float *)(param_2 + 0x30);
    fVar10 = local_190 * fStack_13c + fVar4 * local_198 + *(float *)(param_2 + 0x2c);
    fVar11 = fVar9 * 0.0 + fVar3;
    fVar12 = fStack_13c * 0.0 + fVar4;
    fVar9 = fVar3 * 0.0 + fVar9;
    fStack_13c = fVar4 * 0.0 + fStack_13c;
    local_148 = local_198 * fStack_150 + *(float *)(param_2 + 0x10);
    fStack_14c = local_190 * fStack_150 + *(float *)(param_2 + 0xc);
    plVar6 = *(longlong **)(param_1 + 0x210);
    if (plVar6 == (longlong *)0x0) {
      local_158._0_4_ = local_18c;
      local_158._4_4_ = local_194;
      fStack_144 = local_190;
      fStack_140 = local_198;
      local_138 = CONCAT44(fVar12,fVar9);
      uStack_130 = CONCAT44(fVar10,fVar11);
      local_128 = CONCAT35(local_128._5_3_,CONCAT14(uVar5,fVar8)) & 0xffffff01ffffffff;
      goto LAB_145acafff;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_158._0_4_ = local_18c;
    local_158._4_4_ = local_194;
    fStack_144 = local_190;
    fStack_140 = local_198;
    local_138 = CONCAT44(fVar12,fVar9);
    uStack_130 = CONCAT44(fVar10,fVar11);
    local_128 = CONCAT17(uStack_10e,CONCAT25(local_110,CONCAT14(uVar5,fVar8))) & 0xffffff01ffffffff;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_118 = plVar6;
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
  else {
    if (local_c0 == '\0') goto LAB_145acac20;
    local_d8 = *(undefined8 *)(local_120 + 0x180);
    uStack_d0 = *(undefined8 *)(local_120 + 0x188);
    local_c8 = *(ulonglong *)(local_120 + 400) ^ 0x80000000;
LAB_145acae6d:
    fVar9 = (float)*(double *)(local_120 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar9 = (0.5 - fVar9) + 0.5;
    }
    local_160 = CONCAT44((float)*(double *)(local_120 + 0x178),fVar9);
    local_1b8 = &local_160;
    local_1a8 = param_2 + 0x1c;
    local_158._0_4_ = *(undefined4 *)(param_2 + 8);
    local_158._4_4_ = (undefined4)*(undefined8 *)(param_2 + 0xc);
    fStack_150 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    local_1b0 = &local_158;
    FUN_146978c22(&local_110,&local_178,local_16c,&local_d8);
    local_120 = *(longlong *)(param_1 + 0x208);
    plVar6 = *(longlong **)(param_1 + 0x210);
    local_148 = (float)local_100;
    fStack_144 = (float)((ulonglong)local_100 >> 0x20);
    fStack_140 = (float)uStack_f8;
    fStack_13c = (float)((ulonglong)uStack_f8 >> 0x20);
    local_158._4_4_ = (undefined4)((uint5)uStack_10d >> 8);
    fStack_150 = (float)uStack_108;
    fStack_14c = (float)((ulonglong)uStack_108 >> 0x20);
    if (plVar6 == (longlong *)0x0) {
      local_128 = local_e0;
      local_138 = local_f0;
      uStack_130 = uStack_e8;
      local_158._0_4_ = (undefined4)CONCAT53(uStack_10d,CONCAT12(uStack_10e,local_110));
LAB_145acafff:
      local_118 = (longlong *)0x0;
      pbVar7 = local_1a0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_128 = local_e0;
      local_138 = local_f0;
      uStack_130 = uStack_e8;
      local_158._0_4_ = (undefined4)CONCAT53(uStack_10d,CONCAT12(uStack_10e,local_110));
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pbVar7 = local_1a0;
      local_118 = plVar6;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pbVar7 = local_1a0;
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          pbVar7 = local_1a0;
        }
      }
    }
  }
  FUN_1402018be(pbVar7,&local_158);
  plVar6 = local_118;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_145acadab:
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145acb0a2 FUN_145acb0a2 body=54 status=ok
// SIG undefined FUN_145acb0a2(void)

void FUN_145acb0a2(void)

{
  DAT_14c896030 = 0;
  if (DAT_14c896028 != 0) {
    FUN_1400020a8();
  }
  FUN_145acb0d8();
                    /* WARNING: Could not recover jumptable at 0x000145acb0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c895fc0);
  return;
}



// FUNCTION 145acb0d8 FUN_145acb0d8 body=54 status=ok
// SIG undefined FUN_145acb0d8(void)

void FUN_145acb0d8(void)

{
  FUN_145acb10e();
  if (DAT_14c896008 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c895fe8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acb10e FUN_145acb10e body=104 status=ok
// SIG undefined FUN_145acb10e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145acb10e(void)

{
  DAT_14c895ff0 = 0;
  if (DAT_14c895ff4 != 0) {
    FUN_145acb176(&DAT_14c895fe8,0);
  }
  _DAT_14c896018 = 0xffffffff;
  DAT_14c896010 = 0;
  if (DAT_14c896014 < 0x81) {
    return;
  }
  DAT_14c896014 = 0x80;
  FUN_1446efbd8(&DAT_14c895ff8,0);
  return;
}



// FUNCTION 145acb176 FUN_145acb176 body=109 status=ok
// SIG undefined FUN_145acb176(void)

void FUN_145acb176(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x2c,4);
  }
  return;
}



// FUNCTION 145acb1e4 FUN_145acb1e4 body=439 status=ok
// SIG undefined FUN_145acb1e4(void)

void FUN_145acb1e4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x3004;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_145acb39c(local_20,&local_60,local_40,local_48);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acb39c FUN_145acb39c body=346 status=ok
// SIG undefined FUN_145acb39c(void)

void FUN_145acb39c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    uVar4 = FUN_1403ec9c0();
    plVar5 = (longlong *)FUN_144718840(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      local_68 = *param_2;
      FUN_1446dcdd4(&local_50);
      if (DAT_14cb77de0 == 0) {
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
      }
      else {
        FUN_140f6011c(DAT_14cb77de0,&local_68,&local_50);
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      lVar3 = local_68;
      if (local_68 != 0) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        local_50 = lVar3;
        local_48 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        FUN_140c679ea(lVar6 + 0x140,&local_50,param_3,param_4);
        plVar5 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
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
      plVar5 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
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
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acb4f8 FUN_145acb4f8 body=239 status=ok
// SIG undefined FUN_145acb4f8(void)

void FUN_145acb4f8(undefined8 param_1,longlong param_2)

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
  FUN_145acb5e8(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acb5e8 FUN_145acb5e8 body=99 status=ok
// SIG undefined FUN_145acb5e8(void)

void FUN_145acb5e8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    return;
  }
  lVar1 = FUN_144a883b6(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_145acb633;
  }
  lVar1 = 0;
LAB_145acb633:
  if (lVar1 != param_3) {
    return;
  }
  FUN_145acb64c(param_1);
  return;
}



// FUNCTION 145acb64c FUN_145acb64c body=143 status=ok
// SIG undefined FUN_145acb64c(void)

void FUN_145acb64c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145acb6dc();
  lVar2 = FUN_144a883b6(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar1 = FUN_1403ae46b();
      if (((-1 < (int)uVar1) &&
          ((((int)uVar1 < *(int *)(lVar2 + 0x78f0) &&
            (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(lVar2 + 0x78e8), lVar2 != 0)) &&
           (*(int *)(lVar2 + 0xc) != -1)))) &&
         ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong *)(lVar2 + 0x28) != 0)))) {
        FUN_1414a44f4(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145acb6dc FUN_145acb6dc body=337 status=ok
// SIG undefined FUN_145acb6dc(void)

void FUN_145acb6dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14011be0c(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1403adc5e(&local_40,lVar5);
      puVar7 = *(undefined8 **)(local_40 + 0x70);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 4));
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
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
      iVar3 = *(int *)((longlong)puVar7 + 0xc);
      FUN_145acb82e(*puVar7,*(undefined4 *)(puVar7 + 1));
      *(undefined4 *)(puVar7 + 1) = 0;
      if ((iVar3 < 0) && (*(int *)((longlong)puVar7 + 0xc) != 0)) {
        FUN_148e3e4e4(puVar7);
      }
      *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar7 + 4));
    }
  }
  puVar7 = (undefined8 *)(param_1 + 0xb0);
  cVar4 = FUN_140083514(puVar7,0);
  if (cVar4 == '\0') {
    FUN_1414a435a(param_1);
  }
  else {
    puVar7 = (undefined8 *)(param_1 + 0xb8);
    cVar4 = FUN_14008355a(puVar7,0);
    if (cVar4 != '\0') goto LAB_145acb7d4;
    FUN_145acb86c(param_1);
  }
  *puVar7 = 0;
LAB_145acb7d4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acb82e FUN_145acb82e body=61 status=ok
// SIG undefined FUN_145acb82e(void)

void FUN_145acb82e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acb86c FUN_145acb86c body=110 status=ok
// SIG undefined FUN_145acb86c(void)

void FUN_145acb86c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0xb8);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xa0) != 0)) {
    lVar2 = FUN_14479d2ce(param_1 + 0xb8);
    if ((0 < *(int *)(lVar2 + 0xbf0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xbe8) + 0x10), lVar2 != 0)) {
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14480f766(lVar2 + 0x40);
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  return;
}



// FUNCTION 145acb8da FUN_145acb8da body=40 status=ok
// SIG undefined FUN_145acb8da(void)

undefined8 FUN_145acb8da(undefined8 param_1,int param_2)

{
  FUN_145acb902();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acb902 FUN_145acb902 body=659 status=ok
// SIG undefined FUN_145acb902(void)

void FUN_145acb902(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab14670;
  param_1[0x72] = &PTR_FUN_14ab14cb0;
  FUN_1414a4ff0(param_1 + 0xe4);
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdf) = 0;
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xd6);
  *(undefined4 *)(param_1 + 0xd5) = 0;
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xc2);
  *(undefined4 *)(param_1 + 0xc1) = 0;
  if (param_1[0xc0] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xb8);
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb3) = 0;
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbc4a(param_1 + 0xaa);
  *(undefined4 *)(param_1 + 0xa9) = 0;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbc80(param_1 + 0xa0);
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbb96(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x91) = 0;
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbb96(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbcb6(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145acbcec(param_1 + 0x73);
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145acbb96 FUN_145acbb96 body=55 status=ok
// SIG undefined FUN_145acbb96(void)

void FUN_145acbb96(longlong *param_1)

{
  FUN_145acbbce(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acbbce FUN_145acbbce body=123 status=ok
// SIG undefined FUN_145acbbce(void)

void FUN_145acbbce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 145acbc4a FUN_145acbc4a body=53 status=ok
// SIG undefined FUN_145acbc4a(void)

void FUN_145acbc4a(longlong *param_1)

{
  FUN_145acbdd2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acbc80 FUN_145acbc80 body=53 status=ok
// SIG undefined FUN_145acbc80(void)

void FUN_145acbc80(longlong *param_1)

{
  FUN_145acbd22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acbcb6 FUN_145acbcb6 body=53 status=ok
// SIG undefined FUN_145acbcb6(void)

void FUN_145acbcb6(longlong *param_1)

{
  FUN_1414a4e32();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acbcec FUN_145acbcec body=53 status=ok
// SIG undefined FUN_145acbcec(void)

void FUN_145acbcec(longlong *param_1)

{
  FUN_145acbd7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acbd22 FUN_145acbd22 body=88 status=ok
// SIG undefined FUN_145acbd22(void)

void FUN_145acbd22(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 145acbd7a FUN_145acbd7a body=88 status=ok
// SIG undefined FUN_145acbd7a(void)

void FUN_145acbd7a(longlong param_1)

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



// FUNCTION 145acbdd2 FUN_145acbdd2 body=90 status=ok
// SIG undefined FUN_145acbdd2(void)

void FUN_145acbdd2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145acbe3a FUN_145acbe3a body=40 status=ok
// SIG undefined FUN_145acbe3a(void)

undefined8 FUN_145acbe3a(undefined8 param_1,int param_2)

{
  FUN_1414a66de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acbe62 FUN_145acbe62 body=247 status=ok
// SIG undefined FUN_145acbe62(void)

void FUN_145acbe62(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145acbf5a(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acbf5a FUN_145acbf5a body=282 status=ok
// SIG undefined FUN_145acbf5a(void)

void FUN_145acbf5a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_145acc027;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1403ca8ec(lVar5 + 0xd98,&DAT_14cbd95d0);
    }
  }
  FUN_1449027d0(param_1,&local_30);
  pcVar3 = *(char **)(local_30 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (pcVar3[8] == '\0') {
    iVar4 = *(int *)(pcVar3 + 0xc) + 1;
LAB_145acc007:
    pcVar3[8] = '\x01';
    *(int *)(pcVar3 + 0xc) = iVar4;
  }
  else if (*(int *)(pcVar3 + 0xc) == 0) {
    iVar4 = 1;
    goto LAB_145acc007;
  }
  if (*pcVar3 == '\0') {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_145acc018:
    *pcVar3 = '\x01';
    *(int *)(pcVar3 + 4) = iVar4;
  }
  else if (*(int *)(pcVar3 + 4) == 0) {
    iVar4 = 1;
    goto LAB_145acc018;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_145acc027:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acc075 FUN_145acc075 body=234 status=ok
// SIG undefined FUN_145acc075(void)

void FUN_145acc075(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = (uint)DAT_14c951760;
  bVar1 = FUN_141330bcb();
  local_98 = &PTR_FUN_149e88ca0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_90 = FUN_1427e4308;
  local_88 = FUN_1427e514a;
  local_80 = FUN_1427e518e;
  local_78 = FUN_140ec6a48;
  local_70 = FUN_1427e5dac;
  local_68 = FUN_1427e6cce;
  local_60 = FUN_1427e6d12;
  local_58 = FUN_1427e7a08;
  FUN_1405bceea();
  FUN_141330da2(&local_98,param_1,(uint)(bVar1 ^ 1) + uVar2 * 4);
  FUN_145acc160(&local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acc160 FUN_145acc160 body=87 status=ok
// SIG undefined FUN_145acc160(void)

void FUN_145acc160(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e88ca0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145acc1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145acc1c0 FUN_145acc1c0 body=297 status=ok
// SIG undefined FUN_145acc1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145acc1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b3ebd60;
  FUN_1446f470e(&local_20,L"Root",1);
  param_1[0x1b] = local_20;
  param_1[0x1c] = 0xffffffff7fffffff;
  param_1[0x1f] = DAT_14caddec0;
  uVar1 = _DAT_14caddeb8;
  param_1[0x1d] = DAT_14caddeb0;
  param_1[0x1e] = uVar1;
  param_1[0x22] = DAT_14caddec0;
  uVar1 = _DAT_14caddeb8;
  param_1[0x20] = DAT_14caddeb0;
  param_1[0x21] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x23] = DAT_14c8464e0;
  param_1[0x24] = uVar1;
  param_1[0x25] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x26] = DAT_14c8464e0;
  param_1[0x27] = uVar1;
  param_1[0x28] = DAT_14c8464f0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x447a00003f7d70a4;
  *(undefined4 *)(param_1 + 0x2e) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x43b40000;
  param_1[0x30] = 0x43b4000000000000;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf0 | 0xe;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acc2f6 FUN_145acc2f6 body=781 status=ok
// SIG undefined FUN_145acc2f6(void)

undefined8 * FUN_145acc2f6(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abed200;
  param_1[5] = &PTR_FUN_14abed530;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar3 = FUN_145993d66();
  FUN_1446f470e(&local_30,L"ReceiveTickAI",1);
  FUN_1446f470e(&local_38,L"ReceiveTick",1);
  iVar2 = FUN_145acc604(local_38,local_30,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = (*(uint *)(param_1 + 0x13) & 0xffffffe7) + iVar2 * 8;
  FUN_1446f470e(&local_40,L"ReceiveExecutionStartAI",1);
  FUN_1446f470e(&local_48,L"ReceiveExecutionStart",1);
  iVar2 = FUN_145acc604(local_48,local_40,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffff9f | iVar2 << 5;
  FUN_1446f470e(&local_50,L"ReceiveExecutionFinishAI",1);
  FUN_1446f470e(&local_58,L"ReceiveExecutionFinish",1);
  iVar2 = FUN_145acc604(local_58,local_50,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffe7f | iVar2 << 7;
  FUN_1446f470e(&local_60,L"ReceiveObserverActivatedAI",1);
  FUN_1446f470e(&local_68,L"ReceiveObserverActivated",1);
  iVar2 = FUN_145acc604(local_68,local_60,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffff9ff | iVar2 << 9;
  FUN_1446f470e(&local_70,L"ReceiveObserverDeactivatedAI",1);
  FUN_1446f470e(&local_78,L"ReceiveObserverDeactivated",1);
  iVar2 = FUN_145acc604(local_78,local_70,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffe7ff | iVar2 << 0xb;
  FUN_1446f470e(&local_80,L"PerformConditionCheckAI",1);
  FUN_1446f470e(&local_88,L"PerformConditionCheck",1);
  iVar2 = FUN_145acc604(local_88,local_80,param_1,uVar3);
  uVar1 = *(uint *)(param_1 + 0x13);
  *(byte *)(param_1 + 0xb) =
       ((uVar1 & 0x18) != 0) << 2 |
       ((uVar1 & 0x1800) != 0) * '\x02' | *(byte *)(param_1 + 0xb) & 0xf8 | (uVar1 & 0x600) != 0;
  *(uint *)(param_1 + 0xc) =
       (uint)((uVar1 & 0x180) != 0) * 0x10 + (uint)((uVar1 & 0x60) != 0) * 8 |
       *(uint *)(param_1 + 0xc) & 0xffffffc7;
  *(uint *)(param_1 + 0x13) = iVar2 * 0x2000 + (uVar1 & 0xffff9ff8) + 1;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acc604 FUN_145acc604 body=109 status=ok
// SIG undefined FUN_145acc604(void)

byte FUN_145acc604(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  
  lVar1 = FUN_1400796d0(*(undefined8 *)(param_3 + 0x10),param_1,1);
  bVar2 = 0;
  bVar3 = false;
  if (lVar1 != 0) {
    bVar3 = *(longlong *)(lVar1 + 0x20) != param_4;
  }
  lVar1 = FUN_1400796d0(*(undefined8 *)(param_3 + 0x10),param_2,1);
  if (lVar1 != 0) {
    bVar2 = (*(longlong *)(lVar1 + 0x20) != param_4) * '\x02';
  }
  return bVar2 | bVar3;
}



// FUNCTION 145acc672 FUN_145acc672 body=40 status=ok
// SIG undefined FUN_145acc672(void)

undefined8 FUN_145acc672(undefined8 param_1,int param_2)

{
  FUN_145acc69a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acc69a FUN_145acc69a body=89 status=ok
// SIG undefined FUN_145acc69a(void)

void FUN_145acc69a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f2c0;
  param_1[5] = &PTR_FUN_14a73f8c0;
  param_1[6] = &PTR_LAB_14a73f900;
  if (param_1[0x18a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x179] != 0) {
    FUN_1400020a8();
  }
  FUN_1458271e8(param_1);
  return;
}



// FUNCTION 145acc6fc FUN_145acc6fc body=121 status=ok
// SIG undefined FUN_145acc6fc(void)

undefined8 * FUN_145acc6fc(undefined8 *param_1)

{
  FUN_140dbffdc();
  *param_1 = &PTR_FUN_14ab0cd50;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  return param_1;
}



// FUNCTION 145acc780 FUN_145acc780 body=118 status=ok
// SIG undefined FUN_145acc780(void)

undefined8 * FUN_145acc780(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14b00b3d0;
  param_1[5] = &PTR_FUN_14b00b9b0;
  param_1[6] = &PTR_LAB_14b00b9f0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2ac) = 0x100;
  *(undefined4 *)(param_1 + 0x56) = 0x461c4000;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) | 8;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  return param_1;
}



// FUNCTION 145acc7f6 FUN_145acc7f6 body=70 status=ok
// SIG undefined FUN_145acc7f6(void)

void FUN_145acc7f6(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  param_1 = param_1 + 0x38;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1);
    FUN_140545fa2(uVar1);
    uVar1 = FUN_14479d2ce(param_1);
    FUN_145acc83c(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 145acc83c FUN_145acc83c body=43 status=ok
// SIG undefined FUN_145acc83c(void)

void FUN_145acc83c(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0xf48) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0xf48) + 0x73eb) != '\x02')) &&
     ((*(byte *)(param_1 + 0x5a0) & 2) == 0)) {
    FUN_1416796f8(param_1 + 0x34f0);
    return;
  }
  return;
}



// FUNCTION 145acc876 FUN_145acc876 body=45 status=ok
// SIG undefined FUN_145acc876(void)

undefined8 FUN_145acc876(undefined8 param_1,int param_2)

{
  FUN_145acc8a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x718);
  }
  return param_1;
}



// FUNCTION 145acc8a4 FUN_145acc8a4 body=555 status=ok
// SIG undefined FUN_145acc8a4(void)

void FUN_145acc8a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b181190;
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  FUN_145accad0(param_1 + 0xce);
  *(undefined4 *)(param_1 + 0xc2) = 0;
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_145accb08(param_1 + 0xb9);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_145accb40(param_1 + 0xaf);
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  FUN_145accb78(param_1 + 0xa5);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_145accbb0(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_145accbe8(param_1 + 0x91);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_145accc20(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_145accc58(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145accc90(param_1 + 0x73);
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_145acccc8(param_1 + 0x69);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145accad0 FUN_145accad0 body=55 status=ok
// SIG undefined FUN_145accad0(void)

void FUN_145accad0(longlong *param_1)

{
  FUN_145acd0d0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accb08 FUN_145accb08 body=55 status=ok
// SIG undefined FUN_145accb08(void)

void FUN_145accb08(longlong *param_1)

{
  FUN_145acd240(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accb40 FUN_145accb40 body=55 status=ok
// SIG undefined FUN_145accb40(void)

void FUN_145accb40(longlong *param_1)

{
  FUN_145accd00(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accb78 FUN_145accb78 body=55 status=ok
// SIG undefined FUN_145accb78(void)

void FUN_145accb78(longlong *param_1)

{
  FUN_145accd7a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accbb0 FUN_145accbb0 body=55 status=ok
// SIG undefined FUN_145accbb0(void)

void FUN_145accbb0(longlong *param_1)

{
  FUN_145accdf4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accbe8 FUN_145accbe8 body=55 status=ok
// SIG undefined FUN_145accbe8(void)

void FUN_145accbe8(longlong *param_1)

{
  FUN_145acce6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accc20 FUN_145accc20 body=55 status=ok
// SIG undefined FUN_145accc20(void)

void FUN_145accc20(longlong *param_1)

{
  FUN_145accee8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accc58 FUN_145accc58 body=55 status=ok
// SIG undefined FUN_145accc58(void)

void FUN_145accc58(longlong *param_1)

{
  FUN_145accf62(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accc90 FUN_145accc90 body=55 status=ok
// SIG undefined FUN_145accc90(void)

void FUN_145accc90(longlong *param_1)

{
  FUN_145accfdc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acccc8 FUN_145acccc8 body=55 status=ok
// SIG undefined FUN_145acccc8(void)

void FUN_145acccc8(longlong *param_1)

{
  FUN_145acd056(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145accd00 FUN_145accd00 body=121 status=ok
// SIG undefined FUN_145accd00(void)

void FUN_145accd00(longlong param_1,int param_2)

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



// FUNCTION 145accd7a FUN_145accd7a body=121 status=ok
// SIG undefined FUN_145accd7a(void)

void FUN_145accd7a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145accdf4 FUN_145accdf4 body=121 status=ok
// SIG undefined FUN_145accdf4(void)

void FUN_145accdf4(longlong param_1,int param_2)

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



// FUNCTION 145acce6e FUN_145acce6e body=121 status=ok
// SIG undefined FUN_145acce6e(void)

void FUN_145acce6e(longlong param_1,int param_2)

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



// FUNCTION 145accee8 FUN_145accee8 body=121 status=ok
// SIG undefined FUN_145accee8(void)

void FUN_145accee8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 145accf62 FUN_145accf62 body=121 status=ok
// SIG undefined FUN_145accf62(void)

void FUN_145accf62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145accfdc FUN_145accfdc body=121 status=ok
// SIG undefined FUN_145accfdc(void)

void FUN_145accfdc(longlong param_1,int param_2)

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



// FUNCTION 145acd056 FUN_145acd056 body=121 status=ok
// SIG undefined FUN_145acd056(void)

void FUN_145acd056(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145acd0d0 FUN_145acd0d0 body=365 status=ok
// SIG undefined FUN_145acd0d0(void)

void FUN_145acd0d0(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
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
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145acd240 FUN_145acd240 body=397 status=ok
// SIG undefined FUN_145acd240(void)

void FUN_145acd240(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1406f0462(lVar2 + lVar5 + 0x18);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140875b54(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145acd3d0 FUN_145acd3d0 body=42 status=ok
// SIG undefined FUN_145acd3d0(void)

void FUN_145acd3d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145acd410(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145acd3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_145acd568();
  FUN_145bd7f78(uVar2);
  return;
}



// FUNCTION 145acd3fa FUN_145acd3fa body=21 status=ok
// SIG undefined FUN_145acd3fa(void)

void FUN_145acd3fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145acd568();
  FUN_145bd7f78(uVar1);
  return;
}



// FUNCTION 145acd410 FUN_145acd410 body=191 status=ok
// SIG undefined FUN_145acd410(void)

longlong FUN_145acd410(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145acd4d0();
  lVar3 = *param_1;
  if (DAT_14cbc3b88 != DAT_14cbc3bb4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc3bb8;
    if (DAT_14cbc3bc0 != (undefined *)0x0) {
      puVar7 = DAT_14cbc3bc0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc3bc8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc3b80 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc3b78;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145acd4d0 FUN_145acd4d0 body=152 status=ok
// SIG undefined FUN_145acd4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145acd4d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc3bd0) {
    FUN_144b3d300(&DAT_14cbc3bd0);
    if (DAT_14cbc3bd0 == -1) {
      DAT_14cbc3ba0 = 0;
      DAT_14cbc3ba8 = 0;
      DAT_14cbc3b80 = 0;
      _DAT_14cbc3b88 = 0;
      _DAT_14cbc3bac = 0xffffffff00000080;
      DAT_14cbc3bb4 = 0;
      DAT_14cbc3bc0 = 0;
      DAT_14cbc3bc8 = 0;
      atexit(FUN_1440cbb97);
      _Init_thread_footer(&DAT_14cbc3bd0);
      return;
    }
  }
  return;
}



// FUNCTION 145acd568 FUN_145acd568 body=111 status=ok
// SIG undefined FUN_145acd568(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145acd568(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc3bd8;
  if (DAT_14cbc3bd8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x2280,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x45;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc3bd8;
    DAT_14cbc3be0 = DAT_14cbc3be0 + 0x10;
  }
  DAT_14cbc3bd8 = (undefined8 *)*puVar2;
  _DAT_14cbc3be4 = _DAT_14cbc3be4 + 1;
  return;
}



// FUNCTION 145acd5d8 FUN_145acd5d8 body=42 status=ok
// SIG undefined FUN_145acd5d8(void)

void FUN_145acd5d8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145acd618(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145acd5ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_145acd770();
  FUN_145cbbd2c(uVar2);
  return;
}



// FUNCTION 145acd602 FUN_145acd602 body=21 status=ok
// SIG undefined FUN_145acd602(void)

void FUN_145acd602(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145acd770();
  FUN_145cbbd2c(uVar1);
  return;
}



// FUNCTION 145acd618 FUN_145acd618 body=191 status=ok
// SIG undefined FUN_145acd618(void)

longlong FUN_145acd618(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145acd6d8();
  lVar3 = *param_1;
  if (DAT_14cbc6318 != DAT_14cbc6344) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc6348;
    if (DAT_14cbc6350 != (undefined *)0x0) {
      puVar7 = DAT_14cbc6350;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc6358 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc6310 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc6308;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145acd6d8 FUN_145acd6d8 body=152 status=ok
// SIG undefined FUN_145acd6d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145acd6d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6360) {
    FUN_144b3d300(&DAT_14cbc6360);
    if (DAT_14cbc6360 == -1) {
      DAT_14cbc6330 = 0;
      DAT_14cbc6338 = 0;
      DAT_14cbc6310 = 0;
      _DAT_14cbc6318 = 0;
      _DAT_14cbc633c = 0xffffffff00000080;
      DAT_14cbc6344 = 0;
      DAT_14cbc6350 = 0;
      DAT_14cbc6358 = 0;
      atexit(FUN_1440f457b);
      _Init_thread_footer(&DAT_14cbc6360);
      return;
    }
  }
  return;
}



// FUNCTION 145acd770 FUN_145acd770 body=111 status=ok
// SIG undefined FUN_145acd770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145acd770(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc6368;
  if (DAT_14cbc6368 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xf80,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x1f;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc6368;
    DAT_14cbc6370 = DAT_14cbc6370 + 0x10;
  }
  DAT_14cbc6368 = (undefined8 *)*puVar2;
  _DAT_14cbc6374 = _DAT_14cbc6374 + 1;
  return;
}



// FUNCTION 145acd7e0 FUN_145acd7e0 body=40 status=ok
// SIG undefined FUN_145acd7e0(void)

undefined8 FUN_145acd7e0(undefined8 param_1,int param_2)

{
  FUN_145acd808();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acd808 FUN_145acd808 body=95 status=ok
// SIG undefined FUN_145acd808(void)

void FUN_145acd808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aede270;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145acd868(param_1);
  return;
}



// FUNCTION 145acd868 FUN_145acd868 body=59 status=ok
// SIG undefined FUN_145acd868(void)

void FUN_145acd868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aeddd40;
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145acd8a3 FUN_145acd8a3 body=46 status=ok
// SIG undefined FUN_145acd8a3(void)

void FUN_145acd8a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b01a590;
  FUN_145acd8d2(puVar1 + 6);
  return;
}



// FUNCTION 145acd8d2 FUN_145acd8d2 body=245 status=ok
// SIG undefined FUN_145acd8d2(void)

undefined8 * FUN_145acd8d2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1446f470e(param_1 + 3,L"InputStaticMesh",1);
  FUN_1446f470e(param_1 + 4,L"InputTransformMatrix",1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1446f470e(param_1 + 8,L"InputStaticMesh",1);
  FUN_1446f470e(param_1 + 9,L"InputTransformMatrix",1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1446f470e(param_1 + 0x17,L"InputStaticMesh",1);
  FUN_1446f470e(param_1 + 0x18,L"InputTransformMatrix",1);
  return param_1;
}



// FUNCTION 145acd9c8 FUN_145acd9c8 body=219 status=ok
// SIG undefined FUN_145acd9c8(void)

void FUN_145acd9c8(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d8 [176];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140488232(param_1 + -0x268,&local_e8,param_2);
  FUN_140763f46(*(undefined8 *)(local_e8 + 0x10),local_d8,param_4);
  FUN_145acdaa4(local_d8,param_3);
  FUN_1407640b6(local_d8);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acdaa4 FUN_145acdaa4 body=136 status=ok
// SIG undefined FUN_145acdaa4(void)

longlong FUN_145acdaa4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000145acdb06;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000145acdb06:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 145acdb2c FUN_145acdb2c body=219 status=ok
// SIG undefined FUN_145acdb2c(void)

void FUN_145acdb2c(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 0x17;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acdc08 FUN_145acdc08 body=39 status=ok
// SIG undefined FUN_145acdc08(void)

undefined8 * FUN_145acdc08(undefined8 *param_1)

{
  FUN_1449daf8c();
  *param_1 = &PTR_FUN_14a8a39a0;
  *(byte *)((longlong)param_1 + 0xf4) = *(byte *)((longlong)param_1 + 0xf4) | 0x10;
  return param_1;
}



// FUNCTION 145acdc30 FUN_145acdc30 body=260 status=ok
// SIG undefined FUN_145acdc30(void)

undefined8 *
FUN_145acdc30(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar4);
  *puVar4 = &PTR_LAB_14acd0ae0;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_145acdd36(puVar4 + 4,param_4);
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145acdd36 FUN_145acdd36 body=484 status=ok
// SIG undefined FUN_145acdd36(void)

void FUN_145acdd36(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  FUN_14063ef7a();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14b991660;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_2);
  *(undefined4 *)(puVar5 + 5) = uVar3;
  puVar5[4] = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a55ecf0;
  plVar7[2] = (longlong)local_48;
  local_48 = (undefined8 *)0x0;
  *(undefined4 *)(plVar7 + 3) = local_40;
  local_40 = 0;
  if (plVar7 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) goto LAB_145acde57;
    param_1[1] = 0;
LAB_145acdead:
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
    if (plVar7 == (longlong *)0x0) goto LAB_145acde57;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar7 + 2);
    plVar9 = (longlong *)param_1[1];
    if (plVar7 == plVar9) {
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
    else {
      param_1[1] = (longlong)plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_145acdead;
    }
  }
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
LAB_145acde57:
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145acdf28 FUN_145acdf28 body=221 status=ok
// SIG undefined FUN_145acdf28(void)

longlong FUN_145acdf28(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad128 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148c31be1;
    local_40 = FUN_1465e52a9;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"OakNewGameSettings",&DAT_14cbad128,&DAT_148c31be0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad128;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace006 FUN_145ace006 body=44 status=ok
// SIG undefined FUN_145ace006(void)

void FUN_145ace006(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x18,0x10);
  FUN_145ace032(uVar1);
  DAT_14cb71b40 = uVar1;
  return;
}



// FUNCTION 145ace032 FUN_145ace032 body=201 status=ok
// SIG undefined FUN_145ace032(void)

undefined4 * FUN_145ace032(undefined4 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_145ace0fc(&DAT_14cb7df68,local_18,param_1,FUN_1461c9ac4);
  FUN_145ace0fc(&DAT_14cb7df80,local_18,param_1,FUN_1487d1378);
  FUN_145ace1e2(&DAT_14cb896c8,local_18,param_1,FUN_145d3248e);
  FUN_145ace1e2(&DAT_14cb896e0,local_18,param_1,FUN_145d32644);
  FUN_145ace48a(local_18,param_1);
  FUN_145ace3b0(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace0fc FUN_145ace0fc body=228 status=ok
// SIG undefined FUN_145ace0fc(void)

undefined8
FUN_145ace0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b3ecf50;
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
  *local_40 = &PTR_FUN_14b3ebe90;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1412a3750(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace1e2 FUN_145ace1e2 body=228 status=ok
// SIG undefined FUN_145ace1e2(void)

undefined8
FUN_145ace1e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b3ecd00;
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
  *local_40 = &PTR_FUN_14b3ebf30;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_145ace2c8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace2c8 FUN_145ace2c8 body=214 status=ok
// SIG undefined FUN_145ace2c8(void)

undefined8 * FUN_145ace2c8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ace3b0 FUN_145ace3b0 body=216 status=ok
// SIG undefined FUN_145ace3b0(void)

undefined8 FUN_145ace3b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b3ec0f0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b3ec080;
  local_30[3] = param_2;
  local_30[4] = FUN_1487d156e;
  FUN_145ace56a(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace48a FUN_145ace48a body=223 status=ok
// SIG undefined FUN_145ace48a(void)

undefined8 FUN_145ace48a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b3ebff0;
  local_30[3] = param_2;
  local_30[4] = FUN_145e2d99a;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace56a FUN_145ace56a body=233 status=ok
// SIG undefined FUN_145ace56a(void)

undefined8 * FUN_145ace56a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb71dd0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb71dd8;
      lVar6 = (longlong)(int)DAT_14cb71dd8;
      DAT_14cb71dd8 = DAT_14cb71dd8 + 1;
      if (DAT_14cb71ddc < DAT_14cb71dd8) {
        FUN_1447a71f6(&DAT_14cb71dd0,uVar3);
      }
      lVar2 = DAT_14cb71dd0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb71dd0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace672 FUN_145ace672 body=54 status=ok
// SIG undefined FUN_145ace672(void)

undefined8 * FUN_145ace672(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1c1450;
  FUN_1414a735c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ace6a8 FUN_145ace6a8 body=338 status=ok
// SIG undefined FUN_145ace6a8(void)

undefined4 * FUN_145ace6a8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ace89e(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_58 = 0;
  cVar5 = FUN_145ace7fc(param_1,uVar6,local_40);
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_145ace984(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ace7fc FUN_145ace7fc body=161 status=ok
// SIG undefined FUN_145ace7fc(void)

void FUN_145ace7fc(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14898c05a((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_145ace820;
    }
  }
  uVar6 = 0;
LAB_145ace820:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 145ace89e FUN_145ace89e body=230 status=ok
// SIG undefined FUN_145ace89e(void)

int * FUN_145ace89e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145ace984 FUN_145ace984 body=486 status=ok
// SIG undefined FUN_145ace984(void)

void FUN_145ace984(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 145aceb74 FUN_145aceb74 body=57 status=ok
// SIG undefined FUN_145aceb74(void)

undefined8 * FUN_145aceb74(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR_FUN_149f91300;
  param_1[5] = &PTR_FUN_149f915b0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145acebae FUN_145acebae body=40 status=ok
// SIG undefined FUN_145acebae(void)

undefined8 FUN_145acebae(undefined8 param_1,int param_2)

{
  FUN_145acebd6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acebd6 FUN_145acebd6 body=90 status=ok
// SIG undefined FUN_145acebd6(void)

void FUN_145acebd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a83db60;
  param_1[5] = &PTR_FUN_14a83e150;
  param_1[6] = &PTR_LAB_14a83e190;
  FUN_144760e21(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145acec3c FUN_145acec3c body=54 status=ok
// SIG undefined FUN_145acec3c(void)

undefined8 * FUN_145acec3c(undefined8 *param_1)

{
  FUN_145946744();
  *param_1 = &PTR_FUN_14a5d9490;
  param_1[5] = &PTR_FUN_14a5d9890;
  param_1[0x3bd] = 0;
  return param_1;
}



// FUNCTION 145acec7e FUN_145acec7e body=54 status=ok
// SIG undefined FUN_145acec7e(void)

undefined8 * FUN_145acec7e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6c5d40;
  return param_1;
}



// FUNCTION 145acecc0 FUN_145acecc0 body=54 status=ok
// SIG undefined FUN_145acecc0(void)

undefined8 * FUN_145acecc0(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6c61f0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145aced02 FUN_145aced02 body=54 status=ok
// SIG undefined FUN_145aced02(void)

undefined8 * FUN_145aced02(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6ca170;
  return param_1;
}



// FUNCTION 145aced44 FUN_145aced44 body=54 status=ok
// SIG undefined FUN_145aced44(void)

undefined8 * FUN_145aced44(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6ceb50;
  return param_1;
}



// FUNCTION 145aced86 FUN_145aced86 body=54 status=ok
// SIG undefined FUN_145aced86(void)

undefined8 * FUN_145aced86(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d0130;
  return param_1;
}



// FUNCTION 145acedc8 FUN_145acedc8 body=54 status=ok
// SIG undefined FUN_145acedc8(void)

undefined8 * FUN_145acedc8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d12f0;
  return param_1;
}



// FUNCTION 145acee0a FUN_145acee0a body=54 status=ok
// SIG undefined FUN_145acee0a(void)

undefined8 * FUN_145acee0a(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d26b0;
  return param_1;
}



// FUNCTION 145acee4c FUN_145acee4c body=54 status=ok
// SIG undefined FUN_145acee4c(void)

undefined8 * FUN_145acee4c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d48c0;
  return param_1;
}



// FUNCTION 145acee8e FUN_145acee8e body=54 status=ok
// SIG undefined FUN_145acee8e(void)

undefined8 * FUN_145acee8e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d5d70;
  return param_1;
}



// FUNCTION 145aceed0 FUN_145aceed0 body=54 status=ok
// SIG undefined FUN_145aceed0(void)

undefined8 * FUN_145aceed0(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d6fb0;
  return param_1;
}



// FUNCTION 145acef12 FUN_145acef12 body=54 status=ok
// SIG undefined FUN_145acef12(void)

undefined8 * FUN_145acef12(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d7df0;
  return param_1;
}



// FUNCTION 145acef54 FUN_145acef54 body=54 status=ok
// SIG undefined FUN_145acef54(void)

undefined8 * FUN_145acef54(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6de310;
  return param_1;
}



// FUNCTION 145acef96 FUN_145acef96 body=54 status=ok
// SIG undefined FUN_145acef96(void)

undefined8 * FUN_145acef96(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6e12c0;
  return param_1;
}



// FUNCTION 145acefd8 FUN_145acefd8 body=54 status=ok
// SIG undefined FUN_145acefd8(void)

undefined8 * FUN_145acefd8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e1870;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145acf01a FUN_145acf01a body=54 status=ok
// SIG undefined FUN_145acf01a(void)

undefined8 * FUN_145acf01a(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6e1cf0;
  return param_1;
}



// FUNCTION 145acf05c FUN_145acf05c body=54 status=ok
// SIG undefined FUN_145acf05c(void)

undefined8 * FUN_145acf05c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e33f0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x80;
  return param_1;
}



// FUNCTION 145acf09e FUN_145acf09e body=54 status=ok
// SIG undefined FUN_145acf09e(void)

undefined8 * FUN_145acf09e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6e5530;
  return param_1;
}



// FUNCTION 145acf0e0 FUN_145acf0e0 body=54 status=ok
// SIG undefined FUN_145acf0e0(void)

undefined8 * FUN_145acf0e0(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6e6340;
  return param_1;
}



// FUNCTION 145acf122 FUN_145acf122 body=54 status=ok
// SIG undefined FUN_145acf122(void)

undefined8 * FUN_145acf122(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e8a80;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 145acf164 FUN_145acf164 body=54 status=ok
// SIG undefined FUN_145acf164(void)

undefined8 * FUN_145acf164(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6eb080;
  return param_1;
}



// FUNCTION 145acf1a6 FUN_145acf1a6 body=54 status=ok
// SIG undefined FUN_145acf1a6(void)

undefined8 * FUN_145acf1a6(undefined8 *param_1)

{
  FUN_1458120b2();
  *param_1 = &PTR_FUN_14ab8e2f0;
  param_1[5] = &PTR_FUN_14ab8e8d0;
  param_1[6] = &PTR_LAB_14ab8e910;
  return param_1;
}



// FUNCTION 145acf1dc FUN_145acf1dc body=40 status=ok
// SIG undefined FUN_145acf1dc(void)

undefined8 FUN_145acf1dc(undefined8 param_1,int param_2)

{
  FUN_145acf204();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acf204 FUN_145acf204 body=90 status=ok
// SIG undefined FUN_145acf204(void)

void FUN_145acf204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab92a00;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145acf26a FUN_145acf26a body=54 status=ok
// SIG undefined FUN_145acf26a(void)

undefined8 * FUN_145acf26a(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abca6c0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 7;
  *(undefined4 *)(param_1 + 5) = 0xff00ffff;
  return param_1;
}



// FUNCTION 145acf2ac FUN_145acf2ac body=54 status=ok
// SIG undefined FUN_145acf2ac(void)

undefined8 * FUN_145acf2ac(undefined8 *param_1)

{
  FUN_1458120b2();
  *param_1 = &PTR_FUN_14b0a4550;
  param_1[5] = &PTR_FUN_14b0a4b30;
  param_1[6] = &PTR_LAB_14b0a4b70;
  return param_1;
}



// FUNCTION 145acf2ee FUN_145acf2ee body=54 status=ok
// SIG undefined FUN_145acf2ee(void)

undefined8 * FUN_145acf2ee(undefined8 *param_1)

{
  FUN_1458120b2();
  *param_1 = &PTR_FUN_14b3aee00;
  param_1[5] = &PTR_FUN_14b3af3e0;
  param_1[6] = &PTR_LAB_14b3af420;
  return param_1;
}



// FUNCTION 145acf332 FUN_145acf332 body=40 status=ok
// SIG undefined FUN_145acf332(void)

undefined8 FUN_145acf332(undefined8 param_1,int param_2)

{
  FUN_145acf35a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acf35a FUN_145acf35a body=206 status=ok
// SIG undefined FUN_145acf35a(void)

void FUN_145acf35a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3d5940;
  plVar3 = (longlong *)param_1[0x2c];
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
  FUN_144a2da94(param_1 + 0x1f);
  FUN_144a2da94(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145acf434 FUN_145acf434 body=119 status=ok
// SIG undefined FUN_145acf434(void)

undefined8 * FUN_145acf434(undefined8 *param_1)

{
  FUN_145a2d40e();
  *param_1 = &PTR_FUN_14b531e80;
  param_1[5] = &PTR_FUN_14b532370;
  param_1[0x2d] = &PTR_FUN_14b5323b0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x8b] = 2;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  return param_1;
}



// FUNCTION 145acf4b6 FUN_145acf4b6 body=54 status=ok
// SIG undefined FUN_145acf4b6(void)

undefined8 * FUN_145acf4b6(undefined8 *param_1)

{
  FUN_145812046();
  *param_1 = &PTR_FUN_14b73c450;
  param_1[5] = &PTR_FUN_14b73ca30;
  param_1[6] = &PTR_LAB_14b73ca70;
  return param_1;
}



// FUNCTION 145acf4f8 FUN_145acf4f8 body=54 status=ok
// SIG undefined FUN_145acf4f8(void)

undefined8 * FUN_145acf4f8(undefined8 *param_1)

{
  FUN_1458120b2();
  *param_1 = &PTR_FUN_14b7ddb00;
  param_1[5] = &PTR_FUN_14b7de0e0;
  param_1[6] = &PTR_LAB_14b7de120;
  return param_1;
}



// FUNCTION 145acf536 FUN_145acf536 body=122 status=ok
// SIG undefined FUN_145acf536(void)

undefined8 * FUN_145acf536(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b822920;
  param_1[6] = &PTR_FUN_14b822be0;
  param_1[7] = &PTR_FUN_14b822c70;
  param_1[0xb] = 0;
  FUN_14485c47a(param_1 + 0xb,0);
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
  *(undefined4 *)(param_1 + 0x16) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 145acf5b8 FUN_145acf5b8 body=122 status=ok
// SIG undefined FUN_145acf5b8(void)

undefined8 * FUN_145acf5b8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0x3e4ccccd00000000;
  *(undefined4 *)(param_1 + 5) = 0x4fc71eb4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14b951090;
  FUN_140c51964(param_1 + 9);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  return param_1;
}



// FUNCTION 145acf632 FUN_145acf632 body=63 status=ok
// SIG undefined FUN_145acf632(void)

void FUN_145acf632(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145acf672(param_1);
    FUN_140bebc02(param_1);
    return;
  }
  FUN_140bebc02(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414a73aa(param_1);
  return;
}



// FUNCTION 145acf672 FUN_145acf672 body=327 status=ok
// SIG undefined FUN_145acf672(void)

void FUN_145acf672(longlong *param_1)

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



// FUNCTION 145acf7ba FUN_145acf7ba body=40 status=ok
// SIG undefined FUN_145acf7ba(void)

undefined8 FUN_145acf7ba(undefined8 param_1,int param_2)

{
  FUN_1414a7654();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acf7ea FUN_145acf7ea body=301 status=ok
// SIG undefined FUN_145acf7ea(void)

undefined8 * FUN_145acf7ea(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140e51bee(param_1,uVar1);
  *param_1 = &PTR_FUN_14b5f1330;
  param_1[0x72] = &PTR_FUN_14b5f1a00;
  param_1[0x73] = &PTR_FUN_14b5f1a80;
  param_1[0x74] = &PTR_FUN_14b5f1af0;
  param_1[0x75] = &PTR_FUN_14b5f1b18;
  param_1[0x76] = &PTR_FUN_14b5f1b30;
  param_1[0xa4] = &PTR_FUN_14b5f1b60;
  param_1[0xa5] = &PTR_FUN_14b5f1bb0;
  param_1[0xa6] = &PTR_FUN_14b5f1be0;
  param_1[0xa7] = &PTR_FUN_14b5f1c10;
  param_1[0xa8] = &PTR_FUN_14b5f1c28;
  param_1[0x118] = &PTR_FUN_14b5f1c40;
  param_1[0x119] = &PTR_FUN_14b5f1c70;
  param_1[0x11a] = &PTR_FUN_14b5f1ca0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e9) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x901) = 0;
  *(undefined8 *)((longlong)param_1 + 0x909) = 0;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfb;
  return param_1;
}



// FUNCTION 145acf918 FUN_145acf918 body=40 status=ok
// SIG undefined FUN_145acf918(void)

undefined8 FUN_145acf918(undefined8 param_1,int param_2)

{
  FUN_145acf940();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145acf940 FUN_145acf940 body=667 status=ok
// SIG undefined FUN_145acf940(void)

void FUN_145acf940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad2ed80;
  param_1[5] = &PTR_FUN_14ad2f040;
  FUN_145ad0085(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe08(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe39(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe6a(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe9b(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfecc(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfefd(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff2e(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff5f(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff90(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145acffc1(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfff2(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad0023(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad0054(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfbdc(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145acfbdc FUN_145acfbdc body=556 status=ok
// SIG undefined FUN_145acfbdc(void)

void FUN_145acfbdc(longlong *param_1)

{
  FUN_145ad0085(param_1[0x1a],(int)param_1[0x1b]);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe08(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe39(param_1[0x16],(int)param_1[0x17]);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe6a(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfe9b(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfecc(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfefd(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff2e(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff5f(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145acff90(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145acffc1(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_145acfff2(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad0023(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad0054(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145acfe08 FUN_145acfe08 body=49 status=ok
// SIG undefined FUN_145acfe08(void)

void FUN_145acfe08(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfe39 FUN_145acfe39 body=49 status=ok
// SIG undefined FUN_145acfe39(void)

void FUN_145acfe39(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfe6a FUN_145acfe6a body=49 status=ok
// SIG undefined FUN_145acfe6a(void)

void FUN_145acfe6a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfe9b FUN_145acfe9b body=49 status=ok
// SIG undefined FUN_145acfe9b(void)

void FUN_145acfe9b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfecc FUN_145acfecc body=49 status=ok
// SIG undefined FUN_145acfecc(void)

void FUN_145acfecc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfefd FUN_145acfefd body=49 status=ok
// SIG undefined FUN_145acfefd(void)

void FUN_145acfefd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acff2e FUN_145acff2e body=49 status=ok
// SIG undefined FUN_145acff2e(void)

void FUN_145acff2e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acff5f FUN_145acff5f body=49 status=ok
// SIG undefined FUN_145acff5f(void)

void FUN_145acff5f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acff90 FUN_145acff90 body=49 status=ok
// SIG undefined FUN_145acff90(void)

void FUN_145acff90(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acffc1 FUN_145acffc1 body=49 status=ok
// SIG undefined FUN_145acffc1(void)

void FUN_145acffc1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145acfff2 FUN_145acfff2 body=49 status=ok
// SIG undefined FUN_145acfff2(void)

void FUN_145acfff2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad0023 FUN_145ad0023 body=49 status=ok
// SIG undefined FUN_145ad0023(void)

void FUN_145ad0023(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad0054 FUN_145ad0054 body=49 status=ok
// SIG undefined FUN_145ad0054(void)

void FUN_145ad0054(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad0085 FUN_145ad0085 body=52 status=ok
// SIG undefined FUN_145ad0085(void)

void FUN_145ad0085(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad00ba FUN_145ad00ba body=355 status=ok
// SIG undefined FUN_145ad00ba(void)

void FUN_145ad00ba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_14614c256;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92c30,param_1);
      local_38 = FUN_148ebec3e;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92c38,param_1);
      local_38 = FUN_148ebecaa;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92bc0,param_1);
      local_38 = FUN_148ebedc6;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92bc8,param_1);
      local_38 = FUN_148ebeee2;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92c40,param_1);
      local_38 = (code *)&LAB_148ebef3a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145ad021e(param_1,param_2,&DAT_14cb92c48,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad021e FUN_145ad021e body=293 status=ok
// SIG undefined FUN_145ad021e(void)

void FUN_145ad021e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1414a77e4(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad0344 FUN_145ad0344 body=146 status=ok
// SIG undefined FUN_145ad0344(void)

void FUN_145ad0344(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f72344(param_1,&local_28,param_2);
  if (local_28 != 0) {
    uVar2 = FUN_140f7223e(param_1 + 8);
    FUN_1414a7868(local_28,uVar2);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad03f2 FUN_145ad03f2 body=217 status=ok
// SIG undefined FUN_145ad03f2(void)

undefined8 * FUN_145ad03f2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b66c140;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 145ad04cc FUN_145ad04cc body=40 status=ok
// SIG undefined FUN_145ad04cc(void)

undefined8 FUN_145ad04cc(undefined8 param_1,int param_2)

{
  FUN_145ad04f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad04f4 FUN_145ad04f4 body=209 status=ok
// SIG undefined FUN_145ad04f4(void)

void FUN_145ad04f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab0cd50;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad05c5(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ad05c5 FUN_145ad05c5 body=77 status=ok
// SIG undefined FUN_145ad05c5(void)

void FUN_145ad05c5(longlong param_1,int param_2)

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



// FUNCTION 145ad0612 FUN_145ad0612 body=265 status=ok
// SIG undefined FUN_145ad0612(void)

undefined * FUN_145ad0612(void)

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
              0x110) < DAT_14c9f81c8) {
    FUN_144b3d300(&DAT_14c9f81c8);
    if (DAT_14c9f81c8 == -1) {
      FUN_145ad071c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSharedParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x4d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f8148,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d57aef);
      _Init_thread_footer(&DAT_14c9f81c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f8148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad071c FUN_145ad071c body=226 status=ok
// SIG undefined FUN_145ad071c(void)

longlong * FUN_145ad071c(longlong *param_1)

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
  pcVar13 = FUN_1462dbb0c;
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



// FUNCTION 145ad0800 FUN_145ad0800 body=138 status=ok
// SIG undefined FUN_145ad0800(void)

code * FUN_145ad0800(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RaytracingAccelerationStructure";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dbd42;
}



// FUNCTION 145ad088a FUN_145ad088a body=138 status=ok
// SIG undefined FUN_145ad088a(void)

code * FUN_145ad088a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceCacheSamplingDepthBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc0000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f30ae;
}



// FUNCTION 145ad0914 FUN_145ad0914 body=144 status=ok
// SIG undefined FUN_145ad0914(void)

code * FUN_145ad0914(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Forward";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dbcb2;
}



// FUNCTION 145ad09a4 FUN_145ad09a4 body=169 status=ok
// SIG undefined FUN_145ad09a4(void)

bool FUN_145ad09a4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad0a4e FUN_145ad0a4e body=42 status=ok
// SIG undefined FUN_145ad0a4e(void)

void FUN_145ad0a4e(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1403ae46b();
  if (iVar1 != param_3) {
    return;
  }
  FUN_145acb64c(param_1);
  return;
}



// FUNCTION 145ad0a78 FUN_145ad0a78 body=49 status=ok
// SIG undefined FUN_145ad0a78(void)

undefined4 FUN_145ad0a78(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1414dac37();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xec) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 145ad0aaa FUN_145ad0aaa body=543 status=ok
// SIG undefined FUN_145ad0aaa(void)

longlong * FUN_145ad0aaa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1414a7f7c(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_145ad0aee;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c1be0;
  plVar5 = plVar4 + 2;
  FUN_145ad0e4a(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_145ad0cea(&local_58,plVar5);
  plVar1 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_145ad0c5f:
      LOCK();
      plVar5 = plVar1 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145ad0c9a:
        if (iVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar1 = plVar4;
        goto joined_r0x000145ad0c9a;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_145ad0c5f;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_145ad0d8c(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_145ad0aee:
  plVar1 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad0cea FUN_145ad0cea body=162 status=ok
// SIG undefined FUN_145ad0cea(void)

void FUN_145ad0cea(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ad0d29;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ad0d29;
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
LAB_145ad0d29:
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
                    /* WARNING: Could not recover jumptable at 0x000145ad0d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ad0d8c FUN_145ad0d8c body=188 status=ok
// SIG undefined FUN_145ad0d8c(void)

void FUN_145ad0d8c(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad0e4a FUN_145ad0e4a body=241 status=ok
// SIG undefined FUN_145ad0e4a(void)

undefined8 * FUN_145ad0e4a(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c1c00;
  param_1[0x1b] = &PTR_FUN_14a4c1c48;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad0f66 FUN_145ad0f66 body=239 status=ok
// SIG undefined FUN_145ad0f66(void)

void FUN_145ad0f66(undefined8 param_1,longlong param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  bool bVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  int local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145ad1184(local_88);
  FUN_145ad1056(param_1,local_88);
  FUN_145ad105e(&local_98);
  _Str = L"";
  if (local_90 != 0) {
    _Str = local_98;
  }
  if (_Str == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    sVar2 = wcslen(_Str);
    local_a0 = 0xffffffff;
    local_a8 = 0;
    iVar1 = FUN_1447ee042(param_2 + 0x28,_Str,sVar2 & 0xffffffff,1);
    bVar3 = iVar1 != -1;
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((!bVar3) && (DAT_14c9a1ab0 != 0)) {
    FUN_145ad110e();
  }
  FUN_141238aee(param_2);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad1056 FUN_145ad1056 body=8 status=ok
// SIG undefined FUN_145ad1056(void)

void FUN_145ad1056(undefined8 param_1,undefined8 param_2)

{
  FUN_141238aee(param_2);
  return;
}



// FUNCTION 145ad105e FUN_145ad105e body=176 status=ok
// SIG undefined FUN_145ad105e(void)

undefined8 * FUN_145ad105e(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14117e474();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) goto LAB_145ad10f4;
  }
  lVar3 = FUN_14117e474();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x30);
    _Src = *(void **)(lVar4 + 0x28);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
LAB_145ad10f4:
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 145ad110e FUN_145ad110e body=116 status=ok
// SIG undefined FUN_145ad110e(void)

void FUN_145ad110e(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 0;
    local_40 = 0;
    local_38 = 0xffffffff00000000;
    local_30 = 0;
    local_28 = 0xffffffff00000000;
    local_20 = 0;
    local_18 = 0xffffffff00000000;
    FUN_1462324c0(param_1,&local_40);
    FUN_145af6410(&local_40);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad1184 FUN_145ad1184 body=473 status=ok
// SIG undefined FUN_145ad1184(void)

undefined8 * FUN_145ad1184(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = param_2[4];
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
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
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_140b856de(param_1 + 9,iVar1,0);
    FUN_140b8566a(param_1[9],uVar3,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145ad135e FUN_145ad135e body=35 status=ok
// SIG undefined FUN_145ad135e(void)

void FUN_145ad135e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145ad13d2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ad1373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_145ad1382();
  return;
}



// FUNCTION 145ad1382 FUN_145ad1382 body=80 status=ok
// SIG undefined FUN_145ad1382(void)

void FUN_145ad1382(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414015aa();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b964f20;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 7) = 4;
  *(undefined4 *)(puVar1 + 4) = 0x40a00000;
  *(undefined1 *)(puVar1 + 8) = 3;
  *(char *)(puVar1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 145ad13d2 FUN_145ad13d2 body=191 status=ok
// SIG undefined FUN_145ad13d2(void)

longlong FUN_145ad13d2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145ad1492();
  lVar3 = *param_1;
  if (DAT_14cbc6410 != DAT_14cbc643c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc6440;
    if (DAT_14cbc6448 != (undefined *)0x0) {
      puVar7 = DAT_14cbc6448;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc6450 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc6408 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc6400;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145ad1492 FUN_145ad1492 body=152 status=ok
// SIG undefined FUN_145ad1492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ad1492(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6458) {
    FUN_144b3d300(&DAT_14cbc6458);
    if (DAT_14cbc6458 == -1) {
      DAT_14cbc6428 = 0;
      DAT_14cbc6430 = 0;
      DAT_14cbc6408 = 0;
      _DAT_14cbc6410 = 0;
      _DAT_14cbc6434 = 0xffffffff00000080;
      DAT_14cbc643c = 0;
      DAT_14cbc6448 = 0;
      DAT_14cbc6450 = 0;
      atexit(FUN_1440f45a9);
      _Init_thread_footer(&DAT_14cbc6458);
      return;
    }
  }
  return;
}



// FUNCTION 145ad152a FUN_145ad152a body=38 status=ok
// SIG undefined FUN_145ad152a(void)

undefined8 FUN_145ad152a(undefined8 param_1,int param_2)

{
  FUN_145ad1550();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad1550 FUN_145ad1550 body=124 status=ok
// SIG undefined FUN_145ad1550(void)

void FUN_145ad1550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eee530;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  FUN_145ad15cc(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad15cc(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad1608(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_145aeab52(param_1);
  return;
}



// FUNCTION 145ad15cc FUN_145ad15cc body=60 status=ok
// SIG undefined FUN_145ad15cc(void)

void FUN_145ad15cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad1608 FUN_145ad1608 body=40 status=ok
// SIG undefined FUN_145ad1608(void)

void FUN_145ad1608(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1469755c0(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}


