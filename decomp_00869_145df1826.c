// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145df1826 FUN_145df1826 body=104 status=ok
// SIG undefined FUN_145df1826(void)

undefined8 * FUN_145df1826(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bb6a660;
  FUN_145df188e(param_1 + 6);
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
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 145df188e FUN_145df188e body=247 status=ok
// SIG undefined FUN_145df188e(void)

undefined8 * FUN_145df188e(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1446f470e(&local_48,L"Default",1);
  *param_1 = local_48;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    FUN_1446f8c06(param_1 + 4,0);
  }
  puVar1 = (undefined2 *)param_1[4];
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 6;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df1986 FUN_145df1986 body=210 status=ok
// SIG undefined FUN_145df1986(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df1986(void)

{
  if ((DAT_14ca5050f & 2) == 0) {
    DAT_14ca5050f = DAT_14ca5050f | 2;
    _DAT_14ca504b0 = L"FShadowProjectionPS3falsefalsefalse";
    _DAT_14ca504c8 = FUN_146826540;
    _DAT_14ca504d0 = FUN_146825d77;
    _DAT_14ca504d8 = FUN_146825fd6;
    _DAT_14ca504e0 = FUN_1407e02ea;
    _DAT_14ca504e8 = FUN_146826273;
    _DAT_14ca504c0 = FUN_1472eea66;
    _DAT_14ca50500 = 0xffffffff00000148;
    _DAT_14ca50508 = 8;
    DAT_14ca5050c = 0;
    _DAT_14ca504f0 = &LAB_1472eea92;
    FUN_145df1a58();
    FUN_145df1b4c();
    FUN_1407e00cc(&DAT_14ca504a8);
    return;
  }
  return;
}



// FUNCTION 145df1a58 FUN_145df1a58 body=121 status=ok
// SIG undefined FUN_145df1a58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df1a58(void)

{
  FUN_145df1ad2();
  _DAT_14ca57510 = L"ProjectionParameters";
  DAT_14ca5753a = FUN_140850cc5();
  _DAT_14ca57518 = FUN_14142e7bc();
  _DAT_14ca57528 = &LAB_14682652b;
  _DAT_14ca57530 = 0x1000000e0;
  _DAT_14ca57538 = 0;
  _DAT_14ca57520 = DAT_14ca504b8;
  DAT_14ca504b8 = &DAT_14ca57510;
  return;
}



// FUNCTION 145df1ad2 FUN_145df1ad2 body=121 status=ok
// SIG undefined FUN_145df1ad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df1ad2(void)

{
  FUN_145df1bd2();
  _DAT_14ca57540 = L"ShadowFadeFraction";
  DAT_14ca5756a = FUN_140850cc5();
  _DAT_14ca57548 = FUN_140ec6960();
  _DAT_14ca57558 = &LAB_14682652b;
  _DAT_14ca57560 = 0x100000130;
  _DAT_14ca57568 = 0;
  _DAT_14ca57550 = DAT_14ca504b8;
  DAT_14ca504b8 = &DAT_14ca57540;
  return;
}



// FUNCTION 145df1b4c FUN_145df1b4c body=133 status=ok
// SIG undefined FUN_145df1b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df1b4c(void)

{
  _DAT_14ca575d0 = L"BASE";
  DAT_14ca575fa = 4;
  FUN_1411c95a0();
  _DAT_14ca575e0 = DAT_14ca504b8;
  _DAT_14ca575d8 = &DAT_14ca4ff98;
  _DAT_14ca575e8 = &LAB_14682652b;
  DAT_14ca504b8 = &DAT_14ca575d0;
  DAT_14ca5050d = DAT_14ca5050d + '\x01';
  _DAT_14ca575f0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca5050e = DAT_14ca5050e + '\x01';
  }
  return;
}



// FUNCTION 145df1bd2 FUN_145df1bd2 body=216 status=ok
// SIG undefined FUN_145df1bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df1bd2(void)

{
  _DAT_14ca575a0 = L"LightPosition";
  DAT_14ca575ca = FUN_140850cc5();
  _DAT_14ca575a8 = FUN_140ec6960();
  _DAT_14ca575b8 = &LAB_14682652b;
  _DAT_14ca575c0 = 0x10000013c;
  _DAT_14ca575c8 = 0;
  _DAT_14ca575b0 = DAT_14ca504b8;
  DAT_14ca504b8 = &DAT_14ca575a0;
  _DAT_14ca57570 = L"ShadowSharpen";
  DAT_14ca5759a = FUN_140850cc5();
  _DAT_14ca57578 = FUN_140ec6960();
  _DAT_14ca57588 = &LAB_14682652b;
  _DAT_14ca57590 = 0x100000136;
  _DAT_14ca57598 = 0;
  _DAT_14ca57580 = DAT_14ca504b8;
  DAT_14ca504b8 = &DAT_14ca57570;
  return;
}



// FUNCTION 145df1caa FUN_145df1caa body=413 status=ok
// SIG undefined FUN_145df1caa(void)

longlong * FUN_145df1caa(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x28,0x10);
  FUN_145df1e48(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14afbee40;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_145df1d65;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_145df1deb:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_145df1d54;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_145df1deb;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_145df1d54:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_145df1d65:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145df1e48 FUN_145df1e48 body=453 status=ok
// SIG undefined FUN_145df1e48(void)

/* WARNING: Removing unreachable block (ram,0x000145df1ff3) */
/* WARNING: Removing unreachable block (ram,0x000145df1fff) */
/* WARNING: Removing unreachable block (ram,0x000145df2003) */

undefined8 * FUN_145df1e48(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14afbed50;
  FUN_1412e3d1e(&local_b8);
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = (undefined4)uStack_80;
  uStack_3c = uStack_80._4_4_;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  local_98 = (longlong *)0x0;
  local_a8 = FUN_144b393d6;
  local_88 = &PTR_LAB_14afbee20;
  uStack_80 = FUN_1485f3816;
  local_c8 = local_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  uStack_54 = 0;
  local_58 = 0;
  uStack_64 = 0;
  local_68 = 0;
  uStack_80 = FUN_1485f3816;
  local_88 = &PTR_LAB_14afbee20;
  local_98 = (longlong *)0x0;
  local_a8 = FUN_144b393d6;
  uStack_dc = uStack_8c;
  uStack_e0 = uStack_90;
  local_e8 = 0;
  uStack_ec = uStack_9c;
  uStack_f0 = uStack_a0;
  local_f8 = 0;
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df2052(param_1 + 3,iVar2);
  }
  lVar3 = param_1[3];
  lVar4 = (longlong)iVar2 * 0x50;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_b8;
  puVar1[1] = uStack_b4;
  puVar1[2] = uStack_b0;
  puVar1[3] = uStack_ac;
  *(code **)(lVar3 + 0x10 + lVar4) = local_a8;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = 0;
  if (local_a8 != (code *)0x0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    (**(code **)*plVar5)(local_b8,lVar3 + lVar4 + 0x20);
  }
  if (local_a8 != (code *)0x0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145df201a FUN_145df201a body=31 status=ok
// SIG undefined FUN_145df201a(void)

undefined8 FUN_145df201a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df2052 FUN_145df2052 body=147 status=ok
// SIG undefined FUN_145df2052(void)

void FUN_145df2052(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145df20e5 FUN_145df20e5 body=30 status=ok
// SIG undefined FUN_145df20e5(void)

void FUN_145df20e5(longlong param_1)

{
  FUN_145df2104(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145df2104 FUN_145df2104 body=41 status=ok
// SIG undefined FUN_145df2104(void)

void FUN_145df2104(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_145df212e(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145df212e FUN_145df212e body=87 status=ok
// SIG undefined FUN_145df212e(void)

void FUN_145df212e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145df2186(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145df21be(param_1);
  return;
}



// FUNCTION 145df2186 FUN_145df2186 body=55 status=ok
// SIG undefined FUN_145df2186(void)

void FUN_145df2186(longlong *param_1)

{
  FUN_145df238c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df21be FUN_145df21be body=55 status=ok
// SIG undefined FUN_145df21be(void)

void FUN_145df21be(longlong *param_1)

{
  FUN_145df21f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df21f6 FUN_145df21f6 body=404 status=ok
// SIG undefined FUN_145df21f6(void)

void FUN_145df21f6(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 8 + lVar5 * 0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_1490d6cf4(lVar2 + lVar5 * 0x20);
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145df238c FUN_145df238c body=408 status=ok
// SIG undefined FUN_145df238c(void)

void FUN_145df238c(longlong *param_1,int param_2)

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
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_145d37afc(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145df2526 FUN_145df2526 body=140 status=ok
// SIG undefined FUN_145df2526(void)

undefined1 * FUN_145df2526(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df25b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsDebugData::FReadParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9d41c8;
  return &LAB_147171efc;
}



// FUNCTION 145df25b2 FUN_145df25b2 body=261 status=ok
// SIG undefined FUN_145df25b2(void)

void FUN_145df25b2(void)

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
              0x110) < DAT_14c9d4248) {
    FUN_144b3d300(&DAT_14c9d4248);
    if (DAT_14c9d4248 == -1) {
      FUN_145df26b8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReadParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x151;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d41c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494e3);
      _Init_thread_footer(&DAT_14c9d4248);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df26b8 FUN_145df26b8 body=226 status=ok
// SIG undefined FUN_145df26b8(void)

longlong * FUN_145df26b8(longlong *param_1)

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
  pcVar13 = FUN_1462c7c30;
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



// FUNCTION 145df27a0 FUN_145df27a0 body=132 status=ok
// SIG undefined FUN_145df27a0(void)

undefined1 * FUN_145df27a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_MaxShadingPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df279c;
}



// FUNCTION 145df2824 FUN_145df2824 body=138 status=ok
// SIG undefined FUN_145df2824(void)

code * FUN_145df2824(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_SampleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000156;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171f00;
}



// FUNCTION 145df28ae FUN_145df28ae body=140 status=ok
// SIG undefined FUN_145df28ae(void)

undefined1 * FUN_145df28ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df293a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonDiffuseParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"HybridIndirectLighting::FCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca55938;
  return &LAB_1472f534c;
}



// FUNCTION 145df293a FUN_145df293a body=261 status=ok
// SIG undefined FUN_145df293a(void)

void FUN_145df293a(void)

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
              0x110) < DAT_14ca559b8) {
    FUN_144b3d300(&DAT_14ca559b8);
    if (DAT_14ca559b8 == -1) {
      FUN_145df2a40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCommonParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d751);
      _Init_thread_footer(&DAT_14ca559b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df2a40 FUN_145df2a40 body=226 status=ok
// SIG undefined FUN_145df2a40(void)

longlong * FUN_145df2a40(longlong *param_1)

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
  pcVar13 = FUN_146307424;
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



// FUNCTION 145df2b28 FUN_145df2b28 body=132 status=ok
// SIG undefined FUN_145df2b28(void)

undefined1 * FUN_145df2b28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TracingViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df2b24;
}



// FUNCTION 145df2bac FUN_145df2bac body=138 status=ok
// SIG undefined FUN_145df2bac(void)

code * FUN_145df2bac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownscaleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f54ee;
}



// FUNCTION 145df2c36 FUN_145df2c36 body=109 status=ok
// SIG undefined FUN_145df2c36(void)

longlong * FUN_145df2c36(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x1a8);
  *(byte *)(param_1 + 0x1a8) = 0;
  UNLOCK();
  if ((bVar1 & 1) != 0) {
    FUN_145df2dea(param_1);
  }
  plVar2 = (longlong *)FUN_14001cc68(0x140,0x10);
  FUN_145df2ca4(plVar2,param_2,param_1,param_3);
  (**(code **)(*plVar2 + 8))(plVar2,param_1,param_3,param_4);
  return plVar2;
}



// FUNCTION 145df2ca4 FUN_145df2ca4 body=217 status=ok
// SIG undefined FUN_145df2ca4(void)

undefined8 * FUN_145df2ca4(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ae09d20;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = *(longlong *)(param_3 + 0x140);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  else if (lVar2 == 0) {
    uVar3 = 0;
    goto LAB_145df2d21;
  }
  local_38 = 0;
  FUN_14485c47a(&local_38,lVar2);
  uVar3 = local_38;
LAB_145df2d21:
  param_1[0x24] = uVar3;
  iVar1 = *(int *)(param_3 + 0xc0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)((longlong)param_1 + 0x13c) < iVar1) {
    FUN_145df2d7e(param_1 + 0x26);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df2d7e FUN_145df2d7e body=108 status=ok
// SIG undefined FUN_145df2d7e(void)

void FUN_145df2d7e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 145df2dea FUN_145df2dea body=1373 status=ok
// SIG undefined FUN_145df2dea(void)

void FUN_145df2dea(longlong param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  undefined2 *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined2 **local_90;
  ulonglong *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)(param_1 + 0x158);
  FUN_145df3348();
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x148);
    local_98 = (longlong)*(int *)(param_1 + 0x150) * 0xa8 + lVar7;
    local_a0 = param_1 + 400;
    do {
      if (*(longlong *)(param_1 + 0x140) != 0) {
        if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
          lVar6 = *(longlong *)(lVar7 + 0x38);
          uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar8 = (uint)lVar6 & 0xffff;
          lVar11 = *(longlong *)(param_1 + 0x198);
          if (*(longlong *)(param_1 + 0x198) == 0) {
            lVar11 = local_a0;
          }
          iVar9 = *(int *)(lVar11 + (ulonglong)
                                    (*(int *)(param_1 + 0x1a0) - 1U &
                                    (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar8)
                                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              if (*(longlong *)(*local_a8 + (longlong)iVar9 * 0x20) == lVar6) goto LAB_145df31a3;
              iVar9 = *(int *)((longlong)iVar9 * 0x20 + *local_a8 + 0x18);
            } while (iVar9 != -1);
          }
        }
        if ((*(longlong *)(lVar7 + 0x50) == 0) ||
           (lVar6 = FUN_1400796d0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10),
                                  *(longlong *)(lVar7 + 0x50),1), lVar6 == 0)) {
          FUN_1400021e4((undefined2 *)(lVar7 + 0x38),&local_80);
          lVar6 = DAT_14cb420e0;
          if ((DAT_14cb420e0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb420e0);
          }
          if (((*(longlong *)(lVar7 + 0x40) == lVar6) &&
              (*(short *)(lVar7 + 0x48) == (short)DAT_14cb420e8)) &&
             (*(char *)(lVar7 + 0x4a) == DAT_14cb420e8._2_1_)) {
            FUN_1400b22c2(&local_68,&DAT_149e430b6);
            iVar9 = (int)local_60 + -1;
            puVar5 = local_68;
            if ((int)local_60 == 0) {
              puVar5 = &DAT_149dfb77a;
              iVar9 = 0;
            }
            FUN_140c540b4(&local_80,puVar5,iVar9,0);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb39fc0) && (FUN_144b3d300(&DAT_14cb39fc0), DAT_14cb39fc0 == -1)) {
            FUN_1400b22c2(&local_68,&DAT_14a16fd6c);
            FUN_1400b22c2(local_58,"K2_Set");
            local_88 = &local_48;
            local_90 = &local_68;
            FUN_141469cae(&DAT_14cb39fb0,&local_90);
            lVar6 = 0x20;
            do {
              if (*(longlong *)(local_78 + lVar6) != 0) {
                FUN_1400020a8();
              }
              lVar6 = lVar6 + -0x10;
            } while (lVar6 != 0);
            atexit(FUN_1439f83b4);
            _Init_thread_footer(&DAT_14cb39fc0);
          }
          if ((longlong)DAT_14cb39fb8 != 0) {
            lVar10 = (longlong)DAT_14cb39fb8 << 4;
            lVar11 = DAT_14cb39fb0;
            do {
              FUN_140474144(&local_68,lVar11,&local_80);
              iVar9 = (int)local_60 + -1;
              if ((int)local_60 == 0) {
                iVar9 = 0;
              }
              FUN_1446f82e2(&local_70,iVar9,local_68);
              lVar6 = local_70;
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if ((lVar6 != 0) &&
                 (lVar6 = FUN_1400796d0(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10),lVar6
                                        ,1), lVar6 != 0)) goto LAB_145df3086;
              lVar11 = lVar11 + 0x10;
              lVar10 = lVar10 + -0x10;
            } while (lVar10 != 0);
          }
          lVar6 = 0;
LAB_145df3086:
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          local_78[0] = 0;
          local_80 = lVar6;
          if (lVar6 != 0) goto LAB_145df30a8;
        }
        else {
LAB_145df30a8:
          local_78[0] = 0;
          lVar11 = *(longlong *)(lVar6 + 0x70);
          local_80 = lVar6;
          if (lVar11 != 0) {
            bVar2 = 1;
            do {
              if ((*(int *)(lVar11 + 0x34) * *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x44) <=
                   (int)(uint)*(ushort *)(lVar6 + 0xb6)) &&
                 ((bool)((*(uint *)(lVar11 + 0x38) & 0x480) == 0x80 & bVar2))) {
                FUN_145df397e(&local_68,lVar11);
                puVar5 = *(undefined2 **)(lVar7 + 0x40);
                if ((DAT_14c950c29 == 1) && (puVar5 != (undefined2 *)0x0)) {
                  FUN_1456cec3c(puVar5);
                }
                if (((local_68 == puVar5) && ((short)local_60 == *(short *)(lVar7 + 0x48))) &&
                   (local_60._2_1_ == *(char *)(lVar7 + 0x4a))) {
LAB_145df3140:
                  puVar1 = *(undefined2 **)(lVar7 + 0x40);
                  if ((DAT_14c950c29 == 1) && (puVar1 != (undefined2 *)0x0)) {
                    FUN_1456cec3c(puVar1);
                    puVar5 = local_68;
                  }
                  if (((puVar5 != puVar1) || ((short)local_60 != *(short *)(lVar7 + 0x48))) ||
                     (local_60._2_1_ != *(char *)(lVar7 + 0x4a))) {
                    local_80 = 0;
                  }
                }
                else {
                  puVar4 = (undefined8 *)FUN_144741050(lVar7 + 0x28);
                  local_b0 = (undefined2 *)*puVar4;
                  if ((DAT_14c950c29 == 1) && (local_b0 != (undefined2 *)0x0)) {
                    FUN_1456cec3c(local_b0);
                  }
                  puVar5 = local_68;
                  if (((local_68 != local_b0) ||
                      (puVar5 = local_b0, (short)local_60 != *(short *)(puVar4 + 1))) ||
                     (local_60._2_1_ != *(char *)((longlong)puVar4 + 10))) goto LAB_145df3140;
                  local_78[0] = 1;
                }
                bVar2 = 0;
              }
              lVar11 = *(longlong *)(lVar11 + 0x48);
            } while (lVar11 != 0);
          }
        }
        local_60 = &local_80;
        local_68 = (undefined2 *)(lVar7 + 0x38);
        FUN_145df3388(local_a8,&local_70,&local_68);
      }
LAB_145df31a3:
      lVar7 = lVar7 + 0xa8;
    } while (lVar7 != local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df3348 FUN_145df3348 body=63 status=ok
// SIG undefined FUN_145df3348(void)

void FUN_145df3348(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145df3648(param_1);
    FUN_1459ac1b8(param_1);
    return;
  }
  FUN_1459ac1b8(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145df3798(param_1);
  return;
}



// FUNCTION 145df3388 FUN_145df3388 body=332 status=ok
// SIG undefined FUN_145df3388(void)

undefined4 * FUN_145df3388(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145df3562(param_1,local_48);
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
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_145df34d6(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
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
      FUN_145df3798(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df34d6 FUN_145df34d6 body=139 status=ok
// SIG undefined FUN_145df34d6(void)

undefined8 FUN_145df34d6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14812392e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145df3562 FUN_145df3562 body=230 status=ok
// SIG undefined FUN_145df3562(void)

int * FUN_145df3562(longlong *param_1,int *param_2)

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



// FUNCTION 145df3648 FUN_145df3648 body=335 status=ok
// SIG undefined FUN_145df3648(void)

void FUN_145df3648(longlong *param_1)

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



// FUNCTION 145df3798 FUN_145df3798 body=485 status=ok
// SIG undefined FUN_145df3798(void)

void FUN_145df3798(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145df397e FUN_145df397e body=1109 status=ok
// SIG undefined FUN_145df397e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145df397e(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar2 = FUN_144a5ab96();
  lVar3 = DAT_14cb420e0;
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    lVar5 = lVar4;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar2) break;
      } while (lVar5 != 0);
    }
    if (!bVar6) goto LAB_145df39bc;
LAB_145df3b06:
    *param_1 = DAT_14cb420e0;
    lVar4 = DAT_14cb420e8;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar4 = DAT_14cb420e8;
    }
LAB_145df3be4:
    param_1[1] = lVar4;
    goto LAB_145df3aa4;
  }
  if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_145df3b06;
LAB_145df39bc:
  lVar2 = FUN_144a7452c();
  lVar3 = DAT_14cb420d0;
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    lVar5 = lVar4;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar2) break;
      } while (lVar5 != 0);
    }
    if (bVar6) goto LAB_145df3b64;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_145df3b64:
    *param_1 = DAT_14cb420d0;
    lVar4 = _DAT_14cb420d8;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar4 = _DAT_14cb420d8;
    }
    goto LAB_145df3be4;
  }
  lVar2 = FUN_144a64e42();
  lVar3 = DAT_14cb420f0;
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    lVar5 = lVar4;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar2) break;
      } while (lVar5 != 0);
    }
    if (bVar6) goto LAB_145df3bbf;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_145df3bbf:
    *param_1 = DAT_14cb420f0;
    lVar4 = DAT_14cb420f8;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar4 = DAT_14cb420f8;
    }
    goto LAB_145df3be4;
  }
  lVar3 = FUN_144a49fc8();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar6 = lVar4 != 0;
    lVar2 = lVar4;
    if (lVar4 != lVar3 && bVar6) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar6 = lVar2 != 0;
        if (lVar2 == lVar3) break;
      } while (lVar2 != 0);
    }
    if (bVar6) goto LAB_145df3c21;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_145df3c21:
    FUN_1481f9c60(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (bVar6) goto LAB_145df3a2c;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_145df3a2c:
    if (*(longlong *)(param_2 + 0x70) != 0) {
      uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
      FUN_1401a700c(&local_2c,0x36);
      if ((uVar1 == local_2c) ||
         (uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18),
         FUN_1401a700c(&local_2c,0x5b), uVar1 == local_2c)) {
        FUN_1481f96b0(param_1);
      }
      else {
        uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
        FUN_1401a700c(&local_2c,0x3b);
        if ((uVar1 == local_2c) ||
           (uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18),
           FUN_1401a700c(&local_2c,0x49), uVar1 == local_2c)) {
          FUN_1408c4b2a(param_1);
        }
        else {
          uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
          FUN_1401a700c(&local_2c,0x39);
          if ((uVar1 == local_2c) ||
             (uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18),
             FUN_1401a700c(&local_2c,0x57), uVar1 == local_2c)) {
            FUN_1481f96f2(param_1);
          }
          else {
            uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18);
            FUN_1401a700c(&local_2c,0x45);
            if ((uVar1 == local_2c) ||
               (uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x70) + 0x18),
               FUN_1401a700c(&local_2c,0x4f), uVar1 == local_2c)) {
              FUN_1481f9734(param_1);
            }
            else {
              lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
              FUN_1446ddc76(&local_38,"NiagaraPosition",1);
              lVar3 = DAT_14cb413d0;
              if (lVar4 != local_38) {
                lVar3 = *(longlong *)(param_2 + 0x70);
              }
              *param_1 = lVar3;
              if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar3);
              }
              *(undefined2 *)(param_1 + 1) = 2;
              *(undefined1 *)((longlong)param_1 + 10) = 0;
              *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
              FUN_140c6c26c(lVar3,0);
            }
          }
        }
      }
      goto LAB_145df3aa4;
    }
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
LAB_145df3aa4:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145df3dda FUN_145df3dda body=77 status=ok
// SIG undefined FUN_145df3dda(void)

void FUN_145df3dda(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x928);
  *(uint *)(param_1 + 0x928) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x92c) < iVar1 + 1U) {
    FUN_145df3ede((longlong *)(param_1 + 0x920),iVar1);
  }
  FUN_145df3e28((longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x920),param_2);
  return;
}



// FUNCTION 145df3e28 FUN_145df3e28 body=40 status=ok
// SIG undefined FUN_145df3e28(void)

longlong FUN_145df3e28(longlong param_1)

{
  FUN_145df3e50();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 145df3e50 FUN_145df3e50 body=142 status=ok
// SIG undefined FUN_145df3e50(void)

undefined8 * FUN_145df3e50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
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
  FUN_14124ed18(param_1 + 5,param_2 + 5);
  FUN_14034cca6(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 145df3ede FUN_145df3ede body=147 status=ok
// SIG undefined FUN_145df3ede(void)

void FUN_145df3ede(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145df3f72 FUN_145df3f72 body=206 status=ok
// SIG undefined FUN_145df3f72(void)

void FUN_145df3f72(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_145df4042(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_141356701(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146f3140a(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145df4042 FUN_145df4042 body=132 status=ok
// SIG undefined FUN_145df4042(void)

void FUN_145df4042(longlong param_1,int param_2)

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



// FUNCTION 145df40d2 FUN_145df40d2 body=350 status=ok
// SIG undefined FUN_145df40d2(void)

undefined8 * FUN_145df40d2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6c3940;
  param_1[5] = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 3;
  *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) & 0x7e;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffff3f800000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3628) {
    FUN_144b3d300(&DAT_14caf3628);
    if (DAT_14caf3628 == -1) {
      FUN_1446f470e(&DAT_14caf3620,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_14caf3628);
    }
  }
  param_1[5] = DAT_14caf3620;
  *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 0x10;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 145df423c FUN_145df423c body=109 status=ok
// SIG undefined FUN_145df423c(void)

undefined8 * FUN_145df423c(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14b2771c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_145df42aa(&local_20,param_1);
  param_1[7] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df42aa FUN_145df42aa body=239 status=ok
// SIG undefined FUN_145df42aa(void)

undefined8 FUN_145df42aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b42e6c0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_146059d8a;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df439a FUN_145df439a body=344 status=ok
// SIG undefined FUN_145df439a(void)

undefined8 * FUN_145df439a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bea9890;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  QueryPerformanceCounter(&local_38);
  param_1[0x26] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_145df44f4(&DAT_14cadbe48,&local_38,param_1,FUN_14574c5b8);
  FUN_145df44f4(&DAT_14c872cf8,&local_38,param_1,FUN_14574c62c);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df44f4 FUN_145df44f4 body=196 status=ok
// SIG undefined FUN_145df44f4(void)

undefined8
FUN_145df44f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beac360;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df45ba FUN_145df45ba body=402 status=ok
// SIG undefined FUN_145df45ba(void)

void FUN_145df45ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14156031e(local_18,local_19,local_28,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df474e FUN_145df474e body=144 status=ok
// SIG undefined FUN_145df474e(void)

code * FUN_145df474e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df47de();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWeatherOcclusionMapParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGbxWeatherOcclusionMapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000138;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5e858;
  return FUN_145ded7f4;
}



// FUNCTION 145df47de FUN_145df47de body=261 status=ok
// SIG undefined FUN_145df47de(void)

void FUN_145df47de(void)

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
              0x110) < DAT_14ca5e8d8) {
    FUN_144b3d300(&DAT_14ca5e8d8);
    if (DAT_14ca5e8d8 == -1) {
      FUN_145df48e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGbxWeatherOcclusionMapParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x87;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5e858,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d71d);
      _Init_thread_footer(&DAT_14ca5e8d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df48e4 FUN_145df48e4 body=226 status=ok
// SIG undefined FUN_145df48e4(void)

longlong * FUN_145df48e4(longlong *param_1)

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
  pcVar13 = FUN_14630aa7a;
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



// FUNCTION 145df49cc FUN_145df49cc body=130 status=ok
// SIG undefined FUN_145df49cc(void)

undefined1 * FUN_145df49cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWeatherOcclusionMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df49c8;
}



// FUNCTION 145df4a4e FUN_145df4a4e body=138 status=ok
// SIG undefined FUN_145df4a4e(void)

code * FUN_145df4a4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWeatherOcclusionMapPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147317de6;
}



// FUNCTION 145df4ad8 FUN_145df4ad8 body=284 status=ok
// SIG undefined FUN_145df4ad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145df4ad8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50368) {
    FUN_144b3d300(&DAT_14ca50368);
    if (DAT_14ca50368 == -1) {
      FUN_145df4bf4();
      FUN_140db5666(&DAT_14ca502c0,0,&DAT_14ca50258,L"FShadowProjectionPS1falsefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ee842,
                    FUN_1472ee81a,&LAB_1472ee7ce,&LAB_1472ee7ca,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca502c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049ade);
      _Init_thread_footer(&DAT_14ca50368);
    }
  }
  return &DAT_14ca502c0;
}



// FUNCTION 145df4bf4 FUN_145df4bf4 body=210 status=ok
// SIG undefined FUN_145df4bf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df4bf4(void)

{
  if ((DAT_14ca502bf & 2) == 0) {
    DAT_14ca502bf = DAT_14ca502bf | 2;
    _DAT_14ca50260 = L"FShadowProjectionPS1falsefalsefalse";
    _DAT_14ca50278 = FUN_146826540;
    _DAT_14ca50280 = FUN_146825d77;
    _DAT_14ca50288 = FUN_146825fd6;
    _DAT_14ca50290 = FUN_1407e02ea;
    _DAT_14ca50298 = FUN_146826273;
    _DAT_14ca50270 = FUN_1472ee79a;
    _DAT_14ca502b0 = 0xffffffff00000148;
    _DAT_14ca502b8 = 8;
    DAT_14ca502bc = 0;
    _DAT_14ca502a0 = &LAB_1472ee7c6;
    FUN_145df4cc6();
    FUN_145df4dba();
    FUN_1407e00cc(&DAT_14ca50258);
    return;
  }
  return;
}



// FUNCTION 145df4cc6 FUN_145df4cc6 body=121 status=ok
// SIG undefined FUN_145df4cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df4cc6(void)

{
  FUN_145df4d40();
  _DAT_14ca57330 = L"ProjectionParameters";
  DAT_14ca5735a = FUN_140850cc5();
  _DAT_14ca57338 = FUN_14142e7bc();
  _DAT_14ca57348 = &LAB_14682652b;
  _DAT_14ca57350 = 0x1000000e0;
  _DAT_14ca57358 = 0;
  _DAT_14ca57340 = DAT_14ca50268;
  DAT_14ca50268 = &DAT_14ca57330;
  return;
}



// FUNCTION 145df4d40 FUN_145df4d40 body=121 status=ok
// SIG undefined FUN_145df4d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df4d40(void)

{
  FUN_145df4e40();
  _DAT_14ca57360 = L"ShadowFadeFraction";
  DAT_14ca5738a = FUN_140850cc5();
  _DAT_14ca57368 = FUN_140ec6960();
  _DAT_14ca57378 = &LAB_14682652b;
  _DAT_14ca57380 = 0x100000130;
  _DAT_14ca57388 = 0;
  _DAT_14ca57370 = DAT_14ca50268;
  DAT_14ca50268 = &DAT_14ca57360;
  return;
}



// FUNCTION 145df4dba FUN_145df4dba body=133 status=ok
// SIG undefined FUN_145df4dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df4dba(void)

{
  _DAT_14ca573f0 = L"BASE";
  DAT_14ca5741a = 4;
  FUN_1411c95a0();
  _DAT_14ca57400 = DAT_14ca50268;
  _DAT_14ca573f8 = &DAT_14ca4ff98;
  _DAT_14ca57408 = &LAB_14682652b;
  DAT_14ca50268 = &DAT_14ca573f0;
  DAT_14ca502bd = DAT_14ca502bd + '\x01';
  _DAT_14ca57410 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca502be = DAT_14ca502be + '\x01';
  }
  return;
}



// FUNCTION 145df4e40 FUN_145df4e40 body=216 status=ok
// SIG undefined FUN_145df4e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df4e40(void)

{
  _DAT_14ca573c0 = L"LightPosition";
  DAT_14ca573ea = FUN_140850cc5();
  _DAT_14ca573c8 = FUN_140ec6960();
  _DAT_14ca573d8 = &LAB_14682652b;
  _DAT_14ca573e0 = 0x10000013c;
  _DAT_14ca573e8 = 0;
  _DAT_14ca573d0 = DAT_14ca50268;
  DAT_14ca50268 = &DAT_14ca573c0;
  _DAT_14ca57390 = L"ShadowSharpen";
  DAT_14ca573ba = FUN_140850cc5();
  _DAT_14ca57398 = FUN_140ec6960();
  _DAT_14ca573a8 = &LAB_14682652b;
  _DAT_14ca573b0 = 0x100000136;
  _DAT_14ca573b8 = 0;
  _DAT_14ca573a0 = DAT_14ca50268;
  DAT_14ca50268 = &DAT_14ca57390;
  return;
}



// FUNCTION 145df4f18 FUN_145df4f18 body=284 status=ok
// SIG undefined FUN_145df4f18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145df4f18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50490) {
    FUN_144b3d300(&DAT_14ca50490);
    if (DAT_14ca50490 == -1) {
      FUN_145df5034();
      FUN_140db5666(&DAT_14ca503e8,0,&DAT_14ca50380,L"FShadowProjectionPS2falsefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ee9a8,
                    FUN_1472ee980,&LAB_1472ee934,&LAB_1472ee930,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca503e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049aea);
      _Init_thread_footer(&DAT_14ca50490);
    }
  }
  return &DAT_14ca503e8;
}



// FUNCTION 145df5034 FUN_145df5034 body=210 status=ok
// SIG undefined FUN_145df5034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5034(void)

{
  if ((DAT_14ca503e7 & 2) == 0) {
    DAT_14ca503e7 = DAT_14ca503e7 | 2;
    _DAT_14ca50388 = L"FShadowProjectionPS2falsefalsefalse";
    _DAT_14ca503a0 = FUN_146826540;
    _DAT_14ca503a8 = FUN_146825d77;
    _DAT_14ca503b0 = FUN_146825fd6;
    _DAT_14ca503b8 = FUN_1407e02ea;
    _DAT_14ca503c0 = FUN_146826273;
    _DAT_14ca50398 = FUN_1472ee900;
    _DAT_14ca503d8 = 0xffffffff00000148;
    _DAT_14ca503e0 = 8;
    DAT_14ca503e4 = 0;
    _DAT_14ca503c8 = &LAB_1472ee92c;
    FUN_145df5106();
    FUN_145df51fa();
    FUN_1407e00cc(&DAT_14ca50380);
    return;
  }
  return;
}



// FUNCTION 145df5106 FUN_145df5106 body=121 status=ok
// SIG undefined FUN_145df5106(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5106(void)

{
  FUN_145df5180();
  _DAT_14ca57420 = L"ProjectionParameters";
  DAT_14ca5744a = FUN_140850cc5();
  _DAT_14ca57428 = FUN_14142e7bc();
  _DAT_14ca57438 = &LAB_14682652b;
  _DAT_14ca57440 = 0x1000000e0;
  _DAT_14ca57448 = 0;
  _DAT_14ca57430 = DAT_14ca50390;
  DAT_14ca50390 = &DAT_14ca57420;
  return;
}



// FUNCTION 145df5180 FUN_145df5180 body=121 status=ok
// SIG undefined FUN_145df5180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5180(void)

{
  FUN_145df5280();
  _DAT_14ca57450 = L"ShadowFadeFraction";
  DAT_14ca5747a = FUN_140850cc5();
  _DAT_14ca57458 = FUN_140ec6960();
  _DAT_14ca57468 = &LAB_14682652b;
  _DAT_14ca57470 = 0x100000130;
  _DAT_14ca57478 = 0;
  _DAT_14ca57460 = DAT_14ca50390;
  DAT_14ca50390 = &DAT_14ca57450;
  return;
}



// FUNCTION 145df51fa FUN_145df51fa body=133 status=ok
// SIG undefined FUN_145df51fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df51fa(void)

{
  _DAT_14ca574e0 = L"BASE";
  DAT_14ca5750a = 4;
  FUN_1411c95a0();
  _DAT_14ca574f0 = DAT_14ca50390;
  _DAT_14ca574e8 = &DAT_14ca4ff98;
  _DAT_14ca574f8 = &LAB_14682652b;
  DAT_14ca50390 = &DAT_14ca574e0;
  DAT_14ca503e5 = DAT_14ca503e5 + '\x01';
  _DAT_14ca57500 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca503e6 = DAT_14ca503e6 + '\x01';
  }
  return;
}



// FUNCTION 145df5280 FUN_145df5280 body=216 status=ok
// SIG undefined FUN_145df5280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5280(void)

{
  _DAT_14ca574b0 = L"LightPosition";
  DAT_14ca574da = FUN_140850cc5();
  _DAT_14ca574b8 = FUN_140ec6960();
  _DAT_14ca574c8 = &LAB_14682652b;
  _DAT_14ca574d0 = 0x10000013c;
  _DAT_14ca574d8 = 0;
  _DAT_14ca574c0 = DAT_14ca50390;
  DAT_14ca50390 = &DAT_14ca574b0;
  _DAT_14ca57480 = L"ShadowSharpen";
  DAT_14ca574aa = FUN_140850cc5();
  _DAT_14ca57488 = FUN_140ec6960();
  _DAT_14ca57498 = &LAB_14682652b;
  _DAT_14ca574a0 = 0x100000136;
  _DAT_14ca574a8 = 0;
  _DAT_14ca57490 = DAT_14ca50390;
  DAT_14ca50390 = &DAT_14ca57480;
  return;
}



// FUNCTION 145df5358 FUN_145df5358 body=284 status=ok
// SIG undefined FUN_145df5358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145df5358(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca506e0) {
    FUN_144b3d300(&DAT_14ca506e0);
    if (DAT_14ca506e0 == -1) {
      FUN_145df5474();
      FUN_140db5666(&DAT_14ca50638,0,&DAT_14ca505d0,L"FShadowProjectionPS4falsefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472eec74,
                    FUN_1472eec4c,&LAB_1472eec00,&LAB_1472eebfc,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b02);
      _Init_thread_footer(&DAT_14ca506e0);
    }
  }
  return &DAT_14ca50638;
}



// FUNCTION 145df5474 FUN_145df5474 body=210 status=ok
// SIG undefined FUN_145df5474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5474(void)

{
  if ((DAT_14ca50637 & 2) == 0) {
    DAT_14ca50637 = DAT_14ca50637 | 2;
    _DAT_14ca505d8 = L"FShadowProjectionPS4falsefalsefalse";
    _DAT_14ca505f0 = FUN_146826540;
    _DAT_14ca505f8 = FUN_146825d77;
    _DAT_14ca50600 = FUN_146825fd6;
    _DAT_14ca50608 = FUN_1407e02ea;
    _DAT_14ca50610 = FUN_146826273;
    _DAT_14ca505e8 = FUN_1472eebcc;
    _DAT_14ca50628 = 0xffffffff00000148;
    _DAT_14ca50630 = 8;
    DAT_14ca50634 = 0;
    _DAT_14ca50618 = &LAB_1472eebf8;
    FUN_145df5546();
    FUN_145df563a();
    FUN_1407e00cc(&DAT_14ca505d0);
    return;
  }
  return;
}



// FUNCTION 145df5546 FUN_145df5546 body=121 status=ok
// SIG undefined FUN_145df5546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df5546(void)

{
  FUN_145df55c0();
  _DAT_14ca57600 = L"ProjectionParameters";
  DAT_14ca5762a = FUN_140850cc5();
  _DAT_14ca57608 = FUN_14142e7bc();
  _DAT_14ca57618 = &LAB_14682652b;
  _DAT_14ca57620 = 0x1000000e0;
  _DAT_14ca57628 = 0;
  _DAT_14ca57610 = DAT_14ca505e0;
  DAT_14ca505e0 = &DAT_14ca57600;
  return;
}



// FUNCTION 145df55c0 FUN_145df55c0 body=121 status=ok
// SIG undefined FUN_145df55c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df55c0(void)

{
  FUN_145df56c0();
  _DAT_14ca57630 = L"ShadowFadeFraction";
  DAT_14ca5765a = FUN_140850cc5();
  _DAT_14ca57638 = FUN_140ec6960();
  _DAT_14ca57648 = &LAB_14682652b;
  _DAT_14ca57650 = 0x100000130;
  _DAT_14ca57658 = 0;
  _DAT_14ca57640 = DAT_14ca505e0;
  DAT_14ca505e0 = &DAT_14ca57630;
  return;
}



// FUNCTION 145df563a FUN_145df563a body=133 status=ok
// SIG undefined FUN_145df563a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df563a(void)

{
  _DAT_14ca576c0 = L"BASE";
  DAT_14ca576ea = 4;
  FUN_1411c95a0();
  _DAT_14ca576d0 = DAT_14ca505e0;
  _DAT_14ca576c8 = &DAT_14ca4ff98;
  _DAT_14ca576d8 = &LAB_14682652b;
  DAT_14ca505e0 = &DAT_14ca576c0;
  DAT_14ca50635 = DAT_14ca50635 + '\x01';
  _DAT_14ca576e0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50636 = DAT_14ca50636 + '\x01';
  }
  return;
}



// FUNCTION 145df56c0 FUN_145df56c0 body=216 status=ok
// SIG undefined FUN_145df56c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145df56c0(void)

{
  _DAT_14ca57690 = L"LightPosition";
  DAT_14ca576ba = FUN_140850cc5();
  _DAT_14ca57698 = FUN_140ec6960();
  _DAT_14ca576a8 = &LAB_14682652b;
  _DAT_14ca576b0 = 0x10000013c;
  _DAT_14ca576b8 = 0;
  _DAT_14ca576a0 = DAT_14ca505e0;
  DAT_14ca505e0 = &DAT_14ca57690;
  _DAT_14ca57660 = L"ShadowSharpen";
  DAT_14ca5768a = FUN_140850cc5();
  _DAT_14ca57668 = FUN_140ec6960();
  _DAT_14ca57678 = &LAB_14682652b;
  _DAT_14ca57680 = 0x100000136;
  _DAT_14ca57688 = 0;
  _DAT_14ca57670 = DAT_14ca505e0;
  DAT_14ca505e0 = &DAT_14ca57660;
  return;
}



// FUNCTION 145df5798 FUN_145df5798 body=33 status=ok
// SIG undefined FUN_145df5798(void)

void FUN_145df5798(void)

{
  if (DAT_14c952548 == 0) {
    DAT_14c952548 = FUN_145df57ba();
  }
  return;
}



// FUNCTION 145df57ba FUN_145df57ba body=192 status=ok
// SIG undefined FUN_145df57ba(void)

undefined8 FUN_145df57ba(void)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1457eb309();
  uVar1 = FUN_145bd2f8e();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_60,2);
  local_58 = 0x78;
  local_54 = 2;
  local_50 = 0;
  FUN_14000e6f0(&local_68,2);
  local_48 = local_68;
  local_40 = 0x70;
  local_3c = 2;
  local_38 = 0;
  local_70 = &local_30;
  local_78 = local_60;
  FUN_145df587b(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df587b FUN_145df587b body=135 status=ok
// SIG undefined FUN_145df587b(void)

void FUN_145df587b(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x80);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df5903 FUN_145df5903 body=33 status=ok
// SIG undefined FUN_145df5903(void)

void FUN_145df5903(void)

{
  if (DAT_14c9526b0 == 0) {
    DAT_14c9526b0 = FUN_145df5924();
  }
  return;
}



// FUNCTION 145df5924 FUN_145df5924 body=192 status=ok
// SIG undefined FUN_145df5924(void)

undefined8 FUN_145df5924(void)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1457eb309();
  uVar1 = FUN_145bd316e();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_60,2);
  local_58 = 0x70;
  local_54 = 2;
  local_50 = 0;
  FUN_14000e6f0(&local_68,2);
  local_48 = local_68;
  local_40 = 0x78;
  local_3c = 2;
  local_38 = 0;
  local_70 = &local_30;
  local_78 = local_60;
  FUN_145df59e5(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df59e5 FUN_145df59e5 body=135 status=ok
// SIG undefined FUN_145df59e5(void)

void FUN_145df59e5(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x98);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df5a6e FUN_145df5a6e body=40 status=ok
// SIG undefined FUN_145df5a6e(void)

undefined8 FUN_145df5a6e(undefined8 param_1,int param_2)

{
  FUN_145df5a96();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df5a96 FUN_145df5a96 body=141 status=ok
// SIG undefined FUN_145df5a96(void)

void FUN_145df5a96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f8e240;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df5b24 FUN_145df5b24 body=226 status=ok
// SIG undefined FUN_145df5b24(void)

longlong * FUN_145df5b24(longlong *param_1)

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
  pcVar13 = FUN_1462ec15e;
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



// FUNCTION 145df5c0c FUN_145df5c0c body=132 status=ok
// SIG undefined FUN_145df5c0c(void)

undefined1 * FUN_145df5c0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x79;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df5c08;
}



// FUNCTION 145df5c90 FUN_145df5c90 body=226 status=ok
// SIG undefined FUN_145df5c90(void)

longlong * FUN_145df5c90(longlong *param_1)

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
  pcVar13 = FUN_14631f006;
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



// FUNCTION 145df5d78 FUN_145df5d78 body=132 status=ok
// SIG undefined FUN_145df5d78(void)

undefined1 * FUN_145df5d78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Textures";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x360;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xb;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df5d74;
}



// FUNCTION 145df5dfc FUN_145df5dfc body=226 status=ok
// SIG undefined FUN_145df5dfc(void)

longlong * FUN_145df5dfc(longlong *param_1)

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
  pcVar13 = FUN_14631f51c;
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



// FUNCTION 145df5ee4 FUN_145df5ee4 body=132 status=ok
// SIG undefined FUN_145df5ee4(void)

undefined1 * FUN_145df5ee4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df5ee0;
}



// FUNCTION 145df5f74 FUN_145df5f74 body=350 status=ok
// SIG undefined FUN_145df5f74(void)

undefined8 * FUN_145df5f74(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4dafc0;
  *(undefined4 *)(param_1 + 7) = 4;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14588a226();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0xc2);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_38,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc4);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_40,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc6);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_48,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df60d4 FUN_145df60d4 body=40 status=ok
// SIG undefined FUN_145df60d4(void)

undefined8 FUN_145df60d4(undefined8 param_1,int param_2)

{
  FUN_145df60fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df60fc FUN_145df60fc body=141 status=ok
// SIG undefined FUN_145df60fc(void)

void FUN_145df60fc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5797d0;
  param_1[5] = &PTR_FUN_14a579a70;
  param_1[6] = &PTR_FUN_14a579a98;
  param_1[7] = &PTR_FUN_14a579aa8;
  param_1[8] = &PTR_FUN_14a579ab8;
  plVar2 = (longlong *)param_1[0x3f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x3d];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14148ef68(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df6194 FUN_145df6194 body=186 status=ok
// SIG undefined FUN_145df6194(void)

undefined8 * FUN_145df6194(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a8f70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb430) {
    FUN_144b3d300(&DAT_14caeb430);
    if (DAT_14caeb430 == -1) {
      FUN_141560540();
      atexit((_func_5014 *)&LAB_14356e073);
      _Init_thread_footer(&DAT_14caeb430);
    }
  }
  *(undefined2 *)(param_1 + 0x1b) = 0x200;
  return param_1;
}



// FUNCTION 145df625a FUN_145df625a body=170 status=ok
// SIG undefined FUN_145df625a(void)

undefined8 * FUN_145df625a(undefined8 *param_1)

{
  FUN_140834366();
  *param_1 = &PTR_FUN_14b1dedb0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0xffff;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  return param_1;
}



// FUNCTION 145df6304 FUN_145df6304 body=350 status=ok
// SIG undefined FUN_145df6304(void)

void FUN_145df6304(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_145df6462();
  lVar5 = FUN_1449e3f1e();
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar5 + 0x128);
  plVar4 = *(longlong **)(lVar5 + 0x130);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) {
      return;
    }
    *(longlong *)(param_1 + 0x398) = lVar3;
    plVar6 = *(longlong **)(param_1 + 0x3a0);
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (lVar3 == 0) goto LAB_145df637c;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x398) = lVar3;
    plVar6 = *(longlong **)(param_1 + 0x3a0);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_145df637c;
    }
    *(longlong **)(param_1 + 0x3a0) = plVar4;
    if (plVar6 == (longlong *)0x0) goto LAB_145df637c;
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
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_145df637c:
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145df645e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145df6462 FUN_145df6462 body=12 status=ok
// SIG undefined FUN_145df6462(void)

void FUN_145df6462(longlong param_1)

{
  FUN_14485c47a(param_1 + 0xa0);
  return;
}



// FUNCTION 145df6476 FUN_145df6476 body=173 status=ok
// SIG undefined FUN_145df6476(void)

undefined8 * FUN_145df6476(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc35270;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"CompletionMode");
  *param_1 = &PTR_FUN_14bc35e50;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"StartFrame");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"Duration");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"TimeScale");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"SequenceDependencyUid");
  return param_1;
}



// FUNCTION 145df6524 FUN_145df6524 body=38 status=ok
// SIG undefined FUN_145df6524(void)

undefined8 FUN_145df6524(undefined8 param_1,int param_2)

{
  FUN_145df654a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df654a FUN_145df654a body=345 status=ok
// SIG undefined FUN_145df654a(void)

void FUN_145df654a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b453a20;
  FUN_145df66cb(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x2c];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  puVar2 = (undefined8 *)param_1[0x2b];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2a];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x29];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar1 = (longlong *)param_1[0x28];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0);
  }
  puVar2 = (undefined8 *)param_1[0x26];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x25];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar1 = (longlong *)param_1[0x24];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,1);
  }
  FUN_145df66f6(param_1 + 5);
  *param_1 = &PTR_LAB_14b453a70;
  FUN_1449db362(param_1 + 3);
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df66a4 FUN_145df66a4 body=39 status=ok
// SIG undefined FUN_145df66a4(void)

IVirtualAllocator * FUN_145df66a4(IVirtualAllocator *param_1,int param_2)

{
  cohtml::IVirtualAllocator::~IVirtualAllocator(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df66cb FUN_145df66cb body=43 status=ok
// SIG undefined FUN_145df66cb(void)

void FUN_145df66cb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145df66f6 FUN_145df66f6 body=625 status=ok
// SIG undefined FUN_145df66f6(void)

void FUN_145df66f6(undefined8 *param_1)

{
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x60))(DAT_14c8407a8,*param_1);
  param_1[0x1c] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x1d],1);
  param_1[0x1a] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x1b],1);
  param_1[0x18] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x19],1);
  param_1[0x16] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x17],1);
  param_1[0x14] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x15],1);
  param_1[0x12] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x13],1);
  param_1[0x10] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x11],1);
  param_1[0xe] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0xf],1);
  param_1[0xc] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0xd],1);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145df6968(param_1 + 2);
  return;
}



// FUNCTION 145df6968 FUN_145df6968 body=55 status=ok
// SIG undefined FUN_145df6968(void)

void FUN_145df6968(longlong *param_1)

{
  FUN_145df69a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df69a0 FUN_145df69a0 body=123 status=ok
// SIG undefined FUN_145df69a0(void)

void FUN_145df69a0(longlong param_1,int param_2)

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



// FUNCTION 145df6a1c FUN_145df6a1c body=146 status=ok
// SIG undefined FUN_145df6a1c(void)

code * FUN_145df6a1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df6aae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DFAOUpsampleParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDFAOUpsampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000021b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8300;
  return FUN_145f66108;
}



// FUNCTION 145df6aae FUN_145df6aae body=261 status=ok
// SIG undefined FUN_145df6aae(void)

void FUN_145df6aae(void)

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
              0x110) < DAT_14c9c8380) {
    FUN_144b3d300(&DAT_14c9c8380);
    if (DAT_14c9c8380 == -1) {
      FUN_145df6bb4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDFAOUpsampleParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x5a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8300,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be766a);
      _Init_thread_footer(&DAT_14c9c8380);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df6bb4 FUN_145df6bb4 body=226 status=ok
// SIG undefined FUN_145df6bb4(void)

longlong * FUN_145df6bb4(longlong *param_1)

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
  pcVar13 = FUN_1462bec82;
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



// FUNCTION 145df6c9c FUN_145df6c9c body=130 status=ok
// SIG undefined FUN_145df6c9c(void)

undefined1 * FUN_145df6c9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BentNormalAOTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df6c98;
}



// FUNCTION 145df6d1e FUN_145df6d1e body=138 status=ok
// SIG undefined FUN_145df6d1e(void)

code * FUN_145df6d1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AOBufferBilinearUVMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715195e;
}



// FUNCTION 145df6da8 FUN_145df6da8 body=146 status=ok
// SIG undefined FUN_145df6da8(void)

code * FUN_145df6da8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df6e3a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UAVs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReservoirUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f73e8;
  return FUN_145e00328;
}



// FUNCTION 145df6e3a FUN_145df6e3a body=261 status=ok
// SIG undefined FUN_145df6e3a(void)

void FUN_145df6e3a(void)

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
              0x110) < DAT_14c9f7468) {
    FUN_144b3d300(&DAT_14c9f7468);
    if (DAT_14c9f7468 == -1) {
      FUN_145df6f40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReservoirUAVs";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f73e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59675);
      _Init_thread_footer(&DAT_14c9f7468);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df6f40 FUN_145df6f40 body=226 status=ok
// SIG undefined FUN_145df6f40(void)

longlong * FUN_145df6f40(longlong *param_1)

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
  pcVar13 = FUN_1462e0546;
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



// FUNCTION 145df7028 FUN_145df7028 body=130 status=ok
// SIG undefined FUN_145df7028(void)

undefined1 * FUN_145df7028(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWReservoirRayDirection";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df7024;
}



// FUNCTION 145df70aa FUN_145df70aa body=138 status=ok
// SIG undefined FUN_145df70aa(void)

code * FUN_145df70aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWReservoirTraceHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fa4c0;
}



// FUNCTION 145df7134 FUN_145df7134 body=144 status=ok
// SIG undefined FUN_145df7134(void)

code * FUN_145df7134(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df71c4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PerViewData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapPerViewParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca67430;
  return FUN_14732d6d8;
}



// FUNCTION 145df71c4 FUN_145df71c4 body=261 status=ok
// SIG undefined FUN_145df71c4(void)

void FUN_145df71c4(void)

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
              0x110) < DAT_14ca674b0) {
    FUN_144b3d300(&DAT_14ca674b0);
    if (DAT_14ca674b0 == -1) {
      FUN_145df72ca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVirtualShadowMapPerViewParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67430,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5403);
      _Init_thread_footer(&DAT_14ca674b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df72ca FUN_145df72ca body=226 status=ok
// SIG undefined FUN_145df72ca(void)

longlong * FUN_145df72ca(longlong *param_1)

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
  pcVar13 = FUN_1463109bc;
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



// FUNCTION 145df73b2 FUN_145df73b2 body=132 status=ok
// SIG undefined FUN_145df73b2(void)

undefined1 * FUN_145df73b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df73ae;
}



// FUNCTION 145df7436 FUN_145df7436 body=138 status=ok
// SIG undefined FUN_145df7436(void)

code * FUN_145df7436(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledLightsGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df73b2;
}



// FUNCTION 145df74c0 FUN_145df74c0 body=40 status=ok
// SIG undefined FUN_145df74c0(void)

undefined8 FUN_145df74c0(undefined8 param_1,int param_2)

{
  FUN_145df74e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df74e8 FUN_145df74e8 body=72 status=ok
// SIG undefined FUN_145df74e8(void)

void FUN_145df74e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1861c0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145df7530(param_1 + 0x20);
  thunk_FUN_140f51a94(param_1);
  return;
}



// FUNCTION 145df7530 FUN_145df7530 body=53 status=ok
// SIG undefined FUN_145df7530(void)

void FUN_145df7530(longlong *param_1)

{
  FUN_145df7566();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df7566 FUN_145df7566 body=378 status=ok
// SIG undefined FUN_145df7566(void)

void FUN_145df7566(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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



// FUNCTION 145df76ec FUN_145df76ec body=187 status=ok
// SIG undefined FUN_145df76ec(void)

undefined8 * FUN_145df76ec(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64be20;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeafb8) {
    FUN_144b3d300(&DAT_14caeafb8);
    if (DAT_14caeafb8 == -1) {
      FUN_1415605e6();
      atexit((_func_5014 *)&LAB_14356dafe);
      _Init_thread_footer(&DAT_14caeafb8);
    }
  }
  return param_1;
}



// FUNCTION 145df77b2 FUN_145df77b2 body=187 status=ok
// SIG undefined FUN_145df77b2(void)

undefined8 * FUN_145df77b2(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64c260;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeafd0) {
    FUN_144b3d300(&DAT_14caeafd0);
    if (DAT_14caeafd0 == -1) {
      FUN_14156068c();
      atexit((_func_5014 *)&LAB_14356db12);
      _Init_thread_footer(&DAT_14caeafd0);
    }
  }
  return param_1;
}



// FUNCTION 145df7878 FUN_145df7878 body=187 status=ok
// SIG undefined FUN_145df7878(void)

undefined8 * FUN_145df7878(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a658ff0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaef8) {
    FUN_144b3d300(&DAT_14caeaef8);
    if (DAT_14caeaef8 == -1) {
      FUN_141560732();
      atexit((_func_5014 *)&LAB_14356da5e);
      _Init_thread_footer(&DAT_14caeaef8);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 145df793e FUN_145df793e body=187 status=ok
// SIG undefined FUN_145df793e(void)

undefined8 * FUN_145df793e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65f6f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc08) {
    FUN_144b3d300(&DAT_14caebc08);
    if (DAT_14caebc08 == -1) {
      FUN_1415607d8();
      atexit((_func_5014 *)&LAB_14356f009);
      _Init_thread_footer(&DAT_14caebc08);
    }
  }
  return param_1;
}



// FUNCTION 145df7a04 FUN_145df7a04 body=187 status=ok
// SIG undefined FUN_145df7a04(void)

undefined8 * FUN_145df7a04(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a660a60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb4e8) {
    FUN_144b3d300(&DAT_14caeb4e8);
    if (DAT_14caeb4e8 == -1) {
      FUN_14156087e();
      atexit((_func_5014 *)&LAB_14356e11e);
      _Init_thread_footer(&DAT_14caeb4e8);
    }
  }
  return param_1;
}



// FUNCTION 145df7aca FUN_145df7aca body=187 status=ok
// SIG undefined FUN_145df7aca(void)

undefined8 * FUN_145df7aca(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a665280;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb158) {
    FUN_144b3d300(&DAT_14caeb158);
    if (DAT_14caeb158 == -1) {
      FUN_141560924();
      atexit((_func_5014 *)&LAB_14356dd1e);
      _Init_thread_footer(&DAT_14caeb158);
    }
  }
  return param_1;
}



// FUNCTION 145df7b90 FUN_145df7b90 body=187 status=ok
// SIG undefined FUN_145df7b90(void)

undefined8 * FUN_145df7b90(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67b030;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb9c8) {
    FUN_144b3d300(&DAT_14caeb9c8);
    if (DAT_14caeb9c8 == -1) {
      FUN_1415609ca();
      atexit((_func_5014 *)&LAB_14356ee29);
      _Init_thread_footer(&DAT_14caeb9c8);
    }
  }
  return param_1;
}



// FUNCTION 145df7c56 FUN_145df7c56 body=187 status=ok
// SIG undefined FUN_145df7c56(void)

undefined8 * FUN_145df7c56(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67b310;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba10) {
    FUN_144b3d300(&DAT_14caeba10);
    if (DAT_14caeba10 == -1) {
      FUN_141560a70();
      atexit((_func_5014 *)&LAB_14356ee65);
      _Init_thread_footer(&DAT_14caeba10);
    }
  }
  return param_1;
}



// FUNCTION 145df7d1c FUN_145df7d1c body=187 status=ok
// SIG undefined FUN_145df7d1c(void)

undefined8 * FUN_145df7d1c(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a675710;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb170) {
    FUN_144b3d300(&DAT_14caeb170);
    if (DAT_14caeb170 == -1) {
      FUN_141560b16();
      atexit((_func_5014 *)&LAB_14356dd32);
      _Init_thread_footer(&DAT_14caeb170);
    }
  }
  return param_1;
}



// FUNCTION 145df7de2 FUN_145df7de2 body=187 status=ok
// SIG undefined FUN_145df7de2(void)

undefined8 * FUN_145df7de2(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67ccf0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb18) {
    FUN_144b3d300(&DAT_14caebb18);
    if (DAT_14caebb18 == -1) {
      FUN_141560bbc();
      atexit((_func_5014 *)&LAB_14356ef41);
      _Init_thread_footer(&DAT_14caebb18);
    }
  }
  return param_1;
}



// FUNCTION 145df7ea8 FUN_145df7ea8 body=187 status=ok
// SIG undefined FUN_145df7ea8(void)

undefined8 * FUN_145df7ea8(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67b8d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba58) {
    FUN_144b3d300(&DAT_14caeba58);
    if (DAT_14caeba58 == -1) {
      FUN_141560c62();
      atexit((_func_5014 *)&LAB_14356eea1);
      _Init_thread_footer(&DAT_14caeba58);
    }
  }
  return param_1;
}



// FUNCTION 145df7f6e FUN_145df7f6e body=187 status=ok
// SIG undefined FUN_145df7f6e(void)

undefined8 * FUN_145df7f6e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a681240;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb230) {
    FUN_144b3d300(&DAT_14caeb230);
    if (DAT_14caeb230 == -1) {
      FUN_141560d08();
      atexit((_func_5014 *)&LAB_14356ddc9);
      _Init_thread_footer(&DAT_14caeb230);
    }
  }
  return param_1;
}



// FUNCTION 145df8034 FUN_145df8034 body=187 status=ok
// SIG undefined FUN_145df8034(void)

undefined8 * FUN_145df8034(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a681ae0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba40) {
    FUN_144b3d300(&DAT_14caeba40);
    if (DAT_14caeba40 == -1) {
      FUN_141560dae();
      atexit((_func_5014 *)&LAB_14356ee8d);
      _Init_thread_footer(&DAT_14caeba40);
    }
  }
  return param_1;
}



// FUNCTION 145df80fa FUN_145df80fa body=187 status=ok
// SIG undefined FUN_145df80fa(void)

undefined8 * FUN_145df80fa(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a681f50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd58) {
    FUN_144b3d300(&DAT_14caebd58);
    if (DAT_14caebd58 == -1) {
      FUN_141560e54();
      atexit((_func_5014 *)&LAB_14356f196);
      _Init_thread_footer(&DAT_14caebd58);
    }
  }
  return param_1;
}



// FUNCTION 145df81c0 FUN_145df81c0 body=187 status=ok
// SIG undefined FUN_145df81c0(void)

undefined8 * FUN_145df81c0(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a684d90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaa98) {
    FUN_144b3d300(&DAT_14caeaa98);
    if (DAT_14caeaa98 == -1) {
      FUN_141560efa();
      atexit((_func_5014 *)&LAB_14356d558);
      _Init_thread_footer(&DAT_14caeaa98);
    }
  }
  return param_1;
}



// FUNCTION 145df8286 FUN_145df8286 body=187 status=ok
// SIG undefined FUN_145df8286(void)

undefined8 * FUN_145df8286(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a689dd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb9f8) {
    FUN_144b3d300(&DAT_14caeb9f8);
    if (DAT_14caeb9f8 == -1) {
      FUN_141560fa0();
      atexit((_func_5014 *)&LAB_14356ee51);
      _Init_thread_footer(&DAT_14caeb9f8);
    }
  }
  return param_1;
}



// FUNCTION 145df834c FUN_145df834c body=187 status=ok
// SIG undefined FUN_145df834c(void)

undefined8 * FUN_145df834c(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68aa50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb9e0) {
    FUN_144b3d300(&DAT_14caeb9e0);
    if (DAT_14caeb9e0 == -1) {
      FUN_141561046();
      atexit((_func_5014 *)&LAB_14356ee3d);
      _Init_thread_footer(&DAT_14caeb9e0);
    }
  }
  return param_1;
}



// FUNCTION 145df8412 FUN_145df8412 body=187 status=ok
// SIG undefined FUN_145df8412(void)

undefined8 * FUN_145df8412(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68b250;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaee0) {
    FUN_144b3d300(&DAT_14caeaee0);
    if (DAT_14caeaee0 == -1) {
      FUN_1415610ec();
      atexit((_func_5014 *)&LAB_14356da4a);
      _Init_thread_footer(&DAT_14caeaee0);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 145df84d8 FUN_145df84d8 body=187 status=ok
// SIG undefined FUN_145df84d8(void)

undefined8 * FUN_145df84d8(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68da00;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebe30) {
    FUN_144b3d300(&DAT_14caebe30);
    if (DAT_14caebe30 == -1) {
      FUN_141561192();
      atexit((_func_5014 *)&LAB_14356f24a);
      _Init_thread_footer(&DAT_14caebe30);
    }
  }
  return param_1;
}



// FUNCTION 145df859e FUN_145df859e body=187 status=ok
// SIG undefined FUN_145df859e(void)

undefined8 * FUN_145df859e(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6ad430;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebec8) {
    FUN_144b3d300(&DAT_14caebec8);
    if (DAT_14caebec8 == -1) {
      FUN_141561238();
      atexit((_func_5014 *)&LAB_14356f2ec);
      _Init_thread_footer(&DAT_14caebec8);
    }
  }
  return param_1;
}



// FUNCTION 145df8664 FUN_145df8664 body=187 status=ok
// SIG undefined FUN_145df8664(void)

undefined8 * FUN_145df8664(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a6fd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf10) {
    FUN_144b3d300(&DAT_14caeaf10);
    if (DAT_14caeaf10 == -1) {
      FUN_1415612de();
      atexit((_func_5014 *)&LAB_14356da72);
      _Init_thread_footer(&DAT_14caeaf10);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 145df872a FUN_145df872a body=187 status=ok
// SIG undefined FUN_145df872a(void)

undefined8 * FUN_145df872a(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6ace50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd70) {
    FUN_144b3d300(&DAT_14caebd70);
    if (DAT_14caebd70 == -1) {
      FUN_141561384();
      atexit((_func_5014 *)&LAB_14356f1aa);
      _Init_thread_footer(&DAT_14caebd70);
    }
  }
  return param_1;
}



// FUNCTION 145df87f0 FUN_145df87f0 body=187 status=ok
// SIG undefined FUN_145df87f0(void)

undefined8 * FUN_145df87f0(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a4790;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaab0) {
    FUN_144b3d300(&DAT_14caeaab0);
    if (DAT_14caeaab0 == -1) {
      FUN_14156142a();
      atexit((_func_5014 *)&LAB_14356d56c);
      _Init_thread_footer(&DAT_14caeaab0);
    }
  }
  return param_1;
}



// FUNCTION 145df88ac FUN_145df88ac body=230 status=ok
// SIG undefined FUN_145df88ac(void)

void FUN_145df88ac(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df8992(plVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = &DAT_14cb3eb70;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df8992(plVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = &DAT_14cb3eb20;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df8992(plVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = &DAT_14cb3ebc0;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df8992(plVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = &DAT_14cb3ec10;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145df8992(plVar1,iVar2);
  }
  *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = &DAT_14cb3ec60;
  return;
}



// FUNCTION 145df8992 FUN_145df8992 body=132 status=ok
// SIG undefined FUN_145df8992(void)

void FUN_145df8992(longlong param_1,int param_2)

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



// FUNCTION 145df8a18 FUN_145df8a18 body=40 status=ok
// SIG undefined FUN_145df8a18(void)

undefined8 FUN_145df8a18(undefined8 param_1,int param_2)

{
  FUN_145df8a40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df8a40 FUN_145df8a40 body=274 status=ok
// SIG undefined FUN_145df8a40(void)

void FUN_145df8a40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7224f0;
  FUN_1412b8054(param_1 + 0x1e);
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
  plVar3 = (longlong *)param_1[0x19];
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
  FUN_144a7b030(param_1 + 0x14);
  if ((param_1[0x12] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x12] + 0x50));
  }
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_145df8b52(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df8b52 FUN_145df8b52 body=49 status=ok
// SIG undefined FUN_145df8b52(void)

void FUN_145df8b52(longlong param_1,int param_2)

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



// FUNCTION 145df8b84 FUN_145df8b84 body=226 status=ok
// SIG undefined FUN_145df8b84(void)

longlong * FUN_145df8b84(longlong *param_1)

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
  pcVar13 = FUN_14633766e;
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



// FUNCTION 145df8c68 FUN_145df8c68 body=138 status=ok
// SIG undefined FUN_145df8c68(void)

code * FUN_145df8c68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementsVertexBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000553;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df8cf2;
}



// FUNCTION 145df8cf2 FUN_145df8cf2 body=138 status=ok
// SIG undefined FUN_145df8cf2(void)

undefined1 * FUN_145df8cf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df8e06();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSceneTextureExtractsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x552;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cab07b8;
  return &LAB_1475118ca;
}



// FUNCTION 145df8d7c FUN_145df8d7c body=138 status=ok
// SIG undefined FUN_145df8d7c(void)

code * FUN_145df8d7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementsIndexBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000554;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df8c68;
}



// FUNCTION 145df8e06 FUN_145df8e06 body=261 status=ok
// SIG undefined FUN_145df8e06(void)

void FUN_145df8e06(void)

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
              0x110) < DAT_14cab0838) {
    FUN_144b3d300(&DAT_14cab0838);
    if (DAT_14cab0838 == -1) {
      FUN_145df8f0c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSceneTextureExtractsParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab07b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c7d52);
      _Init_thread_footer(&DAT_14cab0838);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df8f0c FUN_145df8f0c body=226 status=ok
// SIG undefined FUN_145df8f0c(void)

longlong * FUN_145df8f0c(longlong *param_1)

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
  pcVar13 = FUN_1463376f6;
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



// FUNCTION 145df8ff4 FUN_145df8ff4 body=138 status=ok
// SIG undefined FUN_145df8ff4(void)

undefined1 * FUN_145df8ff4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145df8ff0;
}



// FUNCTION 145df907e FUN_145df907e body=146 status=ok
// SIG undefined FUN_145df907e(void)

code * FUN_145df907e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145df9110();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceWorkGroupParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FInstanceWorkGroupParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000368;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17ac8;
  return FUN_1462f0eca;
}



// FUNCTION 145df9110 FUN_145df9110 body=261 status=ok
// SIG undefined FUN_145df9110(void)

void FUN_145df9110(void)

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
              0x110) < DAT_14ca17b48) {
    FUN_144b3d300(&DAT_14ca17b48);
    if (DAT_14ca17b48 == -1) {
      FUN_145df9216(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInstanceWorkGroupParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x255;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17ac8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2764b);
      _Init_thread_footer(&DAT_14ca17b48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df9216 FUN_145df9216 body=226 status=ok
// SIG undefined FUN_145df9216(void)

longlong * FUN_145df9216(longlong *param_1)

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
  pcVar13 = FUN_1462f0f5c;
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



// FUNCTION 145df92fe FUN_145df92fe body=132 status=ok
// SIG undefined FUN_145df92fe(void)

undefined1 * FUN_145df92fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InInstanceWorkArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x256;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145df92fa;
}



// FUNCTION 145df9382 FUN_145df9382 body=138 status=ok
// SIG undefined FUN_145df9382(void)

code * FUN_145df9382(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InInstanceWorkGroups";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FInstanceCullingGroupWork >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000257;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df92fe;
}



// FUNCTION 145df940c FUN_145df940c body=222 status=ok
// SIG undefined FUN_145df940c(void)

void FUN_145df940c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x390) + 0x10))(lVar4 + 0x390);
    if ((lVar4 != 0) && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar8 = 0;
      do {
        if (*(char *)(lVar2 + lVar8) == '\x01') {
          lVar3 = *(longlong *)(lVar2 + 8 + lVar8);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_14689c22e(lVar3);
          }
          else if (lVar3 == 0) goto LAB_145df94cb;
          plVar6 = *(longlong **)(lVar3 + 0xa8);
          if (plVar6 != (longlong *)0x0) {
            uVar5 = FUN_140b066c4();
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
            if (plVar6 != (longlong *)0x0) {
              uVar5 = FUN_140b066c4();
              plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
              if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
                (**(code **)(*plVar7 + 0x10))(plVar7,lVar4);
              }
            }
          }
        }
LAB_145df94cb:
        lVar8 = lVar8 + 0x38;
      } while ((longlong)iVar1 * 0x38 - lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 145df94ea FUN_145df94ea body=198 status=ok
// SIG undefined FUN_145df94ea(void)

void FUN_145df94ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140495e96();
  if (lVar5 != 0) {
    lVar5 = FUN_1403ca91c(lVar5);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x80);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar5 + 0x78);
        lVar6 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar6) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + lVar6), plVar3 != (longlong *)0x0)) {
            cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1 + -0x30);
            if (cVar4 != '\0') goto LAB_145df958e;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      local_48 = FUN_141187c1e;
      local_40 = 0;
      FUN_145df95b2(lVar5 + 0x78,local_38,param_1 + -0x30);
    }
  }
LAB_145df958e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df95b2 FUN_145df95b2 body=254 status=ok
// SIG undefined FUN_145df95b2(void)

undefined8
FUN_145df95b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9b77f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df96b2 FUN_145df96b2 body=40 status=ok
// SIG undefined FUN_145df96b2(void)

undefined8 FUN_145df96b2(undefined8 param_1,int param_2)

{
  FUN_145df96da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df96da FUN_145df96da body=106 status=ok
// SIG undefined FUN_145df96da(void)

void FUN_145df96da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc28df0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145df9744(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df9744 FUN_145df9744 body=53 status=ok
// SIG undefined FUN_145df9744(void)

void FUN_145df9744(longlong *param_1)

{
  FUN_145df977a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df977a FUN_145df977a body=345 status=ok
// SIG undefined FUN_145df977a(void)

void FUN_145df977a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145df98d4 FUN_145df98d4 body=169 status=ok
// SIG undefined FUN_145df98d4(void)

bool FUN_145df98d4(longlong param_1,undefined8 param_2,undefined4 param_3)

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



// FUNCTION 145df997e FUN_145df997e body=643 status=ok
// SIG undefined FUN_145df997e(void)

void FUN_145df997e(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_2 + 8);
  if (lVar7 == 0) {
    uVar6 = FUN_145c56e60();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 8) = lVar7;
  }
  if (*(longlong *)(param_2 + 10) == 0) {
    if ((*(longlong *)(param_2 + 6) == 0) || (lVar7 == 0)) goto LAB_145df99ca;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,param_2 + 6);
        *(longlong *)(param_2 + 10) = lVar7;
        if (lVar7 == 0) goto LAB_145df99ca;
        goto LAB_145df9a5b;
      }
    }
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  else {
LAB_145df9a5b:
    if (*(int *)(param_1 + 0x60) == *param_2) {
      lVar7 = FUN_1402735c8();
      lVar8 = FUN_1400d7050(param_1 + 0x30);
      if (lVar8 != 0) {
        lVar9 = FUN_144a5dd5e();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          uVar6 = FUN_1401b4c98(lVar8);
          puVar1 = (undefined8 *)(param_1 + 0x58);
          lVar9 = FUN_144a61814(uVar6,puVar1);
          if (lVar9 != 0) {
            FUN_1405a424c(uVar6,*puVar1);
          }
          *puVar1 = 0;
          uVar6 = FUN_1401b4c98(lVar8);
          uVar2 = *(undefined4 *)(lVar7 + 0x608);
          local_b0 = (undefined8 *)0x0;
          local_a8 = 0;
          FUN_1446efa72(&local_b0,0,3,0x10);
          puVar4 = local_b0;
          local_a8 = 3;
          *local_b0 = &PTR_LAB_14a1c8830;
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
          local_b0[2] = lVar8;
          *local_b0 = &PTR_FUN_14b9adb40;
          local_b0[3] = 0;
          FUN_14485c47a(local_b0 + 3,param_1);
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4[4] = FUN_14614dc30;
          local_98 = 0;
          local_90 = 0;
          FUN_14487d8d8(&local_98,&local_b0);
          local_58 = 1;
          local_b8 = local_a0;
          local_a0[0] = 0;
          local_9c = 0xbf800000;
          FUN_1406f4044(uVar6,puVar1,&local_98,uVar2);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
          FUN_1449db362(&local_b0);
        }
      }
    }
  }
LAB_145df99ca:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df9c02 FUN_145df9c02 body=143 status=ok
// SIG undefined FUN_145df9c02(void)

bool FUN_145df9c02(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145df9c92(&local_30);
  iVar1 = local_28;
  if ((&local_30 == param_3) || (local_28 < 2)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(int *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df9c92 FUN_145df9c92 body=55 status=ok
// SIG undefined FUN_145df9c92(void)

undefined8 * FUN_145df9c92(undefined8 *param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_145df9cc9(param_1);
  }
  else if (param_2 == '\x01') {
    FUN_1467e8b1a(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 145df9cc9 FUN_145df9cc9 body=211 status=ok
// SIG undefined FUN_145df9cc9(void)

undefined8 * FUN_145df9cc9(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c844ea0 == -1) {
    uVar2 = FUN_140e82e76();
    FUN_145df9d9d(&local_30,uVar2);
    if (DAT_14c844e90 != (void *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c844e90 = local_30;
    DAT_14c844e98 = local_28;
    DAT_14c844ea0 = local_24;
  }
  iVar1 = DAT_14c844e98;
  _Src = DAT_14c844e90;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145df9d9d FUN_145df9d9d body=489 status=ok
// SIG undefined FUN_145df9d9d(void)

undefined8 * FUN_145df9d9d(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong local_b8 [2];
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar5 = (undefined8 *)*param_2;
    lVar7 = (longlong)*(int *)(param_2 + 1) << 4;
    do {
      plVar3 = (longlong *)FUN_14054d1d4();
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(puVar5 + 1) != 0) {
        puVar4 = (undefined2 *)*puVar5;
      }
      cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,puVar4);
      if (cVar2 != '\0') {
        FUN_140c50e9c(&local_a8,puVar5,1);
        FUN_144a882a8(&local_70,&local_a8,L".locmeta");
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        iVar1 = local_68 + -1;
        if (local_68 == 0) {
          iVar1 = 0;
        }
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_c8 = iVar1 + 1 + (uint)(*(int *)(puVar5 + 1) == 0);
        local_b8[0] = 0;
        FUN_14125bce8(local_b8,*puVar5,*(int *)(puVar5 + 1),0);
        FUN_1401aebe8(local_b8,local_70,iVar1);
        cVar2 = FUN_141561b40(&local_a8,local_b8);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        _Src = local_a8;
        if (cVar2 != '\0') {
          *param_1 = 0;
          lVar6 = (longlong)(int)uStack_a0;
          *(int *)(param_1 + 1) = (int)uStack_a0;
          if (lVar6 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_1,uStack_a0 & 0xffffffff,0);
            memcpy((void *)*param_1,_Src,lVar6 * 2);
          }
        }
        FUN_145df9f88(&local_a8);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (cVar2 != '\0') goto LAB_145df9f1b;
      }
      puVar5 = puVar5 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_145df9f1b:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df9f88 FUN_145df9f88 body=73 status=ok
// SIG undefined FUN_145df9f88(void)

void FUN_145df9f88(longlong *param_1)

{
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145df9fd2 FUN_145df9fd2 body=287 status=ok
// SIG undefined FUN_145df9fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145df9fd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7f38) {
    FUN_144b3d300(&DAT_14c9e7f38);
    if (DAT_14c9e7f38 == -1) {
      FUN_145dfa0f2();
      FUN_140db5666(&DAT_14c9e7e90,1,&DAT_14c9e7e28,L"FLightFunctionVS",
                    L"/Engine/Private/LightFunctionVertexShader.usf",L"Main",0,1,FUN_1471d086a,
                    FUN_1471d0842,&LAB_142cded7e,&LAB_1471d083e,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14c9e7e90 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142cded9e);
      _Init_thread_footer(&DAT_14c9e7f38);
    }
  }
  return &DAT_14c9e7e90;
}



// FUNCTION 145dfa0f2 FUN_145dfa0f2 body=320 status=ok
// SIG undefined FUN_145dfa0f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfa0f2(void)

{
  if ((DAT_14c9e7e8f & 2) == 0) {
    DAT_14c9e7e8f = DAT_14c9e7e8f | 2;
    _DAT_14c9e7e30 = L"FLightFunctionVS";
    _DAT_14c9e7e48 = FUN_146826540;
    _DAT_14c9e7e50 = FUN_146825d77;
    _DAT_14c9e7e58 = FUN_146825fd6;
    _DAT_14c9e7e60 = FUN_1407e02ea;
    _DAT_14c9e7e68 = FUN_146826273;
    _DAT_14c9e7e40 = FUN_1471d0804;
    _DAT_14c9e7e80 = 0xffffffff00000110;
    _DAT_14c9e7e88 = 8;
    DAT_14c9e7e8c = 0;
    _DAT_14c9e7e70 = &LAB_1471d083a;
    _DAT_14c9e9fd8 = L"StencilingGeometryParameters";
    DAT_14c9ea002 = FUN_140850cc5();
    FUN_145dfa232();
    _DAT_14c9e9fe0 = &DAT_14c9e91b0;
    _DAT_14c9e9ff0 = &LAB_14682652b;
    _DAT_14c9e9ff8 = 0x1000000f8;
    _DAT_14c9ea000 = 0;
    _DAT_14c9e9fe8 = DAT_14c9e7e38;
    DAT_14c9e7e38 = &DAT_14c9e9fd8;
    FUN_145dfa37c();
    FUN_1407e00cc(&DAT_14c9e7e28);
    return;
  }
  return;
}



// FUNCTION 145dfa232 FUN_145dfa232 body=207 status=ok
// SIG undefined FUN_145dfa232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dfa232(void)

{
  if ((DAT_14c9e9217 & 2) == 0) {
    DAT_14c9e9217 = DAT_14c9e9217 | 2;
    _DAT_14c9e91b8 = L"FStencilingGeometryShaderParameters";
    _DAT_14c9e91d0 = FUN_146826540;
    _DAT_14c9e91d8 = FUN_146825d77;
    _DAT_14c9e91e0 = FUN_146825fd6;
    _DAT_14c9e91e8 = FUN_1407e02ea;
    _DAT_14c9e91f0 = FUN_146826273;
    _DAT_14c9e91c8 = &LAB_1471d2314;
    _DAT_14c9e9208 = 0xffffffff00000012;
    _DAT_14c9e9210 = 2;
    DAT_14c9e9214 = 0;
    _DAT_14c9e91f8 = &LAB_1471d2326;
    FUN_145dfa302();
    FUN_1407e00cc(&DAT_14c9e91b0);
  }
  return &DAT_14c9e91b0;
}



// FUNCTION 145dfa302 FUN_145dfa302 body=121 status=ok
// SIG undefined FUN_145dfa302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfa302(void)

{
  FUN_145dfa3f8();
  _DAT_14c9ea350 = L"StencilGeometryPosAndScale";
  DAT_14c9ea37a = FUN_140850cc5();
  _DAT_14c9ea358 = FUN_140ec6960();
  _DAT_14c9ea368 = &LAB_14682652b;
  _DAT_14c9ea370 = 0x100000000;
  _DAT_14c9ea378 = 0;
  _DAT_14c9ea360 = DAT_14c9e91c0;
  DAT_14c9e91c0 = &DAT_14c9ea350;
  return;
}



// FUNCTION 145dfa37c FUN_145dfa37c body=123 status=ok
// SIG undefined FUN_145dfa37c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfa37c(void)

{
  _DAT_14c9eb198 = L"BASE";
  DAT_14c9eb1c2 = 4;
  _DAT_14c9eb1a0 = FUN_141526006();
  _DAT_14c9eb1a8 = DAT_14c9e7e38;
  _DAT_14c9eb1b0 = &LAB_14682652b;
  DAT_14c9e7e38 = &DAT_14c9eb198;
  DAT_14c9e7e8d = DAT_14c9e7e8d + '\x01';
  _DAT_14c9eb1b8 = 0x100000000;
  if (*(char *)(_DAT_14c9eb1a0 + 100) != '\0') {
    DAT_14c9e7e8e = DAT_14c9e7e8e + '\x01';
  }
  return;
}



// FUNCTION 145dfa3f8 FUN_145dfa3f8 body=216 status=ok
// SIG undefined FUN_145dfa3f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfa3f8(void)

{
  _DAT_14c9ea3b0 = L"StencilConeTransform";
  DAT_14c9ea3da = FUN_140850cc5();
  _DAT_14c9ea3b8 = FUN_140ec6960();
  _DAT_14c9ea3c8 = &LAB_14682652b;
  _DAT_14c9ea3d0 = &DAT_10000000c;
  _DAT_14c9ea3d8 = 0;
  _DAT_14c9ea3c0 = DAT_14c9e91c0;
  DAT_14c9e91c0 = &DAT_14c9ea3b0;
  _DAT_14c9ea380 = L"StencilConeParameters";
  DAT_14c9ea3aa = FUN_140850cc5();
  _DAT_14c9ea388 = FUN_140ec6960();
  _DAT_14c9ea398 = &LAB_14682652b;
  _DAT_14c9ea3a0 = 0x100000006;
  _DAT_14c9ea3a8 = 0;
  _DAT_14c9ea390 = DAT_14c9e91c0;
  DAT_14c9e91c0 = &DAT_14c9ea380;
  return;
}



// FUNCTION 145dfa4d0 FUN_145dfa4d0 body=111 status=ok
// SIG undefined FUN_145dfa4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfa4d0(void)

{
  _DAT_14ca1c518 = 0xffffffff;
  _DAT_14ca1c51c = 0x105;
  DAT_14ca1c51e = 0;
  _DAT_14ca1c520 = 0;
  _DAT_14ca1c528 = 4;
  DAT_14ca1c530 = 0;
  DAT_14ca1c538 = 0;
  uRam000000014ca1c540 = 0;
  DAT_14ca1c548 = 0;
  _DAT_14ca1c550 = 0;
  DAT_14ca1c558 = 0;
  DAT_14ca1c560 = 0;
  DAT_14ca1c568 = 0;
  DAT_14ca1c570 = 0;
  DAT_14ca1c578 = 0;
  DAT_14ca1c510 = &PTR_FUN_14a2a0ea0;
  FUN_145dfa540();
  return;
}



// FUNCTION 145dfa540 FUN_145dfa540 body=71 status=ok
// SIG undefined FUN_145dfa540(void)

void FUN_145dfa540(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca1c51d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145dfa572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca1c510 + 0x18))(&DAT_14ca1c510,uVar1,*(code **)(DAT_14ca1c510 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca1c510,0);
  return;
}



// FUNCTION 145dfa592 FUN_145dfa592 body=170 status=ok
// SIG undefined FUN_145dfa592(void)

undefined8 * FUN_145dfa592(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4db8d0;
  param_1[8] = &PTR_FUN_14a4dbbb0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0xf14);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0xbc);
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfa648 FUN_145dfa648 body=170 status=ok
// SIG undefined FUN_145dfa648(void)

undefined8 * FUN_145dfa648(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *param_1 = &PTR_FUN_14ace2d70;
  lVar1 = FUN_1459ec246();
  FUN_1446f470e(&local_28,L"ReceiveTestCondition",1);
  lVar2 = FUN_1400796d0(param_1[2],local_28,1);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(longlong *)(lVar2 + 0x20) != lVar1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfa6fe FUN_145dfa6fe body=170 status=ok
// SIG undefined FUN_145dfa6fe(void)

undefined8 * FUN_145dfa6fe(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *param_1 = &PTR_FUN_14ace32f0;
  lVar1 = FUN_1459ec332();
  FUN_1446f470e(&local_28,L"ReceiveGetScore",1);
  lVar2 = FUN_1400796d0(param_1[2],local_28,1);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(longlong *)(lVar2 + 0x20) != lVar1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfa7b2 FUN_145dfa7b2 body=83 status=ok
// SIG undefined FUN_145dfa7b2(void)

undefined8 * FUN_145dfa7b2(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b40c210;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 1;
  *(undefined8 *)((longlong)param_1 + 0xa4) = DAT_14cb809e8;
  return param_1;
}



// FUNCTION 145dfa80e FUN_145dfa80e body=174 status=ok
// SIG undefined FUN_145dfa80e(void)

undefined8 * FUN_145dfa80e(undefined8 *param_1)

{
  FUN_145cc9e02();
  *param_1 = &PTR_FUN_14b1df4d0;
  param_1[0x94] = &PTR_FUN_14b1df7d0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  return param_1;
}



// FUNCTION 145dfa8bc FUN_145dfa8bc body=83 status=ok
// SIG undefined FUN_145dfa8bc(void)

undefined8 FUN_145dfa8bc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_140149a73(lVar1,0);
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_141561c6c(lVar1);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145dfa904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1,*(code **)(*plVar2 + 0x88));
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 145dfa910 FUN_145dfa910 body=21 status=ok
// SIG undefined FUN_145dfa910(void)

undefined8 FUN_145dfa910(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145dfa926 FUN_145dfa926 body=63 status=ok
// SIG undefined FUN_145dfa926(void)

void FUN_145dfa926(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_140526f64();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_141561c74(param_1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145dfa962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(code **)(*plVar2 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 145dfa96e FUN_145dfa96e body=174 status=ok
// SIG undefined FUN_145dfa96e(void)

undefined8 * FUN_145dfa96e(undefined8 *param_1)

{
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b629880;
  param_1[5] = &PTR_LAB_14b629b80;
  param_1[6] = &PTR_LAB_14b629bb0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0xffffffff00000000;
  FUN_1446ddc76(param_1 + 0x17,"no_augment",1);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1446ddc76((longlong)param_1 + 0xc4,"no_capstone",1);
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 145dfaa1c FUN_145dfaa1c body=105 status=ok
// SIG undefined FUN_145dfaa1c(void)

void FUN_145dfaa1c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145998882();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145dfaa86(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfaa86 FUN_145dfaa86 body=76 status=ok
// SIG undefined FUN_145dfaa86(void)

void FUN_145dfaa86(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145998882();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145dfaac3;
    }
  }
  lVar2 = 0;
LAB_145dfaac3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145dfaad2 FUN_145dfaad2 body=96 status=ok
// SIG undefined FUN_145dfaad2(void)

void FUN_145dfaad2(longlong param_1)

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
      lVar1 = FUN_1459ce1b4(lVar1);
      if (lVar1 != 0) {
        FUN_141561d32(lVar1,param_1 + 0x38);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145dfab32 FUN_145dfab32 body=40 status=ok
// SIG undefined FUN_145dfab32(void)

undefined8 FUN_145dfab32(undefined8 param_1,int param_2)

{
  FUN_145dfab5a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dfab5a FUN_145dfab5a body=142 status=ok
// SIG undefined FUN_145dfab5a(void)

void FUN_145dfab5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc93280;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed6e2(param_1 + 0x3a);
  FUN_140fed6e2(param_1 + 0x36);
  FUN_140fed6e2(param_1 + 0x32);
  FUN_140fed6e2(param_1 + 0x2e);
  FUN_140fed6e2(param_1 + 0x2a);
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145dfabf4 FUN_145dfabf4 body=188 status=ok
// SIG undefined FUN_145dfabf4(void)

undefined8 * FUN_145dfabf4(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bca9ff0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13890) {
    FUN_144b3d300(&DAT_14cc13890);
    if (DAT_14cc13890 == -1) {
      FUN_141561d88();
      atexit((_func_5014 *)&LAB_1444f20cf);
      _Init_thread_footer(&DAT_14cc13890);
    }
  }
  return param_1;
}



// FUNCTION 145dfacbc FUN_145dfacbc body=188 status=ok
// SIG undefined FUN_145dfacbc(void)

undefined8 * FUN_145dfacbc(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaa4c0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc138c0) {
    FUN_144b3d300(&DAT_14cc138c0);
    if (DAT_14cc138c0 == -1) {
      FUN_141561e2e();
      atexit((_func_5014 *)&LAB_1444f20e3);
      _Init_thread_footer(&DAT_14cc138c0);
    }
  }
  return param_1;
}



// FUNCTION 145dfad84 FUN_145dfad84 body=188 status=ok
// SIG undefined FUN_145dfad84(void)

undefined8 * FUN_145dfad84(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaa9a0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc138f0) {
    FUN_144b3d300(&DAT_14cc138f0);
    if (DAT_14cc138f0 == -1) {
      FUN_141561ed4();
      atexit((_func_5014 *)&LAB_1444f20f7);
      _Init_thread_footer(&DAT_14cc138f0);
    }
  }
  return param_1;
}



// FUNCTION 145dfae4c FUN_145dfae4c body=188 status=ok
// SIG undefined FUN_145dfae4c(void)

undefined8 * FUN_145dfae4c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaae70;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13920) {
    FUN_144b3d300(&DAT_14cc13920);
    if (DAT_14cc13920 == -1) {
      FUN_141561f7a();
      atexit((_func_5014 *)&LAB_1444f210b);
      _Init_thread_footer(&DAT_14cc13920);
    }
  }
  return param_1;
}



// FUNCTION 145dfaf14 FUN_145dfaf14 body=188 status=ok
// SIG undefined FUN_145dfaf14(void)

undefined8 * FUN_145dfaf14(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcabaf0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13980) {
    FUN_144b3d300(&DAT_14cc13980);
    if (DAT_14cc13980 == -1) {
      FUN_141562020();
      atexit((_func_5014 *)&LAB_1444f2133);
      _Init_thread_footer(&DAT_14cc13980);
    }
  }
  return param_1;
}



// FUNCTION 145dfafdc FUN_145dfafdc body=188 status=ok
// SIG undefined FUN_145dfafdc(void)

undefined8 * FUN_145dfafdc(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcac560;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc139f8) {
    FUN_144b3d300(&DAT_14cc139f8);
    if (DAT_14cc139f8 == -1) {
      FUN_1415620c6();
      atexit((_func_5014 *)&LAB_1444f2192);
      _Init_thread_footer(&DAT_14cc139f8);
    }
  }
  return param_1;
}



// FUNCTION 145dfb0a4 FUN_145dfb0a4 body=188 status=ok
// SIG undefined FUN_145dfb0a4(void)

undefined8 * FUN_145dfb0a4(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaca30;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13a28) {
    FUN_144b3d300(&DAT_14cc13a28);
    if (DAT_14cc13a28 == -1) {
      FUN_14156216c();
      atexit((_func_5014 *)&LAB_1444f21a6);
      _Init_thread_footer(&DAT_14cc13a28);
    }
  }
  return param_1;
}



// FUNCTION 145dfb16c FUN_145dfb16c body=188 status=ok
// SIG undefined FUN_145dfb16c(void)

undefined8 * FUN_145dfb16c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcacf00;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13a58) {
    FUN_144b3d300(&DAT_14cc13a58);
    if (DAT_14cc13a58 == -1) {
      FUN_141562212();
      atexit((_func_5014 *)&LAB_1444f21ba);
      _Init_thread_footer(&DAT_14cc13a58);
    }
  }
  return param_1;
}



// FUNCTION 145dfb234 FUN_145dfb234 body=188 status=ok
// SIG undefined FUN_145dfb234(void)

undefined8 * FUN_145dfb234(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcad3c0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13a88) {
    FUN_144b3d300(&DAT_14cc13a88);
    if (DAT_14cc13a88 == -1) {
      FUN_1415622b8();
      atexit((_func_5014 *)&LAB_1444f21ce);
      _Init_thread_footer(&DAT_14cc13a88);
    }
  }
  return param_1;
}



// FUNCTION 145dfb2fc FUN_145dfb2fc body=188 status=ok
// SIG undefined FUN_145dfb2fc(void)

undefined8 * FUN_145dfb2fc(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcad890;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13ab8) {
    FUN_144b3d300(&DAT_14cc13ab8);
    if (DAT_14cc13ab8 == -1) {
      FUN_14156235e();
      atexit((_func_5014 *)&LAB_1444f21e2);
      _Init_thread_footer(&DAT_14cc13ab8);
    }
  }
  return param_1;
}



// FUNCTION 145dfb3c4 FUN_145dfb3c4 body=188 status=ok
// SIG undefined FUN_145dfb3c4(void)

undefined8 * FUN_145dfb3c4(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcadd60;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13ae8) {
    FUN_144b3d300(&DAT_14cc13ae8);
    if (DAT_14cc13ae8 == -1) {
      FUN_141562404();
      atexit((_func_5014 *)&LAB_1444f21f6);
      _Init_thread_footer(&DAT_14cc13ae8);
    }
  }
  return param_1;
}



// FUNCTION 145dfb48c FUN_145dfb48c body=188 status=ok
// SIG undefined FUN_145dfb48c(void)

undefined8 * FUN_145dfb48c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcae7f0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13b48) {
    FUN_144b3d300(&DAT_14cc13b48);
    if (DAT_14cc13b48 == -1) {
      FUN_1415624aa();
      atexit((_func_5014 *)&LAB_1444f221e);
      _Init_thread_footer(&DAT_14cc13b48);
    }
  }
  return param_1;
}



// FUNCTION 145dfb554 FUN_145dfb554 body=188 status=ok
// SIG undefined FUN_145dfb554(void)

undefined8 * FUN_145dfb554(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcb05d0;
  param_1[0x16] = 0;
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
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13c80) {
    FUN_144b3d300(&DAT_14cc13c80);
    if (DAT_14cc13c80 == -1) {
      FUN_141562550();
      atexit((_func_5014 *)&LAB_1444f22aa);
      _Init_thread_footer(&DAT_14cc13c80);
    }
  }
  return param_1;
}



// FUNCTION 145dfb618 FUN_145dfb618 body=261 status=ok
// SIG undefined FUN_145dfb618(void)

undefined8 * FUN_145dfb618(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14007ca06();
  FUN_140b4b170(param_1);
  *param_1 = &PTR_FUN_14beae0d0;
  memset(param_1 + 6,0,0x110);
  FUN_145dfb71e(local_58,param_1,FUN_145b27f86);
  FUN_14126834e(&DAT_14cb10aa8,&local_60,local_58);
  FUN_1401cb1ee(local_58);
  param_1[0x12] = local_60;
  FUN_145dfb71e(local_58,param_1,FUN_145b28040);
  FUN_14126834e(&DAT_14cb10ae8,&local_60,local_58);
  FUN_1401cb1ee(local_58);
  param_1[0x13] = local_60;
  FUN_145dfb7f8(local_58,param_1);
  param_1[0x14] = local_58[0];
  *(undefined2 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfb71e FUN_145dfb71e body=218 status=ok
// SIG undefined FUN_145dfb71e(void)

LPCRITICAL_SECTION FUN_145dfb71e(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14beaf2a0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145dfb7f8 FUN_145dfb7f8 body=239 status=ok
// SIG undefined FUN_145dfb7f8(void)

undefined8 FUN_145dfb7f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14abe5a20;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14beaf310;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_141006b86;
  FUN_145a58104(&DAT_14caf6fc8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfb8e8 FUN_145dfb8e8 body=142 status=ok
// SIG undefined FUN_145dfb8e8(void)

code * FUN_145dfb8e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfb976();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Culling";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCullingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1600000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145cf56f2;
}



// FUNCTION 145dfb976 FUN_145dfb976 body=268 status=ok
// SIG undefined FUN_145dfb976(void)

undefined * FUN_145dfb976(void)

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
              0x110) < DAT_14c9d55b0) {
    FUN_144b3d300(&DAT_14c9d55b0);
    if (DAT_14c9d55b0 == -1) {
      FUN_145dfba84(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceCullingParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x53;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5530,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e29a);
      _Init_thread_footer(&DAT_14c9d55b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfba84 FUN_145dfba84 body=226 status=ok
// SIG undefined FUN_145dfba84(void)

longlong * FUN_145dfba84(longlong *param_1)

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
  pcVar13 = FUN_1462c907a;
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



// FUNCTION 145dfbb6c FUN_145dfbb6c body=132 status=ok
// SIG undefined FUN_145dfbb6c(void)

undefined1 * FUN_145dfbb6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bCullingEnable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfbb68;
}



// FUNCTION 145dfbbf0 FUN_145dfbbf0 body=138 status=ok
// SIG undefined FUN_145dfbbf0(void)

code * FUN_145dfbbf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullingIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175cfc;
}



// FUNCTION 145dfbc7a FUN_145dfbc7a body=142 status=ok
// SIG undefined FUN_145dfbc7a(void)

code * FUN_145dfbc7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfbd08();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Geometry";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FStencilingGeometryShaderParameters::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d4be20;
}



// FUNCTION 145dfbd08 FUN_145dfbd08 body=268 status=ok
// SIG undefined FUN_145dfbd08(void)

undefined * FUN_145dfbd08(void)

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
              0x110) < DAT_14c9ebb00) {
    FUN_144b3d300(&DAT_14c9ebb00);
    if (DAT_14c9ebb00 == -1) {
      FUN_145dfbe16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x106;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9eba80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4889);
      _Init_thread_footer(&DAT_14c9ebb00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9eba80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfbe16 FUN_145dfbe16 body=226 status=ok
// SIG undefined FUN_145dfbe16(void)

longlong * FUN_145dfbe16(longlong *param_1)

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
  pcVar13 = FUN_1462d5b54;
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



// FUNCTION 145dfbefe FUN_145dfbefe body=132 status=ok
// SIG undefined FUN_145dfbefe(void)

undefined1 * FUN_145dfbefe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilingGeometryPosAndScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x107;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfbefa;
}



// FUNCTION 145dfbf82 FUN_145dfbf82 body=138 status=ok
// SIG undefined FUN_145dfbf82(void)

code * FUN_145dfbf82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilingConeParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfbefe;
}



// FUNCTION 145dfc00c FUN_145dfc00c body=120 status=ok
// SIG undefined FUN_145dfc00c(void)

undefined8 * FUN_145dfc00c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e90fd0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_149e90ff0;
  return param_1;
}



// FUNCTION 145dfc084 FUN_145dfc084 body=146 status=ok
// SIG undefined FUN_145dfc084(void)

code * FUN_145dfc084(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dfc116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsDebugData::FWriteParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000000f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9d4608;
  return FUN_1462c8b0a;
}



// FUNCTION 145dfc116 FUN_145dfc116 body=261 status=ok
// SIG undefined FUN_145dfc116(void)

void FUN_145dfc116(void)

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
              0x110) < DAT_14c9d4688) {
    FUN_144b3d300(&DAT_14c9d4688);
    if (DAT_14c9d4688 == -1) {
      FUN_145dfc21c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FWriteParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x148;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6ff);
      _Init_thread_footer(&DAT_14c9d4688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfc21c FUN_145dfc21c body=226 status=ok
// SIG undefined FUN_145dfc21c(void)

longlong * FUN_145dfc21c(longlong *param_1)

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
  pcVar13 = FUN_1462c8b9a;
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



// FUNCTION 145dfc304 FUN_145dfc304 body=136 status=ok
// SIG undefined FUN_145dfc304(void)

code * FUN_145dfc304(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175838;
}



// FUNCTION 145dfc38c FUN_145dfc38c body=138 status=ok
// SIG undefined FUN_145dfc38c(void)

code * FUN_145dfc38c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_ShadingPointCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000014c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471757ae;
}



// FUNCTION 145dfc416 FUN_145dfc416 body=655 status=ok
// SIG undefined FUN_145dfc416(void)

void FUN_145dfc416(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  *param_1 = &DAT_14a29ca00;
  if (param_1[0x58] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x58] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = (undefined8 *)param_1[0x57];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_145dfc70b(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_145dfc6a5(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x4f];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0x4e];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0x4d];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x31];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x13);
  FUN_145dfc6d6(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145dfc6a5 FUN_145dfc6a5 body=49 status=ok
// SIG undefined FUN_145dfc6a5(void)

void FUN_145dfc6a5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145dfc6d6 FUN_145dfc6d6 body=53 status=ok
// SIG undefined FUN_145dfc6d6(void)

void FUN_145dfc6d6(longlong *param_1)

{
  FUN_145dfc74c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dfc70b FUN_145dfc70b body=65 status=ok
// SIG undefined FUN_145dfc70b(void)

void FUN_145dfc70b(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      puVar1 = (uint *)(*param_1 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145dfc74c FUN_145dfc74c body=90 status=ok
// SIG undefined FUN_145dfc74c(void)

void FUN_145dfc74c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
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



// FUNCTION 145dfc7a6 FUN_145dfc7a6 body=146 status=ok
// SIG undefined FUN_145dfc7a6(void)

code * FUN_145dfc7a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dfc838();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBShaderParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHZBShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000ad7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca68288;
  return FUN_145f09e12;
}



// FUNCTION 145dfc838 FUN_145dfc838 body=261 status=ok
// SIG undefined FUN_145dfc838(void)

void FUN_145dfc838(void)

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
              0x110) < DAT_14ca68308) {
    FUN_144b3d300(&DAT_14ca68308);
    if (DAT_14ca68308 == -1) {
      FUN_145dfc93e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHZBShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xab0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68288,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64c5);
      _Init_thread_footer(&DAT_14ca68308);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dfc93e FUN_145dfc93e body=226 status=ok
// SIG undefined FUN_145dfc93e(void)

longlong * FUN_145dfc93e(longlong *param_1)

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
  pcVar13 = FUN_14631275a;
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



// FUNCTION 145dfca26 FUN_145dfca26 body=136 status=ok
// SIG undefined FUN_145dfca26(void)

code * FUN_145dfca26(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBPageRectBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint4 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000ab3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfcaae;
}



// FUNCTION 145dfcaae FUN_145dfcaae body=138 status=ok
// SIG undefined FUN_145dfcaae(void)

code * FUN_145dfcaae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBPageFlags";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000ab2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147330d1e;
}



// FUNCTION 145dfcb38 FUN_145dfcb38 body=210 status=ok
// SIG undefined FUN_145dfcb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfcb38(void)

{
  if ((DAT_14cade31f & 2) == 0) {
    DAT_14cade31f = DAT_14cade31f | 2;
    _DAT_14cade2c0 = L"FGeometryCacheVertexFactoryShaderParameters";
    _DAT_14cade2d8 = FUN_146826540;
    _DAT_14cade2e0 = FUN_146825d77;
    _DAT_14cade2e8 = FUN_146825fd6;
    _DAT_14cade2f0 = FUN_1407e02ea;
    _DAT_14cade2f8 = FUN_146826273;
    _DAT_14cade2d0 = &LAB_147ad690e;
    _DAT_14cade310 = 0xffffffff00000024;
    _DAT_14cade318 = 4;
    DAT_14cade31c = 0;
    _DAT_14cade300 = &LAB_147ad6924;
    FUN_145dfcc0a();
    FUN_145dfcd78();
    FUN_1407e00cc(&DAT_14cade2b8);
    return;
  }
  return;
}



// FUNCTION 145dfcc0a FUN_145dfcc0a body=121 status=ok
// SIG undefined FUN_145dfcc0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfcc0a(void)

{
  FUN_145dfcc84();
  _DAT_14cae20d8 = L"MeshOrigin";
  DAT_14cae2102 = FUN_140850cc5();
  _DAT_14cae20e0 = FUN_140ec6960();
  _DAT_14cae20f0 = &LAB_14682652b;
  _DAT_14cae20f8 = &DAT_100000004;
  _DAT_14cae2100 = 0;
  _DAT_14cae20e8 = DAT_14cade2c8;
  DAT_14cade2c8 = &DAT_14cae20d8;
  return;
}



// FUNCTION 145dfcc84 FUN_145dfcc84 body=121 status=ok
// SIG undefined FUN_145dfcc84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfcc84(void)

{
  FUN_145dfccfe();
  _DAT_14cae2108 = L"MeshExtension";
  DAT_14cae2132 = FUN_140850cc5();
  _DAT_14cae2110 = FUN_140ec6960();
  _DAT_14cae2120 = &LAB_14682652b;
  _DAT_14cae2128 = &DAT_10000000a;
  _DAT_14cae2130 = 0;
  _DAT_14cae2118 = DAT_14cade2c8;
  DAT_14cade2c8 = &DAT_14cae2108;
  return;
}



// FUNCTION 145dfccfe FUN_145dfccfe body=121 status=ok
// SIG undefined FUN_145dfccfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfccfe(void)

{
  FUN_145dfcdf4();
  _DAT_14cae2138 = L"MotionBlurDataOrigin";
  DAT_14cae2162 = FUN_140850cc5();
  _DAT_14cae2140 = FUN_140ec6960();
  _DAT_14cae2150 = &LAB_14682652b;
  _DAT_14cae2158 = &DAT_100000010;
  _DAT_14cae2160 = 0;
  _DAT_14cae2148 = DAT_14cade2c8;
  DAT_14cade2c8 = &DAT_14cae2138;
  return;
}



// FUNCTION 145dfcd78 FUN_145dfcd78 body=123 status=ok
// SIG undefined FUN_145dfcd78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfcd78(void)

{
  _DAT_14cae2550 = L"BASE";
  DAT_14cae257a = 4;
  _DAT_14cae2558 = FUN_1412f7d22();
  _DAT_14cae2560 = DAT_14cade2c8;
  _DAT_14cae2568 = &LAB_14682652b;
  DAT_14cade2c8 = &DAT_14cae2550;
  DAT_14cade31d = DAT_14cade31d + '\x01';
  _DAT_14cae2570 = 0x100000000;
  if (*(char *)(_DAT_14cae2558 + 100) != '\0') {
    DAT_14cade31e = DAT_14cade31e + '\x01';
  }
  return;
}



// FUNCTION 145dfcdf4 FUN_145dfcdf4 body=216 status=ok
// SIG undefined FUN_145dfcdf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dfcdf4(void)

{
  _DAT_14cae2198 = L"MotionBlurPositionScale";
  DAT_14cae21c2 = FUN_140850cc5();
  _DAT_14cae21a0 = FUN_140ec6960();
  _DAT_14cae21b0 = &LAB_14682652b;
  _DAT_14cae21b8 = &DAT_10000001c;
  _DAT_14cae21c0 = 0;
  _DAT_14cae21a8 = DAT_14cade2c8;
  DAT_14cade2c8 = &DAT_14cae2198;
  _DAT_14cae2168 = L"MotionBlurDataExtension";
  DAT_14cae2192 = FUN_140850cc5();
  _DAT_14cae2170 = FUN_140ec6960();
  _DAT_14cae2180 = &LAB_14682652b;
  _DAT_14cae2188 = 0x100000016;
  _DAT_14cae2190 = 0;
  _DAT_14cae2178 = DAT_14cade2c8;
  DAT_14cade2c8 = &DAT_14cae2168;
  return;
}



// FUNCTION 145dfcecc FUN_145dfcecc body=216 status=ok
// SIG undefined FUN_145dfcecc(void)

undefined8 * FUN_145dfcecc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dfcfb2 FUN_145dfcfb2 body=216 status=ok
// SIG undefined FUN_145dfcfb2(void)

undefined8 * FUN_145dfcfb2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dfd098 FUN_145dfd098 body=216 status=ok
// SIG undefined FUN_145dfd098(void)

undefined8 * FUN_145dfd098(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145dfd17e FUN_145dfd17e body=216 status=ok
// SIG undefined FUN_145dfd17e(void)

undefined8 * FUN_145dfd17e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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


