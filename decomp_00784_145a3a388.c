// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a3a388 FUN_145a3a388 body=412 status=ok
// SIG undefined FUN_145a3a388(void)

undefined8 * FUN_145a3a388(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab280a0;
  param_1[5] = 0;
  FUN_145a3a524(param_1 + 6);
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  FUN_145a3a524(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x5b] = 0x8000000080000000;
  param_1[0x61] = 0;
  param_1[0x62] = 0xffffffff00000000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x8000000000;
  param_1[0x67] = 0xffffffff;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  puVar1 = param_1;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        uVar2 = param_1[4];
      }
      else {
        uVar2 = 0;
      }
      param_1[5] = uVar2;
      return param_1;
    }
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) break;
    puVar1 = (undefined8 *)puVar1[4];
  }
  return param_1;
}



// FUNCTION 145a3a524 FUN_145a3a524 body=136 status=ok
// SIG undefined FUN_145a3a524(void)

void FUN_145a3a524(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
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
  return;
}



// FUNCTION 145a3a5ac FUN_145a3a5ac body=40 status=ok
// SIG undefined FUN_145a3a5ac(void)

undefined8 FUN_145a3a5ac(undefined8 param_1,int param_2)

{
  FUN_145a3a5d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3a5d4 FUN_145a3a5d4 body=228 status=ok
// SIG undefined FUN_145a3a5d4(void)

void FUN_145a3a5d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9efc50;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3a6b8(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3a6ee(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3a724(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3a75a(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_141046fd4(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a3a6b8 FUN_145a3a6b8 body=53 status=ok
// SIG undefined FUN_145a3a6b8(void)

void FUN_145a3a6b8(longlong *param_1)

{
  FUN_14147272e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3a6ee FUN_145a3a6ee body=53 status=ok
// SIG undefined FUN_145a3a6ee(void)

void FUN_145a3a6ee(longlong *param_1)

{
  FUN_145a3a790();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3a724 FUN_145a3a724 body=53 status=ok
// SIG undefined FUN_145a3a724(void)

void FUN_145a3a724(longlong *param_1)

{
  FUN_145a3a7e8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3a75a FUN_145a3a75a body=53 status=ok
// SIG undefined FUN_145a3a75a(void)

void FUN_145a3a75a(longlong *param_1)

{
  FUN_145a3a840();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3a790 FUN_145a3a790 body=88 status=ok
// SIG undefined FUN_145a3a790(void)

void FUN_145a3a790(longlong param_1)

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



// FUNCTION 145a3a7e8 FUN_145a3a7e8 body=88 status=ok
// SIG undefined FUN_145a3a7e8(void)

void FUN_145a3a7e8(longlong param_1)

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



// FUNCTION 145a3a840 FUN_145a3a840 body=88 status=ok
// SIG undefined FUN_145a3a840(void)

void FUN_145a3a840(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145a3a898 FUN_145a3a898 body=40 status=ok
// SIG undefined FUN_145a3a898(void)

undefined8 FUN_145a3a898(undefined8 param_1,int param_2)

{
  FUN_145a3a8c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3a8c0 FUN_145a3a8c0 body=59 status=ok
// SIG undefined FUN_145a3a8c0(void)

void FUN_145a3a8c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad51510;
  FUN_145a3a8fb(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a3a8fb FUN_145a3a8fb body=65 status=ok
// SIG undefined FUN_145a3a8fb(void)

void FUN_145a3a8fb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
        *plVar1 = 0;
      }
      FUN_14102a02c(plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a3a94a FUN_145a3a94a body=45 status=ok
// SIG undefined FUN_145a3a94a(void)

undefined8 FUN_145a3a94a(undefined8 param_1,int param_2)

{
  FUN_145a3a978();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 145a3a978 FUN_145a3a978 body=105 status=ok
// SIG undefined FUN_145a3a978(void)

void FUN_145a3a978(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b761480;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145880d2e(param_1 + 0x1e);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a3a9f0 FUN_145a3a9f0 body=40 status=ok
// SIG undefined FUN_145a3a9f0(void)

undefined8 FUN_145a3a9f0(undefined8 param_1,int param_2)

{
  FUN_145a3aa18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3aa18 FUN_145a3aa18 body=211 status=ok
// SIG undefined FUN_145a3aa18(void)

void FUN_145a3aa18(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b775fd0;
  FUN_145a3aaec(param_1 + 0x10);
  plVar3 = (longlong *)param_1[0xe];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a3aaec FUN_145a3aaec body=63 status=ok
// SIG undefined FUN_145a3aaec(void)

void FUN_145a3aaec(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3ab2c FUN_145a3ab2c body=93 status=ok
// SIG undefined FUN_145a3ab2c(void)

void FUN_145a3ab2c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0x360) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x30))();
    if (lVar1 != 0) {
      FUN_1447210f0(lVar1);
      return;
    }
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x360) + 0x28))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a3ab75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x180))(plVar2);
      return;
    }
  }
  FUN_149171a2c(param_1);
  return;
}



// FUNCTION 145a3ab8a FUN_145a3ab8a body=71 status=ok
// SIG undefined FUN_145a3ab8a(void)

undefined8 FUN_145a3ab8a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a799b0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0xa8);
    }
  }
  return 0;
}



// FUNCTION 145a3abd2 FUN_145a3abd2 body=38 status=ok
// SIG undefined FUN_145a3abd2(void)

void FUN_145a3abd2(longlong param_1)

{
  FUN_145a3ac7c();
  FUN_145a3abf8(param_1 + 0x5f8);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 145a3abf8 FUN_145a3abf8 body=131 status=ok
// SIG undefined FUN_145a3abf8(void)

void FUN_145a3abf8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((((char)param_1[4] == '\x01') && (lVar3 = (**(code **)(*param_1 + 8))(param_1), lVar3 != 0))
     && (param_1[1] != 0)) {
    FUN_140ccfb62(lVar3);
    param_1[1] = 0;
  }
  if ((longlong)(int)param_1[6] != 0) {
    plVar2 = (longlong *)param_1[5];
    lVar3 = (longlong)(int)param_1[6] << 5;
    do {
      lVar1 = (**(code **)(*plVar2 + 8))(plVar2);
      if ((lVar1 != 0) && (plVar2[1] != 0)) {
        FUN_140ccfb62(lVar1);
        plVar2[1] = 0;
      }
      plVar2 = plVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145a3ac7c FUN_145a3ac7c body=187 status=ok
// SIG undefined FUN_145a3ac7c(void)

ulonglong FUN_145a3ac7c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x658);
  if (uVar4 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x650);
    plVar1 = plVar6 + uVar4;
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        FUN_144757f48(lVar5,0x40000000);
        uVar3 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar5 + 8);
          uVar4 = (ulonglong)uVar3;
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar5 + 8);
          if (uVar3 == uVar2) {
            *(uint *)(lVar5 + 8) = uVar3 | 0x200000;
          }
          else {
            uVar4 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  if (*(int *)(param_1 + 0x65c) != 0) {
    uVar4 = FUN_148866078(param_1 + 0x650);
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 145a3ad42 FUN_145a3ad42 body=832 status=ok
// SIG undefined FUN_145a3ad42(void)

void FUN_145a3ad42(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = &local_a8;
  local_98 = local_80;
  local_a8 = local_90;
  uStack_a0 = uStack_88;
  local_100 = &local_c8;
  local_c8 = local_78;
  uStack_c0 = uStack_70;
  local_b8 = local_68;
  local_108 = &local_e8;
  local_e8 = local_60;
  uStack_e4 = uStack_5c;
  uStack_e0 = uStack_58;
  uStack_dc = uStack_54;
  local_d8 = local_50;
  uVar1 = FUN_145a3b084(local_38[2],plVar2,local_40,local_48);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3b084 FUN_145a3b084 body=275 status=ok
// SIG undefined FUN_145a3b084(void)

undefined8
FUN_145a3b084(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_3 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = param_7[2];
      local_90 = &local_48;
      local_48 = *param_7;
      uStack_40 = param_7[1];
      local_68 = *param_6;
      uStack_60 = param_6[1];
      local_98 = &local_68;
      local_58 = param_6[2];
      local_88 = *param_5;
      uStack_84 = param_5[1];
      uStack_80 = param_5[2];
      uStack_7c = param_5[3];
      local_a0 = &local_88;
      local_78 = *(undefined8 *)(param_5 + 4);
      local_a8 = param_4;
      uVar3 = FUN_1414729be(lVar1,param_1,param_2,param_3);
      goto LAB_145a3b16b;
    }
  }
  uVar3 = 0;
LAB_145a3b16b:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3b198 FUN_145a3b198 body=143 status=ok
// SIG undefined FUN_145a3b198(void)

void FUN_145a3b198(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a3b228 FUN_145a3b228 body=40 status=ok
// SIG undefined FUN_145a3b228(void)

undefined8 FUN_145a3b228(undefined8 param_1,int param_2)

{
  FUN_145a3b250();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3b250 FUN_145a3b250 body=183 status=ok
// SIG undefined FUN_145a3b250(void)

void FUN_145a3b250(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be10e60;
  param_1[5] = &PTR_FUN_14be11860;
  param_1[6] = &PTR_LAB_14be118a0;
  param_1[0x55] = &PTR_FUN_14be118f0;
  param_1[0x56] = &PTR_FUN_14be11970;
  param_1[0x57] = &PTR_FUN_14be11980;
  FUN_145a3b308(param_1 + 0xe7);
  FUN_14054b30a(param_1 + 0xc9);
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xc5];
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
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145a3b308 FUN_145a3b308 body=61 status=ok
// SIG undefined FUN_145a3b308(void)

void FUN_145a3b308(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145a3b345(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3b345 FUN_145a3b345 body=45 status=ok
// SIG undefined FUN_145a3b345(void)

void FUN_145a3b345(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145a3b372 FUN_145a3b372 body=39 status=ok
// SIG undefined FUN_145a3b372(void)

void FUN_145a3b372(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a3b399();
  FUN_1409f75d4(param_2,&DAT_14cbc9480,uVar1,0);
  return;
}



// FUNCTION 145a3b399 FUN_145a3b399 body=57 status=ok
// SIG undefined FUN_145a3b399(void)

void FUN_145a3b399(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba74c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba74c0 = FUN_14171c317(FUN_1465cbe1c,uVar1,L"EBossInfoState");
  }
  return;
}



// FUNCTION 145a3b3e4 FUN_145a3b3e4 body=156 status=ok
// SIG undefined FUN_145a3b3e4(void)

bool FUN_145a3b3e4(longlong param_1,undefined4 param_2)

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



// FUNCTION 145a3b482 FUN_145a3b482 body=26 status=ok
// SIG undefined FUN_145a3b482(void)

void FUN_145a3b482(longlong param_1)

{
  FUN_145a3b49c();
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  return;
}



// FUNCTION 145a3b49c FUN_145a3b49c body=119 status=ok
// SIG undefined FUN_145a3b49c(void)

void FUN_145a3b49c(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    if ((*(char *)(param_1 + 0x674) == '\0') && (*(longlong *)(param_1 + 0x638) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x638) + 0x78;
    }
    else {
      lVar3 = param_1 + 0x66c;
    }
    dVar1 = *(double *)(lVar2 + 0x6d0);
    fVar4 = (float)FUN_14085b07e(lVar3);
    *(float *)(param_1 + 0x6b4) = (float)((double)fVar4 + dVar1);
  }
  return;
}



// FUNCTION 145a3b534 FUN_145a3b534 body=21 status=ok
// SIG undefined FUN_145a3b534(void)

undefined8 FUN_145a3b534(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a3b54a FUN_145a3b54a body=76 status=ok
// SIG undefined FUN_145a3b54a(void)

void FUN_145a3b54a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_14481578e(param_1 + 0x18,0);
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145a3b58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 145a3b596 FUN_145a3b596 body=21 status=ok
// SIG undefined FUN_145a3b596(void)

undefined8 FUN_145a3b596(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145a3b5ac FUN_145a3b5ac body=82 status=ok
// SIG undefined FUN_145a3b5ac(void)

void FUN_145a3b5ac(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (((char)param_2 == '\0') &&
     (*(undefined4 *)(param_1 + 0x20) = 0, *(int *)(param_1 + 0x24) != 0)) {
    FUN_14481578e(param_1 + 0x18,0);
  }
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145a3b5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 145a3b5fe FUN_145a3b5fe body=375 status=ok
// SIG undefined FUN_145a3b5fe(void)

void FUN_145a3b5fe(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0xc] != 0) {
    param_1[0xc] = 0;
    plVar3 = (longlong *)param_1[0xd];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xd] = 0;
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
  }
  FUN_14101cee4(param_1[0xe],(int)param_1[0xf]);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_145a3b78c(param_1 + 0xe);
  }
  FUN_145a3b7bc(param_1);
  lVar4 = param_1[0x24];
  if (lVar4 != 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    *local_38 = &PTR_LAB_149e020b0;
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
    local_38[2] = lVar6;
    *local_38 = &PTR_FUN_14b4f1350;
    local_38[3] = param_1;
    *(char *)(local_38 + 4) = (char)param_2;
    FUN_141472d40(lVar4,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    (**(code **)(*param_1 + 0x90))(param_1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145a3b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3b782 FUN_145a3b782 body=9 status=ok
// SIG undefined FUN_145a3b782(void)

void FUN_145a3b782(longlong param_1)

{
  FUN_145aab9be(param_1 + 0x10);
  return;
}



// FUNCTION 145a3b78c FUN_145a3b78c body=48 status=ok
// SIG undefined FUN_145a3b78c(void)

void FUN_145a3b78c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145a3b7bc FUN_145a3b7bc body=207 status=ok
// SIG undefined FUN_145a3b7bc(void)

void FUN_145a3b7bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14119d4d6(*(undefined8 *)(param_1 + 0x38));
  if (lVar1 != 0) {
    lVar1 = FUN_14119d510(param_1,*(undefined4 *)(lVar1 + 0xe0));
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x130) != 0) {
        FUN_14480f766(lVar1 + 0x1c8);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_14480f766(lVar1 + 0x188);
      }
      if (*(longlong *)(param_1 + 0x148) != 0) {
        FUN_14480f766(lVar1 + 0x1e0);
      }
      if (*(longlong *)(param_1 + 0x150) != 0) {
        FUN_14480f766(lVar1 + 0x1f8);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        FUN_14480f766(lVar1 + 0x1b0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  return;
}



// FUNCTION 145a3b88c FUN_145a3b88c body=9 status=ok
// SIG undefined FUN_145a3b88c(void)

void FUN_145a3b88c(longlong param_1)

{
  FUN_145a3b896(param_1 + 0x10);
  return;
}



// FUNCTION 145a3b896 FUN_145a3b896 body=214 status=ok
// SIG undefined FUN_145a3b896(void)

void FUN_145a3b896(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d850;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1d];
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
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3b96c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 1);
  return;
}



// FUNCTION 145a3b96c FUN_145a3b96c body=53 status=ok
// SIG undefined FUN_145a3b96c(void)

void FUN_145a3b96c(longlong *param_1)

{
  FUN_145a3b9a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3b9a2 FUN_145a3b9a2 body=382 status=ok
// SIG undefined FUN_145a3b9a2(void)

void FUN_145a3b9a2(longlong *param_1)

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
      FUN_1407a3a68(lVar2 + lVar3 + 8);
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



// FUNCTION 145a3bb21 FUN_145a3bb21 body=85 status=ok
// SIG undefined FUN_145a3bb21(void)

void FUN_145a3bb21(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a3bb76(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a582a50;
  puVar1[5] = &PTR_FUN_14a582d40;
  puVar1[6] = &PTR_LAB_14a582d90;
  *(undefined8 *)((longlong)puVar1 + 0x23c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x244) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24c) = 0;
  *(undefined1 *)(puVar1 + 0x47) = 1;
  return;
}



// FUNCTION 145a3bb76 FUN_145a3bb76 body=888 status=ok
// SIG undefined FUN_145a3bb76(void)

undefined8 * FUN_145a3bb76(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a583520;
  param_1[5] = &PTR_FUN_14a583810;
  param_1[6] = &PTR_LAB_14a583860;
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
  FUN_145a3bef0(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x42] = 0xbf800000bf800000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  FUN_145880926(param_1 + 0x3c);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_145a3c09c(&DAT_14c846b20,&local_78,&local_88);
  lVar3 = local_88;
  lVar7 = (longlong)(int)uStack_80;
  if (lVar7 != 0) {
    puVar1 = param_1 + 0x22;
    lVar5 = 0;
    do {
      FUN_140002184(puVar1,0x2d);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(puVar1,*(undefined8 *)(lVar3 + lVar5),iVar6);
      FUN_140002184(puVar1,0x20);
      lVar5 = lVar5 + 0x10;
    } while (lVar7 * 0x10 != lVar5);
  }
  FUN_1400020e8(param_1 + 0x20,L"-NOSCREENMESSAGES",0x11);
  iVar2 = DAT_14c761140 + 1;
  *(int *)((longlong)param_1 + 0x154) = DAT_14c761140;
  DAT_14c761140 = iVar2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  uVar4 = FUN_1459e701c();
  FUN_1400bbfc4(&local_a8,uVar4);
  *(undefined4 *)(param_1 + 7) = local_a8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_a4;
  *(undefined4 *)(param_1 + 8) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_9c;
  if (param_1 + 7 == (undefined8 *)&local_a8) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 10) = local_90;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_8c;
  }
  uVar4 = FUN_1459e6d58();
  FUN_1400bbfc4(&local_a8,uVar4);
  *(undefined4 *)(param_1 + 0xb) = local_a8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_a4;
  *(undefined4 *)(param_1 + 0xc) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_9c;
  if (param_1 + 0xb == (undefined8 *)&local_a8) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    param_1[0xd] = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0xe) = local_90;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_8c;
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145a3bef0 FUN_145a3bef0 body=321 status=ok
// SIG undefined FUN_145a3bef0(void)

longlong * FUN_145a3bef0(longlong *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x10000ea60;
  *(undefined4 *)(param_1 + 10) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x2d0;
  FUN_145a3c074(&local_38);
  if (&local_38 == param_1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  FUN_145a3c032(param_1);
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[2] = 0;
  FUN_14020fad6(param_1 + 3,L"{world}");
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = (longlong)&DAT_100000018;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_100000018;
  *(undefined1 *)(param_1 + 8) = 4;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  *(undefined4 *)((longlong)param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  FUN_14020fad6(param_1 + 6,L".avi");
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3c032 FUN_145a3c032 body=65 status=ok
// SIG undefined FUN_145a3c032(void)

void FUN_145a3c032(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141472ef4();
  FUN_1448097c4(param_1,&DAT_149e01f64,uVar1,0);
  uVar1 = FUN_141472ef4();
  FUN_1448097c4(param_1,&DAT_149e065c6,uVar1,0);
  return;
}



// FUNCTION 145a3c074 FUN_145a3c074 body=40 status=ok
// SIG undefined FUN_145a3c074(void)

undefined8 FUN_145a3c074(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(param_1,uVar1,L"VideoCaptures/");
  return param_1;
}



// FUNCTION 145a3c09c FUN_145a3c09c body=569 status=ok
// SIG undefined FUN_145a3c09c(void)

/* WARNING: Removing unreachable block (ram,0x000145a3c1c6) */
/* WARNING: Removing unreachable block (ram,0x000145a3c25b) */

void FUN_145a3c09c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  short *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (short *)0x0;
  uStack_60 = 0;
  local_50 = param_1;
  cVar1 = FUN_140ffc744(&local_50,&local_68,0,0);
  if (cVar1 != '\0') {
    do {
      psVar2 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        psVar2 = local_68;
      }
      if (*psVar2 == 0x2d) {
        iVar4 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar4 = 0;
        }
        FUN_14006620a(&local_78,psVar2 + (0 < iVar4),iVar4 - (uint)(0 < iVar4));
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_3,iVar4);
        }
        lVar3 = *param_3;
        lVar5 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar3 + lVar5) = 0;
        *(undefined8 *)(lVar3 + lVar5) = local_78;
        *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_70;
        *(undefined4 *)(lVar3 + 0xc + lVar5) = local_70._4_4_;
        local_70 = 0;
        local_78 = 0;
        iVar4 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar4 = 0;
        }
        psVar2 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          psVar2 = local_68;
        }
        lVar3 = (longlong)iVar4;
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        FUN_140056680(&local_78,psVar2 + (lVar3 - (ulonglong)(iVar4 - 1)));
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_2,iVar4);
        }
        lVar3 = *param_2;
        lVar5 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar3 + lVar5) = 0;
        *(undefined8 *)(lVar3 + lVar5) = local_78;
        local_78 = 0;
        *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_70;
        *(undefined4 *)(lVar3 + 0xc + lVar5) = local_70._4_4_;
        local_70 = 0;
      }
      else {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_2,iVar4);
        }
        lVar3 = *param_2;
        lVar5 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar3 + lVar5) = 0;
        *(short **)(lVar3 + lVar5) = local_68;
        local_68 = (short *)0x0;
        *(int *)(lVar3 + 8 + lVar5) = (int)uStack_60;
        *(undefined4 *)(lVar3 + 0xc + lVar5) = uStack_60._4_4_;
        uStack_60 = 0;
      }
      cVar1 = FUN_140ffc744(&local_50,&local_68,0,0);
    } while (cVar1 != '\0');
  }
  if (local_68 != (short *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3c2d6 FUN_145a3c2d6 body=40 status=ok
// SIG undefined FUN_145a3c2d6(void)

undefined8 FUN_145a3c2d6(undefined8 param_1,int param_2)

{
  FUN_145a3c2fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3c2fe FUN_145a3c2fe body=70 status=ok
// SIG undefined FUN_145a3c2fe(void)

void FUN_145a3c2fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6e7c90;
  param_1[5] = &PTR_FUN_14b6e7f30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a3c344 FUN_145a3c344 body=38 status=ok
// SIG undefined FUN_145a3c344(void)

undefined8 FUN_145a3c344(undefined8 param_1,int param_2)

{
  FUN_145a3c36a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3c36a FUN_145a3c36a body=87 status=ok
// SIG undefined FUN_145a3c36a(void)

void FUN_145a3c36a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145a3c3c1(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_145a5bc32(param_1 + 0xb0);
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145a3c3c1 FUN_145a3c3c1 body=40 status=ok
// SIG undefined FUN_145a3c3c1(void)

void FUN_145a3c3c1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145a5bc32(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145a3c3ea FUN_145a3c3ea body=9 status=ok
// SIG undefined FUN_145a3c3ea(void)

void FUN_145a3c3ea(longlong param_1)

{
  FUN_145a3c3f4(param_1 + 0x10);
  return;
}



// FUNCTION 145a3c3f4 FUN_145a3c3f4 body=46 status=ok
// SIG undefined FUN_145a3c3f4(void)

void FUN_145a3c3f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b98e110;
  FUN_140457ffc(&DAT_14cb717f8,param_1);
  FUN_145aab9be(param_1);
  return;
}



// FUNCTION 145a3c428 FUN_145a3c428 body=77 status=ok
// SIG undefined FUN_145a3c428(void)

void FUN_145a3c428(undefined8 param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a3c476(param_1,local_24);
  FUN_141472efc(param_1,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3c476 FUN_145a3c476 body=266 status=ok
// SIG undefined FUN_145a3c476(void)

uint * FUN_145a3c476(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar4 = *(longlong *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)();
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  uVar7 = *param_2 & 0xfe000000;
  lVar9 = (longlong)*(int *)(lVar4 + 0x38);
  if (lVar9 < 1) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    lVar8 = 0;
    lVar12 = 0x48;
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (0 < (int)(1 << ((byte)lVar8 & 0x1f) & *(uint *)(param_1 + 0x70))) {
        lVar6 = *(longlong *)(lVar4 + 0x30);
        uVar3 = *(uint *)(lVar6 + -8 + lVar12);
        uVar11 = uVar11 | *(uint *)(lVar6 + -4 + lVar12);
        uVar10 = uVar10 | *(uint *)(lVar6 + lVar12);
        uVar7 = (uVar3 | uVar7) & 0x1ffdffe | uVar3 & 0x2001 | uVar7 & 0xfe002001;
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + 0x50;
    } while (lVar9 != lVar8);
  }
  *param_2 = uVar7;
  param_2[1] = uVar11;
  param_2[2] = uVar10;
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
  return param_2;
}



// FUNCTION 145a3c580 FUN_145a3c580 body=39 status=ok
// SIG undefined FUN_145a3c580(void)

void FUN_145a3c580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_145a3c5a8(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 145a3c5a8 FUN_145a3c5a8 body=291 status=ok
// SIG undefined FUN_145a3c5a8(void)

ulonglong FUN_145a3c5a8(undefined8 param_1,longlong *param_2)

{
  wchar_t *_Str;
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Str = (wchar_t *)*param_2;
  sVar2 = wcslen(_Str);
  uVar5 = 0;
  if (0x1f < (int)sVar2) {
    FUN_140056680(&local_50,_Str);
    uVar7 = (int)uStack_48 - 1;
    if ((int)uStack_48 == 0) {
      uVar7 = 0;
    }
    uVar3 = 0x20;
    if ((int)uVar7 < 0x20) {
      uVar3 = uVar7;
    }
    uVar4 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar4 = uVar5;
    }
    uVar7 = uVar7 - (int)uVar4;
    local_38 = (int)uStack_48;
    if (0 < (int)uVar7) {
      iVar6 = (int)uStack_48 - (uVar7 + (int)uVar4);
      if (iVar6 != 0) {
        _Dst = (void *)(uVar4 * 2 + local_50);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar7 * 2),(longlong)iVar6 * 2);
      }
      local_38 = (int)uStack_48 - uVar7;
    }
    local_40 = local_50;
    local_34 = uStack_48._4_4_;
    local_50 = 0;
    uStack_48 = 0;
    uVar1 = FUN_140b10bb8(&local_40,0,param_1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if ((char)uVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      *param_2 = *param_2 + 0x40;
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3c6cc FUN_145a3c6cc body=628 status=ok
// SIG undefined FUN_145a3c6cc(void)

void FUN_145a3c6cc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x4db9) & 0xfe) == 2) {
    lVar2 = param_1 + -0x3b48;
    *(undefined1 *)(param_1 + 0x4db9) = 5;
    plVar6 = (longlong *)FUN_140cf8aa6(lVar2);
    if (plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
      if (cVar4 != '\0') {
        if ((char)plVar6[0x430] == '\x01') {
          FUN_14023c33c(plVar6 + 0x30e);
          *(undefined1 *)(plVar6 + 0x430) = 0;
        }
        (**(code **)(plVar6[0x1b5] + 0x58))(plVar6 + 0x1b5,plVar6 + 0x1ec);
      }
    }
    lVar7 = (**(code **)(*param_2 + 0x30))(param_2);
    if (lVar7 != 0) {
      local_68 = *(undefined8 *)(lVar7 + 0xb8);
      local_60 = *(undefined4 *)(lVar7 + 0xc0);
      uStack_5c = *(undefined4 *)(lVar7 + 0xc4);
      uStack_58 = *(undefined4 *)(lVar7 + 200);
      uStack_54 = *(undefined4 *)(lVar7 + 0xcc);
      local_50 = (void *)0x0;
      local_48 = *(int *)(lVar7 + 0xd8);
      lVar9 = (longlong)local_48;
      _Src = *(void **)(lVar7 + 0xd0);
      if (lVar9 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar9 * 2);
      }
      uVar5 = FUN_141473846(lVar2,&local_68,0);
      *(undefined1 *)(param_1 + 0x4e08) = uVar5;
      uVar8 = (**(code **)(*(longlong *)(param_1 + -0x2a68) + 0x50))(param_1 + -0x2a68);
      FUN_140dc01da(uVar8,&local_78,*(undefined1 *)(param_1 + 0x4e08));
      if (local_78 != 0) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        puVar3 = local_40;
        local_38 = 3;
        *local_40 = &PTR_LAB_14b3e9c20;
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
        local_40[2] = lVar9;
        *local_40 = &PTR_FUN_14b963aa0;
        local_40[3] = 0;
        FUN_14485c47a(local_40 + 3,lVar2);
        puVar3[4] = lVar2;
        FUN_140ebcfd8(local_78 + 0x18,local_80,&local_40);
        FUN_1449db362(&local_40);
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3c942 FUN_145a3c942 body=279 status=ok
// SIG undefined FUN_145a3c942(void)

void FUN_145a3c942(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4,
                  int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_5 == 0) {
LAB_145a3ca35:
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_5[1] != 0) && (*param_5 != DAT_14c948000)) {
      if (DAT_14cb88fb8 == 0) goto LAB_145a3ca35;
      uVar1 = FUN_144815d88(DAT_14cb88fb8,param_5);
    }
  }
  local_48 = *(undefined8 *)(param_4 + 4);
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_68 = param_3;
  if ((param_3 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_3 == 0) {
      local_60 = 0;
      goto LAB_145a3c9e3;
    }
  }
  else {
    FUN_1456cec3c(param_3);
  }
  uVar2 = FUN_145a3ca5a();
  local_60 = FUN_144718840(param_3,uVar2);
LAB_145a3c9e3:
  local_78 = uVar1;
  FUN_145a3cb40(param_1 + 0x34f0,param_2,&local_68,&local_58);
  if (*(longlong *)(param_5 + 6) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3ca5a FUN_145a3ca5a body=228 status=ok
// SIG undefined FUN_145a3ca5a(void)

longlong FUN_145a3ca5a(void)

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
  if (DAT_14cb6e448 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148798101;
    local_40 = &LAB_1459bef8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"PingableInterface",&DAT_14cb6e448,&DAT_148798100);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3cb40 FUN_145a3cb40 body=233 status=ok
// SIG undefined FUN_145a3cb40(void)

void FUN_145a3cb40(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145a3cc2a();
  if ((param_5 == 0) && (*param_3 != 0)) {
    param_5 = (**(code **)(*(longlong *)param_3[1] + 0x18))((longlong *)param_3[1],0);
  }
  lVar3 = param_1 + 0x40;
  iVar1 = *(int *)(param_1 + 0x408);
  *(uint *)(param_1 + 0x408) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x40c) < iVar1 + 1U) {
    FUN_148db56e8(lVar3,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar2 = lVar3;
  }
  FUN_145a3cca2(lVar2 + (longlong)iVar1 * 0x78,param_2,param_3,param_4,param_5);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x408))) {
    if (*(longlong *)(param_1 + 0x400) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x400);
    }
    FUN_145a3cd46(param_1,lVar3 + (longlong)iVar1 * 0x78);
    return;
  }
  return;
}



// FUNCTION 145a3cc2a FUN_145a3cc2a body=119 status=ok
// SIG undefined FUN_145a3cc2a(void)

void FUN_145a3cc2a(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 1;
  if (0 < (int)*(uint *)(param_1 + 0x408)) {
    lVar1 = 0;
    iVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar3 = param_1 + 0x40;
      }
      iVar2 = iVar2 + (uint)(*(int *)(lVar3 + lVar1) == param_2);
      lVar1 = lVar1 + 0x78;
    } while ((ulonglong)*(uint *)(param_1 + 0x408) * 0x78 - lVar1 != 0);
    iVar2 = iVar2 + 1;
  }
  lVar1 = FUN_1409f2447();
  iVar2 = iVar2 - *(int *)(lVar1 + 0x40);
  if (0 < iVar2) {
    do {
      FUN_148dabd94(param_1,param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 145a3cca2 FUN_145a3cca2 body=164 status=ok
// SIG undefined FUN_145a3cca2(void)

undefined4 *
FUN_145a3cca2(undefined4 *param_1,undefined4 param_2,longlong *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_14485c47a(param_1 + 2,*param_3);
  lVar4 = 0;
  if (*param_3 != 0) {
    lVar4 = param_3[1];
  }
  *(longlong *)(param_1 + 4) = lVar4;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[6] = *param_4;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_4 + 4);
  param_1[0xc] = 0x3fc00000;
  *(undefined8 *)(param_1 + 0xe) = param_5;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  DAT_14cbcee08 = DAT_14cbcee08 + 1;
  param_1[0x10] = DAT_14cbcee08;
  lVar4 = FUN_1409f2447();
  param_1[0x15] = *(undefined4 *)(lVar4 + 0x38);
  return param_1;
}



// FUNCTION 145a3cd46 FUN_145a3cd46 body=805 status=ok
// SIG undefined FUN_145a3cd46(void)

void FUN_145a3cd46(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar3 = true;
  if (*(longlong *)(param_2 + 4) == 0) {
LAB_145a3d034:
    plVar10 = (longlong *)0x0;
    lVar11 = 0;
  }
  else {
    cVar4 = FUN_144729dda(param_2 + 2);
    if (cVar4 == '\0') goto LAB_145a3d034;
    plVar2 = *(longlong **)(param_2 + 4);
    lVar11 = 0;
    plVar10 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar2 + 0x10))(plVar2);
      bVar3 = false;
      plVar10 = plVar2;
    }
  }
  lVar1 = param_1 + 0x20;
  lVar5 = FUN_14479d2ce(lVar1);
  if (lVar5 != 0) {
    uVar6 = FUN_1409f270e(param_1,*param_2);
    lVar5 = FUN_14479d2ce(lVar1);
    local_b8 = *(undefined8 *)(param_2 + 10);
    local_c8 = *(undefined8 **)(param_2 + 6);
    uStack_c0 = *(ulonglong *)(param_2 + 8);
    local_f0 = CONCAT44(local_f0._4_4_,param_2[0x10]);
    local_f8 = CONCAT44(local_f8._4_4_,param_2[0xc]);
    FUN_1409f25ec(lVar5 + 0x3490,uVar6,lVar11);
  }
  if (bVar3) {
    lVar5 = FUN_1414738f2(&DAT_14cb89590);
  }
  else {
    uVar6 = FUN_14479d2ce(lVar1);
    lVar5 = (**(code **)(*plVar10 + 0x18))(plVar10,uVar6);
  }
  if (lVar11 == 0) {
    if (lVar5 == 0) goto LAB_145a3d003;
  }
  else {
    (**(code **)(*plVar10 + 0x28))(plVar10);
    lVar7 = FUN_144a2f878();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      FUN_1446efa72(&local_c8,0,3,0x10);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,3);
      *local_c8 = &PTR_LAB_149e020b0;
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
      local_c8[2] = lVar9;
      *local_c8 = &PTR_FUN_14b9914a0;
      local_c8[3] = param_1;
      local_c8[4] = lVar11;
      local_c8[5] = param_2;
      FUN_1448b6402(lVar11 + 0x4e80,&local_d0,&local_c8);
      FUN_1449db362(&local_c8);
      *(undefined8 *)(param_2 + 0x12) = local_d0;
    }
    if (lVar5 == 0) goto LAB_145a3d003;
    FUN_145a3d06c(param_2);
  }
  cVar4 = FUN_144a87d38(lVar5 + 0x68);
  if (cVar4 != '\0') {
    local_a8 = *(undefined8 *)(param_2 + 6);
    uStack_a0 = *(undefined8 *)(param_2 + 8);
    local_98 = *(undefined8 *)(param_2 + 10);
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3ff00000;
    uStack_90 = 0;
    local_88 = 0;
    uStack_84 = 0x3ff00000;
    uStack_80 = 0;
    uStack_7c = 0x3ff00000;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0;
    local_68 = 0x3f800000;
    local_60 = 0;
    local_5c = 0;
    cVar4 = FUN_144729dda(lVar1);
    if (cVar4 != '\0') {
      uVar6 = FUN_14479d2ce(lVar1);
      lVar11 = FUN_1447210f0(uVar6);
      if (lVar11 != 0) {
        uVar6 = FUN_14479d2ce(lVar1);
        uVar8 = FUN_14479d2ce(lVar1);
        uVar8 = FUN_1447210f0(uVar8);
        local_f0 = 0;
        local_f8 = uVar6;
        FUN_140cb5d65(local_e8,uVar8,lVar5 + 0x68,&local_c8);
      }
    }
  }
LAB_145a3d003:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3d06c FUN_145a3d06c body=89 status=ok
// SIG undefined FUN_145a3d06c(void)

void FUN_145a3d06c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      if ((lVar2 != 0) &&
         ((*(longlong *)(param_1 + 0x38) != 0 &&
          (*(char *)(*(longlong *)(param_1 + 0x38) + 0x130) == '\x01')))) {
        FUN_141473908(param_1,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a3d0c6 FUN_145a3d0c6 body=186 status=ok
// SIG undefined FUN_145a3d0c6(void)

void FUN_145a3d0c6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  thunk_FUN_14016fae4();
  lVar1 = DAT_14cbd8eb0;
  cVar2 = FUN_144a8728e();
  if (cVar2 == '\0') {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  else {
    uVar4 = 0;
  }
  FUN_141473a4a(&local_28,*(undefined4 *)(lVar1 + uVar4 * 4));
  if ((longlong *)(param_1 + 0x80) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x80) = local_28;
    *(undefined4 *)(param_1 + 0x88) = local_20;
    *(undefined4 *)(param_1 + 0x8c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3d18c FUN_145a3d18c body=434 status=ok
// SIG undefined FUN_145a3d18c(void)

undefined8 * FUN_145a3d18c(undefined8 *param_1)

{
  int iVar1;
  
  FUN_145a3d412();
  *param_1 = &PTR_FUN_14a9f5850;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_145a3d396(param_1 + 0x3f);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  iVar1 = DAT_14c761644;
  if (DAT_14c761644 < 1) {
    iVar1 = 0;
  }
  FUN_145a3d33e(param_1 + 0x71,iVar1);
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  return param_1;
}



// FUNCTION 145a3d33e FUN_145a3d33e body=87 status=ok
// SIG undefined FUN_145a3d33e(void)

undefined8 * FUN_145a3d33e(undefined8 *param_1,int param_2)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)((longlong)param_1 + 100) = param_2;
  if (-1 < param_2) {
    if (param_2 != 0) {
      FUN_145a3d490(param_1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145a3d396 FUN_145a3d396 body=123 status=ok
// SIG undefined FUN_145a3d396(void)

void FUN_145a3d396(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 145a3d412 FUN_145a3d412 body=125 status=ok
// SIG undefined FUN_145a3d412(void)

undefined8 * FUN_145a3d412(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149e73a90;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145a3d490 FUN_145a3d490 body=103 status=ok
// SIG undefined FUN_145a3d490(void)

undefined8 FUN_145a3d490(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xc)) {
    uVar4 = uVar2 / 0xc & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc,4);
  }
  return uVar3;
}



// FUNCTION 145a3d4f7 FUN_145a3d4f7 body=95 status=ok
// SIG undefined FUN_145a3d4f7(void)

void FUN_145a3d4f7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a3d556(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a571b20;
  puVar1[5] = &PTR_LAB_14a571f30;
  puVar1[0x2d] = &PTR_LAB_14a571f70;
  puVar1[0x2e] = &PTR_LAB_14a571f80;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  return;
}



// FUNCTION 145a3d556 FUN_145a3d556 body=192 status=ok
// SIG undefined FUN_145a3d556(void)

undefined8 * FUN_145a3d556(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_145a3d616();
  *param_1 = &PTR_FUN_14aaad120;
  param_1[5] = &PTR_FUN_14aaad530;
  param_1[0x2d] = &PTR_LAB_14aaad570;
  param_1[0x2e] = &PTR_FUN_14aaad580;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x7f] = puVar1;
  param_1[0x7e] = puVar1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(byte *)((longlong)param_1 + 0x34c) = *(byte *)((longlong)param_1 + 0x34c) | 1;
  LOCK();
  *(undefined4 *)(param_1 + 0x83) = 0;
  UNLOCK();
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0x40000000200;
  *(undefined4 *)(param_1 + 0x87) = 2;
  return param_1;
}



// FUNCTION 145a3d616 FUN_145a3d616 body=637 status=ok
// SIG undefined FUN_145a3d616(void)

undefined8 * FUN_145a3d616(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  FUN_145a3d894();
  *param_1 = &PTR_FUN_14a7593c0;
  param_1[5] = &PTR_FUN_14a7597d0;
  param_1[0x2d] = &PTR_LAB_14a759810;
  param_1[0x2e] = &PTR_FUN_14a759820;
  *(undefined1 *)((longlong)param_1 + 0x184) = 4;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_1458d7850(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x5f) = 0x1010101;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x357) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0xf8,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a75ab40;
  FUN_145a3d998(plVar5 + 2);
  param_1[0x7c] = plVar5 + 2;
  param_1[0x7d] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  *(undefined4 *)(param_1 + 0x6d) = 0x3f800000;
  param_1[0x6c] = 0x3f800000461c4000;
  *(byte *)((longlong)param_1 + 0x34d) = *(byte *)((longlong)param_1 + 0x34d) & 0xcf;
  puVar3 = param_1 + 0x60;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x66) = 0;
  UNLOCK();
  iVar4 = *(int *)(param_1 + 0x61);
  *(uint *)(param_1 + 0x61) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x30c) < iVar4 + 1U) {
    FUN_14475e4ac(puVar3,iVar4);
  }
  *(undefined4 *)(param_1[0x60] + (longlong)iVar4 * 4) = 0x42c80000;
  iVar4 = *(int *)(param_1 + 0x61);
  *(uint *)(param_1 + 0x61) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x30c) < iVar4 + 1U) {
    FUN_14475e4ac(puVar3,iVar4);
  }
  *(undefined4 *)(param_1[0x60] + (longlong)iVar4 * 4) = 0x43fa0000;
  iVar4 = *(int *)(param_1 + 0x61);
  *(uint *)(param_1 + 0x61) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x30c) < iVar4 + 1U) {
    FUN_14475e4ac(puVar3,iVar4);
  }
  *(undefined4 *)(param_1[0x60] + (longlong)iVar4 * 4) = 0x447a0000;
  iVar4 = *(int *)(param_1 + 0x61);
  *(uint *)(param_1 + 0x61) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x30c) < iVar4 + 1U) {
    FUN_14475e4ac(puVar3,iVar4);
  }
  *(undefined4 *)(param_1[0x60] + (longlong)iVar4 * 4) = 0x459c4000;
  *(byte *)((longlong)param_1 + 0x34d) = *(byte *)((longlong)param_1 + 0x34d) & 0xf3;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(byte *)((longlong)param_1 + 0x34c) = *(byte *)((longlong)param_1 + 0x34c) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x184) = 5;
  *(undefined4 *)(param_1 + 0x2f) = 0x50;
  return param_1;
}



// FUNCTION 145a3d894 FUN_145a3d894 body=260 status=ok
// SIG undefined FUN_145a3d894(void)

undefined8 * FUN_145a3d894(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aa9b340;
  param_1[5] = &PTR_FUN_14aa9b6e0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0xe5) = 3;
  param_1[0x1d] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f0000003c23d70a;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xbf80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x1c;
  return param_1;
}



// FUNCTION 145a3d998 FUN_145a3d998 body=152 status=ok
// SIG undefined FUN_145a3d998(void)

undefined8 * FUN_145a3d998(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145a3da30(param_1 + 2);
  FUN_145a3da42(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  FUN_1446ddc76((longlong)param_1 + 0x8c,"FSoundWaveProxy_InvalidFormat",1);
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0x80;
  return param_1;
}



// FUNCTION 145a3da30 FUN_145a3da30 body=18 status=ok
// SIG undefined FUN_145a3da30(void)

undefined8 * FUN_145a3da30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145a3da42 FUN_145a3da42 body=28 status=ok
// SIG undefined FUN_145a3da42(void)

void FUN_145a3da42(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0xffffffff00000000;
  return;
}



// FUNCTION 145a3da74 FUN_145a3da74 body=157 status=ok
// SIG undefined FUN_145a3da74(void)

void FUN_145a3da74(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((-1 < (int)param_4) && (lVar3 = *(longlong *)(param_1 + 0x58), lVar3 != 0)) &&
      ((int)param_4 < *(int *)(lVar3 + 0x60))) &&
     ((lVar3 = (ulonglong)param_4 * 0x68 + *(longlong *)(lVar3 + 0x58), lVar3 != 0 &&
      ((longlong)*(int *)(lVar3 + 0x30) != 0)))) {
    lVar2 = *(longlong *)(lVar3 + 0x28);
    lVar1 = (longlong)*(int *)(lVar3 + 0x30) * 0x18;
    do {
      if (*(char *)(lVar3 + 0x38) == '\0') {
        FUN_145a3db12(param_1,lVar2,param_2,param_3,*(undefined1 *)(lVar3 + 0x39));
      }
      else if (*(char *)(lVar3 + 0x38) == '\x01') {
        FUN_148961dd0(param_1,lVar2,param_2,param_3);
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 145a3db12 FUN_145a3db12 body=207 status=ok
// SIG undefined FUN_145a3db12(void)

void FUN_145a3db12(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,char param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\x01') {
    uVar1 = FUN_14479d2ce(param_1 + 0x50);
    local_58 = *param_2;
    local_50 = *(undefined4 *)(param_2 + 1);
    local_48 = 0;
    FUN_141431052(param_4,&local_58,uVar1);
  }
  else if (param_3 == '\0') {
    if (param_5 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_14479d2ce(param_1 + 0x50);
    }
    uVar2 = FUN_14479d2ce(param_1 + 0x50);
    local_40 = *param_2;
    local_38 = *(undefined4 *)(param_2 + 1);
    local_30 = 0;
    FUN_145acb39c(param_4,&local_40,uVar2,uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3dbe2 FUN_145a3dbe2 body=418 status=ok
// SIG undefined FUN_145a3dbe2(void)

void FUN_145a3dbe2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_144a7757c();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar5 = 0;
  }
  lVar5 = *(longlong *)(lVar5 + 0x40);
  if (lVar5 == 0) {
    lVar5 = FUN_14475ec7e();
  }
  lVar5 = FUN_14019257c(lVar5);
  if ((lVar5 == 0) || (lVar4 = FUN_14477ba68(lVar5,*(undefined8 *)(lVar4 + 0x30)), lVar4 == 0)) {
    *(undefined2 *)(param_1 + 0x28) = 0x101;
    lVar5 = FUN_145a3dd86(DAT_14cb0d2b0);
    FUN_145a3df22(lVar5 + 0x38,&local_78,param_1,&LAB_147db6b1c);
    plVar1 = (longlong *)(lVar5 + 0x50);
    lVar4 = lVar5 + 0x60;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar6 = 0;
    local_48 = lVar4;
    if (*(int *)(lVar5 + 0x78) != 0) {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(lVar5 + 0x78);
    }
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar2 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar3, local_48 != lVar4)) {
      do {
        do {
          local_60 = uVar3;
          FUN_147db6b22(param_1,*(undefined8 *)(*local_78 + (longlong)iVar2 * 0xb8));
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar2 = local_60._4_4_;
          uVar3 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while ((local_68 != lVar4) || (local_78 != plVar1));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3dd86 FUN_145a3dd86 body=105 status=ok
// SIG undefined FUN_145a3dd86(void)

void FUN_145a3dd86(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a3de3c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145a3ddf0(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3ddf0 FUN_145a3ddf0 body=76 status=ok
// SIG undefined FUN_145a3ddf0(void)

void FUN_145a3ddf0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a3de3c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145a3de2d;
    }
  }
  lVar2 = 0;
LAB_145a3de2d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145a3de3c FUN_145a3de3c body=228 status=ok
// SIG undefined FUN_145a3de3c(void)

longlong FUN_145a3de3c(void)

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
  if (DAT_14cac0e38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_14786c53f;
    local_40 = &LAB_145ab8561;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"ExternalDataLayerEngineSubsystem",&DAT_14cac0e38,
                  &DAT_14786c53e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0e38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3df22 FUN_145a3df22 body=244 status=ok
// SIG undefined FUN_145a3df22(void)

undefined8
FUN_145a3df22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ab18c80;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14ab18c10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145a3e018(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3e018 FUN_145a3e018 body=216 status=ok
// SIG undefined FUN_145a3e018(void)

undefined8 * FUN_145a3e018(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145a3e0fe FUN_145a3e0fe body=24 status=ok
// SIG undefined FUN_145a3e0fe(void)

bool FUN_145a3e0fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145a3e116 FUN_145a3e116 body=26 status=ok
// SIG undefined FUN_145a3e116(void)

void FUN_145a3e116(undefined8 param_1)

{
  FUN_145a3e192();
  FUN_145a3e130(param_1);
  return;
}



// FUNCTION 145a3e130 FUN_145a3e130 body=98 status=ok
// SIG undefined FUN_145a3e130(void)

void FUN_145a3e130(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x22c) == '\x01') {
    lVar1 = FUN_14479d2ce(param_1 + 0x224);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x388,param_1);
      FUN_140457ffc(lVar1 + 0x3a0,param_1);
    }
  }
  if (*(char *)(param_1 + 0x22c) == '\x01') {
    *(undefined1 *)(param_1 + 0x22c) = 0;
  }
  return;
}



// FUNCTION 145a3e192 FUN_145a3e192 body=228 status=ok
// SIG undefined FUN_145a3e192(void)

void FUN_145a3e192(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145a3e276();
  *(undefined1 *)(param_1 + 0x219) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1f0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
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
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x200);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x200) = 0;
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
  *(undefined8 *)(param_1 + 0x208) = 0;
  plVar3 = *(longlong **)(param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145a3e272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a3e276 FUN_145a3e276 body=91 status=ok
// SIG undefined FUN_145a3e276(void)

void FUN_145a3e276(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145a3e2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a3e2d4 FUN_145a3e2d4 body=26 status=ok
// SIG undefined FUN_145a3e2d4(void)

undefined8 FUN_145a3e2d4(longlong param_1,undefined8 param_2)

{
  FUN_145a3e2ee(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145a3e2ee FUN_145a3e2ee body=422 status=ok
// SIG undefined FUN_145a3e2ee(void)

longlong * FUN_145a3e2ee(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb76818 != (longlong *)0x0 && DAT_14cb76820 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb76818 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb76818;
    if (DAT_14cb76820 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145a3e3bf;
  }
  lVar3 = FUN_14001cc68(0xa0,0x10);
  FUN_145a3e496(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3f6450;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145a3e3bf;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145a3e3bf;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145a3e43a:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145a3e3b5;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145a3e43a;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145a3e3b5:
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
LAB_145a3e3bf:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a3e496 FUN_145a3e496 body=211 status=ok
// SIG undefined FUN_145a3e496(void)

undefined8 * FUN_145a3e496(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3f5f30;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1412cbb62(param_1 + 6);
  *param_1 = &PTR_FUN_14b3f5d90;
  param_1[4] = &PTR_FUN_14b3f5dc0;
  param_1[6] = &PTR_FUN_14b3f5de0;
  param_1[8] = 0x100000000;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xd] = puVar1;
  param_1[0xc] = puVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar2 = FUN_145a3e56a();
  FUN_145a3e5da(1,uVar2);
  uVar2 = FUN_145a3e5a2();
  FUN_145a3e5da(2,uVar2);
  return param_1;
}



// FUNCTION 145a3e56a FUN_145a3e56a body=55 status=ok
// SIG undefined FUN_145a3e56a(void)

void FUN_145a3e56a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56670 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56670 = FUN_140002ddd(FUN_1464b812a,uVar1,L"ReplicatedDamageRequest");
  }
  return;
}



// FUNCTION 145a3e5a2 FUN_145a3e5a2 body=55 status=ok
// SIG undefined FUN_145a3e5a2(void)

void FUN_145a3e5a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56688 = FUN_140002ddd(FUN_1464b818a,uVar1,L"ReplicatedStopDamageRequest");
  }
  return;
}



// FUNCTION 145a3e5da FUN_145a3e5da body=319 status=ok
// SIG undefined FUN_145a3e5da(void)

void FUN_145a3e5da(byte param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  byte local_41;
  undefined8 local_40;
  byte *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_41 = param_1;
  local_40 = param_2;
  FUN_140b4bb10();
  if (DAT_14cb7d7d0 != DAT_14cb7d7fc) {
    puVar7 = &DAT_14cb7d800;
    if (DAT_14cb7d808 != (undefined *)0x0) {
      puVar7 = DAT_14cb7d808;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(DAT_14cb7d810 - 1U & (uint)param_1) * 4);
    while (iVar5 != -1) {
      lVar4 = DAT_14cb7d7c8 + (longlong)iVar5 * 0x20;
      if (*(byte *)(DAT_14cb7d7c8 + (longlong)iVar5 * 0x20) == param_1) {
        if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) goto LAB_145a3e6c3;
        break;
      }
      iVar5 = *(int *)(lVar4 + 0x18);
    }
  }
  FUN_140b4bb10();
  plVar6 = (longlong *)FUN_145a3e71a(&local_40);
  local_58 = plVar6 + 2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_38 = &local_41;
  local_30 = &local_58;
  local_50 = plVar6;
  FUN_145a3e782(local_24);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
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
LAB_145a3e6c3:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3e71a FUN_145a3e71a body=103 status=ok
// SIG undefined FUN_145a3e71a(void)

undefined8 * FUN_145a3e71a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b403360;
  uVar1 = *param_1;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,uVar1);
  FUN_14142144e(puVar2 + 3,uVar1,DAT_14c75f7d0);
  return puVar2;
}



// FUNCTION 145a3e782 FUN_145a3e782 body=306 status=ok
// SIG undefined FUN_145a3e782(void)

undefined4 * FUN_145a3e782(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a3e97a(local_40);
  puVar2 = (undefined8 *)param_2[1];
  *local_38 = *(byte *)*param_2;
  *(undefined8 *)(local_38 + 8) = *puVar2;
  *(undefined8 *)(local_38 + 0x10) = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  local_38[0x18] = 0xff;
  local_38[0x19] = 0xff;
  local_38[0x1a] = 0xff;
  local_38[0x1b] = 0xff;
  local_44 = local_40[0];
  bVar1 = *local_38;
  cVar5 = FUN_145a3e8b6(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14cb7d7d0 - DAT_14cb7d7fc;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14cb7d810)) {
      uVar8 = DAT_14cb7d810 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0x1c) = uVar8;
      puVar7 = DAT_14cb7d808;
      if (DAT_14cb7d808 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d800;
      }
      *(undefined4 *)(local_38 + 0x18) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb7d810 - 1U & uVar8) * 4);
      puVar7 = DAT_14cb7d808;
      if (DAT_14cb7d808 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d800;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb7d810 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14cb7d810 = iVar9;
      FUN_141474222();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3e8b6 FUN_145a3e8b6 body=196 status=ok
// SIG undefined FUN_145a3e8b6(void)

undefined8 FUN_145a3e8b6(uint param_1,char *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14cb7d7d0 - DAT_14cb7d7fc != 1) && (DAT_14cb7d7d0 != DAT_14cb7d7fc)) {
    puVar9 = &DAT_14cb7d800;
    if (DAT_14cb7d808 != (undefined *)0x0) {
      puVar9 = DAT_14cb7d808;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14cb7d810 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(DAT_14cb7d7c8 + (longlong)iVar10 * 0x20);
        if (*(char *)(DAT_14cb7d7c8 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(puVar3 + 4);
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
          uVar5 = *(undefined4 *)param_2;
          uVar6 = *(undefined4 *)(param_2 + 4);
          uVar7 = *(undefined4 *)(param_2 + 8);
          uVar8 = *(undefined4 *)(param_2 + 0xc);
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_2 + 0x10);
          *puVar3 = uVar5;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          FUN_148864706(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 145a3e97a FUN_145a3e97a body=269 status=ok
// SIG undefined FUN_145a3e97a(void)

int * FUN_145a3e97a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d7f8;
  iVar3 = DAT_14cb7d7d0;
  if (DAT_14cb7d7fc == 0) {
    iVar2 = DAT_14cb7d7d0 + 1;
    bVar7 = DAT_14cb7d7d4 == DAT_14cb7d7d0;
    DAT_14cb7d7d0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7d7c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d7d8,1);
    puVar4 = DAT_14cb7d7e8;
    if (DAT_14cb7d7e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7d7d8;
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
    lVar6 = (longlong)DAT_14cb7d7f8;
    DAT_14cb7d7f8 = *(int *)(DAT_14cb7d7c8 + 4 + lVar6 * 0x20);
    DAT_14cb7d7fc = DAT_14cb7d7fc + -1;
    if (DAT_14cb7d7fc != 0) {
      *(undefined4 *)(DAT_14cb7d7c8 + (longlong)DAT_14cb7d7f8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d7d8;
  if (DAT_14cb7d7e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7d7e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7d7c8;
  return param_1;
}



// FUNCTION 145a3ea92 FUN_145a3ea92 body=183 status=ok
// SIG undefined FUN_145a3ea92(void)

undefined8 * FUN_145a3ea92(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b90cc60;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0x101;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x800000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x400000000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb9) = 1;
  *(undefined1 *)((longlong)param_1 + 0xbb) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x1000000;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 145a3eb54 FUN_145a3eb54 body=50 status=ok
// SIG undefined FUN_145a3eb54(void)

undefined8 * FUN_145a3eb54(undefined8 *param_1)

{
  FUN_145a3eb86();
  *param_1 = &PTR_FUN_14abcee90;
  param_1[5] = &PTR_LAB_14abcf130;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 145a3eb86 FUN_145a3eb86 body=50 status=ok
// SIG undefined FUN_145a3eb86(void)

undefined8 * FUN_145a3eb86(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aba59a0;
  param_1[5] = &PTR_FUN_14aba5c40;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145a3ebb8 FUN_145a3ebb8 body=40 status=ok
// SIG undefined FUN_145a3ebb8(void)

undefined8 FUN_145a3ebb8(undefined8 param_1,int param_2)

{
  FUN_145a3ebe0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3ebe0 FUN_145a3ebe0 body=143 status=ok
// SIG undefined FUN_145a3ebe0(void)

void FUN_145a3ebe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b443910;
  param_1[5] = &PTR_FUN_14b443bb0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ec70(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ef70(param_1 + 0x2b);
  FUN_145a3ee28(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a3ec70 FUN_145a3ec70 body=55 status=ok
// SIG undefined FUN_145a3ec70(void)

void FUN_145a3ec70(longlong *param_1)

{
  FUN_145a3eca8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3eca8 FUN_145a3eca8 body=383 status=ok
// SIG undefined FUN_145a3eca8(void)

void FUN_145a3eca8(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 145a3ee28 FUN_145a3ee28 body=160 status=ok
// SIG undefined FUN_145a3ee28(void)

void FUN_145a3ee28(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b446c70;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3eec8(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ef00(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ef38(param_1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145a3eec8 FUN_145a3eec8 body=55 status=ok
// SIG undefined FUN_145a3eec8(void)

void FUN_145a3eec8(longlong *param_1)

{
  FUN_145a3f2aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3ef00 FUN_145a3ef00 body=55 status=ok
// SIG undefined FUN_145a3ef00(void)

void FUN_145a3ef00(longlong *param_1)

{
  FUN_145a3efa6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3ef38 FUN_145a3ef38 body=55 status=ok
// SIG undefined FUN_145a3ef38(void)

void FUN_145a3ef38(longlong *param_1)

{
  FUN_145a3f128(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3ef70 FUN_145a3ef70 body=53 status=ok
// SIG undefined FUN_145a3ef70(void)

void FUN_145a3ef70(longlong *param_1)

{
  FUN_145a3f446();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a3efa6 FUN_145a3efa6 body=384 status=ok
// SIG undefined FUN_145a3efa6(void)

void FUN_145a3efa6(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 145a3f128 FUN_145a3f128 body=384 status=ok
// SIG undefined FUN_145a3f128(void)

void FUN_145a3f128(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_14018802a();
      }
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
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145a3f2aa FUN_145a3f2aa body=411 status=ok
// SIG undefined FUN_145a3f2aa(void)

void FUN_145a3f2aa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x18 + lVar4 * 0xf0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0xf0) != 0) {
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
    FUN_140e2ec3a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
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



// FUNCTION 145a3f446 FUN_145a3f446 body=370 status=ok
// SIG undefined FUN_145a3f446(void)

void FUN_145a3f446(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x28 + lVar3 * 0x68) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x68) != 0) {
        FUN_1400020a8();
      }
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3f5ba FUN_145a3f5ba body=40 status=ok
// SIG undefined FUN_145a3f5ba(void)

undefined8 FUN_145a3f5ba(undefined8 param_1,int param_2)

{
  FUN_145a3f5e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3f5e2 FUN_145a3f5e2 body=71 status=ok
// SIG undefined FUN_145a3f5e2(void)

void FUN_145a3f5e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b84dc80;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a3f634 FUN_145a3f634 body=481 status=ok
// SIG undefined FUN_145a3f634(void)

undefined8 * FUN_145a3f634(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cad00;
  *(undefined4 *)(param_1 + 7) = 4;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0xc;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xe2);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 0xbc + lVar3 * 2);
      local_38 = FUN_145a3f816();
      if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_38);
      }
      FUN_14122166c(&local_38,uVar1);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 9);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_48 = FUN_14588a226();
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_48);
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1458f0824();
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    local_60 = FUN_14099c56c();
    if (local_60 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_60);
    }
    local_68 = param_1[2];
    if ((local_68 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_68,&local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3f816 FUN_145a3f816 body=228 status=ok
// SIG undefined FUN_145a3f816(void)

longlong FUN_145a3f816(void)

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
  if (DAT_14cab5a60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147655e73;
    local_40 = &LAB_145a3f629;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"DoublePerlinNoiseChannelEvaluatorSystem",
                  &DAT_14cab5a60,&DAT_147655e72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5a60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3f906 FUN_145a3f906 body=481 status=ok
// SIG undefined FUN_145a3f906(void)

undefined8 * FUN_145a3f906(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cb470;
  *(undefined4 *)(param_1 + 7) = 4;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0xc;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xe0);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 0xbc + lVar3 * 2);
      local_38 = FUN_145a3fae8();
      if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_38);
      }
      FUN_14122166c(&local_38,uVar1);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 9);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_48 = FUN_14588a226();
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_48);
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1458f0824();
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    local_60 = FUN_14099c56c();
    if (local_60 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_60);
    }
    local_68 = param_1[2];
    if ((local_68 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_68,&local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3fae8 FUN_145a3fae8 body=228 status=ok
// SIG undefined FUN_145a3fae8(void)

longlong FUN_145a3fae8(void)

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
  if (DAT_14cab5ab8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14765601b;
    local_40 = &LAB_145a3f8fb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"FloatPerlinNoiseChannelEvaluatorSystem",
                  &DAT_14cab5ab8,&DAT_14765601a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a3fbd8 FUN_145a3fbd8 body=235 status=ok
// SIG undefined FUN_145a3fbd8(void)

undefined8 * FUN_145a3fbd8(undefined8 *param_1)

{
  FUN_145a3fcc4();
  *param_1 = &PTR_FUN_14b4bf820;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 145a3fcc4 FUN_145a3fcc4 body=32 status=ok
// SIG undefined FUN_145a3fcc4(void)

undefined8 * FUN_145a3fcc4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9f4d50;
  return param_1;
}



// FUNCTION 145a3fce4 FUN_145a3fce4 body=37 status=ok
// SIG undefined FUN_145a3fce4(void)

void FUN_145a3fce4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x108);
  FUN_145a3fd0a(param_2);
  return;
}



// FUNCTION 145a3fd0a FUN_145a3fd0a body=241 status=ok
// SIG undefined FUN_145a3fd0a(void)

void FUN_145a3fd0a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b5d2780;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  param_1[5] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[7] = DAT_14c8464e0;
  param_1[8] = uVar1;
  param_1[9] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0x40a000003f800000;
  param_1[0x14] = 0x3fc000003f800000;
  param_1[0x15] = 0x4080000040000000;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbd) = 1;
  param_1[0x18] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



// FUNCTION 145a3fdfc FUN_145a3fdfc body=103 status=ok
// SIG undefined FUN_145a3fdfc(void)

ulonglong FUN_145a3fdfc(longlong param_1)

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
LAB_145a3fe46:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a3fe46;
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



// FUNCTION 145a3fe70 FUN_145a3fe70 body=303 status=ok
// SIG undefined FUN_145a3fe70(void)

void FUN_145a3fe70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined2 *puVar4;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    puVar4 = DAT_14cbdf7d0;
    if (DAT_14cbdf7d8 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,puVar4,&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a3ffa0 FUN_145a3ffa0 body=38 status=ok
// SIG undefined FUN_145a3ffa0(void)

undefined8 FUN_145a3ffa0(undefined8 param_1,int param_2)

{
  FUN_145a3ffc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a3ffc6 FUN_145a3ffc6 body=1449 status=ok
// SIG undefined FUN_145a3ffc6(void)

void FUN_145a3ffc6(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a2e4df0;
  param_1[2] = &PTR_FUN_14a2e4ee0;
  param_1[0x88] = 0;
  FUN_145a4080a(param_1 + 6);
  lVar7 = 0;
  bVar6 = true;
  do {
    bVar8 = bVar6;
    if (param_1[lVar7 + 0xa4] != 0) {
      FUN_1400020a8();
    }
    lVar7 = 1;
    bVar6 = false;
  } while (bVar8);
  FUN_145a40db8(param_1 + 0x41c);
  FUN_145a40a22(param_1 + 0x41f);
  if (param_1[5] != 0) {
    FUN_1472c7a14(param_1[5],param_1);
  }
  FUN_145a406d8(param_1 + 0x42b);
  if ((longlong *)param_1[0x425] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x425] + 0x38))();
  }
  FUN_145a40854(param_1 + 0x41f);
  if (param_1[0x41d] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x41c];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar7 = 0;
  do {
    FUN_145a40570((longlong)param_1 + lVar7 + 0x1f20);
    lVar7 = lVar7 + -0x28;
  } while (lVar7 != -0x50);
  FUN_145a40a96(param_1 + 0x3cf);
  puVar4 = (undefined8 *)param_1[0x3c3];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((longlong *)param_1[0x3c2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c2] + 0x38))();
  }
  if ((longlong *)param_1[0x3c1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c1] + 0x38))();
  }
  lVar7 = param_1[0x3ba];
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar7);
  }
  lVar7 = param_1[0x3b9];
  if (lVar7 != 0) {
    (**(code **)(lVar7 + -0x10))(lVar7 + -0x10);
  }
  puVar4 = (undefined8 *)param_1[0x3b0];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar7 = param_1[0x3ae];
  if (lVar7 != 0) {
    (**(code **)(lVar7 + -0x10))(lVar7 + -0x10);
  }
  if (param_1[0x3ad] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0x3ad] + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x3ac] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0x3ac] + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x3ab] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0x3ab] + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = (undefined8 *)param_1[0x3a9];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0x3a2];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((longlong *)param_1[0x3a1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3a1] + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (param_1[0x39f] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x397);
  *(undefined4 *)(param_1 + 0x396) = 0;
  if (param_1[0x395] != 0) {
    FUN_1400020a8();
  }
  FUN_145a40668(param_1 + 0x38d);
  if ((longlong *)param_1[0x389] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x389] + 0x38))();
  }
  if ((longlong *)param_1[0x388] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x388] + 0x38))();
  }
  FUN_145a40b0c(param_1 + 0x37a);
  FUN_145a40c02(param_1 + 0x30e);
  if ((longlong *)param_1[0x30c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x30c] + 0x38))();
  }
  if ((longlong *)param_1[0x30b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x30b] + 0x38))();
  }
  if ((longlong *)param_1[0x30a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x30a] + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x307) = 0;
  if (param_1[0x306] != 0) {
    FUN_1400020a8();
  }
  FUN_145a405c6(param_1 + 0x2fe);
  lVar7 = 0;
  do {
    plVar5 = *(longlong **)((longlong)param_1 + lVar7 + 0x17c8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
    lVar7 = lVar7 + -8;
  } while (lVar7 != -0x10);
  FUN_144734798(param_1 + 0xde);
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xd6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd6] + 0x38))();
  }
  FUN_145a4094a(param_1 + 0xcd);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_145a406a0(param_1 + 0xc2);
  FUN_145a4089e(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  FUN_145a405fc(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  FUN_145a40632(param_1 + 0x9a);
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_145a409b2(param_1 + 0x7d);
  FUN_145a40e54(param_1 + 0x53);
  FUN_145a407c4(param_1 + 0x4b);
  FUN_145a40786(param_1 + 0x31);
  if (param_1[0x30] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0x30] + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_145a40748(param_1 + 6);
  FUN_144a4509c(param_1 + 2);
  return;
}



// FUNCTION 145a40570 FUN_145a40570 body=48 status=ok
// SIG undefined FUN_145a40570(void)

void FUN_145a40570(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong **)(param_1 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + lVar1) + 0x38))();
    }
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x10);
  return;
}



// FUNCTION 145a405a0 FUN_145a405a0 body=38 status=ok
// SIG undefined FUN_145a405a0(void)

undefined8 FUN_145a405a0(undefined8 param_1,int param_2)

{
  FUN_1414750f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a405c6 FUN_145a405c6 body=53 status=ok
// SIG undefined FUN_145a405c6(void)

void FUN_145a405c6(longlong *param_1)

{
  FUN_145a412e8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a405fc FUN_145a405fc body=53 status=ok
// SIG undefined FUN_145a405fc(void)

void FUN_145a405fc(longlong *param_1)

{
  FUN_145a41458();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a40632 FUN_145a40632 body=53 status=ok
// SIG undefined FUN_145a40632(void)

void FUN_145a40632(longlong *param_1)

{
  FUN_145a41178();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a40668 FUN_145a40668 body=55 status=ok
// SIG undefined FUN_145a40668(void)

void FUN_145a40668(longlong *param_1)

{
  FUN_14021f300(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a406a0 FUN_145a406a0 body=55 status=ok
// SIG undefined FUN_145a406a0(void)

void FUN_145a406a0(longlong *param_1)

{
  FUN_145a40b86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a406d8 FUN_145a406d8 body=58 status=ok
// SIG undefined FUN_145a406d8(void)

void FUN_145a406d8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a40712(param_1);
  return;
}



// FUNCTION 145a40712 FUN_145a40712 body=53 status=ok
// SIG undefined FUN_145a40712(void)

void FUN_145a40712(longlong *param_1)

{
  FUN_145a408f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a40748 FUN_145a40748 body=61 status=ok
// SIG undefined FUN_145a40748(void)

void FUN_145a40748(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_1456eeebb(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a40786 FUN_145a40786 body=62 status=ok
// SIG undefined FUN_145a40786(void)

void FUN_145a40786(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xa8;
  do {
    FUN_141474ffa(*(undefined8 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 8 + lVar1));
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return;
}



// FUNCTION 145a407c4 FUN_145a407c4 body=69 status=ok
// SIG undefined FUN_145a407c4(void)

void FUN_145a407c4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a2e98f0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_145bf0f7a(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_141475090(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145a4080a FUN_145a4080a body=73 status=ok
// SIG undefined FUN_145a4080a(void)

void FUN_145a4080a(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x14c)) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar1 = param_1;
    }
    FUN_1456eeebb(lVar1,*(undefined4 *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
    return;
  }
  FUN_1456eee6e(param_1,0);
  return;
}



// FUNCTION 145a40854 FUN_145a40854 body=74 status=ok
// SIG undefined FUN_145a40854(void)

void FUN_145a40854(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a4089b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145a4089e FUN_145a4089e body=81 status=ok
// SIG undefined FUN_145a4089e(void)

void FUN_145a4089e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a408f0 FUN_145a408f0 body=89 status=ok
// SIG undefined FUN_145a408f0(void)

void FUN_145a408f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 145a4094a FUN_145a4094a body=104 status=ok
// SIG undefined FUN_145a4094a(void)

void FUN_145a4094a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x28;
  do {
    puVar2 = *(undefined8 **)(param_1 + lVar3);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x18);
  lVar3 = 0x18;
  do {
    if (*(longlong **)(param_1 + lVar3) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + lVar3) + 0x38))();
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 8);
  return;
}



// FUNCTION 145a409b2 FUN_145a409b2 body=112 status=ok
// SIG undefined FUN_145a409b2(void)

void FUN_145a409b2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x38 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != -0x10);
  lVar2 = 0x28;
  do {
    if (*(longlong **)(param_1 + lVar2) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + lVar2) + 0x38))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x18);
  lVar2 = 0x18;
  do {
    if (*(longlong **)(param_1 + lVar2) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + lVar2) + 0x38))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 8);
  return;
}



// FUNCTION 145a40a22 FUN_145a40a22 body=115 status=ok
// SIG undefined FUN_145a40a22(void)

void FUN_145a40a22(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 5) = 0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = DAT_14c8464f0;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a40a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145a40a96 FUN_145a40a96 body=117 status=ok
// SIG undefined FUN_145a40a96(void)

void FUN_145a40a96(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
  }
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x58 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != -0x10);
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x48 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != -0x10);
  return;
}



// FUNCTION 145a40b0c FUN_145a40b0c body=122 status=ok
// SIG undefined FUN_145a40b0c(void)

void FUN_145a40b0c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a40b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



// FUNCTION 145a40b86 FUN_145a40b86 body=123 status=ok
// SIG undefined FUN_145a40b86(void)

void FUN_145a40b86(longlong param_1,int param_2)

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



// FUNCTION 145a40c02 FUN_145a40c02 body=134 status=ok
// SIG undefined FUN_145a40c02(void)

void FUN_145a40c02(longlong param_1)

{
  FUN_145a4102c(param_1 + 0x2e8);
  FUN_145a4102c(param_1 + 0x270);
  if (*(longlong **)(param_1 + 0x268) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
  }
  FUN_145a40c88(param_1 + 0x1f0);
  FUN_145a40c88(param_1 + 0x180);
  FUN_145a40cd8(param_1 + 0x130);
  FUN_145a40d2e(param_1 + 0xc0);
  FUN_145a40f88(param_1);
  return;
}



// FUNCTION 145a40c88 FUN_145a40c88 body=79 status=ok
// SIG undefined FUN_145a40c88(void)

void FUN_145a40c88(longlong *param_1)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a40cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



// FUNCTION 145a40cd8 FUN_145a40cd8 body=86 status=ok
// SIG undefined FUN_145a40cd8(void)

void FUN_145a40cd8(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a40d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  return;
}



// FUNCTION 145a40d2e FUN_145a40d2e body=137 status=ok
// SIG undefined FUN_145a40d2e(void)

void FUN_145a40d2e(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a40db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
  return;
}



// FUNCTION 145a40db8 FUN_145a40db8 body=156 status=ok
// SIG undefined FUN_145a40db8(void)

void FUN_145a40db8(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong)(int)param_1[2] != 0) {
    plVar5 = (longlong *)param_1[1];
    plVar4 = plVar5 + (longlong)(int)param_1[2] * 2;
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        FUN_14003821a(lVar3);
        FUN_1400020a8(lVar3);
      }
      *plVar5 = 0;
      *(undefined1 *)(plVar5 + 1) = 0;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_147196bf6(param_1 + 1);
    return;
  }
  return;
}



// FUNCTION 145a40e54 FUN_145a40e54 body=163 status=ok
// SIG undefined FUN_145a40e54(void)

void FUN_145a40e54(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2ec6d0;
  if (param_1[0x29] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x29] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145a40ef8(param_1 + 0x1e);
  lVar3 = 200;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0x68);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145a40ef8 FUN_145a40ef8 body=53 status=ok
// SIG undefined FUN_145a40ef8(void)

void FUN_145a40ef8(longlong *param_1)

{
  FUN_145a40f2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a40f2e FUN_145a40f2e body=90 status=ok
// SIG undefined FUN_145a40f2e(void)

void FUN_145a40f2e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145a40f88 FUN_145a40f88 body=164 status=ok
// SIG undefined FUN_145a40f88(void)

void FUN_145a40f88(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a41019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 145a4102c FUN_145a4102c body=331 status=ok
// SIG undefined FUN_145a4102c(void)

void FUN_145a4102c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xe];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xc];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xb];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a41178 FUN_145a41178 body=366 status=ok
// SIG undefined FUN_145a41178(void)

void FUN_145a41178(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
      lVar4 = *(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a412e8 FUN_145a412e8 body=367 status=ok
// SIG undefined FUN_145a412e8(void)

void FUN_145a412e8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
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
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (lVar2 != 0) {
        lVar4 = 0x10;
        do {
          plVar3 = *(longlong **)(lVar2 + -8 + lVar4);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
        FUN_1400020a8(lVar2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a41458 FUN_145a41458 body=368 status=ok
// SIG undefined FUN_145a41458(void)

void FUN_145a41458(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
      lVar3 = (longlong)iStack_5c;
      lVar2 = *local_78;
      lVar4 = 0x38;
      do {
        FUN_1449cc82a(lVar3 * 0x60 + lVar2 + lVar4);
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != -8);
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



// FUNCTION 145a415ca FUN_145a415ca body=24 status=ok
// SIG undefined FUN_145a415ca(void)

void FUN_145a415ca(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a415de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145a415e2 FUN_145a415e2 body=38 status=ok
// SIG undefined FUN_145a415e2(void)

undefined8 FUN_145a415e2(undefined8 param_1,int param_2)

{
  FUN_145a41608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a41608 FUN_145a41608 body=105 status=ok
// SIG undefined FUN_145a41608(void)

void FUN_145a41608(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b96b660;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a4166d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a41672 FUN_145a41672 body=40 status=ok
// SIG undefined FUN_145a41672(void)

undefined8 FUN_145a41672(undefined8 param_1,int param_2)

{
  FUN_145a4169a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a4169a FUN_145a4169a body=892 status=ok
// SIG undefined FUN_145a4169a(void)

void FUN_145a4169a(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f8ced0;
  lVar1 = param_1[0x3d];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41aa6(param_1 + 0xb4);
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41adc(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x93) = 0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41b12(param_1 + 0x76);
  if (param_1[0x6e] != 0) {
    plVar2 = param_1 + 0x72;
    if ((longlong *)param_1[0x70] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x70];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x66] != 0) {
    plVar2 = param_1 + 0x6a;
    if ((longlong *)param_1[0x68] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x68];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41b7e(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41a16(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41a16(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41b48(param_1 + 0x32);
  if (param_1[0x2a] != 0) {
    plVar2 = param_1 + 0x2e;
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x2c];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x22] != 0) {
    plVar2 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_145a41bb6(param_1);
  return;
}



// FUNCTION 145a41a16 FUN_145a41a16 body=53 status=ok
// SIG undefined FUN_145a41a16(void)

void FUN_145a41a16(longlong *param_1)

{
  FUN_145a41a4c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41a4c FUN_145a41a4c body=90 status=ok
// SIG undefined FUN_145a41a4c(void)

void FUN_145a41a4c(longlong param_1)

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



// FUNCTION 145a41aa6 FUN_145a41aa6 body=53 status=ok
// SIG undefined FUN_145a41aa6(void)

void FUN_145a41aa6(longlong *param_1)

{
  FUN_145a41d5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41adc FUN_145a41adc body=53 status=ok
// SIG undefined FUN_145a41adc(void)

void FUN_145a41adc(longlong *param_1)

{
  FUN_145a41ee6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41b12 FUN_145a41b12 body=53 status=ok
// SIG undefined FUN_145a41b12(void)

void FUN_145a41b12(longlong *param_1)

{
  FUN_145a41db6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41b48 FUN_145a41b48 body=53 status=ok
// SIG undefined FUN_145a41b48(void)

void FUN_145a41b48(longlong *param_1)

{
  FUN_145a41e10();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41b7e FUN_145a41b7e body=55 status=ok
// SIG undefined FUN_145a41b7e(void)

void FUN_145a41b7e(longlong *param_1)

{
  FUN_145a41e6a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41bb6 FUN_145a41bb6 body=134 status=ok
// SIG undefined FUN_145a41bb6(void)

void FUN_145a41bb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f8f930;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41c3c(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a41c72(param_1 + 0xb);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a41c3c FUN_145a41c3c body=53 status=ok
// SIG undefined FUN_145a41c3c(void)

void FUN_145a41c3c(longlong *param_1)

{
  FUN_145a41ca8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41c72 FUN_145a41c72 body=53 status=ok
// SIG undefined FUN_145a41c72(void)

void FUN_145a41c72(longlong *param_1)

{
  FUN_145a41d02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a41ca8 FUN_145a41ca8 body=90 status=ok
// SIG undefined FUN_145a41ca8(void)

void FUN_145a41ca8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145a41d02 FUN_145a41d02 body=90 status=ok
// SIG undefined FUN_145a41d02(void)

void FUN_145a41d02(longlong param_1)

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



// FUNCTION 145a41d5c FUN_145a41d5c body=90 status=ok
// SIG undefined FUN_145a41d5c(void)

void FUN_145a41d5c(longlong param_1)

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



// FUNCTION 145a41db6 FUN_145a41db6 body=90 status=ok
// SIG undefined FUN_145a41db6(void)

void FUN_145a41db6(longlong param_1)

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



// FUNCTION 145a41e10 FUN_145a41e10 body=90 status=ok
// SIG undefined FUN_145a41e10(void)

void FUN_145a41e10(longlong param_1)

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



// FUNCTION 145a41e6a FUN_145a41e6a body=123 status=ok
// SIG undefined FUN_145a41e6a(void)

void FUN_145a41e6a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 145a41ee6 FUN_145a41ee6 body=351 status=ok
// SIG undefined FUN_145a41ee6(void)

void FUN_145a41ee6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 145a42046 FUN_145a42046 body=175 status=ok
// SIG undefined FUN_145a42046(void)

void FUN_145a42046(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_145a420f6();
      if (lVar2 == 0) {
        local_19 = 0;
      }
      else {
        local_19 = *(byte *)(lVar1 + 0x4b1) ^ 1;
      }
      local_1a = lVar2 != 0;
      FUN_145d74af4(param_1 + -0x30,&local_1a,lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a420f6 FUN_145a420f6 body=19 status=ok
// SIG undefined FUN_145a420f6(void)

undefined8 FUN_145a420f6(longlong param_1)

{
  return *(undefined8 *)((ulonglong)*(byte *)(param_1 + 0x4b1) * 0x40 + 0x478 + param_1);
}



// FUNCTION 145a4210a FUN_145a4210a body=168 status=ok
// SIG undefined FUN_145a4210a(void)

void FUN_145a4210a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149fca650;
  lVar4 = param_1[0x16];
  if (param_1[0x16] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[0x16];
    }
  }
  plVar3 = (longlong *)param_1[0x17];
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
  if (param_1[0x15] != 0) {
    FUN_145a421b2();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e0ea(param_1);
  return;
}



// FUNCTION 145a421b2 FUN_145a421b2 body=55 status=ok
// SIG undefined FUN_145a421b2(void)

void FUN_145a421b2(longlong param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc0);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 == 0 || *piVar1 != 0) {
    return;
  }
  FUN_14587a8e6(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a422ca FUN_145a422ca body=2273 status=ok
// SIG undefined FUN_145a422ca(void)

void FUN_145a422ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_LAB_14b4df960;
  FUN_1401cb356();
  lVar5 = param_1[0xaa];
  if (((lVar5 != 0) && (lVar6 = param_1[0xab], lVar6 != 0)) && (0 < *(int *)(lVar6 + 8))) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
    local_b8 = lVar5;
    local_b0 = lVar6;
    FUN_140d61352();
    plVar4 = (longlong *)param_1[0xab];
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_145c3f772(local_88,param_1 + 0x16);
  local_a8 = (longlong *)&DAT_100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar7 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar7 = local_60;
  }
  local_d0 = local_98;
  iStack_cc = iStack_94;
  local_c8 = local_90;
  local_c4 = local_8c;
  uStack_e0 = local_a8;
  local_d8 = local_a0;
  local_e8 = local_88;
  if ((iStack_94 != iVar7) || (local_a0 != local_78)) {
    do {
      do {
        FUN_14581a89a(param_1,*(undefined4 *)(*local_e8 + (longlong)iStack_cc * 0xc));
        local_d0 = local_d0 & ~uStack_e0._4_4_;
        FUN_1449c0562(&uStack_e0);
      } while (iStack_cc != iVar7);
    } while ((local_d8 != local_78) || (local_e8 != local_88));
  }
  FUN_140b708a0(param_1);
  local_a8 = (longlong *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    uStack_e0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_e8);
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x70))(local_e8,param_1 + 0x9a);
      (**(code **)(*local_e8 + 0xd0))(local_e8,param_1 + 0x9b);
    }
  }
  plVar4 = uStack_e0;
  if (uStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_e0)(uStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_e8);
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x70))(local_e8,param_1 + 0x9d);
      (**(code **)(*local_e8 + 0xd0))(local_e8,param_1 + 0x9e);
    }
    plVar4 = uStack_e0;
    if (uStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_e0)(uStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  cVar3 = FUN_144729dda(param_1 + 0x15);
  if (cVar3 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x15);
    lVar5 = *(longlong *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      lVar6 = FUN_140b7066c();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) && (param_1[0x9f] != 0)) {
        FUN_14480f766(lVar5 + 0x2d0);
      }
    }
  }
  if (param_1[0xa0] != 0) {
    FUN_14480f766(&DAT_14c872c10);
  }
  FUN_1401cb356();
  local_f8 = param_1[0xa1];
  local_f0 = param_1[0xa2];
  if (local_f0 != 0) {
    LOCK();
    *(int *)(local_f0 + 0xc) = *(int *)(local_f0 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_f8);
  FUN_14586d49e(param_1);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_88);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42bac(param_1 + 0xc3);
  *(undefined4 *)(param_1 + 0xc2) = 0;
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42bac(param_1 + 0xb9);
  FUN_140b6c1c2(param_1[0xb6],*(undefined4 *)(param_1 + 0xb7));
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb5) = 0;
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42c50(param_1 + 0xac);
  plVar4 = (longlong *)param_1[0xab];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xa5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0xa2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x97) = 0;
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42c18(param_1 + 0x8e);
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42c18(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42be2(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42be2(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x16);
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
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
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a42bac FUN_145a42bac body=53 status=ok
// SIG undefined FUN_145a42bac(void)

void FUN_145a42bac(longlong *param_1)

{
  FUN_145a42e22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a42be2 FUN_145a42be2 body=53 status=ok
// SIG undefined FUN_145a42be2(void)

void FUN_145a42be2(longlong *param_1)

{
  FUN_145a42f6e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a42c18 FUN_145a42c18 body=55 status=ok
// SIG undefined FUN_145a42c18(void)

void FUN_145a42c18(longlong *param_1)

{
  FUN_145a42c86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a42c50 FUN_145a42c50 body=53 status=ok
// SIG undefined FUN_145a42c50(void)

void FUN_145a42c50(longlong *param_1)

{
  FUN_145a430dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a42c86 FUN_145a42c86 body=409 status=ok
// SIG undefined FUN_145a42c86(void)

void FUN_145a42c86(longlong *param_1,int param_2)

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
      FUN_140b6c31a(lVar2 + lVar5 + 8);
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



// FUNCTION 145a42e22 FUN_145a42e22 body=331 status=ok
// SIG undefined FUN_145a42e22(void)

void FUN_145a42e22(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
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



// FUNCTION 145a42f6e FUN_145a42f6e body=364 status=ok
// SIG undefined FUN_145a42f6e(void)

void FUN_145a42f6e(longlong *param_1)

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
      FUN_14581b6ec(lVar2 + lVar3 + 8);
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



// FUNCTION 145a430dc FUN_145a430dc body=309 status=ok
// SIG undefined FUN_145a430dc(void)

void FUN_145a430dc(longlong *param_1)

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
      FUN_145a43212((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43212 FUN_145a43212 body=99 status=ok
// SIG undefined FUN_145a43212(void)

void FUN_145a43212(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145a43271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a43276 FUN_145a43276 body=201 status=ok
// SIG undefined FUN_145a43276(void)

bool FUN_145a43276(longlong param_1,undefined8 param_2,undefined2 *param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_40);
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
  if (lVar4 != 0) {
    FUN_140113f3a(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43340 FUN_145a43340 body=165 status=ok
// SIG undefined FUN_145a43340(void)

void FUN_145a43340(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_2 + 0x30) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar1 == 0)) {
    lVar2 = *(longlong *)(param_2 + 0x750);
LAB_145a43379:
    if (lVar2 != 0) {
      *(undefined8 *)(param_2 + 0x750) = 0;
    }
  }
  else {
    if ((*(longlong *)(lVar1 + 0x3f0) == 0) || (*(longlong *)(param_2 + 0x750) != 0)) {
      lVar2 = *(longlong *)(param_2 + 0x750);
      if (*(longlong *)(lVar1 + 0x3f0) == 0) goto LAB_145a43379;
    }
    else {
      lVar2 = FUN_147db38c6(param_2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_2 + 0x750) = lVar2;
    }
    if (lVar2 != 0) {
      FUN_145a433e6(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a433e6 FUN_145a433e6 body=126 status=ok
// SIG undefined FUN_145a433e6(void)

void FUN_145a433e6(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  FUN_145a43466(lVar1 + 0x570,local_18,param_1,FUN_1459a5822);
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_145a43466(lVar1 + 0x588,local_18,param_1,FUN_1459a5d80);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43466 FUN_145a43466 body=244 status=ok
// SIG undefined FUN_145a43466(void)

undefined8
FUN_145a43466(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ab18ff0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14ab18a50;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141332804(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4355c FUN_145a4355c body=265 status=ok
// SIG undefined FUN_145a4355c(void)

void FUN_145a4355c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x178) == '\x01') &&
     (lVar6 = FUN_140343d7a(param_1), lVar6 != 0)) {
    FUN_1406966b6(lVar6,&DAT_14cb7e3b8,0);
  }
  if ((((*(longlong *)(param_1 + 0xf8) != 0) &&
       (cVar5 = FUN_144729dda(param_1 + 0xf0), cVar5 != '\0')) &&
      (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0)) && (*(longlong *)(param_1 + 0xe0) != 0))
  {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x50))();
    if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
      lVar7 = (longlong)*(int *)(lVar6 + 0x48) * 0x10;
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar8);
        if ((lVar3 != 0) &&
           (*(char *)(lVar3 + 0x40) == *(char *)(*(longlong *)(param_1 + 0xe0) + 0x40))) {
          FUN_14103b6f6(*(longlong *)(param_1 + 0xe0),CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
          *(undefined8 *)(param_1 + 0xe0) = 0;
          plVar4 = *(longlong **)(param_1 + 0xe8);
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          *(undefined8 *)(param_1 + 0xe8) = 0;
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000145a43661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar7 != lVar8);
    }
  }
  return;
}



// FUNCTION 145a43666 FUN_145a43666 body=203 status=ok
// SIG undefined FUN_145a43666(void)

void FUN_145a43666(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_140343d7a();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = FUN_144a872af(param_1 + 0x128);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x150) == '\0') {
        FUN_1414758ce(param_1);
        local_30 = (double)*(float *)(param_1 + 0x144);
        local_38 = 0;
        local_28 = 0;
        local_48 = 0;
        (**(code **)(*plVar2 + 0x4d0))(plVar2,param_1 + 0x128,&local_38,0);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xfc) == '\x01') {
        lVar3 = FUN_14479d2ce(param_1 + 0x148);
        if (lVar3 != 0) {
          FUN_1437fc2a6(lVar3,2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43732 FUN_145a43732 body=1131 status=ok
// SIG undefined FUN_145a43732(void)

ulonglong FUN_145a43732(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  double *pdVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  undefined7 uVar20;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    cVar10 = FUN_144729dda(param_1 + 0xf0);
    if (((cVar10 != '\0') && (lVar12 = FUN_140343d7a(param_1), lVar12 != 0)) &&
       (cVar10 = FUN_145a4400c(param_1), cVar10 != '\0')) {
      uVar22 = 0;
      if (0.0 < *(float *)(param_1 + 0x108)) {
        bVar21 = *(char *)(lVar2 + 0xf0) == '\x01';
        if (bVar21) {
          uVar22 = *(undefined4 *)(param_1 + 0x144);
        }
        if ((*(char *)(lVar2 + 0x17c) == '\x01') && (*(longlong *)(lVar2 + 0x180) != 0)) {
          local_a8 = *(undefined1 *)(lVar2 + 0xf1);
          if (bVar21) {
            local_58 = uVar22;
          }
          local_b0 = &local_58;
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,*(float *)(param_1 + 0x108));
          plVar13 = &local_98;
          local_54 = bVar21;
          FUN_1489a8664(&local_98,*(longlong *)(lVar2 + 0x180),lVar12,param_1 + 0x128);
          plVar16 = uStack_90;
          uVar22 = SUB84(plVar13,0);
          plVar13 = (longlong *)(param_1 + 0xe0);
          if ((longlong *)(param_1 + 0xe0) != &local_98) {
            *(double *)(param_1 + 0xe0) = local_98;
            local_98 = 0.0;
            plVar17 = *(longlong **)(param_1 + 0xe8);
            plVar13 = plVar16;
            if (uStack_90 != plVar17) {
              uStack_90 = (longlong *)0x0;
              *(longlong **)(param_1 + 0xe8) = plVar16;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                plVar16 = plVar17 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)*plVar16 == 0) {
                  plVar16 = plVar17;
                  plVar13 = (longlong *)(**(code **)*plVar17)();
                  uVar22 = SUB84(plVar16,0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    plVar13 = (longlong *)(**(code **)(*plVar17 + 0x10))();
                    uVar22 = SUB84(plVar17,0);
                  }
                }
              }
            }
          }
          plVar16 = uStack_90;
          if (uStack_90 != (longlong *)0x0) {
            LOCK();
            plVar17 = uStack_90 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              plVar17 = uStack_90;
              plVar13 = (longlong *)(**(code **)*uStack_90)();
              uVar22 = SUB84(plVar17,0);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                plVar13 = (longlong *)(**(code **)(*plVar16 + 0x10))();
                uVar22 = SUB84(plVar16,0);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x150) = 1;
          if (*(longlong *)(lVar2 + 0x180) != 0) {
            plVar13 = *(longlong **)(param_1 + 0xe0);
            plVar16 = *(longlong **)(param_1 + 0xe8);
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
                goto LAB_145a43ac0;
              }
              goto LAB_145a43b0a;
            }
            if (plVar13 != (longlong *)0x0) {
LAB_145a43ac0:
              plVar17 = *(longlong **)(param_1 + 0x160);
              *(longlong **)(param_1 + 0x158) = plVar13;
              *(longlong **)(param_1 + 0x160) = plVar16;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                plVar18 = plVar17 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  plVar18 = plVar17;
                  plVar13 = (longlong *)(**(code **)*plVar17)();
                  uVar22 = SUB84(plVar18,0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    plVar13 = (longlong *)(**(code **)(*plVar17 + 0x10))();
                    uVar22 = SUB84(plVar17,0);
                  }
                }
              }
              goto LAB_145a4388e;
            }
          }
        }
        else {
          if (bVar21) {
            local_60 = uVar22;
          }
          local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(undefined1 *)(lVar2 + 0xf1));
          local_b8 = &local_60;
          plVar13 = &local_98;
          local_5c = bVar21;
          FUN_145a43b9e(&local_98,lVar12,param_1 + 0x128);
          plVar16 = uStack_90;
          uVar22 = SUB84(plVar13,0);
          plVar13 = (longlong *)(param_1 + 0xe0);
          if ((longlong *)(param_1 + 0xe0) != &local_98) {
            *(double *)(param_1 + 0xe0) = local_98;
            local_98 = 0.0;
            plVar17 = *(longlong **)(param_1 + 0xe8);
            plVar13 = plVar16;
            if (uStack_90 != plVar17) {
              uStack_90 = (longlong *)0x0;
              *(longlong **)(param_1 + 0xe8) = plVar16;
              plVar16 = uStack_90;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                plVar18 = plVar17 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  plVar16 = plVar17;
                  plVar13 = (longlong *)(**(code **)*plVar17)();
                  uVar22 = SUB84(plVar16,0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar16 = uStack_90;
                  if (*piVar1 == 0) {
                    plVar13 = (longlong *)(**(code **)(*plVar17 + 0x10))();
                    uVar22 = SUB84(plVar17,0);
                    plVar16 = uStack_90;
                  }
                }
              }
            }
          }
LAB_145a4388e:
          if (plVar16 != (longlong *)0x0) {
LAB_145a43b0a:
            LOCK();
            plVar17 = plVar16 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              plVar17 = plVar16;
              plVar13 = (longlong *)(**(code **)*plVar16)();
              uVar22 = SUB84(plVar17,0);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                plVar13 = (longlong *)(**(code **)(*plVar16 + 0x10))();
                uVar22 = SUB84(plVar16,0);
              }
            }
          }
        }
        lVar3 = *(longlong *)(lVar12 + 0x1c8);
        if (lVar3 == 0) {
          uVar22 = SUB84(DAT_14c846500,0);
          uVar23 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
        }
        else {
          dVar6 = *(double *)(lVar3 + 0x240);
          plVar16 = *(longlong **)(lVar3 + 0x248);
          dVar7 = *(double *)(lVar3 + 0x250);
          dVar8 = *(double *)(lVar3 + 600);
          pdVar14 = *(double **)(lVar3 + 0x228);
          local_98 = dVar6;
          uStack_90 = plVar16;
          local_88 = dVar7;
          uStack_80 = dVar8;
          if (pdVar14 == (double *)0x0) {
            uVar22 = 0x40;
            pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
            dVar9 = DAT_14c8463d8;
            *pdVar14 = DAT_14c8463d0;
            pdVar14[1] = dVar9;
            dVar9 = DAT_14c8463e8;
            pdVar14[2] = DAT_14c8463e0;
            pdVar14[3] = dVar9;
            dVar9 = DAT_14c846500;
            pdVar14[4] = DAT_14c8464f8;
            pdVar14[5] = dVar9;
            plVar13 = DAT_14c846508;
            pdVar14[6] = (double)DAT_14c846508;
            *(double **)(lVar3 + 0x228) = pdVar14;
          }
          auVar4._8_4_ = (int)-(ulonglong)((double)plVar16 != pdVar14[1]);
          auVar4._0_8_ = -(ulonglong)(dVar6 != *pdVar14);
          auVar4._12_4_ = (int)(-(ulonglong)((double)plVar16 != pdVar14[1]) >> 0x20);
          iVar11 = movmskpd((int)plVar13,auVar4);
          auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[3]);
          auVar5._0_8_ = -(ulonglong)(dVar7 != pdVar14[2]);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[3]) >> 0x20);
          uVar15 = movmskpd(uVar22,auVar5);
          if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
            *(undefined4 *)(pdVar14 + 2) = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar14 + 0x14) = local_88._4_4_;
            *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_80._4_4_;
            *(undefined4 *)pdVar14 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar14 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_90._4_4_;
            FUN_1448052ee(&local_98,&local_78);
            pdVar14[6] = local_68;
            pdVar14[4] = local_78;
            pdVar14[5] = dStack_70;
          }
          uVar22 = SUB84(pdVar14[5],0);
          uVar23 = (undefined4)((ulonglong)pdVar14[5] >> 0x20);
        }
        *(float *)(param_1 + 0x140) = (float)(double)CONCAT44(uVar23,uVar22);
        uVar20 = (undefined7)((ulonglong)param_1 >> 8);
        uVar19 = CONCAT71(uVar20,1);
        if (*(char *)(lVar2 + 0x178) == '\x01') {
          uVar19 = CONCAT71(uVar20,1);
          FUN_1406966b6(lVar12,&DAT_14cb7e3b8,1);
        }
        goto LAB_145a43911;
      }
    }
  }
  uVar19 = 0;
LAB_145a43911:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 145a43b9e FUN_145a43b9e body=376 status=ok
// SIG undefined FUN_145a43b9e(void)

undefined8 *
FUN_145a43b9e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = FUN_1407ca824(param_2);
  if (lVar1 == 0) {
LAB_145a43d0f:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = FUN_145a43d18();
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar2);
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) goto LAB_145a43d0f;
    }
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_145a43f56(&local_a8,param_3);
    FUN_140dd037a(&local_a8,param_4);
    if (*(char *)(param_5 + 1) == '\x01') {
      FUN_145a43dfe(&local_a8,*param_5);
    }
    FUN_145a43eaa(&local_a8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff);
    local_b0 = 1;
    local_b8 = &local_a8;
    FUN_14096dfee(lVar1,param_1,lVar3,0);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_a8);
  }
  if (*(char *)(param_5 + 1) == '\x01') {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43d18 FUN_145a43d18 body=228 status=ok
// SIG undefined FUN_145a43d18(void)

longlong FUN_145a43d18(void)

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
  if (DAT_14cb683f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_148744975;
    local_40 = &LAB_145ad4404;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Interp",&DAT_14cb683f0,&DAT_148744974);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb683f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43dfe FUN_145a43dfe body=170 status=ok
// SIG undefined FUN_145a43dfe(void)

void FUN_145a43dfe(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8d418;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43eaa FUN_145a43eaa body=171 status=ok
// SIG undefined FUN_145a43eaa(void)

void FUN_145a43eaa(undefined8 param_1,byte param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  uint *local_48;
  undefined1 local_3c [4];
  uint local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_38 = (uint)param_2;
  local_18 = 1;
  local_50 = &DAT_14cb8cea8;
  local_48 = puVar2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (uint *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a43f56 FUN_145a43f56 body=180 status=ok
// SIG undefined FUN_145a43f56(void)

void FUN_145a43f56(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined8 *)(param_2 + 4);
  local_18 = 4;
  local_50 = &DAT_14cb8ceb0;
  local_48 = puVar2;
  FUN_140881f5a(local_38,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a4400c FUN_145a4400c body=1066 status=ok
// SIG undefined FUN_145a4400c(void)

ulonglong FUN_145a4400c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 unaff_RBX;
  undefined8 ****ppppuVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = FUN_140343d7a();
  plVar10 = (longlong *)FUN_14479d2ce(param_1 + 0x148);
  if (plVar10 != (longlong *)0x0 && lVar9 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar4 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar4 == 0) {
      puVar11 = &DAT_14c8464e0;
      uVar15 = DAT_14c8464f0;
    }
    else {
      puVar11 = (undefined8 *)(lVar4 + 0x260);
      uVar15 = *(undefined8 *)(lVar4 + 0x270);
    }
    uVar13 = *(undefined4 *)((longlong)puVar11 + 4);
    uVar7 = *(undefined4 *)(puVar11 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar11 + 0xc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)puVar11;
    *(undefined4 *)(param_1 + 0x114) = uVar13;
    *(undefined4 *)(param_1 + 0x118) = uVar7;
    *(undefined4 *)(param_1 + 0x11c) = uVar8;
    *(undefined8 *)(param_1 + 0x120) = uVar15;
    *(undefined4 *)(param_1 + 0x108) = 0;
    iVar2 = *(int *)(lVar3 + 0x100);
    if (iVar2 == 2) {
      local_a9 = 2;
      local_b8 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_78);
      local_a8[0] = 0;
      local_80 = 0;
      FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      FUN_1447c3578(lVar3 + 0x108,&local_78,local_a8);
      uVar13 = FUN_144a7b41a(&local_78,0);
      *(undefined4 *)(param_1 + 0x108) = uVar13;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar12 = &local_78;
        if (0x18 < local_60) {
          ppppuVar12 = (undefined8 ****)local_78;
        }
        (*pcVar5)(ppppuVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(local_a8);
    }
    else if (iVar2 == 1) {
      fVar14 = (float)(**(code **)(*plVar10 + 0x480))(plVar10);
      dVar6 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x110);
      dVar17 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x118);
      dVar16 = *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x120);
      *(uint *)(param_1 + 0x108) =
           -(uint)(0.0 < fVar14) &
           (uint)((float)SQRT(dVar16 * dVar16 + dVar17 * dVar17 + dVar6 * dVar6) / fVar14);
    }
    else if (iVar2 == 3) {
      uVar13 = (**(code **)(*plVar10 + 0x480))(plVar10);
      local_a9 = 2;
      local_b8 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_78);
      local_a8[0] = 0;
      local_80 = 0;
      FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      FUN_1447c3578(lVar3 + 0x140,&local_78,local_a8);
      fVar14 = (float)FUN_144a7b41a(&local_78,uVar13);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar12 = &local_78;
        if (0x18 < local_60) {
          ppppuVar12 = (undefined8 ****)local_78;
        }
        (*pcVar5)(ppppuVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(local_a8);
      dVar16 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x110);
      dVar6 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x118);
      dVar17 = *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x120);
      *(uint *)(param_1 + 0x108) =
           -(uint)(0.0 < fVar14) &
           (uint)((float)SQRT(dVar17 * dVar17 + dVar6 * dVar6 + dVar16 * dVar16) / fVar14);
    }
    else if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x108) = 0x3c23d70a;
    }
    if ((((*(char *)(lVar3 + 0x17c) == '\x01') && (*(longlong *)(lVar3 + 0x180) != 0)) &&
        (*(char *)(lVar3 + 0x188) == '\x01')) && (ABS(*(float *)(param_1 + 0x108)) <= 1e-08)) {
      *(undefined4 *)(param_1 + 0x108) = 0x3dcccccd;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),plVar10 != (longlong *)0x0 && lVar9 != 0) &
           0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a44442 FUN_145a44442 body=130 status=ok
// SIG undefined FUN_145a44442(void)

undefined8 * FUN_145a44442(undefined8 *param_1)

{
  FUN_145a444c4();
  *param_1 = &PTR_FUN_14b7e3d30;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 145a444c4 FUN_145a444c4 body=194 status=ok
// SIG undefined FUN_145a444c4(void)

undefined8 * FUN_145a444c4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b218a50;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  FUN_144a63cba(param_1 + 0xb);
  FUN_144a63cba(param_1 + 0x10);
  FUN_144a63cba(param_1 + 0x15);
  *(undefined2 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_144a7a8f6(param_1 + 0x1e);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  return param_1;
}



// FUNCTION 145a44586 FUN_145a44586 body=154 status=ok
// SIG undefined FUN_145a44586(void)

bool FUN_145a44586(longlong param_1,undefined8 param_2)

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



// FUNCTION 145a44622 FUN_145a44622 body=88 status=ok
// SIG undefined FUN_145a44622(void)

void FUN_145a44622(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0(param_2);
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar1 == lVar2) {
      uVar3 = FUN_14127bc34(param_2);
      FUN_145a4467a(param_1 + 0x4b,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 145a4467a FUN_145a4467a body=162 status=ok
// SIG undefined FUN_145a4467a(void)

void FUN_145a4467a(longlong *param_1,undefined8 param_2)

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
        goto LAB_145a44707;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a44707:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a4471c FUN_145a4471c body=40 status=ok
// SIG undefined FUN_145a4471c(void)

undefined8 FUN_145a4471c(undefined8 param_1,int param_2)

{
  FUN_145a44744();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a44744 FUN_145a44744 body=63 status=ok
// SIG undefined FUN_145a44744(void)

void FUN_145a44744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9f2dd0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44784(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a44784 FUN_145a44784 body=53 status=ok
// SIG undefined FUN_145a44784(void)

void FUN_145a44784(longlong *param_1)

{
  FUN_145a447ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a447ba FUN_145a447ba body=346 status=ok
// SIG undefined FUN_145a447ba(void)

void FUN_145a447ba(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a44920 FUN_145a44920 body=47 status=ok
// SIG undefined FUN_145a44920(void)

void FUN_145a44920(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 145a4495c FUN_145a4495c body=45 status=ok
// SIG undefined FUN_145a4495c(void)

void FUN_145a4495c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149fcd930;
  puVar1[1] = 0xdb04432549ceb527;
  puVar1[2] = 0x470158fca786a9b4;
  return;
}



// FUNCTION 145a4498a FUN_145a4498a body=189 status=ok
// SIG undefined FUN_145a4498a(void)

void FUN_145a4498a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar3 = 0;
    do {
      local_40 = *(longlong *)(lVar2 + lVar3);
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      (**(code **)(*param_2 + 0x88))(param_2,&local_40,0,0);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_145a44a48(*(undefined8 *)(param_1 + 0x88),param_2);
  FUN_1449e2820(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a44a48 FUN_145a44a48 body=90 status=ok
// SIG undefined FUN_145a44a48(void)

void FUN_145a44a48(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 200))(plVar3);
      FUN_144a79930(param_2,uVar4,plVar3,0);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 145a44aae FUN_145a44aae body=45 status=ok
// SIG undefined FUN_145a44aae(void)

void FUN_145a44aae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14a452750;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145a44ae6 FUN_145a44ae6 body=157 status=ok
// SIG undefined FUN_145a44ae6(void)

undefined8 * FUN_145a44ae6(undefined8 *param_1)

{
  FUN_140ea0dc2();
  *param_1 = &PTR_FUN_14a5243b0;
  param_1[5] = &PTR_FUN_14a524730;
  FUN_144a5dc74(param_1 + 0x31);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_140a581a0(param_1 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x494) = 0;
  FUN_140a581a0(param_1 + 0x94);
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  FUN_140e2f50a(param_1,4);
  *(undefined2 *)((longlong)param_1 + 0x495) = 0;
  return param_1;
}



// FUNCTION 145a44b90 FUN_145a44b90 body=45 status=ok
// SIG undefined FUN_145a44b90(void)

void FUN_145a44b90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14a55e7d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 145a44bbe FUN_145a44bbe body=40 status=ok
// SIG undefined FUN_145a44bbe(void)

undefined8 FUN_145a44bbe(undefined8 param_1,int param_2)

{
  FUN_145a44be6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a44be6 FUN_145a44be6 body=720 status=ok
// SIG undefined FUN_145a44be6(void)

void FUN_145a44be6(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a6fea30;
  param_1[5] = &PTR_FUN_14a6ff610;
  param_1[6] = &PTR_LAB_14a6ff650;
  param_1[0x55] = &PTR_FUN_14a6ff6a0;
  param_1[0x56] = &PTR_FUN_14a6ff720;
  param_1[0x57] = &PTR_FUN_14a6ff730;
  puVar2 = (undefined8 *)param_1[300];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x11c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44eb6(param_1[0xf8],*(undefined4 *)(param_1 + 0xf9));
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44ee7(param_1[0xf6],*(undefined4 *)(param_1 + 0xf7));
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44f7a(param_1[0xf4],*(undefined4 *)(param_1 + 0xf5));
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44f18(param_1[0xf2],*(undefined4 *)(param_1 + 0xf3));
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  FUN_145a44f49(param_1[0xf0],*(undefined4 *)(param_1 + 0xf1));
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed82(param_1);
  return;
}



// FUNCTION 145a44eb6 FUN_145a44eb6 body=49 status=ok
// SIG undefined FUN_145a44eb6(void)

void FUN_145a44eb6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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



// FUNCTION 145a44ee7 FUN_145a44ee7 body=49 status=ok
// SIG undefined FUN_145a44ee7(void)

void FUN_145a44ee7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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



// FUNCTION 145a44f18 FUN_145a44f18 body=49 status=ok
// SIG undefined FUN_145a44f18(void)

void FUN_145a44f18(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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



// FUNCTION 145a44f49 FUN_145a44f49 body=49 status=ok
// SIG undefined FUN_145a44f49(void)

void FUN_145a44f49(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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



// FUNCTION 145a44f7a FUN_145a44f7a body=52 status=ok
// SIG undefined FUN_145a44f7a(void)

void FUN_145a44f7a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a44fae FUN_145a44fae body=154 status=ok
// SIG undefined FUN_145a44fae(void)

void FUN_145a44fae(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_145a45048();
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x14c);
  if (bVar1 != 4) {
    if (bVar1 < 4) {
      *(byte *)(param_1 + 0x14d) = bVar1;
    }
    *(undefined1 *)(param_1 + 0x14c) = 4;
  }
  if (*(char *)(param_1 + 0x214) == '\0') {
    *(undefined1 *)(param_1 + 0x214) = 1;
  }
  plVar2 = (longlong *)FUN_144800528();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  if (lVar3 == param_1) {
    DAT_14c997cc0 = param_1;
    return;
  }
  return;
}



// FUNCTION 145a45048 FUN_145a45048 body=70 status=ok
// SIG undefined FUN_145a45048(void)

void FUN_145a45048(longlong param_1)

{
  FUN_144a63f30();
  if (*(char *)(param_1 + 0x75) == -1) {
    *(char *)(param_1 + 0x75) = '\x02' - *(char *)(param_1 + 0x56);
  }
  if (*(int *)(param_1 + 0xd8) != 8) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0xd8);
  }
  if (*(int *)(param_1 + 0xdc) != 2) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0xdc);
  }
  return;
}



// FUNCTION 145a4508e FUN_145a4508e body=40 status=ok
// SIG undefined FUN_145a4508e(void)

undefined8 FUN_145a4508e(undefined8 param_1,int param_2)

{
  FUN_145a450b6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a450b6 FUN_145a450b6 body=85 status=ok
// SIG undefined FUN_145a450b6(void)

void FUN_145a450b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab01f20;
  FUN_145a4510b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145a4510b(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}


