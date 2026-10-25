// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445f5a64 FUN_1445f5a64 body=166 status=ok
// SIG undefined FUN_1445f5a64(void)

void FUN_1445f5a64(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_4 + 2) != 0) && (param_4[1] != 0)) &&
      (uVar1 = *param_4, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_4[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_4 + 2),1);
      if (lVar2 != 0) {
        FUN_144596641(param_4,param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f5b0a FUN_1445f5b0a body=208 status=ok
// SIG undefined FUN_1445f5b0a(void)

void FUN_1445f5b0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_7[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar2 != 0) {
        FUN_1445966f9(param_7,param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



// FUNCTION 1445f5bda FUN_1445f5bda body=171 status=ok
// SIG undefined FUN_1445f5bda(void)

void FUN_1445f5bda(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_5 + 2) != 0) && (param_5[1] != 0)) &&
      (uVar1 = *param_5, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_5[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_5 + 2),1);
      if (lVar2 != 0) {
        FUN_1445967e3(param_5,param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 1445f5c86 FUN_1445f5c86 body=427 status=ok
// SIG undefined FUN_1445f5c86(void)

void FUN_1445f5c86(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140a6aedf(&local_68,*param_2,*(undefined4 *)(param_2 + 1));
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_3,*(undefined4 *)(param_3 + 1));
  local_90 = uStack_60;
  lVar2 = local_68;
  local_80 = uStack_70;
  lVar6 = local_78;
  local_88 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = local_68;
  local_68 = 0;
  uStack_60 = 0;
  if ((((*(longlong *)(param_4 + 2) != 0) && (param_4[1] != 0)) &&
      (uVar1 = *param_4, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_4[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_4 + 2),1);
      if (lVar4 != 0) {
        FUN_14459689c(param_4,lVar3,&local_98,&local_88);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_88;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f5e32 FUN_1445f5e32 body=477 status=ok
// SIG undefined FUN_1445f5e32(void)

void FUN_1445f5e32(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,uint *param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_ac = param_3;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_5,*(undefined4 *)(param_5 + 1));
  local_a0 = uStack_70;
  lVar2 = local_78;
  local_90 = uStack_80;
  lVar6 = local_88;
  local_98 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_a8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_6 + 2) != 0) && (param_6[1] != 0)) &&
      (uVar1 = *param_6, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_6[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_6 + 2),1);
      if (lVar4 != 0) {
        local_c0 = &local_98;
        local_c8 = param_4;
        FUN_144596a02(param_6,lVar3,&local_a8,local_ac);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_98;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  Discord_Free(*param_5);
  Discord_Free(*param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6010 FUN_1445f6010 body=326 status=ok
// SIG undefined FUN_1445f6010(void)

void FUN_1445f6010(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140a6aedf(&local_68,*param_3,*(undefined4 *)(param_3 + 1));
  local_70 = uStack_60;
  lVar2 = local_68;
  local_78 = local_68;
  local_68 = 0;
  uStack_60 = 0;
  if ((((*(longlong *)(param_4 + 2) != 0) && (param_4[1] != 0)) &&
      (uVar1 = *param_4, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_4[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_4 + 2),1);
      if (lVar4 != 0) {
        FUN_144596b83(param_4,lVar3,param_2,&local_78);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6158 FUN_1445f6158 body=590 status=ok
// SIG undefined FUN_1445f6158(void)

void FUN_1445f6158(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f63a8 FUN_1445f63a8 body=590 status=ok
// SIG undefined FUN_1445f63a8(void)

void FUN_1445f63a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f65f8 FUN_1445f65f8 body=590 status=ok
// SIG undefined FUN_1445f65f8(void)

void FUN_1445f65f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6848 FUN_1445f6848 body=590 status=ok
// SIG undefined FUN_1445f6848(void)

void FUN_1445f6848(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6a98 FUN_1445f6a98 body=590 status=ok
// SIG undefined FUN_1445f6a98(void)

void FUN_1445f6a98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6ce8 FUN_1445f6ce8 body=590 status=ok
// SIG undefined FUN_1445f6ce8(void)

void FUN_1445f6ce8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_4;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a6aedf(&local_78,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = 0;
  uStack_80 = 0;
  FUN_140a6aedf(&local_88,*param_3,*(undefined4 *)(param_3 + 1));
  local_98 = 0;
  uStack_90 = 0;
  FUN_140a6aedf(&local_98,*param_6,*(undefined4 *)(param_6 + 1));
  local_c0 = uStack_70;
  lVar2 = local_78;
  local_b0 = uStack_80;
  lVar6 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = (undefined4)uStack_90;
  uStack_9c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_c8 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_7 + 2) != 0) && (param_7[1] != 0)) &&
      (uVar1 = *param_7, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_7[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_7 + 2),1);
      if (lVar4 != 0) {
        local_d8 = &local_a8;
        local_e0 = param_5;
        local_e8 = (undefined1)local_cc;
        FUN_144596c7d(param_7,lVar3,&local_c8,&local_b8);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    lVar6 = local_b8;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  Discord_Free(*param_6);
  Discord_Free(*param_3);
  Discord_Free(*param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f6f38 FUN_1445f6f38 body=131 status=ok
// SIG undefined FUN_1445f6f38(void)

void FUN_1445f6f38(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_144596e74(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f6fbc FUN_1445f6fbc body=172 status=ok
// SIG undefined FUN_1445f6fbc(void)

void FUN_1445f6fbc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144596eeb(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f7068 FUN_1445f7068 body=131 status=ok
// SIG undefined FUN_1445f7068(void)

void FUN_1445f7068(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_144596f8d(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f70ec FUN_1445f70ec body=131 status=ok
// SIG undefined FUN_1445f70ec(void)

void FUN_1445f70ec(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_144597004(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f7170 FUN_1445f7170 body=172 status=ok
// SIG undefined FUN_1445f7170(void)

void FUN_1445f7170(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459707b(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f721c FUN_1445f721c body=172 status=ok
// SIG undefined FUN_1445f721c(void)

void FUN_1445f721c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459711d(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f72c8 FUN_1445f72c8 body=79 status=ok
// SIG undefined FUN_1445f72c8(void)

void FUN_1445f72c8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar1 + 0x28) = *param_1;
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001445f730c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x60))(param_2,lVar1,*(code **)(*param_2 + 0x60));
    return;
  }
  return;
}



// FUNCTION 1445f7318 FUN_1445f7318 body=172 status=ok
// SIG undefined FUN_1445f7318(void)

void FUN_1445f7318(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_1445971bf(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f73c4 FUN_1445f73c4 body=172 status=ok
// SIG undefined FUN_1445f73c4(void)

void FUN_1445f73c4(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144597261(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f7470 FUN_1445f7470 body=172 status=ok
// SIG undefined FUN_1445f7470(void)

void FUN_1445f7470(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144597303(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f751c FUN_1445f751c body=304 status=ok
// SIG undefined FUN_1445f751c(void)

void FUN_1445f751c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1445f757d;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1445f757d:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1445f764c FUN_1445f764c body=346 status=ok
// SIG undefined FUN_1445f764c(void)

void FUN_1445f764c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445f76de;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1445f76de:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1445f77a6 FUN_1445f77a6 body=387 status=ok
// SIG undefined FUN_1445f77a6(void)

void FUN_1445f77a6(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_58 = 0;
  uStack_50 = 0;
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  if ((int)uVar7 != 0) {
    FUN_1445f751c(&local_58);
    uVar7 = param_2[1];
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      lVar4 = FUN_1445f1a19(DAT_14c951640);
      uVar1 = uStack_50;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*param_2 + uVar7 * 8);
      *(undefined4 *)(lVar4 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_50;
      uVar2 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
      if (uStack_50._4_4_ < uVar2) {
        FUN_1445f764c(&local_58,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar6 * 8) = lVar4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  Discord_Free(*param_2);
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar2 = *param_3, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_3[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar4 != 0) {
        FUN_1445973aa(param_3,lVar3,&local_58);
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f792c FUN_1445f792c body=304 status=ok
// SIG undefined FUN_1445f792c(void)

void FUN_1445f792c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1445f798d;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1445f798d:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1445f7a5c FUN_1445f7a5c body=346 status=ok
// SIG undefined FUN_1445f7a5c(void)

void FUN_1445f7a5c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445f7aee;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1445f7aee:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1445f7bb6 FUN_1445f7bb6 body=556 status=ok
// SIG undefined FUN_1445f7bb6(void)

void FUN_1445f7bb6(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint *local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(local_118 + 0x28) = *param_1;
  *(undefined4 *)(local_118 + 0x30) = 1;
  local_108 = 0;
  uStack_100 = 0;
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  local_110 = param_3;
  if ((int)uVar7 != 0) {
    FUN_1445f792c(&local_108);
    uVar7 = param_2[1];
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = DAT_14c951640;
      FUN_14058b40c(DAT_14c951640,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_f8 = FUN_1445b7cec();
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_f0 = uVar1;
      lVar5 = FUN_1402710dd(&local_f8);
      if (lStack_b8 != 0) {
        plVar8 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar8 = local_98;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      uVar3 = uStack_100;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*param_2 + uVar7 * 8);
      *(undefined4 *)(lVar5 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_1445f7a5c(&local_108,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_108 + lVar6 * 8) = lVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  Discord_Free(*param_2);
  puVar2 = local_110;
  if ((((*(longlong *)(local_110 + 2) != 0) && (local_110[1] != 0)) &&
      (uVar4 = *local_110, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 2) == local_110[1])) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
      lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(local_110 + 2),1);
      if (lVar5 != 0) {
        FUN_1445974d1(puVar2,local_118,&local_108);
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f7de4 FUN_1445f7de4 body=387 status=ok
// SIG undefined FUN_1445f7de4(void)

void FUN_1445f7de4(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_58 = 0;
  uStack_50 = 0;
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  if ((int)uVar7 != 0) {
    FUN_1445f751c(&local_58);
    uVar7 = param_2[1];
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      lVar4 = FUN_1445f1a19(DAT_14c951640);
      uVar1 = uStack_50;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*param_2 + uVar7 * 8);
      *(undefined4 *)(lVar4 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_50;
      uVar2 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
      if (uStack_50._4_4_ < uVar2) {
        FUN_1445f764c(&local_58,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar6 * 8) = lVar4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  Discord_Free(*param_2);
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar2 = *param_3, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_3[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar4 != 0) {
        FUN_1445975f4(param_3,lVar3,&local_58);
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f7f6a FUN_1445f7f6a body=131 status=ok
// SIG undefined FUN_1445f7f6a(void)

void FUN_1445f7f6a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_1445976be(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f7fee FUN_1445f7fee body=172 status=ok
// SIG undefined FUN_1445f7fee(void)

void FUN_1445f7fee(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144597735(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f809a FUN_1445f809a body=184 status=ok
// SIG undefined FUN_1445f809a(void)

void FUN_1445f809a(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_1445977d7(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8152 FUN_1445f8152 body=635 status=ok
// SIG undefined FUN_1445f8152(void)

undefined8 * FUN_1445f8152(undefined8 *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  void *_Dst;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *_Str;
  wchar_t *pwVar11;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar7 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar8 = sVar5 & 0xffffffff;
    pwVar11 = _Str;
    do {
      iVar9 = (int)uVar8;
      if (iVar9 < 1) {
LAB_1445f8281:
        local_50 = local_e4;
        uVar6 = local_e4 + 1;
        if (uVar6 < 0x81) goto LAB_1445f829e;
        FUN_1446efa72(&local_60,0,uVar6,1);
        local_f0 = local_60;
        goto LAB_1445f82a0;
      }
      wVar1 = *pwVar11;
      uVar6 = (uint)(ushort)wVar1;
      pwVar2 = pwVar11 + 1;
      uVar10 = iVar9 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          cVar4 = FUN_140024707(uVar6,&local_e4,&local_f0);
          if (cVar4 != '\0') goto LAB_1445f8281;
          break;
        }
        if (((ushort)*pwVar2 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar2 + 0xfca02400;
          uVar10 = iVar9 - 2;
          pwVar2 = pwVar11 + 2;
        }
      }
      pwVar11 = pwVar2;
      cVar4 = FUN_140024707(uVar6,&local_e4,&local_f0);
      uVar8 = (ulonglong)uVar10;
    } while (cVar4 != '\0');
    local_50 = 0xffffffff;
    uVar6 = 0;
LAB_1445f829e:
    local_f0 = (undefined1 *)0x0;
LAB_1445f82a0:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar9 = (int)sVar5 + 1;
    local_e4 = uVar6;
    local_58 = local_f0;
    do {
      if (iVar9 < 1) break;
      wVar1 = *_Str;
      uVar6 = (uint)(ushort)wVar1;
      pwVar11 = _Str + 1;
      iVar3 = iVar9 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          FUN_1400247af(uVar6,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
          pwVar11 = _Str + 2;
          iVar3 = iVar9 + -2;
        }
      }
      iVar9 = iVar3;
      _Str = pwVar11;
      cVar4 = FUN_1400247af(uVar6,&local_f0,&local_e4);
    } while (cVar4 != '\0');
    lVar7 = (longlong)(int)local_50;
  }
  _Dst = (void *)Discord_Alloc(lVar7);
  *param_1 = _Dst;
  param_1[1] = (longlong)(int)local_50;
  memcpy(_Dst,local_58,(longlong)(int)local_50);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1445f83ce FUN_1445f83ce body=184 status=ok
// SIG undefined FUN_1445f83ce(void)

void FUN_1445f83ce(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_1445977d7(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8486 FUN_1445f8486 body=184 status=ok
// SIG undefined FUN_1445f8486(void)

void FUN_1445f8486(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_1445977d7(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f853e FUN_1445f853e body=184 status=ok
// SIG undefined FUN_1445f853e(void)

void FUN_1445f853e(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_1445977d7(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8616 FUN_1445f8616 body=140 status=ok
// SIG undefined FUN_1445f8616(void)

void FUN_1445f8616(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_14459787e(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f86c6 FUN_1445f86c6 body=150 status=ok
// SIG undefined FUN_1445f86c6(void)

void FUN_1445f86c6(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144597920(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f877c FUN_1445f877c body=140 status=ok
// SIG undefined FUN_1445f877c(void)

void FUN_1445f877c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_1445979c7(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8808 FUN_1445f8808 body=281 status=ok
// SIG undefined FUN_1445f8808(void)

void FUN_1445f8808(undefined8 *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_1,*(undefined4 *)(param_1 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_144597a69(param_3,&local_68,param_2);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f8922 FUN_1445f8922 body=281 status=ok
// SIG undefined FUN_1445f8922(void)

void FUN_1445f8922(undefined8 *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_1,*(undefined4 *)(param_1 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_144597a69(param_3,&local_68,param_2);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f8a3c FUN_1445f8a3c body=172 status=ok
// SIG undefined FUN_1445f8a3c(void)

void FUN_1445f8a3c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144597b6f(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8b0e FUN_1445f8b0e body=156 status=ok
// SIG undefined FUN_1445f8b0e(void)

void FUN_1445f8b0e(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_4 + 2) != 0) && (param_4[1] != 0)) {
    uVar1 = *param_4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_4[1])) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_4 + 2),1);
        if (lVar2 != 0) {
          FUN_144597c11(param_4,param_1,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1445f8baa FUN_1445f8baa body=184 status=ok
// SIG undefined FUN_1445f8baa(void)

void FUN_1445f8baa(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_144597cbc(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8c62 FUN_1445f8c62 body=184 status=ok
// SIG undefined FUN_1445f8c62(void)

void FUN_1445f8c62(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_144597cbc(param_3,lVar2,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f8d1a FUN_1445f8d1a body=304 status=ok
// SIG undefined FUN_1445f8d1a(void)

void FUN_1445f8d1a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1445f8d7b;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1445f8d7b:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1445f8e4a FUN_1445f8e4a body=346 status=ok
// SIG undefined FUN_1445f8e4a(void)

void FUN_1445f8e4a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445f8edc;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1445f8edc:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1445f8fa4 FUN_1445f8fa4 body=556 status=ok
// SIG undefined FUN_1445f8fa4(void)

void FUN_1445f8fa4(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint *local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(local_118 + 0x28) = *param_1;
  *(undefined4 *)(local_118 + 0x30) = 1;
  local_108 = 0;
  uStack_100 = 0;
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  local_110 = param_3;
  if ((int)uVar7 != 0) {
    FUN_1445f8d1a(&local_108);
    uVar7 = param_2[1];
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = DAT_14c951640;
      FUN_14058b40c(DAT_14c951640,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_f8 = FUN_1445b0e44();
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_f0 = uVar1;
      lVar5 = FUN_1402710dd(&local_f8);
      if (lStack_b8 != 0) {
        plVar8 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar8 = local_98;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      uVar3 = uStack_100;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*param_2 + uVar7 * 8);
      *(undefined4 *)(lVar5 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_1445f8e4a(&local_108,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_108 + lVar6 * 8) = lVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  Discord_Free(*param_2);
  puVar2 = local_110;
  if ((((*(longlong *)(local_110 + 2) != 0) && (local_110[1] != 0)) &&
      (uVar4 = *local_110, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 2) == local_110[1])) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
      lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(local_110 + 2),1);
      if (lVar5 != 0) {
        FUN_144597d68(puVar2,local_118,&local_108);
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f91d2 FUN_1445f91d2 body=304 status=ok
// SIG undefined FUN_1445f91d2(void)

void FUN_1445f91d2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1445f9233;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1445f9233:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1445f9302 FUN_1445f9302 body=346 status=ok
// SIG undefined FUN_1445f9302(void)

void FUN_1445f9302(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445f9394;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1445f9394:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1445f945c FUN_1445f945c body=556 status=ok
// SIG undefined FUN_1445f945c(void)

void FUN_1445f945c(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint *local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(local_118 + 0x28) = *param_1;
  *(undefined4 *)(local_118 + 0x30) = 1;
  local_108 = 0;
  uStack_100 = 0;
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  local_110 = param_3;
  if ((int)uVar7 != 0) {
    FUN_1445f91d2(&local_108);
    uVar7 = param_2[1];
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = DAT_14c951640;
      FUN_14058b40c(DAT_14c951640,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_f8 = FUN_1445aefdc();
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_f0 = uVar1;
      lVar5 = FUN_1402710dd(&local_f8);
      if (lStack_b8 != 0) {
        plVar8 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar8 = local_98;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      uVar3 = uStack_100;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*param_2 + uVar7 * 8);
      *(undefined4 *)(lVar5 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_1445f9302(&local_108,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_108 + lVar6 * 8) = lVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[1]);
  }
  Discord_Free(*param_2);
  puVar2 = local_110;
  if ((((*(longlong *)(local_110 + 2) != 0) && (local_110[1] != 0)) &&
      (uVar4 = *local_110, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 2) == local_110[1])) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
      lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(local_110 + 2),1);
      if (lVar5 != 0) {
        FUN_144597e8f(puVar2,local_118,&local_108);
      }
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f968a FUN_1445f968a body=131 status=ok
// SIG undefined FUN_1445f968a(void)

void FUN_1445f968a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_1445976be(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f970e FUN_1445f970e body=311 status=ok
// SIG undefined FUN_1445f970e(void)

void FUN_1445f970e(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_3[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar4 != 0) {
        FUN_144597fb2(param_3,lVar3,&local_68);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f9846 FUN_1445f9846 body=172 status=ok
// SIG undefined FUN_1445f9846(void)

void FUN_1445f9846(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_1445980a8(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f98f2 FUN_1445f98f2 body=172 status=ok
// SIG undefined FUN_1445f98f2(void)

void FUN_1445f98f2(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459814a(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f99be FUN_1445f99be body=140 status=ok
// SIG undefined FUN_1445f99be(void)

void FUN_1445f99be(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_1445981ec(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9a6a FUN_1445f9a6a body=140 status=ok
// SIG undefined FUN_1445f9a6a(void)

void FUN_1445f9a6a(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_14459828e(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9b1a FUN_1445f9b1a body=150 status=ok
// SIG undefined FUN_1445f9b1a(void)

void FUN_1445f9b1a(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144598330(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9bd4 FUN_1445f9bd4 body=150 status=ok
// SIG undefined FUN_1445f9bd4(void)

void FUN_1445f9bd4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_1445983d7(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9c8e FUN_1445f9c8e body=150 status=ok
// SIG undefined FUN_1445f9c8e(void)

void FUN_1445f9c8e(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_14459847e(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9d44 FUN_1445f9d44 body=140 status=ok
// SIG undefined FUN_1445f9d44(void)

void FUN_1445f9d44(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_144598525(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9dd0 FUN_1445f9dd0 body=172 status=ok
// SIG undefined FUN_1445f9dd0(void)

void FUN_1445f9dd0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459814a(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f9e7c FUN_1445f9e7c body=138 status=ok
// SIG undefined FUN_1445f9e7c(void)

void FUN_1445f9e7c(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) {
    uVar1 = *param_2;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
        if (lVar2 != 0) {
          FUN_1445985cc(param_2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1445f9f06 FUN_1445f9f06 body=311 status=ok
// SIG undefined FUN_1445f9f06(void)

void FUN_1445f9f06(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar3 + 0x28) = *param_1;
  *(undefined4 *)(lVar3 + 0x30) = 1;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_3[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar4 != 0) {
        FUN_144598672(param_3,lVar3,&local_68);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fa03e FUN_1445fa03e body=172 status=ok
// SIG undefined FUN_1445fa03e(void)

void FUN_1445fa03e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598768(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa0ea FUN_1445fa0ea body=172 status=ok
// SIG undefined FUN_1445fa0ea(void)

void FUN_1445fa0ea(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598768(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa196 FUN_1445fa196 body=172 status=ok
// SIG undefined FUN_1445fa196(void)

void FUN_1445fa196(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598768(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa242 FUN_1445fa242 body=79 status=ok
// SIG undefined FUN_1445fa242(void)

void FUN_1445fa242(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1445fa291(DAT_14c951640);
  *(undefined8 *)(lVar1 + 0x28) = *param_1;
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001445fa286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x60))(param_2,lVar1,*(code **)(*param_2 + 0x60));
    return;
  }
  return;
}



// FUNCTION 1445fa291 FUN_1445fa291 body=175 status=ok
// SIG undefined FUN_1445fa291(void)

undefined8 FUN_1445fa291(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459b266();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fa342 FUN_1445fa342 body=172 status=ok
// SIG undefined FUN_1445fa342(void)

void FUN_1445fa342(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445fa291(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459880f(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa3ee FUN_1445fa3ee body=172 status=ok
// SIG undefined FUN_1445fa3ee(void)

void FUN_1445fa3ee(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445fa291(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459880f(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa49a FUN_1445fa49a body=137 status=ok
// SIG undefined FUN_1445fa49a(void)

void FUN_1445fa49a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140a6aedf(&local_48,*param_1,*(undefined4 *)(param_1 + 1));
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146815590(param_2);
  Discord_Free(*param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fa524 FUN_1445fa524 body=272 status=ok
// SIG undefined FUN_1445fa524(void)

void FUN_1445fa524(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_1,*(undefined4 *)(param_1 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_1445988b1(param_2,&local_68);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fa636 FUN_1445fa636 body=282 status=ok
// SIG undefined FUN_1445fa636(void)

void FUN_1445fa636(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140a6aedf(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  local_60 = uStack_50;
  lVar2 = local_58;
  local_68 = local_58;
  local_58 = 0;
  uStack_50 = 0;
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar3 != 0) {
        FUN_144598a48(param_3,param_1,&local_68);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  Discord_Free(*param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fa752 FUN_1445fa752 body=172 status=ok
// SIG undefined FUN_1445fa752(void)

void FUN_1445fa752(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598b3e(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa7fe FUN_1445fa7fe body=172 status=ok
// SIG undefined FUN_1445fa7fe(void)

void FUN_1445fa7fe(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598be0(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa8aa FUN_1445fa8aa body=172 status=ok
// SIG undefined FUN_1445fa8aa(void)

void FUN_1445fa8aa(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fa956 FUN_1445fa956 body=172 status=ok
// SIG undefined FUN_1445fa956(void)

void FUN_1445fa956(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445faa02 FUN_1445faa02 body=172 status=ok
// SIG undefined FUN_1445faa02(void)

void FUN_1445faa02(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445faaae FUN_1445faaae body=172 status=ok
// SIG undefined FUN_1445faaae(void)

void FUN_1445faaae(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fab5a FUN_1445fab5a body=172 status=ok
// SIG undefined FUN_1445fab5a(void)

void FUN_1445fab5a(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fac06 FUN_1445fac06 body=172 status=ok
// SIG undefined FUN_1445fac06(void)

void FUN_1445fac06(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445facb2 FUN_1445facb2 body=172 status=ok
// SIG undefined FUN_1445facb2(void)

void FUN_1445facb2(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fad5e FUN_1445fad5e body=172 status=ok
// SIG undefined FUN_1445fad5e(void)

void FUN_1445fad5e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fae0a FUN_1445fae0a body=172 status=ok
// SIG undefined FUN_1445fae0a(void)

void FUN_1445fae0a(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445faeb6 FUN_1445faeb6 body=172 status=ok
// SIG undefined FUN_1445faeb6(void)

void FUN_1445faeb6(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598d24(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445faf62 FUN_1445faf62 body=172 status=ok
// SIG undefined FUN_1445faf62(void)

void FUN_1445faf62(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb00e FUN_1445fb00e body=172 status=ok
// SIG undefined FUN_1445fb00e(void)

void FUN_1445fb00e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598d24(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb0ba FUN_1445fb0ba body=172 status=ok
// SIG undefined FUN_1445fb0ba(void)

void FUN_1445fb0ba(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb188 FUN_1445fb188 body=149 status=ok
// SIG undefined FUN_1445fb188(void)

void FUN_1445fb188(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144598dcb(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb240 FUN_1445fb240 body=149 status=ok
// SIG undefined FUN_1445fb240(void)

void FUN_1445fb240(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144598e7d(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb2d6 FUN_1445fb2d6 body=172 status=ok
// SIG undefined FUN_1445fb2d6(void)

void FUN_1445fb2d6(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144598c82(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb382 FUN_1445fb382 body=222 status=ok
// SIG undefined FUN_1445fb382(void)

void FUN_1445fb382(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if (param_2 != (undefined8 *)0x0) {
    lVar3 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar3 + 0x28) = *param_2;
    *(undefined4 *)(lVar3 + 0x30) = 1;
    if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
        (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_3[1])) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
        lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_3 + 2),1);
        if (lVar4 != 0) {
          FUN_144598f2e(param_3,lVar2,lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1445fb460 FUN_1445fb460 body=140 status=ok
// SIG undefined FUN_1445fb460(void)

void FUN_1445fb460(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_144598fd5(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb50c FUN_1445fb50c body=140 status=ok
// SIG undefined FUN_1445fb50c(void)

void FUN_1445fb50c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_144599077(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445fb598 FUN_1445fb598 body=29 status=ok
// SIG undefined FUN_1445fb598(void)

undefined8 FUN_1445fb598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fb740 FUN_1445fb740 body=93 status=ok
// SIG undefined FUN_1445fb740(void)

void FUN_1445fb740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fb79e FUN_1445fb79e body=93 status=ok
// SIG undefined FUN_1445fb79e(void)

void FUN_1445fb79e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fb7fc FUN_1445fb7fc body=126 status=ok
// SIG undefined FUN_1445fb7fc(void)

void FUN_1445fb7fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e4b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e440;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fb86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fb87a FUN_1445fb87a body=77 status=ok
// SIG undefined FUN_1445fb87a(void)

void FUN_1445fb87a(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_f = param_3;
  local_c = param_4;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x38,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fb8c8 FUN_1445fb8c8 body=306 status=ok
// SIG undefined FUN_1445fb8c8(void)

undefined8 FUN_1445fb8c8(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fb9f3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fb9f3;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = CONCAT44(uStack_3c,CONCAT22(uStack_3e,CONCAT11(uStack_3f,local_40)));
  }
  else {
LAB_1445fb9f3:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fb9a2;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      uStack_3f = param_3;
      uStack_3c = param_4;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x38);
      uVar6 = 1;
      goto LAB_1445fb9a2;
    }
  }
  uVar6 = 0;
LAB_1445fb9a2:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fb9fe FUN_1445fb9fe body=29 status=ok
// SIG undefined FUN_1445fb9fe(void)

undefined8 FUN_1445fb9fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fbba6 FUN_1445fbba6 body=93 status=ok
// SIG undefined FUN_1445fbba6(void)

void FUN_1445fbba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fbc04 FUN_1445fbc04 body=93 status=ok
// SIG undefined FUN_1445fbc04(void)

void FUN_1445fbc04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fbc62 FUN_1445fbc62 body=126 status=ok
// SIG undefined FUN_1445fbc62(void)

void FUN_1445fbc62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e590;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fbcd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fbce0 FUN_1445fbce0 body=70 status=ok
// SIG undefined FUN_1445fbce0(void)

void FUN_1445fbce0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x48,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fbd28 FUN_1445fbd28 body=284 status=ok
// SIG undefined FUN_1445fbd28(void)

undefined8 FUN_1445fbd28(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fbe3e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fbe3e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_1445fbe3e:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fbdf1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x48);
      uVar6 = 1;
      goto LAB_1445fbdf1;
    }
  }
  uVar6 = 0;
LAB_1445fbdf1:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fbe48 FUN_1445fbe48 body=29 status=ok
// SIG undefined FUN_1445fbe48(void)

undefined8 FUN_1445fbe48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fbfe4 FUN_1445fbfe4 body=93 status=ok
// SIG undefined FUN_1445fbfe4(void)

void FUN_1445fbfe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9b20d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fc042 FUN_1445fc042 body=93 status=ok
// SIG undefined FUN_1445fc042(void)

void FUN_1445fc042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9b20d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fc0a0 FUN_1445fc0a0 body=126 status=ok
// SIG undefined FUN_1445fc0a0(void)

void FUN_1445fc0a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9b20d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e600;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fc10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fc11e FUN_1445fc11e body=42 status=ok
// SIG undefined FUN_1445fc11e(void)

void FUN_1445fc11e(longlong param_1,longlong *param_2)

{
  FUN_1445fc26c(param_1 + 0x20);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1445fc148 FUN_1445fc148 body=291 status=ok
// SIG undefined FUN_1445fc148(void)

undefined8 FUN_1445fc148(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fc265;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fc265;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1445fc265:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fc20b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1445fc26c(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1445fc20b;
    }
  }
  uVar6 = 0;
LAB_1445fc20b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fc26c FUN_1445fc26c body=262 status=ok
// SIG undefined FUN_1445fc26c(void)

void FUN_1445fc26c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Src = (void *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = (longlong)iVar1;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *param_1;
  local_40 = (void *)0x0;
  local_38 = iVar1;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,iVar1,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  FUN_1445989ac(lVar2 + 0x58,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_50 = (void *)0x0;
  local_48 = iVar1;
  if (iVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,iVar1,0);
    memcpy(local_50,_Src,lVar3 * 2);
  }
  FUN_146815590(lVar2 + 0x68,&local_50);
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fc374 FUN_1445fc374 body=29 status=ok
// SIG undefined FUN_1445fc374(void)

undefined8 FUN_1445fc374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fc51c FUN_1445fc51c body=93 status=ok
// SIG undefined FUN_1445fc51c(void)

void FUN_1445fc51c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fc57a FUN_1445fc57a body=93 status=ok
// SIG undefined FUN_1445fc57a(void)

void FUN_1445fc57a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fc5d8 FUN_1445fc5d8 body=126 status=ok
// SIG undefined FUN_1445fc5d8(void)

void FUN_1445fc5d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e670;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fc647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fc656 FUN_1445fc656 body=70 status=ok
// SIG undefined FUN_1445fc656(void)

void FUN_1445fc656(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x78,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fc69e FUN_1445fc69e body=284 status=ok
// SIG undefined FUN_1445fc69e(void)

undefined8 FUN_1445fc69e(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fc7b4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fc7b4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_1445fc7b4:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fc767;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x78);
      uVar6 = 1;
      goto LAB_1445fc767;
    }
  }
  uVar6 = 0;
LAB_1445fc767:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fc7be FUN_1445fc7be body=29 status=ok
// SIG undefined FUN_1445fc7be(void)

undefined8 FUN_1445fc7be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fc95a FUN_1445fc95a body=93 status=ok
// SIG undefined FUN_1445fc95a(void)

void FUN_1445fc95a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fc9b8 FUN_1445fc9b8 body=93 status=ok
// SIG undefined FUN_1445fc9b8(void)

void FUN_1445fc9b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fca16 FUN_1445fca16 body=126 status=ok
// SIG undefined FUN_1445fca16(void)

void FUN_1445fca16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e750;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fca85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fca94 FUN_1445fca94 body=74 status=ok
// SIG undefined FUN_1445fca94(void)

void FUN_1445fca94(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x88,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fcae0 FUN_1445fcae0 body=285 status=ok
// SIG undefined FUN_1445fcae0(void)

undefined8 FUN_1445fcae0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fcbf7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fcbf7;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
LAB_1445fcbf7:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fcbaa;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x88);
      uVar7 = 1;
      goto LAB_1445fcbaa;
    }
  }
  uVar7 = 0;
LAB_1445fcbaa:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fcbfe FUN_1445fcbfe body=29 status=ok
// SIG undefined FUN_1445fcbfe(void)

undefined8 FUN_1445fcbfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fcd9a FUN_1445fcd9a body=93 status=ok
// SIG undefined FUN_1445fcd9a(void)

void FUN_1445fcd9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fcdf8 FUN_1445fcdf8 body=93 status=ok
// SIG undefined FUN_1445fcdf8(void)

void FUN_1445fcdf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e7c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fce56 FUN_1445fce56 body=126 status=ok
// SIG undefined FUN_1445fce56(void)

void FUN_1445fce56(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e7c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fcec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fced4 FUN_1445fced4 body=74 status=ok
// SIG undefined FUN_1445fced4(void)

void FUN_1445fced4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x98,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fcf20 FUN_1445fcf20 body=285 status=ok
// SIG undefined FUN_1445fcf20(void)

undefined8 FUN_1445fcf20(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fd037;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fd037;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
LAB_1445fd037:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fcfea;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x98);
      uVar7 = 1;
      goto LAB_1445fcfea;
    }
  }
  uVar7 = 0;
LAB_1445fcfea:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fd03e FUN_1445fd03e body=29 status=ok
// SIG undefined FUN_1445fd03e(void)

undefined8 FUN_1445fd03e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fd1e6 FUN_1445fd1e6 body=93 status=ok
// SIG undefined FUN_1445fd1e6(void)

void FUN_1445fd1e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fd244 FUN_1445fd244 body=93 status=ok
// SIG undefined FUN_1445fd244(void)

void FUN_1445fd244(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fd2a2 FUN_1445fd2a2 body=126 status=ok
// SIG undefined FUN_1445fd2a2(void)

void FUN_1445fd2a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e8a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fd311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fd320 FUN_1445fd320 body=78 status=ok
// SIG undefined FUN_1445fd320(void)

void FUN_1445fd320(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xa8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fd370 FUN_1445fd370 body=298 status=ok
// SIG undefined FUN_1445fd370(void)

undefined8 FUN_1445fd370(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fd494;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fd494;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar6 = local_40;
  }
  else {
LAB_1445fd494:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fd445;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xa8);
      uVar7 = 1;
      goto LAB_1445fd445;
    }
  }
  uVar7 = 0;
LAB_1445fd445:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fd49e FUN_1445fd49e body=29 status=ok
// SIG undefined FUN_1445fd49e(void)

undefined8 FUN_1445fd49e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fd63a FUN_1445fd63a body=93 status=ok
// SIG undefined FUN_1445fd63a(void)

void FUN_1445fd63a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fd698 FUN_1445fd698 body=93 status=ok
// SIG undefined FUN_1445fd698(void)

void FUN_1445fd698(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fd6f6 FUN_1445fd6f6 body=126 status=ok
// SIG undefined FUN_1445fd6f6(void)

void FUN_1445fd6f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e8a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fd765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fd774 FUN_1445fd774 body=78 status=ok
// SIG undefined FUN_1445fd774(void)

void FUN_1445fd774(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xb8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fd7c4 FUN_1445fd7c4 body=298 status=ok
// SIG undefined FUN_1445fd7c4(void)

undefined8 FUN_1445fd7c4(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fd8e8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fd8e8;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar6 = local_40;
  }
  else {
LAB_1445fd8e8:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fd899;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xb8);
      uVar7 = 1;
      goto LAB_1445fd899;
    }
  }
  uVar7 = 0;
LAB_1445fd899:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fd8f0 FUN_1445fd8f0 body=29 status=ok
// SIG undefined FUN_1445fd8f0(void)

undefined8 FUN_1445fd8f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fda8c FUN_1445fda8c body=93 status=ok
// SIG undefined FUN_1445fda8c(void)

void FUN_1445fda8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fdaea FUN_1445fdaea body=93 status=ok
// SIG undefined FUN_1445fdaea(void)

void FUN_1445fdaea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fdb48 FUN_1445fdb48 body=126 status=ok
// SIG undefined FUN_1445fdb48(void)

void FUN_1445fdb48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e8a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fdbb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fdbc6 FUN_1445fdbc6 body=78 status=ok
// SIG undefined FUN_1445fdbc6(void)

void FUN_1445fdbc6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 200,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fdc16 FUN_1445fdc16 body=298 status=ok
// SIG undefined FUN_1445fdc16(void)

undefined8 FUN_1445fdc16(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fdd3a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fdd3a;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar6 = local_40;
  }
  else {
LAB_1445fdd3a:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fdceb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 200);
      uVar7 = 1;
      goto LAB_1445fdceb;
    }
  }
  uVar7 = 0;
LAB_1445fdceb:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fdd42 FUN_1445fdd42 body=29 status=ok
// SIG undefined FUN_1445fdd42(void)

undefined8 FUN_1445fdd42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fdede FUN_1445fdede body=93 status=ok
// SIG undefined FUN_1445fdede(void)

void FUN_1445fdede(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fdf3c FUN_1445fdf3c body=93 status=ok
// SIG undefined FUN_1445fdf3c(void)

void FUN_1445fdf3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0e9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fdf9a FUN_1445fdf9a body=126 status=ok
// SIG undefined FUN_1445fdf9a(void)

void FUN_1445fdf9a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0e9f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fe009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fe018 FUN_1445fe018 body=74 status=ok
// SIG undefined FUN_1445fe018(void)

void FUN_1445fe018(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xd8,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fe064 FUN_1445fe064 body=285 status=ok
// SIG undefined FUN_1445fe064(void)

undefined8 FUN_1445fe064(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fe17b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fe17b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
LAB_1445fe17b:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fe12e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xd8);
      uVar7 = 1;
      goto LAB_1445fe12e;
    }
  }
  uVar7 = 0;
LAB_1445fe12e:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fe182 FUN_1445fe182 body=29 status=ok
// SIG undefined FUN_1445fe182(void)

undefined8 FUN_1445fe182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fe31e FUN_1445fe31e body=93 status=ok
// SIG undefined FUN_1445fe31e(void)

void FUN_1445fe31e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ea60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fe37c FUN_1445fe37c body=93 status=ok
// SIG undefined FUN_1445fe37c(void)

void FUN_1445fe37c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e8a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ea60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fe3da FUN_1445fe3da body=126 status=ok
// SIG undefined FUN_1445fe3da(void)

void FUN_1445fe3da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e8a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ea60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fe449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fe458 FUN_1445fe458 body=78 status=ok
// SIG undefined FUN_1445fe458(void)

void FUN_1445fe458(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xf8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fe4a8 FUN_1445fe4a8 body=298 status=ok
// SIG undefined FUN_1445fe4a8(void)

undefined8 FUN_1445fe4a8(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fe5cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fe5cc;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar6 = local_40;
  }
  else {
LAB_1445fe5cc:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fe57d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xf8);
      uVar7 = 1;
      goto LAB_1445fe57d;
    }
  }
  uVar7 = 0;
LAB_1445fe57d:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fe5d4 FUN_1445fe5d4 body=29 status=ok
// SIG undefined FUN_1445fe5d4(void)

undefined8 FUN_1445fe5d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445fe770 FUN_1445fe770 body=93 status=ok
// SIG undefined FUN_1445fe770(void)

void FUN_1445fe770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ead0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fe7ce FUN_1445fe7ce body=93 status=ok
// SIG undefined FUN_1445fe7ce(void)

void FUN_1445fe7ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ead0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fe82c FUN_1445fe82c body=126 status=ok
// SIG undefined FUN_1445fe82c(void)

void FUN_1445fe82c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ead0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fe89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fe8aa FUN_1445fe8aa body=74 status=ok
// SIG undefined FUN_1445fe8aa(void)

void FUN_1445fe8aa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xe8,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fe8f6 FUN_1445fe8f6 body=285 status=ok
// SIG undefined FUN_1445fe8f6(void)

undefined8 FUN_1445fe8f6(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fea0d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fea0d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
LAB_1445fea0d:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fe9c0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0xe8);
      uVar7 = 1;
      goto LAB_1445fe9c0;
    }
  }
  uVar7 = 0;
LAB_1445fe9c0:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fea14 FUN_1445fea14 body=29 status=ok
// SIG undefined FUN_1445fea14(void)

undefined8 FUN_1445fea14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445febb0 FUN_1445febb0 body=93 status=ok
// SIG undefined FUN_1445febb0(void)

void FUN_1445febb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0eb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fec0e FUN_1445fec0e body=93 status=ok
// SIG undefined FUN_1445fec0e(void)

void FUN_1445fec0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0eb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445fec6c FUN_1445fec6c body=126 status=ok
// SIG undefined FUN_1445fec6c(void)

void FUN_1445fec6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0eb40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445fecdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445fecea FUN_1445fecea body=74 status=ok
// SIG undefined FUN_1445fecea(void)

void FUN_1445fecea(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x108,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fed36 FUN_1445fed36 body=283 status=ok
// SIG undefined FUN_1445fed36(void)

undefined8 FUN_1445fed36(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fee4b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fee4b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = CONCAT71(uStack_2f,local_30);
  }
  else {
LAB_1445fee4b:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fedfe;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x108);
      uVar6 = 1;
      goto LAB_1445fedfe;
    }
  }
  uVar6 = 0;
LAB_1445fedfe:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fee52 FUN_1445fee52 body=29 status=ok
// SIG undefined FUN_1445fee52(void)

undefined8 FUN_1445fee52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445feffa FUN_1445feffa body=93 status=ok
// SIG undefined FUN_1445feffa(void)

void FUN_1445feffa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ec20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ebb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff058 FUN_1445ff058 body=93 status=ok
// SIG undefined FUN_1445ff058(void)

void FUN_1445ff058(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ec20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ebb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff0b6 FUN_1445ff0b6 body=126 status=ok
// SIG undefined FUN_1445ff0b6(void)

void FUN_1445ff0b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0ec20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ebb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445ff125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445ff134 FUN_1445ff134 body=78 status=ok
// SIG undefined FUN_1445ff134(void)

void FUN_1445ff134(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x118,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ff184 FUN_1445ff184 body=297 status=ok
// SIG undefined FUN_1445ff184(void)

undefined8 FUN_1445ff184(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445ff2a7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445ff2a7;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = local_40;
  }
  else {
LAB_1445ff2a7:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445ff258;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x118);
      uVar6 = 1;
      goto LAB_1445ff258;
    }
  }
  uVar6 = 0;
LAB_1445ff258:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ff2b0 FUN_1445ff2b0 body=29 status=ok
// SIG undefined FUN_1445ff2b0(void)

undefined8 FUN_1445ff2b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445ff44c FUN_1445ff44c body=93 status=ok
// SIG undefined FUN_1445ff44c(void)

void FUN_1445ff44c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ec20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ec90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff4aa FUN_1445ff4aa body=93 status=ok
// SIG undefined FUN_1445ff4aa(void)

void FUN_1445ff4aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ec20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ec90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff508 FUN_1445ff508 body=126 status=ok
// SIG undefined FUN_1445ff508(void)

void FUN_1445ff508(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0ec20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ec90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445ff577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445ff586 FUN_1445ff586 body=78 status=ok
// SIG undefined FUN_1445ff586(void)

void FUN_1445ff586(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x128,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ff5d6 FUN_1445ff5d6 body=297 status=ok
// SIG undefined FUN_1445ff5d6(void)

undefined8 FUN_1445ff5d6(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445ff6f9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445ff6f9;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = local_40;
  }
  else {
LAB_1445ff6f9:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445ff6aa;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x128);
      uVar6 = 1;
      goto LAB_1445ff6aa;
    }
  }
  uVar6 = 0;
LAB_1445ff6aa:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ff700 FUN_1445ff700 body=29 status=ok
// SIG undefined FUN_1445ff700(void)

undefined8 FUN_1445ff700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445ff89c FUN_1445ff89c body=93 status=ok
// SIG undefined FUN_1445ff89c(void)

void FUN_1445ff89c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ed00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff8fa FUN_1445ff8fa body=93 status=ok
// SIG undefined FUN_1445ff8fa(void)

void FUN_1445ff8fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0e6e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ed00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ff958 FUN_1445ff958 body=126 status=ok
// SIG undefined FUN_1445ff958(void)

void FUN_1445ff958(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0e6e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ed00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445ff9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445ff9d6 FUN_1445ff9d6 body=74 status=ok
// SIG undefined FUN_1445ff9d6(void)

void FUN_1445ff9d6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x138,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ffa22 FUN_1445ffa22 body=285 status=ok
// SIG undefined FUN_1445ffa22(void)

undefined8 FUN_1445ffa22(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445ffb39;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445ffb39;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
LAB_1445ffb39:
    lVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445ffaec;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_30 = param_2;
      FUN_1447cd2ec(*(longlong *)(param_1 + 0x20) + 0x138);
      uVar7 = 1;
      goto LAB_1445ffaec;
    }
  }
  uVar7 = 0;
LAB_1445ffaec:
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ffb40 FUN_1445ffb40 body=29 status=ok
// SIG undefined FUN_1445ffb40(void)

undefined8 FUN_1445ffb40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445ffce6 FUN_1445ffce6 body=93 status=ok
// SIG undefined FUN_1445ffce6(void)

void FUN_1445ffce6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ed70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ffd44 FUN_1445ffd44 body=93 status=ok
// SIG undefined FUN_1445ffd44(void)

void FUN_1445ffd44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ed70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445ffda2 FUN_1445ffda2 body=126 status=ok
// SIG undefined FUN_1445ffda2(void)

void FUN_1445ffda2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ed70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445ffe11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445ffe78 FUN_1445ffe78 body=284 status=ok
// SIG undefined FUN_1445ffe78(void)

undefined8 FUN_1445ffe78(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1445fff8e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1445fff8e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1445fff8e:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1445fff3d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1445fff3d;
    }
  }
  uVar6 = 0;
LAB_1445fff3d:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445fff96 FUN_1445fff96 body=29 status=ok
// SIG undefined FUN_1445fff96(void)

undefined8 FUN_1445fff96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14460013e FUN_14460013e body=93 status=ok
// SIG undefined FUN_14460013e(void)

void FUN_14460013e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ee50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ede0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14460019c FUN_14460019c body=93 status=ok
// SIG undefined FUN_14460019c(void)

void FUN_14460019c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be0ee50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0ede0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1446001fa FUN_1446001fa body=126 status=ok
// SIG undefined FUN_1446001fa(void)

void FUN_1446001fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be0ee50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0ede0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144600269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14460028a FUN_14460028a body=274 status=ok
// SIG undefined FUN_14460028a(void)

undefined8 FUN_14460028a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144600396;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144600396;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144600396:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14460034a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      Discord_Client_Connect(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) + 0x28);
      uVar6 = 1;
      goto LAB_14460034a;
    }
  }
  uVar6 = 0;
LAB_14460034a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446003a0 FUN_1446003a0 body=40 status=ok
// SIG undefined FUN_1446003a0(void)

void FUN_1446003a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14be0ef30;
  return;
}



// FUNCTION 1446003c8 FUN_1446003c8 body=29 status=ok
// SIG undefined FUN_1446003c8(void)

undefined8 FUN_1446003c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144600402 FUN_144600402 body=93 status=ok
// SIG undefined FUN_144600402(void)

void FUN_144600402(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0eec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144600460 FUN_144600460 body=93 status=ok
// SIG undefined FUN_144600460(void)

void FUN_144600460(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be0eec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1446004be FUN_1446004be body=126 status=ok
// SIG undefined FUN_1446004be(void)

void FUN_1446004be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be0eec0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014460052d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144600548 FUN_144600548 body=21 status=ok
// SIG undefined FUN_144600548(void)

undefined8 FUN_144600548(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14460055e FUN_14460055e body=29 status=ok
// SIG undefined FUN_14460055e(void)

undefined8 FUN_14460055e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14460057c FUN_14460057c body=308 status=ok
// SIG undefined FUN_14460057c(void)

void FUN_14460057c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1446005e2;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1446005e2:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1446006b0 FUN_1446006b0 body=346 status=ok
// SIG undefined FUN_1446006b0(void)

void FUN_1446006b0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144600742;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144600742:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14460080a FUN_14460080a body=308 status=ok
// SIG undefined FUN_14460080a(void)

void FUN_14460080a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144600870;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_144600870:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14460093e FUN_14460093e body=346 status=ok
// SIG undefined FUN_14460093e(void)

void FUN_14460093e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1446009d0;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1446009d0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144600a98 FUN_144600a98 body=294 status=ok
// SIG undefined FUN_144600a98(void)

void FUN_144600a98(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_144600b61;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_144600b10:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_144600b10;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144600b61;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144600b61:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144600bc0 FUN_144600bc0 body=294 status=ok
// SIG undefined FUN_144600bc0(void)

void FUN_144600bc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_144600c89;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_144600c38:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_144600c38;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144600c89;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144600c89:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144600ce8 FUN_144600ce8 body=308 status=ok
// SIG undefined FUN_144600ce8(void)

void FUN_144600ce8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144600d4e;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_144600d4e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 144600e1c FUN_144600e1c body=346 status=ok
// SIG undefined FUN_144600e1c(void)

void FUN_144600e1c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144600eae;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144600eae:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144600f76 FUN_144600f76 body=308 status=ok
// SIG undefined FUN_144600f76(void)

void FUN_144600f76(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144600fdc;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_144600fdc:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1446010aa FUN_1446010aa body=346 status=ok
// SIG undefined FUN_1446010aa(void)

void FUN_1446010aa(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14460113c;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14460113c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144601204 FUN_144601204 body=308 status=ok
// SIG undefined FUN_144601204(void)

void FUN_144601204(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14460126a;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14460126a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 144601338 FUN_144601338 body=346 status=ok
// SIG undefined FUN_144601338(void)

void FUN_144601338(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1446013ca;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1446013ca:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144601492 FUN_144601492 body=294 status=ok
// SIG undefined FUN_144601492(void)

void FUN_144601492(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14460155b;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14460150a:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14460150a;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14460155b;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14460155b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446015ba FUN_1446015ba body=294 status=ok
// SIG undefined FUN_1446015ba(void)

void FUN_1446015ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_144601683;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_144601632:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_144601632;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144601683;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144601683:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446016e2 FUN_1446016e2 body=294 status=ok
// SIG undefined FUN_1446016e2(void)

void FUN_1446016e2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1446017ab;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14460175a:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14460175a;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1446017ab;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446017ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460180a FUN_14460180a body=294 status=ok
// SIG undefined FUN_14460180a(void)

void FUN_14460180a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1446018d3;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_144601882:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_144601882;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1446018d3;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446018d3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144601932 FUN_144601932 body=308 status=ok
// SIG undefined FUN_144601932(void)

void FUN_144601932(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144601998;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_144601998:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 144601a66 FUN_144601a66 body=346 status=ok
// SIG undefined FUN_144601a66(void)

void FUN_144601a66(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144601af8;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144601af8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144601bc0 FUN_144601bc0 body=304 status=ok
// SIG undefined FUN_144601bc0(void)

void FUN_144601bc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144601c21;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_144601c21:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 144601cf0 FUN_144601cf0 body=346 status=ok
// SIG undefined FUN_144601cf0(void)

void FUN_144601cf0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144601d82;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144601d82:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144601e4a FUN_144601e4a body=501 status=ok
// SIG undefined FUN_144601e4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144601e4a(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 *local_38;
  int local_30;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cc240e8 = 0;
  _DAT_14cc240f0 = 0;
  _DAT_14cc240f8 = 2;
  atexit(FUN_1445e0c84);
  local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x11);
  uVar2 = FUN_14577453c(L"DiscordPartnerSDK",&local_38);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14be0eec0;
  local_38[3] = &DAT_14cc24100;
  local_38[4] = FUN_1446003a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_48 = 0x800000014be0e2e8;
  local_3c = 1;
  local_3b = local_23;
  local_39 = local_21;
  local_40 = uVar2;
  FUN_140da023c(&DAT_14c874628,&local_48,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_144601fba;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144601fba:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144602040 FUN_144602040 body=1416 status=ok
// SIG undefined FUN_144602040(void)

void FUN_144602040(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *in_stack_00000028;
  undefined1 auStack_1e8 [40];
  undefined **local_1c0;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  void *local_1a0;
  int local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1c0 = &PTR_FUN_14be10320;
  FUN_1496f4d2e(&local_1b8,param_1 + 0x20);
  puVar6 = (undefined8 *)FUN_14001cc68(0x48,8);
  pvVar5 = local_1a0;
  *puVar6 = &PTR_FUN_14be10320;
  puVar6[1] = &PTR_FUN_14be0f6c8;
  *(undefined4 *)(puVar6 + 2) = local_1b0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_1ac;
  *(undefined4 *)(puVar6 + 3) = uStack_1a8;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_1a4;
  puVar6[4] = 0;
  *(int *)(puVar6 + 5) = local_198;
  if ((longlong)local_198 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 4,local_198,0);
    memcpy((void *)puVar6[4],pvVar5,(longlong)local_198 * 2);
  }
  *(undefined4 *)(puVar6 + 7) = local_188;
  puVar6[6] = local_190;
  puVar6[1] = &PTR_FUN_14be10040;
  puVar6[8] = local_180;
  local_128 = (undefined4)in_stack_00000028[0x24];
  local_138 = in_stack_00000028[0x22];
  lStack_130 = in_stack_00000028[0x23];
  uStack_124 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20)
  ;
  uStack_11c = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
  local_110 = (undefined4)in_stack_00000028[0x27];
  uStack_10c = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
  uStack_108 = (undefined4)in_stack_00000028[0x28];
  uStack_104 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
  local_100 = (undefined4)in_stack_00000028[0x29];
  uStack_fc = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
  uStack_f8 = (undefined4)in_stack_00000028[0x2a];
  uStack_f4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
  local_f0 = in_stack_00000028[0x2b];
  local_e0 = (undefined4)in_stack_00000028[0x2d];
  local_e8 = in_stack_00000028[0x2c];
  local_d8 = 0;
  iVar3 = (int)in_stack_00000028[0x2f];
  lVar7 = in_stack_00000028[0x2e];
  local_d0 = CONCAT44(local_d0._4_4_,iVar3);
  if (iVar3 == 0) {
    local_d0 = 0;
  }
  else {
    FUN_14753cf4a(&local_d8,iVar3,0);
    FUN_14753cfbd(local_d8,lVar7,iVar3);
  }
  local_c8 = (void *)0x0;
  uVar4 = *(uint *)(in_stack_00000028 + 0x31);
  pvVar5 = (void *)in_stack_00000028[0x30];
  local_c0 = CONCAT44(local_c0._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    local_c0 = (ulonglong)uVar4;
  }
  else {
    FUN_1456c5740(&local_c8,uVar4,0);
    memcpy(local_c8,pvVar5,(longlong)(int)uVar4 << 3);
  }
  local_b8 = (undefined1)in_stack_00000028[0x32];
  local_b0 = (void *)0x0;
  uVar4 = *(uint *)(in_stack_00000028 + 0x34);
  pvVar5 = (void *)in_stack_00000028[0x33];
  local_a8 = CONCAT44(local_a8._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    local_a8 = (ulonglong)uVar4;
  }
  else {
    FUN_1447bda9e(&local_b0,uVar4,0);
    memcpy(local_b0,pvVar5,(longlong)(int)uVar4 << 2);
  }
  uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
  uStack_a0 = (undefined5)in_stack_00000028[0x35];
  local_9b = (undefined3)((ulonglong)in_stack_00000028[0x35] >> 0x28);
  local_50 = (local_50 & 0xfc) + 1;
  local_90 = puVar6;
  uStack_88 = local_178;
  uStack_84 = uStack_174;
  uStack_80 = uStack_170;
  uStack_7c = uStack_16c;
  uStack_78 = local_168;
  uStack_74 = uStack_164;
  uStack_70 = uStack_160;
  uStack_6c = uStack_15c;
  local_68 = local_158;
  uStack_64 = uStack_154;
  uStack_60 = uStack_150;
  uStack_5c = uStack_14c;
  local_58 = local_148;
  iVar3 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar3 + 1U) {
    FUN_140ac5684(in_stack_00000028,iVar3);
  }
  lVar7 = *in_stack_00000028;
  lVar8 = (longlong)iVar3 * 0xf0;
  *(undefined4 *)(lVar7 + 0x20 + lVar8) = uStack_118;
  puVar6 = (undefined8 *)(lVar7 + 0x10 + lVar8);
  *puVar6 = CONCAT44(uStack_124,local_128);
  puVar6[1] = CONCAT44(uStack_11c,uStack_120);
  *(longlong *)(lVar7 + lVar8) = local_138;
  ((longlong *)(lVar7 + lVar8))[1] = lStack_130;
  *(longlong *)(lVar7 + 0x48 + lVar8) = local_f0;
  puVar1 = (undefined4 *)(lVar7 + 0x38 + lVar8);
  *puVar1 = local_100;
  puVar1[1] = uStack_fc;
  puVar1[2] = uStack_f8;
  puVar1[3] = uStack_f4;
  puVar1 = (undefined4 *)(lVar7 + 0x28 + lVar8);
  *puVar1 = local_110;
  puVar1[1] = uStack_10c;
  puVar1[2] = uStack_108;
  puVar1[3] = uStack_104;
  *(longlong *)(lVar7 + 0x50 + lVar8) = local_e8;
  *(undefined4 *)(lVar7 + 0x58 + lVar8) = local_e0;
  *(undefined8 *)(lVar7 + 0x60 + lVar8) = 0;
  *(longlong *)(lVar7 + 0x60 + lVar8) = local_d8;
  local_d8 = 0;
  *(undefined4 *)(lVar7 + 0x68 + lVar8) = (undefined4)local_d0;
  *(undefined4 *)(lVar7 + 0x6c + lVar8) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined8 *)(lVar7 + 0x70 + lVar8) = 0;
  *(void **)(lVar7 + 0x70 + lVar8) = local_c8;
  local_c8 = (void *)0x0;
  *(undefined4 *)(lVar7 + 0x78 + lVar8) = (undefined4)local_c0;
  *(undefined4 *)(lVar7 + 0x7c + lVar8) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined1 *)(lVar7 + 0x80 + lVar8) = local_b8;
  *(undefined8 *)(lVar7 + 0x88 + lVar8) = 0;
  *(void **)(lVar7 + 0x88 + lVar8) = local_b0;
  local_b0 = (void *)0x0;
  *(undefined4 *)(lVar7 + 0x90 + lVar8) = (undefined4)local_a8;
  *(undefined4 *)(lVar7 + 0x94 + lVar8) = local_a8._4_4_;
  local_a8 = 0;
  *(ulonglong *)(lVar7 + 0x9d + lVar8) = CONCAT53(uStack_98,local_9b);
  *(ulonglong *)(lVar7 + 0x98 + lVar8) = CONCAT35(local_9b,uStack_a0);
  bVar2 = *(byte *)(lVar7 + 0xe8 + lVar8);
  *(byte *)(lVar7 + 0xe8 + lVar8) = bVar2 & 0xfc | 2;
  if ((local_50 & 1) != 0) {
    lVar7 = lVar7 + lVar8;
    *(byte *)(lVar7 + 0xe8) = bVar2 | 3;
    *(byte *)(lVar7 + 0xe8) = *(byte *)(lVar7 + 0xe8) & 0xfd | local_50 & 2;
    *(ulonglong *)(lVar7 + 0xd8) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(lVar7 + 0xe0) = local_58;
    *(ulonglong *)(lVar7 + 200) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(lVar7 + 0xd0) = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(lVar7 + 0xb8) = uStack_80;
    *(undefined4 *)(lVar7 + 0xbc) = uStack_7c;
    *(undefined4 *)(lVar7 + 0xc0) = uStack_78;
    *(undefined4 *)(lVar7 + 0xc4) = uStack_74;
    *(undefined4 *)(lVar7 + 0xa8) = (undefined4)local_90;
    *(undefined4 *)(lVar7 + 0xac) = local_90._4_4_;
    *(undefined4 *)(lVar7 + 0xb0) = uStack_88;
    *(undefined4 *)(lVar7 + 0xb4) = uStack_84;
    local_50 = local_50 & 0xfe;
  }
  if ((local_50 & 1) != 0) {
    puVar6 = &local_90;
    if ((local_50 & 2) == 0) {
      puVar6 = local_90;
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar6)(puVar6,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(local_90);
    }
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_d8,local_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  local_1c0 = &PTR_FUN_14be10320;
  local_1b8 = &PTR_FUN_14be0f6c8;
  if (local_1a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446025f4 FUN_1446025f4 body=545 status=ok
// SIG undefined FUN_1446025f4(void)

void FUN_1446025f4(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined **local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 0x10);
  if ((longlong)local_50 != 0) {
    local_68 = param_1 + 8;
    lVar9 = 0;
    do {
      uVar5 = *(ulonglong *)(local_58 + lVar9);
      if ((((uVar5 >> 0x20 != 0) && (uVar7 = (uint)uVar5, -1 < (int)uVar7)) &&
          ((int)uVar7 < DAT_14c9647dc)) &&
         (((plVar8 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar5 >> 0x20))) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar1 = *plVar8, lVar1 != 0)))))) {
        lVar3 = FUN_140f5398e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (lVar3 = FUN_140007850(param_1 + 0x10), lVar3 != 0)) {
          lVar4 = FUN_1459d3ed0();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (cVar2 = FUN_14749cf20(lVar3,*(undefined8 *)(lVar1 + 0x660)), cVar2 != '\0')) {
            local_60 = &PTR_FUN_14be10330;
            local_70 = DAT_14cc241a8;
            if (DAT_14cc241a8 == 0) {
              local_70 = FUN_14570767c(&DAT_14cc241a8,0);
            }
            lVar4 = FUN_14027385c(param_5 + 0x110);
            if (lVar4 != 0) {
              FUN_14027378e(lVar4,lVar1,local_70,&local_60);
            }
            *(undefined1 *)(lVar1 + 0x67a) = 2;
            *(undefined1 *)(lVar1 + 0x82c) = 1;
            *(undefined1 *)(lVar1 + 0x718) = 0;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar3);
            }
            *(longlong *)(lVar1 + 0x720) = lVar3;
            uVar7 = *(uint *)(param_2 + 0x24);
            uVar5 = 0;
            if (SBORROW4(0,uVar7)) {
              puVar6 = (uint *)(param_2 + 4);
              if (*(int *)(param_2 + 0x20) == 0) {
                puVar6 = (uint *)(param_2 + 0x10);
              }
              uVar7 = *puVar6;
              uVar5 = (ulonglong)puVar6[1];
            }
            uVar10 = FUN_1496f3d34(local_68,(ulonglong)uVar7 | uVar5 << 0x20,
                                   *(undefined8 *)(param_2 + 0x18));
            *(undefined4 *)(lVar1 + 0x828) = uVar10;
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)local_50 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144602816 FUN_144602816 body=256 status=ok
// SIG undefined FUN_144602816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144602816(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x800000014be0eff4;
  local_24 = 0x18;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14674eede(&local_38);
  _DAT_14cc24124 = 0xffffffff;
  _DAT_14cc24128 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionTracks",&PTR_FUN_14be0f6a0,1,&PTR_FUN_14be0f670);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GeometryCollectionTracks",0,0,&PTR_FUN_14be0f950);
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GeometryCollectionTracks",&PTR_FUN_14be0feb0,1,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460293a FUN_14460293a body=88 status=ok
// SIG undefined FUN_14460293a(void)

void FUN_14460293a(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (0 < iVar1) {
    uVar2 = 0;
    do {
      if ((param_4 >> (uVar2 & 0x1f) & 1) != 0) {
        FUN_1496f6d96(param_1,uVar2,param_5);
        FUN_1496f6fd4(param_1,uVar2,param_5);
        iVar1 = *(int *)(param_2 + 8);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return;
}



// FUNCTION 1446029a0 FUN_1446029a0 body=789 status=ok
// SIG undefined FUN_1446029a0(void)

undefined8 * FUN_1446029a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_1b8 [40];
  undefined **local_190 [17];
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      local_f0 = &PTR_FUN_149f64e30;
      local_c8 = 0;
      local_c0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_bc = 0xffffffff00000080;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_44 = 9;
      FUN_1407134c4(local_190,param_1);
      local_108 = *(undefined8 *)(param_1 + 0x88);
      *(undefined ****)(param_1 + 0x88) = local_190;
      local_190[0] = &PTR_FUN_149f52ef0;
      local_100 = param_1;
      lVar2 = FUN_14001cc68(0x158,0x10);
      FUN_140dffb3a(lVar2);
      local_f8 = lVar2;
      FUN_140d6e9bc(&local_f0,local_190);
      puVar3 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
      uVar1 = DAT_14c99d1d8;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[6] = uVar1;
      *puVar3 = &PTR_FUN_14be11e70;
      FUN_146ecd176(puVar3 + 7,&local_f0);
      lVar2 = local_f8;
      local_190[0] = &PTR_FUN_149f52ef0;
      if (local_f8 != 0) {
        FUN_14041e184(local_f8);
        FUN_1400020a8(lVar2);
      }
      FUN_14041e0ea(local_190);
      FUN_14054b30a(&local_f0);
      goto LAB_144602c82;
    }
  }
  else {
    local_f0 = &PTR_FUN_149f64e30;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_44 = 9;
    if (param_2 == 0) {
      pppuVar4 = &local_f0;
    }
    else {
      pppuVar4 = &local_f0;
      if (*(int *)(param_2 + 8) == 0) {
        pppuVar4 = (undefined ***)(param_2 + 0x38);
      }
    }
    FUN_1407134c4(local_190,param_1);
    local_108 = *(undefined8 *)(param_1 + 0x88);
    *(undefined ****)(param_1 + 0x88) = local_190;
    local_190[0] = &PTR_FUN_149f52ef0;
    local_100 = param_1;
    lVar2 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(lVar2);
    local_f8 = lVar2;
    (*(code *)(*pppuVar4)[8])(pppuVar4,local_190);
    lVar2 = local_f8;
    local_190[0] = &PTR_FUN_149f52ef0;
    if (local_f8 != 0) {
      FUN_14041e184(local_f8);
      FUN_1400020a8(lVar2);
    }
    FUN_14041e0ea(local_190);
    FUN_14054b30a(&local_f0);
  }
  puVar3 = (undefined8 *)0x0;
LAB_144602c82:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 144602cb6 FUN_144602cb6 body=3483 status=ok
// SIG undefined FUN_144602cb6(void)

/* WARNING: Removing unreachable block (ram,0x0001446035b0) */
/* WARNING: Removing unreachable block (ram,0x0001446034a4) */
/* WARNING: Removing unreachable block (ram,0x000144603377) */
/* WARNING: Removing unreachable block (ram,0x000144603264) */
/* WARNING: Removing unreachable block (ram,0x000144603131) */
/* WARNING: Removing unreachable block (ram,0x000144603023) */
/* WARNING: Removing unreachable block (ram,0x0001446034ab) */
/* WARNING: Removing unreachable block (ram,0x0001446035b7) */
/* WARNING: Removing unreachable block (ram,0x0001446034b7) */
/* WARNING: Removing unreachable block (ram,0x00014460327d) */
/* WARNING: Removing unreachable block (ram,0x00014460303c) */
/* WARNING: Removing unreachable block (ram,0x00014460314a) */
/* WARNING: Removing unreachable block (ram,0x000144603390) */
/* WARNING: Removing unreachable block (ram,0x0001446035c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144602cb6(longlong *param_1,int *param_2)

{
  float *pfVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined2 uVar19;
  int iVar20;
  undefined1 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  lVar8 = (longlong)*param_2;
  lVar2 = param_1[2];
  lVar18 = *(longlong *)(param_1[1] + 0x10);
  lVar16 = (longlong)*(int *)(lVar18 + lVar8 * 0xc);
  lVar11 = *(longlong *)(*param_1 + 0x10);
  lVar14 = (longlong)*(int *)(lVar18 + 4 + lVar8 * 0xc);
  pfVar1 = (float *)(lVar11 + (longlong)*(int *)(lVar18 + 8 + lVar8 * 0xc) * 0xc);
  lVar18 = *(longlong *)(lVar2 + 0x5a0);
  iVar7 = (int)(lVar8 * 3);
  uVar9 = (ulonglong)(uint)(*(int *)(lVar2 + 0x5a8) * iVar7);
  *(undefined4 *)(lVar18 + 8 + uVar9) = *(undefined4 *)(lVar11 + 8 + lVar16 * 0xc);
  *(undefined8 *)(lVar18 + uVar9) = *(undefined8 *)(lVar11 + lVar16 * 0xc);
  uVar13 = iVar7 + 1;
  lVar18 = *(longlong *)(lVar2 + 0x5a0);
  uVar9 = (ulonglong)(*(int *)(lVar2 + 0x5a8) * uVar13);
  *(undefined4 *)(lVar18 + 8 + uVar9) = *(undefined4 *)(lVar11 + 8 + lVar14 * 0xc);
  *(undefined8 *)(lVar18 + uVar9) = *(undefined8 *)(lVar11 + lVar14 * 0xc);
  uVar15 = iVar7 + 2;
  lVar18 = *(longlong *)(lVar2 + 0x5a0);
  uVar9 = (ulonglong)(*(int *)(lVar2 + 0x5a8) * uVar15);
  *(float *)(lVar18 + 8 + uVar9) = pfVar1[2];
  *(undefined8 *)(lVar18 + uVar9) = *(undefined8 *)pfVar1;
  fVar43 = *(float *)(lVar11 + 8 + lVar14 * 0xc);
  fVar39 = fVar43 - *(float *)(lVar11 + 8 + lVar16 * 0xc);
  fVar29 = *(float *)(lVar11 + 4 + lVar14 * 0xc);
  fVar37 = fVar29 - *(float *)(lVar11 + 4 + lVar16 * 0xc);
  fVar22 = *(float *)(lVar11 + lVar14 * 0xc);
  fVar41 = fVar22 - *(float *)(lVar11 + lVar16 * 0xc);
  fVar28 = fVar39 * fVar39 + fVar41 * fVar41 + fVar37 * fVar37;
  if (((fVar28 != 1.0) || (fVar40 = fVar39, fVar42 = fVar41, fVar38 = fVar37, NAN(fVar28))) &&
     (fVar40 = DAT_14c846338, fVar42 = (float)DAT_14c846330, fVar38 = DAT_14c846330._4_4_,
     1e-08 <= fVar28)) {
    fVar28 = 1.0 / SQRT(fVar28);
    fVar40 = fVar39 * fVar28;
    fVar42 = fVar41 * fVar28;
    fVar38 = fVar37 * fVar28;
  }
  fVar43 = pfVar1[2] - fVar43;
  fVar29 = pfVar1[1] - fVar29;
  fVar22 = *pfVar1 - fVar22;
  fVar28 = fVar43 * fVar43 + fVar22 * fVar22 + fVar29 * fVar29;
  if (((fVar28 != 1.0) || (fVar37 = fVar43, fVar39 = fVar29, fVar41 = fVar22, NAN(fVar28))) &&
     (fVar37 = DAT_14c846338, fVar39 = DAT_14c846330._4_4_, fVar41 = (float)DAT_14c846330,
     1e-08 <= fVar28)) {
    fVar28 = 1.0 / SQRT(fVar28);
    fVar37 = fVar43 * fVar28;
    fVar39 = fVar29 * fVar28;
    fVar41 = fVar22 * fVar28;
  }
  fVar43 = fVar41 * fVar38 - fVar42 * fVar39;
  fVar22 = fVar37 * fVar42 - fVar40 * fVar41;
  fVar29 = fVar39 * fVar40 - fVar38 * fVar37;
  fVar28 = fVar43 * fVar43 + fVar29 * fVar29 + fVar22 * fVar22;
  if (((fVar28 != 1.0) || (fVar37 = fVar43, fVar39 = fVar29, fVar41 = fVar22, NAN(fVar28))) &&
     (fVar37 = DAT_14c846338, fVar39 = (float)DAT_14c846330, fVar41 = DAT_14c846330._4_4_,
     1e-08 <= fVar28)) {
    fVar28 = 1.0 / SQRT(fVar28);
    fVar37 = fVar43 * fVar28;
    fVar39 = fVar29 * fVar28;
    fVar41 = fVar22 * fVar28;
  }
  lVar18 = *(longlong *)(lVar2 + 0x550);
  uVar9 = lVar8 * 3 & 0xffffffff;
  fVar43 = 0.0 - fVar37 * 0.0;
  fVar29 = fVar43 * 0.0;
  fVar43 = (fVar41 * 0.0 + (fVar29 - fVar43)) * -0.0 +
           fVar39 * 0.0 +
           (fVar37 * 0.0 + fVar41 * -0.0 + fVar29) * -0.0 + fVar41 * -0.0 + fVar37 + fVar29;
  if (*(char *)(lVar2 + 0x571) == '\x01') {
    lVar11 = uVar9 * 0x10;
    *(undefined2 *)(lVar18 + lVar11) = 0x7fff;
    *(undefined2 *)(lVar18 + 2 + lVar11) = 0;
    *(undefined2 *)(lVar18 + 4 + lVar11) = 0;
    iVar20 = (int)ROUND(fVar39 * 32767.0 + fVar39 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    *(undefined2 *)(lVar18 + 6 + lVar11) = 0x7fff;
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 8 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar41 * 32767.0 + fVar41 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 10 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 0xc + lVar11) = uVar19;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    if (iVar20 < -0x7fff) {
      iVar20 = -0x8000;
    }
    *(short *)(lVar18 + 0xe + lVar11) = (short)iVar20;
  }
  else {
    *(undefined1 *)(lVar18 + uVar9 * 8) = 0x7f;
    *(undefined1 *)(lVar18 + 1 + uVar9 * 8) = 0;
    *(undefined1 *)(lVar18 + 2 + uVar9 * 8) = 0;
    iVar20 = (int)ROUND(fVar39 * 127.0 + fVar39 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    *(undefined1 *)(lVar18 + 3 + uVar9 * 8) = 0x7f;
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 4 + uVar9 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar41 * 127.0 + fVar41 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 5 + uVar9 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 6 + uVar9 * 8) = uVar21;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 7 + uVar9 * 8) = uVar21;
  }
  lVar18 = *(longlong *)(lVar2 + 0x550);
  uVar10 = (ulonglong)uVar13;
  if (*(char *)(lVar2 + 0x571) == '\x01') {
    lVar11 = uVar10 * 0x10;
    *(undefined2 *)(lVar18 + lVar11) = 0x7fff;
    *(undefined2 *)(lVar18 + 2 + lVar11) = 0;
    *(undefined2 *)(lVar18 + 4 + lVar11) = 0;
    iVar20 = (int)ROUND(fVar39 * 32767.0 + fVar39 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    *(undefined2 *)(lVar18 + 6 + lVar11) = 0x7fff;
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 8 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar41 * 32767.0 + fVar41 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 10 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 0xc + lVar11) = uVar19;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    if (iVar20 < -0x7fff) {
      iVar20 = -0x8000;
    }
    *(short *)(lVar18 + 0xe + lVar11) = (short)iVar20;
  }
  else {
    *(undefined1 *)(lVar18 + uVar10 * 8) = 0x7f;
    *(undefined1 *)(lVar18 + 1 + uVar10 * 8) = 0;
    *(undefined1 *)(lVar18 + 2 + uVar10 * 8) = 0;
    iVar20 = (int)ROUND(fVar39 * 127.0 + fVar39 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    *(undefined1 *)(lVar18 + 3 + uVar10 * 8) = 0x7f;
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 4 + uVar10 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar41 * 127.0 + fVar41 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 5 + uVar10 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 6 + uVar10 * 8) = uVar21;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 7 + uVar10 * 8) = uVar21;
  }
  lVar18 = *(longlong *)(lVar2 + 0x550);
  uVar12 = (ulonglong)uVar15;
  if (*(char *)(lVar2 + 0x571) == '\x01') {
    lVar11 = uVar12 * 0x10;
    *(undefined2 *)(lVar18 + lVar11) = 0x7fff;
    *(undefined2 *)(lVar18 + 2 + lVar11) = 0;
    iVar20 = (int)ROUND(fVar39 * 32767.0 + fVar39 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    *(undefined2 *)(lVar18 + 4 + lVar11) = 0;
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 6 + lVar11) = 0x7fff;
    *(undefined2 *)(lVar18 + 8 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar41 * 32767.0 + fVar41 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 10 + lVar11) = uVar19;
    iVar20 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 0xc + lVar11) = uVar19;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    uVar19 = (undefined2)iVar20;
    if (iVar20 < -0x7fff) {
      uVar19 = 0x8000;
    }
    *(undefined2 *)(lVar18 + 0xe + lVar11) = uVar19;
  }
  else {
    *(undefined1 *)(lVar18 + uVar12 * 8) = 0x7f;
    *(undefined1 *)(lVar18 + 1 + uVar12 * 8) = 0;
    iVar20 = (int)ROUND(fVar39 * 127.0 + fVar39 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    *(undefined1 *)(lVar18 + 2 + uVar12 * 8) = 0;
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 3 + uVar12 * 8) = 0x7f;
    *(undefined1 *)(lVar18 + 4 + uVar12 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar41 * 127.0 + fVar41 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 5 + uVar12 * 8) = uVar21;
    iVar20 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 6 + uVar12 * 8) = uVar21;
    iVar20 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar43 < 0.0) * 4)) >> 1;
    if (0x7e < iVar20) {
      iVar20 = 0x7f;
    }
    uVar21 = (undefined1)iVar20;
    if (iVar20 < -0x7f) {
      uVar21 = 0x80;
    }
    *(undefined1 *)(lVar18 + 7 + uVar12 * 8) = uVar21;
  }
  if (*(char *)(lVar2 + 0x570) == '\x01') {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x558) + uVar9 * *(uint *)(lVar2 + 0x568) * 8) = 0;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x558) + uVar9 * *(uint *)(lVar2 + 0x568) * 4) = 0;
  }
  if (*(char *)(lVar2 + 0x570) == '\x01') {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x558) + uVar10 * *(uint *)(lVar2 + 0x568) * 8) = 0;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x558) + uVar10 * *(uint *)(lVar2 + 0x568) * 4) = 0;
  }
  if (*(char *)(lVar2 + 0x570) == '\x01') {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x558) + uVar12 * *(uint *)(lVar2 + 0x568) * 8) = 0;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar2 + 0x558) + uVar12 * *(uint *)(lVar2 + 0x568) * 4) = 0;
  }
  puVar17 = &DAT_14cc24228;
  if (*(int *)param_1[3] == 1) {
    puVar17 = &DAT_14cc24224;
  }
  uVar24 = *puVar17;
  lVar18 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x10) + lVar8 * 0xc);
  uVar23 = uVar24;
  if (*(int *)(*(longlong *)(param_1[4] + 0x10) +
              (longlong)*(int *)(*(longlong *)(param_1[5] + 0x10) + lVar18 * 4) * 4) == 0) {
    auVar25 = maxps(*(undefined1 (*) [16])(*(longlong *)(param_1[6] + 0x10) + lVar18 * 0x10),
                    _DAT_149e1a200);
    auVar25 = minps(auVar25,_DAT_149e1a210);
    fVar43 = auVar25._0_4_;
    fVar29 = auVar25._4_4_;
    fVar22 = auVar25._8_4_;
    auVar33._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar29 + -0x39000000) >> 0x14) * 4);
    auVar33._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar43 + 0xc7000000U >> 0x14) * 4);
    auVar33._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar22 + -0x39000000) >> 0x14) * 4);
    auVar33._12_4_ = 0;
    auVar32._0_4_ = (uint)fVar43 >> 0xc;
    auVar32._4_4_ = (uint)fVar29 >> 0xc;
    auVar32._8_4_ = (uint)fVar22 >> 0xc;
    auVar32._12_4_ = (uint)auVar25._12_4_ >> 0xc;
    auVar33 = pmaddwd(auVar32 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar33);
    auVar35._4_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar33._4_4_ >> 0x10;
    auVar35._12_4_ = (int)(auVar25._12_4_ * 255.0 + 0.5) | auVar33._12_4_ >> 0x10;
    auVar35._0_4_ = (int)(fVar22 * 0.0 + 0.5) | auVar33._8_4_ >> 0x10;
    auVar35._8_4_ = (int)(fVar43 * 0.0 + 0.5) | auVar33._0_4_ >> 0x10;
    auVar25 = packssdw(auVar35,auVar35);
    sVar3 = auVar25._0_2_;
    sVar4 = auVar25._2_2_;
    sVar5 = auVar25._4_2_;
    sVar6 = auVar25._6_2_;
    uVar23 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar25[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar25[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar25[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar25[0] - (0xff < sVar3))
                              ));
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x5e0) + (ulonglong)(uint)(*(int *)(lVar2 + 0x5e8) * iVar7))
       = uVar23;
  lVar18 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x10) + 4 + lVar8 * 0xc);
  uVar23 = uVar24;
  if (*(int *)(*(longlong *)(param_1[4] + 0x10) +
              (longlong)*(int *)(*(longlong *)(param_1[5] + 0x10) + lVar18 * 4) * 4) == 0) {
    auVar25 = maxps(*(undefined1 (*) [16])(*(longlong *)(param_1[6] + 0x10) + lVar18 * 0x10),
                    _DAT_149e1a200);
    auVar25 = minps(auVar25,_DAT_149e1a210);
    fVar43 = auVar25._0_4_;
    fVar29 = auVar25._4_4_;
    fVar22 = auVar25._8_4_;
    auVar30._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar29 + -0x39000000) >> 0x14) * 4);
    auVar30._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar43 + 0xc7000000U >> 0x14) * 4);
    auVar30._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar22 + -0x39000000) >> 0x14) * 4);
    auVar30._12_4_ = 0;
    auVar34._0_4_ = (uint)fVar43 >> 0xc;
    auVar34._4_4_ = (uint)fVar29 >> 0xc;
    auVar34._8_4_ = (uint)fVar22 >> 0xc;
    auVar34._12_4_ = (uint)auVar25._12_4_ >> 0xc;
    auVar35 = pmaddwd(auVar34 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar30);
    auVar26._4_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar35._4_4_ >> 0x10;
    auVar26._12_4_ = (int)(auVar25._12_4_ * 255.0 + 0.5) | auVar35._12_4_ >> 0x10;
    auVar26._0_4_ = (int)(fVar22 * 0.0 + 0.5) | auVar35._8_4_ >> 0x10;
    auVar26._8_4_ = (int)(fVar43 * 0.0 + 0.5) | auVar35._0_4_ >> 0x10;
    auVar25 = packssdw(auVar26,auVar26);
    sVar3 = auVar25._0_2_;
    sVar4 = auVar25._2_2_;
    sVar5 = auVar25._4_2_;
    sVar6 = auVar25._6_2_;
    uVar23 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar25[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar25[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar25[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar25[0] - (0xff < sVar3))
                              ));
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x5e0) + (ulonglong)(*(int *)(lVar2 + 0x5e8) * uVar13)) =
       uVar23;
  lVar18 = (longlong)*(int *)(*(longlong *)(param_1[1] + 0x10) + 8 + lVar8 * 0xc);
  if (*(int *)(*(longlong *)(param_1[4] + 0x10) +
              (longlong)*(int *)(*(longlong *)(param_1[5] + 0x10) + lVar18 * 4) * 4) == 0) {
    auVar25 = maxps(*(undefined1 (*) [16])(*(longlong *)(param_1[6] + 0x10) + lVar18 * 0x10),
                    _DAT_149e1a200);
    auVar25 = minps(auVar25,_DAT_149e1a210);
    fVar43 = auVar25._0_4_;
    fVar29 = auVar25._4_4_;
    fVar22 = auVar25._8_4_;
    auVar31._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar29 + -0x39000000) >> 0x14) * 4);
    auVar31._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar43 + 0xc7000000U >> 0x14) * 4);
    auVar31._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar22 + -0x39000000) >> 0x14) * 4);
    auVar31._12_4_ = 0;
    auVar36._0_4_ = (uint)fVar43 >> 0xc;
    auVar36._4_4_ = (uint)fVar29 >> 0xc;
    auVar36._8_4_ = (uint)fVar22 >> 0xc;
    auVar36._12_4_ = (uint)auVar25._12_4_ >> 0xc;
    auVar35 = pmaddwd(auVar36 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar31);
    auVar27._4_4_ = (int)(fVar29 * 0.0 + 0.5) | auVar35._4_4_ >> 0x10;
    auVar27._12_4_ = (int)(auVar25._12_4_ * 255.0 + 0.5) | auVar35._12_4_ >> 0x10;
    auVar27._0_4_ = (int)(fVar22 * 0.0 + 0.5) | auVar35._8_4_ >> 0x10;
    auVar27._8_4_ = (int)(fVar43 * 0.0 + 0.5) | auVar35._0_4_ >> 0x10;
    auVar25 = packssdw(auVar27,auVar27);
    sVar3 = auVar25._0_2_;
    sVar4 = auVar25._2_2_;
    sVar5 = auVar25._4_2_;
    sVar6 = auVar25._6_2_;
    uVar24 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar25[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar25[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar25[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * auVar25[0] - (0xff < sVar3))
                              ));
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x5e0) + (ulonglong)(*(int *)(lVar2 + 0x5e8) * uVar15)) =
       uVar24;
  *(int *)(*(longlong *)(lVar2 + 0x610) + lVar8 * 0xc) = iVar7;
  *(uint *)(*(longlong *)(lVar2 + 0x610) + (longlong)(int)uVar13 * 4) = uVar13;
  *(uint *)(*(longlong *)(lVar2 + 0x610) + (longlong)(int)uVar15 * 4) = uVar15;
  return;
}



// FUNCTION 144603a51 FUN_144603a51 body=658 status=ok
// SIG undefined FUN_144603a51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144603a51(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowEnginePlugin",0,0,&PTR_FUN_14be105c0);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/DataflowEnginePlugin",&PTR_FUN_14be10d80,1,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48,&DAT_14cc241f8);
  if (cVar2 == '\0') {
    _DAT_14cc241f8 = 0;
    uRam000000014cc24200 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DataflowEnginePlugin",&PTR_FUN_14be119b0,1,0);
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  FUN_142767bc2(&local_48,&DAT_14cc24220);
  local_48 = 0x3ecccccd3f4ccccd;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  FUN_142767bc2(&local_48,&DAT_14cc24224);
  local_48 = 0x3ecccccd3f4ccccd;
  uStack_40 = 0x3e4ccccd;
  uStack_3c = 0x3f800000;
  FUN_142767bc2(&local_48,&DAT_14cc24228);
  local_48 = -0x7ffffffeb41ee58a;
  local_34 = 0x14;
  uStack_40 = FUN_14577453c();
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  FUN_14674f452(&local_48);
  DAT_14cc24230 = (undefined8 *)0x0;
  _DAT_14cc24238 = 8;
  FUN_140c0b9de(&DAT_14cc24230,8,0);
  puVar1 = DAT_14cc24230;
  *DAT_14cc24230 = 0xbf800000bf800000;
  puVar1[1] = 0x3f800000bf800000;
  puVar1[2] = 0xbf800000bf800000;
  puVar1[3] = 0xbf8000003f800000;
  puVar1[4] = 0xbf8000003f800000;
  puVar1[5] = 0x3f800000bf800000;
  puVar1[6] = 0x3f800000bf800000;
  puVar1[7] = 0x3f800000bf800000;
  puVar1[8] = 0xbf8000003f800000;
  puVar1[9] = &DAT_3f8000003f800000;
  puVar1[10] = 0xbf8000003f800000;
  puVar1[0xb] = &DAT_3f8000003f800000;
  atexit((_func_5014 *)&LAB_144602918);
  DAT_14cc24240 = (undefined8 *)0x0;
  DAT_14cc24248 = 0xc;
  FUN_146287c4e(&DAT_14cc24240,0xc,0);
  puVar1 = DAT_14cc24240;
  *DAT_14cc24240 = 0x500000001;
  puVar1[1] = 0x200000004;
  puVar1[2] = 0x500000006;
  puVar1[3] = 0x700000003;
  puVar1[4] = 6;
  puVar1[5] = 0x700000004;
  puVar1[6] = &DAT_100000002;
  puVar1[7] = 0x500000000;
  puVar1[8] = 0x700000006;
  puVar1[9] = 0x400000007;
  puVar1[10] = 5;
  puVar1[0xb] = 0x200000003;
  puVar1[0xc] = 0x300000007;
  puVar1[0xd] = 0x600000000;
  puVar1[0xe] = 0x300000002;
  puVar1[0xf] = 0x100000005;
  puVar1[0x10] = 0x400000002;
  puVar1[0x11] = 0x100000000;
  atexit((_func_5014 *)&LAB_144602929);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144603ce4 FUN_144603ce4 body=729 status=ok
// SIG undefined FUN_144603ce4(void)

void FUN_144603ce4(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 auStack_90 [2];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc243b0) {
    FUN_144b3d300(&DAT_14cc243b0);
    if (DAT_14cc243b0 == -1) {
      FUN_140056680(&local_a8,L"{0}: {1}\n{2}");
      FUN_140234344(&local_98);
      FUN_14116971a(&DAT_14cc243a0,&local_a8,&local_98,1);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      atexit(FUN_144603fbe);
      _Init_thread_footer(&DAT_14cc243b0);
    }
  }
  local_98 = *(longlong *)(param_1 + 0x18);
  FUN_145715fae(&local_d8,&local_98);
  local_f8 = (longlong *)*param_3;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = (undefined4)param_3[1];
  local_108 = (longlong *)*param_2;
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  local_100 = (undefined4)param_2[1];
  local_118 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  plVar4 = DAT_14cc243a8;
  uVar3 = DAT_14cc243a0;
  local_110 = local_d0;
  if (DAT_14cc243a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cc243a8 + 1) = (int)DAT_14cc243a8[1] + 1;
    UNLOCK();
  }
  local_98 = CONCAT44(local_98._4_4_,4);
  FUN_14023423e(local_88,&local_118);
  local_78 = 4;
  FUN_14023423e(local_68,&local_108);
  local_58 = 4;
  FUN_14023423e(local_48,&local_f8);
  local_b0 = &local_38;
  local_b8 = &local_98;
  FUN_14010d304(&local_a8);
  local_c8 = uVar3;
  local_c0 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e8,&local_c8,&local_a8);
  FUN_14007f2db(local_a8,local_a0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x50;
  do {
    plVar2 = *(longlong **)((longlong)auStack_90 + lVar5 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)auStack_90 + lVar5 + -8) = 0;
      *(undefined4 *)((longlong)auStack_90 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144603fbe FUN_144603fbe body=59 status=ok
// SIG undefined FUN_144603fbe(void)

void FUN_144603fbe(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cc243a8;
  if (DAT_14cc243a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc243a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144603fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1446040a7 FUN_1446040a7 body=395 status=ok
// SIG undefined FUN_1446040a7(void)

void FUN_1446040a7(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be11ff0);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be123d0);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be129e0);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be12b80);
  local_48 = "FGeometryCollectionAddScalarVertexPropertyCallbacks";
  local_40 = 0x33;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  DAT_14cc24300 = (ulonglong)uVar1;
  local_48 = (char *)0x800000014be12bdc;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14674f95a(&local_48);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be12d60);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be13330);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DataflowNodes",0,0,&PTR_FUN_14be134f0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144604234 FUN_144604234 body=55 status=ok
// SIG undefined FUN_144604234(void)

void FUN_144604234(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24438 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc24438 = FUN_14171c317(FUN_14674ff83,uVar1,L"EConvexHullSimplifyMethod");
  }
  return;
}



// FUNCTION 14460426b FUN_14460426b body=55 status=ok
// SIG undefined FUN_14460426b(void)

void FUN_14460426b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24450 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc24450 = FUN_14171c317(FUN_14674ffb2,uVar1,L"EFractureBrickBondEnum");
  }
  return;
}



// FUNCTION 1446042a2 FUN_1446042a2 body=55 status=ok
// SIG undefined FUN_1446042a2(void)

void FUN_1446042a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24468 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc24468 = FUN_14171c317(FUN_14674ffe1,uVar1,L"EMeshCutterCutDistribution");
  }
  return;
}



// FUNCTION 1446042d9 FUN_1446042d9 body=55 status=ok
// SIG undefined FUN_1446042d9(void)

void FUN_1446042d9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24480 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc24480 = FUN_14171c317(FUN_146750010,uVar1,L"ENonUniformSamplingDistributionMode");
  }
  return;
}



// FUNCTION 144604310 FUN_144604310 body=55 status=ok
// SIG undefined FUN_144604310(void)

void FUN_144604310(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24498 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc24498 = FUN_14171c317(FUN_14675003f,uVar1,L"ENonUniformSamplingWeightMode");
  }
  return;
}



// FUNCTION 144604347 FUN_144604347 body=55 status=ok
// SIG undefined FUN_144604347(void)

void FUN_144604347(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc244b0 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc244b0 = FUN_14171c317(FUN_14675006e,uVar1,L"EFixTinyGeoMergeType");
  }
  return;
}



// FUNCTION 14460437e FUN_14460437e body=55 status=ok
// SIG undefined FUN_14460437e(void)

void FUN_14460437e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc244c8 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc244c8 = FUN_14171c317(FUN_14675009d,uVar1,L"EFixTinyGeoNeighborSelectionMethod");
  }
  return;
}



// FUNCTION 1446043b5 FUN_1446043b5 body=55 status=ok
// SIG undefined FUN_1446043b5(void)

void FUN_1446043b5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc244e0 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc244e0 = FUN_14171c317(FUN_1467500cc,uVar1,L"EFixTinyGeoUseBoneSelection");
  }
  return;
}



// FUNCTION 1446043ec FUN_1446043ec body=55 status=ok
// SIG undefined FUN_1446043ec(void)

void FUN_1446043ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc244f8 == 0) {
    uVar1 = FUN_141908393();
    DAT_14cc244f8 = FUN_14171c317(FUN_1467500fb,uVar1,L"EFixTinyGeoGeometrySelectionMethod");
  }
  return;
}



// FUNCTION 144604424 FUN_144604424 body=538 status=ok
// SIG undefined FUN_144604424(void)

undefined8 FUN_144604424(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar6;
  
  if ((int)param_2 < 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)*param_1 + 0x60))();
    uVar17 = 0;
    uVar5 = 0;
    if ((int)param_2 < iVar3) {
      uVar6 = *(ulonglong *)(*param_1 + 0x10);
      lVar9 = (ulonglong)param_2 * 0x50;
      plVar1 = (longlong *)(uVar6 + lVar9);
      lVar9 = uVar6 + lVar9;
      puVar16 = (uint *)(lVar9 + 0x10);
      iVar3 = *(int *)(lVar9 + 0x28);
      if (iVar3 == 0) {
        uVar15 = 1;
        iVar12 = 0;
        iVar8 = 0;
      }
      else {
        puVar7 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar7 = puVar16;
        }
        uVar4 = *puVar7;
        if (uVar4 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          uVar17 = 0;
          uVar6 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar6 = uVar17;
          }
          iVar12 = 0;
          do {
            if (uVar6 == uVar17) goto LAB_144604621;
            iVar12 = iVar12 + 0x20;
            uVar4 = puVar7[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar17 = 0;
          iVar12 = 0;
        }
        uVar15 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar15 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar4 = (uint)lVar9 ^ 0x3f;
        uVar6 = (ulonglong)uVar4;
        iVar8 = (iVar12 - uVar4) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
      uVar5 = CONCAT71((int7)(uVar6 >> 8),1);
      if (iVar8 != iVar3) {
        uVar4 = 0xffffffff;
        do {
          FUN_1446054a4(*(undefined8 *)
                         (*(longlong *)(param_1[1] + 0x10) +
                         (longlong)*(int *)(*plVar1 + (longlong)iVar8 * 0xc) * 8),param_1[3],
                        *(longlong *)param_1[2] + (ulonglong)param_2 * 0x60,
                        CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1),1);
          uVar4 = ~(uint)uVar15 & uVar4;
          puVar7 = (uint *)(ulonglong)uVar4;
          puVar14 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar14 = puVar16;
          }
          iVar2 = (int)plVar1[5];
          iVar8 = (int)uVar17;
          lVar9 = (longlong)iVar8;
          uVar4 = puVar14[lVar9] & uVar4;
          if (uVar4 == 0) {
            iVar10 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar10 = iVar2 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar8) {
              iVar11 = iVar8;
            }
            if (iVar8 < iVar10) {
              lVar13 = 0;
              do {
                uVar4 = puVar14[lVar9 + lVar13 + 1];
                if (uVar4 != 0) {
                  uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
                  puVar7 = (uint *)&DAT_ffffffff;
                  goto LAB_1446045d8;
                }
                iVar12 = iVar12 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar11 - lVar9 != lVar13);
              puVar7 = (uint *)&DAT_ffffffff;
              iVar8 = iVar11;
            }
            uVar4 = (uint)puVar7;
            uVar17 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar2;
          }
          else {
LAB_1446045d8:
            uVar15 = (ulonglong)(-uVar4 & uVar4);
            uVar6 = uVar15 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar8) {
              iVar8 = iVar2;
            }
            uVar4 = (uint)puVar7;
          }
        } while (iVar8 != iVar3);
LAB_144604621:
        uVar5 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      }
    }
  }
  return uVar5;
}


