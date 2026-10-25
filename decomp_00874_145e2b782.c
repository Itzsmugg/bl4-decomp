// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e2b782 FUN_145e2b782 body=53 status=ok
// SIG undefined FUN_145e2b782(void)

void FUN_145e2b782(longlong *param_1)

{
  FUN_145e2b940();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2b7b8 FUN_145e2b7b8 body=53 status=ok
// SIG undefined FUN_145e2b7b8(void)

void FUN_145e2b7b8(longlong *param_1)

{
  FUN_145e2ba9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2b7ee FUN_145e2b7ee body=336 status=ok
// SIG undefined FUN_145e2b7ee(void)

void FUN_145e2b7ee(longlong *param_1)

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
      FUN_1493e78b4((longlong)iStack_4c * 0x28 + *local_68);
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



// FUNCTION 145e2b940 FUN_145e2b940 body=345 status=ok
// SIG undefined FUN_145e2b940(void)

void FUN_145e2b940(longlong *param_1)

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



// FUNCTION 145e2ba9a FUN_145e2ba9a body=369 status=ok
// SIG undefined FUN_145e2ba9a(void)

void FUN_145e2ba9a(longlong *param_1)

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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x50);
      FUN_1493e791a(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 145e2bc0c FUN_145e2bc0c body=38 status=ok
// SIG undefined FUN_145e2bc0c(void)

undefined8 FUN_145e2bc0c(undefined8 param_1,int param_2)

{
  FUN_145e2bc32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2bc32 FUN_145e2bc32 body=768 status=ok
// SIG undefined FUN_145e2bc32(void)

void FUN_145e2bc32(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14a355e30;
  param_1[1] = &PTR_FUN_14a355f10;
  plVar1 = param_1 + 7;
  puVar2 = param_1 + 9;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar6 = 0;
  local_58 = puVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0xc);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != puVar2)) {
    do {
      lVar3 = *local_88;
      lVar5 = (longlong)iStack_6c;
      (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0xa0))
                (*(longlong **)(DAT_14c98e618 + 0x20),*(undefined8 *)(lVar3 + 8 + lVar5 * 0x18));
      puVar4 = *(undefined8 **)(lVar3 + 8 + lVar5 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar6) || (local_78 != puVar2)) || (local_88 != plVar1));
  }
  FUN_145e2c09c(plVar1);
  FUN_145e2c15c(param_1 + 0x11);
  FUN_145e2c0dc(param_1 + 0x1b);
  FUN_145e2c11c(param_1 + 0x2f);
  DAT_14ca77960 = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145e2bf34(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145e2bf6a(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145e2bfa0(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145e2bfd6(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fb3a5c(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145e2c00c(plVar1);
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 1);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e2bf34 FUN_145e2bf34 body=53 status=ok
// SIG undefined FUN_145e2bf34(void)

void FUN_145e2bf34(longlong *param_1)

{
  FUN_145e2cb2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2bf6a FUN_145e2bf6a body=53 status=ok
// SIG undefined FUN_145e2bf6a(void)

void FUN_145e2bf6a(longlong *param_1)

{
  FUN_145e2c1a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2bfa0 FUN_145e2bfa0 body=53 status=ok
// SIG undefined FUN_145e2bfa0(void)

void FUN_145e2bfa0(longlong *param_1)

{
  FUN_145e2c9d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2bfd6 FUN_145e2bfd6 body=53 status=ok
// SIG undefined FUN_145e2bfd6(void)

void FUN_145e2bfd6(longlong *param_1)

{
  FUN_145e2c314();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2c00c FUN_145e2c00c body=53 status=ok
// SIG undefined FUN_145e2c00c(void)

void FUN_145e2c00c(longlong *param_1)

{
  FUN_145e2c042();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e2c042 FUN_145e2c042 body=90 status=ok
// SIG undefined FUN_145e2c042(void)

void FUN_145e2c042(longlong param_1)

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



// FUNCTION 145e2c09c FUN_145e2c09c body=63 status=ok
// SIG undefined FUN_145e2c09c(void)

void FUN_145e2c09c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145e2c490(param_1);
    FUN_145e2c042(param_1);
    return;
  }
  FUN_145e2c042(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1473920c6(param_1);
  return;
}



// FUNCTION 145e2c0dc FUN_145e2c0dc body=63 status=ok
// SIG undefined FUN_145e2c0dc(void)

void FUN_145e2c0dc(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145e2c730(param_1);
    FUN_145e2c314(param_1);
    return;
  }
  FUN_145e2c314(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1473922a0(param_1);
  return;
}



// FUNCTION 145e2c11c FUN_145e2c11c body=63 status=ok
// SIG undefined FUN_145e2c11c(void)

void FUN_145e2c11c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145e2c880(param_1);
    FUN_145e2c1a0(param_1);
    return;
  }
  FUN_145e2c1a0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14739247e(param_1);
  return;
}



// FUNCTION 145e2c15c FUN_145e2c15c body=67 status=ok
// SIG undefined FUN_145e2c15c(void)

void FUN_145e2c15c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145e2c5e0(param_1);
    FUN_140fb3a94(param_1,0);
    return;
  }
  FUN_140fb3a94(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1469eb2d0(param_1);
  return;
}



// FUNCTION 145e2c1a0 FUN_145e2c1a0 body=371 status=ok
// SIG undefined FUN_145e2c1a0(void)

void FUN_145e2c1a0(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x38 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145e2c314 FUN_145e2c314 body=378 status=ok
// SIG undefined FUN_145e2c314(void)

void FUN_145e2c314(longlong *param_1)

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



// FUNCTION 145e2c490 FUN_145e2c490 body=335 status=ok
// SIG undefined FUN_145e2c490(void)

void FUN_145e2c490(longlong *param_1)

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



// FUNCTION 145e2c5e0 FUN_145e2c5e0 body=335 status=ok
// SIG undefined FUN_145e2c5e0(void)

void FUN_145e2c5e0(longlong *param_1)

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



// FUNCTION 145e2c730 FUN_145e2c730 body=335 status=ok
// SIG undefined FUN_145e2c730(void)

void FUN_145e2c730(longlong *param_1)

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



// FUNCTION 145e2c880 FUN_145e2c880 body=335 status=ok
// SIG undefined FUN_145e2c880(void)

void FUN_145e2c880(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 145e2c9d0 FUN_145e2c9d0 body=346 status=ok
// SIG undefined FUN_145e2c9d0(void)

void FUN_145e2c9d0(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 145e2cb2c FUN_145e2cb2c body=370 status=ok
// SIG undefined FUN_145e2cb2c(void)

void FUN_145e2cb2c(longlong *param_1)

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
      FUN_147391feb(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145e2cca6 FUN_145e2cca6 body=159 status=ok
// SIG undefined FUN_145e2cca6(void)

void FUN_145e2cca6(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    uVar2 = FUN_144a52528();
    FUN_1446f470e(&local_20,L"Sockets",1);
    cVar1 = FUN_14011feae(uVar2,local_20);
    if (cVar1 != '\0') {
      uVar2 = FUN_144a52528();
      FUN_1446f470e(&local_28,L"Sockets",1);
      FUN_14156ce54(uVar2,local_28,1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2cd46 FUN_145e2cd46 body=146 status=ok
// SIG undefined FUN_145e2cd46(void)

code * FUN_145e2cd46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e2cdd8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightFieldAtlasParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHeightFieldAtlasParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23000000135;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8c08;
  return FUN_1462c0bb4;
}



// FUNCTION 145e2cdd8 FUN_145e2cdd8 body=261 status=ok
// SIG undefined FUN_145e2cdd8(void)

void FUN_145e2cdd8(void)

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
              0x110) < DAT_14c9c8c88) {
    FUN_144b3d300(&DAT_14c9c8c88);
    if (DAT_14c9c8c88 == -1) {
      FUN_145e2cede(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHeightFieldAtlasParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x5b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8c08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be775a);
      _Init_thread_footer(&DAT_14c9c8c88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2cede FUN_145e2cede body=226 status=ok
// SIG undefined FUN_145e2cede(void)

longlong * FUN_145e2cede(longlong *param_1)

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
  pcVar13 = FUN_1462c0c44;
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



// FUNCTION 145e2cfc6 FUN_145e2cfc6 body=132 status=ok
// SIG undefined FUN_145e2cfc6(void)

undefined1 * FUN_145e2cfc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightFieldTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e2cfc2;
}



// FUNCTION 145e2d04a FUN_145e2d04a body=146 status=ok
// SIG undefined FUN_145e2d04a(void)

code * FUN_145e2d04a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e2d0dc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightVisibilityRaysData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyLightVisibilityRaysData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000104;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca43770;
  return FUN_145f5a350;
}



// FUNCTION 145e2d0dc FUN_145e2d0dc body=261 status=ok
// SIG undefined FUN_145e2d0dc(void)

void FUN_145e2d0dc(void)

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
              0x110) < DAT_14ca437f0) {
    FUN_144b3d300(&DAT_14ca437f0);
    if (DAT_14ca437f0 == -1) {
      FUN_145e2d1e2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSkyLightVisibilityRaysData";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43770,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafa10);
      _Init_thread_footer(&DAT_14ca437f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2d1e2 FUN_145e2d1e2 body=226 status=ok
// SIG undefined FUN_145e2d1e2(void)

longlong * FUN_145e2d1e2(longlong *param_1)

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
  pcVar13 = FUN_146303720;
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



// FUNCTION 145e2d2ca FUN_145e2d2ca body=132 status=ok
// SIG undefined FUN_145e2d2ca(void)

undefined1 * FUN_145e2d2ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightVisibilityRays";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<SkyLightVisibilityRays>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e2d2c6;
}



// FUNCTION 145e2d34e FUN_145e2d34e body=167 status=ok
// SIG undefined FUN_145e2d34e(void)

bool FUN_145e2d34e(longlong param_1,undefined4 param_2,undefined8 param_3)

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



// FUNCTION 145e2d3f6 FUN_145e2d3f6 body=214 status=ok
// SIG undefined FUN_145e2d3f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2d3f6(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _DAT_14cb0de40 = 0;
  uRam000000014cb0de48 = 0;
  _DAT_14cb0de38 = &PTR_FUN_14aaf78d0;
  local_48 = 0;
  uStack_40 = 0;
  _DAT_14cb0de50 = &PTR_FUN_14aaf78f0;
  _DAT_14cb0de58 = 0;
  _DAT_14cb0de60 = 0;
  FUN_145e2d4ce();
  _DAT_14cb0de68 = 0;
  _DAT_14cb0de70 = 0;
  FUN_145e2d5b0(&local_48);
  _DAT_14cb0de88 = 0;
  _DAT_14cb0de78 = 0;
  uRam000000014cb0de80 = 0;
  FUN_1449db362(&local_48);
  FUN_1457ac51c(&DAT_14cb0de90,0);
  DAT_14cb0e208 = 0;
  _DAT_14cb0e210 = 0;
  _DAT_14cb0e218 = 2;
  FUN_1449db362(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2d4ce FUN_145e2d4ce body=130 status=ok
// SIG undefined FUN_145e2d4ce(void)

void FUN_145e2d4ce(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)&DAT_14cb0de58) {
    local_20 = 0;
    local_18 = 0;
    if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 0x40))(param_1,&local_20);
    }
    FUN_144a450dc(&DAT_14cb0de58,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2d552 FUN_145e2d552 body=93 status=ok
// SIG undefined FUN_145e2d552(void)

void FUN_145e2d552(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaf9460;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aaf93f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 145e2d5b0 FUN_145e2d5b0 body=138 status=ok
// SIG undefined FUN_145e2d5b0(void)

void FUN_145e2d5b0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)&DAT_14cb0de68) {
    local_20 = 0;
    local_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_20);
    }
    FUN_144a450dc(&DAT_14cb0de68,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2d63c FUN_145e2d63c body=36 status=ok
// SIG undefined FUN_145e2d63c(void)

void FUN_145e2d63c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  FUN_145e2d660(uVar1,param_2,param_3);
  return;
}



// FUNCTION 145e2d660 FUN_145e2d660 body=252 status=ok
// SIG undefined FUN_145e2d660(void)

void FUN_145e2d660(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if (param_2 == '\0') {
    FUN_1400bc8c2(param_1 + 0x70,&local_30);
  }
  else {
    FUN_1400bc96c(param_1 + 0x70,&local_30);
  }
  lVar4 = FUN_14070e69a(param_1);
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) &&
      (cVar1 = *(char *)(param_1 + 0x70), *(char *)(param_1 + 0x98) != cVar1)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    cVar3 = FUN_144729dda(param_1 + 0x60);
    if ((cVar3 != '\0') && (plVar2 = *(longlong **)(param_1 + 0x68), plVar2 != (longlong *)0x0)) {
      plVar5 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = FUN_144a6c4d8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar5 + 0x578))(plVar5);
        }
      }
      *(char *)(param_1 + 0x98) = cVar1;
      (**(code **)(*plVar2 + 0x48))(plVar2);
    }
  }
  FUN_1410b8be4(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2d75e FUN_145e2d75e body=454 status=ok
// SIG undefined FUN_145e2d75e(void)

void FUN_145e2d75e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110 [13];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14156cfe0();
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) && (lVar4 = *(longlong *)(param_1 + 0x2f8), lVar4 != 0)
     ) {
    FUN_144757f48(lVar4,*(uint *)(lVar4 + 8) | 0x40001);
  }
  local_78 = 0;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (0 < *(int *)(param_1 + 0x658)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_14919eb96(local_110,*(longlong *)(param_1 + 0x650) + lVar4);
      local_118 = local_110[0];
      cVar1 = FUN_1402ca054(local_110[0],L"Update",6);
      if (cVar1 == '\0') {
        cVar1 = FUN_1402ca054(local_118,L"Inverse",7);
        if (cVar1 != '\0') {
          puVar3 = (undefined8 *)&DAT_14cc074b8;
          goto LAB_145e2d8b0;
        }
      }
      else {
        puVar3 = &DAT_14cc07488;
LAB_145e2d8b0:
        FUN_1446f57c6(puVar3,&local_120);
        local_118 = local_120;
      }
      uVar2 = FUN_1491f9026(&local_a8,&local_118);
      FUN_1491f8f04(uVar2,local_110,1);
      FUN_14919ec32(local_110);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x68;
    } while (lVar5 < *(int *)(param_1 + 0x658));
  }
  FUN_145e2d926((longlong *)(param_1 + 0x650),&local_a8);
  FUN_140816cc4(param_1 + 0x660,&local_98);
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x2f8) + 0x52c) = *(byte *)(param_1 + 0x8a0) ^ 1;
  }
  FUN_1456e45f0(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e2d926 FUN_145e2d926 body=93 status=ok
// SIG undefined FUN_145e2d926(void)

undefined8 * FUN_145e2d926(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456e4641(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c1ad8(param_1,iVar1);
      FUN_1491c1b47(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145e2d984 FUN_145e2d984 body=21 status=ok
// SIG undefined FUN_145e2d984(void)

undefined8 FUN_145e2d984(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145e2d99a FUN_145e2d99a body=508 status=ok
// SIG undefined FUN_145e2d99a(void)

void FUN_145e2d99a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_2d8 [32];
  byte *local_2b8;
  byte local_2a8 [32];
  undefined1 local_288;
  byte local_280 [32];
  byte local_260 [32];
  byte abStack_240 [120];
  undefined1 local_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0 [16];
  longlong local_190;
  undefined1 local_180 [32];
  byte local_160;
  undefined1 local_158 [144];
  char local_c8 [8];
  undefined1 local_c0 [144];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar2 = FUN_1457fadf6(param_1,param_2,0);
  if (lVar2 != 0) {
    FUN_146024696(lVar2);
    local_1a8 = 0;
    FUN_14101bd16(local_1c8,&DAT_149dfb77a);
    local_2b8 = local_1c8;
    FUN_140d767d6(local_1a0,&DAT_14cb71db0,2,L"LevelTransition");
    cVar1 = FUN_140e27f2c(local_1a0);
    if (cVar1 == '\0') {
      local_288 = 0;
      FUN_14101bd16(local_2a8,&DAT_149dfb77a);
      pbVar4 = local_280;
      local_2b8 = local_2a8;
    }
    else {
      abStack_240[0x28] = 0;
      FUN_14101bd16(abStack_240 + 8,&DAT_149dfb77a);
      pbVar4 = abStack_240 + 0x30;
      local_2b8 = abStack_240 + 8;
    }
    FUN_140d767d6(pbVar4,&DAT_14cb71db0,2,L"LevelTransition");
    FUN_140d76846(local_158,pbVar4);
    FUN_14027c224(local_c8,local_158);
    uVar3 = FUN_14479d2ce(lVar2);
    if (local_c8[0] == '\x01') {
      FUN_140f3f840(local_c0,uVar3);
    }
    FUN_14027c198(local_c8);
    FUN_1404eeb8e(local_158);
    if (cVar1 == '\0') {
      pbVar4 = local_260;
    }
    else {
      pbVar4 = abStack_240 + 0x50;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[pbVar4[0x20]])(pbVar4);
    if (*(longlong *)(pbVar4 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_160])(local_180);
    if (local_190 != 0) {
      FUN_1400020a8();
    }
    FUN_1415beab4(param_1,lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2db98 FUN_145e2db98 body=226 status=ok
// SIG undefined FUN_145e2db98(void)

longlong * FUN_145e2db98(longlong *param_1)

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
  pcVar13 = FUN_1462ba2e8;
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



// FUNCTION 145e2dc80 FUN_145e2dc80 body=138 status=ok
// SIG undefined FUN_145e2dc80(void)

undefined1 * FUN_145e2dc80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x149;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e2dc7c;
}



// FUNCTION 145e2dd0a FUN_145e2dd0a body=144 status=ok
// SIG undefined FUN_145e2dd0a(void)

code * FUN_145e2dd0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e2dc80;
}



// FUNCTION 145e2dd9a FUN_145e2dd9a body=226 status=ok
// SIG undefined FUN_145e2dd9a(void)

longlong * FUN_145e2dd9a(longlong *param_1)

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
  pcVar13 = FUN_1462be126;
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



// FUNCTION 145e2de82 FUN_145e2de82 body=136 status=ok
// SIG undefined FUN_145e2de82(void)

undefined1 * FUN_145e2de82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x77;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e2de7e;
}



// FUNCTION 145e2df0a FUN_145e2df0a body=146 status=ok
// SIG undefined FUN_145e2df0a(void)

code * FUN_145e2df0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448e5570();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthParamsUB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDigistructDepthUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c5660;
  return FUN_1462be1ae;
}



// FUNCTION 145e2df9c FUN_145e2df9c body=226 status=ok
// SIG undefined FUN_145e2df9c(void)

longlong * FUN_145e2df9c(longlong *param_1)

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
  pcVar13 = FUN_1462c55d8;
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



// FUNCTION 145e2e084 FUN_145e2e084 body=138 status=ok
// SIG undefined FUN_145e2e084(void)

undefined1 * FUN_145e2e084(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x57;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e2e080;
}



// FUNCTION 145e2e10e FUN_145e2e10e body=144 status=ok
// SIG undefined FUN_145e2e10e(void)

code * FUN_145e2e10e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e2e084;
}



// FUNCTION 145e2e19e FUN_145e2e19e body=226 status=ok
// SIG undefined FUN_145e2e19e(void)

longlong * FUN_145e2e19e(longlong *param_1)

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
  pcVar13 = FUN_14630d5fa;
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



// FUNCTION 145e2e286 FUN_145e2e286 body=138 status=ok
// SIG undefined FUN_145e2e286(void)

undefined1 * FUN_145e2e286(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e2e282;
}



// FUNCTION 145e2e310 FUN_145e2e310 body=144 status=ok
// SIG undefined FUN_145e2e310(void)

code * FUN_145e2e310(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000001e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e2e286;
}



// FUNCTION 145e2e3a0 FUN_145e2e3a0 body=226 status=ok
// SIG undefined FUN_145e2e3a0(void)

longlong * FUN_145e2e3a0(longlong *param_1)

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
  pcVar13 = FUN_146310786;
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



// FUNCTION 145e2e488 FUN_145e2e488 body=138 status=ok
// SIG undefined FUN_145e2e488(void)

undefined1 * FUN_145e2e488(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x113;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e2e484;
}



// FUNCTION 145e2e512 FUN_145e2e512 body=144 status=ok
// SIG undefined FUN_145e2e512(void)

code * FUN_145e2e512(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000115;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14631092e;
}



// FUNCTION 145e2e5a2 FUN_145e2e5a2 body=40 status=ok
// SIG undefined FUN_145e2e5a2(void)

undefined8 FUN_145e2e5a2(undefined8 param_1,int param_2)

{
  FUN_145e2e5ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2e5ca FUN_145e2e5ca body=201 status=ok
// SIG undefined FUN_145e2e5ca(void)

void FUN_145e2e5ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b7b57d0;
  param_1[0x72] = &PTR_FUN_14b7b5e10;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x8b];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x87) == '\x01') {
    if (param_1[0x85] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    if (param_1[0x7d] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  if (*(char *)(param_1 + 0x77) == '\x01') {
    *(undefined1 *)(param_1 + 0x77) = 0;
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145e2e694 FUN_145e2e694 body=969 status=ok
// SIG undefined FUN_145e2e694(void)

void FUN_145e2e694(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190 [12];
  undefined8 local_130 [9];
  undefined1 local_e1;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88._4_8_ = 0;
  local_78 = 0;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_60 = DAT_14c846508;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_d0._0_4_ = 0;
  local_d0._4_1_ = 0;
  local_c8 = 0xbf80000000000000;
  local_c0 = 0xc4750000;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar2 = local_d4;
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  iVar1 = local_d8;
  local_e0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e1);
  }
  local_1a0 = local_e0;
  local_198 = local_e1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_d0;
  puVar5 = local_130;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_88;
  puVar5 = local_190;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1a8 = iVar1 != 0;
  FUN_14156d634(local_28,local_190,local_130,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2ea5e FUN_145e2ea5e body=311 status=ok
// SIG undefined FUN_145e2ea5e(void)

ulonglong FUN_145e2ea5e(longlong param_1,int *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  int *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)(param_1 + 0x20);
  local_a8 = param_2;
  if (0 < iVar4) {
    iVar5 = 0;
    local_b0 = param_3;
    do {
      local_a0 = &local_90;
      uVar1 = (longlong)((int)local_b0 + iVar5) % (longlong)iVar4;
      uVar3 = uVar1 & 0xffffffff;
      local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar1 * 0x30);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_98 = &local_88;
      FUN_145e2eb96(&local_88,&local_a0);
      iVar2 = (int)local_88;
      iVar4 = *local_a8;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (iVar2 == iVar4) goto LAB_145e2eb2b;
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x20);
    } while (iVar5 < iVar4);
  }
  uVar3 = 0xffffffff;
LAB_145e2eb2b:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2eb96 FUN_145e2eb96 body=314 status=ok
// SIG undefined FUN_145e2eb96(void)

void FUN_145e2eb96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_14893c164;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_120 = local_108;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 1;
      bVar3 = FUN_14493bb52(uVar4,*puVar1,&local_118,0);
      puVar1 = puVar8;
    } while ((bVar3 & puVar8 != puVar2) != 0);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2ecd2 FUN_145e2ecd2 body=292 status=ok
// SIG undefined FUN_145e2ecd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e2ecd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed620) {
    FUN_144b3d300(&DAT_14c9ed620);
    if (DAT_14c9ed620 == -1) {
      FUN_145e2ef40();
      FUN_145e2edf6();
      FUN_140db5666(&DAT_14c9ed578,0,&DAT_14c9ed510,L"FLumenHardwareRayTracingMaterialHitGroup",
                    L"/Engine/Private/Lumen/LumenHardwareRayTracingMaterials.usf",
                    L"closesthit=LumenHardwareRayTracingMaterialCHS anyhit=LumenHardwareRayTracingMaterialAHS"
                    ,8,6,FUN_1471dd07e,FUN_1471dd03a,&LAB_14583cd46,&LAB_1471dd036,&LAB_1471dd030,
                    &LAB_1471dd010,0xe0,&DAT_14c9f0450);
      _DAT_14c9ed578 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d12016);
      _Init_thread_footer(&DAT_14c9ed620);
    }
  }
  return &DAT_14c9ed578;
}



// FUNCTION 145e2edf6 FUN_145e2edf6 body=205 status=ok
// SIG undefined FUN_145e2edf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2edf6(void)

{
  if ((DAT_14c9ed577 & 2) == 0) {
    DAT_14c9ed577 = DAT_14c9ed577 | 2;
    _DAT_14c9ed518 = L"FLumenHardwareRayTracingMaterialHitGroup";
    _DAT_14c9ed530 = FUN_146826540;
    _DAT_14c9ed538 = FUN_146825d77;
    _DAT_14c9ed540 = FUN_146825fd6;
    _DAT_14c9ed548 = FUN_1407e02ea;
    _DAT_14c9ed550 = FUN_146826273;
    _DAT_14c9ed528 = FUN_1471dcfe2;
    _DAT_14c9ed568 = 0xffffffff000000e0;
    _DAT_14c9ed570 = 8;
    DAT_14c9ed574 = 0;
    _DAT_14c9ed558 = &LAB_1471dd00c;
    FUN_145e2eec4();
    FUN_1407e00cc(&DAT_14c9ed510);
    return;
  }
  return;
}



// FUNCTION 145e2eec4 FUN_145e2eec4 body=123 status=ok
// SIG undefined FUN_145e2eec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2eec4(void)

{
  _DAT_14c9f1888 = L"BASE";
  DAT_14c9f18b2 = 4;
  _DAT_14c9f1890 = FUN_140b35ae4();
  _DAT_14c9f1898 = DAT_14c9ed520;
  _DAT_14c9f18a0 = &LAB_14682652b;
  DAT_14c9ed520 = &DAT_14c9f1888;
  DAT_14c9ed575 = DAT_14c9ed575 + '\x01';
  _DAT_14c9f18a8 = 0x100000000;
  if (*(char *)(_DAT_14c9f1890 + 100) != '\0') {
    DAT_14c9ed576 = DAT_14c9ed576 + '\x01';
  }
  return;
}



// FUNCTION 145e2ef40 FUN_145e2ef40 body=261 status=ok
// SIG undefined FUN_145e2ef40(void)

void FUN_145e2ef40(void)

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
              0x110) < DAT_14c9f04d0) {
    FUN_144b3d300(&DAT_14c9f04d0);
    if (DAT_14c9f04d0 == -1) {
      FUN_145e2f046(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x34;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0450,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2625f);
      _Init_thread_footer(&DAT_14c9f04d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2f046 FUN_145e2f046 body=226 status=ok
// SIG undefined FUN_145e2f046(void)

longlong * FUN_145e2f046(longlong *param_1)

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
  pcVar13 = FUN_1462d806e;
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



// FUNCTION 145e2f12e FUN_145e2f12e body=144 status=ok
// SIG undefined FUN_145e2f12e(void)

code * FUN_145e2f12e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e2f24e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"NaniteRayTracing";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNaniteRayTracingUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e2f1be;
}



// FUNCTION 145e2f1be FUN_145e2f1be body=144 status=ok
// SIG undefined FUN_145e2f1be(void)

code * FUN_145e2f1be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c907fc;
}



// FUNCTION 145e2f24e FUN_145e2f24e body=282 status=ok
// SIG undefined FUN_145e2f24e(void)

undefined * FUN_145e2f24e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a3e0) {
    FUN_144b3d300(&DAT_14ca1a3e0);
    if (DAT_14ca1a3e0 == -1) {
      FUN_145e2f36a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"NaniteRayTracing";
      local_70 = L"NaniteRayTracing";
      local_78 = L"FNaniteRayTracingUniformParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x154;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1a360,1,3);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e55435);
      _Init_thread_footer(&DAT_14ca1a3e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1a360;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2f36a FUN_145e2f36a body=226 status=ok
// SIG undefined FUN_145e2f36a(void)

longlong * FUN_145e2f36a(longlong *param_1)

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
  pcVar13 = FUN_1462f3cf4;
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



// FUNCTION 145e2f44e FUN_145e2f44e body=132 status=ok
// SIG undefined FUN_145e2f44e(void)

undefined1 * FUN_145e2f44e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x155;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147267904;
}



// FUNCTION 145e2f4d2 FUN_145e2f4d2 body=136 status=ok
// SIG undefined FUN_145e2f4d2(void)

code * FUN_145e2f4d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000158;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726787a;
}



// FUNCTION 145e2f55a FUN_145e2f55a body=138 status=ok
// SIG undefined FUN_145e2f55a(void)

code * FUN_145e2f55a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNodes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000156;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e2f44e;
}



// FUNCTION 145e2f5e4 FUN_145e2f5e4 body=40 status=ok
// SIG undefined FUN_145e2f5e4(void)

undefined8 FUN_145e2f5e4(undefined8 param_1,int param_2)

{
  FUN_145e2f60c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2f60c FUN_145e2f60c body=153 status=ok
// SIG undefined FUN_145e2f60c(void)

void FUN_145e2f60c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a33d0d0;
  param_1[5] = &PTR_FUN_14a33dad0;
  param_1[6] = &PTR_LAB_14a33db10;
  param_1[0x55] = &PTR_FUN_14a33db60;
  param_1[0x56] = &PTR_FUN_14a33dbe0;
  param_1[0x57] = &PTR_FUN_14a33dbf0;
  plVar3 = (longlong *)param_1[0xea];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd5));
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145e2f6b0 FUN_145e2f6b0 body=103 status=ok
// SIG undefined FUN_145e2f6b0(void)

undefined8 * FUN_145e2f6b0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac18d50;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb205d0) {
    FUN_144b3d300(&DAT_14cb205d0);
    if (DAT_14cb205d0 == -1) {
      FUN_14156d780();
      _Init_thread_footer(&DAT_14cb205d0);
    }
  }
  return param_1;
}



// FUNCTION 145e2f718 FUN_145e2f718 body=20 status=ok
// SIG undefined FUN_145e2f718(void)

undefined1 FUN_145e2f718(longlong param_1)

{
  FUN_145e2f72c(param_1 + 0x18);
  return 1;
}



// FUNCTION 145e2f72c FUN_145e2f72c body=172 status=ok
// SIG undefined FUN_145e2f72c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2f72c(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,&DAT_149e3cc38,1);
  FUN_1413e432a(lVar1,&local_28,local_40,local_38);
  _DAT_14cb463a0 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2f7da FUN_145e2f7da body=20 status=ok
// SIG undefined FUN_145e2f7da(void)

undefined1 FUN_145e2f7da(longlong param_1)

{
  FUN_145e2f7ee(param_1 + 0x18);
  return 1;
}



// FUNCTION 145e2f7ee FUN_145e2f7ee body=172 status=ok
// SIG undefined FUN_145e2f7ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e2f7ee(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,L"UI.Action",1);
  FUN_1413e432a(lVar1,&local_28,local_40,local_38);
  _DAT_14cb463a8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2f89c FUN_145e2f89c body=40 status=ok
// SIG undefined FUN_145e2f89c(void)

undefined8 FUN_145e2f89c(undefined8 param_1,int param_2)

{
  FUN_145e2f8c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2f8c4 FUN_145e2f8c4 body=153 status=ok
// SIG undefined FUN_145e2f8c4(void)

void FUN_145e2f8c4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af06a40;
  FUN_1457e5b52(param_1 + 0x94);
  FUN_141082778(param_1 + 0x4f);
  FUN_14008cd94(param_1 + 0x24);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e2f95e FUN_145e2f95e body=263 status=ok
// SIG undefined FUN_145e2f95e(void)

void FUN_145e2f95e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457f105e(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145e2fa66(param_1,puVar2,local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2fa66 FUN_145e2fa66 body=122 status=ok
// SIG undefined FUN_145e2fa66(void)

void FUN_145e2fa66(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*param_2 != 0) && ((longlong)*(int *)(param_1 + 0x30) != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
    do {
      if (*plVar2 == param_3) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        lVar3 = plVar2[2];
        if ((longlong)(int)lVar3 == 0) {
          return;
        }
        lVar1 = plVar2[1];
        lVar4 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar4);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,*param_2);
          }
          lVar4 = lVar4 + 0x18;
        } while ((longlong)(int)lVar3 * 0x18 != lVar4);
        return;
      }
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145e2fae0 FUN_145e2fae0 body=40 status=ok
// SIG undefined FUN_145e2fae0(void)

undefined8 FUN_145e2fae0(undefined8 param_1,int param_2)

{
  FUN_14156d890();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2fb14 FUN_145e2fb14 body=31 status=ok
// SIG undefined FUN_145e2fb14(void)

void FUN_145e2fb14(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x220,0x10);
  FUN_145e2fb34(uVar1);
  return;
}



// FUNCTION 145e2fb34 FUN_145e2fb34 body=344 status=ok
// SIG undefined FUN_145e2fb34(void)

undefined8 * FUN_145e2fb34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4387e0;
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
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x21),4000);
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  return param_1;
}



// FUNCTION 145e2fc8c FUN_145e2fc8c body=184 status=ok
// SIG undefined FUN_145e2fc8c(void)

void FUN_145e2fc8c(longlong param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14114e6dc(param_1 + 0x10);
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b4cdce0;
  local_58[0] = &LAB_14600fa9e;
  local_30 = param_1;
  FUN_1446ddc76(&local_60,"OnlineSubsystem",1);
  uVar1 = FUN_144a52528();
  uVar1 = FUN_1401e3324(uVar1,local_60);
  FUN_145e2fd72(uVar1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2fd46 FUN_145e2fd46 body=12 status=ok
// SIG undefined FUN_145e2fd46(void)

void FUN_145e2fd46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145e2fd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145e2fd52 FUN_145e2fd52 body=31 status=ok
// SIG undefined FUN_145e2fd52(void)

undefined8 FUN_145e2fd52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2fd72 FUN_145e2fd72 body=350 status=ok
// SIG undefined FUN_145e2fd72(void)

void FUN_145e2fd72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  plVar1 = (longlong *)(param_1 + 0xb8);
  lVar2 = param_1 + 200;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xe0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xe0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x20);
      if (lVar3 != 0) {
        pcVar4 = (code *)*param_2;
        plVar6 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar6 = param_2 + 4;
        }
        local_68 = lVar3;
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar4)(uVar5,&local_68);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e2fed2 FUN_145e2fed2 body=40 status=ok
// SIG undefined FUN_145e2fed2(void)

undefined8 FUN_145e2fed2(undefined8 param_1,int param_2)

{
  FUN_145e2fefa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e2fefa FUN_145e2fefa body=153 status=ok
// SIG undefined FUN_145e2fefa(void)

void FUN_145e2fefa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b587940;
  param_1[5] = &PTR_FUN_14b587c60;
  FUN_144a65a1e(param_1[0x16d],*(undefined4 *)(param_1 + 0x16e));
  if (param_1[0x16d] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x16b],*(undefined4 *)(param_1 + 0x16c));
  if (param_1[0x16b] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x169],*(undefined4 *)(param_1 + 0x16a));
  if (param_1[0x169] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e4ec6(param_1);
  return;
}



// FUNCTION 145e2ff94 FUN_145e2ff94 body=155 status=ok
// SIG undefined FUN_145e2ff94(void)

longlong * FUN_145e2ff94(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b989fd0;
  FUN_145e30030(plVar4 + 2,uVar3,param_3);
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 145e30030 FUN_145e30030 body=107 status=ok
// SIG undefined FUN_145e30030(void)

undefined8 * FUN_145e30030(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1403ca142();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (uVar2 = 4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
       == lVar1 + 0x30)) goto LAB_145e3006b;
  }
  uVar2 = 0;
LAB_145e3006b:
  FUN_145e3009c(param_1,param_2,param_3,uVar2);
  *param_1 = &PTR_FUN_14b98e110;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145e3009c FUN_145e3009c body=123 status=ok
// SIG undefined FUN_145e3009c(void)

undefined8 *
FUN_145e3009c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401a700c(&local_34,0x11f);
  FUN_145c08d38(param_1,param_2,local_34);
  *param_1 = &PTR_FUN_14b4dfb00;
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e30120 FUN_145e30120 body=256 status=ok
// SIG undefined FUN_145e30120(void)

undefined8 * FUN_145e30120(undefined8 *param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc8db70;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"__SkeletonUid__Key");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_145e30222();
  _Src = DAT_14cc10120;
  local_50 = (void *)0x0;
  lVar1 = (longlong)DAT_14cc10128;
  local_48 = DAT_14cc10128;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,DAT_14cc10128,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_1410835a0(param_1 + 0x2c,param_1 + 5,&local_50);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e30222 FUN_145e30222 body=121 status=ok
// SIG undefined FUN_145e30222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e30222(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10130) {
    FUN_144b3d300(&DAT_14cc10130);
    if (DAT_14cc10130 == -1) {
      DAT_14cc10120 = 0;
      _DAT_14cc10128 = 0;
      FUN_14020fad6(&DAT_14cc10120,L"__MeshUids__Key");
      atexit((_func_5014 *)&LAB_1444ddb6f);
      _Init_thread_footer(&DAT_14cc10130);
      return;
    }
  }
  return;
}



// FUNCTION 145e3029c FUN_145e3029c body=176 status=ok
// SIG undefined FUN_145e3029c(void)

void FUN_145e3029c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *puVar2 = &PTR_FUN_14bddfe80;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_FUN_14bddff20;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14156d9ea(*(undefined8 *)(param_1 + 8));
  FUN_14156d9ea(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145e3034c FUN_145e3034c body=300 status=ok
// SIG undefined FUN_145e3034c(void)

undefined4 * FUN_145e3034c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e3053e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_145e3047a(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145e30624(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3047a FUN_145e3047a body=196 status=ok
// SIG undefined FUN_145e3047a(void)

undefined8 FUN_145e3047a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_146927a94(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145e3053e FUN_145e3053e body=230 status=ok
// SIG undefined FUN_145e3053e(void)

int * FUN_145e3053e(longlong *param_1,int *param_2)

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



// FUNCTION 145e30624 FUN_145e30624 body=431 status=ok
// SIG undefined FUN_145e30624(void)

void FUN_145e30624(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 145e307d4 FUN_145e307d4 body=226 status=ok
// SIG undefined FUN_145e307d4(void)

longlong * FUN_145e307d4(longlong *param_1)

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
  pcVar13 = FUN_1462c5490;
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



// FUNCTION 145e308bc FUN_145e308bc body=140 status=ok
// SIG undefined FUN_145e308bc(void)

undefined1 * FUN_145e308bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141568818();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHeightFogVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x138;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9cdeb8;
  return &LAB_145e308b8;
}



// FUNCTION 145e30948 FUN_145e30948 body=144 status=ok
// SIG undefined FUN_145e30948(void)

code * FUN_145e30948(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1100000013a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c5518;
}



// FUNCTION 145e309d8 FUN_145e309d8 body=226 status=ok
// SIG undefined FUN_145e309d8(void)

longlong * FUN_145e309d8(longlong *param_1)

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
  pcVar13 = FUN_1462f1f02;
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



// FUNCTION 145e30ac0 FUN_145e30ac0 body=138 status=ok
// SIG undefined FUN_145e30ac0(void)

code * FUN_145e30ac0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPatchSplitArgs0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000055e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e30b4a;
}



// FUNCTION 145e30b4a FUN_145e30b4a body=146 status=ok
// SIG undefined FUN_145e30b4a(void)

code * FUN_145e30b4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c2eaca();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SplitWorkQueue";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGlobalWorkQueueParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000055d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca181b0;
  return FUN_1462f1f8a;
}



// FUNCTION 145e30bdc FUN_145e30bdc body=151 status=ok
// SIG undefined FUN_145e30bdc(void)

void FUN_145e30bdc(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e30d02(&local_28,param_1);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  FUN_145e30df2(&local_28,param_1);
  *(undefined8 *)(param_1 + 0x38) = local_28;
  uVar1 = FUN_1458fd8e2();
  uVar2 = FUN_1400b465c(param_1);
  local_28 = 0;
  FUN_14485c47a(&local_28,uVar2);
  FUN_145e30c74(uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e30c74 FUN_145e30c74 body=86 status=ok
// SIG undefined FUN_145e30c74(void)

void FUN_145e30c74(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  cVar1 = FUN_145e30cca(puVar3);
  if (cVar1 == '\0') {
    *puVar3 = *param_2;
    FUN_14125202e();
    uVar2 = FUN_144729dda(puVar3);
    FUN_1458fda6e(&DAT_14c9a3cc0,&DAT_14c9a40a0,uVar2,0);
    return;
  }
  return;
}



// FUNCTION 145e30cca FUN_145e30cca body=55 status=ok
// SIG undefined FUN_145e30cca(void)

ulonglong FUN_145e30cca(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145e30d02 FUN_145e30d02 body=239 status=ok
// SIG undefined FUN_145e30d02(void)

undefined8 FUN_145e30d02(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  *local_30 = &PTR_FUN_14a90a160;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1458fd84e;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e30df2 FUN_145e30df2 body=239 status=ok
// SIG undefined FUN_145e30df2(void)

undefined8 FUN_145e30df2(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a90a240;
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
  *local_30 = &PTR_FUN_14a90a1d0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_147acf454;
  FUN_1406baa38(&DAT_14cb10920,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e30ee2 FUN_145e30ee2 body=142 status=ok
// SIG undefined FUN_145e30ee2(void)

code * FUN_145e30ee2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e30f70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DebugLayerCompatibility";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDebugLayerCompatibilityShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f3a1c;
}



// FUNCTION 145e30f70 FUN_145e30f70 body=268 status=ok
// SIG undefined FUN_145e30f70(void)

undefined * FUN_145e30f70(void)

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
              0x110) < DAT_14cb52028) {
    FUN_144b3d300(&DAT_14cb52028);
    if (DAT_14cb52028 == -1) {
      FUN_145e3107e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDebugLayerCompatibilityShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x98;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb51fa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c076f2);
      _Init_thread_footer(&DAT_14cb52028);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb51fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3107e FUN_145e3107e body=226 status=ok
// SIG undefined FUN_145e3107e(void)

longlong * FUN_145e3107e(longlong *param_1)

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
  pcVar13 = FUN_1464a82ec;
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



// FUNCTION 145e31166 FUN_145e31166 body=132 status=ok
// SIG undefined FUN_145e31166(void)

undefined1 * FUN_145e31166(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugLayerCompatibilityHelperSource";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e31162;
}



// FUNCTION 145e311ea FUN_145e311ea body=16 status=ok
// SIG undefined FUN_145e311ea(void)

undefined8 FUN_145e311ea(void)

{
  FUN_145e311fa();
  return 0;
}



// FUNCTION 145e311fa FUN_145e311fa body=304 status=ok
// SIG undefined FUN_145e311fa(void)

void FUN_145e311fa(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
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
  iVar5 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = (int)param_1[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if ((iStack_44 != iVar5) || (local_50 != plVar1)) {
    do {
      piVar4 = (int *)((longlong)iStack_64 * 0x28 + *local_80);
      cVar2 = FUN_144729dda(piVar4);
      if ((cVar2 != '\0') || ((*piVar4 == 0 && (piVar4[1] == 0)))) {
        uVar3 = FUN_14479d2ce(piVar4);
        FUN_145e3132c(uVar3,piVar4 + 2);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar5) || (local_70 != plVar1)) || (local_80 != param_1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3132c FUN_145e3132c body=489 status=ok
// SIG undefined FUN_145e3132c(void)

void FUN_145e3132c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  byte local_2a0 [32];
  undefined1 local_280;
  undefined1 local_278 [32];
  byte local_258 [32];
  byte abStack_238 [120];
  undefined1 local_1c0 [32];
  undefined1 local_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  undefined1 local_178 [32];
  byte local_158;
  undefined1 local_150 [144];
  char local_c0 [8];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1a0 = 0;
  FUN_14101bd16(local_1c0,&DAT_149dfb77a);
  local_2a8 = local_1c0;
  FUN_140d767d6(local_198,&DAT_14cc26d10,2,L"bookmarks");
  cVar1 = FUN_140e27f2c(local_198);
  if (cVar1 == '\0') {
    local_280 = 0;
    FUN_14101bd16(local_2a0,&DAT_149dfb77a);
    local_2a8 = local_2a0;
    FUN_140d767d6(local_278,&DAT_14cc26d10,2,L"bookmarks");
    FUN_140d76846(local_150,local_278);
  }
  else {
    abStack_238[0x28] = 0;
    FUN_14101bd16(abStack_238 + 8,&DAT_149dfb77a);
    local_2a8 = abStack_238 + 8;
    FUN_140d767d6(abStack_238 + 0x30,&DAT_14cc26d10,2,L"bookmarks");
    FUN_145e31516(local_150,abStack_238 + 0x30,param_2);
  }
  FUN_14027c224(local_c0,local_150);
  if (local_c0[0] == '\x01') {
    FUN_140f3f840(local_b8,param_1);
  }
  FUN_14027c198(local_c0);
  FUN_1404eeb8e(local_150);
  if (cVar1 == '\0') {
    pbVar2 = local_258;
  }
  else {
    pbVar2 = abStack_238 + 0x50;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[pbVar2[0x20]])(pbVar2);
  if (*(longlong *)(pbVar2 + -0x10) != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e31516 FUN_145e31516 body=63 status=ok
// SIG undefined FUN_145e31516(void)

undefined8 FUN_145e31516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_140d76916(param_1,1);
    FUN_145e31556(param_1,param_3);
  }
  return param_1;
}



// FUNCTION 145e31556 FUN_145e31556 body=180 status=ok
// SIG undefined FUN_145e31556(void)

undefined8 FUN_145e31556(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar7 = FUN_14156dd86();
  if (cVar7 != '\0') {
    plVar8 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar8,iVar1);
    }
    lVar2 = *plVar8;
    FUN_1457895c4(&local_50);
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 8) = local_48;
    *(undefined4 *)(param_2 + 0xc) = uStack_44;
    *(undefined4 *)(param_2 + 0x10) = uStack_40;
    *(undefined4 *)(param_2 + 0x14) = uStack_3c;
    local_50 = &PTR_FUN_14b3f7678;
    local_48 = uVar3;
    uStack_44 = uVar4;
    uStack_40 = uVar5;
    uStack_3c = uVar6;
    FUN_145e3160c((longlong)iVar1 * 0x30 + lVar2,&local_50);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3160c FUN_145e3160c body=130 status=ok
// SIG undefined FUN_145e3160c(void)

undefined8 * FUN_145e3160c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14a184350;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0xb;
  FUN_1446ddc76(param_1 + 5,"bookmarks_array",1);
  *param_2 = &PTR_FUN_14a184350;
  plVar3 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 145e3168e FUN_145e3168e body=103 status=ok
// SIG undefined FUN_145e3168e(void)

ulonglong FUN_145e3168e(longlong param_1)

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
LAB_145e316d8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145e316d8;
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



// FUNCTION 145e316f6 FUN_145e316f6 body=25 status=ok
// SIG undefined FUN_145e316f6(void)

undefined8 FUN_145e316f6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145e31710 FUN_145e31710 body=119 status=ok
// SIG undefined FUN_145e31710(void)

void FUN_145e31710(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_14120f5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_20 = 0;
      FUN_145c34e64(param_1,param_2,3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e31788 FUN_145e31788 body=117 status=ok
// SIG undefined FUN_145e31788(void)

longlong * FUN_145e31788(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145e317fe(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145e317fe FUN_145e317fe body=1092 status=ok
// SIG undefined FUN_145e317fe(void)

void FUN_145e317fe(longlong param_1,longlong param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  void *_Src;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_188 [36];
  int local_164;
  ulonglong local_160;
  uint local_158;
  uint local_154;
  ulonglong local_150;
  longlong local_148;
  void *local_140;
  ulonglong local_138;
  void *local_130;
  longlong local_128;
  void *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar3 = *(int *)(param_2 + 0x1b0);
  uVar17 = (ulonglong)iVar3;
  if (0 < (longlong)uVar17) {
    pvVar4 = *(void **)(param_2 + 0x1a8);
    uVar13 = 0;
    pvVar9 = pvVar4;
    do {
      if (uVar13 + 1 < uVar17) {
        iVar16 = (int)*(float *)((longlong)pvVar9 + 0x178);
        if (*(char *)((longlong)pvVar9 + 0x17c) == '\0') {
          iVar16 = 0;
        }
        iVar6 = (int)*(float *)((longlong)pvVar9 + 0xb8);
        if (*(char *)((longlong)pvVar9 + 0xbc) == '\0') {
          iVar6 = 0;
        }
        if (iVar16 < iVar6) {
          memcpy(local_108,pvVar9,0xc0);
          memcpy(pvVar9,(void *)((longlong)pvVar9 + 0xc0),0xc0);
          memcpy((void *)((longlong)pvVar9 + 0xc0),local_108,0xc0);
        }
      }
      uVar13 = uVar13 + 2;
      pvVar9 = (void *)((longlong)pvVar9 + 0x180);
    } while (uVar13 < uVar17);
    if (2 < iVar3) {
      local_150 = 2;
      do {
        local_158 = (int)local_150 * 2;
        local_128 = (longlong)(int)local_158;
        local_148 = 0;
        do {
          iVar16 = (int)local_150;
          local_154 = iVar3 - (int)local_148;
          if ((int)local_158 <= iVar3 - (int)local_148) {
            local_154 = local_158;
          }
          if (iVar16 < (int)local_154 && 0 < iVar16) {
            local_140 = (void *)(local_148 * 0xc0 + (longlong)pvVar4);
            iVar6 = 0;
            local_164 = iVar16;
            while( true ) {
              pvVar9 = (void *)((longlong)local_164 * 0xc0 + (longlong)local_140);
              iVar16 = 0;
              uVar7 = local_164 - iVar6;
              if (uVar7 != 0 && iVar6 <= local_164) {
                iVar16 = 0;
                iVar12 = (int)*(float *)((longlong)pvVar9 + 0xb8);
                if (*(char *)((longlong)pvVar9 + 0xbc) == '\0') {
                  iVar12 = 0;
                }
                uVar13 = (ulonglong)uVar7;
                do {
                  uVar13 = uVar13 >> 1;
                  iVar15 = (uint)uVar13 + iVar16;
                  lVar10 = (longlong)iVar15 * 0xc0;
                  if (*(char *)((longlong)local_140 + lVar10 + (longlong)iVar6 * 0xc0 + 0xbc) ==
                      '\0') {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = (int)*(float *)((longlong)local_140 +
                                            lVar10 + (longlong)iVar6 * 0xc0 + 0xb8);
                  }
                  bVar5 = pvVar9 < (void *)((longlong)local_140 + lVar10 + (longlong)iVar6 * 0xc0);
                  if (iVar12 != iVar11) {
                    bVar5 = iVar12 < iVar11;
                  }
                  if (!bVar5) {
                    iVar16 = iVar15 + (uVar7 & 1);
                  }
                  bVar5 = 1 < uVar7;
                  uVar7 = (uint)uVar13;
                } while (bVar5);
              }
              uVar7 = iVar16 + iVar6;
              local_138 = (ulonglong)uVar7;
              iVar16 = local_164 - uVar7;
              if (iVar16 == 0 || local_164 < (int)uVar7) break;
              uVar8 = local_154 - local_164;
              if (uVar8 == 0 || (int)local_154 < local_164) {
                local_160 = 0;
              }
              else {
                _Src = (void *)((longlong)(int)uVar7 * 0xc0 + (longlong)local_140);
                local_160 = 0;
                iVar6 = (int)*(float *)((longlong)_Src + 0xb8);
                if (*(char *)((longlong)_Src + 0xbc) == '\0') {
                  iVar6 = 0;
                }
                do {
                  uVar14 = (int)local_160 + (uVar8 >> 1);
                  lVar10 = (ulonglong)uVar14 * 0xc0;
                  if (*(char *)((longlong)pvVar9 + lVar10 + 0xbc) == '\0') {
                    iVar12 = 0;
                  }
                  else {
                    iVar12 = (int)*(float *)((longlong)pvVar9 + lVar10 + 0xb8);
                  }
                  bVar5 = (void *)(lVar10 + (longlong)pvVar9) < _Src;
                  if (iVar12 != iVar6) {
                    bVar5 = iVar12 < iVar6;
                  }
                  if (bVar5) {
                    local_160 = (ulonglong)(uVar14 + (uVar8 & 1));
                  }
                  bVar5 = 1 < uVar8;
                  uVar8 = uVar8 >> 1;
                } while (bVar5);
                local_164 = local_164 + (int)local_160;
                if (0 < (int)local_160) {
                  local_130 = (void *)((longlong)iVar16 * 0xc0 + (longlong)_Src);
                  local_120 = (void *)((longlong)(int)(local_164 - uVar7) * 0xc0 + (longlong)_Src);
                  pvVar9 = local_130;
                  do {
                    while( true ) {
                      pvVar1 = (void *)((longlong)pvVar9 + 0xc0);
                      pvVar2 = (void *)((longlong)_Src + 0xc0);
                      memcpy(local_108,_Src,0xc0);
                      memcpy(_Src,pvVar9,0xc0);
                      memcpy(pvVar9,local_108,0xc0);
                      if (pvVar1 == local_120) break;
                      if (pvVar2 == local_130) {
                        local_130 = pvVar1;
                      }
                      _Src = (void *)((longlong)_Src + 0xc0);
                      pvVar9 = pvVar1;
                    }
                    _Src = pvVar2;
                    pvVar9 = local_130;
                  } while (pvVar2 != local_130);
                }
              }
              if (((int)local_154 <= local_164) ||
                 (iVar6 = (int)local_160 + (int)local_138 + 1, local_164 <= iVar6)) break;
            }
          }
          local_148 = local_148 + local_128;
        } while (local_148 < (longlong)uVar17);
        local_150 = (ulonglong)local_158;
      } while ((int)local_158 < iVar3);
    }
  }
  local_118 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_110 = *(undefined4 *)(param_2 + 0x1b0);
  local_10c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_145e31c44(param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e31c44 FUN_145e31c44 body=144 status=ok
// SIG undefined FUN_145e31c44(void)

void FUN_145e31c44(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_145e31e00(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = (longlong)iVar1 * 0xc0;
    do {
      FUN_145e31da4(param_1,lVar4);
      lVar4 = lVar4 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_145e31cd4(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145e31cd4 FUN_145e31cd4 body=41 status=ok
// SIG undefined FUN_145e31cd4(void)

void FUN_145e31cd4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145e31cfe(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 145e31cfe FUN_145e31cfe body=81 status=ok
// SIG undefined FUN_145e31cfe(void)

void FUN_145e31cfe(longlong param_1)

{
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  FUN_1449db362(param_1 + 0xa8);
  FUN_1449db362(param_1 + 0x90);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x30);
  FUN_145e31d50(param_1);
  return;
}



// FUNCTION 145e31d50 FUN_145e31d50 body=84 status=ok
// SIG undefined FUN_145e31d50(void)

void FUN_145e31d50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e31d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,1);
  return;
}



// FUNCTION 145e31da4 FUN_145e31da4 body=92 status=ok
// SIG undefined FUN_145e31da4(void)

int FUN_145e31da4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146abecca(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_145e31e60(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 145e31e00 FUN_145e31e00 body=95 status=ok
// SIG undefined FUN_145e31e00(void)

void FUN_145e31e00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145e31e60 FUN_145e31e60 body=228 status=ok
// SIG undefined FUN_145e31e60(void)

void FUN_145e31e60(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  FUN_145e31f44();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    FUN_144a450dc(param_1 + 0x38,param_3 + 0x30);
  }
  if (*(char *)(param_3 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_3 + 0x60);
    uVar1 = *(undefined4 *)(param_3 + 0x40);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    uVar3 = *(undefined4 *)(param_3 + 0x48);
    uVar4 = *(undefined4 *)(param_3 + 0x4c);
    uVar5 = *(undefined4 *)(param_3 + 0x54);
    uVar6 = *(undefined4 *)(param_3 + 0x58);
    uVar7 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    *(undefined4 *)(param_1 + 100) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    FUN_144a450dc(param_1 + 0x70,param_3 + 0x68);
  }
  if (*(char *)(param_3 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_3 + 0x88);
    uVar1 = *(undefined4 *)(param_3 + 0x7c);
    uVar2 = *(undefined4 *)(param_3 + 0x80);
    uVar3 = *(undefined4 *)(param_3 + 0x84);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_3 + 0x78);
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    FUN_144a450dc(param_1 + 0x98,param_3 + 0x90);
  }
  if (*(char *)(param_3 + 0xa1) == '\x01') {
    *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_3 + 0xa0);
    FUN_144a450dc(param_1 + 0xb0,param_3 + 0xa8);
  }
  puVar8 = (undefined4 *)(param_1 + 0xc0);
  if (*(char *)(param_3 + 0xbc) != '\0') {
    puVar8 = (undefined4 *)(param_3 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0xc0) = *puVar8;
  return;
}



// FUNCTION 145e31f44 FUN_145e31f44 body=152 status=ok
// SIG undefined FUN_145e31f44(void)

void FUN_145e31f44(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 145e31fdc FUN_145e31fdc body=40 status=ok
// SIG undefined FUN_145e31fdc(void)

undefined8 FUN_145e31fdc(undefined8 param_1,int param_2)

{
  FUN_14156de5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e32004 FUN_145e32004 body=1548 status=ok
// SIG undefined FUN_145e32004(void)

void FUN_145e32004(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 *local_1b8;
  undefined1 *local_1b0;
  uint local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  byte local_119;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_88 = 0;
  local_80 = 0x4fc71eb4;
  local_78 = 0;
  FUN_1446ef920();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar10 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar10 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar9 = local_c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  iVar7 = local_c4;
  local_c8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  iVar6 = local_c8;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_118[0] = 1;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_119 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_119);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_119);
  }
  local_120 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  local_124 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  bVar3 = local_119;
  uVar2 = local_120;
  uVar1 = local_124;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168[0] = local_118[0];
  local_160 = local_110;
  uVar8 = FUN_14477b664(uStack_108);
  local_158 = FUN_14477b664(uVar8);
  local_150 = (undefined4)local_100;
  uStack_14c = local_100._4_4_;
  uStack_148 = (undefined4)uStack_f8;
  uStack_144 = uStack_f8._4_4_;
  uVar8 = FUN_14477b664(local_f0);
  local_140 = FUN_14477b664(uVar8);
  uVar5 = uStack_d0;
  lVar4 = local_d8;
  local_138 = uStack_e8;
  local_130 = local_e0;
  local_178 = 0;
  local_170 = (int)uStack_d0;
  if ((int)uStack_d0 == 0) {
    local_16c = 0;
  }
  else {
    FUN_1405bd402(&local_178,uStack_d0 & 0xffffffff,0);
    FUN_1405bd2e2(local_178,lVar4,uVar5 & 0xffffffff);
  }
  local_190 = local_88;
  local_188 = local_80;
  local_180 = 0;
  local_1c0 = iVar6 != 0;
  local_1c8 = iVar7 != 0;
  local_198 = uVar1;
  local_1a0 = uVar2;
  local_1a8 = (uint)bVar3;
  local_1b0 = local_168;
  local_1b8 = &local_178;
  FUN_145e32612(&local_190,local_90,puVar10,puVar9);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e32612 FUN_145e32612 body=812 status=ok
// SIG undefined FUN_145e32612(void)

void FUN_145e32612(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,undefined1 param_6,longlong *param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  byte local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e0;
  longlong *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a0;
  longlong local_198;
  longlong *plStack_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a0 = *param_1;
  local_1c0 = param_3;
  FUN_1446dcdd4(&local_198);
  if (DAT_14cb78ff0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_144837462(DAT_14cb78ff0,&local_198);
  }
  if (lStack_180 != 0) {
    FUN_1400020a8();
  }
  if ((((param_2 != 0) && (lVar5 != 0)) && (lVar6 = FUN_1447210f0(param_2), lVar6 != 0)) &&
     (iVar4 = FUN_14487fd02(param_2), iVar4 != (uint)param_5 * 2 + 1)) {
    FUN_1407f7f84(&local_198,lVar6);
    if (plStack_190 != (longlong *)0x0) {
      iVar4 = (int)plStack_190[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plStack_190[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plStack_190 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plStack_190;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_190 + 0x10))();
      }
      lVar6 = local_198;
      if (plVar7 != (longlong *)0x0) {
        if (local_198 != 0) {
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          lStack_180 = 0;
          local_198 = 0;
          plStack_190 = (longlong *)0x0;
          local_158 = 0xc0;
          local_148 = 0;
          local_138 = 0;
          local_108 = 0;
          local_f8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0x3ff0000000000000;
          local_a8 = 0x3ff0000000000000;
          local_a0 = 0x3ff0000000000000;
          local_98 = 0x3f80000000000000;
          local_90 = 0;
          FUN_145e32940(param_8,&local_198);
          FUN_14065c7a4(&local_198,param_7);
          local_98 = CONCAT44(param_11,param_10);
          local_1d0 = &local_1b8;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1e0 = param_9;
          local_1e8 = param_6;
          local_1f0 = param_5;
          local_1f8 = param_4;
          local_1d8 = &local_198;
          FUN_1405bc592(lVar6,lVar5,param_2,local_1c0);
          FUN_141466e9a(&local_198);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e32940 FUN_145e32940 body=1004 status=ok
// SIG undefined FUN_145e32940(void)

void FUN_145e32940(char *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x28);
    if (lVar8 == 0) {
      uVar6 = FUN_1407f787c();
      lVar8 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x28) = lVar8;
    }
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) {
      if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_145e32987;
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0x30) = lVar7;
          if (lVar7 == 0) goto LAB_145e32987;
          lVar8 = *(longlong *)(param_1 + 0x28);
          goto LAB_145e329ec;
        }
      }
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x34] = '\0';
      param_1[0x35] = '\0';
      param_1[0x36] = '\0';
      param_1[0x37] = '\0';
      goto LAB_145e32987;
    }
LAB_145e329ec:
    if (lVar8 == 0) {
      uVar6 = FUN_1407f787c();
      lVar8 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x28) = lVar8;
      lVar7 = *(longlong *)(param_1 + 0x30);
      if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_145e32d3d:
          lVar7 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_145e32d3d;
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
        }
        *(longlong *)(param_1 + 0x30) = lVar7;
      }
    }
    cVar4 = FUN_144a846f6(*(undefined4 *)(lVar7 + 0x18));
    if (cVar4 != '\0') {
      local_48 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x28));
      local_40 = FUN_14477b664(uVar6);
      local_38 = *(undefined8 *)(param_1 + 0x30);
      local_30 = *(undefined4 *)(param_1 + 0x38);
      iVar2 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar2 + 1U) {
        FUN_1407f7952((longlong *)(param_2 + 0x30),iVar2);
      }
      lVar8 = *(longlong *)(param_2 + 0x30);
      FUN_141818f7a(lVar8 + (longlong)iVar2 * 0x20,&local_48);
      *(undefined4 *)(lVar8 + 0x18 + (longlong)iVar2 * 0x20) = local_30;
    }
    goto LAB_145e32987;
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    if ((*plVar1 == 0) || (lVar8 == 0)) goto LAB_145e32987;
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar7;
        if (lVar7 == 0) goto LAB_145e32987;
        lVar8 = *(longlong *)(param_1 + 0x10);
        goto LAB_145e32ace;
      }
    }
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    goto LAB_145e32987;
  }
LAB_145e32ace:
  if (lVar8 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar8;
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar8 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_145e32d22:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_145e32d22;
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar7;
    }
  }
  cVar4 = FUN_144a846f6(*(undefined4 *)(lVar7 + 0x40));
  if (cVar4 == '\0') goto LAB_145e32987;
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_145e32d36:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_145e32d36;
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar6,plVar1);
    }
    *(longlong *)(param_1 + 0x18) = lVar7;
  }
  cVar4 = FUN_144a846f6(*(undefined4 *)(lVar7 + 0x18));
  if (cVar4 != '\0') {
    iVar2 = *(int *)(param_2 + 0x28);
    uVar5 = iVar2 + 1;
    *(uint *)(param_2 + 0x28) = uVar5;
    if (*(uint *)(param_2 + 0x2c) < uVar5) {
      FUN_1407f7a52(param_2 + 0x20,iVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
LAB_145e32987:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e32d42 FUN_145e32d42 body=158 status=ok
// SIG undefined FUN_145e32d42(void)

longlong * FUN_145e32d42(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_145e32de3();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145e32e84(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e32de3 FUN_145e32de3 body=161 status=ok
// SIG undefined FUN_145e32de3(void)

undefined8 * FUN_145e32de3(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a03b0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[2] = &PTR_LAB_14b42ca20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  FUN_144a63cba(puVar1 + 8);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b9a03d0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return puVar1;
}



// FUNCTION 145e32e84 FUN_145e32e84 body=162 status=ok
// SIG undefined FUN_145e32e84(void)

void FUN_145e32e84(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145e32ec3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145e32ec3;
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
LAB_145e32ec3:
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
                    /* WARNING: Could not recover jumptable at 0x000145e32f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145e32f26 FUN_145e32f26 body=40 status=ok
// SIG undefined FUN_145e32f26(void)

undefined8 FUN_145e32f26(undefined8 param_1,int param_2)

{
  FUN_145e32f4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e32f4e FUN_145e32f4e body=203 status=ok
// SIG undefined FUN_145e32f4e(void)

void FUN_145e32f4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcbd7b0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145e3301a(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145e33050(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145e33086(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145e330bc(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e3301a FUN_145e3301a body=53 status=ok
// SIG undefined FUN_145e3301a(void)

void FUN_145e3301a(longlong *param_1)

{
  FUN_145e330f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e33050 FUN_145e33050 body=53 status=ok
// SIG undefined FUN_145e33050(void)

void FUN_145e33050(longlong *param_1)

{
  FUN_145e33234();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e33086 FUN_145e33086 body=53 status=ok
// SIG undefined FUN_145e33086(void)

void FUN_145e33086(longlong *param_1)

{
  FUN_145e33376();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e330bc FUN_145e330bc body=53 status=ok
// SIG undefined FUN_145e330bc(void)

void FUN_145e330bc(longlong *param_1)

{
  FUN_145e334b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e330f2 FUN_145e330f2 body=321 status=ok
// SIG undefined FUN_145e330f2(void)

void FUN_145e330f2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e33234 FUN_145e33234 body=321 status=ok
// SIG undefined FUN_145e33234(void)

void FUN_145e33234(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e33376 FUN_145e33376 body=321 status=ok
// SIG undefined FUN_145e33376(void)

void FUN_145e33376(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e334b8 FUN_145e334b8 body=321 status=ok
// SIG undefined FUN_145e334b8(void)

void FUN_145e334b8(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e335fa FUN_145e335fa body=158 status=ok
// SIG undefined FUN_145e335fa(void)

bool FUN_145e335fa(longlong param_1,undefined8 param_2)

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



// FUNCTION 145e336a4 FUN_145e336a4 body=508 status=ok
// SIG undefined FUN_145e336a4(void)

void FUN_145e336a4(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_81;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = param_1[0x340];
  if (lVar3 != 0) {
    lVar2 = FUN_1447e736e(lVar3 + 0xed8);
    if (lVar2 == 0) {
      lVar3 = lVar3 + 0xe58;
    }
    else {
      lVar3 = FUN_1447e736e(lVar3 + 0xed8);
      lVar3 = lVar3 + 0x30;
    }
    if ((param_2 != (longlong *)0x0) && (lVar3 != 0)) {
      cVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      if (cVar1 == '\0') {
        fVar6 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
        fVar7 = (float)FUN_140f8608e(param_1 + 0x284);
        fVar6 = fVar6 / fVar7;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = (float)FUN_1448c9f94(lVar3,fVar6,0);
        fVar7 = (float)FUN_1401f2f5e(param_1);
        uVar4 = (**(code **)(*param_2 + 0xa8))(param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,local_100);
        (**(code **)(*param_2 + 0xb0))(param_2,local_78);
        local_108 = 0;
        local_110 = 0;
        local_118 = (undefined4 *)CONCAT44(local_118._4_4_,fVar7 * fVar6);
        (**(code **)(*param_1 + 0x860))(param_1,local_78,local_100,uVar4);
        local_100[0] = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_82 = 1;
        local_81 = 0;
        uVar4 = (**(code **)(*param_2 + 0x100))(param_2);
        lVar3 = param_1[0x2e2];
        lVar2 = FUN_140316ff8();
        uVar5 = FUN_1447210f0(param_1);
        local_118 = local_100;
        FUN_140bdce7c(uVar5,lVar2 + 0xd8,lVar3,uVar4);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e338a2 FUN_145e338a2 body=144 status=ok
// SIG undefined FUN_145e338a2(void)

code * FUN_145e338a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e33932();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VelocityFlattenParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVelocityFlattenParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000158;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6cba0;
}



// FUNCTION 145e33932 FUN_145e33932 body=268 status=ok
// SIG undefined FUN_145e33932(void)

undefined * FUN_145e33932(void)

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
              0x110) < DAT_14ca350f0) {
    FUN_144b3d300(&DAT_14ca350f0);
    if (DAT_14ca350f0 == -1) {
      FUN_145e33a40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVelocityFlattenParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca35070,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fc1);
      _Init_thread_footer(&DAT_14ca350f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca35070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e33a40 FUN_145e33a40 body=226 status=ok
// SIG undefined FUN_145e33a40(void)

longlong * FUN_145e33a40(longlong *param_1)

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
  pcVar13 = FUN_1462fcd74;
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



// FUNCTION 145e33b28 FUN_145e33b28 body=132 status=ok
// SIG undefined FUN_145e33b28(void)

undefined1 * FUN_145e33b28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e33b24;
}



// FUNCTION 145e33bac FUN_145e33bac body=226 status=ok
// SIG undefined FUN_145e33bac(void)

longlong * FUN_145e33bac(longlong *param_1)

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
  pcVar13 = FUN_14630d682;
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



// FUNCTION 145e33c94 FUN_145e33c94 body=140 status=ok
// SIG undefined FUN_145e33c94(void)

undefined1 * FUN_145e33c94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155dacc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWaterTileVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x357;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5ea78;
  return &LAB_145e33c90;
}



// FUNCTION 145e33d20 FUN_145e33d20 body=146 status=ok
// SIG undefined FUN_145e33d20(void)

code * FUN_145e33d20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155ef06();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSingleLayerWaterCompositePS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000358;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5e7d0;
  return FUN_145e33c94;
}



// FUNCTION 145e33db2 FUN_145e33db2 body=144 status=ok
// SIG undefined FUN_145e33db2(void)

code * FUN_145e33db2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e33e42();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam44";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSpriteRotationRateModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4900000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e340bc;
}



// FUNCTION 145e33e42 FUN_145e33e42 body=268 status=ok
// SIG undefined FUN_145e33e42(void)

undefined * FUN_145e33e42(void)

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
              0x110) < DAT_14cb34878) {
    FUN_144b3d300(&DAT_14cb34878);
    if (DAT_14cb34878 == -1) {
      FUN_145e33f50(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSpriteRotationRateModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x76;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb347f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8ac);
      _Init_thread_footer(&DAT_14cb34878);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb347f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e33f50 FUN_145e33f50 body=226 status=ok
// SIG undefined FUN_145e33f50(void)

longlong * FUN_145e33f50(longlong *param_1)

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
  pcVar13 = FUN_1464628c0;
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



// FUNCTION 145e34038 FUN_145e34038 body=132 status=ok
// SIG undefined FUN_145e34038(void)

undefined1 * FUN_145e34038(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpriteRotationRate_Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x77;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e34034;
}



// FUNCTION 145e340bc FUN_145e340bc body=144 status=ok
// SIG undefined FUN_145e340bc(void)

code * FUN_145e340bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e3414c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam43";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSpriteFacingAndAlignmentModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4700000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e05966;
}



// FUNCTION 145e3414c FUN_145e3414c body=268 status=ok
// SIG undefined FUN_145e3414c(void)

undefined * FUN_145e3414c(void)

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
              0x110) < DAT_14cb34900) {
    FUN_144b3d300(&DAT_14cb34900);
    if (DAT_14cb34900 == -1) {
      FUN_145e3425a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSpriteFacingAndAlignmentModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x71;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34880,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8b8);
      _Init_thread_footer(&DAT_14cb34900);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3425a FUN_145e3425a body=226 status=ok
// SIG undefined FUN_145e3425a(void)

longlong * FUN_145e3425a(longlong *param_1)

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
  pcVar13 = FUN_146462948;
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



// FUNCTION 145e34342 FUN_145e34342 body=132 status=ok
// SIG undefined FUN_145e34342(void)

undefined1 * FUN_145e34342(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpriteFacingAndAlignment_SpriteFacing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x72;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3433e;
}



// FUNCTION 145e343c6 FUN_145e343c6 body=144 status=ok
// SIG undefined FUN_145e343c6(void)

code * FUN_145e343c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145e34456();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam29";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInitialMeshOrientationModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1300000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d46d64;
}



// FUNCTION 145e34456 FUN_145e34456 body=268 status=ok
// SIG undefined FUN_145e34456(void)

undefined * FUN_145e34456(void)

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
              0x110) < DAT_14cb34f60) {
    FUN_144b3d300(&DAT_14cb34f60);
    if (DAT_14cb34f60 == -1) {
      FUN_145e34564(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInitialMeshOrientationModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x21;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34ee0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb948);
      _Init_thread_footer(&DAT_14cb34f60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e34564 FUN_145e34564 body=226 status=ok
// SIG undefined FUN_145e34564(void)

longlong * FUN_145e34564(longlong *param_1)

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
  pcVar13 = FUN_146463134;
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



// FUNCTION 145e3464c FUN_145e3464c body=132 status=ok
// SIG undefined FUN_145e3464c(void)

undefined1 * FUN_145e3464c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitialMeshOrientation_RotationScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e34648;
}



// FUNCTION 145e346d0 FUN_145e346d0 body=28 status=ok
// SIG undefined FUN_145e346d0(void)

undefined8 FUN_145e346d0(undefined8 param_1,undefined8 param_2)

{
  FUN_145e346ec(param_2,param_1);
  return param_1;
}



// FUNCTION 145e346ec FUN_145e346ec body=601 status=ok
// SIG undefined FUN_145e346ec(void)

double * FUN_145e346ec(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_1[3];
  lStack_b0 = param_1[4];
  FUN_1404b5d90(*param_1,&local_88,&local_a0,*(undefined8 *)(*param_1 + 8));
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_2[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_2[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e34946 FUN_145e34946 body=266 status=ok
// SIG undefined FUN_145e34946(void)

void FUN_145e34946(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    uVar1 = 2;
    if ((*(char *)(param_2 + 0x3d) == '\x01') && (*(char *)(param_2 + 0x3f) == '\x01')) {
      uVar1 = (uint)*(byte *)(param_2 + 0x40);
    }
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  *(longlong *)(param_1 + 2) =
       (longlong)*(int *)(param_2 + 0x34) + (longlong)*(int *)(param_2 + 0x30);
  local_34 = -1;
  FUN_1446f470e(&local_40,L"CUSTOMSEARCHINT1",1);
  FUN_145e34a52(param_2 + 0x28,local_40,&local_34);
  *(bool *)(param_1 + 4) = local_34 == 1;
  FUN_145e34af6(&local_50,param_2);
  if (param_1 + 6 == (uint *)&local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 6) = local_50;
    param_1[8] = local_48;
    param_1[9] = local_44;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e34a52 FUN_145e34a52 body=164 status=ok
// SIG undefined FUN_145e34a52(void)

undefined8 FUN_145e34a52(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x38) == param_2)
        goto LAB_145e34ad0;
        iVar5 = *(int *)(lVar2 + 0x30);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_145e34ad0:
  pcVar3 = (char *)(lVar2 + 8);
  if (lVar2 == 0) {
    pcVar3 = (char *)0x0;
  }
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\x01') {
      uVar4 = *(undefined4 *)(pcVar3 + 8);
    }
    else {
      uVar4 = 0;
    }
    *param_3 = uVar4;
  }
  return CONCAT71((int7)((ulonglong)pcVar3 >> 8),pcVar3 != (char *)0x0);
}



// FUNCTION 145e34af6 FUN_145e34af6 body=820 status=ok
// SIG undefined FUN_145e34af6(void)

longlong * FUN_145e34af6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(longlong *)(param_2 + 0x100);
  plVar3 = *(longlong **)(param_2 + 0x108);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1446f470e(&local_60,L"CUSTOMSEARCHINT2",1);
  FUN_145e34e2c(param_2 + 0x28,local_60,&local_58);
  local_a8 = &DAT_149dfb77a;
  local_a0 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    local_a0 = local_58;
  }
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xb0) != 0)) {
    local_a8 = *(undefined2 **)(lVar2 + 0xa8);
  }
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 == (longlong *)0x0) {
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    FUN_144a83b10(&local_98,
                  (uint)*(byte *)(param_2 + 0x41) << 9 |
                  (uint)*(byte *)(param_2 + 0x40) << 8 |
                  (uint)*(byte *)(param_2 + 0x3f) << 7 | (uint)*(byte *)(param_2 + 0x3e) << 6 |
                  (uint)*(byte *)(param_2 + 0x3d) << 5 |
                  (uint)*(byte *)(param_2 + 0x3c) << 4 |
                  (uint)*(byte *)(param_2 + 0x38) + (uint)*(byte *)(param_2 + 0x39) * 2 +
                  (uint)*(byte *)(param_2 + 0x3a) * 4 + (uint)*(byte *)(param_2 + 0x3b) * 8);
    puVar5 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      puVar5 = local_98;
    }
    FUN_140002266(&local_70,L"%s,%s,%s,%s",puVar5);
    if (&local_70 == param_1) {
      local_80 = local_98;
      if (local_70 != 0) {
        FUN_1400020a8();
        local_80 = local_98;
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_68._4_4_;
      local_68 = 0;
      local_80 = local_98;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_80);
    puVar5 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar5 = local_80;
    }
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    FUN_144a83b10(&local_98,
                  (uint)*(byte *)(param_2 + 0x41) << 9 |
                  (uint)*(byte *)(param_2 + 0x40) << 8 |
                  (uint)*(byte *)(param_2 + 0x3f) << 7 | (uint)*(byte *)(param_2 + 0x3e) << 6 |
                  (uint)*(byte *)(param_2 + 0x3d) << 5 |
                  (uint)*(byte *)(param_2 + 0x3c) << 4 |
                  (uint)*(byte *)(param_2 + 0x38) + (uint)*(byte *)(param_2 + 0x39) * 2 +
                  (uint)*(byte *)(param_2 + 0x3a) * 4 + (uint)*(byte *)(param_2 + 0x3b) * 8);
    puVar6 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      puVar6 = local_98;
    }
    FUN_140002266(&local_70,L"%s,%s,%s,%s",puVar6,puVar5);
    if (&local_70 == param_1) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_68._4_4_;
      local_68 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145e34e2c FUN_145e34e2c body=166 status=ok
// SIG undefined FUN_145e34e2c(void)

bool FUN_145e34e2c(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_145e34eab;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_145e34eab:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_140b74118(lVar4,param_3);
  }
  return lVar4 != 0;
}



// FUNCTION 145e34ed2 FUN_145e34ed2 body=146 status=ok
// SIG undefined FUN_145e34ed2(void)

code * FUN_145e34ed2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e34f64();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairInstance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairInstance";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000485;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9da838;
  return FUN_145e6f16c;
}



// FUNCTION 145e34f64 FUN_145e34f64 body=261 status=ok
// SIG undefined FUN_145e34f64(void)

void FUN_145e34f64(void)

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
              0x110) < DAT_14c9da8b8) {
    FUN_144b3d300(&DAT_14c9da8b8);
    if (DAT_14c9da8b8 == -1) {
      FUN_145e3506a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairInstance";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x47c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da838,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71ccd);
      _Init_thread_footer(&DAT_14c9da8b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3506a FUN_145e3506a body=226 status=ok
// SIG undefined FUN_145e3506a(void)

longlong * FUN_145e3506a(longlong *param_1)

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
  pcVar13 = FUN_1462cc218;
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



// FUNCTION 145e35152 FUN_145e35152 body=138 status=ok
// SIG undefined FUN_145e35152(void)

undefined1 * FUN_145e35152(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x47d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e3514e;
}



// FUNCTION 145e351dc FUN_145e351dc body=152 status=ok
// SIG undefined FUN_145e351dc(void)

void FUN_145e351dc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_14762f1d6(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e352aa FUN_145e352aa body=182 status=ok
// SIG undefined FUN_145e352aa(void)

undefined8 * FUN_145e352aa(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4dd700;
  *(undefined4 *)(param_1 + 7) = 4;
  lVar1 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0xa2);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14588a226();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3536c FUN_145e3536c body=212 status=ok
// SIG undefined FUN_145e3536c(void)

undefined8 * FUN_145e3536c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67b5f0;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba28) {
    FUN_144b3d300(&DAT_14caeba28);
    if (DAT_14caeba28 == -1) {
      FUN_14156e0de();
      atexit((_func_5014 *)&LAB_14356ee79);
      _Init_thread_footer(&DAT_14caeba28);
    }
  }
  return param_1;
}



// FUNCTION 145e3544c FUN_145e3544c body=212 status=ok
// SIG undefined FUN_145e3544c(void)

undefined8 * FUN_145e3544c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a680390;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebee0) {
    FUN_144b3d300(&DAT_14caebee0);
    if (DAT_14caebee0 == -1) {
      FUN_14156e184();
      atexit((_func_5014 *)&LAB_14356f300);
      _Init_thread_footer(&DAT_14caebee0);
    }
  }
  return param_1;
}



// FUNCTION 145e3552c FUN_145e3552c body=212 status=ok
// SIG undefined FUN_145e3552c(void)

undefined8 * FUN_145e3552c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6928e0;
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
  param_1[0x25] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb218) {
    FUN_144b3d300(&DAT_14caeb218);
    if (DAT_14caeb218 == -1) {
      FUN_14156e22a();
      atexit((_func_5014 *)&LAB_14356ddb5);
      _Init_thread_footer(&DAT_14caeb218);
    }
  }
  return param_1;
}



// FUNCTION 145e3560c FUN_145e3560c body=212 status=ok
// SIG undefined FUN_145e3560c(void)

undefined8 * FUN_145e3560c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6ac290;
  memset(param_1 + 0x16,0,0x118);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd28) {
    FUN_144b3d300(&DAT_14caebd28);
    if (DAT_14caebd28 == -1) {
      FUN_14156e2d0();
      atexit((_func_5014 *)&LAB_14356f16e);
      _Init_thread_footer(&DAT_14caebd28);
    }
  }
  param_1[0x3b] = 0x3f00000000000000;
  param_1[0x3c] = 0x3f0000003f000000;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cd) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x1010000;
  return param_1;
}



// FUNCTION 145e356ec FUN_145e356ec body=183 status=ok
// SIG undefined FUN_145e356ec(void)

undefined8 * FUN_145e356ec(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *param_1 = &PTR_FUN_14a6ec1b0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6088) {
    FUN_144b3d300(&DAT_14caf6088);
    if (DAT_14caf6088 == -1) {
      FUN_1446f470e(&DAT_14caf6080,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf6088);
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = DAT_14caf6080;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  return param_1;
}



// FUNCTION 145e357ae FUN_145e357ae body=182 status=ok
// SIG undefined FUN_145e357ae(void)

undefined8 * FUN_145e357ae(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a8d8b90;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1446ddc76(&local_28,"InputDeviceLightColor",1);
  param_1[0x11] = local_28;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e35866 FUN_145e35866 body=40 status=ok
// SIG undefined FUN_145e35866(void)

undefined8 FUN_145e35866(undefined8 param_1,int param_2)

{
  FUN_145e3588e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e3588e FUN_145e3588e body=154 status=ok
// SIG undefined FUN_145e3588e(void)

void FUN_145e3588e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aeaa9c0;
  param_1[5] = &PTR_FUN_14aeab4c0;
  param_1[6] = &PTR_FUN_14aeab500;
  param_1[0x55] = &PTR_FUN_14aeab550;
  param_1[0x56] = &PTR_FUN_14aeab5d0;
  param_1[0x57] = &PTR_FUN_14aeab5e0;
  param_1[0xe3] = &PTR_FUN_14aeab610;
  plVar3 = (longlong *)param_1[0xe8];
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
  FUN_14006e248(param_1);
  return;
}



// FUNCTION 145e35934 FUN_145e35934 body=183 status=ok
// SIG undefined FUN_145e35934(void)

undefined8 * FUN_145e35934(undefined8 *param_1)

{
  FUN_1458aff94();
  *param_1 = &PTR_FUN_14b4c4d20;
  param_1[0x72] = &PTR_LAB_14b4c5490;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x8d] = &PTR_FUN_14a5af930;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b7) = 0;
  param_1[0x9c] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  return param_1;
}



// FUNCTION 145e359f6 FUN_145e359f6 body=88 status=ok
// SIG undefined FUN_145e359f6(void)

void FUN_145e359f6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e9de0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e35a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145e35a4e FUN_145e35a4e body=40 status=ok
// SIG undefined FUN_145e35a4e(void)

undefined8 FUN_145e35a4e(undefined8 param_1,int param_2)

{
  FUN_145e35a76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e35a76 FUN_145e35a76 body=154 status=ok
// SIG undefined FUN_145e35a76(void)

void FUN_145e35a76(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b568970;
  param_1[5] = &PTR_FUN_14b568f10;
  param_1[0x2d] = &PTR_FUN_14b568f50;
  plVar3 = (longlong *)param_1[0x27b];
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
  *param_1 = &PTR_FUN_14b567900;
  param_1[5] = &PTR_LAB_14b567ea0;
  param_1[0x2d] = &PTR_LAB_14b567ee0;
  if ((longlong *)param_1[0x277] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x277] + 0x10))();
  }
  FUN_1414c321a(param_1);
  return;
}



// FUNCTION 145e35b16 FUN_145e35b16 body=208 status=ok
// SIG undefined FUN_145e35b16(void)

void FUN_145e35b16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14156e4a4();
  FUN_14156e376(param_1);
  if ((*(longlong *)(param_1 + 0x1de8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1e70) + 0x4c) != '\x01')) {
    *(undefined8 *)(param_1 + 0x1de8) = 0;
  }
  FUN_14156e3fa(*(longlong *)(param_1 + 0x1e70),1);
  LOCK();
  *(undefined4 *)(param_1 + 0x1e58) = 0;
  UNLOCK();
  FUN_141462cfc(*(undefined8 *)(param_1 + 0x1e40),*(undefined4 *)(param_1 + 0x1e48));
  *(undefined4 *)(param_1 + 0x1e48) = 0;
  if (*(int *)(param_1 + 0x1e4c) != 0) {
    FUN_148a43da4(param_1 + 0x1e40);
  }
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1e38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145e35bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e35be6 FUN_145e35be6 body=40 status=ok
// SIG undefined FUN_145e35be6(void)

undefined8 FUN_145e35be6(undefined8 param_1,int param_2)

{
  FUN_145e35c0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e35c0e FUN_145e35c0e body=154 status=ok
// SIG undefined FUN_145e35c0e(void)

void FUN_145e35c0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc54c70;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc53600;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145e35ca8 FUN_145e35ca8 body=278 status=ok
// SIG undefined FUN_145e35ca8(void)

undefined * FUN_145e35ca8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e720) {
    FUN_144b3d300(&DAT_14ca1e720);
    if (DAT_14ca1e720 == -1) {
      FUN_145e35dc0(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"PathTracingLightFunctionParameters";
      local_78 = L"FLightFunctionParametersPathTracing";
      local_50 = 0x70;
      local_58 = 0x70d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1e6a0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e70b43);
      _Init_thread_footer(&DAT_14ca1e720);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1e6a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e35dc0 FUN_145e35dc0 body=226 status=ok
// SIG undefined FUN_145e35dc0(void)

longlong * FUN_145e35dc0(longlong *param_1)

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
  pcVar13 = FUN_1462f6a8e;
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



// FUNCTION 145e35ea8 FUN_145e35ea8 body=130 status=ok
// SIG undefined FUN_145e35ea8(void)

undefined1 * FUN_145e35ea8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionTranslatedWorldToLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e35ea4;
}



// FUNCTION 145e35f2a FUN_145e35f2a body=138 status=ok
// SIG undefined FUN_145e35f2a(void)

code * FUN_145e35f2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000070f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e35ea8;
}



// FUNCTION 145e35fb4 FUN_145e35fb4 body=278 status=ok
// SIG undefined FUN_145e35fb4(void)

undefined * FUN_145e35fb4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade208) {
    FUN_144b3d300(&DAT_14cade208);
    if (DAT_14cade208 == -1) {
      FUN_145e360cc(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GeomCache";
      local_78 = L"FGeometryCacheVertexFactoryUniformBufferParameters";
      local_50 = 0x40;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cade188,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14350e8b3);
      _Init_thread_footer(&DAT_14cade208);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cade188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e360cc FUN_145e360cc body=226 status=ok
// SIG undefined FUN_145e360cc(void)

longlong * FUN_145e360cc(longlong *param_1)

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
  pcVar13 = FUN_1463d0b76;
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



// FUNCTION 145e361b4 FUN_145e361b4 body=130 status=ok
// SIG undefined FUN_145e361b4(void)

undefined1 * FUN_145e361b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e361b0;
}



// FUNCTION 145e36236 FUN_145e36236 body=138 status=ok
// SIG undefined FUN_145e36236(void)

code * FUN_145e36236(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshExtension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e361b4;
}



// FUNCTION 145e362c0 FUN_145e362c0 body=278 status=ok
// SIG undefined FUN_145e362c0(void)

undefined * FUN_145e362c0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae4c20) {
    FUN_144b3d300(&DAT_14cae4c20);
    if (DAT_14cae4c20 == -1) {
      FUN_145e363d8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"InstanceVF";
      local_78 = L"FInstancedStaticMeshVertexFactoryUniformShaderParameters";
      local_50 = 0x30;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae4ba0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435332d0);
      _Init_thread_footer(&DAT_14cae4c20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae4ba0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e363d8 FUN_145e363d8 body=226 status=ok
// SIG undefined FUN_145e363d8(void)

longlong * FUN_145e363d8(longlong *param_1)

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
  pcVar13 = FUN_1463df1ea;
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



// FUNCTION 145e364c0 FUN_145e364c0 body=130 status=ok
// SIG undefined FUN_145e364c0(void)

undefined1 * FUN_145e364c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_InstanceOriginBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e364bc;
}



// FUNCTION 145e36542 FUN_145e36542 body=138 status=ok
// SIG undefined FUN_145e36542(void)

code * FUN_145e36542(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCustomDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147b4967a;
}



// FUNCTION 145e365cc FUN_145e365cc body=47 status=ok
// SIG undefined FUN_145e365cc(void)

void FUN_145e365cc(longlong param_1)

{
  FUN_144a63f30();
  FUN_145e365fc(param_1);
  if ((*(ushort *)(param_1 + 0x98) & 0x6004) != 0) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 3;
  }
  return;
}



// FUNCTION 145e365fc FUN_145e365fc body=129 status=ok
// SIG undefined FUN_145e365fc(void)

void FUN_145e365fc(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    lVar5 = plVar1[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar5 = plVar1[0x22];
    }
    uVar3 = *(uint *)(lVar5 + 0x98) & 4;
  }
  else {
    uVar4 = FUN_145993d66();
    FUN_14156e8b3(param_1,uVar4,param_1 + 0x88);
    bVar2 = FUN_145e3667d(param_1,uVar4);
    uVar3 = (uint)bVar2 << 2;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffb | uVar3;
  return;
}



// FUNCTION 145e3667d FUN_145e3667d body=335 status=ok
// SIG undefined FUN_145e3667d(void)

undefined8 FUN_145e3667d(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x70);
  if (plVar6 == (longlong *)0x0) {
LAB_145e366e1:
    uVar4 = 0;
  }
  else {
    do {
      lVar2 = FUN_1446f8646();
      if (((plVar6[2] & 1U) == 0) || (uVar5 = plVar6[2] & 0xfffffffffffffffe, uVar5 == 0)) {
LAB_145e36706:
        uVar5 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar5 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38))
        goto LAB_145e36706;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) {
          uVar5 = 0;
        }
      }
      if (uVar5 == param_2) goto LAB_145e366e1;
      if ((*(ushort *)((longlong)plVar6 + 0x39) & 0x120) == 0) {
        lVar2 = plVar6[1];
        lVar3 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar7 = lVar2 != 0;
          if (lVar2 != lVar3 && bVar7) {
            do {
              lVar2 = *(longlong *)(lVar2 + 0x30);
              bVar7 = lVar2 != 0;
              if (lVar2 == lVar3) break;
            } while (lVar2 != 0);
          }
          if (bVar7) goto LAB_145e3673a;
        }
        else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_145e3673a:
          (**(code **)(*plVar6 + 0x70))(plVar6,local_40,0,0);
          local_50 = 0xffffffff;
          local_58 = 0;
          iVar1 = FUN_1447ee042(local_40,L"FBlackboardKeySelector");
          if (local_40[0] != 0) {
            FUN_1400020a8();
          }
          if (iVar1 != -1) {
            uVar4 = 1;
            break;
          }
        }
      }
      plVar6 = (longlong *)plVar6[9];
      uVar4 = 0;
    } while (plVar6 != (longlong *)0x0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145e367ce FUN_145e367ce body=319 status=ok
// SIG undefined FUN_145e367ce(void)

void FUN_145e367ce(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1406d14fa();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_145e3690e(lVar2);
      if ((cVar1 != '\0') && (lVar3 = *(longlong *)(lVar2 + 0xc38), lVar3 != 0)) {
        lVar4 = FUN_140d8df70(lVar2,param_1 + 0x38);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xf0) != 0)) {
          plVar6 = (longlong *)(*(longlong *)(lVar4 + 0xf0) + 0xb8);
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar2);
          }
          local_58 = &local_40;
          local_38 = lVar2 + 0xe18;
          local_50 = plVar6;
          local_40 = lVar2;
          FUN_145e36912(lVar3,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                        param_1 + 0x38);
          lVar4 = FUN_14011c349();
          lVar3 = *plVar6;
          uVar5 = *(uint *)(param_1 + 0x3c) & 1;
          lVar4 = *(longlong *)(lVar4 + 0x48);
          *(uint *)(param_1 + 0x3c) = uVar5;
          if ((lVar3 == lVar4) && (uVar5 != 0)) {
            lVar2 = FUN_145d18230(lVar2);
            if (lVar2 != 0) {
              FUN_140d8e082(lVar2);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3690e FUN_145e3690e body=3 status=ok
// SIG undefined FUN_145e3690e(void)

undefined1 FUN_145e3690e(void)

{
  return 1;
}



// FUNCTION 145e36912 FUN_145e36912 body=203 status=ok
// SIG undefined FUN_145e36912(void)

void FUN_145e36912(longlong param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x1d8);
  if ((((cVar1 != '\0') && (*param_4 != -1)) && (*param_6 != 0)) &&
     ((*param_5 != 0 && (param_5[1] != 0)))) {
    FUN_145e36b1e(param_1 + 0x60);
    *(int *)(param_1 + 100) = *param_4;
    *(longlong *)(param_1 + 0x188) = *param_6;
    lVar2 = *param_5;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *param_5;
      }
    }
    *(longlong *)(param_1 + 0x70) = lVar2;
    *(longlong *)(param_1 + 0x78) = param_5[1];
    *(undefined1 *)(param_1 + 0x60) = 0xd;
    *(undefined4 *)(param_1 + 0x1c4) = param_2;
    *(undefined4 *)(param_1 + 0x1c8) = param_3;
    FUN_145e369de(param_1);
    return;
  }
  return;
}



// FUNCTION 145e369de FUN_145e369de body=300 status=ok
// SIG undefined FUN_145e369de(void)

void FUN_145e369de(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [376];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar2 = FUN_144729dda(param_1 + 0x1d8);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1c8);
  }
  bVar5 = 1;
  if (((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x78), plVar1 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 0x188);
    if (lVar3 != 0) {
      bVar5 = *(byte *)(lVar3 + 0x148);
    }
  }
  if (((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x88), plVar1 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 400);
    if (lVar3 != 0) {
      bVar5 = bVar5 & *(byte *)(lVar3 + 0x148);
    }
  }
  if (bVar5 == 0) {
    uVar4 = FUN_14479d2ce(param_1 + 0x1d8);
    FUN_14154dd46(local_1a0,param_1 + 0x60);
    FUN_145e3703a(uVar4,local_1a0);
  }
  else {
    FUN_145e36b8a(param_1);
  }
  FUN_145e36b1e(param_1 + 0x60);
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e36b1e FUN_145e36b1e body=107 status=ok
// SIG undefined FUN_145e36b1e(void)

void FUN_145e36b1e(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_140b96410(param_1 + 0x50);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0xffff;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  FUN_1447715ec(param_1 + 0x138,&DAT_14c9485f0);
  return;
}



// FUNCTION 145e36b8a FUN_145e36b8a body=290 status=ok
// SIG undefined FUN_145e36b8a(void)

void FUN_145e36b8a(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    cVar1 = FUN_145e36cac((char *)(param_1 + 0x60));
    if (cVar1 != '\0') {
      cVar1 = *(char *)(param_1 + 0x60);
      if (cVar1 == '\a') {
        FUN_14156ea80(param_1);
        return;
      }
      switch(cVar1) {
      case '\x01':
        FUN_143db720e(param_1);
        return;
      case '\x02':
        FUN_143db75a2(param_1);
        return;
      case '\x03':
        FUN_143db788e(param_1);
        return;
      case '\x04':
        FUN_143db7eaa(param_1);
        return;
      case '\x05':
        FUN_143db80cc(param_1);
        return;
      case '\x06':
        FUN_14156f2ee(param_1);
        return;
      case '\b':
        FUN_143db8438(param_1);
        return;
      case '\t':
        FUN_143db8c86(param_1);
        return;
      case '\n':
        FUN_143db8ee0(param_1);
        return;
      case '\v':
        FUN_143db928c(param_1);
        return;
      case '\f':
        FUN_14156f582(param_1);
        return;
      case '\r':
        FUN_14156f21c(param_1);
        return;
      case '\x0e':
        FUN_143db9610(param_1);
        return;
      case '\x0f':
        FUN_143db9d60(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e36cac FUN_145e36cac body=909 status=ok
// SIG undefined FUN_145e36cac(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_145e36cac(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (*param_1 == '\a') {
    if (*(int *)(param_1 + 8) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      return 0;
    }
    uVar4 = 0;
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      uVar4 = (longlong)*(int *)(param_1 + 0x68) * 8;
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5) == 0) {
          return 0;
        }
        uVar5 = uVar5 + 8;
      } while (uVar4 != uVar5);
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      return 0;
    }
    bVar6 = *(longlong *)(param_1 + 0x48) == 0;
    goto LAB_145e36d25;
  }
  uVar4 = 0;
  switch(*param_1) {
  case '\x01':
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (uVar2 == *(uint *)(param_1 + 8) || *(uint *)(param_1 + 8) == 0xffffffff) {
      return 0;
    }
    if (param_1[0x160] == -1) {
      return 0;
    }
    uVar4 = (ulonglong)(uVar2 & 0xffffff00);
    if (param_1[0x160] == param_1[0x161] || param_1[0x161] == -1) {
      return 0;
    }
    goto LAB_145e36eee;
  case '\x02':
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    uVar4 = (ulonglong)(uVar2 & 0xffffff00);
    if (uVar2 == *(uint *)(param_1 + 8) || *(uint *)(param_1 + 8) == 0xffffffff) {
      return 0;
    }
    break;
  case '\x03':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8) || *(int *)(param_1 + 8) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (param_1[0x160] == -1) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        return 0;
      }
    }
    else if (*(longlong *)(param_1 + 0x30) == 0) {
      return 0;
    }
    cVar1 = param_1[0x161];
    uVar4 = *(ulonglong *)(param_1 + 0x40);
    goto joined_r0x000145e36da5;
  case '\x04':
  case '\x05':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    break;
  case '\x06':
  case '\n':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    goto joined_r0x000145e36f73;
  default:
    goto switchD_145e36d40_caseD_7;
  case '\b':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
joined_r0x000145e36f73:
    if (lVar3 == 0) {
      return 0;
    }
    cVar1 = param_1[0x160];
    uVar4 = *(ulonglong *)(param_1 + 0x30);
joined_r0x000145e36da5:
    if (cVar1 == -1) {
      return CONCAT71((int7)(uVar4 >> 8),uVar4 == 0);
    }
    bVar6 = uVar4 == 0;
    goto LAB_145e36d25;
  case '\t':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    goto joined_r0x000145e37016;
  case '\v':
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x138);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      return 0;
    }
    bVar6 = uVar2 == DAT_14c948000;
    goto LAB_145e36d25;
  case '\f':
    return 1;
  case '\r':
  case '\x0e':
    if (*(int *)(param_1 + 4) == -1) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x128) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    bVar6 = *(longlong *)(param_1 + 0x18) == 0;
    goto LAB_145e36d25;
  case '\x0f':
    if (*(longlong *)(param_1 + 0x50) == 0) {
      return 0;
    }
    uVar4 = 0;
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      uVar4 = (longlong)*(int *)(param_1 + 0x68) * 8;
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5) == 0) {
          return 0;
        }
        uVar5 = uVar5 + 8;
      } while (uVar4 != uVar5);
    }
    lVar3 = *(longlong *)(param_1 + 0x130);
joined_r0x000145e37016:
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      bVar6 = *(longlong *)(param_1 + 0x28) == 0;
      goto LAB_145e36d25;
    }
    goto switchD_145e36d40_caseD_7;
  }
  if (param_1[0x160] != -1) {
LAB_145e36eee:
    if ((((*(longlong *)(param_1 + 0x128) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
        (*(longlong *)(param_1 + 0x18) != 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
      bVar6 = *(longlong *)(param_1 + 0x38) == 0;
LAB_145e36d25:
      return CONCAT71((int7)(uVar4 >> 8),!bVar6);
    }
  }
switchD_145e36d40_caseD_7:
  return 0;
}



// FUNCTION 145e3703a FUN_145e3703a body=188 status=ok
// SIG undefined FUN_145e3703a(void)

void FUN_145e3703a(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [80];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14583e8ce(local_198);
  FUN_145dd7080(local_198,param_2);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_198);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(local_148);
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x50);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e370f8 FUN_145e370f8 body=53 status=ok
// SIG undefined FUN_145e370f8(void)

void FUN_145e370f8(longlong *param_1)

{
  FUN_145e3712e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3712e FUN_145e3712e body=335 status=ok
// SIG undefined FUN_145e3712e(void)

void FUN_145e3712e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
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
      lVar2 = *local_70 + (longlong)iStack_54 * 0x38;
      FUN_1449db362(lVar2 + 0x20);
      plVar3 = *(longlong **)(lVar2 + 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3727e FUN_145e3727e body=38 status=ok
// SIG undefined FUN_145e3727e(void)

undefined8 FUN_145e3727e(undefined8 param_1,int param_2)

{
  FUN_145e372a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e372a4 FUN_145e372a4 body=521 status=ok
// SIG undefined FUN_145e372a4(void)

void FUN_145e372a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149ec7090;
  param_1[0x13] = &PTR_FUN_149ec71d0;
  if (param_1[0x3a] != 0) {
    FUN_14156f8ba();
  }
  CoUninitialize();
  OleUninitialize();
  FUN_145e374c6(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x3e];
  if (lVar3 != 0) {
    FUN_145e3793a(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0x3d];
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
  plVar4 = (longlong *)param_1[0x3b];
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
  FUN_140ecb711(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x26] = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[0x27],1);
  FUN_145e37552(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145e374e1(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14015c1dd(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_14015c209(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145e376c2(param_1);
  return;
}



// FUNCTION 145e374ae FUN_145e374ae body=24 status=ok
// SIG undefined FUN_145e374ae(void)

void FUN_145e374ae(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e374c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e374c6 FUN_145e374c6 body=27 status=ok
// SIG undefined FUN_145e374c6(void)

void FUN_145e374c6(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x1c);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e374e1 FUN_145e374e1 body=75 status=ok
// SIG undefined FUN_145e374e1(void)

void FUN_145e374e1(longlong param_1,int param_2)

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



// FUNCTION 145e3752c FUN_145e3752c body=38 status=ok
// SIG undefined FUN_145e3752c(void)

undefined8 FUN_145e3752c(undefined8 param_1,int param_2)

{
  FUN_145e3759c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e37552 FUN_145e37552 body=73 status=ok
// SIG undefined FUN_145e37552(void)

void FUN_145e37552(longlong param_1,int param_2)

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



// FUNCTION 145e3759c FUN_145e3759c body=239 status=ok
// SIG undefined FUN_145e3759c(void)

void FUN_145e3759c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec8380;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1459bcdb0(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145e3768c(param_1 + 0xc);
  plVar3 = (longlong *)param_1[0xb];
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
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e37687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[2] + 0x10))();
  return;
}



// FUNCTION 145e3768c FUN_145e3768c body=53 status=ok
// SIG undefined FUN_145e3768c(void)

void FUN_145e3768c(longlong *param_1)

{
  FUN_145e377d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e376c2 FUN_145e376c2 body=270 status=ok
// SIG undefined FUN_145e376c2(void)

void FUN_145e376c2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5760;
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145e377cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e377d0 FUN_145e377d0 body=361 status=ok
// SIG undefined FUN_145e377d0(void)

void FUN_145e377d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
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
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c;
      plVar4 = *(longlong **)(lVar3 + 0x18 + lVar5 * 0x38);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      plVar4 = *(longlong **)(lVar3 + lVar5 * 0x38 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145e3793a FUN_145e3793a body=572 status=ok
// SIG undefined FUN_145e3793a(void)

void FUN_145e3793a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x28);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  if (plVar3 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_145aeafa6(lVar5 + 0x10,&local_78);
    FUN_1449db362(&local_78);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_145aeafa6(lVar5 + 0x10,&local_78);
    FUN_1449db362(&local_78);
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
  plVar3 = (longlong *)(param_1 + 0x50);
  lVar5 = param_1 + 0x60;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar6 = 0;
  local_48 = lVar5;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_50);
    iVar6 = *(int *)(param_1 + 0x78);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  uStack_70 = local_50;
  local_68 = local_48;
  local_78 = plVar3;
  if ((iStack_3c != iVar6) || (local_48 != lVar5)) {
    do {
      do {
        *(undefined8 *)(*(longlong *)(*local_78 + (longlong)iStack_5c * 0x10) + 8) = 0;
        local_60 = local_60 & ~uStack_70._4_4_;
        FUN_1449c0562(&uStack_70);
      } while (iStack_5c != iVar6);
    } while ((local_68 != lVar5) || (local_78 != plVar3));
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140d5712e();
    cVar4 = FUN_145c2cb76();
    if (cVar4 != '\0') {
      lVar5 = FUN_140d5712e();
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_14480f766(lVar5 + 8);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145e37b78(plVar3);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145e37bae(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e37b78 FUN_145e37b78 body=53 status=ok
// SIG undefined FUN_145e37b78(void)

void FUN_145e37b78(longlong *param_1)

{
  FUN_145e37be4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e37bae FUN_145e37bae body=53 status=ok
// SIG undefined FUN_145e37bae(void)

void FUN_145e37bae(longlong *param_1)

{
  FUN_145e37c3e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e37be4 FUN_145e37be4 body=90 status=ok
// SIG undefined FUN_145e37be4(void)

void FUN_145e37be4(longlong param_1)

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



// FUNCTION 145e37c3e FUN_145e37c3e body=378 status=ok
// SIG undefined FUN_145e37c3e(void)

void FUN_145e37c3e(longlong *param_1)

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



// FUNCTION 145e37dba FUN_145e37dba body=55 status=ok
// SIG undefined FUN_145e37dba(void)

void FUN_145e37dba(longlong *param_1)

{
  FUN_145e37df2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e37df2 FUN_145e37df2 body=382 status=ok
// SIG undefined FUN_145e37df2(void)

void FUN_145e37df2(longlong *param_1,int param_2)

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
      FUN_143f12df2(*local_70 + (longlong)iStack_54 * 0x48 + 8);
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
    FUN_1403af08a(param_1,param_2);
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



// FUNCTION 145e37f7c FUN_145e37f7c body=136 status=ok
// SIG undefined FUN_145e37f7c(void)

void FUN_145e37f7c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = FUN_144729dda(param_1 + 0x38);
  if (cVar3 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  param_1 = param_1 + 0x30;
  cVar3 = FUN_144729dda(param_1);
  if (cVar3 != '\0') {
    lVar2 = FUN_14479d2ce(param_1);
    cVar3 = FUN_1458df38a(lVar2 + 0x60e8,0);
    if (cVar3 != '\0') {
      uVar1 = FUN_14479d2ce(param_1);
      uVar4 = FUN_1459b76c0(param_2);
      FUN_14130b0ce(uVar1,uVar4,0,0);
      return;
    }
  }
  return;
}


