// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a21264 FUN_145a21264 body=57 status=ok
// SIG undefined FUN_145a21264(void)

void FUN_145a21264(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21970 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21970 = FUN_140002ddd(FUN_146434791,uVar1,L"GbxBrainAspectSettings_UseCover");
  }
  return;
}



// FUNCTION 145a212a6 FUN_145a212a6 body=171 status=ok
// SIG undefined FUN_145a212a6(void)

undefined8 * FUN_145a212a6(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b83b680;
  param_1[6] = &PTR_FUN_14b83b940;
  param_1[7] = &PTR_LAB_14b83b9d0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145a21352 FUN_145a21352 body=336 status=ok
// SIG undefined FUN_145a21352(void)

longlong * FUN_145a21352(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_141218768();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  uVar1 = FUN_141218768();
  uVar3 = FUN_141218768();
  FUN_1402d1bfa(&local_30,uVar3,param_2);
  if (*param_1 != local_30) {
    param_1[2] = 0;
  }
  *param_1 = local_30;
  uVar3 = FUN_141218768();
  lVar2 = FUN_141459e9e(uVar1,uVar3);
  if (param_1[1] != lVar2) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664(lVar2);
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  if ((lVar2 != 0) && (*param_1 != 0)) {
    param_1[2] = param_2;
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_141459eca(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a214a4 FUN_145a214a4 body=147 status=ok
// SIG undefined FUN_145a214a4(void)

void FUN_145a214a4(longlong param_1,int param_2)

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



// FUNCTION 145a21538 FUN_145a21538 body=199 status=ok
// SIG undefined FUN_145a21538(void)

void FUN_145a21538(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    FUN_14145a107(&local_30,*(longlong *)(param_1 + 8),1);
    plVar1 = local_28;
    *(undefined8 *)(param_1 + 0x20) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x28) = plVar1;
      if (plVar3 == (longlong *)0x0) goto LAB_145a2159b;
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
  }
LAB_145a2159b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2160c FUN_145a2160c body=53 status=ok
// SIG undefined FUN_145a2160c(void)

undefined8 * FUN_145a2160c(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b213330;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 145a21642 FUN_145a21642 body=24 status=ok
// SIG undefined FUN_145a21642(void)

void FUN_145a21642(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a21656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a2165a FUN_145a2165a body=38 status=ok
// SIG undefined FUN_145a2165a(void)

undefined8 FUN_145a2165a(undefined8 param_1,int param_2)

{
  FUN_145a21680();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a21680 FUN_145a21680 body=169 status=ok
// SIG undefined FUN_145a21680(void)

void FUN_145a21680(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3e9e00;
  param_1[4] = &PTR_LAB_14b3e9e60;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2172a(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a21725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a2172a FUN_145a2172a body=55 status=ok
// SIG undefined FUN_145a2172a(void)

void FUN_145a2172a(longlong *param_1)

{
  FUN_145a21762(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a21762 FUN_145a21762 body=123 status=ok
// SIG undefined FUN_145a21762(void)

void FUN_145a21762(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
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



// FUNCTION 145a217ea FUN_145a217ea body=75 status=ok
// SIG undefined FUN_145a217ea(void)

void FUN_145a217ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14490b2fc(param_1 + 4);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0x1d8 + (longlong)iVar1 * 8) = 0;
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  FUN_144a6a7be(param_1 + 4);
  return;
}



// FUNCTION 145a2183e FUN_145a2183e body=378 status=ok
// SIG undefined FUN_145a2183e(void)

void FUN_145a2183e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0xbc) = 0;
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 200) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0x9c) = 0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0xa8) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a219b8 FUN_145a219b8 body=418 status=ok
// SIG undefined FUN_145a219b8(void)

void FUN_145a219b8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 0x4f;
  plVar2 = param_1 + 0x51;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar2;
  if ((int)param_1[0x54] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = (int)param_1[0x54];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (uStack_50 != plVar2)) {
    do {
      lVar3 = *local_80;
      lVar5 = (longlong)iStack_64;
      lVar4 = *(longlong *)(lVar3 + 0x10 + lVar5 * 0x20);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
        (**(code **)(*param_1 + 0x430))(param_1);
        *(undefined8 *)(*(longlong *)(lVar3 + lVar5 * 0x20 + 0x10) + 0x30) = 0;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2 || iStack_64 != iVar6));
  }
  lVar3 = param_1[0x6f];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = param_1[0x6e];
    lVar5 = 0;
    do {
      (**(code **)(*param_1 + 0x430))(param_1,*(undefined8 *)(lVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (*(int *)((longlong)param_1 + 0x37c) != 0) {
    FUN_1470a4d4a(param_1 + 0x6e,0);
  }
  FUN_145a21b98(param_1 + 100);
  FUN_140fa7ee4(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a21b6c FUN_145a21b6c body=44 status=ok
// SIG undefined FUN_145a21b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a21b6c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a1cd4 = _DAT_14c9a1cd4 + -1;
  *param_1 = DAT_14c9a1cc8;
  DAT_14c9a1cc8 = param_1;
  return;
}



// FUNCTION 145a21b98 FUN_145a21b98 body=67 status=ok
// SIG undefined FUN_145a21b98(void)

void FUN_145a21b98(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145a21bdc(param_1);
    FUN_14586a630(param_1,0);
    return;
  }
  FUN_14586a630(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1413fe0a8(param_1);
  return;
}



// FUNCTION 145a21bdc FUN_145a21bdc body=325 status=ok
// SIG undefined FUN_145a21bdc(void)

void FUN_145a21bdc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145a21d22 FUN_145a21d22 body=124 status=ok
// SIG undefined FUN_145a21d22(void)

void FUN_145a21d22(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a21da0 FUN_145a21da0 body=93 status=ok
// SIG undefined FUN_145a21da0(void)

void FUN_145a21da0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4345a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4347a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 145a21e0c FUN_145a21e0c body=45 status=ok
// SIG undefined FUN_145a21e0c(void)

undefined8 FUN_145a21e0c(undefined8 param_1,int param_2)

{
  FUN_145a21e3a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145a21e3a FUN_145a21e3a body=95 status=ok
// SIG undefined FUN_145a21e3a(void)

void FUN_145a21e3a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5d1240;
  param_1[3] = &PTR_FUN_14b5d12c0;
  plVar3 = (longlong *)param_1[6];
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
  param_1[3] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 3);
  return;
}



// FUNCTION 145a21e9a FUN_145a21e9a body=40 status=ok
// SIG undefined FUN_145a21e9a(void)

undefined8 FUN_145a21e9a(undefined8 param_1,int param_2)

{
  FUN_145a21ec2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a21ec2 FUN_145a21ec2 body=114 status=ok
// SIG undefined FUN_145a21ec2(void)

void FUN_145a21ec2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba865f0;
  param_1[5] = &PTR_FUN_14ba87070;
  param_1[6] = &PTR_LAB_14ba870b0;
  param_1[0x55] = &PTR_FUN_14ba87100;
  param_1[0x56] = &PTR_FUN_14ba87180;
  param_1[0x57] = &PTR_FUN_14ba87190;
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 145a21f34 FUN_145a21f34 body=154 status=ok
// SIG undefined FUN_145a21f34(void)

bool FUN_145a21f34(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145a21fd0 FUN_145a21fd0 body=165 status=ok
// SIG undefined FUN_145a21fd0(void)

void FUN_145a21fd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x4b8) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + lVar1) == param_2) {
        local_28 = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        local_20 = &local_28;
        FUN_148e136b8(param_1 + 0x4b0);
        FUN_148dc20ac(param_2,0);
        break;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x4b8) * 8 != lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a22076 FUN_145a22076 body=38 status=ok
// SIG undefined FUN_145a22076(void)

undefined8 FUN_145a22076(undefined8 param_1,int param_2)

{
  FUN_145a2209c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2209c FUN_145a2209c body=129 status=ok
// SIG undefined FUN_145a2209c(void)

void FUN_145a2209c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44d50;
  FUN_1449db362(param_1 + 0xb);
  plVar3 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_14ba44db0;
  plVar3 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x000145a22111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a2211e FUN_145a2211e body=120 status=ok
// SIG undefined FUN_145a2211e(void)

void FUN_145a2211e(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_145a22198(param_1,&local_58);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_145a22198(param_1 + 0x24,&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a22198 FUN_145a22198 body=136 status=ok
// SIG undefined FUN_145a22198(void)

void FUN_145a22198(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  *param_1 = *param_2;
  if (param_2 == param_1) {
    param_1[3] = param_2[3];
    param_1[6] = param_2[6];
    return;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
    param_1[1] = param_2[1];
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x01') goto LAB_145a221b5;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
LAB_145a221b5:
  param_1[3] = param_2[3];
  if (*(char *)(param_2 + 5) == '\x01') {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  param_1[6] = param_2[6];
  if (*(char *)(param_2 + 8) != '\x01') {
    if (*(char *)(param_1 + 8) == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    return;
  }
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 145a22220 FUN_145a22220 body=265 status=ok
// SIG undefined FUN_145a22220(void)

undefined * FUN_145a22220(void)

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
              0x110) < DAT_14c9c9c90) {
    FUN_144b3d300(&DAT_14c9c9c90);
    if (DAT_14c9c9c90 == -1) {
      FUN_145a2232a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDistanceFieldCulledObjectBufferParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x68;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9c10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7682);
      _Init_thread_footer(&DAT_14c9c9c90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c9c10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2232a FUN_145a2232a body=226 status=ok
// SIG undefined FUN_145a2232a(void)

longlong * FUN_145a2232a(longlong *param_1)

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
  pcVar13 = FUN_1462bef36;
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



// FUNCTION 145a22412 FUN_145a22412 body=138 status=ok
// SIG undefined FUN_145a22412(void)

code * FUN_145a22412(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCulledObjectIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147151b04;
}



// FUNCTION 145a2249c FUN_145a2249c body=138 status=ok
// SIG undefined FUN_145a2249c(void)

code * FUN_145a2249c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndirectArguments";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a22412;
}



// FUNCTION 145a22526 FUN_145a22526 body=96 status=ok
// SIG undefined FUN_145a22526(void)

void FUN_145a22526(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_145a225a3(*(undefined8 *)(param_1 + 0x10));
  FUN_145a225a3(*(undefined8 *)(param_1 + 8));
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a2257c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a22586 FUN_145a22586 body=29 status=ok
// SIG undefined FUN_145a22586(void)

undefined8 FUN_145a22586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a225a3 FUN_145a225a3 body=163 status=ok
// SIG undefined FUN_145a225a3(void)

void FUN_145a225a3(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145a22648(plVar1,&local_30,DAT_14cc223b0);
  if ((longlong)local_28 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(local_30 + lVar2) == param_1) {
        lVar2 = param_1 + 8;
        if (param_1 == 0) {
          lVar2 = 0;
        }
        (**(code **)(*plVar1 + 0x30))(plVar1,DAT_14cc223b0,lVar2);
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)local_28 * 8 != lVar2);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a22648 FUN_145a22648 body=133 status=ok
// SIG undefined FUN_145a22648(void)

longlong * FUN_145a22648(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_145a226ce(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 145a226ce FUN_145a226ce body=132 status=ok
// SIG undefined FUN_145a226ce(void)

void FUN_145a226ce(longlong param_1,int param_2)

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



// FUNCTION 145a22752 FUN_145a22752 body=75 status=ok
// SIG undefined FUN_145a22752(void)

undefined8 * FUN_145a22752(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bddfe80;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2279e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2279e FUN_145a2279e body=53 status=ok
// SIG undefined FUN_145a2279e(void)

void FUN_145a2279e(longlong *param_1)

{
  FUN_145a227d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a227d4 FUN_145a227d4 body=90 status=ok
// SIG undefined FUN_145a227d4(void)

void FUN_145a227d4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145a2282e FUN_145a2282e body=35 status=ok
// SIG undefined FUN_145a2282e(void)

void FUN_145a2282e(void)

{
  if (DAT_14c948f78 == 0) {
    DAT_14c948f78 = FUN_145e26db2();
  }
  return;
}



// FUNCTION 145a2285c FUN_145a2285c body=196 status=ok
// SIG undefined FUN_145a2285c(void)

undefined8 * FUN_145a2285c(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_149f73e80;
  *(undefined4 *)(param_1 + 7) = 0xc4750000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x457a0000;
  *(undefined4 *)(param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000;
  param_1[9] = 0x40a0000000000004;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x43480000;
  *(undefined4 *)(param_1 + 0xc) = 0x45610000;
  param_1[0xd] = 0x400000003ca3d70a;
  *(undefined4 *)(param_1 + 0xe) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0xff01;
  FUN_145a22922(param_1 + 0xf);
  FUN_1446f470e(&local_20,L"Physics",1);
  param_1[6] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a22922 FUN_145a22922 body=101 status=ok
// SIG undefined FUN_145a22922(void)

void FUN_145a22922(undefined8 *param_1)

{
  *param_1 = 0x200000008;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x412000003d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x447a000040400000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000bf800000;
  *(undefined2 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[0xc] = 0x200000008;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



// FUNCTION 145a22990 FUN_145a22990 body=95 status=ok
// SIG undefined FUN_145a22990(void)

undefined8 * FUN_145a22990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145974a56(param_1,uVar1);
  *param_1 = &PTR_FUN_149f887e0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145a229f0 FUN_145a229f0 body=171 status=ok
// SIG undefined FUN_145a229f0(void)

void FUN_145a229f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145a22a85;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a22a85:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a22a9c FUN_145a22a9c body=9 status=ok
// SIG undefined FUN_145a22a9c(void)

void FUN_145a22a9c(longlong param_1)

{
  FUN_141462172(param_1 + 0x10);
  return;
}



// FUNCTION 145a22aa5 FUN_145a22aa5 body=39 status=ok
// SIG undefined FUN_145a22aa5(void)

void FUN_145a22aa5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a22acc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b423460;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  return;
}



// FUNCTION 145a22acc FUN_145a22acc body=64 status=ok
// SIG undefined FUN_145a22acc(void)

undefined8 * FUN_145a22acc(undefined8 *param_1)

{
  FUN_1406078d6();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x11;
  *param_1 = &PTR_FUN_14a4e6490;
  *(undefined1 *)(param_1 + 0xd) = 0x1f;
  return param_1;
}



// FUNCTION 145a22b0c FUN_145a22b0c body=40 status=ok
// SIG undefined FUN_145a22b0c(void)

undefined8 FUN_145a22b0c(undefined8 param_1,int param_2)

{
  FUN_145a22b34();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22b34 FUN_145a22b34 body=63 status=ok
// SIG undefined FUN_145a22b34(void)

void FUN_145a22b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b458870;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8970(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a22b7e FUN_145a22b7e body=92 status=ok
// SIG undefined FUN_145a22b7e(void)

undefined8 * FUN_145a22b7e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b78bf80;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  memset(param_1 + 0x10,0,0x180);
  return param_1;
}



// FUNCTION 145a22bda FUN_145a22bda body=38 status=ok
// SIG undefined FUN_145a22bda(void)

undefined8 FUN_145a22bda(undefined8 param_1,int param_2)

{
  FUN_145a22c00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22c00 FUN_145a22c00 body=65 status=ok
// SIG undefined FUN_145a22c00(void)

void FUN_145a22c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a2570;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145a22c42 FUN_145a22c42 body=40 status=ok
// SIG undefined FUN_145a22c42(void)

undefined8 FUN_145a22c42(undefined8 param_1,int param_2)

{
  FUN_145a22c6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22c6a FUN_145a22c6a body=63 status=ok
// SIG undefined FUN_145a22c6a(void)

void FUN_145a22c6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc127d0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a22caa FUN_145a22caa body=40 status=ok
// SIG undefined FUN_145a22caa(void)

undefined8 FUN_145a22caa(undefined8 param_1,int param_2)

{
  FUN_145a22cd2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22cd2 FUN_145a22cd2 body=173 status=ok
// SIG undefined FUN_145a22cd2(void)

void FUN_145a22cd2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bd6ef70;
  param_1[5] = &PTR_FUN_14bd6f340;
  param_1[0x13] = &PTR_FUN_14bd6f360;
  param_1[0x1d] = &PTR_FUN_14bd6f390;
  param_1[0x1e] = &PTR_FUN_14bd6f3a0;
  lVar4 = 0x1a0;
  do {
    FUN_145a22d80((longlong)param_1 + lVar4);
    lVar4 = lVar4 + -0x50;
  } while (lVar4 != 0x100);
  lVar4 = 0x148;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x128);
  FUN_1458dc158(param_1);
  return;
}



// FUNCTION 145a22d80 FUN_145a22d80 body=96 status=ok
// SIG undefined FUN_145a22d80(void)

void FUN_145a22d80(undefined8 *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(param_1);
    *param_1 = 0;
    param_1[1] = 0xffffffff00000000;
    param_1[4] = 0;
    param_1[5] = 0x8000000000;
    param_1[6] = 0xffffffff;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 145a22de0 FUN_145a22de0 body=69 status=ok
// SIG undefined FUN_145a22de0(void)

undefined8 * FUN_145a22de0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4de640;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145a22e26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22e26 FUN_145a22e26 body=47 status=ok
// SIG undefined FUN_145a22e26(void)

void FUN_145a22e26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4769a0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a22e56 FUN_145a22e56 body=40 status=ok
// SIG undefined FUN_145a22e56(void)

undefined8 FUN_145a22e56(undefined8 param_1,int param_2)

{
  FUN_145a22e7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22e7e FUN_145a22e7e body=76 status=ok
// SIG undefined FUN_145a22e7e(void)

void FUN_145a22e7e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8cb10;
  plVar3 = (longlong *)param_1[0x79];
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
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145a22eca FUN_145a22eca body=40 status=ok
// SIG undefined FUN_145a22eca(void)

undefined8 FUN_145a22eca(undefined8 param_1,int param_2)

{
  FUN_145a22ef2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a22ef2 FUN_145a22ef2 body=136 status=ok
// SIG undefined FUN_145a22ef2(void)

void FUN_145a22ef2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aa54640;
  puVar2 = (undefined8 *)param_1[0x17];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_145a22f7a(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a22fa6(param_1 + 0xb);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a22f7a FUN_145a22f7a body=43 status=ok
// SIG undefined FUN_145a22f7a(void)

void FUN_145a22f7a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147cc5bcc(param_1);
    param_1 = param_1 + 0x138;
  }
  return;
}



// FUNCTION 145a22fa6 FUN_145a22fa6 body=53 status=ok
// SIG undefined FUN_145a22fa6(void)

void FUN_145a22fa6(longlong *param_1)

{
  FUN_145a22fdc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a22fdc FUN_145a22fdc body=346 status=ok
// SIG undefined FUN_145a22fdc(void)

void FUN_145a22fdc(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
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



// FUNCTION 145a23138 FUN_145a23138 body=37 status=ok
// SIG undefined FUN_145a23138(void)

void FUN_145a23138(undefined8 param_1,void *param_2)

{
  memset(param_2,0,1000);
  FUN_145a2315e(param_2);
  return;
}



// FUNCTION 145a2315e FUN_145a2315e body=92 status=ok
// SIG undefined FUN_145a2315e(void)

undefined8 * FUN_145a2315e(undefined8 *param_1)

{
  FUN_140f7d684();
  *param_1 = &PTR_FUN_14b0c7bc0;
  FUN_14044066a(param_1 + 0x67,0x14,7);
  FUN_14044066a(param_1 + 0x6e,0x14,7);
  FUN_14044066a(param_1 + 0x75,0x14,7);
  *(undefined2 *)(param_1 + 0x7c) = 0x100;
  return param_1;
}



// FUNCTION 145a231c2 FUN_145a231c2 body=120 status=ok
// SIG undefined FUN_145a231c2(void)

undefined8 FUN_145a231c2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbd3888;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd3888 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a23246 FUN_145a23246 body=298 status=ok
// SIG undefined FUN_145a23246(void)

undefined8 * FUN_145a23246(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4effd0;
  param_1[0x1f] = &PTR_FUN_14a4f0340;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar3 = 0x108;
  do {
    FUN_1406ed278((longlong)param_1 + lVar3);
    lVar3 = lVar3 + 0x110;
  } while (lVar3 != 0x328);
  FUN_1406ed278(param_1 + 0x65);
  lVar3 = 0x438;
  do {
    FUN_1406ed278((longlong)param_1 + lVar3);
    lVar3 = lVar3 + 0x110;
  } while (lVar3 != 0x658);
  lVar3 = 0x658;
  do {
    FUN_1406ed278((longlong)param_1 + lVar3);
    lVar3 = lVar3 + 0x110;
  } while (lVar3 != 0x878);
  local_48 = 0xd2704c107b5ae74c;
  uStack_40 = 0xb212a5aa9585798;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_58 = 0xd2704c107b5ae74c;
    uStack_50 = 0xb212a5aa9585798;
    iVar2 = FUN_1448a256a(param_1);
    cVar1 = '\x02' - (iVar2 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x7f;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a23372 FUN_145a23372 body=95 status=ok
// SIG undefined FUN_145a23372(void)

void FUN_145a23372(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145ca2dba();
  FUN_145a233d2(*(undefined8 *)(param_1 + 4));
  if (DAT_14cb7ff80 == param_1) {
    DAT_14cb7ff80 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a233d2 FUN_145a233d2 body=242 status=ok
// SIG undefined FUN_145a233d2(void)

void FUN_145a233d2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14cb7ff90 != DAT_14cb7ffbc) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14cb7ffc0;
    if (DAT_14cb7ffc8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7ffc8;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14cb7ffd0 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb7ff88 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb7ff88 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14cb7ffc0;
        if (DAT_14cb7ffc8 != (undefined *)0x0) {
          puVar6 = DAT_14cb7ffc8;
        }
        lVar1 = DAT_14cb7ff88 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14cb7ff88 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_145a234c4();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a234c4 FUN_145a234c4 body=128 status=ok
// SIG undefined FUN_145a234c4(void)

void FUN_145a234c4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7ff88;
  if (DAT_14cb7ffbc != 0) {
    *(int *)(DAT_14cb7ff88 + (longlong)DAT_14cb7ffb8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7ffbc) {
    iVar4 = DAT_14cb7ffb8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb7ffbc = DAT_14cb7ffbc + 1;
  puVar3 = &DAT_14cb7ff98;
  if (DAT_14cb7ffa8 != (undefined *)0x0) {
    puVar3 = DAT_14cb7ffa8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7ffb8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145a23544 FUN_145a23544 body=40 status=ok
// SIG undefined FUN_145a23544(void)

undefined8 FUN_145a23544(undefined8 param_1,int param_2)

{
  FUN_145a2356c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2356c FUN_145a2356c body=115 status=ok
// SIG undefined FUN_145a2356c(void)

void FUN_145a2356c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acaa5d0;
  FUN_140c576e0(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
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



// FUNCTION 145a235e8 FUN_145a235e8 body=641 status=ok
// SIG undefined FUN_145a235e8(void)

undefined8 * FUN_145a235e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140e51bee(param_1,uVar1);
  *param_1 = &PTR_FUN_14b91cf80;
  param_1[0x72] = &PTR_FUN_14b91d660;
  param_1[0x73] = &PTR_FUN_14b91d6e0;
  param_1[0x74] = &PTR_FUN_14b91d750;
  param_1[0x75] = &PTR_FUN_14b91d778;
  param_1[0x76] = &PTR_FUN_14b91d790;
  param_1[0xa4] = &PTR_FUN_14b91d7c0;
  param_1[0xa5] = &PTR_FUN_14b91d810;
  param_1[0xa6] = &PTR_FUN_14b91d840;
  param_1[0xa7] = &PTR_FUN_14b91d870;
  param_1[0xa8] = &PTR_FUN_14b91d888;
  param_1[0x118] = &PTR_FUN_14b91d8a0;
  param_1[0x119] = &PTR_FUN_14b91d8d0;
  param_1[0x11a] = &PTR_FUN_14b91d9c0;
  param_1[0x11b] = &PTR_FUN_14b91d9f0;
  param_1[0x11c] = &PTR_FUN_14b91da30;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 2;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x964) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x944) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0;
  *(undefined8 *)((longlong)param_1 + 0x93c) = 0;
  FUN_141421412(param_1 + 0x136);
  *(undefined1 *)(param_1 + 0x14d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf4) = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  param_1[0x164] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5c) = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  *(undefined1 *)(param_1 + 0x153) = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb09) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb11) = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x165) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xb2c) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  FUN_1414621d0((longlong)param_1 + 0x974,1);
  FUN_1414621d0(param_1 + 0x130,0);
  return param_1;
}



// FUNCTION 145a2386a FUN_145a2386a body=277 status=ok
// SIG undefined FUN_145a2386a(void)

void FUN_145a2386a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_218 [44];
  undefined4 local_1ec;
  undefined1 local_1e8 [456];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_140e35e6c(local_1e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ec);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_1e8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a23980(puVar1,local_1ec);
  FUN_140bba396(local_1e8);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a23980 FUN_145a23980 body=142 status=ok
// SIG undefined FUN_145a23980(void)

void FUN_145a23980(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = FUN_1403d77ae(param_1 + 8);
  if (lVar3 != 0) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x74);
    if ((plVar2 == (longlong *)0x0) &&
       (plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x6c), plVar2 == (longlong *)0x0)) {
      return;
    }
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (((lVar3 != 0) && (iVar1 = FUN_14490d72a(lVar3), iVar1 != 3)) &&
       (lVar3 = FUN_140877338(lVar3), lVar3 != 0)) {
      FUN_1414621da(lVar3,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145a23a0e FUN_145a23a0e body=147 status=ok
// SIG undefined FUN_145a23a0e(void)

void FUN_145a23a0e(longlong param_1,int param_2)

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



// FUNCTION 145a23aa2 FUN_145a23aa2 body=129 status=ok
// SIG undefined FUN_145a23aa2(void)

byte FUN_145a23aa2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_145a23bc0(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  else {
    bVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 145a23b24 FUN_145a23b24 body=155 status=ok
// SIG undefined FUN_145a23b24(void)

ulonglong FUN_145a23b24(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x50);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x48) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x48) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x48;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x50));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 145a23bc0 FUN_145a23bc0 body=193 status=ok
// SIG undefined FUN_145a23bc0(void)

longlong FUN_145a23bc0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_145a23c82(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a23c82 FUN_145a23c82 body=167 status=ok
// SIG undefined FUN_145a23c82(void)

undefined4 * FUN_145a23c82(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 145a23d2a FUN_145a23d2a body=376 status=ok
// SIG undefined FUN_145a23d2a(void)

void FUN_145a23d2a(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar9 = *(byte *)(lVar10 + 0x50);
    if ((bVar9 & 1) == 0) {
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[5];
      uVar7 = param_4[6];
      uVar8 = param_4[7];
      *(undefined4 *)(lVar10 + 0x20) = param_4[4];
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
      *(undefined4 *)(lVar10 + 0x28) = uVar7;
      *(undefined4 *)(lVar10 + 0x2c) = uVar8;
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar3;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(undefined4 *)(lVar10 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar10 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar10 + 0x40);
        uVar2 = *(undefined4 *)(lVar10 + 0x30);
        uVar3 = *(undefined4 *)(lVar10 + 0x34);
        uVar4 = *(undefined4 *)(lVar10 + 0x38);
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(lVar10 + 0x30) = local_58;
        *(undefined4 *)(lVar10 + 0x34) = uStack_54;
        *(undefined4 *)(lVar10 + 0x38) = uStack_50;
        *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
        *(ulonglong *)(lVar10 + 0x40) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar9 = *(byte *)(lVar10 + 0x50);
      }
      *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
      *(byte *)(lVar10 + 0x50) = bVar9 | 1;
    }
    else {
      FUN_1475e1590(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(lVar10 + 0x20) = param_4[4];
    *(undefined4 *)(lVar10 + 0x24) = uVar6;
    *(undefined4 *)(lVar10 + 0x28) = uVar7;
    *(undefined4 *)(lVar10 + 0x2c) = uVar8;
    *(undefined4 *)(lVar10 + 0x10) = uVar2;
    *(undefined4 *)(lVar10 + 0x14) = uVar3;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar10 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar10 + 0x40);
      uVar2 = *(undefined4 *)(lVar10 + 0x30);
      uVar3 = *(undefined4 *)(lVar10 + 0x34);
      uVar4 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = *(undefined4 *)(lVar10 + 0x3c);
      *(undefined4 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x34) = uStack_54;
      *(undefined4 *)(lVar10 + 0x38) = uStack_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(ulonglong *)(lVar10 + 0x40) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
    *(byte *)(lVar10 + 0x50) = *(byte *)(lVar10 + 0x50) | 3;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a23eb2 FUN_145a23eb2 body=45 status=ok
// SIG undefined FUN_145a23eb2(void)

undefined8 FUN_145a23eb2(undefined8 param_1,int param_2)

{
  FUN_145a23ee0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 145a23ee0 FUN_145a23ee0 body=203 status=ok
// SIG undefined FUN_145a23ee0(void)

void FUN_145a23ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b33dd70;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145a23fab(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a23fab FUN_145a23fab body=49 status=ok
// SIG undefined FUN_145a23fab(void)

void FUN_145a23fab(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a23fdc FUN_145a23fdc body=108 status=ok
// SIG undefined FUN_145a23fdc(void)

undefined4 * FUN_145a23fdc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145a2404a();
  FUN_145a2404a();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9ee698,0);
  FUN_145a2404a();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2404a FUN_145a2404a body=289 status=ok
// SIG undefined FUN_145a2404a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145a2404a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee740) {
    FUN_144b3d300(&DAT_14c9ee740);
    if (DAT_14c9ee740 == -1) {
      FUN_145c2bcaa();
      FUN_145a2416c();
      FUN_140db5666(&DAT_14c9ee698,0,&DAT_14c9ee630,L"FClearProbeFreeList",
                    L"/Engine/Private/Lumen/LumenRadianceCacheUpdate.usf",L"ClearProbeFreeListCS",5,
                    1,FUN_1471df38c,FUN_1471df32c,&LAB_1462d7304,&LAB_1471df328,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0a28);
      _DAT_14c9ee698 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d2603d);
      _Init_thread_footer(&DAT_14c9ee740);
    }
  }
  return &DAT_14c9ee698;
}



// FUNCTION 145a2416c FUN_145a2416c body=205 status=ok
// SIG undefined FUN_145a2416c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a2416c(void)

{
  if ((DAT_14c9ee697 & 2) == 0) {
    DAT_14c9ee697 = DAT_14c9ee697 | 2;
    _DAT_14c9ee638 = L"FClearProbeFreeList";
    _DAT_14c9ee650 = FUN_146826540;
    _DAT_14c9ee658 = FUN_146825d77;
    _DAT_14c9ee660 = FUN_146825fd6;
    _DAT_14c9ee668 = FUN_1407e02ea;
    _DAT_14c9ee670 = FUN_146826273;
    _DAT_14c9ee648 = FUN_1471df2fa;
    _DAT_14c9ee688 = 0xffffffff000000e0;
    _DAT_14c9ee690 = 8;
    DAT_14c9ee694 = 0;
    _DAT_14c9ee678 = &LAB_1471df324;
    FUN_145a2423a();
    FUN_1407e00cc(&DAT_14c9ee630);
    return;
  }
  return;
}



// FUNCTION 145a2423a FUN_145a2423a body=123 status=ok
// SIG undefined FUN_145a2423a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a2423a(void)

{
  _DAT_14c9f1b50 = L"BASE";
  DAT_14c9f1b7a = 4;
  _DAT_14c9f1b58 = FUN_140b35ae4();
  _DAT_14c9f1b60 = DAT_14c9ee640;
  _DAT_14c9f1b68 = &LAB_14682652b;
  DAT_14c9ee640 = &DAT_14c9f1b50;
  DAT_14c9ee695 = DAT_14c9ee695 + '\x01';
  _DAT_14c9f1b70 = 0x100000000;
  if (*(char *)(_DAT_14c9f1b58 + 100) != '\0') {
    DAT_14c9ee696 = DAT_14c9ee696 + '\x01';
  }
  return;
}



// FUNCTION 145a242b6 FUN_145a242b6 body=38 status=ok
// SIG undefined FUN_145a242b6(void)

undefined8 FUN_145a242b6(undefined8 param_1,int param_2)

{
  FUN_145a242dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a242dc FUN_145a242dc body=140 status=ok
// SIG undefined FUN_145a242dc(void)

void FUN_145a242dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b472f60;
  FUN_145a243d7(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145a24416(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145a243ac(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145a24368(param_1);
  return;
}



// FUNCTION 145a24368 FUN_145a24368 body=68 status=ok
// SIG undefined FUN_145a24368(void)

void FUN_145a24368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4735f0;
  FUN_1410911c3(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145a243ac FUN_145a243ac body=43 status=ok
// SIG undefined FUN_145a243ac(void)

void FUN_145a243ac(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145a243d7 FUN_145a243d7 body=63 status=ok
// SIG undefined FUN_145a243d7(void)

void FUN_145a243d7(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a24416 FUN_145a24416 body=63 status=ok
// SIG undefined FUN_145a24416(void)

void FUN_145a24416(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a24456 FUN_145a24456 body=985 status=ok
// SIG undefined FUN_145a24456(void)

void FUN_145a24456(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88[0] = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_90,"BaseBorderForegroundColor",1);
  local_118 = local_88;
  FUN_14134b99c(param_1,local_70,local_90,0x33c);
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,2,0x10);
  puVar1 = local_a0;
  local_98 = 2;
  *local_a0 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f11f80;
  FUN_14134bb3c(local_70,&local_a0);
  FUN_1449db362(&local_80);
  local_88[0] = 1;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_a8,"ContentPadding",1);
  local_118 = local_88;
  FUN_14134b99c(param_1,local_70,local_a8,0x350);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,2,0x10);
  puVar1 = local_b8;
  local_b0 = 2;
  *local_b8 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f11ff0;
  FUN_14134bb3c(local_70,&local_b8);
  FUN_1449db362(&local_80);
  local_88[0] = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_c0,"AppearPressed",1);
  local_118 = local_88;
  FUN_14134b99c(param_1,local_70,local_c0,0x360);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,2,0x10);
  puVar1 = local_d0;
  local_c8 = 2;
  *local_d0 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f12060;
  FUN_14134bb3c(local_70,&local_d0);
  FUN_1449db362(&local_80);
  local_88[0] = 3;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_d8,"EnabledState",1);
  FUN_145a24830(param_1,local_d8,local_88);
  FUN_1449db362(&local_80);
  local_88[0] = 3;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_e0,"Hovered",1);
  FUN_145a24830(param_1,local_e0,local_88);
  FUN_1449db362(&local_80);
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,2,0x10);
  puVar1 = local_f0;
  local_e8 = 2;
  *local_f0 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f120d0;
  FUN_1446ddc76(&local_f8,"EnabledState",1);
  FUN_145a248ee(param_1,local_f8,1,&local_f0);
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  FUN_1446efa72(&local_108,0,2,0x10);
  puVar1 = local_108;
  local_100 = 2;
  *local_108 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f12140;
  FUN_1446ddc76(&local_110,"Hovered",1);
  FUN_145a248ee(param_1,local_110,1,&local_108);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a24830 FUN_145a24830 body=100 status=ok
// SIG undefined FUN_145a24830(void)

void FUN_145a24830(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  local_20[0] = *param_3;
  local_18 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  local_10 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_3 + 0x10) = 0;
  FUN_145a24896(uVar1,param_2,local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a24896 FUN_145a24896 body=88 status=ok
// SIG undefined FUN_145a24896(void)

void FUN_145a24896(undefined8 *param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)*param_1;
    lVar1 = (longlong)*(int *)(param_1 + 1) * 0x58;
    do {
      if (*plVar2 == param_2) {
        if ((plVar2 != (longlong *)0x0) && (*(longlong *)((longlong)plVar2 + 0x14) == 0)) {
          *(undefined1 *)(plVar2 + 5) = *param_3;
          FUN_144a450dc(plVar2 + 6,param_3 + 8);
        }
        break;
      }
      plVar2 = plVar2 + 0xb;
      lVar1 = lVar1 + -0x58;
    } while (lVar1 != 0);
  }
  FUN_1449db362(param_3 + 8);
  return;
}



// FUNCTION 145a248ee FUN_145a248ee body=99 status=ok
// SIG undefined FUN_145a248ee(void)

void FUN_145a248ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  local_20 = *param_4;
  *param_4 = 0;
  local_18 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_1414628f6(uVar1);
  FUN_1449db362(param_4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a24952 FUN_145a24952 body=55 status=ok
// SIG undefined FUN_145a24952(void)

void FUN_145a24952(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967b48 == 0) {
    uVar1 = FUN_145a24989();
    DAT_14c967b48 = FUN_140002ddd(FUN_14627852b,uVar1,L"PerPlatformSettings");
  }
  return;
}



// FUNCTION 145a24989 FUN_145a24989 body=49 status=ok
// SIG undefined FUN_145a24989(void)

longlong FUN_145a24989(void)

{
  if (DAT_14c967a88 == 0) {
    FUN_140f50038(&DAT_14c967a88,&PTR_s__Script_DeveloperSettings_149ecb3d8);
  }
  return DAT_14c967a88;
}



// FUNCTION 145a249c6 FUN_145a249c6 body=41 status=ok
// SIG undefined FUN_145a249c6(void)

void FUN_145a249c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149f27a90;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a249f0 FUN_145a249f0 body=55 status=ok
// SIG undefined FUN_145a249f0(void)

void FUN_145a249f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c718 == 0) {
    uVar1 = FUN_145a24a27();
    DAT_14c99c718 = FUN_140002ddd(FUN_14628faaf,uVar1,L"BoneID");
  }
  return;
}



// FUNCTION 145a24a27 FUN_145a24a27 body=49 status=ok
// SIG undefined FUN_145a24a27(void)

longlong FUN_145a24a27(void)

{
  if (DAT_14c99c700 == 0) {
    FUN_140f50038(&DAT_14c99c700,&PTR_s__Script_SkeletalMeshDescription_149fa9fe0);
  }
  return DAT_14c99c700;
}



// FUNCTION 145a24a58 FUN_145a24a58 body=55 status=ok
// SIG undefined FUN_145a24a58(void)

void FUN_145a24a58(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d570 == 0) {
    uVar1 = FUN_145a24a8f();
    DAT_14c99d570 = FUN_140002ddd(FUN_146294208,uVar1,L"TagAndValue");
  }
  return;
}



// FUNCTION 145a24a8f FUN_145a24a8f body=49 status=ok
// SIG undefined FUN_145a24a8f(void)

longlong FUN_145a24a8f(void)

{
  if (DAT_14c99d558 == 0) {
    FUN_140f50038(&DAT_14c99d558,&PTR_s__Script_AssetRegistry_149fc1d60);
  }
  return DAT_14c99d558;
}



// FUNCTION 145a24ac0 FUN_145a24ac0 body=55 status=ok
// SIG undefined FUN_145a24ac0(void)

void FUN_145a24ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac390 == 0) {
    uVar1 = FUN_145a24af7();
    DAT_14c9ac390 = FUN_140002ddd(FUN_1462b4ba2,uVar1,L"EyeTrackerGazeData");
  }
  return;
}



// FUNCTION 145a24af7 FUN_145a24af7 body=49 status=ok
// SIG undefined FUN_145a24af7(void)

longlong FUN_145a24af7(void)

{
  if (DAT_14c9ac330 == 0) {
    FUN_140f50038(&DAT_14c9ac330,&PTR_s__Script_EyeTracker_14a1ea630);
  }
  return DAT_14c9ac330;
}



// FUNCTION 145a24b34 FUN_145a24b34 body=41 status=ok
// SIG undefined FUN_145a24b34(void)

void FUN_145a24b34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14a355530;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24b5e FUN_145a24b5e body=55 status=ok
// SIG undefined FUN_145a24b5e(void)

void FUN_145a24b5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa85a8 == 0) {
    uVar1 = FUN_145a24b95();
    DAT_14caa85a8 = FUN_140002ddd(FUN_1463288f1,uVar1,L"StringValuePair");
  }
  return;
}



// FUNCTION 145a24b95 FUN_145a24b95 body=49 status=ok
// SIG undefined FUN_145a24b95(void)

longlong FUN_145a24b95(void)

{
  if (DAT_14caa8590 == 0) {
    FUN_140f50038(&DAT_14caa8590,&PTR_s__Script_DataflowEngine_14a3e1e17_1_14a3e1df8);
  }
  return DAT_14caa8590;
}



// FUNCTION 145a24bc6 FUN_145a24bc6 body=55 status=ok
// SIG undefined FUN_145a24bc6(void)

void FUN_145a24bc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab18f0 == 0) {
    uVar1 = FUN_145a24bfd();
    DAT_14cab18f0 = FUN_140002ddd(FUN_1463380b5,uVar1,L"TimedDataChannelSampleTime");
  }
  return;
}



// FUNCTION 145a24bfd FUN_145a24bfd body=49 status=ok
// SIG undefined FUN_145a24bfd(void)

longlong FUN_145a24bfd(void)

{
  if (DAT_14cab1600 == 0) {
    FUN_140f50038(&DAT_14cab1600,&PTR_s__Script_TimeManagement_14a4533d0);
  }
  return DAT_14cab1600;
}



// FUNCTION 145a24c3a FUN_145a24c3a body=41 status=ok
// SIG undefined FUN_145a24c3a(void)

void FUN_145a24c3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14a57e980;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24c64 FUN_145a24c64 body=55 status=ok
// SIG undefined FUN_145a24c64(void)

void FUN_145a24c64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc060 == 0) {
    uVar1 = FUN_145a24c9b();
    DAT_14cabc060 = FUN_140002ddd(FUN_14636475a,uVar1,L"MediaPlayerTrackOptions");
  }
  return;
}



// FUNCTION 145a24c9b FUN_145a24c9b body=49 status=ok
// SIG undefined FUN_145a24c9b(void)

longlong FUN_145a24c9b(void)

{
  if (DAT_14cabc090 == 0) {
    FUN_140f50038(&DAT_14cabc090,&PTR_s__Script_MediaUtils_14a5897f8);
  }
  return DAT_14cabc090;
}



// FUNCTION 145a24cdc FUN_145a24cdc body=41 status=ok
// SIG undefined FUN_145a24cdc(void)

undefined8 * FUN_145a24cdc(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6163b0;
  FUN_14585e97c(param_1 + 5);
  return param_1;
}



// FUNCTION 145a24d10 FUN_145a24d10 body=41 status=ok
// SIG undefined FUN_145a24d10(void)

undefined8 * FUN_145a24d10(undefined8 *param_1)

{
  FUN_1459a4106();
  *param_1 = &PTR_FUN_14a6874a0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  return param_1;
}



// FUNCTION 145a24d44 FUN_145a24d44 body=41 status=ok
// SIG undefined FUN_145a24d44(void)

undefined8 * FUN_145a24d44(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7587a0;
  FUN_1458d791c(param_1 + 5);
  return param_1;
}



// FUNCTION 145a24d7a FUN_145a24d7a body=41 status=ok
// SIG undefined FUN_145a24d7a(void)

void FUN_145a24d7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14ab417d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24da4 FUN_145a24da4 body=55 status=ok
// SIG undefined FUN_145a24da4(void)

void FUN_145a24da4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28b80 == 0) {
    uVar1 = FUN_141462ba5();
    DAT_14cb28b80 = FUN_140002ddd(FUN_1464551b3,uVar1,L"TemplateSectionPropertyScale");
  }
  return;
}



// FUNCTION 145a24de8 FUN_145a24de8 body=41 status=ok
// SIG undefined FUN_145a24de8(void)

void FUN_145a24de8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14ad3f460;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24e12 FUN_145a24e12 body=55 status=ok
// SIG undefined FUN_145a24e12(void)

void FUN_145a24e12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb2bd00 == 0) {
    uVar1 = FUN_145a24e49();
    DAT_14cb2bd00 = FUN_140002ddd(FUN_14645f28c,uVar1,L"NiagaraVariableCommonReference");
  }
  return;
}



// FUNCTION 145a24e49 FUN_145a24e49 body=49 status=ok
// SIG undefined FUN_145a24e49(void)

longlong FUN_145a24e49(void)

{
  if (DAT_14cb2bd18 == 0) {
    FUN_140f50038(&DAT_14cb2bd18,&PTR_s__Script_NiagaraCore_14ad41ed0);
  }
  return DAT_14cb2bd18;
}



// FUNCTION 145a24e7a FUN_145a24e7a body=55 status=ok
// SIG undefined FUN_145a24e7a(void)

void FUN_145a24e7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb449e0 == 0) {
    uVar1 = FUN_145a24eb1();
    DAT_14cb449e0 = FUN_140002ddd(FUN_14647e44b,uVar1,L"WidgetCarouselNavigationButtonStyle");
  }
  return;
}



// FUNCTION 145a24eb1 FUN_145a24eb1 body=49 status=ok
// SIG undefined FUN_145a24eb1(void)

longlong FUN_145a24eb1(void)

{
  if (DAT_14cb449c0 == 0) {
    FUN_140f50038(&DAT_14cb449c0,&PTR_s__Script_WidgetCarousel_14ae3d860);
  }
  return DAT_14cb449c0;
}



// FUNCTION 145a24ee2 FUN_145a24ee2 body=55 status=ok
// SIG undefined FUN_145a24ee2(void)

void FUN_145a24ee2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb50298 == 0) {
    uVar1 = FUN_145a24f19();
    DAT_14cb50298 = FUN_140002ddd(FUN_1464a3f09,uVar1,L"GbxWindTurbulenceSettings");
  }
  return;
}



// FUNCTION 145a24f19 FUN_145a24f19 body=49 status=ok
// SIG undefined FUN_145a24f19(void)

longlong FUN_145a24f19(void)

{
  if (DAT_14cb50248 == 0) {
    FUN_140f50038(&DAT_14cb50248,&PTR_s__Script_GbxDynamicWind_14afa59e7_1_14afa59c8);
  }
  return DAT_14cb50248;
}



// FUNCTION 145a24f56 FUN_145a24f56 body=41 status=ok
// SIG undefined FUN_145a24f56(void)

void FUN_145a24f56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14afc44e0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24f8c FUN_145a24f8c body=41 status=ok
// SIG undefined FUN_145a24f8c(void)

void FUN_145a24f8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14afc7ec0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a24fb6 FUN_145a24fb6 body=55 status=ok
// SIG undefined FUN_145a24fb6(void)

void FUN_145a24fb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb52fd8 == 0) {
    uVar1 = FUN_145a24fed();
    DAT_14cb52fd8 = FUN_140002ddd(FUN_1464a9a6a,uVar1,L"StreamlineVersion");
  }
  return;
}



// FUNCTION 145a24fed FUN_145a24fed body=49 status=ok
// SIG undefined FUN_145a24fed(void)

longlong FUN_145a24fed(void)

{
  if (DAT_14cb52f78 == 0) {
    FUN_140f50038(&DAT_14cb52f78,&PTR_s__Script_StreamlineBlueprint_14afc8c66_2_14afc8c48);
  }
  return DAT_14cb52f78;
}



// FUNCTION 145a25032 FUN_145a25032 body=40 status=ok
// SIG undefined FUN_145a25032(void)

undefined8 FUN_145a25032(undefined8 param_1,int param_2)

{
  FUN_145a2505a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2505a FUN_145a2505a body=83 status=ok
// SIG undefined FUN_145a2505a(void)

void FUN_145a2505a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b261800;
  FUN_145a250ad(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140e31739(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a250ad FUN_145a250ad body=58 status=ok
// SIG undefined FUN_145a250ad(void)

void FUN_145a250ad(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      FUN_144a2da94(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a250e8 FUN_145a250e8 body=111 status=ok
// SIG undefined FUN_145a250e8(void)

undefined8 *
FUN_145a250e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  FUN_1404e4778(param_1,param_4);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b428560;
  param_1[4] = &PTR_FUN_14b4285a0;
  param_1[0x15] = *param_2;
  lVar1 = param_2[1];
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_145a25158(param_1 + 0x17,param_3);
  return param_1;
}



// FUNCTION 145a25158 FUN_145a25158 body=71 status=ok
// SIG undefined FUN_145a25158(void)

undefined8 * FUN_145a25158(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 145a251a0 FUN_145a251a0 body=55 status=ok
// SIG undefined FUN_145a251a0(void)

void FUN_145a251a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb8e088 == 0) {
    uVar1 = FUN_145a251d7();
    DAT_14cb8e088 = FUN_140002ddd(FUN_146563f7e,uVar1,L"NamedInterface");
  }
  return;
}



// FUNCTION 145a251d7 FUN_145a251d7 body=49 status=ok
// SIG undefined FUN_145a251d7(void)

longlong FUN_145a251d7(void)

{
  if (DAT_14cb8e050 == 0) {
    FUN_140f50038(&DAT_14cb8e050,&PTR_s__Script_OnlineSubsystem_14b435710);
  }
  return DAT_14cb8e050;
}



// FUNCTION 145a25208 FUN_145a25208 body=20 status=ok
// SIG undefined FUN_145a25208(void)

undefined1 FUN_145a25208(longlong param_1)

{
  FUN_145a2521c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a2521c FUN_145a2521c body=109 status=ok
// SIG undefined FUN_145a2521c(void)

void FUN_145a2521c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2528a FUN_145a2528a body=55 status=ok
// SIG undefined FUN_145a2528a(void)

void FUN_145a2528a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91468 == 0) {
    uVar1 = FUN_141462bd6();
    DAT_14cb91468 = FUN_140002ddd(FUN_1465691a6,uVar1,L"GbxPreSwizzleInputModifierList");
  }
  return;
}



// FUNCTION 145a252ce FUN_145a252ce body=41 status=ok
// SIG undefined FUN_145a252ce(void)

void FUN_145a252ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14b45bb70;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a252f8 FUN_145a252f8 body=21 status=ok
// SIG undefined FUN_145a252f8(void)

undefined8 FUN_145a252f8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a25318 FUN_145a25318 body=176 status=ok
// SIG undefined FUN_145a25318(void)

void FUN_145a25318(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x30))();
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x70))(param_2,&local_30);
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0xb0))(local_30,local_38,(longlong *)(param_1 + 0x10));
        }
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_28 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a253d6 FUN_145a253d6 body=41 status=ok
// SIG undefined FUN_145a253d6(void)

void FUN_145a253d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14b4c3d50;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a25400 FUN_145a25400 body=55 status=ok
// SIG undefined FUN_145a25400(void)

void FUN_145a25400(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb96eb8 == 0) {
    uVar1 = FUN_141462c07();
    DAT_14cb96eb8 = FUN_140002ddd(FUN_14657f04c,uVar1,L"RegionSettings");
  }
  return;
}



// FUNCTION 145a25444 FUN_145a25444 body=41 status=ok
// SIG undefined FUN_145a25444(void)

void FUN_145a25444(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14b521af0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a2546e FUN_145a2546e body=55 status=ok
// SIG undefined FUN_145a2546e(void)

void FUN_145a2546e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99910 == 0) {
    uVar1 = FUN_145a254a5();
    DAT_14cb99910 = FUN_140002ddd(FUN_14658e340,uVar1,L"GbxAnimTextureAnimInstance");
  }
  return;
}



// FUNCTION 145a254a5 FUN_145a254a5 body=49 status=ok
// SIG undefined FUN_145a254a5(void)

longlong FUN_145a254a5(void)

{
  if (DAT_14cb998c8 == 0) {
    FUN_140f50038(&DAT_14cb998c8,&PTR_s__Script_GbxAnimTexture_14b521c78);
  }
  return DAT_14cb998c8;
}



// FUNCTION 145a254d6 FUN_145a254d6 body=55 status=ok
// SIG undefined FUN_145a254d6(void)

void FUN_145a254d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ab88 == 0) {
    uVar1 = FUN_141462c38();
    DAT_14cb9ab88 = FUN_140002ddd(FUN_1465954ea,uVar1,L"SubtitleFormat");
  }
  return;
}



// FUNCTION 145a2550d FUN_145a2550d body=32 status=ok
// SIG undefined FUN_145a2550d(void)

void FUN_145a2550d(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_145a2552e(param_1);
  *param_1 = &PTR_FUN_14b590ee0;
  return;
}



// FUNCTION 145a2552e FUN_145a2552e body=72 status=ok
// SIG undefined FUN_145a2552e(void)

undefined8 * FUN_145a2552e(undefined8 *param_1)

{
  FUN_140e3421a();
  *param_1 = &PTR_FUN_14ae5c810;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 145a25576 FUN_145a25576 body=63 status=ok
// SIG undefined FUN_145a25576(void)

void FUN_145a25576(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a255b6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145a255b6 FUN_145a255b6 body=93 status=ok
// SIG undefined FUN_145a255b6(void)

ulonglong FUN_145a255b6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145a2561a FUN_145a2561a body=228 status=ok
// SIG undefined FUN_145a2561a(void)

longlong FUN_145a2561a(void)

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
  if (DAT_14cb9f118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_148b7d2a5;
    local_40 = FUN_1418c2aa5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"AnimNotify_Carry",&DAT_14cb9f118,&DAT_148b7d2a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a25706 FUN_145a25706 body=228 status=ok
// SIG undefined FUN_145a25706(void)

longlong FUN_145a25706(void)

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
  if (DAT_14cba14c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_148b9e163;
    local_40 = FUN_1465af124;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakJunk",&DAT_14cba14c0,
                  &DAT_148b9e162);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba14c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a257f2 FUN_145a257f2 body=228 status=ok
// SIG undefined FUN_145a257f2(void)

longlong FUN_145a257f2(void)

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
  if (DAT_14cba8dd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459914cc;
    local_38 = &LAB_148c02173;
    local_40 = &LAB_1458dada8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xd90;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCineCameraActor",&DAT_14cba8dd8,FUN_1465d1e00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8dd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a258de FUN_145a258de body=228 status=ok
// SIG undefined FUN_145a258de(void)

longlong FUN_145a258de(void)

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
  if (DAT_14cbb3020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5acc9;
    local_40 = &LAB_145d5d983;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_PlayerGroup",&DAT_14cbb3020,FUN_1465f747a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a259ca FUN_145a259ca body=228 status=ok
// SIG undefined FUN_145a259ca(void)

longlong FUN_145a259ca(void)

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
  if (DAT_14cbb3508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c5bce1;
    local_40 = FUN_1465f8037;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_VendingMachine",&DAT_14cbb3508,
                  &DAT_148c5bce0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a25abc FUN_145a25abc body=41 status=ok
// SIG undefined FUN_145a25abc(void)

void FUN_145a25abc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14b97e670;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a25ae6 FUN_145a25ae6 body=55 status=ok
// SIG undefined FUN_145a25ae6(void)

void FUN_145a25ae6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5ee0 == 0) {
    uVar1 = FUN_145a25b1d();
    DAT_14cbf5ee0 = FUN_140002ddd(FUN_14667241f,uVar1,L"LobbyPlayerStateActorInfo");
  }
  return;
}



// FUNCTION 145a25b1d FUN_145a25b1d body=49 status=ok
// SIG undefined FUN_145a25b1d(void)

longlong FUN_145a25b1d(void)

{
  if (DAT_14cbf5d20 == 0) {
    FUN_140f50038(&DAT_14cbf5d20,&PTR_s__Script_Lobby_14ba61fb7_1_14ba61f98);
  }
  return DAT_14cbf5d20;
}



// FUNCTION 145a25b5a FUN_145a25b5a body=41 status=ok
// SIG undefined FUN_145a25b5a(void)

void FUN_145a25b5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14bac2cc0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a25b84 FUN_145a25b84 body=55 status=ok
// SIG undefined FUN_145a25b84(void)

void FUN_145a25b84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe8f0 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe8f0 = FUN_140002ddd(FUN_146680516,uVar1,L"Matrix2D");
  }
  return;
}



// FUNCTION 145a25bbc FUN_145a25bbc body=55 status=ok
// SIG undefined FUN_145a25bbc(void)

void FUN_145a25bbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0c9f8 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0c9f8 = FUN_140002ddd(FUN_14671e972,uVar1,L"InterchangeAnimationPayLoadKey");
  }
  return;
}



// FUNCTION 145a25bf4 FUN_145a25bf4 body=55 status=ok
// SIG undefined FUN_145a25bf4(void)

void FUN_145a25bf4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16d30 == 0) {
    uVar1 = FUN_145a25c2b();
    DAT_14cc16d30 = FUN_140002ddd(FUN_14672f3bc,uVar1,L"AnimNode_LiveLinkPose");
  }
  return;
}



// FUNCTION 145a25c2b FUN_145a25c2b body=49 status=ok
// SIG undefined FUN_145a25c2b(void)

longlong FUN_145a25c2b(void)

{
  if (DAT_14cc16d08 == 0) {
    FUN_140f50038(&DAT_14cc16d08,&PTR_s__Script_LiveLinkAnimationCore_14bcca960);
  }
  return DAT_14cc16d08;
}



// FUNCTION 145a25c5c FUN_145a25c5c body=55 status=ok
// SIG undefined FUN_145a25c5c(void)

void FUN_145a25c5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e8b0 == 0) {
    uVar1 = FUN_145a25c93();
    DAT_14cc1e8b0 = FUN_140002ddd(FUN_14673fdf4,uVar1,L"AudioCaptureDeviceInfo");
  }
  return;
}



// FUNCTION 145a25c93 FUN_145a25c93 body=49 status=ok
// SIG undefined FUN_145a25c93(void)

longlong FUN_145a25c93(void)

{
  if (DAT_14cc1e920 == 0) {
    FUN_140f50038(&DAT_14cc1e920,&PTR_s__Script_AudioCapture_14bd3e4c8);
  }
  return DAT_14cc1e920;
}



// FUNCTION 145a25cc4 FUN_145a25cc4 body=55 status=ok
// SIG undefined FUN_145a25cc4(void)

void FUN_145a25cc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1f010 == 0) {
    uVar1 = FUN_145a25cfb();
    DAT_14cc1f010 = FUN_140002ddd(FUN_1467410cc,uVar1,L"PointIndexes");
  }
  return;
}



// FUNCTION 145a25cfb FUN_145a25cfb body=49 status=ok
// SIG undefined FUN_145a25cfb(void)

longlong FUN_145a25cfb(void)

{
  if (DAT_14cc1efd0 == 0) {
    FUN_140f50038(&DAT_14cc1efd0,&PTR_s__Script_HoudiniNiagara_14bd4ddb8);
  }
  return DAT_14cc1efd0;
}



// FUNCTION 145a25d38 FUN_145a25d38 body=41 status=ok
// SIG undefined FUN_145a25d38(void)

void FUN_145a25d38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14bdd8c90;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a25d62 FUN_145a25d62 body=55 status=ok
// SIG undefined FUN_145a25d62(void)

void FUN_145a25d62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26278 == 0) {
    uVar1 = FUN_141462ccb();
    DAT_14cc26278 = FUN_140002ddd(FUN_14675ba88,uVar1,L"NDIGbxAttributeData");
  }
  return;
}



// FUNCTION 145a25d9a FUN_145a25d9a body=55 status=ok
// SIG undefined FUN_145a25d9a(void)

void FUN_145a25d9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26790 == 0) {
    uVar1 = FUN_145a25dd1();
    DAT_14cc26790 = FUN_140002ddd(FUN_14675c74b,uVar1,L"AutomationTestExcludeOptions");
  }
  return;
}



// FUNCTION 145a25dd1 FUN_145a25dd1 body=49 status=ok
// SIG undefined FUN_145a25dd1(void)

longlong FUN_145a25dd1(void)

{
  if (DAT_14cc26730 == 0) {
    FUN_140f50038(&DAT_14cc26730,&PTR_s__Script_AutomationTest_14be79e60);
  }
  return DAT_14cc26730;
}



// FUNCTION 145a25e0a FUN_145a25e0a body=44 status=ok
// SIG undefined FUN_145a25e0a(void)

undefined8 * FUN_145a25e0a(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee0040;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145a25e36 FUN_145a25e36 body=40 status=ok
// SIG undefined FUN_145a25e36(void)

undefined8 FUN_145a25e36(undefined8 param_1,int param_2)

{
  FUN_145a25e5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a25e5e FUN_145a25e5e body=204 status=ok
// SIG undefined FUN_145a25e5e(void)

void FUN_145a25e5e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b4b7600;
  param_1[5] = &PTR_FUN_14b4b7a00;
  lVar3 = param_1[0x3ce];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  FUN_141462cfc(param_1[0x3c8],*(undefined4 *)(param_1 + 0x3c9));
  if (param_1[0x3c8] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x3c7];
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
  puVar5 = (undefined8 *)param_1[0x3c5];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (param_1[0x3c3] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3be));
  FUN_141462d4a(param_1);
  return;
}



// FUNCTION 145a25f2a FUN_145a25f2a body=30 status=ok
// SIG undefined FUN_145a25f2a(void)

void FUN_145a25f2a(longlong param_1)

{
  FUN_145a25f48(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a25f48 FUN_145a25f48 body=156 status=ok
// SIG undefined FUN_145a25f48(void)

void FUN_145a25f48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145a25fe4(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
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
  FUN_141462cfc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a25fe4 FUN_145a25fe4 body=77 status=ok
// SIG undefined FUN_145a25fe4(void)

void FUN_145a25fe4(longlong param_1,int param_2)

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



// FUNCTION 145a26032 FUN_145a26032 body=38 status=ok
// SIG undefined FUN_145a26032(void)

undefined8 FUN_145a26032(undefined8 param_1,int param_2)

{
  FUN_145a26058();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a26058 FUN_145a26058 body=253 status=ok
// SIG undefined FUN_145a26058(void)

void FUN_145a26058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8cb50;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(param_1 + 0x2e);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(param_1 + 0x1f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(param_1 + 0x10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(param_1 + 1);
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145a26156 FUN_145a26156 body=55 status=ok
// SIG undefined FUN_145a26156(void)

void FUN_145a26156(longlong *param_1)

{
  FUN_145a2618e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2618e FUN_145a2618e body=123 status=ok
// SIG undefined FUN_145a2618e(void)

void FUN_145a2618e(longlong param_1,int param_2)

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



// FUNCTION 145a2620a FUN_145a2620a body=112 status=ok
// SIG undefined FUN_145a2620a(void)

void FUN_145a2620a(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 8) & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
    local_20 = param_1;
    FUN_145a2627c(&DAT_14cad2db0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14010edaa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2627c FUN_145a2627c body=107 status=ok
// SIG undefined FUN_145a2627c(void)

void FUN_145a2627c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a262e8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145a262e8 FUN_145a262e8 body=132 status=ok
// SIG undefined FUN_145a262e8(void)

void FUN_145a262e8(longlong param_1,int param_2)

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



// FUNCTION 145a2636c FUN_145a2636c body=40 status=ok
// SIG undefined FUN_145a2636c(void)

undefined8 FUN_145a2636c(undefined8 param_1,int param_2)

{
  FUN_145a26394();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a26394 FUN_145a26394 body=247 status=ok
// SIG undefined FUN_145a26394(void)

void FUN_145a26394(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b70eea0;
  param_1[0x72] = &PTR_FUN_14b70f550;
  param_1[0x73] = &PTR_FUN_14b70f5c0;
  param_1[0x74] = &PTR_FUN_14b70f5f0;
  param_1[0x75] = &PTR_FUN_14b70f620;
  param_1[0x76] = &PTR_FUN_14b70f690;
  param_1[0x77] = &PTR_FUN_14b70f6c0;
  param_1[0x78] = &PTR_FUN_14b70f6f0;
  param_1[0x79] = &PTR_FUN_14b70f760;
  param_1[0x7a] = &PTR_FUN_14b70f780;
  param_1[0x7b] = &PTR_FUN_14b70f7a0;
  param_1[0x7c] = &PTR_FUN_14b70f7f0;
  plVar2 = (longlong *)param_1[0x188];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x17e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d6654(param_1);
  return;
}



// FUNCTION 145a2648c FUN_145a2648c body=154 status=ok
// SIG undefined FUN_145a2648c(void)

bool FUN_145a2648c(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145a26528 FUN_145a26528 body=293 status=ok
// SIG undefined FUN_145a26528(void)

void FUN_145a26528(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  
  lVar7 = *(longlong *)(*param_2 + 0x20);
  puVar12 = (undefined8 *)(*param_2 + 0x18);
  if (lVar7 == 0) {
    lVar7 = FUN_145cd93aa();
  }
  uVar1 = *puVar12;
  uVar6 = FUN_14477b664(lVar7);
  uVar2 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),uVar3 >> 0x10 ^ uVar3);
  iVar5 = FUN_1412208fe((longlong *)(param_1 + 0x198),uVar4,puVar12);
  if (iVar5 != -1) {
    lVar8 = *(longlong *)(param_1 + 0x198);
    lVar7 = lVar8 + (longlong)iVar5 * 0x48;
    if ((lVar7 != 0) && (lVar8 = lVar8 + (longlong)iVar5 * 0x48 + 0x18, lVar8 != 0)) {
      iVar5 = -1;
      if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
        lVar10 = 0;
        iVar11 = 0;
        do {
          iVar5 = iVar11;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar10) == *param_2) break;
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0x10;
          iVar5 = -1;
        } while ((longlong)*(int *)(lVar7 + 0x20) * 0x10 != lVar10);
      }
      FUN_145a2664e(param_1,lVar8,iVar5);
      return;
    }
  }
  return;
}



// FUNCTION 145a2664e FUN_145a2664e body=228 status=ok
// SIG undefined FUN_145a2664e(void)

void FUN_145a2664e(undefined8 param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_2[1])) {
    lVar2 = *(longlong *)(*param_2 + (ulonglong)param_3 * 0x10);
    puVar3 = *(undefined8 **)(*param_2 + 8 + (ulonglong)param_3 * 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    FUN_145a26ac8(param_2,param_3);
    FUN_145a26746(param_2);
    FUN_145a26d10(lVar2);
    local_40 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = FUN_14477b664(*(undefined8 *)(lVar2 + 0x20));
    local_38 = FUN_14477b664(uVar4);
    local_30 = *(undefined8 *)(lVar2 + 0x28);
    FUN_145a267de(param_1,&local_40,1);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a26746 FUN_145a26746 body=62 status=ok
// SIG undefined FUN_145a26746(void)

void FUN_145a26746(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a26784(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145a26784 FUN_145a26784 body=89 status=ok
// SIG undefined FUN_145a26784(void)

ulonglong FUN_145a26784(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145a267de FUN_145a267de body=241 status=ok
// SIG undefined FUN_145a267de(void)

void FUN_145a267de(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    lVar8 = FUN_145cd93aa();
  }
  uVar1 = *param_2;
  uVar7 = FUN_14477b664(lVar8);
  uVar3 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar5 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4),uVar4 >> 0x10 ^ uVar4);
  iVar6 = FUN_1412208fe((longlong *)(param_1 + 0x198),uVar5,param_2);
  if (iVar6 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    lVar8 = lVar2 + (longlong)iVar6 * 0x48;
    if ((lVar8 != 0) && (lVar2 + (longlong)iVar6 * 0x48 != -0x18)) {
      FUN_145a268d0(lVar8 + 0x28,param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 145a268d0 FUN_145a268d0 body=173 status=ok
// SIG undefined FUN_145a268d0(void)

void FUN_145a268d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145a26967;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a26967:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a2697e FUN_145a2697e body=103 status=ok
// SIG undefined FUN_145a2697e(void)

ulonglong FUN_145a2697e(longlong param_1)

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
LAB_145a269c8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a269c8;
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



// FUNCTION 145a269e6 FUN_145a269e6 body=32 status=ok
// SIG undefined FUN_145a269e6(void)

void FUN_145a269e6(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_145a26a06(*(undefined8 *)(param_1 + 0x30));
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 145a26a06 FUN_145a26a06 body=192 status=ok
// SIG undefined FUN_145a26a06(void)

bool FUN_145a26a06(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x18));
  local_30 = FUN_14477b664(uVar2);
  local_28 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = FUN_145a26b42(param_2,&local_38);
  if (*(char *)(param_1 + 0x28) == '\x04') {
    bVar3 = *(int *)(param_1 + 0x2c) < iVar1;
  }
  else {
    bVar3 = false;
    switch(*(char *)(param_1 + 0x28)) {
    case '\0':
      bVar3 = iVar1 == *(int *)(param_1 + 0x2c);
      break;
    case '\x01':
      bVar3 = iVar1 != *(int *)(param_1 + 0x2c);
      break;
    case '\x02':
      bVar3 = iVar1 < *(int *)(param_1 + 0x2c);
      break;
    case '\x03':
      bVar3 = iVar1 <= *(int *)(param_1 + 0x2c);
      break;
    case '\x05':
      bVar3 = *(int *)(param_1 + 0x2c) <= iVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a26ac8 FUN_145a26ac8 body=122 status=ok
// SIG undefined FUN_145a26ac8(void)

void FUN_145a26ac8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)param_2 * 0x10);
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
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145a26b42 FUN_145a26b42 body=461 status=ok
// SIG undefined FUN_145a26b42(void)

int FUN_145a26b42(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = param_2[1];
  if (lVar11 == 0) {
    lVar11 = FUN_145cd93aa();
  }
  uVar12 = *param_2;
  uVar9 = FUN_14477b664(lVar11);
  uVar4 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar12 >> 0x10);
  uVar16 = (uint)uVar12 & 0xffff;
  uVar6 = FUN_144a78877(((uint)uVar12 << 0x10 | uVar16) + (int)((ulonglong)uVar12 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4),uVar5 >> 0x10 ^ uVar5);
  iVar7 = FUN_1412208fe((longlong *)(param_1 + 0x198),uVar6,param_2);
  iVar15 = 0;
  if (iVar7 != -1) {
    lVar14 = *(longlong *)(param_1 + 0x198);
    lVar11 = lVar14 + (longlong)iVar7 * 0x48;
    if (((lVar11 != 0) && (lVar14 + (longlong)iVar7 * 0x48 != -0x18)) &&
       (iVar7 = *(int *)(lVar11 + 0x20), iVar15 = 0, (longlong)iVar7 != 0)) {
      lVar11 = *(longlong *)(lVar11 + 0x18);
      lVar14 = 0;
      iVar15 = 0;
      do {
        cVar2 = (**(code **)(**(longlong **)(lVar11 + lVar14) + 0x10))();
        if (cVar2 != '\0') {
          lVar1 = *(longlong *)(lVar11 + lVar14);
          if (*(longlong *)(lVar1 + 0x20) == 0) {
            uVar12 = FUN_145cd93aa();
            uVar12 = FUN_14477b664(uVar12);
            *(undefined8 *)(lVar1 + 0x20) = uVar12;
          }
          lVar13 = param_2[1];
          if (lVar13 == 0) {
            lVar13 = FUN_145cd93aa();
          }
          uVar12 = *param_2;
          uVar10 = FUN_14477b664(lVar13);
          local_50 = uVar12;
          uVar6 = FUN_144a7891a(uVar10);
          local_58 = *(undefined8 *)(lVar1 + 0x18);
          uVar12 = *(undefined8 *)(lVar1 + 0x20);
          uVar8 = FUN_144a7891a(uVar12);
          local_60 = &local_50;
          local_68 = uVar10;
          bVar3 = FUN_144a789b8(uVar8,uVar12,&local_58,uVar6);
          iVar15 = iVar15 + (uint)bVar3;
        }
        lVar14 = lVar14 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar15;
}



// FUNCTION 145a26d10 FUN_145a26d10 body=607 status=ok
// SIG undefined FUN_145a26d10(void)

void FUN_145a26d10(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[7] != 0) {
    puVar2 = (undefined8 *)param_1[6];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1 + 6,0,0,0x10);
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  local_21 = 0;
  lVar6 = param_1[4];
  if (lVar6 == 0) {
    uVar5 = FUN_145cd93aa();
    lVar6 = FUN_14477b664(uVar5);
    param_1[4] = lVar6;
  }
  plVar1 = param_1 + 3;
  lVar7 = param_1[5];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_145a26d92;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
        param_1[5] = lVar7;
        if (lVar7 == 0) goto LAB_145a26d92;
        lVar6 = param_1[4];
        goto LAB_145a26d77;
      }
    }
    param_1[5] = 0;
    goto LAB_145a26d92;
  }
LAB_145a26d77:
  if (lVar6 == 0) {
    uVar5 = FUN_145cd93aa();
    lVar6 = FUN_14477b664(uVar5);
    param_1[4] = lVar6;
    lVar7 = param_1[5];
    if (lVar7 == 0) {
      if (*plVar1 == 0) {
        lVar7 = 0;
        goto LAB_145a26ea4;
      }
      if (lVar6 != 0) {
        plVar3 = *(longlong **)(lVar6 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_145a26f65:
          lVar7 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_145a26f65;
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar5,plVar1);
        }
        param_1[5] = lVar7;
        lVar6 = param_1[4];
        goto LAB_145a26ea4;
      }
      local_21 = DAT_00000018;
LAB_145a26eb0:
      uVar5 = FUN_145cd93aa();
      lVar6 = FUN_14477b664(uVar5);
      param_1[4] = lVar6;
      lVar7 = param_1[5];
    }
    else {
LAB_145a26ea4:
      local_21 = *(undefined1 *)(lVar7 + 0x18);
      if (lVar6 == 0) goto LAB_145a26eb0;
    }
    if (lVar7 == 0) {
      param_1[5] = 0;
      lVar7 = 0;
      if ((lVar6 != 0) && (param_1[3] != 0)) {
        plVar3 = *(longlong **)(lVar6 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_145a26f6c:
          lVar7 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_145a26f6c;
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar5,plVar1);
        }
        param_1[5] = lVar7;
      }
    }
  }
  else {
    local_21 = *(undefined1 *)(lVar7 + 0x18);
  }
  if (*(longlong *)(lVar7 + 0x24) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,lVar7 + 0x24);
  }
LAB_145a26d92:
  (**(code **)(*param_1 + 0x30))(param_1,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a26f70 FUN_145a26f70 body=103 status=ok
// SIG undefined FUN_145a26f70(void)

void FUN_145a26f70(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14480f766(lVar3 + 0x2d0);
    }
    if (*param_2 == '\x01') {
      plVar4 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar4 + 0x5c8))(plVar4,0);
      *puVar1 = 0;
    }
  }
  return;
}



// FUNCTION 145a26fd8 FUN_145a26fd8 body=200 status=ok
// SIG undefined FUN_145a26fd8(void)

void FUN_145a26fd8(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x7e8))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetPlayerBusyInMenu_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7f0))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a270ac FUN_145a270ac body=40 status=ok
// SIG undefined FUN_145a270ac(void)

undefined8 FUN_145a270ac(undefined8 param_1,int param_2)

{
  FUN_145a270d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a270d4 FUN_145a270d4 body=326 status=ok
// SIG undefined FUN_145a270d4(void)

void FUN_145a270d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac18480;
  param_1[5] = &PTR_FUN_14ac18a40;
  param_1[6] = &PTR_LAB_14ac18a80;
  param_1[0x22] = &PTR_FUN_14ac18ad0;
  param_1[0x23] = &PTR_FUN_14ac18b00;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x37];
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
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x24);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145a2721a FUN_145a2721a body=82 status=ok
// SIG undefined FUN_145a2721a(void)

void FUN_145a2721a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar1 = *(longlong *)(&DAT_00006850 + lVar1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x4449) = 1;
      FUN_1414641b4(param_1,param_2);
      *(undefined1 *)(lVar1 + 0x4449) = 0;
    }
  }
  return;
}



// FUNCTION 145a2726c FUN_145a2726c body=77 status=ok
// SIG undefined FUN_145a2726c(void)

void FUN_145a2726c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1414644bc();
  if (cVar1 != '\0') {
    if ((param_1[0x86] == 0) || ((*(byte *)(param_1[0x86] + 0x5b5) & 0x20) == 0)) {
      lVar2 = 0x860;
    }
    else {
      lVar2 = 0x868;
    }
                    /* WARNING: Could not recover jumptable at 0x000145a272a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar2))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 145a272ba FUN_145a272ba body=40 status=ok
// SIG undefined FUN_145a272ba(void)

undefined8 FUN_145a272ba(undefined8 param_1,int param_2)

{
  FUN_145a272e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a272e2 FUN_145a272e2 body=100 status=ok
// SIG undefined FUN_145a272e2(void)

void FUN_145a272e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b83f4f0;
  param_1[6] = &PTR_FUN_14b83f7e0;
  param_1[7] = &PTR_LAB_14b83f870;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145a27346(param_1 + 0xc);
  FUN_1449db362(param_1 + 9);
  thunk_FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145a27346 FUN_145a27346 body=55 status=ok
// SIG undefined FUN_145a27346(void)

void FUN_145a27346(longlong *param_1)

{
  FUN_141464618(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2737e FUN_145a2737e body=37 status=ok
// SIG undefined FUN_145a2737e(void)

void FUN_145a2737e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_145a273a4(param_2);
  return;
}



// FUNCTION 145a273a4 FUN_145a273a4 body=133 status=ok
// SIG undefined FUN_145a273a4(void)

undefined8 * FUN_145a273a4(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac7a350;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1b) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 145a2742a FUN_145a2742a body=40 status=ok
// SIG undefined FUN_145a2742a(void)

undefined8 FUN_145a2742a(undefined8 param_1,int param_2)

{
  FUN_145a27452();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a27452 FUN_145a27452 body=106 status=ok
// SIG undefined FUN_145a27452(void)

void FUN_145a27452(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae3ecb0;
  param_1[5] = &PTR_FUN_14ae3efb0;
  plVar3 = (longlong *)param_1[0xcf];
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
  if (param_1[0xcc] != 0) {
    FUN_1400020a8();
  }
  FUN_145a274bc(param_1);
  return;
}



// FUNCTION 145a274bc FUN_145a274bc body=194 status=ok
// SIG undefined FUN_145a274bc(void)

void FUN_145a274bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a52c470;
  param_1[5] = &PTR_FUN_14a52c770;
  plVar3 = (longlong *)param_1[0xcb];
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
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc0] != 0) {
    FUN_1400020a8();
  }
  FUN_14130c426(param_1 + 0x32);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145a2757e FUN_145a2757e body=133 status=ok
// SIG undefined FUN_145a2757e(void)

longlong FUN_145a2757e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_141467c3c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_145a275cb;
  }
  local_30 = param_3;
  FUN_145a27604(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_145a275cb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 145a27604 FUN_145a27604 body=260 status=ok
// SIG undefined FUN_145a27604(void)

undefined4 * FUN_145a27604(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_145a2794a(param_1,local_48);
  FUN_145a27790(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_145a2770a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_141464818(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2770a FUN_145a2770a body=134 status=ok
// SIG undefined FUN_145a2770a(void)

undefined8 FUN_145a2770a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_141467c3c(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x68;
    *(undefined4 *)(lVar1 + 0x58 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x50 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_1401bccca(lVar1 + lVar3 + 0x10);
    memmove((void *)(lVar1 + lVar3),param_3,0x60);
    FUN_1488396ac(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 145a27790 FUN_145a27790 body=164 status=ok
// SIG undefined FUN_145a27790(void)

undefined8 * FUN_145a27790(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
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
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  FUN_145a27836(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a27836 FUN_145a27836 body=125 status=ok
// SIG undefined FUN_145a27836(void)

undefined8 * FUN_145a27836(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145a278b4();
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



// FUNCTION 145a278b4 FUN_145a278b4 body=150 status=ok
// SIG undefined FUN_145a278b4(void)

longlong * FUN_145a278b4(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a2794a FUN_145a2794a body=227 status=ok
// SIG undefined FUN_145a2794a(void)

int * FUN_145a2794a(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 145a27a2e FUN_145a27a2e body=81 status=ok
// SIG undefined FUN_145a27a2e(void)

void FUN_145a27a2e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_145a27a80(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145a27a80 FUN_145a27a80 body=95 status=ok
// SIG undefined FUN_145a27a80(void)

void FUN_145a27a80(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_145a27ae0(param_1,param_2,1);
  return;
}



// FUNCTION 145a27ae0 FUN_145a27ae0 body=138 status=ok
// SIG undefined FUN_145a27ae0(void)

void FUN_145a27ae0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145a27b6a FUN_145a27b6a body=81 status=ok
// SIG undefined FUN_145a27b6a(void)

void FUN_145a27b6a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a27bbc(puVar1);
  *puVar1 = &PTR_FUN_14b78db20;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  return;
}



// FUNCTION 145a27bbc FUN_145a27bbc body=173 status=ok
// SIG undefined FUN_145a27bbc(void)

undefined8 * FUN_145a27bbc(undefined8 *param_1)

{
  FUN_145a27c6a();
  *param_1 = &PTR_FUN_14b529860;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x40000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145a27c6a FUN_145a27c6a body=60 status=ok
// SIG undefined FUN_145a27c6a(void)

undefined8 * FUN_145a27c6a(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b45c930;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 145a27ca6 FUN_145a27ca6 body=40 status=ok
// SIG undefined FUN_145a27ca6(void)

undefined8 FUN_145a27ca6(undefined8 param_1,int param_2)

{
  FUN_145a27cce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a27cce FUN_145a27cce body=81 status=ok
// SIG undefined FUN_145a27cce(void)

void FUN_145a27cce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afdc7e0;
  param_1[0x75] = &PTR_FUN_14afdce20;
  FUN_145a27d20(param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145a27d20 FUN_145a27d20 body=141 status=ok
// SIG undefined FUN_145a27d20(void)

void FUN_145a27d20(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)((longlong)param_1 + lVar1 + 0x188) = &DAT_14a176f00;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x1f8) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0x188) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 400);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x180);
  *param_1 = &DAT_14a176f00;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  return;
}



// FUNCTION 145a27dae FUN_145a27dae body=40 status=ok
// SIG undefined FUN_145a27dae(void)

undefined8 FUN_145a27dae(undefined8 param_1,int param_2)

{
  FUN_145a27dd6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a27dd6 FUN_145a27dd6 body=87 status=ok
// SIG undefined FUN_145a27dd6(void)

void FUN_145a27dd6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14be8fca0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145a27e2e(param_1 + 7);
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a27e2e FUN_145a27e2e body=53 status=ok
// SIG undefined FUN_145a27e2e(void)

void FUN_145a27e2e(longlong *param_1)

{
  FUN_145a2803a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a27e63 FUN_145a27e63 body=53 status=ok
// SIG undefined FUN_145a27e63(void)

void FUN_145a27e63(longlong param_1)

{
  FUN_145a27f90(param_1 + 0x30);
  FUN_145a27f44(param_1 + 0x28);
  FUN_145a27e98(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a27e98 FUN_145a27e98 body=62 status=ok
// SIG undefined FUN_145a27e98(void)

void FUN_145a27e98(longlong *param_1)

{
  FUN_145a27ed6();
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



// FUNCTION 145a27ed6 FUN_145a27ed6 body=110 status=ok
// SIG undefined FUN_145a27ed6(void)

void FUN_145a27ed6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    plVar6 = (longlong *)*param_1;
    do {
      lVar3 = *plVar6;
      if (lVar3 != 0) {
        lVar7 = 0x4000;
        do {
          plVar4 = *(longlong **)(lVar3 + -0x10 + lVar7);
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
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
        FUN_1400020a8(lVar3);
      }
      plVar6 = plVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 145a27f44 FUN_145a27f44 body=76 status=ok
// SIG undefined FUN_145a27f44(void)

void FUN_145a27f44(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_1403378ec(param_1);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 145a27f90 FUN_145a27f90 body=115 status=ok
// SIG undefined FUN_145a27f90(void)

void FUN_145a27f90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be90410;
  FUN_145a28196();
  plVar3 = (longlong *)param_1[0x12];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145a28004(param_1 + 1);
  return;
}



// FUNCTION 145a28004 FUN_145a28004 body=53 status=ok
// SIG undefined FUN_145a28004(void)

void FUN_145a28004(longlong *param_1)

{
  FUN_145a2834e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2803a FUN_145a2803a body=346 status=ok
// SIG undefined FUN_145a2803a(void)

void FUN_145a2803a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a28196 FUN_145a28196 body=237 status=ok
// SIG undefined FUN_145a28196(void)

void FUN_145a28196(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_40 = 0;
  local_38 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14be901d0;
  local_38[2] = 0;
  FUN_145a282c4(param_1 + 0x88,&local_40);
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  FUN_145a28284(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar4 < iVar3) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a28284 FUN_145a28284 body=63 status=ok
// SIG undefined FUN_145a28284(void)

void FUN_145a28284(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145a284ca(param_1);
    FUN_145a2834e(param_1);
    return;
  }
  FUN_145a2834e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14980e642(param_1);
  return;
}


