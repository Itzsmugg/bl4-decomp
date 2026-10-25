// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14372defc FUN_14372defc body=29 status=ok
// SIG undefined FUN_14372defc(void)

undefined8 FUN_14372defc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372df1a FUN_14372df1a body=76 status=ok
// SIG undefined FUN_14372df1a(void)

void FUN_14372df1a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_147d64fda(lVar1);
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x3b0))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(lVar1 + 0x100),
               *(undefined4 *)(lVar1 + 0x14));
  }
  FUN_14045530e(lVar1,param_2);
  return;
}



// FUNCTION 14372df84 FUN_14372df84 body=12 status=ok
// SIG undefined FUN_14372df84(void)

void FUN_14372df84(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372df8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372df90 FUN_14372df90 body=29 status=ok
// SIG undefined FUN_14372df90(void)

undefined8 FUN_14372df90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372dfd4 FUN_14372dfd4 body=12 status=ok
// SIG undefined FUN_14372dfd4(void)

void FUN_14372dfd4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372dfdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372dfe0 FUN_14372dfe0 body=29 status=ok
// SIG undefined FUN_14372dfe0(void)

undefined8 FUN_14372dfe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e04a FUN_14372e04a body=12 status=ok
// SIG undefined FUN_14372e04a(void)

void FUN_14372e04a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e056 FUN_14372e056 body=29 status=ok
// SIG undefined FUN_14372e056(void)

undefined8 FUN_14372e056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e074 FUN_14372e074 body=270 status=ok
// SIG undefined FUN_14372e074(void)

void FUN_14372e074(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_1417f37ae(lVar1);
  FUN_14048a436(lVar1,param_2);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aace9d0;
  local_78[0] = FUN_14372e392;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace9b0;
  local_b8[0] = FUN_14372e1cc;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 2;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372e1a2 FUN_14372e1a2 body=12 status=ok
// SIG undefined FUN_14372e1a2(void)

void FUN_14372e1a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e1ae FUN_14372e1ae body=29 status=ok
// SIG undefined FUN_14372e1ae(void)

undefined8 FUN_14372e1ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e1cc FUN_14372e1cc body=380 status=ok
// SIG undefined FUN_14372e1cc(void)

void FUN_14372e1cc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  FUN_143725db4(lVar2);
  FUN_1417f38c6(lVar2);
  plVar3 = *(longlong **)(lVar2 + 0x288);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar4 = *(code **)(*plVar3 + 0x10);
    if (pcVar4 == (code *)&LAB_141067ecc) {
      plVar3 = (longlong *)plVar3[1];
      pcVar4 = *(code **)(*plVar3 + 0x10);
      if (pcVar4 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar3 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3,1);
        }
        goto LAB_14372e25c;
      }
    }
    (*pcVar4)();
  }
LAB_14372e25c:
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aacea10;
  local_78[0] = FUN_14372e5a0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace9f0;
  local_b8[0] = FUN_14372e532;
  *(undefined4 *)(lVar2 + 0x68) = 1;
  local_90 = lVar2;
  local_50 = lVar2;
  FUN_1403223d2(lVar2 + 0x70,local_b8);
  *(undefined4 *)(lVar2 + 0xb0) = 1;
  FUN_1403223d2(lVar2 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar5 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar5 = &local_98;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar5 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar5 = &local_58;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372e368 FUN_14372e368 body=12 status=ok
// SIG undefined FUN_14372e368(void)

void FUN_14372e368(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e374 FUN_14372e374 body=29 status=ok
// SIG undefined FUN_14372e374(void)

undefined8 FUN_14372e374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e392 FUN_14372e392 body=343 status=ok
// SIG undefined FUN_14372e392(void)

void FUN_14372e392(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  plVar4 = *(longlong **)(lVar2 + 0x288);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar3 = *(code **)(*plVar4 + 0x10);
    if (pcVar3 == (code *)&LAB_141067ecc) {
      plVar4 = (longlong *)plVar4[1];
      pcVar3 = *(code **)(*plVar4 + 0x10);
      if (pcVar3 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar4 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4,1);
        }
        goto LAB_14372e411;
      }
    }
    (*pcVar3)();
  }
LAB_14372e411:
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aacea30;
  local_68[0] = FUN_14372e618;
  local_a8[0] = 0;
  local_98 = (longlong *)0x0;
  *(undefined4 *)(lVar2 + 0x68) = 0;
  local_40 = lVar2;
  FUN_1403223d2(lVar2 + 0x70,local_a8);
  *(undefined4 *)(lVar2 + 0xb0) = 1;
  FUN_1403223d2(lVar2 + 0xc0,local_68);
  if (local_a8[0] != 0) {
    plVar4 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372e508 FUN_14372e508 body=12 status=ok
// SIG undefined FUN_14372e508(void)

void FUN_14372e508(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e514 FUN_14372e514 body=29 status=ok
// SIG undefined FUN_14372e514(void)

undefined8 FUN_14372e514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e532 FUN_14372e532 body=37 status=ok
// SIG undefined FUN_14372e532(void)

void FUN_14372e532(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1406a141e(uVar1);
  FUN_14045530e(uVar1,param_2);
  return;
}



// FUNCTION 14372e576 FUN_14372e576 body=12 status=ok
// SIG undefined FUN_14372e576(void)

void FUN_14372e576(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e582 FUN_14372e582 body=29 status=ok
// SIG undefined FUN_14372e582(void)

undefined8 FUN_14372e582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e5a0 FUN_14372e5a0 body=48 status=ok
// SIG undefined FUN_14372e5a0(void)

void FUN_14372e5a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1417f38c6(uVar1);
  FUN_14045530e(uVar1,param_2);
  FUN_143726d86(uVar1,param_2);
  return;
}



// FUNCTION 14372e5ee FUN_14372e5ee body=12 status=ok
// SIG undefined FUN_14372e5ee(void)

void FUN_14372e5ee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e5f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e5fa FUN_14372e5fa body=29 status=ok
// SIG undefined FUN_14372e5fa(void)

undefined8 FUN_14372e5fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e618 FUN_14372e618 body=48 status=ok
// SIG undefined FUN_14372e618(void)

void FUN_14372e618(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1417f38c6(uVar1);
  FUN_14045530e(uVar1,param_2);
  FUN_143726d86(uVar1,param_2);
  return;
}



// FUNCTION 14372e666 FUN_14372e666 body=12 status=ok
// SIG undefined FUN_14372e666(void)

void FUN_14372e666(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e672 FUN_14372e672 body=29 status=ok
// SIG undefined FUN_14372e672(void)

undefined8 FUN_14372e672(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e690 FUN_14372e690 body=256 status=ok
// SIG undefined FUN_14372e690(void)

void FUN_14372e690(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_14372659c(lVar1);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aacea90;
  local_78[0] = FUN_14372e94c;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacea70;
  local_b8[0] = FUN_14372e7da;
  *(undefined4 *)(lVar1 + 0x68) = 1;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372e7b0 FUN_14372e7b0 body=12 status=ok
// SIG undefined FUN_14372e7b0(void)

void FUN_14372e7b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e7bc FUN_14372e7bc body=29 status=ok
// SIG undefined FUN_14372e7bc(void)

undefined8 FUN_14372e7bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e7da FUN_14372e7da body=296 status=ok
// SIG undefined FUN_14372e7da(void)

void FUN_14372e7da(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  (**(code **)(*DAT_14ca83900 + 0x420))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar1 + 0x100),1);
  FUN_143725c1a(lVar1,param_2);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aacead0;
  local_68[0] = FUN_14372eb0e;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aaceab0;
  local_a8[0] = FUN_14372e9c4;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372e922 FUN_14372e922 body=12 status=ok
// SIG undefined FUN_14372e922(void)

void FUN_14372e922(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e92b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e92e FUN_14372e92e body=29 status=ok
// SIG undefined FUN_14372e92e(void)

undefined8 FUN_14372e92e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e94c FUN_14372e94c body=48 status=ok
// SIG undefined FUN_14372e94c(void)

void FUN_14372e94c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_147d64fda(uVar1);
  FUN_14045530e(uVar1,param_2);
  FUN_143726d86(uVar1,param_2);
  return;
}



// FUNCTION 14372e99a FUN_14372e99a body=12 status=ok
// SIG undefined FUN_14372e99a(void)

void FUN_14372e99a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372e9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372e9a6 FUN_14372e9a6 body=29 status=ok
// SIG undefined FUN_14372e9a6(void)

undefined8 FUN_14372e9a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372e9c4 FUN_14372e9c4 body=257 status=ok
// SIG undefined FUN_14372e9c4(void)

void FUN_14372e9c4(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  FUN_14048a436(lVar1);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aaceb10;
  local_68[0] = FUN_14372ec58;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aaceaf0;
  local_a8[0] = FUN_14372eb86;
  *(undefined4 *)(lVar1 + 0x68) = 1;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 2;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372eae4 FUN_14372eae4 body=12 status=ok
// SIG undefined FUN_14372eae4(void)

void FUN_14372eae4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372eaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372eaf0 FUN_14372eaf0 body=29 status=ok
// SIG undefined FUN_14372eaf0(void)

undefined8 FUN_14372eaf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372eb0e FUN_14372eb0e body=48 status=ok
// SIG undefined FUN_14372eb0e(void)

void FUN_14372eb0e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_147d64fda(uVar1);
  FUN_14045530e(uVar1,param_2);
  FUN_143726d86(uVar1,param_2);
  return;
}



// FUNCTION 14372eb5c FUN_14372eb5c body=12 status=ok
// SIG undefined FUN_14372eb5c(void)

void FUN_14372eb5c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372eb65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372eb68 FUN_14372eb68 body=29 status=ok
// SIG undefined FUN_14372eb68(void)

undefined8 FUN_14372eb68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372eb86 FUN_14372eb86 body=138 status=ok
// SIG undefined FUN_14372eb86(void)

void FUN_14372eb86(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x288);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar4 = *(code **)(*plVar3 + 0x10);
    if (pcVar4 == (code *)&LAB_141067ecc) {
      plVar3 = (longlong *)plVar3[1];
      pcVar4 = *(code **)(*plVar3 + 0x10);
      if (pcVar4 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar3 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3,1);
        }
        goto LAB_14372ebe4;
      }
    }
    (*pcVar4)();
  }
LAB_14372ebe4:
  FUN_147d64fda(lVar2,param_2);
  FUN_14045530e(lVar2,param_2);
  return;
}



// FUNCTION 14372ec2e FUN_14372ec2e body=12 status=ok
// SIG undefined FUN_14372ec2e(void)

void FUN_14372ec2e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372ec37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372ec3a FUN_14372ec3a body=29 status=ok
// SIG undefined FUN_14372ec3a(void)

undefined8 FUN_14372ec3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ec58 FUN_14372ec58 body=343 status=ok
// SIG undefined FUN_14372ec58(void)

void FUN_14372ec58(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  plVar4 = *(longlong **)(lVar2 + 0x288);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar3 = *(code **)(*plVar4 + 0x10);
    if (pcVar3 == (code *)&LAB_141067ecc) {
      plVar4 = (longlong *)plVar4[1];
      pcVar3 = *(code **)(*plVar4 + 0x10);
      if (pcVar3 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar4 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4,1);
        }
        goto LAB_14372ecd7;
      }
    }
    (*pcVar3)();
  }
LAB_14372ecd7:
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aaceb30;
  local_68[0] = FUN_14372edf8;
  local_a8[0] = 0;
  local_98 = (longlong *)0x0;
  *(undefined4 *)(lVar2 + 0x68) = 0;
  local_40 = lVar2;
  FUN_1403223d2(lVar2 + 0x70,local_a8);
  *(undefined4 *)(lVar2 + 0xb0) = 1;
  FUN_1403223d2(lVar2 + 0xc0,local_68);
  if (local_a8[0] != 0) {
    plVar4 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372edce FUN_14372edce body=12 status=ok
// SIG undefined FUN_14372edce(void)

void FUN_14372edce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372edd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372edda FUN_14372edda body=29 status=ok
// SIG undefined FUN_14372edda(void)

undefined8 FUN_14372edda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372edf8 FUN_14372edf8 body=48 status=ok
// SIG undefined FUN_14372edf8(void)

void FUN_14372edf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_147d64fda(uVar1);
  FUN_14045530e(uVar1,param_2);
  FUN_143726d86(uVar1,param_2);
  return;
}



// FUNCTION 14372ee46 FUN_14372ee46 body=12 status=ok
// SIG undefined FUN_14372ee46(void)

void FUN_14372ee46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372ee4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372ee52 FUN_14372ee52 body=29 status=ok
// SIG undefined FUN_14372ee52(void)

undefined8 FUN_14372ee52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ee70 FUN_14372ee70 body=271 status=ok
// SIG undefined FUN_14372ee70(void)

void FUN_14372ee70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  FUN_143726888(lVar1);
  FUN_143725c1a(lVar1,param_2);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aaceb90;
  local_68[0] = &LAB_14372f112;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aaceb70;
  local_a8[0] = FUN_14372efc8;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372ef9e FUN_14372ef9e body=12 status=ok
// SIG undefined FUN_14372ef9e(void)

void FUN_14372ef9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372efa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372efaa FUN_14372efaa body=29 status=ok
// SIG undefined FUN_14372efaa(void)

undefined8 FUN_14372efaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372efc8 FUN_14372efc8 body=256 status=ok
// SIG undefined FUN_14372efc8(void)

void FUN_14372efc8(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_14048a436(lVar1);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aacebd0;
  local_78[0] = FUN_14372f318;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacebb0;
  local_b8[0] = FUN_14372f162;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 2;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372f0e8 FUN_14372f0e8 body=12 status=ok
// SIG undefined FUN_14372f0e8(void)

void FUN_14372f0e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f0f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f0f4 FUN_14372f0f4 body=29 status=ok
// SIG undefined FUN_14372f0f4(void)

undefined8 FUN_14372f0f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f138 FUN_14372f138 body=12 status=ok
// SIG undefined FUN_14372f138(void)

void FUN_14372f138(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f144 FUN_14372f144 body=29 status=ok
// SIG undefined FUN_14372f144(void)

undefined8 FUN_14372f144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f162 FUN_14372f162 body=364 status=ok
// SIG undefined FUN_14372f162(void)

void FUN_14372f162(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x288);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar4 = *(code **)(*plVar3 + 0x10);
    if (pcVar4 == (code *)&LAB_141067ecc) {
      plVar3 = (longlong *)plVar3[1];
      pcVar4 = *(code **)(*plVar3 + 0x10);
      if (pcVar4 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar3 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3,1);
        }
        goto LAB_14372f1e2;
      }
    }
    (*pcVar4)();
  }
LAB_14372f1e2:
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aacec10;
  local_78[0] = &LAB_14372f54c;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacebf0;
  local_b8[0] = FUN_14372f4b8;
  *(undefined4 *)(lVar2 + 0x68) = 1;
  local_90 = lVar2;
  local_50 = lVar2;
  FUN_1403223d2(lVar2 + 0x70,local_b8);
  *(undefined4 *)(lVar2 + 0xb0) = 1;
  FUN_1403223d2(lVar2 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar5 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar5 = &local_98;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar5 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar5 = &local_58;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372f2ee FUN_14372f2ee body=12 status=ok
// SIG undefined FUN_14372f2ee(void)

void FUN_14372f2ee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f2fa FUN_14372f2fa body=29 status=ok
// SIG undefined FUN_14372f2fa(void)

undefined8 FUN_14372f2fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f318 FUN_14372f318 body=343 status=ok
// SIG undefined FUN_14372f318(void)

void FUN_14372f318(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  plVar4 = *(longlong **)(lVar2 + 0x288);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x288) = 0;
    pcVar3 = *(code **)(*plVar4 + 0x10);
    if (pcVar3 == (code *)&LAB_141067ecc) {
      plVar4 = (longlong *)plVar4[1];
      pcVar3 = *(code **)(*plVar4 + 0x10);
      if (pcVar3 == (code *)&LAB_1401bbf4a) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (plVar4 != (longlong *)0x0 && (int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4,1);
        }
        goto LAB_14372f397;
      }
    }
    (*pcVar3)();
  }
LAB_14372f397:
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aacec30;
  local_68[0] = &LAB_14372f59c;
  local_a8[0] = 0;
  local_98 = (longlong *)0x0;
  *(undefined4 *)(lVar2 + 0x68) = 0;
  local_40 = lVar2;
  FUN_1403223d2(lVar2 + 0x70,local_a8);
  *(undefined4 *)(lVar2 + 0xb0) = 1;
  FUN_1403223d2(lVar2 + 0xc0,local_68);
  if (local_a8[0] != 0) {
    plVar4 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar4 = local_88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372f48e FUN_14372f48e body=12 status=ok
// SIG undefined FUN_14372f48e(void)

void FUN_14372f48e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f49a FUN_14372f49a body=29 status=ok
// SIG undefined FUN_14372f49a(void)

undefined8 FUN_14372f49a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f4b8 FUN_14372f4b8 body=76 status=ok
// SIG undefined FUN_14372f4b8(void)

void FUN_14372f4b8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_147d64fda(lVar1);
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x3b0))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(lVar1 + 0x100),
               *(undefined4 *)(lVar1 + 0x14));
  }
  FUN_14045530e(lVar1,param_2);
  return;
}



// FUNCTION 14372f522 FUN_14372f522 body=12 status=ok
// SIG undefined FUN_14372f522(void)

void FUN_14372f522(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f52e FUN_14372f52e body=29 status=ok
// SIG undefined FUN_14372f52e(void)

undefined8 FUN_14372f52e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f572 FUN_14372f572 body=12 status=ok
// SIG undefined FUN_14372f572(void)

void FUN_14372f572(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f57e FUN_14372f57e body=29 status=ok
// SIG undefined FUN_14372f57e(void)

undefined8 FUN_14372f57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f5c2 FUN_14372f5c2 body=12 status=ok
// SIG undefined FUN_14372f5c2(void)

void FUN_14372f5c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f5ce FUN_14372f5ce body=29 status=ok
// SIG undefined FUN_14372f5ce(void)

undefined8 FUN_14372f5ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372f5ec FUN_14372f5ec body=956 status=ok
// SIG undefined FUN_14372f5ec(void)

void FUN_14372f5ec(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  code cVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  uint local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 *local_128;
  undefined8 **local_120;
  code **local_118;
  undefined8 *local_110;
  code *local_108 [2];
  undefined ***local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined8 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *param_1;
  if (((*(char *)(lVar9 + 0x5c) != '\0') || (param_2[1] == 0)) || (*param_2 == 0))
  goto LAB_14372f61e;
  lVar10 = *(longlong *)(param_2[2] + (longlong)*(int *)(lVar9 + 0x14) * 8);
  local_118 = (code **)(lVar9 + 0x100);
  local_c8[0] = (undefined8 *)0x0;
  FUN_1400021e4(param_2[1] + 0x74,&local_88);
  local_128 = local_88;
  if (local_80 == 0) {
    local_128 = &DAT_149dfb77a;
  }
  uVar11 = *(undefined8 *)(param_2[1] + 0x88);
  bVar4 = *(byte *)(lVar9 + 0xe);
  uVar5 = *(undefined1 *)(param_2[1] + 0x84);
  uVar7 = *(undefined2 *)(lVar10 + 0x4a);
  uVar8 = *(undefined2 *)(lVar10 + 0x48);
  local_140 = FUN_1431edf91(uVar11,0);
  local_120 = local_c8;
  local_138 = 0;
  local_150 = (uint)bVar4;
  local_158 = CONCAT31(local_158._1_3_,uVar5);
  local_130 = 0;
  local_148 = uVar11;
  (**(code **)(*DAT_14ca83900 + 0x1a8))(DAT_14ca83900,local_108,uVar8,uVar7);
  if (local_118 == local_108) {
LAB_14372f868:
    pcVar12 = local_108[0];
    if (local_108[0] != (code *)0x0) {
      LOCK();
      pcVar1 = local_108[0] + 8;
      uVar3 = *(uint *)pcVar1;
      *(uint *)pcVar1 = *(uint *)pcVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        pcVar1 = local_108[0] + 8;
        LOCK();
        uVar3 = *(uint *)pcVar1;
        *(uint *)pcVar1 = *(uint *)pcVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          cVar6 = local_108[0][0xd];
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = (longlong)pcVar12;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if (((byte)cVar6 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar17 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar17) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar17 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar17) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *local_118;
    *local_118 = local_108[0];
    local_108[0] = (code *)0x0;
    if (pcVar12 != (code *)0x0) {
      LOCK();
      pcVar1 = pcVar12 + 8;
      uVar3 = *(uint *)pcVar1;
      *(uint *)pcVar1 = *(uint *)pcVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        pcVar1 = pcVar12 + 8;
        LOCK();
        uVar3 = *(uint *)pcVar1;
        *(uint *)pcVar1 = *(uint *)pcVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          cVar6 = pcVar12[0xd];
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = (longlong)pcVar12;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if (((byte)cVar6 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar17 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar17) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar17 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar17) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
      goto LAB_14372f868;
    }
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != (undefined8 *)0x0) {
    LOCK();
    *(int *)(lVar9 + 0x58) = *(int *)(lVar9 + 0x58) + 1;
    UNLOCK();
    local_78 = 0;
    local_68 = &PTR_LAB_14aacec70;
    local_88 = (undefined2 *)&LAB_14372f9f2;
    local_158 = 0xff;
    local_60 = lVar9;
    FUN_140e6df44(&local_110);
    if (local_110 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_110 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_110)(local_110,1);
      }
    }
    if (local_c8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_c8[0] + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_c8[0])(local_c8[0],1);
      }
    }
  }
LAB_14372f61e:
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aacecb0;
  local_c8[0] = (undefined8 *)&LAB_14372faee;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14aacec90;
  local_108[0] = FUN_14372fa2e;
  *(undefined4 *)(lVar9 + 0x68) = 1;
  local_e0 = lVar9;
  local_a0 = lVar9;
  FUN_1403223d2(lVar9 + 0x70,local_108);
  *(undefined4 *)(lVar9 + 0xb0) = 1;
  FUN_1403223d2(lVar9 + 0xc0,local_c8);
  if (local_108[0] != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_c8[0] != (undefined8 *)0x0) {
    pppuVar16 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar16 = &local_a8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372f9c8 FUN_14372f9c8 body=12 status=ok
// SIG undefined FUN_14372f9c8(void)

void FUN_14372f9c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372f9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372f9d4 FUN_14372f9d4 body=29 status=ok
// SIG undefined FUN_14372f9d4(void)

undefined8 FUN_14372f9d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fa10 FUN_14372fa10 body=29 status=ok
// SIG undefined FUN_14372fa10(void)

undefined8 FUN_14372fa10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fa2e FUN_14372fa2e body=120 status=ok
// SIG undefined FUN_14372fa2e(void)

void FUN_14372fa2e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (((*(char *)(lVar1 + 0x5c) == '\0') && (*(longlong *)(lVar1 + 0x100) != 0)) &&
     (*(longlong *)(param_2 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    lVar3 = 0;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x52) == '\0')) {
      lVar3 = lVar2;
    }
    FUN_1406a1459(&DAT_14ca85100,lVar3);
  }
  (**(code **)(*DAT_14ca83900 + 0x420))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar1 + 0x100),1);
  FUN_14045530e(lVar1,param_2);
  return;
}



// FUNCTION 14372fac4 FUN_14372fac4 body=12 status=ok
// SIG undefined FUN_14372fac4(void)

void FUN_14372fac4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372facd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372fad0 FUN_14372fad0 body=29 status=ok
// SIG undefined FUN_14372fad0(void)

undefined8 FUN_14372fad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fb14 FUN_14372fb14 body=12 status=ok
// SIG undefined FUN_14372fb14(void)

void FUN_14372fb14(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372fb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372fb20 FUN_14372fb20 body=29 status=ok
// SIG undefined FUN_14372fb20(void)

undefined8 FUN_14372fb20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fb3e FUN_14372fb3e body=256 status=ok
// SIG undefined FUN_14372fb3e(void)

void FUN_14372fb3e(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_14372659c(lVar1);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aaced10;
  local_78[0] = &LAB_14372fd0e;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacecf0;
  local_b8[0] = FUN_14372fc88;
  *(undefined4 *)(lVar1 + 0x68) = 1;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372fc5e FUN_14372fc5e body=12 status=ok
// SIG undefined FUN_14372fc5e(void)

void FUN_14372fc5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372fc67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372fc6a FUN_14372fc6a body=29 status=ok
// SIG undefined FUN_14372fc6a(void)

undefined8 FUN_14372fc6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fc88 FUN_14372fc88 body=62 status=ok
// SIG undefined FUN_14372fc88(void)

void FUN_14372fc88(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  (**(code **)(*DAT_14ca83900 + 0x420))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar1 + 0x100),1);
  FUN_14045530e(lVar1,param_2);
  return;
}



// FUNCTION 14372fce4 FUN_14372fce4 body=12 status=ok
// SIG undefined FUN_14372fce4(void)

void FUN_14372fce4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372fced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372fcf0 FUN_14372fcf0 body=29 status=ok
// SIG undefined FUN_14372fcf0(void)

undefined8 FUN_14372fcf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fd34 FUN_14372fd34 body=12 status=ok
// SIG undefined FUN_14372fd34(void)

void FUN_14372fd34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372fd3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372fd40 FUN_14372fd40 body=29 status=ok
// SIG undefined FUN_14372fd40(void)

undefined8 FUN_14372fd40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372fd5e FUN_14372fd5e body=1137 status=ok
// SIG undefined FUN_14372fd5e(void)

void FUN_14372fd5e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  uint local_7c;
  undefined4 local_78;
  ulonglong local_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined2 local_64;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0a9a8) && (FUN_144b3d300(&DAT_14cb0a9a8), DAT_14cb0a9a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VirtualTextureReducedMemory",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14cb0a9a0 = 0;
    }
    else {
      DAT_14cb0a9a0 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14cb0a9a8);
  }
  if ((*(int *)(DAT_14cb0a9a0 + 4) == 0) || (*(byte *)(lVar4 + 9) < *(byte *)(lVar4 + 0xe))) {
    lVar6 = *(longlong *)(param_2[1] + 0x10);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(lVar4 + 0x100);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar4 + 0x100) = 0;
LAB_143730045:
        LOCK();
        puVar1 = (uint *)(lVar6 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar6 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar6 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar9 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar11 = plVar9 != DAT_14ca843c0;
                plVar10 = plVar8;
                if (bVar11) {
                  plVar9 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar11 = plVar10 != DAT_14ca843c8;
                plVar9 = plVar8;
                if (bVar11) {
                  plVar10 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
      }
    }
    else {
      lVar5 = 0;
      if (*(char *)(lVar6 + 0x52) == '\0') {
        lVar5 = lVar6;
      }
      lVar6 = *(longlong *)(lVar4 + 0x100);
      if (lVar6 != lVar5) {
        *(longlong *)(lVar4 + 0x100) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) goto LAB_143730045;
      }
    }
    (**(code **)(*DAT_14ca83900 + 0x3b0))
              (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar4 + 0x100),
               *(undefined4 *)(lVar4 + 0x14));
    (**(code **)(*DAT_14ca83900 + 0x3a8))
              (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar4 + 0x100),
               *(undefined4 *)(lVar4 + 0x14));
    goto LAB_1437300e0;
  }
  if (((((*(char *)(lVar4 + 0x5c) != '\0') || (*(longlong *)(lVar4 + 0x100) != 0)) ||
       (*param_2 == 0)) ||
      ((param_2[1] == 0 || (plVar9 = *(longlong **)(param_2[1] + 0x10), plVar9 == (longlong *)0x0)))
      ) || (lVar6 = (**(code **)(*plVar9 + 8))(), (*(byte *)(lVar6 + 2) & 0x80) == 0))
  goto LAB_1437300e0;
  plVar9 = (longlong *)(lVar4 + 0x100);
  lVar6 = param_2[1];
  lVar5 = *(longlong *)(param_2[2] + (longlong)*(int *)(lVar4 + 0x14) * 8);
  local_65 = *(undefined1 *)(lVar6 + 0x84);
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_74 = (ulonglong)*(ushort *)(lVar5 + 0x4a) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 0x48);
  local_48 = 0;
  uStack_40 = 0;
  local_68 = *(undefined1 *)(lVar4 + 0xe);
  local_98 = *(undefined8 *)(lVar6 + 0x88);
  local_50 = *(longlong *)(lVar6 + 0x98);
  local_64 = 0xff00;
  local_6c = 0x10001;
  local_67 = 1;
  local_90 = 1;
  local_78 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_58 = L"FTexture2DUpdate";
  local_60 = FUN_1431edf91(local_98,CONCAT71((int7)((ulonglong)local_50 >> 8),local_50 != 0));
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
  if (plVar9 == &local_a0) {
LAB_14372ffa1:
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14372ffa1;
    }
  }
  lVar6 = *(longlong *)(param_2[1] + 0x10);
  lVar5 = 0;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x52) == '\0')) {
    lVar5 = lVar6;
  }
  FUN_1406a1459(&DAT_14ca85100,lVar5,*plVar9);
LAB_1437300e0:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14045530e(lVar4,param_2);
  return;
}



// FUNCTION 1437301ee FUN_1437301ee body=12 status=ok
// SIG undefined FUN_1437301ee(void)

void FUN_1437301ee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437301f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437301fa FUN_1437301fa body=29 status=ok
// SIG undefined FUN_1437301fa(void)

undefined8 FUN_1437301fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730256 FUN_143730256 body=29 status=ok
// SIG undefined FUN_143730256(void)

undefined8 FUN_143730256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373029a FUN_14373029a body=12 status=ok
// SIG undefined FUN_14373029a(void)

void FUN_14373029a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437302a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437302a6 FUN_1437302a6 body=29 status=ok
// SIG undefined FUN_1437302a6(void)

undefined8 FUN_1437302a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437302f6 FUN_1437302f6 body=29 status=ok
// SIG undefined FUN_1437302f6(void)

undefined8 FUN_1437302f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730346 FUN_143730346 body=29 status=ok
// SIG undefined FUN_143730346(void)

undefined8 FUN_143730346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730396 FUN_143730396 body=29 status=ok
// SIG undefined FUN_143730396(void)

undefined8 FUN_143730396(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437303e6 FUN_1437303e6 body=29 status=ok
// SIG undefined FUN_1437303e6(void)

undefined8 FUN_1437303e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373042a FUN_14373042a body=12 status=ok
// SIG undefined FUN_14373042a(void)

void FUN_14373042a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730436 FUN_143730436 body=29 status=ok
// SIG undefined FUN_143730436(void)

undefined8 FUN_143730436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730486 FUN_143730486 body=29 status=ok
// SIG undefined FUN_143730486(void)

undefined8 FUN_143730486(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437304d6 FUN_1437304d6 body=29 status=ok
// SIG undefined FUN_1437304d6(void)

undefined8 FUN_1437304d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730526 FUN_143730526 body=29 status=ok
// SIG undefined FUN_143730526(void)

undefined8 FUN_143730526(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730576 FUN_143730576 body=29 status=ok
// SIG undefined FUN_143730576(void)

undefined8 FUN_143730576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437305ba FUN_1437305ba body=12 status=ok
// SIG undefined FUN_1437305ba(void)

void FUN_1437305ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437305c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437305c6 FUN_1437305c6 body=29 status=ok
// SIG undefined FUN_1437305c6(void)

undefined8 FUN_1437305c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730616 FUN_143730616 body=29 status=ok
// SIG undefined FUN_143730616(void)

undefined8 FUN_143730616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730666 FUN_143730666 body=29 status=ok
// SIG undefined FUN_143730666(void)

undefined8 FUN_143730666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437306b6 FUN_1437306b6 body=29 status=ok
// SIG undefined FUN_1437306b6(void)

undefined8 FUN_1437306b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730706 FUN_143730706 body=29 status=ok
// SIG undefined FUN_143730706(void)

undefined8 FUN_143730706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373074a FUN_14373074a body=12 status=ok
// SIG undefined FUN_14373074a(void)

void FUN_14373074a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730756 FUN_143730756 body=29 status=ok
// SIG undefined FUN_143730756(void)

undefined8 FUN_143730756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437307a6 FUN_1437307a6 body=29 status=ok
// SIG undefined FUN_1437307a6(void)

undefined8 FUN_1437307a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437307f6 FUN_1437307f6 body=29 status=ok
// SIG undefined FUN_1437307f6(void)

undefined8 FUN_1437307f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730846 FUN_143730846 body=29 status=ok
// SIG undefined FUN_143730846(void)

undefined8 FUN_143730846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730896 FUN_143730896 body=29 status=ok
// SIG undefined FUN_143730896(void)

undefined8 FUN_143730896(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437308da FUN_1437308da body=12 status=ok
// SIG undefined FUN_1437308da(void)

void FUN_1437308da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437308e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437308e6 FUN_1437308e6 body=29 status=ok
// SIG undefined FUN_1437308e6(void)

undefined8 FUN_1437308e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373092a FUN_14373092a body=12 status=ok
// SIG undefined FUN_14373092a(void)

void FUN_14373092a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730936 FUN_143730936 body=29 status=ok
// SIG undefined FUN_143730936(void)

undefined8 FUN_143730936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373097a FUN_14373097a body=12 status=ok
// SIG undefined FUN_14373097a(void)

void FUN_14373097a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730986 FUN_143730986 body=29 status=ok
// SIG undefined FUN_143730986(void)

undefined8 FUN_143730986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437309a4 FUN_1437309a4 body=93 status=ok
// SIG undefined FUN_1437309a4(void)

void FUN_1437309a4(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2dc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
    if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x2d0),
              (longlong)*(int *)((longlong)param_1 + 0x2d8) * 0x30);
      FUN_1446efa72((longlong)param_1 + 0x2d0,0,0,0x30);
      return;
    }
  }
  return;
}



// FUNCTION 143730a34 FUN_143730a34 body=29 status=ok
// SIG undefined FUN_143730a34(void)

undefined8 FUN_143730a34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730a84 FUN_143730a84 body=29 status=ok
// SIG undefined FUN_143730a84(void)

undefined8 FUN_143730a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730ac8 FUN_143730ac8 body=12 status=ok
// SIG undefined FUN_143730ac8(void)

void FUN_143730ac8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730ad4 FUN_143730ad4 body=29 status=ok
// SIG undefined FUN_143730ad4(void)

undefined8 FUN_143730ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730b18 FUN_143730b18 body=12 status=ok
// SIG undefined FUN_143730b18(void)

void FUN_143730b18(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730b24 FUN_143730b24 body=29 status=ok
// SIG undefined FUN_143730b24(void)

undefined8 FUN_143730b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730b68 FUN_143730b68 body=12 status=ok
// SIG undefined FUN_143730b68(void)

void FUN_143730b68(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730b74 FUN_143730b74 body=29 status=ok
// SIG undefined FUN_143730b74(void)

undefined8 FUN_143730b74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730bb8 FUN_143730bb8 body=12 status=ok
// SIG undefined FUN_143730bb8(void)

void FUN_143730bb8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730bc4 FUN_143730bc4 body=29 status=ok
// SIG undefined FUN_143730bc4(void)

undefined8 FUN_143730bc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730c14 FUN_143730c14 body=29 status=ok
// SIG undefined FUN_143730c14(void)

undefined8 FUN_143730c14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730c70 FUN_143730c70 body=29 status=ok
// SIG undefined FUN_143730c70(void)

undefined8 FUN_143730c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730cb4 FUN_143730cb4 body=12 status=ok
// SIG undefined FUN_143730cb4(void)

void FUN_143730cb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730cc0 FUN_143730cc0 body=29 status=ok
// SIG undefined FUN_143730cc0(void)

undefined8 FUN_143730cc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730d04 FUN_143730d04 body=12 status=ok
// SIG undefined FUN_143730d04(void)

void FUN_143730d04(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730d10 FUN_143730d10 body=29 status=ok
// SIG undefined FUN_143730d10(void)

undefined8 FUN_143730d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730d54 FUN_143730d54 body=12 status=ok
// SIG undefined FUN_143730d54(void)

void FUN_143730d54(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730d60 FUN_143730d60 body=29 status=ok
// SIG undefined FUN_143730d60(void)

undefined8 FUN_143730d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730da4 FUN_143730da4 body=12 status=ok
// SIG undefined FUN_143730da4(void)

void FUN_143730da4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730db0 FUN_143730db0 body=29 status=ok
// SIG undefined FUN_143730db0(void)

undefined8 FUN_143730db0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730df4 FUN_143730df4 body=12 status=ok
// SIG undefined FUN_143730df4(void)

void FUN_143730df4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730e00 FUN_143730e00 body=29 status=ok
// SIG undefined FUN_143730e00(void)

undefined8 FUN_143730e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730e50 FUN_143730e50 body=29 status=ok
// SIG undefined FUN_143730e50(void)

undefined8 FUN_143730e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730ea0 FUN_143730ea0 body=29 status=ok
// SIG undefined FUN_143730ea0(void)

undefined8 FUN_143730ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730ee4 FUN_143730ee4 body=12 status=ok
// SIG undefined FUN_143730ee4(void)

void FUN_143730ee4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730ef0 FUN_143730ef0 body=29 status=ok
// SIG undefined FUN_143730ef0(void)

undefined8 FUN_143730ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730f34 FUN_143730f34 body=12 status=ok
// SIG undefined FUN_143730f34(void)

void FUN_143730f34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730f40 FUN_143730f40 body=29 status=ok
// SIG undefined FUN_143730f40(void)

undefined8 FUN_143730f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730f84 FUN_143730f84 body=12 status=ok
// SIG undefined FUN_143730f84(void)

void FUN_143730f84(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730f90 FUN_143730f90 body=29 status=ok
// SIG undefined FUN_143730f90(void)

undefined8 FUN_143730f90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730fd4 FUN_143730fd4 body=12 status=ok
// SIG undefined FUN_143730fd4(void)

void FUN_143730fd4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143730fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143730fe0 FUN_143730fe0 body=29 status=ok
// SIG undefined FUN_143730fe0(void)

undefined8 FUN_143730fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143730ffe FUN_143730ffe body=67 status=ok
// SIG undefined FUN_143730ffe(void)

void FUN_143730ffe(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x10);
  lVar2 = 0;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x52) == '\x02')) {
    lVar2 = lVar1;
  }
  FUN_1406a1459(param_2,lVar2,*(undefined8 *)(param_1[1] + 0x20));
  *(undefined1 *)param_1[2] = 1;
  return;
}



// FUNCTION 14373104c FUN_14373104c body=12 status=ok
// SIG undefined FUN_14373104c(void)

void FUN_14373104c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143731055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143731058 FUN_143731058 body=29 status=ok
// SIG undefined FUN_143731058(void)

undefined8 FUN_143731058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143731076 FUN_143731076 body=282 status=ok
// SIG undefined FUN_143731076(void)

undefined8 * FUN_143731076(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14372c6e3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143731190 FUN_143731190 body=126 status=ok
// SIG undefined FUN_143731190(void)

void FUN_143731190(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1[0x15] + 8) + 0x10);
  lVar3 = 0;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x52) == '\x02')) {
    lVar3 = lVar2;
  }
  FUN_1406a1459(&DAT_14ca85100,lVar3,*(undefined8 *)(param_1[0x16] + 0x20));
  *(undefined1 *)param_1[0x17] = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143731204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14373120e FUN_14373120e body=202 status=ok
// SIG undefined FUN_14373120e(void)

int FUN_14373120e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1437312d8 FUN_1437312d8 body=556 status=ok
// SIG undefined FUN_1437312d8(void)

void FUN_1437312d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong *plVar7;
  
  lVar3 = FUN_1479bd5a0(*param_1);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0xb80) != 0)) && (*(int *)(lVar3 + 0xb7c) != 0)) {
    puVar6 = (uint *)(lVar3 + 0xb78);
    uVar2 = *puVar6;
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         param_4 = DAT_14c9647c8, plVar7 != (longlong *)0x0 &&
         (((int)plVar7[2] == *(int *)(lVar3 + 0xb7c) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0))
         )))) && ((*plVar7 != 0 &&
                  (lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),
                                         *(longlong *)(lVar3 + 0xb80),1), lVar4 != 0)))) {
      if (*(longlong *)(lVar3 + 0xb80) == 0) {
        return;
      }
      if (*(int *)(lVar3 + 0xb7c) == 0) {
        return;
      }
      uVar2 = *puVar6;
      if ((int)uVar2 < 0) {
        return;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return;
      }
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      if ((int)plVar7[2] != *(int *)(lVar3 + 0xb7c)) {
        return;
      }
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
      uVar5 = param_1[5];
      if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
        return;
      }
      if (*plVar7 == 0) {
        return;
      }
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),*(longlong *)(lVar3 + 0xb80),1);
      if (lVar3 == 0) {
        return;
      }
      FUN_1479b9371(puVar6,uVar5,uVar1);
      return;
    }
  }
  if (((((*(int *)((longlong)param_1 + 0xc) != 0) &&
        (uVar2 = *(uint *)(param_1 + 1), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0xc))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
    uVar5 = FUN_1415b2342();
    FUN_14372ac1c(uVar5,param_1[2],*(undefined4 *)(param_1 + 3),
                  CONCAT71((int7)((ulonglong)param_4 >> 8),*(byte *)(param_1 + 4)) &
                  0xffffffffffffff01,(*(byte *)(param_1 + 4) & 2) >> 1,
                  *(undefined4 *)((longlong)param_1 + 0x1c),param_1[5],*(undefined4 *)(param_1 + 6),
                  (float)*(double *)(lVar3 + 0x6e8));
  }
  return;
}



// FUNCTION 14373150e FUN_14373150e body=29 status=ok
// SIG undefined FUN_14373150e(void)

void FUN_14373150e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14373152c FUN_14373152c body=29 status=ok
// SIG undefined FUN_14373152c(void)

undefined8 FUN_14373152c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373154a FUN_14373154a body=469 status=ok
// SIG undefined FUN_14373154a(void)

void FUN_14373154a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined2 *local_60;
  int local_58;
  int local_54;
  undefined2 *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  uVar6 = FUN_140f36250(puVar8,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  lVar2 = *param_1;
  FUN_1400b22c2(&local_60);
  iVar5 = local_54;
  iVar4 = local_58;
  if (local_58 < 2) {
    local_50 = (undefined2 *)0x0;
    local_48 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_48;
    _Src = (void *)*param_2;
    if (lVar10 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar9 = 0;
    }
    local_50 = local_60;
    local_60 = (undefined2 *)0x0;
    local_48 = local_58;
    local_44 = local_54;
    local_58 = 0;
    local_54 = 0;
    iVar1 = iVar9 + iVar4;
    if (iVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar9);
    }
    if (iVar5 < iVar1) {
      FUN_1446f8c06(&local_50);
    }
    FUN_1400020e8(&local_50,*param_2,iVar9);
  }
  local_80 = lVar2 + 0x50;
  local_88 = lVar2 + 0x10;
  puVar7 = local_50;
  if (local_48 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_78 = 
  L"Allows to override a specific showflag (works in editor and game, \"show\" only works in game and UI only in editor)\nUseful to run a build many time with the same showflags (when put in consolevariables.ini like \"showflag.abc=0\")\n 0: force the showflag to be OFF\n 1: force the showflag to be ON\n 2: do not override this showflag (default)"
  ;
  local_70 = 1;
  (**(code **)(*plVar3 + 0x48))(plVar3,puVar7,puVar8,uVar6);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143731723 FUN_143731723 body=3197 status=ok
// SIG undefined FUN_143731723(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143731723(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cb0a948);
  if (cVar1 == '\0') {
    _DAT_14cb0a948 = 0;
    uRam000000014cb0a950 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb0a958,L"r.Streaming.UseMobileLODBiasOnDesktopES31",&DAT_14c761de0,
                L"If set apply mobile Min LOD bias on desktop platforms when running in ES31 mode");
  atexit(FUN_1437249f8);
  local_88 = CONCAT44(local_88._4_4_,0x40);
  FUN_141471170(&DAT_14cb0a968,L"r.Streaming.DefaultNoRefLODBias",&DAT_14cb0a978,
                L"The default LOD bias for no-ref meshes");
  atexit(FUN_143724a3d);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac3550,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac3960,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0a9e0,L"r.Streaming.UseTextureStreamingBuiltData",&DAT_14c761bd0,
                L"Turn on/off usage of texture streaming built data (0 to turn off).");
  atexit(FUN_143728135);
  local_70._0_4_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0b128,L"r.Streaming.UseNewMetrics",&local_70,
                L"If non-zero, will use improved set of metrics and heuristics.");
  atexit(FUN_14372817a);
  local_70._0_4_ = 0x3f800000;
  local_88._0_4_ = 0x1040;
  FUN_140a6b41e(&DAT_14cb0b0e0,L"r.Streaming.Boost",&local_70,
                L"=1.0: normal\n<1.0: decrease wanted mip levels\n>1.0: increase wanted mip levels")
  ;
  atexit(FUN_1437281bf);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0b0c8,L"r.Streaming.MinBoost",&local_70,
                L"Minimum clamp for r.Streaming.Boost");
  atexit(FUN_143728204);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cb0a9f0,L"r.Streaming.MaxEffectiveScreenSize",&local_70,
                L"0: Use current actual vertical screen size\n> 0: Clamp wanted mip size calculation to this value for the vertical screen size component."
               );
  atexit(FUN_143728249);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0b0f8,L"r.TextureStreaming",&local_70,
                L"Allows to define if texture streaming is enabled, can be changed at run time.\n0: off\n1: on (default)"
               );
  atexit(FUN_14372828e);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cb0b1a8,L"r.Streaming.UseFixedPoolSize",&local_70,
                L"If non-zero, do not allow the pool size to change at run time.");
  atexit(FUN_1437282d3);
  local_70._0_4_ = 0xffffffff;
  local_88._0_4_ = 0x1040;
  FUN_14078dbce(&DAT_14cb0b1c0,L"r.Streaming.PoolSize",&local_70,
                L"-1: Default texture pool size, otherwise the size in MB");
  atexit(FUN_143728318);
  local_70._0_4_ = 0xffffffff;
  local_88._0_4_ = 0x1040;
  FUN_14078dbce(&DAT_14cb0aa08,L"r.Streaming.PoolSizeForMeshes",&local_70,
                L"< 0: Mesh and texture share the same pool, otherwise the size of pool dedicated to meshes."
               );
  atexit(FUN_14372835d);
  local_70._0_4_ = 0x32;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aa20,L"r.Streaming.MaxTempMemoryAllowed",&local_70,
                L"Maximum temporary memory used when streaming in or out texture mips.\nThis memory contains mips used for the new updated texture.\nThe value must be high enough to not be a limiting streaming speed factor.\n"
               );
  atexit(FUN_1437283a2);
  local_70._0_4_ = 0;
  local_88._0_4_ = 1;
  FUN_14078dbce(&DAT_14cb0aa38,L"r.Streaming.DropMips",&local_70,
                L"0: Drop No Mips \n1: Drop Cached Mips\n2: Drop Cached and Hidden Mips\n3: Drop cached mips and non-inlined LODs of no-ref meshes"
               );
  atexit(FUN_1437283e7);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aa50,L"r.Streaming.HLODStrategy",&local_70,
                L"Define the HLOD streaming strategy.\n0: stream\n1: stream only mip 0\n2: disable streaming"
               );
  atexit(FUN_14372842c);
  local_70._0_4_ = 0x3fc00000;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0aa68,L"r.Streaming.PerTextureBiasViewBoostThreshold",&local_70,
                L"Maximum view boost at which per texture bias will be increased.\nThis prevents temporary small FOV from downgrading permanentely texture quality."
               );
  atexit(FUN_143728471);
  local_70._0_4_ = 0x3fc00000;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0aa80,L"r.Streaming.MaxHiddenPrimitiveViewBoost",&local_70,
                L"Maximum view boost that can affect hidden primitive.\nThis prevents temporary small FOV from streaming all textures to their highest mips."
               );
  atexit(FUN_1437284b6);
  local_70._0_4_ = 0x3f000000;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0aa98,L"r.Streaming.HiddenPrimitiveScale",&local_70,
                L"Define the resolution scale to apply when not in range.\n.5: drop one mip\n1: ignore visiblity"
               );
  atexit(FUN_1437284fb);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cb0aab0,L"r.Streaming.MipBias",&local_70,
                L"0..x reduce texture quality for streaming by a floating point number.\n0: use full resolution (default)\n1: drop one mip\n2: drop two mips"
               );
  atexit(FUN_143728540);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aac8,L"r.Streaming.UsePerTextureBias",&local_70,
                L"If non-zero, each texture will be assigned a mip bias between 0 and MipBias as required to fit in budget."
               );
  atexit(FUN_143728585);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aae0,L"r.Streaming.FullyLoadUsedTextures",&local_70,
                L"If non-zero, all used texture will be fully streamed in as fast as possible");
  atexit(FUN_1437285ca);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aaf8,L"r.Streaming.FullyLoadMeshes",&local_70,
                L"If non-zero, stream in all mesh LODs. This allows semi-disabling mesh LOD streaming without recook."
               );
  atexit(FUN_14372860f);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0ab10,L"r.Streaming.UseAllMips",&local_70,
                L"If non-zero, all available mips will be used");
  atexit(FUN_143728654);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cb0ab28,L"r.Streaming.LimitPoolSizeToVRAM",&local_70,
                L"If non-zero, texture pool size with be limited to how much GPU mem is available.")
  ;
  atexit(FUN_143728699);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cb0ab40,L"r.Streaming.CheckBuildStatus",&local_70,
                L"If non-zero, the engine will check whether texture streaming needs rebuild.");
  atexit(FUN_1437286de);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b110,L"r.Streaming.UseMaterialData",&local_70,
                L"If non-zero, material texture scales and coord will be used");
  atexit(FUN_143728723);
  local_70._0_4_ = 0x32;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b190,L"r.Streaming.NumStaticComponentsProcessedPerFrame",&local_70,
                L"If non-zero, the engine will incrementaly inserting levels by processing this amount of components per frame before they become visible"
               );
  atexit(FUN_143728768);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b140,L"r.Streaming.DefragDynamicBounds",&local_70,
                L"If non-zero, unused dynamic bounds will be removed from the update loop");
  atexit(FUN_1437287ad);
  local_70._0_4_ = 10;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0ab58,L"r.Streaming.MinMipForSplitRequest",&local_70,
                L"If non-zero, the minimum hidden mip for which load requests will first load the visible mip"
               );
  atexit(FUN_1437287f2);
  local_70._0_4_ = 0x42c80000;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0ab70,L"r.Streaming.MinLevelRenderAssetScreenSize",&local_70,
                L"If non-zero, levels only get handled if any of their referenced texture could be required of this size. Using conservative metrics on the level data."
               );
  atexit(FUN_143728837);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb0b158,L"r.Streaming.MaxTextureUVDensity",&local_70,
                L"If non-zero, the max UV density a static entry can have.\nUsed to improve level culling from MinLevelTextureScreenSize.\nComponent with bigger entries become handled as dynamic component.\n"
               );
  atexit(FUN_14372887c);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0ab88,L"r.Streaming.MipCalculationEnablePerLevelList",&local_70,
                L"If non-zero, Mip size computation for streamed texture will use levels referenced with it (instead of iterating thorugh every levels).\n"
               );
  atexit(FUN_1437288c1);
  local_70._0_4_ = 5;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0aba0,L"r.Streaming.FramesForFullUpdate",&local_70,
                L"Texture streaming is time sliced per frame. This values gives the number of frames to visit all textures."
               );
  atexit(FUN_143728906);
  local_70._0_4_ = 0;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b170,L"r.Streaming.LowResHandlingMode",&local_70,
                L"How to handle assets with too many missing MIPs or LODs. 0 (default): do nothing, 1: load before regular streaming requests, 2: load before async loading precache requests."
               );
  atexit(FUN_14372894b);
  local_70._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0abb8,L"r.Streaming.PrioritizeMeshLODRetention",&local_70,
                L"Whether to prioritize retaining mesh LODs");
  atexit(FUN_143728990);
  local_70._0_4_ = 0;
  local_88._0_4_ = 1;
  FUN_14078dbce(&DAT_14cb0abd0,L"r.Streaming.StressTest",&local_70,
                L"Set to non zero to stress test the streaming update.\nNegative values also slow down the IO.\n"
               );
  atexit(FUN_1437289d5);
  local_70._0_4_ = 10;
  local_88._0_4_ = 1;
  FUN_14078dbce(&DAT_14cb0abe8,L"r.Streaming.StressTest.ExtaIOLatency",&local_70,
                L"An extra latency in milliseconds for each stream-in requests when doing the stress test."
               );
  atexit(FUN_143728a1a);
  local_70._0_4_ = 1;
  local_88._0_4_ = 1;
  FUN_14078dbce(&DAT_14cb0ac00,L"r.Streaming.StressTest.FramesForFullUpdate",&local_70,
                L"Num frames to update texture states when doing the stress tests.");
  atexit(FUN_143728a5f);
  local_70._0_4_ = 0x400;
  local_88 = CONCAT44(local_88._4_4_,1);
  FUN_14078dbce(&DAT_14cb0ac18,L"r.Streaming.PoolSize.VRAMPercentageClamp",&local_70);
  atexit(FUN_143728aa4);
  _DAT_14cb0ac50 = 0;
  _DAT_14cb0ac58 = 0;
  _DAT_14cb0ac30 = 0;
  uRam000000014cb0ac38 = 0;
  _DAT_14cb0ac5c = 0xffffffff00000080;
  _DAT_14cb0ac64 = 0;
  DAT_14cb0ac70 = 0;
  _DAT_14cb0ac78 = 0;
  DAT_14cb0ac98 = 0;
  DAT_14cb0ac80 = 0;
  uRam000000014cb0ac88 = 0;
  DAT_14cb0ac90 = 0;
  atexit((_func_5014 *)&LAB_143729ad7);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac7230,2,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac75d0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac7950,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac7cd0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac8370,2,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac8f00,1,0);
  DAT_14cb0ad90 = 0;
  DAT_14cb0ad98 = 0;
  _DAT_14cb0ada0 = 0;
  atexit((_func_5014 *)&LAB_143729c7d);
  DAT_14cb0adc8 = 0;
  DAT_14cb0add0 = 0;
  DAT_14cb0ada8 = 0;
  _DAT_14cb0adb0 = 0;
  DAT_14cb0add4 = 0x80;
  DAT_14cb0add8 = 0xffffffff;
  DAT_14cb0addc = 0;
  DAT_14cb0ade8 = 0;
  DAT_14cb0adf0 = 0;
  atexit(FUN_143729c8e);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac9810,2,0);
  DAT_14cb0ae58 = 0;
  _DAT_14cb0ae60 = 0;
  DAT_14cb0ae38 = 0;
  _DAT_14cb0ae40 = 0;
  DAT_14cb0ae64 = 0x80;
  _DAT_14cb0ae68 = 0xffffffff;
  _DAT_14cb0ae6c = 0;
  DAT_14cb0ae78 = 0;
  _DAT_14cb0ae80 = 0;
  atexit(FUN_14372c5cb);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb0ae88,L"r.MaxQualityMode",&local_70,
                L"If set to 1, override certain system settings to highest quality regardless of performance impact"
               );
  atexit(FUN_14372c674);
  _DAT_14cb0b1d8 = &PTR_FUN_14aac9960;
  DAT_14cb0b1e1 = 0;
  _DAT_14cb0b218 = 0;
  _DAT_14cb0b220 = 0;
  _DAT_14cb0b224 = 0x80;
  _DAT_14cb0b1e8 = 0;
  uRam000000014cb0b1f0 = 0;
  _DAT_14cb0b1f8 = 0;
  uRam000000014cb0b200 = 0;
  _DAT_14cb0b258 = 0;
  _DAT_14cb0b260 = 0;
  _DAT_14cb0b264 = 0x80;
  _DAT_14cb0b228 = 0;
  uRam000000014cb0b230 = 0;
  _DAT_14cb0b238 = 0;
  uRam000000014cb0b240 = 0;
  _DAT_14cb0aea0 = _DAT_14cb0aea0 + 1;
  atexit((_func_5014 *)&LAB_14372c6b9);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaca0a0,1,0);
  _DAT_14cb0af20 = 0;
  DAT_14cb0af28 = 0;
  atexit((_func_5014 *)&LAB_14372c6c9);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0xd;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aacc8d0,1,&PTR_FUN_14aacc6c0);
  local_70 = &DAT_14a19662d;
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb0b080 = (ulonglong)uVar2;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aacd070,2,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437323d4 FUN_1437323d4 body=1055 status=ok
// SIG undefined FUN_1437323d4(void)

void FUN_1437323d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,local_48);
            goto LAB_143732566;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,local_48,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(local_48,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar3[6];
        local_68 = 0;
        FUN_1400746b0(plVar3,local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,local_48,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar8;
        puVar8 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_143732566:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_143732566;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_143732566;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_143732566;
    }
    local_48[0] = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    puVar8 = (undefined8 *)0x0;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,local_58);
            goto LAB_143732709;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if ((puVar9 != local_58) && ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar3 + 0x100))(plVar3,local_58,puVar9,(int)plVar3[6]);
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar3[6];
        local_68 = 0;
        FUN_1400746b0(plVar3,local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,local_58,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_58);
    }
  }
LAB_143732709:
  puVar9 = local_48;
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
  }
  puVar8 = local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar9 = 0;
  puVar9[1] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *param_3 = 0;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437327f4 FUN_1437327f4 body=228 status=ok
// SIG undefined FUN_1437327f4(void)

longlong FUN_1437327f4(void)

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
  if (DAT_14cb0b430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145892f94;
    local_38 = &LAB_147d6dbf3;
    local_40 = &LAB_1464081e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437328d9 FUN_1437328d9 body=69 status=ok
// SIG undefined FUN_1437328d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437328d9(void)

{
  _DAT_14cb0b448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373291b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b450,1);
  return;
}



// FUNCTION 14373291e FUN_14373291e body=69 status=ok
// SIG undefined FUN_14373291e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373291e(void)

{
  _DAT_14cb0b460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143732960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b468,1);
  return;
}



// FUNCTION 143732963 FUN_143732963 body=69 status=ok
// SIG undefined FUN_143732963(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143732963(void)

{
  _DAT_14cb0b478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437329a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b480,1);
  return;
}



// FUNCTION 1437329a8 FUN_1437329a8 body=69 status=ok
// SIG undefined FUN_1437329a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437329a8(void)

{
  _DAT_14cb0b490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437329ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b498,1);
  return;
}



// FUNCTION 1437329ed FUN_1437329ed body=69 status=ok
// SIG undefined FUN_1437329ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437329ed(void)

{
  _DAT_14cb0b4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143732a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b4b0,1);
  return;
}



// FUNCTION 143732a32 FUN_143732a32 body=49 status=ok
// SIG undefined FUN_143732a32(void)

void FUN_143732a32(void)

{
  FUN_144760e21(DAT_14cb0b4b8,DAT_14cb0b4c0);
  if (DAT_14cb0b4b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143732a68 FUN_143732a68 body=795 status=ok
// SIG undefined FUN_143732a68(void)

undefined8 *
FUN_143732a68(longlong param_1,undefined8 *param_2,longlong param_3,char param_4,int param_5,
             int param_6,char param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  iVar13 = 0;
  lVar7 = FUN_140032b16(0);
  iVar4 = FUN_1417f411e(*(undefined8 *)(lVar7 + 0x78),param_1,1);
  lVar7 = FUN_140032b16(0);
  iVar5 = FUN_1417f411e(*(undefined8 *)(lVar7 + 0x78),param_1,0);
  bVar15 = false;
  if ((*(byte *)(param_1 + 0xbc) & 1) == 0) {
    bVar15 = *(char *)(param_1 + 0xf6) != '\x10';
  }
  iVar9 = *(int *)(param_3 + 0x20);
  iVar10 = 0;
  if ((longlong)iVar9 != 0) {
    lVar7 = (longlong)iVar9 << 3;
    lVar11 = 0;
    iVar13 = iVar9;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_3 + 0x18) + lVar11);
      if (((*(char *)(lVar8 + 0x1b) == '\0') || ((*(byte *)(lVar8 + 0x1c) & 1) != 0)) &&
         ((*(byte *)(lVar8 + 0x35) & 8) == 0)) break;
      iVar13 = iVar13 + -1;
      lVar11 = lVar11 + 8;
    } while (lVar7 != lVar11);
    if (iVar13 == 0) {
      iVar13 = 1;
    }
    lVar11 = 0;
    iVar10 = iVar9;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_3 + 0x18) + lVar11);
      if ((*(char *)(lVar8 + 0x1b) == '\0') && ((*(ushort *)(lVar8 + 0x34) & 0x101) == 0)) break;
      iVar10 = iVar10 + -1;
      lVar11 = lVar11 + 8;
    } while (lVar7 != lVar11);
    if (iVar10 == 0) {
      iVar10 = 1;
    }
  }
  iVar14 = iVar9 + -1;
  if (iVar5 < iVar9 + -1) {
    iVar14 = iVar5;
  }
  uVar12 = 0;
  iVar5 = 0;
  if (0 < iVar14) {
    iVar5 = iVar14;
  }
  iVar5 = iVar9 - iVar5;
  iVar6 = iVar5;
  if (bVar15) {
    iVar6 = iVar10;
  }
  if (iVar14 < 1) {
    iVar6 = iVar10;
  }
  iVar10 = 0x10;
  if (DAT_14ca84d90 < 0x10) {
    iVar10 = DAT_14ca84d90;
  }
  if (iVar10 <= iVar5) {
    iVar5 = iVar10;
  }
  iVar14 = param_6;
  if (iVar5 < param_6) {
    iVar14 = iVar5;
  }
  if (param_6 < 1) {
    iVar14 = iVar5;
  }
  if (iVar6 < iVar10) {
    iVar10 = iVar6;
  }
  iVar5 = iVar10;
  if (iVar6 <= iVar14) {
    iVar10 = iVar6;
    iVar5 = iVar14;
  }
  iVar9 = iVar9 - iVar5;
  iVar14 = iVar5;
  if (!(bool)(iVar10 != iVar5 & bVar15)) goto LAB_143732d0b;
  iVar14 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar14 == 0) {
    bVar15 = false;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x108);
    lVar11 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + lVar11);
      if (plVar1 != (longlong *)0x0) {
        lVar8 = FUN_14066dd60();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) && (cVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1), cVar2 != '\0')) {
          bVar15 = true;
          goto LAB_143732c6d;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar14 * 8 != lVar11);
    bVar15 = false;
  }
LAB_143732c6d:
  uVar3 = 0;
  if (param_4 != '\0') {
    if (param_7 == '\0') {
      if ((longlong)*(int *)(param_3 + 0x20) != 0) {
        lVar7 = 0;
        do {
          lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x18) + lVar7);
          if ((*(char *)(lVar11 + 0x1b) != '\0') ||
             (*(int *)(lVar11 + 0x40) != DAT_14c845dc4 ||
              *(longlong *)(lVar11 + 0x38) != DAT_14c845dbc)) goto LAB_143732cd3;
          lVar7 = lVar7 + 8;
        } while ((longlong)*(int *)(param_3 + 0x20) * 8 != lVar7);
      }
      if (!bVar15) {
        uVar3 = 0;
        goto LAB_143732ced;
      }
    }
LAB_143732cd3:
    lVar7 = FUN_140083894();
    uVar12 = 1;
    iVar14 = iVar10;
    uVar3 = 1;
    if (*(longlong *)(lVar7 + 0x30) != 0) goto LAB_143732d0b;
  }
LAB_143732ced:
  uVar12 = uVar3;
  iVar6 = 0;
  if (0 < iVar4 - iVar9) {
    iVar6 = iVar4 - iVar9;
  }
  iVar14 = iVar5 - iVar6;
  if (iVar5 - iVar6 < iVar10) {
    iVar14 = iVar10;
  }
  if ((iVar13 < iVar14) && (cVar2 = FUN_147d6dde6(param_1,iVar9), cVar2 == '\0')) {
    iVar14 = iVar13;
  }
LAB_143732d0b:
  iVar4 = param_5;
  if (param_5 < iVar14) {
    iVar4 = iVar14;
  }
  uVar3 = (undefined1)iVar4;
  if (iVar5 <= iVar13) {
    iVar13 = iVar5;
  }
  *param_2 = 0;
  *(undefined1 *)param_2 = uVar12;
  *(char *)((longlong)param_2 + 1) = (char)iVar10;
  *(char *)((longlong)param_2 + 2) = (char)iVar13;
  *(char *)((longlong)param_2 + 3) = (char)iVar5;
  if (iVar5 <= param_5) {
    uVar3 = (undefined1)iVar14;
  }
  *(char *)((longlong)param_2 + 4) = (char)iVar9;
  *(undefined1 *)((longlong)param_2 + 5) = uVar3;
  *(undefined1 *)((longlong)param_2 + 6) = uVar3;
  return param_2;
}



// FUNCTION 143732d83 FUN_143732d83 body=228 status=ok
// SIG undefined FUN_143732d83(void)

longlong FUN_143732d83(void)

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
  if (DAT_14cb0b4f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147d6e27b;
    local_40 = &LAB_140307be8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b4f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143732e68 FUN_143732e68 body=409 status=ok
// SIG undefined FUN_143732e68(void)

void FUN_143732e68(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_1e8 [46];
  undefined1 local_1ba [2];
  undefined **local_1b8;
  longlong *local_1b0;
  undefined ***local_1a8;
  undefined ****local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  uVar4 = 0;
  FUN_140562eea(&local_1b8,param_2,0,&DAT_14c896044);
  FUN_140562eea(local_1ba,param_2,0,&DAT_14c896044);
  if (param_2[0xd] != 0) {
    uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar4);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
    uVar4 = (uint)local_1b8;
    if (1 < (uint)local_1b8) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_1b8;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) || (uVar4 != 0)) {
    uVar4 = 1;
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      lVar3 = FUN_14032dc54(param_1 + 200);
      uVar4 = (uint)(lVar3 == 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar4);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
      uVar4 = (uint)local_1b8;
      if (1 < (uint)local_1b8) {
        FUN_14572541c(param_2);
        uVar4 = (uint)local_1b8;
      }
    }
    else {
      uVar4 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    FUN_14373315c(param_1,param_2,uVar4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143733002 FUN_143733002 body=69 status=ok
// SIG undefined FUN_143733002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143733002(void)

{
  _DAT_14cb0b508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143733044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b510,1);
  return;
}



// FUNCTION 143733047 FUN_143733047 body=69 status=ok
// SIG undefined FUN_143733047(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143733047(void)

{
  _DAT_14cb0b618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143733089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b620,1);
  return;
}



// FUNCTION 14373308c FUN_14373308c body=69 status=ok
// SIG undefined FUN_14373308c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373308c(void)

{
  _DAT_14cb0b520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437330ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b528,1);
  return;
}



// FUNCTION 1437330d1 FUN_1437330d1 body=69 status=ok
// SIG undefined FUN_1437330d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437330d1(void)

{
  _DAT_14cb0b538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143733113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b540,1);
  return;
}



// FUNCTION 143733116 FUN_143733116 body=69 status=ok
// SIG undefined FUN_143733116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143733116(void)

{
  _DAT_14cb0b558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143733158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b560,1);
  return;
}



// FUNCTION 14373315c FUN_14373315c body=465 status=ok
// SIG undefined FUN_14373315c(void)

void FUN_14373315c(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  for (plVar4 = param_1; local_59 = param_3, plVar4 != (longlong *)0x0;
      plVar4 = (longlong *)plVar4[4]) {
    if ((*(uint *)(plVar4 + 1) & 0x30) != 0) goto LAB_143733306;
  }
  lVar3 = FUN_141165238();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x340))(param_1);
  if (plVar4 != (longlong *)0x0) {
    FUN_1400ea236(param_1);
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar5 = 0;
    *(undefined8 *)((longlong)puVar5 + 5) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *plVar4 = (longlong)puVar5;
    local_50 = 0;
    (**(code **)(*param_2 + 0x160))(param_2,&local_50);
    if (local_50 != 0) {
      do {
        iVar1 = FUN_1448e5bf4(lVar3,local_50,0);
        if (iVar1 == -1) {
          lVar7 = -1;
        }
        else {
          lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + 8 + (longlong)iVar1 * 0x10);
        }
        lVar6 = (**(code **)(*param_2 + 0x28))(param_2);
        local_58 = 0;
        FUN_1408383eb(param_2,&local_58);
        if (*(char *)(*plVar4 + 0xc) == '\0') {
          if (lVar7 < 0x5d) {
            uVar2 = (uint)lVar7 & 0xff;
          }
          else {
            uVar2 = 0;
          }
          if (lVar7 == -1) {
            uVar2 = 0;
          }
          if (((&DAT_14c873438)[uVar2 * 0x30] & 1) == 0) goto LAB_14373329f;
          local_68 = local_59;
          FUN_14085eab2(*plVar4,param_2,param_1,0);
        }
        else {
LAB_14373329f:
          (**(code **)(*param_2 + 0x1a0))(param_2,lVar6 + local_58);
        }
        (**(code **)(*param_2 + 0x160))(param_2,&local_50);
      } while (local_50 != 0);
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    }
  }
LAB_143733306:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373332e FUN_14373332e body=189 status=ok
// SIG undefined FUN_14373332e(void)

void FUN_14373332e(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  
  if (param_3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + (longlong)param_2 * 8 + lVar5 * 8);
      if (lVar2 != 0) {
        FUN_1400ea36e(lVar2 + 0x20,lVar2 + 0x20);
        FUN_1400020a8(lVar2);
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != (int)lVar5);
    iVar3 = (int)param_1[1];
    iVar4 = iVar3 - (param_2 + param_3);
    if (iVar4 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *param_1);
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 == '\x01') {
      FUN_140380544(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1437333ec FUN_1437333ec body=1015 status=ok
// SIG undefined FUN_1437333ec(void)

undefined8 * FUN_1437333ec(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  longlong *plVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x29] != 0) {
    cVar4 = (**(code **)(*param_1 + 0x330))();
    if (cVar4 != '\0') {
      puVar9 = (undefined8 *)FUN_14001cc68(0x90,0x10);
      iVar6 = (**(code **)(*param_1 + 0x2e8))(param_1);
      lVar2 = *(longlong *)(param_1[0x29] + 0x28);
      *(undefined4 *)(puVar9 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar9 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar9 + 0xe) = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0xc7efffffe0000000;
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x3f) = 0;
      puVar9[9] = 0;
      *puVar9 = &PTR_FUN_14aad2b50;
      puVar9[0xd] = 0;
      *(undefined2 *)(puVar9 + 0xe) = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      *(undefined4 *)((longlong)puVar9 + 0x5f) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x74) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x84) = 0;
      *(byte *)((longlong)puVar9 + 0x46) = *(byte *)((longlong)param_1 + 0xfe) & 1;
      bVar12 = (char)param_1[0x1e] - 3;
      uVar5 = (char)(0x1010000000101 >> (bVar12 * '\b' & 0x3f));
      if (6 < bVar12) {
        uVar5 = 0;
      }
      *(undefined1 *)((longlong)puVar9 + 0x44) = uVar5;
      lVar11 = *(longlong *)(param_1[0x25] + 0x10);
      if (lVar11 != 0) {
        puVar9[9] = lVar11;
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      puVar9[10] = param_1[3];
      plVar10 = param_1;
LAB_14373350f:
      plVar13 = plVar10;
      plVar10 = plVar13;
      if ((longlong *)plVar13[4] != (longlong *)0x0) goto code_r0x00014373351e;
      goto LAB_143733530;
    }
    piVar3 = (int *)param_1[0x29];
    if (piVar3 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      pbVar14 = (byte *)(*(longlong *)(piVar3 + 10) + 0x20);
      if (*(longlong *)(piVar3 + 10) == 0) {
        pbVar14 = (byte *)(piVar3 + 3);
      }
      uVar7 = (uint)*pbVar14;
    }
    iVar6 = DAT_14ca84d90;
    if (piVar3[8] < DAT_14ca84d90) {
      iVar6 = piVar3[8];
    }
    iVar16 = 0x10;
    if (iVar6 < 0x10) {
      iVar16 = iVar6;
    }
    if ((iVar6 != 0) && (((&DAT_14c873438)[uVar7 * 0x30] & 1) != 0)) {
      if (iVar6 == 1) {
        if (piVar3 == (int *)0x0) {
          iVar8 = 0;
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar3;
          iVar8 = piVar3[1];
        }
        if (iVar6 < iVar8) {
          iVar6 = iVar8;
        }
        if (DAT_14ca84e40 < iVar6) goto LAB_1437336d2;
      }
      local_40 = 0;
      plVar10 = (longlong *)FUN_14032dc54(param_1 + 0x19);
      if (plVar10 == (longlong *)0x0) {
        if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
          local_68 = 0;
        }
        else {
          local_68 = (**(code **)(*(longlong *)param_1[0x2a] + 0x30))();
        }
        local_58 = 0;
        local_60 = iVar16;
        FUN_143732a68(param_1,&local_48,param_1[0x29],
                      (*(byte *)((longlong)param_1 + 0x13c) & 1) == 0);
        local_40 = local_48;
      }
      else {
        (**(code **)(*plVar10 + 0x2d0))
                  (plVar10,&local_40,param_1,(*(byte *)((longlong)param_1 + 0x13c) & 1) == 0);
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0x1b8,0x10);
      FUN_14066d71e(puVar9,param_1,&local_40);
      param_1[0x2a] = 0;
      goto LAB_1437336d4;
    }
  }
LAB_1437336d2:
  puVar9 = (undefined8 *)0x0;
LAB_1437336d4:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014373351e:
  plVar10 = (longlong *)plVar13[4];
  if ((*(uint *)(plVar13 + 1) >> 0x1c & 1) == 0) goto LAB_14373350f;
  plVar10 = (longlong *)FUN_142840154(plVar13);
LAB_143733530:
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)plVar13[4];
    goto LAB_14373350f;
  }
  puVar9[0xb] = plVar10[3];
  lVar11 = FUN_140032b16(0);
  lVar11 = *(longlong *)(lVar11 + 0x78);
  bVar12 = *(byte *)((longlong)param_1 + 0xf1);
  if (2 < bVar12) {
    bVar12 = *(byte *)(*(longlong *)(lVar11 + 0x28) + 1 +
                      (ulonglong)*(byte *)((longlong)param_1 + 0xf6) * 0x5c);
  }
  *(byte *)(puVar9 + 0xc) = bVar12;
  cVar4 = '\x02' - (*(char *)((longlong)param_1 + 0x13d) == '\x01');
  if (*(char *)((longlong)param_1 + 0x13d) == '\0') {
    cVar4 = '\0';
  }
  *(char *)((longlong)puVar9 + 0x61) = cVar4;
  cVar4 = '\x02' - (*(char *)((longlong)param_1 + 0x13e) == '\x01');
  if (*(char *)((longlong)param_1 + 0x13e) == '\0') {
    cVar4 = '\0';
  }
  *(char *)((longlong)puVar9 + 0x62) = cVar4;
  puVar9[0xd] = (ulonglong)
                ((*(byte *)((longlong)param_1 + 0xfe) & 2) << 5 |
                 (*(byte *)((longlong)param_1 + 0x104) & 2) << 0x13 |
                (*(byte *)((longlong)param_1 + 0xfe) & 1) << 4) ^ 0x100000;
  uVar5 = (**(code **)(*param_1 + 0x3b0))(param_1);
  *(undefined1 *)(puVar9 + 0xe) = uVar5;
  uVar5 = (**(code **)(*param_1 + 0x3b8))(param_1);
  *(undefined1 *)((longlong)puVar9 + 0x71) = uVar5;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    puVar15 = (undefined1 *)
              (*(longlong *)(lVar11 + 0x28) + (ulonglong)*(byte *)((longlong)param_1 + 0xf6) * 0x5c
              + 0x54);
  }
  else {
    puVar15 = (undefined1 *)((longlong)param_1 + 0xf3);
  }
  *(undefined1 *)((longlong)puVar9 + 0x72) = *puVar15;
  puVar9[0xf] = lVar2;
  uVar7 = *(uint *)(lVar2 + 0x18);
  uVar17 = (*(int *)(lVar2 + 0xc) + (uVar7 - 1)) / uVar7;
  uVar7 = ((uVar7 - 1) + *(int *)(lVar2 + 8)) / uVar7;
  if (uVar7 < uVar17) {
    uVar7 = uVar17;
  }
  uVar1 = (ulonglong)((uVar7 - 1) + (uint)(uVar7 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if ((int)lVar2 < iVar6) {
    iVar6 = (int)lVar2;
  }
  *(int *)((longlong)puVar9 + 0x74) = iVar6;
  *(undefined1 *)((longlong)puVar9 + 0xc) = (undefined1)DAT_14c760db4;
  goto LAB_1437336d4;
}



// FUNCTION 1437337e4 FUN_1437337e4 body=554 status=ok
// SIG undefined FUN_1437337e4(void)

longlong *
FUN_1437337e4(int param_1,int param_2,byte param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (ulonglong)((uint)param_3 * 0x30);
  iVar1 = param_2 / *(int *)((longlong)&DAT_14c873420 + uVar5);
  plVar6 = (longlong *)0x0;
  if ((((0 < param_1) && (0 < param_2)) &&
      (param_1 % *(int *)((longlong)&DAT_14c87341c + uVar5) == 0)) &&
     (plVar6 = (longlong *)0x0, param_2 % *(int *)((longlong)&DAT_14c873420 + uVar5) == 0)) {
    uVar8 = (ulonglong)*(int *)((longlong)&DAT_14c873428 + uVar5);
    if (uVar8 == 0) {
      _Size = 0;
    }
    else {
      uVar5 = (longlong)(param_1 / *(int *)((longlong)&DAT_14c87341c + uVar5)) * (longlong)iVar1;
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      uVar4 = -uVar5;
      if ((longlong)-uVar5 < 0) {
        uVar4 = uVar5;
      }
      uVar9 = -uVar8;
      if ((longlong)-uVar8 < 0) {
        uVar9 = uVar8;
      }
      if ((0x7fffffffffffffffU - ((longlong)(uVar5 ^ uVar8) >> 0x3f)) / uVar9 < uVar4) {
        return (longlong *)0x0;
      }
      _Size = uVar5 * uVar8;
    }
    if ((param_5[1] == 0) || (param_5[1] == _Size)) {
      plVar6 = (longlong *)FUN_1464082cc(DAT_14c951640,param_4,0x40,0,0,0);
      puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar2 = 0;
      *(undefined8 *)((longlong)puVar2 + 5) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      FUN_147d6e292(plVar6,puVar2);
      *(int *)plVar6[0x29] = param_1;
      *(int *)(plVar6[0x29] + 4) = param_2;
      *(uint *)(plVar6[0x29] + 8) = (*(uint *)(plVar6[0x29] + 8) & 0xe0000000) + 1;
      *(byte *)(plVar6[0x29] + 0xc) = param_3;
      lVar3 = FUN_14001cc68(0x50,0x10);
      FUN_1478b105e(lVar3,param_1,param_2,1);
      lVar7 = plVar6[0x29];
      iVar1 = *(int *)(lVar7 + 0x20);
      *(uint *)(lVar7 + 0x20) = iVar1 + 1U;
      if (*(uint *)(lVar7 + 0x24) < iVar1 + 1U) {
        FUN_1456bd870((longlong *)(lVar7 + 0x18),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar1 * 8) = lVar3;
      lVar7 = lVar3 + 0x20;
      FUN_14031515e(lVar7);
      *(undefined1 *)(lVar3 + 0x33) = 2;
      *(byte *)(lVar3 + 0x36) = *(byte *)(lVar3 + 0x36) & 0xfb;
      _Dst = (void *)FUN_1427d8a06(lVar7,_Size,1);
      if (param_5[1] != 0) {
        memcpy(_Dst,(void *)*param_5,_Size);
      }
      *(undefined1 *)(lVar3 + 0x33) = 0;
      if ((*(byte *)(lVar3 + 0x34) & 8) != 0) {
        FUN_1400ea36e(lVar7,lVar7);
      }
      if (param_5[1] != 0) {
        (**(code **)(*plVar6 + 0x318))(plVar6);
      }
    }
    else {
      plVar6 = (longlong *)0x0;
    }
  }
  return plVar6;
}



// FUNCTION 143733a0e FUN_143733a0e body=1590 status=ok
// SIG undefined FUN_143733a0e(void)

void FUN_143733a0e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar11 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  uVar13 = *puVar11;
  lVar19 = 0x118;
  if (((uVar13 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar13 != 2)) {
    if (uVar13 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143733aa1;
      uVar13 = *puVar11;
    }
    if (((uVar13 != 4) && (cVar6 = (*(code *)PTR_FUN_14c758760)(), cVar6 == '\0')) &&
       (uVar13 = *puVar11, uVar13 != 8)) {
      if (DAT_14c86a9fc == 0) {
        lVar19 = 0x120;
        if (((0x20 < uVar13) || ((0x100010004U >> ((ulonglong)uVar13 & 0x3f) & 1) == 0)) &&
           (uVar13 != 0x40000010)) goto LAB_143733c04;
      }
      else {
        lVar19 = 0x120;
        if (((uVar13 - 0x10 & 0xbfffffef) != 0) && (uVar13 != 0x20)) goto LAB_143733c04;
      }
    }
  }
LAB_143733aa1:
  if (*(longlong *)(param_1 + lVar19) == 0) goto LAB_143733c04;
  uVar13 = *puVar11;
  lVar19 = 0x118;
  if (((uVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar13 == 2)) {
LAB_143733b0a:
    plVar15 = *(longlong **)(param_1 + lVar19);
  }
  else {
    if (uVar13 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143733b0a;
      uVar13 = *puVar11;
    }
    if (((uVar13 == 4) || (cVar6 = (*(code *)PTR_FUN_14c758760)(), cVar6 != '\0')) ||
       (uVar13 = *puVar11, uVar13 == 8)) goto LAB_143733b0a;
    if (DAT_14c86a9fc == 0) {
      lVar19 = 0x120;
      if (((uVar13 < 0x21) && ((0x100010004U >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)) ||
         (uVar13 == 0x40000010)) goto LAB_143733b0a;
    }
    else {
      lVar19 = 0x120;
      if (((uVar13 - 0x10 & 0xbfffffef) == 0) || (uVar13 == 0x20)) goto LAB_143733b0a;
    }
    plVar15 = (longlong *)0x0;
  }
  lVar19 = (**(code **)(*plVar15 + 0x58))();
  if (lVar19 == 0) goto LAB_143733c04;
  FUN_14066d924(lVar19,param_1);
  uVar13 = *puVar11;
  if (DAT_14c86a9fc == 0) {
    if (uVar13 == 2) goto LAB_143733b3b;
    if (uVar13 != 1) goto LAB_143733b36;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143733b3b;
  }
  else {
LAB_143733b36:
    if (uVar13 == 0x10) goto LAB_143733b3b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (*puVar11 == 2)) {
LAB_143733b3b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (*puVar11 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143733b3b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143733cc5;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143737b4f);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143733cc5:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar16 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar16 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar16 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143733d45;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143733d45:
    *(uint **)(puVar11 + 0x10) = puVar16;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14aad4708;
    puVar17[0x15] = lVar19;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar18 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar18 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar19 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar19 == 0) {
      uVar5 = 1;
      if ((char)uVar18 != '\x06') {
        uVar5 = uVar18;
      }
      uVar18 = uVar5;
      uVar12 = 0;
    }
    else {
      if ((char)uVar18 == '\x06') {
        uVar18 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar19 + 0x30);
    }
    puVar17[0xf] = uVar12;
    puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aad46b0;
    local_68[0] = &LAB_1437381fe;
    local_40 = lVar19;
    FUN_14005a792(&DAT_14ca9a440,L"RefreshSamplerStatesCommand",&DAT_14cb0b608);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143733c04:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143734056 FUN_143734056 body=971 status=ok
// SIG undefined FUN_143734056(void)

void FUN_143734056(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 uVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  byte local_124;
  undefined2 local_123;
  undefined8 local_121;
  undefined1 local_119;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong local_100;
  int local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  char cStack_d7;
  undefined1 uStack_d6;
  undefined4 uStack_d5;
  undefined4 uStack_d1;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined1 local_bc [112];
  undefined1 auStack_4c [8];
  undefined1 local_44;
  undefined1 local_43 [8];
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar13 = FUN_143784aab();
  lVar26 = DAT_14cb0ff38;
  local_114 = 0;
  if (cVar13 != '\0') {
    iVar14 = *(int *)(param_1[0xf] + 0x1c);
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
      uVar23 = 0;
    }
    else if (iVar6 == 1) {
      DVar15 = FUN_140ad26c0();
      DVar16 = GetCurrentThreadId();
      uVar23 = (ulonglong)(DVar15 != DVar16);
    }
    else {
      uVar23 = 1;
    }
    iVar6 = *(int *)(lVar26 + uVar23 * 4);
    local_114 = iVar14;
    if (iVar6 < iVar14) {
      local_114 = iVar6;
    }
  }
  local_123 = *(undefined2 *)((longlong)param_1 + 0x61);
  local_124 = *(byte *)(param_1 + 0xc);
  local_119 = 0;
  local_121 = 0;
  local_118 = 0x7f7fffff;
  local_110 = 0;
  local_10c = 0;
  if (local_124 - 3 < 2 && local_114 == 0) {
    local_124 = 1;
  }
  lVar17 = FUN_1405d51a2(&local_124);
  lVar26 = param_1[3];
  if (lVar26 != lVar17) {
    param_1[3] = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    if (lVar26 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar26 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar26 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar26 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10);
          plVar18[1] = lVar26;
          plVar22 = DAT_14ca843c0;
          plVar19 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar22;
              LOCK();
              bVar27 = plVar22 != DAT_14ca843c0;
              plVar19 = plVar18;
              if (bVar27) {
                plVar22 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar19;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar18 = (longlong)plVar19;
              LOCK();
              bVar27 = plVar19 != DAT_14ca843c8;
              plVar22 = plVar18;
              if (bVar27) {
                plVar19 = DAT_14ca843c8;
                plVar22 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar22;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
  }
  lVar26 = param_1[0xf];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x74);
  uVar8 = *(undefined4 *)(lVar26 + 4);
  local_f4 = 1;
  local_f2 = 0;
  local_d8 = 0;
  cStack_d7 = 0;
  uStack_d6 = 0;
  uStack_d5 = 0;
  uStack_d1 = 0;
  local_cc = 0;
  uStack_c4 = 0x3f80000000000000;
  memset(local_bc,0,0x81);
  local_100 = param_1[10];
  uVar3 = (uint)((ulonglong)local_100 >> 0x10);
  uVar25 = (uint)local_100 & 0xffff;
  local_f8 = ((uint)local_100 << 0x10 | uVar25) + (int)((ulonglong)local_100 >> 0x20) +
             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar25 >> 4);
  local_f3 = (undefined1)param_1[0xe];
  local_d8 = 2;
  local_f0 = *(undefined4 *)(lVar26 + 0x18);
  local_ec = *(undefined4 *)(lVar26 + 0x1c);
  uVar3 = *(uint *)(lVar26 + 0x10);
  iVar14 = (**(code **)(*param_1 + 0xb0))(param_1);
  local_e8 = ((iVar14 + uVar3) - 1) / uVar3;
  uVar3 = *(uint *)(param_1[0xf] + 0x14);
  iVar14 = (**(code **)(*param_1 + 0xb8))(param_1);
  local_e4 = ((iVar14 + uVar3) - 1) / uVar3;
  puVar1 = (uint *)param_1[0xf];
  local_dc = (undefined2)puVar1[4];
  local_da = (undefined2)puVar1[5];
  local_e0 = 1;
  uVar3 = *puVar1;
  uStack_d6 = (undefined1)uVar3;
  cVar13 = *(char *)((longlong)param_1 + 0x71);
  uVar25 = 1;
  if (cVar13 == '\0') {
    uVar25 = uVar3;
  }
  local_44 = (undefined1)uVar25;
  if ((ulonglong)uVar3 != 0) {
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x46);
    lVar26 = 0;
    uVar23 = 0;
    do {
      *(undefined1 *)((longlong)&uStack_d5 + uVar23) =
           *(undefined1 *)((longlong)puVar1 + uVar23 + 0x20);
      puVar2 = (undefined4 *)((longlong)puVar1 + lVar26 + 0x28);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      *(undefined4 *)((longlong)&local_cc + lVar26) = *puVar2;
      *(undefined4 *)((longlong)&local_cc + lVar26 + 4) = uVar9;
      *(undefined4 *)(local_bc + lVar26 + -8) = uVar10;
      *(undefined4 *)(local_bc + lVar26 + -4) = uVar11;
      uVar24 = (undefined1)uVar23;
      if (cVar13 != '\0') {
        uVar24 = 0;
      }
      local_43[uVar23] = uVar24;
      auStack_4c[uVar23] = uVar5;
      uVar23 = uVar23 + 1;
      lVar26 = lVar26 + 0x10;
    } while (uVar23 < uVar3);
  }
  local_3b = *(undefined1 *)((longlong)param_1 + 0x72);
  cStack_d7 = ~(byte)uVar7 + (char)uVar8;
  uVar20 = FUN_14001cc68(0x68,0x10);
  FUN_14142e42a(uVar20,&local_100,puVar1,*(undefined4 *)((longlong)param_1 + 0x74));
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_108,L"Renderer",1);
    uVar12 = CONCAT44(uStack_104,local_108);
    uVar21 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar21,uVar12);
  }
  local_138 = uVar20;
  (**(code **)(*DAT_14cad8310 + 0x148))(DAT_14cad8310,&local_108,param_2,&local_100);
  *(undefined4 *)(param_1 + 0x11) = local_108;
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143734422 FUN_143734422 body=199 status=ok
// SIG undefined FUN_143734422(void)

void FUN_143734422(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar2 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar2 + 0x130))(plVar2,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_20,L"Renderer",1);
    uVar1 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar1,local_20);
  }
  (**(code **)(*DAT_14cad8310 + 0x150))(DAT_14cad8310,param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143734556 FUN_143734556 body=1100 status=ok
// SIG undefined FUN_143734556(void)

void FUN_143734556(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined2 *local_b8;
  int local_b0;
  byte local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined4 *)(param_1[10] + 0x148);
  lVar6 = FUN_140032b16(0);
  local_a4 = *(byte *)(param_1[10] + 0xf1);
  if (2 < local_a4) {
    local_a4 = *(byte *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x28) + 1 +
                        (ulonglong)*(byte *)(param_1[10] + 0xf6) * 0x5c);
  }
  local_a3 = (undefined1)uVar4;
  local_a0 = 0;
  local_98 = 0x7f7fffff;
  local_94 = 0;
  local_8c = 0;
  local_a2 = local_a3;
  local_a1 = local_a3;
  lVar7 = FUN_1405d51a2();
  lVar6 = param_1[3];
  if (lVar6 != lVar7) {
    param_1[3] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar12 = *(byte *)(lVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar12 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  local_88 = *(ulonglong *)(param_1[10] + 0x18);
  FUN_1400021e4(&local_88,&local_b8);
  uVar3 = *(undefined1 *)(param_1[10] + 0x140);
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  local_48 = local_b8;
  if (local_b0 == 0) {
    local_48 = &DAT_149dfb77a;
  }
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_64 = CONCAT44(uVar4,uVar5);
  lVar6 = param_1[10];
  local_58 = *(undefined1 *)(lVar6 + 0x144);
  bVar12 = 2;
  if ((*(byte *)(lVar6 + 0x141) & 1) == 0) {
    bVar12 = (*(byte *)(lVar6 + 0xfe) & 1) << 4;
  }
  local_88 = (ulonglong)(byte)((*(byte *)(lVar6 + 0xfe) & 2) << 5 | bVar12);
  local_54 = 0xff00;
  local_5c = 0x10001;
  local_57 = 1;
  local_80 = 1;
  local_68 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_55 = uVar3;
  local_50 = FUN_1431edf91(local_88,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_c0,&DAT_14ca85100,&local_88);
  lVar6 = local_c0;
  plVar11 = param_1 + 0xb;
  if (plVar11 != &local_c0) {
    lVar7 = *plVar11;
    *plVar11 = local_c0;
    local_c0 = 0;
    if (lVar7 == 0) goto LAB_143734856;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar12 = *(byte *)(lVar7 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar12 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar9;
            if (bVar13) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar9 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar9;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  lVar6 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar12 = *(byte *)(local_c0 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar12 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar9;
            if (bVar13) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar9 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar9;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  lVar6 = *plVar11;
LAB_143734856:
  lVar7 = param_1[2];
  if (lVar7 != lVar6) {
    param_1[2] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar12 = *(byte *)(lVar7 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar7;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar12 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1[2] + 0x10) = *(undefined8 *)(param_1[10] + 0x18);
  lVar6 = *(longlong *)(*(longlong *)(param_1[10] + 0x128) + 0x10);
  if (lVar6 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar6,param_1[2]);
  }
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437349a4 FUN_1437349a4 body=368 status=ok
// SIG undefined FUN_1437349a4(void)

void FUN_1437349a4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  uint *local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  uVar1 = *(uint *)(lVar3 + 0x24);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  uVar9 = (ulonglong)*(uint *)(lVar3 + 0x28);
  uVar2 = *(uint *)(lVar3 + 0x28) * uVar1;
  if ((uVar2 != 0) && ((ulonglong)uVar2 <= (ulonglong)param_2[1])) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    if (*(char *)(lVar3 + 0x33) == '\x02') {
      local_60 = &local_3c;
      local_3c = 0;
      local_50 = 0;
      local_58 = 0;
      local_48 = 0;
      local_68 = 1;
      lVar3 = (**(code **)(*DAT_14ca83900 + 0x430))
                        (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x58));
      if (uVar9 != 0) {
        lVar4 = uVar9 - 1;
        lVar5 = lVar4 * (ulonglong)uVar1 * 4;
        uVar6 = 0;
        do {
          if (uVar1 != 0) {
            lVar8 = *param_2 + lVar5;
            lVar7 = (ulonglong)local_3c * lVar4 + lVar3;
            lVar10 = 0;
            do {
              *(undefined1 *)(lVar7 + lVar10 * 4) = *(undefined1 *)(lVar8 + lVar10 * 4);
              *(undefined1 *)(lVar7 + 1 + lVar10 * 4) = *(undefined1 *)(lVar8 + 1 + lVar10 * 4);
              *(undefined1 *)(lVar7 + 2 + lVar10 * 4) = *(undefined1 *)(lVar8 + 2 + lVar10 * 4);
              *(undefined1 *)(lVar7 + 3 + lVar10 * 4) = *(undefined1 *)(lVar8 + 3 + lVar10 * 4);
              lVar10 = lVar10 + 1;
            } while (uVar1 != (uint)lVar10);
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + (ulonglong)uVar1 * -4;
          lVar4 = lVar4 + -1;
        } while (uVar6 != uVar9);
      }
      local_60 = (uint *)((ulonglong)local_60 & 0xffffffffffffff00);
      local_68 = local_68 & 0xffffff00;
      (**(code **)(*DAT_14ca83900 + 0x438))
                (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x58),0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143734b16 FUN_143734b16 body=240 status=ok
// SIG undefined FUN_143734b16(void)

longlong * FUN_143734b16(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 < 1 || param_1 < 1) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar1 = *param_3;
    plVar3 = (longlong *)FUN_147d6eb61(DAT_14c951640,0,0x40,0,0,0);
    plVar4 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar3 + 0xf1) = param_3[4];
      *(undefined4 *)(plVar3 + 0x29) = *(undefined4 *)(param_3 + 8);
      bVar2 = *(byte *)((longlong)plVar3 + 0xfe) & 0xfe | param_3[2];
      *(byte *)((longlong)plVar3 + 0xfe) = bVar2;
      *(undefined1 *)(plVar3 + 0x1e) = 0;
      *(byte *)((longlong)plVar3 + 0xfe) = (param_3[1] ^ 1) * '\x02' | bVar2 & 0xfd;
      bVar2 = param_3[1];
      *(int *)(plVar3 + 0x27) = param_1;
      *(int *)((longlong)plVar3 + 0x13c) = param_2;
      *(undefined1 *)(plVar3 + 0x28) = uVar1;
      *(undefined4 *)((longlong)plVar3 + 0x144) = 1;
      *(byte *)((longlong)plVar3 + 0x141) = *(byte *)((longlong)plVar3 + 0x141) & 0xfe | bVar2;
      (**(code **)(*plVar3 + 0x318))(plVar3);
      plVar4 = plVar3;
    }
  }
  return plVar4;
}



// FUNCTION 143734c06 FUN_143734c06 body=627 status=ok
// SIG undefined FUN_143734c06(void)

void FUN_143734c06(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar11 = (longlong *)(param_1 + 0x20);
  FUN_147d6ed24(plVar11,*(undefined4 *)(param_1 + 0x18));
  local_68 = 0;
  uStack_60 = 0;
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_147d70b64(&local_68);
    iVar3 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar10 = 0;
      do {
        lVar12 = *(longlong *)(lVar5 + lVar10);
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x48);
        }
        iVar4 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
          FUN_147d70bba(plVar11,iVar4);
        }
        uVar6 = uStack_60;
        *(longlong *)(*plVar11 + (longlong)iVar4 * 8) = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
        lVar13 = (longlong)(int)uStack_60;
        uVar7 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
        if (uStack_60._4_4_ < uVar7) {
          FUN_147d70c40(&local_68,uVar6 & 0xffffffff);
        }
        *(longlong *)(local_68 + lVar13 * 0x10) = lVar12;
        *(undefined1 *)(local_68 + 8 + lVar13 * 0x10) = 1;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar3 * 8 != lVar10);
    }
  }
  local_58 = local_68;
  local_50 = (int)uStack_60;
  (**(code **)(*DAT_14ca83900 + 0x1c8))(DAT_14ca83900,&local_70,param_2);
  plVar11 = (longlong *)(param_1 + 0x30);
  if (plVar11 != &local_70) {
    lVar5 = *plVar11;
    *plVar11 = local_70;
    local_70 = 0;
    if (lVar5 == 0) goto LAB_143734d62;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar5 = local_70;
  if (local_70 != 0) {
    LOCK();
    puVar1 = (uint *)(local_70 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_70 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_70 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_143734d62:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143734e7a FUN_143734e7a body=3817 status=ok
// SIG undefined FUN_143734e7a(void)

void FUN_143734e7a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = *(longlong **)(param_1 + 0x40);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar9 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_143734ec5;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143734eca;
        goto LAB_143734f08;
      }
LAB_143734eca:
      *(undefined8 *)(param_1 + 0x48) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      puVar13 = (undefined8 *)*plVar8;
      plVar17 = plVar8;
LAB_143734ee1:
      (*(code *)*puVar13)(plVar17,1);
    }
    else {
LAB_143734ec5:
      if (iVar5 == 0x10) goto LAB_143734eca;
LAB_143734f08:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar9 + 0xc60), iVar5 == 2))
        goto LAB_143734eca;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143734eca;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar13 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar12 = (uint *)*puVar13;
        if (puVar12 != (uint *)0x0) goto LAB_1437350e9;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143737b4f);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar13 = puVar10;
          FUN_140217a48(puVar13);
          puVar12 = (uint *)*puVar13;
LAB_1437350e9:
          plVar17 = (longlong *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(plVar17 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar2 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar13;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar13 = puVar12;
            plVar17 = (longlong *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(plVar17 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143735169;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143735169:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar5 = 0;
        FUN_1447247dc(plVar17,0);
        *plVar17 = (longlong)&PTR_FUN_14aad4770;
        plVar17[0x15] = param_1;
        plVar17[0x16] = (longlong)plVar8;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar5 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(plVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar17[0xe] + 0x18))(plVar17 + 0xe,plVar17 + 9);
        }
        plVar17[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar17[9] = (longlong)plVar17;
        plVar17[10] = (longlong)plVar17;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar19 != '\x06') {
            uVar4 = uVar19;
          }
          uVar19 = uVar4;
          lVar9 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          lVar9 = *(longlong *)(lVar9 + 0x30);
        }
        plVar17[0xf] = lVar9;
        plVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar17 + 0x1c) = iVar5;
        if (plVar17 == (longlong *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
          goto LAB_143734fa3;
        }
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(plVar17);
        LOCK();
        plVar8 = plVar17 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) goto LAB_143734fa3;
        puVar13 = (undefined8 *)*plVar17;
        goto LAB_143734ee1;
      }
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14aad4750;
      local_68[0] = FUN_14373855c;
      local_40 = param_1;
      local_38 = plVar8;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb0b610);
      if (local_68[0] != (code *)0x0) {
        pppuVar15 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar15 = &local_48;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
LAB_143734fa3:
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143735028;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if ((((bVar3 != 0) || ((*(uint *)(param_1 + 8) & 0x10) != 0)) ||
      (iVar5 = FUN_141434525(DAT_14ca85550,L"BindlessResources",&DAT_14ca83b38), iVar5 == 0)) ||
     (DAT_14ca85065 == '\0')) goto LAB_143735028;
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  FUN_147d6ec3c(plVar8,param_1);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    iVar5 = *piVar1;
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_143735408;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143735411;
        goto LAB_14373583e;
      }
    }
    else {
LAB_143735408:
      if (iVar5 != 0x10) {
LAB_14373583e:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_143735411;
          if (*piVar1 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_143735411;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar13 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar12 = (uint *)*puVar13;
          if (puVar12 != (uint *)0x0) goto LAB_14373597d;
          while( true ) {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_143737b4f);
            }
            lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar10 = *(undefined4 **)(lVar9 + 0x310);
            *(undefined8 *)(lVar9 + 0x310) = 0;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar10 = 0xffffffff;
            *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar13 = puVar10;
            FUN_140217a48(puVar13);
            puVar12 = (uint *)*puVar13;
LAB_14373597d:
            puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x17);
            uVar14 = puVar12[0x12];
            if (puVar16 <= puVar12 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar2 = *puVar12;
              *puVar12 = *puVar12 + uVar14 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar14) != 0xffffffff) break;
              puVar12 = (uint *)*puVar13;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar13 = puVar12;
              puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
              puVar16 = (uint *)(puVar18 + 0x17);
              uVar14 = 0;
              if (puVar16 <= puVar12 + 0x4000) {
                uVar14 = 1;
                goto LAB_1437359fd;
              }
            }
          }
          uVar14 = uVar14 + 1;
LAB_1437359fd:
          *(uint **)(puVar12 + 0x10) = puVar16;
          puVar12[0x12] = uVar14;
          iVar5 = 0;
          FUN_1447247dc(puVar18,0);
          *puVar18 = &PTR_FUN_14aad4740;
          puVar18[0x15] = param_1;
          puVar18[0x16] = 0;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar14 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
              uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
              iVar5 = 0;
            }
            else {
              uVar19 = 2;
            }
          }
          else {
            iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar19 = 5;
          }
          if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
          }
          puVar18[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar18[9] = puVar18;
          puVar18[10] = puVar18;
          lVar9 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar9 == 0) {
            uVar4 = 1;
            if ((char)uVar19 != '\x06') {
              uVar4 = uVar19;
            }
            uVar19 = uVar4;
            uVar11 = 0;
          }
          else {
            if ((char)uVar19 == '\x06') {
              uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
            }
            uVar11 = *(undefined8 *)(lVar9 + 0x30);
          }
          puVar18[0xf] = uVar11;
          puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar18 + 0x1c) = iVar5;
          if (puVar18 == (undefined8 *)0x0) goto LAB_143735be8;
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_143735028;
          puVar13 = (undefined8 *)*puVar18;
          goto LAB_143735b9b;
        }
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aad4720;
        local_38 = (longlong *)0x0;
        local_68[0] = (code *)&LAB_1437383b2;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"SetResourceRenderThread",&DAT_14cb0b60c);
        goto joined_r0x0001437358bc;
      }
    }
LAB_143735411:
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    *(longlong **)(param_1 + 0x40) = plVar8;
    iVar5 = *piVar1;
    if (DAT_14c86a9fc == 0) {
      if (iVar5 == 2) goto LAB_143735239;
      if (iVar5 != 1) goto LAB_143735230;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143735239;
    }
    else {
LAB_143735230:
      if (iVar5 == 0x10) goto LAB_143735239;
    }
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) {
LAB_143735239:
        *(longlong **)(param_1 + 0x48) = plVar8;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
      }
      if (*piVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143735239;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar13 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar12 = (uint *)*puVar13;
      if (puVar12 != (uint *)0x0) goto LAB_1437355ad;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar13 = puVar10;
        FUN_140217a48(puVar13);
        puVar12 = (uint *)*puVar13;
LAB_1437355ad:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x17);
        uVar14 = puVar12[0x12];
        if (puVar16 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar13;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar13 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_14373562d;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_14373562d:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      iVar5 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14aad47e0;
      puVar18[0x15] = param_1;
      puVar18[0x16] = plVar8;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          iVar5 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar4 = 1;
        if ((char)uVar19 != '\x06') {
          uVar4 = uVar19;
        }
        uVar19 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar18[0xf] = uVar11;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar5;
      if (puVar18 == (undefined8 *)0x0) {
LAB_143735be8:
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_143735028;
      }
      LOCK();
      *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar18);
      LOCK();
      piVar1 = (int *)(puVar18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_143735028;
      puVar13 = (undefined8 *)*puVar18;
LAB_143735b9b:
      (*(code *)*puVar13)(puVar18,1);
      goto LAB_143735028;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aad4780;
    local_68[0] = (code *)&LAB_14373875c;
    local_40 = param_1;
    local_38 = plVar8;
    FUN_14005a792(&DAT_14ca9a440,L"SetTextureCollectionResource",&DAT_14cb0b614);
joined_r0x0001437358bc:
    if (local_68[0] != (code *)0x0) {
      pppuVar15 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar15 = &local_48;
      }
      (*(code *)(*pppuVar15)[2])();
    }
  }
LAB_143735028:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143735d7a FUN_143735d7a body=325 status=ok
// SIG undefined FUN_143735d7a(void)

void FUN_143735d7a(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_1e8 [46];
  undefined1 local_1ba [2];
  undefined **local_1b8;
  longlong *local_1b0;
  undefined ***local_1a8;
  undefined ****local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  uVar3 = 0;
  FUN_140562eea(&local_1b8,param_2,0,&DAT_14c896044);
  FUN_140562eea(local_1ba,param_2,0,&DAT_14c896044);
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
    uVar3 = (uint)local_1b8;
    if (1 < (uint)local_1b8) {
      FUN_14572541c(param_2);
      uVar3 = (uint)local_1b8;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((uVar3 != 0) || ((param_2[0xd] != 0 && (*(longlong *)(param_2[0xd] + 0x10) != 0)))) {
    FUN_14373315c(param_1,param_2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143735ec0 FUN_143735ec0 body=306 status=ok
// SIG undefined FUN_143735ec0(void)

void FUN_143735ec0(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_1e8 [46];
  undefined1 local_1ba [2];
  undefined **local_1b8;
  longlong *local_1b0;
  undefined ***local_1a8;
  undefined ****local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  uVar3 = 0;
  FUN_140562eea(&local_1b8,param_2,0,&DAT_14c896044);
  FUN_140562eea(local_1ba,param_2,0,&DAT_14c896044);
  if (param_2[0xd] != 0) {
    uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
    uVar3 = (uint)local_1b8;
    if (1 < (uint)local_1b8) {
      FUN_14572541c(param_2);
      uVar3 = (uint)local_1b8;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((uVar3 != 0) || ((param_2[0xd] != 0 && (*(longlong *)(param_2[0xd] + 0x10) != 0)))) {
    FUN_14373315c(param_1,param_2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143735ff4 FUN_143735ff4 body=528 status=ok
// SIG undefined FUN_143735ff4(void)

undefined8 * FUN_143735ff4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong _Size;
  
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x20) < 1)) ||
     (uVar8 = 0, ((&DAT_14c873438)[(uint)*(byte *)(lVar2 + 0xc) * 0x30] & 1) == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    *(undefined4 *)(puVar6 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar6 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar6 + 0xe) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0xc7efffffe0000000;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3f) = 0;
    puVar6[9] = 0;
    *puVar6 = &PTR_FUN_14aad44c0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = param_1;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0;
    puVar6[0x10] = 0;
    lVar2 = *(longlong *)(param_1 + 0x138);
    iVar11 = 1;
    if (1 < *(int *)(lVar2 + 0x14)) {
      iVar11 = *(int *)(lVar2 + 0x14);
    }
    iVar11 = *(int *)(lVar2 + 0x20) - iVar11;
    if (lVar2 != 0) {
      uVar8 = *(uint *)(lVar2 + 8) & 0x1fffffff;
    }
    *(uint *)(puVar6 + 0xf) = uVar8;
    uVar5 = iVar11 + 1;
    iVar9 = uVar8 * uVar5;
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_1447ab16c(puVar6 + 0xc,iVar9);
    }
    if (-1 < iVar11) {
      uVar10 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + uVar10 * 8);
        if (*(char *)(lVar3 + 0x2c) != '\0' || *(int *)(lVar3 + 0x28) != 0) {
          lVar1 = lVar3 + 0x20;
          *(int *)((longlong)puVar6 + 0x7c) =
               *(int *)((longlong)puVar6 + 0x7c) + *(int *)(lVar3 + 0x28);
          auVar4 = ZEXT516(*(uint5 *)(lVar3 + 0x28)) / ZEXT416(*(uint *)(puVar6 + 0xf));
          lVar7 = FUN_140fc05d0(lVar1,1);
          if (*(int *)(puVar6 + 0xf) != 0) {
            _Size = auVar4._0_8_ & 0xffffffff;
            uVar12 = 0;
            do {
              _Dst = (void *)FUN_14001cc68(_Size,0);
              memcpy(_Dst,(void *)((ulonglong)(uint)((int)uVar12 * auVar4._0_4_) + lVar7),_Size);
              iVar11 = *(int *)(puVar6 + 0xd);
              uVar8 = iVar11 + 1;
              *(uint *)(puVar6 + 0xd) = uVar8;
              if (*(uint *)((longlong)puVar6 + 0x6c) < uVar8) {
                FUN_1456bd870(puVar6 + 0xc);
              }
              *(void **)(puVar6[0xc] + (longlong)iVar11 * 8) = _Dst;
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(puVar6 + 0xf));
          }
          *(undefined1 *)(lVar3 + 0x33) = 0;
          if ((*(byte *)(lVar3 + 0x34) & 8) != 0) {
            FUN_1400ea36e(lVar1,lVar1);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
    }
  }
  return puVar6;
}



// FUNCTION 143736206 FUN_143736206 body=449 status=ok
// SIG undefined FUN_143736206(void)

undefined8 FUN_143736206(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint5 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar6 = *(int *)(param_1 + 0x14) + -1;
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar6 = 0;
  }
  uVar10 = *(int *)(param_1 + 0x20) - iVar6;
  uVar3 = uVar10;
  if ((int)param_2 < (int)uVar10) {
    uVar3 = param_2;
  }
  uVar4 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      uVar4 = *(ulonglong *)(param_1 + 0x18);
      lVar9 = *(longlong *)(uVar4 + uVar7 * 8);
      if (*(longlong *)(lVar9 + 0x20) != 0) {
        lVar12 = lVar9 + 0x20;
        uVar4 = FUN_140fc05d0(lVar12,1);
        *(undefined1 *)(lVar9 + 0x33) = 0;
        if ((*(byte *)(lVar9 + 0x34) & 8) != 0) {
          uVar4 = FUN_1400ea36e(lVar12,lVar12);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  iVar6 = 0;
  if ((int)param_2 < (int)uVar10) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar8 = 0;
    iVar6 = 0;
    lVar12 = param_3;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)param_2 * 8 + lVar8 * 8);
      puVar1 = (uint5 *)(lVar2 + 0x28);
      uVar4 = (ulonglong)*(uint *)puVar1;
      uVar7 = (ulonglong)*puVar1;
      if (uVar7 != 0) {
        if (param_3 != 0) {
          iVar11 = *(int *)(lVar9 + 0xc60);
          if (((iVar11 != 0x40000002) && (iVar11 == 1)) && (DAT_14c86a9f8 != '\0')) {
            FUN_140ad26c0();
            GetCurrentThreadId();
          }
          uVar4 = FUN_14143acfc(lVar2 + 0x20,lVar12,1);
        }
        if (param_4 != 0) {
          *(ulonglong *)(param_4 + lVar8 * 8) = uVar7;
        }
        iVar6 = iVar6 + 1;
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + 8;
    } while (uVar10 - param_2 != (int)lVar8);
  }
  iVar11 = uVar10 - param_2;
  uVar5 = (undefined7)(uVar4 >> 8);
  if (iVar6 != iVar11 && (int)param_2 < (int)uVar10) {
    lVar9 = 0;
    do {
      if ((param_3 != 0) && (*(longlong *)(param_3 + lVar9 * 8) != 0)) {
        FUN_1400020a8();
        *(undefined8 *)(param_3 + lVar9 * 8) = 0;
        uVar5 = extraout_var;
      }
      lVar9 = lVar9 + 1;
    } while (iVar11 != (int)lVar9);
  }
  return CONCAT71(uVar5,iVar6 == iVar11);
}



// FUNCTION 1437363c8 FUN_1437363c8 body=269 status=ok
// SIG undefined FUN_1437363c8(void)

undefined4
FUN_1437363c8(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_14032dc54(param_1 + 200);
  if (plVar3 == (longlong *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(param_1,0,&local_68);
    uVar2 = FUN_143736206(uVar1,param_2,*param_3,*param_4);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(param_1,0,&local_68);
    local_98 = &local_50;
    local_50 = local_68;
    local_48 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      local_48 = 0;
    }
    local_78 = *param_4;
    uStack_70 = param_4[1];
    local_88 = *(undefined4 *)param_3;
    uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_80 = *(undefined4 *)(param_3 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143736546 FUN_143736546 body=2814 status=ok
// SIG undefined FUN_143736546(void)

void FUN_143736546(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Dst;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  size_t sVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint *puVar17;
  char *_Str;
  uint uVar18;
  uint *puVar19;
  undefined2 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined1 uVar27;
  int *piVar28;
  void *_Src;
  undefined1 uVar29;
  longlong lVar30;
  int iVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  int local_120;
  uint local_118;
  byte *local_110;
  undefined1 local_108;
  longlong *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x340) + 0x58);
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    lVar30 = *(longlong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar9;
    if (lVar30 != 0) {
      LOCK();
      puVar19 = (uint *)(lVar30 + 8);
      uVar18 = *puVar19;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar19 = (uint *)(lVar30 + 8);
        LOCK();
        uVar18 = *puVar19;
        *puVar19 = *puVar19 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar30 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar30;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar34 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar7;
              if (bVar34) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar34);
          }
          else {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar34 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar34) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar34);
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    lVar30 = *(longlong *)(param_1 + 0x10);
    if (lVar30 != lVar9) {
      *(longlong *)(param_1 + 0x10) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      if (lVar30 != 0) {
        LOCK();
        puVar19 = (uint *)(lVar30 + 8);
        uVar18 = *puVar19;
        *puVar19 = *puVar19 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar19 = (uint *)(lVar30 + 8);
          LOCK();
          uVar18 = *puVar19;
          *puVar19 = *puVar19 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar30 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar30;
            plVar13 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar13;
                LOCK();
                bVar34 = plVar13 != DAT_14ca843c0;
                plVar11 = plVar7;
                if (bVar34) {
                  plVar13 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar7 = (longlong)plVar11;
                LOCK();
                bVar34 = plVar11 != DAT_14ca843c8;
                plVar13 = plVar7;
                if (bVar34) {
                  plVar11 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
      }
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x340) + 0x18);
    lVar30 = *(longlong *)(param_1 + 0x18);
    if (lVar30 != lVar9) {
      *(longlong *)(param_1 + 0x18) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      if (lVar30 != 0) {
        LOCK();
        puVar19 = (uint *)(lVar30 + 8);
        uVar18 = *puVar19;
        *puVar19 = *puVar19 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar19 = (uint *)(lVar30 + 8);
          LOCK();
          uVar18 = *puVar19;
          *puVar19 = *puVar19 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar30 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar30;
            plVar13 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar13;
                LOCK();
                bVar34 = plVar13 != DAT_14ca843c0;
                plVar11 = plVar7;
                if (bVar34) {
                  plVar13 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar34);
            }
            else {
              do {
                *plVar7 = (longlong)plVar11;
                LOCK();
                bVar34 = plVar11 != DAT_14ca843c8;
                plVar13 = plVar7;
                if (bVar34) {
                  plVar11 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar34);
            }
          }
        }
      }
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x128) + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
    }
    goto LAB_143736e96;
  }
  lVar9 = *(longlong *)(param_1 + 0x330);
  bVar5 = *(byte *)(lVar9 + 0x104);
  uVar18 = (*(byte *)(lVar9 + 0xfe) & 1) << 4;
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  FUN_1401031ac(lVar9,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0b5e0) && (FUN_144b3d300(&DAT_14cb0b5e0), DAT_14cb0b5e0 == -1)) {
    DAT_14cb0b5d0 = 0x800000014aad4490;
    local_a8._0_1_ = 0x14;
    local_a8._1_2_ = 0;
    local_a8._3_1_ = 0;
    DAT_14cb0b5d8 = FUN_14577453c();
    DAT_14cb0b5dc = '\x01';
    _Init_thread_footer(&DAT_14cb0b5e0);
  }
  puVar20 = local_c8;
  if ((int)uStack_c0 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  bVar4 = (byte)DAT_14c760da4 & 0x1f;
  puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x330) + 0x138);
  if (puVar3 == (undefined4 *)0x0) {
    uVar29 = 0;
    uVar32 = 0;
    uVar27 = 0;
    uVar26 = 0;
  }
  else {
    uVar32 = CONCAT44(*puVar3,*puVar3);
    uVar27 = *(undefined1 *)(puVar3 + 3);
    uVar29 = *(undefined1 *)(puVar3 + 8);
    uVar26 = puVar3[4];
  }
  uVar23 = ((bVar5 & 2) << 0x13 | uVar18) ^ 0x100000;
  local_e8 = param_1;
  if ((longlong)DAT_14cb0b5d0 < 0) {
    _Str = (char *)(DAT_14cb0b5d0 & 0x7fffffffffffffff);
    if (DAT_14cb0b5dc == '\x01') {
      puVar19 = &local_a8;
      FUN_1446f470e(puVar19,_Str,1);
    }
    else {
      local_a8._0_1_ = (byte)_Str;
      local_a8._1_2_ = (undefined2)((ulonglong)_Str >> 8);
      local_a8._3_1_ = (undefined1)((ulonglong)_Str >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)_Str >> 0x20);
      if (_Str == (char *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar12 = strlen(_Str);
        local_a0 = (undefined4)sVar12;
      }
      puVar19 = (uint *)&local_b0;
      FUN_14001c09c(puVar19,&local_a8,1);
    }
    uVar15 = (ulonglong)*puVar19;
    local_58 = (ulonglong)DAT_14cb0b5d8 << 0x20;
    DAT_14cb0b5d0 = uVar15;
  }
  else {
    uVar15 = (ulonglong)DAT_14cb0b5d8 << 0x20;
    local_58 = DAT_14cb0b5d0 & 0xffffffff;
  }
  local_58 = local_58 | uVar15;
  local_a8._0_1_ = (byte)uVar18;
  local_a8._1_2_ = (undefined2)(uVar23 >> 8);
  local_a8._3_1_ = 0;
  uStack_a4 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_77 = 0x301;
  local_a0 = 1;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_60 = 0;
  local_50 = 0;
  local_8c = ~(-1 << bVar4);
  local_88 = uVar26;
  local_84 = uVar32;
  local_78 = uVar29;
  local_75 = uVar27;
  local_68 = puVar20;
  local_70 = FUN_1431edf91(uVar23,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar9 = local_b0;
  lVar30 = local_e8;
  local_100 = (longlong *)(local_e8 + 0x58);
  if (local_100 == &local_b0) {
LAB_14373694b:
    lVar9 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar19 = (uint *)(local_b0 + 8);
      uVar18 = *puVar19;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar19 = (uint *)(local_b0 + 8);
        LOCK();
        uVar18 = *puVar19;
        *puVar19 = *puVar19 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar9;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar34 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar7;
              if (bVar34) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar34);
          }
          else {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar34 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar34) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar34);
          }
        }
      }
    }
    lVar9 = *local_100;
  }
  else {
    lVar10 = *local_100;
    *local_100 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar19 = (uint *)(lVar10 + 8);
      uVar18 = *puVar19;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar19 = (uint *)(lVar10 + 8);
        LOCK();
        uVar18 = *puVar19;
        *puVar19 = *puVar19 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar34 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar7;
              if (bVar34) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar34);
          }
          else {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar34 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar34) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar34);
          }
        }
      }
      goto LAB_14373694b;
    }
  }
  lVar10 = *(longlong *)(lVar30 + 0x10);
  if (lVar10 != lVar9) {
    *(longlong *)(lVar30 + 0x10) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar19 = (uint *)(lVar10 + 8);
      uVar18 = *puVar19;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar19 = (uint *)(lVar10 + 8);
        LOCK();
        uVar18 = *puVar19;
        *puVar19 = *puVar19 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar34 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar7;
              if (bVar34) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar34);
          }
          else {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar34 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar34) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar34);
          }
        }
      }
    }
  }
  *(undefined8 *)(*(longlong *)(lVar30 + 0x10) + 0x10) =
       *(undefined8 *)(*(longlong *)(lVar30 + 0x330) + 0x18);
  puVar20 = local_c8;
  if ((int)uStack_c0 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  (**(code **)(*DAT_14ca83900 + 0x248))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar30 + 0x10),puVar20);
  lVar9 = *(longlong *)(lVar30 + 0x330);
  lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x128) + 0x10);
  if (lVar10 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,lVar10,*(undefined8 *)(lVar30 + 0x10));
    lVar9 = *(longlong *)(lVar30 + 0x330);
  }
  if (*(longlong *)(lVar9 + 0x138) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x138) + 0x20);
  }
  local_d8 = lVar30 + 0x60;
  local_e0 = (ulonglong)uVar18;
  uVar15 = 0;
  do {
    if (0 < (int)local_e0) {
      local_d0 = uVar15 * 0x78 + local_d8;
      local_f0 = (longlong)(int)uVar15 * 0x78 + local_d8;
      uVar33 = 0;
      local_f8 = uVar15;
      do {
        if (*(longlong *)(local_d0 + uVar33 * 8) != 0) {
          local_110 = (byte *)&local_a8;
          iVar31 = (int)uVar33;
          local_108 = 0;
          local_118 = 1;
          local_128 = 0;
          local_120 = iVar31;
          _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x470))
                                   (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar30 + 0x58));
          uVar18 = CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(byte)local_a8));
          puVar19 = *(uint **)(*(longlong *)(lVar30 + 0x330) + 0x138);
          if ((ulonglong)uVar18 == 0) {
            uVar22 = (ulonglong)
                     *(uint5 *)(*(longlong *)(*(longlong *)(puVar19 + 6) + (longlong)iVar31 * 8) +
                               0x28) / 6;
LAB_143736cae:
            memcpy(_Dst,*(void **)(local_f0 + (longlong)iVar31 * 8),uVar22);
          }
          else {
            if (puVar19 == (uint *)0x0) {
              uVar25 = 0;
              uVar6 = 0;
              puVar16 = &DAT_14c87341c;
              puVar17 = &DAT_14c873420;
              piVar28 = &DAT_14c873428;
              uVar23 = 0;
            }
            else {
              uVar6 = (uint)(byte)puVar19[3];
              uVar15 = (ulonglong)(uVar6 * 0x30);
              puVar16 = (uint *)((longlong)&DAT_14c87341c + uVar15);
              puVar17 = (uint *)((longlong)&DAT_14c873420 + uVar15);
              piVar28 = (int *)((longlong)&DAT_14c873428 + uVar15);
              uVar23 = *puVar19;
              uVar25 = puVar19[1];
            }
            uVar1 = *puVar17;
            uVar22 = (ulonglong)(uVar6 * 0x30);
            uVar6 = *(uint *)((longlong)&DAT_14c87341c + uVar22);
            uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar22);
            uVar25 = uVar25 >> ((byte)uVar33 & 0x1f);
            if (uVar25 < uVar2) {
              uVar25 = uVar2;
            }
            uVar23 = uVar23 >> ((byte)uVar33 & 0x1f);
            if (uVar23 < uVar6) {
              uVar23 = uVar6;
            }
            uVar21 = (uVar1 + uVar25) - 1;
            uVar14 = (((*puVar16 + uVar23) - 1) / *puVar16) * *piVar28;
            if ((int)uVar25 < 2) {
              uVar25 = 1;
            }
            if ((int)uVar6 < 1) {
              uVar24 = 0;
            }
            else {
              if ((int)uVar23 < 2) {
                uVar23 = 1;
              }
              uVar24 = (ulonglong)((uVar6 + uVar23) - 1) / (ulonglong)uVar6;
            }
            if ((int)uVar2 < 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)((uVar2 + uVar25) - 1) / (ulonglong)uVar2;
            }
            uVar15 = local_f8;
            if (uVar14 == uVar18) {
              uVar22 = (longlong)*(int *)((longlong)&DAT_14c873428 + uVar22) * uVar8 * uVar24;
              goto LAB_143736cae;
            }
            if (uVar1 <= uVar21) {
              _Src = *(void **)(local_f0 + (longlong)iVar31 * 8);
              uVar23 = 0;
              do {
                memcpy(_Dst,_Src,(ulonglong)uVar14);
                _Src = (void *)((longlong)_Src + (ulonglong)uVar14);
                _Dst = (void *)((longlong)_Dst + (ulonglong)uVar18);
                uVar23 = uVar23 + 1;
                uVar15 = local_f8;
              } while (uVar23 < uVar21 / uVar1);
            }
          }
          lVar9 = local_f0;
          FUN_1400020a8(*(undefined8 *)(local_f0 + (longlong)iVar31 * 8));
          *(undefined8 *)(lVar9 + (longlong)iVar31 * 8) = 0;
          local_118 = local_118 & 0xffffff00;
          local_128 = 0;
          local_120 = iVar31;
          (**(code **)(*DAT_14ca83900 + 0x478))
                    (DAT_14ca83900,&DAT_14ca85100,*local_100,uVar15 & 0xffffffff);
          lVar30 = local_e8;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != local_e0);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 6);
  lVar9 = FUN_140032b16(0);
  local_a8._0_1_ = *(byte *)(*(longlong *)(lVar30 + 0x330) + 0xf1);
  if (2 < (byte)local_a8) {
    local_a8._0_1_ =
         *(byte *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + 0x28) + 1 +
                  (ulonglong)*(byte *)(*(longlong *)(lVar30 + 0x330) + 0xf6) * 0x5c);
  }
  local_a8._1_2_ = 0x101;
  local_a8._3_1_ = 1;
  uStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0x7f7fffff;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  lVar10 = FUN_1405d51a2();
  lVar9 = *(longlong *)(lVar30 + 0x18);
  if (lVar9 != lVar10) {
    *(longlong *)(lVar30 + 0x18) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      LOCK();
      puVar19 = (uint *)(lVar9 + 8);
      uVar18 = *puVar19;
      *puVar19 = *puVar19 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar19 = (uint *)(lVar9 + 8);
        LOCK();
        uVar18 = *puVar19;
        *puVar19 = *puVar19 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar9 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar9;
          plVar13 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar34 = plVar13 != DAT_14ca843c0;
              plVar11 = plVar7;
              if (bVar34) {
                plVar13 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar34);
          }
          else {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar34 = plVar11 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar34) {
                plVar11 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar34);
          }
        }
      }
    }
  }
  bVar5 = *(char *)(*(longlong *)(lVar30 + 0x330) + 0xf0) - 3;
  uVar27 = 0;
  if (bVar5 < 7) {
    uVar27 = (undefined1)(0x1010000000101 >> (bVar5 * '\b' & 0x3f));
  }
  *(undefined1 *)(lVar30 + 0x44) = uVar27;
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143736e96:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373706a FUN_14373706a body=196 status=ok
// SIG undefined FUN_14373706a(void)

void FUN_14373706a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x330) + 0x128) + 0x10);
  if (lVar4 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 14373712e FUN_14373712e body=2294 status=ok
// SIG undefined FUN_14373712e(void)

void FUN_14373712e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  size_t sVar11;
  longlong *plVar12;
  int iVar13;
  char *_Str;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined2 *puVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_100;
  uint local_f8;
  byte *local_f0;
  undefined1 local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x58);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    lVar9 = *(longlong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar8;
    if (lVar9 != 0) {
      LOCK();
      puVar18 = (uint *)(lVar9 + 8);
      uVar1 = *puVar18;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar18 = (uint *)(lVar9 + 8);
        LOCK();
        uVar1 = *puVar18;
        *puVar18 = *puVar18 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar9 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar12;
              LOCK();
              bVar22 = plVar12 != DAT_14ca843c0;
              plVar10 = plVar6;
              if (bVar22) {
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c8;
              plVar12 = plVar6;
              if (bVar22) {
                plVar10 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x58);
    }
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (lVar9 != lVar8) {
      *(longlong *)(param_1 + 0x10) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      if (lVar9 != 0) {
        LOCK();
        puVar18 = (uint *)(lVar9 + 8);
        uVar1 = *puVar18;
        *puVar18 = *puVar18 - 1;
        UNLOCK();
        if ((uVar1 & 0x3fffffff) == 1) {
          puVar18 = (uint *)(lVar9 + 8);
          LOCK();
          uVar1 = *puVar18;
          *puVar18 = *puVar18 | 0x40000000;
          UNLOCK();
          if ((uVar1 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar9 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar9;
            plVar12 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar12;
                LOCK();
                bVar22 = plVar12 != DAT_14ca843c0;
                plVar10 = plVar6;
                if (bVar22) {
                  plVar12 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar6 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c8;
                plVar12 = plVar6;
                if (bVar22) {
                  plVar10 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x18);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18);
    if (lVar8 != lVar9) {
      *(longlong *)(param_1 + 0x18) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        LOCK();
        puVar18 = (uint *)(lVar8 + 8);
        uVar1 = *puVar18;
        *puVar18 = *puVar18 - 1;
        UNLOCK();
        if ((uVar1 & 0x3fffffff) == 1) {
          puVar18 = (uint *)(lVar8 + 8);
          LOCK();
          uVar1 = *puVar18;
          *puVar18 = *puVar18 | 0x40000000;
          UNLOCK();
          if ((uVar1 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar8 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar8;
            plVar12 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar12;
                LOCK();
                bVar22 = plVar12 != DAT_14ca843c0;
                plVar10 = plVar6;
                if (bVar22) {
                  plVar12 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar6 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c8;
                plVar12 = plVar6;
                if (bVar22) {
                  plVar10 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x128) + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
    goto LAB_143737862;
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  lVar8 = *(longlong *)(param_1 + 0x70);
  bVar5 = *(byte *)(lVar8 + 0x104);
  uVar17 = (*(byte *)(lVar8 + 0xfe) & 1) << 4;
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  local_d0 = (ulonglong)uVar1;
  FUN_1401031ac(lVar8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0b5f8) && (FUN_144b3d300(&DAT_14cb0b5f8), DAT_14cb0b5f8 == -1)) {
    DAT_14cb0b5e8 = 0x800000014aad4560;
    local_a8._0_1_ = 0x19;
    local_a8._1_2_ = 0;
    local_a8._3_1_ = 0;
    DAT_14cb0b5f0 = FUN_14577453c();
    DAT_14cb0b5f4 = '\x01';
    _Init_thread_footer(&DAT_14cb0b5f8);
  }
  local_68 = local_c8;
  if ((int)uStack_c0 == 0) {
    local_68 = &DAT_149dfb77a;
  }
  bVar4 = (byte)DAT_14c760da4 & 0x1f;
  puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x70) + 0x138);
  if (puVar3 == (undefined4 *)0x0) {
    uVar19 = 0;
    uVar21 = 0;
    uVar16 = 0;
  }
  else {
    uVar21 = CONCAT44(*puVar3,*puVar3);
    uVar19 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(puVar3 + 3));
    uVar16 = (undefined1)puVar3[8];
  }
  uVar14 = ((bVar5 & 2) << 0x13 | uVar17) ^ 0x100000;
  uVar2 = puVar3[4];
  if ((longlong)DAT_14cb0b5e8 < 0) {
    _Str = (char *)(DAT_14cb0b5e8 & 0x7fffffffffffffff);
    local_e0 = local_68;
    local_d8 = uVar19;
    if (DAT_14cb0b5f4 == '\x01') {
      puVar18 = &local_a8;
      FUN_1446f470e(puVar18,_Str,1);
    }
    else {
      local_a8._0_1_ = (byte)_Str;
      local_a8._1_2_ = (undefined2)((ulonglong)_Str >> 8);
      local_a8._3_1_ = (undefined1)((ulonglong)_Str >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)_Str >> 0x20);
      if (_Str == (char *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar11 = strlen(_Str);
        local_a0 = (undefined4)sVar11;
      }
      puVar18 = (uint *)&local_b0;
      FUN_14001c09c(puVar18,&local_a8,1);
    }
    DAT_14cb0b5e8 = (ulonglong)*puVar18;
    local_58 = CONCAT44(DAT_14cb0b5f0,*puVar18);
    local_68 = local_e0;
    uVar19 = local_d8;
  }
  else {
    local_58 = DAT_14cb0b5e8 & 0xffffffff | (ulonglong)DAT_14cb0b5f0 << 0x20;
  }
  local_a8._0_1_ = (byte)uVar17;
  local_a8._1_2_ = (undefined2)(uVar14 >> 8);
  local_a8._3_1_ = 0;
  uStack_a4 = 0;
  local_75 = (undefined1)uVar19;
  local_74 = 0xff00;
  local_7c = 1;
  local_7a = (undefined2)((ulonglong)uVar1 / 6);
  local_77 = 0x401;
  local_a0 = 1;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_60 = 0;
  local_50 = 0;
  local_8c = ~(-1 << bVar4);
  local_88 = uVar2;
  local_84 = uVar21;
  local_78 = uVar16;
  local_70 = FUN_1431edf91(uVar14,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar8 = local_b0;
  plVar12 = (longlong *)(param_1 + 0x58);
  if (plVar12 == &local_b0) {
LAB_14373751d:
    lVar8 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar18 = (uint *)(local_b0 + 8);
      uVar17 = *puVar18;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar18 = (uint *)(local_b0 + 8);
        LOCK();
        uVar17 = *puVar18;
        *puVar18 = *puVar18 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar8;
          plVar10 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c0;
              plVar6 = plVar7;
              if (bVar22) {
                plVar10 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar7 = (longlong)plVar6;
              LOCK();
              bVar22 = plVar6 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar22) {
                plVar6 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
    lVar8 = *plVar12;
  }
  else {
    lVar9 = *plVar12;
    *plVar12 = local_b0;
    local_b0 = 0;
    if (lVar9 != 0) {
      LOCK();
      puVar18 = (uint *)(lVar9 + 8);
      uVar17 = *puVar18;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar18 = (uint *)(lVar9 + 8);
        LOCK();
        uVar17 = *puVar18;
        *puVar18 = *puVar18 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar9 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar9;
          plVar10 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c0;
              plVar6 = plVar7;
              if (bVar22) {
                plVar10 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar7 = (longlong)plVar6;
              LOCK();
              bVar22 = plVar6 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar22) {
                plVar6 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
      goto LAB_14373751d;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 != lVar8) {
    *(longlong *)(param_1 + 0x10) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      LOCK();
      puVar18 = (uint *)(lVar9 + 8);
      uVar17 = *puVar18;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar18 = (uint *)(lVar9 + 8);
        LOCK();
        uVar17 = *puVar18;
        *puVar18 = *puVar18 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar9 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar12;
              LOCK();
              bVar22 = plVar12 != DAT_14ca843c0;
              plVar10 = plVar6;
              if (bVar22) {
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c8;
              plVar12 = plVar6;
              if (bVar22) {
                plVar10 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  puVar20 = local_c8;
  if ((int)uStack_c0 == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  (**(code **)(*DAT_14ca83900 + 0x248))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),puVar20);
  lVar8 = *(longlong *)(param_1 + 0x70);
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x128) + 0x10);
  if (lVar9 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,lVar9,*(undefined8 *)(param_1 + 0x10));
    lVar8 = *(longlong *)(param_1 + 0x70);
  }
  lVar8 = *(longlong *)(lVar8 + 0x138);
  if (lVar8 != 0) {
    iVar15 = 1;
    if (1 < *(int *)(lVar8 + 0x14)) {
      iVar15 = *(int *)(lVar8 + 0x14);
    }
    iVar13 = *(int *)(lVar8 + 0x20) - iVar15;
    local_e0 = (undefined2 *)CONCAT44(local_e0._4_4_,iVar13);
    if (iVar15 <= *(int *)(lVar8 + 0x20)) {
      local_e0 = (undefined2 *)CONCAT44(local_e0._4_4_,iVar13 + 1);
      iVar15 = 0;
      do {
        if (5 < (uint)local_d0) {
          uVar17 = 0;
          do {
            iVar13 = 0;
            do {
              local_e8 = 0;
              local_108 = CONCAT44(local_108._4_4_,uVar17);
              local_f8 = 1;
              local_100 = iVar15;
              local_f0 = (byte *)&local_a8;
              local_108 = (**(code **)(*DAT_14ca83900 + 0x470))
                                    (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x58),
                                     iVar13);
              local_100 = CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(byte)local_a8));
              FUN_147d706c4(param_1,uVar17,iVar13,iVar15);
              local_f8 = local_f8 & 0xffffff00;
              local_108 = CONCAT44(local_108._4_4_,uVar17);
              local_100 = iVar15;
              (**(code **)(*DAT_14ca83900 + 0x478))
                        (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x58),iVar13);
              iVar13 = iVar13 + 1;
            } while (iVar13 != 6);
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar1 / 6);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != (int)local_e0);
    }
  }
  lVar8 = FUN_140032b16(0);
  local_a8._0_1_ = *(byte *)(*(longlong *)(param_1 + 0x70) + 0xf1);
  if (2 < (byte)local_a8) {
    local_a8._0_1_ =
         *(byte *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + 0x28) + 1 +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0xf6) * 0x5c);
  }
  local_a8._1_2_ = 0x101;
  local_a8._3_1_ = 1;
  uStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0x7f7fffff;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  lVar9 = FUN_1405d51a2();
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 != lVar9) {
    *(longlong *)(param_1 + 0x18) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      LOCK();
      puVar18 = (uint *)(lVar8 + 8);
      uVar1 = *puVar18;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar18 = (uint *)(lVar8 + 8);
        LOCK();
        uVar1 = *puVar18;
        *puVar18 = *puVar18 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar8 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar8;
          plVar12 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar12;
              LOCK();
              bVar22 = plVar12 != DAT_14ca843c0;
              plVar10 = plVar6;
              if (bVar22) {
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar22);
          }
          else {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar22 = plVar10 != DAT_14ca843c8;
              plVar12 = plVar6;
              if (bVar22) {
                plVar10 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar22);
          }
        }
      }
    }
  }
  bVar5 = *(char *)(*(longlong *)(param_1 + 0x70) + 0xf0) - 3;
  uVar16 = 0;
  if (bVar5 < 7) {
    uVar16 = (undefined1)(0x1010000000101 >> (bVar5 * '\b' & 0x3f));
  }
  *(undefined1 *)(param_1 + 0x44) = uVar16;
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143737862:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143737a4a FUN_143737a4a body=193 status=ok
// SIG undefined FUN_143737a4a(void)

void FUN_143737a4a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x128) + 0x10);
  if (lVar4 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 143737b26 FUN_143737b26 body=12 status=ok
// SIG undefined FUN_143737b26(void)

void FUN_143737b26(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143737b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143737b32 FUN_143737b32 body=29 status=ok
// SIG undefined FUN_143737b32(void)

undefined8 FUN_143737b32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143737b76 FUN_143737b76 body=282 status=ok
// SIG undefined FUN_143737b76(void)

undefined8 * FUN_143737b76(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143737ce6 FUN_143737ce6 body=67 status=ok
// SIG undefined FUN_143737ce6(void)

void FUN_143737ce6(longlong *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(*param_1 + 0x120) = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x20))();
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143737d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143737d34 FUN_143737d34 body=12 status=ok
// SIG undefined FUN_143737d34(void)

void FUN_143737d34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143737d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143737d40 FUN_143737d40 body=29 status=ok
// SIG undefined FUN_143737d40(void)

undefined8 FUN_143737d40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143737d5e FUN_143737d5e body=282 status=ok
// SIG undefined FUN_143737d5e(void)

undefined8 * FUN_143737d5e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143737e78 FUN_143737e78 body=116 status=ok
// SIG undefined FUN_143737e78(void)

void FUN_143737e78(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1[0x15] + 0x120) = 0;
  (**(code **)(*(longlong *)param_1[0x16] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143737ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143737eec FUN_143737eec body=198 status=ok
// SIG undefined FUN_143737eec(void)

void FUN_143737eec(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  *(longlong *)(lVar4 + 0x120) = lVar5;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x128) + 0x10);
  lVar6 = *(longlong *)(lVar5 + 0x48);
  if (lVar6 != lVar4) {
    *(longlong *)(lVar5 + 0x48) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143737f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_2);
  return;
}



// FUNCTION 143737fbc FUN_143737fbc body=12 status=ok
// SIG undefined FUN_143737fbc(void)

void FUN_143737fbc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143737fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143737fc8 FUN_143737fc8 body=29 status=ok
// SIG undefined FUN_143737fc8(void)

undefined8 FUN_143737fc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143737fe6 FUN_143737fe6 body=282 status=ok
// SIG undefined FUN_143737fe6(void)

undefined8 * FUN_143737fe6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143738100 FUN_143738100 body=253 status=ok
// SIG undefined FUN_143738100(void)

void FUN_143738100(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar5 = param_1[0x15];
  lVar6 = param_1[0x16];
  *(longlong *)(lVar5 + 0x120) = lVar6;
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x128) + 0x10);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (lVar7 != lVar5) {
    *(longlong *)(lVar6 + 0x48) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar7 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar7;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  (**(code **)(*(longlong *)param_1[0x16] + 0x18))((longlong *)param_1[0x16],&DAT_14ca85100);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437381da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143738210 FUN_143738210 body=12 status=ok
// SIG undefined FUN_143738210(void)

void FUN_143738210(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143738219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14373821c FUN_14373821c body=29 status=ok
// SIG undefined FUN_14373821c(void)

undefined8 FUN_14373821c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14373823a FUN_14373823a body=282 status=ok
// SIG undefined FUN_14373823a(void)

undefined8 * FUN_14373823a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143738354 FUN_143738354 body=94 status=ok
// SIG undefined FUN_143738354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143738354(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1405d4f5e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1405d4f5e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143738390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437383c8 FUN_1437383c8 body=12 status=ok
// SIG undefined FUN_1437383c8(void)

void FUN_1437383c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437383d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437383d4 FUN_1437383d4 body=29 status=ok
// SIG undefined FUN_1437383d4(void)

undefined8 FUN_1437383d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437383f2 FUN_1437383f2 body=282 status=ok
// SIG undefined FUN_1437383f2(void)

undefined8 * FUN_1437383f2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14373855c FUN_14373855c body=64 status=ok
// SIG undefined FUN_14373855c(void)

void FUN_14373855c(longlong *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(*param_1 + 0x48) = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x20))();
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143738592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1437385a6 FUN_1437385a6 body=12 status=ok
// SIG undefined FUN_1437385a6(void)

void FUN_1437385a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437385af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437385b2 FUN_1437385b2 body=29 status=ok
// SIG undefined FUN_1437385b2(void)

undefined8 FUN_1437385b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437385d0 FUN_1437385d0 body=282 status=ok
// SIG undefined FUN_1437385d0(void)

undefined8 * FUN_1437385d0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1437386ea FUN_1437386ea body=113 status=ok
// SIG undefined FUN_1437386ea(void)

void FUN_1437386ea(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1[0x15] + 0x48) = 0;
  (**(code **)(*(longlong *)param_1[0x16] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143738751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14373877c FUN_14373877c body=12 status=ok
// SIG undefined FUN_14373877c(void)

void FUN_14373877c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143738785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143738788 FUN_143738788 body=29 status=ok
// SIG undefined FUN_143738788(void)

undefined8 FUN_143738788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437387a6 FUN_1437387a6 body=282 status=ok
// SIG undefined FUN_1437387a6(void)

undefined8 * FUN_1437387a6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143737b4f);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1437388c0 FUN_1437388c0 body=94 status=ok
// SIG undefined FUN_1437388c0(void)

void FUN_1437388c0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x16];
  *(longlong **)(param_1[0x15] + 0x48) = plVar2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_14ca85100);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143738914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14373891e FUN_14373891e body=39 status=ok
// SIG undefined FUN_14373891e(void)

undefined8 * FUN_14373891e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e25ce0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143738946 FUN_143738946 body=66 status=ok
// SIG undefined FUN_143738946(void)

void FUN_143738946(longlong *param_1)

{
  if (((ulonglong)param_1[3] >> 0x3e & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if ((param_1[3] & 0x4000000000000000U) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_1400020a8(param_1[1]);
  return;
}



// FUNCTION 143738988 FUN_143738988 body=1176 status=ok
// SIG undefined FUN_143738988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143738988(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b268);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb0b268,4000);
  DAT_14cb0b290 = 0;
  DAT_14cb0b298 = 0;
  atexit((_func_5014 *)&LAB_1437323a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2a0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb0b2a0,4000);
  DAT_14cb0b2c8 = 0;
  DAT_14cb0b2d0 = 0;
  atexit((_func_5014 *)&LAB_1437323b0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2d8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb0b2d8,4000);
  DAT_14cb0b300 = 0;
  DAT_14cb0b308 = 0;
  atexit((_func_5014 *)&LAB_1437323bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b310);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb0b310,4000);
  DAT_14cb0b338 = 0;
  DAT_14cb0b340 = 0;
  atexit((_func_5014 *)&LAB_1437323c8);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb0b348 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aacfc60,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb0b368);
  if (cVar1 == '\0') {
    _DAT_14cb0b368 = 0;
    uRam000000014cb0b370 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad15f0,1,&PTR_FUN_14aad1500);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0b448,L"r.VirtualTextures",&local_50,
                L"Is virtual texture streaming enabled?");
  atexit(FUN_1437328d9);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0b460,L"r.Mobile.VirtualTextures",&local_50,
                L"Whether virtual texture streaming is enabled on mobile platforms. Requires r.VirtualTextures enabled as well. \n"
               );
  atexit(FUN_14373291e);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b478,L"r.VT.EnableAutoImport",&local_50,
                L"Enable virtual texture on texture import");
  atexit(FUN_143732963);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0b490,L"r.VT.MenuRestricted",&local_50,
                L"Restrict virtual texture menu options");
  atexit(FUN_1437329a8);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_141471170(&DAT_14cb0b4a8,L"r.SkipInvalidDXTDimensions",&DAT_14c761dec,
                L"If set will skip over creating DXT textures that are smaller than 4x4 or other invalid dimensions."
               );
  atexit(FUN_1437329ed);
  DAT_14cb0b4b8 = 0;
  _DAT_14cb0b4c0 = 0;
  _DAT_14cb0b4c8 = 2;
  atexit(FUN_143732a32);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad25a0,1,0);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb0b508,L"r.MipMapLODBias",&local_50,
                L"Apply additional mip map bias for all 2D textures, range of -15.0 to 15.0");
  atexit(FUN_143733002);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0b618,L"r.FlushRHIThreadOnSTreamingTextureLocks",&local_50,
                L"If set to 0, we won\'t do any flushes for streaming textures. This is safe because the texture streamer deals with these hazards explicitly."
               );
  atexit(FUN_143733047);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0b520,L"r.MobileReduceLoadedMips",&local_50,
                L"Reduce loaded texture mipmaps for nonstreaming mobile platforms.\n");
  atexit(FUN_14373308c);
  local_50 = (char *)CONCAT44(local_50._4_4_,0xf);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0b538,L"r.MobileMaxLoadedMips",&local_50,
                L"Maximum number of loaded mips for nonstreaming mobile platforms.\n");
  atexit(FUN_1437330d1);
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_141471170(&DAT_14cb0b558,L"r.Streaming.UseGenericStreamingPath",&DAT_14cb0b550,
                L"Control when to use the mip data provider implementation: (default=0)\n0 to use it when there is a custom asset override.\n1 to always use it.\n2 to never use it."
               );
  atexit(FUN_143733116);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad3100,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad3670,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad3b30,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143738e24 FUN_143738e24 body=55 status=ok
// SIG undefined FUN_143738e24(void)

void FUN_143738e24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b638 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b638 = FUN_14171c317(FUN_14640860d,uVar1,L"ETextureEncodeEffort");
  }
  return;
}



// FUNCTION 143738e5b FUN_143738e5b body=55 status=ok
// SIG undefined FUN_143738e5b(void)

void FUN_143738e5b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b650 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b650 = FUN_14171c317(FUN_14640863c,uVar1,L"ETextureUniversalTiling");
  }
  return;
}



// FUNCTION 143738e92 FUN_143738e92 body=55 status=ok
// SIG undefined FUN_143738e92(void)

void FUN_143738e92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b668 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b668 = FUN_14171c317(FUN_14640866b,uVar1,L"ETextureEncodeSpeedOverride");
  }
  return;
}



// FUNCTION 143738ec9 FUN_143738ec9 body=69 status=ok
// SIG undefined FUN_143738ec9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143738ec9(void)

{
  _DAT_14cb0b6c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143738f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b6d0,1);
  return;
}



// FUNCTION 143738f0e FUN_143738f0e body=69 status=ok
// SIG undefined FUN_143738f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143738f0e(void)

{
  _DAT_14cb0b6e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143738f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b6e8,1);
  return;
}



// FUNCTION 143738f54 FUN_143738f54 body=69 status=ok
// SIG undefined FUN_143738f54(void)

void FUN_143738f54(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (DAT_14c761df4 == '\x01') {
    DAT_14c761df4 = 1;
    puVar2 = DAT_14cb0b950;
    while (puVar2 != (undefined8 *)0x0) {
      plVar1 = puVar2 + 2;
      puVar2 = (undefined8 *)*puVar2;
      if (*plVar1 != 0) {
        FUN_14129010a(*plVar1,param_1);
      }
    }
    DAT_14c761df4 = '\0';
  }
  return;
}



// FUNCTION 143738fbe FUN_143738fbe body=1467 status=ok
// SIG undefined FUN_143738fbe(void)

void FUN_143738fbe(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + 0x140) == param_2) && (*(uint *)(param_1 + 0x144) == param_3))
  goto LAB_1437391fa;
  *(uint *)(param_1 + 0x140) = param_2;
  *(uint *)(param_1 + 0x144) = param_3;
  if ((*(byte *)(param_1 + 0x15c) & 2) != 0) {
    if ((int)param_2 < (int)param_3) {
      param_2 = param_3;
    }
    uVar16 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> uVar16 == 0; uVar16 = uVar16 - 1) {
      }
    }
    iVar15 = 1;
    if (param_2 != 0) {
      iVar15 = (uVar16 ^ 0xffffffe0) + 0x21;
    }
    *(int *)(param_1 + 0x164) = iVar15;
  }
  lVar10 = FUN_1447b4020(param_1);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  lVar11 = FUN_1447b4020(param_1);
  iVar15 = *(int *)(param_1 + 0x140);
  iVar4 = *(int *)(param_1 + 0x144);
  iVar5 = *(int *)(param_1 + 0x164);
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143739086;
    if (iVar7 != 1) goto LAB_14373907d;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143739086;
  }
  else {
LAB_14373907d:
    if (iVar7 == 0x10) goto LAB_143739086;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 == 2)) {
LAB_143739086:
      if (((*(int *)(lVar11 + 0xbc) != iVar15) || (*(int *)(lVar11 + 0xc0) != iVar4)) ||
         (*(int *)(lVar11 + 0xc4) != iVar5)) {
        *(int *)(lVar11 + 0xbc) = iVar15;
        *(int *)(lVar11 + 0xc0) = iVar4;
        *(int *)(lVar11 + 0xc4) = iVar5;
        FUN_1447fd100(lVar11,&DAT_14ca85100);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143739086;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar2;
    if (puVar13 != (uint *)0x0) goto LAB_1437392be;
    while( true ) {
      uVar16 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar16 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar16 | 1;
        __tlregdtor(&LAB_14374dad0);
      }
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar10 + 0x310);
      *(undefined8 *)(lVar10 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar2 = puVar12;
      FUN_140217a48(puVar2);
      puVar13 = (uint *)*puVar2;
LAB_1437392be:
      puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar18 = (uint *)(puVar20 + 0x18);
      uVar16 = puVar13[0x12];
      if (puVar18 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar3 = *puVar13;
        *puVar13 = *puVar13 + uVar16 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar16) != 0xffffffff) break;
        puVar13 = (uint *)*puVar2;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar20 + 0x18);
        uVar16 = 0;
        if (puVar18 <= puVar13 + 0x4000) {
          uVar16 = 1;
          goto LAB_14373933e;
        }
      }
    }
    uVar16 = uVar16 + 1;
LAB_14373933e:
    *(uint **)(puVar13 + 0x10) = puVar18;
    puVar13[0x12] = uVar16;
    iVar7 = 0;
    FUN_1447247dc(puVar20,0);
    *puVar20 = &PTR_FUN_14aadff88;
    puVar20[0x15] = lVar11;
    *(int *)(puVar20 + 0x16) = iVar15;
    *(int *)((longlong)puVar20 + 0xb4) = iVar4;
    *(int *)(puVar20 + 0x17) = iVar5;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar16 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
        uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
        iVar7 = 0;
      }
      else {
        uVar19 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar19 = 5;
    }
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar10 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar10 == 0) {
      uVar6 = 1;
      if ((char)uVar19 != '\x06') {
        uVar6 = uVar19;
      }
      uVar19 = uVar6;
      uVar14 = 0;
    }
    else {
      if ((char)uVar19 == '\x06') {
        uVar19 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
      }
      uVar14 = *(undefined8 *)(lVar10 + 0x30);
    }
    puVar20[0xf] = uVar14;
    puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar20 + 0x1c) = iVar7;
    if (puVar20 == (undefined8 *)0x0) {
      local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar20);
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  else {
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aadff40;
    local_78[0] = FUN_14374f3ea;
    local_50 = lVar11;
    local_48 = iVar15;
    local_44 = iVar4;
    local_40 = iVar5;
    FUN_14005a792(&DAT_14ca9a440,L"ResizeRenderTarget",&DAT_14cb0ca34);
    if (local_78[0] != (code *)0x0) {
      pppuVar17 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar17 = &local_58;
      }
      (*(code *)(*pppuVar17)[2])();
    }
  }
LAB_1437391fa:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437395b2 FUN_1437395b2 body=3442 status=ok
// SIG undefined FUN_1437395b2(void)

void FUN_1437395b2(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined2 uVar13;
  byte bVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  char *_Str;
  undefined2 *puVar27;
  longlong lVar28;
  undefined1 uVar29;
  bool bVar30;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  byte local_182;
  byte local_181;
  ulonglong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined2 *local_168;
  int local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125 [2];
  undefined1 uStack_123;
  int local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte local_f8;
  char cStack_f7;
  char cStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined4 uStack_ec;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  undefined2 uStack_ca;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined2 local_c5;
  undefined1 local_c3;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulonglong local_90;
  size_t sVar22;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(int *)(param_1 + 0xbc) < 1) || (*(int *)(param_1 + 0xc0) < 1)) goto LAB_143739f8a;
  local_178 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0b968) && (FUN_144b3d300(&DAT_14cb0b968), DAT_14cb0b968 == -1)) {
    DAT_14cb0b958 = 0x800000014aad7e58;
    local_f8 = 0x1e;
    cStack_f7 = 0;
    cStack_f6 = 0;
    uStack_f5 = 0;
    DAT_14cb0b960 = FUN_14577453c();
    DAT_14cb0b964 = '\x01';
    _Init_thread_footer(&DAT_14cb0b968);
  }
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
  local_f8 = (byte)uVar11;
  cStack_f7 = (char)((ulonglong)uVar11 >> 8);
  cStack_f6 = (char)((ulonglong)uVar11 >> 0x10);
  uStack_f5 = (undefined1)((ulonglong)uVar11 >> 0x18);
  uStack_f4 = (undefined1)((ulonglong)uVar11 >> 0x20);
  uStack_f3 = (undefined1)((ulonglong)uVar11 >> 0x28);
  uStack_f2 = (undefined2)((ulonglong)uVar11 >> 0x30);
  FUN_1400021e4(&local_f8,&local_168);
  bVar14 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x3c0))();
  plVar23 = *(longlong **)(param_1 + 0x90);
  uVar15 = (*(byte *)((longlong)plVar23 + 0x15a) & 8) << 0x16 | (uint)bVar14 << 4;
  if ((*(byte *)((longlong)plVar23 + 0x15c) & 2) != 0) {
    uVar15 = uVar15 | *(uint *)((longlong)&DAT_14c873430 +
                               (ulonglong)((uint)*(byte *)(param_1 + 0xb8) * 0x30)) >> 5 & 0x20000;
  }
  uVar26 = *(uint *)((longlong)plVar23 + 0x13c) & 2;
  uVar7 = (*(byte *)((longlong)plVar23 + 0x15a) & 2) << 0x19 | uVar15;
  uVar12 = uVar7 | uVar26 << 0x10;
  bVar14 = (**(code **)(*plVar23 + 0x3d0))();
  local_182 = 0xe >> (bVar14 & 0xf);
  local_181 = bVar14 < 4;
  uVar29 = 1;
  if ((bool)local_181) {
    uVar29 = (char)(0x8040201 >> (bVar14 * '\b' & 0x1f));
  }
  puVar27 = local_168;
  if (local_160 == 0) {
    puVar27 = &DAT_149dfb77a;
  }
  bVar14 = (byte)DAT_14c760da4 & 0x1f;
  local_180 = (ulonglong)uVar12 | 9;
  uVar11 = *(undefined8 *)(param_1 + 0xbc);
  uVar8 = *(undefined1 *)(param_1 + 0xb8);
  uVar9 = *(undefined1 *)(param_1 + 0xc4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  uVar5 = *(undefined4 *)(param_1 + 0xb0);
  uVar6 = *(uint *)(param_1 + 0xb4);
  if ((longlong)DAT_14cb0b958 < 0) {
    _Str = (char *)(DAT_14cb0b958 & 0x7fffffffffffffff);
    if (DAT_14cb0b964 == '\x01') {
      FUN_1446f470e(&local_f8,_Str,1);
      puVar21 = (ulonglong *)&local_f8;
    }
    else {
      local_f8 = (byte)_Str;
      cStack_f7 = (char)((ulonglong)_Str >> 8);
      cStack_f6 = (char)((ulonglong)_Str >> 0x10);
      uStack_f5 = (undefined1)((ulonglong)_Str >> 0x18);
      uStack_f4 = (undefined1)((ulonglong)_Str >> 0x20);
      uStack_f3 = (undefined1)((ulonglong)_Str >> 0x28);
      uStack_f2 = (undefined2)((ulonglong)_Str >> 0x30);
      if (_Str == (char *)0x0) {
        uVar16 = 0;
      }
      else {
        sVar22 = strlen(_Str);
        uVar16 = (undefined4)sVar22;
      }
      uStack_f0 = (undefined2)uVar16;
      uStack_ee = (undefined1)((uint)uVar16 >> 0x10);
      uStack_ed = (undefined1)((uint)uVar16 >> 0x18);
      FUN_14001c09c(&local_158,&local_f8,1);
      puVar21 = &local_158;
    }
    DAT_14cb0b958 = (ulonglong)(uint)*puVar21;
    uStack_108 = CONCAT44(DAT_14cb0b960,(uint)*puVar21);
  }
  else {
    uStack_108 = DAT_14cb0b958 & 0xffffffff | (ulonglong)DAT_14cb0b960 << 0x20;
  }
  local_126 = 0;
  _local_125 = CONCAT21(0xff00,uVar8);
  local_12c = 1;
  uStack_12a = 1;
  local_150 = 1;
  local_138 = 0;
  local_120 = 0x70;
  local_110 = 0;
  local_100 = 0;
  local_158 = local_180;
  uStack_14c = uVar3;
  uStack_148 = uVar4;
  uStack_144 = uVar5;
  local_140 = uVar6;
  local_13c = ~(-1 << bVar14);
  local_134 = uVar11;
  local_128 = uVar9;
  local_127 = uVar29;
  uStack_118 = puVar27;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_f8,&DAT_14ca85100);
  bVar14 = local_181;
  pbVar1 = (byte *)(param_1 + 0x58);
  if (pbVar1 == &local_f8) {
LAB_14373988c:
    lVar20 = *(longlong *)pbVar1;
  }
  else {
    lVar19 = *(longlong *)pbVar1;
    lVar20 = CONCAT26(uStack_f2,
                      CONCAT15(uStack_f3,
                               CONCAT14(uStack_f4,
                                        CONCAT13(uStack_f5,
                                                 CONCAT12(cStack_f6,CONCAT11(cStack_f7,local_f8)))))
                     );
    *(longlong *)pbVar1 = lVar20;
    local_f8 = 0;
    cStack_f7 = 0;
    cStack_f6 = 0;
    uStack_f5 = 0;
    uStack_f4 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    if (lVar19 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar19 + 8);
      uVar6 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar6 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar19 + 8);
        LOCK();
        uVar6 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar6 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(lVar19 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = lVar19;
          plVar23 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar24 = plVar17;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar17 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c8;
              plVar23 = plVar17;
              if (bVar30) {
                plVar24 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
      goto LAB_14373988c;
    }
  }
  plVar23 = (longlong *)(param_1 + 0x10);
  lVar19 = *(longlong *)(param_1 + 0x10);
  if (lVar19 != lVar20) {
    *plVar23 = lVar20;
    if (lVar20 != 0) {
      LOCK();
      *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
      UNLOCK();
    }
    if (lVar19 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar19 + 8);
      uVar6 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar6 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar19 + 8);
        LOCK();
        uVar6 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar6 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(lVar19 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar24 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c0;
              plVar17 = plVar18;
              if (bVar30) {
                plVar24 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar18 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar24 = plVar18;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
  bVar14 = bVar14 & local_182;
  lVar19 = CONCAT26(uStack_f2,
                    CONCAT15(uStack_f3,
                             CONCAT14(uStack_f4,
                                      CONCAT13(uStack_f5,
                                               CONCAT12(cStack_f6,CONCAT11(cStack_f7,local_f8))))));
  if (lVar19 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar19 + 8);
    uVar6 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar19 + 8);
      LOCK();
      uVar6 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar19 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar19;
        plVar24 = DAT_14ca843c0;
        plVar17 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar24;
            LOCK();
            bVar30 = plVar24 != DAT_14ca843c0;
            plVar17 = plVar18;
            if (bVar30) {
              plVar24 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar17;
            UNLOCK();
          } while (bVar30);
        }
        else {
          do {
            *plVar18 = (longlong)plVar17;
            LOCK();
            bVar30 = plVar17 != DAT_14ca843c8;
            plVar24 = plVar18;
            if (bVar30) {
              plVar17 = DAT_14ca843c8;
              plVar24 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar24;
            UNLOCK();
          } while (bVar30);
        }
      }
    }
  }
  uVar8 = uStack_ed;
  uVar29 = uStack_ee;
  uVar13 = uStack_f0;
  uStack_ee = (undefined1)((uint)local_150 >> 0x10);
  uStack_ed = (undefined1)((uint)local_150 >> 0x18);
  uStack_f0 = (undefined2)local_150;
  if (bVar14 == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x13c) & 1) != 0) {
      local_158 = local_180;
      if (local_120 == 0) {
        puVar21 = (ulonglong *)&local_f8;
        local_c6 = local_126;
        local_f8 = (byte)local_180;
        cStack_f7 = (char)(local_180 >> 8);
        cStack_f6 = (char)(local_180 >> 0x10);
        uStack_f5 = (undefined1)(local_180 >> 0x18);
        uStack_f4 = (undefined1)(local_180 >> 0x20);
        uStack_f3 = (undefined1)(local_180 >> 0x28);
        uStack_f2 = (undefined2)(local_180 >> 0x30);
        local_c5 = local_125;
        local_d4 = local_134;
        local_cc = local_12c;
        uStack_ca = uStack_12a;
        local_c8 = local_128;
        local_c7 = local_127;
        local_e8 = CONCAT44(uStack_144,uStack_148);
        uStack_ec = uStack_14c;
        local_e0 = local_140;
        local_d8 = local_138;
        local_c3 = uStack_123;
        local_dc = local_13c;
        local_c0 = local_120;
        uStack_bc = uStack_11c;
        uStack_b8 = (undefined4)uStack_118;
        uStack_b4 = uStack_118._4_4_;
        local_b0 = (undefined4)local_110;
        uStack_ac = local_110._4_4_;
        uStack_a8 = (undefined4)uStack_108;
        uStack_a4 = uStack_108._4_4_;
        local_a0 = local_100;
        local_c0 = FUN_1431edf91(local_180,local_110 != 0);
        lVar19 = *DAT_14ca83900;
      }
      else {
        lVar19 = *DAT_14ca83900;
        puVar21 = &local_158;
        uStack_f0 = uVar13;
        uStack_ee = uVar29;
        uStack_ed = uVar8;
      }
      (**(code **)(lVar19 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar21);
      if (plVar23 != &local_170) {
        lVar19 = *plVar23;
        *plVar23 = local_170;
        local_170 = 0;
        uVar13 = uStack_f0;
        uVar29 = uStack_ee;
        uVar8 = uStack_ed;
        if (lVar19 == 0) goto LAB_143739d6e;
        LOCK();
        puVar2 = (uint *)(lVar19 + 8);
        uVar7 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar19 + 8);
          LOCK();
          uVar7 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar7 >> 0x1e & 1) == 0) {
            bVar14 = *(byte *)(lVar19 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = lVar19;
            plVar24 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if ((bVar14 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar24;
                LOCK();
                bVar30 = plVar24 != DAT_14ca843c0;
                plVar17 = plVar18;
                if (bVar30) {
                  plVar24 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar30);
            }
            else {
              do {
                *plVar18 = (longlong)plVar17;
                LOCK();
                bVar30 = plVar17 != DAT_14ca843c8;
                plVar24 = plVar18;
                if (bVar30) {
                  plVar17 = DAT_14ca843c8;
                  plVar24 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar24;
                UNLOCK();
              } while (bVar30);
            }
          }
        }
      }
      lVar19 = local_170;
      uVar13 = uStack_f0;
      uVar29 = uStack_ee;
      uVar8 = uStack_ed;
      if (local_170 != 0) {
        LOCK();
        puVar2 = (uint *)(local_170 + 8);
        uVar7 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_170 + 8);
          LOCK();
          uVar7 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar7 >> 0x1e & 1) == 0) {
            bVar14 = *(byte *)(local_170 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = lVar19;
            plVar24 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            uVar13 = uStack_f0;
            uVar29 = uStack_ee;
            uVar8 = uStack_ed;
            if ((bVar14 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar24;
                LOCK();
                bVar30 = plVar24 != DAT_14ca843c0;
                plVar17 = plVar18;
                if (bVar30) {
                  plVar24 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar30);
            }
            else {
              do {
                *plVar18 = (longlong)plVar17;
                LOCK();
                bVar30 = plVar17 != DAT_14ca843c8;
                plVar24 = plVar18;
                if (bVar30) {
                  plVar17 = DAT_14ca843c8;
                  plVar24 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar24;
                UNLOCK();
              } while (bVar30);
            }
          }
        }
      }
    }
  }
  else {
    local_158 = (ulonglong)uVar12 | 10;
    local_127 = 1;
    if (local_120 == 0) {
      puVar21 = (ulonglong *)&local_f8;
      local_c6 = local_126;
      local_f8 = (byte)local_158;
      cStack_f7 = (char)(uVar15 >> 8);
      cStack_f6 = (char)(uVar12 >> 0x10);
      uStack_f5 = (undefined1)(uVar7 >> 0x18);
      uStack_f4 = 0;
      uStack_f3 = 0;
      uStack_f2 = 0;
      local_c5 = local_125;
      local_d4 = local_134;
      local_cc = local_12c;
      uStack_ca = uStack_12a;
      local_c8 = local_128;
      local_c7 = 1;
      local_e8 = CONCAT44(uStack_144,uStack_148);
      uStack_ec = uStack_14c;
      local_e0 = local_140;
      local_d8 = local_138;
      local_c3 = uStack_123;
      local_dc = local_13c;
      local_c0 = local_120;
      uStack_bc = uStack_11c;
      uStack_b8 = (undefined4)uStack_118;
      uStack_b4 = uStack_118._4_4_;
      local_b0 = (undefined4)local_110;
      uStack_ac = local_110._4_4_;
      uStack_a8 = (undefined4)uStack_108;
      uStack_a4 = uStack_108._4_4_;
      local_a0 = local_100;
      local_c0 = FUN_1431edf91(local_158,local_110 != 0);
      lVar19 = *DAT_14ca83900;
    }
    else {
      lVar19 = *DAT_14ca83900;
      puVar21 = &local_158;
      uStack_f0 = uVar13;
      uStack_ee = uVar29;
      uStack_ed = uVar8;
    }
    (**(code **)(lVar19 + 0x1a0))(DAT_14ca83900,&local_170,&DAT_14ca85100,puVar21);
    if (plVar23 != &local_170) {
      lVar19 = *plVar23;
      *plVar23 = local_170;
      local_170 = 0;
      uVar13 = uStack_f0;
      uVar29 = uStack_ee;
      uVar8 = uStack_ed;
      if (lVar19 == 0) goto LAB_143739d6e;
      LOCK();
      puVar2 = (uint *)(lVar19 + 8);
      uVar7 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar19 + 8);
        LOCK();
        uVar7 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar14 = *(byte *)(lVar19 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar24 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar14 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c0;
              plVar17 = plVar18;
              if (bVar30) {
                plVar24 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar18 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar24 = plVar18;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
    lVar19 = local_170;
    uVar13 = uStack_f0;
    uVar29 = uStack_ee;
    uVar8 = uStack_ed;
    if (local_170 != 0) {
      LOCK();
      puVar2 = (uint *)(local_170 + 8);
      uVar7 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_170 + 8);
        LOCK();
        uVar7 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar14 = *(byte *)(local_170 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar24 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          uVar13 = uStack_f0;
          uVar29 = uStack_ee;
          uVar8 = uStack_ed;
          if ((bVar14 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c0;
              plVar17 = plVar18;
              if (bVar30) {
                plVar24 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar18 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar24 = plVar18;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
LAB_143739d6e:
  uStack_ed = uVar8;
  uStack_ee = uVar29;
  uStack_f0 = uVar13;
  if ((uVar15 & 0x20000) != 0 || uVar26 != 0) {
    plVar24 = *(longlong **)pbVar1;
    cStack_f7 = 0;
    cStack_f6 = 0;
    uStack_f5 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ed = 0;
    uStack_ec = 0;
    local_f8 = 3;
    uStack_f4 = 1;
    lVar19 = (**(code **)(*plVar24 + 8))(plVar24);
    if (*(byte *)(lVar19 + 0x32) < 5) {
      cStack_f6 = (char)(0x4030502010 >> ((*(byte *)(lVar19 + 0x32) & 7) << 3));
    }
    uStack_f5 = 0;
    uStack_f2 = 0;
    uStack_f0 = 0;
    local_198 = (longlong *)&local_f8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_170,local_178,plVar24);
    plVar24 = (longlong *)(param_1 + 0xa0);
    if (plVar24 != &local_170) {
      lVar19 = *plVar24;
      *plVar24 = local_170;
      local_170 = 0;
      if (lVar19 == 0) goto LAB_143739ed7;
      LOCK();
      puVar2 = (uint *)(lVar19 + 8);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar19 + 8);
        LOCK();
        uVar15 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar14 = *(byte *)(lVar19 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar24 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar14 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c0;
              plVar17 = plVar18;
              if (bVar30) {
                plVar24 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar18 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar24 = plVar18;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
    lVar19 = local_170;
    if (local_170 != 0) {
      LOCK();
      puVar2 = (uint *)(local_170 + 8);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_170 + 8);
        LOCK();
        uVar15 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar14 = *(byte *)(local_170 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar24 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar14 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c0;
              plVar17 = plVar18;
              if (bVar30) {
                plVar24 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar18 = (longlong)plVar17;
              LOCK();
              bVar30 = plVar17 != DAT_14ca843c8;
              plVar24 = plVar18;
              if (bVar30) {
                plVar17 = DAT_14ca843c8;
                plVar24 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
LAB_143739ed7:
  uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(uint *)(param_1 + 0x88) = uVar15;
  *(uint *)(param_1 + 0x8c) = uVar15;
  lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
  if (lVar19 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar19,*plVar23);
  }
  puVar25 = &DAT_14cb0b950;
  do {
    puVar25 = (undefined8 *)*puVar25;
    if (puVar25 == (undefined8 *)0x0) {
      *(longlong *)(param_1 + 0x78) = param_1 + 0x60;
      if (DAT_14cb0b950 != 0) {
        *(longlong *)(DAT_14cb0b950 + 8) = param_1 + 0x68;
      }
      *(longlong *)(param_1 + 0x68) = DAT_14cb0b950;
      *(longlong **)(param_1 + 0x70) = &DAT_14cb0b950;
      DAT_14c761df4 = 1;
      DAT_14cb0b950 = param_1 + 0x68;
      break;
    }
  } while (puVar25[2] != param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143739f8a:
  lVar20 = FUN_140032b16(0);
  lVar19 = *(longlong *)(param_1 + 0x90);
  lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x78) + 0x28);
  lVar28 = (ulonglong)*(byte *)(lVar19 + 0xf6) * 0x5c;
  cStack_f6 = '\x02' - (*(char *)(lVar19 + 0x159) == '\x01');
  local_f8 = *(byte *)(lVar19 + 0xf1);
  cStack_f7 = '\x02' - (*(char *)(lVar19 + 0x158) == '\x01');
  if (2 < local_f8) {
    local_f8 = *(byte *)(lVar20 + 1 + lVar28);
  }
  if (*(char *)(lVar19 + 0x158) == '\0') {
    cStack_f7 = '\0';
  }
  if (*(char *)(lVar19 + 0x159) == '\0') {
    cStack_f6 = '\0';
  }
  uStack_ed = 0;
  uStack_f5 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  uStack_ec = 0x7f7fffff;
  local_e8 = (ulonglong)*(uint *)(lVar20 + 0x58 + lVar28);
  local_e0 = local_e0 & 0xffffff00;
  lVar20 = FUN_1405d51a2();
  lVar19 = *(longlong *)(param_1 + 0x18);
  if (lVar19 != lVar20) {
    *(longlong *)(param_1 + 0x18) = lVar20;
    if (lVar20 != 0) {
      LOCK();
      *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
      UNLOCK();
    }
    if (lVar19 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar19 + 8);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar19 + 8);
        LOCK();
        uVar15 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar14 = *(byte *)(lVar19 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = lVar19;
          plVar23 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar14 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar24 = plVar17;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar17 = (longlong)plVar24;
              LOCK();
              bVar30 = plVar24 != DAT_14ca843c8;
              plVar23 = plVar17;
              if (bVar30) {
                plVar24 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373a325 FUN_14373a325 body=55 status=ok
// SIG undefined FUN_14373a325(void)

void FUN_14373a325(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b978 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b978 = FUN_14171c317(FUN_1464088ba,uVar1,L"ETextureRenderTargetFormat");
  }
  return;
}



// FUNCTION 14373a35c FUN_14373a35c body=55 status=ok
// SIG undefined FUN_14373a35c(void)

void FUN_14373a35c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b990 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b990 = FUN_14171c317(FUN_1464088eb,uVar1,L"ETextureRenderTargetSampleCount");
  }
  return;
}



// FUNCTION 14373a393 FUN_14373a393 body=228 status=ok
// SIG undefined FUN_14373a393(void)

longlong FUN_14373a393(void)

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
  if (DAT_14cb0b9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146408884;
    local_38 = &LAB_147d719e1;
    local_40 = &LAB_140fb41fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373a478 FUN_14373a478 body=1258 status=ok
// SIG undefined FUN_14373a478(void)

void FUN_14373a478(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = FUN_1447b4020();
  if (lVar9 == 0) goto LAB_14373a5a7;
  lVar10 = FUN_1447b4020(param_1);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14373a4d1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14373a4d6;
      goto LAB_14373a50d;
    }
  }
  else {
LAB_14373a4d1:
    if (iVar6 != 0x10) {
LAB_14373a50d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_14373a4d6;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14373a4d6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14373a668;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14373a668:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14373a6e8;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14373a6e8:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aae0020;
        puVar17[0x15] = lVar10;
        *(char *)(puVar17 + 0x16) = (char)param_2;
        uVar4 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aae0000;
        local_68 = &LAB_14374f842;
        local_40 = lVar10;
        local_38 = (char)param_2;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateResourceImmediate",&DAT_14cb0ca3c);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_14373a5a7;
    }
  }
LAB_14373a4d6:
  (*(code *)**(undefined8 **)(lVar10 + 0x60))(lVar10 + 0x60,&DAT_14ca85100,param_2);
LAB_14373a5a7:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373a964 FUN_14373a964 body=1574 status=ok
// SIG undefined FUN_14373a964(void)

void FUN_14373a964(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  byte *local_b8;
  longlong local_b0;
  byte local_a8;
  undefined1 uStack_a7;
  byte bStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ulonglong uStack_94;
  uint local_8c;
  undefined4 local_88;
  longlong local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((((int)plVar10[0x28] < 1) || (*(int *)((longlong)plVar10 + 0x144) < 1)) ||
     ((int)plVar10[0x29] < 1)) goto LAB_14373adf0;
  uVar5 = (**(code **)(*plVar10 + 0x3c0))();
  plVar10 = *(longlong **)(param_1 + 0x90);
  uVar2 = *(uint *)((longlong)plVar10 + 0x13c);
  uVar13 = uVar2 & 2;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  lVar7 = plVar10[0x28];
  lVar14 = plVar10[0x29];
  local_75 = (**(code **)(*plVar10 + 0x3b8))(plVar10);
  iVar11 = (uVar5 & 0xff) << 4;
  local_a8 = (byte)iVar11 | 9;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x14c);
  uStack_94 = *(ulonglong *)(*(longlong *)(param_1 + 0x90) + 0x154);
  local_76 = 1;
  uStack_a7 = (undefined1)((uint)iVar11 >> 8);
  bStack_a6 = (byte)uVar13;
  uStack_a5 = (undefined1)(((uVar2 & 4) << 0x16) >> 0x18);
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_74 = 0xff00;
  local_7c = 1;
  local_78 = 0x101;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9c = (undefined4)uVar4;
  uStack_98 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88 = 0;
  local_70 = 0x70;
  local_68 = L"FTextureRenderTarget2DArrayResource";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_8c = ~(-1 << bVar3);
  local_84 = lVar7;
  local_7a = (short)lVar14;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_b0) {
LAB_14373ab35:
    lVar7 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    lVar7 = *plVar10;
    *plVar10 = local_b0;
    local_b0 = 0;
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_14373ab35;
    }
  }
  plVar9 = (longlong *)*plVar10;
  if (uVar13 != 0) {
    uStack_a7 = 0;
    bStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_a8 = 3;
    uStack_a4 = 1;
    lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
    if (*(byte *)(lVar7 + 0x32) < 5) {
      bStack_a6 = bStack_a6 & 0x8f | (byte)(0x4030502010 >> ((*(byte *)(lVar7 + 0x32) & 7) << 3));
    }
    uStack_a5 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    local_b8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2,plVar9);
    plVar9 = (longlong *)(param_1 + 0xa8);
    if (plVar9 == &local_b0) {
LAB_14373ac8e:
      lVar7 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar7;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar15 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar15) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar15);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar15 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar15) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar15);
            }
          }
        }
      }
    }
    else {
      lVar7 = *plVar9;
      *plVar9 = local_b0;
      local_b0 = 0;
      if (lVar7 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar7 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar7 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar7 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar7;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar15 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar6;
                if (bVar15) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar15);
            }
            else {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar15 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar15) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar15);
            }
          }
        }
        goto LAB_14373ac8e;
      }
    }
    plVar9 = (longlong *)*plVar10;
  }
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
  if (lVar7 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar7,plVar9);
    plVar9 = (longlong *)*plVar10;
  }
  plVar10 = *(longlong **)(param_1 + 0x58);
  if (plVar10 != plVar9) {
    *(longlong **)(param_1 + 0x58) = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar10 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(plVar10 + 1);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)plVar10 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = (longlong)plVar10;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  puVar12 = &DAT_14cb0b950;
  do {
    puVar12 = (undefined8 *)*puVar12;
    if (puVar12 == (undefined8 *)0x0) {
      *(longlong *)(param_1 + 0x78) = param_1 + 0x60;
      if (DAT_14cb0b950 != 0) {
        *(longlong *)(DAT_14cb0b950 + 8) = param_1 + 0x68;
      }
      *(longlong *)(param_1 + 0x68) = DAT_14cb0b950;
      *(longlong **)(param_1 + 0x70) = &DAT_14cb0b950;
      DAT_14c761df4 = 1;
      DAT_14cb0b950 = param_1 + 0x68;
      break;
    }
  } while (puVar12[2] != param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = 1;
LAB_14373adf0:
  lVar7 = FUN_140032b16(0);
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x78) + 0x28);
  lVar14 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x90) + 0xf6) * 0x5c;
  uStack_98 = *(undefined4 *)(lVar7 + 0x58 + lVar14);
  local_a8 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0xf1);
  if (2 < local_a8) {
    local_a8 = *(byte *)(lVar7 + 1 + lVar14);
  }
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9c = 0x7f7fffff;
  uStack_a7 = 0;
  bStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_94 = uStack_94 & 0xffffff0000000000;
  lVar14 = FUN_1405d51a2();
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 != lVar14) {
    *(longlong *)(param_1 + 0x18) = lVar14;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar7;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373af8c FUN_14373af8c body=534 status=ok
// SIG undefined FUN_14373af8c(void)

void FUN_14373af8c(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_728 [40];
  longlong *local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined8 local_6e8;
  undefined1 local_6e0;
  undefined8 local_6dc;
  undefined4 local_6d4;
  undefined1 local_6c8;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 local_68;
  undefined4 local_64;
  uint local_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_728;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_3 != '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_1 + -0x50) + 8))();
    if ((*(byte *)(lVar2 + 3) & 1) == 0) {
      local_6e8 = *(undefined8 *)(param_1 + -0x50);
      local_6f8 = 0xffffffffffffffff;
      local_6f0 = 0xffffffff;
      local_6e0 = 1;
      local_6dc = 0x100000000000;
      local_6d4 = 0;
      local_6c8 = 0;
      uStack_80._0_4_ = 1;
      local_88 = &local_6f8;
      FUN_144760590(param_2,&local_88,0);
      FUN_145d87ef6(param_2,*(undefined8 *)(param_1 + -0x50),0,0);
      local_6e8 = *(undefined8 *)(param_1 + -0x50);
      local_6f8 = 0xffffffffffffffff;
      local_6f0 = 0xffffffff;
      local_6e0 = 1;
      local_6dc = 0x7000001000;
      local_6d4 = 0;
      local_6c8 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,1);
      local_88 = &local_6f8;
      FUN_144760590(param_2,&local_88,0);
    }
    else {
      local_68 = 0;
      local_64 = 0;
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      local_5c = 0x100000000;
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x50) + 8))();
      local_60 = (uint)*(ushort *)(lVar2 + 0x2e);
      FUN_1407779ba(&local_6f8,param_2);
      FUN_1447ec05f(&local_700,*(undefined8 *)(param_1 + -0x50),
                    L"TextureRenderTarget2DArrayResource");
      uVar3 = FUN_14473c272(&local_6f8,&local_700,0);
      if (local_700 != (longlong *)0x0) {
        (**(code **)(*local_700 + 0x38))();
      }
      FUN_1401a4871(&local_6f8,uVar3,&local_88);
      FUN_140779360(&local_6f8);
      FUN_140778010(&local_6f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373b1a4 FUN_14373b1a4 body=1606 status=ok
// SIG undefined FUN_14373b1a4(void)

bool FUN_14373b1a4(longlong *param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((int)*param_4 == 0) && (*(int *)((longlong)param_4 + 4) == 0)) && ((int)param_4[1] == 0))
     && (*(int *)((longlong)param_4 + 0xc) == 0)) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_78);
    uVar6 = local_78._4_4_;
    (**(code **)(*param_1 + 0x28))(param_1,&local_88);
    *param_4 = 0;
    param_4[1] = CONCAT44(uVar6,(undefined4)local_88);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_146971392(param_2,0);
  }
  lVar3 = *param_4;
  lVar4 = param_4[1];
  uStack_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  local_9c = param_3[3];
  uStack_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14373b278;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14373b281;
      goto LAB_14373b328;
    }
  }
  else {
LAB_14373b278:
    if (iVar8 != 0x10) {
LAB_14373b328:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_14373b281;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_14373b281;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_14373b4dd;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_14373b4dd:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x1d);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x1d);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14373b55d;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14373b55d:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aae0430;
        puVar18[0x15] = param_1;
        puVar18[0x16] = lVar3;
        puVar18[0x17] = lVar4;
        puVar18[0x18] = param_2;
        puVar18[0x19] = CONCAT44(uStack_a4,uStack_a8);
        puVar18[0x1a] = CONCAT44(local_9c,uStack_a0);
        *(undefined4 *)((longlong)puVar18 + 0xd4) = local_9c;
        *(undefined4 *)(puVar18 + 0x1b) = uStack_98;
        *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_94;
        *(undefined4 *)(puVar18 + 0x1c) = uStack_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x48,8);
        *local_68 = (longlong)&PTR_LAB_14aae0410;
        local_68[1] = (longlong)param_1;
        local_68[2] = lVar3;
        local_68[3] = lVar4;
        local_68[4] = param_2;
        *(ulonglong *)((longlong)local_68 + 0x34) = CONCAT44(uStack_98,local_9c);
        *(ulonglong *)((longlong)local_68 + 0x3c) = CONCAT44(uStack_90,uStack_94);
        *(undefined4 *)(local_68 + 5) = uStack_a8;
        *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_a4;
        *(undefined4 *)(local_68 + 6) = uStack_a0;
        *(undefined4 *)((longlong)local_68 + 0x34) = local_9c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_143750830;
        }
        local_b8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"ReadSurfaceCommand",&DAT_14cb0ca4c);
        if (local_78 != (code *)0x0) {
          plVar16 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar16 = local_58;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14373b406;
    }
  }
LAB_14373b281:
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
  uVar14 = *puVar11;
  local_78 = (code *)0x0;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_78,5);
  local_78 = (code *)CONCAT44(uStack_a4,uStack_a8);
  uStack_70 = CONCAT44(local_9c,uStack_a0);
  local_68 = (longlong *)CONCAT44(uStack_94,uStack_98);
  uStack_60 = uStack_90;
  local_b8 = &local_78;
  local_88 = lVar3;
  local_80 = lVar4;
  (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,uVar14,&local_88,param_2);
LAB_14373b406:
  FUN_14080c2b4();
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0 < *(int *)(param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


