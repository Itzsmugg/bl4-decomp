// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db014df FUN_14db014df body=137 status=ok
// SIG undefined FUN_14db014df(void)

void FUN_14db014df(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_retaddr;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(param_4 + (unaff_retaddr ^ 0x3bc371f1)) = param_3;
  thunk_FUN_165b31ffd(param_1,param_2,in_stack_00000018,local_res10);
  return;
}



// FUNCTION 14db0169a FUN_14db0169a body=550 status=ok
// SIG undefined FUN_14db0169a(void)

/* WARNING: Removing unreachable block (ram,0x00014db017d2) */
/* WARNING: Removing unreachable block (ram,0x00014db017d8) */
/* WARNING: Removing unreachable block (ram,0x00014db01727) */
/* WARNING: Removing unreachable block (ram,0x00014db01732) */
/* WARNING: Removing unreachable block (ram,0x000161133353) */
/* WARNING: Removing unreachable block (ram,0x00014db0172d) */
/* WARNING: Removing unreachable block (ram,0x00015b9f9147) */
/* WARNING: Removing unreachable block (ram,0x00014e240de7) */
/* WARNING: Removing unreachable block (ram,0x00014e240e58) */
/* WARNING: Removing unreachable block (ram,0x00014e240e5e) */
/* WARNING: Removing unreachable block (ram,0x000165fe4917) */
/* WARNING: Removing unreachable block (ram,0x0001668d9f91) */
/* WARNING: Removing unreachable block (ram,0x000165fe498a) */
/* WARNING: Removing unreachable block (ram,0x000165fe4995) */
/* WARNING: Removing unreachable block (ram,0x000165fe4990) */
/* WARNING: Removing unreachable block (ram,0x00015b9f9088) */
/* WARNING: Removing unreachable block (ram,0x00015b9f912a) */
/* WARNING: Removing unreachable block (ram,0x00015b9f912f) */
/* WARNING: Removing unreachable block (ram,0x00014e240d50) */
/* WARNING: Removing unreachable block (ram,0x00014e240ddc) */
/* WARNING: Removing unreachable block (ram,0x00014e240de1) */
/* WARNING: Removing unreachable block (ram,0x00014dffe9ad) */
/* WARNING: Removing unreachable block (ram,0x00015b9f9135) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0169a(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_R10;
  longlong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(&stack0x00000008 + param_2);
  lVar2 = *(longlong *)(&stack0x00000008 + param_2);
  *(ulonglong *)(&stack0x00000008 + param_2) = ~*(ulonglong *)(&stack0x00000008 + param_2);
  *(ulonglong *)(&stack0x00000008 + param_2) = *(ulonglong *)(&stack0x00000008 + param_2) | param_1;
  *(ulonglong *)(&stack0x00000008 + param_2) =
       ~((~(~param_1 & uVar1) + lVar2) - param_1 & *(ulonglong *)(&stack0x00000008 + param_2));
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  if (-1 < unaff_R15) {
    *(undefined8 *)(uVar1 - 8) = in_R10;
    *(longlong *)(uVar1 - 0x10) = unaff_R15;
    FUN_16212c679(in_stack_00000010,in_stack_00000008,param_3,param_4);
    return;
  }
  FUN_161be3db6();
  return;
}



// FUNCTION 14db01918 thunk_FUN_14db0191e body=5 status=ok
// SIG undefined thunk_FUN_14db0191e(void)

/* WARNING: Removing unreachable block (ram,0x00014db0199d) */
/* WARNING: Removing unreachable block (ram,0x00014db019a3) */
/* WARNING: Removing unreachable block (ram,0x00014db019a8) */

void thunk_FUN_14db0191e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  undefined1 auStackX_18 [8];
  undefined8 uStackX_20;
  
  uVar1 = uStackX_20;
  uStackX_20 = param_3;
  FUN_14dd4f57b(uVar1,in_stack_00000010,FUN_14dd4f57b,auStackX_18);
  return;
}



// FUNCTION 14db0191e FUN_14db0191e body=141 status=ok
// SIG undefined FUN_14db0191e(void)

/* WARNING: Removing unreachable block (ram,0x00014db0199d) */
/* WARNING: Removing unreachable block (ram,0x00014db019a3) */
/* WARNING: Removing unreachable block (ram,0x00014db019a8) */

void FUN_14db0191e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  uVar1 = local_res20;
  local_res20 = param_3;
  FUN_14dd4f57b(uVar1,in_stack_00000010,FUN_14dd4f57b,local_res18);
  return;
}



// FUNCTION 14db019ae thunk_FUN_14db019b4 body=5 status=ok
// SIG undefined thunk_FUN_14db019b4(void)

undefined8 thunk_FUN_14db019b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_162c89264(unaff_retaddr,param_2);
  return uVar1;
}



// FUNCTION 14db019b4 FUN_14db019b4 body=308 status=ok
// SIG undefined FUN_14db019b4(void)

undefined8 FUN_14db019b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_162c89264(unaff_retaddr,param_2);
  return uVar1;
}



// FUNCTION 14db01b83 FUN_14db01b83 body=122 status=ok
// SIG undefined FUN_14db01b83(void)

/* WARNING: Removing unreachable block (ram,0x00014db01be6) */

undefined8 FUN_14db01b83(void)

{
  return 0xfffffffffffffff8;
}



// FUNCTION 14db01c08 FUN_14db01c08 body=294 status=ok
// SIG undefined FUN_14db01c08(void)

void FUN_14db01c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong unaff_R12;
  ulonglong unaff_retaddr;
  ulonglong uVar2;
  ulonglong in_stack_00000018;
  ulonglong uVar3;
  
  uVar2 = unaff_R12 ^ unaff_retaddr;
  uVar3 = in_stack_00000018 ^ unaff_retaddr;
  pcVar1 = FUN_161d9ff0c;
  FUN_161d9ff0c();
  (*(code *)0x165bafd34)(pcVar1,0x165bafd34,param_3,param_4,uVar2,uVar3);
  return;
}



// FUNCTION 14db01e5f FUN_14db01e5f body=199 status=ok
// SIG undefined FUN_14db01e5f(void)

void FUN_14db01e5f(void)

{
  return;
}



// FUNCTION 14db01fcc FUN_14db01fcc body=187 status=ok
// SIG undefined FUN_14db01fcc(void)

void FUN_14db01fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(&DAT_160eff3b9 + *(longlong *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_15b77f457;
  return;
}



// FUNCTION 14db02088 FUN_14db02088 body=142 status=ok
// SIG undefined FUN_14db02088(void)

undefined8 FUN_14db02088(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db02117 FUN_14db02117 body=113 status=ok
// SIG undefined FUN_14db02117(void)

void FUN_14db02117(void)

{
  ulonglong *puVar1;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x14db021a1;
                    /* WARNING: Could not recover jumptable at 0x00014db02186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_res8)();
  return;
}



// FUNCTION 14db0225e FUN_14db0225e body=154 status=ok
// SIG undefined FUN_14db0225e(void)

void FUN_14db0225e(undefined1 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  
  FUN_16485d13b(param_1,~(param_2 & in_RAX) & unaff_RDI);
  return;
}



// FUNCTION 14db0237a thunk_FUN_14db02380 body=5 status=ok
// SIG undefined thunk_FUN_14db02380(void)

void thunk_FUN_14db02380(void)

{
  return;
}



// FUNCTION 14db02380 FUN_14db02380 body=80 status=ok
// SIG undefined FUN_14db02380(void)

void FUN_14db02380(void)

{
  return;
}



// FUNCTION 14db02476 thunk_FUN_14db0247c body=5 status=ok
// SIG undefined thunk_FUN_14db0247c(void)

longlong thunk_FUN_14db0247c(longlong param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  plVar1 = (longlong *)(&stack0xfffffffff48b02e9 + unaff_RBP);
  *plVar1 = unaff_RDI;
  *plVar1 = *plVar1 + param_1;
  *plVar1 = (longlong)&LAB_1655410ca;
  return in_RAX + unaff_R15 + (in_RAX & unaff_R15) * -2;
}



// FUNCTION 14db0247c FUN_14db0247c body=138 status=ok
// SIG undefined FUN_14db0247c(void)

longlong FUN_14db0247c(longlong param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  plVar1 = (longlong *)(&stack0xfffffffff48b02e9 + unaff_RBP);
  *plVar1 = unaff_RDI;
  *plVar1 = *plVar1 + param_1;
  *plVar1 = (longlong)&LAB_1655410ca;
  return in_RAX + unaff_R15 + (in_RAX & unaff_R15) * -2;
}



// FUNCTION 14db02614 FUN_14db02614 body=176 status=ok
// SIG undefined FUN_14db02614(void)

void FUN_14db02614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_16685d500(param_1,*(undefined8 *)(unaff_RDI + -0x98),param_3);
  return;
}



// FUNCTION 14db02acc FUN_14db02acc body=80 status=ok
// SIG undefined FUN_14db02acc(void)

void FUN_14db02acc(void)

{
  FUN_14dc62bd0();
  return;
}



// FUNCTION 14db02c44 FUN_14db02c44 body=9 status=ok
// SIG undefined FUN_14db02c44(void)

void FUN_14db02c44(void)

{
  return;
}



// FUNCTION 14db03050 FUN_14db03050 body=166 status=ok
// SIG undefined FUN_14db03050(void)

short FUN_14db03050(void)

{
  short unaff_DI;
  
  return unaff_DI << 0xb;
}



// FUNCTION 14db030f9 FUN_14db030f9 body=145 status=ok
// SIG undefined FUN_14db030f9(void)

void FUN_14db030f9(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_164a5fbb3(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                unaff_RBX + param_3 * -2 + *(longlong *)(unaff_RDI + -0x70) ^ param_1);
  return;
}



// FUNCTION 14db032a5 FUN_14db032a5 body=122 status=ok
// SIG undefined FUN_14db032a5(void)

void FUN_14db032a5(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  
  FUN_166d3c5ba(param_1,param_2,param_3);
  FUN_1667df993(param_1,~param_2 & unaff_RSI);
  return;
}



// FUNCTION 14db0331f FUN_14db0331f body=141 status=ok
// SIG undefined FUN_14db0331f(void)

void FUN_14db0331f(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  
  FUN_1667df993(param_1,~param_2 & unaff_RSI,param_3,FUN_1667df993);
  return;
}



// FUNCTION 14db033c0 FUN_14db033c0 body=135 status=ok
// SIG undefined FUN_14db033c0(void)

/* WARNING: Removing unreachable block (ram,0x00014db03442) */
/* WARNING: Removing unreachable block (ram,0x00014db03448) */
/* WARNING: Removing unreachable block (ram,0x00014db034c0) */
/* WARNING: Removing unreachable block (ram,0x00014db034c2) */

undefined8 FUN_14db033c0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db03448 FUN_14db03448 body=139 status=ok
// SIG undefined FUN_14db03448(void)

/* WARNING: Removing unreachable block (ram,0x00014db034c0) */

void FUN_14db03448(void)

{
  return;
}



// FUNCTION 14db034d3 FUN_14db034d3 body=152 status=ok
// SIG undefined FUN_14db034d3(void)

void FUN_14db034d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,short *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_R11;
  short unaff_R14W;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *param_4 = 0;
  *param_4 = *param_4 - (unaff_R14W + 1);
  *param_4 = -*param_4;
  *(undefined8 *)(param_5 + -8) = param_1;
  *(undefined8 *)(param_5 + -0x10) = in_R11;
  *(undefined8 *)(param_5 + -0x18) = in_R11;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x28) = local_res8;
  *(undefined4 *)(param_5 + -0x28) = 0x86b9a37;
  *(undefined4 *)(param_5 + -0x24) = 0;
  uVar1 = *(undefined8 *)(param_5 + -0x18 + (*(ulonglong *)(param_5 + -0x28) ^ 0x86b9a27));
  uVar2 = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = local_res8;
  *(undefined8 *)(param_5 + -0x10) = uVar1;
  FUN_161caf1c3(&LAB_161caf21f,param_2,uVar2,uStackX_10);
  return;
}



// FUNCTION 14db0356d FUN_14db0356d body=60 status=ok
// SIG undefined FUN_14db0356d(void)

undefined8 FUN_14db0356d(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14db0363b FUN_14db0363b body=763 status=ok
// SIG undefined FUN_14db0363b(void)

/* WARNING: Removing unreachable block (ram,0x00014db03751) */
/* WARNING: Removing unreachable block (ram,0x00014db0380c) */
/* WARNING: Removing unreachable block (ram,0x00014db03812) */
/* WARNING: Removing unreachable block (ram,0x00014db0378a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0363b(void)

{
  longlong unaff_RBP;
  longlong unaff_R12;
  uint in_stack_00000010;
  
  if ((in_stack_00000010 >> 6 & 1) == 0) {
    FUN_14e0238ea();
    return;
  }
  FUN_162f5a06f();
  if (unaff_RBP - unaff_R12 < 0) {
    FUN_1650ae054();
    return;
  }
  FUN_1650ae054();
  return;
}



// FUNCTION 14db0396b FUN_14db0396b body=9 status=ok
// SIG undefined FUN_14db0396b(void)

void FUN_14db0396b(void)

{
  return;
}



// FUNCTION 14db039e8 FUN_14db039e8 body=129 status=ok
// SIG undefined FUN_14db039e8(void)

void FUN_14db039e8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x16187f408)
            (*(undefined8 *)(unaff_R12 + -0x58),0x16187f408,
             ~((~in_RAX | param_3) & (param_3 ^ 0xffffffffffffffff | in_RAX)));
  return;
}



// FUNCTION 14db03b6a FUN_14db03b6a body=421 status=ok
// SIG undefined FUN_14db03b6a(void)

void FUN_14db03b6a(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R14;
  
  FUN_14dbb4a03(param_1,~(((~param_2 | in_R10) - (~(~unaff_R14 & ~param_2) | ~param_2 | in_R10)) +
                         ~(~unaff_R14 & ~param_2)));
  lVar2 = *(longlong *)(unaff_R12 + -0x70);
  FUN_161aacb59();
  puVar1 = (ulonglong *)(&stack0x00000008 + lVar2);
  lVar3 = *(longlong *)(unaff_RDI + -0x70);
  *puVar1 = 0;
  *puVar1 = *puVar1 + lVar3;
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  *(ulonglong *)(&stack0x00000008 + lVar2) = *puVar1 ^ param_1;
  *(undefined4 *)(&stack0x00000008 + lVar2) = 0x692d6fde;
  *(undefined4 *)(&stack0x0000000c + lVar2) = 0;
  *(undefined8 *)(&stack0x00000008 + lVar2) = *(undefined8 *)(unaff_RDI + -0x88);
  *(undefined8 *)(&stack0x00000008 + lVar2) = param_4;
  FUN_1621e0e18();
  return;
}



// FUNCTION 14db03db1 thunk_FUN_14db03db7 body=5 status=ok
// SIG undefined thunk_FUN_14db03db7(void)

/* WARNING: Removing unreachable block (ram,0x00014db03dc1) */
/* WARNING: Removing unreachable block (ram,0x00014db03ee2) */
/* WARNING: Removing unreachable block (ram,0x00014db0400a) */
/* WARNING: Removing unreachable block (ram,0x00014db04010) */
/* WARNING: Removing unreachable block (ram,0x00015b1ccb72) */

void thunk_FUN_14db03db7(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  
  FUN_16150aa03();
  uVar1 = uStackX_18 ^ param_1;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(longlong *)(uVar1 - 0x10) = (-unaff_RDI - param_1) + (unaff_RDI | param_1) * 2;
  lVar3 = *(longlong *)(uVar1 - 0x10);
  *(ulonglong *)(uVar1 - 0x10) = param_4 ^ param_1;
  *(ulonglong *)(uVar1 - 0x18) = param_4 ^ param_1;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = uStackX_8;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x1654ff6e9;
  *(longlong *)(uVar1 - 0x10) = lVar3;
  *(longlong *)(uVar1 - 0x18) = lVar3;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(code **)(uVar1 - 0x10) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14db03db7 FUN_14db03db7 body=595 status=ok
// SIG undefined FUN_14db03db7(void)

/* WARNING: Removing unreachable block (ram,0x00014db03dc1) */
/* WARNING: Removing unreachable block (ram,0x00014db03ee2) */
/* WARNING: Removing unreachable block (ram,0x00014db0400a) */
/* WARNING: Removing unreachable block (ram,0x00014db04010) */
/* WARNING: Removing unreachable block (ram,0x00015b1ccb72) */

void FUN_14db03db7(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res8;
  ulonglong local_res18;
  
  FUN_16150aa03();
  uVar1 = local_res18 ^ param_1;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(longlong *)(uVar1 - 0x10) = (-unaff_RDI - param_1) + (unaff_RDI | param_1) * 2;
  lVar3 = *(longlong *)(uVar1 - 0x10);
  *(ulonglong *)(uVar1 - 0x10) = param_4 ^ param_1;
  *(ulonglong *)(uVar1 - 0x18) = param_4 ^ param_1;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x1654ff6e9;
  *(longlong *)(uVar1 - 0x10) = lVar3;
  *(longlong *)(uVar1 - 0x18) = lVar3;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(code **)(uVar1 - 0x10) = thunk_FUN_15b642ca5;
  return;
}



// FUNCTION 14db04010 FUN_14db04010 body=16 status=ok
// SIG undefined FUN_14db04010(void)

void FUN_14db04010(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db0401e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db04293 FUN_14db04293 body=317 status=ok
// SIG undefined FUN_14db04293(void)

/* WARNING: Removing unreachable block (ram,0x00014db043c7) */
/* WARNING: Removing unreachable block (ram,0x00014db043cd) */
/* WARNING: Removing unreachable block (ram,0x00014db043d8) */
/* WARNING: Removing unreachable block (ram,0x00014db04475) */
/* WARNING: Removing unreachable block (ram,0x00014db0447b) */
/* WARNING: Removing unreachable block (ram,0x0001565d890e) */

void FUN_14db04293(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_RDI;
  
  uVar1 = *unaff_RDI;
  uVar2 = *unaff_RDI;
  *unaff_RDI = 0;
  *unaff_RDI = *unaff_RDI + (~(uVar1 | 0xfeff) - 0x100) + uVar2;
  FUN_15b858f37();
  (*(code *)0x161472b40)();
  return;
}



// FUNCTION 14db043d8 FUN_14db043d8 body=197 status=ok
// SIG undefined FUN_14db043d8(void)

/* WARNING: Removing unreachable block (ram,0x00014db0447b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db043d8(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 in_AL;
  longlong lVar2;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  lVar2 = local_res20 + param_1 + (local_res20 & param_1) * -2;
  LOCK();
  UNLOCK();
  DAT_14d7bde86 = in_AL;
  *(undefined8 *)(lVar2 + -8) = param_3;
  *(undefined8 *)(lVar2 + -0x10) = param_3;
  *(undefined4 *)(lVar2 + -0x18) = 0x1222020f;
  *(undefined4 *)(lVar2 + -0x14) = 0;
  lVar1 = *(longlong *)(lVar2 + -0x18);
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(lVar2 + -0x18) = param_2;
  *(longlong *)(lVar2 + -8) = lVar1 + -0xde5532b;
  FUN_165c7153c(uStackX_10,*(undefined8 *)(lVar2 + -0x18),*(undefined8 *)(lVar2 + -0x10));
  return;
}



// FUNCTION 14db04481 FUN_14db04481 body=130 status=ok
// SIG undefined FUN_14db04481(void)

/* WARNING: Removing unreachable block (ram,0x00014db044f8) */
/* WARNING: Removing unreachable block (ram,0x00014db044fe) */
/* WARNING: Removing unreachable block (ram,0x00014db04503) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db04481(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_16272c0de(param_1,in_stack_00000008,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68)
                       );
  return uVar1;
}



// FUNCTION 14db04503 FUN_14db04503 body=155 status=ok
// SIG undefined FUN_14db04503(void)

undefined8 FUN_14db04503(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db046cd FUN_14db046cd body=563 status=ok
// SIG undefined FUN_14db046cd(void)

/* WARNING: Removing unreachable block (ram,0x000156d03373) */
/* WARNING: Removing unreachable block (ram,0x000156d03379) */
/* WARNING: Removing unreachable block (ram,0x00014db046e8) */
/* WARNING: Removing unreachable block (ram,0x00015681d21e) */
/* WARNING: Removing unreachable block (ram,0x00014db0475f) */

undefined8 FUN_14db046cd(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15681d21e();
  return uVar1;
}



// FUNCTION 14db047f3 FUN_14db047f3 body=135 status=ok
// SIG undefined FUN_14db047f3(void)

void FUN_14db047f3(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 local_res10;
  
  (*(code *)0x166215892)(param_1,param_2,local_res10 + in_RAX + (local_res10 & in_RAX) * -2);
  return;
}



// FUNCTION 14db0487b FUN_14db0487b body=471 status=ok
// SIG undefined FUN_14db0487b(void)

void FUN_14db0487b(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  longlong unaff_R14;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  lVar1 = *(longlong *)(unaff_R12 + -0x48);
  FUN_16227a377(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,uVar2);
  uVar3 = ~(unaff_R14 - *(longlong *)(unaff_R12 - lVar1)) + 1;
  FUN_1627846cf(uVar3 + unaff_RBP + (uVar3 & unaff_RBP) * -2,
                CONCAT71((int7)(uVar2 >> 8),0x2b) ^ 0x1f,0xfffffffffffffff8,8);
  return;
}



// FUNCTION 14db04b0d FUN_14db04b0d body=47 status=ok
// SIG undefined FUN_14db04b0d(void)

undefined8 FUN_14db04b0d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db04ba3 FUN_14db04ba3 body=379 status=ok
// SIG undefined FUN_14db04ba3(void)

/* WARNING: Removing unreachable block (ram,0x00014db04c70) */
/* WARNING: Removing unreachable block (ram,0x00014db04c61) */

undefined8 FUN_14db04ba3(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_R14;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  
  FUN_162bafaaf(param_1,local_res8,in_stack_00000010,
                -2 - ~-(param_2 - (param_4 & unaff_R14) ^ 0xffffffffffffffff));
  uVar1 = FUN_160ee2950();
  return uVar1;
}



// FUNCTION 14db04d24 FUN_14db04d24 body=156 status=ok
// SIG undefined FUN_14db04d24(void)

/* WARNING: Removing unreachable block (ram,0x00014db04db1) */
/* WARNING: Removing unreachable block (ram,0x00014db04dc2) */
/* WARNING: Removing unreachable block (ram,0x00014d97d0fe) */
/* WARNING: Removing unreachable block (ram,0x00014d97d104) */
/* WARNING: Removing unreachable block (ram,0x00014d97d10a) */
/* WARNING: Removing unreachable block (ram,0x0001573c7a9d) */
/* WARNING: Removing unreachable block (ram,0x00014db04dbd) */

undefined8 FUN_14db04d24(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  uVar2 = FUN_164b9017e(param_1,CONCAT71((int7)(uVar2 >> 8),unaff_SIL),
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                        0xffffffffffffffff -
                        ((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) + param_1 + 1) & uVar2);
  uVar1 = FUN_166cca2a7(*(ulonglong *)(unaff_R12 + -0x58) + uVar2 +
                        ~(~*(ulonglong *)(unaff_R12 + -0x58) | ~uVar2) * -2,
                        *(undefined8 *)(unaff_R12 + -0x78),
                        *(ulonglong *)(unaff_R12 + -0x80) + uVar2 +
                        ~(~*(ulonglong *)(unaff_R12 + -0x80) | ~uVar2) * -2,
                        *(ulonglong *)(unaff_R12 + -0x30) ^ uVar2);
  return uVar1;
}



// FUNCTION 14db04dc2 FUN_14db04dc2 body=122 status=ok
// SIG undefined FUN_14db04dc2(void)

void FUN_14db04dc2(void)

{
  ulonglong *puVar1;
  undefined1 in_AL;
  undefined8 in_R11;
  ushort uVar2;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  uVar2 = (-0x101 - (local_res10 | 0xfeff)) + local_res10;
  LOCK();
  UNLOCK();
  puVar1 = (ulonglong *)(local_res18 + -8);
  DAT_14d7a90bd = in_AL;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *puVar1 = 0x6d92d78d;
  *puVar1 = *puVar1 ^ 0x6c5a69e5;
  FUN_14d85d504();
  return;
}



// FUNCTION 14db04e57 FUN_14db04e57 body=176 status=ok
// SIG undefined FUN_14db04e57(void)

/* WARNING: Removing unreachable block (ram,0x00014db04e78) */

void FUN_14db04e57(undefined8 param_1)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R15;
  
  FUN_1656e5721(param_1,0xfffffffffffffff8,unaff_RBX ^ unaff_R15);
  return;
}



// FUNCTION 14db04f07 FUN_14db04f07 body=164 status=ok
// SIG undefined FUN_14db04f07(void)

undefined8 FUN_14db04f07(void)

{
  return 0xfffffffffffffff8;
}



// FUNCTION 14db04fad FUN_14db04fad body=440 status=ok
// SIG undefined FUN_14db04fad(void)

void FUN_14db04fad(void)

{
  FUN_1669a196c();
  FUN_14d8e0c68();
  return;
}



// FUNCTION 14db050d4 FUN_14db050d4 body=159 status=ok
// SIG undefined FUN_14db050d4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7a9168) */

void FUN_14db050d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong lVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined4 *)(local_res18 + -0x28) = 0x8947ea0;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x28) + -0x8947e90;
  *(undefined8 *)(local_res18 + -0x28) = in_RAX;
  *(undefined8 *)(local_res18 + -0x30) = unaff_RSI;
  *(undefined1 **)(local_res18 + -0x38) = &LAB_15738794b;
  if (CARRY8(~*(ulonglong *)(local_res18 + -0x18 + lVar1),
             *(ulonglong *)(local_res18 + -0x18 + lVar1))) {
    FUN_157379cb6();
    return;
  }
  FUN_157379cb6();
  return;
}



// FUNCTION 14db05176 FUN_14db05176 body=116 status=ok
// SIG undefined FUN_14db05176(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db05176(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = param_1;
  *(undefined8 *)(lStackX_18 + -0x10) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x20) = param_3;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_RDI;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -8) = 0;
  *(longlong *)(lStackX_18 + -8) = (longlong)(&DAT_14db05205 + *(longlong *)(lStackX_18 + -8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db0523a FUN_14db0523a body=77 status=ok
// SIG undefined FUN_14db0523a(void)

/* WARNING: Removing unreachable block (ram,0x00015b4a8a85) */
/* WARNING: Removing unreachable block (ram,0x00015b4a8a90) */
/* WARNING: Removing unreachable block (ram,0x00014db052c6) */

void FUN_14db0523a(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1624a9ed5((-unaff_RBP - *(ulonglong *)(unaff_RSI + -0x38)) +
                (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP) * 2,
                -((*(ulonglong *)(unaff_RSI + -0x58) - unaff_RBP) +
                 (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58)) * -2 + -2));
  (*(code *)0x157250fca)();
  return;
}



// FUNCTION 14db057ee FUN_14db057ee body=151 status=ok
// SIG undefined FUN_14db057ee(void)

void FUN_14db057ee(void)

{
  FUN_164b4307e();
  return;
}



// FUNCTION 14db0588c FUN_14db0588c body=128 status=ok
// SIG undefined FUN_14db0588c(void)

void FUN_14db0588c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  thunk_FUN_15b642ca5(param_1,local_res10,param_3);
  return;
}



// FUNCTION 14db059e3 FUN_14db059e3 body=136 status=ok
// SIG undefined FUN_14db059e3(void)

void FUN_14db059e3(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  undefined8 local_res20;
  
  *(undefined8 *)(unaff_R13 + unaff_RBX) = 0;
  *(longlong *)(unaff_R13 + unaff_RBX) = *(longlong *)(unaff_R13 + unaff_RBX) - param_2;
  *(longlong *)(unaff_R13 + unaff_RBX) = -*(longlong *)(unaff_R13 + unaff_RBX);
  (*(code *)0x1573dc7ba)(param_1,local_res20);
  return;
}



// FUNCTION 14db05b05 FUN_14db05b05 body=169 status=ok
// SIG undefined FUN_14db05b05(void)

void FUN_14db05b05(void)

{
  return;
}



// FUNCTION 14db060d8 FUN_14db060d8 body=186 status=ok
// SIG undefined FUN_14db060d8(void)

undefined * FUN_14db060d8(void)

{
  return &DAT_1657b4ef3;
}



// FUNCTION 14db06195 FUN_14db06195 body=16 status=ok
// SIG undefined FUN_14db06195(void)

void FUN_14db06195(void)

{
  return;
}



// FUNCTION 14db063d6 FUN_14db063d6 body=171 status=ok
// SIG undefined FUN_14db063d6(void)

/* WARNING: Removing unreachable block (ram,0x00014db06476) */
/* WARNING: Removing unreachable block (ram,0x00014db06481) */
/* WARNING: Removing unreachable block (ram,0x00014db0647c) */
/* WARNING: Removing unreachable block (ram,0x00014db0642b) */

void FUN_14db063d6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166474abf(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15,FUN_166474abf);
  return;
}



// FUNCTION 14db06481 FUN_14db06481 body=162 status=ok
// SIG undefined FUN_14db06481(void)

void FUN_14db06481(void)

{
  FUN_14e237f55();
  return;
}



// FUNCTION 14db065a2 FUN_14db065a2 body=147 status=ok
// SIG undefined FUN_14db065a2(void)

void FUN_14db065a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b29da66(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db066ca FUN_14db066ca body=140 status=ok
// SIG undefined FUN_14db066ca(void)

void FUN_14db066ca(void)

{
  return;
}



// FUNCTION 14db068b9 FUN_14db068b9 body=462 status=ok
// SIG undefined FUN_14db068b9(void)

/* WARNING: Removing unreachable block (ram,0x000161c233f9) */
/* WARNING: Removing unreachable block (ram,0x000161c23364) */
/* WARNING: Removing unreachable block (ram,0x000161c233ca) */
/* WARNING: Removing unreachable block (ram,0x000161c233cf) */
/* WARNING: Removing unreachable block (ram,0x000161c233ee) */
/* WARNING: Removing unreachable block (ram,0x000161c233f4) */
/* WARNING: Removing unreachable block (ram,0x00016572c738) */
/* WARNING: Removing unreachable block (ram,0x00014db0695c) */
/* WARNING: Removing unreachable block (ram,0x00014db069f2) */
/* WARNING: Removing unreachable block (ram,0x00014db069f8) */
/* WARNING: Removing unreachable block (ram,0x0001661c1477) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db068b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  short local_res18;
  ulonglong uStackX_20;
  
  *(undefined8 *)((uStackX_20 ^ in_RAX) - 8) = unaff_R12;
  *(undefined8 *)((uStackX_20 ^ in_RAX) - 0x10) = param_3;
  if ((local_res18 - 0x100U & 1) != 0) {
    FUN_1617a3bee(param_1,in_stack_00000008);
    return;
  }
  FUN_1617a3bee(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14db06c34 FUN_14db06c34 body=163 status=ok
// SIG undefined FUN_14db06c34(void)

void FUN_14db06c34(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xffffffffff3fb686 + unaff_retaddr);
  *puVar1 = 0x58afdd56;
  *(undefined8 *)(&stack0xffffffffff3fb67e + unaff_retaddr) = unaff_R14;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xffffffffa75022a9;
  *puVar1 = ~(~(uVar2 & 0xffffffffa75022a9) & *puVar1);
  *(undefined4 *)puVar1 = 0xc5fd102f;
  *puVar1 = param_1;
  *(undefined8 *)(&stack0xffffffffff3fb67e + unaff_retaddr) = unaff_R15;
  *(undefined8 *)(&stack0xffffffffff3fb67e + unaff_retaddr) = 0x14db06ccf;
  FUN_1619e1046();
  return;
}



// FUNCTION 14db06df5 FUN_14db06df5 body=84 status=ok
// SIG undefined FUN_14db06df5(void)

void FUN_14db06df5(void)

{
  return;
}



// FUNCTION 14db06eea FUN_14db06eea body=473 status=ok
// SIG undefined FUN_14db06eea(void)

void FUN_14db06eea(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16498a466(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14db06f82 FUN_14db06f82 body=148 status=ok
// SIG undefined FUN_14db06f82(void)

void FUN_14db06f82(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_166659a98(param_1,-~*(ulonglong *)(unaff_RDI + -0x68) - 1 ^ param_1,param_3);
  return;
}



// FUNCTION 14db070c8 FUN_14db070c8 body=140 status=ok
// SIG undefined FUN_14db070c8(void)

/* WARNING: Removing unreachable block (ram,0x00014db071ac) */

longlong FUN_14db070c8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_15b27f018(param_1,unaff_retaddr,param_3,*(undefined8 *)(param_1 + -0x30));
  return ~(~*(ulonglong *)(unaff_R13 + -0x38) | ~unaff_R15) << 1;
}



// FUNCTION 14db07155 FUN_14db07155 body=170 status=ok
// SIG undefined FUN_14db07155(void)

/* WARNING: Removing unreachable block (ram,0x00014db071ac) */

longlong FUN_14db07155(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~(~*(ulonglong *)(unaff_R13 + -0x38) | ~unaff_R15) << 1;
}



// FUNCTION 14db073d0 FUN_14db073d0 body=322 status=ok
// SIG undefined FUN_14db073d0(void)

/* WARNING: Removing unreachable block (ram,0x00014db07463) */

undefined8 FUN_14db073d0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db07463 FUN_14db07463 body=83 status=ok
// SIG undefined FUN_14db07463(void)

undefined8 FUN_14db07463(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db074e1 FUN_14db074e1 body=114 status=ok
// SIG undefined FUN_14db074e1(void)

void FUN_14db074e1(void)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R13;
  
  if ((unaff_R13 & (unaff_RSI >> 1 ^ unaff_RSI << 0x3f)) == 0) {
    FUN_1661fce71();
    return;
  }
  return;
}



// FUNCTION 14db07554 FUN_14db07554 body=142 status=ok
// SIG undefined FUN_14db07554(void)

/* WARNING: Removing unreachable block (ram,0x00014db0756b) */
/* WARNING: Removing unreachable block (ram,0x0001664b71ab) */
/* WARNING: Removing unreachable block (ram,0x00014db075e2) */

void FUN_14db07554(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = *(ulonglong *)(param_1 + -0x78);
  FUN_15b991858((char)param_1,
                ~((~(~unaff_RBX & uVar1) + uVar1) - unaff_RBX &
                 (~(~uVar1 & unaff_RBX) + unaff_RBX) - uVar1));
  return;
}



// FUNCTION 14db075e2 FUN_14db075e2 body=290 status=ok
// SIG undefined FUN_14db075e2(void)

/* WARNING: Removing unreachable block (ram,0x0001664b71ab) */

void FUN_14db075e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  longlong lVar1;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  lVar1 = local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(ulonglong *)(lVar1 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x18) = 0;
  *(ulonglong *)(lVar1 + -0x18) = *(ulonglong *)(lVar1 + -0x18) ^ unaff_R13;
  *(undefined8 *)(lVar1 + -0x20) = param_3;
  *(undefined8 *)(lVar1 + -0x28) = unaff_retaddr;
  *(undefined **)(lVar1 + -0x30) = &DAT_1664b7237;
  *(undefined **)(lVar1 + -0x38) = &DAT_1664b7237;
  *(undefined **)(lVar1 + -0x30) = &DAT_14db07695;
  return;
}



// FUNCTION 14db07730 FUN_14db07730 body=115 status=ok
// SIG undefined FUN_14db07730(void)

void FUN_14db07730(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14db07b13 FUN_14db07b13 body=245 status=ok
// SIG undefined FUN_14db07b13(void)

/* WARNING: Removing unreachable block (ram,0x00014db07ba6) */
/* WARNING: Removing unreachable block (ram,0x00014db07c9c) */
/* WARNING: Removing unreachable block (ram,0x00014db07ca3) */
/* WARNING: Removing unreachable block (ram,0x00014db07cab) */
/* WARNING: Removing unreachable block (ram,0x0001618271d4) */

undefined1 * FUN_14db07b13(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong unaff_R12;
  ulonglong *puVar3;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  puVar3 = (ulonglong *)(unaff_R12 ^ param_2);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 ^ 0xffffffffffffffff;
  *puVar3 = *puVar3 | unaff_R15;
  *puVar3 = 0xffffffffffffffff - ((~unaff_R15 | uVar1) & *puVar3);
  if (((~unaff_R15 + local_res20) - (~unaff_R15 & local_res20) & (~local_res20 | unaff_R15)) == 0) {
    puVar2 = (undefined1 *)FUN_161a87044();
    return puVar2;
  }
  return &LAB_1628f6792;
}



// FUNCTION 14db07c09 FUN_14db07c09 body=308 status=ok
// SIG undefined FUN_14db07c09(void)

/* WARNING: Removing unreachable block (ram,0x00014db07cab) */

undefined8 FUN_14db07c09(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  int unaff_ESI;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong uVar2;
  
  uVar2 = CONCAT44((int)((ulonglong)in_stack_00000008 >> 0x20),(int)in_stack_00000008 - unaff_ESI) ^
          0x422a6ed;
  if ((~((uVar2 | 0x7252bc72) - 0x7252bc72) & (uVar2 | 0xffffffff8dad438d)) == 0xffffffffffffffff) {
    return in_RAX;
  }
  uVar1 = FUN_1618271d4(param_1,unaff_retaddr,param_3);
  return uVar1;
}



// FUNCTION 14db07dd5 FUN_14db07dd5 body=141 status=ok
// SIG undefined FUN_14db07dd5(void)

void FUN_14db07dd5(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  longlong unaff_R12;
  
  (*(code *)0x14daf7466)
            (~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
             ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX
             ,in_R9 ^ in_RAX);
  return;
}



// FUNCTION 14db07ef7 FUN_14db07ef7 body=422 status=ok
// SIG undefined FUN_14db07ef7(void)

/* WARNING: Removing unreachable block (ram,0x00014db07f88) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db07ef7(undefined8 param_1,undefined8 param_2)

{
  FUN_156d4b21f(param_1,param_2,FUN_156d4b21f);
  return;
}



// FUNCTION 14db080a1 FUN_14db080a1 body=305 status=ok
// SIG undefined FUN_14db080a1(void)

/* WARNING: Removing unreachable block (ram,0x00014db08140) */
/* WARNING: Removing unreachable block (ram,0x00014db08178) */

void FUN_14db080a1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 unaff_R12;
  longlong lVar16;
  ulonglong unaff_R14;
  ulonglong uVar17;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  ulonglong auStack_28 [2];
  undefined8 uStack_18;
  ulonglong auStack_10 [2];
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  lVar3 = in_stack_00000018 + param_1 + ~(~in_stack_00000018 | ~param_1) * -2;
  if (in_stack_00000018 + param_1 < ~(~in_stack_00000018 | ~param_1) * 2) {
    auStack_10[1] = param_3;
    thunk_FUN_15b044e96();
    return;
  }
  lVar16 = CONCAT62((int6)((ulonglong)unaff_R12 >> 0x10),-0x102 - ~-((ushort)lVar3 | 0xfeff));
  auStack_10[0] = 0x15b044f33;
  uVar4 = FUN_162897667(~(in_stack_00000010 & param_1) &
                        (unaff_R14 + param_1) - (unaff_R14 & param_1),param_2,param_3,param_4,lVar3,
                        in_stack_00000020 ^ param_1);
  uVar2 = *(ulonglong *)(lVar16 + -0x88);
  lVar15 = uVar2 + uVar4 + (uVar2 & uVar4) * -2;
  auStack_10[0] = 0x5655e6df;
  uStack_18 = 0x15b044fe5;
  uVar5 = FUN_15704c96e();
  uVar2 = auStack_10[0];
  lVar3 = auStack_10[0] + 8;
  puVar6 = (undefined4 *)((longlong)auStack_10 + auStack_10[0]);
  puVar7 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar8 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar9 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar10 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar11 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar12 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  puVar13 = (uint *)((longlong)auStack_10 + auStack_10[0]);
  *(undefined8 *)((longlong)auStack_10 + auStack_10[0]) = uVar5;
  *puVar6 = 0;
  *(longlong *)((longlong)&uStack_18 + uVar2) = lVar16;
  uVar1 = *puVar7;
  *puVar9 = *puVar8 & 0x1cd5b4da;
  *puVar11 = ~*puVar10;
  *puVar13 = *puVar12 & (uVar1 | 0x1cd5b4da);
  *(undefined8 *)((longlong)&uStack_18 + uVar2) = 0;
  *(undefined4 *)((longlong)&uStack_18 + uVar2) = 0x637f4210;
  *(uint *)((longlong)auStack_10 + uVar2) =
       *(uint *)((longlong)auStack_10 + uVar2) ^
       (int)*(undefined8 *)((longlong)&uStack_18 + uVar2) + 0x1c58c10bU;
  *(undefined4 *)((longlong)&uStack_18 + uVar2) = 0x6a70f41d;
  *(undefined4 *)((longlong)&uStack_18 + uVar2 + 4) = 0;
  uVar14 = ~((*(ulonglong *)((longlong)&uStack_18 + uVar2) & 0xffffffff958f0be6 ^ 0xffffffffffffffff
             ) & (*(ulonglong *)((longlong)&uStack_18 + uVar2) | 0xffffffff958f0be6));
  *(undefined4 *)((longlong)auStack_10 + uVar14 + uVar2) = 0xaf44156a;
  *(undefined8 *)((longlong)&uStack_18 + uVar2) = uVar5;
  *(undefined8 *)((longlong)auStack_28 + uVar2 + 8) = 0x15b04507f;
  uVar4 = uVar14;
  FUN_16623678d();
  uVar17 = *(ulonglong *)((longlong)&uStack_18 + uVar2);
  *(ulonglong *)((longlong)&uStack_18 + uVar2) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)((longlong)auStack_28 + uVar2 + 8) = param_3;
  *(ulonglong *)((longlong)auStack_28 + uVar2) = uVar4;
  *(longlong *)((longlong)&uStack_18 + uVar2) = lVar15;
  *(undefined8 *)((longlong)auStack_10 + lVar3) = 0x2ae7476;
  *(ulonglong *)((longlong)auStack_10 + uVar2) = uVar14;
  *(ulonglong *)((longlong)&uStack_18 + uVar2) = uVar14;
  *(undefined8 *)((longlong)auStack_10 + uVar2) = 0x156ef2e25;
  return;
}



// FUNCTION 14db08272 FUN_14db08272 body=179 status=ok
// SIG undefined FUN_14db08272(void)

/* WARNING: Removing unreachable block (ram,0x00014db08325) */
/* WARNING: Removing unreachable block (ram,0x0001610fa387) */
/* WARNING: Removing unreachable block (ram,0x0001610fa405) */
/* WARNING: Removing unreachable block (ram,0x00014db083a0) */
/* WARNING: Removing unreachable block (ram,0x00014db083a6) */
/* WARNING: Removing unreachable block (ram,0x00014db083ab) */

void FUN_14db08272(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  *(undefined8 *)(uVar1 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_160b63fa8 + *(longlong *)(uVar1 - 8);
  if (0xfffffffe9f49c057 < uVar2) {
    FUN_160b63f8e();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000160b63f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res10);
  return;
}



// FUNCTION 14db08325 FUN_14db08325 body=137 status=ok
// SIG undefined FUN_14db08325(void)

/* WARNING: Removing unreachable block (ram,0x00014db083ab) */

void FUN_14db08325(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x70);
  uVar2 = (~((in_RAX ^ 0xffffffffffffffff) & uVar1) + uVar1) - ~(in_RAX ^ 0xffffffffffffffff);
  if ((~uVar2 - ~(uVar2 & (~uVar1 | in_RAX))) + uVar2 != 0) {
    FUN_165e294f7();
    return;
  }
  FUN_1610fa387();
  return;
}



// FUNCTION 14db083b1 FUN_14db083b1 body=138 status=ok
// SIG undefined FUN_14db083b1(void)

/* WARNING: Removing unreachable block (ram,0x00014db0843c) */
/* WARNING: Removing unreachable block (ram,0x00014db084c4) */
/* WARNING: Removing unreachable block (ram,0x000157463db4) */
/* WARNING: Removing unreachable block (ram,0x00014db084ca) */

void FUN_14db083b1(undefined8 param_1)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  *(ulonglong *)(in_RAX + 8) = (~unaff_RBX | *(ulonglong *)(in_RAX + 8)) + unaff_RBX + 1;
  if (-1 < (longlong)((local_res20 & unaff_RBX) * 2)) {
    FUN_162f563ea();
    return;
  }
  FUN_16291f590(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14db0843c FUN_14db0843c body=147 status=ok
// SIG undefined FUN_14db0843c(void)

/* WARNING: Removing unreachable block (ram,0x00014db084ca) */

void FUN_14db0843c(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  
  FUN_165fdae2e(param_1,~((~unaff_RBP | param_2) & (~param_2 | unaff_RBP)),param_3,param_4);
  return;
}



// FUNCTION 14db084d0 FUN_14db084d0 body=182 status=ok
// SIG undefined FUN_14db084d0(void)

/* WARNING: Removing unreachable block (ram,0x00014db08586) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db084d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R12;
  undefined8 local_res18;
  
  if (*(longlong *)(unaff_R12 + -0x98) == 0) {
    uVar1 = FUN_161c6cc02();
    return uVar1;
  }
  uVar1 = FUN_15b4ac97d(param_1,FUN_15b4ac97d,param_3,local_res18);
  return uVar1;
}



// FUNCTION 14db08586 FUN_14db08586 body=89 status=ok
// SIG undefined FUN_14db08586(void)

ulonglong FUN_14db08586(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14db0861f FUN_14db0861f body=158 status=ok
// SIG undefined FUN_14db0861f(void)

/* WARNING: Instruction at (ram,0x00014d994425) overlaps instruction at (ram,0x00014d994424)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db086e8) */
/* WARNING: Removing unreachable block (ram,0x0001668f22eb) */
/* WARNING: Removing unreachable block (ram,0x0001668f22f1) */
/* WARNING: Removing unreachable block (ram,0x0001668f2384) */
/* WARNING: Removing unreachable block (ram,0x0001668f238a) */
/* WARNING: Removing unreachable block (ram,0x0001668f24b3) */
/* WARNING: Removing unreachable block (ram,0x0001668f24b9) */
/* WARNING: Removing unreachable block (ram,0x0001668f24bf) */
/* WARNING: Removing unreachable block (ram,0x0001668f24c3) */
/* WARNING: Removing unreachable block (ram,0x0001668f2603) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001669ec226) */
/* WARNING: Removing unreachable block (ram,0x000161cc5eb5) */
/* WARNING: Removing unreachable block (ram,0x000162f4b864) */
/* WARNING: Removing unreachable block (ram,0x000161cc5f38) */
/* WARNING: Removing unreachable block (ram,0x000161cc5f44) */
/* WARNING: Removing unreachable block (ram,0x000161cc5f49) */
/* WARNING: Removing unreachable block (ram,0x000161cc5f96) */
/* WARNING: Removing unreachable block (ram,0x00014d7aaf7d) */
/* WARNING: Removing unreachable block (ram,0x0001662d6581) */
/* WARNING: Removing unreachable block (ram,0x0001668f2609) */
/* WARNING: Removing unreachable block (ram,0x0001668f2239) */
/* WARNING: Removing unreachable block (ram,0x0001668f2245) */
/* WARNING: Removing unreachable block (ram,0x0001624007a8) */
/* WARNING: Removing unreachable block (ram,0x00016240088a) */
/* WARNING: Removing unreachable block (ram,0x00016240088d) */
/* WARNING: Removing unreachable block (ram,0x0001572a0aba) */
/* WARNING: Removing unreachable block (ram,0x00014db086b8) */
/* WARNING: Removing unreachable block (ram,0x00014db086be) */
/* WARNING: Removing unreachable block (ram,0x00014db086ec) */
/* WARNING: Removing unreachable block (ram,0x00014db08762) */
/* WARNING: Removing unreachable block (ram,0x00014db08767) */
/* WARNING: Removing unreachable block (ram,0x00014db0876d) */
/* WARNING: Removing unreachable block (ram,0x00014d99432c) */
/* WARNING: Removing unreachable block (ram,0x00014d994425) */
/* WARNING: Removing unreachable block (ram,0x00014d994424) */
/* WARNING: Removing unreachable block (ram,0x00014d99442a) */
/* WARNING: Removing unreachable block (ram,0x00016609f288) */
/* WARNING: Removing unreachable block (ram,0x000162666863) */
/* WARNING: Removing unreachable block (ram,0x0001626668fe) */
/* WARNING: Removing unreachable block (ram,0x00016609f1dd) */
/* WARNING: Removing unreachable block (ram,0x00016609f27d) */
/* WARNING: Removing unreachable block (ram,0x00016609f282) */
/* WARNING: Removing unreachable block (ram,0x00016176e2b4) */
/* WARNING: Removing unreachable block (ram,0x00016266690a) */

undefined8 FUN_14db0861f(void)

{
  undefined8 uVar1;
  
  FUN_161179aed();
  uVar1 = FUN_162666863();
  return uVar1;
}



// FUNCTION 14db086be FUN_14db086be body=276 status=ok
// SIG undefined FUN_14db086be(void)

/* WARNING: Instruction at (ram,0x00014d994425) overlaps instruction at (ram,0x00014d994424)
    */
/* WARNING: Removing unreachable block (ram,0x00014db086e8) */
/* WARNING: Removing unreachable block (ram,0x00014db08767) */
/* WARNING: Removing unreachable block (ram,0x00014db0876d) */
/* WARNING: Removing unreachable block (ram,0x00014d99432c) */
/* WARNING: Removing unreachable block (ram,0x00014d994425) */
/* WARNING: Removing unreachable block (ram,0x00014d994424) */
/* WARNING: Removing unreachable block (ram,0x00014d99442a) */

undefined8 FUN_14db086be(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14d99432c();
  return uVar1;
}



// FUNCTION 14db087d7 FUN_14db087d7 body=135 status=ok
// SIG undefined FUN_14db087d7(void)

void FUN_14db087d7(void)

{
  FUN_1566a121c(FUN_1566a121c);
  return;
}



// FUNCTION 14db08b70 FUN_14db08b70 body=173 status=ok
// SIG undefined FUN_14db08b70(void)

void FUN_14db08b70(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & unaff_RBP) & (~(local_res20 & unaff_RBP) + unaff_RBP) - ~local_res20;
  *(undefined8 *)(uVar1 - 8) = in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined1 **)(uVar1 - 8) = &LAB_1658e3c02 + *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined **)(uVar1 - 0x18) = &DAT_14db08c1d;
  FUN_1658e3bb2();
  return;
}



// FUNCTION 14db09129 FUN_14db09129 body=46 status=ok
// SIG undefined FUN_14db09129(void)

void FUN_14db09129(void)

{
  ulonglong in_RAX;
  ulonglong in_R11;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(in_RAX >> 1) = in_R11 ^ 0xf1b3c6aedb4dc9c9;
  thunk_FUN_1627529c3(unaff_retaddr);
  return;
}



// FUNCTION 14db09157 FUN_14db09157 body=13 status=ok
// SIG undefined FUN_14db09157(void)

void FUN_14db09157(void)

{
  undefined8 *in_RAX;
  undefined8 in_R11;
  
  *in_RAX = in_R11;
  thunk_FUN_1627529c3();
  return;
}



// FUNCTION 14db091df FUN_14db091df body=321 status=ok
// SIG undefined FUN_14db091df(void)

/* WARNING: Instruction at (ram,0x00016581072e) overlaps instruction at (ram,0x00016581072d)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165ee1160) */
/* WARNING: Removing unreachable block (ram,0x000164a4c5b4) */
/* WARNING: Removing unreachable block (ram,0x000164a4c5ba) */
/* WARNING: Removing unreachable block (ram,0x0001568bc085) */
/* WARNING: Removing unreachable block (ram,0x000165684aee) */
/* WARNING: Removing unreachable block (ram,0x000165684b44) */
/* WARNING: Removing unreachable block (ram,0x000165684b48) */
/* WARNING: Removing unreachable block (ram,0x00016581063a) */
/* WARNING: Removing unreachable block (ram,0x000165810640) */
/* WARNING: Removing unreachable block (ram,0x0001626779a3) */
/* WARNING: Removing unreachable block (ram,0x0001658106d9) */
/* WARNING: Removing unreachable block (ram,0x0001658106df) */
/* WARNING: Removing unreachable block (ram,0x0001658106e4) */
/* WARNING: Removing unreachable block (ram,0x00016581072e) */
/* WARNING: Removing unreachable block (ram,0x00016581072d) */
/* WARNING: Removing unreachable block (ram,0x00014db093cb) */
/* WARNING: Removing unreachable block (ram,0x00014db09479) */
/* WARNING: Removing unreachable block (ram,0x00015b09219d) */
/* WARNING: Removing unreachable block (ram,0x00015b0921c5) */
/* WARNING: Removing unreachable block (ram,0x00015b0921c0) */
/* WARNING: Removing unreachable block (ram,0x00015b0921f9) */
/* WARNING: Removing unreachable block (ram,0x00016667424e) */
/* WARNING: Removing unreachable block (ram,0x00016482641e) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cdb7) */
/* WARNING: Removing unreachable block (ram,0x00015b8703ce) */
/* WARNING: Removing unreachable block (ram,0x0001576154d8) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce3d) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce52) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce57) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce62) */
/* WARNING: Removing unreachable block (ram,0x00014dc0ce5d) */
/* WARNING: Removing unreachable block (ram,0x0001622d788f) */
/* WARNING: Removing unreachable block (ram,0x0001622d791c) */
/* WARNING: Removing unreachable block (ram,0x000156543f5d) */
/* WARNING: Removing unreachable block (ram,0x00015654403e) */
/* WARNING: Removing unreachable block (ram,0x00015654401d) */
/* WARNING: Removing unreachable block (ram,0x0001622d7922) */
/* WARNING: Removing unreachable block (ram,0x0001622d79ab) */
/* WARNING: Removing unreachable block (ram,0x0001622d79b1) */
/* WARNING: Removing unreachable block (ram,0x000165127a5e) */
/* WARNING: Removing unreachable block (ram,0x0001622d77de) */
/* WARNING: Removing unreachable block (ram,0x0001622d787e) */
/* WARNING: Removing unreachable block (ram,0x0001622d7889) */
/* WARNING: Removing unreachable block (ram,0x000164826376) */
/* WARNING: Removing unreachable block (ram,0x0001622d77d8) */
/* WARNING: Removing unreachable block (ram,0x000164826384) */
/* WARNING: Removing unreachable block (ram,0x000164826387) */
/* WARNING: Removing unreachable block (ram,0x000164826413) */
/* WARNING: Removing unreachable block (ram,0x000164826418) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cd1b) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cd57) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cd5b) */
/* WARNING: Removing unreachable block (ram,0x000162083e6e) */
/* WARNING: Removing unreachable block (ram,0x000162083f4b) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cda6) */
/* WARNING: Removing unreachable block (ram,0x00014dc0cdb2) */
/* WARNING: Removing unreachable block (ram,0x00015b8704cc) */
/* WARNING: Removing unreachable block (ram,0x00015b8704d2) */
/* WARNING: Removing unreachable block (ram,0x0001612e7b4b) */
/* WARNING: Removing unreachable block (ram,0x0001612e7b51) */
/* WARNING: Removing unreachable block (ram,0x0001612e7ba1) */
/* WARNING: Removing unreachable block (ram,0x0001612e7bd6) */
/* WARNING: Removing unreachable block (ram,0x0001622d7742) */
/* WARNING: Removing unreachable block (ram,0x0001649425ae) */
/* WARNING: Removing unreachable block (ram,0x0001612e7be2) */
/* WARNING: Removing unreachable block (ram,0x0001663a164a) */
/* WARNING: Removing unreachable block (ram,0x0001663a1670) */
/* WARNING: Removing unreachable block (ram,0x0001663a167d) */
/* WARNING: Removing unreachable block (ram,0x00014db09322) */
/* WARNING: Removing unreachable block (ram,0x00014db093c0) */
/* WARNING: Removing unreachable block (ram,0x00014db093c5) */
/* WARNING: Removing unreachable block (ram,0x0001568bbff8) */
/* WARNING: Removing unreachable block (ram,0x000164a4c54e) */
/* WARNING: Removing unreachable block (ram,0x00016558747d) */
/* WARNING: Removing unreachable block (ram,0x000165587480) */
/* WARNING: Removing unreachable block (ram,0x00015af722a1) */
/* WARNING: Removing unreachable block (ram,0x00015af72321) */
/* WARNING: Removing unreachable block (ram,0x00015af72327) */
/* WARNING: Removing unreachable block (ram,0x000165684a40) */
/* WARNING: Removing unreachable block (ram,0x00015af7232c) */
/* WARNING: Removing unreachable block (ram,0x00015af723c2) */
/* WARNING: Removing unreachable block (ram,0x000162517a1f) */
/* WARNING: Removing unreachable block (ram,0x000162517a49) */
/* WARNING: Removing unreachable block (ram,0x000162517a46) */
/* WARNING: Removing unreachable block (ram,0x000162517a50) */
/* WARNING: Removing unreachable block (ram,0x00015af723c8) */
/* WARNING: Removing unreachable block (ram,0x00015af723da) */
/* WARNING: Removing unreachable block (ram,0x00015af723ed) */
/* WARNING: Removing unreachable block (ram,0x00015af7242a) */
/* WARNING: Removing unreachable block (ram,0x00015af7243c) */
/* WARNING: Removing unreachable block (ram,0x00015af72437) */
/* WARNING: Removing unreachable block (ram,0x00015af7241e) */
/* WARNING: Removing unreachable block (ram,0x000165587495) */
/* WARNING: Removing unreachable block (ram,0x00016558751c) */
/* WARNING: Removing unreachable block (ram,0x000166cff5bc) */
/* WARNING: Removing unreachable block (ram,0x000166cff648) */
/* WARNING: Removing unreachable block (ram,0x000157279646) */
/* WARNING: Removing unreachable block (ram,0x000166cff64e) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb05) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb46) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb11) */
/* WARNING: Removing unreachable block (ram,0x00014d7beab7) */
/* WARNING: Removing unreachable block (ram,0x00014d7beac6) */
/* WARNING: Removing unreachable block (ram,0x00014d7beac8) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb12) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb19) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb1b) */
/* WARNING: Removing unreachable block (ram,0x00014d7beadb) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb0a) */
/* WARNING: Removing unreachable block (ram,0x000165587522) */
/* WARNING: Removing unreachable block (ram,0x00014db0947f) */
/* WARNING: Removing unreachable block (ram,0x00014db09522) */
/* WARNING: Removing unreachable block (ram,0x00014db09527) */
/* WARNING: Removing unreachable block (ram,0x00014db09568) */
/* WARNING: Removing unreachable block (ram,0x00014db09563) */
/* WARNING: Removing unreachable block (ram,0x00014db095d0) */
/* WARNING: Removing unreachable block (ram,0x00014db095ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db091df(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  longlong lVar13;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  byte bStackX_8;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  puVar2 = (ulonglong *)(~(local_res20 & param_1) & ~(~local_res20 & ~param_1));
  syscall();
  puVar2[-1] = 0x14db09237;
  puVar2[-3] = unaff_RDI;
  puVar2[-2] = 0x14db09237;
  uVar6 = puVar2[-3];
  puVar2[-3] = (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
               (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
               (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
               (ulonglong)((local_res18 & 0x80) != 0) * 0x80 |
               (ulonglong)((local_res18 & 0x40) != 0) * 0x40 |
               (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
               (ulonglong)((local_res18 & 4) != 0) * 4 | (ulonglong)((local_res18 & 1) != 0) |
               (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
               (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  puVar1 = puVar2 + -4;
  *(undefined4 *)puVar1 = 0x22fec8e;
  *(undefined4 *)((longlong)puVar2 - 0x1c) = 0;
  pcVar12 = FUN_1651314c4;
  puVar2[-5] = 0x14db09270;
  FUN_1651314c4(FUN_1651314c4,param_2,param_3);
  uVar3 = *(ulonglong *)(uVar6 - 0x58);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar2 - 0x1c) = 0;
  *puVar1 = ~((~(ulonglong)pcVar12 | *(ulonglong *)(uVar6 - 0x40)) &
             (~*(ulonglong *)(uVar6 - 0x40) | (ulonglong)pcVar12));
  uVar7 = *puVar1;
  *puVar1 = *(ulonglong *)(uVar6 - 0x50);
  uVar11 = *puVar1;
  if (bStackX_8 < (byte)puVar2[4]) {
    uVar4 = *(ulonglong *)(uVar6 - 0x30);
    *puVar1 = uVar4;
    uVar9 = *puVar1;
    *puVar1 = *(ulonglong *)(uVar6 - 0x60);
    *puVar1 = *(ulonglong *)(uVar6 - 0x70);
    *puVar1 = (ulonglong)pcVar12;
    uVar5 = *puVar1;
    *puVar1 = uVar6;
    *puVar1 = uVar11 ^ (ulonglong)pcVar12;
    puVar2[-5] = 0xffffffffffffffff - (uVar3 & (ulonglong)pcVar12) & (uVar3 | (ulonglong)pcVar12);
    *puVar1 = ~(uVar4 & (ulonglong)pcVar12) & (uVar9 | (ulonglong)pcVar12);
    lVar13 = CONCAT62((int6)(-1 - ((~uVar5 | *(ulonglong *)(uVar6 - 0x28)) &
                                  (~*(ulonglong *)(uVar6 - 0x28) | uVar5)) >> 0x10),0xd953);
    *puVar1 = 0x1612e7aac;
    uVar11 = FUN_160b7db00();
    *(undefined4 *)(puVar2 + -3) = 0x90f359e6;
    *(undefined4 *)((longlong)puVar2 - 0x14) = 0xffffffff;
    uVar3 = *(ulonglong *)(lVar13 + puVar2[-3] + 0x6f0ca592);
    puVar2[-2] = puVar2[-2];
    puVar2[-3] = uVar11;
    *(undefined4 *)(puVar2 + -3) = 0x9b558712;
    *(undefined4 *)((longlong)puVar2 - 0x14) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + puVar2[-3] + 0x64aa78ee) = 0;
    uVar10 = puVar2[-2];
    *puVar2 = *puVar2 ^ uVar3;
    uVar8 = puVar2[-1];
    puVar2[-1] = uVar6;
    puVar2[-2] = uVar6;
    puVar2[-3] = uVar8;
    *puVar1 = uVar11;
    puVar2[-5] = lVar13;
    puVar2[-3] = uVar7;
    *puVar1 = unaff_R12 + unaff_R15 * -2;
    uVar10 = FUN_16667424e(uVar10);
    return uVar10;
  }
  uVar10 = FUN_1658105ab();
  return uVar10;
}



// FUNCTION 14db09322 FUN_14db09322 body=929 status=ok
// SIG undefined FUN_14db09322(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7beadd) overlaps instruction at (ram,0x00014d7beadb)
    */
/* WARNING: Removing unreachable block (ram,0x000165684b44) */
/* WARNING: Removing unreachable block (ram,0x000165684aee) */
/* WARNING: Removing unreachable block (ram,0x000165684b48) */
/* WARNING: Removing unreachable block (ram,0x000164a4c5b4) */
/* WARNING: Removing unreachable block (ram,0x000164a4c5ba) */
/* WARNING: Removing unreachable block (ram,0x000165ee1160) */
/* WARNING: Removing unreachable block (ram,0x0001568bc085) */
/* WARNING: Removing unreachable block (ram,0x00014db093cb) */
/* WARNING: Removing unreachable block (ram,0x00014db09479) */
/* WARNING: Removing unreachable block (ram,0x00015b09219d) */
/* WARNING: Removing unreachable block (ram,0x00015b0921c5) */
/* WARNING: Removing unreachable block (ram,0x00015b0921c0) */
/* WARNING: Removing unreachable block (ram,0x00015b0921f9) */
/* WARNING: Removing unreachable block (ram,0x000165587495) */
/* WARNING: Removing unreachable block (ram,0x00016558751c) */
/* WARNING: Removing unreachable block (ram,0x000166cff5bc) */
/* WARNING: Removing unreachable block (ram,0x000166cff648) */
/* WARNING: Removing unreachable block (ram,0x000157279646) */
/* WARNING: Removing unreachable block (ram,0x000166cff64e) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb05) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb46) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb11) */
/* WARNING: Removing unreachable block (ram,0x00014d7beab7) */
/* WARNING: Removing unreachable block (ram,0x00014d7beac6) */
/* WARNING: Removing unreachable block (ram,0x00014d7beac8) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb12) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb19) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb1b) */
/* WARNING: Removing unreachable block (ram,0x00014d7beadb) */
/* WARNING: Removing unreachable block (ram,0x00014d7beb0a) */
/* WARNING: Removing unreachable block (ram,0x000165587522) */
/* WARNING: Removing unreachable block (ram,0x00016558747d) */
/* WARNING: Removing unreachable block (ram,0x000162517a46) */
/* WARNING: Removing unreachable block (ram,0x00015af7232c) */
/* WARNING: Removing unreachable block (ram,0x00015af723c2) */
/* WARNING: Removing unreachable block (ram,0x000162517a1f) */
/* WARNING: Removing unreachable block (ram,0x000162517a49) */
/* WARNING: Removing unreachable block (ram,0x000162517a50) */
/* WARNING: Removing unreachable block (ram,0x00015af723c8) */
/* WARNING: Removing unreachable block (ram,0x00015af723da) */
/* WARNING: Removing unreachable block (ram,0x00015af723ed) */
/* WARNING: Removing unreachable block (ram,0x00015af7242a) */
/* WARNING: Removing unreachable block (ram,0x00015af7243c) */
/* WARNING: Removing unreachable block (ram,0x00015af72437) */
/* WARNING: Removing unreachable block (ram,0x00015af7241e) */
/* WARNING: Removing unreachable block (ram,0x00014db0947f) */
/* WARNING: Removing unreachable block (ram,0x00014db09522) */
/* WARNING: Removing unreachable block (ram,0x00014db09527) */
/* WARNING: Removing unreachable block (ram,0x00014db09568) */
/* WARNING: Removing unreachable block (ram,0x00014db09563) */
/* WARNING: Removing unreachable block (ram,0x00014db095d0) */
/* WARNING: Removing unreachable block (ram,0x00014db095ec) */

undefined8 FUN_14db09322(void)

{
  undefined8 uVar1;
  ulonglong unaff_R13;
  
  if (0x7899 < unaff_R13) {
    uVar1 = FUN_165ee1160();
    return uVar1;
  }
  uVar1 = FUN_1568bbff8();
  return uVar1;
}



// FUNCTION 14db0961d FUN_14db0961d body=289 status=ok
// SIG undefined FUN_14db0961d(void)

/* WARNING: Removing unreachable block (ram,0x00014db096bf) */

undefined8 FUN_14db0961d(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar4;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar4 = local_res18 ^ unaff_R15;
  uVar1 = ~(local_res20 & unaff_R15) & (local_res20 | unaff_R15);
  LOCK();
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7a6cf4);
  UNLOCK();
  DAT_14d7a6cf4 = (char)in_RAX;
  *(undefined8 *)(uVar1 - 8) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x80) != 0) * 0x80 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((uVar4 & 4) != 0) * 4 |
       (ulonglong)((uVar4 & 1) != 0) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
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
  uVar4 = *(ulonglong *)(uVar1 - 0x18);
  *(longlong *)(uVar1 - 0x18) = in_R10 - local_res10;
  *(undefined8 *)(uVar1 - 0x20) = in_R9;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x34af7de;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28) = uVar3;
  *(undefined8 *)(uVar1 - 0x30) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = 0x156ef2e25;
  return *(undefined8 *)(uVar1 - 0x28);
}



// FUNCTION 14db09998 FUN_14db09998 body=185 status=ok
// SIG undefined FUN_14db09998(void)

/* WARNING: Removing unreachable block (ram,0x00014db09a3b) */
/* WARNING: Removing unreachable block (ram,0x00014db09a41) */
/* WARNING: Removing unreachable block (ram,0x000166cb9480) */

void FUN_14db09998(void)

{
  FUN_166cb9480();
  return;
}



// FUNCTION 14db09a55 FUN_14db09a55 body=37 status=ok
// SIG undefined FUN_14db09a55(void)

void FUN_14db09a55(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14db09aea FUN_14db09aea body=140 status=ok
// SIG undefined FUN_14db09aea(void)

/* WARNING: Removing unreachable block (ram,0x00014db09b02) */

void FUN_14db09aea(void)

{
  undefined4 uStackX_20;
  
  if (-1 < uStackX_20) {
    FUN_1664f5971();
    return;
  }
  FUN_1664f595b();
  return;
}



// FUNCTION 14db09b82 FUN_14db09b82 body=93 status=ok
// SIG undefined FUN_14db09b82(void)

void FUN_14db09b82(void)

{
  return;
}



// FUNCTION 14db09be0 FUN_14db09be0 body=617 status=ok
// SIG undefined FUN_14db09be0(void)

/* WARNING: Removing unreachable block (ram,0x00014db09d10) */
/* WARNING: Removing unreachable block (ram,0x00014db09d16) */
/* WARNING: Removing unreachable block (ram,0x00014db09d4d) */
/* WARNING: Removing unreachable block (ram,0x00014db09d50) */

void FUN_14db09be0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  lVar1 = *(longlong *)(unaff_R12 + -0x78);
  if ((in_RAX == 0xffffffffffffffff && lVar1 == 0) && (in_RAX != 0xffffffffffffffff || lVar1 != 0))
  {
    (*(code *)&LAB_162691d05)(&LAB_162691d05,lVar1,param_3 ^ in_RAX);
    return;
  }
  return;
}



// FUNCTION 14db09eed FUN_14db09eed body=114 status=ok
// SIG undefined FUN_14db09eed(void)

void FUN_14db09eed(void)

{
  return;
}



// FUNCTION 14db0a005 FUN_14db0a005 body=305 status=ok
// SIG undefined FUN_14db0a005(void)

/* WARNING: Removing unreachable block (ram,0x000162db388f) */
/* WARNING: Removing unreachable block (ram,0x000162db3895) */
/* WARNING: Removing unreachable block (ram,0x00014db0a08f) */
/* WARNING: Removing unreachable block (ram,0x00014db0a12e) */
/* WARNING: Removing unreachable block (ram,0x00014db0a134) */
/* WARNING: Removing unreachable block (ram,0x000162db380b) */

undefined8 FUN_14db0a005(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res18;
  undefined8 uStackX_20;
  
  if ((local_res18 - 1) - ~(0xffffffffffffffff - in_RAX) <
      (0xffffffffffffffff - in_RAX & local_res18)) {
    uVar1 = uStackX_20 ^ in_RAX;
    *(undefined8 *)(uVar1 - 8) = unaff_RSI;
    *(undefined8 *)(uVar1 - 0x10) = in_R11;
    *(undefined8 *)(uVar1 - 0x18) = in_R11;
    *(undefined8 *)(uVar1 - 0x20) = unaff_RDI;
    uVar2 = FUN_160b95e9b(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = FUN_15ba24162();
  return uVar2;
}



// FUNCTION 14db0a13a FUN_14db0a13a body=295 status=ok
// SIG undefined FUN_14db0a13a(void)

void FUN_14db0a13a(undefined8 param_1,undefined8 param_2)

{
  FUN_15b9f0ee5(param_1,param_2);
  FUN_164739de7();
  return;
}



// FUNCTION 14db0a263 FUN_14db0a263 body=118 status=ok
// SIG undefined FUN_14db0a263(void)

void FUN_14db0a263(void)

{
  return;
}



// FUNCTION 14db0a327 FUN_14db0a327 body=149 status=ok
// SIG undefined FUN_14db0a327(void)

void FUN_14db0a327(ulonglong param_1)

{
  ulonglong unaff_RDI;
  ulonglong in_R10;
  
  FUN_164a37da2(-1 - (((~param_1 | in_R10) - (unaff_RDI | param_1 | ~param_1 | in_R10)) +
                     (unaff_RDI | param_1)),FUN_164a37da2);
  return;
}



// FUNCTION 14db0a3bd FUN_14db0a3bd body=457 status=ok
// SIG undefined FUN_14db0a3bd(void)

/* WARNING: Removing unreachable block (ram,0x00014db0a4fc) */
/* WARNING: Removing unreachable block (ram,0x00014db0a502) */
/* WARNING: Removing unreachable block (ram,0x0001617a555e) */
/* WARNING: Removing unreachable block (ram,0x00014db0a478) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db0a3bd(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_R13;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_165444498(unaff_R13 ^ param_1,param_2,in_stack_00000008,param_4);
  return uVar1;
}



// FUNCTION 14db0a502 FUN_14db0a502 body=10 status=ok
// SIG undefined FUN_14db0a502(void)

void FUN_14db0a502(void)

{
  FUN_15731f774();
  return;
}



// FUNCTION 14db0a59d FUN_14db0a59d body=615 status=ok
// SIG undefined FUN_14db0a59d(void)

/* WARNING: Removing unreachable block (ram,0x00014db0a62a) */
/* WARNING: Removing unreachable block (ram,0x00014db0a636) */

undefined8 FUN_14db0a59d(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((in_RAX & 0x80) == 0) {
    uVar1 = FUN_161d58223(8,0x46188308,
                          *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                          (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                          ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                           (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
    return uVar1;
  }
  uVar1 = (*(code *)0x156e2d0bb)(param_1,0x156e2d0bb);
  return uVar1;
}



// FUNCTION 14db0a792 FUN_14db0a792 body=276 status=ok
// SIG undefined FUN_14db0a792(void)

ulonglong FUN_14db0a792(void)

{
  ulonglong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  
  *(ulonglong *)(unaff_R14 + 8) =
       ~((~*(ulonglong *)(unaff_R14 + 8) | unaff_R12) + *(longlong *)(unaff_R14 + 8) + 1);
  FUN_160c9b303();
  return ~*(ulonglong *)(unaff_R13 + -0x38);
}



// FUNCTION 14db0a8a7 FUN_14db0a8a7 body=140 status=ok
// SIG undefined FUN_14db0a8a7(void)

void FUN_14db0a8a7(void)

{
  ulonglong in_RAX;
  undefined8 local_res8;
  
  FUN_15b360868(local_res8 | in_RAX);
  return;
}



// FUNCTION 14db0a935 FUN_14db0a935 body=136 status=ok
// SIG undefined FUN_14db0a935(void)

void FUN_14db0a935(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  FUN_16635acfe(param_1,param_2,local_res10,uStackX_8);
  return;
}



// FUNCTION 14db0a9bf FUN_14db0a9bf body=150 status=ok
// SIG undefined FUN_14db0a9bf(void)

void FUN_14db0a9bf(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  
  FUN_1624aa282(*(undefined8 *)(unaff_R13 + -0x78),*(undefined8 *)(unaff_R13 + -0x78),
                ~(~param_3 | ~in_RAX));
  FUN_14db0aa56();
  return;
}



// FUNCTION 14db0aa56 FUN_14db0aa56 body=159 status=ok
// SIG undefined FUN_14db0aa56(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0aa56(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | param_1;
  *(ulonglong *)(unaff_R15 + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_R15 + 8));
  FUN_161b1b388();
  FUN_1621629a8(0);
  return;
}



// FUNCTION 14db0aaf5 FUN_14db0aaf5 body=174 status=ok
// SIG undefined FUN_14db0aaf5(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0aaf5(void)

{
  FUN_1621629a8(0);
  return;
}



// FUNCTION 14db0abab FUN_14db0abab body=147 status=ok
// SIG undefined FUN_14db0abab(void)

void FUN_14db0abab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1628f60ea(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db0ac3e thunk_FUN_14db0ac44 body=5 status=ok
// SIG undefined thunk_FUN_14db0ac44(void)

/* WARNING: Removing unreachable block (ram,0x00014db0acc8) */
/* WARNING: Removing unreachable block (ram,0x00014db0acce) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad6a) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad6f) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad75) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014d91943b) */

ulonglong thunk_FUN_14db0ac44(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14db0ac44 FUN_14db0ac44 body=538 status=ok
// SIG undefined FUN_14db0ac44(void)

/* WARNING: Removing unreachable block (ram,0x00014db0acc8) */
/* WARNING: Removing unreachable block (ram,0x00014db0acce) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad6a) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad6f) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad75) */
/* WARNING: Removing unreachable block (ram,0x00014db0ad7a) */
/* WARNING: Removing unreachable block (ram,0x00014d91943b) */

ulonglong FUN_14db0ac44(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14db0acce FUN_14db0acce body=333 status=ok
// SIG undefined FUN_14db0acce(void)

/* WARNING: Removing unreachable block (ram,0x00014db0ad7a) */

void FUN_14db0acce(void)

{
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0x48)) {
    FUN_16293f857();
    return;
  }
  FUN_16293f857();
  return;
}



// FUNCTION 14db0ae1c FUN_14db0ae1c body=31 status=ok
// SIG undefined FUN_14db0ae1c(void)

ulonglong FUN_14db0ae1c(void)

{
  ulonglong in_RAX;
  
  return in_RAX >> 0x3f;
}



// FUNCTION 14db0af4c FUN_14db0af4c body=144 status=ok
// SIG undefined FUN_14db0af4c(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b061) */
/* WARNING: Removing unreachable block (ram,0x00014db0b067) */
/* WARNING: Removing unreachable block (ram,0x000157896165) */
/* WARNING: Removing unreachable block (ram,0x00014db0b103) */
/* WARNING: Removing unreachable block (ram,0x00014db0b109) */

void FUN_14db0af4c(void)

{
  longlong in_R9;
  
  *(ulonglong *)(in_R9 + 8) = ~*(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = ~*(ulonglong *)(in_R9 + 8);
  FUN_16134ac52();
  FUN_156854999();
  return;
}



// FUNCTION 14db0afdd FUN_14db0afdd body=456 status=ok
// SIG undefined FUN_14db0afdd(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b061) */
/* WARNING: Removing unreachable block (ram,0x00014db0b067) */
/* WARNING: Removing unreachable block (ram,0x000157896165) */
/* WARNING: Removing unreachable block (ram,0x00014db0b103) */
/* WARNING: Removing unreachable block (ram,0x00014db0b109) */

void FUN_14db0afdd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156854999(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db0b46a FUN_14db0b46a body=476 status=ok
// SIG undefined FUN_14db0b46a(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b4fd) */
/* WARNING: Removing unreachable block (ram,0x00014db0b503) */
/* WARNING: Removing unreachable block (ram,0x00014db0b50e) */

void FUN_14db0b46a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c67c22(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db0b64b FUN_14db0b64b body=285 status=ok
// SIG undefined FUN_14db0b64b(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b6ee) */

undefined8 FUN_14db0b64b(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong lVar2;
  
  lVar2 = -1 - ~(~(0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x50)) |
                ~(*(ulonglong *)(unaff_RDI + -0x50) ^ 0xffffffffffffffff | param_1));
  if (lVar2 == 0) {
    uVar1 = FUN_16274ff85(param_1,param_2,0);
    return uVar1;
  }
  uVar1 = FUN_16274ff85(param_1,param_2,lVar2);
  return uVar1;
}



// FUNCTION 14db0b76c FUN_14db0b76c body=83 status=ok
// SIG undefined FUN_14db0b76c(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b92f) */
/* WARNING: Removing unreachable block (ram,0x00014db0b93a) */
/* WARNING: Removing unreachable block (ram,0x00014db0b935) */
/* WARNING: Removing unreachable block (ram,0x00014db0b800) */

void FUN_14db0b76c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 uStack_28;
  uint auStack_20 [2];
  undefined8 auStack_18 [3];
  
  puVar1 = (undefined8 *)(&stack0x00000000 + unaff_RBP);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x48);
  *puVar1 = param_1;
  puVar1[-1] = in_R11;
  uVar5 = puVar1[-1];
  uVar6 = *puVar1;
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  *puVar1 = unaff_RBX;
  *puVar1 = in_RAX;
  puVar1[-1] = in_RAX;
  uVar3 = *(undefined8 *)(unaff_RDI + -0x90);
  puVar1[-2] = param_2;
  *puVar1 = uVar3;
  uVar3 = puVar1[-2];
  puVar1[-1] = uVar3;
  puVar1[-2] = uVar3;
  lVar4 = *(longlong *)(unaff_RDI + -8);
  puVar1[-3] = uVar5;
  *(undefined4 *)(puVar1 + -4) = 0xcfec6b69;
  puVar1[-5] = unaff_R13;
  uVar2 = *(uint *)(puVar1 + -4);
  *(uint *)(puVar1 + -4) = *(uint *)(puVar1 + -4) | 0x8c7917a8;
  *(uint *)(puVar1 + -4) = ~(~(uVar2 & 0x8c7917a8) & *(uint *)(puVar1 + -4));
  *(undefined4 *)((longlong)puVar1 + -0x1c) = 0xffffffff;
  puVar1[-4] = puVar1[-5];
  (*(code *)0x1575a1780)(uVar6,-lVar4);
  return;
}



// FUNCTION 14db0b800 FUN_14db0b800 body=149 status=ok
// SIG undefined FUN_14db0b800(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b92f) */
/* WARNING: Removing unreachable block (ram,0x00014db0b93a) */
/* WARNING: Removing unreachable block (ram,0x00014db0b935) */

void FUN_14db0b800(byte param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  uint local_res8;
  
  uVar2 = (ulonglong)(unaff_RSI < (ulonglong)(param_3 * 2)) << 0x20 | param_2 & 0xffffffff;
  uVar4 = *(undefined8 *)(unaff_R13 + -0x48);
  uVar3 = FUN_162a8bfdd(uVar4,(uint)(uVar2 << (param_1 & 0x1f)) |
                              (uint)(uVar2 >> 0x21 - (param_1 & 0x1f)),unaff_RSI + param_3 * -2);
  uVar2 = (ulonglong)local_res8;
  *(longlong *)(&stack0xfffffffff1eaf792 + uVar2) = unaff_R13;
  lVar1 = *(longlong *)(&stack0xfffffffff1eaf79a + uVar2);
  *(ulonglong *)(&stack0xfffffffff1eaf79a + uVar2) =
       *(ulonglong *)(&stack0xfffffffff1eaf79a + uVar2) & uVar3;
  *(longlong *)(&stack0xfffffffff1eaf79a + uVar2) =
       *(longlong *)(&stack0xfffffffff1eaf79a + uVar2) << 1;
  *(ulonglong *)(&stack0xfffffffff1eaf79a + uVar2) =
       (lVar1 + uVar3) - *(longlong *)(&stack0xfffffffff1eaf79a + uVar2);
  *(code **)(&stack0xfffffffff1eaf792 + uVar2) = FUN_162a8bfdd;
  *(undefined8 *)(&stack0xfffffffff1eaf78a + uVar2) = uVar4;
  FUN_162cdf715(&stack0xfffffffff1eaf79a + uVar2);
  return;
}



// FUNCTION 14db0b897 FUN_14db0b897 body=331 status=ok
// SIG undefined FUN_14db0b897(void)

/* WARNING: Removing unreachable block (ram,0x00014db0b92f) */
/* WARNING: Removing unreachable block (ram,0x00014db0b93a) */
/* WARNING: Removing unreachable block (ram,0x00014db0b935) */

void FUN_14db0b897(undefined8 param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  uint unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff1eaf78a + unaff_retaddr) = unaff_R13;
  lVar1 = *(longlong *)(&stack0xfffffffff1eaf792 + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff1eaf792 + unaff_retaddr) =
       *(ulonglong *)(&stack0xfffffffff1eaf792 + unaff_retaddr) & in_RAX;
  *(longlong *)(&stack0xfffffffff1eaf792 + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff1eaf792 + unaff_retaddr) << 1;
  *(ulonglong *)(&stack0xfffffffff1eaf792 + unaff_retaddr) =
       (lVar1 + in_RAX) - *(longlong *)(&stack0xfffffffff1eaf792 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff1eaf78a + unaff_retaddr) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff1eaf782 + unaff_retaddr) = param_1;
  FUN_162cdf715(&stack0xfffffffff1eaf792 + unaff_retaddr);
  return;
}



// FUNCTION 14db0b9e2 FUN_14db0b9e2 body=153 status=ok
// SIG undefined FUN_14db0b9e2(void)

void FUN_14db0b9e2(void)

{
  FUN_1658fee12();
  return;
}



// FUNCTION 14db0ba7c FUN_14db0ba7c body=1026 status=ok
// SIG undefined FUN_14db0ba7c(void)

/* WARNING: Removing unreachable block (ram,0x000166b38358) */
/* WARNING: Removing unreachable block (ram,0x000166b38392) */
/* WARNING: Removing unreachable block (ram,0x000166b38395) */
/* WARNING: Removing unreachable block (ram,0x00014db0bd64) */
/* WARNING: Removing unreachable block (ram,0x00014db0bd6a) */
/* WARNING: Removing unreachable block (ram,0x00014db0bdf8) */
/* WARNING: Removing unreachable block (ram,0x00014db0be03) */
/* WARNING: Removing unreachable block (ram,0x00014db0be09) */
/* WARNING: Removing unreachable block (ram,0x000160bd62f7) */
/* WARNING: Removing unreachable block (ram,0x00014db0bba7) */
/* WARNING: Removing unreachable block (ram,0x00014db0bbb8) */
/* WARNING: Removing unreachable block (ram,0x00014db0bc57) */
/* WARNING: Removing unreachable block (ram,0x00014db0bc5c) */
/* WARNING: Removing unreachable block (ram,0x0001569ebca6) */
/* WARNING: Removing unreachable block (ram,0x0001569ebcec) */
/* WARNING: Removing unreachable block (ram,0x0001569ebcf0) */
/* WARNING: Removing unreachable block (ram,0x00014db0bc62) */
/* WARNING: Removing unreachable block (ram,0x00014db0bd5f) */
/* WARNING: Removing unreachable block (ram,0x000162a5f7af) */
/* WARNING: Removing unreachable block (ram,0x00014db0bbb3) */
/* WARNING: Removing unreachable block (ram,0x00014db0bafe) */
/* WARNING: Removing unreachable block (ram,0x000166b38352) */
/* WARNING: Removing unreachable block (ram,0x00015b467a05) */

undefined8 FUN_14db0ba7c(ulonglong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x48) + param_1 <
      (*(ulonglong *)(unaff_RDI + -0x48) & param_1) * 2) {
    return in_RAX;
  }
  uVar1 = FUN_166422f29();
  return uVar1;
}



// FUNCTION 14db0c112 FUN_14db0c112 body=1097 status=ok
// SIG undefined FUN_14db0c112(void)

/* WARNING: Instruction at (ram,0x000165eaa7ab) overlaps instruction at (ram,0x000165eaa7aa)
    */
/* WARNING: Removing unreachable block (ram,0x00014da3db19) */
/* WARNING: Removing unreachable block (ram,0x00014db0c2ec) */
/* WARNING: Removing unreachable block (ram,0x000165eaa81d) */
/* WARNING: Removing unreachable block (ram,0x000165eaa823) */
/* WARNING: Removing unreachable block (ram,0x00014da3dafe) */
/* WARNING: Removing unreachable block (ram,0x00014da3db04) */
/* WARNING: Removing unreachable block (ram,0x00014da3db1c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db37) */
/* WARNING: Removing unreachable block (ram,0x00014da3db3c) */
/* WARNING: Removing unreachable block (ram,0x00014da3db40) */
/* WARNING: Removing unreachable block (ram,0x00014da3db49) */
/* WARNING: Removing unreachable block (ram,0x00014da3db55) */
/* WARNING: Removing unreachable block (ram,0x000160f0508f) */
/* WARNING: Removing unreachable block (ram,0x000165eaa7aa) */
/* WARNING: Removing unreachable block (ram,0x00014db0c1c7) */
/* WARNING: Removing unreachable block (ram,0x00014db0c248) */
/* WARNING: Removing unreachable block (ram,0x00014db0c2e6) */
/* WARNING: Removing unreachable block (ram,0x00014defb9b2) */
/* WARNING: Removing unreachable block (ram,0x00014db0c243) */
/* WARNING: Removing unreachable block (ram,0x00014db0c1ba) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014da3d9fb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db0c112(void)

{
  undefined8 uVar1;
  
  FUN_165c927d1();
  uVar1 = FUN_1663e2cb6(FUN_1663e2cb6);
  return uVar1;
}



// FUNCTION 14db0c2ec FUN_14db0c2ec body=49 status=ok
// SIG undefined FUN_14db0c2ec(void)

undefined8 FUN_14db0c2ec(void)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  undefined8 in_stack_00000010;
  
  *(ulonglong *)(unaff_RSI + 8) = ~(in_RAX & *(ulonglong *)(unaff_RSI + 8));
  return in_stack_00000010;
}



// FUNCTION 14db0c481 FUN_14db0c481 body=148 status=ok
// SIG undefined FUN_14db0c481(void)

void FUN_14db0c481(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *in_RAX;
  ulonglong unaff_R15;
  
  uVar1 = *in_RAX;
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | unaff_R15;
  uVar2 = *in_RAX;
  *in_RAX = 0;
  *in_RAX = *in_RAX ^ ~((~unaff_R15 | uVar1) & uVar2);
  FUN_15b27fa75();
  return;
}



// FUNCTION 14db0c716 FUN_14db0c716 body=147 status=ok
// SIG undefined FUN_14db0c716(void)

void FUN_14db0c716(undefined8 param_1)

{
  FUN_161bcabec(param_1);
  return;
}



// FUNCTION 14db0c84b FUN_14db0c84b body=778 status=ok
// SIG undefined FUN_14db0c84b(void)

/* WARNING: Removing unreachable block (ram,0x000161bc0c1d) */
/* WARNING: Removing unreachable block (ram,0x000161bc0c23) */
/* WARNING: Removing unreachable block (ram,0x000161bc0c75) */
/* WARNING: Removing unreachable block (ram,0x000161bc0c82) */
/* WARNING: Removing unreachable block (ram,0x00014db0caaa) */
/* WARNING: Removing unreachable block (ram,0x00014db0caa4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0c84b(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar3 = FUN_166754a06();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x38);
  uVar4 = 0xfffffffffffffff8;
  FUN_166ac4892();
  lVar2 = *(longlong *)(~((~uVar3 | uVar1) & (~uVar1 | uVar3)) - 0xa0);
  FUN_15759ffba();
  FUN_156a68d33(~param_2,*(ulonglong *)(lVar2 + -0x28) ^ unaff_R15,FUN_156a68d33,uVar4);
  return;
}



// FUNCTION 14db0cb31 thunk_FUN_14db0cb37 body=5 status=ok
// SIG undefined thunk_FUN_14db0cb37(void)

void thunk_FUN_14db0cb37(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr,in_stack_00000008);
  return;
}



// FUNCTION 14db0cb37 FUN_14db0cb37 body=93 status=ok
// SIG undefined FUN_14db0cb37(void)

void FUN_14db0cb37(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr,in_stack_00000008);
  return;
}



// FUNCTION 14db0cbde FUN_14db0cbde body=141 status=ok
// SIG undefined FUN_14db0cbde(void)

void FUN_14db0cbde(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) | param_1;
  (*(code *)0x166676e41)
            (param_1,uVar1,~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) & uVar1,
             ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14db0ccec FUN_14db0ccec body=155 status=ok
// SIG undefined FUN_14db0ccec(void)

void FUN_14db0ccec(void)

{
  return;
}



// FUNCTION 14db0cee1 FUN_14db0cee1 body=918 status=ok
// SIG undefined FUN_14db0cee1(void)

/* WARNING: Removing unreachable block (ram,0x00015b6638ea) */
/* WARNING: Removing unreachable block (ram,0x00014db0d0a8) */
/* WARNING: Removing unreachable block (ram,0x00014db0d0ae) */
/* WARNING: Removing unreachable block (ram,0x00014db0d15b) */
/* WARNING: Removing unreachable block (ram,0x00014db0d160) */
/* WARNING: Removing unreachable block (ram,0x00014db0d166) */
/* WARNING: Removing unreachable block (ram,0x000165c7517f) */
/* WARNING: Removing unreachable block (ram,0x00016696a0fd) */
/* WARNING: Removing unreachable block (ram,0x00015b6639ce) */
/* WARNING: Removing unreachable block (ram,0x00016696a1db) */
/* WARNING: Removing unreachable block (ram,0x00016696a0c8) */
/* WARNING: Removing unreachable block (ram,0x00016696a0d0) */
/* WARNING: Removing unreachable block (ram,0x00016696a0dc) */
/* WARNING: Removing unreachable block (ram,0x00016696a109) */
/* WARNING: Removing unreachable block (ram,0x00016696a11b) */
/* WARNING: Removing unreachable block (ram,0x00016696a116) */
/* WARNING: Removing unreachable block (ram,0x00016696a1d5) */
/* WARNING: Removing unreachable block (ram,0x0001570f7f51) */
/* WARNING: Removing unreachable block (ram,0x00016696a0e9) */
/* WARNING: Removing unreachable block (ram,0x00016696a126) */
/* WARNING: Removing unreachable block (ram,0x00016696a128) */
/* WARNING: Removing unreachable block (ram,0x000165a19a1b) */
/* WARNING: Removing unreachable block (ram,0x000165a19a97) */
/* WARNING: Removing unreachable block (ram,0x000165a19a9d) */
/* WARNING: Removing unreachable block (ram,0x00016696a040) */
/* WARNING: Removing unreachable block (ram,0x00016696a0c2) */
/* WARNING: Removing unreachable block (ram,0x0001566dccad) */
/* WARNING: Removing unreachable block (ram,0x00014db0cf85) */

void FUN_14db0cee1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0x30),param_1)) {
    FUN_16642187b(param_1,param_1,
                  (-param_1 - *(ulonglong *)(unaff_RDI + -0x70)) +
                  (*(ulonglong *)(unaff_RDI + -0x70) | param_1) * 2);
    FUN_165a19a1b();
    return;
  }
  FUN_15b6638af();
  return;
}



// FUNCTION 14db0d392 FUN_14db0d392 body=156 status=ok
// SIG undefined FUN_14db0d392(void)

void FUN_14db0d392(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res8;
  
  local_res8 = (ulonglong)(uint)local_res8;
  local_res8 = local_res8 ^ *(ulonglong *)(unaff_R12 + -0x58);
  (*(code *)0x1648a0a2a)
            (0xffffffffffffffff - (local_res8 & in_RAX) & (local_res8 | in_RAX),
             *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14db0d42f FUN_14db0d42f body=743 status=ok
// SIG undefined FUN_14db0d42f(void)

/* WARNING: Removing unreachable block (ram,0x0001648e944a) */
/* WARNING: Removing unreachable block (ram,0x0001648e9587) */
/* WARNING: Removing unreachable block (ram,0x0001648e958c) */
/* WARNING: Removing unreachable block (ram,0x0001648e9592) */
/* WARNING: Removing unreachable block (ram,0x000156520b98) */
/* WARNING: Removing unreachable block (ram,0x00014db0d4a7) */
/* WARNING: Removing unreachable block (ram,0x00014db0d4ad) */
/* WARNING: Removing unreachable block (ram,0x0001649a45f7) */

undefined8 FUN_14db0d42f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1649a45f7();
  return uVar1;
}



// FUNCTION 14db0da78 FUN_14db0da78 body=154 status=ok
// SIG undefined FUN_14db0da78(void)

void FUN_14db0da78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R14;
  undefined8 uStackX_8;
  
  if (uStackX_8 == ~(unaff_R14 & (~(unaff_RDI & 0xffffffffb28fcb79) - 0x4d703487) - ~unaff_RDI)) {
    FUN_165dc09fc();
    return;
  }
  FUN_1650721c5(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db0db78 FUN_14db0db78 body=136 status=ok
// SIG undefined FUN_14db0db78(void)

void FUN_14db0db78(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_R12;
  longlong *unaff_R13;
  undefined8 local_res18;
  longlong local_res20;
  
  *unaff_R13 = unaff_R12 + param_1 + *unaff_R13;
  local_res20 = in_RAX + local_res20 * -2;
  FUN_156a5ac67(param_1,param_2,local_res18,&local_res20);
  return;
}



// FUNCTION 14db0dc01 FUN_14db0dc01 body=112 status=ok
// SIG undefined FUN_14db0dc01(void)

void FUN_14db0dc01(void)

{
  return;
}



// FUNCTION 14db0dd4b FUN_14db0dd4b body=257 status=ok
// SIG undefined FUN_14db0dd4b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0dd4b(void)

{
  FUN_157406b14(FUN_157406b14);
  return;
}



// FUNCTION 14db0de8a FUN_14db0de8a body=11 status=ok
// SIG undefined FUN_14db0de8a(void)

void FUN_14db0de8a(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014db0de93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db0e3d9 FUN_14db0e3d9 body=159 status=ok
// SIG undefined FUN_14db0e3d9(void)

/* WARNING: Removing unreachable block (ram,0x00014db0e4fa) */
/* WARNING: Removing unreachable block (ram,0x00014db0e5da) */
/* WARNING: Removing unreachable block (ram,0x00014db0e644) */
/* WARNING: Removing unreachable block (ram,0x00014db0e64a) */
/* WARNING: Removing unreachable block (ram,0x00014db0e64f) */
/* WARNING: Removing unreachable block (ram,0x0001613cd223) */

void FUN_14db0e3d9(undefined8 param_1)

{
  undefined8 unaff_RBP;
  longlong unaff_R13;
  undefined8 uStackX_10;
  
  FUN_1659bc7fa(param_1,uStackX_10);
  if (*(longlong *)(unaff_R13 + -0xa0) == 0) {
    FUN_160cc8585();
    return;
  }
  FUN_16640c57b();
  FUN_14d85d504(unaff_RBP);
  return;
}



// FUNCTION 14db0e478 FUN_14db0e478 body=128 status=ok
// SIG undefined FUN_14db0e478(void)

/* WARNING: Removing unreachable block (ram,0x00014db0e4fa) */
/* WARNING: Removing unreachable block (ram,0x00014db0e5da) */
/* WARNING: Removing unreachable block (ram,0x00014db0e644) */
/* WARNING: Removing unreachable block (ram,0x00014db0e64a) */
/* WARNING: Removing unreachable block (ram,0x00014db0e64f) */
/* WARNING: Removing unreachable block (ram,0x0001613cd223) */

void FUN_14db0e478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBP;
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0xa0) == 0) {
    FUN_160cc8585();
    return;
  }
  FUN_16640c57b(param_1,param_2,param_3);
  FUN_14d85d504(unaff_RBP);
  return;
}



// FUNCTION 14db0e4fa FUN_14db0e4fa body=338 status=ok
// SIG undefined FUN_14db0e4fa(void)

/* WARNING: Removing unreachable block (ram,0x00014db0e64f) */

void FUN_14db0e4fa(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165b8c0f7(*(ulonglong *)(unaff_R13 + (unaff_RSI ^ 0x5d45b2f5)) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  if (CARRY8(~*(ulonglong *)(unaff_R13 + -0x90) | ~unaff_R15,*(ulonglong *)(unaff_R13 + -0x90))) {
    FUN_1613cd223();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar2 = (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
  FUN_162a99108(0xffffffff82803ff7,uVar2,~(uVar1 & unaff_R15) & uVar2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db0e64f FUN_14db0e64f body=277 status=ok
// SIG undefined FUN_14db0e64f(void)

void FUN_14db0e64f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  FUN_161d52eb6(param_1,unaff_retaddr,param_3);
  FUN_1567d9fdf(param_1,unaff_retaddr + *(longlong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14db0e8a5 FUN_14db0e8a5 body=150 status=ok
// SIG undefined FUN_14db0e8a5(void)

void FUN_14db0e8a5(undefined8 param_1,undefined8 param_2)

{
  int unaff_retaddr;
  
  FUN_161ccba92(param_1,param_2,(longlong)unaff_retaddr,0xffffffffd76b281c);
  return;
}



// FUNCTION 14db0e93b FUN_14db0e93b body=151 status=ok
// SIG undefined FUN_14db0e93b(void)

void FUN_14db0e93b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_16125153b)
            (param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                     (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  return;
}



// FUNCTION 14db0eba1 FUN_14db0eba1 body=156 status=ok
// SIG undefined FUN_14db0eba1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001625301a2) */
/* WARNING: Removing unreachable block (ram,0x0001625301a8) */
/* WARNING: Removing unreachable block (ram,0x00014e11d9b2) */
/* WARNING: Removing unreachable block (ram,0x00016252ffb5) */
/* WARNING: Removing unreachable block (ram,0x00016253004e) */
/* WARNING: Removing unreachable block (ram,0x000162530053) */
/* WARNING: Removing unreachable block (ram,0x000162530059) */
/* WARNING: Removing unreachable block (ram,0x00016253005e) */
/* WARNING: Removing unreachable block (ram,0x0001625300c3) */
/* WARNING: Removing unreachable block (ram,0x0001625300d4) */
/* WARNING: Removing unreachable block (ram,0x000161d35cfe) */
/* WARNING: Removing unreachable block (ram,0x00014db0ec37) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5938) */
/* WARNING: Removing unreachable block (ram,0x00014e11da35) */
/* WARNING: Removing unreachable block (ram,0x00014e11da3b) */

undefined8 FUN_14db0eba1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e11d9b2();
  return uVar1;
}



// FUNCTION 14db0ec3d FUN_14db0ec3d body=45 status=ok
// SIG undefined FUN_14db0ec3d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db0ec3d(void)

{
  undefined8 in_R11;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x14db0ec7e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db0ecdc FUN_14db0ecdc body=121 status=ok
// SIG undefined FUN_14db0ecdc(void)

undefined8 FUN_14db0ecdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// FUNCTION 14db0ee27 FUN_14db0ee27 body=3 status=ok
// SIG undefined FUN_14db0ee27(void)

void FUN_14db0ee27(void)

{
  return;
}



// FUNCTION 14db0f020 FUN_14db0f020 body=163 status=ok
// SIG undefined FUN_14db0f020(void)

/* WARNING: Removing unreachable block (ram,0x00014db0f0c0) */

void FUN_14db0f020(undefined8 param_1)

{
  ulonglong unaff_RBP;
  ulonglong *unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 local_res20;
  
  *unaff_R14 = -*unaff_R14;
  *unaff_R14 = *unaff_R14 - 1;
  *unaff_R14 = *unaff_R14 | unaff_retaddr;
  *unaff_R14 = ~(unaff_RBP & *unaff_R14);
  if (local_res20 + unaff_retaddr == (local_res20 & unaff_retaddr) * 2) {
    FUN_1623f2c06(param_1);
    return;
  }
  FUN_156632e22();
  return;
}



// FUNCTION 14db0f0c6 FUN_14db0f0c6 body=160 status=ok
// SIG undefined FUN_14db0f0c6(void)

void FUN_14db0f0c6(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_165d82ae9(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) << 1);
  return;
}



// FUNCTION 14db0f284 FUN_14db0f284 body=151 status=ok
// SIG undefined FUN_14db0f284(void)

/* WARNING: Removing unreachable block (ram,0x000156ed2fef) */
/* WARNING: Removing unreachable block (ram,0x000156ed2ff5) */
/* WARNING: Removing unreachable block (ram,0x00014e182bb1) */
/* WARNING: Removing unreachable block (ram,0x00014e182c42) */
/* WARNING: Removing unreachable block (ram,0x00014e182c4d) */
/* WARNING: Removing unreachable block (ram,0x00014e182c5f) */
/* WARNING: Removing unreachable block (ram,0x00014e182c65) */
/* WARNING: Removing unreachable block (ram,0x00014e182ba6) */
/* WARNING: Removing unreachable block (ram,0x00014db0f31c) */
/* WARNING: Removing unreachable block (ram,0x00014db0f376) */
/* WARNING: Removing unreachable block (ram,0x00014db0f371) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db0f284(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  
  uVar4 = (unaff_RBP + *(longlong *)(unaff_RDI + 0x10)) -
          (unaff_RBP & *(ulonglong *)(unaff_RDI + 0x10));
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  *(undefined8 *)(unaff_RDI + 0x10) = 0;
  *(longlong *)(unaff_RDI + 0x10) =
       *(longlong *)(unaff_RDI + 0x10) +
       (((uVar1 & param_1 ^ 0xffffffffffffffff) + param_1) - lVar2);
  uVar4 = (*(longlong *)(unaff_RDI + 0x10) - (uVar4 | *(ulonglong *)(unaff_RDI + 0x10))) + uVar4;
  *(ulonglong *)(unaff_RDI + 0x10) = ~uVar4;
  if (uVar4 == 0) {
    FUN_14e182b25();
    return;
  }
  *(undefined8 *)(param_5 + -8) = in_stack_00000018;
  *(undefined8 *)(param_5 + -0x10) = param_2;
  uVar3 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = local_res8;
  *(undefined8 *)(param_5 + -0x20) = unaff_R12;
  *(undefined8 *)(param_5 + -0x28) = param_3;
  *(undefined1 **)(param_5 + -8) = &LAB_166231768;
                    /* WARNING: Could not recover jumptable at 0x00016623174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_5 + -0x10),uVar3,*(undefined8 *)(param_5 + -0x28));
  return;
}



// FUNCTION 14db0f31c FUN_14db0f31c body=156 status=ok
// SIG undefined FUN_14db0f31c(void)

/* WARNING: Removing unreachable block (ram,0x00014db0f371) */

void FUN_14db0f31c(longlong param_1)

{
  longlong unaff_RDI;
  
  FUN_1668eaf48(param_1,*(longlong *)(unaff_RDI + -0x40),*(longlong *)(unaff_RDI + -0x40) + param_1)
  ;
  return;
}



// FUNCTION 14db0f3b8 FUN_14db0f3b8 body=147 status=ok
// SIG undefined FUN_14db0f3b8(void)

void FUN_14db0f3b8(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15708c869(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88),param_2,
                ~*(ulonglong *)(unaff_R13 + -0x88),*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db0f44e FUN_14db0f44e body=178 status=ok
// SIG undefined FUN_14db0f44e(void)

void FUN_14db0f44e(void)

{
  longlong in_RAX;
  
  if (in_RAX < 0) {
    in_RAX = -in_RAX;
  }
  for (; in_RAX != 0; in_RAX = in_RAX >> 1) {
  }
  FUN_16134c31e();
  return;
}



// FUNCTION 14db0f577 FUN_14db0f577 body=73 status=ok
// SIG undefined FUN_14db0f577(void)

void FUN_14db0f577(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14db0f7e8 FUN_14db0f7e8 body=190 status=ok
// SIG undefined FUN_14db0f7e8(void)

longlong FUN_14db0f7e8(ulonglong param_1)

{
  ulonglong in_R10;
  
  return in_R10 + param_1 + (in_R10 & param_1) * -2;
}



// FUNCTION 14db0f94e FUN_14db0f94e body=203 status=ok
// SIG undefined FUN_14db0f94e(void)

/* WARNING: Removing unreachable block (ram,0x00014db0f9cf) */
/* WARNING: Removing unreachable block (ram,0x00016582acb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db0f94e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 in_AL;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_R10;
  undefined8 unaff_R14;
  bool bVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res18;
  
  lVar4 = ((param_1 - 1) - ~local_res18) + (local_res18 & param_1) * -2;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res10._0_2_ = (ushort)local_res10 - ((ushort)local_res10 & 0x100);
  LOCK();
  UNLOCK();
  FUN_14d7bd487 = in_AL;
  *(undefined8 *)(lVar4 + -8) = unaff_R14;
  *(undefined8 *)(lVar4 + -0x10) = unaff_R14;
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar4 + -0x20) = 0x52f0549f;
  *(undefined4 *)(lVar4 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(lVar4 + -0x20);
  uVar6 = *(ulonglong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(lVar4 + -0x18);
  bVar5 = (uVar6 & 0x40) != 0;
  *(undefined8 *)(lVar4 + -0x18) = in_R10;
  *(ulonglong *)(lVar4 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)bVar5 * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar4 + -0x28) = 0xb22a8c9c;
  *(undefined4 *)(lVar4 + -0x24) = 0xffffffff;
  if (!bVar5) {
    lVar1 = *(longlong *)(lVar4 + -0x28);
    *(undefined8 *)(lVar4 + -0x28) = in_stack_00000008;
    *(ulonglong *)(lVar4 + lVar1 + 0x4dd5735c) = (uVar2 ^ 0x51ae26b3) - 0x2df4ac0;
    uVar3 = FUN_165c7153c(*(undefined8 *)(lVar4 + -0x28),param_2,param_3,param_4);
    return uVar3;
  }
  uVar3 = FUN_164f28d7a();
  return uVar3;
}



// FUNCTION 14db0fa80 FUN_14db0fa80 body=172 status=ok
// SIG undefined FUN_14db0fa80(void)

void FUN_14db0fa80(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  puVar2 = (ulonglong *)(local_res10 + -0x20);
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ param_1;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x30) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  uVar3 = *(undefined8 *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined1 **)(local_res10 + -8) = &LAB_15712079f;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = *(undefined8 *)(local_res10 + -0x30);
  (*(code *)0x15712074c)(uVar3,&LAB_15712079f,param_3,0x1ea4);
  return;
}



// FUNCTION 14db0fb2c FUN_14db0fb2c body=430 status=ok
// SIG undefined FUN_14db0fb2c(void)

/* WARNING: Removing unreachable block (ram,0x00014db0fbae) */

void FUN_14db0fb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  longlong local_res20;
  
  *(ulonglong *)(unaff_RBX + 0x10) = ~unaff_R14 | ~*(ulonglong *)(unaff_RBX + 0x10);
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = in_stack_00000008;
  *(undefined8 *)(local_res20 + -0x18) = in_stack_00000008;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) - *(longlong *)(local_res20 + -8);
  *(longlong *)(local_res20 + -0x10) = -*(longlong *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -8) = 0x1614c8f6;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x87b5509;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x1e6f9dff;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x1663fd87a;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
                    /* WARNING: Could not recover jumptable at 0x0001663fd864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RAX + 0xe0))
            (in_stack_00000010,param_2,*(undefined8 *)(local_res20 + -0x10),param_4);
  return;
}



// FUNCTION 14db0fc64 FUN_14db0fc64 body=168 status=ok
// SIG undefined FUN_14db0fc64(void)

/* WARNING: Removing unreachable block (ram,0x00014db0fd01) */
/* WARNING: Removing unreachable block (ram,0x00014db0fd0c) */
/* WARNING: Removing unreachable block (ram,0x00014db0fdbf) */
/* WARNING: Removing unreachable block (ram,0x00014db0fdc5) */
/* WARNING: Removing unreachable block (ram,0x00014db0fdc9) */
/* WARNING: Removing unreachable block (ram,0x000162822a8c) */
/* WARNING: Removing unreachable block (ram,0x000162822ab6) */
/* WARNING: Removing unreachable block (ram,0x000162822ab1) */
/* WARNING: Removing unreachable block (ram,0x000162822abc) */
/* WARNING: Removing unreachable block (ram,0x00014db0fd07) */

void FUN_14db0fc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 in_stack_00000008;
  
  FUN_161366e99(*(undefined8 *)(unaff_R13 + -0x98),in_stack_00000008,param_3);
  return;
}



// FUNCTION 14db0fd0c FUN_14db0fd0c body=564 status=ok
// SIG undefined FUN_14db0fd0c(void)

/* WARNING: Removing unreachable block (ram,0x000162822ab6) */
/* WARNING: Removing unreachable block (ram,0x00014db0fdc5) */
/* WARNING: Removing unreachable block (ram,0x00014db0fdc9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000162822ad5 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db0fd0c(void)

{
  FUN_1615f3a25();
  return;
}



// FUNCTION 14db0fe55 FUN_14db0fe55 body=267 status=ok
// SIG undefined FUN_14db0fe55(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db0fefe) */
/* WARNING: Removing unreachable block (ram,0x00014db0ff04) */

void FUN_14db0fe55(undefined8 param_1)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x28) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0xd8e9a26;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x4bc5d0d8;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x464b4afe;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x16484aace;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db0ff89 FUN_14db0ff89 body=223 status=ok
// SIG undefined FUN_14db0ff89(void)

void FUN_14db0ff89(undefined8 param_1,ulonglong param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  undefined8 local_res8;
  
  local_res8 = (ulonglong)((uint)local_res8 ^ 0x74e617da);
  uVar2 = -(local_res8 - *(longlong *)(unaff_R12 + -0x80));
  uVar1 = ~CONCAT71(in_register_00000001,in_AL) | uVar2;
  uVar2 = ~(uVar2 & ~CONCAT71(in_register_00000001,in_AL));
  FUN_14dbda47e(*(ulonglong *)(unaff_R12 + -0x58) ^ CONCAT71(in_register_00000001,in_AL),~param_2,
                ~((uVar2 - (uVar1 | uVar2)) + uVar1));
  FUN_165c7153c();
  return;
}



// FUNCTION 14db1015c FUN_14db1015c body=303 status=ok
// SIG undefined FUN_14db1015c(void)

/* WARNING: Removing unreachable block (ram,0x00014db101e4) */
/* WARNING: Removing unreachable block (ram,0x00014db101ea) */

void FUN_14db1015c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ushort *unaff_RDI;
  undefined8 unaff_R15;
  undefined8 in_stack_00000008;
  
  *unaff_RDI = (*unaff_RDI - 1) - ~(0xfeff - (*unaff_RDI | 0xfeff));
  *(ulonglong *)(param_5 + -8) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x10) = in_stack_00000008;
  *(undefined8 *)(param_5 + -0x18) = in_stack_00000008;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(ulonglong *)(param_5 + -0x10) = *(ulonglong *)(param_5 + -0x10) ^ *(ulonglong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  plVar1 = (longlong *)(param_5 + -8);
  uVar2 = *(undefined8 *)(param_5 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + 0x165811855;
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *(undefined **)(param_5 + -0x18) = &DAT_165785441;
  FUN_16581182e(uVar2,*(undefined8 *)(param_5 + -0x20),param_3,param_4);
  return;
}



// FUNCTION 14db101ea FUN_14db101ea body=136 status=ok
// SIG undefined FUN_14db101ea(void)

void FUN_14db101ea(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164ab32d9(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15,unaff_RSI + param_3 * -2);
  return;
}



// FUNCTION 14db10273 FUN_14db10273 body=144 status=ok
// SIG undefined FUN_14db10273(void)

/* WARNING: Removing unreachable block (ram,0x00016615b53c) */

void FUN_14db10273(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  
  FUN_15b78685c((char)param_1,
                (param_1 - (*(ulonglong *)(unaff_RDI + -0x40) | param_1)) +
                *(ulonglong *)(unaff_RDI + -0x40),param_3,param_4 + param_1 + unaff_R13);
  return;
}



// FUNCTION 14db10303 FUN_14db10303 body=175 status=ok
// SIG undefined FUN_14db10303(void)

void FUN_14db10303(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  
  FUN_15754b3fe(param_1,param_2,FUN_15754b3fe,0xffffffffffe7e7d0,*(undefined8 *)(unaff_RSI + -8));
  return;
}



// FUNCTION 14db10448 FUN_14db10448 body=55 status=ok
// SIG undefined FUN_14db10448(void)

void FUN_14db10448(void)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res10 = 0x2a597b6;
  local_res10[-1] = unaff_RSI;
  local_res10[-2] = unaff_RSI;
  local_res10[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14db104dc FUN_14db104dc body=440 status=ok
// SIG undefined FUN_14db104dc(void)

/* WARNING: Removing unreachable block (ram,0x00014db105f6) */
/* WARNING: Removing unreachable block (ram,0x00014db10601) */
/* WARNING: Removing unreachable block (ram,0x00014db105fc) */

void FUN_14db104dc(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined2 unaff_SI;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  
  param_1 = local_res18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x10) = param_2;
  *(undefined8 *)(param_1 - 0x18) = param_2;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  uVar2 = *(undefined8 *)(param_1 - 0x18);
  *(undefined8 *)(param_1 - 0x18) = in_R10;
  *(undefined8 *)(param_1 - 8) = 0;
  *(longlong *)(param_1 - 8) = (longlong)(&LAB_14e2062e4 + *(longlong *)(param_1 - 8));
  *(longlong *)(param_1 - 0x10) = unaff_R14;
  *(longlong *)(param_1 - 0x18) = unaff_R14;
  *(code **)(param_1 - 0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(param_1 - 0x20) = 0x14db10569;
  uVar3 = FUN_14e2062c9(local_res8,uVar2,param_3,unaff_retaddr);
  *(longlong *)(param_1 - 0x18) = *(longlong *)(unaff_R12 + -0x30) + uVar3;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  *(undefined2 *)(param_1 - 0x12) = unaff_SI;
  FUN_164809d3d(*(ulonglong *)(unaff_R12 + -0x58) + uVar3 +
                ~(~*(ulonglong *)(unaff_R12 + -0x58) | ~uVar3) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) + uVar3 +
                (*(ulonglong *)(unaff_R12 + -0x78) & uVar3) * -2,uVar1 ^ uVar3);
  return;
}



// FUNCTION 14db107bc FUN_14db107bc body=179 status=ok
// SIG undefined FUN_14db107bc(void)

void FUN_14db107bc(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_166a13890(0,param_2,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,~(param_4 & in_RAX) & param_1);
  return;
}



// FUNCTION 14db109ad FUN_14db109ad body=127 status=ok
// SIG undefined FUN_14db109ad(void)

/* WARNING: Removing unreachable block (ram,0x00014db109ee) */

void FUN_14db109ad(void)

{
  FUN_16283f69a();
  return;
}



// FUNCTION 14db10ab6 FUN_14db10ab6 body=141 status=ok
// SIG undefined FUN_14db10ab6(void)

/* WARNING: Removing unreachable block (ram,0x00014db10b45) */

void FUN_14db10ab6(void)

{
  ulonglong unaff_RBP;
  longlong in_R10;
  ulonglong in_stack_00000008;
  
  if (in_R10 + unaff_RBP + in_stack_00000008 < (unaff_RBP & in_stack_00000008) << 1) {
    FUN_162d29c31();
    return;
  }
  FUN_162d29c31();
  return;
}



// FUNCTION 14db10b45 FUN_14db10b45 body=131 status=ok
// SIG undefined FUN_14db10b45(void)

void FUN_14db10b45(undefined8 param_1)

{
  FUN_156806a1c(param_1);
  return;
}



// FUNCTION 14db10bc9 FUN_14db10bc9 body=162 status=ok
// SIG undefined FUN_14db10bc9(void)

void FUN_14db10bc9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  
  FUN_16487de3f(param_1,param_2,param_3,param_4,
                ((in_stack_00000008 | in_RAX) -
                (~(in_stack_00000008 & in_RAX) | in_stack_00000008 | in_RAX)) +
                ~(in_stack_00000008 & in_RAX));
  uVar2 = ~(unaff_R15 | ~*(ulonglong *)(unaff_R13 + -0x80));
  lVar1 = uVar2 + (-1 - (~unaff_R15 | uVar2));
  FUN_1617143c0(lVar1,lVar1,param_3,FUN_1617143c0);
  return;
}



// FUNCTION 14db10c6b FUN_14db10c6b body=126 status=ok
// SIG undefined FUN_14db10c6b(void)

void FUN_14db10c6b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~(unaff_R15 | ~*(ulonglong *)(unaff_R13 + -0x80));
  lVar1 = uVar2 + (-1 - (~unaff_R15 | uVar2));
  FUN_1617143c0(lVar1,lVar1,param_3,FUN_1617143c0);
  return;
}



// FUNCTION 14db10cea FUN_14db10cea body=31 status=ok
// SIG undefined FUN_14db10cea(void)

void FUN_14db10cea(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  uint auStackX_8 [8];
  
  *(undefined4 *)((longlong)auStackX_8 + ~param_3) = 0;
  puVar1 = (uint *)((longlong)auStackX_8 + ~param_3);
  *puVar1 = *puVar1 ^ 0xffffffff;
  return;
}



// FUNCTION 14db10d71 FUN_14db10d71 body=155 status=ok
// SIG undefined FUN_14db10d71(void)

void FUN_14db10d71(void)

{
  (*(code *)0x165a7c68b)();
  return;
}



// FUNCTION 14db10e8c FUN_14db10e8c body=135 status=ok
// SIG undefined FUN_14db10e8c(void)

void FUN_14db10e8c(undefined8 param_1)

{
  undefined4 unaff_R12D;
  undefined8 local_res18;
  
  FUN_1621df33a(param_1,unaff_R12D,local_res18);
  return;
}



// FUNCTION 14db10fb9 FUN_14db10fb9 body=217 status=ok
// SIG undefined FUN_14db10fb9(void)

/* WARNING: Removing unreachable block (ram,0x00014db11058) */
/* WARNING: Removing unreachable block (ram,0x00014db1105e) */
/* WARNING: Removing unreachable block (ram,0x00015b8910c0) */
/* WARNING: Removing unreachable block (ram,0x00015b891140) */
/* WARNING: Removing unreachable block (ram,0x00015b89114b) */
/* WARNING: Removing unreachable block (ram,0x00015b891146) */
/* WARNING: Removing unreachable block (ram,0x00015b89113b) */
/* WARNING: Removing unreachable block (ram,0x00016260117c) */
/* WARNING: Removing unreachable block (ram,0x00016260118b) */
/* WARNING: Removing unreachable block (ram,0x000162601190) */

void FUN_14db10fb9(void)

{
  FUN_15b8910c0();
  return;
}



// FUNCTION 14db110ec FUN_14db110ec body=124 status=ok
// SIG undefined FUN_14db110ec(void)

void FUN_14db110ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_resc;
  
  FUN_15b6e3c66(~(local_resc & 0xc4d7e614),param_2,param_3);
  return;
}



// FUNCTION 14db112bd FUN_14db112bd body=24 status=ok
// SIG undefined FUN_14db112bd(void)

undefined8 FUN_14db112bd(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db113b6 FUN_14db113b6 body=95 status=ok
// SIG undefined FUN_14db113b6(void)

void FUN_14db113b6(byte param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar4;
  bool bVar5;
  ulonglong uStackX_10;
  longlong local_res18;
  
  LOCK();
  bVar4 = in_AL < DAT_14d7a74e1;
  bVar5 = SBORROW1(in_AL,DAT_14d7a74e1);
  cVar2 = in_AL - DAT_14d7a74e1;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7a74e1;
  }
  DAT_14d7a74e1 = bVar3;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined4 *)(local_res18 + -0x18) = 0xb1c67df;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R14;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x82ae80d;
  *(undefined8 *)(local_res18 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res18 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14db11573 FUN_14db11573 body=134 status=ok
// SIG undefined FUN_14db11573(void)

undefined8 FUN_14db11573(undefined8 param_1)

{
  longlong unaff_RDI;
  
  return CONCAT62((uint6)((ulonglong)*(undefined8 *)(unaff_RDI + -0x50) >> 0x10) |
                  (uint6)((ulonglong)param_1 >> 0x10),0xb5b2);
}



// FUNCTION 14db115fa FUN_14db115fa body=42 status=ok
// SIG undefined FUN_14db115fa(void)

void FUN_14db115fa(void)

{
  FUN_14d7bf4e3();
  return;
}



// FUNCTION 14db11744 FUN_14db11744 body=303 status=ok
// SIG undefined FUN_14db11744(void)

/* WARNING: Instruction at (ram,0x00015678545b) overlaps instruction at (ram,0x00015678545a)
    */
/* WARNING: Removing unreachable block (ram,0x00014db117c8) */
/* WARNING: Removing unreachable block (ram,0x00014db117ce) */
/* WARNING: Removing unreachable block (ram,0x00014db11862) */
/* WARNING: Removing unreachable block (ram,0x00014db11867) */
/* WARNING: Removing unreachable block (ram,0x00014db1186d) */
/* WARNING: Removing unreachable block (ram,0x00014db11889) */
/* WARNING: Removing unreachable block (ram,0x00014db11884) */
/* WARNING: Removing unreachable block (ram,0x00014df0767b) */
/* WARNING: Removing unreachable block (ram,0x0001628104f7) */
/* WARNING: Removing unreachable block (ram,0x000162810509) */
/* WARNING: Removing unreachable block (ram,0x00016281050d) */
/* WARNING: Removing unreachable block (ram,0x000162810693) */
/* WARNING: Removing unreachable block (ram,0x000162810699) */
/* WARNING: Removing unreachable block (ram,0x00015678543d) */
/* WARNING: Removing unreachable block (ram,0x00015678545b) */
/* WARNING: Removing unreachable block (ram,0x00015678545a) */
/* WARNING: Removing unreachable block (ram,0x000156785465) */
/* WARNING: Removing unreachable block (ram,0x000156785492) */
/* WARNING: Removing unreachable block (ram,0x0001567854c0) */
/* WARNING: Removing unreachable block (ram,0x0001567854cb) */
/* WARNING: Removing unreachable block (ram,0x0001567854d7) */
/* WARNING: Removing unreachable block (ram,0x000160b923ad) */
/* WARNING: Removing unreachable block (ram,0x000160b923ce) */
/* WARNING: Removing unreachable block (ram,0x00014db11a38) */
/* WARNING: Removing unreachable block (ram,0x00014db11a3e) */

undefined8 FUN_14db11744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14ddf5f34(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14db117ce FUN_14db117ce body=818 status=ok
// SIG undefined FUN_14db117ce(void)

/* WARNING: Instruction at (ram,0x00015678545b) overlaps instruction at (ram,0x00015678545a)
    */
/* WARNING: Removing unreachable block (ram,0x00014db11a38) */
/* WARNING: Removing unreachable block (ram,0x00014db11a3e) */
/* WARNING: Removing unreachable block (ram,0x000162810699) */
/* WARNING: Removing unreachable block (ram,0x00014db11867) */
/* WARNING: Removing unreachable block (ram,0x0001628104f7) */
/* WARNING: Removing unreachable block (ram,0x000162810509) */
/* WARNING: Removing unreachable block (ram,0x00016281050d) */
/* WARNING: Removing unreachable block (ram,0x000162810693) */
/* WARNING: Removing unreachable block (ram,0x00015678543d) */
/* WARNING: Removing unreachable block (ram,0x00015678545b) */
/* WARNING: Removing unreachable block (ram,0x00015678545a) */
/* WARNING: Removing unreachable block (ram,0x000156785465) */
/* WARNING: Removing unreachable block (ram,0x000156785492) */
/* WARNING: Removing unreachable block (ram,0x0001567854cb) */
/* WARNING: Removing unreachable block (ram,0x000160b923ad) */
/* WARNING: Removing unreachable block (ram,0x000160b923ce) */
/* WARNING: Removing unreachable block (ram,0x0001567854d7) */
/* WARNING: Removing unreachable block (ram,0x0001567854c0) */
/* WARNING: Removing unreachable block (ram,0x00014db1186d) */
/* WARNING: Removing unreachable block (ram,0x00014db11884) */
/* WARNING: Removing unreachable block (ram,0x00014db11889) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db117ce(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1628104f7();
  return uVar1;
}



// FUNCTION 14db11bc3 FUN_14db11bc3 body=158 status=ok
// SIG undefined FUN_14db11bc3(void)

void FUN_14db11bc3(undefined8 param_1,undefined8 param_2)

{
  FUN_15b7d02ab(param_1,param_2,0xffffffffe15e8c3f);
  return;
}



// FUNCTION 14db11c67 FUN_14db11c67 body=139 status=ok
// SIG undefined FUN_14db11c67(void)

void FUN_14db11c67(undefined8 param_1)

{
  (*(code *)&LAB_15b575139)(param_1);
  return;
}



// FUNCTION 14db11d96 FUN_14db11d96 body=306 status=ok
// SIG undefined FUN_14db11d96(void)

/* WARNING: Removing unreachable block (ram,0x00014db11e37) */
/* WARNING: Removing unreachable block (ram,0x00014db11e42) */
/* WARNING: Removing unreachable block (ram,0x00014db11e3d) */

longlong FUN_14db11d96(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(0xf18 - (1 - (unaff_R13 + -0xf4f)));
  return uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2;
}



// FUNCTION 14db11f54 FUN_14db11f54 body=138 status=ok
// SIG undefined FUN_14db11f54(void)

/* WARNING: Removing unreachable block (ram,0x00014db11fb8) */
/* WARNING: Removing unreachable block (ram,0x00014db1208c) */

void FUN_14db11f54(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar3 = (~(unaff_RSI & param_3) + param_3) - ~unaff_RSI;
  uVar1 = (~(0xffffffffffffffff - param_3 & param_1) + param_1) -
          (0xffffffffffffffff - param_3 ^ 0xffffffffffffffff);
  uVar1 = FUN_16207c728(param_1,FUN_16207c728,~((uVar1 - (uVar3 | uVar1)) + uVar3));
  uVar3 = *(ulonglong *)(unaff_R12 + -0x58) ^ uVar1;
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1;
  if ((~(*(ulonglong *)(unaff_R12 + -0x50) & uVar1) & (*(ulonglong *)(unaff_R12 + -0x50) | uVar1))
      == 0) {
    FUN_1614791b2(uVar3,uVar2);
    return;
  }
  FUN_1614791b2(uVar3,uVar2);
  return;
}



// FUNCTION 14db11fde FUN_14db11fde body=174 status=ok
// SIG undefined FUN_14db11fde(void)

/* WARNING: Removing unreachable block (ram,0x00014db1208c) */

void FUN_14db11fde(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX;
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  if ((~(*(ulonglong *)(unaff_R12 + -0x50) & in_RAX) & (*(ulonglong *)(unaff_R12 + -0x50) | in_RAX))
      == 0) {
    FUN_1614791b2(uVar1,uVar2);
    return;
  }
  FUN_1614791b2(uVar1,uVar2);
  return;
}



// FUNCTION 14db1208c FUN_14db1208c body=27 status=ok
// SIG undefined FUN_14db1208c(void)

void FUN_14db1208c(void)

{
  return;
}



// FUNCTION 14db121e8 FUN_14db121e8 body=120 status=ok
// SIG undefined FUN_14db121e8(void)

/* WARNING: Removing unreachable block (ram,0x000161b95420) */
/* WARNING: Removing unreachable block (ram,0x000161b954b5) */
/* WARNING: Removing unreachable block (ram,0x000161b954bb) */
/* WARNING: Removing unreachable block (ram,0x0001612437bd) */
/* WARNING: Removing unreachable block (ram,0x0001626f49d6) */
/* WARNING: Removing unreachable block (ram,0x0001626f49dc) */
/* WARNING: Removing unreachable block (ram,0x0001626f4a01) */
/* WARNING: Removing unreachable block (ram,0x0001626f4a0d) */
/* WARNING: Removing unreachable block (ram,0x00016493238c) */
/* WARNING: Removing unreachable block (ram,0x00014db12261) */

undefined8 FUN_14db121e8(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  
  if (unaff_RBP + in_RAX < (unaff_RBP & in_RAX) * 2) {
    uVar1 = FUN_161b95420();
    return uVar1;
  }
  uVar1 = FUN_1626f493c();
  return uVar1;
}



// FUNCTION 14db12261 FUN_14db12261 body=186 status=ok
// SIG undefined FUN_14db12261(void)

void FUN_14db12261(void)

{
  FUN_15b8922d9();
  return;
}



// FUNCTION 14db1231f FUN_14db1231f body=33 status=ok
// SIG undefined FUN_14db1231f(void)

void FUN_14db1231f(void)

{
  return;
}



// FUNCTION 14db12622 FUN_14db12622 body=206 status=ok
// SIG undefined FUN_14db12622(void)

void FUN_14db12622(uint param_1)

{
  thunk_FUN_166a67045(~param_1 + 1);
  return;
}



// FUNCTION 14db127a3 FUN_14db127a3 body=106 status=ok
// SIG undefined FUN_14db127a3(void)

void FUN_14db127a3(void)

{
  FUN_15691595b();
  FUN_14db12810();
  return;
}



// FUNCTION 14db12810 FUN_14db12810 body=134 status=ok
// SIG undefined FUN_14db12810(void)

void FUN_14db12810(void)

{
  undefined8 unaff_retaddr;
  
  FUN_15b9a297e(unaff_retaddr);
  return;
}



// FUNCTION 14db12898 FUN_14db12898 body=346 status=ok
// SIG undefined FUN_14db12898(void)

void FUN_14db12898(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(longlong *)(unaff_R12 + 0x10) = -*(longlong *)(unaff_R12 + 0x10);
  *(longlong *)(unaff_R12 + 0x10) = *(longlong *)(unaff_R12 + 0x10) + -1;
  *(ulonglong *)(unaff_R12 + 0x10) =
       (~(uVar1 & unaff_R15) + unaff_R15) - *(longlong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~(unaff_RBP & *(ulonglong *)(unaff_R12 + 0x10));
  FUN_160f00c7c();
  FUN_165abf954(param_1,unaff_RDI - param_2);
  return;
}



// FUNCTION 14db129f4 FUN_14db129f4 body=138 status=ok
// SIG undefined FUN_14db129f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db129f4(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong in_RAX;
  byte unaff_BPL;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  uVar1 = ~((unaff_RDI ^ 0xffffffffffffffff | param_3) & (~param_3 | in_RAX));
  FUN_165ddab45(FUN_165ddab45,unaff_BPL | (byte)in_RAX);
  FUN_1565633ce(*(undefined8 *)(param_4 + -0x98),unaff_retaddr,uVar1,
                *(ulonglong *)(param_4 + -0xa0) ^ unaff_R14);
  return;
}



// FUNCTION 14db12a7f FUN_14db12a7f body=323 status=ok
// SIG undefined FUN_14db12a7f(void)

void FUN_14db12a7f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  FUN_1565633ce(*(undefined8 *)(param_4 + -0x98),unaff_retaddr,param_3,
                *(ulonglong *)(param_4 + -0xa0) ^ unaff_R14);
  return;
}



// FUNCTION 14db12c49 FUN_14db12c49 body=160 status=ok
// SIG undefined FUN_14db12c49(void)

void FUN_14db12c49(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_15667521b(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14db12d87 FUN_14db12d87 body=138 status=ok
// SIG undefined FUN_14db12d87(void)

void FUN_14db12d87(void)

{
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res8;
  
  if (unaff_R12 == 2) {
    FUN_157860aaa();
    return;
  }
  if (unaff_R12 == 3) {
    if (-1 < local_res8) {
      return;
    }
    FUN_1664e2a31(local_res8,FUN_1664e2a31,unaff_retaddr);
    return;
  }
  if (unaff_R12 == 4) {
    FUN_16560fffb();
    return;
  }
  if (unaff_R12 != 5) {
    FUN_14db12dcf();
    return;
  }
  FUN_1647a2ff8();
  return;
}



// FUNCTION 14db12dcf FUN_14db12dcf body=366 status=ok
// SIG undefined FUN_14db12dcf(void)

/* WARNING: Removing unreachable block (ram,0x00014db12ea6) */
/* WARNING: Removing unreachable block (ram,0x00014db12eac) */
/* WARNING: Removing unreachable block (ram,0x00014db12f09) */
/* WARNING: Removing unreachable block (ram,0x000156e03a00) */
/* WARNING: Removing unreachable block (ram,0x00014db12e01) */

undefined8 FUN_14db12dcf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool in_SF;
  longlong unaff_retaddr;
  
  if (-1 < unaff_retaddr) {
    uVar1 = FUN_165ee5d93();
    return uVar1;
  }
  if (in_SF) {
    uVar1 = FUN_156517ed7(param_1,unaff_retaddr,param_3,0x20);
    return uVar1;
  }
  uVar1 = FUN_164f4a3a0();
  return uVar1;
}



// FUNCTION 14db12f41 FUN_14db12f41 body=240 status=ok
// SIG undefined FUN_14db12f41(void)

/* WARNING: Removing unreachable block (ram,0x00014db12fc1) */

void FUN_14db12f41(void)

{
  undefined8 uVar1;
  ushort *in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  longlong local_res20;
  
  *in_R11 = (*in_R11 | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  uVar1 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined **)(local_res20 + -8) = &DAT_15b7e84ec;
  *(undefined8 *)(local_res20 + -0x10) = uVar1;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(code **)(local_res20 + -0x10) = thunk_FUN_166478ed4;
  return;
}



// FUNCTION 14db12fc1 FUN_14db12fc1 body=163 status=ok
// SIG undefined FUN_14db12fc1(void)

void FUN_14db12fc1(undefined8 param_1)

{
  FUN_14ddf482d(param_1);
  return;
}



// FUNCTION 14db13064 FUN_14db13064 body=144 status=ok
// SIG undefined FUN_14db13064(void)

void FUN_14db13064(undefined1 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char in_AL;
  short in_R11W;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  *param_2 = in_R11W + -0x101 + *param_2;
                    /* WARNING: Read-only address (ram,0x00014d7a4bc7) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a4bc7;
  }
  uRam000000014d7a4bc7 = uVar1;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = local_res10;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined4 *)(local_res20 + -0x18) = 0x5270508;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x28) = param_4;
  FUN_1611abe97();
  return;
}



// FUNCTION 14db13236 FUN_14db13236 body=653 status=ok
// SIG undefined FUN_14db13236(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db13378) */
/* WARNING: Removing unreachable block (ram,0x00014db1337e) */
/* WARNING: Removing unreachable block (ram,0x00014db133c1) */
/* WARNING: Removing unreachable block (ram,0x00014db133c4) */
/* WARNING: Removing unreachable block (ram,0x00014db13409) */
/* WARNING: Removing unreachable block (ram,0x00014db1340f) */
/* WARNING: Removing unreachable block (ram,0x0001666b0903) */
/* WARNING: Removing unreachable block (ram,0x0001666b0960) */
/* WARNING: Removing unreachable block (ram,0x0001666b0963) */
/* WARNING: Removing unreachable block (ram,0x0001567f213d) */
/* WARNING: Removing unreachable block (ram,0x0001567f2179) */
/* WARNING: Removing unreachable block (ram,0x0001567f217c) */
/* WARNING: Removing unreachable block (ram,0x0001567f2243) */
/* WARNING: Removing unreachable block (ram,0x0001567f2249) */
/* WARNING: Removing unreachable block (ram,0x00015732e89e) */
/* WARNING: Removing unreachable block (ram,0x00015732e907) */
/* WARNING: Removing unreachable block (ram,0x00015732e90c) */
/* WARNING: Removing unreachable block (ram,0x00014db1336a) */
/* WARNING: Removing unreachable block (ram,0x00014db132cf) */

undefined8 FUN_14db13236(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong in_R10;
  
  *(ulonglong *)(in_R10 + 8) = ~in_RAX;
  FUN_15b1f6df8(param_1,0xcd4d59b5);
  uVar1 = FUN_15685c0b3();
  return uVar1;
}



// FUNCTION 14db13602 FUN_14db13602 body=153 status=ok
// SIG undefined FUN_14db13602(void)

void FUN_14db13602(void)

{
  return;
}



// FUNCTION 14db13715 FUN_14db13715 body=74 status=ok
// SIG undefined FUN_14db13715(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db13715(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined1 **)(local_res18 + -8) = &LAB_14db13774;
  *(longlong *)(local_res18 + -0x18) = local_res18 + -0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db1386f FUN_14db1386f body=226 status=ok
// SIG undefined FUN_14db1386f(void)

void FUN_14db1386f(undefined8 param_1)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_8;
  
  FUN_15b94366f();
  local_8 = (ulonglong)(in_EAX ^ 0x414e718a);
  local_8 = local_8 + *(longlong *)(unaff_R13 + -0x88);
  uVar1 = 0xffffffffffffffff - unaff_R15 | local_8;
  uVar2 = local_8 ^ 0xffffffffffffffff | unaff_R15;
  FUN_15b488292(param_1,*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,
                ~((uVar2 - (uVar1 | uVar2)) + uVar1));
  return;
}



// FUNCTION 14db13954 FUN_14db13954 body=169 status=ok
// SIG undefined FUN_14db13954(void)

/* WARNING: Removing unreachable block (ram,0x0001622869ce) */
/* WARNING: Removing unreachable block (ram,0x0001622869d4) */
/* WARNING: Removing unreachable block (ram,0x0001622869d9) */
/* WARNING: Removing unreachable block (ram,0x000162286945) */
/* WARNING: Removing unreachable block (ram,0x0001622869c9) */
/* WARNING: Removing unreachable block (ram,0x000162acfe3d) */
/* WARNING: Removing unreachable block (ram,0x000162acfec7) */
/* WARNING: Removing unreachable block (ram,0x000162acfecd) */
/* WARNING: Removing unreachable block (ram,0x000162acff05) */
/* WARNING: Removing unreachable block (ram,0x000162acff13) */
/* WARNING: Removing unreachable block (ram,0x000162acff0e) */
/* WARNING: Removing unreachable block (ram,0x00016145a1dd) */
/* WARNING: Removing unreachable block (ram,0x00014db139fd) */

void FUN_14db13954(void)

{
  FUN_162acfe3d();
  return;
}



// FUNCTION 14db139fd FUN_14db139fd body=163 status=ok
// SIG undefined FUN_14db139fd(void)

void FUN_14db139fd(undefined8 param_1)

{
  FUN_1666b38e5(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014db13a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}



// FUNCTION 14db13e18 thunk_FUN_14db13e1e body=5 status=ok
// SIG undefined thunk_FUN_14db13e1e(void)

void thunk_FUN_14db13e1e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b3b3c43((0xffffffffffffffff - (~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) ^
                0xffffffffffffffff) & (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14db13e1e FUN_14db13e1e body=238 status=ok
// SIG undefined FUN_14db13e1e(void)

void FUN_14db13e1e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b3b3c43((0xffffffffffffffff - (~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) ^
                0xffffffffffffffff) & (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14db13fa7 FUN_14db13fa7 body=175 status=ok
// SIG undefined FUN_14db13fa7(void)

void FUN_14db13fa7(undefined8 param_1,undefined8 param_2)

{
  FUN_166a9eaca(param_1,param_2);
  return;
}



// FUNCTION 14db14058 FUN_14db14058 body=142 status=ok
// SIG undefined FUN_14db14058(void)

void FUN_14db14058(void)

{
  FUN_16662a05b();
  return;
}



// FUNCTION 14db140e8 FUN_14db140e8 body=137 status=ok
// SIG undefined FUN_14db140e8(void)

void FUN_14db140e8(void)

{
  undefined8 in_R11;
  longlong unaff_R14;
  undefined8 uStackX_10;
  
  *(undefined8 *)(uStackX_10 + unaff_R14 + 0x60f4d13c) = in_R11;
  (*(code *)0x1663f3c0a)(0x1663f3c0a);
  return;
}



// FUNCTION 14db1421f FUN_14db1421f body=323 status=ok
// SIG undefined FUN_14db1421f(void)

longlong FUN_14db1421f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1573f2ff5();
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14db14536 FUN_14db14536 body=214 status=ok
// SIG undefined FUN_14db14536(void)

/* WARNING: Removing unreachable block (ram,0x00014db145af) */
/* WARNING: Removing unreachable block (ram,0x00014db145ba) */
/* WARNING: Removing unreachable block (ram,0x000157020cd1) */
/* WARNING: Removing unreachable block (ram,0x00014db145b5) */

undefined8 FUN_14db14536(longlong param_1)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_15b10eaae(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + param_1)) &
                         (~*(ulonglong *)(unaff_R13 + param_1) | unaff_R15)),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14db14656 FUN_14db14656 body=159 status=ok
// SIG undefined FUN_14db14656(void)

void FUN_14db14656(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ushort *in_RAX;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res20;
  
  *in_RAX = (*in_RAX | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = local_res8;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x20) = param_2;
  uVar3 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(code **)(local_res20 + -0x28) = FUN_14db146f6;
  uVar4 = FUN_162b76fb8(param_1,uVar3,param_3,unaff_retaddr);
  *(undefined4 *)(local_res20 + -0x20) = 0x8e2d86fd;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_R12 + *(longlong *)(local_res20 + -0x20) + 0x71d278d3);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80);
  *(undefined4 *)(local_res20 + -0x20) = 0xe8882738;
  *(uint *)(local_res20 + -0x20) = *(uint *)(local_res20 + -0x20) ^ 0x2a073366;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  FUN_1566ed040(FUN_1566ed040,uVar1 + 0x1b5f554,uVar2 ^ uVar4,uVar1 ^ uVar4);
  return;
}



// FUNCTION 14db146f6 FUN_14db146f6 body=173 status=ok
// SIG undefined FUN_14db146f6(void)

void FUN_14db146f6(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1566ed040(FUN_1566ed040,*(ulonglong *)(unaff_R12 + -0x30) + 0x1b5f554,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db148e7 FUN_14db148e7 body=840 status=ok
// SIG undefined FUN_14db148e7(void)

/* WARNING: Removing unreachable block (ram,0x00014db1496b) */
/* WARNING: Removing unreachable block (ram,0x000166967d2a) */
/* WARNING: Removing unreachable block (ram,0x000166967d34) */
/* WARNING: Removing unreachable block (ram,0x00014db14971) */
/* WARNING: Removing unreachable block (ram,0x00014db149df) */
/* WARNING: Removing unreachable block (ram,0x00014db149e5) */
/* WARNING: Removing unreachable block (ram,0x0001564d37de) */
/* WARNING: Removing unreachable block (ram,0x0001565e804f) */
/* WARNING: Removing unreachable block (ram,0x000161b3cc3d) */
/* WARNING: Removing unreachable block (ram,0x0001565e80bf) */
/* WARNING: Removing unreachable block (ram,0x0001565e80cf) */
/* WARNING: Removing unreachable block (ram,0x0001565e80da) */
/* WARNING: Removing unreachable block (ram,0x0001564d3855) */
/* WARNING: Removing unreachable block (ram,0x0001564d385b) */
/* WARNING: Removing unreachable block (ram,0x0001564d38ed) */
/* WARNING: Removing unreachable block (ram,0x0001564d38f3) */
/* WARNING: Removing unreachable block (ram,0x000161558648) */

undefined8 FUN_14db148e7(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166967d2a();
  return uVar1;
}



// FUNCTION 14db149e5 FUN_14db149e5 body=182 status=ok
// SIG undefined FUN_14db149e5(void)

void FUN_14db149e5(void)

{
  ushort in_AX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b4e5dc0(CONCAT62((int6)((ulonglong)*(undefined8 *)(unaff_RSI + -0x68) >> 0x10),
                         in_AX & (ushort)*(undefined8 *)(unaff_RSI + -0x60)) ^ 0xffff,FUN_15b4e5dc0,
                *(undefined8 *)(unaff_RSI + -0x60),*(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14db14a9b FUN_14db14a9b body=164 status=ok
// SIG undefined FUN_14db14a9b(void)

void FUN_14db14a9b(void)

{
  longlong in_R9;
  
  if (in_R9 == 0xc1ea0) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 == 0xc1ea1) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 != 0xc1ea2) {
    FUN_166c7ad7f();
    return;
  }
  return;
}



// FUNCTION 14db14cff FUN_14db14cff body=279 status=ok
// SIG undefined FUN_14db14cff(void)

/* WARNING: Removing unreachable block (ram,0x00014db14d77) */
/* WARNING: Removing unreachable block (ram,0x00014db14d7d) */
/* WARNING: Removing unreachable block (ram,0x0001652861c2) */

void FUN_14db14cff(void)

{
  FUN_1652861c2();
  return;
}



// FUNCTION 14db14ea9 FUN_14db14ea9 body=134 status=ok
// SIG undefined FUN_14db14ea9(void)

void FUN_14db14ea9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *unaff_RDI;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  uVar1 = *unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = *unaff_RDI | unaff_R15;
  *unaff_RDI = ~(~unaff_R15 | uVar1) | ~*unaff_RDI;
  FUN_165c1f66f(param_1,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14db14fce FUN_14db14fce body=321 status=ok
// SIG undefined FUN_14db14fce(void)

/* WARNING: Removing unreachable block (ram,0x00014de782c4) */
/* WARNING: Removing unreachable block (ram,0x000166b8413e) */
/* WARNING: Removing unreachable block (ram,0x00014db1504b) */
/* WARNING: Removing unreachable block (ram,0x00014db1509f) */

undefined8 FUN_14db14fce(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166b8413e();
  return uVar1;
}



// FUNCTION 14db1504b FUN_14db1504b body=137 status=ok
// SIG undefined FUN_14db1504b(void)

void FUN_14db1504b(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  byte in_AL;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res18 ^ in_R10;
  uVar2 = local_res20 ^ in_R10;
  bVar15 = (uVar1 & 0x4000) != 0;
  bVar13 = (uVar1 & 0x400) != 0;
  bVar12 = (uVar1 & 0x200) != 0;
  bVar10 = (uVar1 & 0x10) != 0;
  bVar17 = (uVar1 & 0x200000) != 0;
  bVar16 = (uVar1 & 0x40000) != 0;
  LOCK();
  bVar8 = in_AL < DAT_14d7bd12c;
  bVar14 = SBORROW1(in_AL,DAT_14d7bd12c);
  cVar5 = in_AL - DAT_14d7bd12c;
  bVar11 = cVar5 == '\0';
  bVar9 = (POPCOUNT(cVar5) & 1U) == 0;
  if (bVar11) {
    DAT_14d7bd12c = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(uVar2 - 8) = local_res8;
  *(undefined8 *)(uVar2 - 0x10) = local_res8;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)bVar15 * 0x4000 | (ulonglong)bVar14 * 0x800 | (ulonglong)bVar13 * 0x400 |
       (ulonglong)bVar12 * 0x200 | (ulonglong)(cVar5 < '\0') * 0x80 | (ulonglong)bVar11 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar9 * 4 | (ulonglong)bVar8 |
       (ulonglong)bVar17 * 0x200000 | (ulonglong)bVar16 * 0x40000;
  *(ulonglong *)(uVar2 - 0x20) =
       (ulonglong)bVar15 * 0x4000 | (ulonglong)bVar14 * 0x800 | (ulonglong)bVar13 * 0x400 |
       (ulonglong)bVar12 * 0x200 | (ulonglong)(cVar5 < '\0') * 0x80 | (ulonglong)bVar11 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar9 * 4 | (ulonglong)bVar8 |
       (ulonglong)bVar17 * 0x200000 | (ulonglong)bVar16 * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RDI;
  *(code **)(uVar2 - 0x28) = FUN_14db150d4;
  uVar6 = FUN_166df7786(param_1,param_4 + (param_2 & in_R10) * -2,param_3,0x5988bb3);
  *(ulonglong *)(uVar2 - 0x20) = uVar6;
  uVar3 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x20) = param_1;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x70);
  *(ulonglong *)(uVar2 - 0x20) = uVar6;
  uVar4 = *(ulonglong *)(uVar2 - 0x20);
  uVar7 = uVar1 ^ 0xffffffffffffffff | uVar6;
  *(ulonglong *)(uVar2 - 0x20) = uVar6;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RSI;
  FUN_162dc7cfc(FUN_162dc7cfc,(~uVar7 | ~uVar4 | uVar1) + uVar7 + 1 ^ 0xffffffffffffffff,param_3,
                uVar3);
  return;
}



// FUNCTION 14db150d4 FUN_14db150d4 body=133 status=ok
// SIG undefined FUN_14db150d4(void)

void FUN_14db150d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x70) ^ 0xffffffffffffffff | in_RAX;
  FUN_162dc7cfc(FUN_162dc7cfc,
                (~uVar1 | ~in_RAX | *(ulonglong *)(unaff_R12 + -0x70)) + uVar1 + 1 ^
                0xffffffffffffffff,param_3,in_RAX);
  return;
}



// FUNCTION 14db15220 FUN_14db15220 body=305 status=ok
// SIG undefined FUN_14db15220(void)

void FUN_14db15220(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & ~param_1;
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ~(unaff_R15 & *(ulonglong *)(param_2 + 8));
  pcVar4 = FUN_161d58483;
  FUN_161d58483(FUN_161d58483,~param_5 & (param_1 ^ 0xffffffffffffffff) | param_5);
  uVar1 = *(ulonglong *)(unaff_R13 + 0x18);
  lVar2 = *(longlong *)(unaff_R13 + 0x18);
  *(undefined8 *)(unaff_R13 + 0x18) = 0x199df834;
  uVar3 = *(ulonglong *)(unaff_R13 + 0x18);
  *(ulonglong *)(unaff_R13 + 0x18) = *(ulonglong *)(unaff_R13 + 0x18) | 0xffffffffe66207cb;
  *(ulonglong *)(unaff_R13 + 0x18) =
       ~(~(uVar3 & 0xffffffffe66207cb) & *(ulonglong *)(unaff_R13 + 0x18));
  *(ulonglong *)(unaff_R13 + 0x18) =
       *(ulonglong *)(unaff_R13 + 0x18) ^
       (-~(ulonglong)pcVar4 - (~-(uVar1 | (ulonglong)pcVar4) + 2)) + lVar2;
  (*(code *)0x160ed2b26)(pcVar4);
  return;
}



// FUNCTION 14db15446 FUN_14db15446 body=93 status=ok
// SIG undefined FUN_14db15446(void)

void FUN_14db15446(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14db158fe FUN_14db158fe body=137 status=ok
// SIG undefined FUN_14db158fe(void)

void FUN_14db158fe(void)

{
  FUN_1658a122b(FUN_1658a122b);
  return;
}



// FUNCTION 14db15ae5 FUN_14db15ae5 body=319 status=ok
// SIG undefined FUN_14db15ae5(void)

void FUN_14db15ae5(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 local_res20;
  
  uVar2 = 0xffffffffffffffff - (param_1 & unaff_RBP) &
          (~(param_2 & unaff_RBP) + unaff_RBP) - ~param_2;
  uVar3 = ~-*(longlong *)(unaff_RSI + -0x58) + 1;
  FUN_16579c77c(uVar2,uVar3 + unaff_RBP + (uVar3 & unaff_RBP) * -2);
  uVar2 = ~(param_6 & uVar2) & (param_6 | uVar2);
  *(undefined8 *)(uVar2 - 8) = local_res20;
  *(code **)(uVar2 - 0x10) = FUN_16579c77c;
  *(longlong *)(uVar2 - 0x10) = unaff_RBX;
  plVar1 = (longlong *)(uVar2 - 0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBX;
  *plVar1 = -*plVar1;
  *(undefined8 *)(uVar2 - 0x20) = param_3;
  *(undefined8 *)(uVar2 - 0x28) = 0x14db15c1d;
  FUN_156c89b24(&LAB_165438280);
  return;
}



// FUNCTION 14db15c62 FUN_14db15c62 body=14 status=ok
// SIG undefined FUN_14db15c62(void)

void FUN_14db15c62(void)

{
  return;
}



// FUNCTION 14db15c9a FUN_14db15c9a body=158 status=ok
// SIG undefined FUN_14db15c9a(void)

void FUN_14db15c9a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14dcbcf7f(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                *(ulonglong *)(0x26fb - ~(unaff_RDI - 0x276cU)) ^ param_1);
  return;
}



// FUNCTION 14db15d38 FUN_14db15d38 body=156 status=ok
// SIG undefined FUN_14db15d38(void)

void FUN_14db15d38(void)

{
  thunk_FUN_16619bf94();
  return;
}



// FUNCTION 14db15dd5 FUN_14db15dd5 body=148 status=ok
// SIG undefined FUN_14db15dd5(void)

void FUN_14db15dd5(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_1661c3e6d(0xffffffffffffffd0,*(ulonglong *)(unaff_R12 + -0x28) | in_RAX,
                      *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                      *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db15f10 FUN_14db15f10 body=36 status=ok
// SIG undefined FUN_14db15f10(void)

void FUN_14db15f10(void)

{
  return;
}



// FUNCTION 14db16165 FUN_14db16165 body=165 status=ok
// SIG undefined FUN_14db16165(void)

/* WARNING: Removing unreachable block (ram,0x00014db16206) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db16165(void)

{
  ulonglong unaff_RBP;
  undefined8 uStackX_20;
  
  if (-1 < (longlong)(uStackX_20 ^ unaff_RBP)) {
    FUN_1575f6599();
    return;
  }
  FUN_1575f6599();
  return;
}



// FUNCTION 14db1620c FUN_14db1620c body=157 status=ok
// SIG undefined FUN_14db1620c(void)

void FUN_14db1620c(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RSI + 0x4e3c7f68);
  uVar2 = (uVar1 | ~unaff_R15) + ~uVar1 + 1;
  FUN_162bf1325(param_1,(~unaff_R15 | uVar1) & (~(uVar2 & unaff_R15) + unaff_R15) - ~uVar2 ^
                        0xffffffffffffffff);
  return;
}



// FUNCTION 14db162a9 FUN_14db162a9 body=151 status=ok
// SIG undefined FUN_14db162a9(void)

void FUN_14db162a9(longlong param_1)

{
  ulonglong unaff_RBX;
  ulonglong in_R10;
  
  FUN_1622003ae(param_1,~*(ulonglong *)(param_1 + -0x90),
                (-~*(ulonglong *)(param_1 + -0x90) - (~(in_R10 ^ 0x3ee37ae) + 2)) +
                ((in_R10 ^ 0x3ee37ae) & *(ulonglong *)(param_1 + -0x90)) * -2 | unaff_RBX);
  FUN_14db16342();
  return;
}



// FUNCTION 14db16342 FUN_14db16342 body=414 status=ok
// SIG undefined FUN_14db16342(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db1658a) */
/* WARNING: Removing unreachable block (ram,0x00014db16595) */
/* WARNING: Removing unreachable block (ram,0x00014db165e3) */
/* WARNING: Removing unreachable block (ram,0x00014db165e7) */
/* WARNING: Removing unreachable block (ram,0x00014db16590) */
/* WARNING: Removing unreachable block (ram,0x00014db163e1) */

void FUN_14db16342(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 in_RAX;
  ulonglong in_R10;
  undefined8 unaff_R12;
  longlong unaff_R14;
  longlong lVar6;
  byte in_AF;
  bool bVar7;
  byte in_TF;
  bool bVar8;
  byte in_IF;
  bool bVar9;
  bool bVar10;
  byte in_NT;
  bool bVar11;
  byte in_AC;
  bool bVar12;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  
  lVar6 = unaff_R14 - ~(~(in_R10 & 0xffffffffce8874ce) & (in_R10 | 0xffffffffce8874ce));
  *(int *)((longlong)&uStackX_10 + lVar6) = *(int *)((longlong)&uStackX_10 + lVar6) + 0x3f8f953a;
  puVar1 = (undefined8 *)((longlong)&uStackX_8 + lVar6);
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)&uStackX_8 + lVar6 + 4) = 0;
  uVar3 = *puVar1;
  *(undefined8 *)((longlong)&uStackX_8 + lVar6) = in_RAX;
  *(int *)((longlong)&uStackX_10 + lVar6 + 4) = (int)uVar3;
  uVar15 = *(ulonglong *)((longlong)&uStackX_10 + lVar6);
  uVar4 = uVar15 + 0x71319214;
  *(undefined8 *)((longlong)&uStackX_10 + lVar6) = unaff_R12;
  *(ulonglong *)((longlong)&uStackX_8 + lVar6) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar15,-0x71319214) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar15 < 0xffffffff8ece6dec) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar14 = *(ulonglong *)((longlong)&uStackX_8 + lVar6);
  *(undefined8 *)((longlong)&uStackX_8 + lVar6) = unaff_retaddr;
  *(ulonglong *)(&stack0x00000000 + lVar6) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  uVar14 = *(ulonglong *)(&stack0x00000000 + lVar6);
  uVar3 = *(undefined8 *)((longlong)&uStackX_8 + lVar6);
  *(ulonglong *)((longlong)&uStackX_8 + lVar6) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)((uVar14 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar14 & 0x40) != 0) * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  uVar14 = *(ulonglong *)((longlong)&uStackX_8 + lVar6);
  bVar11 = (uVar14 & 0x4000) != 0;
  bVar10 = (uVar14 & 0x400) != 0;
  bVar9 = (uVar14 & 0x200) != 0;
  bVar8 = (uVar14 & 0x100) != 0;
  bVar7 = (uVar14 & 0x10) != 0;
  bVar13 = (uVar14 & 0x200000) != 0;
  bVar12 = (uVar14 & 0x40000) != 0;
  *(ulonglong *)((longlong)&uStackX_8 + lVar6) = uVar4;
  *(ulonglong *)(&stack0x00000000 + lVar6) = uVar15;
  lVar5 = *(longlong *)((longlong)&uStackX_10 + lVar6);
  *(ulonglong *)((longlong)&uStackX_10 + lVar6) =
       (ulonglong)bVar11 * 0x4000 | (ulonglong)((uVar14 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar10 * 0x400 | (ulonglong)bVar9 * 0x200 | (ulonglong)bVar8 * 0x100 |
       (ulonglong)((uVar14 & 0x80) != 0) * 0x80 | (ulonglong)((uVar14 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar7 * 0x10 | (ulonglong)((uVar14 & 4) != 0) * 4 | (ulonglong)((uVar14 & 1) != 0)
       | (ulonglong)bVar13 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(int *)((longlong)&uStackX_10 + lVar6) = *(int *)((longlong)&uStackX_10 + lVar6) << 0x19;
  *(uint *)((longlong)&uStackX_10 + lVar6) = *(uint *)((longlong)&uStackX_10 + lVar6) >> 0x1f;
  if (*(int *)((longlong)&uStackX_10 + lVar6) == 0) {
    *(undefined1 *)(param_1 + 2 + param_2) = param_3;
    *(undefined8 *)((longlong)&uStackX_10 + lVar6) = uVar3;
    cVar2 = *(char *)(lVar5 + 3 + param_2);
    *(ulonglong *)((longlong)&uStackX_8 + lVar6) =
         (ulonglong)bVar11 * 0x4000 | (ulonglong)bVar10 * 0x400 | (ulonglong)bVar9 * 0x200 |
         (ulonglong)bVar8 * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
         (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)bVar7 * 0x10 |
         (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar13 * 0x200000 |
         (ulonglong)bVar12 * 0x40000;
    uVar15 = *(ulonglong *)((longlong)&uStackX_8 + lVar6);
    *(ulonglong *)((longlong)&uStackX_8 + lVar6) =
         (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
         (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
    FUN_162409cf1();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


