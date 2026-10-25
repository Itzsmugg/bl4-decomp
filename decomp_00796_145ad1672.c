// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ad1672 FUN_145ad1672 body=120 status=ok
// SIG undefined FUN_145ad1672(void)

undefined8 * FUN_145ad1672(undefined8 *param_1)

{
  FUN_1400ea704();
  *param_1 = &PTR_FUN_14a3bac90;
  param_1[5] = &PTR_FUN_14a3bb790;
  param_1[6] = &PTR_FUN_14a3bb7d0;
  param_1[0x55] = &PTR_FUN_14a3bb820;
  param_1[0x56] = &PTR_FUN_14a3bb8a0;
  param_1[0x57] = &PTR_FUN_14a3bb8b0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  return param_1;
}



// FUNCTION 145ad16f0 FUN_145ad16f0 body=125 status=ok
// SIG undefined FUN_145ad16f0(void)

void FUN_145ad16f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_14a5da4b0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  FUN_1401a700c(&local_1c,0xff);
  puVar1[8] = (ulonglong)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad176e FUN_145ad176e body=9 status=ok
// SIG undefined FUN_145ad176e(void)

void FUN_145ad176e(longlong param_1)

{
  FUN_145ad1778(param_1 + 0x10);
  return;
}



// FUNCTION 145ad1778 FUN_145ad1778 body=122 status=ok
// SIG undefined FUN_145ad1778(void)

void FUN_145ad1778(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b141330;
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
  *param_1 = &PTR_FUN_14b082a90;
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
                    /* WARNING: Could not recover jumptable at 0x000145ad17cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ad17f2 FUN_145ad17f2 body=24 status=ok
// SIG undefined FUN_145ad17f2(void)

void FUN_145ad17f2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ad1806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145ad180a FUN_145ad180a body=38 status=ok
// SIG undefined FUN_145ad180a(void)

undefined8 FUN_145ad180a(undefined8 param_1,int param_2)

{
  FUN_145ad1830();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad1830 FUN_145ad1830 body=212 status=ok
// SIG undefined FUN_145ad1830(void)

void FUN_145ad1830(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b41f590;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad1904(param_1 + 0x1c);
  plVar3 = (longlong *)param_1[0x1b];
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
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad193a(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3dde(param_1 + 6);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ad1900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ad1904 FUN_145ad1904 body=53 status=ok
// SIG undefined FUN_145ad1904(void)

void FUN_145ad1904(longlong *param_1)

{
  FUN_145ad19c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad193a FUN_145ad193a body=53 status=ok
// SIG undefined FUN_145ad193a(void)

void FUN_145ad193a(longlong *param_1)

{
  FUN_145ad1970();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad1970 FUN_145ad1970 body=88 status=ok
// SIG undefined FUN_145ad1970(void)

void FUN_145ad1970(longlong param_1)

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



// FUNCTION 145ad19c8 FUN_145ad19c8 body=317 status=ok
// SIG undefined FUN_145ad19c8(void)

void FUN_145ad19c8(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 145ad1b06 FUN_145ad1b06 body=38 status=ok
// SIG undefined FUN_145ad1b06(void)

undefined8 FUN_145ad1b06(undefined8 param_1,int param_2)

{
  FUN_1414a807e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad1b2c FUN_145ad1b2c body=38 status=ok
// SIG undefined FUN_145ad1b2c(void)

undefined8 FUN_145ad1b2c(undefined8 param_1,int param_2)

{
  FUN_145ad1b52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad1b52 FUN_145ad1b52 body=93 status=ok
// SIG undefined FUN_145ad1b52(void)

void FUN_145ad1b52(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x360));
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  FUN_1457f3312(param_1);
  return;
}



// FUNCTION 145ad1bb0 FUN_145ad1bb0 body=249 status=ok
// SIG undefined FUN_145ad1bb0(void)

void FUN_145ad1bb0(longlong *param_1,longlong *param_2)

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
LAB_145ad1c1f:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
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
              if (0x7f < (uVar6 | uVar7)) goto LAB_145ad1c74;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_145ad1c74;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_145ad1c97;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_145ad1c97;
      goto LAB_145ad1c7a;
    }
  }
  return;
LAB_145ad1c74:
  if (uVar7 == uVar6) {
LAB_145ad1c97:
    FUN_145ad1caa(param_1);
    return;
  }
LAB_145ad1c7a:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_145ad1c1f;
}



// FUNCTION 145ad1caa FUN_145ad1caa body=116 status=ok
// SIG undefined FUN_145ad1caa(void)

void FUN_145ad1caa(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145ad1d1e((longlong)param_2 * 0x28 + *param_1);
  FUN_145ad1d74(param_1,param_2);
  return;
}



// FUNCTION 145ad1d1e FUN_145ad1d1e body=75 status=ok
// SIG undefined FUN_145ad1d1e(void)

void FUN_145ad1d1e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ad1d6a FUN_145ad1d6a body=9 status=ok
// SIG undefined FUN_145ad1d6a(void)

void FUN_145ad1d6a(longlong param_1)

{
  FUN_145ad1de6(param_1 + 0x10);
  return;
}



// FUNCTION 145ad1d74 FUN_145ad1d74 body=114 status=ok
// SIG undefined FUN_145ad1d74(void)

void FUN_145ad1d74(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 145ad1de6 FUN_145ad1de6 body=212 status=ok
// SIG undefined FUN_145ad1de6(void)

void FUN_145ad1de6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f4ef8;
  FUN_145ad1eba(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad1ee2(param_1 + 0xb);
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
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ad1eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ad1eba FUN_145ad1eba body=40 status=ok
// SIG undefined FUN_145ad1eba(void)

void FUN_145ad1eba(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145ad1ee2 FUN_145ad1ee2 body=53 status=ok
// SIG undefined FUN_145ad1ee2(void)

void FUN_145ad1ee2(longlong *param_1)

{
  FUN_145ad1f18();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad1f18 FUN_145ad1f18 body=329 status=ok
// SIG undefined FUN_145ad1f18(void)

void FUN_145ad1f18(longlong *param_1)

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
      FUN_1460ad20e((longlong)iStack_4c * 0x28 + *local_68);
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



// FUNCTION 145ad2062 FUN_145ad2062 body=52 status=ok
// SIG undefined FUN_145ad2062(void)

void FUN_145ad2062(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x350);
  memset(_Dst,0,0x350);
  FUN_145ad2096(_Dst);
  return;
}



// FUNCTION 145ad2096 FUN_145ad2096 body=145 status=ok
// SIG undefined FUN_145ad2096(void)

undefined8 * FUN_145ad2096(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9cb370;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30d) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 145ad2134 FUN_145ad2134 body=166 status=ok
// SIG undefined FUN_145ad2134(void)

void FUN_145ad2134(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar2 = DAT_14c760db4;
  }
  if (2 < (int)uVar2) {
    lVar3 = FUN_14001cc68(0x58,0x10);
    FUN_1446f470e(&local_28,L"HZBGPUReadback",1);
    FUN_145ad21dc(lVar3,local_28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 != lVar3) && (*(longlong *)(param_1 + 0x30) = lVar3, lVar1 != 0)) {
      FUN_145bf0f7a(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad21dc FUN_145ad21dc body=51 status=ok
// SIG undefined FUN_145ad21dc(void)

undefined8 * FUN_145ad21dc(undefined8 *param_1)

{
  FUN_14047abb0();
  *param_1 = &PTR_FUN_14a37f830;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145ad221a FUN_145ad221a body=524 status=ok
// SIG undefined FUN_145ad221a(void)

undefined8 * FUN_145ad221a(undefined8 *param_1)

{
  FUN_145ad2426();
  *param_1 = &PTR_FUN_14b75a530;
  param_1[5] = &PTR_FUN_14b75aae0;
  param_1[0x38] = &PTR_FUN_14b75ab10;
  param_1[0x88] = &PTR_FUN_14b75ab30;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x474) = 1;
  param_1[0x8f] = 0;
  param_1[0x90] = 0x40a0000000000000;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x96) = 1;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x4d7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  FUN_144a5dc74(param_1 + 0x9c);
  FUN_1447a97f4(param_1 + 0x9e,&DAT_14c9485f0);
  param_1[0xa7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x544) = 0;
  *(undefined1 *)((longlong)param_1 + 0x549) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x525) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52d) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x559) = 0;
  *(undefined8 *)((longlong)param_1 + 0x561) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0xbd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xd2] = 2;
  *(undefined4 *)(param_1 + 0xd3) = 0xffffffff;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  return param_1;
}



// FUNCTION 145ad2426 FUN_145ad2426 body=74 status=ok
// SIG undefined FUN_145ad2426(void)

undefined8 * FUN_145ad2426(undefined8 *param_1)

{
  FUN_145ad2470();
  *param_1 = &PTR_FUN_14b4fb5f0;
  param_1[5] = &PTR_LAB_14b4fbba0;
  param_1[0x38] = &PTR_LAB_14b4fbbd0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  return param_1;
}



// FUNCTION 145ad2470 FUN_145ad2470 body=337 status=ok
// SIG undefined FUN_145ad2470(void)

undefined8 * FUN_145ad2470(undefined8 *param_1)

{
  FUN_145ad2652();
  *param_1 = &PTR_FUN_14b1582c0;
  param_1[5] = &PTR_FUN_14b158850;
  param_1[0x38] = &PTR_FUN_14b158880;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f1) = 0;
  FUN_145ad25c2(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x5b) = 0x1000000;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 2;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6a] = 2;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 2;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  return param_1;
}



// FUNCTION 145ad25c2 FUN_145ad25c2 body=143 status=ok
// SIG undefined FUN_145ad25c2(void)

void FUN_145ad25c2(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 1;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 **)(param_1 + 0x34) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 **)(param_1 + 0x44) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x68) = 2;
  return;
}



// FUNCTION 145ad2652 FUN_145ad2652 body=291 status=ok
// SIG undefined FUN_145ad2652(void)

undefined8 * FUN_145ad2652(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8e33b0;
  param_1[5] = &PTR_FUN_14a8e3820;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 2;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 2;
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_1409f3812(uVar1,param_1);
  param_1[0x1e] = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x80;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  param_1[0x1f] = puVar2;
  uVar1 = FUN_14107a202();
  FUN_14112365e(param_1 + 0x20,uVar1);
  param_1[0x20] = &PTR_FUN_14a8ea2f8;
  return param_1;
}



// FUNCTION 145ad2780 FUN_145ad2780 body=252 status=ok
// SIG undefined FUN_145ad2780(void)

undefined8 * FUN_145ad2780(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  FUN_14480568a();
  ppuVar2 = &PTR_FUN_14a854890;
  *param_1 = &PTR_FUN_14a854890;
  param_1[5] = &PTR_FUN_14a855290;
  param_1[6] = &PTR_LAB_14a8552d0;
  param_1[0x55] = &PTR_FUN_14a855320;
  param_1[0x56] = &PTR_FUN_14a8553a0;
  param_1[0x57] = &PTR_FUN_14a8553b0;
  param_1[0xc4] = &PTR_FUN_14a8553e0;
  param_1[0xc5] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) | 2;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  if (((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) &&
     (*(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7,
     puVar3 = param_1, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(puVar3 + 0x3f) & 2) == 0) break;
      *(byte *)(puVar3 + 0x3f) = *(byte *)(puVar3 + 0x3f) & 0xfd;
      puVar1 = puVar3 + 0x24;
      puVar3 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    ppuVar2 = (undefined **)*param_1;
  }
  (*(code *)ppuVar2[0xe5])(param_1,DAT_14cad0ef8,1);
  return param_1;
}



// FUNCTION 145ad287c FUN_145ad287c body=181 status=ok
// SIG undefined FUN_145ad287c(void)

longlong FUN_145ad287c(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_145ad2909;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145ad2932(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_145ad2909:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 145ad2932 FUN_145ad2932 body=270 status=ok
// SIG undefined FUN_145ad2932(void)

undefined4 * FUN_145ad2932(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ad2ac2(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0xffffffff00000000;
  cVar1 = FUN_145ad2a42(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xc) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1414a80dc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad2a42 FUN_145ad2a42 body=127 status=ok
// SIG undefined FUN_145ad2a42(void)

undefined8 FUN_145ad2a42(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14860c264(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ad2ac2 FUN_145ad2ac2 body=239 status=ok
// SIG undefined FUN_145ad2ac2(void)

int * FUN_145ad2ac2(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145ad2bba FUN_145ad2bba body=612 status=ok
// SIG undefined FUN_145ad2bba(void)

undefined8 * FUN_145ad2bba(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ad2e20();
  *param_1 = &PTR_FUN_14b7bea10;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = DAT_14cb977f8;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb8] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0xf1) = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x799) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a1) = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  FUN_144a5dc74(param_1 + 0x102);
  param_1[0x107] = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  param_1[0x11d] = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 5;
  param_1[0x123] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_140056680(local_40,L"OakOnlineSessionClient_NetworkTasks");
    uVar1 = FUN_1413da074(local_40);
    param_1[0xb2] = uVar1;
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad2e20 FUN_145ad2e20 body=628 status=ok
// SIG undefined FUN_145ad2e20(void)

undefined8 * FUN_145ad2e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14007ca06();
  FUN_145ad3096(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4e4020;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x56) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5c] = 2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x329) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33d) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x392) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39a) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_140056680(local_30,L"GbxOnlineSessionClient_CanPlayOnlineTasks");
    uVar1 = FUN_1413da074(local_30);
    param_1[0x69] = uVar1;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_30,L"GbxOnlineSessionClient_GlobalCrossplayCheck");
    uVar1 = FUN_1413da074(local_30);
    param_1[0x6a] = uVar1;
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad3096 FUN_145ad3096 body=182 status=ok
// SIG undefined FUN_145ad3096(void)

undefined8 * FUN_145ad3096(undefined8 *param_1)

{
  FUN_145ad314c();
  *param_1 = &PTR_FUN_14b4c0760;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = &PTR_FUN_14b4c3b18;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_145ad316c(param_1 + 0x1c);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 9999;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  return param_1;
}



// FUNCTION 145ad314c FUN_145ad314c body=32 status=ok
// SIG undefined FUN_145ad314c(void)

undefined8 * FUN_145ad314c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9f54d0;
  return param_1;
}



// FUNCTION 145ad316c FUN_145ad316c body=147 status=ok
// SIG undefined FUN_145ad316c(void)

undefined8 * FUN_145ad316c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_14b4c3b20;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_1414a827a();
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 145ad3200 FUN_145ad3200 body=128 status=ok
// SIG undefined FUN_145ad3200(void)

ulonglong FUN_145ad3200(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar2 = FUN_145ad32b8();
  if (lVar2 != 0) {
    cVar1 = FUN_145ad3280(lVar2);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_145ad32a0(lVar2);
    if (cVar1 == '\0') {
      uVar3 = FUN_145ad328c(lVar2);
      return uVar3;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
  if (lVar2 == 0) {
    return 0;
  }
  cVar1 = *(char *)(lVar2 + 0x38);
  if (cVar1 == '\x03') {
    bVar4 = *(longlong *)(lVar2 + 0x3c) == 0;
  }
  else {
    if (cVar1 == '\x02') {
      return (ulonglong)*(uint *)(lVar2 + 0x44);
    }
    if (cVar1 != '\x01') {
      return 0;
    }
    bVar4 = *(int *)(lVar2 + 0x44) == 0;
  }
  return (ulonglong)!bVar4;
}



// FUNCTION 145ad3280 FUN_145ad3280 body=12 status=ok
// SIG undefined FUN_145ad3280(void)

bool FUN_145ad3280(longlong param_1)

{
  return *(longlong *)(param_1 + 0x338) != 0;
}



// FUNCTION 145ad328c FUN_145ad328c body=19 status=ok
// SIG undefined FUN_145ad328c(void)

undefined4 FUN_145ad328c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x338) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0xc);
  }
  return 0;
}



// FUNCTION 145ad32a0 FUN_145ad32a0 body=23 status=ok
// SIG undefined FUN_145ad32a0(void)

undefined8 FUN_145ad32a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 8) == '\x01');
  }
  return 0;
}



// FUNCTION 145ad32b8 FUN_145ad32b8 body=146 status=ok
// SIG undefined FUN_145ad32b8(void)

undefined8 FUN_145ad32b8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  local_50 = *(undefined4 *)(lVar1 + 0x18);
  local_58 = *(undefined8 *)(lVar1 + 0x10);
  FUN_1448075d0(local_48);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1406b1d14(lVar1,*(longlong *)(param_1 + 8) + 0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad334c FUN_145ad334c body=69 status=ok
// SIG undefined FUN_145ad334c(void)

void FUN_145ad334c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140a40516(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145ad3392(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145ad3392 FUN_145ad3392 body=112 status=ok
// SIG undefined FUN_145ad3392(void)

void FUN_145ad3392(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 145ad3402 FUN_145ad3402 body=146 status=ok
// SIG undefined FUN_145ad3402(void)

void FUN_145ad3402(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148eef222(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_144326c24;
  local_20 = &local_30;
  local_28 = FUN_145ad377c;
  local_48 = param_2;
  FUN_145ad3496(param_1,&local_28,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad3496 FUN_145ad3496 body=683 status=ok
// SIG undefined FUN_145ad3496(void)

void FUN_145ad3496(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = (int)param_1[0x54];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78 = local_58;
    iStack_74 = iStack_54;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_90 = plVar1;
    if ((iStack_54 != iVar8) || (uStack_60 != plVar2)) {
      do {
        lVar5 = *local_90;
        lVar7 = (longlong)iStack_74;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar7 * 0x20);
        if (lVar6 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar6,0);
            lVar6 = *(longlong *)(lVar5 + lVar7 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar6 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar6 + 0x48) & 0x6b) == 3)) &&
             (plVar3 = *(longlong **)(lVar6 + 0x30), plVar3 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
            lVar6 = FUN_145ad3742();
            if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)) {
              (*(code *)*param_2)(param_2[1],plVar3);
            }
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar8));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = (int)param_1[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((iStack_54 != iVar8) || (uStack_60 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_145ad3742();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar8));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad3742 FUN_145ad3742 body=57 status=ok
// SIG undefined FUN_145ad3742(void)

void FUN_145ad3742(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6220 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6220 = FUN_140002ddd(FUN_1465c6392,uVar1,L"GbxProfileDefaultsDisplayDataDef");
  }
  return;
}



// FUNCTION 145ad377c FUN_145ad377c body=67 status=ok
// SIG undefined FUN_145ad377c(void)

void FUN_145ad377c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad37c8 FUN_145ad37c8 body=413 status=ok
// SIG undefined FUN_145ad37c8(void)

undefined8 * FUN_145ad37c8(undefined8 *param_1)

{
  FUN_145ad3966();
  *param_1 = &PTR_FUN_14bd98b90;
  param_1[5] = &PTR_FUN_14bd99030;
  param_1[0x13] = &PTR_FUN_14bd99050;
  param_1[0x15] = &PTR_FUN_14bd99080;
  param_1[0x16] = &PTR_FUN_14bd990c0;
  param_1[0x5d] = &PTR_FUN_14bd990f0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x73) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  memset(param_1 + 0x7b,0,0x100);
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0xffffffff;
  memset(param_1 + 0xa3,0,0x100);
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0xffffffff;
  param_1[0xc5] = 0;
  FUN_145ad3dea(param_1 + 0xc6);
  param_1[0xf0] = 0x7fefffffffffffff;
  param_1[0xf1] = 0x7fefffffffffffff;
  param_1[0xf2] = 0x7fefffffffffffff;
  param_1[0xf3] = 0xffefffffffffffff;
  param_1[0xf4] = 0xffefffffffffffff;
  param_1[0xf5] = 0xffefffffffffffff;
  param_1[0xf6] = 0x3ff0000000000000;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0xff7fffff7f7fffff;
  *(undefined1 *)(param_1 + 0xff) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0xffffffff;
  param_1[0x101] = 0;
  return param_1;
}



// FUNCTION 145ad3966 FUN_145ad3966 body=174 status=ok
// SIG undefined FUN_145ad3966(void)

undefined8 * FUN_145ad3966(undefined8 *param_1)

{
  FUN_145ad3a14();
  *param_1 = &PTR_FUN_14bd88880;
  param_1[5] = &PTR_FUN_14bd88cf0;
  param_1[0x13] = &PTR_FUN_14bd88d10;
  param_1[0x15] = &PTR_FUN_14bd88d40;
  param_1[0x16] = &PTR_FUN_14bd88d80;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x7fefffffffffffff;
  param_1[0x57] = 0x7fefffffffffffff;
  param_1[0x58] = 0x7fefffffffffffff;
  param_1[0x59] = 0xffefffffffffffff;
  param_1[0x5a] = 0xffefffffffffffff;
  param_1[0x5b] = 0xffefffffffffffff;
  param_1[0x5c] = 0x100000000;
  return param_1;
}



// FUNCTION 145ad3a14 FUN_145ad3a14 body=583 status=ok
// SIG undefined FUN_145ad3a14(void)

undefined8 * FUN_145ad3a14(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ad3c5c();
  *param_1 = &PTR_FUN_14aed0af0;
  param_1[5] = &PTR_FUN_14aed0f50;
  param_1[0x13] = &PTR_FUN_14aed0f70;
  param_1[0x15] = &PTR_FUN_14aed0fa0;
  param_1[0x16] = &PTR_FUN_14aed0fe0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  memset(param_1 + 0x29,0,0x100);
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  param_1[0x4a] = 0xff7fffff7f7fffff;
  plVar1 = param_1 + 0x4f;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  lVar4 = FUN_145ad3d04();
  if (lVar4 == 0) {
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)((longlong)param_1 + 0x284) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_70,lVar4);
    *(undefined4 *)(param_1 + 0x4d) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x26c) = uStack_6c;
    *(undefined4 *)(param_1 + 0x4e) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x274) = uStack_64;
    if (param_1 + 0x4d == (undefined8 *)&local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[0x4f] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x50) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x284) = local_54;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x4c] = 0;
        goto LAB_145ad3b91;
      }
    }
    FUN_14485c47a(param_1 + 0x4c,lVar4);
  }
LAB_145ad3b91:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad3c5c FUN_145ad3c5c body=167 status=ok
// SIG undefined FUN_145ad3c5c(void)

undefined8 * FUN_145ad3c5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140fe66fa();
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14aed2550;
  param_1[5] = &PTR_FUN_14aed2940;
  param_1[0x13] = &PTR_FUN_14aed2960;
  param_1[0x15] = &PTR_FUN_14aed2990;
  param_1[0x16] = &PTR_FUN_14aed29d0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x18] = DAT_14c8464e0;
  param_1[0x19] = uVar1;
  param_1[0x1a] = DAT_14c8464f0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 145ad3d04 FUN_145ad3d04 body=228 status=ok
// SIG undefined FUN_145ad3d04(void)

longlong FUN_145ad3d04(void)

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
  if (DAT_14cb4b3d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14843f009;
    local_40 = &LAB_145de249a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"BrushBaseProperties",&DAT_14cb4b3d0,
                  &DAT_14843f008);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b3d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad3dea FUN_145ad3dea body=189 status=ok
// SIG undefined FUN_145ad3dea(void)

undefined8 * FUN_145ad3dea(undefined8 *param_1)

{
  *param_1 = 0x408f400000000000;
  param_1[1] = 0x3e80000000a;
  FUN_141224904(param_1 + 2);
  FUN_141040b84(param_1 + 5);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1414a86b8(param_1 + 9);
  FUN_145ad3f2c(param_1 + 0xc);
  FUN_1458482ca(param_1 + 0x19);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x7fffffff7fffffff;
  param_1[0x27] = 0x800000017fffffff;
  param_1[0x28] = 0x8000000180000001;
  return param_1;
}



// FUNCTION 145ad3ea8 FUN_145ad3ea8 body=132 status=ok
// SIG undefined FUN_145ad3ea8(void)

void FUN_145ad3ea8(longlong param_1,int param_2)

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



// FUNCTION 145ad3f2c FUN_145ad3f2c body=177 status=ok
// SIG undefined FUN_145ad3f2c(void)

int * FUN_145ad3f2c(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1[0] = 0x20;
  param_1[1] = 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  FUN_1414a8754(param_1 + 0x14);
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1U;
  if ((uint)param_1[5] < iVar1 + 1U) {
    FUN_145ad3fde(param_1 + 2,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = puVar2;
  FUN_144a127d2(**(longlong **)(param_1 + 2) + 8,*param_1 * param_1[1],1);
  return param_1;
}



// FUNCTION 145ad3fde FUN_145ad3fde body=132 status=ok
// SIG undefined FUN_145ad3fde(void)

void FUN_145ad3fde(longlong param_1,int param_2)

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



// FUNCTION 145ad4062 FUN_145ad4062 body=132 status=ok
// SIG undefined FUN_145ad4062(void)

void FUN_145ad4062(longlong param_1,int param_2)

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



// FUNCTION 145ad40ee FUN_145ad40ee body=58 status=ok
// SIG undefined FUN_145ad40ee(void)

undefined8 * FUN_145ad40ee(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR_FUN_149f881d0;
  param_1[5] = &PTR_FUN_149f88480;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145ad4130 FUN_145ad4130 body=124 status=ok
// SIG undefined FUN_145ad4130(void)

undefined8 * FUN_145ad4130(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149fbfc40;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[5] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 145ad41b8 FUN_145ad41b8 body=55 status=ok
// SIG undefined FUN_145ad41b8(void)

undefined8 * FUN_145ad41b8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_14a183f10;
  return param_1;
}



// FUNCTION 145ad41f0 FUN_145ad41f0 body=40 status=ok
// SIG undefined FUN_145ad41f0(void)

undefined8 FUN_145ad41f0(undefined8 param_1,int param_2)

{
  FUN_145ad4218();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad4218 FUN_145ad4218 body=125 status=ok
// SIG undefined FUN_145ad4218(void)

void FUN_145ad4218(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3e4000;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad42ae(param_1);
  return;
}



// FUNCTION 145ad42ae FUN_145ad42ae body=75 status=ok
// SIG undefined FUN_145ad42ae(void)

void FUN_145ad42ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8bfae0;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ad4304 FUN_145ad4304 body=55 status=ok
// SIG undefined FUN_145ad4304(void)

undefined8 * FUN_145ad4304(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f4330;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145ad4346 FUN_145ad4346 body=55 status=ok
// SIG undefined FUN_145ad4346(void)

undefined8 * FUN_145ad4346(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f4870;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145ad438a FUN_145ad438a body=55 status=ok
// SIG undefined FUN_145ad438a(void)

void FUN_145ad438a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14adff940;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145ad43ca FUN_145ad43ca body=58 status=ok
// SIG undefined FUN_145ad43ca(void)

undefined8 * FUN_145ad43ca(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b060c60;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145ad440c FUN_145ad440c body=58 status=ok
// SIG undefined FUN_145ad440c(void)

undefined8 * FUN_145ad440c(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2c9030;
  param_1[6] = &PTR_FUN_14b2c9320;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[7] = DAT_14cb8ce98;
  return param_1;
}



// FUNCTION 145ad4446 FUN_145ad4446 body=40 status=ok
// SIG undefined FUN_145ad4446(void)

undefined8 FUN_145ad4446(undefined8 param_1,int param_2)

{
  FUN_145ad446e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad446e FUN_145ad446e body=92 status=ok
// SIG undefined FUN_145ad446e(void)

void FUN_145ad446e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b57b470;
  plVar3 = (longlong *)param_1[0x10];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ad44d6 FUN_145ad44d6 body=40 status=ok
// SIG undefined FUN_145ad44d6(void)

undefined8 FUN_145ad44d6(undefined8 param_1,int param_2)

{
  FUN_1414a8b04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad44fe FUN_145ad44fe body=53 status=ok
// SIG undefined FUN_145ad44fe(void)

void FUN_145ad44fe(longlong *param_1)

{
  FUN_145ad45c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad4534 FUN_145ad4534 body=53 status=ok
// SIG undefined FUN_145ad4534(void)

void FUN_145ad4534(longlong *param_1)

{
  FUN_145ad456a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad456a FUN_145ad456a body=90 status=ok
// SIG undefined FUN_145ad456a(void)

void FUN_145ad456a(longlong param_1)

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



// FUNCTION 145ad45c4 FUN_145ad45c4 body=90 status=ok
// SIG undefined FUN_145ad45c4(void)

void FUN_145ad45c4(longlong param_1)

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



// FUNCTION 145ad4624 FUN_145ad4624 body=1019 status=ok
// SIG undefined FUN_145ad4624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ad4624(longlong param_1)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_68;
  longlong lStack_60;
  longlong *local_58;
  longlong lStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1406c9d00(param_1 + 0x988,&local_68);
  if (lStack_60 == 0) {
    uVar7 = FUN_140927942();
    lStack_60 = FUN_14477b664(uVar7);
  }
  if (local_58 == (longlong *)0x0) {
    if (((local_68 == 0) || (lStack_60 == 0)) ||
       (plVar10 = *(longlong **)(lStack_60 + 0xb8), plVar10 == (longlong *)0x0)) goto LAB_145ad4717;
    cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10);
    if (cVar6 == '\0') goto LAB_145ad4717;
    uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
    local_58 = (longlong *)FUN_144aff482(uVar7,&local_68);
    if (local_58 == (longlong *)0x0) goto LAB_145ad4717;
  }
  plVar10 = local_58;
  lVar8 = (**(code **)(*local_58 + 8))(local_58);
  lVar9 = FUN_1406543da();
  if (((lVar9 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
       lVar9 + 0x30 || ((char)plVar10[0xef] != '\x01')))) goto LAB_145ad4717;
  lVar8 = FUN_1447210f0(param_1);
  if (lVar8 == 0) goto LAB_145ad4717;
  FUN_144a79cc8(param_1);
  bVar1 = *(byte *)(lVar8 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) goto LAB_145ad4717;
  lVar8 = FUN_148d6c040(param_1);
  if (lVar8 == 0) {
    local_90 = FUN_1458d4f12();
    if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_90);
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    lVar8 = FUN_140fae5dc(param_1,&local_90,0,&DAT_14c846480);
    if (lVar8 == 0) goto LAB_145ad4717;
    lVar9 = FUN_1458d4f12();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_145ad4717;
  }
  FUN_147a053ae(lVar8);
  local_98 = plVar10[0xeb];
  local_a8 = plVar10[0xe9];
  lStack_a0 = plVar10[0xea];
  FUN_140c9cc04(lVar8,&local_a8,1);
  local_b8 = plVar10[0xee];
  local_c8 = plVar10[0xec];
  lStack_c0 = plVar10[0xed];
  auVar11 = *(undefined1 (*) [16])(lVar8 + 0x1b0);
  dVar4 = auVar11._0_8_;
  dVar5 = auVar11._8_8_;
  dVar16 = *(double *)(lVar8 + 0x1c0);
  plVar10 = *(longlong **)(lVar8 + 0x230);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)FUN_14001cc68(0x40,0x10);
    lVar9 = DAT_14c8463d8;
    *plVar10 = DAT_14c8463d0;
    plVar10[1] = lVar9;
    lVar9 = DAT_14c8463e8;
    plVar10[2] = DAT_14c8463e0;
    plVar10[3] = lVar9;
    lVar9 = DAT_14c846500;
    plVar10[4] = DAT_14c8464f8;
    plVar10[5] = lVar9;
    plVar10[6] = DAT_14c846508;
    *(longlong **)(lVar8 + 0x230) = plVar10;
  }
  if (((((double)plVar10[4] != dVar4) || (NAN((double)plVar10[4]) || NAN(dVar4))) ||
      ((double)plVar10[5] != dVar5)) || (NAN((double)plVar10[5]) || NAN(dVar5))) {
LAB_145ad48fd:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar16;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar11 = divpd(auVar11,_DAT_1499387d0);
    auVar14 = divpd(auVar19,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar14 = roundpd(auVar14,auVar14,3);
    dVar4 = dVar4 - auVar11._0_8_ * dVar2;
    dVar5 = dVar5 - auVar11._8_8_ * dVar3;
    auVar20._0_8_ = dVar16 - auVar14._0_8_ * dVar2;
    auVar20._8_8_ = 0.0 - auVar14._8_8_ * dVar3;
    auVar18._0_8_ = dVar4 + dVar2;
    auVar18._8_8_ = dVar5 + dVar3;
    auVar17._0_8_ = dVar2 + auVar20._0_8_;
    auVar17._8_8_ = dVar3 + auVar20._8_8_;
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ = dVar4;
    auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar14 = blendvpd(auVar18,auVar11,auVar14);
    auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
    auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
    auVar11 = blendvpd(auVar17,auVar20,auVar12);
    auVar15._0_8_ = auVar14._0_8_ + -360.0;
    auVar15._8_8_ = auVar14._8_8_ + -360.0;
    auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
    auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
    auVar14 = blendvpd(auVar14,auVar15,auVar13);
    dVar16 = auVar11._0_8_;
    *(undefined1 (*) [16])(plVar10 + 4) = auVar14;
    plVar10[6] = ~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                 (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16);
    FUN_144a7484c(plVar10 + 4,&local_68);
    plVar10[2] = (longlong)local_58;
    plVar10[3] = lStack_50;
    *plVar10 = local_68;
    plVar10[1] = lStack_60;
  }
  else if (((double)plVar10[6] != dVar16) || (NAN((double)plVar10[6]) || NAN(dVar16)))
  goto LAB_145ad48fd;
  local_68 = *plVar10;
  lStack_60 = plVar10[1];
  local_58 = (longlong *)plVar10[2];
  lStack_50 = plVar10[3];
  local_88 = local_c8;
  lStack_80 = lStack_c0;
  local_78 = local_b8;
  local_d0 = 0;
  local_d8 = 0;
  FUN_144927ad4(lVar8,&local_88,&local_68,0);
LAB_145ad4717:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad4a2c FUN_145ad4a2c body=371 status=ok
// SIG undefined FUN_145ad4a2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145ad4a2c(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ad4ba0();
  *param_1 = &PTR_FUN_14abdc3a0;
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
  param_1[0x17] = 0;
  *(undefined2 *)((longlong)param_1 + 0xd2) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0x20) = 3;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar2 = FUN_14118da1c();
    cVar1 = FUN_14054d46e(uVar2,L"FixedSeed");
    if (cVar1 == '\0') {
      FUN_1402160b8(&local_20);
      _DAT_14cb1efa8 =
           (int)local_20 +
           ((int)(SUB168(SEXT816(local_20) * ZEXT816(0x8000000100000003),8) >> 0x1e) -
           (SUB164(SEXT816(local_20) * ZEXT816(0x8000000100000003),0xc) >> 0x1f)) * -0x7fffffff;
      DAT_14cb1efac = _DAT_14cb1efa8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad4ba0 FUN_145ad4ba0 body=47 status=ok
// SIG undefined FUN_145ad4ba0(void)

undefined8 * FUN_145ad4ba0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a79c4c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145ad4bd8 FUN_145ad4bd8 body=127 status=ok
// SIG undefined FUN_145ad4bd8(void)

undefined8 * FUN_145ad4bd8(undefined8 *param_1)

{
  FUN_140e3421a();
  FUN_145ad4c58(param_1 + 6);
  *param_1 = &PTR_FUN_14accdc70;
  param_1[6] = &PTR_FUN_14accdf30;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 145ad4c58 FUN_145ad4c58 body=196 status=ok
// SIG undefined FUN_145ad4c58(void)

void FUN_145ad4c58(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14acd0650;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x100;
  return;
}



// FUNCTION 145ad4d1c FUN_145ad4d1c body=40 status=ok
// SIG undefined FUN_145ad4d1c(void)

undefined8 FUN_145ad4d1c(undefined8 param_1,int param_2)

{
  FUN_145ad4d44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad4d44 FUN_145ad4d44 body=841 status=ok
// SIG undefined FUN_145ad4d44(void)

void FUN_145ad4d44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a8b5020;
  param_1[5] = &PTR_FUN_14a8b54e0;
  FUN_145ad52dc(param_1 + 0x168);
  lVar3 = param_1[0x165];
  if (lVar3 != 0) {
    FUN_147a6fbda(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_145ad5728(param_1[0x161],*(undefined4 *)(param_1 + 0x162));
  if (param_1[0x161] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15e) = 0;
  if (param_1[0x15d] != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x155);
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x151] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad508d(param_1[0x14f],*(undefined4 *)(param_1 + 0x150));
  if (param_1[0x14f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x149] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x145);
  plVar4 = (longlong *)param_1[0x144];
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
  plVar4 = (longlong *)param_1[0x142];
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
  FUN_145ad511d(param_1[0x13f],*(undefined4 *)(param_1 + 0x140));
  if (param_1[0x13f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13d] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    lVar3 = param_1[0x13b];
    if (lVar3 != 0) {
      (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
    }
    if (param_1[0x139] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  FUN_145ad50ba(param_1[0x133],*(undefined4 *)(param_1 + 0x134));
  if (param_1[0x133] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x132];
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
  FUN_145ad581e(param_1[0x12f],*(undefined4 *)(param_1 + 0x130));
  if (param_1[0x12f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12e) = 0;
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad50e8(param_1 + 0x125);
  plVar4 = (longlong *)param_1[0x120];
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
  FUN_145918e54(param_1);
  return;
}



// FUNCTION 145ad508d FUN_145ad508d body=45 status=ok
// SIG undefined FUN_145ad508d(void)

void FUN_145ad508d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145ad50ba FUN_145ad50ba body=45 status=ok
// SIG undefined FUN_145ad50ba(void)

void FUN_145ad50ba(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 145ad50e8 FUN_145ad50e8 body=53 status=ok
// SIG undefined FUN_145ad50e8(void)

void FUN_145ad50e8(longlong *param_1)

{
  FUN_145ad516a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad511d FUN_145ad511d body=77 status=ok
// SIG undefined FUN_145ad511d(void)

void FUN_145ad511d(longlong param_1,int param_2)

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



// FUNCTION 145ad516a FUN_145ad516a body=368 status=ok
// SIG undefined FUN_145ad516a(void)

void FUN_145ad516a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0xe8);
      FUN_147a670e6(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140032aa6(param_1,0);
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



// FUNCTION 145ad52dc FUN_145ad52dc body=1100 status=ok
// SIG undefined FUN_145ad52dc(void)

void FUN_145ad52dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140457ffc(&DAT_14cb10a90,param_1);
  FUN_140457ffc(&DAT_14cb10a78,param_1);
  plVar3 = *(longlong **)(param_1 + 0xa48);
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
  *(undefined4 *)(param_1 + 0xa38) = 0;
  if (*(longlong *)(param_1 + 0xa30) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x9f0);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x9e0),*(undefined4 *)(param_1 + 0x9e8));
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  if (*(longlong *)(param_1 + 0x9d0) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad59b8(param_1 + 0x990);
  *(undefined4 *)(param_1 + 0x988) = 0;
  if (*(longlong *)(param_1 + 0x980) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad59f0(param_1 + 0x940);
  FUN_145ad5a28(param_1 + 0x8a0);
  *(undefined4 *)(param_1 + 0x888) = 0;
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5980(param_1 + 0x840);
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad58de(param_1 + 0x7d8);
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5914(param_1 + 0x788);
  *(undefined4 *)(param_1 + 0x780) = 0;
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x738);
  FUN_145ad57f1(*(undefined8 *)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x730));
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5728(*(undefined8 *)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x720));
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5728(*(undefined8 *)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x710));
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5756(param_1 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5756(param_1 + 0x668);
  FUN_145ad581e(*(undefined8 *)(param_1 + 0x658),*(undefined4 *)(param_1 + 0x660));
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5b68(param_1 + 0x558);
  FUN_145ad5e7c(param_1 + 0x240);
  FUN_145ad5df2(param_1 + 0x188);
  FUN_145ad578d(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x140);
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
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_141238aee(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad594a(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad57ba(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x10);
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 145ad5728 FUN_145ad5728 body=45 status=ok
// SIG undefined FUN_145ad5728(void)

void FUN_145ad5728(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 145ad5756 FUN_145ad5756 body=55 status=ok
// SIG undefined FUN_145ad5756(void)

void FUN_145ad5756(longlong *param_1)

{
  FUN_145ad5862(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad578d FUN_145ad578d body=45 status=ok
// SIG undefined FUN_145ad578d(void)

void FUN_145ad578d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145ad57ba FUN_145ad57ba body=55 status=ok
// SIG undefined FUN_145ad57ba(void)

void FUN_145ad57ba(longlong *param_1)

{
  FUN_145ad5ae6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad57f1 FUN_145ad57f1 body=45 status=ok
// SIG undefined FUN_145ad57f1(void)

void FUN_145ad57f1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145ad581e FUN_145ad581e body=68 status=ok
// SIG undefined FUN_145ad581e(void)

void FUN_145ad581e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_145ad5b68(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145ad5862 FUN_145ad5862 body=123 status=ok
// SIG undefined FUN_145ad5862(void)

void FUN_145ad5862(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 145ad58de FUN_145ad58de body=53 status=ok
// SIG undefined FUN_145ad58de(void)

void FUN_145ad58de(longlong *param_1)

{
  FUN_145ad5cc2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5914 FUN_145ad5914 body=53 status=ok
// SIG undefined FUN_145ad5914(void)

void FUN_145ad5914(longlong *param_1)

{
  FUN_145ad5d1c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad594a FUN_145ad594a body=53 status=ok
// SIG undefined FUN_145ad594a(void)

void FUN_145ad594a(longlong *param_1)

{
  FUN_145ad6014();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5980 FUN_145ad5980 body=55 status=ok
// SIG undefined FUN_145ad5980(void)

void FUN_145ad5980(longlong *param_1)

{
  FUN_145ad5d76(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad59b8 FUN_145ad59b8 body=55 status=ok
// SIG undefined FUN_145ad59b8(void)

void FUN_145ad59b8(longlong *param_1)

{
  FUN_145ad62f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad59f0 FUN_145ad59f0 body=55 status=ok
// SIG undefined FUN_145ad59f0(void)

void FUN_145ad59f0(longlong *param_1)

{
  FUN_145ad6174(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5a28 FUN_145ad5a28 body=92 status=ok
// SIG undefined FUN_145ad5a28(void)

void FUN_145ad5a28(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145ad5a90(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5a90 FUN_145ad5a90 body=54 status=ok
// SIG undefined FUN_145ad5a90(void)

void FUN_145ad5a90(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145ad5ac6 FUN_145ad5ac6 body=31 status=ok
// SIG undefined FUN_145ad5ac6(void)

undefined8 FUN_145ad5ac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad5ae6 FUN_145ad5ae6 body=129 status=ok
// SIG undefined FUN_145ad5ae6(void)

void FUN_145ad5ae6(longlong param_1,int param_2)

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



// FUNCTION 145ad5b68 FUN_145ad5b68 body=166 status=ok
// SIG undefined FUN_145ad5b68(void)

void FUN_145ad5b68(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5c0e(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 2);
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5c0e FUN_145ad5c0e body=55 status=ok
// SIG undefined FUN_145ad5c0e(void)

void FUN_145ad5c0e(longlong *param_1)

{
  FUN_145ad5c46(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5c46 FUN_145ad5c46 body=123 status=ok
// SIG undefined FUN_145ad5c46(void)

void FUN_145ad5c46(longlong param_1,int param_2)

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



// FUNCTION 145ad5cc2 FUN_145ad5cc2 body=90 status=ok
// SIG undefined FUN_145ad5cc2(void)

void FUN_145ad5cc2(longlong param_1)

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



// FUNCTION 145ad5d1c FUN_145ad5d1c body=90 status=ok
// SIG undefined FUN_145ad5d1c(void)

void FUN_145ad5d1c(longlong param_1)

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



// FUNCTION 145ad5d76 FUN_145ad5d76 body=123 status=ok
// SIG undefined FUN_145ad5d76(void)

void FUN_145ad5d76(longlong param_1,int param_2)

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



// FUNCTION 145ad5df2 FUN_145ad5df2 body=137 status=ok
// SIG undefined FUN_145ad5df2(void)

void FUN_145ad5df2(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad578d(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5e7c FUN_145ad5e7c body=228 status=ok
// SIG undefined FUN_145ad5e7c(void)

void FUN_145ad5e7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0x2c8);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0));
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5b68(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5f60(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1459ab47e(param_1 + 8);
  return;
}



// FUNCTION 145ad5f60 FUN_145ad5f60 body=55 status=ok
// SIG undefined FUN_145ad5f60(void)

void FUN_145ad5f60(longlong *param_1)

{
  FUN_145ad5f98(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad5f98 FUN_145ad5f98 body=123 status=ok
// SIG undefined FUN_145ad5f98(void)

void FUN_145ad5f98(longlong param_1,int param_2)

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



// FUNCTION 145ad6014 FUN_145ad6014 body=350 status=ok
// SIG undefined FUN_145ad6014(void)

void FUN_145ad6014(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145ad6174 FUN_145ad6174 body=381 status=ok
// SIG undefined FUN_145ad6174(void)

void FUN_145ad6174(longlong *param_1,int param_2)

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
      FUN_147a73c0a(*local_70 + (longlong)iStack_54 * 0x20 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad62f2 FUN_145ad62f2 body=420 status=ok
// SIG undefined FUN_145ad62f2(void)

void FUN_145ad62f2(longlong *param_1,int param_2)

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
      FUN_145c4086e(lVar2 + lVar5 + 8);
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



// FUNCTION 145ad6498 FUN_145ad6498 body=244 status=ok
// SIG undefined FUN_145ad6498(void)

undefined8 FUN_145ad6498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b538930;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b5388c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148af4fce;
  FUN_145ad658e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad658e FUN_145ad658e body=216 status=ok
// SIG undefined FUN_145ad658e(void)

undefined8 * FUN_145ad658e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ad6674 FUN_145ad6674 body=24 status=ok
// SIG undefined FUN_145ad6674(void)

bool FUN_145ad6674(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ad668c FUN_145ad668c body=244 status=ok
// SIG undefined FUN_145ad668c(void)

undefined8 FUN_145ad668c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b9dc240;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9dc1d0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145a106c4;
  FUN_145ad6782(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad6782 FUN_145ad6782 body=216 status=ok
// SIG undefined FUN_145ad6782(void)

undefined8 * FUN_145ad6782(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ad6868 FUN_145ad6868 body=24 status=ok
// SIG undefined FUN_145ad6868(void)

bool FUN_145ad6868(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ad6880 FUN_145ad6880 body=209 status=ok
// SIG undefined FUN_145ad6880(void)

undefined4 FUN_145ad6880(longlong param_1,longlong param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_145ad6986();
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1c8) == 0)) {
LAB_145ad6947:
    uVar2 = 0;
  }
  else {
    if (param_4 == '\0') {
      cVar1 = FUN_145ad6952(param_1);
      if (cVar1 == '\0') goto LAB_145ad6947;
    }
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar3 = param_1;
      }
      local_38 = *(undefined8 *)(lVar3 + 0x18);
      if (param_3 == '\0') {
        FUN_1400bc8c2();
      }
      else {
        FUN_1400bc96c(param_2 + 0x7c78,&local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad6952 FUN_145ad6952 body=51 status=ok
// SIG undefined FUN_145ad6952(void)

bool FUN_145ad6952(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc90) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x918);
    bVar2 = true;
    if ((lVar1 != DAT_14cb241e8) && (lVar1 != DAT_14cb24228)) {
      bVar2 = lVar1 == DAT_14cb24218;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 145ad6986 FUN_145ad6986 body=366 status=ok
// SIG undefined FUN_145ad6986(void)

undefined8 FUN_145ad6986(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x1c8), plVar1 != (longlong *)0x0)) &&
     ((param_4 != '\0' ||
      ((*(char *)(param_1 + 0xc90) == '\x01' &&
       (((lVar3 = *(longlong *)(param_1 + 0x918), lVar3 == DAT_14cb241e8 || (lVar3 == DAT_14cb24228)
         ) || (lVar3 == DAT_14cb24218)))))))) {
    lVar3 = FUN_14070cc62();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (lVar3 = *(longlong *)(param_2 + 0x858), lVar3 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar4 = param_1;
      }
      local_38 = *(undefined8 *)(lVar4 + 0x18);
      if (param_3 == '\0') {
        FUN_1400bc8c2();
        FUN_1409df526(lVar3,&local_38);
      }
      else {
        FUN_1400bc96c(lVar3 + 0x11f0,&local_38);
        FUN_140257a06(lVar3,&local_38,0);
      }
    }
    cVar2 = FUN_1414a8c54(plVar1,param_1);
    if (param_3 == '\0') {
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x4a0))(plVar1,&DAT_14cadad9c);
      }
    }
    else if (cVar2 == '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x490))(plVar1,param_1,&DAT_14cadad90,0);
      goto LAB_145ad6a68;
    }
  }
  uVar5 = 0;
LAB_145ad6a68:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 145ad6af6 FUN_145ad6af6 body=269 status=ok
// SIG undefined FUN_145ad6af6(void)

void FUN_145ad6af6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x290);
  if ((cVar1 == '\0') || (*(longlong *)(param_1 + 0x350) == 0)) goto switchD_145ad6b68_caseD_3;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x350) + 0x4d0);
  if (cVar1 == '\x03') {
    lVar2 = FUN_145c9f698(param_1);
    if (lVar2 != 0) {
      FUN_145ad6c04(lVar2,*(undefined4 *)(param_1 + 0x300));
    }
    goto switchD_145ad6b68_caseD_3;
  }
  switch(cVar1) {
  case '\0':
    lVar2 = FUN_145c9f698(param_1);
    if (lVar2 != 0) {
      FUN_148d0dde4(lVar2,*(undefined4 *)(param_1 + 0x300));
    }
    break;
  case '\x01':
    if (*(longlong *)(param_1 + 0x2e8) == 0) break;
    lVar2 = FUN_14479d2ce(param_1 + 0x290);
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      lVar2 = lVar2 + 0x4ad8;
      goto LAB_145ad6bc1;
    }
    goto LAB_145ad6bc9;
  case '\x04':
    cVar1 = FUN_141105466(param_1 + 800);
    if (cVar1 != '\0') {
      FUN_140fbcb7d(param_1 + 800);
    }
  case '\x02':
    lVar2 = FUN_145c9f698(param_1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) {
      lVar2 = lVar2 + 0xf8;
LAB_145ad6bc1:
      FUN_14480f766(lVar2);
LAB_145ad6bc9:
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
  }
switchD_145ad6b68_caseD_3:
  FUN_14147079a(param_1);
  return;
}



// FUNCTION 145ad6c04 FUN_145ad6c04 body=113 status=ok
// SIG undefined FUN_145ad6c04(void)

void FUN_145ad6c04(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5a8);
  if ((longlong)iVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(byte *)(*(longlong *)(param_1 + 0x5a0) + uVar3) == param_2) {
        iVar2 = (int)(uVar3 >> 4) * -0x33333333;
        if (iVar2 < 0) {
          return;
        }
        if (iVar1 <= iVar2) {
          return;
        }
        FUN_145ad6cb4(param_1 + 0x5a0);
        FUN_145ad6c76(param_1 + 0x5a0);
        return;
      }
      uVar3 = uVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != uVar3);
  }
  return;
}



// FUNCTION 145ad6c76 FUN_145ad6c76 body=62 status=ok
// SIG undefined FUN_145ad6c76(void)

void FUN_145ad6c76(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145ad6d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 145ad6cb4 FUN_145ad6cb4 body=108 status=ok
// SIG undefined FUN_145ad6cb4(void)

void FUN_145ad6cb4(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x50);
  if (*(longlong *)(*param_1 + 0x10 + (ulonglong)param_2 * 0x50) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x30);
    if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x20);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)(int)(~param_2 + iVar1) * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 145ad6d20 FUN_145ad6d20 body=111 status=ok
// SIG undefined FUN_145ad6d20(void)

ulonglong FUN_145ad6d20(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x50) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 145ad6d90 FUN_145ad6d90 body=40 status=ok
// SIG undefined FUN_145ad6d90(void)

undefined8 FUN_145ad6d90(undefined8 param_1,int param_2)

{
  FUN_145ad6db8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad6db8 FUN_145ad6db8 body=298 status=ok
// SIG undefined FUN_145ad6db8(void)

void FUN_145ad6db8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba9e790;
  param_1[5] = &PTR_FUN_14ba9f210;
  param_1[6] = &PTR_LAB_14ba9f250;
  param_1[0x55] = &PTR_FUN_14ba9f2a0;
  param_1[0x56] = &PTR_FUN_14ba9f320;
  param_1[0x57] = &PTR_FUN_14ba9f330;
  param_1[0xca] = &PTR_FUN_14ba9f360;
  param_1[0xcb] = &PTR_FUN_14ba9f3c0;
  FUN_145ad6ee2(param_1[0x109],*(undefined4 *)(param_1 + 0x10a));
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x108];
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
  if (param_1[0x104] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 145ad6ee2 FUN_145ad6ee2 body=60 status=ok
// SIG undefined FUN_145ad6ee2(void)

void FUN_145ad6ee2(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 145ad6f28 FUN_145ad6f28 body=74 status=ok
// SIG undefined FUN_145ad6f28(void)

void FUN_145ad6f28(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14121ab67(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ad6f72 FUN_145ad6f72 body=158 status=ok
// SIG undefined FUN_145ad6f72(void)

bool FUN_145ad6f72(longlong param_1,undefined8 param_2)

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



// FUNCTION 145ad701a FUN_145ad701a body=26 status=ok
// SIG undefined FUN_145ad701a(void)

undefined8 FUN_145ad701a(longlong param_1,undefined8 param_2)

{
  FUN_145ad7034(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145ad7034 FUN_145ad7034 body=468 status=ok
// SIG undefined FUN_145ad7034(void)

undefined8 * FUN_145ad7034(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb23a58 != (longlong *)0x0 && DAT_14cb23a60 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb23a58 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb23a58;
    if (DAT_14cb23a60 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_30);
    goto LAB_145ad713b;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0xe0);
  memset(puVar3 + 1,0,0xd8);
  *puVar3 = &PTR_FUN_14ac88dc0;
  FUN_1409e1656(puVar3 + 4);
  *puVar3 = &PTR_FUN_14ac84a90;
  puVar3[4] = &PTR_LAB_14ac84ab0;
  FUN_145ad720a(puVar3 + 6);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac88de0;
  plVar4[2] = (longlong)puVar3;
  local_28 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
    goto LAB_145ad713b;
  }
  local_30 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_145ad713b;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_145ad71ad:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145ad7131;
    }
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_145ad71ad;
      puVar3[3] = plVar4;
    }
LAB_145ad7131:
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
LAB_145ad713b:
  *param_2 = local_30;
  param_2[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ad720a FUN_145ad720a body=103 status=ok
// SIG undefined FUN_145ad720a(void)

undefined8 * FUN_145ad720a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_145ad7272(param_1 + 0xc);
  FUN_145ad72cc(param_1 + 0x10);
  return param_1;
}



// FUNCTION 145ad7272 FUN_145ad7272 body=63 status=ok
// SIG undefined FUN_145ad7272(void)

int FUN_145ad7272(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ad7338(param_1,iVar1);
  }
  FUN_145ad72b1((longlong)iVar1 * 8 + *param_1,1);
  return iVar1;
}



// FUNCTION 145ad72b1 FUN_145ad72b1 body=26 status=ok
// SIG undefined FUN_145ad72b1(void)

void FUN_145ad72b1(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145ad72cc FUN_145ad72cc body=63 status=ok
// SIG undefined FUN_145ad72cc(void)

int FUN_145ad72cc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ad73bc(param_1,iVar1);
  }
  FUN_145ad730b((longlong)iVar1 * 0x410 + *param_1,1);
  return iVar1;
}



// FUNCTION 145ad730b FUN_145ad730b body=45 status=ok
// SIG undefined FUN_145ad730b(void)

void FUN_145ad730b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x1000000000;
      param_1 = param_1 + 0x410;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ad7338 FUN_145ad7338 body=132 status=ok
// SIG undefined FUN_145ad7338(void)

void FUN_145ad7338(longlong param_1,int param_2)

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



// FUNCTION 145ad73bc FUN_145ad73bc body=136 status=ok
// SIG undefined FUN_145ad73bc(void)

void FUN_145ad73bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x410,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x410)) {
      uVar5 = uVar4 / 0x410 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_140043092(param_1,param_2,uVar5,0x410);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ad7444 FUN_145ad7444 body=40 status=ok
// SIG undefined FUN_145ad7444(void)

undefined8 FUN_145ad7444(undefined8 param_1,int param_2)

{
  FUN_145ad746c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad746c FUN_145ad746c body=109 status=ok
// SIG undefined FUN_145ad746c(void)

void FUN_145ad746c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b599f90;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad74da(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145ad7510(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ad74da FUN_145ad74da body=53 status=ok
// SIG undefined FUN_145ad74da(void)

void FUN_145ad74da(longlong *param_1)

{
  FUN_145ad7546();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad7510 FUN_145ad7510 body=53 status=ok
// SIG undefined FUN_145ad7510(void)

void FUN_145ad7510(longlong *param_1)

{
  FUN_145ad76ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad7546 FUN_145ad7546 body=370 status=ok
// SIG undefined FUN_145ad7546(void)

void FUN_145ad7546(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_148b5cb63(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad76ba FUN_145ad76ba body=370 status=ok
// SIG undefined FUN_145ad76ba(void)

void FUN_145ad76ba(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_148b5cbac(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad7838 FUN_145ad7838 body=122 status=ok
// SIG undefined FUN_145ad7838(void)

undefined8 * FUN_145ad7838(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  *param_1 = &PTR_FUN_14a586460;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145ad78be FUN_145ad78be body=122 status=ok
// SIG undefined FUN_145ad78be(void)

undefined8 * FUN_145ad78be(undefined8 *param_1)

{
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b134ee0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb786d8);
  FUN_1447715ec(param_1 + 10,&DAT_14cb785a0);
  param_1[0x10] = DAT_14cb78598;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41900000;
  *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 145ad7938 FUN_145ad7938 body=154 status=ok
// SIG undefined FUN_145ad7938(void)

bool FUN_145ad7938(longlong param_1,undefined8 param_2)

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



// FUNCTION 145ad79d4 FUN_145ad79d4 body=111 status=ok
// SIG undefined FUN_145ad79d4(void)

void FUN_145ad79d4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1406f625c(param_2);
  if ((plVar1 == param_1) && ((char)param_1[10] == '\0')) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    FUN_14020fad6(param_1 + 0x1c,&DAT_149dfb77a);
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145ad7a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x350))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145ad7a44 FUN_145ad7a44 body=40 status=ok
// SIG undefined FUN_145ad7a44(void)

undefined8 FUN_145ad7a44(undefined8 param_1,int param_2)

{
  FUN_145ad7a6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad7a6c FUN_145ad7a6c body=93 status=ok
// SIG undefined FUN_145ad7a6c(void)

void FUN_145ad7a6c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7ae990;
  plVar3 = (longlong *)param_1[0x94];
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
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d89b4(param_1);
  return;
}



// FUNCTION 145ad7ac9 FUN_145ad7ac9 body=68 status=ok
// SIG undefined FUN_145ad7ac9(void)

void FUN_145ad7ac9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ad7b0e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7e9520;
  puVar1[5] = &PTR_FUN_14b7e97d0;
  puVar1[10] = &PTR_FUN_14b7e9800;
  puVar1[0xb] = &PTR_FUN_14b7e9830;
  return;
}



// FUNCTION 145ad7b0e FUN_145ad7b0e body=65 status=ok
// SIG undefined FUN_145ad7b0e(void)

undefined8 * FUN_145ad7b0e(undefined8 *param_1)

{
  FUN_14086a0da();
  *param_1 = &PTR_FUN_14b701d90;
  param_1[5] = &PTR_FUN_14b702040;
  param_1[10] = &PTR_FUN_14b702070;
  param_1[0xb] = &PTR_FUN_14b7020a0;
  return param_1;
}



// FUNCTION 145ad7b58 FUN_145ad7b58 body=125 status=ok
// SIG undefined FUN_145ad7b58(void)

undefined8 * FUN_145ad7b58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b93c3f0;
  FUN_1447715ec(param_1 + 5,&DAT_14cbe62c8);
  FUN_1447715ec(param_1 + 10,&DAT_14cbe62f0);
  param_1[0x10] = DAT_14cbe62c0;
  *(undefined2 *)((longlong)param_1 + 0xe9) = 0x101;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41b00000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 145ad7be6 FUN_145ad7be6 body=44 status=ok
// SIG undefined FUN_145ad7be6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ad7be6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc646c = _DAT_14cbc646c + -1;
  *param_1 = DAT_14cbc6460;
  DAT_14cbc6460 = param_1;
  return;
}



// FUNCTION 145ad7c12 FUN_145ad7c12 body=73 status=ok
// SIG undefined FUN_145ad7c12(void)

undefined8 * FUN_145ad7c12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b964f20;
  FUN_144a2da94(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad7c5c FUN_145ad7c5c body=66 status=ok
// SIG undefined FUN_145ad7c5c(void)

void FUN_145ad7c5c(void)

{
  FUN_145ad7c9e(&DAT_14cbfea60);
  FUN_145ad7c9e(&DAT_14cbfea68);
  if (DAT_14cbfeac8 == '\x01') {
    if (DAT_14cbfeac4 != 0xffffffff) {
      TlsFree(DAT_14cbfeac4);
    }
    DAT_14cbfeac8 = '\0';
  }
  return;
}



// FUNCTION 145ad7c9e FUN_145ad7c9e body=66 status=ok
// SIG undefined FUN_145ad7c9e(void)

void FUN_145ad7c9e(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_1408ff3be(&DAT_14cbfe7e0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad7ce2 FUN_145ad7ce2 body=299 status=ok
// SIG undefined FUN_145ad7ce2(void)

undefined4 * FUN_145ad7ce2(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ad7e84(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 0x16) = 0;
  *(undefined8 *)(local_40 + 0x18) = 0x400000000;
  local_40[0x1a] = 0xffffffff;
  cVar5 = FUN_145ad7e0e(param_1,param_3,local_40,local_48);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0x1b] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[0x1a] =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145ad7f70(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad7e0e FUN_145ad7e0e body=117 status=ok
// SIG undefined FUN_145ad7e0e(void)

undefined8 FUN_145ad7e0e(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_140e0695e(), iVar2 != -1)) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x58 + (longlong)iVar2 * 0x70) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x70),param_3,0x68);
    FUN_1457b2ee8(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 145ad7e84 FUN_145ad7e84 body=236 status=ok
// SIG undefined FUN_145ad7e84(void)

int * FUN_145ad7e84(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 145ad7f70 FUN_145ad7f70 body=460 status=ok
// SIG undefined FUN_145ad7f70(void)

void FUN_145ad7f70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        lVar10 = (longlong)iVar4 * 0x70;
        uVar5 = FUN_1447addd0(lVar2 + lVar10,0x10);
        uVar7 = (longlong)(int)(uVar5 ^ *(uint *)(lVar2 + 0x10 + lVar10)) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x6c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x68 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad8144 FUN_145ad8144 body=227 status=ok
// SIG undefined FUN_145ad8144(void)

longlong FUN_145ad8144(void)

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
  if (DAT_14cacc9d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4f2;
    local_38 = &LAB_14792ce89;
    local_40 = &LAB_145d57b4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/Engine",L"AnimStreamable",&DAT_14cacc9d0,&DAT_14792ce88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacc9d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad822e FUN_145ad822e body=227 status=ok
// SIG undefined FUN_145ad822e(void)

longlong FUN_145ad822e(void)

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
  if (DAT_14cbc1020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f3c2c;
    local_38 = &LAB_148cc2e37;
    local_40 = &LAB_145837e5e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x378;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_FireBeam",&DAT_14cbc1020,&DAT_148cc2e36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc1020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad8312 FUN_145ad8312 body=194 status=ok
// SIG undefined FUN_145ad8312(void)

void FUN_145ad8312(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ad83d6();
  lVar1 = param_1[0x24];
  if (lVar1 != 0) {
    FUN_144a5dc74(&local_38);
    FUN_140ac6c96(&DAT_14cbcc9d0,&local_38);
    FUN_148e810e8(lVar1,&local_38);
    plVar2 = (longlong *)CONCAT62(uStack_36,CONCAT11(uStack_37,local_38));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (*(longlong **)(param_1[0x24] + 0x288) != (longlong *)0x0) {
      local_38 = DAT_14c96b238;
      uStack_37 = 1;
      local_30 = 0;
      uStack_28 = 0;
      (**(code **)(**(longlong **)(param_1[0x24] + 0x288) + 0x1c0))();
    }
  }
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad83d6 FUN_145ad83d6 body=18 status=ok
// SIG undefined FUN_145ad83d6(void)

void FUN_145ad83d6(longlong *param_1)

{
  LOCK();
  *(undefined4 *)(param_1 + 7) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000145ad83e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))();
  return;
}



// FUNCTION 145ad83fc FUN_145ad83fc body=26 status=ok
// SIG undefined FUN_145ad83fc(void)

void FUN_145ad83fc(undefined8 param_1)

{
  FUN_1410c2f26();
  FUN_145ad8416(param_1);
  return;
}



// FUNCTION 145ad8416 FUN_145ad8416 body=306 status=ok
// SIG undefined FUN_145ad8416(void)

void FUN_145ad8416(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x278) == 0) {
      local_38 = &LAB_148a01034;
      local_30 = 0;
      FUN_1410c33c8(local_48,param_1);
      FUN_1446ddc76(&local_50,"FGbxUIEvent_CSP_WidgetTrigger",1);
      FUN_140391af6(lVar1,&local_38,local_50,local_48);
      *(undefined1 **)(param_1 + 0x278) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x270) == 0) {
      local_38 = &LAB_148a01048;
      local_30 = 0;
      FUN_1410c33c8(local_48,param_1);
      FUN_1446ddc76(&local_58,"FGbxUIEvent_CSP_SetWidgetActive",1);
      FUN_140391af6(lVar1,&local_38,local_58,local_48);
      *(undefined1 **)(param_1 + 0x270) = local_38;
      FUN_1449db362(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad8549 FUN_145ad8549 body=474 status=ok
// SIG undefined FUN_145ad8549(void)

void FUN_145ad8549(void)

{
  undefined1 auStack_1a8 [34];
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  undefined1 **local_180;
  ulonglong *local_178;
  undefined1 local_170 [24];
  longlong local_158;
  undefined1 local_148 [24];
  longlong local_130;
  undefined1 local_120 [24];
  longlong local_108;
  undefined1 local_f8 [24];
  longlong local_e0;
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined1 local_a8 [24];
  longlong local_90;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_181 = 0;
  FUN_144a884d2(local_a8,"AssaultRifleAmmoTypeText",0);
  local_182 = 1;
  local_80 = &local_181;
  local_78 = local_a8;
  FUN_144a884d2(local_d0,"PistolAmmoTypeText",0);
  local_183 = 2;
  local_70 = &local_182;
  local_68 = local_d0;
  FUN_144a884d2(local_f8,"ShotgunAmmoTypeText",0);
  local_184 = 3;
  local_60 = &local_183;
  local_58 = local_f8;
  FUN_144a884d2(local_120,"SMGAmmoTypeText",0);
  local_185 = 4;
  local_50 = &local_184;
  local_48 = local_120;
  FUN_144a884d2(local_148,"SniperAmmoTypeText",0);
  local_186 = 5;
  local_40 = &local_185;
  local_38 = local_148;
  FUN_144a884d2(local_170,"RepairKitAmmoTypeText",0);
  local_178 = &local_20;
  local_180 = &local_80;
  local_30 = &local_186;
  local_28 = local_170;
  FUN_145ad8724(&DAT_14cbb2758);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1440619b2);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad8724 FUN_145ad8724 body=261 status=ok
// SIG undefined FUN_145ad8724(void)

undefined8 * FUN_145ad8724(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_145ad8caa(param_1,uVar4 & 0xffffffff);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_145ad8b00(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_145ad882a(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad882a FUN_145ad882a body=294 status=ok
// SIG undefined FUN_145ad882a(void)

undefined4 *
FUN_145ad882a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ad8a1e(param_1,local_50);
  uVar2 = param_3[1];
  *local_48 = *(byte *)*param_3;
  FUN_1447a97f4(local_48 + 8,uVar2);
  local_48[0x30] = 0xff;
  local_48[0x31] = 0xff;
  local_48[0x32] = 0xff;
  local_48[0x33] = 0xff;
  local_54 = local_50[0];
  bVar1 = *local_48;
  local_68 = param_4;
  cVar3 = FUN_145ad8952(param_1,bVar1,local_48);
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_48 + 0x34) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x30) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145ad8b00(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad8952 FUN_145ad8952 body=203 status=ok
// SIG undefined FUN_145ad8952(void)

void FUN_145ad8952(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(char *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(puVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x10);
          uVar7 = *(undefined4 *)(param_3 + 0x14);
          uVar8 = *(undefined4 *)(param_3 + 0x18);
          uVar9 = *(undefined4 *)(param_3 + 0x1c);
          uVar10 = *(undefined4 *)(param_3 + 0x24);
          uVar11 = *(undefined4 *)(param_3 + 0x28);
          uVar12 = *(undefined4 *)(param_3 + 0x2c);
          puVar1[8] = *(undefined4 *)(param_3 + 0x20);
          puVar1[9] = uVar10;
          puVar1[10] = uVar11;
          puVar1[0xb] = uVar12;
          puVar1[4] = uVar6;
          puVar1[5] = uVar7;
          puVar1[6] = uVar8;
          puVar1[7] = uVar9;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148c5a46e(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          break;
        }
        iVar15 = puVar1[0xc];
        uVar13 = 0;
      } while (iVar15 != -1);
      goto LAB_145ad89a2;
    }
  }
  uVar13 = 0;
LAB_145ad89a2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 145ad8a1e FUN_145ad8a1e body=226 status=ok
// SIG undefined FUN_145ad8a1e(void)

int * FUN_145ad8a1e(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 145ad8b00 FUN_145ad8b00 body=425 status=ok
// SIG undefined FUN_145ad8b00(void)

void FUN_145ad8b00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x34 + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x30 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 145ad8caa FUN_145ad8caa body=439 status=ok
// SIG undefined FUN_145ad8caa(void)

void FUN_145ad8caa(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x38 + lVar2 + -0x34);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 145ad8e62 FUN_145ad8e62 body=119 status=ok
// SIG undefined FUN_145ad8e62(void)

void FUN_145ad8e62(longlong param_1,undefined8 param_2)

{
  FUN_141245f18();
  FUN_1412465d2(param_1 + 0x48,param_2);
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    FUN_145ad9152(param_1 + 0xd0);
    FUN_145ad901c(param_1 + 0xd0);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    FUN_148cebb98(param_1 + 0x120);
    FUN_148cebcdc(param_1 + 0x120);
  }
  FUN_145ad8eda(param_1);
  return;
}



// FUNCTION 145ad8eda FUN_145ad8eda body=321 status=ok
// SIG undefined FUN_145ad8eda(void)

void FUN_145ad8eda(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  code *local_40;
  longlong *local_38;
  undefined2 *local_30;
  code **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    FUN_145ad9298(param_1 + 0x80);
    FUN_1414a8cc8(param_1 + 0x80);
  }
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    local_40 = *(code **)(lVar1 + 0x18);
    FUN_1400021e4(&local_40,&local_30);
    uStack_58 = 0;
    uStack_54 = 0;
    puVar3 = local_30;
    if ((int)local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1405f0d29(&local_5c,puVar3,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar1 = DAT_14cb84f20;
    if ((local_5c != 0) && (DAT_14cb84f20 != 0)) {
      local_38 = &local_68;
      local_78 = CONCAT44(uStack_58,local_5c);
      local_70 = uStack_54;
      local_40 = FUN_1440cdeb0;
      local_30 = (undefined2 *)&LAB_1440cdea2;
      local_68 = param_1;
      local_28 = &local_40;
      uVar2 = FUN_1402a67be();
      local_50 = local_78;
      local_48 = local_70;
      FUN_140e9367e(lVar1,&local_50,uVar2,&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ad901c FUN_145ad901c body=309 status=ok
// SIG undefined FUN_145ad901c(void)

void FUN_145ad901c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_1414a8c77(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad9152 FUN_145ad9152 body=325 status=ok
// SIG undefined FUN_145ad9152(void)

void FUN_145ad9152(longlong *param_1)

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



// FUNCTION 145ad9298 FUN_145ad9298 body=325 status=ok
// SIG undefined FUN_145ad9298(void)

void FUN_145ad9298(longlong *param_1)

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



// FUNCTION 145ad93de FUN_145ad93de body=40 status=ok
// SIG undefined FUN_145ad93de(void)

undefined8 FUN_145ad93de(undefined8 param_1,int param_2)

{
  FUN_145ad9406();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad9406 FUN_145ad9406 body=160 status=ok
// SIG undefined FUN_145ad9406(void)

void FUN_145ad9406(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a58b7e0;
  param_1[0x19] = &PTR_FUN_14a58bb90;
  param_1[0x1a] = &PTR_FUN_14a58bbd0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
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
  plVar3 = (longlong *)param_1[0x2d];
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
  FUN_140216160(param_1);
  return;
}



// FUNCTION 145ad94a6 FUN_145ad94a6 body=331 status=ok
// SIG undefined FUN_145ad94a6(void)

undefined4 * FUN_145ad94a6(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ad96e4(param_1,local_48);
  FUN_145ad95f2(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_145ad9656(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14626ef1e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad95f2 FUN_145ad95f2 body=100 status=ok
// SIG undefined FUN_145ad95f2(void)

undefined8 * FUN_145ad95f2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 145ad9656 FUN_145ad9656 body=142 status=ok
// SIG undefined FUN_145ad9656(void)

void FUN_145ad9656(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_145ad97ca();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1468434c2(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_145ad968a;
    }
  }
  uVar6 = 0;
LAB_145ad968a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 145ad96e4 FUN_145ad96e4 body=229 status=ok
// SIG undefined FUN_145ad96e4(void)

int * FUN_145ad96e4(longlong *param_1,int *param_2)

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



// FUNCTION 145ad97ca FUN_145ad97ca body=198 status=ok
// SIG undefined FUN_145ad97ca(void)

int FUN_145ad97ca(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_145ad9814:
      lVar10 = (longlong)iVar1 * 0x20;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_145ad986c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_145ad986c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_145ad9872;
    }
  }
  return -1;
LAB_145ad986c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_145ad9872:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_145ad9814;
}



// FUNCTION 145ad9890 FUN_145ad9890 body=163 status=ok
// SIG undefined FUN_145ad9890(void)

bool FUN_145ad9890(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 145ad9934 FUN_145ad9934 body=103 status=ok
// SIG undefined FUN_145ad9934(void)

void FUN_145ad9934(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(int *)(param_1 + 0x50) = param_2;
  if (param_2 != 5) {
    return;
  }
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
      goto LAB_145ad9989;
    }
  }
  uVar3 = 0;
LAB_145ad9989:
  FUN_145ac9048(param_1,uVar3);
  return;
}



// FUNCTION 145ad999c FUN_145ad999c body=40 status=ok
// SIG undefined FUN_145ad999c(void)

undefined8 FUN_145ad999c(undefined8 param_1,int param_2)

{
  FUN_145ad99c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad99c4 FUN_145ad99c4 body=182 status=ok
// SIG undefined FUN_145ad99c4(void)

void FUN_145ad99c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcc0660;
  FUN_145ad9a7a(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 145ad9a7a FUN_145ad9a7a body=45 status=ok
// SIG undefined FUN_145ad9a7a(void)

void FUN_145ad9a7a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145ad9aa8 FUN_145ad9aa8 body=40 status=ok
// SIG undefined FUN_145ad9aa8(void)

undefined8 FUN_145ad9aa8(undefined8 param_1,int param_2)

{
  FUN_145ad9ad0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ad9ad0 FUN_145ad9ad0 body=93 status=ok
// SIG undefined FUN_145ad9ad0(void)

void FUN_145ad9ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be7ed40;
  FUN_145ad9b2e(param_1 + 0x1a);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  FUN_144760f98(param_1 + 0xc);
  FUN_144760f98(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ad9b2e FUN_145ad9b2e body=278 status=ok
// SIG undefined FUN_145ad9b2e(void)

void FUN_145ad9b2e(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = param_1[10].LockSemaphore;
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
  while (*(undefined8 **)&param_1[10].LockCount != (undefined8 *)0x0) {
    uVar4 = **(undefined8 **)&param_1[10].LockCount;
    param_1[10].LockCount = (int)uVar4;
    param_1[10].RecursionCount = (int)((ulonglong)uVar4 >> 0x20);
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[8].SpinCount);
  while (param_1[8].LockSemaphore != (undefined8 *)0x0) {
    param_1[8].LockSemaphore = *(HANDLE *)param_1[8].LockSemaphore;
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[7].LockCount);
  if (param_1[6].SpinCount != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[5].SpinCount);
  if (param_1[5].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1 + 4);
  if (param_1[3].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  FUN_145ad9c44(&param_1[1].LockCount);
                    /* WARNING: Could not recover jumptable at 0x000145ad9bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145ad9c44 FUN_145ad9c44 body=53 status=ok
// SIG undefined FUN_145ad9c44(void)

void FUN_145ad9c44(longlong *param_1)

{
  FUN_145ad9c7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ad9c7a FUN_145ad9c7a body=336 status=ok
// SIG undefined FUN_145ad9c7a(void)

void FUN_145ad9c7a(longlong *param_1)

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
      FUN_1497df99e((longlong)iStack_4c * 0x180 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14596333e(param_1,0);
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



// FUNCTION 145ad9dcc FUN_145ad9dcc body=44 status=ok
// SIG undefined FUN_145ad9dcc(void)

void FUN_145ad9dcc(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x398) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x398) + 0x6c8))();
  }
  FUN_145ad9df8(param_1,0);
  return;
}



// FUNCTION 145ad9df8 FUN_145ad9df8 body=123 status=ok
// SIG undefined FUN_145ad9df8(void)

void FUN_145ad9df8(longlong param_1,longlong param_2)

{
  if (DAT_14cad3b30 == '\x01') {
    if (*(longlong *)(param_1 + 0x398) != param_2) {
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x398) = param_2;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xb);
      return;
    }
  }
  else {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x398) = param_2;
  }
  return;
}



// FUNCTION 145ad9e74 FUN_145ad9e74 body=231 status=ok
// SIG undefined FUN_145ad9e74(void)

longlong * FUN_145ad9e74(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,param_2[1],param_2[2]);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_28 = param_2[1];
  }
  else {
    local_28 = 0;
  }
  FUN_1408383eb(param_1,&local_28);
  if (local_28 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) && (param_2[1] = 0, param_2[2] != 0)) {
      FUN_140d2d4a8(param_2,0);
    }
  }
  else if ((((longlong)local_28 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1000000 < local_28 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    param_2[1] = local_28;
    uVar1 = local_28;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145ad9f5c(param_2,local_28,param_2[2]);
      uVar1 = param_2[1];
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ad9f5c FUN_145ad9f5c body=102 status=ok
// SIG undefined FUN_145ad9f5c(void)

void FUN_145ad9f5c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_144a3809e(param_2,1);
    lVar2 = 0x7fffffffffffffff;
    if (param_2 <= lVar1) {
      lVar2 = lVar1;
    }
  }
  if (param_3 < lVar2) {
    FUN_140d2d5e4(param_1,0,lVar2,1,1);
    param_3 = lVar2;
  }
  *(longlong *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 145ad9fc2 FUN_145ad9fc2 body=148 status=ok
// SIG undefined FUN_145ad9fc2(void)

bool FUN_145ad9fc2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada058 FUN_145ada058 body=265 status=ok
// SIG undefined FUN_145ada058(void)

void FUN_145ada058(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_140495e96(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_145ada115;
  lVar6 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_145ada115;
  uVar3 = FUN_1413d8b3e(lVar5);
  *(undefined1 *)(param_1 + 0x200) = uVar3;
  FUN_1449027d0(param_1,&local_38);
  lVar6 = *(longlong *)(local_38 + 0x240);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
  *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
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
  iVar4 = FUN_145ada162(lVar5);
  if (iVar4 == *(int *)(lVar6 + 0x40)) {
    if (*(int *)(lVar6 + 0x44) == 0) {
      iVar7 = 1;
      goto LAB_145ada13b;
    }
  }
  else {
    iVar7 = *(int *)(lVar6 + 0x44) + 1;
LAB_145ada13b:
    *(int *)(lVar6 + 0x40) = iVar4;
    *(int *)(lVar6 + 0x44) = iVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
LAB_145ada115:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada162 FUN_145ada162 body=7 status=ok
// SIG undefined FUN_145ada162(void)

undefined4 FUN_145ada162(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3ec);
}



// FUNCTION 145ada16a FUN_145ada16a body=95 status=ok
// SIG undefined FUN_145ada16a(void)

void FUN_145ada16a(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 != 0) {
    local_18 = *(undefined8 *)(lVar4 + 0x18);
    lVar4 = FUN_1413e2d1a();
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x74);
      uVar2 = *(undefined4 *)(lVar4 + 0x78);
      uVar3 = *(undefined4 *)(lVar4 + 0x7c);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar4 + 0x70);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
      *(undefined4 *)(param_1 + 10) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada1d0 FUN_145ada1d0 body=228 status=ok
// SIG undefined FUN_145ada1d0(void)

longlong FUN_145ada1d0(void)

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
  if (DAT_14cab5f28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14765ea13;
    local_40 = FUN_14634af6b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneMotionVectorSimulationSystem",
                  &DAT_14cab5f28,&DAT_14765ea12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5f28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada2bc FUN_145ada2bc body=228 status=ok
// SIG undefined FUN_145ada2bc(void)

longlong FUN_145ada2bc(void)

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
  if (DAT_14cab6280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f9c3a;
    local_38 = &LAB_1476a1925;
    local_40 = FUN_1459fefd1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrackInstance",&DAT_14cab6280,
                  &DAT_1476a1924);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada3a8 FUN_145ada3a8 body=228 status=ok
// SIG undefined FUN_145ada3a8(void)

longlong FUN_145ada3a8(void)

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
  if (DAT_14cb60248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1486c145f;
    local_40 = FUN_1464eb53f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceSettings",&DAT_14cb60248,&DAT_1486c145e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada494 FUN_145ada494 body=228 status=ok
// SIG undefined FUN_145ada494(void)

longlong FUN_145ada494(void)

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
  if (DAT_14cbb30c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c5b01f;
    local_40 = FUN_1465f774e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_RewardCenter",&DAT_14cbb30c8,
                  &DAT_148c5b01e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb30c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ada594 FUN_145ada594 body=54 status=ok
// SIG undefined FUN_145ada594(void)

void FUN_145ada594(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x1700) != 0) {
    FUN_140acf690();
  }
  FUN_145ada5ca(param_1,4);
  FUN_140d5f028(param_1,param_2);
  return;
}



// FUNCTION 145ada5ca FUN_145ada5ca body=1079 status=ok
// SIG undefined FUN_145ada5ca(void)

void FUN_145ada5ca(longlong param_1,char param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined8 local_210;
  undefined2 *local_208;
  int local_200;
  undefined2 *local_1f8;
  int local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  undefined1 auStack_1b8 [48];
  undefined1 local_188 [16];
  longlong local_178;
  undefined1 local_168 [32];
  byte local_148;
  undefined1 local_140 [32];
  undefined1 local_120;
  int local_118;
  undefined4 uStack_114;
  char local_110;
  longlong local_108;
  undefined1 local_f8 [32];
  byte local_d8;
  longlong local_d0;
  char local_c8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(char *)(param_1 + 0x2608) == '\0') {
    *(char *)(param_1 + 0x2608) = param_2;
    _Src = DAT_14cbc2be8;
    local_1e8 = (void *)0x0;
    lVar3 = (longlong)DAT_14cbc2bf0;
    local_1e0 = DAT_14cbc2bf0;
    if (lVar3 == 0) {
      local_1dc = 0;
    }
    else {
      FUN_1446dd670(&local_1e8,DAT_14cbc2bf0,0);
      memcpy(local_1e8,_Src,lVar3 * 2);
    }
    if ((byte)(param_2 - 1U) < 4) {
      FUN_144a787a6(&local_1e8,(&PTR_DAT_14b95ffa8)[(byte)(param_2 - 1U)]);
    }
    uVar1 = FUN_145adaa02();
    FUN_1414aa4be(uVar1,&local_d0,param_2);
    FUN_1400021e4(&local_d0,&local_1f8);
    puVar2 = local_1f8;
    if (local_1f0 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1414aa4f6(puVar2);
    local_120 = 0;
    FUN_14101bd16(local_140,uVar1);
    local_218 = local_140;
    FUN_140d767d6(&local_118,&DAT_14cbc29f0,3,&DAT_149ebe6ea);
    if ((*(longlong *)(CONCAT44(uStack_114,local_118) + 0x3c) == 0) ||
       (*(char *)(CONCAT44(uStack_114,local_118) + 0x38) < local_110)) {
      uVar1 = FUN_145adaa02();
      FUN_1414aa4be(uVar1,&local_d0,param_2);
      FUN_1400021e4(&local_d0,&local_208);
      puVar2 = local_208;
      if (local_200 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      uVar1 = FUN_1414aa4f6(puVar2);
      puVar4 = local_1d8;
    }
    else {
      uVar1 = FUN_145adaa02();
      FUN_1414aa4be(uVar1,&local_d0,param_2);
      FUN_1400021e4(&local_d0,&local_208);
      puVar2 = local_208;
      if (local_200 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      uVar1 = FUN_1414aa4f6(puVar2);
      puVar4 = auStack_1b8 + 8;
    }
    puVar4[0x20] = 0;
    FUN_14101bd16(puVar4,uVar1);
    local_218 = puVar4;
    FUN_140d767d6(local_188,&DAT_14cbc29f0,3,&DAT_149ebe6ea);
    FUN_140d76846(&local_d0,local_188);
    (*(code *)(&PTR_FUN_14a1842f0)[local_148])(local_168);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_208 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_d8])(local_f8);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(local_d0 + 0x3c) != 0) && (local_c8 <= *(char *)(local_d0 + 0x38))) {
      uVar1 = FUN_145adaa3c(param_1,0);
      local_210 = 0;
      FUN_14485c47a(&local_210,uVar1);
      FUN_1404eedce(&local_d0,&DAT_14c9a3c28,local_210);
      FUN_140d76916(&local_d0,1);
      FUN_1411b2fb0(&local_d0,&DAT_14cbc2ba8,&local_1e8);
      local_118 = (int)ROUND(*(float *)(param_1 + 0x260c) + *(float *)(param_1 + 0x260c) + -0.5) >>
                  1;
      FUN_140d76916(&local_d0,1);
      FUN_1414aa52e(&local_d0,&DAT_14cbc2bb8,&local_118);
      local_118 = (int)ROUND(*(float *)(param_1 + 0x2610) + *(float *)(param_1 + 0x2610) + -0.5) >>
                  1;
      FUN_140d76916(&local_d0,1);
      FUN_1414aa52e(&local_d0,&DAT_14cbc2bc8,&local_118);
      local_118 = (int)ROUND(*(float *)(param_1 + 0x2614) + *(float *)(param_1 + 0x2614) + -0.5) >>
                  1;
      FUN_140d76916(&local_d0,1);
      FUN_1414aa52e(&local_d0,&DAT_14cbc2bd8,&local_118);
      FUN_14027c70a(&local_d0);
    }
    FUN_1404eeb8e(&local_d0);
    if (local_1e8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145adaa02 FUN_145adaa02 body=57 status=ok
// SIG undefined FUN_145adaa02(void)

void FUN_145adaa02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbca78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbca78 = FUN_14171c317(FUN_14660b75e,uVar1,L"EVehicleExitReason");
  }
  return;
}



// FUNCTION 145adaa3c FUN_145adaa3c body=102 status=ok
// SIG undefined FUN_145adaa3c(void)

longlong FUN_145adaa3c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0 && param_1 != (longlong *)0x0) {
    param_2 = (**(code **)(*param_1 + 0x5d0))(param_1);
    if (param_2 == 0) {
      param_2 = (**(code **)(*param_1 + 0x5e8))(param_1);
      if (param_2 == 0) {
        param_2 = (**(code **)(*param_1 + 0x5e0))(param_1);
        if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145adaa9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar1 = (**(code **)(*param_1 + 0x5f0))(param_1);
          return lVar1;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 145adaab6 FUN_145adaab6 body=56 status=ok
// SIG undefined FUN_145adaab6(void)

void FUN_145adaab6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14a136c00;
  puVar1[1] = &PTR_FUN_14a136c40;
  puVar1[2] = &PTR_FUN_14a136c70;
  return;
}



// FUNCTION 145adaaee FUN_145adaaee body=35 status=ok
// SIG undefined FUN_145adaaee(void)

void FUN_145adaaee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adab12(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a74f410;
  return;
}



// FUNCTION 145adab12 FUN_145adab12 body=32 status=ok
// SIG undefined FUN_145adab12(void)

undefined8 * FUN_145adab12(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5c7560;
  return param_1;
}



// FUNCTION 145adab32 FUN_145adab32 body=35 status=ok
// SIG undefined FUN_145adab32(void)

void FUN_145adab32(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adab56(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7f4c60;
  return;
}



// FUNCTION 145adab56 FUN_145adab56 body=32 status=ok
// SIG undefined FUN_145adab56(void)

undefined8 * FUN_145adab56(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a13b0f0;
  return param_1;
}



// FUNCTION 145adab82 FUN_145adab82 body=56 status=ok
// SIG undefined FUN_145adab82(void)

undefined8 * FUN_145adab82(undefined8 *param_1)

{
  FUN_1406078b6();
  *param_1 = &PTR_FUN_14acc16a0;
  param_1[0x1f] = &PTR_LAB_14acc19f0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 145adabc2 FUN_145adabc2 body=113 status=ok
// SIG undefined FUN_145adabc2(void)

undefined8 * FUN_145adabc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14108ad62(param_1,uVar1);
  *param_1 = &PTR_FUN_14ad30190;
  param_1[5] = &PTR_FUN_14ad30450;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_145adac34(param_1 + 7,param_1 + 9);
  return param_1;
}



// FUNCTION 145adac34 FUN_145adac34 body=13 status=ok
// SIG undefined FUN_145adac34(void)

void FUN_145adac34(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0x41c71eb8;
  *param_2 = 0x41955c29;
  return;
}



// FUNCTION 145adac4a FUN_145adac4a body=59 status=ok
// SIG undefined FUN_145adac4a(void)

undefined8 * FUN_145adac4a(undefined8 *param_1)

{
  FUN_1406eddc8();
  *param_1 = &PTR_FUN_14b072f50;
  param_1[0x72] = &PTR_FUN_14b073590;
  FUN_14472eae2(param_1,0x900000);
  return param_1;
}



// FUNCTION 145adac85 FUN_145adac85 body=35 status=ok
// SIG undefined FUN_145adac85(void)

void FUN_145adac85(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adaca8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2b0960;
  return;
}



// FUNCTION 145adaca8 FUN_145adaca8 body=32 status=ok
// SIG undefined FUN_145adaca8(void)

undefined8 * FUN_145adaca8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b0a9350;
  return param_1;
}



// FUNCTION 145adacc8 FUN_145adacc8 body=192 status=ok
// SIG undefined FUN_145adacc8(void)

void FUN_145adacc8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x70 + uVar1) == param_2) {
        if (*(longlong *)(param_1 + 0x40) + uVar1 != 0) {
          FUN_1457322ec(param_1 + 0x40,(int)(uVar1 >> 3) * -0x11111111);
          FUN_145732246(param_1 + 0x40);
        }
        break;
      }
      uVar1 = uVar1 + 0x78;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x78 - uVar1 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x68 + uVar1) == param_2) {
        if (*(longlong *)(param_1 + 0x30) + uVar1 == 0) {
          return;
        }
        FUN_145adad88(param_1 + 0x30,(int)(uVar1 >> 3) * -0xf0f0f0f);
        FUN_1457321a4(param_1 + 0x10,param_1 + 0x30);
        return;
      }
      uVar1 = uVar1 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x88 != uVar1);
  }
  return;
}



// FUNCTION 145adad88 FUN_145adad88 body=98 status=ok
// SIG undefined FUN_145adad88(void)

void FUN_145adad88(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + *param_1);
  FUN_140665564(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x88),(longlong)(int)(~param_2 + iVar1) * 0x88);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_145adadea(param_1);
  return;
}



// FUNCTION 145adadea FUN_145adadea body=62 status=ok
// SIG undefined FUN_145adadea(void)

void FUN_145adadea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145adae28(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 145adae28 FUN_145adae28 body=117 status=ok
// SIG undefined FUN_145adae28(void)

ulonglong FUN_145adae28(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x88) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      uVar1 = uVar1 / 0x88;
    }
  }
  return uVar1;
}



// FUNCTION 145adae9d FUN_145adae9d body=35 status=ok
// SIG undefined FUN_145adae9d(void)

void FUN_145adae9d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adaec0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b57a4b0;
  return;
}



// FUNCTION 145adaec0 FUN_145adaec0 body=32 status=ok
// SIG undefined FUN_145adaec0(void)

undefined8 * FUN_145adaec0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a4fbee0;
  return param_1;
}



// FUNCTION 145adaee0 FUN_145adaee0 body=35 status=ok
// SIG undefined FUN_145adaee0(void)

void FUN_145adaee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adaf04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7068f0;
  return;
}



// FUNCTION 145adaf04 FUN_145adaf04 body=32 status=ok
// SIG undefined FUN_145adaf04(void)

undefined8 * FUN_145adaf04(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b0e22a0;
  return param_1;
}



// FUNCTION 145adaf24 FUN_145adaf24 body=40 status=ok
// SIG undefined FUN_145adaf24(void)

undefined8 FUN_145adaf24(undefined8 param_1,int param_2)

{
  FUN_1414aba72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adaf4c FUN_145adaf4c body=35 status=ok
// SIG undefined FUN_145adaf4c(void)

void FUN_145adaf4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adaf70(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b759760;
  return;
}



// FUNCTION 145adaf70 FUN_145adaf70 body=32 status=ok
// SIG undefined FUN_145adaf70(void)

undefined8 * FUN_145adaf70(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a61ce90;
  return param_1;
}



// FUNCTION 145adaf90 FUN_145adaf90 body=35 status=ok
// SIG undefined FUN_145adaf90(void)

void FUN_145adaf90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adafb4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b75c770;
  return;
}



// FUNCTION 145adafb4 FUN_145adafb4 body=32 status=ok
// SIG undefined FUN_145adafb4(void)

undefined8 * FUN_145adafb4(undefined8 *param_1)

{
  FUN_145853c9a();
  *param_1 = &PTR_FUN_14b15e2c0;
  return param_1;
}


