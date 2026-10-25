// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da51126 FUN_14da51126 body=130 status=ok
// SIG undefined FUN_14da51126(void)

void FUN_14da51126(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort *unaff_RBX;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX ^ (uVar1 | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -8) = param_2;
  FUN_14df66974(param_1,FUN_14df66974,param_3,param_4);
  return;
}



// FUNCTION 14da511aa FUN_14da511aa body=83 status=ok
// SIG undefined FUN_14da511aa(void)

void FUN_14da511aa(void)

{
  FUN_14d7bf205();
  return;
}



// FUNCTION 14da512da FUN_14da512da body=126 status=ok
// SIG undefined FUN_14da512da(void)

/* WARNING: Removing unreachable block (ram,0x00014da5134b) */
/* WARNING: Removing unreachable block (ram,0x00014da5135c) */
/* WARNING: Removing unreachable block (ram,0x00014da51357) */

undefined8 FUN_14da512da(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  ulonglong in_R11;
  undefined8 uStackX_10;
  undefined8 *in_stack_00000038;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_3 = *param_3 + ~(in_R11 & uVar1);
  pcVar2 = (code *)swi(0x2e);
  uVar3 = (*pcVar2)(param_1,param_2,uStackX_10);
  *in_stack_00000038 = unaff_RBP;
  in_stack_00000038[-1] = unaff_RBP;
  in_stack_00000038[-2] = param_1;
  in_stack_00000038[-3] = param_1;
  in_stack_00000038[-2] = &LAB_160fe63ed;
  return uVar3;
}



// FUNCTION 14da5135c FUN_14da5135c body=146 status=ok
// SIG undefined FUN_14da5135c(void)

ulonglong FUN_14da5135c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong in_R11;
  undefined4 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + CONCAT44(0xffffffff,unaff_retaddr) + 0x29f903e0);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x48);
  FUN_164b68474(param_1,uVar1 + param_1 + (uVar1 & param_1) * -2,param_3);
  *(undefined8 *)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3)) = 0;
  *(code **)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3)) =
       FUN_164b68474 + *(longlong *)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3));
  return uVar2 ^ param_1;
}



// FUNCTION 14da513f0 FUN_14da513f0 body=152 status=ok
// SIG undefined FUN_14da513f0(void)

void FUN_14da513f0(void)

{
  longlong unaff_RBP;
  ulonglong in_R11;
  
  *(undefined8 *)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3)) = 0;
  *(longlong *)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3)) =
       *(longlong *)(&stack0x00000018 + (in_R11 ^ 0x5e0fc7d3)) + unaff_RBP;
  return;
}



// FUNCTION 14da51489 FUN_14da51489 body=166 status=ok
// SIG undefined FUN_14da51489(void)

/* WARNING: Removing unreachable block (ram,0x00014da51529) */
/* WARNING: Removing unreachable block (ram,0x00014da5152f) */
/* WARNING: Removing unreachable block (ram,0x00014da51579) */
/* WARNING: Removing unreachable block (ram,0x00014da51585) */
/* WARNING: Removing unreachable block (ram,0x000161731d97) */

void FUN_14da51489(void)

{
  FUN_161731d97();
  return;
}



// FUNCTION 14da5152f FUN_14da5152f body=138 status=ok
// SIG undefined FUN_14da5152f(void)

void FUN_14da5152f(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16546e035(param_1,-((param_2 ^ unaff_RBP) - *(longlong *)(unaff_R13 + -0x28)) ^ unaff_R15);
  return;
}



// FUNCTION 14da5165c FUN_14da5165c body=153 status=ok
// SIG undefined FUN_14da5165c(void)

undefined8 FUN_14da5165c(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  
  return CONCAT71((int7)((ulonglong)(in_RAX - param_4) >> 8),~param_1);
}



// FUNCTION 14da51773 FUN_14da51773 body=159 status=ok
// SIG undefined FUN_14da51773(void)

/* WARNING: Removing unreachable block (ram,0x00014da51813) */
/* WARNING: Removing unreachable block (ram,0x00014da5184b) */
/* WARNING: Removing unreachable block (ram,0x00014da5184f) */

void FUN_14da51773(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 in_AL;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_retaddr;
  ushort local_res20;
  uint6 uStackX_22;
  
  *(ulonglong *)(unaff_RSI + 0x10) =
       (unaff_R13 - (*(ulonglong *)(unaff_RSI + 0x10) | unaff_R13)) +
       *(longlong *)(unaff_RSI + 0x10);
  param_5 = param_5 ^ param_1;
  LOCK();
  UNLOCK();
  DAT_14d7abd73 = in_AL;
  *(undefined8 *)(param_5 - 8) = unaff_retaddr;
  *(undefined8 *)(param_5 - 0x10) = unaff_retaddr;
  *(undefined4 *)(param_5 - 0x18) = 0x9c7a519;
  *(undefined4 *)(param_5 - 0x14) = 0;
  lVar2 = *(longlong *)(param_5 - 0x18);
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = unaff_RBP;
  *(undefined4 *)(param_5 - 0x28) = 0x309b77ed;
  *(undefined4 *)(param_5 - 0x24) = 0;
  uVar3 = *(ulonglong *)(param_5 - 0x28);
  *(undefined8 *)(param_5 - 0x28) = unaff_R12;
  *(undefined8 *)(param_5 - 0x30) = param_2;
  uVar1 = *(undefined8 *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 0x18) = param_3;
  *(ulonglong *)(param_5 - 8) = lVar2 - (uVar3 ^ 0x35cfff4a);
  uVar4 = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x10) = uVar1;
  *(undefined8 *)(param_5 - 0x18) = uVar1;
  *(undefined8 *)(param_5 - 0x20) = uVar4;
  *(code **)(param_5 - 0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14da51813 FUN_14da51813 body=148 status=ok
// SIG undefined FUN_14da51813(void)

void FUN_14da51813(ulonglong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong unaff_R13;
  
  *param_2 = 0;
  *param_2 = *param_2;
  *(uint *)param_2 = 0;
  uVar2 = *param_2;
  *(uint *)param_2 = (uint)*param_2 | 0x28b4eb38;
  *(uint *)param_2 = ~(~((uint)uVar2 & 0x28b4eb38) & (uint)*param_2);
  uVar2 = *param_2;
  *param_2 = param_1;
  uVar1 = *param_2;
  *param_2 = in_RAX;
  *(uint *)param_2 = 0xf38e836a;
  *(uint *)((longlong)param_2 + 4) = 0xffffffff;
  FUN_1648beb84(uVar1,(int)uVar2 + 0x1f38,param_3,(-unaff_R13 - param_1) + (unaff_R13 | param_1) * 2
               );
  return;
}



// FUNCTION 14da518a7 FUN_14da518a7 body=488 status=ok
// SIG undefined FUN_14da518a7(void)

/* WARNING: Removing unreachable block (ram,0x00014da51941) */
/* WARNING: Removing unreachable block (ram,0x00014da51947) */

undefined8 FUN_14da518a7(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15662e288(param_1,param_2,FUN_15662e288);
  return uVar1;
}



// FUNCTION 14da519ef FUN_14da519ef body=70 status=ok
// SIG undefined FUN_14da519ef(void)

void FUN_14da519ef(void)

{
  return;
}



// FUNCTION 14da51ba2 FUN_14da51ba2 body=383 status=ok
// SIG undefined FUN_14da51ba2(void)

/* WARNING: Instruction at (ram,0x00014da51c92) overlaps instruction at (ram,0x00014da51c91)
    */
/* WARNING: Removing unreachable block (ram,0x00014da51e00) */
/* WARNING: Removing unreachable block (ram,0x00014da51e06) */
/* WARNING: Removing unreachable block (ram,0x00014da51c91) */

void FUN_14da51ba2(void)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar2 = -~*(ulonglong *)(unaff_R13 + -0x60) - (~unaff_R15 + 2);
  lVar3 = lVar2 + (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  FUN_14e203289(lVar2,lVar3 << ((byte)lVar2 & 0x3f),
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),lVar3);
  (&stack0x00000000)[lVar2] = 0;
  (*(code *)0x162ab0372)();
  uVar1 = *(undefined2 *)(lVar2 + 0x13c);
  *(undefined4 *)(&stack0x00000000 + in_R11) = 0xa9c06d8b;
  *(uint *)(&stack0x00000000 + in_R11) = *(uint *)(&stack0x00000000 + in_R11) ^ 0x4c598a1c;
  FUN_16188fca0(uVar1);
  FUN_162a294ef();
  return;
}



// FUNCTION 14da51cd5 FUN_14da51cd5 body=601 status=ok
// SIG undefined FUN_14da51cd5(void)

/* WARNING: Removing unreachable block (ram,0x00014da51e00) */
/* WARNING: Removing unreachable block (ram,0x00014da51e06) */

void FUN_14da51cd5(longlong param_1)

{
  undefined2 uVar1;
  longlong in_R11;
  uint local_res8 [8];
  
  uVar1 = *(undefined2 *)(param_1 + 0x13c);
  *(undefined4 *)((longlong)local_res8 + in_R11) = 0xa9c06d8b;
  *(uint *)((longlong)local_res8 + in_R11) = *(uint *)((longlong)local_res8 + in_R11) ^ 0x4c598a1c;
  FUN_16188fca0(uVar1);
  FUN_162a294ef();
  return;
}



// FUNCTION 14da51f19 FUN_14da51f19 body=146 status=ok
// SIG undefined FUN_14da51f19(void)

void FUN_14da51f19(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  FUN_157128456(FUN_157128456,unaff_R13[-7],
                (param_3 & unaff_R15 ^ 0xffffffffffffffff) & ~(param_2 & unaff_RBX));
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  uVar2 = *unaff_R13;
  *unaff_R13 = 0x61d385f6;
  *unaff_R13 = *unaff_R13 ^ 0x61d385f6;
  *unaff_R13 = *unaff_R13 ^ ~((~unaff_R15 | uVar1) & uVar2);
  (*(code *)0x162762010)
            (~((~(~param_5 | unaff_R15) | 0xffffffffffffffff - unaff_R15 | param_5) +
               (~param_5 | unaff_R15) + 1));
  return;
}



// FUNCTION 14da51fad FUN_14da51fad body=165 status=ok
// SIG undefined FUN_14da51fad(void)

void FUN_14da51fad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  uVar1 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  uVar2 = *unaff_R13;
  *unaff_R13 = 0x61d385f6;
  *unaff_R13 = *unaff_R13 ^ 0x61d385f6;
  *unaff_R13 = *unaff_R13 ^ ~((~unaff_R15 | uVar1) & uVar2);
  (*(code *)0x162762010)
            (~((~(~param_5 | unaff_R15) | 0xffffffffffffffff - unaff_R15 | param_5) +
               (~param_5 | unaff_R15) + 1),param_2,local_res10);
  return;
}



// FUNCTION 14da52058 FUN_14da52058 body=158 status=ok
// SIG undefined FUN_14da52058(void)

void FUN_14da52058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15652f614(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da5220a FUN_14da5220a body=179 status=ok
// SIG undefined FUN_14da5220a(void)

longlong FUN_14da5220a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~(~param_1 & *(ulonglong *)(unaff_RDI + -0x50)) + *(ulonglong *)(unaff_RDI + -0x50);
}



// FUNCTION 14da522be FUN_14da522be body=202 status=ok
// SIG undefined FUN_14da522be(void)

void FUN_14da522be(void)

{
  return;
}



// FUNCTION 14da52389 FUN_14da52389 body=249 status=ok
// SIG undefined FUN_14da52389(void)

/* WARNING: Removing unreachable block (ram,0x00014da52412) */

void FUN_14da52389(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  if (~-*(longlong *)(unaff_R12 + -0x90) + 1U == in_RAX) {
    FUN_161d8f1db();
    return;
  }
  FUN_1570f869c(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14da52830 FUN_14da52830 body=131 status=ok
// SIG undefined FUN_14da52830(void)

void FUN_14da52830(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R12;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x00000008 + param_1) = unaff_R12;
  FUN_162b14870(in_stack_00000010,param_2,param_3);
  FUN_161b1a8fe();
  return;
}



// FUNCTION 14da528b4 FUN_14da528b4 body=105 status=ok
// SIG undefined FUN_14da528b4(void)

void FUN_14da528b4(ulonglong param_1)

{
  ulonglong unaff_RSI;
  
  FUN_161b1a8fe((char)param_1,~((~param_1 | unaff_RSI) & (~unaff_RSI | param_1)));
  return;
}



// FUNCTION 14da5291e FUN_14da5291e body=1116 status=ok
// SIG undefined FUN_14da5291e(void)

/* WARNING: Removing unreachable block (ram,0x00014da52a47) */
/* WARNING: Removing unreachable block (ram,0x00014da52a53) */
/* WARNING: Removing unreachable block (ram,0x00014da52b0a) */
/* WARNING: Removing unreachable block (ram,0x00014da52b0f) */
/* WARNING: Removing unreachable block (ram,0x00014da52b15) */
/* WARNING: Removing unreachable block (ram,0x000166834b2a) */
/* WARNING: Removing unreachable block (ram,0x00014da52c47) */
/* WARNING: Removing unreachable block (ram,0x00014da52c4d) */
/* WARNING: Removing unreachable block (ram,0x00014da52c52) */
/* WARNING: Removing unreachable block (ram,0x000165c7071c) */
/* WARNING: Removing unreachable block (ram,0x00014da529a0) */
/* WARNING: Removing unreachable block (ram,0x00014da529ab) */
/* WARNING: Removing unreachable block (ram,0x000156754bf8) */
/* WARNING: Removing unreachable block (ram,0x00014da529a6) */

void FUN_14da5291e(undefined8 param_1,ushort param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  ulonglong unaff_R12;
  ulonglong uVar3;
  
  uVar2 = 0xffffffffffffffff - *(ulonglong *)(unaff_R12 - 0x90);
  uVar3 = ~((~in_RAX | *(ulonglong *)(unaff_R12 - 0x90)) & (uVar2 + in_RAX) - (uVar2 & in_RAX));
  FUN_15b31bb68();
  uVar2 = ~unaff_R12;
  lVar1 = ((uVar3 - 1) - ~-(uVar2 | uVar3)) + uVar2;
  FUN_1654d012a(lVar1,~param_2,
                CONCAT62(~((uint6)((ulonglong)param_3 >> 0x10) &
                          (uint6)((uVar2 + uVar3) - lVar1 >> 0x10)),0xffff),
                *(longlong *)((unaff_RBP ^ in_RAX) - 0x30) + uVar3);
  return;
}



// FUNCTION 14da52e2c FUN_14da52e2c body=332 status=ok
// SIG undefined FUN_14da52e2c(void)

void FUN_14da52e2c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 in_R10;
  ulonglong uVar3;
  undefined8 in_stack_00000010;
  ulonglong local_res18;
  
  uVar2 = FUN_15b1977c7(~(local_res18 & param_1) & (local_res18 | param_1),param_2,param_3,param_4);
  uVar3 = (DAT_15b197727 & uVar2) * 2;
  if ((DAT_15b197727 + uVar2 < uVar3) && (uVar3 < DAT_15b197727 + uVar2)) {
    *(undefined8 *)(&stack0x00000008 + unaff_RDI) = in_R10;
    thunk_FUN_15b642ca5();
    return;
  }
  uVar3 = ~(DAT_15b19772f & uVar2) & (DAT_15b19772f | uVar2);
  uVar1 = ~(DAT_15b19775f & uVar2) & (DAT_15b19775f | uVar2);
  *(ulonglong *)(uVar1 - 8) = ~((~uVar2 | DAT_15b197737) & (~DAT_15b197737 | uVar2));
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000010;
  *(ulonglong *)(uVar1 - 0x20) = uVar3;
  *(ulonglong *)(uVar1 - 0x28) = uVar3;
  *(undefined **)(uVar1 - 0x20) = &DAT_15712d1b1;
  (*(code *)0x1626fe835)();
  return;
}



// FUNCTION 14da52f7c FUN_14da52f7c body=62 status=ok
// SIG undefined FUN_14da52f7c(void)

void FUN_14da52f7c(void)

{
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_RDI) = in_R10;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da530d2 FUN_14da530d2 body=446 status=ok
// SIG undefined FUN_14da530d2(void)

/* WARNING: Removing unreachable block (ram,0x00014dfa274b) */
/* WARNING: Removing unreachable block (ram,0x00014dfa2756) */
/* WARNING: Removing unreachable block (ram,0x00014dfa2751) */
/* WARNING: Removing unreachable block (ram,0x00014da53164) */

void FUN_14da530d2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) & param_1;
  if (-1 < (longlong)uVar1) {
    FUN_14dfa26b0();
    return;
  }
  FUN_161806d4b(param_1,~uVar1 & (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3,FUN_161806d4b
               );
  return;
}



// FUNCTION 14da5329a FUN_14da5329a body=38 status=ok
// SIG undefined FUN_14da5329a(void)

void FUN_14da5329a(void)

{
  byte unaff_R12B;
  byte *unaff_R13;
  byte unaff_R15B;
  
  *unaff_R13 = ~(unaff_R12B & unaff_R15B);
  thunk_FUN_1573f2e58();
  return;
}



// FUNCTION 14da53317 FUN_14da53317 body=146 status=ok
// SIG undefined FUN_14da53317(void)

void FUN_14da53317(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1621d87bb(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(undefined8 *)(unaff_R12 + -0x78),
                param_2);
  return;
}



// FUNCTION 14da533aa FUN_14da533aa body=325 status=ok
// SIG undefined FUN_14da533aa(void)

/* WARNING: Removing unreachable block (ram,0x00014da5342d) */

void FUN_14da533aa(byte param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  ulonglong unaff_R15;
  bool bVar5;
  bool bVar6;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar4 = local_res10 + unaff_R15 + (local_res10 & unaff_R15) * -2;
  uVar1 = local_res18 ^ unaff_R15;
  LOCK();
  bVar5 = in_AL < DAT_14d7acb37;
  bVar6 = SBORROW1(in_AL,DAT_14d7acb37);
  cVar2 = in_AL - DAT_14d7acb37;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7acb37;
  }
  DAT_14d7acb37 = bVar3;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar5 | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = 0x1a89580;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(undefined8 *)(uVar1 - 0x28) = param_3;
  *(code **)(uVar1 - 0x18) = FUN_166a4ac53;
  *(undefined **)(uVar1 - 0x20) = &DAT_1566df2d8;
  return;
}



// FUNCTION 14da534f2 FUN_14da534f2 body=203 status=ok
// SIG undefined FUN_14da534f2(void)

void FUN_14da534f2(void)

{
  return;
}



// FUNCTION 14da536fe FUN_14da536fe body=28 status=ok
// SIG undefined FUN_14da536fe(void)

void FUN_14da536fe(void)

{
  undefined8 local_res8;
  
  FUN_1564d75bf(local_res8);
  return;
}



// FUNCTION 14da5376b FUN_14da5376b body=146 status=ok
// SIG undefined FUN_14da5376b(void)

/* WARNING: Removing unreachable block (ram,0x00014da53880) */
/* WARNING: Removing unreachable block (ram,0x00014da5388b) */
/* WARNING: Removing unreachable block (ram,0x00014da53886) */

undefined8 FUN_14da5376b(void)

{
  undefined8 uVar1;
  
  FUN_156ded701();
  uVar1 = FUN_166c09ad3();
  return uVar1;
}



// FUNCTION 14da53800 FUN_14da53800 body=138 status=ok
// SIG undefined FUN_14da53800(void)

/* WARNING: Removing unreachable block (ram,0x00014da53880) */
/* WARNING: Removing unreachable block (ram,0x00014da5388b) */
/* WARNING: Removing unreachable block (ram,0x00014da53886) */

undefined8 FUN_14da53800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_166c09ad3(param_1,param_2,param_3,unaff_retaddr);
  return uVar1;
}



// FUNCTION 14da5388b FUN_14da5388b body=151 status=ok
// SIG undefined FUN_14da5388b(void)

undefined8 FUN_14da5388b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da53922 FUN_14da53922 body=14 status=ok
// SIG undefined FUN_14da53922(void)

void FUN_14da53922(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da53a9e FUN_14da53a9e body=35 status=ok
// SIG undefined FUN_14da53a9e(void)

void FUN_14da53a9e(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_RDI;
  undefined8 uStackX_8;
  
  *unaff_RDI = *unaff_RDI & param_3;
  *(undefined8 *)(param_5 + -8) = 0x17cb820;
  FUN_14d85d504(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14da53cfb FUN_14da53cfb body=154 status=ok
// SIG undefined FUN_14da53cfb(void)

/* WARNING: Removing unreachable block (ram,0x00014da53e67) */
/* WARNING: Removing unreachable block (ram,0x00014da53e2c) */
/* WARNING: Removing unreachable block (ram,0x00014da53e37) */
/* WARNING: Removing unreachable block (ram,0x00014da53e6a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f8b) */
/* WARNING: Removing unreachable block (ram,0x00014da53f3c) */
/* WARNING: Removing unreachable block (ram,0x00016517846b) */
/* WARNING: Removing unreachable block (ram,0x00014da53f42) */
/* WARNING: Removing unreachable block (ram,0x00014da53f5f) */
/* WARNING: Removing unreachable block (ram,0x00014da53f6a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f7a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f70) */
/* WARNING: Removing unreachable block (ram,0x00014da53f7f) */
/* WARNING: Removing unreachable block (ram,0x0001614bc025) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06a) */
/* WARNING: Removing unreachable block (ram,0x0001614bc065) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06e) */
/* WARNING: Removing unreachable block (ram,0x00014da53f85) */
/* WARNING: Removing unreachable block (ram,0x00014da53f90) */
/* WARNING: Removing unreachable block (ram,0x00014da53fce) */
/* WARNING: Removing unreachable block (ram,0x00014da53fc9) */
/* WARNING: Removing unreachable block (ram,0x00014da54020) */
/* WARNING: Removing unreachable block (ram,0x00014da5401b) */
/* WARNING: Removing unreachable block (ram,0x00014da54048) */
/* WARNING: Removing unreachable block (ram,0x00014da5404d) */
/* WARNING: Removing unreachable block (ram,0x000160ff6176) */
/* WARNING: Removing unreachable block (ram,0x00014da54053) */
/* WARNING: Removing unreachable block (ram,0x00014da54059) */
/* WARNING: Removing unreachable block (ram,0x00014da5405e) */
/* WARNING: Removing unreachable block (ram,0x00014da53e32) */
/* WARNING: Removing unreachable block (ram,0x00014da53d97) */

undefined8 FUN_14da53cfb(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x90);
  uVar3 = 0xffffffffffffffff - uVar1 | in_RAX;
  if (-1 < (longlong)
           ((~uVar3 | ((in_RAX ^ 0xffffffffffffffff) + uVar1) -
                      ((in_RAX ^ 0xffffffffffffffff) & uVar1)) + uVar3 + 1)) {
    uVar2 = FUN_165f3a25b();
    return uVar2;
  }
  uVar2 = FUN_165f3a25b();
  return uVar2;
}



// FUNCTION 14da53d97 FUN_14da53d97 body=160 status=ok
// SIG undefined FUN_14da53d97(void)

/* WARNING: Removing unreachable block (ram,0x00014da53e67) */
/* WARNING: Removing unreachable block (ram,0x00014da53e2c) */
/* WARNING: Removing unreachable block (ram,0x00014da53e37) */
/* WARNING: Removing unreachable block (ram,0x00014da53e6a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f8b) */
/* WARNING: Removing unreachable block (ram,0x00014da53f3c) */
/* WARNING: Removing unreachable block (ram,0x00016517846b) */
/* WARNING: Removing unreachable block (ram,0x00014da53f42) */
/* WARNING: Removing unreachable block (ram,0x00014da53f5f) */
/* WARNING: Removing unreachable block (ram,0x00014da53f6a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f7a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f70) */
/* WARNING: Removing unreachable block (ram,0x00014da53f7f) */
/* WARNING: Removing unreachable block (ram,0x0001614bc025) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06a) */
/* WARNING: Removing unreachable block (ram,0x0001614bc065) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06e) */
/* WARNING: Removing unreachable block (ram,0x00014da53f85) */
/* WARNING: Removing unreachable block (ram,0x00014da53f90) */
/* WARNING: Removing unreachable block (ram,0x00014da53fce) */
/* WARNING: Removing unreachable block (ram,0x00014da53fc9) */
/* WARNING: Removing unreachable block (ram,0x00014da54020) */
/* WARNING: Removing unreachable block (ram,0x00014da5401b) */
/* WARNING: Removing unreachable block (ram,0x00014da54048) */
/* WARNING: Removing unreachable block (ram,0x00014da5404d) */
/* WARNING: Removing unreachable block (ram,0x000160ff6176) */
/* WARNING: Removing unreachable block (ram,0x00014da54053) */
/* WARNING: Removing unreachable block (ram,0x00014da54059) */
/* WARNING: Removing unreachable block (ram,0x00014da5405e) */
/* WARNING: Removing unreachable block (ram,0x00014da53e32) */

undefined8 FUN_14da53d97(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar1 = local_res18 ^ param_1;
  uVar2 = local_res20 ^ param_1;
  syscall();
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R13;
  *(undefined8 *)(uVar2 - 0x20) = 0x963e671;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x30) = 0x963e671;
  *(longlong *)(uVar2 - 0x20) = *(longlong *)(uVar2 - 0x20) + -0x45af321;
  lVar3 = *(longlong *)(uVar2 - 0x30);
  *(ulonglong *)(uVar2 - 0x20) =
       ~(~param_1 | unaff_retaddr) | ~(unaff_retaddr ^ 0xffffffffffffffff | param_1);
  *(longlong *)(uVar2 - 8) = lVar3 + -0x45af321;
  uVar4 = FUN_165c7153c(0x1650cb448);
  return uVar4;
}



// FUNCTION 14da53e37 FUN_14da53e37 body=264 status=ok
// SIG undefined FUN_14da53e37(void)

/* WARNING: Removing unreachable block (ram,0x00014da53f7a) */
/* WARNING: Removing unreachable block (ram,0x00014da53e67) */
/* WARNING: Removing unreachable block (ram,0x00014da53f3c) */
/* WARNING: Removing unreachable block (ram,0x00014da53f42) */
/* WARNING: Removing unreachable block (ram,0x00014da53f5f) */
/* WARNING: Removing unreachable block (ram,0x00014da53f6a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f70) */
/* WARNING: Removing unreachable block (ram,0x00014da53f7f) */
/* WARNING: Removing unreachable block (ram,0x0001614bc025) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06a) */
/* WARNING: Removing unreachable block (ram,0x0001614bc065) */
/* WARNING: Removing unreachable block (ram,0x0001614bc06e) */
/* WARNING: Removing unreachable block (ram,0x00014da53f85) */
/* WARNING: Removing unreachable block (ram,0x00014da53f90) */
/* WARNING: Removing unreachable block (ram,0x00014da53fce) */
/* WARNING: Removing unreachable block (ram,0x00014da53fc9) */
/* WARNING: Removing unreachable block (ram,0x00014da54020) */
/* WARNING: Removing unreachable block (ram,0x00014da5401b) */
/* WARNING: Removing unreachable block (ram,0x00014da54048) */
/* WARNING: Removing unreachable block (ram,0x00014da5404d) */
/* WARNING: Removing unreachable block (ram,0x000160ff6176) */
/* WARNING: Removing unreachable block (ram,0x00014da54053) */
/* WARNING: Removing unreachable block (ram,0x00014da54059) */
/* WARNING: Removing unreachable block (ram,0x00014da5405e) */
/* WARNING: Removing unreachable block (ram,0x00014da53f8b) */

undefined8 FUN_14da53e37(void)

{
  undefined8 uVar1;
  
  FUN_1668dcfc5();
  uVar1 = FUN_1647f9722();
  return uVar1;
}



// FUNCTION 14da53f42 FUN_14da53f42 body=278 status=ok
// SIG undefined FUN_14da53f42(void)

/* WARNING: Removing unreachable block (ram,0x00014da53f7a) */
/* WARNING: Removing unreachable block (ram,0x00014da53f8b) */
/* WARNING: Removing unreachable block (ram,0x000160ff6176) */
/* WARNING: Removing unreachable block (ram,0x00014da5405e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da53f42(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  bool bVar2;
  undefined8 local_res8;
  byte in_stack_00000010;
  ulonglong in_stack_00000018;
  
  if (param_2 == 0) {
    uVar1 = FUN_1653b94c7();
    return uVar1;
  }
  if (param_2 == 1) {
    if ((longlong)in_stack_00000018 < 0) {
      in_stack_00000010 = in_stack_00000010 ^ 0xc4;
    }
    *(byte *)(in_stack_00000018 & 0x7fffffffffffffff) = in_stack_00000010;
    return local_res8;
  }
  bVar2 = param_2 + -2 == 0;
  FUN_1653b9475(param_1,param_2 + -2,param_3);
  if (bVar2) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x123) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI != 0x124) {
    uVar1 = FUN_160ff6182();
    return uVar1;
  }
  uVar1 = FUN_160ff6176();
  return uVar1;
}



// FUNCTION 14da5405e FUN_14da5405e body=10 status=ok
// SIG undefined FUN_14da5405e(void)

void FUN_14da5405e(void)

{
  return;
}



// FUNCTION 14da540fa FUN_14da540fa body=291 status=ok
// SIG undefined FUN_14da540fa(void)

void FUN_14da540fa(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  FUN_14d892441(~unaff_RBP | ~(unaff_RDI | in_RAX),*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  FUN_16165d9b9();
  return;
}



// FUNCTION 14da5429e FUN_14da5429e body=170 status=ok
// SIG undefined FUN_14da5429e(void)

void FUN_14da5429e(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX != 0x1071f3) {
    FUN_166bd472b();
    return;
  }
  return;
}



// FUNCTION 14da5446e FUN_14da5446e body=167 status=ok
// SIG undefined FUN_14da5446e(void)

longlong FUN_14da5446e(longlong param_1)

{
  longlong unaff_RDI;
  
  return *(longlong *)(unaff_RDI + -0x70) + param_1;
}



// FUNCTION 14da545a6 FUN_14da545a6 body=1471 status=ok
// SIG undefined FUN_14da545a6(void)

/* WARNING: Removing unreachable block (ram,0x000162ca35f8) */
/* WARNING: Removing unreachable block (ram,0x000162ca35fe) */
/* WARNING: Removing unreachable block (ram,0x000162ca368c) */
/* WARNING: Removing unreachable block (ram,0x000162ca3692) */
/* WARNING: Removing unreachable block (ram,0x000162ca3743) */
/* WARNING: Removing unreachable block (ram,0x000162ca3748) */
/* WARNING: Removing unreachable block (ram,0x000162ca374e) */
/* WARNING: Removing unreachable block (ram,0x00015b877de8) */
/* WARNING: Removing unreachable block (ram,0x0001627f5793) */
/* WARNING: Removing unreachable block (ram,0x0001627f5873) */
/* WARNING: Removing unreachable block (ram,0x0001627f5879) */
/* WARNING: Removing unreachable block (ram,0x00015671d226) */
/* WARNING: Removing unreachable block (ram,0x0001574a63fe) */
/* WARNING: Removing unreachable block (ram,0x0001574a6427) */
/* WARNING: Removing unreachable block (ram,0x00015671d358) */
/* WARNING: Removing unreachable block (ram,0x00015671d35e) */
/* WARNING: Removing unreachable block (ram,0x00015671d363) */
/* WARNING: Removing unreachable block (ram,0x00014d9487c1) */
/* WARNING: Removing unreachable block (ram,0x000156b334a7) */
/* WARNING: Removing unreachable block (ram,0x000156b3351a) */
/* WARNING: Removing unreachable block (ram,0x000156b33520) */
/* WARNING: Removing unreachable block (ram,0x00014df6e09f) */
/* WARNING: Removing unreachable block (ram,0x00014df6e114) */
/* WARNING: Removing unreachable block (ram,0x00014df6e11a) */
/* WARNING: Removing unreachable block (ram,0x000162ca3581) */
/* WARNING: Removing unreachable block (ram,0x00016225c674) */
/* WARNING: Removing unreachable block (ram,0x00014da5463c) */
/* WARNING: Removing unreachable block (ram,0x00014da54642) */
/* WARNING: Removing unreachable block (ram,0x000165831093) */
/* WARNING: Removing unreachable block (ram,0x000165831099) */
/* WARNING: Removing unreachable block (ram,0x000165831106) */
/* WARNING: Removing unreachable block (ram,0x00014d948850) */
/* WARNING: Removing unreachable block (ram,0x00014d948856) */

undefined8 FUN_14da545a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14d9487c1();
  return uVar1;
}



// FUNCTION 14da547f2 FUN_14da547f2 body=132 status=ok
// SIG undefined FUN_14da547f2(void)

/* WARNING: Removing unreachable block (ram,0x00014da5484a) */

void FUN_14da547f2(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_160c3f341(param_1,~((~unaff_RSI | param_2) & ((param_2 | ~unaff_R15) + unaff_R15) - param_2),
                param_3,unaff_retaddr);
  return;
}



// FUNCTION 14da54876 FUN_14da54876 body=149 status=ok
// SIG undefined FUN_14da54876(void)

void FUN_14da54876(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x16100bc01)
            (param_1,0x1c95c621,0xfffffffffffffff8,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14da5497b FUN_14da5497b body=292 status=ok
// SIG undefined FUN_14da5497b(void)

/* WARNING: Removing unreachable block (ram,0x00014da54a0a) */
/* WARNING: Removing unreachable block (ram,0x00014da54a11) */
/* WARNING: Removing unreachable block (ram,0x00016268b67c) */

undefined8 FUN_14da5497b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16268b67c();
  return uVar1;
}



// FUNCTION 14da54aa7 FUN_14da54aa7 body=113 status=ok
// SIG undefined FUN_14da54aa7(void)

void FUN_14da54aa7(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  FUN_166602e3c(param_1,param_2);
  FUN_161b8c385();
  FUN_1611bd1b5(uStackX_8,
                *(ulonglong *)(unaff_R13 + -0x40) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15) * -2,
                -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) &
                     (~*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15)));
  return;
}



// FUNCTION 14da54b19 FUN_14da54b19 body=336 status=ok
// SIG undefined FUN_14da54b19(void)

void FUN_14da54b19(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  FUN_161b8c385();
  FUN_1611bd1b5(in_stack_00000010,
                *(ulonglong *)(unaff_R13 + -0x40) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15) * -2,
                -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) &
                     (~*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15)));
  return;
}



// FUNCTION 14da54c6a FUN_14da54c6a body=168 status=ok
// SIG undefined FUN_14da54c6a(void)

void FUN_14da54c6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  undefined8 in_R11;
  
  FUN_162b805c6(param_1);
  FUN_15b947d66(unaff_RBX,param_2,FUN_15b947d66,in_R11);
  return;
}



// FUNCTION 14da54d12 FUN_14da54d12 body=142 status=ok
// SIG undefined FUN_14da54d12(void)

void FUN_14da54d12(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  FUN_15b947d66(in_stack_00000008,param_2,FUN_15b947d66,uStackX_10);
  return;
}



// FUNCTION 14da54da7 FUN_14da54da7 body=137 status=ok
// SIG undefined FUN_14da54da7(void)

void FUN_14da54da7(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_16693e66e(param_1,-*(longlong *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14da54e37 FUN_14da54e37 body=144 status=ok
// SIG undefined FUN_14da54e37(void)

void FUN_14da54e37(void)

{
  return;
}



// FUNCTION 14da5515c FUN_14da5515c body=298 status=ok
// SIG undefined FUN_14da5515c(void)

/* WARNING: Removing unreachable block (ram,0x00014da5522d) */

void FUN_14da5515c(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1618342e9(param_1,0xffffffffffffff70,*(undefined8 *)(unaff_R13 + -0x88),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                 (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  FUN_161971837();
  return;
}



// FUNCTION 14da55289 FUN_14da55289 body=268 status=ok
// SIG undefined FUN_14da55289(void)

/* WARNING: Removing unreachable block (ram,0x00014da552f7) */

void FUN_14da55289(longlong param_1,undefined8 param_2)

{
  if (-1 < param_1) {
    FUN_1669848b5(param_1,param_2);
    return;
  }
  FUN_165650c36();
  return;
}



// FUNCTION 14da5543a FUN_14da5543a body=148 status=ok
// SIG undefined FUN_14da5543a(void)

/* WARNING: Removing unreachable block (ram,0x00014da554ce) */
/* WARNING: Removing unreachable block (ram,0x000156a7409b) */
/* WARNING: Removing unreachable block (ram,0x000156a740ac) */

void FUN_14da5543a(void)

{
  FUN_156a7409b();
  return;
}



// FUNCTION 14da554ce FUN_14da554ce body=11 status=ok
// SIG undefined FUN_14da554ce(void)

void FUN_14da554ce(void)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7bf84b(unaff_retaddr);
  return;
}



// FUNCTION 14da555e8 FUN_14da555e8 body=270 status=ok
// SIG undefined FUN_14da555e8(void)

/* WARNING: Instruction at (ram,0x00015b93578c) overlaps instruction at (ram,0x00015b93578b)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166999b63) */
/* WARNING: Removing unreachable block (ram,0x000166999b69) */
/* WARNING: Removing unreachable block (ram,0x000166999b19) */
/* WARNING: Removing unreachable block (ram,0x00014da557d6) */
/* WARNING: Removing unreachable block (ram,0x00014da557dc) */
/* WARNING: Removing unreachable block (ram,0x00014da557e1) */
/* WARNING: Removing unreachable block (ram,0x00015b9356c6) */
/* WARNING: Removing unreachable block (ram,0x00015b935712) */
/* WARNING: Removing unreachable block (ram,0x00015b935719) */
/* WARNING: Removing unreachable block (ram,0x00015b93578c) */
/* WARNING: Removing unreachable block (ram,0x00015b93578b) */
/* WARNING: Removing unreachable block (ram,0x00015b9357af) */
/* WARNING: Removing unreachable block (ram,0x00015b9357bd) */
/* WARNING: Removing unreachable block (ram,0x00015b9357d0) */
/* WARNING: Removing unreachable block (ram,0x00015b9357db) */
/* WARNING: Removing unreachable block (ram,0x00014d9fc26e) */
/* WARNING: Removing unreachable block (ram,0x00014da55732) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da555e8(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong lVar3;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar4;
  int unaff_retaddr;
  ulonglong local_res8 [4];
  
  uVar2 = FUN_1620bede2();
  lVar3 = unaff_RSI -
          CONCAT44((int)((ulonglong)unaff_R14 >> 0x20),(uint)unaff_R14 ^ unaff_retaddr + 0x4a52b214U
                  );
  uVar4 = *(ulonglong *)((longlong)local_res8 + lVar3 + 0x10);
  uVar2 = uVar2 ^ 0xffffffffd0b8e948;
  *(undefined8 *)((longlong)local_res8 + lVar3 + 0x10) = param_1;
  *(ulonglong *)((longlong)local_res8 + lVar3 + 8) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar4 & 0x200) != 0) * 0x200 | (ulonglong)((uVar4 & 0x100) != 0) * 0x100 |
       (ulonglong)((longlong)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4
       | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)((longlong)local_res8 + lVar3) = in_R11;
  *(undefined8 *)((longlong)local_res8 + lVar3 + -8) = unaff_R13;
  uVar1 = *(undefined8 *)((longlong)local_res8 + lVar3 + -8);
  *(undefined8 *)((longlong)local_res8 + lVar3 + 0x10) =
       *(undefined8 *)((longlong)local_res8 + lVar3 + 0x10);
  *(ulonglong *)((longlong)local_res8 + lVar3 + 8) = local_res8[1];
  *(ulonglong *)((longlong)local_res8 + lVar3) = local_res8[1];
  *(undefined8 *)((longlong)local_res8 + lVar3 + -8) = uVar1;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar3) = uVar1;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = uVar1;
  *(code **)((longlong)local_res8 + lVar3 + -8) = FUN_166a9bb1c;
  *(undefined1 **)(&stack0xfffffffffffffff8 + lVar3) = &LAB_156539415;
  return;
}



// FUNCTION 14da557e1 FUN_14da557e1 body=6 status=ok
// SIG undefined FUN_14da557e1(void)

void FUN_14da557e1(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_1611896d2(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14da557e7 FUN_14da557e7 body=124 status=ok
// SIG undefined FUN_14da557e7(void)

void FUN_14da557e7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  if (unaff_R13 == 1) {
    FUN_14e189304();
    return;
  }
  if (unaff_R13 == 2) {
    return;
  }
  if (unaff_R13 == 3) {
    FUN_165076a78();
    return;
  }
  FUN_14df40c47(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da559cb FUN_14da559cb body=287 status=ok
// SIG undefined FUN_14da559cb(void)

/* WARNING: Removing unreachable block (ram,0x00014da55a69) */

void FUN_14da559cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_R10;
  
  if (in_R10 != 0) {
    FUN_15b85a0f0(~in_R10,param_2,param_3);
    return;
  }
  FUN_15b85a0f0(0xffffffffffffffff,param_2,param_3);
  return;
}



// FUNCTION 14da55c1c FUN_14da55c1c body=610 status=ok
// SIG undefined FUN_14da55c1c(void)

/* WARNING: Removing unreachable block (ram,0x00014da55c83) */
/* WARNING: Removing unreachable block (ram,0x00014da55cb2) */

void FUN_14da55c1c(void)

{
  longlong in_R9;
  
  if (in_R9 == 0x752255f4) {
    return;
  }
  return;
}



// FUNCTION 14da55f0f FUN_14da55f0f body=167 status=ok
// SIG undefined FUN_14da55f0f(void)

void FUN_14da55f0f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161cf8f48(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da55fb6 FUN_14da55fb6 body=160 status=ok
// SIG undefined FUN_14da55fb6(void)

/* WARNING: Removing unreachable block (ram,0x00014da56046) */
/* WARNING: Removing unreachable block (ram,0x00014da5604c) */
/* WARNING: Removing unreachable block (ram,0x00014da56051) */

void FUN_14da55fb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_165ef20fa)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da56057 FUN_14da56057 body=176 status=ok
// SIG undefined FUN_14da56057(void)

/* WARNING: Removing unreachable block (ram,0x00016602baf5) */
/* WARNING: Removing unreachable block (ram,0x00014da560db) */

void FUN_14da56057(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000020;
  
  *(ulonglong *)(param_1 + 8) =
       (-2 - (*(ulonglong *)(param_1 + 8) | 0xfffffffffffffffe)) + *(longlong *)(param_1 + 8);
  if (in_stack_00000020 + unaff_RBP == (in_stack_00000020 & unaff_RBP)) {
    FUN_16602ba6a();
    return;
  }
  FUN_1662660ef(unaff_retaddr,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14da56175 FUN_14da56175 body=152 status=ok
// SIG undefined FUN_14da56175(void)

void FUN_14da56175(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1628f0603(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,FUN_1628f0603,~param_1);
  return;
}



// FUNCTION 14da562a8 FUN_14da562a8 body=170 status=ok
// SIG undefined FUN_14da562a8(void)

undefined8 FUN_14da562a8(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong unaff_R13;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  longlong alStackX_10 [3];
  
  uVar6 = *(ulonglong *)(unaff_R13 + -0x90) | CONCAT62(unaff_000000ba,unaff_R15W);
  FUN_16660e9ca(uVar6,*(undefined8 *)(unaff_R13 + -0x38),
                *(ulonglong *)(unaff_R13 + -0x88) ^ CONCAT62(unaff_000000ba,unaff_R15W),
                *(ulonglong *)(unaff_R13 + -0x60) ^ CONCAT62(unaff_000000ba,unaff_R15W));
  FUN_1665ed064();
  uVar3 = *(ulonglong *)(unaff_RDI + -0x40);
  uVar7 = ~uVar6 | *(ulonglong *)(unaff_RDI + -0x30);
  alStackX_10[0] = 0x14da5647e;
  uVar5 = FUN_15afb836c();
  lVar2 = alStackX_10[1] - uVar7;
  alStackX_10[1] = lVar2;
  plVar1 = (longlong *)(&stack0x00000028 + lVar2);
  lVar4 = *(longlong *)(uVar3 ^ uVar6);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar4;
  *plVar1 = -*plVar1;
  *(undefined8 *)((longlong)alStackX_10 + lVar2 + 0x10) = uVar5;
  *(undefined8 *)((longlong)alStackX_10 + lVar2 + 8) = uVar5;
  *(longlong *)((longlong)alStackX_10 + lVar2) = lVar4;
  *(code **)((longlong)alStackX_10 + lVar2 + 0x10) = FUN_166273988;
  return *(undefined8 *)((longlong)alStackX_10 + lVar2 + 8);
}



// FUNCTION 14da56354 FUN_14da56354 body=399 status=ok
// SIG undefined FUN_14da56354(void)

undefined8 FUN_14da56354(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  longlong alStackX_8 [4];
  
  FUN_1665ed064(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  uVar3 = *(ulonglong *)(unaff_RDI + -0x40);
  uVar6 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x30);
  alStackX_8[0] = 0x14da5647e;
  uVar5 = FUN_15afb836c();
  lVar2 = alStackX_8[1] - uVar6;
  alStackX_8[1] = lVar2;
  plVar1 = (longlong *)((longlong)alStackX_8 + lVar2 + 0x18);
  lVar4 = *(longlong *)(uVar3 ^ param_1);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar4;
  *plVar1 = -*plVar1;
  *(undefined8 *)((longlong)alStackX_8 + lVar2 + 0x10) = uVar5;
  *(undefined8 *)((longlong)alStackX_8 + lVar2 + 8) = uVar5;
  *(longlong *)((longlong)alStackX_8 + lVar2) = lVar4;
  *(code **)((longlong)alStackX_8 + lVar2 + 0x10) = FUN_166273988;
  return *(undefined8 *)((longlong)alStackX_8 + lVar2 + 8);
}



// FUNCTION 14da56822 FUN_14da56822 body=326 status=ok
// SIG undefined FUN_14da56822(void)

/* WARNING: Removing unreachable block (ram,0x000161b11e6f) */
/* WARNING: Removing unreachable block (ram,0x000161b11e7a) */
/* WARNING: Removing unreachable block (ram,0x000161b11ef4) */
/* WARNING: Removing unreachable block (ram,0x000161b11ef9) */
/* WARNING: Removing unreachable block (ram,0x000161b11eff) */
/* WARNING: Removing unreachable block (ram,0x000161bcf82e) */
/* WARNING: Removing unreachable block (ram,0x000161b11e75) */
/* WARNING: Removing unreachable block (ram,0x000161b11dcf) */
/* WARNING: Removing unreachable block (ram,0x000161b11dd5) */
/* WARNING: Removing unreachable block (ram,0x000161b11e6a) */
/* WARNING: Removing unreachable block (ram,0x000165022c47) */
/* WARNING: Removing unreachable block (ram,0x00015b4a002a) */
/* WARNING: Removing unreachable block (ram,0x00015b4a00b0) */
/* WARNING: Removing unreachable block (ram,0x00014da13688) */
/* WARNING: Removing unreachable block (ram,0x00015b4a00b6) */
/* WARNING: Removing unreachable block (ram,0x00015b4a0134) */
/* WARNING: Removing unreachable block (ram,0x00015b4a013a) */
/* WARNING: Removing unreachable block (ram,0x00015b4a0154) */
/* WARNING: Removing unreachable block (ram,0x0001572f504e) */
/* WARNING: Removing unreachable block (ram,0x00016635d268) */
/* WARNING: Removing unreachable block (ram,0x00014da568d5) */

undefined8 FUN_14da56822(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + -0x68) + param_1 < 0) {
    uVar1 = FUN_161b11d3f();
    return uVar1;
  }
  uVar1 = FUN_15b4a002a();
  return uVar1;
}



// FUNCTION 14da56a0b thunk_FUN_1566805f3 body=5 status=ok
// SIG undefined thunk_FUN_1566805f3(void)

void thunk_FUN_1566805f3(void)

{
  FUN_1566805f3();
  return;
}



// FUNCTION 14da56a10 FUN_14da56a10 body=98 status=ok
// SIG undefined FUN_14da56a10(void)

void FUN_14da56a10(void)

{
  longlong unaff_retaddr;
  
  if (-1 < unaff_retaddr) {
    FUN_16270f83c();
    return;
  }
  FUN_165cab7d7(FUN_165cab7d7);
  return;
}



// FUNCTION 14da56a74 FUN_14da56a74 body=325 status=ok
// SIG undefined FUN_14da56a74(void)

/* WARNING: Removing unreachable block (ram,0x00014da56bb0) */
/* WARNING: Removing unreachable block (ram,0x00014da56bbc) */
/* WARNING: Removing unreachable block (ram,0x00014da56b13) */
/* WARNING: Removing unreachable block (ram,0x00014da56b65) */
/* WARNING: Removing unreachable block (ram,0x00014da56b60) */

undefined8
FUN_14da56a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_R14;
  int unaff_retaddr;
  
  if (unaff_retaddr == -0x31837383) {
    param_4 = unaff_R14;
  }
  uVar1 = FUN_15b9b9cb2(param_1,FUN_15b9b9cb2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14da56bbc FUN_14da56bbc body=18 status=ok
// SIG undefined FUN_14da56bbc(void)

void FUN_14da56bbc(void)

{
  return;
}



// FUNCTION 14da56cff FUN_14da56cff body=106 status=ok
// SIG undefined FUN_14da56cff(void)

/* WARNING: Removing unreachable block (ram,0x00014da56d22) */

void FUN_14da56cff(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_RBP;
  
  unaff_RBP[0x36] = *unaff_RBP;
  FUN_165a4e042(param_1,param_2);
  return;
}



// FUNCTION 14da56d6a FUN_14da56d6a body=133 status=ok
// SIG undefined FUN_14da56d6a(void)

void FUN_14da56d6a(void)

{
  longlong unaff_R13;
  
  (*(code *)0x162bfbcb3)(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14da56df0 FUN_14da56df0 body=149 status=ok
// SIG undefined FUN_14da56df0(void)

/* WARNING: Removing unreachable block (ram,0x00014da56e75) */

void FUN_14da56df0(void)

{
  (*(code *)&LAB_15b095ef1)();
  return;
}



// FUNCTION 14da56f1f FUN_14da56f1f body=180 status=ok
// SIG undefined FUN_14da56f1f(void)

/* WARNING: Removing unreachable block (ram,0x00014da56fce) */
/* WARNING: Removing unreachable block (ram,0x00014da56fd4) */
/* WARNING: Removing unreachable block (ram,0x00016490ed14) */

void FUN_14da56f1f(void)

{
  FUN_16490ed14();
  return;
}



// FUNCTION 14da56fd4 FUN_14da56fd4 body=168 status=ok
// SIG undefined FUN_14da56fd4(void)

void FUN_14da56fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165552352(param_1,param_2,FUN_165552352,unaff_retaddr);
  return;
}



// FUNCTION 14da574f6 FUN_14da574f6 body=109 status=ok
// SIG undefined FUN_14da574f6(void)

void FUN_14da574f6(void)

{
  return;
}



// FUNCTION 14da57784 FUN_14da57784 body=744 status=ok
// SIG undefined FUN_14da57784(void)

/* WARNING: Removing unreachable block (ram,0x0001567312a3) */
/* WARNING: Removing unreachable block (ram,0x0001567312a9) */
/* WARNING: Removing unreachable block (ram,0x00014da579d3) */
/* WARNING: Removing unreachable block (ram,0x00014da579d9) */
/* WARNING: Removing unreachable block (ram,0x00014da579de) */
/* WARNING: Removing unreachable block (ram,0x00014da57828) */
/* WARNING: Removing unreachable block (ram,0x00014da5782e) */
/* WARNING: Removing unreachable block (ram,0x00014da578bb) */
/* WARNING: Removing unreachable block (ram,0x00015673121a) */
/* WARNING: Removing unreachable block (ram,0x000156731254) */
/* WARNING: Removing unreachable block (ram,0x000156731258) */
/* WARNING: Removing unreachable block (ram,0x00015673129e) */
/* WARNING: Removing unreachable block (ram,0x00014da578c1) */
/* WARNING: Removing unreachable block (ram,0x00014da57947) */
/* WARNING: Removing unreachable block (ram,0x00016219d04f) */
/* WARNING: Removing unreachable block (ram,0x000161c818e5) */
/* WARNING: Removing unreachable block (ram,0x00014da5794d) */
/* WARNING: Removing unreachable block (ram,0x00014da579ce) */
/* WARNING: Removing unreachable block (ram,0x00016219d0fc) */
/* WARNING: Removing unreachable block (ram,0x00016219d107) */
/* WARNING: Removing unreachable block (ram,0x00016219d102) */
/* WARNING: Removing unreachable block (ram,0x00014e127684) */
/* WARNING: Removing unreachable block (ram,0x000164b1c96d) */

undefined8 FUN_14da57784(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = FUN_165495124(param_1,~unaff_RBX & *(ulonglong *)(param_1 + -0x60) | unaff_RBX,param_3,
                        param_4 + param_1);
  return uVar1;
}



// FUNCTION 14da57b13 FUN_14da57b13 body=305 status=ok
// SIG undefined FUN_14da57b13(void)

void FUN_14da57b13(void)

{
  FUN_165b1f3d2();
  return;
}



// FUNCTION 14da57bb0 FUN_14da57bb0 body=151 status=ok
// SIG undefined FUN_14da57bb0(void)

void FUN_14da57bb0(void)

{
  FUN_161848d6e();
  return;
}



// FUNCTION 14da57cac FUN_14da57cac body=428 status=ok
// SIG undefined FUN_14da57cac(void)

/* WARNING: Removing unreachable block (ram,0x00014da57de1) */
/* WARNING: Removing unreachable block (ram,0x0001660372e9) */
/* WARNING: Removing unreachable block (ram,0x00014da57d31) */

void FUN_14da57cac(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000018;
  
  uVar1 = in_stack_00000010 + unaff_RBP + (in_stack_00000010 & unaff_RBP) * -2;
  FUN_166566a80(param_1,param_2,param_3,unaff_retaddr,~(uVar1 & param_1) & (uVar1 | param_1),
                (in_stack_00000018 & param_1) << 1);
  return;
}



// FUNCTION 14da57e5e FUN_14da57e5e body=468 status=ok
// SIG undefined FUN_14da57e5e(void)

/* WARNING: Removing unreachable block (ram,0x00014da57f89) */
/* WARNING: Removing unreachable block (ram,0x00014da57f94) */
/* WARNING: Removing unreachable block (ram,0x00014d83ac2e) */
/* WARNING: Removing unreachable block (ram,0x00014d83ac34) */
/* WARNING: Removing unreachable block (ram,0x00016600c567) */
/* WARNING: Removing unreachable block (ram,0x00014da57f8f) */

void FUN_14da57e5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 local_res10;
  undefined8 uStackX_20;
  
  FUN_1624b6511();
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = ~(uStackX_20 & local_res10) & (uStackX_20 | local_res10);
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(ulonglong *)(uVar1 - 0x20) = uVar2 ^ local_res10;
  FUN_16600c567();
  return;
}



// FUNCTION 14da580ea FUN_14da580ea body=36 status=ok
// SIG undefined FUN_14da580ea(void)

void FUN_14da580ea(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 unaff_retaddr;
  longlong alStackX_8 [4];
  
  alStackX_8[1] = ~(~alStackX_8[1] | ~param_1) << 1;
  FUN_14d930ae2(FUN_14d930ae2,param_2,
                *(longlong *)
                 ((longlong)alStackX_8 +
                 ~(0xffffffffffffffff - (param_4 & 0xffffffffcb720dfd) &
                  (param_4 | 0xffffffffcb720dfd))) + param_1,unaff_retaddr);
  (*(code *)&LAB_161152ed5)();
  return;
}



// FUNCTION 14da58273 FUN_14da58273 body=150 status=ok
// SIG undefined FUN_14da58273(void)

void FUN_14da58273(undefined8 param_1)

{
  FUN_1651afd54(param_1);
  return;
}



// FUNCTION 14da584ea FUN_14da584ea body=192 status=ok
// SIG undefined FUN_14da584ea(void)

/* WARNING: Removing unreachable block (ram,0x0001664fb42d) */
/* WARNING: Removing unreachable block (ram,0x0001664fb433) */
/* WARNING: Removing unreachable block (ram,0x0001664fb4d2) */
/* WARNING: Removing unreachable block (ram,0x0001664fb4d8) */
/* WARNING: Removing unreachable block (ram,0x000166870dc5) */
/* WARNING: Removing unreachable block (ram,0x0001565cccad) */
/* WARNING: Removing unreachable block (ram,0x000156b773e0) */

undefined8 FUN_14da584ea(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  bool in_ZF;
  ushort *unaff_retaddr;
  
  if (in_ZF) {
    uVar1 = FUN_166a62797(param_1,&DAT_14d7b03ed);
    return uVar1;
  }
  if (param_2 == 0x3306a) {
    return in_RAX;
  }
  if (param_2 == 0x33103) {
    return in_RAX;
  }
  if (param_2 != 0x33104) {
    uVar1 = FUN_1666fa8b9();
    return uVar1;
  }
  FUN_1666fa83f(param_1,&DAT_14d7ab8ce);
  *unaff_retaddr =
       (-0x101 - ~((0x100 - (~*unaff_retaddr | 0x100)) + ~*unaff_retaddr)) + *unaff_retaddr;
  FUN_166746035();
  uVar1 = FUN_1565cccad();
  return uVar1;
}



// FUNCTION 14da586bf FUN_14da586bf body=429 status=ok
// SIG undefined FUN_14da586bf(void)

/* WARNING: Removing unreachable block (ram,0x00014da58767) */
/* WARNING: Removing unreachable block (ram,0x00014da5876d) */

undefined8 FUN_14da586bf(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar2 = FUN_161867e63((char)param_1,
                        *(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,FUN_161867e63,
                        ~(uVar1 & param_1) & (~(uVar1 & param_1) + param_1) - ~uVar1);
  return uVar2;
}



// FUNCTION 14da58b87 FUN_14da58b87 body=612 status=ok
// SIG undefined FUN_14da58b87(void)

/* WARNING: Instruction at (ram,0x000165f13a22) overlaps instruction at (ram,0x000165f13a21)
    */
/* WARNING: Removing unreachable block (ram,0x00014da58c0b) */
/* WARNING: Removing unreachable block (ram,0x00014da58c98) */
/* WARNING: Removing unreachable block (ram,0x00014da58c9d) */
/* WARNING: Removing unreachable block (ram,0x000165f13953) */
/* WARNING: Removing unreachable block (ram,0x000165f139f9) */
/* WARNING: Removing unreachable block (ram,0x000165f13a22) */
/* WARNING: Removing unreachable block (ram,0x000165f13a21) */
/* WARNING: Removing unreachable block (ram,0x000165f13a2c) */
/* WARNING: Removing unreachable block (ram,0x000165f13a6a) */
/* WARNING: Removing unreachable block (ram,0x000165f13a70) */
/* WARNING: Removing unreachable block (ram,0x0001647f4248) */
/* WARNING: Removing unreachable block (ram,0x00014da58ca3) */
/* WARNING: Removing unreachable block (ram,0x00014da58d33) */
/* WARNING: Removing unreachable block (ram,0x00014da58d3e) */
/* WARNING: Removing unreachable block (ram,0x00014da58d39) */
/* WARNING: Removing unreachable block (ram,0x00014d9b5351) */
/* WARNING: Removing unreachable block (ram,0x00014d9b5368) */
/* WARNING: Removing unreachable block (ram,0x00014d9b536c) */
/* WARNING: Removing unreachable block (ram,0x00014d9b53f6) */
/* WARNING: Removing unreachable block (ram,0x00014d9b53fb) */
/* WARNING: Removing unreachable block (ram,0x00014d9b5401) */
/* WARNING: Removing unreachable block (ram,0x00014d9b5406) */
/* WARNING: Removing unreachable block (ram,0x00014d9b541a) */
/* WARNING: Removing unreachable block (ram,0x00014d9b547f) */
/* WARNING: Removing unreachable block (ram,0x00014d9b5485) */
/* WARNING: Removing unreachable block (ram,0x00014d9b548a) */
/* WARNING: Removing unreachable block (ram,0x00014dc09c85) */

void FUN_14da58b87(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  longlong lStackX_10;
  
  *(undefined8 *)(lStackX_10 + -8) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_RBP;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_RBP;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_RSI;
  *(undefined8 *)(lStackX_10 + -0x20) = param_2;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  *(undefined8 *)(lStackX_10 + -0x18) = in_R11;
  *(undefined1 **)(lStackX_10 + -8) = &LAB_166663cfc;
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14da58e91 thunk_FUN_14da58e97 body=5 status=ok
// SIG undefined thunk_FUN_14da58e97(void)

/* WARNING: Removing unreachable block (ram,0x0001651de3e1) */
/* WARNING: Removing unreachable block (ram,0x000165fefedd) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2ad) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2b9) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2be) */
/* WARNING: Removing unreachable block (ram,0x0001651de4f1) */
/* WARNING: Removing unreachable block (ram,0x0001651de574) */
/* WARNING: Removing unreachable block (ram,0x0001651de578) */
/* WARNING: Removing unreachable block (ram,0x00014da58f19) */
/* WARNING: Removing unreachable block (ram,0x000165fefecf) */
/* WARNING: Removing unreachable block (ram,0x000165feff6a) */
/* WARNING: Removing unreachable block (ram,0x000165feff6d) */
/* WARNING: Removing unreachable block (ram,0x000162080326) */
/* WARNING: Removing unreachable block (ram,0x000165feff7d) */
/* WARNING: Removing unreachable block (ram,0x00014da58f1f) */
/* WARNING: Removing unreachable block (ram,0x00014da58f92) */
/* WARNING: Removing unreachable block (ram,0x00014da58f8d) */
/* WARNING: Removing unreachable block (ram,0x00014da58f96) */

void thunk_FUN_14da58e97(void)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R13;
  bool bVar5;
  ulonglong unaff_retaddr;
  
  if (-1 < (longlong)&stack0x00000000) {
    FUN_1651de3c1();
    return;
  }
  lVar4 = CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_R13 + -0x60) >> 0x10),0x7a7c);
  pcVar2 = FUN_162e347f5;
  FUN_162e347f5(FUN_162e347f5,*(undefined8 *)(unaff_R13 + -0x78));
  uVar1 = *(ulonglong *)(lVar4 + -0x80);
  uVar3 = ~(~(ulonglong)pcVar2 | uVar1) | ~(~uVar1 | (ulonglong)pcVar2);
  uVar1 = *(ulonglong *)(lVar4 + -0x68);
  bVar5 = pcVar2 + uVar1 + ~(uVar1 | (ulonglong)pcVar2) + 1 == (code *)0x0;
  FUN_15b58c30d();
  if (!bVar5) {
    if (uVar3 == 0x2aed8) {
      FUN_16131bb16();
      return;
    }
    FUN_162e9dec8();
    FUN_160c5348c(uVar3 - (longlong)pcVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_retaddr);
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14da58e97 FUN_14da58e97 body=304 status=ok
// SIG undefined FUN_14da58e97(void)

/* WARNING: Removing unreachable block (ram,0x0001651de3e1) */
/* WARNING: Removing unreachable block (ram,0x000165fefedd) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2ad) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2b9) */
/* WARNING: Removing unreachable block (ram,0x000156d1a2be) */
/* WARNING: Removing unreachable block (ram,0x0001651de4f1) */
/* WARNING: Removing unreachable block (ram,0x0001651de574) */
/* WARNING: Removing unreachable block (ram,0x0001651de578) */
/* WARNING: Removing unreachable block (ram,0x00014da58f19) */
/* WARNING: Removing unreachable block (ram,0x000165fefecf) */
/* WARNING: Removing unreachable block (ram,0x000165feff6a) */
/* WARNING: Removing unreachable block (ram,0x000165feff6d) */
/* WARNING: Removing unreachable block (ram,0x000162080326) */
/* WARNING: Removing unreachable block (ram,0x000165feff7d) */
/* WARNING: Removing unreachable block (ram,0x00014da58f1f) */
/* WARNING: Removing unreachable block (ram,0x00014da58f92) */
/* WARNING: Removing unreachable block (ram,0x00014da58f8d) */
/* WARNING: Removing unreachable block (ram,0x00014da58f96) */

void FUN_14da58e97(void)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_R13;
  bool bVar5;
  ulonglong unaff_retaddr;
  
  if (-1 < (longlong)&stack0x00000000) {
    FUN_1651de3c1();
    return;
  }
  lVar4 = CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_R13 + -0x60) >> 0x10),0x7a7c);
  pcVar2 = FUN_162e347f5;
  FUN_162e347f5(FUN_162e347f5,*(undefined8 *)(unaff_R13 + -0x78));
  uVar1 = *(ulonglong *)(lVar4 + -0x80);
  uVar3 = ~(~(ulonglong)pcVar2 | uVar1) | ~(~uVar1 | (ulonglong)pcVar2);
  uVar1 = *(ulonglong *)(lVar4 + -0x68);
  bVar5 = pcVar2 + uVar1 + ~(uVar1 | (ulonglong)pcVar2) + 1 == (code *)0x0;
  FUN_15b58c30d();
  if (!bVar5) {
    if (uVar3 == 0x2aed8) {
      FUN_16131bb16();
      return;
    }
    FUN_162e9dec8();
    FUN_160c5348c(uVar3 - (longlong)pcVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_retaddr);
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14da591a9 FUN_14da591a9 body=169 status=ok
// SIG undefined FUN_14da591a9(void)

void FUN_14da591a9(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + (param_1 - param_2));
  *(undefined4 *)puVar1 = 0xe73dd6a7;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  uVar2 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_1571dd2c2(~uVar2 & 0x18c2297f,FUN_1571dd2c2);
  return;
}



// FUNCTION 14da59352 FUN_14da59352 body=281 status=ok
// SIG undefined FUN_14da59352(void)

/* WARNING: Removing unreachable block (ram,0x00014da59464) */
/* WARNING: Removing unreachable block (ram,0x00014da5946f) */
/* WARNING: Removing unreachable block (ram,0x00014da593ff) */
/* WARNING: Removing unreachable block (ram,0x00014da5946a) */

undefined8 FUN_14da59352(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res10;
  
  pcVar5 = FUN_165e4fe0b;
  uVar3 = FUN_165e4fe0b();
  uVar2 = ~((~param_1 | local_res10) & (~local_res10 | param_1)) ^ unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = uVar3;
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x10) = param_3;
  *(undefined8 *)(uVar2 - 0x18) = param_3;
  uVar3 = *puVar1;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R12;
  *(code **)(uVar2 - 0x28) = pcVar5;
  *(undefined4 *)(uVar2 - 0x30) = 0x76de34b1;
  *(undefined4 *)(uVar2 - 0x2c) = 0;
  *(ulonglong *)(uVar2 + (-0x76de34c2 - (*(ulonglong *)(uVar2 - 0x30) ^ 0xffffffffffffffff))) =
       uVar3;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  *puVar1 = 0x5eb31daa;
  *puVar1 = *puVar1 ^ 0x5eb31daa;
  *puVar1 = (ulonglong)(&LAB_164c1e7c6 + *puVar1);
                    /* WARNING: Could not recover jumptable at 0x000164c1e7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(uVar2 - 0x10))();
  return uVar4;
}



// FUNCTION 14da5946f FUN_14da5946f body=159 status=ok
// SIG undefined FUN_14da5946f(void)

undefined8 FUN_14da5946f(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  undefined8 in_R11;
  
  *(undefined8 *)(&stack0x696d6ac7 + -(~unaff_RBX + 2)) = in_R11;
  return in_RAX;
}



// FUNCTION 14da59610 FUN_14da59610 body=602 status=ok
// SIG undefined FUN_14da59610(void)

/* WARNING: Instruction at (ram,0x0001617fed31) overlaps instruction at (ram,0x0001617fed2e)
    */
/* WARNING: Removing unreachable block (ram,0x00014da5973c) */
/* WARNING: Removing unreachable block (ram,0x00014da59742) */
/* WARNING: Removing unreachable block (ram,0x00014da597cc) */
/* WARNING: Removing unreachable block (ram,0x00014da597d1) */
/* WARNING: Removing unreachable block (ram,0x00014da597d7) */
/* WARNING: Removing unreachable block (ram,0x0001617fecb3) */
/* WARNING: Removing unreachable block (ram,0x0001617fed31) */
/* WARNING: Removing unreachable block (ram,0x0001617fed2e) */
/* WARNING: Removing unreachable block (ram,0x0001617fed3f) */
/* WARNING: Removing unreachable block (ram,0x00015b042830) */
/* WARNING: Removing unreachable block (ram,0x0001617fed45) */
/* WARNING: Removing unreachable block (ram,0x0001617fedce) */
/* WARNING: Removing unreachable block (ram,0x00014da596b3) */
/* WARNING: Removing unreachable block (ram,0x00014da596c0) */
/* WARNING: Removing unreachable block (ram,0x000165ef6b3d) */
/* WARNING: Removing unreachable block (ram,0x0001617fedd3) */
/* WARNING: Removing unreachable block (ram,0x0001617feddf) */
/* WARNING: Removing unreachable block (ram,0x0001617fee39) */
/* WARNING: Removing unreachable block (ram,0x0001566d4095) */

undefined8 FUN_14da59610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong lStackX_10;
  
  uVar4 = ~((in_RAX ^ 0xffffffffffffffff | unaff_RBX) & (0xffffffffffffffff - unaff_RBX | in_RAX));
  uVar1 = *(ulonglong *)(unaff_R12 + -0x48);
  uVar3 = FUN_16122f360((-in_RAX - *(ulonglong *)(unaff_R12 + -0x58)) +
                        (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX) * 2,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  *(ulonglong *)(lStackX_10 + -8) = uVar1 + in_RAX + (uVar1 & in_RAX) * -2;
  *(undefined8 *)(lStackX_10 + -0x10) = param_3;
  *(undefined8 *)(lStackX_10 + -0x18) = param_3;
  *(undefined8 *)(lStackX_10 + -0x20) = in_R10;
  *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
  uVar2 = *(undefined8 *)(lStackX_10 + -0x18);
  *(undefined1 **)(lStackX_10 + -0x18) = &LAB_161bd0d0b;
  *(undefined8 *)(lStackX_10 + -0x20) = uVar2;
  *(undefined8 *)(lStackX_10 + -8) = 0;
  *(longlong *)(lStackX_10 + -8) =
       *(longlong *)(lStackX_10 + -8) + *(longlong *)(lStackX_10 + -0x18);
  *(ulonglong *)(lStackX_10 + -0x18) = uVar4;
  *(ulonglong *)(lStackX_10 + -0x20) = uVar4;
  *(ulonglong *)(lStackX_10 + -0x28) = uVar4;
  *(undefined1 **)(lStackX_10 + -0x18) = &LAB_1663aba86;
  *(undefined1 **)(lStackX_10 + -0x20) = &LAB_161bd0cc7;
  return uVar3;
}



// FUNCTION 14da59c03 FUN_14da59c03 body=297 status=ok
// SIG undefined FUN_14da59c03(void)

undefined8
FUN_14da59c03(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_14dec05d1(0xfffffffffe4bd7fb,FUN_14dec05d1,param_3,param_4);
  return local_res8;
}



// FUNCTION 14da59d2d FUN_14da59d2d body=418 status=ok
// SIG undefined FUN_14da59d2d(void)

void FUN_14da59d2d(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  FUN_15b12ca3d(param_1,local_res10);
  FUN_14dd2db4b(*(undefined8 *)(unaff_R13 + -0x78),0x16f9c9b7,
                (param_5 ^ in_RAX) + unaff_R15 + (param_3 & unaff_R15) * -2);
  FUN_16554b7b2(0,FUN_16554b7b2);
  return;
}



// FUNCTION 14da59f69 FUN_14da59f69 body=131 status=ok
// SIG undefined FUN_14da59f69(void)

/* WARNING: Removing unreachable block (ram,0x000161d9c4de) */
/* WARNING: Removing unreachable block (ram,0x00014da5a095) */

undefined8 FUN_14da59f69(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_R11;
  undefined8 local_10;
  longlong local_8;
  
  uVar7 = ~param_4 & unaff_RBX;
  lVar2 = *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
  local_10 = FUN_14da59fed;
  local_8 = lVar2;
  uVar4 = FUN_166d943f2(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  uVar4 = ~(~(uVar4 & 0xfffffffffa9f3f4a) & (uVar4 | 0xfffffffffa9f3f4a));
  *(undefined8 *)((longlong)&local_10 + uVar4) = *(undefined8 *)(unaff_RDI + -0x70);
  uVar6 = ~(*(ulonglong *)((longlong)&local_10 + uVar4) & param_1) &
          (*(ulonglong *)((longlong)&local_10 + uVar4) | param_1);
  *(longlong *)((longlong)&local_10 + uVar4) = lVar2;
  *(undefined4 *)((longlong)&local_10 + uVar4) = 0x822b1604;
  *(int *)((longlong)&local_10 + uVar4) = *(int *)((longlong)&local_10 + uVar4) + 0x7dd4e9fc;
  *(undefined4 *)((longlong)&local_10 + uVar4 + 4) = 0;
  puVar1 = (undefined4 *)((longlong)&local_10 + uVar4 + 4);
  *puVar1 = *puVar1;
  if (*(longlong *)((longlong)&local_10 + uVar4) != *(longlong *)(unaff_RDI + -0x28)) {
    uVar5 = FUN_161d9c441();
    return uVar5;
  }
  *(undefined8 *)((longlong)&local_10 + uVar4) = *(undefined8 *)(unaff_RDI + -0x68);
  lVar2 = *(longlong *)((longlong)&local_10 + uVar4);
  *(ulonglong *)((longlong)&local_10 + uVar4) = param_1;
  lVar3 = *(longlong *)((longlong)&local_10 + uVar4);
  *(undefined8 *)((longlong)&local_10 + uVar4) = in_R11;
  *(ulonglong *)((longlong)&local_10 + uVar4) =
       (~param_1 | uVar7) & (~uVar7 | param_1) ^ 0xffffffffffffffff;
  if (lVar2 + lVar3 != 0) {
    uVar5 = FUN_15676040d(lVar3,lVar2,uVar6);
    return uVar5;
  }
  uVar5 = FUN_15676040d(lVar3,lVar2,uVar6);
  return uVar5;
}



// FUNCTION 14da59fed FUN_14da59fed body=162 status=ok
// SIG undefined FUN_14da59fed(void)

/* WARNING: Removing unreachable block (ram,0x000161d9c4de) */
/* WARNING: Removing unreachable block (ram,0x00014da5a095) */

undefined8 FUN_14da59fed(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined8 in_R11;
  undefined8 uStack_8;
  
  uVar5 = ~(~(in_RAX & 0xfffffffffa9f3f4a) & (in_RAX | 0xfffffffffa9f3f4a));
  *(ulonglong *)((longlong)&uStack_8 + uVar5) = *(ulonglong *)(unaff_RDI + -0x70);
  uVar6 = *(ulonglong *)((longlong)&uStack_8 + uVar5);
  uVar6 = ~(uVar6 & param_1) & (uVar6 | param_1);
  *(undefined8 *)((longlong)&uStack_8 + uVar5) = unaff_RSI;
  *(undefined4 *)((longlong)&uStack_8 + uVar5) = 0x822b1604;
  *(int *)((longlong)&uStack_8 + uVar5) = *(int *)((longlong)&uStack_8 + uVar5) + 0x7dd4e9fc;
  *(undefined4 *)((longlong)&uStack_8 + uVar5 + 4) = 0;
  puVar1 = (undefined4 *)((longlong)&uStack_8 + uVar5 + 4);
  *puVar1 = *puVar1;
  if (*(longlong *)((longlong)&uStack_8 + uVar5) != *(longlong *)(unaff_RDI + -0x28)) {
    uVar4 = FUN_161d9c441();
    return uVar4;
  }
  *(undefined8 *)((longlong)&uStack_8 + uVar5) = *(undefined8 *)(unaff_RDI + -0x68);
  lVar2 = *(longlong *)((longlong)&uStack_8 + uVar5);
  *(ulonglong *)((longlong)&uStack_8 + uVar5) = param_1;
  lVar3 = *(longlong *)((longlong)&uStack_8 + uVar5);
  *(undefined8 *)((longlong)&uStack_8 + uVar5) = in_R11;
  *(ulonglong *)((longlong)&uStack_8 + uVar5) =
       (~param_1 | param_4) & (~param_4 | param_1) ^ 0xffffffffffffffff;
  if (lVar2 + lVar3 != 0) {
    uVar4 = FUN_15676040d(lVar3,lVar2,uVar6);
    return uVar4;
  }
  uVar4 = FUN_15676040d(lVar3,lVar2,uVar6);
  return uVar4;
}



// FUNCTION 14da5a095 FUN_14da5a095 body=28 status=ok
// SIG undefined FUN_14da5a095(void)

void FUN_14da5a095(void)

{
  return;
}



// FUNCTION 14da5a161 FUN_14da5a161 body=140 status=ok
// SIG undefined FUN_14da5a161(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da5a161(undefined8 param_1)

{
  FUN_161353d66(param_1,FUN_161353d66,0x7a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da5a1ef FUN_14da5a1ef body=140 status=ok
// SIG undefined FUN_14da5a1ef(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da5a1ef(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da5a340 FUN_14da5a340 body=150 status=ok
// SIG undefined FUN_14da5a340(void)

void FUN_14da5a340(undefined8 param_1)

{
  FUN_14e045f12(param_1,0xffffffffffffffff);
  return;
}



// FUNCTION 14da5a512 FUN_14da5a512 body=297 status=ok
// SIG undefined FUN_14da5a512(void)

void FUN_14da5a512(undefined8 param_1,short param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  ulonglong local_res8 [2];
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  puVar1 = (ulonglong *)((longlong)local_res8 + (unaff_R15 - unaff_R13));
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | unaff_R14;
  *puVar1 = ~((~unaff_R14 | uVar2) & *puVar1);
  local_res8[1] = param_3;
  FUN_14dc0c59a(param_1,param_2,~unaff_R14 | param_5,param_4,
                in_stack_00000020 + unaff_R14 + (in_stack_00000020 & unaff_R14) * -2);
  FUN_156e70d40(*(ulonglong *)(local_res8[0] - 0x88) | (ulonglong)local_res18,param_2 + -1,
                *(ulonglong *)(local_res8[0] - 0x88),
                0xffffffffffffffff - (*(ulonglong *)(local_res8[0] - 0x60) & (ulonglong)local_res18)
                & (*(ulonglong *)(local_res8[0] - 0x60) | (ulonglong)local_res18));
  return;
}



// FUNCTION 14da5a780 FUN_14da5a780 body=143 status=ok
// SIG undefined FUN_14da5a780(void)

/* WARNING: Removing unreachable block (ram,0x00014da5a976) */
/* WARNING: Removing unreachable block (ram,0x00014da5a97c) */
/* WARNING: Removing unreachable block (ram,0x00014da5a9ec) */
/* WARNING: Removing unreachable block (ram,0x00014da5a9f2) */
/* WARNING: Removing unreachable block (ram,0x00014dd0293a) */
/* WARNING: Removing unreachable block (ram,0x00014da5a8ad) */
/* WARNING: Removing unreachable block (ram,0x00014da5a8b3) */
/* WARNING: Removing unreachable block (ram,0x00014da5a965) */
/* WARNING: Removing unreachable block (ram,0x000162086455) */

void FUN_14da5a780(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  lVar3 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar1 = ~((~unaff_R15 + uVar1) - (~unaff_R15 & uVar1) & (~uVar1 | unaff_R15));
  uVar2 = FUN_156cc1fb7();
  *(ulonglong *)(local_res10 + -8) = uVar1;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(longlong *)(local_res10 + -0x20) = lVar3;
  *(undefined8 *)(local_res10 + -0x28) = uVar2;
  *(undefined4 *)(local_res10 + -0x28) = 0xb37393aa;
  *(uint *)(local_res10 + -0x28) = ~*(uint *)(local_res10 + -0x28);
  *(int *)(local_res10 + -0x28) = 0x1df89e37 - *(int *)(local_res10 + -0x28);
  *(undefined4 *)(local_res10 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res10 + -0x10) =
       *(undefined8 *)(local_res10 + *(longlong *)(local_res10 + -0x28) + 0x2e93ce16);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x161bfa24b;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x10) = 0x14d7beb83;
  return;
}



// FUNCTION 14da5a810 FUN_14da5a810 body=677 status=ok
// SIG undefined FUN_14da5a810(void)

/* WARNING: Removing unreachable block (ram,0x00014da5a976) */
/* WARNING: Removing unreachable block (ram,0x00014da5a97c) */
/* WARNING: Removing unreachable block (ram,0x00014da5a9ec) */
/* WARNING: Removing unreachable block (ram,0x00014da5a9f2) */
/* WARNING: Removing unreachable block (ram,0x00014dd0293a) */
/* WARNING: Removing unreachable block (ram,0x00014da5a8ad) */
/* WARNING: Removing unreachable block (ram,0x00014da5a8b3) */
/* WARNING: Removing unreachable block (ram,0x00014da5a965) */
/* WARNING: Removing unreachable block (ram,0x000162086455) */

void FUN_14da5a810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0xb37393aa;
  *(uint *)(local_res18 + -0x28) = ~*(uint *)(local_res18 + -0x28);
  *(int *)(local_res18 + -0x28) = 0x1df89e37 - *(int *)(local_res18 + -0x28);
  *(undefined4 *)(local_res18 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res18 + -0x10) =
       *(undefined8 *)(local_res18 + *(longlong *)(local_res18 + -0x28) + 0x2e93ce16);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x161bfa24b;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7beb83;
  return;
}



// FUNCTION 14da5a9f2 FUN_14da5a9f2 body=139 status=ok
// SIG undefined FUN_14da5a9f2(void)

void FUN_14da5a9f2(void)

{
  undefined8 unaff_RBX;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = local_res8;
  *(undefined8 *)(local_res20 + -0x18) = local_res8;
  *(undefined **)(local_res20 + -0x20) = &DAT_14da5aa7f;
  return;
}



// FUNCTION 14da5ab0f FUN_14da5ab0f body=146 status=ok
// SIG undefined FUN_14da5ab0f(void)

undefined8 FUN_14da5ab0f(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14da5acd7 FUN_14da5acd7 body=135 status=ok
// SIG undefined FUN_14da5acd7(void)

void FUN_14da5acd7(void)

{
  FUN_161d98fe0(FUN_161d98fe0,0xffffffffffffff98);
  return;
}



// FUNCTION 14da5ae27 FUN_14da5ae27 body=52 status=ok
// SIG undefined FUN_14da5ae27(void)

void FUN_14da5ae27(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014da5ae55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da5b7b1 FUN_14da5b7b1 body=44 status=ok
// SIG undefined FUN_14da5b7b1(void)

void FUN_14da5b7b1(void)

{
  return;
}



// FUNCTION 14da5b859 FUN_14da5b859 body=91 status=ok
// SIG undefined FUN_14da5b859(void)

void FUN_14da5b859(undefined8 param_1)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_166aea176(param_1,*(longlong *)(unaff_R13 + -0x38) + unaff_R15);
  return;
}



// FUNCTION 14da5b8b6 FUN_14da5b8b6 body=13 status=ok
// SIG undefined FUN_14da5b8b6(void)

void FUN_14da5b8b6(void)

{
  return;
}



// FUNCTION 14da5b9ed FUN_14da5b9ed body=177 status=ok
// SIG undefined FUN_14da5b9ed(void)

void FUN_14da5b9ed(undefined8 param_1)

{
  FUN_166088fc4(param_1);
  return;
}



// FUNCTION 14da5bb55 FUN_14da5bb55 body=130 status=ok
// SIG undefined FUN_14da5bb55(void)

void FUN_14da5bb55(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_R10;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong local_res18 [2];
  
  local_res18[0] = ~(local_res18[0] & (in_R10 ^ 0xffffffffffffffff));
  FUN_165704459(unaff_retaddr,param_2,local_res18,uStackX_8);
  FUN_14da5bbd9();
  return;
}



// FUNCTION 14da5bbd9 FUN_14da5bbd9 body=71 status=ok
// SIG undefined FUN_14da5bbd9(void)

void FUN_14da5bbd9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined2 *unaff_RDI;
  undefined2 unaff_R12W;
  ulonglong uStackX_20;
  
  *unaff_RDI = unaff_R12W;
  *(undefined8 *)(param_5 + -8) = param_3;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = in_RAX;
  *(undefined4 *)(param_5 + -0x18) = 0xd0688ce;
  *(undefined4 *)(param_5 + -0x14) = 0;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_20 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_20 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_20 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_20 & 4) != 0) * 4 | (ulonglong)((uStackX_20 & 1) != 0) |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(undefined1 **)(param_5 + -0x18) = &LAB_14da5bc21;
  return;
}



// FUNCTION 14da5bc6e FUN_14da5bc6e body=178 status=ok
// SIG undefined FUN_14da5bc6e(void)

longlong FUN_14da5bc6e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15;
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15);
  return (uVar1 - (uVar2 | uVar1)) + uVar2;
}



// FUNCTION 14da5bd27 FUN_14da5bd27 body=127 status=ok
// SIG undefined FUN_14da5bd27(void)

void FUN_14da5bd27(void)

{
  ushort in_AX;
  undefined8 uVar1;
  short *unaff_R14;
  ushort unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *unaff_R14 = (*unaff_R14 + -1) -
               ~(0xfeff - ((~(in_AX & (unaff_retaddr ^ 0xc844)) + (unaff_retaddr ^ 0xc844)) - ~in_AX
                          ));
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)uStackX_18 >> 8),DAT_14d7c07dc);
  UNLOCK();
  DAT_14d7c07dc = (char)uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -8) = uVar1;
  *(undefined8 *)(in_stack_00000028 + -0x10) = uVar1;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uStackX_10;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_15b3823b8;
  FUN_15b3823b4();
  return;
}



// FUNCTION 14da5bda7 FUN_14da5bda7 body=143 status=ok
// SIG undefined FUN_14da5bda7(void)

void FUN_14da5bda7(void)

{
  FUN_166940f8b();
  return;
}



// FUNCTION 14da5bebd FUN_14da5bebd body=62 status=ok
// SIG undefined FUN_14da5bebd(void)

void FUN_14da5bebd(void)

{
  return;
}



// FUNCTION 14da5bf85 FUN_14da5bf85 body=245 status=ok
// SIG undefined FUN_14da5bf85(void)

void FUN_14da5bf85(void)

{
  FUN_166170598();
  return;
}



// FUNCTION 14da5c08c FUN_14da5c08c body=136 status=ok
// SIG undefined FUN_14da5c08c(void)

/* WARNING: Removing unreachable block (ram,0x00014da5c115) */

void FUN_14da5c08c(ulonglong param_1,longlong param_2)

{
  longlong unaff_RBP;
  
  FUN_16168e87b(param_1,(param_2 - unaff_RBP) + param_1 + (param_2 - unaff_RBP & param_1) * -2,
                FUN_16168e87b);
  return;
}



// FUNCTION 14da5c115 FUN_14da5c115 body=94 status=ok
// SIG undefined FUN_14da5c115(void)

void FUN_14da5c115(void)

{
  uint in_EAX;
  uint in_stack_00000008;
  
  FUN_1572c1d32(~((~(~in_EAX & in_stack_00000008) + in_stack_00000008) - (~in_EAX ^ 0xffffffff) &
                 (~in_stack_00000008 + in_EAX) - (~in_stack_00000008 & in_EAX)));
  return;
}



// FUNCTION 14da5c440 FUN_14da5c440 body=272 status=ok
// SIG undefined FUN_14da5c440(void)

/* WARNING: Removing unreachable block (ram,0x00014da5c546) */
/* WARNING: Removing unreachable block (ram,0x00014da5c551) */
/* WARNING: Removing unreachable block (ram,0x00014da5c5cd) */
/* WARNING: Removing unreachable block (ram,0x00014da5c5d2) */
/* WARNING: Removing unreachable block (ram,0x00014da5c5d8) */
/* WARNING: Removing unreachable block (ram,0x00016271b032) */
/* WARNING: Removing unreachable block (ram,0x00015af319cb) */
/* WARNING: Removing unreachable block (ram,0x00015af319d6) */
/* WARNING: Removing unreachable block (ram,0x00015af319d1) */
/* WARNING: Removing unreachable block (ram,0x00014da5c54c) */

void FUN_14da5c440(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 in_RAX;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  ushort *unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar12;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_RDI = *unaff_RDI ^ 0xffff;
  *unaff_RDI = *unaff_RDI | 0x100;
  *unaff_RDI = ~*unaff_RDI;
  *(undefined8 *)(local_res20 + -8) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  bVar12 = false;
  *(undefined1 **)(local_res20 + -8) = &LAB_161ae7a2c;
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = 0x14da5c4c7;
  uVar10 = FUN_161ae79f5();
  uVar3 = *(ulonglong *)(local_res20 + -0x18);
  if (bVar12) {
    unaff_R14 = in_R11;
  }
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  lVar5 = *(longlong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) = param_1;
  puVar1 = (ulonglong *)(local_res20 + -0x20);
  *puVar1 = param_1;
  *(undefined1 *)puVar1 = 0xee;
  uVar6 = *puVar1;
  uVar7 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = uVar4;
  *(undefined8 *)(local_res20 + -0x20) = uVar7;
  uVar8 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x18) = uVar10;
  *(undefined8 *)(local_res20 + -0x20) = unaff_retaddr;
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (~uVar8 | *(ulonglong *)(lVar5 + -0x48)) & (~*(ulonglong *)(lVar5 + -0x48) | uVar8) ^
       0xffffffffffffffff;
  *(undefined8 *)(local_res20 + -0x20) = uVar4;
  *(undefined4 *)(local_res20 + -0x20) = 0x9315ffcb;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  uVar11 = *(ulonglong *)(lVar5 + *(longlong *)(local_res20 + -0x20) + 0x6ce9ffad) ^ uVar8;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  *(ulonglong *)(local_res20 + -0x28) = uVar8;
  uVar10 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(lVar5 + -0x90);
  uVar7 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x30) = *(undefined8 *)(lVar5 + -8);
  uVar9 = *(undefined8 *)(local_res20 + -0x30);
  *(undefined8 *)(local_res20 + -0x30) = uVar4;
  *(undefined8 *)(local_res20 + -0x38) = uVar2;
  uVar2 = *(undefined8 *)(local_res20 + -0x38);
  *(undefined8 *)(local_res20 + -0x20) = uVar9;
  *(ulonglong *)(local_res20 + -0x28) = uVar11;
  *(ulonglong *)(local_res20 + -0x30) = uVar11;
  *(undefined8 *)(local_res20 + -0x38) = uVar10;
  *(undefined8 *)(local_res20 + -0x28) = *(undefined8 *)(lVar5 + -0x98);
  *(undefined8 *)(local_res20 + -0x30) = *(undefined8 *)(lVar5 + -0xa0);
  *(undefined8 *)(local_res20 + -0x30) = uVar2;
  FUN_16287cd0d(*(undefined8 *)(local_res20 + -0x38),
                (uVar3 + param_1) - ((uVar3 & param_1) << ((char)uVar6 + 0x13U & 0x3f)),uVar7);
  return;
}



// FUNCTION 14da5c551 FUN_14da5c551 body=135 status=ok
// SIG undefined FUN_14da5c551(void)

/* WARNING: Removing unreachable block (ram,0x00014da5c5d2) */
/* WARNING: Removing unreachable block (ram,0x00014da5c5d8) */
/* WARNING: Removing unreachable block (ram,0x00016271b032) */

void FUN_14da5c551(void)

{
  FUN_16271b032();
  return;
}



// FUNCTION 14da5c5d8 FUN_14da5c5d8 body=136 status=ok
// SIG undefined FUN_14da5c5d8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da5c5d8(void)

{
  FUN_1617a4105();
  return;
}



// FUNCTION 14da5c66a FUN_14da5c66a body=43 status=ok
// SIG undefined FUN_14da5c66a(void)

void FUN_14da5c66a(void)

{
  return;
}



// FUNCTION 14da5c6fb FUN_14da5c6fb body=166 status=ok
// SIG undefined FUN_14da5c6fb(void)

void FUN_14da5c6fb(void)

{
  thunk_FUN_16576e86f(thunk_FUN_16576e86f);
  return;
}



// FUNCTION 14da5c903 FUN_14da5c903 body=257 status=ok
// SIG undefined FUN_14da5c903(void)

undefined8 FUN_14da5c903(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_R12;
  ulonglong uVar2;
  ulonglong unaff_R14;
  undefined8 local_res18;
  
  uVar1 = (unaff_R14 & 0xffffffffccac5965 ^ 0xffffffffffffffff) & (unaff_R14 | 0xffffffffccac5965);
  uVar2 = ~(unaff_R12 ^ 0xffffffffffffffff) & uVar1;
  FUN_16495b3f9(param_1,param_2,
                *(undefined4 *)(param_3 + ~((uVar2 | uVar1 | unaff_R12) + ~uVar2 + 1)));
  return *(undefined8 *)(local_res18 + -0x70);
}



// FUNCTION 14da5cbb9 FUN_14da5cbb9 body=128 status=ok
// SIG undefined FUN_14da5cbb9(void)

void FUN_14da5cbb9(undefined8 param_1,undefined8 param_2)

{
  FUN_157004f63(param_1,param_2,0xffffffffffffffc0,FUN_157004f63);
  return;
}



// FUNCTION 14da5ccf4 FUN_14da5ccf4 body=109 status=ok
// SIG undefined FUN_14da5ccf4(void)

void FUN_14da5ccf4(ulonglong param_1)

{
  longlong lVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res10;
  ulonglong local_res20;
  
  lVar1 = (unaff_retaddr ^ local_res20) + param_1 + (local_res20 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = local_res10;
  *(undefined1 **)(lVar1 + -0x10) = &LAB_14da5cd62;
  return;
}



// FUNCTION 14da5cd95 FUN_14da5cd95 body=296 status=ok
// SIG undefined FUN_14da5cd95(void)

void FUN_14da5cd95(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  short *in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RDI;
  longlong lVar2;
  undefined8 in_R11;
  undefined8 uVar3;
  undefined8 unaff_R12;
  short unaff_R13W;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  short local_res8;
  longlong lStackX_10;
  
  *in_RAX = unaff_R13W + local_res8 + -0x1bcf;
  param_6[-1] = unaff_R12;
  param_6[-2] = in_R11;
  param_6[-3] = in_R11;
  param_6[-4] = param_4;
  lVar2 = param_6[-4];
  param_6[-4] = &DAT_166b76c60;
  param_6[-5] = param_3;
  param_6[-2] = param_6[-1];
  uVar3 = param_6[-3];
  param_6[-3] = param_2;
  param_6[-4] = 0x14da5ce36;
  uVar1 = FUN_166b76c24(param_1,FUN_166b76c24,param_6[-5]);
  param_6[-4] = unaff_R14;
  *(ulonglong *)((longlong)param_6 + lVar2 + -0x327dbf2) =
       (unaff_R15 - (*(ulonglong *)((longlong)param_6 + lVar2 + -0x327dbf2) | unaff_R15)) +
       *(longlong *)((longlong)param_6 + lVar2 + -0x327dbf2);
  param_6[2] = param_6[2] << 1;
  param_6[-2] = unaff_RDI;
  param_6[2] = lStackX_10 - param_6[2];
  *param_6 = uVar1;
  param_6[-1] = uVar3;
  FUN_1663a9fe6();
  return;
}



// FUNCTION 14da5d294 FUN_14da5d294 body=156 status=ok
// SIG undefined FUN_14da5d294(void)

void FUN_14da5d294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  
  (*(code *)0x166067b34)(uStackX_8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da5d847 FUN_14da5d847 body=313 status=ok
// SIG undefined FUN_14da5d847(void)

/* WARNING: Removing unreachable block (ram,0x00014da5d8d9) */
/* WARNING: Removing unreachable block (ram,0x00014da5d8df) */

undefined8
FUN_14da5d847(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  uVar2 = ~((param_5 & ~param_1 | param_1 ^ 0xffffffffffffffff | param_5) + ~(param_5 & ~param_1) +
           1);
  *(undefined8 *)(uVar2 - 8) = in_RAX;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(undefined **)(uVar2 - 8) = &DAT_162151b3c + *(longlong *)(uVar2 - 8);
                    /* WARNING: Could not recover jumptable at 0x000162151b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(uVar2 - 0x10))(local_res18,param_2,in_stack_00000010);
  return uVar1;
}



// FUNCTION 14da5d9d7 FUN_14da5d9d7 body=187 status=ok
// SIG undefined FUN_14da5d9d7(void)

/* WARNING: Instruction at (ram,0x00016690a10b) overlaps instruction at (ram,0x00016690a10a)
    */
/* WARNING: Removing unreachable block (ram,0x00014da5da87) */
/* WARNING: Removing unreachable block (ram,0x00014da5da92) */
/* WARNING: Removing unreachable block (ram,0x00014da5db0e) */
/* WARNING: Removing unreachable block (ram,0x00014da5db14) */
/* WARNING: Removing unreachable block (ram,0x00016690a06b) */
/* WARNING: Removing unreachable block (ram,0x00016690a10b) */
/* WARNING: Removing unreachable block (ram,0x00016690a10a) */
/* WARNING: Removing unreachable block (ram,0x00016690a114) */
/* WARNING: Removing unreachable block (ram,0x00014da5da8d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da5d9d7(void)

{
  return;
}



// FUNCTION 14da5da92 FUN_14da5da92 body=537 status=ok
// SIG undefined FUN_14da5da92(void)

/* WARNING: Instruction at (ram,0x00016690a10b) overlaps instruction at (ram,0x00016690a10a)
    */
/* WARNING: Removing unreachable block (ram,0x00014da5db0e) */
/* WARNING: Removing unreachable block (ram,0x00014da5db14) */
/* WARNING: Removing unreachable block (ram,0x00016690a10a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00016690a125 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da5da92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  uVar2 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | unaff_R15;
  uVar3 = *(ulonglong *)(unaff_RBP + 8);
  lVar4 = *(longlong *)(unaff_RBP + 8);
  *(undefined8 *)(unaff_RBP + 8) = 0;
  *(longlong *)(unaff_RBP + 8) =
       *(longlong *)(unaff_RBP + 8) + ~((~uVar3 | ~uVar1 & ~unaff_R15 | uVar2) + lVar4 + 1);
  FUN_15643a07e(param_1,FUN_15643a07e,param_3,local_res18,in_stack_00000020 ^ unaff_R15);
  FUN_157401787();
  return;
}



// FUNCTION 14da5db9c FUN_14da5db9c body=102 status=ok
// SIG undefined FUN_14da5db9c(void)

ulonglong FUN_14da5db9c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) & param_1;
}



// FUNCTION 14da5dedd FUN_14da5dedd body=63 status=ok
// SIG undefined FUN_14da5dedd(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da5dedd(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  char unaff_BH;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong unaff_RBP;
  undefined1 unaff_SIL;
  longlong unaff_R14;
  undefined8 local_res8;
  
  puVar4 = (undefined8 *)
           (CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x2b) & 0xffffffff);
  LOCK();
  *(undefined1 *)(unaff_R14 + -0x45) = unaff_SIL;
  UNLOCK();
  pcVar1 = (char *)((unaff_RBP & 0xffffffff) - 0x50);
  *pcVar1 = *pcVar1 + unaff_BH;
  puVar3 = &local_res8;
  cVar2 = '\n';
  do {
    puVar4 = puVar4 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *puVar4;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da5e037 FUN_14da5e037 body=155 status=ok
// SIG undefined FUN_14da5e037(void)

void FUN_14da5e037(void)

{
  undefined8 *unaff_RBX;
  
  FUN_1617cdb94();
  *unaff_RBX = 0x3408378;
  FUN_14d85d504();
  return;
}



// FUNCTION 14da5e16b FUN_14da5e16b body=442 status=ok
// SIG undefined FUN_14da5e16b(void)

/* WARNING: Removing unreachable block (ram,0x00014da5e20c) */
/* WARNING: Removing unreachable block (ram,0x00014da5e21d) */
/* WARNING: Removing unreachable block (ram,0x00014da5e2ba) */
/* WARNING: Removing unreachable block (ram,0x00014da5e2be) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7e07) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7d52) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7d5d) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7e0c) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7e18) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7d58) */
/* WARNING: Removing unreachable block (ram,0x00014e1b7e1d) */
/* WARNING: Removing unreachable block (ram,0x00014da5e218) */

void FUN_14da5e16b(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16289b947(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14da5e3c6 FUN_14da5e3c6 body=16 status=ok
// SIG undefined FUN_14da5e3c6(void)

void FUN_14da5e3c6(LPVOID param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014da5e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoTaskMemFree(param_1);
  return;
}



// FUNCTION 14da5e48d FUN_14da5e48d body=131 status=ok
// SIG undefined FUN_14da5e48d(void)

void FUN_14da5e48d(void)

{
  return;
}



// FUNCTION 14da5e8b0 thunk_FUN_14da5e8b6 body=5 status=ok
// SIG undefined thunk_FUN_14da5e8b6(void)

void thunk_FUN_14da5e8b6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16499f553(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x28));
  return;
}



// FUNCTION 14da5e8b6 FUN_14da5e8b6 body=147 status=ok
// SIG undefined FUN_14da5e8b6(void)

void FUN_14da5e8b6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16499f553(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x28));
  return;
}



// FUNCTION 14da5e9dc FUN_14da5e9dc body=163 status=ok
// SIG undefined FUN_14da5e9dc(void)

/* WARNING: Removing unreachable block (ram,0x00014da5ea7f) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb1a) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb25) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb1f) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb2a) */
/* WARNING: Removing unreachable block (ram,0x0001572d91f7) */
/* WARNING: Removing unreachable block (ram,0x00014da5ea74) */

void FUN_14da5e9dc(void)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined **)(uVar1 - 8) = &DAT_15b4a8b57;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da5ea7f FUN_14da5ea7f body=345 status=ok
// SIG undefined FUN_14da5ea7f(void)

/* WARNING: Removing unreachable block (ram,0x00014da5eb1f) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb2a) */
/* WARNING: Removing unreachable block (ram,0x00014da5eb25) */

void FUN_14da5ea7f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_162d34d29;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x28) = param_4;
  *(undefined **)(local_res18 + -0x10) = &DAT_14d7ac497;
  FUN_162d34d10();
  return;
}



// FUNCTION 14da5ebde FUN_14da5ebde body=149 status=ok
// SIG undefined FUN_14da5ebde(void)

void FUN_14da5ebde(undefined8 param_1)

{
  FUN_1647acdfb(param_1);
  return;
}



// FUNCTION 14da5ec74 FUN_14da5ec74 body=353 status=ok
// SIG undefined FUN_14da5ec74(void)

/* WARNING: Removing unreachable block (ram,0x00014d8461bf) */
/* WARNING: Removing unreachable block (ram,0x00014da5edcd) */

undefined8 FUN_14da5ec74(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  FUN_1626a5f68(param_1,param_2,&LAB_1626a5fc0);
  if ((*(ulonglong *)(unaff_RDI + -0x40) & param_1) != 0) {
    uVar2 = FUN_14d846136();
    return uVar2;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x50);
  if (uVar1 + param_1 < (((uVar1 | param_1) ^ 0xffffffffffffffff) + 1 + param_1 + uVar1) * 2) {
    uVar2 = FUN_15658aa48();
    return uVar2;
  }
  uVar2 = FUN_15658aa48();
  return uVar2;
}



// FUNCTION 14da5ee62 FUN_14da5ee62 body=99 status=ok
// SIG undefined FUN_14da5ee62(void)

void FUN_14da5ee62(void)

{
  return;
}



// FUNCTION 14da5f562 FUN_14da5f562 body=154 status=ok
// SIG undefined FUN_14da5f562(void)

void FUN_14da5f562(void)

{
  return;
}



// FUNCTION 14da5f5fe FUN_14da5f5fe body=11 status=ok
// SIG undefined FUN_14da5f5fe(void)

void FUN_14da5f5fe(void)

{
  return;
}



// FUNCTION 14da5f71f FUN_14da5f71f body=128 status=ok
// SIG undefined FUN_14da5f71f(void)

void FUN_14da5f71f(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_1647951ca(*(ulonglong *)(unaff_RSI + unaff_RDI) + unaff_R14 +
                (*(ulonglong *)(unaff_RSI + unaff_RDI) & unaff_R14) * -2,
                *(undefined8 *)(unaff_RSI + -0x30));
  FUN_1649e2e1a(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14da5f7a1 FUN_14da5f7a1 body=136 status=ok
// SIG undefined FUN_14da5f7a1(void)

void FUN_14da5f7a1(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1649e2e1a(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14da5f829 FUN_14da5f829 body=153 status=ok
// SIG undefined FUN_14da5f829(void)

void FUN_14da5f829(void)

{
  undefined8 unaff_R14;
  undefined4 unaff_retaddr;
  
  *(undefined8 *)(&stack0x31a105ea + CONCAT44(0xffffffff,unaff_retaddr)) = unaff_R14;
  FUN_165c74509(&stack0x00000010);
  return;
}



// FUNCTION 14da5f954 FUN_14da5f954 body=150 status=ok
// SIG undefined FUN_14da5f954(void)

void FUN_14da5f954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164be71af(1,param_2,param_3);
  return;
}



// FUNCTION 14da5f9ea FUN_14da5f9ea body=66 status=ok
// SIG undefined FUN_14da5f9ea(void)

void FUN_14da5f9ea(void)

{
  return;
}



// FUNCTION 14da5fa8f FUN_14da5fa8f body=172 status=ok
// SIG undefined FUN_14da5fa8f(void)

ulonglong FUN_14da5fa8f(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return ~(param_2 & (~in_RAX | unaff_R15));
}



// FUNCTION 14da5fbd7 FUN_14da5fbd7 body=341 status=ok
// SIG undefined FUN_14da5fbd7(void)

/* WARNING: Removing unreachable block (ram,0x00014da5fc32) */

void FUN_14da5fbd7(void)

{
  FUN_161a9e9fa();
  (*(code *)0x165c3ced4)(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14da5fd23 FUN_14da5fd23 body=60 status=ok
// SIG undefined FUN_14da5fd23(void)

/* WARNING: Removing unreachable block (ram,0x0001629d4f64) */
/* WARNING: Removing unreachable block (ram,0x00014de27251) */
/* WARNING: Removing unreachable block (ram,0x00014de272de) */
/* WARNING: Removing unreachable block (ram,0x000160c3329e) */
/* WARNING: Removing unreachable block (ram,0x00014da5fda1) */
/* WARNING: Removing unreachable block (ram,0x0001629d4ef3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da5fd23(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int in_EAX;
  undefined8 unaff_RBP;
  uint uVar2;
  uint uVar3;
  longlong unaff_R13;
  byte in_AF;
  uint in_stack_00000010;
  undefined1 auStackX_20 [8];
  
  uVar3 = in_EAX - (-1 - param_4);
  uVar2 = (~(in_stack_00000010 & uVar3) + uVar3) - ~in_stack_00000010;
  if (-1 < (int)uVar2) {
    in_AF = (in_AF & 1) != 0;
  }
  iVar1 = -(in_stack_00000010 + ((uVar3 - 1) - ~(~uVar2 + 1)));
  if ((iVar1 >= 0) && (iVar1 < 0)) {
    if (*(longlong *)(unaff_R13 + -8) != 0) {
      FUN_166b9a171(param_1,iVar1);
      return;
    }
    FUN_166b9a171(param_1,iVar1);
    return;
  }
  if (((int)(((uint)(&stack0x00000000 == &DAT_ffffffffffffffe0) * 0x40 |
              (uint)((in_AF & 1) != 0) * 0x10 |
              (uint)(POPCOUNT((ulonglong)auStackX_20 & 0xff) == '\0') * 4 |
             (uint)(&DAT_fffffffffffffff7 < &stack0x00000018)) << 0x19) < 0) &&
     (&stack0x00000000 != &DAT_ffffffffffffffe0)) {
    FUN_162d5c291(unaff_RBP,0xf37be207,param_3,iVar1 + -1);
    return;
  }
  FUN_162ebdf20();
  return;
}



// FUNCTION 14da5fe2b FUN_14da5fe2b body=10 status=ok
// SIG undefined FUN_14da5fe2b(void)

void FUN_14da5fe2b(void)

{
  return;
}



// FUNCTION 14da5fece FUN_14da5fece body=157 status=ok
// SIG undefined FUN_14da5fece(void)

void FUN_14da5fece(void)

{
  return;
}



// FUNCTION 14da5ff6e FUN_14da5ff6e body=571 status=ok
// SIG undefined FUN_14da5ff6e(void)

/* WARNING: Removing unreachable block (ram,0x00014da60014) */
/* WARNING: Removing unreachable block (ram,0x00014da6001a) */
/* WARNING: Removing unreachable block (ram,0x00014da60039) */
/* WARNING: Removing unreachable block (ram,0x00014da60034) */
/* WARNING: Removing unreachable block (ram,0x00014da6006d) */
/* WARNING: Removing unreachable block (ram,0x00014da600a2) */
/* WARNING: Removing unreachable block (ram,0x00014da600a8) */
/* WARNING: Removing unreachable block (ram,0x00014da600e5) */
/* WARNING: Removing unreachable block (ram,0x000162a29eb3) */
/* WARNING: Removing unreachable block (ram,0x000162a29ef0) */
/* WARNING: Removing unreachable block (ram,0x000162a29f42) */
/* WARNING: Removing unreachable block (ram,0x00014da60072) */
/* WARNING: Removing unreachable block (ram,0x00014da600f0) */
/* WARNING: Removing unreachable block (ram,0x00014da600f3) */

undefined8 FUN_14da5ff6e(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong local_res10;
  ulonglong in_stack_00000018;
  ulonglong uStackX_20;
  
  local_res10 = 0xffffffffffffffff - (local_res10 & param_1) & (local_res10 | param_1);
  uVar2 = 0xffffffffffffffff - (~uStackX_20 | param_1);
  uVar1 = FUN_14de56de0(0xffffffffb0f0a895,param_2,&local_res10,
                        (~(~(~param_1 | uStackX_20) & uVar2) + uVar2) - (~param_1 | uStackX_20),
                        ~((~param_1 | in_stack_00000018) & (~in_stack_00000018 | param_1)));
  return uVar1;
}



// FUNCTION 14da6017a FUN_14da6017a body=271 status=ok
// SIG undefined FUN_14da6017a(void)

void FUN_14da6017a(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RBP;
  
  FUN_165193d86(param_1);
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  lVar2 = *(longlong *)(unaff_RBP + 0x10);
  *(undefined8 *)(unaff_RBP + 0x10) = 0;
  *(longlong *)(unaff_RBP + 0x10) =
       *(longlong *)(unaff_RBP + 0x10) - ~((lVar2 - (param_2 | uVar1)) + param_2);
  *(longlong *)(unaff_RBP + 0x10) = -*(longlong *)(unaff_RBP + 0x10);
  return;
}



// FUNCTION 14da60369 FUN_14da60369 body=189 status=ok
// SIG undefined FUN_14da60369(void)

void FUN_14da60369(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_160cd26a6(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14da604b9 FUN_14da604b9 body=134 status=ok
// SIG undefined FUN_14da604b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da604b9(undefined8 *param_1)

{
  undefined8 unaff_R14;
  
  *param_1 = unaff_R14;
  return;
}



// FUNCTION 14da605e9 FUN_14da605e9 body=190 status=ok
// SIG undefined FUN_14da605e9(void)

undefined8 FUN_14da605e9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da606a8 FUN_14da606a8 body=107 status=ok
// SIG undefined FUN_14da606a8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da60712) overlaps instruction at (ram,0x00014da60711)
    */
/* WARNING: Removing unreachable block (ram,0x00015b471549) */
/* WARNING: Removing unreachable block (ram,0x00015b47154f) */
/* WARNING: Removing unreachable block (ram,0x00014da6073b) */
/* WARNING: Removing unreachable block (ram,0x00016266ebb1) */
/* WARNING: Removing unreachable block (ram,0x00016266eb13) */
/* WARNING: Removing unreachable block (ram,0x00016266eba6) */
/* WARNING: Removing unreachable block (ram,0x00016266ebac) */
/* WARNING: Removing unreachable block (ram,0x00015b47143d) */
/* WARNING: Removing unreachable block (ram,0x000165825df0) */
/* WARNING: Removing unreachable block (ram,0x00014679fe5f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14da606a8(void)

{
  return;
}



// FUNCTION 14da6094f FUN_14da6094f body=148 status=ok
// SIG undefined FUN_14da6094f(void)

void FUN_14da6094f(undefined8 param_1,undefined8 param_2)

{
  undefined2 in_AX;
  longlong unaff_RBX;
  longlong in_R11;
  
  FUN_15718778c(param_1,param_2,CONCAT62((int6)((ulonglong)(unaff_RBX + in_R11) >> 0x10),in_AX));
  return;
}



// FUNCTION 14da609e5 thunk_FUN_14da609eb body=5 status=ok
// SIG undefined thunk_FUN_14da609eb(void)

undefined8 thunk_FUN_14da609eb(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  
  FUN_166c5f739(~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x38)) &
                 (~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP)),0x2d17c1e9);
  return unaff_R14;
}



// FUNCTION 14da609eb FUN_14da609eb body=146 status=ok
// SIG undefined FUN_14da609eb(void)

undefined8 FUN_14da609eb(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  
  FUN_166c5f739(~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x38)) &
                 (~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP)),0x2d17c1e9);
  return unaff_R14;
}



// FUNCTION 14da60b43 FUN_14da60b43 body=122 status=ok
// SIG undefined FUN_14da60b43(void)

void FUN_14da60b43(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  
  uVar1 = (*(longlong *)(unaff_RSI + -0x28) + -1) - (in_R9 ^ 0xffffffffffffffff);
  FUN_156d95a76(9,FUN_156d95a76,*(undefined8 *)(unaff_RSI + -0x60),
                (~uVar1 | ~unaff_RBP) & (uVar1 + unaff_RBP) - (uVar1 & unaff_RBP));
  return;
}



// FUNCTION 14da60c5e FUN_14da60c5e body=135 status=ok
// SIG undefined FUN_14da60c5e(void)

/* WARNING: Removing unreachable block (ram,0x00014da60d50) */
/* WARNING: Removing unreachable block (ram,0x00014da60d56) */

void FUN_14da60c5e(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  undefined8 in_R10;
  ulonglong in_stack_00000010;
  undefined8 in_stack_00000038;
  longlong in_stack_00000048;
  
  uVar1 = *unaff_RSI;
  uVar2 = FUN_14deb80a1();
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | in_stack_00000010;
  *(ulonglong *)(unaff_RBX + 0x10) = ~(uVar2 & *(ulonglong *)(unaff_RBX + 0x10));
  *(undefined8 *)(in_stack_00000048 + -8) = uVar1;
  *(undefined8 *)(in_stack_00000048 + -0x10) = *(undefined8 *)(in_stack_00000048 + -8);
  *(undefined8 *)(in_stack_00000048 + -0x18) = in_R10;
  *(undefined8 *)(in_stack_00000048 + -8) = 0;
  *(longlong *)(in_stack_00000048 + -8) =
       (longlong)(&LAB_160e2becf + *(longlong *)(in_stack_00000048 + -8));
  FUN_160e2be9e(in_stack_00000038);
  return;
}



// FUNCTION 14da60ce5 FUN_14da60ce5 body=268 status=ok
// SIG undefined FUN_14da60ce5(void)

/* WARNING: Removing unreachable block (ram,0x00014da60d50) */
/* WARNING: Removing unreachable block (ram,0x00014da60d56) */

void FUN_14da60ce5(ulonglong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 in_stack_00000020;
  longlong in_stack_00000030;
  
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | param_1;
  *(ulonglong *)(unaff_RBX + 0x10) = ~(in_RAX & *(ulonglong *)(unaff_RBX + 0x10));
  *(undefined8 *)(in_stack_00000030 + -8) = local_res8;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -0x18) = in_R10;
  *(undefined8 *)(in_stack_00000030 + -8) = 0;
  *(longlong *)(in_stack_00000030 + -8) =
       (longlong)(&LAB_160e2becf + *(longlong *)(in_stack_00000030 + -8));
  FUN_160e2be9e(in_stack_00000020,param_2,FUN_160e2be9e);
  return;
}



// FUNCTION 14da60d5c FUN_14da60d5c body=94 status=ok
// SIG undefined FUN_14da60d5c(void)

undefined1 FUN_14da60d5c(undefined8 param_1)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 unaff_RDI;
  ulonglong local_res8;
  longlong local_res10;
  
  LOCK();
  uVar1 = DAT_14d7ac209;
  UNLOCK();
  DAT_14d7ac209 = in_AL;
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined4 *)(local_res10 + -0x18) = 0xa13b077;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res8 & 0x100) != 0) * 0x100 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  *(undefined8 *)(local_res10 + -0x28) = param_1;
  *(undefined **)(local_res10 + -0x20) = &DAT_14da60dbe;
  return uVar1;
}



// FUNCTION 14da60e52 FUN_14da60e52 body=151 status=ok
// SIG undefined FUN_14da60e52(void)

void FUN_14da60e52(void)

{
  longlong lVar1;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  FUN_166c24d15(in_R10 | unaff_R15,lVar1,0x5b97c2d4,lVar1);
  FUN_164fe4c6d(in_stack_00000008);
  return;
}



// FUNCTION 14da60eec FUN_14da60eec body=137 status=ok
// SIG undefined FUN_14da60eec(void)

void FUN_14da60eec(void)

{
  undefined8 unaff_retaddr;
  
  FUN_164fe4c6d(unaff_retaddr);
  return;
}



// FUNCTION 14da61002 FUN_14da61002 body=615 status=ok
// SIG undefined FUN_14da61002(void)

/* WARNING: Removing unreachable block (ram,0x000157661a68) */
/* WARNING: Removing unreachable block (ram,0x000157661a6e) */
/* WARNING: Removing unreachable block (ram,0x00014da610a3) */
/* WARNING: Removing unreachable block (ram,0x00014da61143) */
/* WARNING: Removing unreachable block (ram,0x00014deaf26f) */
/* WARNING: Removing unreachable block (ram,0x00014da6113e) */
/* WARNING: Removing unreachable block (ram,0x00014e18c051) */
/* WARNING: Removing unreachable block (ram,0x00014da6114f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da61002(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x30)) == 0xffffffffffffffff &&
      (*(ulonglong *)(unaff_R13 + -0x30) ^ 0xffffffffffffffff | unaff_R15) == 0xffffffffffffffff) {
    uVar1 = FUN_1576619cc();
    return uVar1;
  }
  uVar2 = FUN_1651611a8(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar3 = (~(~uVar2 & uVar3) + uVar3) - uVar2 & (~uVar3 | uVar2);
  if (-1 < (longlong)uVar3) {
    uVar1 = FUN_165844b4c();
    return uVar1;
  }
  uVar1 = FUN_1619bf7da(~uVar3,~((~uVar2 | *(ulonglong *)(unaff_R12 + -0x78)) &
                                (~*(ulonglong *)(unaff_R12 + -0x78) | uVar2)));
  return uVar1;
}



// FUNCTION 14da610a3 FUN_14da610a3 body=170 status=ok
// SIG undefined FUN_14da610a3(void)

/* WARNING: Removing unreachable block (ram,0x00014da6114f) */

undefined8
FUN_14da610a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff966a06c + (local_res8 ^ 0x63582cc));
  *puVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar3 = *puVar1;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0xe122e1c;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar4 = puVar1[-1];
  puVar1[-1] = unaff_RBP;
  uVar6 = puVar1[-1];
  puVar2 = (undefined8 *)((longlong)puVar1 + lVar4 + -0xe122e14);
  *puVar2 = *puVar2;
  uVar7 = uVar3 + unaff_R15;
  puVar2[-1] = param_1;
  puVar2[-2] = uVar3 & unaff_R15;
  puVar2[-1] = uVar7 + puVar2[-2] * -2;
  if (uVar7 < (ulonglong)(puVar2[-2] * 2)) {
    puVar2[1] = puVar2[1] ^ unaff_R15;
    *puVar2 = param_4;
    uVar3 = puVar2[2];
    puVar2[-1] = in_RAX;
    puVar2[-2] = unaff_RSI;
    puVar2[2] = ~puVar2[2];
    puVar2[2] = puVar2[2] | ~unaff_R15;
    puVar2[2] = puVar2[2] ^ 0xffffffffffffffff;
    uVar5 = puVar2[-1];
    puVar2[2] = ~puVar2[2];
    puVar2[2] = puVar2[2] & (uVar3 | unaff_R15);
    *puVar2 = *puVar2;
    puVar2[-1] = uVar6;
    puVar2[-2] = &LAB_14deaf2d0;
    return uVar5;
  }
  uVar6 = FUN_14deaf26f();
  return uVar6;
}



// FUNCTION 14da6114f FUN_14da6114f body=113 status=ok
// SIG undefined FUN_14da6114f(void)

void FUN_14da6114f(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  
  local_res20 = (~local_res20 | ~in_RAX) & (~(param_3 & in_RAX) + in_RAX) - ~param_3;
  FUN_160d45f96(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14da6160b FUN_14da6160b body=141 status=ok
// SIG undefined FUN_14da6160b(void)

ulonglong FUN_14da6160b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x30) | param_1;
}



// FUNCTION 14da616a1 FUN_14da616a1 body=143 status=ok
// SIG undefined FUN_14da616a1(void)

void FUN_14da616a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014da6172e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da61759 FUN_14da61759 body=705 status=ok
// SIG undefined FUN_14da61759(void)

/* WARNING: Instruction at (ram,0x000156c64867) overlaps instruction at (ram,0x000156c64865)
    */
/* WARNING: Removing unreachable block (ram,0x000165728fff) */
/* WARNING: Removing unreachable block (ram,0x000165729077) */
/* WARNING: Removing unreachable block (ram,0x000160e87a5d) */
/* WARNING: Removing unreachable block (ram,0x000156c64849) */
/* WARNING: Removing unreachable block (ram,0x000156c64867) */
/* WARNING: Removing unreachable block (ram,0x000156c64864) */
/* WARNING: Removing unreachable block (ram,0x000156c648e3) */
/* WARNING: Removing unreachable block (ram,0x000156c648e9) */
/* WARNING: Removing unreachable block (ram,0x000156c648ee) */
/* WARNING: Removing unreachable block (ram,0x000156a5cd49) */
/* WARNING: Removing unreachable block (ram,0x000160e87b00) */
/* WARNING: Removing unreachable block (ram,0x000160e87b06) */
/* WARNING: Removing unreachable block (ram,0x000160e87b0b) */
/* WARNING: Removing unreachable block (ram,0x000160e87b94) */
/* WARNING: Removing unreachable block (ram,0x000160e87b9a) */
/* WARNING: Removing unreachable block (ram,0x000157642ab2) */
/* WARNING: Removing unreachable block (ram,0x00014da619ae) */
/* WARNING: Removing unreachable block (ram,0x00014da619ba) */
/* WARNING: Removing unreachable block (ram,0x00014da619bf) */
/* WARNING: Removing unreachable block (ram,0x00014da619e0) */
/* WARNING: Removing unreachable block (ram,0x00014da61779) */
/* WARNING: Removing unreachable block (ram,0x00014da61908) */
/* WARNING: Removing unreachable block (ram,0x00014da61930) */
/* WARNING: Removing unreachable block (ram,0x0001628053aa) */
/* WARNING: Removing unreachable block (ram,0x00016485902c) */
/* WARNING: Removing unreachable block (ram,0x000164859038) */
/* WARNING: Removing unreachable block (ram,0x000165728ecb) */
/* WARNING: Removing unreachable block (ram,0x000165728f79) */
/* WARNING: Removing unreachable block (ram,0x000165728faa) */
/* WARNING: Removing unreachable block (ram,0x000165728ff9) */
/* WARNING: Removing unreachable block (ram,0x0001619af1ce) */
/* WARNING: Removing unreachable block (ram,0x0001619af253) */
/* WARNING: Removing unreachable block (ram,0x0001619af259) */
/* WARNING: Removing unreachable block (ram,0x000166c2be18) */
/* WARNING: Removing unreachable block (ram,0x00016572907c) */
/* WARNING: Removing unreachable block (ram,0x00014da61801) */
/* WARNING: Removing unreachable block (ram,0x00014da61848) */
/* WARNING: Removing unreachable block (ram,0x000164858fe5) */

undefined8 FUN_14da61759(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15;
  uVar1 = FUN_162913c65((-(-1 - unaff_R15) - (~*(ulonglong *)(unaff_R13 + -0x78) + 2)) -
                        ~(~(uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0)) | 1),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,FUN_162913c65);
  return uVar1;
}



// FUNCTION 14da6188b FUN_14da6188b body=158 status=ok
// SIG undefined FUN_14da6188b(void)

/* WARNING: Instruction at (ram,0x000156c64867) overlaps instruction at (ram,0x000156c64865)
    */
/* WARNING: Removing unreachable block (ram,0x000156c648e3) */
/* WARNING: Removing unreachable block (ram,0x000156c648ee) */
/* WARNING: Removing unreachable block (ram,0x00014da619ae) */
/* WARNING: Removing unreachable block (ram,0x00014da619ba) */
/* WARNING: Removing unreachable block (ram,0x00014da619bf) */
/* WARNING: Removing unreachable block (ram,0x00014da619e0) */
/* WARNING: Removing unreachable block (ram,0x00014da61930) */
/* WARNING: Removing unreachable block (ram,0x0001628053aa) */
/* WARNING: Removing unreachable block (ram,0x00014da61908) */
/* WARNING: Removing unreachable block (ram,0x000160e87a5d) */
/* WARNING: Removing unreachable block (ram,0x000156c64849) */
/* WARNING: Removing unreachable block (ram,0x000156c64867) */
/* WARNING: Removing unreachable block (ram,0x000156c64864) */
/* WARNING: Removing unreachable block (ram,0x000156a5cd49) */
/* WARNING: Removing unreachable block (ram,0x000160e87b00) */
/* WARNING: Removing unreachable block (ram,0x000160e87b06) */
/* WARNING: Removing unreachable block (ram,0x000160e87b0b) */
/* WARNING: Removing unreachable block (ram,0x000160e87b94) */
/* WARNING: Removing unreachable block (ram,0x000160e87b9a) */
/* WARNING: Removing unreachable block (ram,0x000157642ab2) */
/* WARNING: Removing unreachable block (ram,0x000156c648e9) */

undefined8 FUN_14da6188b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160e87a5d();
  return uVar1;
}



// FUNCTION 14da61930 FUN_14da61930 body=141 status=ok
// SIG undefined FUN_14da61930(void)

/* WARNING: Removing unreachable block (ram,0x00014da619ae) */
/* WARNING: Removing unreachable block (ram,0x00014da619ba) */
/* WARNING: Removing unreachable block (ram,0x00014da619bf) */
/* WARNING: Removing unreachable block (ram,0x00014da619e0) */

undefined8 FUN_14da61930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165f4d57b(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14da619bf FUN_14da619bf body=131 status=ok
// SIG undefined FUN_14da619bf(void)

undefined8 FUN_14da619bf(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x60);
}



// FUNCTION 14da61ae5 FUN_14da61ae5 body=478 status=ok
// SIG undefined FUN_14da61ae5(void)

/* WARNING: Removing unreachable block (ram,0x00014da61b7a) */
/* WARNING: Removing unreachable block (ram,0x00015b300d62) */

undefined8 FUN_14da61ae5(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined2 *in_R10;
  undefined2 unaff_R14W;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  *in_R10 = unaff_R14W;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res8;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uStackX_18;
  lVar2 = *(longlong *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R15;
  plVar1 = (longlong *)(in_stack_00000028 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar2;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = *(undefined8 *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) + -0x1563e6a70;
  plVar1 = (longlong *)(in_stack_00000028 + -8);
  *plVar1 = -*plVar1;
  if (-1 < *plVar1) {
    uVar3 = FUN_1563e6a50();
    return uVar3;
  }
  uVar3 = FUN_14d7bcfe5();
  return uVar3;
}



// FUNCTION 14da61bff FUN_14da61bff body=598 status=ok
// SIG undefined FUN_14da61bff(void)

/* WARNING: Removing unreachable block (ram,0x00016208e08e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4dc0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4dce) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4de9) */
/* WARNING: Removing unreachable block (ram,0x00016208e094) */
/* WARNING: Removing unreachable block (ram,0x00016208e105) */
/* WARNING: Removing unreachable block (ram,0x00016208e110) */
/* WARNING: Removing unreachable block (ram,0x00016208e116) */
/* WARNING: Removing unreachable block (ram,0x000162d3732e) */
/* WARNING: Removing unreachable block (ram,0x00014da61c9e) */
/* WARNING: Removing unreachable block (ram,0x00014da61ca4) */
/* WARNING: Removing unreachable block (ram,0x00015713ffd3) */
/* WARNING: Removing unreachable block (ram,0x00015714004e) */
/* WARNING: Removing unreachable block (ram,0x000157140054) */
/* WARNING: Removing unreachable block (ram,0x00016208df6d) */
/* WARNING: Removing unreachable block (ram,0x00016208e02d) */
/* WARNING: Removing unreachable block (ram,0x00016208e031) */
/* WARNING: Removing unreachable block (ram,0x00016208e083) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4e2e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4e31) */

undefined8 FUN_14da61bff(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15713ffd3();
  return uVar1;
}



// FUNCTION 14da61d3e FUN_14da61d3e body=446 status=ok
// SIG undefined FUN_14da61d3e(void)

/* WARNING: Instruction at (ram,0x00014da61d45) overlaps instruction at (ram,0x00014da61d44)
    */
/* WARNING: Removing unreachable block (ram,0x000162db5aaf) */
/* WARNING: Removing unreachable block (ram,0x00014da61ebf) */
/* WARNING: Removing unreachable block (ram,0x00014da61ddc) */
/* WARNING: Removing unreachable block (ram,0x00014da61e6f) */
/* WARNING: Removing unreachable block (ram,0x00014da61e6a) */
/* WARNING: Removing unreachable block (ram,0x000162db59d1) */
/* WARNING: Removing unreachable block (ram,0x00014da61e75) */

void FUN_14da61d3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  undefined2 in_R11W;
  undefined6 in_register_0000009a;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar5;
  undefined8 unaff_R15;
  bool in_PF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_8 [8];
  int *piVar4;
  
  if (in_PF) {
    in_RAX = 0x20d16556;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    unaff_RSI = in_RAX;
  }
  uVar3 = (uint)in_RAX & 0xd16556be;
  piVar4 = (int *)(ulonglong)uVar3;
  *piVar4 = *piVar4 + uVar3;
  *(char *)piVar4 = (char)*piVar4 + (char)uVar3;
  puVar1 = (undefined8 *)
           ((longlong)register0x00000020 +
           (~(~((ulonglong)((uint)in_RAX & 0xc0014010) & 0xffffffffda5d22ce) &
             (unaff_RSI | 0xffffffffda5d22ce)) - 0x573b867));
  *puVar1 = unaff_R14;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & (byte)((ulonglong)param_1 >> 8))
          + (puVar1[-1] ^ *(ulonglong *)((longlong)puVar1 + unaff_RBP + 0x18));
  *(undefined4 *)(puVar1 + 1) = 0x3a868b34;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = param_4;
  puVar1[2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
              (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar5 < 0) * 0x80 |
              (ulonglong)(uVar5 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
              (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
              (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
              (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[1] = CONCAT62(in_register_0000009a,in_R11W);
  *puVar1 = unaff_R15;
  puVar1[-1] = unaff_R13;
  uVar2 = *(ushort *)(puVar1 + 2);
  puVar1[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW2(uVar2 - 1,-1) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((short)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)((ushort)(uVar2 - 1) != -1) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  (*(code *)0x166576335)();
  return;
}



// FUNCTION 14da61efe FUN_14da61efe body=137 status=ok
// SIG undefined FUN_14da61efe(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da61efe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = param_3;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x34953bf8;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x34953bf8;
  *(longlong *)(local_res10 + -8) = (longlong)(&LAB_14da61f9d + *(longlong *)(local_res10 + -8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da62038 FUN_14da62038 body=175 status=ok
// SIG undefined FUN_14da62038(void)

void FUN_14da62038(void)

{
  FUN_1668463f1(0x4a9067bf);
  return;
}



// FUNCTION 14da620e8 FUN_14da620e8 body=296 status=ok
// SIG undefined FUN_14da620e8(void)

/* WARNING: Removing unreachable block (ram,0x00014da62207) */
/* WARNING: Removing unreachable block (ram,0x00014da6220d) */
/* WARNING: Removing unreachable block (ram,0x000157310ed0) */
/* WARNING: Removing unreachable block (ram,0x00014da62178) */

ulonglong FUN_14da620e8(ulonglong param_1)

{
  ulonglong *in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  ulonglong uVar1;
  undefined8 uStackX_8;
  ulonglong local_res18;
  undefined8 in_stack_00000028;
  ulonglong in_stack_00000030;
  ulonglong in_stack_00000038;
  
  *in_RAX = ~(unaff_R13 + unaff_R15);
  in_stack_00000030 = in_stack_00000030 ^ param_1;
  in_stack_00000038 = in_stack_00000038 ^ param_1;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7bd967) is written */
                    /* WARNING: Read-only address (ram,0x00014d7bd967) is written */
  LOCK();
  uRam000000014d7bd967 = (undefined1)local_res18;
  UNLOCK();
  *(undefined8 *)(in_stack_00000038 - 8) = unaff_RBP;
  *(undefined8 *)(in_stack_00000038 - 0x10) = unaff_RBP;
  *(ulonglong *)(in_stack_00000038 - 0x18) =
       (ulonglong)((in_stack_00000030 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((in_stack_00000030 & 0x800) != 0) * 0x800 |
       (ulonglong)((in_stack_00000030 & 0x400) != 0) * 0x400 |
       (ulonglong)((in_stack_00000030 & 0x200) != 0) * 0x200 |
       (ulonglong)((in_stack_00000030 & 0x80) != 0) * 0x80 |
       (ulonglong)((in_stack_00000030 & 0x40) != 0) * 0x40 |
       (ulonglong)((in_stack_00000030 & 0x10) != 0) * 0x10 |
       (ulonglong)((in_stack_00000030 & 4) != 0) * 4 | (ulonglong)((in_stack_00000030 & 1) != 0) |
       (ulonglong)((in_stack_00000030 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((in_stack_00000030 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(in_stack_00000038 - 0x18);
  *(ulonglong *)(in_stack_00000038 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000038 - 0x20) = unaff_R12;
  uVar1 = *(ulonglong *)(in_stack_00000038 - 0x18);
  *(undefined8 *)(in_stack_00000038 - 0x18) = unaff_R14;
  if ((uVar1 & 0x80) == 0) {
    *(ulonglong *)(in_stack_00000038 - 0x20) =
         (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
         (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
         (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(in_stack_00000038 - 8) = 0x23b5d6c;
    *(undefined8 *)(in_stack_00000038 - 0x10) = in_R11;
    *(undefined8 *)(in_stack_00000038 - 0x18) = in_R11;
    *(code **)(in_stack_00000038 - 0x10) = FUN_165c7153c;
    return local_res18 & 0xffffffffffffff00;
  }
  uVar1 = FUN_14e0d3ea7(in_stack_00000028,uStackX_8);
  return uVar1;
}



// FUNCTION 14da62213 FUN_14da62213 body=311 status=ok
// SIG undefined FUN_14da62213(void)

void FUN_14da62213(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~((param_3 ^ 0x60b0c30f) & *(ulonglong *)(unaff_R13 + -0x88)) &
          (param_3 ^ 0x60b0c30f | *(ulonglong *)(unaff_R13 + -0x88));
  uVar1 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x38)) &
           (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15));
  FUN_15b3cf741(0xffffffffffffffb8,FUN_15b3cf741,
                (uVar2 & unaff_R15 ^ 0xffffffffffffffff) & (uVar2 | unaff_R15));
  uVar2 = *(ulonglong *)(param_4 + 0x18);
  *(ulonglong *)(param_4 + 0x18) = ~*(ulonglong *)(param_4 + 0x18);
  *(ulonglong *)(param_4 + 0x18) = (~(uVar2 & uVar1) + uVar1) - *(longlong *)(param_4 + 0x18);
  *(ulonglong *)(param_4 + 0x18) = ~*(ulonglong *)(param_4 + 0x18);
  FUN_1659a4f73();
  return;
}



// FUNCTION 14da6234e FUN_14da6234e body=202 status=ok
// SIG undefined FUN_14da6234e(void)

undefined8 FUN_14da6234e(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R10;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_R12;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_28 [5];
  
  puVar2 = (ulonglong *)(&stack0x00000008 + in_RAX);
  *(undefined8 *)(&stack0x00000000 + in_RAX) = unaff_RDI;
  *(undefined8 *)((longlong)auStack_28 + in_RAX + 0x20) = in_R9;
  puVar1 = (ulonglong *)((longlong)auStack_28 + in_RAX + 0x18);
  *puVar1 = 0x2868b334;
  *puVar1 = *puVar1 + 0x44b19c62;
  *puVar2 = *puVar1;
  *(undefined8 *)((longlong)auStack_28 + in_RAX + 0x20) = in_R10;
  uVar3 = *puVar2;
  *(undefined8 *)((longlong)auStack_28 + in_RAX + 0x18) = unaff_RSI;
  *puVar2 = *puVar2 & 0x6d1a4f96 | 0xffffffff92e5b069;
  uVar3 = 0xffffffffffffffff - (uVar3 & 0xffffffff92e5b069) & *puVar2;
  lVar4 = -uVar3;
  uVar5 = lVar4 - 1;
  *puVar2 = uVar5;
  *(ulonglong *)((longlong)auStack_28 + in_RAX + 0x20) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(lVar4,1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar3 != 0) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar3 = *(ulonglong *)((longlong)auStack_28 + in_RAX + 0x20);
  *(ulonglong *)((longlong)auStack_28 + in_RAX + 0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)((longlong)auStack_28 + in_RAX + 0x20);
  *(longlong *)((longlong)auStack_28 + in_RAX + 0x20) = in_RAX;
  *(longlong *)((longlong)auStack_28 + in_RAX + 0x18) = in_RAX;
  *(longlong *)((longlong)auStack_28 + in_RAX + 0x10) = in_RAX;
  *(code **)((longlong)auStack_28 + in_RAX + 0x20) = FUN_14da6241b;
  *(undefined8 *)((longlong)auStack_28 + in_RAX + 8) = unaff_R12;
  *(ulonglong *)((longlong)auStack_28 + in_RAX) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined **)((longlong)auStack_28 + in_RAX + 0x18) = &DAT_1661760af;
  return *(undefined8 *)((longlong)auStack_28 + in_RAX + 0x10);
}



// FUNCTION 14da6241b FUN_14da6241b body=183 status=ok
// SIG undefined FUN_14da6241b(void)

/* WARNING: Removing unreachable block (ram,0x00014da624c7) */
/* WARNING: Removing unreachable block (ram,0x00014da624cd) */
/* WARNING: Removing unreachable block (ram,0x00014da624d2) */
/* WARNING: Removing unreachable block (ram,0x00014da6255d) */
/* WARNING: Removing unreachable block (ram,0x00014da6260c) */
/* WARNING: Removing unreachable block (ram,0x00014da62612) */
/* WARNING: Removing unreachable block (ram,0x00014da62617) */
/* WARNING: Removing unreachable block (ram,0x00015654f119) */

undefined8 FUN_14da6241b(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_15b4b4037(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                        ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                         (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | in_RAX)),
                        *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                        ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
                         (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return uVar1;
}



// FUNCTION 14da624d2 FUN_14da624d2 body=358 status=ok
// SIG undefined FUN_14da624d2(void)

/* WARNING: Removing unreachable block (ram,0x00014da62617) */

undefined8 FUN_14da624d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ushort uVar8;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 uStackX_8;
  undefined4 auStack_10 [2];
  undefined8 uStack_8;
  
  *(undefined8 *)(&stack0x00000000 + param_3) = unaff_RBX;
  *(undefined4 *)((longlong)&uStack_8 + param_3) = 0xd844ae80;
  *(undefined4 *)((longlong)auStack_10 + param_3) = 0xffffffff;
  *(undefined4 *)((longlong)&uStack_8 + param_3 + 4) =
       *(undefined4 *)((longlong)auStack_10 + param_3);
  lVar3 = *(longlong *)((longlong)&uStack_8 + param_3);
  *(undefined8 *)((longlong)&uStack_8 + param_3) = unaff_RSI;
  uVar6 = *(undefined8 *)((longlong)&uStack_8 + param_3);
  *(undefined8 *)((longlong)&uStack_8 + param_3) = *(undefined8 *)(param_1 + lVar3 + 0x27bb50e0);
  *(ulonglong *)((longlong)&uStackX_8 + param_3) = *(ulonglong *)((longlong)&uStack_8 + param_3);
  uVar7 = *(ulonglong *)((longlong)&uStackX_8 + param_3);
  *(undefined8 *)((longlong)&uStackX_8 + param_3) = 0x14da62577;
  uVar5 = FUN_1649ac80b();
  *(undefined8 *)((longlong)&uStackX_8 + param_3) = *(undefined8 *)(unaff_RDI + -0x58);
  uVar8 = (ushort)uVar6;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x40);
  *(ulonglong *)((longlong)&uStackX_8 + param_3) = uVar2;
  lVar3 = *(longlong *)((longlong)&uStackX_8 + param_3);
  *(undefined4 *)((longlong)&uStackX_8 + param_3) = 0;
  *(undefined4 *)((longlong)&uStackX_8 + param_3 + 4) = 0;
  lVar4 = *(longlong *)((longlong)&uStackX_8 + param_3);
  *(undefined8 *)((longlong)&uStackX_8 + param_3) = uVar5;
  *(ulonglong *)(&stack0x00000000 + param_3) =
       CONCAT62((int6)((ulonglong)uVar6 >> 0x10),uVar8 >> 4 | uVar8 << 0xd);
  if (-1 < (longlong)(lVar4 + (lVar3 - uVar7) + (uVar2 | uVar7) * 2 + uVar2 * -2)) {
    uVar6 = FUN_15654f119();
    return uVar6;
  }
  *(undefined4 *)((longlong)&uStack_8 + param_3) = 0x99c733d;
  *(undefined4 *)((longlong)&uStack_8 + param_3 + 4) = 0;
  puVar1 = (undefined8 *)
           (&stack0xfffffffff6638ccb + *(longlong *)((longlong)&uStack_8 + param_3) + param_3);
  uVar6 = *puVar1;
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x30);
  *puVar1 = &DAT_15654f16a;
  return uVar6;
}



// FUNCTION 14da626b1 FUN_14da626b1 body=160 status=ok
// SIG undefined FUN_14da626b1(void)

void FUN_14da626b1(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar1 = ~(local_res20 & unaff_RBP) & unaff_RSI;
  *(undefined8 *)(uVar1 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = local_res8;
  *(undefined8 *)(uVar1 - 0x18) = local_res8;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  FUN_1664d202e();
  return;
}



// FUNCTION 14da62a45 FUN_14da62a45 body=77 status=ok
// SIG undefined FUN_14da62a45(void)

void FUN_14da62a45(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  (*(code *)&LAB_1568242de)(&LAB_1568242de,local_res8,param_3,uStackX_10);
  return;
}



// FUNCTION 14da62acf thunk_FUN_14da62ad5 body=5 status=ok
// SIG undefined thunk_FUN_14da62ad5(void)

void thunk_FUN_14da62ad5(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1655877fd(0x5b4bee81,param_2,*(longlong *)(unaff_R13 + -0x80) + unaff_R15);
  FUN_162300f81(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2);
  FUN_160d68848();
  return;
}



// FUNCTION 14da62ad5 FUN_14da62ad5 body=469 status=ok
// SIG undefined FUN_14da62ad5(void)

void FUN_14da62ad5(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1655877fd(0x5b4bee81,param_2,*(longlong *)(unaff_R13 + -0x80) + unaff_R15);
  FUN_162300f81(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2);
  FUN_160d68848();
  return;
}



// FUNCTION 14da62fc7 thunk_FUN_14da62fcd body=5 status=ok
// SIG undefined thunk_FUN_14da62fcd(void)

void thunk_FUN_14da62fcd(void)

{
  FUN_165ad172f();
  return;
}



// FUNCTION 14da62fcd FUN_14da62fcd body=104 status=ok
// SIG undefined FUN_14da62fcd(void)

void FUN_14da62fcd(void)

{
  FUN_165ad172f();
  return;
}



// FUNCTION 14da63035 FUN_14da63035 body=46 status=ok
// SIG undefined FUN_14da63035(void)

undefined8 FUN_14da63035(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da635b0 FUN_14da635b0 body=21 status=ok
// SIG undefined FUN_14da635b0(void)

void FUN_14da635b0(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da63c8b FUN_14da63c8b body=431 status=ok
// SIG undefined FUN_14da63c8b(void)

/* WARNING: Removing unreachable block (ram,0x00015b71044f) */
/* WARNING: Removing unreachable block (ram,0x00015b710477) */
/* WARNING: Removing unreachable block (ram,0x00015b71047b) */
/* WARNING: Removing unreachable block (ram,0x00014da63d28) */

undefined8 FUN_14da63c8b(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x30);
  uVar3 = ~((param_1 - (uVar1 | param_1)) + uVar1);
  if (((uVar1 | param_1) - (uVar3 | uVar1 | param_1)) + uVar3 == 0) {
    uVar2 = thunk_FUN_157546b08();
    return uVar2;
  }
  uVar2 = FUN_16610a1dd(param_1,(*(ulonglong *)(unaff_RDI + -0x50) + param_1) -
                                (*(ulonglong *)(unaff_RDI + -0x50) & param_1));
  return uVar2;
}



// FUNCTION 14da63d28 FUN_14da63d28 body=141 status=ok
// SIG undefined FUN_14da63d28(void)

undefined8 FUN_14da63d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ulonglong uVar2;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_10 & 4) != 0) * 4 | (ulonglong)((uStackX_10 & 1) != 0) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x28) = 0x54046d0d;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  uVar2 = *(ulonglong *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10 + (uVar2 ^ 0x54046d05)) = 0x2fb75f2;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = FUN_165c7153c;
  return uVar1;
}



// FUNCTION 14da63dbe FUN_14da63dbe body=327 status=ok
// SIG undefined FUN_14da63dbe(void)

/* WARNING: Removing unreachable block (ram,0x00014da63e4a) */
/* WARNING: Removing unreachable block (ram,0x00014da63e50) */

void FUN_14da63dbe(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined8 in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R15;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 local_res18;
  undefined8 local_res20;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(unaff_R12 + 0x10) = (~in_RAX | *(ulonglong *)(unaff_R12 + 0x10)) + in_RAX + 1;
  uVar5 = ~local_res20 & in_R11;
  uVar1 = ~in_stack_00000028 | in_RAX;
  LOCK();
  bVar3 = local_res18 < FUN_14d7c1613;
  bVar4 = SBORROW1(local_res18,FUN_14d7c1613);
  cVar2 = local_res18 - FUN_14d7c1613;
  if (cVar2 == '\0') {
    FUN_14d7c1613 = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar5 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar3 | (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 8) = 0x7f4db6;
  FUN_14d85d504(*(undefined8 *)(uVar1 - 0x10));
  return;
}



// FUNCTION 14da63f09 FUN_14da63f09 body=273 status=ok
// SIG undefined FUN_14da63f09(void)

/* WARNING: Removing unreachable block (ram,0x00014da63f8c) */

void FUN_14da63f09(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 unaff_R13;
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ param_1;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x162a6bbb8;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
  FUN_162a6bb9d(in_stack_00000010 ^ param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da63f92 FUN_14da63f92 body=43 status=ok
// SIG undefined FUN_14da63f92(void)

void FUN_14da63f92(void)

{
  return;
}



// FUNCTION 14da6417d FUN_14da6417d body=14 status=ok
// SIG undefined FUN_14da6417d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da6417d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da6429b thunk_FUN_14da642a1 body=5 status=ok
// SIG undefined thunk_FUN_14da642a1(void)

ulonglong thunk_FUN_14da642a1(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  return ~*(ulonglong *)(unaff_RDI + -0x80) | unaff_retaddr;
}



// FUNCTION 14da642a1 FUN_14da642a1 body=132 status=ok
// SIG undefined FUN_14da642a1(void)

ulonglong FUN_14da642a1(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  return ~*(ulonglong *)(unaff_RDI + -0x80) | unaff_retaddr;
}



// FUNCTION 14da64325 FUN_14da64325 body=217 status=ok
// SIG undefined FUN_14da64325(void)

/* WARNING: Removing unreachable block (ram,0x00014da643dd) */
/* WARNING: Removing unreachable block (ram,0x00014da643e3) */
/* WARNING: Removing unreachable block (ram,0x000162b57297) */
/* WARNING: Removing unreachable block (ram,0x000162b5732c) */
/* WARNING: Removing unreachable block (ram,0x000162b57332) */
/* WARNING: Removing unreachable block (ram,0x000156353fa4) */

undefined8 FUN_14da64325(void)

{
  undefined8 uVar1;
  uint unaff_ESI;
  int unaff_retaddr;
  undefined8 local_res8;
  uint uStackX_c;
  
  uVar1 = local_res8;
  uStackX_c = (uint)((ulonglong)local_res8 >> 0x20) | 0xfec13ee0;
  if (CONCAT44(~(unaff_ESI & (unaff_retaddr + 0x7b44b131U ^ 0x33c3419d)) & uStackX_c,(int)uVar1) ==
      0xf40ef6e0) {
    uVar1 = FUN_162b57297();
    return uVar1;
  }
  uVar1 = FUN_162cae668(FUN_162cae668);
  return uVar1;
}



// FUNCTION 14da643e3 FUN_14da643e3 body=167 status=ok
// SIG undefined FUN_14da643e3(void)

void FUN_14da643e3(void)

{
  (*(code *)0x161c94b16)();
  return;
}



// FUNCTION 14da6448b FUN_14da6448b body=86 status=ok
// SIG undefined FUN_14da6448b(void)

void FUN_14da6448b(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da6476c FUN_14da6476c body=297 status=ok
// SIG undefined FUN_14da6476c(void)

/* WARNING: Removing unreachable block (ram,0x00014da6480a) */
/* WARNING: Removing unreachable block (ram,0x00014da64810) */

void FUN_14da6476c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000010;
  
  FUN_156e8b94c(param_1,&stack0x00000008,param_3,FUN_156e8b94c,in_stack_00000008 ^ in_RAX,
                in_stack_00000010 + in_RAX + (in_stack_00000010 & in_RAX) * -2);
  FUN_16551d9cb(param_1);
  return;
}



// FUNCTION 14da64928 FUN_14da64928 body=41 status=ok
// SIG undefined FUN_14da64928(void)

void FUN_14da64928(void)

{
  return;
}



// FUNCTION 14da64952 FUN_14da64952 body=551 status=ok
// SIG undefined FUN_14da64952(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da64b19) overlaps instruction at (ram,0x00014da64b18)
    */
/* WARNING: Removing unreachable block (ram,0x00014da64a43) */
/* WARNING: Removing unreachable block (ram,0x00014da64a49) */
/* WARNING: Removing unreachable block (ram,0x00014da64b18) */
/* WARNING: Removing unreachable block (ram,0x00014da64b19) */
/* WARNING: Removing unreachable block (ram,0x00014da64b51) */
/* WARNING: Removing unreachable block (ram,0x00014da64b61) */
/* WARNING: Removing unreachable block (ram,0x00014e1e881f) */

undefined8
FUN_14da64952(ulonglong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  undefined8 unaff_R13;
  longlong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  if (unaff_RSI == 0x12f267) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x12f268) {
    return in_RAX;
  }
  if (unaff_RSI == 0x12f269) {
    FUN_162dc9562();
    *param_2 = -1 - (unaff_R15 + *param_2 + 1);
    *(undefined8 *)((~(param_5 & param_1) & (param_5 | param_1)) - 8) = unaff_R13;
    uVar1 = (*(code *)0x156a294e6)(local_res18,in_stack_00000008,uStackX_10,param_4);
    return uVar1;
  }
  if (unaff_RSI != 0x12f26a) {
    uVar1 = FUN_15723828d(param_1);
    return uVar1;
  }
  uVar1 = FUN_157238283();
  return uVar1;
}



// FUNCTION 14da64ba4 FUN_14da64ba4 body=128 status=ok
// SIG undefined FUN_14da64ba4(void)

void FUN_14da64ba4(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  
  FUN_166bf2308(param_1,~param_2 & unaff_RSI);
  return;
}



// FUNCTION 14da64d6c FUN_14da64d6c body=425 status=ok
// SIG undefined FUN_14da64d6c(void)

/* WARNING: Removing unreachable block (ram,0x00015b4bad30) */
/* WARNING: Removing unreachable block (ram,0x00014da64dd3) */
/* WARNING: Removing unreachable block (ram,0x00014da64dd9) */
/* WARNING: Removing unreachable block (ram,0x00016557172f) */

void FUN_14da64d6c(undefined8 param_1)

{
  FUN_15b4bad30(param_1,0x4d878cf0);
  return;
}



// FUNCTION 14da64fd7 FUN_14da64fd7 body=157 status=ok
// SIG undefined FUN_14da64fd7(void)

void FUN_14da64fd7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 local_res8;
  
  *(undefined8 *)(unaff_R15 + unaff_R13 + 0x5dbba56e) = 0;
  plVar1 = (longlong *)(unaff_R15 + unaff_R13 + 0x5dbba56e);
  *plVar1 = *plVar1 + local_res8;
  *(undefined8 *)(param_6 + -8) = unaff_RSI;
  thunk_FUN_1627e9fef(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da6507a FUN_14da6507a body=142 status=ok
// SIG undefined FUN_14da6507a(void)

/* WARNING: Removing unreachable block (ram,0x00014da650fd) */
/* WARNING: Removing unreachable block (ram,0x00014da65103) */

void FUN_14da6507a(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_16478c06d(*(ulonglong *)(param_2 + -0x48) ^ in_R10);
  FUN_165c7153c();
  return;
}



// FUNCTION 14da65109 FUN_14da65109 body=149 status=ok
// SIG undefined FUN_14da65109(void)

void FUN_14da65109(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162671e1f(param_1,param_2,param_3);
  FUN_165e93f27();
  return;
}



// FUNCTION 14da651a0 FUN_14da651a0 body=15 status=ok
// SIG undefined FUN_14da651a0(void)

void FUN_14da651a0(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14da65226 FUN_14da65226 body=151 status=ok
// SIG undefined FUN_14da65226(void)

void FUN_14da65226(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  thunk_FUN_15b642ca5(param_1,in_stack_00000008,param_3);
  return;
}



// FUNCTION 14da65556 FUN_14da65556 body=116 status=ok
// SIG undefined FUN_14da65556(void)

void FUN_14da65556(void)

{
  thunk_FUN_16137415e();
  return;
}



// FUNCTION 14da658b0 thunk_FUN_14da658b6 body=5 status=ok
// SIG undefined thunk_FUN_14da658b6(void)

/* WARNING: Removing unreachable block (ram,0x00014da65935) */

void thunk_FUN_14da658b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint in_EAX;
  
  FUN_1657da249(-(-1 - param_4) - (~in_EAX + 2),param_2);
  return;
}



// FUNCTION 14da658b6 FUN_14da658b6 body=334 status=ok
// SIG undefined FUN_14da658b6(void)

/* WARNING: Removing unreachable block (ram,0x00014da65935) */

void FUN_14da658b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint in_EAX;
  
  FUN_1657da249(-(-1 - param_4) - (~in_EAX + 2),param_2);
  return;
}



// FUNCTION 14da65b02 FUN_14da65b02 body=334 status=ok
// SIG undefined FUN_14da65b02(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da65b02(undefined8 param_1,undefined8 param_2)

{
  FUN_164828ffe(param_1,param_2);
  FUN_160eef02c();
  return;
}



// FUNCTION 14da65c52 FUN_14da65c52 body=329 status=ok
// SIG undefined FUN_14da65c52(void)

/* WARNING: Removing unreachable block (ram,0x0001565c8b2f) */
/* WARNING: Removing unreachable block (ram,0x0001565c8b35) */
/* WARNING: Removing unreachable block (ram,0x0001565c89d4) */
/* WARNING: Removing unreachable block (ram,0x0001565c89da) */
/* WARNING: Removing unreachable block (ram,0x00015b0f8540) */
/* WARNING: Removing unreachable block (ram,0x00015b1e3460) */
/* WARNING: Removing unreachable block (ram,0x00014da65ceb) */
/* WARNING: Removing unreachable block (ram,0x0001565c8935) */
/* WARNING: Removing unreachable block (ram,0x0001565c8995) */
/* WARNING: Removing unreachable block (ram,0x00014da65cf1) */

void FUN_14da65c52(void)

{
  FUN_1565c8935();
  return;
}



// FUNCTION 14da65d9d FUN_14da65d9d body=158 status=ok
// SIG undefined FUN_14da65d9d(void)

/* WARNING: Removing unreachable block (ram,0x00014da65dbc) */
/* WARNING: Removing unreachable block (ram,0x00014da65e2d) */
/* WARNING: Removing unreachable block (ram,0x00014da65e33) */
/* WARNING: Removing unreachable block (ram,0x00014da65e44) */

void FUN_14da65d9d(void)

{
  FUN_14dbd357f();
  return;
}



// FUNCTION 14da65e44 FUN_14da65e44 body=130 status=ok
// SIG undefined FUN_14da65e44(void)

void FUN_14da65e44(void)

{
  FUN_14e000184();
  FUN_14da65ec9();
  return;
}



// FUNCTION 14da65ec9 FUN_14da65ec9 body=135 status=ok
// SIG undefined FUN_14da65ec9(void)

void FUN_14da65ec9(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  
  FUN_1629cdd88(param_1,~(param_2 & in_RAX) & (~unaff_RSI & unaff_RDI | in_RAX),param_3,param_4);
  return;
}



// FUNCTION 14da65f51 FUN_14da65f51 body=123 status=ok
// SIG undefined FUN_14da65f51(void)

void FUN_14da65f51(void)

{
  FUN_1661659aa();
  return;
}



// FUNCTION 14da66069 FUN_14da66069 body=624 status=ok
// SIG undefined FUN_14da66069(void)

void FUN_14da66069(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar3 = *(ulonglong *)(unaff_R13 + param_4 + (unaff_retaddr ^ 0x524e0c2d));
  FUN_16471f0a4(param_1,local_res10,param_3,local_res8);
  if ((uVar3 & 0x40) != 0) {
    FUN_1566f09f1();
    return;
  }
  FUN_161be1317();
  plVar1 = (longlong *)(param_6 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x16471f0a4;
  *plVar1 = -*plVar1;
  *(longlong *)(param_6 + -0x10) = *plVar1;
  *plVar1 = 0x6c685519;
  *(undefined8 *)(param_6 + -0x18) = in_R10;
  *(undefined8 *)(param_6 + -0x20) = unaff_RBP;
  uVar3 = *(ulonglong *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x28) = unaff_RSI;
  *(ulonglong *)(param_6 + -8) = *(ulonglong *)(param_6 + -8) | 0xffffffff9397aae6;
  *(ulonglong *)(param_6 + -8) =
       ~((-0x6c68551a - (uVar3 | 0xffffffff9397aae6)) + uVar3) & *(ulonglong *)(param_6 + -8) ^
       0xffffffffffffffff;
  puVar2 = (ulonglong *)(param_6 + -8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + 0x16102228e;
  *(undefined8 *)(param_6 + -0x18) = local_res20;
  if ((uVar3 < 0xfffffffe9efddd72) && (0xfffffffe9efddd71 < uVar3)) {
    FUN_14da66273();
    return;
  }
  *(undefined8 *)(param_6 + -0x20) = *(undefined8 *)(param_6 + -0x20);
  *(undefined8 *)(param_6 + -0x20) = in_R11;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da66273 FUN_14da66273 body=2 status=ok
// SIG undefined FUN_14da66273(void)

undefined8 FUN_14da66273(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14da662f6 FUN_14da662f6 body=162 status=ok
// SIG undefined FUN_14da662f6(void)

void FUN_14da662f6(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) | in_RAX;
  *(ulonglong *)(unaff_RDI + 8) =
       ~((~(in_stack_00000008 + in_RAX) | uVar1) & *(ulonglong *)(unaff_RDI + 8));
  FUN_156d8b888(param_1,param_2,FUN_156d8b888);
  return;
}



// FUNCTION 14da664af FUN_14da664af body=147 status=ok
// SIG undefined FUN_14da664af(void)

void FUN_14da664af(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined1 *puVar3;
  short in_R10W;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  *param_2 = in_R10W + -0x100;
  *(undefined8 *)(param_5 + -8) = param_1;
  puVar3 = &LAB_1612546a3;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
  *(code **)(param_5 + -0x20) = FUN_14da66544;
  uVar2 = FUN_16125463d(&LAB_1612546a3,uStackX_10);
  uVar1 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = DAT_1612545cd;
  *(undefined8 *)(param_5 + -0x20) = DAT_161254635;
  *(undefined8 *)(param_5 + -0x28) = uVar1;
  *(undefined8 *)(param_5 + -0x30) = uVar1;
  *(undefined8 *)(param_5 + -0x38) = puVar3;
  uVar1 = *(undefined8 *)(param_5 + -0x38);
  *(undefined8 *)(param_5 + -0x28) = DAT_1612545a5;
  *(undefined8 *)(param_5 + -0x30) = param_3;
  *(undefined4 *)(param_5 + -0x38) = 0x848ca20c;
  *(undefined4 *)(param_5 + -0x34) = 0xffffffff;
  *(undefined8 *)(param_5 + -0x38) = in_stack_00000008;
  *(undefined8 *)(param_5 + -0x30) = uVar2;
  *(undefined8 *)(param_5 + -0x38) = in_R11;
  *(undefined8 *)(param_5 + -0x40) = in_R11;
  *(undefined1 **)(param_5 + -0x38) = &LAB_14da665ee;
  FUN_14d94924c(uVar1);
  return;
}



// FUNCTION 14da66544 FUN_14da66544 body=169 status=ok
// SIG undefined FUN_14da66544(void)

void FUN_14da66544(undefined8 param_1,undefined8 param_2,undefined8 param_3,short param_4)

{
  undefined1 in_CF;
  
  FUN_14d94924c(param_1,param_2,param_3,(ushort)(CONCAT12(in_CF,param_4) >> 5) | param_4 << 0xc);
  return;
}



// FUNCTION 14da665f4 FUN_14da665f4 body=173 status=ok
// SIG undefined FUN_14da665f4(void)

/* WARNING: Removing unreachable block (ram,0x00014da66745) */
/* WARNING: Removing unreachable block (ram,0x00014da66751) */
/* WARNING: Removing unreachable block (ram,0x00014da666a3) */

void FUN_14da665f4(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  uVar2 = (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x40)) &
          (~*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP);
  bVar1 = 0xffU - (char)uVar2 & 0x1f;
  uVar2 = (ulonglong)(uVar2 != 0) << 0x20 | unaff_RDI & 0xffffffff;
  if (((uVar2 >> bVar1 | uVar2 << 0x21 - bVar1) & 0x100000000) != 0) {
    FUN_161c37980();
    return;
  }
  FUN_161c37980();
  return;
}



// FUNCTION 14da666a3 FUN_14da666a3 body=178 status=ok
// SIG undefined FUN_14da666a3(void)

/* WARNING: Removing unreachable block (ram,0x00014da66745) */
/* WARNING: Removing unreachable block (ram,0x00014da66751) */

void FUN_14da666a3(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -8);
  FUN_1655c6d0e();
  FUN_164ab8656(uVar1 + local_res10 + (uVar1 & local_res10) * -2);
  return;
}



// FUNCTION 14da66757 FUN_14da66757 body=129 status=ok
// SIG undefined FUN_14da66757(void)

void FUN_14da66757(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_14d7fe644(0x3590a190,param_2,param_3,unaff_retaddr,*(undefined8 *)(unaff_RDI + -8),
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14da66872 FUN_14da66872 body=57 status=ok
// SIG undefined FUN_14da66872(void)

void FUN_14da66872(void)

{
  ulonglong *puVar1;
  longlong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff9228c60 + unaff_R15);
  *puVar1 = 0x450fc6aa;
  *puVar1 = *puVar1 ^ 0x450fc6aa;
  return;
}



// FUNCTION 14da668e5 FUN_14da668e5 body=440 status=ok
// SIG undefined FUN_14da668e5(void)

/* WARNING: Removing unreachable block (ram,0x000165dcd923) */
/* WARNING: Removing unreachable block (ram,0x000156ace9ed) */
/* WARNING: Removing unreachable block (ram,0x000164fcf066) */
/* WARNING: Removing unreachable block (ram,0x000164fcf07d) */
/* WARNING: Removing unreachable block (ram,0x000164fcf080) */
/* WARNING: Removing unreachable block (ram,0x000164fcf0a8) */
/* WARNING: Removing unreachable block (ram,0x000156ace9f3) */
/* WARNING: Removing unreachable block (ram,0x000165dcd886) */
/* WARNING: Removing unreachable block (ram,0x000165dcd928) */
/* WARNING: Removing unreachable block (ram,0x000156ace95b) */
/* WARNING: Removing unreachable block (ram,0x000156ace9e8) */
/* WARNING: Removing unreachable block (ram,0x000165dcd92e) */
/* WARNING: Removing unreachable block (ram,0x000165dcd875) */
/* WARNING: Removing unreachable block (ram,0x00014da66997) */

void FUN_14da668e5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  code *pcVar1;
  undefined8 in_RAX;
  longlong unaff_R13;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_R14) = in_RAX;
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  local_res18[1] = local_res18[1] ^ unaff_R15;
  puVar3 = (undefined8 *)
           ((~unaff_R15 | param_6) &
            (~((param_6 ^ 0xffffffffffffffff) & unaff_R15) + unaff_R15) -
            ~(param_6 ^ 0xffffffffffffffff) ^ 0xffffffffffffffff);
  pcVar1 = (code *)swi(0x2e);
  local_res18[0] = uVar2;
  (*pcVar1)(param_1,in_stack_00000008,param_3);
  *puVar3 = 0x9eef8c;
  *(ulonglong *)((longlong)puVar3 + -0x28c7) = uVar2;
  *(ulonglong *)((longlong)puVar3 + -0x28cf) = uVar2;
  *(undefined **)((longlong)puVar3 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14da66bd9 FUN_14da66bd9 body=160 status=ok
// SIG undefined FUN_14da66bd9(void)

void FUN_14da66bd9(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~(in_RAX | ~*(ulonglong *)(unaff_R12 + -0x78)) | in_RAX;
  FUN_15b958501(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (~uVar1 | *(ulonglong *)(unaff_R12 + -0x78) & in_RAX ^ 0xffffffffffffffff) + uVar1 +
                1);
  return;
}



// FUNCTION 14da66d22 FUN_14da66d22 body=130 status=ok
// SIG undefined FUN_14da66d22(void)

void FUN_14da66d22(undefined8 param_1,undefined8 param_2)

{
  FUN_165a5af51(param_1,param_2,FUN_165a5af51);
  return;
}



// FUNCTION 14da66da6 FUN_14da66da6 body=121 status=ok
// SIG undefined FUN_14da66da6(void)

/* WARNING: Removing unreachable block (ram,0x00014da66e00) */

void FUN_14da66da6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1665dd262(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da66e26 FUN_14da66e26 body=88 status=ok
// SIG undefined FUN_14da66e26(void)

undefined8 FUN_14da66e26(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  ulonglong in_stack_00000030;
  
  *(undefined8 *)(unaff_R13 + unaff_RDI) = unaff_RBX;
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  _fxrstor(in_stack_00000030);
  *(undefined8 *)(in_stack_00000030 - 8) = 0x50c46e0;
  *(undefined8 *)(in_stack_00000030 - 0x28cf) = uStackX_10;
  *(undefined8 *)(in_stack_00000030 - 0x28d7) = uStackX_10;
  *(undefined **)(in_stack_00000030 - 0x28cf) = &DAT_156ef2e4a;
  return in_RAX;
}



// FUNCTION 14da66eb1 FUN_14da66eb1 body=140 status=ok
// SIG undefined FUN_14da66eb1(void)

/* WARNING: Removing unreachable block (ram,0x00015641782f) */
/* WARNING: Removing unreachable block (ram,0x000165587f86) */
/* WARNING: Removing unreachable block (ram,0x00014da66fd9) */
/* WARNING: Removing unreachable block (ram,0x00014da6701a) */
/* WARNING: Removing unreachable block (ram,0x00014da6701f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da66eb1(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong in_R11;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar7;
  ulonglong uStackX_8;
  longlong lStack_10;
  
  uVar3 = -(param_1 - *(longlong *)(unaff_R13 + -0x78)) ^ unaff_R15;
  uVar1 = *(undefined8 *)(unaff_R13 + -0x30);
  FUN_160f9bf1c(uVar3,*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                      (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  *(int *)((longlong)&uStackX_8 + (in_R11 & 0xffffffff ^ 0x47375743)) = (int)uVar1 + (int)unaff_R15;
  pcVar4 = FUN_1624f81f3;
  uStackX_8 = uVar3;
  FUN_1624f81f3(FUN_1624f81f3,0xffffffffa1d05f20);
  uVar3 = ~(ulonglong)pcVar4 | *(ulonglong *)(unaff_R15 - 0x40);
  uVar6 = ~*(ulonglong *)(unaff_R15 - 0x40) | (ulonglong)pcVar4;
  uVar6 = ~((uVar6 - (uVar3 | uVar6)) + uVar3);
  bVar7 = pcVar4 + *(ulonglong *)(unaff_R15 - 0x50) <
          (code *)((*(ulonglong *)(unaff_R15 - 0x50) & (ulonglong)pcVar4) * 2);
  uVar3 = *(ulonglong *)(unaff_R15 - 0x30);
  if ((!bVar7) || (bVar7)) {
    FUN_165da000e();
    return;
  }
  lStack_10 = CONCAT44(lStack_10._4_4_,0xffffffff);
  uVar2 = FUN_164f9f050();
  uVar5 = *(ulonglong *)(uVar6 - 0x58);
  uVar5 = 0xffffffffffffffff - (uVar5 & uVar2) & (~uVar2 & uVar5 | uVar2);
  bVar7 = uVar5 == 0;
  FUN_1653555e5(uVar5,*(undefined8 *)(uVar6 - 0x78));
  if (bVar7) {
    FUN_16131bb16();
    return;
  }
  if (lStack_10 == 1) {
    FUN_16131bb16();
    return;
  }
  pcVar4 = FUN_14d91e5ae;
  FUN_14d91e5ae();
  uStackX_8 = uVar3;
  thunk_FUN_164f73978(pcVar4);
  return;
}



// FUNCTION 14da66f3f FUN_14da66f3f body=237 status=ok
// SIG undefined FUN_14da66f3f(void)

/* WARNING: Removing unreachable block (ram,0x00015641782f) */
/* WARNING: Removing unreachable block (ram,0x000165587f86) */
/* WARNING: Removing unreachable block (ram,0x00014da66fd9) */
/* WARNING: Removing unreachable block (ram,0x00014da6701a) */
/* WARNING: Removing unreachable block (ram,0x00014da6701f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da66f3f(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  ulonglong uVar5;
  bool bVar6;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  longlong lStack_10;
  
  *(undefined4 *)((longlong)&uStackX_8 + (unaff_retaddr & 0xffffffff ^ 0x47375743)) = unaff_EBP;
  pcVar2 = FUN_1624f81f3;
  uStackX_8 = param_1;
  FUN_1624f81f3(FUN_1624f81f3,0xffffffffa1d05f20);
  uVar4 = ~(ulonglong)pcVar2 | *(ulonglong *)(unaff_RDI + -0x40);
  uVar5 = ~*(ulonglong *)(unaff_RDI + -0x40) | (ulonglong)pcVar2;
  uVar5 = ~((uVar5 - (uVar4 | uVar5)) + uVar4);
  bVar6 = pcVar2 + *(ulonglong *)(unaff_RDI + -0x50) <
          (code *)((*(ulonglong *)(unaff_RDI + -0x50) & (ulonglong)pcVar2) * 2);
  uVar4 = *(ulonglong *)(unaff_RDI + -0x30);
  if ((!bVar6) || (bVar6)) {
    FUN_165da000e();
    return;
  }
  lStack_10 = CONCAT44(lStack_10._4_4_,0xffffffff);
  uVar1 = FUN_164f9f050();
  uVar3 = *(ulonglong *)(uVar5 - 0x58);
  uVar3 = 0xffffffffffffffff - (uVar3 & uVar1) & (~uVar1 & uVar3 | uVar1);
  bVar6 = uVar3 == 0;
  FUN_1653555e5(uVar3,*(undefined8 *)(uVar5 - 0x78));
  if (bVar6) {
    FUN_16131bb16();
    return;
  }
  if (lStack_10 == 1) {
    FUN_16131bb16();
    return;
  }
  pcVar2 = FUN_14d91e5ae;
  FUN_14d91e5ae();
  uStackX_8 = uVar4;
  thunk_FUN_164f73978(pcVar2);
  return;
}


