// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a282c4 FUN_145a282c4 body=96 status=ok
// SIG undefined FUN_145a282c4(void)

undefined8 * FUN_145a282c4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  }
  return param_1;
}



// FUNCTION 145a28324 FUN_145a28324 body=41 status=ok
// SIG undefined FUN_145a28324(void)

void FUN_145a28324(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14980d4ae(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 145a2834e FUN_145a2834e body=378 status=ok
// SIG undefined FUN_145a2834e(void)

void FUN_145a2834e(longlong *param_1)

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



// FUNCTION 145a284ca FUN_145a284ca body=335 status=ok
// SIG undefined FUN_145a284ca(void)

void FUN_145a284ca(longlong *param_1)

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



// FUNCTION 145a28622 FUN_145a28622 body=346 status=ok
// SIG undefined FUN_145a28622(void)

undefined8 * FUN_145a28622(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b5d10c0;
  FUN_144894d4c(param_1 + 4);
  param_1[0x11c] = &PTR_FUN_14b00bdf8;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x954) = 0x404;
  param_1[0x11d] = &DAT_14a176f00;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  FUN_144894d4c(param_1 + 0x132);
  param_1[0x24a] = &PTR_FUN_14b00bdf8;
  param_1[0x250] = 0;
  *(undefined4 *)(param_1 + 0x251) = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x128c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1294) = 0;
  param_1[0x254] = 0;
  *(undefined4 *)(param_1 + 0x255) = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  *(undefined4 *)(param_1 + 600) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x12c4) = 0x404;
  param_1[0x24b] = &DAT_14a176f00;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  return param_1;
}



// FUNCTION 145a2877c FUN_145a2877c body=40 status=ok
// SIG undefined FUN_145a2877c(void)

undefined8 FUN_145a2877c(undefined8 param_1,int param_2)

{
  FUN_145a287a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a287a4 FUN_145a287a4 body=303 status=ok
// SIG undefined FUN_145a287a4(void)

void FUN_145a287a4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b056c50;
  param_1[6] = &PTR_FUN_14b056f30;
  lVar1 = param_1[0x3c];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2892e(param_1 + 0x32);
  FUN_145a28a06(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145a28964(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2899a(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a289d0(param_1 + 0xb);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 145a288d3 FUN_145a288d3 body=30 status=ok
// SIG undefined FUN_145a288d3(void)

void FUN_145a288d3(longlong param_1)

{
  FUN_145a28b86(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a288f1 FUN_145a288f1 body=30 status=ok
// SIG undefined FUN_145a288f1(void)

void FUN_145a288f1(longlong param_1)

{
  FUN_145a28c22(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a2890f FUN_145a2890f body=30 status=ok
// SIG undefined FUN_145a2890f(void)

void FUN_145a2890f(longlong param_1)

{
  FUN_145a28c8c(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a2892e FUN_145a2892e body=53 status=ok
// SIG undefined FUN_145a2892e(void)

void FUN_145a2892e(longlong *param_1)

{
  FUN_145a28ad2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28964 FUN_145a28964 body=53 status=ok
// SIG undefined FUN_145a28964(void)

void FUN_145a28964(longlong *param_1)

{
  FUN_145a28b2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2899a FUN_145a2899a body=53 status=ok
// SIG undefined FUN_145a2899a(void)

void FUN_145a2899a(longlong *param_1)

{
  FUN_14146666e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a289d0 FUN_145a289d0 body=53 status=ok
// SIG undefined FUN_145a289d0(void)

void FUN_145a289d0(longlong *param_1)

{
  FUN_145a28a7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28a06 FUN_145a28a06 body=69 status=ok
// SIG undefined FUN_145a28a06(void)

void FUN_145a28a06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b057610;
  FUN_145a28a4b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 145a28a4b FUN_145a28a4b body=47 status=ok
// SIG undefined FUN_145a28a4b(void)

void FUN_145a28a4b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x38;
    do {
      FUN_1407acd04(param_1);
      param_1 = param_1 + 0x390;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a28a7a FUN_145a28a7a body=88 status=ok
// SIG undefined FUN_145a28a7a(void)

void FUN_145a28a7a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145a28ad2 FUN_145a28ad2 body=90 status=ok
// SIG undefined FUN_145a28ad2(void)

void FUN_145a28ad2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 145a28b2c FUN_145a28b2c body=90 status=ok
// SIG undefined FUN_145a28b2c(void)

void FUN_145a28b2c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145a28b86 FUN_145a28b86 body=101 status=ok
// SIG undefined FUN_145a28b86(void)

void FUN_145a28b86(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145a28bec(param_1 + 0x10);
  return;
}



// FUNCTION 145a28bec FUN_145a28bec body=53 status=ok
// SIG undefined FUN_145a28bec(void)

void FUN_145a28bec(longlong *param_1)

{
  FUN_141466850();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28c22 FUN_145a28c22 body=105 status=ok
// SIG undefined FUN_145a28c22(void)

void FUN_145a28c22(longlong *param_1)

{
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140319674(param_1[0x44],(int)param_1[0x45]);
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28c8c FUN_145a28c8c body=204 status=ok
// SIG undefined FUN_145a28c8c(void)

void FUN_145a28c8c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_145a28d58(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_145a28d8e(param_1 + 0x108);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a28dc4(param_1);
  return;
}



// FUNCTION 145a28d58 FUN_145a28d58 body=53 status=ok
// SIG undefined FUN_145a28d58(void)

void FUN_145a28d58(longlong *param_1)

{
  FUN_145a28dfa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28d8e FUN_145a28d8e body=53 status=ok
// SIG undefined FUN_145a28d8e(void)

void FUN_145a28d8e(longlong *param_1)

{
  FUN_145a28e52();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28dc4 FUN_145a28dc4 body=53 status=ok
// SIG undefined FUN_145a28dc4(void)

void FUN_145a28dc4(longlong *param_1)

{
  FUN_145a28eac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a28dfa FUN_145a28dfa body=88 status=ok
// SIG undefined FUN_145a28dfa(void)

void FUN_145a28dfa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 145a28e52 FUN_145a28e52 body=90 status=ok
// SIG undefined FUN_145a28e52(void)

void FUN_145a28e52(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 145a28eac FUN_145a28eac body=355 status=ok
// SIG undefined FUN_145a28eac(void)

void FUN_145a28eac(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x38 + lVar3 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x50 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a29010 FUN_145a29010 body=167 status=ok
// SIG undefined FUN_145a29010(void)

void FUN_145a29010(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  *(undefined1 *)(param_1 + 0x40) = 0;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    uVar1 = FUN_145a290b8();
    FUN_1446f470e(&local_28,&DAT_149e1b1d8,1);
    FUN_145a290ec(uVar1,local_28,param_1);
    uVar1 = FUN_145a290b8();
    FUN_1446f470e(&local_30,L"LogCSV",1);
    FUN_145a290ec(uVar1,local_30,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a290b8 FUN_145a290b8 body=52 status=ok
// SIG undefined FUN_145a290b8(void)

longlong FUN_145a290b8(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_141466a68();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return lVar2;
}



// FUNCTION 145a290ec FUN_145a290ec body=143 status=ok
// SIG undefined FUN_145a290ec(void)

void FUN_145a290ec(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  local_40 = param_2;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  local_38 = &local_40;
  local_30 = &local_48;
  FUN_145a2917c(param_1 + 0x50,local_24);
  FUN_141466b46(param_1,local_40,*(undefined1 *)(param_3 + 0x28));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2917c FUN_145a2917c body=357 status=ok
// SIG undefined FUN_145a2917c(void)

undefined4 * FUN_145a2917c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a29362(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145a292e2(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_141466cb6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a292e2 FUN_145a292e2 body=128 status=ok
// SIG undefined FUN_145a292e2(void)

undefined8 FUN_145a292e2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1470b039e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 145a29362 FUN_145a29362 body=231 status=ok
// SIG undefined FUN_145a29362(void)

int * FUN_145a29362(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 145a29458 FUN_145a29458 body=40 status=ok
// SIG undefined FUN_145a29458(void)

undefined8 FUN_145a29458(undefined8 param_1,int param_2)

{
  FUN_145a29480();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a29480 FUN_145a29480 body=335 status=ok
// SIG undefined FUN_145a29480(void)

void FUN_145a29480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b737850;
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_145a295d0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a29608(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145a29640(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a29678(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145a296b0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145a296e8(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145a29720(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a295d0 FUN_145a295d0 body=55 status=ok
// SIG undefined FUN_145a295d0(void)

void FUN_145a295d0(longlong *param_1)

{
  FUN_145a29758(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a29608 FUN_145a29608 body=55 status=ok
// SIG undefined FUN_145a29608(void)

void FUN_145a29608(longlong *param_1)

{
  FUN_145a297d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a29640 FUN_145a29640 body=55 status=ok
// SIG undefined FUN_145a29640(void)

void FUN_145a29640(longlong *param_1)

{
  FUN_145a2984c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a29678 FUN_145a29678 body=55 status=ok
// SIG undefined FUN_145a29678(void)

void FUN_145a29678(longlong *param_1)

{
  FUN_145a298c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a296b0 FUN_145a296b0 body=55 status=ok
// SIG undefined FUN_145a296b0(void)

void FUN_145a296b0(longlong *param_1)

{
  FUN_145a29940(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a296e8 FUN_145a296e8 body=55 status=ok
// SIG undefined FUN_145a296e8(void)

void FUN_145a296e8(longlong *param_1)

{
  FUN_145a299ba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a29720 FUN_145a29720 body=55 status=ok
// SIG undefined FUN_145a29720(void)

void FUN_145a29720(longlong *param_1)

{
  FUN_145a29a34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a29758 FUN_145a29758 body=121 status=ok
// SIG undefined FUN_145a29758(void)

void FUN_145a29758(longlong param_1,int param_2)

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



// FUNCTION 145a297d2 FUN_145a297d2 body=121 status=ok
// SIG undefined FUN_145a297d2(void)

void FUN_145a297d2(longlong param_1,int param_2)

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



// FUNCTION 145a2984c FUN_145a2984c body=121 status=ok
// SIG undefined FUN_145a2984c(void)

void FUN_145a2984c(longlong param_1,int param_2)

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



// FUNCTION 145a298c6 FUN_145a298c6 body=121 status=ok
// SIG undefined FUN_145a298c6(void)

void FUN_145a298c6(longlong param_1,int param_2)

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



// FUNCTION 145a29940 FUN_145a29940 body=121 status=ok
// SIG undefined FUN_145a29940(void)

void FUN_145a29940(longlong param_1,int param_2)

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



// FUNCTION 145a299ba FUN_145a299ba body=121 status=ok
// SIG undefined FUN_145a299ba(void)

void FUN_145a299ba(longlong param_1,int param_2)

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



// FUNCTION 145a29a34 FUN_145a29a34 body=121 status=ok
// SIG undefined FUN_145a29a34(void)

void FUN_145a29a34(longlong param_1,int param_2)

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



// FUNCTION 145a29aba FUN_145a29aba body=81 status=ok
// SIG undefined FUN_145a29aba(void)

undefined8 * FUN_145a29aba(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14b2cfc10;
  param_1[5] = &PTR_FUN_14b2d01f0;
  param_1[6] = &PTR_LAB_14b2d0230;
  *(undefined2 *)(param_1 + 0x55) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 6;
  *(undefined1 *)(param_1 + 9) = 5;
  return param_1;
}



// FUNCTION 145a29b0b FUN_145a29b0b body=588 status=ok
// SIG undefined FUN_145a29b0b(void)

void FUN_145a29b0b(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    local_a0 = lVar4;
    FUN_145a29d58(local_d8);
    lVar7 = local_b0;
    lVar4 = local_c8;
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
    plVar6 = local_d0;
LAB_145a29b9e:
    if (plVar6 != local_b8) {
      plVar1 = (longlong *)plVar6[2];
      if (((*plVar1 != 0) && ((longlong *)plVar1[1] != (longlong *)0x0)) &&
         (lVar5 = (**(code **)(*(longlong *)plVar1[1] + 0x60))(), lVar5 == param_1)) {
        lVar5 = (longlong)(int)local_50;
        uVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        if (local_50._4_4_ < uVar3) {
          FUN_14893cd42(local_98);
        }
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_98;
        }
        lVar5 = lVar5 * 0x10;
        lVar2 = *plVar1;
        *(longlong *)(puVar8 + lVar5) = lVar2;
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          local_100 = lVar5;
          FUN_1456cec3c();
          lVar5 = local_100;
        }
        *(longlong *)(puVar8 + lVar5 + 8) = plVar1[1];
      }
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == (longlong *)0x0) break;
        if (*(longlong **)plVar6[2] == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (**(code **)(**(longlong **)plVar6[2] + 0x180))();
        }
      } while (lVar5 != *local_c0);
      goto LAB_145a29b9e;
    }
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + -1;
    UNLOCK();
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_98;
    }
    lVar4 = (longlong)(int)local_50;
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(puVar8 + lVar7) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(puVar8 + lVar7 + 8);
        }
        local_e8 = DAT_14c8464f0;
        local_f8 = (undefined4)DAT_14c8464e0;
        uStack_f4 = DAT_14c8464e0._4_4_;
        uStack_f0 = (undefined4)DAT_14c8464e8;
        uStack_ec = DAT_14c8464e8._4_4_;
        local_108 = &local_f8;
        (**(code **)(*plVar6 + 0x80))((undefined4)DAT_14c8464e0,0,0,0);
        lVar7 = lVar7 + 0x10;
      } while (lVar4 * 0x10 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a29d58 FUN_145a29d58 body=226 status=ok
// SIG undefined FUN_145a29d58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145a29d58(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb89c18 = _DAT_14cb89c18 + 1;
  UNLOCK();
  param_1[1] = DAT_14cb89c10;
  param_1[2] = &DAT_14cb89c10;
  LOCK();
  _DAT_14cb89c18 = _DAT_14cb89c18 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    if ((longlong *)**(longlong **)(lVar2 + 0x10) == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)**(longlong **)(lVar2 + 0x10) + 0x180))();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb89c10;
  LOCK();
  _DAT_14cb89c18 = _DAT_14cb89c18 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    if ((longlong *)**(longlong **)(lVar2 + 0x10) == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)**(longlong **)(lVar2 + 0x10) + 0x180))();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  _DAT_14cb89c18 = _DAT_14cb89c18 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 145a29e3a FUN_145a29e3a body=993 status=ok
// SIG undefined FUN_145a29e3a(void)

void FUN_145a29e3a(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_448 [32];
  undefined1 local_428;
  undefined8 *local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined8 local_3b8;
  undefined8 local_3a8;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8 [12];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278 [12];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0 [9];
  undefined8 local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (cVar5 = FUN_1405bb4f2(), cVar5 == '\0')) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1447210f0();
    }
    FUN_1407f7f84(&local_2f8,uVar7);
    if (plStack_2f0 != (longlong *)0x0) {
      iVar6 = (int)plStack_2f0[1];
      do {
        if (iVar6 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plStack_2f0[1];
        bVar14 = iVar6 == iVar4;
        if (bVar14) {
          *(int *)(plStack_2f0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar13 = plStack_2f0;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2f0 + 0x10))();
      }
      lVar3 = local_2f8;
      if (plVar13 != (longlong *)0x0) {
        local_410 = param_3;
        if (local_2f8 != 0) {
          local_2f8 = 0;
          plStack_2f0 = (longlong *)0x0;
          puVar11 = &DAT_14c846480;
          puVar12 = local_2e8;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          local_288 = 0;
          uStack_280 = 0;
          puVar11 = &DAT_14c846480;
          puVar12 = local_278;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          local_1b8 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_218 = 0;
          uStack_210 = 0;
          puVar11 = &DAT_14c964b40;
          puVar12 = local_1b0;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar11 = &DAT_14c846480;
          puVar12 = local_168;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          local_d8 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_d0 = 0x3ecccccd42c80000;
          local_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          uStack_a8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          lVar10 = *(longlong *)(param_1 + 0x28);
          local_b0 = *(undefined8 *)(lVar10 + 0x48);
          uVar7 = FUN_14477b664(*(undefined8 *)(lVar10 + 0x50));
          uStack_a8 = FUN_14477b664(uVar7);
          local_a0 = *(undefined8 *)(lVar10 + 0x58);
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3e8 = 0;
          uStack_3e0 = 0;
          local_3f8 = 0;
          uStack_3f0 = 0;
          local_408 = 0;
          uStack_400 = 0;
          local_3c8 = 0xc0;
          local_3b8 = 0;
          local_3a8 = 0;
          local_378 = 0;
          local_368 = 0;
          local_338 = 0;
          uStack_330 = 0;
          local_328 = 0;
          local_320 = 0x3ff0000000000000;
          local_318 = 0x3ff0000000000000;
          local_310 = 0x3ff0000000000000;
          local_308 = 0x3f80000000000000;
          local_300 = 0;
          plVar8 = (longlong *)FUN_1405bbf8c(&local_2f8);
          lVar10 = plVar8[1];
          if (lVar10 == 0) {
            uVar7 = FUN_1405bc036();
            lVar10 = FUN_14477b664(uVar7);
            plVar8[1] = lVar10;
          }
          lVar9 = plVar8[2];
          if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*plVar8 != 0)) {
            plVar2 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
              lVar9 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar9 = FUN_144aff482(uVar7,plVar8);
            }
            plVar8[2] = lVar9;
          }
          FUN_1405bc06f(&local_408,lVar9,1,1);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1b0);
          local_300 = param_4;
          if (lVar10 != 0) {
            local_418 = 0;
            local_428 = 0;
            local_420 = &local_408;
            FUN_1408f2522(lVar3,param_2,lVar10,local_410);
          }
          FUN_141466e9a(&local_408);
          FUN_1405bd7e2(&local_2f8);
        }
        LOCK();
        plVar8 = plVar13 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2a21c FUN_145a2a21c body=40 status=ok
// SIG undefined FUN_145a2a21c(void)

undefined8 FUN_145a2a21c(undefined8 param_1,int param_2)

{
  FUN_145a2a244();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2a244 FUN_145a2a244 body=72 status=ok
// SIG undefined FUN_145a2a244(void)

void FUN_145a2a244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7e3d30;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2a28c(param_1 + 0x34);
  FUN_145a2a31c(param_1);
  return;
}



// FUNCTION 145a2a28c FUN_145a2a28c body=53 status=ok
// SIG undefined FUN_145a2a28c(void)

void FUN_145a2a28c(longlong *param_1)

{
  FUN_145a2a2c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2a2c2 FUN_145a2a2c2 body=90 status=ok
// SIG undefined FUN_145a2a2c2(void)

void FUN_145a2a2c2(longlong param_1)

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



// FUNCTION 145a2a31c FUN_145a2a31c body=252 status=ok
// SIG undefined FUN_145a2a31c(void)

void FUN_145a2a31c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b218a50;
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
  plVar3 = (longlong *)param_1[0x2a];
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
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    FUN_145a2a418(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2a418 FUN_145a2a418 body=72 status=ok
// SIG undefined FUN_145a2a418(void)

void FUN_145a2a418(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1);
  return;
}



// FUNCTION 145a2a460 FUN_145a2a460 body=156 status=ok
// SIG undefined FUN_145a2a460(void)

bool FUN_145a2a460(longlong param_1,undefined4 param_2)

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



// FUNCTION 145a2a4fe FUN_145a2a4fe body=1 status=ok
// SIG undefined FUN_145a2a4fe(void)

void FUN_145a2a4fe(void)

{
  return;
}



// FUNCTION 145a2a500 FUN_145a2a500 body=294 status=ok
// SIG undefined FUN_145a2a500(void)

void FUN_145a2a500(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_80;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar1 * 2);
  }
  FUN_140c540b4(&local_88,L"Entitle=",8,1);
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_141466f30(&local_88,&local_78);
  (**(code **)(*param_1 + 0x60))(param_1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145a2a628(&local_78);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2a628 FUN_145a2a628 body=53 status=ok
// SIG undefined FUN_145a2a628(void)

void FUN_145a2a628(longlong *param_1)

{
  FUN_145a2a65e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2a65e FUN_145a2a65e body=356 status=ok
// SIG undefined FUN_145a2a65e(void)

void FUN_145a2a65e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x68;
      *(undefined4 *)(lVar2 + 0x58 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x50 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1401bccca(lVar2 + lVar3 + 0x10);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2a7c4 FUN_145a2a7c4 body=368 status=ok
// SIG undefined FUN_145a2a7c4(void)

void FUN_145a2a7c4(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_71 = param_3;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    cVar2 = FUN_144729dda(param_1 + 8);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 8);
      if (((*(longlong *)(lVar3 + 0x30) != 0) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar3 != 0)) &&
         (lVar3 = FUN_140149a73(lVar3,0), lVar3 != 0)) {
        FUN_145a2a936(lVar3,&local_58);
        lVar3 = local_58;
        if ((longlong)local_50 != 0) {
          lVar5 = 0;
          do {
            plVar1 = *(longlong **)(lVar3 + lVar5);
            if (((plVar1 != (longlong *)0x0) &&
                (lVar4 = (**(code **)(*plVar1 + 0x88))(plVar1), lVar4 != param_1)) &&
               ((*(char *)((longlong)plVar1 + 0x1c) == '\0' &&
                ((lVar4 = (**(code **)(*plVar1 + 0x88))(plVar1), lVar4 != 0 &&
                 (lVar4 = FUN_141468568(lVar4), lVar4 != 0)))))) {
              FUN_144a659ac(param_2 + 0x10,local_64,2);
              FUN_144a659ac(param_2 + 0x10,local_70,1);
              FUN_145a2ada4(lVar4,local_70,local_64,local_71);
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)local_50 * 8 != lVar5);
        }
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2a936 FUN_145a2a936 body=319 status=ok
// SIG undefined FUN_145a2a936(void)

longlong * FUN_145a2a936(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
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
  uVar4 = FUN_140983b3e();
  plVar1 = (longlong *)(param_1 + 0xc0);
  FUN_1414685e9(plVar1,uVar4);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0xd0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0xe8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_145a2aa76(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar5) || (CONCAT44(uStack_74,uStack_78) != lVar2)) ||
            (local_88 != plVar1));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2aa76 FUN_145a2aa76 body=132 status=ok
// SIG undefined FUN_145a2aa76(void)

void FUN_145a2aa76(longlong param_1,int param_2)

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



// FUNCTION 145a2aafa FUN_145a2aafa body=379 status=ok
// SIG undefined FUN_145a2aafa(void)

void FUN_145a2aafa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)((longlong)param_1 + 0x1c) != '\0') ||
     ((*(char *)((longlong)param_1 + 0x1d) == '\0' && ((char)param_1[4] != '\x01'))))
  goto LAB_145a2ac36;
  cVar1 = FUN_144729dda(param_1 + 1);
  if (cVar1 == '\0') {
LAB_145a2ac62:
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 1);
    if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_145a2ac62;
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
  }
  lVar2 = FUN_140149a73(uVar4,0);
  if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x160) != (longlong *)0x0)) &&
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 0x160) + 0x88))(), plVar3 != param_1
     )) {
    FUN_145a2a936(lVar2,&local_58);
    lVar2 = local_58;
    if ((*(char *)((longlong)param_1 + 0x1d) != '\x01') || ((char)param_1[4] == '\x01')) {
      if ((longlong)local_50 == 0) {
        param_4 = 0;
      }
      else {
        lVar5 = 0;
        do {
          param_4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x40))
                              (*(longlong **)(lVar2 + lVar5),param_2,param_3);
          if ((char)param_4 == '\0') break;
          bVar6 = (longlong)local_50 * 8 + -8 != lVar5;
          lVar5 = lVar5 + 8;
        } while (bVar6);
      }
    }
    *(undefined1 *)((longlong)plVar3 + 0x1e) = 1;
    local_68 = 0;
    local_60 = 0;
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2,param_3,param_4);
    *(undefined1 *)((longlong)plVar3 + 0x1e) = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_145a2ac36:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2ac76 FUN_145a2ac76 body=301 status=ok
// SIG undefined FUN_145a2ac76(void)

undefined4 * FUN_145a2ac76(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140987b58(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined1 *)(local_40 + 2) = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  FUN_1410b51e5(0,0);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_1409878ce(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140987f12(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2ada4 FUN_145a2ada4 body=392 status=ok
// SIG undefined FUN_145a2ada4(void)

void FUN_145a2ada4(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [12];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0._4_8_ = 0xffffffffffffffff;
  local_a4 = 0xbf800000;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_51 = 0;
  local_b0[0] = 9;
  local_80 = *(undefined4 *)(param_2 + 1);
  uStack_88 = *param_2;
  uStack_74 = *(undefined4 *)(param_3 + 1);
  uStack_7c = (undefined4)*param_3;
  uStack_78 = (undefined4)((ulonglong)*param_3 >> 0x20);
  puVar5 = &DAT_14cb7c580;
  if (param_4 != '\0') {
    puVar5 = &DAT_14cb7c588;
  }
  uVar3 = *puVar5;
  local_70 = uVar3;
  plVar1 = (longlong *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0xe0);
  lVar6 = (longlong)iVar2;
  if (0 < lVar6) {
    lVar9 = *plVar1;
    lVar8 = lVar6;
    do {
      cVar4 = FUN_145a2af2e(lVar9,local_b0);
      if (cVar4 != '\0') {
        *(undefined8 *)(lVar9 + 0x40) = uVar3;
        *(undefined8 *)(lVar9 + 0x48) = 0;
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(undefined4 *)(lVar9 + 0xc) = 0xbf800000;
        goto LAB_145a2aea3;
      }
      lVar9 = lVar9 + 0x68;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(uint *)(param_1 + 0xe0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar2 + 1U) {
    FUN_140116b62(plVar1,iVar2);
  }
  puVar5 = (undefined8 *)local_b0;
  puVar7 = (undefined8 *)(lVar6 * 0x68 + *plVar1);
  for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
LAB_145a2aea3:
  lVar6 = *(longlong *)(param_1 + 0x28);
  local_48 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(lVar6 + 0x16c8,&local_48);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2af2e FUN_145a2af2e body=146 status=ok
// SIG undefined FUN_145a2af2e(void)

ulonglong FUN_145a2af2e(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  bVar1 = *param_1;
  if (((byte)(bVar1 - 2) < 3) && ((byte)(*param_2 - 2) < 3)) {
    if ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) && (param_1[0x60] == param_2[0x60])) {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 4) >> 8),1);
    }
  }
  else {
    if (bVar1 != *param_2) {
      return 0;
    }
    if (bVar1 != 8) {
      if (bVar1 != 9) {
        if (2 < bVar1 - 5) {
          if (bVar1 != 1) {
            return 0;
          }
          return 0xffffff01;
        }
        if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x3c);
        bVar3 = iVar2 == *(int *)(param_2 + 0x3c);
        goto LAB_145a2af80;
      }
      if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34)) &&
       (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c))) {
      iVar2 = *(int *)(param_1 + 8);
      bVar3 = iVar2 == *(int *)(param_2 + 8);
LAB_145a2af80:
      return (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),bVar3);
    }
  }
  return 0;
}



// FUNCTION 145a2afc0 FUN_145a2afc0 body=103 status=ok
// SIG undefined FUN_145a2afc0(void)

ulonglong FUN_145a2afc0(longlong param_1)

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
LAB_145a2b00a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a2b00a;
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



// FUNCTION 145a2b028 FUN_145a2b028 body=331 status=ok
// SIG undefined FUN_145a2b028(void)

void FUN_145a2b028(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_145a2b174(param_2);
  local_38 = 0;
  FUN_14485c47a(&local_38,uVar4);
  local_30 = local_38;
  iVar3 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar3 == -1) goto LAB_145a2b0e6;
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar7 = lVar1 + (longlong)iVar3 * 0x90;
  if ((lVar7 == 0) || (pcVar6 = (char *)(lVar1 + (longlong)iVar3 * 0x90 + 8), pcVar6 == (char *)0x0)
     ) goto LAB_145a2b0e6;
  plVar5 = (longlong *)FUN_14479d2ce(lVar7 + 0x2c);
  if (plVar5 == (longlong *)0x0) {
    cVar2 = '\x01';
  }
  else if (*pcVar6 == '\x01') {
    if (*(char *)(lVar7 + 10) == '\0') {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x9f8))(plVar5);
      if (plVar5 == (longlong *)0x0) goto LAB_145a2b166;
    }
    if (*(char *)((longlong)plVar5 + 0xf9b) != '\x01') goto LAB_145a2b166;
    cVar2 = *(char *)((longlong)plVar5 + 0xf9c);
  }
  else if ((char)plVar5[0x1a4] == '\x01') {
    cVar2 = *(char *)((longlong)plVar5 + 0xd21);
  }
  else {
LAB_145a2b166:
    cVar2 = '\0';
  }
  if ((bool)*(char *)(lVar7 + 0xc) == (param_3 != 0)) {
    if (cVar2 == '\0') goto LAB_145a2b0e6;
  }
  else {
    *(bool *)(lVar7 + 0xc) = param_3 != 0;
    if (param_3 == 0) {
      if (*(char *)(lVar7 + 0xb) == '\x01') {
        FUN_145a2b1ee(param_1,pcVar6);
      }
      goto LAB_145a2b0e6;
    }
  }
  cVar2 = FUN_1402b9118(pcVar6);
  if (cVar2 != '\0') {
    FUN_145a2b17e(param_1,pcVar6);
  }
LAB_145a2b0e6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2b174 FUN_145a2b174 body=9 status=ok
// SIG undefined FUN_145a2b174(void)

void FUN_145a2b174(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x60);
  return;
}



// FUNCTION 145a2b17e FUN_145a2b17e body=112 status=ok
// SIG undefined FUN_145a2b17e(void)

void FUN_145a2b17e(longlong param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    cVar1 = FUN_144729dda(param_2 + 0x48);
    if ((cVar1 != '\0') && (*(longlong **)(param_2 + 0x50) != (longlong *)0x0)) {
      lVar3 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x20))();
      if (lVar3 != 0) {
        if (*param_2 == '\0') {
          bVar2 = *(float *)(param_2 + 8) <= *(float *)(param_1 + 0x28) &&
                  *(float *)(param_1 + 0x28) != *(float *)(param_2 + 8);
        }
        else {
          bVar2 = false;
        }
        param_2[5] = bVar2;
        param_2[3] = '\x01';
        *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_2 + 0x24);
        FUN_1402b927e(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a2b1ee FUN_145a2b1ee body=105 status=ok
// SIG undefined FUN_145a2b1ee(void)

void FUN_145a2b1ee(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_2 + 3) = 0;
  FUN_145a2b258(param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    cVar1 = FUN_141077dfa(param_2 + 0x2c,param_2 + 0x24);
    if (cVar1 == '\0') goto LAB_145a2b20c;
  }
  else {
LAB_145a2b20c:
    cVar1 = FUN_1410770b6(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_1456f06d6(param_1,param_2);
      goto LAB_145a2b226;
    }
  }
  FUN_1456efee2(param_1,param_2);
LAB_145a2b226:
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 145a2b258 FUN_145a2b258 body=617 status=ok
// SIG undefined FUN_145a2b258(void)

void FUN_145a2b258(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  double *pdVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  lVar14 = FUN_14479d2ce(param_1 + 0x34);
  if (lVar14 != 0) {
    lVar14 = *(longlong *)(lVar14 + 0x1c8);
    if (lVar14 == 0) {
      pdVar15 = &DAT_14c8464e0;
      uVar24 = SUB84(DAT_14c8464f0,0);
      uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar24 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
      uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
      pdVar15 = (double *)(lVar14 + 0x260);
    }
    dVar3 = *pdVar15;
    dVar4 = pdVar15[1];
    plVar16 = (longlong *)FUN_14479d2ce(param_1 + 0x24);
    if (plVar16 != (longlong *)0x0) {
      lVar14 = plVar16[0x4c];
      uVar5 = *(undefined4 *)((longlong)plVar16 + 0x264);
      lVar11 = plVar16[0x4d];
      uVar6 = *(undefined4 *)((longlong)plVar16 + 0x26c);
      lVar12 = plVar16[0x4e];
      uVar7 = *(undefined4 *)((longlong)plVar16 + 0x274);
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x9f8))(plVar16);
      uVar8 = (int)lVar14;
      uVar9 = (int)lVar11;
      uVar10 = (int)lVar12;
      while ((((plVar16 != (longlong *)0x0 && (*(char *)((longlong)plVar16 + 0x6f1) == '\x01')) &&
              ((cVar13 = FUN_1456f056a(plVar16), cVar13 == '\0' ||
               (*(char *)((longlong)plVar16 + 0x959) == '\0')))) &&
             ((cVar13 = FUN_1456f057c(plVar16), cVar13 == '\0' ||
              (*(char *)((longlong)plVar16 + 0xa91) == '\0'))))) {
        auVar2 = *(undefined1 (*) [16])(plVar16 + 0x4c);
        dVar1 = (double)plVar16[0x4e];
        dVar22 = dVar1 - (double)CONCAT44(uVar7,uVar10);
        dVar17 = auVar2._0_8_ - (double)CONCAT44(uVar5,uVar8);
        dVar19 = auVar2._8_8_ - (double)CONCAT44(uVar6,uVar9);
        fVar21 = (float)SQRT(dVar22 * dVar22 + dVar17 * dVar17 + dVar19 * dVar19);
        dVar18 = DAT_14c8464e0;
        dVar20 = DAT_14c8464e8;
        dVar23 = DAT_14c8464f0;
        if (1e-08 < fVar21) {
          dVar23 = (double)(1.0 / fVar21);
          dVar18 = dVar17 * dVar23;
          dVar20 = dVar19 * dVar23;
          dVar23 = dVar22 * dVar23;
        }
        if ((float)((dVar4 - (double)CONCAT44(uVar6,uVar9)) * dVar20 +
                    dVar18 * (dVar3 - (double)CONCAT44(uVar5,uVar8)) +
                   ((double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar7,uVar10)) * dVar23) <
            fVar21) {
          return;
        }
        FUN_14485c47a(param_1 + 0x24,plVar16);
        plVar16 = (longlong *)(**(code **)(*plVar16 + 0x9f8))(plVar16);
        uVar8 = auVar2._0_4_;
        uVar5 = auVar2._4_4_;
        uVar9 = auVar2._8_4_;
        uVar6 = auVar2._12_4_;
        uVar10 = SUB84(dVar1,0);
        uVar7 = (int)((ulonglong)dVar1 >> 0x20);
      }
    }
  }
  return;
}



// FUNCTION 145a2b4c2 FUN_145a2b4c2 body=40 status=ok
// SIG undefined FUN_145a2b4c2(void)

undefined8 FUN_145a2b4c2(undefined8 param_1,int param_2)

{
  FUN_145a2b4ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2b4ea FUN_145a2b4ea body=76 status=ok
// SIG undefined FUN_145a2b4ea(void)

void FUN_145a2b4ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3e3a10;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_145a2b536(param_1);
  return;
}



// FUNCTION 145a2b536 FUN_145a2b536 body=95 status=ok
// SIG undefined FUN_145a2b536(void)

void FUN_145a2b536(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5e4a20;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
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



// FUNCTION 145a2b596 FUN_145a2b596 body=115 status=ok
// SIG undefined FUN_145a2b596(void)

void FUN_145a2b596(longlong param_1)

{
  int iVar1;
  
  FUN_140893b6e();
  FUN_141468ec7(param_1 + 0x120,param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  iVar1 = *(int *)(param_1 + 0xf4);
  FUN_14087196b(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    FUN_14883f478(param_1 + 0xe8);
  }
  FUN_141469140(param_1);
  return;
}



// FUNCTION 145a2b60a FUN_145a2b60a body=94 status=ok
// SIG undefined FUN_145a2b60a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145a2b60a(void)

{
  if (DAT_14cb7c078 != DAT_14cb7c0a4) {
    FUN_145a2bbf0(&DAT_14cb7c070);
    DAT_14cb7c078 = 0;
    if (DAT_14cb7c07c < 0) {
      FUN_1401ad22e(&DAT_14cb7c070,0);
    }
    _DAT_14cb7c0a0 = 0xffffffff;
    _DAT_14cb7c098 = 0;
  }
  return;
}



// FUNCTION 145a2b668 FUN_145a2b668 body=183 status=ok
// SIG undefined FUN_145a2b668(void)

void FUN_145a2b668(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_68 [36];
  int local_44;
  longlong local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d7e6a6(&DAT_14cb7c0c0,param_1);
  FUN_1414690e8();
  local_44 = 0;
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    do {
      local_40 = (longlong)local_44 * 0xc + *param_1;
      local_38 = &local_44;
      FUN_145a2b720(local_2c,&local_40);
      local_44 = local_44 + 1;
      iVar2 = (int)param_1[1];
    } while (local_44 < iVar2);
  }
  uVar1 = (ulonglong)(iVar2 - 1) * 2 + 1;
  DAT_14cb7c120 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> DAT_14cb7c120 == 0; DAT_14cb7c120 = DAT_14cb7c120 + -1) {
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2b720 FUN_145a2b720 body=349 status=ok
// SIG undefined FUN_145a2b720(void)

undefined4 * FUN_145a2b720(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a2b8d4(local_40);
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (uint *)param_2[1];
  local_38[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_38 = *puVar1;
  local_38[3] = *puVar2;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  if (local_38[2] == 0) {
    uVar8 = *local_38;
  }
  else {
    uVar8 = FUN_144a78877(*local_38,local_38[2]);
  }
  cVar5 = FUN_145a2b87e(uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7c0d8 - DAT_14cb7c104;
    if (uVar6 < 4) {
      iVar10 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= DAT_14cb7c118)) {
      uVar8 = DAT_14cb7c118 - 1U & uVar8;
      local_38[5] = uVar8;
      puVar7 = DAT_14cb7c110;
      if (DAT_14cb7c110 == (undefined4 *)0x0) {
        puVar7 = &DAT_14cb7c108;
      }
      local_38[4] = puVar7[(longlong)DAT_14cb7c118 - 1U & (longlong)(int)uVar8];
      puVar7 = DAT_14cb7c110;
      if (DAT_14cb7c110 == (undefined4 *)0x0) {
        puVar7 = &DAT_14cb7c108;
      }
      puVar7[(longlong)DAT_14cb7c118 - 1U & (longlong)(int)uVar8] = local_44;
    }
    else {
      DAT_14cb7c118 = iVar10;
      FUN_145a2b9f0();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145a2b87e FUN_145a2b87e body=86 status=ok
// SIG undefined FUN_145a2b87e(void)

undefined8 FUN_145a2b87e(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((DAT_14cb7c0d8 - DAT_14cb7c104 != 1) && (iVar5 = FUN_14011778a(), iVar5 != -1)) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    puVar1 = (undefined4 *)(DAT_14cb7c0d0 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_14883ea0a(*param_3);
    *param_3 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 145a2b8d4 FUN_145a2b8d4 body=283 status=ok
// SIG undefined FUN_145a2b8d4(void)

int * FUN_145a2b8d4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7c100;
  iVar3 = DAT_14cb7c0d8;
  if (DAT_14cb7c104 == 0) {
    iVar2 = DAT_14cb7c0d8 + 1;
    bVar7 = DAT_14cb7c0dc == DAT_14cb7c0d8;
    DAT_14cb7c0d8 = iVar2;
    if (bVar7) {
      FUN_1403951a8(&DAT_14cb7c0d0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7c0e0,1);
    puVar4 = DAT_14cb7c0f0;
    if (DAT_14cb7c0f0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7c0e0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7c100;
    DAT_14cb7c100 = *(int *)(DAT_14cb7c0d0 + 4 + lVar6 * 0x18);
    DAT_14cb7c104 = DAT_14cb7c104 + -1;
    if (DAT_14cb7c104 != 0) {
      *(undefined4 *)(DAT_14cb7c0d0 + (longlong)DAT_14cb7c100 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7c0e0;
  if (DAT_14cb7c0f0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7c0f0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7c0d0;
  return param_1;
}



// FUNCTION 145a2b9f0 FUN_145a2b9f0 body=511 status=ok
// SIG undefined FUN_145a2b9f0(void)

void FUN_145a2b9f0(void)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb7c110 != (undefined4 *)0x0) {
    FUN_1446efa72(&DAT_14cb7c110,0,0,4);
  }
  uVar2 = DAT_14cb7c118;
  uVar3 = local_60;
  if (DAT_14cb7c118 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7c108,0,DAT_14cb7c118,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14cb7c110;
        if (DAT_14cb7c110 == (undefined4 *)0x0) {
          puVar6 = &DAT_14cb7c108;
        }
        puVar6[DAT_14cb7c118 + 0x7fffffff & uVar7] = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb7c0e0;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb7c0f8 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb7c0d0;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar8 = local_60._4_4_;
      local_60 = uVar3;
      do {
        piVar1 = (int *)(*local_78 + (longlong)iVar8 * 0x18);
        if (piVar1[2] == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,piVar1[2]);
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cb7c118 - 1U;
        iVar4 = (int)uVar5;
        piVar1[5] = iVar4;
        puVar6 = DAT_14cb7c110;
        if (DAT_14cb7c110 == (undefined4 *)0x0) {
          puVar6 = &DAT_14cb7c108;
        }
        piVar1[4] = puVar6[(longlong)(int)DAT_14cb7c118 - 1U & uVar5];
        puVar6 = DAT_14cb7c110;
        if (DAT_14cb7c110 == (undefined4 *)0x0) {
          puVar6 = &DAT_14cb7c108;
        }
        puVar6[(longlong)iVar4 & (longlong)(int)DAT_14cb7c118 - 1U] = iVar8;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2bbf0 FUN_145a2bbf0 body=325 status=ok
// SIG undefined FUN_145a2bbf0(void)

void FUN_145a2bbf0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 145a2bd36 FUN_145a2bd36 body=376 status=ok
// SIG undefined FUN_145a2bd36(void)

void FUN_145a2bd36(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14cb7c108;
  if (DAT_14cb7c110 != (undefined4 *)0x0) {
    puVar5 = DAT_14cb7c110;
  }
  iVar4 = DAT_14cb7c118 + 3;
  if (-1 < DAT_14cb7c118) {
    iVar4 = DAT_14cb7c118;
  }
  if (DAT_14cb7c0d8 - DAT_14cb7c104 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb7c0e0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb7c0f8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb7c0f8;
    }
    local_78 = &DAT_14cb7c0d0;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb7c0e0)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x14 + (longlong)iVar3 * 0x18)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb7c0d0 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb7c0e0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb7c118) {
      lVar2 = 0;
      do {
        puVar5[lVar2] = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14cb7c118);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2beb0 FUN_145a2beb0 body=133 status=ok
// SIG undefined FUN_145a2beb0(void)

void FUN_145a2beb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x318) != *(int *)(param_1 + 0x344)) {
    FUN_14587c8aa(param_1 + 0x310);
    FUN_145da4014(param_1 + 0x310);
  }
  FUN_145a2bf36(param_1 + 0x300,lVar2 + 0x300);
  return;
}



// FUNCTION 145a2bf36 FUN_145a2bf36 body=93 status=ok
// SIG undefined FUN_145a2bf36(void)

undefined8 * FUN_145a2bf36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456e43db(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145a2bf94(param_1,iVar1);
      FUN_145a2c009(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145a2bf94 FUN_145a2bf94 body=117 status=ok
// SIG undefined FUN_145a2bf94(void)

void FUN_145a2bf94(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145a2c009 FUN_145a2c009 body=132 status=ok
// SIG undefined FUN_145a2c009(void)

void FUN_145a2c009(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145a2c08e FUN_145a2c08e body=40 status=ok
// SIG undefined FUN_145a2c08e(void)

undefined8 FUN_145a2c08e(undefined8 param_1,int param_2)

{
  FUN_145a2c0b6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2c0b6 FUN_145a2c0b6 body=106 status=ok
// SIG undefined FUN_145a2c0b6(void)

void FUN_145a2c0b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c5b80;
  FUN_145a2c169(param_1[0xd3],*(undefined4 *)(param_1 + 0xd4));
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2c120(param_1);
  return;
}



// FUNCTION 145a2c120 FUN_145a2c120 body=73 status=ok
// SIG undefined FUN_145a2c120(void)

void FUN_145a2c120(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a9d7bd0;
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2c169 FUN_145a2c169 body=45 status=ok
// SIG undefined FUN_145a2c169(void)

void FUN_145a2c169(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145a2c196 FUN_145a2c196 body=77 status=ok
// SIG undefined FUN_145a2c196(void)

undefined1 FUN_145a2c196(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1412c3568(param_2);
    if (lVar3 != 0) {
      cVar2 = FUN_148cc6424(lVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  uVar1 = FUN_145a2c1e4(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 145a2c1e4 FUN_145a2c1e4 body=55 status=ok
// SIG undefined FUN_145a2c1e4(void)

undefined1 FUN_145a2c1e4(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1414d055e(param_2);
  if ((lVar2 == 0) ||
     (((*(char *)(lVar2 + 0x18) == '\x01' && (*(char *)(lVar2 + 0x40) == '\x01')) &&
      (*(char *)(param_1 + 0x35) != '\x01')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x188);
  }
  return uVar1;
}



// FUNCTION 145a2c21b FUN_145a2c21b body=245 status=ok
// SIG undefined FUN_145a2c21b(void)

void FUN_145a2c21b(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    FUN_140902b70(*(longlong *)(param_1 + 0x1b0),local_28);
    FUN_140c3a90d(local_28,param_1 + 0x68);
    goto LAB_145a2c261;
  }
  lVar3 = FUN_14073fae1();
  lVar5 = *(longlong *)(lVar3 + 0x188);
  if (lVar5 == 0) {
    uVar4 = FUN_141030812();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x188) = lVar5;
  }
  if (((*(longlong *)(lVar3 + 400) != 0) || (lVar5 == 0)) || (*(longlong *)(lVar3 + 0x180) == 0))
  goto LAB_145a2c261;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_145a2c30d:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_145a2c30d;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x180));
  }
  *(undefined8 *)(lVar3 + 400) = uVar4;
LAB_145a2c261:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2c31c FUN_145a2c31c body=273 status=ok
// SIG undefined FUN_145a2c31c(void)

undefined8 * FUN_145a2c31c(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong *local_48;
  longlong local_40 [2];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412b486a();
  *param_1 = &PTR_FUN_14bcbe870;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x16f) = 0;
  FUN_140056680(local_40,L"_mat");
  local_48 = local_30;
  local_50 = local_40;
  FUN_141469cae(param_1 + 0x2e);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if ((local_30[0] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2c42e FUN_145a2c42e body=70 status=ok
// SIG undefined FUN_145a2c42e(void)

void FUN_145a2c42e(undefined8 param_1)

{
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14146a562(DAT_14c9a7d10,param_1);
  return;
}



// FUNCTION 145a2c474 FUN_145a2c474 body=53 status=ok
// SIG undefined FUN_145a2c474(void)

void FUN_145a2c474(longlong *param_1)

{
  FUN_145a2c4aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2c4aa FUN_145a2c4aa body=369 status=ok
// SIG undefined FUN_145a2c4aa(void)

void FUN_145a2c4aa(longlong *param_1)

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



// FUNCTION 145a2c628 FUN_145a2c628 body=41 status=ok
// SIG undefined FUN_145a2c628(void)

undefined8 * FUN_145a2c628(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1446f470e(0,L"root",1);
  return param_1;
}



// FUNCTION 145a2c65e FUN_145a2c65e body=42 status=ok
// SIG undefined FUN_145a2c65e(void)

void FUN_145a2c65e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14a162950;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2c694 FUN_145a2c694 body=42 status=ok
// SIG undefined FUN_145a2c694(void)

undefined8 * FUN_145a2c694(undefined8 *param_1)

{
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a166fb0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145a2c6ca FUN_145a2c6ca body=42 status=ok
// SIG undefined FUN_145a2c6ca(void)

undefined8 * FUN_145a2c6ca(undefined8 *param_1)

{
  FUN_145a47dc8();
  *param_1 = &PTR_FUN_14a167470;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145a2c700 FUN_145a2c700 body=42 status=ok
// SIG undefined FUN_145a2c700(void)

undefined8 * FUN_145a2c700(undefined8 *param_1)

{
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14a167970;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145a2c736 FUN_145a2c736 body=42 status=ok
// SIG undefined FUN_145a2c736(void)

void FUN_145a2c736(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14a1e9500;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2c768 FUN_145a2c768 body=98 status=ok
// SIG undefined FUN_145a2c768(void)

undefined8 * FUN_145a2c768(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ea0e34(param_1,uVar1);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_14a5253f0;
  param_1[5] = &PTR_FUN_14a525710;
  *(undefined4 *)(param_1 + 0x30) = 0x1010101;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145a2c7d6 FUN_145a2c7d6 body=42 status=ok
// SIG undefined FUN_145a2c7d6(void)

void FUN_145a2c7d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14a57e0d0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2c80c FUN_145a2c80c body=42 status=ok
// SIG undefined FUN_145a2c80c(void)

undefined8 * FUN_145a2c80c(undefined8 *param_1)

{
  FUN_1403c12a8();
  *param_1 = &PTR_FUN_14a655790;
  FUN_14039914a(param_1,1);
  return param_1;
}



// FUNCTION 145a2c836 FUN_145a2c836 body=40 status=ok
// SIG undefined FUN_145a2c836(void)

undefined8 FUN_145a2c836(undefined8 param_1,int param_2)

{
  FUN_145a2c85e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2c85e FUN_145a2c85e body=66 status=ok
// SIG undefined FUN_145a2c85e(void)

void FUN_145a2c85e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d0ea0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2c8a0 FUN_145a2c8a0 body=40 status=ok
// SIG undefined FUN_145a2c8a0(void)

undefined8 FUN_145a2c8a0(undefined8 param_1,int param_2)

{
  FUN_145a2c8c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2c8c8 FUN_145a2c8c8 body=66 status=ok
// SIG undefined FUN_145a2c8c8(void)

void FUN_145a2c8c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6f4d70;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2c922 FUN_145a2c922 body=29 status=ok
// SIG undefined FUN_145a2c922(void)

undefined8 FUN_145a2c922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2c940 FUN_145a2c940 body=39 status=ok
// SIG undefined FUN_145a2c940(void)

void FUN_145a2c940(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145a2c963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145a2c984 FUN_145a2c984 body=42 status=ok
// SIG undefined FUN_145a2c984(void)

void FUN_145a2c984(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ae37bf0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2c9ba FUN_145a2c9ba body=42 status=ok
// SIG undefined FUN_145a2c9ba(void)

void FUN_145a2c9ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ae3aed0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2c9f0 FUN_145a2c9f0 body=42 status=ok
// SIG undefined FUN_145a2c9f0(void)

void FUN_145a2c9f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ae59b50;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2ca26 FUN_145a2ca26 body=42 status=ok
// SIG undefined FUN_145a2ca26(void)

undefined8 * FUN_145a2ca26(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b211e40;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145a2ca5c FUN_145a2ca5c body=42 status=ok
// SIG undefined FUN_145a2ca5c(void)

undefined8 * FUN_145a2ca5c(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b217990;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145a2ca86 FUN_145a2ca86 body=38 status=ok
// SIG undefined FUN_145a2ca86(void)

undefined8 FUN_145a2ca86(undefined8 param_1,int param_2)

{
  FUN_145a2caac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2caac FUN_145a2caac body=170 status=ok
// SIG undefined FUN_145a2caac(void)

void FUN_145a2caac(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b3f5680;
  param_1[4] = &PTR_FUN_14b3f56a0;
  ppuVar3 = &PTR_FUN_14b3f60d8;
  param_1[8] = &PTR_FUN_14b3f60d8;
  lVar4 = param_1[9];
  if (lVar4 != 0) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      FUN_1400020a8();
      param_1[9] = lVar4;
    } while (lVar4 != 0);
    ppuVar3 = (undefined **)param_1[8];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  (*(code *)ppuVar3[1])(param_1 + 8,0);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a2cb52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a2cb56 FUN_145a2cb56 body=40 status=ok
// SIG undefined FUN_145a2cb56(void)

undefined8 FUN_145a2cb56(undefined8 param_1,int param_2)

{
  FUN_145a2cb7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2cb7e FUN_145a2cb7e body=220 status=ok
// SIG undefined FUN_145a2cb7e(void)

void FUN_145a2cb7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bf820;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x13);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 5);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2cc5a thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a2cc6c FUN_145a2cc6c body=42 status=ok
// SIG undefined FUN_145a2cc6c(void)

void FUN_145a2cc6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14b4daad0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2cca2 FUN_145a2cca2 body=42 status=ok
// SIG undefined FUN_145a2cca2(void)

void FUN_145a2cca2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14b528b00;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2cccc FUN_145a2cccc body=158 status=ok
// SIG undefined FUN_145a2cccc(void)

void FUN_145a2cccc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a2cd6c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2cd6c FUN_145a2cd6c body=53 status=ok
// SIG undefined FUN_145a2cd6c(void)

void FUN_145a2cd6c(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  longlong lStack_50;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  bVar1 = *(byte *)(param_1 + 0x98);
  if (((bVar1 & 0x10) == 0) || (((bVar1 & 0x20) == 0) != (bool)param_2)) {
    return;
  }
  *(byte *)(param_1 + 0x98) = bVar1 & 0xdf | param_2 << 5;
  if (param_2 != '\0') {
    FUN_141306cb2();
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_1 + 0x98);
  if ((bVar1 & 0x20) != 0) goto LAB_14592b3fe;
  if ((bVar1 & 4) == 0) {
    FUN_140609408(param_1);
    bVar1 = *(byte *)(param_1 + 0x98);
  }
  if ((bVar1 & 0x20) == 0) {
    *(byte *)(param_1 + 0x98) = bVar1 | 0x20;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),0);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03')) {
    lVar7 = param_1 + 0xa0;
    cVar2 = FUN_1403ae288(lVar7);
    if (cVar2 != '\0') {
      lVar4 = FUN_14008e0ae(lVar7);
      pcStack_48 = FUN_148f152f8;
      uStack_40 = 0;
      FUN_14592b698(lVar4 + 0x198,&uStack_38,param_1,&pcStack_48);
      *(undefined8 *)(param_1 + 0xd0) = uStack_38;
      lVar4 = FUN_14008e0ae(lVar7);
      pcStack_48 = FUN_148f15332;
      uStack_40 = 0;
      FUN_14592b698(lVar4 + 0x240,&uStack_38,param_1,&pcStack_48);
      *(undefined8 *)(param_1 + 0xd8) = uStack_38;
      lVar4 = FUN_14008e0ae(lVar7);
      pcStack_48 = FUN_148f1536c;
      uStack_40 = 0;
      FUN_14592b698(lVar4 + 0x168,&uStack_38,param_1,&pcStack_48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_38;
      lVar4 = FUN_14008e0ae(lVar7);
      pcStack_48 = (code *)&LAB_148f153a6;
      uStack_40 = 0;
      FUN_14592b958(lVar4 + 0x138,&uStack_38,param_1,&pcStack_48);
      *(undefined8 *)(param_1 + 0xe8) = uStack_38;
      uVar5 = FUN_14008e0ae(lVar7);
      uVar3 = FUN_141362ac2(uVar5,0);
      *(undefined1 *)(param_1 + 0x99) = uVar3;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),1);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    if (lVar7 != 0) {
      uVar5 = FUN_144a7b040();
      plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (lVar7 != 0) {
          if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
            if (param_1 != 0) goto LAB_14592b5b4;
            lStack_50 = 0;
          }
          else {
            FUN_1456cec3c(param_1);
LAB_14592b5b4:
            lStack_50 = param_1 + 0x38;
          }
          lStack_58 = param_1;
          FUN_14592b5f4(lVar7);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x99) != '\x01') {
    FUN_14592b638(param_1);
  }
LAB_14592b3fe:
  if ((uStack_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2cdae FUN_145a2cdae body=42 status=ok
// SIG undefined FUN_145a2cdae(void)

void FUN_145a2cdae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ba3c470;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2cde4 FUN_145a2cde4 body=42 status=ok
// SIG undefined FUN_145a2cde4(void)

void FUN_145a2cde4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ba40c20;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2ce1a FUN_145a2ce1a body=42 status=ok
// SIG undefined FUN_145a2ce1a(void)

void FUN_145a2ce1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ba4c190;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2ce50 FUN_145a2ce50 body=42 status=ok
// SIG undefined FUN_145a2ce50(void)

void FUN_145a2ce50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14ba78380;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2ce7a FUN_145a2ce7a body=30 status=ok
// SIG undefined FUN_145a2ce7a(void)

void FUN_145a2ce7a(longlong param_1)

{
  FUN_14146d75a();
  *(undefined8 *)(param_1 + 0x438) = 0;
  return;
}



// FUNCTION 145a2cea0 FUN_145a2cea0 body=151 status=ok
// SIG undefined FUN_145a2cea0(void)

undefined8 * FUN_145a2cea0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14be8e3b0;
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
  FUN_144a78564();
  lVar1 = 0x128;
  do {
    *(undefined1 *)((longlong)param_1 + lVar1 + -0x60) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x58) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x50) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -0x48) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x40) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    ((undefined8 *)((longlong)param_1 + lVar1))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x10) = 0;
    lVar1 = lVar1 + 0xa8;
  } while (lVar1 != 0x278);
  param_1[0x3d] = 0;
  return param_1;
}



// FUNCTION 145a2cf44 FUN_145a2cf44 body=42 status=ok
// SIG undefined FUN_145a2cf44(void)

void FUN_145a2cf44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14bf03390;
  puVar1[1] = 0;
  return;
}



// FUNCTION 145a2cf6e FUN_145a2cf6e body=585 status=ok
// SIG undefined FUN_145a2cf6e(void)

int * FUN_145a2cf6e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_145a2d1b8(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_145a2cfc6;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d7040;
  plVar8[2] = (longlong)&PTR_FUN_14a4d7058;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_147669596(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_14766961a;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_145a2d13d;
    }
  }
  else {
LAB_145a2d13d:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_145a2cfc6:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a2d1b8 FUN_145a2d1b8 body=170 status=ok
// SIG undefined FUN_145a2d1b8(void)

undefined8 FUN_145a2d1b8(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 145a2d262 FUN_145a2d262 body=99 status=ok
// SIG undefined FUN_145a2d262(void)

void FUN_145a2d262(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a2d2c6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b582900;
  puVar1[5] = &PTR_FUN_14b582e00;
  puVar1[0x2d] = &PTR_FUN_14b582e40;
  puVar1[0x86] = &PTR_FUN_14b582e70;
  puVar1[0x8e] = &PTR_FUN_14b582e90;
  puVar1[0xa7] = 0;
  return;
}



// FUNCTION 145a2d2c6 FUN_145a2d2c6 body=328 status=ok
// SIG undefined FUN_145a2d2c6(void)

undefined8 * FUN_145a2d2c6(undefined8 *param_1)

{
  FUN_145a2d40e();
  param_1[0x86] = &PTR_FUN_14b56e120;
  FUN_141067f4a(param_1 + 0x87);
  param_1[0x87] = &PTR_FUN_14b56e140;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  *param_1 = &PTR_FUN_14b56d5a0;
  param_1[5] = &PTR_FUN_14b56daa0;
  param_1[0x2d] = &PTR_FUN_14b56dae0;
  param_1[0x86] = &PTR_FUN_14b56db10;
  param_1[0x8e] = &PTR_FUN_14b56db30;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined2 *)(param_1 + 0x98) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4c6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c2) = 0x1010101;
  param_1[0x99] = 0x100000000;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 1;
  param_1[0x9e] = 0x100000000;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x504) = 0x100;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  return param_1;
}



// FUNCTION 145a2d40e FUN_145a2d40e body=329 status=ok
// SIG undefined FUN_145a2d40e(void)

undefined8 * FUN_145a2d40e(undefined8 *param_1)

{
  FUN_140e2f36c();
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *param_1 = &PTR_FUN_14ae41e10;
  param_1[5] = &PTR_FUN_14ae42300;
  param_1[0x2d] = &PTR_FUN_14ae42340;
  *(undefined4 *)(param_1 + 0x5f) = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fe) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x349) = 0;
  *(undefined8 *)((longlong)param_1 + 0x351) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0x404;
  *(undefined1 *)((longlong)param_1 + 0x372) = 1;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0xffffffff;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x73) = 2;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 2;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x1000400;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x84] = 0x3e4ccccd3e4ccccd;
  *(undefined2 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42a) = 0;
  return param_1;
}



// FUNCTION 145a2d562 FUN_145a2d562 body=119 status=ok
// SIG undefined FUN_145a2d562(void)

void FUN_145a2d562(longlong param_1)

{
  FUN_140368b56(param_1 + 0xe0);
  FUN_141354349(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_145a2d5da(param_1 + 0x50);
  FUN_145a2d5da(param_1 + 8);
  return;
}



// FUNCTION 145a2d5da FUN_145a2d5da body=71 status=ok
// SIG undefined FUN_145a2d5da(void)

void FUN_145a2d5da(longlong param_1)

{
  FUN_141286eab(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2d622 FUN_145a2d622 body=132 status=ok
// SIG undefined FUN_145a2d622(void)

void FUN_145a2d622(longlong param_1,int param_2)

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



// FUNCTION 145a2d6a8 FUN_145a2d6a8 body=302 status=ok
// SIG undefined FUN_145a2d6a8(void)

undefined4 * FUN_145a2d6a8(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a2d888(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_145a2d7d8(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb0adb0 - DAT_14cb0addc;
    if (uVar3 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb0adf0)) {
      param_2 = DAT_14cb0adf0 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb0ade8;
      if (DAT_14cb0ade8 == (undefined *)0x0) {
        puVar4 = &DAT_14cb0ade0;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb0adf0 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb0ade8;
      if (DAT_14cb0ade8 == (undefined *)0x0) {
        puVar4 = &DAT_14cb0ade0;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb0adf0 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb0adf0 = iVar6;
      FUN_14146da40();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2d7d8 FUN_145a2d7d8 body=176 status=ok
// SIG undefined FUN_145a2d7d8(void)

undefined8 FUN_145a2d7d8(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14cb0adb0 - DAT_14cb0addc != 1) && (DAT_14cb0adb0 != DAT_14cb0addc)) {
    puVar6 = &DAT_14cb0ade0;
    if (DAT_14cb0ade8 != (undefined *)0x0) {
      puVar6 = DAT_14cb0ade8;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb0adf0 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cb0ada8 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(DAT_14cb0ada8 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147d6c4aa(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145a2d888 FUN_145a2d888 body=282 status=ok
// SIG undefined FUN_145a2d888(void)

int * FUN_145a2d888(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb0add8;
  iVar3 = DAT_14cb0adb0;
  if (DAT_14cb0addc == 0) {
    iVar2 = DAT_14cb0adb0 + 1;
    bVar7 = DAT_14cb0adb4 == DAT_14cb0adb0;
    DAT_14cb0adb0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb0ada8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb0adb8,1);
    puVar4 = DAT_14cb0adc8;
    if (DAT_14cb0adc8 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb0adb8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb0add8;
    DAT_14cb0add8 = *(int *)(DAT_14cb0ada8 + 4 + lVar6 * 0x20);
    DAT_14cb0addc = DAT_14cb0addc + -1;
    if (DAT_14cb0addc != 0) {
      *(undefined4 *)(DAT_14cb0ada8 + (longlong)DAT_14cb0add8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb0adb8;
  if (DAT_14cb0adc8 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb0adc8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb0ada8;
  return param_1;
}



// FUNCTION 145a2d9a2 FUN_145a2d9a2 body=151 status=ok
// SIG undefined FUN_145a2d9a2(void)

ulonglong FUN_145a2d9a2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a2da1d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a2da1d;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      (**(code **)(param_1 + 0x28))(lVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 145a2da3a FUN_145a2da3a body=73 status=ok
// SIG undefined FUN_145a2da3a(void)

void FUN_145a2da3a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_140d812ce(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2da84 FUN_145a2da84 body=143 status=ok
// SIG undefined FUN_145a2da84(void)

void FUN_145a2da84(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a2db14 FUN_145a2db14 body=9 status=ok
// SIG undefined FUN_145a2db14(void)

void FUN_145a2db14(longlong param_1)

{
  FUN_145a2db1e(param_1 + 0x10);
  return;
}



// FUNCTION 145a2db1e FUN_145a2db1e body=124 status=ok
// SIG undefined FUN_145a2db1e(void)

void FUN_145a2db1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f2930;
  param_1[4] = &PTR_FUN_14b4f2958;
  FUN_14127b1cd(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x26);
  FUN_14124f074(param_1 + 10);
  FUN_14127b1cd(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1411ebb9a(param_1);
  return;
}



// FUNCTION 145a2db9a FUN_145a2db9a body=562 status=ok
// SIG undefined FUN_145a2db9a(void)

void FUN_145a2db9a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9894(param_1 + 0x170);
  FUN_145a2ddf9(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_145a2ddf9(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_145a2de21(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145a2de52(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0xe8;
  do {
    FUN_145a2ddcc(*(undefined8 *)(param_1 + -8 + lVar1),*(undefined4 *)(param_1 + lVar1));
    if (*(longlong *)(param_1 + -8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063ddc8(param_1);
  return;
}



// FUNCTION 145a2ddcc FUN_145a2ddcc body=45 status=ok
// SIG undefined FUN_145a2ddcc(void)

void FUN_145a2ddcc(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 145a2ddf9 FUN_145a2ddf9 body=40 status=ok
// SIG undefined FUN_145a2ddf9(void)

void FUN_145a2ddf9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14583ec6c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145a2de21 FUN_145a2de21 body=49 status=ok
// SIG undefined FUN_145a2de21(void)

void FUN_145a2de21(longlong param_1,int param_2)

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



// FUNCTION 145a2de52 FUN_145a2de52 body=49 status=ok
// SIG undefined FUN_145a2de52(void)

void FUN_145a2de52(longlong param_1,int param_2)

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



// FUNCTION 145a2de84 FUN_145a2de84 body=40 status=ok
// SIG undefined FUN_145a2de84(void)

undefined8 FUN_145a2de84(undefined8 param_1,int param_2)

{
  FUN_145a2deac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2deac FUN_145a2deac body=90 status=ok
// SIG undefined FUN_145a2deac(void)

void FUN_145a2deac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b000c40;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2df06(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2df06 FUN_145a2df06 body=53 status=ok
// SIG undefined FUN_145a2df06(void)

void FUN_145a2df06(longlong *param_1)

{
  FUN_14146e616();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2df3c FUN_145a2df3c body=40 status=ok
// SIG undefined FUN_145a2df3c(void)

undefined8 FUN_145a2df3c(undefined8 param_1,int param_2)

{
  FUN_145a2df64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2df64 FUN_145a2df64 body=96 status=ok
// SIG undefined FUN_145a2df64(void)

void FUN_145a2df64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0261e0;
  FUN_145a2dfc4(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140b42ff8(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a2dfc4 FUN_145a2dfc4 body=77 status=ok
// SIG undefined FUN_145a2dfc4(void)

void FUN_145a2dfc4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 145a2e01a FUN_145a2e01a body=285 status=ok
// SIG undefined FUN_145a2e01a(void)

undefined8 * FUN_145a2e01a(undefined8 *param_1)

{
  FUN_1458eee4a();
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
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x179) = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0x200000000;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  return param_1;
}



// FUNCTION 145a2e138 FUN_145a2e138 body=106 status=ok
// SIG undefined FUN_145a2e138(void)

longlong FUN_145a2e138(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a2e204(0x58,L"app_session");
  lVar2 = FUN_145a2e308(0x58);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(lVar1 + 8) = lVar2;
  FUN_145a2e1a4(lVar1,1);
  FUN_145a2e1a2(lVar1,
                ".\\Runtime/Gearbox/GbxCore/Private/Analytics/GbxAnalyticsCategory_AppSession.cpp",
                0x1e);
  return lVar1;
}



// FUNCTION 145a2e1a2 FUN_145a2e1a2 body=1 status=ok
// SIG undefined FUN_145a2e1a2(void)

void FUN_145a2e1a2(void)

{
  return;
}



// FUNCTION 145a2e1a4 FUN_145a2e1a4 body=95 status=ok
// SIG undefined FUN_145a2e1a4(void)

void FUN_145a2e1a4(undefined8 *param_1,char param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == '\0') || (param_1[7] == 0)) {
    local_20 = 0;
  }
  else {
    FUN_1446f470e(&local_20,param_1[7],1);
  }
  *param_1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2e204 FUN_145a2e204 body=120 status=ok
// SIG undefined FUN_145a2e204(void)

undefined8 * FUN_145a2e204(undefined2 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 1;
  puVar2[7] = param_2;
  *(undefined2 *)(puVar2 + 3) = param_1;
  FUN_14146e7de();
  iVar1 = DAT_14c9a3ef8;
  lVar3 = (longlong)(int)DAT_14c9a3ef8;
  DAT_14c9a3ef8 = DAT_14c9a3ef8 + 1;
  if (DAT_14c9a3efc < DAT_14c9a3ef8) {
    FUN_145a2e27c(iVar1);
  }
  *(undefined8 **)(DAT_14c9a3ef0 + lVar3 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 145a2e27c FUN_145a2e27c body=140 status=ok
// SIG undefined FUN_145a2e27c(void)

void FUN_145a2e27c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9a3ef8;
  if (param_1 <= (int)DAT_14c9a3ef8) {
    if (DAT_14c9a3efc == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a3ef8) {
        uVar2 = DAT_14c9a3ef8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c9a3ef8 + ((ulonglong)((longlong)(int)DAT_14c9a3ef8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14c9a3efc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a3ef0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a2e308 FUN_145a2e308 body=286 status=ok
// SIG undefined FUN_145a2e308(void)

ulonglong FUN_145a2e308(ulonglong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_145a2e440();
  uVar4 = 0;
  if (cVar1 != '\0') {
    cVar1 = 'a';
    lVar3 = 1;
    do {
      uVar4 = (ulonglong)
              ((uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_14c75d150 +
                       (ulonglong)
                       (byte)((byte)uVar4 ^ (cVar1 + (0x19 < (int)cVar1 - 0x61U) * ' ') - 0x20U) * 4
                       ));
      cVar1 = "app_language"[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xd);
    uVar2 = FUN_144a78877(0xf7a830d8,uVar4);
    uVar4 = FUN_145a2e660(uVar2);
    if (uVar4 == 0) {
      uVar4 = FUN_145a2e428(uVar2);
      if ((param_1 & 0x40) == 0) {
        FUN_1402160b8(&local_28);
        uVar5 = FUN_145e0b36c();
        FUN_145e0b410(uVar4,&DAT_14a17510b,uVar5);
      }
      if ((param_1 & 0x20) == 0) {
        local_28 = 0;
        FUN_145a2ea34(uVar4,&DAT_14a18341e);
      }
      FUN_145a2e9da(uVar4);
      FUN_145a2e46c(uVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 145a2e428 FUN_145a2e428 body=24 status=ok
// SIG undefined FUN_145a2e428(void)

void FUN_145a2e428(undefined4 param_1)

{
  FUN_14146e7de();
  FUN_145a2e498(param_1);
  return;
}



// FUNCTION 145a2e440 FUN_145a2e440 body=43 status=ok
// SIG undefined FUN_145a2e440(void)

void FUN_145a2e440(uint param_1)

{
  FUN_14146e7de();
  FUN_14146e8a6(&DAT_14c9a3ef0,2,(param_1 & 0x10) >> 4);
  return;
}



// FUNCTION 145a2e46c FUN_145a2e46c body=44 status=ok
// SIG undefined FUN_145a2e46c(void)

void FUN_145a2e46c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2a8))();
  (**(code **)(*param_1 + 0x358))(param_1);
  FUN_140010366(param_1,1);
  return;
}



// FUNCTION 145a2e498 FUN_145a2e498 body=233 status=ok
// SIG undefined FUN_145a2e498(void)

longlong FUN_145a2e498(undefined4 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_40;
  undefined4 local_34;
  undefined4 *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_58 = 0;
  lVar3 = 0;
  local_34 = param_1;
  lVar2 = FUN_145a2e582(DAT_14c951640,CONCAT44((DAT_14c9a3f08 - DAT_14c9a3f34) + 1,DAT_14c9a3ee8),
                        0x40,0);
  uVar1 = *(uint *)(lVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  FUN_1447f71cc(lVar3,0x40000000);
  local_40 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  local_30 = &local_34;
  local_28 = &local_40;
  FUN_145a2e6e2(local_1c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2e582 FUN_145a2e582 body=221 status=ok
// SIG undefined FUN_145a2e582(void)

undefined8
FUN_145a2e582(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_1446f4bba();
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



// FUNCTION 145a2e660 FUN_145a2e660 body=129 status=ok
// SIG undefined FUN_145a2e660(void)

undefined8 FUN_145a2e660(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_14146e7de();
  if (DAT_14c9a3f08 != DAT_14c9a3f34) {
    puVar2 = &DAT_14c9a3f38;
    if (DAT_14c9a3f40 != (undefined *)0x0) {
      puVar2 = DAT_14c9a3f40;
    }
    uVar3 = *(uint *)(puVar2 + (ulonglong)(DAT_14c9a3f48 - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar1 = (uint *)(DAT_14c9a3f00 + (longlong)(int)uVar3 * 0x18), *puVar1 != param_1) {
        uVar3 = puVar1[4];
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
        return *(undefined8 *)(puVar1 + 2);
      }
    }
  }
  return 0;
}



// FUNCTION 145a2e6e2 FUN_145a2e6e2 body=333 status=ok
// SIG undefined FUN_145a2e6e2(void)

undefined4 * FUN_145a2e6e2(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a2e8be(local_40);
  plVar1 = (longlong *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  lVar2 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar7 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_145a2e830(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c9a3f08 - DAT_14c9a3f34;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c9a3f48)) {
      uVar7 = DAT_14c9a3f48 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14c9a3f40;
      if (DAT_14c9a3f40 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a3f38;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14c9a3f48 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14c9a3f40;
      if (DAT_14c9a3f40 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a3f38;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c9a3f48 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14c9a3f48 = iVar9;
      FUN_14146e92c();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2e830 FUN_145a2e830 body=142 status=ok
// SIG undefined FUN_145a2e830(void)

undefined8 FUN_145a2e830(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a3f08 - DAT_14c9a3f34 != 1) && (DAT_14c9a3f08 != DAT_14c9a3f34)) {
    puVar6 = &DAT_14c9a3f38;
    if (DAT_14c9a3f40 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3f40;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a3f48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(DAT_14c9a3f00 + (longlong)iVar5 * 0x18);
        if (*piVar1 == *param_2) {
          iVar2 = param_2[1];
          iVar3 = param_2[2];
          iVar4 = param_2[3];
          *piVar1 = *param_2;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_1470b53f8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145a2e8be FUN_145a2e8be body=283 status=ok
// SIG undefined FUN_145a2e8be(void)

int * FUN_145a2e8be(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a3f30;
  iVar3 = DAT_14c9a3f08;
  if (DAT_14c9a3f34 == 0) {
    iVar2 = DAT_14c9a3f08 + 1;
    bVar7 = DAT_14c9a3f0c == DAT_14c9a3f08;
    DAT_14c9a3f08 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a3f00,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a3f10,1);
    puVar4 = DAT_14c9a3f20;
    if (DAT_14c9a3f20 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a3f10;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a3f30;
    DAT_14c9a3f30 = *(int *)(DAT_14c9a3f00 + 4 + lVar6 * 0x18);
    DAT_14c9a3f34 = DAT_14c9a3f34 + -1;
    if (DAT_14c9a3f34 != 0) {
      *(undefined4 *)(DAT_14c9a3f00 + (longlong)DAT_14c9a3f30 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a3f10;
  if (DAT_14c9a3f20 != (undefined *)0x0) {
    puVar4 = DAT_14c9a3f20;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a3f00;
  return param_1;
}



// FUNCTION 145a2e9da FUN_145a2e9da body=89 status=ok
// SIG undefined FUN_145a2e9da(void)

void FUN_145a2e9da(void)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_145e0b2a2(0,"app_language",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2ea34 FUN_145a2ea34 body=201 status=ok
// SIG undefined FUN_145a2ea34(void)

void FUN_145a2ea34(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  uVar2 = FUN_144a63fc8();
  FUN_14145874c(puVar1,0,uVar2);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71530;
  FUN_1446ddc76(local_28,param_2,1);
  local_30 = (ulonglong)param_1 | 1;
  if ((((ulonglong)param_1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_1409e13f4(puVar1,&local_30,local_28,0);
  (**(code **)(*param_1 + 0x2a0))(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2eb0a FUN_145a2eb0a body=280 status=ok
// SIG undefined FUN_145a2eb0a(void)

undefined8 * FUN_145a2eb0a(undefined8 *param_1)

{
  FUN_14146eb06();
  FUN_14118b488(param_1 + 7);
  *param_1 = &PTR_FUN_14ac02b20;
  param_1[5] = &PTR_FUN_14ac02dd0;
  param_1[7] = &PTR_FUN_14ac02e20;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0x3f999999a0000000;
  param_1[0x29] = 0x3f999999a0000000;
  param_1[0x2a] = 0x3f847ae140000000;
  param_1[0x25] = 0x3c23d70a00000000;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0x403e000000000000;
  return param_1;
}



// FUNCTION 145a2ec22 FUN_145a2ec22 body=221 status=ok
// SIG undefined FUN_145a2ec22(void)

void FUN_145a2ec22(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_145a2ed38();
  lVar2 = param_3[1];
  if (lVar2 == 0) {
    FUN_145c272be();
    lVar2 = FUN_14477b664();
    param_3[1] = lVar2;
  }
  plVar5 = (longlong *)param_3[2];
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if ((lVar2 == 0) || (plVar6 = (longlong *)0x0, *param_3 == 0)) goto LAB_145a2ec7f;
    plVar5 = *(longlong **)(lVar2 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x108))();
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar4,param_3);
        param_3[2] = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_145a2ec46;
        goto LAB_145a2ecf1;
      }
    }
    param_3[2] = 0;
  }
  else {
LAB_145a2ec46:
    lVar2 = (**(code **)(*plVar5 + 8))();
    lVar3 = FUN_145a2ed00();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar6 = plVar5;
      }
      goto LAB_145a2ec7f;
    }
  }
LAB_145a2ecf1:
  plVar6 = (longlong *)0x0;
LAB_145a2ec7f:
  *(longlong **)(param_1 + 0x530) = plVar6;
  return;
}



// FUNCTION 145a2ed00 FUN_145a2ed00 body=55 status=ok
// SIG undefined FUN_145a2ed00(void)

void FUN_145a2ed00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66640 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66640 = FUN_140002ddd(FUN_14650ee64,uVar1,L"GbxStandInViewerDef");
  }
  return;
}



// FUNCTION 145a2ed38 FUN_145a2ed38 body=454 status=ok
// SIG undefined FUN_145a2ed38(void)

void FUN_145a2ed38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x408) = param_2;
  FUN_145a2f036(param_1 + 0x3f0,param_3);
  FUN_14485c47a(param_1 + 1000,param_4);
  FUN_1446f470e(local_40,L"GbxSceneViewer",1);
  FUN_145a2f08a(&local_38,local_40,param_1);
  *(ulonglong *)(param_1 + 0x3c8) = CONCAT44(uStack_34,local_38);
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 1000);
  if (plVar2 == (longlong *)0x0) {
LAB_145a2ee50:
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_145a2ef00();
    lVar4 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (lVar4 == 0) goto LAB_145a2ee50;
    uVar3 = FUN_145a2ef00();
    lVar5 = FUN_144718840(lVar4,uVar3);
    if (lVar4 == lVar5) goto LAB_145a2ee50;
  }
  FUN_145a2efe6(&local_38,lVar5);
  *(undefined4 *)(param_1 + 0x3d8) = local_38;
  *(undefined4 *)(param_1 + 0x3dc) = uStack_34;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_30;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_2c;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x3d8);
    if (cVar1 != '\0') goto LAB_145a2ee2f;
  }
  _Dst = (void *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0x98);
  *(undefined4 *)((longlong)_Dst + 0x34) = 2;
  *(undefined8 *)((longlong)_Dst + 0x38) = 0;
  *(undefined8 *)((longlong)_Dst + 0x40) = 0;
  *(undefined4 *)((longlong)_Dst + 0x48) = 2;
  uVar3 = DAT_14c967818;
  *(undefined8 *)((longlong)_Dst + 0x50) = DAT_14c967818;
  *(undefined8 *)((longlong)_Dst + 0x58) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x60) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0x20000000200;
  *(undefined1 *)((longlong)_Dst + 0x90) = 10;
  *(undefined8 *)((longlong)_Dst + 0x98) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  *(void **)(param_1 + 0x3d0) = _Dst;
  if (lVar4 != 0) {
    FUN_146562aac(lVar4);
    FUN_1400020a8(lVar4);
  }
LAB_145a2ee2f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2ef00 FUN_145a2ef00 body=228 status=ok
// SIG undefined FUN_145a2ef00(void)

longlong FUN_145a2ef00(void)

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
  if (DAT_14cb63030 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486ed41f;
    local_40 = FUN_1464fbc5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSceneViewerProvider",&DAT_14cb63030,&DAT_1486ed41e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2efe6 FUN_145a2efe6 body=80 status=ok
// SIG undefined FUN_145a2efe6(void)

undefined8 * FUN_145a2efe6(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_145a2f00b;
  }
  lVar2 = 0;
LAB_145a2f00b:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 145a2f036 FUN_145a2f036 body=84 status=ok
// SIG undefined FUN_145a2f036(void)

longlong * FUN_145a2f036(longlong *param_1,longlong *param_2)

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



// FUNCTION 145a2f08a FUN_145a2f08a body=277 status=ok
// SIG undefined FUN_145a2f08a(void)

undefined8 FUN_145a2f08a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400021e4(param_2,local_a8);
  FUN_14146ec20(local_68,local_a8);
  FUN_145a2f1a0(local_48,param_3);
  local_90 = &local_28;
  local_98 = local_68;
  FUN_1407adb6e(&local_88);
  FUN_140230a2e(&local_78,L"{0}_{1}",&local_88);
  iVar1 = local_70 + -1;
  if (local_70 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_78,1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar2 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_78 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2f1a0 FUN_145a2f1a0 body=21 status=ok
// SIG undefined FUN_145a2f1a0(void)

undefined4 * FUN_145a2f1a0(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 145a2f1b6 FUN_145a2f1b6 body=24 status=ok
// SIG undefined FUN_145a2f1b6(void)

void FUN_145a2f1b6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a2f1ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a2f1ce FUN_145a2f1ce body=75 status=ok
// SIG undefined FUN_145a2f1ce(void)

undefined8 * FUN_145a2f1ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1c8380;
  FUN_145a2f21a(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a2f21a FUN_145a2f21a body=61 status=ok
// SIG undefined FUN_145a2f21a(void)

void FUN_145a2f21a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_14053e149(lVar1,*(undefined4 *)(param_1 + 0xc08));
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a2f258 FUN_145a2f258 body=265 status=ok
// SIG undefined FUN_145a2f258(void)

undefined * FUN_145a2f258(void)

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
              0x110) < DAT_14c9f2148) {
    FUN_144b3d300(&DAT_14c9f2148);
    if (DAT_14c9f2148 == -1) {
      FUN_14146ec66(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenCardTracingParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x24;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f20c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263d3);
      _Init_thread_footer(&DAT_14c9f2148);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f20c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2f362 FUN_145a2f362 body=138 status=ok
// SIG undefined FUN_145a2f362(void)

code * FUN_145a2f362(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceCacheFeedbackBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e6720;
}



// FUNCTION 145a2f3ec FUN_145a2f3ec body=138 status=ok
// SIG undefined FUN_145a2f3ec(void)

code * FUN_145a2f3ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvFullSkylightLeakingDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e69d2;
}



// FUNCTION 145a2f476 FUN_145a2f476 body=138 status=ok
// SIG undefined FUN_145a2f476(void)

code * FUN_145a2f476(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462da554;
}



// FUNCTION 145a2f500 FUN_145a2f500 body=329 status=ok
// SIG undefined FUN_145a2f500(void)

longlong * FUN_145a2f500(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = (longlong *)FUN_14001cc68(0x138,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b432cb0;
  plVar1 = plVar8 + 2;
  FUN_140724c88(plVar1,param_1,param_3);
  plVar8[2] = (longlong)&PTR_FUN_14b431470;
  plVar8[0x1c] = param_1;
  plVar8[0x1d] = 0;
  *(undefined4 *)(plVar8 + 0x1e) = 0;
  lVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  plVar8[0x1f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  plVar8[0x20] = lVar3;
  plVar8[0x21] = DAT_14c8464f0;
  plVar8[0x24] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(plVar8 + 0x22) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)plVar8 + 0x114) = uVar4;
  *(undefined4 *)(plVar8 + 0x23) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x11c) = uVar6;
  *(undefined1 *)(plVar8 + 0x25) = 0;
  *(undefined8 *)((longlong)plVar8 + 300) = 0;
  *(undefined4 *)((longlong)plVar8 + 0x134) = 0;
  local_40 = plVar1;
  local_38 = plVar8;
  FUN_145a2f64c(&local_40,plVar1);
  plVar7 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2f64c FUN_145a2f64c body=162 status=ok
// SIG undefined FUN_145a2f64c(void)

void FUN_145a2f64c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145a2f68b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145a2f68b;
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
LAB_145a2f68b:
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
                    /* WARNING: Could not recover jumptable at 0x000145a2f6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a2f6ee FUN_145a2f6ee body=116 status=ok
// SIG undefined FUN_145a2f6ee(void)

void FUN_145a2f6ee(longlong *param_1,int param_2)

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



// FUNCTION 145a2f768 FUN_145a2f768 body=221 status=ok
// SIG undefined FUN_145a2f768(void)

longlong FUN_145a2f768(void)

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
  if (DAT_14caf2960 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be51bb;
    local_40 = FUN_1463eda98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"RPCDoSDetectionConfig",&DAT_14caf2960,&DAT_147be51ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2960;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2f846 FUN_145a2f846 body=57 status=ok
// SIG undefined FUN_145a2f846(void)

void FUN_145a2f846(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a2f880(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7625e0;
  puVar1[5] = &PTR_FUN_14b7629c0;
  puVar1[7] = &PTR_FUN_14b762ba0;
  return;
}



// FUNCTION 145a2f880 FUN_145a2f880 body=85 status=ok
// SIG undefined FUN_145a2f880(void)

undefined8 * FUN_145a2f880(undefined8 *param_1)

{
  FUN_145a2f8d6();
  *param_1 = &PTR_FUN_14b174960;
  param_1[5] = &PTR_FUN_14b174d40;
  param_1[7] = &PTR_FUN_14b174f20;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 2;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  return param_1;
}



// FUNCTION 145a2f8d6 FUN_145a2f8d6 body=108 status=ok
// SIG undefined FUN_145a2f8d6(void)

undefined8 * FUN_145a2f8d6(undefined8 *param_1)

{
  FUN_145a2f942();
  *param_1 = &PTR_FUN_14ae4ce80;
  param_1[5] = &PTR_FUN_14ae4d260;
  param_1[7] = &PTR_FUN_14ae4d440;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  return param_1;
}



// FUNCTION 145a2f942 FUN_145a2f942 body=2919 status=ok
// SIG undefined FUN_145a2f942(void)

undefined8 * FUN_145a2f942(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  _RTL_CRITICAL_SECTION local_b8;
  undefined8 *local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145a304aa();
  *param_1 = &PTR_FUN_14a906bc0;
  param_1[5] = &PTR_FUN_14a906f70;
  param_1[7] = &PTR_FUN_14a907150;
  plVar1 = param_1 + 0xb;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000;
  FUN_1401b5a8c(param_1 + 0x17,0);
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
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
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 2;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x62) = 2;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x200000000;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 2;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 2;
  *(undefined4 *)((longlong)param_1 + 0x3c9) = 0x1000100;
  *(undefined1 *)((longlong)param_1 + 0x3cd) = 0;
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) & 0xfe;
  *(undefined4 *)(param_1 + 0x16) = 3;
  local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_b8.LockCount = 0;
  local_b8.RecursionCount = 0;
  FUN_14146f9bc(plVar1);
  plVar5 = (longlong *)param_1[0xb];
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_14146f8ae(plVar5,iVar4);
  }
  puVar2 = (undefined8 *)(*plVar5 + (longlong)iVar4 * 0x10);
  *puVar2 = &DAT_3f8000003f800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x18);
  *(uint *)(lVar6 + 0x18) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x1c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x10),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x18);
  *(uint *)(lVar6 + 0x18) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x1c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x10),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f800000;
  puVar2[1] = 0x3f00000000000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x28);
  *(uint *)(lVar6 + 0x28) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x2c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x20),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f8000003f000000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x28);
  *(uint *)(lVar6 + 0x28) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x2c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x20),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f000000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f000000;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x38);
  *(uint *)(lVar6 + 0x38) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x3c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x30),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x38);
  *(uint *)(lVar6 + 0x38) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x3c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x30),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f00000000000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x38);
  *(uint *)(lVar6 + 0x38) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x3c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x30),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f0000003f000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x48);
  *(uint *)(lVar6 + 0x48) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x4c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x40),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x48);
  *(uint *)(lVar6 + 0x48) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x4c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x40),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x48);
  *(uint *)(lVar6 + 0x48) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x4c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x40),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f800000;
  puVar2[1] = 0x3f00000000000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x58);
  *(uint *)(lVar6 + 0x58) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x5c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x50),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x50) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f8000003eaaaaab;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x58);
  *(uint *)(lVar6 + 0x58) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x5c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x50),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x50) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3eaaaaab;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3eaaaaab;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x58);
  *(uint *)(lVar6 + 0x58) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x5c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x50),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x50) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3eaaaaab;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f2aaaab;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x68);
  *(uint *)(lVar6 + 0x68) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x6c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x60),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3eaaaaab3f800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x68);
  *(uint *)(lVar6 + 0x68) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x6c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x60),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0x3eaaaaab;
  puVar3[2] = 0;
  puVar3[3] = 0x3eaaaaab;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x68);
  *(uint *)(lVar6 + 0x68) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x6c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x60),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0x3eaaaaab;
  puVar3[2] = 0;
  puVar3[3] = 0x3f2aaaab;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x78);
  *(uint *)(lVar6 + 0x78) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x7c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x70),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x78);
  *(uint *)(lVar6 + 0x78) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x7c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x70),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x78);
  *(uint *)(lVar6 + 0x78) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x7c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x70),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f00000000000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x78);
  *(uint *)(lVar6 + 0x78) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x7c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x70),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f0000003f000000;
  puVar2[1] = 0x3f0000003f000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x88);
  *(uint *)(lVar6 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x8c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x80),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3f8000003e800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x88);
  *(uint *)(lVar6 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x8c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x80),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3e800000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3e800000;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x88);
  *(uint *)(lVar6 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x8c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x80),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3e800000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f000000;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x88);
  *(uint *)(lVar6 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x8c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x80),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3e800000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f400000;
  puVar3[3] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x98);
  *(uint *)(lVar6 + 0x98) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x9c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x90),iVar4);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar4 * 0x10);
  *puVar2 = 0x3e8000003f800000;
  puVar2[1] = 0;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x98);
  *(uint *)(lVar6 + 0x98) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x9c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x90),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0x3e800000;
  puVar3[2] = 0;
  puVar3[3] = 0x3e800000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x98);
  *(uint *)(lVar6 + 0x98) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x9c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x90),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0x3e800000;
  puVar3[2] = 0;
  puVar3[3] = 0x3f000000;
  lVar6 = *plVar1;
  iVar4 = *(int *)(lVar6 + 0x98);
  *(uint *)(lVar6 + 0x98) = iVar4 + 1U;
  if (*(uint *)(lVar6 + 0x9c) < iVar4 + 1U) {
    FUN_14146f8ae((longlong *)(lVar6 + 0x90),iVar4);
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar4 * 0x10);
  *puVar3 = 0x3f800000;
  puVar3[1] = 0x3e800000;
  puVar3[2] = 0;
  puVar3[3] = 0x3f400000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    _Dst = (void *)FUN_14001cc68(0x140);
    memset(_Dst,0,0x140);
    param_1[0x77] = _Dst;
    uVar7 = FUN_14001cc68(0x30,0x10);
    FUN_145a307a4(uVar7);
    param_1[0x78] = uVar7;
    local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)FUN_147acb3c0;
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    FUN_145a30830(&local_c0,param_1,&local_b8);
    local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&LAB_147acb45a;
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    FUN_145a305a6(&DAT_14c868850,&local_c0,param_1,&local_b8);
    local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&LAB_147acb486;
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    FUN_145a305a6(&DAT_14c868868,&local_c0,param_1,&local_b8);
    local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&LAB_147acb4b2;
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    FUN_145a30a30(&local_c0,param_1,&local_b8);
    InitializeCriticalSection(&local_b8);
    SetCriticalSectionSpinCount(&local_b8,4000);
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    EnterCriticalSection(&local_b8);
    if (local_88 != 2) {
      FUN_1446efa72(&local_90,0,2,0x10);
      local_88 = 2;
    }
    *local_90 = &PTR_LAB_14a57d310;
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
    local_90[2] = lVar8;
    *local_90 = &PTR_FUN_14a909fe0;
    local_90[3] = param_1;
    LeaveCriticalSection(&local_b8);
    FUN_145ca0b8c(&DAT_14cacedd0,&local_c0,&local_b8);
    FUN_1401cb1ee(&local_b8);
    param_1[0x15] = local_c0;
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a304aa FUN_145a304aa body=54 status=ok
// SIG undefined FUN_145a304aa(void)

undefined8 * FUN_145a304aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *param_1 = &PTR_FUN_14aa75800;
  param_1[5] = &PTR_LAB_14aa75aa0;
  return param_1;
}



// FUNCTION 145a304e0 FUN_145a304e0 body=52 status=ok
// SIG undefined FUN_145a304e0(void)

void FUN_145a304e0(undefined8 *param_1)

{
  FUN_14146fa53(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 10) {
    FUN_145a30514(param_1);
    return;
  }
  return;
}



// FUNCTION 145a30514 FUN_145a30514 body=145 status=ok
// SIG undefined FUN_145a30514(void)

void FUN_145a30514(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0xa0;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e0a];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xa0,8);
  }
  uVar2 = 0x7fffffff;
  if (9 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145a305a6 FUN_145a305a6 body=254 status=ok
// SIG undefined FUN_145a305a6(void)

undefined8
FUN_145a305a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a909f00;
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
  *local_48 = &PTR_FUN_14a909e90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a306a6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a306a6 FUN_145a306a6 body=216 status=ok
// SIG undefined FUN_145a306a6(void)

undefined8 * FUN_145a306a6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a3078c FUN_145a3078c body=24 status=ok
// SIG undefined FUN_145a3078c(void)

bool FUN_145a3078c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a307a4 FUN_145a307a4 body=139 status=ok
// SIG undefined FUN_145a307a4(void)

undefined8 * FUN_145a307a4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x14;
  FUN_14475e4ac(param_1 + 1);
  puVar2 = (undefined8 *)param_1[1];
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 0x14;
  if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar1) < 0x14) {
    FUN_144941252(param_1 + 3);
  }
  memset((void *)((longlong)iVar1 * 8 + param_1[3]),0,0xa0);
  return param_1;
}



// FUNCTION 145a30830 FUN_145a30830 body=241 status=ok
// SIG undefined FUN_145a30830(void)

undefined8 FUN_145a30830(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a909e20;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a909db0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a30922(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a30922 FUN_145a30922 body=233 status=ok
// SIG undefined FUN_145a30922(void)

undefined8 * FUN_145a30922(undefined8 *param_1,longlong *param_2)

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
      FUN_14474d06a(&DAT_14c868838,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c868840;
      lVar6 = (longlong)(int)DAT_14c868840;
      DAT_14c868840 = DAT_14c868840 + 1;
      if (DAT_14c868844 < DAT_14c868840) {
        FUN_1447a71f6(&DAT_14c868838,uVar3);
      }
      lVar2 = DAT_14c868838;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c868838 + lVar6) = 0;
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



// FUNCTION 145a30a18 FUN_145a30a18 body=24 status=ok
// SIG undefined FUN_145a30a18(void)

bool FUN_145a30a18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a30a30 FUN_145a30a30 body=248 status=ok
// SIG undefined FUN_145a30a30(void)

undefined8 FUN_145a30a30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a909f70;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(&DAT_14c868820,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a30b30 FUN_145a30b30 body=142 status=ok
// SIG undefined FUN_145a30b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_145a30b30(undefined2 *param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa28c8) {
    FUN_144b3d300(&DAT_14caa28c8);
    if (DAT_14caa28c8 == -1) {
      FUN_140056680(&DAT_14caa28b0,L"landscape.SupportGPUCulling");
      _DAT_14caa28c0 = 0;
      atexit((_func_5014 *)&LAB_14324da61);
      _Init_thread_footer(&DAT_14caa28c8);
    }
  }
  iVar1 = FUN_144a7e43e(&DAT_14caa28b0,*param_1);
  return iVar1 != 0;
}



// FUNCTION 145a30bca FUN_145a30bca body=96 status=ok
// SIG undefined FUN_145a30bca(void)

undefined8 * FUN_145a30bca(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149e60300;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x48,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  lpCriticalSection[1].OwningThread = (HANDLE)0x0;
  lpCriticalSection[1].LockSemaphore = (HANDLE)0x0;
  param_1[5] = lpCriticalSection;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145a30c32 FUN_145a30c32 body=99 status=ok
// SIG undefined FUN_145a30c32(void)

undefined8 * FUN_145a30c32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14599f580(param_1,uVar1);
  *param_1 = &PTR_FUN_14b077050;
  FUN_1447715ec(param_1 + 5,&DAT_14cb8dfc0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb8dfe8);
  param_1[0x10] = DAT_14cb8dfb8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41b0cccd;
  return param_1;
}



// FUNCTION 145a30c9e FUN_145a30c9e body=99 status=ok
// SIG undefined FUN_145a30c9e(void)

undefined8 * FUN_145a30c9e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14599f580(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3d8dc0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb7cb68);
  FUN_1447715ec(param_1 + 10,&DAT_14cb7cb90);
  param_1[0x10] = DAT_14cb7cb60;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41800000;
  return param_1;
}



// FUNCTION 145a30d0a FUN_145a30d0a body=99 status=ok
// SIG undefined FUN_145a30d0a(void)

undefined8 * FUN_145a30d0a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14599f580(param_1,uVar1);
  *param_1 = &PTR_FUN_14b3e3ca0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb7d1d0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb7d1f8);
  param_1[0x10] = DAT_14cb7d1c8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41700000;
  return param_1;
}



// FUNCTION 145a30d72 FUN_145a30d72 body=102 status=ok
// SIG undefined FUN_145a30d72(void)

void FUN_145a30d72(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140dbffdc(puVar1);
  FUN_1409e1656(puVar1 + 6);
  *puVar1 = &PTR_FUN_14b553580;
  puVar1[6] = &PTR_FUN_14b553840;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 145a30dd8 FUN_145a30dd8 body=32 status=ok
// SIG undefined FUN_145a30dd8(void)

void FUN_145a30dd8(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_145a30df8(param_1);
  *param_1 = &PTR_FUN_14b8eaed0;
  return;
}



// FUNCTION 145a30df8 FUN_145a30df8 body=75 status=ok
// SIG undefined FUN_145a30df8(void)

undefined8 * FUN_145a30df8(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14acaa5d0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 145a30e44 FUN_145a30e44 body=38 status=ok
// SIG undefined FUN_145a30e44(void)

undefined8 FUN_145a30e44(undefined8 param_1,int param_2)

{
  FUN_145a30e6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a30e6a FUN_145a30e6a body=69 status=ok
// SIG undefined FUN_145a30e6a(void)

void FUN_145a30e6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9bf580;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_14575cc5c(param_1);
  return;
}



// FUNCTION 145a30eb0 FUN_145a30eb0 body=38 status=ok
// SIG undefined FUN_145a30eb0(void)

undefined8 FUN_145a30eb0(undefined8 param_1,int param_2)

{
  FUN_145a30ed6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a30ed6 FUN_145a30ed6 body=69 status=ok
// SIG undefined FUN_145a30ed6(void)

void FUN_145a30ed6(undefined8 *param_1)

{
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145a30f1c FUN_145a30f1c body=201 status=ok
// SIG undefined FUN_145a30f1c(void)

longlong FUN_145a30f1c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_141349952();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 145a3107e FUN_145a3107e body=467 status=ok
// SIG undefined FUN_145a3107e(void)

ulonglong FUN_145a3107e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 3999) == '\x01') {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(longlong *)(param_1 + 0x6e8) != 0) goto LAB_145a310ab;
    cVar2 = FUN_1487c7270(param_1);
    if ((cVar2 == '\0') &&
       ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
        (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar4 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_a0[2] = lVar5;
      *local_a0 = &PTR_FUN_14b3e9890;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[4] = FUN_1487c73c8;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 1;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x6e8,&local_88,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_a0);
      goto LAB_145a310ab;
    }
  }
  uVar6 = 0;
LAB_145a310ab:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145a31346 FUN_145a31346 body=145 status=ok
// SIG undefined FUN_145a31346(void)

longlong FUN_145a31346(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a313d8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_145a313d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_145a313aa;
  }
  lVar1 = 0;
LAB_145a313aa:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a313d8 FUN_145a313d8 body=228 status=ok
// SIG undefined FUN_145a313d8(void)

longlong FUN_145a313d8(void)

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
  if (DAT_14cb5ff98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_1486c1025;
    local_40 = FUN_1464ea862;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelRoadSubsystem",&DAT_14cb5ff98,&DAT_1486c1024);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ff98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a314be FUN_145a314be body=371 status=ok
// SIG undefined FUN_145a314be(void)

void FUN_145a314be(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  void *_Src;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  undefined2 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)DAT_14cbdc344 < 8) {
    FUN_1408be2c4(&DAT_14cbdc338,8);
  }
  lVar6 = 0;
  do {
    uVar4 = FUN_145a31632();
    FUN_1406f1d90(uVar4,local_78,lVar6);
    uVar4 = FUN_1447a1f4a(local_78);
    FUN_144a2b0a4(uVar4,&local_68);
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    FUN_140056680(&local_58,puVar5);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    uVar3 = DAT_14cbdc340;
    lVar8 = (longlong)(int)DAT_14cbdc340;
    DAT_14cbdc340 = DAT_14cbdc340 + 1;
    if (DAT_14cbdc344 < DAT_14cbdc340) {
      FUN_1447a1bd6(&DAT_14cbdc338,uVar3);
    }
    _Src = local_58;
    lVar2 = DAT_14cbdc338;
    lVar8 = lVar8 * 0x10;
    puVar1 = (undefined8 *)(DAT_14cbdc338 + lVar8);
    *(undefined8 *)(DAT_14cbdc338 + lVar8) = 0;
    lVar7 = (longlong)local_50;
    *(int *)(lVar2 + 8 + lVar8) = local_50;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_50,0);
      memcpy((void *)*puVar1,_Src,lVar7 * 2);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a31632 FUN_145a31632 body=57 status=ok
// SIG undefined FUN_145a31632(void)

void FUN_145a31632(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5eb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5eb0 = FUN_14171c317(FUN_14660107b,uVar1,L"EOakUI_WorldIconTypes");
  }
  return;
}



// FUNCTION 145a3166c FUN_145a3166c body=82 status=ok
// SIG undefined FUN_145a3166c(void)

void FUN_145a3166c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_140e16172(param_2);
      FUN_145a316be(param_1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a316be FUN_145a316be body=457 status=ok
// SIG undefined FUN_145a316be(void)

void FUN_145a316be(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 0x1e4);
    local_40 = (code *)&LAB_14663ba0c;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c20,2,param_2);
    local_40 = (code *)&LAB_14663ba14;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c20,0x10,param_2);
    local_40 = (code *)&LAB_14663b9fc;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c28,2,param_2);
    local_40 = (code *)&LAB_14663ba04;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c28,8,param_2);
    local_40 = (code *)&LAB_14597b8aa;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c30,0x10,param_2);
    local_40 = FUN_141409608;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c38,1,param_2);
    local_40 = (code *)&LAB_14597b8b2;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c40,1,param_2);
    local_40 = FUN_148e29292;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c48,1,param_2);
    local_40 = (code *)&LAB_148e292dc;
    local_38 = 0;
    local_48 = &local_40;
    FUN_14147036c(param_1,&DAT_14cbc9c50,1,param_2);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a31890 FUN_145a31890 body=153 status=ok
// SIG undefined FUN_145a31890(void)

undefined8 * FUN_145a31890(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3c23d70a;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14aaa8790;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe;
  return param_1;
}



// FUNCTION 145a3192a FUN_145a3192a body=135 status=ok
// SIG undefined FUN_145a3192a(void)

void FUN_145a3192a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14147079a();
  local_38 = &local_41;
  local_30 = &local_40;
  local_40 = FUN_144170200;
  local_20 = &local_30;
  local_28 = FUN_14417018a;
  uVar1 = FUN_140e0b9fc();
  FUN_140e0b95c(param_1 + 0x2f8,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a319be FUN_145a319be body=203 status=ok
// SIG undefined FUN_145a319be(void)

undefined8 * FUN_145a319be(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *param_1 = &PTR_FUN_14abe6650;
  param_1[5] = &PTR_FUN_14abe6990;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1400b22c2(&local_30,"UnknownComposite");
  if (param_1 + 6 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_30;
    *(undefined4 *)(param_1 + 7) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_24;
  }
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0x80;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a31a8a FUN_145a31a8a body=332 status=ok
// SIG undefined FUN_145a31a8a(void)

longlong * FUN_145a31a8a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(800,0x10);
  FUN_145a31bd8(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145a31c72(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145a31b01;
    param_1[1] = 0;
LAB_145a31b70:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145a31b01;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145a31b01;
      goto LAB_145a31b70;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145a31b01;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145a31b01:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x310;
  FUN_140a52e78(*param_1,"SGbxCohtmlWidget",
                ".\\../Plugins/Gearbox/GbxUICoherent/Source/GbxUICoherent/Private/GbxUIView.cpp",
                0xaf);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a31bd8 FUN_145a31bd8 body=154 status=ok
// SIG undefined FUN_145a31bd8(void)

undefined8 * FUN_145a31bd8(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b478540;
  memset(param_1 + 2,0,0x310);
  FUN_145a31d14(param_1 + 2);
  param_1[2] = &PTR_FUN_14b478560;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)(param_1 + 99) = 1;
  return param_1;
}



// FUNCTION 145a31c72 FUN_145a31c72 body=162 status=ok
// SIG undefined FUN_145a31c72(void)

void FUN_145a31c72(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145a31cb1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145a31cb1;
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
LAB_145a31cb1:
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
                    /* WARNING: Could not recover jumptable at 0x000145a31d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a31d14 FUN_145a31d14 body=211 status=ok
// SIG undefined FUN_145a31d14(void)

undefined8 * FUN_145a31d14(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_14b455320;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x26e) = 1;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b7) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2af) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  return param_1;
}



// FUNCTION 145a31de8 FUN_145a31de8 body=124 status=ok
// SIG undefined FUN_145a31de8(void)

longlong * FUN_145a31de8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b693e90;
  FUN_145a31e64(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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


