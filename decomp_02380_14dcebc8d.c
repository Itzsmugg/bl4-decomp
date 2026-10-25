// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dcebc8d FUN_14dcebc8d body=145 status=ok
// SIG undefined FUN_14dcebc8d(void)

undefined8 FUN_14dcebc8d(void)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  *(longlong *)(unaff_RDI + 0x10) = unaff_R12 + *(longlong *)(unaff_RDI + 0x10);
  return unaff_retaddr;
}



// FUNCTION 14dcebd1f FUN_14dcebd1f body=143 status=ok
// SIG undefined FUN_14dcebd1f(void)

void FUN_14dcebd1f(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong in_R11;
  
  uVar1 = ~in_R10 | *(ulonglong *)(in_R11 + -0x70);
  uVar2 = ~*(ulonglong *)(in_R11 + -0x70) | in_R10;
  (*(code *)0x15b0c56bd)(uVar1,uVar2 - (uVar1 | uVar2));
  return;
}



// FUNCTION 14dcebdaf FUN_14dcebdaf body=903 status=ok
// SIG undefined FUN_14dcebdaf(void)

/* WARNING: Removing unreachable block (ram,0x00014dcebf75) */
/* WARNING: Removing unreachable block (ram,0x00014dcebf7b) */
/* WARNING: Removing unreachable block (ram,0x0001659f3e16) */
/* WARNING: Removing unreachable block (ram,0x0001659f3e1c) */
/* WARNING: Removing unreachable block (ram,0x0001659f3e90) */
/* WARNING: Removing unreachable block (ram,0x0001659f3e96) */
/* WARNING: Removing unreachable block (ram,0x000161d17e0a) */
/* WARNING: Removing unreachable block (ram,0x00014dcebe5f) */
/* WARNING: Removing unreachable block (ram,0x00014dcebeec) */
/* WARNING: Removing unreachable block (ram,0x00014dcebef2) */
/* WARNING: Removing unreachable block (ram,0x00015672f6a5) */
/* WARNING: Removing unreachable block (ram,0x00015672f717) */
/* WARNING: Removing unreachable block (ram,0x00015672f71d) */
/* WARNING: Removing unreachable block (ram,0x000160f4863a) */
/* WARNING: Removing unreachable block (ram,0x00014dcebe48) */
/* WARNING: Removing unreachable block (ram,0x00014dcebe4e) */
/* WARNING: Removing unreachable block (ram,0x00014dcebef7) */

undefined8 FUN_14dcebdaf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcec00e FUN_14dcec00e body=141 status=ok
// SIG undefined FUN_14dcec00e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcec249) */
/* WARNING: Removing unreachable block (ram,0x00014dcec24f) */
/* WARNING: Removing unreachable block (ram,0x00014dcec1c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcec1cb) */
/* WARNING: Removing unreachable block (ram,0x00016183c063) */
/* WARNING: Removing unreachable block (ram,0x00014dcec2ec) */
/* WARNING: Removing unreachable block (ram,0x00014dcec2f2) */
/* WARNING: Removing unreachable block (ram,0x00014dcec36b) */
/* WARNING: Removing unreachable block (ram,0x00014dcec371) */
/* WARNING: Removing unreachable block (ram,0x000162df042e) */
/* WARNING: Removing unreachable block (ram,0x00014dee302d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcec00e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RBX;
  ulonglong in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_retaddr;
  
  uVar1 = *unaff_RBX;
  uVar2 = *unaff_RBX;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX - 1;
  *unaff_RBX = *unaff_RBX | unaff_retaddr;
  *unaff_RBX = ~((~(in_R10 & uVar1) + uVar2) - ~in_R10 & *unaff_RBX);
  FUN_156f38930();
  FUN_1651146eb();
  return unaff_R13;
}



// FUNCTION 14dcec09c FUN_14dcec09c body=985 status=ok
// SIG undefined FUN_14dcec09c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcec249) */
/* WARNING: Removing unreachable block (ram,0x00014dcec24f) */
/* WARNING: Removing unreachable block (ram,0x00014dcec1c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcec1cb) */
/* WARNING: Removing unreachable block (ram,0x00016183c063) */
/* WARNING: Removing unreachable block (ram,0x00014dcec2ec) */
/* WARNING: Removing unreachable block (ram,0x00014dcec2f2) */
/* WARNING: Removing unreachable block (ram,0x00014dcec36b) */
/* WARNING: Removing unreachable block (ram,0x00014dcec371) */
/* WARNING: Removing unreachable block (ram,0x000162df042e) */
/* WARNING: Removing unreachable block (ram,0x00014dee302d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcec09c(void)

{
  undefined8 in_stack_00000008;
  
  FUN_1651146eb();
  return in_stack_00000008;
}



// FUNCTION 14dcec51f FUN_14dcec51f body=452 status=ok
// SIG undefined FUN_14dcec51f(void)

longlong FUN_14dcec51f(ulonglong param_1,int param_2)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = FUN_15739c329();
  if (-1 < param_2) {
    FUN_160d0b5d5();
    return -1 - ((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -0x80)) &
                (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x80) | param_1));
  }
  return lVar1;
}



// FUNCTION 14dcec6e6 FUN_14dcec6e6 body=171 status=ok
// SIG undefined FUN_14dcec6e6(void)

void FUN_14dcec6e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  
  FUN_161128e16(0x161fe139,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -8));
  return;
}



// FUNCTION 14dceca26 FUN_14dceca26 body=83 status=ok
// SIG undefined FUN_14dceca26(void)

int FUN_14dceca26(void)

{
  uint in_EAX;
  uint unaff_EBP;
  
  return (~unaff_EBP | in_EAX) + unaff_EBP + 1;
}



// FUNCTION 14dcecf2d FUN_14dcecf2d body=15 status=ok
// SIG undefined FUN_14dcecf2d(void)

void FUN_14dcecf2d(void)

{
  return;
}



// FUNCTION 14dcecfab FUN_14dcecfab body=161 status=ok
// SIG undefined FUN_14dcecfab(void)

void FUN_14dcecfab(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x10);
  uVar2 = *(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBX + 0x10) =
       -1 - ~(~((unaff_R14 + lVar1) - (unaff_R14 & uVar2)) | ~*(ulonglong *)(unaff_RBX + 0x10));
  FUN_15b7851b0(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dced0de FUN_14dced0de body=483 status=ok
// SIG undefined FUN_14dced0de(void)

/* WARNING: Removing unreachable block (ram,0x00014dced214) */
/* WARNING: Removing unreachable block (ram,0x00014dced173) */
/* WARNING: Removing unreachable block (ram,0x00014dced209) */
/* WARNING: Removing unreachable block (ram,0x000165b1a333) */

undefined8 FUN_14dced0de(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong in_R9;
  
  *(undefined8 *)(unaff_RBP + -0x30) = 0;
  *(longlong *)(unaff_RBP + -0x30) = *(longlong *)(unaff_RBP + -0x30) + in_R9 + -1;
  return in_RAX;
}



// FUNCTION 14dced3db FUN_14dced3db body=312 status=FAIL
// SIG undefined FUN_14dced3db(void)
/* DECOMPILE FAILED */

// FUNCTION 14dced516 FUN_14dced516 body=157 status=ok
// SIG undefined FUN_14dced516(void)

/* WARNING: Removing unreachable block (ram,0x00014dced56e) */

void FUN_14dced516(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
           (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  (*(code *)0x1652a59db)
            (*(ulonglong *)(unaff_R12 + -0x80) + in_RAX,
             CONCAT62((int6)(uVar1 >> 0x10),(ushort)uVar1 >> 0xe | (ushort)uVar1 << 3),
             *(ulonglong *)(unaff_R12 + -0x80) & in_RAX,uVar1);
  return;
}



// FUNCTION 14dced659 FUN_14dced659 body=61 status=ok
// SIG undefined FUN_14dced659(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dced659(uint param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 unaff_RBP;
  undefined2 *unaff_R12;
  undefined2 unaff_R15W;
  longlong unaff_retaddr;
  longlong local_res18;
  
  *unaff_R12 = unaff_R15W;
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined **)(local_res18 + -8) = &DAT_14dced6b4;
  lVar3 = *(longlong *)(local_res18 + -0x10);
  *in_RAX = *in_RAX >> ((byte)param_1 & 0x1f);
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  cRam00000001147d3ece = cRam00000001147d3ece + cVar4;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x36);
  *pcVar1 = *pcVar1 + unaff_BL;
  piVar2 = (int *)(unaff_retaddr + lVar3);
  *piVar2 = *piVar2 >> ((byte)param_1 & 0x1f);
  *param_2 = *param_2 + cVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_3;
  *(uint *)(param_2 + param_3 * 4) = *(uint *)(param_2 + param_3 * 4) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dced6f1 FUN_14dced6f1 body=7 status=ok
// SIG undefined FUN_14dced6f1(void)

void FUN_14dced6f1(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dced8c6 FUN_14dced8c6 body=153 status=ok
// SIG undefined FUN_14dced8c6(void)

void FUN_14dced8c6(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  FUN_15b4a1566(~(~uVar1 | in_RAX) | ~in_RAX | uVar1,uVar1,~uVar1 | in_RAX,
                ~((~(~param_2 & param_1 | param_4) | ~(0xffffffffffffffff - param_4) & ~in_RAX) ^
                 0xffffffffffffffff));
  return;
}



// FUNCTION 14dced962 FUN_14dced962 body=194 status=ok
// SIG undefined FUN_14dced962(void)

void FUN_14dced962(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1613a9234)
            ((*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) << 1,
             *(ulonglong *)(unaff_R13 + -0x78) + unaff_R15);
  return;
}



// FUNCTION 14dcedd1a FUN_14dcedd1a body=58 status=ok
// SIG undefined FUN_14dcedd1a(void)

void FUN_14dcedd1a(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcededc FUN_14dcededc body=553 status=ok
// SIG undefined FUN_14dcededc(void)

void FUN_14dcededc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 unaff_RDI;
  short *in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res18;
  
  *in_R11 = -*in_R11;
  *in_R11 = *in_R11 + -1;
  *(longlong *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  uVar2 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(code **)(local_res18 + -0x20) = FUN_1578a0f48;
  pcVar5 = FUN_1578a0f04;
  *(undefined8 *)(local_res18 + -0x28) = 0x14dcedf6a;
  FUN_1578a0f04(param_1,FUN_1578a0f04,0xffffffffa6b11258,uVar1);
  pcVar3 = *(code **)(local_res18 + -0x20);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  lVar4 = *(longlong *)(local_res18 + -8);
  *(undefined8 *)(lVar4 + -8) = unaff_R12;
  *(code **)(lVar4 + -0x10) = pcVar5;
  *(code **)(lVar4 + -0x18) = pcVar5;
  *(undefined8 *)(lVar4 + -0x20) = uVar2;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -8) = 0;
  *(longlong *)(lVar4 + -8) = *(longlong *)(lVar4 + -8) + -0x14dcedfef;
  *(longlong *)(lVar4 + -8) = -*(longlong *)(lVar4 + -8);
  (*pcVar3)(param_1,*(undefined8 *)(lVar4 + -0x18),uVar1);
  return;
}



// FUNCTION 14dcee153 FUN_14dcee153 body=111 status=ok
// SIG undefined FUN_14dcee153(void)

undefined8 FUN_14dcee153(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcee257 FUN_14dcee257 body=15 status=ok
// SIG undefined FUN_14dcee257(void)

void FUN_14dcee257(void)

{
  return;
}



// FUNCTION 14dcee434 FUN_14dcee434 body=174 status=ok
// SIG undefined FUN_14dcee434(void)

void FUN_14dcee434(void)

{
  FUN_1666f152b();
  return;
}



// FUNCTION 14dcee733 FUN_14dcee733 body=136 status=ok
// SIG undefined FUN_14dcee733(void)

/* WARNING: Removing unreachable block (ram,0x00014dcee7a2) */
/* WARNING: Removing unreachable block (ram,0x000165e7f47f) */
/* WARNING: Removing unreachable block (ram,0x000165e7f485) */
/* WARNING: Removing unreachable block (ram,0x00014dcee7b0) */
/* WARNING: Removing unreachable block (ram,0x00014dcee7b6) */
/* WARNING: Removing unreachable block (ram,0x00014dcee7bb) */

undefined8 FUN_14dcee733(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 unaff_R12D;
  
  uVar1 = FUN_14d968378(param_1,0xf6bb4b60,unaff_R12D,ProcessEnvironmentBlock);
  return uVar1;
}



// FUNCTION 14dcee7bb FUN_14dcee7bb body=144 status=ok
// SIG undefined FUN_14dcee7bb(void)

void FUN_14dcee7bb(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_R10;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | unaff_R15;
  uVar2 = *(ulonglong *)(in_R10 + 0x10);
  *(undefined8 *)(in_R10 + 0x10) = 0;
  *(longlong *)(in_R10 + 0x10) = *(longlong *)(in_R10 + 0x10) + ~((~unaff_retaddr | uVar1) & uVar2);
  FUN_16287ab13(FUN_16287ab13,0xf);
  return;
}



// FUNCTION 14dcee853 FUN_14dcee853 body=275 status=ok
// SIG undefined FUN_14dcee853(void)

/* WARNING: Removing unreachable block (ram,0x00014dcee96e) */
/* WARNING: Removing unreachable block (ram,0x0001571cfe2c) */

void FUN_14dcee853(undefined8 param_1)

{
  FUN_1621c8fec(param_1);
  FUN_1571cfe2c();
  return;
}



// FUNCTION 14dcee96e FUN_14dcee96e body=316 status=ok
// SIG undefined FUN_14dcee96e(void)

void FUN_14dcee96e(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  
  FUN_16652caeb();
  FUN_15b25e9b5(in_RAX,param_2,FUN_15b25e9b5);
  return;
}



// FUNCTION 14dceec2c FUN_14dceec2c body=12 status=ok
// SIG undefined FUN_14dceec2c(void)

void FUN_14dceec2c(void)

{
  FUN_16133aa9b();
  return;
}



// FUNCTION 14dceed5a FUN_14dceed5a body=331 status=ok
// SIG undefined FUN_14dceed5a(void)

/* WARNING: Removing unreachable block (ram,0x000162b7a69a) */
/* WARNING: Removing unreachable block (ram,0x000162b7a71c) */
/* WARNING: Removing unreachable block (ram,0x00014dceedef) */
/* WARNING: Removing unreachable block (ram,0x00014dceedf5) */
/* WARNING: Removing unreachable block (ram,0x000162b7a721) */
/* WARNING: Removing unreachable block (ram,0x000162b7a727) */
/* WARNING: Removing unreachable block (ram,0x000162b7a72c) */

void FUN_14dceed5a(void)

{
  FUN_162b7a69a();
  return;
}



// FUNCTION 14dceeea9 FUN_14dceeea9 body=296 status=ok
// SIG undefined FUN_14dceeea9(void)

void FUN_14dceeea9(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  undefined8 in_R9;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong local_res10;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar4 = uVar3 ^ unaff_RBP;
  uVar2 = FUN_16185ad88();
  *(ulonglong *)(local_res10 + -8) = uVar3;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x593a4acd;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x593a4acd;
  *(undefined **)(local_res10 + -8) = &DAT_15ba21071 + *(longlong *)(local_res10 + -8);
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(ulonglong *)(local_res10 + -0x20) =
       -1 - (~(unaff_RBP + uVar4 + (unaff_RBP & uVar4) * -2) & (unaff_R15 ^ 0xffffffffffffffff));
  *(undefined8 *)(local_res10 + -0x28) = uVar2;
  *(undefined4 *)(local_res10 + -0x28) = 0xec4fda14;
  *(undefined4 *)(local_res10 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res10 + -0x28) = in_R9;
  FUN_15ba21026();
  return;
}



// FUNCTION 14dcef084 FUN_14dcef084 body=165 status=ok
// SIG undefined FUN_14dcef084(void)

void FUN_14dcef084(undefined8 param_1)

{
  undefined8 unaff_RSI;
  ulonglong local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)((longlong)&local_res18 + (local_res8 ^ 0x416fa342)) = unaff_RSI;
  FUN_15b2a8099(param_1);
  return;
}



// FUNCTION 14dcef129 FUN_14dcef129 body=138 status=ok
// SIG undefined FUN_14dcef129(void)

void FUN_14dcef129(void)

{
  undefined8 in_RAX;
  ulonglong unaff_R12;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_R12 ^ 0x74c30e6a)) = in_RAX;
  FUN_1655b8d80();
  FUN_14dcef1b4();
  return;
}



// FUNCTION 14dcef1b4 FUN_14dcef1b4 body=296 status=ok
// SIG undefined FUN_14dcef1b4(void)

void FUN_14dcef1b4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | 0xffffffffa5de941d;
  *(ulonglong *)(unaff_RBP + 0x10) =
       ~(~(uVar1 & 0xffffffffa5de941d) & *(ulonglong *)(unaff_RBP + 0x10));
  *(longlong *)(unaff_RBP + 0x10) = *(longlong *)(unaff_RBP + 0x10) - param_3;
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = 0x14dcef253;
  FUN_165282d12(param_1,param_2,local_res10);
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(unaff_RDI + -0x28);
  FUN_161596627();
  return;
}



// FUNCTION 14dcef37f FUN_14dcef37f body=176 status=ok
// SIG undefined FUN_14dcef37f(void)

void FUN_14dcef37f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1653fc3f9(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcef42f FUN_14dcef42f body=14 status=ok
// SIG undefined FUN_14dcef42f(void)

void FUN_14dcef42f(void)

{
  return;
}



// FUNCTION 14dcef844 FUN_14dcef844 body=199 status=ok
// SIG undefined FUN_14dcef844(void)

/* WARNING: Removing unreachable block (ram,0x0001668fa994) */
/* WARNING: Removing unreachable block (ram,0x0001668fa99a) */
/* WARNING: Removing unreachable block (ram,0x0001668fa99f) */
/* WARNING: Removing unreachable block (ram,0x0001668faa26) */
/* WARNING: Removing unreachable block (ram,0x0001668faa2c) */
/* WARNING: Removing unreachable block (ram,0x000161c6d126) */
/* WARNING: Removing unreachable block (ram,0x000161c6d191) */
/* WARNING: Removing unreachable block (ram,0x000161c6d197) */
/* WARNING: Removing unreachable block (ram,0x000162c95ede) */
/* WARNING: Removing unreachable block (ram,0x00014dcef8d4) */
/* WARNING: Removing unreachable block (ram,0x000166b72c87) */

undefined8 FUN_14dcef844(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  uint unaff_ESI;
  longlong unaff_R12;
  
  if ((in_RAX - (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX)) + *(ulonglong *)(unaff_R12 + -0x30) !=
      0) {
    FUN_160e4001c(unaff_ESI >> 0x1b);
    uVar1 = FUN_156880f60();
    return uVar1;
  }
  uVar1 = FUN_1668fa912();
  return uVar1;
}



// FUNCTION 14dcef9ed FUN_14dcef9ed body=343 status=ok
// SIG undefined FUN_14dcef9ed(void)

/* WARNING: Removing unreachable block (ram,0x00014dcefa95) */

void FUN_14dcef9ed(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  undefined8 local_res8;
  
  if (*(longlong *)(unaff_R13 + -8) != 0) {
    FUN_1660d8822();
    return;
  }
  (*(code *)&LAB_165b59944)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dcefc69 FUN_14dcefc69 body=118 status=ok
// SIG undefined FUN_14dcefc69(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcefc69(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcefdc9 FUN_14dcefdc9 body=143 status=ok
// SIG undefined FUN_14dcefdc9(void)

void FUN_14dcefdc9(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16474eb81(param_3 * 2,FUN_16474eb81,param_3,
                ~(*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14dcefeed FUN_14dcefeed body=123 status=ok
// SIG undefined FUN_14dcefeed(void)

void FUN_14dcefeed(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  
  FUN_16684562f(param_1,param_2,unaff_retaddr,param_4,~in_stack_00000010 | unaff_R15);
  return;
}



// FUNCTION 14dceff69 FUN_14dceff69 body=39 status=ok
// SIG undefined FUN_14dceff69(void)

longlong FUN_14dceff69(longlong param_1)

{
  undefined8 local_res18;
  
  return local_res18 + param_1;
}



// FUNCTION 14dcf0001 FUN_14dcf0001 body=9 status=ok
// SIG undefined FUN_14dcf0001(void)

void FUN_14dcf0001(void)

{
  return;
}



// FUNCTION 14dcf0086 FUN_14dcf0086 body=185 status=ok
// SIG undefined FUN_14dcf0086(void)

void FUN_14dcf0086(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16633fb7a(param_1,param_2,param_3);
  FUN_14d7c198a();
  return;
}



// FUNCTION 14dcf0362 FUN_14dcf0362 body=180 status=ok
// SIG undefined FUN_14dcf0362(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf03ad) */

void FUN_14dcf0362(void)

{
  return;
}



// FUNCTION 14dcf04bc FUN_14dcf04bc body=183 status=ok
// SIG undefined FUN_14dcf04bc(void)

void FUN_14dcf04bc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  *(longlong *)(param_3 + 8) = (unaff_R15 - unaff_R13) + *(longlong *)(param_3 + 8);
  return;
}



// FUNCTION 14dcf0574 FUN_14dcf0574 body=138 status=ok
// SIG undefined FUN_14dcf0574(void)

void FUN_14dcf0574(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1612f2f54)
            (0xffffffffffffffd0,0x2a64ae2b,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
             (~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
             (~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dcf0601 FUN_14dcf0601 body=17 status=ok
// SIG undefined FUN_14dcf0601(void)

void FUN_14dcf0601(void)

{
  return;
}



// FUNCTION 14dcf0690 FUN_14dcf0690 body=278 status=ok
// SIG undefined FUN_14dcf0690(void)

void FUN_14dcf0690(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong local_res8;
  
  uVar1 = FUN_165b32abc(*(ulonglong *)(unaff_R12 + -0x58) + local_res8 +
                        (*(ulonglong *)(unaff_R12 + -0x58) & local_res8) * -2,
                        *(undefined8 *)(unaff_R12 + -0x78));
  FUN_162654b5c(FUN_162654b5c,~(~*(ulonglong *)(unaff_R12 + -0x80) & ~uVar1),
                -1 - (*(ulonglong *)(unaff_R12 + -0x80) & uVar1),
                *(ulonglong *)(unaff_R12 + -0x30) + uVar1 +
                (*(ulonglong *)(unaff_R12 + -0x30) & uVar1) * -2);
  return;
}



// FUNCTION 14dcf07a9 FUN_14dcf07a9 body=997 status=ok
// SIG undefined FUN_14dcf07a9(void)

/* WARNING: Removing unreachable block (ram,0x0001652fa35f) */
/* WARNING: Removing unreachable block (ram,0x00014dcf084c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf08c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dcf07a9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dab00ac(0xffffffffffffffff -
                ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 + 1) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dcf0a33 FUN_14dcf0a33 body=249 status=ok
// SIG undefined FUN_14dcf0a33(void)

undefined8 FUN_14dcf0a33(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165102d51();
  return uVar1;
}



// FUNCTION 14dcf0bbc FUN_14dcf0bbc body=160 status=ok
// SIG undefined FUN_14dcf0bbc(void)

longlong FUN_14dcf0bbc(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  return (unaff_R15 - uVar1) + (~uVar1 - ~(uVar1 & unaff_R15)) * -2;
}



// FUNCTION 14dcf0ecd FUN_14dcf0ecd body=150 status=ok
// SIG undefined FUN_14dcf0ecd(void)

void FUN_14dcf0ecd(void)

{
  FUN_15736fe39();
  return;
}



// FUNCTION 14dcf0f63 FUN_14dcf0f63 body=367 status=ok
// SIG undefined FUN_14dcf0f63(void)

void FUN_14dcf0f63(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1652ea647)(0x1652ea647,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcf111d FUN_14dcf111d body=155 status=ok
// SIG undefined FUN_14dcf111d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf119a) */
/* WARNING: Removing unreachable block (ram,0x00014dcf11ab) */
/* WARNING: Removing unreachable block (ram,0x00014dcf11a6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf111d(void)

{
  FUN_1619c00f2();
  return;
}



// FUNCTION 14dcf12de FUN_14dcf12de body=139 status=ok
// SIG undefined FUN_14dcf12de(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf1358) */

void FUN_14dcf12de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint unaff_EBP;
  uint uVar1;
  longlong unaff_R14;
  uint local_res8 [8];
  
  uVar1 = (~(*(uint *)((longlong)local_res8 + unaff_R14) & unaff_EBP) + unaff_EBP) -
          ~*(uint *)((longlong)local_res8 + unaff_R14);
  *(uint *)((longlong)local_res8 + unaff_R14) =
       *(uint *)((longlong)local_res8 + unaff_R14) & unaff_EBP;
  *(uint *)((longlong)local_res8 + unaff_R14) = ~*(uint *)((longlong)local_res8 + unaff_R14);
  *(uint *)((longlong)local_res8 + unaff_R14) =
       (~uVar1 | *(uint *)((longlong)local_res8 + unaff_R14)) + uVar1 + 1;
  FUN_15762c62b(param_1,8,param_3,param_4);
  return;
}



// FUNCTION 14dcf1485 FUN_14dcf1485 body=134 status=ok
// SIG undefined FUN_14dcf1485(void)

/* WARNING: Removing unreachable block (ram,0x000165120913) */

ulonglong FUN_14dcf1485(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong lVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  if ((param_3 >= 0) && (param_3 < 0)) {
    lVar1 = uStackX_20 + unaff_retaddr + (uStackX_20 & unaff_retaddr) * -2;
    *(longlong *)(lVar1 + -8) = param_3;
    *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
    *(undefined8 *)(lVar1 + -0x18) = local_res8;
    *(undefined4 *)(lVar1 + -0x20) = 0x7b298752;
    *(undefined4 *)(lVar1 + -0x1c) = 0;
    *(undefined8 *)(lVar1 + -0x10 + (*(ulonglong *)(lVar1 + -0x20) ^ 0x7b29875a)) = 0;
    *(undefined **)(lVar1 + -0x20) = &DAT_1628e2011;
    return unaff_RBP ^ unaff_retaddr;
  }
  lVar1 = (-~unaff_retaddr - ((param_5 ^ 0xffffffffffffffff) + 2)) + param_5 * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2;
  *(undefined8 *)(lVar1 + -0x20) = param_2;
  *(undefined1 **)(lVar1 + -0x10) = &LAB_16512095c;
  *(undefined **)(lVar1 + -0x18) = &DAT_165905fa5;
  return uStackX_18;
}



// FUNCTION 14dcf150c FUN_14dcf150c body=166 status=ok
// SIG undefined FUN_14dcf150c(void)

ulonglong FUN_14dcf150c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong local_res10;
  ulonglong local_res20;
  
  lVar1 = local_res20 + in_RAX + (local_res20 & in_RAX) * -2;
  *(undefined8 *)(lVar1 + -8) = param_3;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = param_1;
  *(undefined4 *)(lVar1 + -0x20) = 0x7b298752;
  *(undefined4 *)(lVar1 + -0x1c) = 0;
  *(undefined8 *)(lVar1 + -0x10 + (*(ulonglong *)(lVar1 + -0x20) ^ 0x7b29875a)) = 0;
  *(undefined **)(lVar1 + -0x20) = &DAT_1628e2011;
  return local_res10 ^ in_RAX;
}



// FUNCTION 14dcf1647 FUN_14dcf1647 body=45 status=ok
// SIG undefined FUN_14dcf1647(void)

void FUN_14dcf1647(void)

{
  undefined8 uStackX_8;
  
  FUN_165c7153c(uStackX_8);
  return;
}



// FUNCTION 14dcf16ee FUN_14dcf16ee body=30 status=ok
// SIG undefined FUN_14dcf16ee(void)

/* WARNING: Removing unreachable block (ram,0x00014e0914dc) */
/* WARNING: Removing unreachable block (ram,0x00014e0914e2) */
/* WARNING: Removing unreachable block (ram,0x00014e0914e7) */

longlong FUN_14dcf16ee(longlong param_1)

{
  ulonglong *puVar1;
  longlong in_RAX;
  longlong lVar2;
  undefined8 *unaff_retaddr;
  
  if (param_1 == 0) {
    puVar1 = (ulonglong *)(in_RAX + 0x10);
    *puVar1 = 0x1252bee2;
    *puVar1 = *puVar1 ^ 0x1252bee2;
    *(undefined8 *)(in_RAX + 8) = 0;
    return in_RAX;
  }
  lVar2 = FUN_165226a9c(param_1,*unaff_retaddr,0,0);
  return lVar2;
}



// FUNCTION 14dcf170d FUN_14dcf170d body=70 status=ok
// SIG undefined FUN_14dcf170d(void)

void FUN_14dcf170d(void)

{
  return;
}



// FUNCTION 14dcf1753 FUN_14dcf1753 body=226 status=ok
// SIG undefined FUN_14dcf1753(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf17ce) */
/* WARNING: Removing unreachable block (ram,0x00014dcf17d5) */
/* WARNING: Removing unreachable block (ram,0x00014dcf17da) */
/* WARNING: Removing unreachable block (ram,0x00014dcf182c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1832) */
/* WARNING: Removing unreachable block (ram,0x000164ad08e0) */
/* WARNING: Removing unreachable block (ram,0x000164ad08e8) */
/* WARNING: Removing unreachable block (ram,0x000164ad08f3) */

byte FUN_14dcf1753(byte param_1,ushort *param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  byte local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  *param_2 = (*param_2 | 0x100) - 0x100;
  LOCK();
  bVar4 = local_res10 < DAT_14d7c1b1d;
  bVar5 = SBORROW1(local_res10,DAT_14d7c1b1d);
  cVar2 = local_res10 - DAT_14d7c1b1d;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7c1b1d;
    local_res10 = DAT_14d7c1b1d;
  }
  DAT_14d7c1b1d = bVar3;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -8) = 0x127b5ce;
  uVar1 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = uVar1;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_166a7264c;
  return local_res10;
}



// FUNCTION 14dcf1838 FUN_14dcf1838 body=45 status=ok
// SIG undefined FUN_14dcf1838(void)

void FUN_14dcf1838(void)

{
  return;
}



// FUNCTION 14dcf19ea FUN_14dcf19ea body=162 status=ok
// SIG undefined FUN_14dcf19ea(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf1a78) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1a83) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1a7e) */
/* WARNING: Removing unreachable block (ram,0x00016561fd5d) */

void FUN_14dcf19ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_1629326d1(FUN_1629326d1,param_2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dcf1a92 FUN_14dcf1a92 body=293 status=ok
// SIG undefined FUN_14dcf1a92(void)

void FUN_14dcf1a92(void)

{
  FUN_156f6831d();
  FUN_15b0973ed();
  return;
}



// FUNCTION 14dcf1bb7 FUN_14dcf1bb7 body=180 status=ok
// SIG undefined FUN_14dcf1bb7(void)

void FUN_14dcf1bb7(longlong param_1)

{
  FUN_157353fc1(0x324728b1,*(undefined8 *)(param_1 + 0xa4));
  return;
}



// FUNCTION 14dcf1d20 FUN_14dcf1d20 body=326 status=ok
// SIG undefined FUN_14dcf1d20(void)

/* WARNING: Removing unreachable block (ram,0x0001570aed8b) */

void FUN_14dcf1d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = 1;
  FUN_15b5a4013(param_1,param_2,param_3);
  if ((bVar1 & 1) != 0) {
    FUN_164a2d2a1();
    return;
  }
  FUN_1570aed7d();
  return;
}



// FUNCTION 14dcf1e6a FUN_14dcf1e6a body=143 status=ok
// SIG undefined FUN_14dcf1e6a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf1ef0) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1efb) */
/* WARNING: Removing unreachable block (ram,0x0001616ca075) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1f8d) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1f93) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1f98) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2018) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2023) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2035) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2135) */
/* WARNING: Removing unreachable block (ram,0x00014dcf213b) */
/* WARNING: Removing unreachable block (ram,0x000161111211) */
/* WARNING: Removing unreachable block (ram,0x00015664191e) */
/* WARNING: Removing unreachable block (ram,0x00014dcf1ef6) */

undefined8 FUN_14dcf1e6a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_157830bd2();
  return uVar1;
}



// FUNCTION 14dcf1efb FUN_14dcf1efb body=310 status=ok
// SIG undefined FUN_14dcf1efb(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf1f98) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2018) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2023) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2035) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2135) */
/* WARNING: Removing unreachable block (ram,0x00014dcf213b) */
/* WARNING: Removing unreachable block (ram,0x000161111211) */
/* WARNING: Removing unreachable block (ram,0x00015664191e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcf1efb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong in_R10;
  
  if (-1 < in_R10) {
    uVar1 = FUN_1616ca075();
    return uVar1;
  }
  uVar1 = (*(code *)0x14da8ff51)(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dcf2035 FUN_14dcf2035 body=262 status=ok
// SIG undefined FUN_14dcf2035(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf213b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcf2035(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong in_R10;
  ushort uVar3;
  undefined8 in_R11;
  undefined8 local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar2 = *(undefined8 *)(param_2 + -0x40);
  DAT_14d7bdb55 = FUN_162a583e7();
  *unaff_RDI = ~((~*unaff_RDI |
                 ~(unaff_RBP & in_R10) & (~(unaff_RBP & in_R10) + in_R10) - ~unaff_RBP) + *unaff_RDI
                + 1);
  uVar1 = local_res18 ^ param_1;
  param_1 = local_res20 ^ param_1;
  local_res18._0_2_ = (ushort)uVar1;
  uVar3 = 0xfeff - ~((ushort)local_res18 | 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
  LOCK();
  UNLOCK();
  *(undefined8 *)(param_1 - 8) = uVar2;
  *(undefined8 *)(param_1 - 0x10) = uVar2;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 0x20) = unaff_RSI;
  *(undefined8 *)(param_1 - 0x28) = in_R11;
  uVar2 = FUN_156a2e0c8(local_res10);
  return uVar2;
}



// FUNCTION 14dcf213b FUN_14dcf213b body=165 status=ok
// SIG undefined FUN_14dcf213b(void)

ulonglong FUN_14dcf213b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return 0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) &
         (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15);
}



// FUNCTION 14dcf21e2 FUN_14dcf21e2 body=52 status=ok
// SIG undefined FUN_14dcf21e2(void)

void FUN_14dcf21e2(void)

{
  return;
}



// FUNCTION 14dcf2282 FUN_14dcf2282 body=34 status=ok
// SIG undefined FUN_14dcf2282(void)

void FUN_14dcf2282(void)

{
  return;
}



// FUNCTION 14dcf2391 FUN_14dcf2391 body=135 status=ok
// SIG undefined FUN_14dcf2391(void)

void FUN_14dcf2391(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_164f43ae4(unaff_retaddr);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_160ec178b((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar1 + 1,
                FUN_160ec178b);
  return;
}



// FUNCTION 14dcf2418 FUN_14dcf2418 body=139 status=ok
// SIG undefined FUN_14dcf2418(void)

void FUN_14dcf2418(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_160ec178b((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15)) + uVar1 + 1,
                FUN_160ec178b);
  return;
}



// FUNCTION 14dcf24a5 FUN_14dcf24a5 body=485 status=ok
// SIG undefined FUN_14dcf24a5(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf27c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcf27cb) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf40) */
/* WARNING: Removing unreachable block (ram,0x00014dcf267c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2701) */
/* WARNING: Removing unreachable block (ram,0x00014dcf271e) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2729) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2724) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2719) */
/* WARNING: Removing unreachable block (ram,0x00014dcf25ec) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2670) */
/* WARNING: Removing unreachable block (ram,0x00014dcf266b) */
/* WARNING: Removing unreachable block (ram,0x0001572dcc95) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf24a5(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  FUN_15b765028();
  FUN_162f4cfb2(FUN_162f4cfb2,0xfffffffffffffff8,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ uVar1);
  return;
}



// FUNCTION 14dcf25ec FUN_14dcf25ec body=674 status=ok
// SIG undefined FUN_14dcf25ec(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf27c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcf27cb) */
/* WARNING: Removing unreachable block (ram,0x00014da4cf40) */
/* WARNING: Removing unreachable block (ram,0x00014dcf267c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2701) */
/* WARNING: Removing unreachable block (ram,0x00014dcf271e) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2729) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2724) */
/* WARNING: Removing unreachable block (ram,0x00014dcf2719) */

void FUN_14dcf25ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  LOCK();
  UNLOCK();
  DAT_14d7c32f5 = in_AL;
  *(undefined8 *)((local_res20 ^ unaff_R15) - 8) = unaff_RSI;
  *(undefined8 *)((local_res20 ^ unaff_R15) - 0x10) = unaff_RSI;
  FUN_165eafff7(param_1,param_2);
  return;
}



// FUNCTION 14dcf2890 FUN_14dcf2890 body=143 status=ok
// SIG undefined FUN_14dcf2890(void)

void FUN_14dcf2890(void)

{
  return;
}



// FUNCTION 14dcf2a70 FUN_14dcf2a70 body=271 status=ok
// SIG undefined FUN_14dcf2a70(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf2ade) */
/* WARNING: Removing unreachable block (ram,0x00015b12214f) */
/* WARNING: Removing unreachable block (ram,0x00015b1221fb) */
/* WARNING: Removing unreachable block (ram,0x00015b1221fd) */

void FUN_14dcf2a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int unaff_ESI;
  uint uVar1;
  uint local_res10;
  
  local_res10 = (int)param_1 +
                (-1 - (-1 - (~(0xffffffffU - param_4) & 0xffffffffU - unaff_ESI |
                            0xffffffffU - param_4)));
  uVar1 = ~((uint)param_2 & ~local_res10);
  if (5 - (int)param_1 < 0) {
    FUN_15b818a28(param_1,param_2,uVar1);
    return;
  }
  FUN_15b818a28(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14dcf2dca FUN_14dcf2dca body=145 status=ok
// SIG undefined FUN_14dcf2dca(void)

void FUN_14dcf2dca(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined4 unaff_EBP;
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  int aiStackX_10 [2];
  undefined8 auStackX_18 [2];
  
  lVar2 = -(unaff_RSI ^ 0x236a77ff);
  *(undefined4 *)((longlong)aiStackX_10 + lVar2) = unaff_EBP;
  *(int *)((longlong)aiStackX_10 + lVar2) = *(int *)((longlong)aiStackX_10 + lVar2) + 0x6d9e;
  *(undefined8 *)((longlong)aiStackX_10 + lVar2) = unaff_RBX;
  *(undefined8 *)((longlong)aiStackX_10 + lVar2) = *(undefined8 *)((longlong)auStackX_18 + lVar2);
  *(undefined4 *)((longlong)aiStackX_10 + lVar2 + 4) = 0;
  iVar1 = *(int *)((longlong)aiStackX_10 + lVar2);
  *(int *)((longlong)aiStackX_10 + lVar2) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((longlong)aiStackX_10 + lVar2 + 4) = 0xffffffff;
  }
  FUN_157647874(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14dcf2e5c FUN_14dcf2e5c body=155 status=ok
// SIG undefined FUN_14dcf2e5c(void)

void FUN_14dcf2e5c(void)

{
  FUN_160ca45ae();
  return;
}



// FUNCTION 14dcf30e8 FUN_14dcf30e8 body=157 status=ok
// SIG undefined FUN_14dcf30e8(void)

void FUN_14dcf30e8(void)

{
  longlong unaff_RSI;
  
  FUN_161458d49(~*(ulonglong *)(unaff_RSI + -0x80));
  return;
}



// FUNCTION 14dcf3186 FUN_14dcf3186 body=20 status=ok
// SIG undefined FUN_14dcf3186(void)

void FUN_14dcf3186(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014dcf3198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res8,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dcf3223 FUN_14dcf3223 body=422 status=ok
// SIG undefined FUN_14dcf3223(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dcf32c6) */
/* WARNING: Removing unreachable block (ram,0x00014dcf32c0) */
/* WARNING: Removing unreachable block (ram,0x00014dcf32d1) */
/* WARNING: Removing unreachable block (ram,0x000162913f55) */
/* WARNING: Removing unreachable block (ram,0x000162913f5b) */
/* WARNING: Removing unreachable block (ram,0x000162913eb4) */
/* WARNING: Removing unreachable block (ram,0x00016663efc0) */
/* WARNING: Removing unreachable block (ram,0x000162913ebf) */
/* WARNING: Removing unreachable block (ram,0x00016663ef25) */
/* WARNING: Removing unreachable block (ram,0x00016663ef29) */
/* WARNING: Removing unreachable block (ram,0x00016663efb4) */
/* WARNING: Removing unreachable block (ram,0x00015afc7f3e) */
/* WARNING: Removing unreachable block (ram,0x00014d7acf75) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fc1) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fc7) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fcc) */
/* WARNING: Removing unreachable block (ram,0x00015afc806f) */
/* WARNING: Removing unreachable block (ram,0x00015afc8074) */
/* WARNING: Removing unreachable block (ram,0x0001657864c2) */
/* WARNING: Removing unreachable block (ram,0x00014dec7dab) */
/* WARNING: Removing unreachable block (ram,0x00016578654b) */
/* WARNING: Removing unreachable block (ram,0x00015afc807a) */
/* WARNING: Removing unreachable block (ram,0x0001611139b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf3223(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_156f86162(param_1,local_res8);
  return;
}



// FUNCTION 14dcf340a FUN_14dcf340a body=3 status=ok
// SIG undefined FUN_14dcf340a(void)

void FUN_14dcf340a(void)

{
  return;
}



// FUNCTION 14dcf3588 FUN_14dcf3588 body=25 status=ok
// SIG undefined FUN_14dcf3588(void)

void FUN_14dcf3588(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dcf362d FUN_14dcf362d body=74 status=ok
// SIG undefined FUN_14dcf362d(void)

undefined8 FUN_14dcf362d(void)

{
  undefined8 uStackX_18;
  
  return uStackX_18;
}



// FUNCTION 14dcf3758 FUN_14dcf3758 body=291 status=ok
// SIG undefined FUN_14dcf3758(void)

void FUN_14dcf3758(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_16616cdc2(FUN_16616cdc2,unaff_retaddr);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffff;
  FUN_166ac64e9(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (uVar1 + unaff_R15) - (uVar1 & unaff_R15)),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14dcf3a1f FUN_14dcf3a1f body=14 status=ok
// SIG undefined FUN_14dcf3a1f(void)

void FUN_14dcf3a1f(void)

{
  return;
}



// FUNCTION 14dcf3aa5 FUN_14dcf3aa5 body=120 status=ok
// SIG undefined FUN_14dcf3aa5(void)

void FUN_14dcf3aa5(void)

{
  (*(code *)&LAB_162a2b7d7)();
  return;
}



// FUNCTION 14dcf3b1d FUN_14dcf3b1d body=88 status=ok
// SIG undefined FUN_14dcf3b1d(void)

void FUN_14dcf3b1d(void)

{
  thunk_EXT_FUN_7378f210();
  return;
}



// FUNCTION 14dcf4147 FUN_14dcf4147 body=304 status=ok
// SIG undefined FUN_14dcf4147(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf41d4) */
/* WARNING: Removing unreachable block (ram,0x00014dcf41df) */
/* WARNING: Removing unreachable block (ram,0x00014dcf41e3) */

ulonglong FUN_14dcf4147(void)

{
  undefined4 uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = 0x6539d098;
  FUN_157006412();
  uVar2 = *(ulonglong *)(unaff_RDI + -0x78);
  uVar3 = ~uVar2 & ~CONCAT44(uVar1,0x8d3298c1) | uVar2;
  uVar2 = ~(~uVar2 | CONCAT44(uVar1,0x8d3298c1));
  return ~((~(~uVar3 & uVar2) + uVar2) - uVar3) ^ 0xffffffffffffffff;
}



// FUNCTION 14dcf432c FUN_14dcf432c body=170 status=ok
// SIG undefined FUN_14dcf432c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf43bc) */
/* WARNING: Removing unreachable block (ram,0x00014dcf43c2) */

void FUN_14dcf432c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBX;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = param_3;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0x4901c06c;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x4901c06c;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x166b9660c;
                    /* WARNING: Could not recover jumptable at 0x000166b965ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(local_res20 + -0x10),param_2,*(undefined8 *)(local_res20 + -0x18));
  return;
}



// FUNCTION 14dcf43c8 FUN_14dcf43c8 body=154 status=ok
// SIG undefined FUN_14dcf43c8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf4457) */

void FUN_14dcf43c8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ushort local_res18;
  longlong lStackX_20;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(longlong *)(unaff_RSI + 0x10) = -*(longlong *)(unaff_RSI + 0x10);
  *(longlong *)(unaff_RSI + 0x10) = *(longlong *)(unaff_RSI + 0x10) + -1;
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RSI + 0x10) =
       (~unaff_R15 | uVar1) & *(ulonglong *)(unaff_RSI + 0x10) ^ 0xffffffffffffffff;
  if (-1 < (short)(~(local_res18 & 0x100) + local_res18 + 0x101)) {
    FUN_14df030f4();
    return;
  }
  *(undefined8 *)(lStackX_20 + -8) = local_res10;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -8) = 0;
  *(longlong *)(lStackX_20 + -8) = *(longlong *)(lStackX_20 + -8) + 0x164ad72c2;
  *(undefined8 *)(lStackX_20 + -0x18) = 0x14df03172;
  FUN_164ad7290();
  *(undefined8 *)(lStackX_20 + -0x10) = param_1;
  uVar2 = *(undefined8 *)(lStackX_20 + -0x10);
  param_2 = param_2 + unaff_RBP * -2;
  uVar3 = *(undefined8 *)(lStackX_20 + -8);
  *(longlong *)(lStackX_20 + -8) = param_2;
  *(longlong *)(lStackX_20 + -0x10) = param_2;
  *(undefined8 *)(lStackX_20 + -0x18) = param_4;
  uVar4 = *(undefined8 *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -8) = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)(lStackX_20 + -0x10) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x18) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(unaff_R12 + -8);
  uVar5 = *(undefined8 *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_RDI;
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_RDI;
  *(undefined8 *)(lStackX_20 + -0x28) = unaff_R13;
  uVar2 = *(undefined8 *)(unaff_R12 + -0x98);
  *(undefined8 *)(lStackX_20 + -0x30) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x38) = uVar2;
  *(code **)(lStackX_20 + -0x30) = FUN_14df03207;
  (*(code *)&LAB_1613481b9)(uVar5,uVar3,param_3,uVar4);
  return;
}



// FUNCTION 14dcf451c FUN_14dcf451c body=286 status=ok
// SIG undefined FUN_14dcf451c(void)

/* WARNING: Instruction at (ram,0x00014dcf455c) overlaps instruction at (ram,0x00014dcf455b)
    */

void FUN_14dcf451c(void)

{
  int *piVar1;
  int in_EAX;
  
  piVar1 = (int *)(((ulonglong)(in_EAX + 0x24f38149) & 0xffffffffffffff65) + 3);
  *piVar1 = *piVar1 + 0x66844ad;
  FUN_16588878d();
  FUN_166ce501e();
  return;
}



// FUNCTION 14dcf46b3 FUN_14dcf46b3 body=143 status=ok
// SIG undefined FUN_14dcf46b3(void)

/* WARNING: Instruction at (ram,0x00014dcf47df) overlaps instruction at (ram,0x00014dcf47de)
    */

void FUN_14dcf46b3(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RDI;
  longlong unaff_R12;
  ushort uVar8;
  undefined8 unaff_retaddr;
  
  uVar2 = *(undefined8 *)(unaff_R12 + -0x98);
  FUN_1611b8b2d(param_1,param_2,unaff_retaddr);
  uVar8 = (ushort)uVar2;
  uVar8 = ~(uVar8 & (ushort)param_1) & (uVar8 | (ushort)param_1);
  puVar6 = &stack0xffffffffffffffe8;
  pcVar5 = FUN_1571a3487;
  lVar4 = FUN_1571a3487(FUN_1571a3487,(uVar8 - (uVar8 & 0x100)) + -1);
  do {
    *(ulonglong *)(puVar6 + 8) = *(ulonglong *)(unaff_RDI + -0x78);
    uVar3 = *(ulonglong *)(puVar6 + 8);
    plVar1 = (longlong *)(puVar6 + 8);
    *plVar1 = lVar4;
    *(undefined4 *)plVar1 = 0xc68a92d;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    puVar7 = (ulonglong *)(puVar6 + 0x10);
    if (*plVar1 == 0xc68a92d) {
LAB_14dcf4855:
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((longlong)puVar7 + -4) = 0;
      puVar7[-1] = 0x14dcf48a6;
      FUN_15b5e1de3();
      uVar2 = *puVar7;
      *puVar7 = uVar3 ^ (ulonglong)pcVar5;
      puVar7[-1] = uVar2;
      puVar7[-1] = unaff_R12;
      puVar7[-1] = unaff_RDI;
      puVar7[-2] = unaff_RDI;
      puVar7[-1] = (ulonglong)&DAT_14dcf492b;
      FUN_1619050ff();
      return;
    }
    if (*plVar1 < 0xc68a92e) {
      puVar7 = (ulonglong *)(puVar6 + 0x18);
      goto LAB_14dcf4855;
    }
    puVar6 = (undefined1 *)((ulonglong)(puVar6 + 0x10) & 0xffffffff);
  } while( true );
}



// FUNCTION 14dcf4743 FUN_14dcf4743 body=450 status=ok
// SIG undefined FUN_14dcf4743(void)

/* WARNING: Instruction at (ram,0x00014dcf47df) overlaps instruction at (ram,0x00014dcf47de)
    */

void FUN_14dcf4743(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ushort local_res10;
  ulonglong in_stack_00000018;
  
  local_res10 = ~(local_res10 & (ushort)param_1) & (local_res10 | (ushort)param_1);
  puVar6 = &stack0xfffffffffffffff8;
  pcVar5 = FUN_1571a3487;
  lVar4 = FUN_1571a3487(FUN_1571a3487,(local_res10 - (local_res10 & 0x100)) + -1,param_3,param_4,
                        in_stack_00000018 ^ param_1);
  do {
    *(ulonglong *)(puVar6 + 8) = *(ulonglong *)(unaff_RDI + -0x78);
    uVar2 = *(ulonglong *)(puVar6 + 8);
    plVar1 = (longlong *)(puVar6 + 8);
    *plVar1 = lVar4;
    *(undefined4 *)plVar1 = 0xc68a92d;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    puVar7 = (ulonglong *)(puVar6 + 0x10);
    if (*plVar1 == 0xc68a92d) {
LAB_14dcf4855:
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((longlong)puVar7 + -4) = 0;
      puVar7[-1] = 0x14dcf48a6;
      FUN_15b5e1de3();
      uVar3 = *puVar7;
      *puVar7 = uVar2 ^ (ulonglong)pcVar5;
      puVar7[-1] = uVar3;
      puVar7[-1] = unaff_R12;
      puVar7[-1] = unaff_RDI;
      puVar7[-2] = unaff_RDI;
      puVar7[-1] = (ulonglong)&DAT_14dcf492b;
      FUN_1619050ff();
      return;
    }
    if (*plVar1 < 0xc68a92e) {
      puVar7 = (ulonglong *)(puVar6 + 0x18);
      goto LAB_14dcf4855;
    }
    puVar6 = (undefined1 *)((ulonglong)(puVar6 + 0x10) & 0xffffffff);
  } while( true );
}



// FUNCTION 14dcf49e8 FUN_14dcf49e8 body=403 status=ok
// SIG undefined FUN_14dcf49e8(void)

/* WARNING: Removing unreachable block (ram,0x000165d88884) */
/* WARNING: Removing unreachable block (ram,0x000165d8888a) */
/* WARNING: Removing unreachable block (ram,0x00015764819a) */
/* WARNING: Removing unreachable block (ram,0x00016568cfb3) */
/* WARNING: Removing unreachable block (ram,0x00016568cff2) */
/* WARNING: Removing unreachable block (ram,0x00016568cff5) */
/* WARNING: Removing unreachable block (ram,0x00016568d039) */
/* WARNING: Removing unreachable block (ram,0x00016568d03e) */
/* WARNING: Removing unreachable block (ram,0x00016568d044) */
/* WARNING: Removing unreachable block (ram,0x00014d8da74a) */
/* WARNING: Removing unreachable block (ram,0x00014d8da7d8) */
/* WARNING: Removing unreachable block (ram,0x00014d8da7de) */
/* WARNING: Removing unreachable block (ram,0x00014d8da863) */
/* WARNING: Removing unreachable block (ram,0x00014d8da869) */
/* WARNING: Removing unreachable block (ram,0x00014d8da86e) */
/* WARNING: Removing unreachable block (ram,0x00014df3ed47) */
/* WARNING: Removing unreachable block (ram,0x000162af4011) */
/* WARNING: Removing unreachable block (ram,0x00014df3ede5) */
/* WARNING: Removing unreachable block (ram,0x00014df3edeb) */
/* WARNING: Removing unreachable block (ram,0x000165d88825) */
/* WARNING: Removing unreachable block (ram,0x000165d88855) */
/* WARNING: Removing unreachable block (ram,0x000165d88859) */
/* WARNING: Removing unreachable block (ram,0x000165d8887f) */
/* WARNING: Removing unreachable block (ram,0x00014dcf4b74) */
/* WARNING: Removing unreachable block (ram,0x00014dcf4b7a) */

void FUN_14dcf49e8(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_18;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  FUN_15b3c1773();
  *(ulonglong *)
   (&stack0xffffffffffffffe8 +
   (~(unaff_RDI & 0xffffffffb60b7f5b) & (unaff_RDI | 0xffffffffb60b7f5b) ^ 0xffffffffffffffff)) =
       uVar1 ^ unaff_R15;
  uVar1 = FUN_161afbd0d();
  *(undefined8 *)((~(uStackX_18 & uVar1) & (~(uStackX_18 & uVar1) + uVar1) - ~uStackX_18) - 8) =
       0x1da57f6;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dcf4b80 FUN_14dcf4b80 body=168 status=ok
// SIG undefined FUN_14dcf4b80(void)

/* WARNING: Instruction at (ram,0x00014dcf4bac) overlaps instruction at (ram,0x00014dcf4baa)
    */

void FUN_14dcf4b80(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined1 uVar2;
  byte bVar3;
  undefined6 uVar4;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined1 *local_res8;
  undefined1 local_res10 [24];
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  uVar2 = (undefined1)param_1;
  local_res8 = (undefined1 *)(ulonglong)(uint)local_res8;
  if (local_res8 == (undefined1 *)0xffffffff8ed2fa08) {
    uVar6 = (ulonglong)unaff_ESI;
    bVar3 = bVar3 | (byte)((ulonglong)in_RAX >> 8);
    ppuVar5 = &local_res8;
    local_res8 = local_res10;
  }
  else {
    uVar6 = 0xffffffffec0af589;
    ppuVar5 = (undefined1 **)local_res10;
  }
  uVar6 = *(ulonglong *)(unaff_RDI + uVar6 + 0x13f50a17);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  *(undefined8 *)((longlong)ppuVar5 + -8) = *(undefined8 *)(unaff_RDI + -0x80);
  *(undefined8 *)((longlong)ppuVar5 + -8) = 0x14dcf4c24;
  FUN_15666d5c7(uVar2,param_2,
                ~(uVar1 & CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) |
                 ~((uVar1 + CONCAT62(uVar4,CONCAT11(bVar3,uVar2))) -
                  (uVar1 & CONCAT62(uVar4,CONCAT11(bVar3,uVar2))))),
                uVar6 + CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) +
                (uVar6 & CONCAT62(uVar4,CONCAT11(bVar3,uVar2))) * -2);
  FUN_14dcf4c2a();
  return;
}



// FUNCTION 14dcf4c2a FUN_14dcf4c2a body=321 status=ok
// SIG undefined FUN_14dcf4c2a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dcf4cd0) */
/* WARNING: Removing unreachable block (ram,0x00014dcf4d2a) */
/* WARNING: Removing unreachable block (ram,0x000166d76d02) */

void FUN_14dcf4c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_res8 [4];
  
  puVar2 = (uint *)(5 - (~(ulonglong)local_res8 + 2));
  *puVar2 = 0x5f5a89f5;
  *puVar2 = *puVar2 ^ 0x5f5a89f5;
  uVar1 = local_res8[0] + 0x1fa85691;
  uVar3 = param_4 - uVar1;
  local_res8[0] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(param_4,uVar1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar3 < 0) * 0x80 | (ulonglong)(uVar3 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(param_4 < uVar1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if (uVar3 == 0xffffffff969609cc) {
    local_res8[0] = 0;
    FUN_16693dccd(param_1,0xb3955a9,0xb3955b1,FUN_16693dccd);
    return;
  }
  FUN_1571b46ef();
  return;
}



// FUNCTION 14dcf4f4a FUN_14dcf4f4a body=208 status=ok
// SIG undefined FUN_14dcf4f4a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf4ff6) */

undefined8 FUN_14dcf4f4a(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
    return in_RAX;
  }
  uVar1 = thunk_FUN_15b047df6();
  return uVar1;
}



// FUNCTION 14dcf509c FUN_14dcf509c body=169 status=ok
// SIG undefined FUN_14dcf509c(void)

void FUN_14dcf509c(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ushort unaff_BX;
  undefined8 in_R10;
  ushort *unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *unaff_R14 = *unaff_R14 | unaff_BX;
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  *(undefined4 *)(local_res20 + -0x20) = 0x949b6e4;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  uVar3 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  uVar3 = ~(~(uVar3 & 0xfffffffff6b64913) & (uVar3 | 0xfffffffff6b64913));
  *(undefined8 *)(local_res20 + -0x10 + uVar3) = 0x557d43b4;
  puVar1 = (ulonglong *)(local_res20 + -0x10 + uVar3);
  *puVar1 = *puVar1 ^ 0x4bdada92;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x1ea79926;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x1666ae64d;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
  FUN_1666ae62f(uVar2,unaff_retaddr);
  return;
}



// FUNCTION 14dcf5246 FUN_14dcf5246 body=168 status=ok
// SIG undefined FUN_14dcf5246(void)

void FUN_14dcf5246(void)

{
  (*(code *)0x161baaa26)();
  return;
}



// FUNCTION 14dcf52f4 FUN_14dcf52f4 body=99 status=ok
// SIG undefined FUN_14dcf52f4(void)

void FUN_14dcf52f4(void)

{
  return;
}



// FUNCTION 14dcf5685 FUN_14dcf5685 body=467 status=ok
// SIG undefined FUN_14dcf5685(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf5713) */
/* WARNING: Removing unreachable block (ram,0x00014dcf5719) */

void FUN_14dcf5685(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_8;
  
  param_1 = unaff_RSI - param_1;
  uVar5 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar4 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  *(undefined8 *)(&stack0x00000000 + param_1) = unaff_R12;
  *(ulonglong *)(&stack0x00000000 + param_1) = -1 - (((uVar4 - 1) - ~-(uVar5 | uVar4)) + uVar5);
  uVar1 = *(undefined8 *)(&stack0x00000000 + param_1);
  *(undefined8 *)(&stack0x00000000 + param_1) = in_RAX;
  *(undefined4 *)(&stack0x00000000 + param_1) = 0;
  *(undefined4 *)(&stack0x00000004 + param_1) = 0x86df3016;
  *(int *)(&stack0x00000004 + param_1) = *(int *)(&stack0x00000004 + param_1) + 0x7920cfea;
  lVar3 = *(longlong *)(&stack0x00000000 + param_1);
  lVar2 = *(longlong *)(unaff_R13 + -0x28);
  *(undefined4 *)(&stack0x00000000 + param_1) = 0;
  *(undefined4 *)(&stack0x00000004 + param_1) = 0;
  *(undefined8 *)(&stack0x00000000 + param_1) = *(undefined8 *)(unaff_R13 + -0x68);
  *(undefined8 *)(&stack0x00000000 + param_1) = uVar1;
  *(undefined8 *)((longlong)&uStack_8 + param_1) = uVar1;
  *(undefined1 *)((longlong)&uStack_8 + param_1) = 0x27;
  uVar1 = *(undefined8 *)(&stack0x00000000 + param_1);
  *(longlong *)(&stack0x00000000 + param_1) = unaff_R13;
  FUN_1566162f8(uVar1,~(lVar3 - lVar2) + 1U ^ unaff_R15);
  return;
}



// FUNCTION 14dcf57b8 FUN_14dcf57b8 body=133 status=ok
// SIG undefined FUN_14dcf57b8(void)

void FUN_14dcf57b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x14dcf585a;
                    /* WARNING: Could not recover jumptable at 0x00014dcf5837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcessHeap();
  return;
}



// FUNCTION 14dcf586a FUN_14dcf586a body=145 status=ok
// SIG undefined FUN_14dcf586a(void)

void FUN_14dcf586a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1567b2336)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcf598f FUN_14dcf598f body=183 status=ok
// SIG undefined FUN_14dcf598f(void)

void FUN_14dcf598f(void)

{
  return;
}



// FUNCTION 14dcf5a48 FUN_14dcf5a48 body=306 status=ok
// SIG undefined FUN_14dcf5a48(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf5adb) */
/* WARNING: Removing unreachable block (ram,0x00014dcf5ae1) */

void FUN_14dcf5a48(void)

{
  return;
}



// FUNCTION 14dcf5b7c FUN_14dcf5b7c body=184 status=ok
// SIG undefined FUN_14dcf5b7c(void)

ulonglong FUN_14dcf5b7c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~(*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
         (*(ulonglong *)(unaff_RDI + -0x80) | param_1);
}



// FUNCTION 14dcf5c37 FUN_14dcf5c37 body=112 status=ok
// SIG undefined FUN_14dcf5c37(void)

void FUN_14dcf5c37(void)

{
  FUN_160c03023();
  return;
}



// FUNCTION 14dcf5dc3 FUN_14dcf5dc3 body=11 status=ok
// SIG undefined FUN_14dcf5dc3(void)

void FUN_14dcf5dc3(void)

{
  return;
}



// FUNCTION 14dcf5e60 FUN_14dcf5e60 body=65 status=ok
// SIG undefined FUN_14dcf5e60(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dcf5e9a) overlaps instruction at (ram,0x00014dcf5e99)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcf5ea9) */
/* WARNING: Removing unreachable block (ram,0x00014dcf5e99) */

void FUN_14dcf5e60(undefined8 param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x15aff46c6)(param_1);
  return;
}



// FUNCTION 14dcf5f86 FUN_14dcf5f86 body=179 status=ok
// SIG undefined FUN_14dcf5f86(void)

ulonglong FUN_14dcf5f86(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  
  return in_RAX & unaff_RBX;
}



// FUNCTION 14dcf603d FUN_14dcf603d body=170 status=ok
// SIG undefined FUN_14dcf603d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf60e1) */
/* WARNING: Removing unreachable block (ram,0x0001564db346) */
/* WARNING: Removing unreachable block (ram,0x00014dcf60e7) */

void FUN_14dcf603d(void)

{
  FUN_1564db346();
  return;
}



// FUNCTION 14dcf60e7 FUN_14dcf60e7 body=140 status=ok
// SIG undefined FUN_14dcf60e7(void)

void FUN_14dcf60e7(void)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RSI) = unaff_R15;
  local_res18[0] = *(undefined8 *)(unaff_R13 + -8);
  FUN_166c4d991();
  return;
}



// FUNCTION 14dcf6175 FUN_14dcf6175 body=197 status=ok
// SIG undefined FUN_14dcf6175(void)

/* WARNING: Instruction at (ram,0x00014dcf61e3) overlaps instruction at (ram,0x00014dcf61e2)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcf61e2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dcf61f6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf6175(void)

{
  return;
}



// FUNCTION 14dcf623c FUN_14dcf623c body=3 status=ok
// SIG undefined FUN_14dcf623c(void)

void FUN_14dcf623c(void)

{
  return;
}



// FUNCTION 14dcf62d6 FUN_14dcf62d6 body=128 status=ok
// SIG undefined FUN_14dcf62d6(void)

void FUN_14dcf62d6(void)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_1651a513f(in_stack_00000018,in_stack_00000010);
  return;
}



// FUNCTION 14dcf6356 FUN_14dcf6356 body=126 status=ok
// SIG undefined FUN_14dcf6356(void)

undefined8
FUN_14dcf6356(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_166dbdafb(param_1,unaff_retaddr,FUN_166dbdafb,param_4);
  return uVar1;
}



// FUNCTION 14dcf63d4 FUN_14dcf63d4 body=80 status=ok
// SIG undefined FUN_14dcf63d4(void)

undefined8 FUN_14dcf63d4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcf657d FUN_14dcf657d body=144 status=ok
// SIG undefined FUN_14dcf657d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf657d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  uVar1 = 0xffffffffffffffff - (local_res18 & param_1);
  local_res18 = ((local_res18 | param_1) - (uVar1 | local_res18 | param_1)) + uVar1;
  uVar1 = local_res18;
  uVar3 = (ushort)local_res18 & 0xfeff;
  uVar2 = ~(ushort)local_res18;
  local_res18 = uVar1;
  FUN_165caa003(local_res10 ^ param_1,(~uVar3 - 0x101) - uVar2,&local_res18,param_4,
                ~(in_stack_00000020 & param_1) & (in_stack_00000020 | param_1));
  FUN_14d85d504();
  return;
}



// FUNCTION 14dcf661e FUN_14dcf661e body=128 status=ok
// SIG undefined FUN_14dcf661e(void)

void FUN_14dcf661e(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16648def7(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dcf66a0 FUN_14dcf66a0 body=177 status=ok
// SIG undefined FUN_14dcf66a0(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf674d) */

void FUN_14dcf66a0(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_157200aeb(*(ulonglong *)(param_2 + -0x70) | in_R10);
  FUN_14d7a7c3d();
  return;
}



// FUNCTION 14dcf6754 FUN_14dcf6754 body=112 status=ok
// SIG undefined FUN_14dcf6754(void)

void FUN_14dcf6754(void)

{
  FUN_14d903cc3();
  return;
}



// FUNCTION 14dcf67d1 FUN_14dcf67d1 body=163 status=ok
// SIG undefined FUN_14dcf67d1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf6875) */
/* WARNING: Removing unreachable block (ram,0x000164b67eeb) */
/* WARNING: Removing unreachable block (ram,0x00014dcf686a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000164b67e21 */
/* WARNING: Removing unreachable block (ram,0x000164b67ee5) */
/* WARNING: Removing unreachable block (ram,0x000164b67e38) */
/* WARNING: Removing unreachable block (ram,0x000164b67e67) */
/* WARNING: Removing unreachable block (ram,0x000160e32042) */
/* WARNING: Removing unreachable block (ram,0x000164b67e59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf67d1(void)

{
  FUN_16209241a();
  return;
}



// FUNCTION 14dcf6875 FUN_14dcf6875 body=161 status=ok
// SIG undefined FUN_14dcf6875(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf6875(void)

{
  FUN_165bc6241();
  return;
}



// FUNCTION 14dcf6919 FUN_14dcf6919 body=326 status=ok
// SIG undefined FUN_14dcf6919(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf698c) */
/* WARNING: Removing unreachable block (ram,0x0001619703c9) */
/* WARNING: Removing unreachable block (ram,0x0001619703e5) */
/* WARNING: Removing unreachable block (ram,0x00014dcf69a8) */
/* WARNING: Removing unreachable block (ram,0x00014dcf6a15) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dcf6919(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) + param_1 + 1) * 2 <=
      *(ulonglong *)(unaff_RDI + -0x28) + param_1) {
    return unaff_RBX + -1;
  }
  lVar1 = FUN_161970354();
  return lVar1;
}



// FUNCTION 14dcf6c21 FUN_14dcf6c21 body=506 status=ok
// SIG undefined FUN_14dcf6c21(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf6d6f) */

void FUN_14dcf6c21(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong unaff_R14;
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong in_stack_00000030;
  
  uVar4 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x30);
  uVar5 = *(ulonglong *)(unaff_R12 + -0x30) ^ 0xffffffffffffffff | in_RAX;
  uVar4 = (uVar5 - (uVar4 | uVar5)) + uVar4;
  uVar5 = ~uVar4;
  FUN_162cb03c7();
  *(ulonglong *)(param_1 + 8) =
       *(ulonglong *)(param_1 + 8) & (uVar5 ^ 0xffffffffffffffff) | ~*(ulonglong *)(param_1 + 8);
  uVar5 = (in_stack_00000030 & unaff_RBP ^ 0xffffffffffffffff) & (in_stack_00000030 | unaff_RBP);
  *(ulonglong *)(uVar5 - 8) = uVar4;
  if (-1 < (longlong)(uVar5 - 8)) {
    FUN_1668ad441();
    return;
  }
  *(ulonglong *)(uVar5 - 0x10) = unaff_R14 ^ in_RAX;
  *(undefined8 *)(uVar5 - 0x18) = local_res18;
  *(undefined4 *)(uVar5 - 0x20) = 0x1825;
  *(undefined4 *)(uVar5 - 0x1c) = 0;
  lVar1 = *(longlong *)(uVar5 - 0x20);
  uVar2 = *(undefined8 *)(uVar5 - 0x18);
  uVar3 = *(undefined8 *)(uVar5 - 0x10);
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar5 - 8);
  *(undefined8 *)(uVar5 - 0x18) = uVar3;
  *(longlong *)(uVar5 - 8) = lVar1 + 0x161a8b564;
  *(undefined8 *)(uVar5 - 0x18) = unaff_RBX;
  thunk_FUN_161a8cd50(local_res10,uVar2,thunk_FUN_161a8cd50);
  return;
}



// FUNCTION 14dcf7137 FUN_14dcf7137 body=144 status=ok
// SIG undefined FUN_14dcf7137(void)

void FUN_14dcf7137(void)

{
  return;
}



// FUNCTION 14dcf71ce FUN_14dcf71ce body=176 status=ok
// SIG undefined FUN_14dcf71ce(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf727e) */

void FUN_14dcf71ce(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)) {
    FUN_165e81ddd();
    return;
  }
  FUN_165e81ddd();
  return;
}



// FUNCTION 14dcf727e FUN_14dcf727e body=124 status=ok
// SIG undefined FUN_14dcf727e(void)

void FUN_14dcf727e(void)

{
  undefined1 in_AL;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong uVar1;
  undefined8 local_res10;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
                    /* WARNING: Read-only address (ram,0x00014d7ac165) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7ac165 = in_AL;
  *(undefined8 *)(local_res20 + -8) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = in_R11;
  *(ulonglong *)(local_res20 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -8) = 0x2c4f440;
  FUN_165c7153c(local_res10);
  return;
}



// FUNCTION 14dcf7308 FUN_14dcf7308 body=141 status=ok
// SIG undefined FUN_14dcf7308(void)

void FUN_14dcf7308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14de6d2cd(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcf739c FUN_14dcf739c body=169 status=ok
// SIG undefined FUN_14dcf739c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf73f4) */

void FUN_14dcf739c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  (*(code *)0x162083ef2)
            (param_1,0x74855019,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             ~(param_4 & unaff_R15) & (unaff_retaddr | unaff_R15));
  return;
}



// FUNCTION 14dcf7446 FUN_14dcf7446 body=1035 status=ok
// SIG undefined FUN_14dcf7446(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf7707) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7712) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7681) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7687) */
/* WARNING: Removing unreachable block (ram,0x0001616e7390) */
/* WARNING: Removing unreachable block (ram,0x00014dcf74b4) */
/* WARNING: Removing unreachable block (ram,0x00014dcf74ba) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7461) */
/* WARNING: Removing unreachable block (ram,0x00014dcf758e) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7591) */
/* WARNING: Removing unreachable block (ram,0x0001659bfedc) */
/* WARNING: Removing unreachable block (ram,0x0001659bff58) */
/* WARNING: Removing unreachable block (ram,0x000161026a37) */
/* WARNING: Removing unreachable block (ram,0x0001659bff5e) */
/* WARNING: Removing unreachable block (ram,0x00016536254c) */
/* WARNING: Removing unreachable block (ram,0x0001659bfff9) */
/* WARNING: Removing unreachable block (ram,0x0001659bffff) */
/* WARNING: Removing unreachable block (ram,0x0001659c0004) */
/* WARNING: Removing unreachable block (ram,0x0001659c0089) */
/* WARNING: Removing unreachable block (ram,0x0001659c008f) */
/* WARNING: Removing unreachable block (ram,0x00016210d88b) */
/* WARNING: Removing unreachable block (ram,0x00016210d8a1) */
/* WARNING: Removing unreachable block (ram,0x00016210d89c) */
/* WARNING: Removing unreachable block (ram,0x00016210d8a3) */
/* WARNING: Removing unreachable block (ram,0x00016210d91b) */
/* WARNING: Removing unreachable block (ram,0x000162e9874f) */
/* WARNING: Removing unreachable block (ram,0x00014dcf770d) */

undefined8 FUN_14dcf7446(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcf7873 FUN_14dcf7873 body=143 status=ok
// SIG undefined FUN_14dcf7873(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf7a56) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7a61) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7a5c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7903) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf7873(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) + lVar2;
  uVar4 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = 0x1f8c5bc3;
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  uVar3 = *(ulonglong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) | 0xffffffffe073a43c;
  *(ulonglong *)(uVar1 - 8) = ~(~(uVar3 & 0xffffffffe073a43c) & *(ulonglong *)(uVar1 - 8));
  uVar5 = *(undefined8 *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x156c0ae34;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  FUN_1620e38d9(param_1,param_2,uVar4,uVar5);
  return;
}



// FUNCTION 14dcf7903 FUN_14dcf7903 body=348 status=ok
// SIG undefined FUN_14dcf7903(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf7a56) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7a61) */
/* WARNING: Removing unreachable block (ram,0x00014dcf7a5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf7903(void)

{
  longlong lVar1;
  longlong unaff_R12;
  undefined1 uStack0000000000000119;
  
  uStack0000000000000119 = 0;
  lVar1 = FUN_15b7ed638();
  FUN_161d12f1e(FUN_161d12f1e,*(longlong *)(unaff_R12 + -0x98) + lVar1);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcf7a61 FUN_14dcf7a61 body=68 status=ok
// SIG undefined FUN_14dcf7a61(void)

void FUN_14dcf7a61(void)

{
  return;
}



// FUNCTION 14dcf7c49 FUN_14dcf7c49 body=137 status=ok
// SIG undefined FUN_14dcf7c49(void)

void FUN_14dcf7c49(undefined8 param_1,undefined8 param_2)

{
  FUN_165b88007(param_1,param_2,0x352b1237);
  return;
}



// FUNCTION 14dcf7cd2 FUN_14dcf7cd2 body=136 status=ok
// SIG undefined FUN_14dcf7cd2(void)

void FUN_14dcf7cd2(void)

{
  undefined8 unaff_RBX;
  longlong unaff_R14;
  longlong unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(unaff_R14 + unaff_retaddr + 0x4fbd8b8f) = unaff_RBX;
  FUN_14deb171a(local_res18);
  return;
}



// FUNCTION 14dcf7d60 FUN_14dcf7d60 body=267 status=ok
// SIG undefined FUN_14dcf7d60(void)

void FUN_14dcf7d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1572136ba(param_1,param_2);
  return;
}



// FUNCTION 14dcf7eb5 FUN_14dcf7eb5 body=204 status=ok
// SIG undefined FUN_14dcf7eb5(void)

/* WARNING: Instruction at (ram,0x00014dcf7ebe) overlaps instruction at (ram,0x00014dcf7ebd)
    */

void FUN_14dcf7eb5(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_CF;
  bool in_ZF;
  
  if (in_ZF) {
    if (!in_CF) {
      return;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
  }
  pcVar2 = (code *)swi(0x56);
  (*pcVar2)();
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15;
  *(undefined8 *)((longlong)register0x00000020 + 8) = *(undefined8 *)(unaff_R13 + -0x70);
  *(undefined8 *)register0x00000020 = *(undefined8 *)(unaff_R13 + -8);
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -8) = *(undefined8 *)(unaff_R13 + -0x98);
  uVar1 = *(undefined8 *)((longlong)register0x00000020 + -0x10);
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = uVar3;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = uVar3;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)(unaff_R13 + -0xa0);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = uVar1;
  FUN_14dbc61d9();
  return;
}



// FUNCTION 14dcf7f40 thunk_FUN_14dcf7f46 body=5 status=ok
// SIG undefined thunk_FUN_14dcf7f46(void)

void thunk_FUN_14dcf7f46(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcf7f46 FUN_14dcf7f46 body=19 status=ok
// SIG undefined FUN_14dcf7f46(void)

void FUN_14dcf7f46(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcf8050 FUN_14dcf8050 body=163 status=ok
// SIG undefined FUN_14dcf8050(void)

void FUN_14dcf8050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *puVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 auStackX_10 [3];
  
  puVar1 = (ushort *)((longlong)auStackX_10 + unaff_RSI);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(param_5 + -8) = auStackX_10[0];
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_3;
  *(undefined8 *)(param_5 + -0x20) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar2 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = unaff_R12;
  *(undefined8 *)(param_5 + -0x28) = 0x14dcf80f0;
  FUN_1563f89f4(param_1,FUN_1563f89f4,uVar2);
  thunk_FUN_14dcf80fc();
  return;
}



// FUNCTION 14dcf80f6 thunk_FUN_14dcf80fc body=5 status=ok
// SIG undefined thunk_FUN_14dcf80fc(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14dcf80fc(void)

{
  return;
}



// FUNCTION 14dcf80fc FUN_14dcf80fc body=146 status=ok
// SIG undefined FUN_14dcf80fc(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf80fc(void)

{
  return;
}



// FUNCTION 14dcf818e FUN_14dcf818e body=67 status=ok
// SIG undefined FUN_14dcf818e(void)

void FUN_14dcf818e(void)

{
  return;
}



// FUNCTION 14dcf82ca FUN_14dcf82ca body=157 status=ok
// SIG undefined FUN_14dcf82ca(void)

undefined8 FUN_14dcf82ca(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcf8647 FUN_14dcf8647 body=167 status=ok
// SIG undefined FUN_14dcf8647(void)

void FUN_14dcf8647(void)

{
  return;
}



// FUNCTION 14dcf8762 FUN_14dcf8762 body=8 status=ok
// SIG undefined FUN_14dcf8762(void)

void FUN_14dcf8762(void)

{
  return;
}



// FUNCTION 14dcf87f5 FUN_14dcf87f5 body=171 status=ok
// SIG undefined FUN_14dcf87f5(void)

void FUN_14dcf87f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_14ddba35e(*(undefined8 *)(unaff_RDI + -8),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcf8ae2 FUN_14dcf8ae2 body=159 status=ok
// SIG undefined FUN_14dcf8ae2(void)

void FUN_14dcf8ae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffc663285 + unaff_R14);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x88);
  uVar3 = puVar1[1];
  puVar1[1] = param_3;
  uVar4 = puVar1[1];
  puVar1[1] = uVar3;
  *puVar1 = uVar3;
  lVar2 = *(longlong *)(unaff_RDI + -0x90);
  puVar1[1] = 0;
  puVar1[1] = puVar1[1] + lVar2;
  puVar1[-1] = in_RAX;
  *puVar1 = param_2;
  puVar1[-1] = param_2;
  puVar1[-2] = unaff_RSI;
  (*(code *)0x156751e68)(param_1,param_2,uVar4);
  return;
}



// FUNCTION 14dcf8dbb FUN_14dcf8dbb body=147 status=ok
// SIG undefined FUN_14dcf8dbb(void)

void FUN_14dcf8dbb(void)

{
  longlong in_R11;
  ulonglong unaff_R15;
  
  *(ulonglong *)(in_R11 + 8) =
       (unaff_R15 - (*(ulonglong *)(in_R11 + 8) | unaff_R15)) + *(longlong *)(in_R11 + 8);
  thunk_FUN_15b5b39c7();
  return;
}



// FUNCTION 14dcf8e4e FUN_14dcf8e4e body=320 status=ok
// SIG undefined FUN_14dcf8e4e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf8ed8) */
/* WARNING: Removing unreachable block (ram,0x00014dcf8ede) */
/* WARNING: Removing unreachable block (ram,0x0001569e9a80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcf8e4e(void)

{
  FUN_1569e9a80();
  return;
}



// FUNCTION 14dcf9201 FUN_14dcf9201 body=142 status=ok
// SIG undefined FUN_14dcf9201(void)

void FUN_14dcf9201(byte param_1,ulonglong param_2)

{
  byte bVar1;
  byte unaff_DIL;
  ulonglong local_res8;
  undefined8 uStackX_10;
  
  bVar1 = (-2 - ~unaff_DIL) - ~param_1 & 0x3f;
  FUN_15b60b877(uStackX_10,
                param_2 >> bVar1 | param_2 << 0x41 - bVar1 |
                (ulonglong)((local_res8 & 1) != 0) << 0x40 - bVar1);
  return;
}



// FUNCTION 14dcf93ad FUN_14dcf93ad body=157 status=ok
// SIG undefined FUN_14dcf93ad(void)

void FUN_14dcf93ad(void)

{
  return;
}



// FUNCTION 14dcf956f FUN_14dcf956f body=285 status=ok
// SIG undefined FUN_14dcf956f(void)

void FUN_14dcf956f(void)

{
  FUN_161e47173();
  return;
}



// FUNCTION 14dcf968e FUN_14dcf968e body=157 status=ok
// SIG undefined FUN_14dcf968e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcf972b) */
/* WARNING: Removing unreachable block (ram,0x00014dcf971b) */

undefined8
FUN_14dcf968e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  uVar1 = FUN_1570e237b(param_1,*(undefined8 *)(unaff_R13 + -0xa0),param_3,param_4);
  return uVar1;
}



// FUNCTION 14dcf972b FUN_14dcf972b body=217 status=ok
// SIG undefined FUN_14dcf972b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcf972b(void)

{
  return 0xfffffffffffffff8;
}



// FUNCTION 14dcf9809 FUN_14dcf9809 body=40 status=ok
// SIG undefined FUN_14dcf9809(void)

void FUN_14dcf9809(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = param_2;
  FUN_165c7153c(param_1,uStackX_20,uStackX_18);
  return;
}



// FUNCTION 14dcf9971 FUN_14dcf9971 body=290 status=ok
// SIG undefined FUN_14dcf9971(void)

void FUN_14dcf9971(ulonglong param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined8 uStackX_8;
  longlong local_res18;
  
  pcVar2 = FUN_1647a5930;
  FUN_1647a5930(param_1,FUN_1647a5930,
                &DAT_b85a4d9b5869ffff +
                (*(ulonglong *)(unaff_R12 + -0x70) & 0xb85a4d9b5869ffff) * -2 +
                *(ulonglong *)(unaff_R12 + -0x70));
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | param_1;
  *(ulonglong *)(unaff_RDI + 0x10) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_RDI + 0x10));
  *(code **)(local_res18 + -8) = pcVar2;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  FUN_14d7f2aed(*(undefined8 *)(local_res18 + -0x18),
                (*(int *)(local_res18 + -8) + -1) - ~(uint)pcVar2);
  return;
}



// FUNCTION 14dcf9a96 FUN_14dcf9a96 body=127 status=ok
// SIG undefined FUN_14dcf9a96(void)

void FUN_14dcf9a96(void)

{
  (*(code *)0x1666952b6)();
  return;
}



// FUNCTION 14dcf9c48 FUN_14dcf9c48 body=142 status=ok
// SIG undefined FUN_14dcf9c48(void)

undefined8 FUN_14dcf9c48(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcf9e98 FUN_14dcf9e98 body=190 status=ok
// SIG undefined FUN_14dcf9e98(void)

void FUN_14dcf9e98(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_165aa4387(param_1,*(ulonglong *)(unaff_RDI + -0x40) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x40) & param_1) * -2,unaff_retaddr);
  return;
}



// FUNCTION 14dcfa08a FUN_14dcfa08a body=1247 status=ok
// SIG undefined FUN_14dcfa08a(void)

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000008 */
/* WARNING: Removing unreachable block (ram,0x00015af712eb) */
/* WARNING: Removing unreachable block (ram,0x00015af712f1) */
/* WARNING: Removing unreachable block (ram,0x00015af71328) */
/* WARNING: Removing unreachable block (ram,0x00015af7138d) */
/* WARNING: Removing unreachable block (ram,0x00015af71392) */
/* WARNING: Removing unreachable block (ram,0x00016507a668) */
/* WARNING: Removing unreachable block (ram,0x00015af71398) */
/* WARNING: Removing unreachable block (ram,0x00015af7139e) */
/* WARNING: Removing unreachable block (ram,0x00015af713a1) */
/* WARNING: Removing unreachable block (ram,0x00015af71419) */
/* WARNING: Removing unreachable block (ram,0x00016171e25b) */
/* WARNING: Removing unreachable block (ram,0x00016171e267) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa210) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa21c) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa2a5) */
/* WARNING: Removing unreachable block (ram,0x00016171e1e5) */
/* WARNING: Removing unreachable block (ram,0x00016171e1ea) */
/* WARNING: Removing unreachable block (ram,0x0001613cc90a) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa2b3) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa2b9) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa306) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa30b) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa324) */
/* WARNING: Removing unreachable block (ram,0x0001563c4bd1) */
/* WARNING: Removing unreachable block (ram,0x00015af712a8) */
/* WARNING: Removing unreachable block (ram,0x000157571600) */
/* WARNING: Removing unreachable block (ram,0x00015757160d) */
/* WARNING: Removing unreachable block (ram,0x000157571612) */
/* WARNING: Removing unreachable block (ram,0x000157571712) */
/* WARNING: Removing unreachable block (ram,0x000157571718) */
/* WARNING: Removing unreachable block (ram,0x00016280bca9) */
/* WARNING: Removing unreachable block (ram,0x0001563c4be3) */
/* WARNING: Removing unreachable block (ram,0x000156e66b71) */
/* WARNING: Removing unreachable block (ram,0x000156e66b8d) */
/* WARNING: Removing unreachable block (ram,0x000156e66b88) */
/* WARNING: Removing unreachable block (ram,0x000156e66b9a) */
/* WARNING: Removing unreachable block (ram,0x0001563c4bec) */
/* WARNING: Removing unreachable block (ram,0x0001563c4bfb) */
/* WARNING: Removing unreachable block (ram,0x0001563c4bf6) */
/* WARNING: Removing unreachable block (ram,0x0001666bdaef) */
/* WARNING: Removing unreachable block (ram,0x00015b6acfdd) */
/* WARNING: Removing unreachable block (ram,0x0001666bdb11) */
/* WARNING: Removing unreachable block (ram,0x0001563c4c1f) */
/* WARNING: Removing unreachable block (ram,0x0001563c4c2e) */
/* WARNING: Removing unreachable block (ram,0x00015b6acfe5) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad002) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad028) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad02e) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad033) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad076) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad0a3) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad0a9) */
/* WARNING: Removing unreachable block (ram,0x00015b6ad0ae) */
/* WARNING: Removing unreachable block (ram,0x0001669779f8) */
/* WARNING: Removing unreachable block (ram,0x000166977a5f) */
/* WARNING: Removing unreachable block (ram,0x000166977b0f) */
/* WARNING: Removing unreachable block (ram,0x0001578776f6) */
/* WARNING: Removing unreachable block (ram,0x000161af124e) */
/* WARNING: Removing unreachable block (ram,0x000161af127a) */
/* WARNING: Removing unreachable block (ram,0x000166977b15) */
/* WARNING: Removing unreachable block (ram,0x000166977bbb) */
/* WARNING: Removing unreachable block (ram,0x000166977bc0) */
/* WARNING: Removing unreachable block (ram,0x000166977bc6) */
/* WARNING: Removing unreachable block (ram,0x000166977bcb) */
/* WARNING: Removing unreachable block (ram,0x00015af7141e) */
/* WARNING: Removing unreachable block (ram,0x00015af71424) */
/* WARNING: Removing unreachable block (ram,0x00015af71429) */
/* WARNING: Removing unreachable block (ram,0x000165af9388) */
/* WARNING: Removing unreachable block (ram,0x00015af714c6) */
/* WARNING: Removing unreachable block (ram,0x00015af714cc) */

undefined8 FUN_14dcfa08a(int param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  code *pcVar4;
  undefined8 in_R10;
  
  *(undefined8 *)(unaff_RDI + 0x18) = param_3;
  pcVar4 = FUN_16284c342;
  uVar3 = FUN_16284c342();
  uVar2 = FUN_160f876e2();
  iVar1 = param_2 + uVar2 + (param_2 & uVar2) * -2;
  uVar3 = FUN_16540eccd(param_1 + iVar1 + 0x432aff97,iVar1,in_R10,pcVar4,uVar3);
  return uVar3;
}



// FUNCTION 14dcfa45e FUN_14dcfa45e body=178 status=ok
// SIG undefined FUN_14dcfa45e(void)

void FUN_14dcfa45e(void)

{
  return;
}



// FUNCTION 14dcfa5d6 FUN_14dcfa5d6 body=177 status=ok
// SIG undefined FUN_14dcfa5d6(void)

void FUN_14dcfa5d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  undefined8 uStackX_20;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | in_RAX;
  *(ulonglong *)(unaff_RBP + 8) =
       -2 - ~-((~*(ulonglong *)(unaff_RBP + 8) | ~in_RAX | uVar1) + *(longlong *)(unaff_RBP + 8) + 1
              );
  FUN_156d4dd4c(param_1,param_2,param_3,uStackX_20);
  return;
}



// FUNCTION 14dcfa729 FUN_14dcfa729 body=141 status=ok
// SIG undefined FUN_14dcfa729(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001662b920b) overlaps instruction at (ram,0x0001662b920a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcfa7b1) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa7b7) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa820) */
/* WARNING: Removing unreachable block (ram,0x0001662b91ad) */
/* WARNING: Removing unreachable block (ram,0x0001662b920a) */
/* WARNING: Removing unreachable block (ram,0x0001662b920b) */
/* WARNING: Removing unreachable block (ram,0x0001662b9211) */
/* WARNING: Removing unreachable block (ram,0x0001662b921c) */
/* WARNING: Removing unreachable block (ram,0x0001662b9343) */
/* WARNING: Removing unreachable block (ram,0x0001662b9349) */
/* WARNING: Removing unreachable block (ram,0x00014d84b630) */
/* WARNING: Removing unreachable block (ram,0x0001662b9217) */
/* WARNING: Removing unreachable block (ram,0x000162eade22) */
/* WARNING: Removing unreachable block (ram,0x000162eade33) */
/* WARNING: Removing unreachable block (ram,0x000162eade32) */
/* WARNING: Removing unreachable block (ram,0x000162eade38) */
/* WARNING: Removing unreachable block (ram,0x000162eade59) */
/* WARNING: Removing unreachable block (ram,0x000162eade58) */
/* WARNING: Removing unreachable block (ram,0x000162eade84) */
/* WARNING: Removing unreachable block (ram,0x000162eade8a) */
/* WARNING: Removing unreachable block (ram,0x000162eade7f) */
/* WARNING: Removing unreachable block (ram,0x000156d440fb) */
/* WARNING: Removing unreachable block (ram,0x000156d44182) */
/* WARNING: Removing unreachable block (ram,0x000156d4419a) */
/* WARNING: Removing unreachable block (ram,0x000156d4418e) */
/* WARNING: Removing unreachable block (ram,0x000156937efe) */
/* WARNING: Removing unreachable block (ram,0x000156937f18) */
/* WARNING: Removing unreachable block (ram,0x000156937f17) */
/* WARNING: Removing unreachable block (ram,0x000156937f1d) */
/* WARNING: Removing unreachable block (ram,0x00014d84b64e) */
/* WARNING: Removing unreachable block (ram,0x00014d84b652) */

void FUN_14dcfa729(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1649f08f4)(0x1649f08f4,param_2);
  return;
}



// FUNCTION 14dcfa7b7 FUN_14dcfa7b7 body=302 status=ok
// SIG undefined FUN_14dcfa7b7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001662b920b) overlaps instruction at (ram,0x0001662b920a)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84b64e) */
/* WARNING: Removing unreachable block (ram,0x0001662b920a) */
/* WARNING: Removing unreachable block (ram,0x000162eade8a) */
/* WARNING: Removing unreachable block (ram,0x000162eade32) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa820) */
/* WARNING: Removing unreachable block (ram,0x0001662b921c) */
/* WARNING: Removing unreachable block (ram,0x0001662b9343) */
/* WARNING: Removing unreachable block (ram,0x00014d84b630) */
/* WARNING: Removing unreachable block (ram,0x000162eade84) */
/* WARNING: Removing unreachable block (ram,0x0001662b9349) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x000156d44183 */
/* WARNING: Removing unreachable block (ram,0x000156937f17) */
/* WARNING: Removing unreachable block (ram,0x000156d4419a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcfa7b7(void)

{
  undefined1 in_AL;
  
  uRamfd0b45fe8b445741 = in_AL;
  return;
}



// FUNCTION 14dcfa90f FUN_14dcfa90f body=240 status=ok
// SIG undefined FUN_14dcfa90f(void)

/* WARNING: Removing unreachable block (ram,0x00016140d1b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd683b1) */
/* WARNING: Removing unreachable block (ram,0x00014dcfa982) */

void FUN_14dcfa90f(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  if (!CARRY8(~local_res20 | unaff_RDI,local_res20)) {
    FUN_16140d13e();
    return;
  }
  uVar2 = ~(uVar1 & unaff_R15) + unaff_R15;
  if (uVar2 < ~uVar1) {
    (*(code *)0x15afcc38f)(~param_2,~(uVar1 & unaff_R15) & uVar2 - ~uVar1,param_3,param_4);
    return;
  }
  FUN_14dd6832f();
  return;
}



// FUNCTION 14dcfab1e FUN_14dcfab1e body=79 status=ok
// SIG undefined FUN_14dcfab1e(void)

void FUN_14dcfab1e(void)

{
  return;
}



// FUNCTION 14dcfac3f FUN_14dcfac3f body=303 status=ok
// SIG undefined FUN_14dcfac3f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfacd3) */

void FUN_14dcfac3f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x14dc6d4ce)(0x14dc6d4ce,param_2,param_3);
  return;
}



// FUNCTION 14dcfaf22 FUN_14dcfaf22 body=157 status=ok
// SIG undefined FUN_14dcfaf22(void)

void FUN_14dcfaf22(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_166186ab7(in_stack_00000008,param_2,FUN_166186ab7);
  return;
}



// FUNCTION 14dcfb06a FUN_14dcfb06a body=6 status=ok
// SIG undefined FUN_14dcfb06a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcfb06a(undefined8 param_1,int param_2)

{
  byte in_CF;
  longlong unaff_retaddr;
  
  *(int *)(unaff_retaddr + 0x35) = (*(int *)(unaff_retaddr + 0x35) - param_2) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcfb1ce FUN_14dcfb1ce body=200 status=ok
// SIG undefined FUN_14dcfb1ce(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfb26c) */

undefined8 FUN_14dcfb1ce(void)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong local_res20;
  
  uVar3 = local_res20 ^ in_RAX;
  puVar1 = (ulonglong *)(uVar3 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R13;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
  *(ulonglong *)(uVar3 - 0x18) = ~(unaff_R12 & in_RAX) & (unaff_R12 | in_RAX);
  *(undefined8 *)(uVar3 - 0x20) = in_R9;
  plVar2 = (longlong *)(uVar3 - 0x28);
  *plVar2 = uVar3 - 0x20;
  *plVar2 = *plVar2 + 0x18;
  puVar4 = (undefined8 *)*plVar2;
  *(undefined8 *)(uVar3 - 0x28) = in_R10;
  *puVar4 = &LAB_160e5d0a9;
  uVar5 = thunk_FUN_15b642ca5();
  return uVar5;
}



// FUNCTION 14dcfb3b3 FUN_14dcfb3b3 body=149 status=ok
// SIG undefined FUN_14dcfb3b3(void)

ulonglong FUN_14dcfb3b3(void)

{
  longlong unaff_RSI;
  
  return ~*(ulonglong *)(unaff_RSI + -0x40);
}



// FUNCTION 14dcfb4c7 FUN_14dcfb4c7 body=283 status=ok
// SIG undefined FUN_14dcfb4c7(void)

void FUN_14dcfb4c7(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort *in_R11;
  undefined8 in_stack_00000018;
  longlong in_stack_00000030;
  
  FUN_162a78ce1();
  *in_R11 = ~*in_R11;
  *(undefined8 *)(in_stack_00000030 + -8) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -0x18) = param_2;
  *(undefined8 *)(in_stack_00000030 + -0x20) = param_1;
  *(undefined **)(in_stack_00000030 + -8) = &DAT_165e6c55b;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RBX;
  *(undefined8 *)(in_stack_00000030 + -0x20) = unaff_RBX;
  *(undefined8 *)(in_stack_00000030 + -0x28) = unaff_RBX;
  *(code **)(in_stack_00000030 + -0x18) = FUN_14dcfb5e7;
  *(undefined **)(in_stack_00000030 + -0x20) = &DAT_165e6c535;
  return;
}



// FUNCTION 14dcfb5e7 FUN_14dcfb5e7 body=7 status=ok
// SIG undefined FUN_14dcfb5e7(void)

undefined8 FUN_14dcfb5e7(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dcfb5ee FUN_14dcfb5ee body=41 status=ok
// SIG undefined FUN_14dcfb5ee(void)

void FUN_14dcfb5ee(void)

{
  return;
}



// FUNCTION 14dcfb634 FUN_14dcfb634 body=466 status=ok
// SIG undefined FUN_14dcfb634(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfb76e) */

undefined8 FUN_14dcfb634(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_1648d7954(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),
                *(undefined8 *)(unaff_RDI + -0x88));
  uVar1 = (*(code *)0x15b1eae6f)();
  return uVar1;
}



// FUNCTION 14dcfb80b FUN_14dcfb80b body=923 status=ok
// SIG undefined FUN_14dcfb80b(void)

/* WARNING: Instruction at (ram,0x00014dcfb86e) overlaps instruction at (ram,0x00014dcfb86d)
    */
/* WARNING: Removing unreachable block (ram,0x0001564ec474) */
/* WARNING: Removing unreachable block (ram,0x0001564ec47a) */
/* WARNING: Removing unreachable block (ram,0x0001564ec4f7) */
/* WARNING: Removing unreachable block (ram,0x00015b8082b1) */
/* WARNING: Removing unreachable block (ram,0x0001564ec4fd) */
/* WARNING: Removing unreachable block (ram,0x00015b84b9b8) */
/* WARNING: Removing unreachable block (ram,0x0001564ec585) */
/* WARNING: Removing unreachable block (ram,0x0001564ec58b) */
/* WARNING: Removing unreachable block (ram,0x0001564ec590) */
/* WARNING: Removing unreachable block (ram,0x000165f3e881) */
/* WARNING: Removing unreachable block (ram,0x0001564ec776) */
/* WARNING: Removing unreachable block (ram,0x0001564ec77c) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb91e) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb924) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb9b2) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb9b7) */
/* WARNING: Removing unreachable block (ram,0x0001612c4ae4) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb9bd) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb86d) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb8cb) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb880) */
/* WARNING: Removing unreachable block (ram,0x00014dcfb8de) */

undefined8 FUN_14dcfb80b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  byte unaff_R12B;
  undefined8 unaff_retaddr;
  
  *(byte *)(unaff_RBP + 0x108) = *(byte *)(unaff_RBP + 0x108) | 0x9b;
  *(byte *)(unaff_RBP + 0x108) = unaff_R12B | ~*(byte *)(unaff_RBP + 0x108);
  FUN_166678070(param_1,param_2,unaff_retaddr,0x67eb);
  uVar1 = (*(code *)0x14ddd6f09)();
  return uVar1;
}



// FUNCTION 14dcfb924 FUN_14dcfb924 body=317 status=ok
// SIG undefined FUN_14dcfb924(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfb9bd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcfb924(void)

{
  ulonglong in_R10;
  undefined8 local_res8;
  
  if (local_res8 + in_R10 < (local_res8 & in_R10) * 2) {
    return;
  }
  FUN_1612c4ae4();
  return;
}



// FUNCTION 14dcfba63 FUN_14dcfba63 body=132 status=ok
// SIG undefined FUN_14dcfba63(void)

void FUN_14dcfba63(ulonglong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffeeaec74 + (unaff_RBX ^ 0x3d02826e));
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x28);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x48);
  *puVar1 = *puVar1;
  FUN_15b00109d(param_1,uVar2 ^ param_1);
  return;
}



// FUNCTION 14dcfbc98 FUN_14dcfbc98 body=186 status=ok
// SIG undefined FUN_14dcfbc98(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfbd2e) */

void FUN_14dcfbc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char in_AL;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res10;
  longlong lStackX_20;
  
  LOCK();
  if (in_AL == DAT_14d7ab66b) {
    DAT_14d7ab66b = (char)local_res10;
  }
  UNLOCK();
  *(undefined8 *)(lStackX_20 + -8) = unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_R15;
  puVar1 = (undefined8 *)(lStackX_20 + -0x18);
  *(undefined8 *)(lStackX_20 + -0x20) = local_res10;
  *(undefined4 *)(lStackX_20 + -0x28) = 0x1319e107;
  *(undefined4 *)puVar1 = *(undefined4 *)(lStackX_20 + -0x28);
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_R14;
  *(undefined4 *)(lStackX_20 + -0x28) = 0;
  *(undefined4 *)(lStackX_20 + -0x14) = *(undefined4 *)(lStackX_20 + -0x28);
  *puVar1 = param_3;
  *(undefined8 *)(lStackX_20 + -0x20) = param_3;
  *puVar1 = &LAB_1574c252b;
  return;
}



// FUNCTION 14dcfbdd3 FUN_14dcfbdd3 body=145 status=ok
// SIG undefined FUN_14dcfbdd3(void)

void FUN_14dcfbdd3(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_16224e035(param_1,FUN_16224e035,local_res8);
  return;
}



// FUNCTION 14dcfbf1c FUN_14dcfbf1c body=146 status=ok
// SIG undefined FUN_14dcfbf1c(void)

void FUN_14dcfbf1c(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_3 + ~(param_2 & (unaff_RDI | 0xffffffffd2fd6ee1)));
  FUN_156acbef3(param_1,(uVar1 - in_R10) + (~in_R10 | uVar1) * -2 + -2);
  return;
}



// FUNCTION 14dcfbfb4 FUN_14dcfbfb4 body=370 status=ok
// SIG undefined FUN_14dcfbfb4(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfc060) */

void FUN_14dcfbfb4(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong local_res18;
  
  param_1 = local_res18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_R13;
  *(undefined8 *)(param_1 - 0x10) = param_2;
  *(undefined8 *)(param_1 - 0x18) = param_2;
  *(undefined8 *)(param_1 - 0x20) = in_R10;
  uVar1 = *(undefined8 *)(param_1 - 8);
  uVar2 = *(undefined8 *)(param_1 - 0x20);
  *(undefined8 *)(param_1 - 0x20) = unaff_RDI;
  *(undefined8 *)(param_1 - 0x28) = in_RAX;
  *(undefined4 *)(param_1 - 0x28) = 0xb9459cd5;
  *(undefined4 *)(param_1 - 0x24) = 0xffffffff;
  *(undefined8 *)(param_1 + *(longlong *)(param_1 - 0x28) + 0x46ba631b) = uVar1;
  *(undefined8 *)(param_1 - 0x18) = uVar2;
  *(undefined **)(param_1 - 8) = &DAT_15b3186b0;
  *(undefined8 *)(param_1 - 0x10) = in_RAX;
  return;
}



// FUNCTION 14dcfc182 FUN_14dcfc182 body=428 status=ok
// SIG undefined FUN_14dcfc182(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfc1d1) */
/* WARNING: Removing unreachable block (ram,0x0001612a92b7) */
/* WARNING: Removing unreachable block (ram,0x00014dcfc222) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcfc182(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  (*(code *)&LAB_16550c929)(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcfc56e FUN_14dcfc56e body=129 status=ok
// SIG undefined FUN_14dcfc56e(void)

undefined8 FUN_14dcfc56e(void)

{
  return 0xffffffffcaf7edeb;
}



// FUNCTION 14dcfc6ff FUN_14dcfc6ff body=160 status=ok
// SIG undefined FUN_14dcfc6ff(void)

void FUN_14dcfc6ff(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined2 local_res18;
  ulonglong in_stack_00000020;
  
  FUN_164eee991(local_res10,
                CONCAT62((int6)((ulonglong)in_stack_00000008 >> 0x10),local_res18) | 0xfeff,param_3,
                param_4,(~param_1 | in_stack_00000020) ^ 0xffffffffffffffff |
                        ~(~in_stack_00000020 | param_1));
  return;
}



// FUNCTION 14dcfc905 FUN_14dcfc905 body=307 status=ok
// SIG undefined FUN_14dcfc905(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcfc905(ulonglong param_1,ulonglong param_2,longlong param_3,undefined2 param_4)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  ulonglong in_RAX;
  uint *puVar8;
  code *pcVar9;
  ulonglong unaff_RBX;
  undefined8 *puVar10;
  longlong unaff_RSI;
  undefined1 *puVar11;
  undefined1 *unaff_RDI;
  ulonglong uVar12;
  undefined8 unaff_R14;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined2 local_res8;
  ulonglong *puStackX_18;
  
  puVar3 = (undefined4 *)(unaff_RSI + (-1 - (unaff_RBX | in_RAX)) * -2);
  uVar12 = ~(*(ulonglong *)(unaff_RDI + -0x50) & param_1) &
           (*(ulonglong *)(unaff_RDI + -0x50) | param_1);
  puVar5 = (undefined8 *)CONCAT62((int6)((ulonglong)((longlong)puVar3 + param_3) >> 0x10),param_4);
  FUN_162dc9a92();
  puStackX_18[-1] = param_2;
  puStackX_18[-2] = puStackX_18[-1];
  puStackX_18[-3] = uVar12;
  puStackX_18[-1] = (ulonglong)&DAT_161d7b065;
  pcVar9 = FUN_161d7b03b;
  puStackX_18[-3] = (ulonglong)FUN_14dcfca3a;
  puVar8 = (uint *)FUN_161d7b03b();
  bVar15 = (*puStackX_18 & 0x400) != 0;
  lVar4 = puStackX_18[1];
  *(undefined8 *)(lVar4 + -8) = unaff_R14;
  *(longlong *)(lVar4 + -0x10) = param_3;
  puVar2 = (ulonglong *)(lVar4 + -8);
  *(ulonglong *)(lVar4 + -0x10) = *puVar2;
  *puVar2 = 0;
  bVar16 = SCARRY8(*puVar2,0x14dcfcac0);
  *puVar2 = *puVar2 + 0x14dcfcac0;
  bVar14 = (longlong)*puVar2 < 0;
  bVar13 = *puVar2 == 0;
  out(*puVar3,(short)pcVar9);
  if ((POPCOUNT(*puVar2 & 0xff) & 1U) != 0) {
    (pcVar9 + -0x4da2af29)[(longlong)puVar8] =
         (code)((char)(pcVar9 + -0x4da2af29)[(longlong)puVar8] + (char)pcVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (bVar13 || bVar16 != bVar14) {
    pbVar1 = (byte *)(puVar3 + (ulonglong)bVar15 * -2 + -0x6cf6770);
    bVar7 = (byte)local_res8 & 7;
    *pbVar1 = *pbVar1 << bVar7 | *pbVar1 >> 8 - bVar7;
    puVar11 = (undefined1 *)(ulonglong)((uint)unaff_RDI | *puVar8);
    *pcVar9 = (code)((byte)*pcVar9 & (byte)((ushort)local_res8 >> 8));
    unaff_RDI = puVar11 + (ulonglong)bVar15 * -2 + 1;
    *puVar11 = (char)puVar8;
    bVar16 = SBORROW1(cRam0000000162dc9a77,-0x6f);
    cRam0000000162dc9a77 = cRam0000000162dc9a77 + 'o';
    bVar14 = cRam0000000162dc9a77 < '\0';
    bVar13 = cRam0000000162dc9a77 == '\0';
  }
  out(0xb,SUB81(puVar2,0));
  lVar4 = *(longlong *)((ulonglong)puVar8 & 0xffffffff);
  puVar10 = (undefined8 *)(lVar4 + -8);
  FUN_162dc9a92 = SUB81(puVar2,0);
  *(undefined8 **)(lVar4 + -8) = puVar5;
  cVar6 = '\x1a';
  do {
    puVar5 = puVar5 + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *puVar5;
    cVar6 = cVar6 + -1;
  } while ('\0' < cVar6);
  *(longlong *)(lVar4 + -0xe0) = lVar4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcfca3a FUN_14dcfca3a body=103 status=ok
// SIG undefined FUN_14dcfca3a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcfca3a(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  uint *in_RAX;
  undefined1 *unaff_RBX;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar8;
  undefined1 *unaff_RDI;
  undefined8 unaff_R14;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong local_res10;
  longlong local_res18;
  
  bVar11 = (local_res10 & 0x400) != 0;
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  puVar3 = (ulonglong *)(local_res18 + -8);
  *(ulonglong *)(local_res18 + -0x10) = *puVar3;
  *puVar3 = 0;
  bVar12 = SCARRY8(*puVar3,0x14dcfcac0);
  *puVar3 = *puVar3 + 0x14dcfcac0;
  bVar10 = (longlong)*puVar3 < 0;
  bVar9 = *puVar3 == 0;
  out(*unaff_RSI,(short)param_2);
  if ((POPCOUNT(*puVar3 & 0xff) & 1U) != 0) {
    (param_2 + -0x4da2af29)[(longlong)in_RAX] =
         (param_2 + -0x4da2af29)[(longlong)in_RAX] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (bVar9 || bVar12 != bVar10) {
    pbVar2 = (byte *)(unaff_RSI + (ulonglong)bVar11 * -2 + -0x6cf6770);
    bVar6 = (byte)param_1 & 7;
    *pbVar2 = *pbVar2 << bVar6 | *pbVar2 >> 8 - bVar6;
    puVar8 = (undefined1 *)(ulonglong)((uint)unaff_RDI | *in_RAX);
    *param_2 = *param_2 & (byte)((ulonglong)param_1 >> 8);
    unaff_RDI = puVar8 + (ulonglong)bVar11 * -2 + 1;
    *puVar8 = (char)in_RAX;
    pcVar1 = unaff_RBX + -0x1b;
    bVar12 = SBORROW1(*pcVar1,-0x6f);
    *pcVar1 = *pcVar1 + 'o';
    bVar10 = *pcVar1 < '\0';
    bVar9 = *pcVar1 == '\0';
  }
  out(0xb,(char)puVar3);
  lVar5 = *(longlong *)((ulonglong)in_RAX & 0xffffffff);
  *unaff_RBX = (char)puVar3;
  puVar7 = (undefined8 *)(lVar5 + -8);
  *(undefined8 **)(lVar5 + -8) = unaff_RBP;
  cVar4 = '\x1a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  *(longlong *)(lVar5 + -0xe0) = lVar5 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcfcad6 FUN_14dcfcad6 body=412 status=ok
// SIG undefined FUN_14dcfcad6(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfcbe0) */

void FUN_14dcfcad6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  
  param_3 = param_3 + in_R10;
  FUN_14da7bd18();
  *(longlong *)(param_5 + -8) = param_3;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined1 **)(param_5 + -0x18) = &LAB_165efa066;
  lVar3 = *(longlong *)(param_5 + -0x18) + 0x2c80;
  uVar1 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = local_res8;
  *(undefined8 *)(param_5 + -0x18) = local_res8;
  if (-1 < lVar3) {
    FUN_165efcc59();
    return;
  }
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar2 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R14;
  *(longlong *)(param_5 + -8) = lVar3;
  *(undefined8 *)(param_5 + -0x18) = uVar1;
  thunk_FUN_15b642ca5(uVar2,*(undefined8 *)(param_5 + -0x20),*(undefined8 *)(param_5 + -0x10));
  return;
}



// FUNCTION 14dcfce5c FUN_14dcfce5c body=167 status=ok
// SIG undefined FUN_14dcfce5c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfceff) */
/* WARNING: Removing unreachable block (ram,0x00014dcfcf05) */

undefined8 FUN_14dcfce5c(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RBP + 0x10) =
       ~((unaff_R15 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(unaff_RBP + 0x10));
  return 0xffffffffea8d13f8;
}



// FUNCTION 14dcfcf05 FUN_14dcfcf05 body=96 status=ok
// SIG undefined FUN_14dcfcf05(void)

undefined8 FUN_14dcfcf05(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcfd013 FUN_14dcfd013 body=114 status=ok
// SIG undefined FUN_14dcfd013(void)

undefined8 FUN_14dcfd013(void)

{
  undefined8 in_R11;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(&stack0x0af7a240 + -(~unaff_R14 + 2)) = in_R11;
  return unaff_retaddr;
}



// FUNCTION 14dcfd08e FUN_14dcfd08e body=497 status=ok
// SIG undefined FUN_14dcfd08e(void)

/* WARNING: Removing unreachable block (ram,0x000166a022ff) */
/* WARNING: Removing unreachable block (ram,0x00014dcfd124) */

void FUN_14dcfd08e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined8 unaff_RBP;
  ushort *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *unaff_R12 = (-0x102 - ~-((~(*unaff_R12 & 0xfeff) - 0x101) - ~*unaff_R12)) + *unaff_R12;
  *(undefined8 *)(param_5 + -8) = local_res18;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(ulonglong *)(param_5 + -0x18) = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),-(char)local_res18);
  *(undefined8 *)(param_5 + -0x10) = param_1;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  uVar2 = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(undefined4 *)(param_5 + -0x28) = 0x6d39610;
  *(undefined4 *)(param_5 + -0x30) = 0xdab02eda;
  *(undefined4 *)(param_5 + -0x2c) = 0xffffffff;
  lVar4 = *(longlong *)(param_5 + -0x30) + 0x254fd12a;
  *(undefined4 *)(param_5 + -0x28 + lVar4) = 0;
  puVar1 = (undefined4 *)(param_5 + -0x28 + lVar4);
  *puVar1 = *puVar1;
  uVar3 = *(ulonglong *)(param_5 + -0x28);
  *(undefined8 *)(param_5 + -0x28) = unaff_R13;
  *(undefined8 *)(param_5 + -0x30) = unaff_RBP;
  *(undefined8 *)
   (param_5 + -0x18 + ((uVar3 & 0x6d39618 ^ 0xffffffffffffffff) & (uVar3 | 0x6d39618))) = uVar2;
  *(undefined8 *)(param_5 + -8) = 0;
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x1614b0a66;
  thunk_FUN_15b642ca5(*(undefined8 *)(param_5 + -0x18),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcfd284 FUN_14dcfd284 body=32 status=ok
// SIG undefined FUN_14dcfd284(void)

void FUN_14dcfd284(void)

{
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  
  *(undefined8 *)(&stack0x23ce4759 + -(~unaff_R12 + 2)) = unaff_R13;
  return;
}



// FUNCTION 14dcfd2a4 FUN_14dcfd2a4 body=395 status=ok
// SIG undefined FUN_14dcfd2a4(void)

void FUN_14dcfd2a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  longlong lVar1;
  
  if (unaff_R14 == 0xe3c3d) {
    FUN_1574ba9da();
    return;
  }
  FUN_15b16d57c();
  lVar1 = (in_stack_00000010 & unaff_R15) * 2;
  FUN_161cfd21d();
  FUN_157580a1b(FUN_157580a1b,param_2,unaff_retaddr,unaff_RBX,lVar1);
  return;
}



// FUNCTION 14dcfd4c1 FUN_14dcfd4c1 body=144 status=ok
// SIG undefined FUN_14dcfd4c1(void)

void FUN_14dcfd4c1(void)

{
  return;
}



// FUNCTION 14dcfd552 FUN_14dcfd552 body=156 status=ok
// SIG undefined FUN_14dcfd552(void)

void FUN_14dcfd552(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_161a7dd98(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dcfd7a8 FUN_14dcfd7a8 body=470 status=ok
// SIG undefined FUN_14dcfd7a8(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfd8c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcfd844) */
/* WARNING: Removing unreachable block (ram,0x00014dcfd8bf) */
/* WARNING: Removing unreachable block (ram,0x00014d9394da) */

undefined8 FUN_14dcfd7a8(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1612a7d52(FUN_1612a7d52,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return uVar1;
}



// FUNCTION 14dcfda6a FUN_14dcfda6a body=156 status=ok
// SIG undefined FUN_14dcfda6a(void)

void FUN_14dcfda6a(void)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  
  thunk_FUN_16487a978(~(*(ulonglong *)(unaff_R13 + -0x50) & in_RAX) &
                      (*(ulonglong *)(unaff_R13 + -0x50) | in_RAX),
                      *(undefined8 *)(unaff_R13 + -0x38));
  return;
}



// FUNCTION 14dcfdf32 FUN_14dcfdf32 body=183 status=ok
// SIG undefined FUN_14dcfdf32(void)

void FUN_14dcfdf32(void)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_166210e36(in_stack_00000010,in_stack_00000008);
  return;
}



// FUNCTION 14dcfe02c FUN_14dcfe02c body=210 status=ok
// SIG undefined FUN_14dcfe02c(void)

void FUN_14dcfe02c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 in_R11;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  FUN_1669ddf2d(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x88));
  *(undefined8 *)(uVar2 - 8) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = param_3;
  *(undefined8 *)(uVar2 - 0x18) = param_3;
  lVar1 = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) - lVar1;
  *(longlong *)(uVar2 - 0x10) = -*(longlong *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  *(undefined8 *)(uVar2 - 8) = 0x14dcfe119;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dcfe1fd FUN_14dcfe1fd body=190 status=ok
// SIG undefined FUN_14dcfe1fd(void)

void FUN_14dcfe1fd(undefined8 param_1,undefined8 param_2)

{
  FUN_15b739dc7(FUN_15b739dc7,param_2,0x195f);
  return;
}



// FUNCTION 14dcfe2c7 FUN_14dcfe2c7 body=139 status=ok
// SIG undefined FUN_14dcfe2c7(void)

void FUN_14dcfe2c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                  longlong param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ushort *unaff_RBX;
  longlong in_R10;
  undefined8 unaff_R13;
  undefined8 local_res18;
  
  *unaff_RBX = ~*unaff_RBX;
  uVar2 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX & (param_4 ^ 0xffff);
  *unaff_RBX = (uVar2 + (param_4 ^ 0xffff)) - *unaff_RBX;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX - 1;
  plVar1 = (longlong *)(param_5 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - in_R10;
  *plVar1 = -*plVar1;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  FUN_162ca4ec7(param_1,param_2,param_3,local_res18);
  return;
}



// FUNCTION 14dcfe3f3 FUN_14dcfe3f3 body=178 status=ok
// SIG undefined FUN_14dcfe3f3(void)

undefined8 FUN_14dcfe3f3(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dcfe5cc FUN_14dcfe5cc body=176 status=ok
// SIG undefined FUN_14dcfe5cc(void)

void FUN_14dcfe5cc(void)

{
  return;
}



// FUNCTION 14dcfe8ae FUN_14dcfe8ae body=449 status=ok
// SIG undefined FUN_14dcfe8ae(void)

/* WARNING: Removing unreachable block (ram,0x00015b13a378) */
/* WARNING: Removing unreachable block (ram,0x00015b13a2fc) */
/* WARNING: Removing unreachable block (ram,0x00015b13a302) */
/* WARNING: Removing unreachable block (ram,0x00015b13a318) */
/* WARNING: Removing unreachable block (ram,0x00015b13a368) */
/* WARNING: Removing unreachable block (ram,0x00014df2a7ed) */
/* WARNING: Removing unreachable block (ram,0x00014df2a88d) */
/* WARNING: Removing unreachable block (ram,0x00015b13a26a) */
/* WARNING: Removing unreachable block (ram,0x00015b13a2f7) */
/* WARNING: Removing unreachable block (ram,0x00014df2a893) */
/* WARNING: Removing unreachable block (ram,0x00014df2a899) */
/* WARNING: Removing unreachable block (ram,0x00014df2a8db) */
/* WARNING: Removing unreachable block (ram,0x00014df2a930) */
/* WARNING: Removing unreachable block (ram,0x00014df2a936) */
/* WARNING: Removing unreachable block (ram,0x00014df2a98f) */
/* WARNING: Removing unreachable block (ram,0x00014df2a992) */
/* WARNING: Removing unreachable block (ram,0x00014df2a92b) */
/* WARNING: Removing unreachable block (ram,0x000160ef54a5) */
/* WARNING: Removing unreachable block (ram,0x000160ef5533) */
/* WARNING: Removing unreachable block (ram,0x000165538ca2) */
/* WARNING: Removing unreachable block (ram,0x000160ef5539) */
/* WARNING: Removing unreachable block (ram,0x000160ef55be) */
/* WARNING: Removing unreachable block (ram,0x000160ef55c3) */
/* WARNING: Removing unreachable block (ram,0x000160ef55c9) */
/* WARNING: Removing unreachable block (ram,0x000160ef55ce) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe8be) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe945) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe94b) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe9c4) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe9d5) */
/* WARNING: Removing unreachable block (ram,0x00014dcfe9ca) */
/* WARNING: Removing unreachable block (ram,0x000162d44908) */
/* WARNING: Removing unreachable block (ram,0x00016474d5f3) */

undefined8 FUN_14dcfe8ae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14df2a7ed();
  return uVar1;
}



// FUNCTION 14dcfe9d5 FUN_14dcfe9d5 body=189 status=ok
// SIG undefined FUN_14dcfe9d5(void)

ulonglong FUN_14dcfe9d5(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return (in_RAX & unaff_R15 ^ 0xffffffffffffffff) & (in_RAX | unaff_R15);
}



// FUNCTION 14dcfea93 FUN_14dcfea93 body=330 status=ok
// SIG undefined FUN_14dcfea93(void)

void FUN_14dcfea93(undefined1 param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  pbVar1 = (byte *)(~(local_res20 & unaff_R15) & ~(~local_res20 & ~unaff_R15));
  *(undefined8 *)(pbVar1 + -8) = unaff_RSI;
  *(undefined8 *)(pbVar1 + -0x10) = *(undefined8 *)(pbVar1 + -8);
  pbVar1[-8] = 0;
  pbVar1[-7] = 0;
  pbVar1[-6] = 0;
  pbVar1[-5] = 0;
  pbVar1[-4] = 0;
  pbVar1[-3] = 0;
  pbVar1[-2] = 0;
  pbVar1[-1] = 0;
  *(undefined1 **)(pbVar1 + -8) = &LAB_166059762 + *(longlong *)(pbVar1 + -8);
  *(undefined8 *)(pbVar1 + -0x10) = in_RAX;
  *(undefined8 *)(pbVar1 + -0x18) = in_RAX;
  *(undefined8 *)(pbVar1 + -0x20) = unaff_R13;
  pbVar1[-0x10] = 0xb8;
  pbVar1[-0xf] = 0x6f;
  pbVar1[-0xe] = 0x7a;
  pbVar1[-0xd] = 0x4d;
  pbVar1[-0xc] = 1;
  pbVar1[-0xb] = 0;
  pbVar1[-10] = 0;
  pbVar1[-9] = 0;
  lVar2 = *(longlong *)(pbVar1 + -0x20);
  pbVar1[-0x20] = 0x4f;
  pbVar1[-0x1f] = 0xeb;
  pbVar1[-0x1e] = 0xcf;
  pbVar1[-0x1d] = 0x4d;
  pbVar1[-0x1c] = 1;
  pbVar1[-0x1b] = 0;
  pbVar1[-0x1a] = 0;
  pbVar1[-0x19] = 0;
  FUN_166059747(param_1,param_2,local_res8);
  *(undefined8 *)(pbVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x38);
  *(undefined8 *)(pbVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x48);
  uVar3 = *(ulonglong *)(pbVar1 + -0x18);
  *(ulonglong *)(pbVar1 + -0x18) = uVar3 + local_res10;
  *(ulonglong *)(pbVar1 + -0x18) = *(longlong *)(pbVar1 + -0x18) + (uVar3 & local_res10) * -2;
  *(undefined8 *)(pbVar1 + -0x18) = *(undefined8 *)(pbVar1 + -0x18);
  (*(code *)&LAB_1626b88bb)(*pbVar1 & (byte)lVar2);
  return;
}



// FUNCTION 14dcfec76 FUN_14dcfec76 body=757 status=ok
// SIG undefined FUN_14dcfec76(void)

/* WARNING: Removing unreachable block (ram,0x00014dcfecf4) */
/* WARNING: Removing unreachable block (ram,0x00014dcfed9f) */
/* WARNING: Removing unreachable block (ram,0x00014dcfeda4) */
/* WARNING: Removing unreachable block (ram,0x00014dcfedaa) */
/* WARNING: Removing unreachable block (ram,0x00014dcfedb5) */

void FUN_14dcfec76(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  
  FUN_16529845d(param_1,~(param_2 & unaff_RBP) & (param_2 | unaff_RBP),param_3,0x5c251df6);
  FUN_162b2368f(&DAT_ac91427a73ca2b2b);
  return;
}



// FUNCTION 14dcff0a4 FUN_14dcff0a4 body=182 status=ok
// SIG undefined FUN_14dcff0a4(void)

/* WARNING: Removing unreachable block (ram,0x00014dcff14b) */

undefined8 FUN_14dcff0a4(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res18;
  
  uVar2 = (~param_1 | local_res18) & (~local_res18 | param_1);
  uVar3 = ~uVar2;
  if (-1 < (longlong)uVar2) {
    uVar1 = FUN_1659567fa(param_1,uVar3);
    return uVar1;
  }
  uVar1 = FUN_1659567fa(param_1,uVar3);
  return uVar1;
}



// FUNCTION 14dcff2b3 FUN_14dcff2b3 body=136 status=ok
// SIG undefined FUN_14dcff2b3(void)

/* WARNING: Removing unreachable block (ram,0x00014dcff33c) */

void FUN_14dcff2b3(void)

{
  char unaff_SIL;
  
  if ((0xffU - unaff_SIL & 0x59) == 0xff) {
    FUN_1627501ff();
    return;
  }
  FUN_1627501ff();
  return;
}



// FUNCTION 14dcff33c FUN_14dcff33c body=170 status=ok
// SIG undefined FUN_14dcff33c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcff33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  FUN_160b45871(unaff_retaddr,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dcff497 FUN_14dcff497 body=417 status=ok
// SIG undefined FUN_14dcff497(void)

/* WARNING: Removing unreachable block (ram,0x00014dcff5a8) */
/* WARNING: Removing unreachable block (ram,0x00014dcff5ae) */

undefined8 FUN_14dcff497(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162a60017();
  return uVar1;
}



// FUNCTION 14dcff63f FUN_14dcff63f body=191 status=ok
// SIG undefined FUN_14dcff63f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcff6fc) */

void FUN_14dcff63f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 local_res8;
  
  if (param_1 - 1U == ~*(ulonglong *)(unaff_RDI + -0x98)) {
    FUN_1615dc671(FUN_1615dc671,local_res8,param_3,param_4);
    return;
  }
  FUN_16287fffd();
  return;
}



// FUNCTION 14dcff702 FUN_14dcff702 body=140 status=ok
// SIG undefined FUN_14dcff702(void)

/* WARNING: Removing unreachable block (ram,0x000162d295bd) */
/* WARNING: Removing unreachable block (ram,0x000162d295c3) */
/* WARNING: Removing unreachable block (ram,0x000156f9268e) */
/* WARNING: Removing unreachable block (ram,0x000156f92698) */
/* WARNING: Removing unreachable block (ram,0x00014dcff78e) */

void FUN_14dcff702(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x28) | unaff_retaddr;
  if ((~uVar1 | ~((~unaff_retaddr | *(ulonglong *)(unaff_RDI + -0x28)) + unaff_retaddr + 1)) + uVar1
      == -1) {
    FUN_156f9268e();
    return;
  }
  thunk_FUN_162d2953a();
  return;
}



// FUNCTION 14dcff78e FUN_14dcff78e body=140 status=ok
// SIG undefined FUN_14dcff78e(void)

void FUN_14dcff78e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15b7043a4)
            (CONCAT71((uint7)(uint3)((ulonglong)param_1 >> 8),0xf1),
             *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15,param_3,
             *(ulonglong *)(unaff_R13 + -0x60) & unaff_R15);
  return;
}



// FUNCTION 14dcff822 FUN_14dcff822 body=150 status=ok
// SIG undefined FUN_14dcff822(void)

void FUN_14dcff822(void)

{
  FUN_1625fe2be();
  return;
}



// FUNCTION 14dcff95f FUN_14dcff95f body=142 status=ok
// SIG undefined FUN_14dcff95f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcff9ef) */

void FUN_14dcff95f(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  
  *(ulonglong *)(unaff_RDI + 8) = ~*(ulonglong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) | unaff_R15;
  uVar1 = (*(longlong *)(unaff_RDI + 8) -
          (in_stack_00000008 - unaff_R13 | *(ulonglong *)(unaff_RDI + 8))) +
          (in_stack_00000008 - unaff_R13);
  *(ulonglong *)(unaff_RDI + 8) = ~uVar1;
  if (-1 < (longlong)uVar1) {
    FUN_166aa9965(param_1,param_2);
    return;
  }
  FUN_166aa9965(param_1,param_2);
  return;
}



// FUNCTION 14dcff9ef FUN_14dcff9ef body=16 status=ok
// SIG undefined FUN_14dcff9ef(void)

void FUN_14dcff9ef(void)

{
  return;
}



// FUNCTION 14dcffb15 FUN_14dcffb15 body=956 status=ok
// SIG undefined FUN_14dcffb15(void)

/* WARNING: Removing unreachable block (ram,0x000156a6d9a0) */
/* WARNING: Removing unreachable block (ram,0x000156a6da40) */
/* WARNING: Removing unreachable block (ram,0x000156a6da43) */
/* WARNING: Removing unreachable block (ram,0x000165e358ba) */
/* WARNING: Removing unreachable block (ram,0x000165e358c0) */
/* WARNING: Removing unreachable block (ram,0x00014dcffd7d) */
/* WARNING: Removing unreachable block (ram,0x00014dcffc24) */
/* WARNING: Removing unreachable block (ram,0x00014dcffc2a) */
/* WARNING: Removing unreachable block (ram,0x00014dcffc2f) */
/* WARNING: Removing unreachable block (ram,0x00014dcffc74) */
/* WARNING: Removing unreachable block (ram,0x00014dcffc79) */
/* WARNING: Removing unreachable block (ram,0x000156dc65f1) */
/* WARNING: Removing unreachable block (ram,0x00014dcffce6) */
/* WARNING: Removing unreachable block (ram,0x00014dcffcec) */
/* WARNING: Removing unreachable block (ram,0x00014dcffcf1) */
/* WARNING: Removing unreachable block (ram,0x00014dcffd82) */
/* WARNING: Removing unreachable block (ram,0x0001658927d6) */
/* WARNING: Removing unreachable block (ram,0x00014dcffd88) */
/* WARNING: Removing unreachable block (ram,0x000165e359bf) */
/* WARNING: Removing unreachable block (ram,0x000165e359c5) */
/* WARNING: Removing unreachable block (ram,0x000156a6d8f2) */
/* WARNING: Removing unreachable block (ram,0x000156a6d99a) */
/* WARNING: Removing unreachable block (ram,0x00016196e2b6) */
/* WARNING: Removing unreachable block (ram,0x00016196e323) */
/* WARNING: Removing unreachable block (ram,0x00016196e329) */
/* WARNING: Removing unreachable block (ram,0x000156b01fe2) */
/* WARNING: Removing unreachable block (ram,0x000156a6d995) */
/* WARNING: Removing unreachable block (ram,0x0001575f6dce) */
/* WARNING: Removing unreachable block (ram,0x0001575f6db8) */
/* WARNING: Removing unreachable block (ram,0x00014dcffbb0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dcffb15(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(-9 - ((~param_5 & ~unaff_R15 | param_5) & (~param_5 | unaff_R15))) =
       in_stack_00000008;
  uVar1 = FUN_1655d0b3f(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dcffcf1 FUN_14dcffcf1 body=149 status=ok
// SIG undefined FUN_14dcffcf1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcffd88) */
/* WARNING: Removing unreachable block (ram,0x00014dcffd7d) */

void FUN_14dcffcf1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14e0b02fa(FUN_14e0b02fa,param_2,param_3);
  return;
}



// FUNCTION 14dcffd88 FUN_14dcffd88 body=326 status=ok
// SIG undefined FUN_14dcffd88(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcffd88(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1654c33b6(0xffffffffaa48eb21,param_2,0xfffffffffffffff8,
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  FUN_1659822bc();
  return;
}



// FUNCTION 14dd000b0 FUN_14dd000b0 body=417 status=ok
// SIG undefined FUN_14dd000b0(void)

/* WARNING: Removing unreachable block (ram,0x000156e34f2f) */
/* WARNING: Removing unreachable block (ram,0x000156e34f29) */
/* WARNING: Removing unreachable block (ram,0x000156e34f34) */
/* WARNING: Removing unreachable block (ram,0x00015b4751e4) */
/* WARNING: Removing unreachable block (ram,0x00015b4751f5) */
/* WARNING: Removing unreachable block (ram,0x00015b8b0273) */
/* WARNING: Removing unreachable block (ram,0x00015b8b027f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0037c) */
/* WARNING: Removing unreachable block (ram,0x00015b7772b8) */
/* WARNING: Removing unreachable block (ram,0x00015b777333) */
/* WARNING: Removing unreachable block (ram,0x00015b777338) */
/* WARNING: Removing unreachable block (ram,0x00015b77733e) */
/* WARNING: Removing unreachable block (ram,0x00015b777343) */
/* WARNING: Removing unreachable block (ram,0x00014dd00382) */
/* WARNING: Removing unreachable block (ram,0x00014dd00403) */
/* WARNING: Removing unreachable block (ram,0x00014dd00409) */
/* WARNING: Removing unreachable block (ram,0x00014dd0040e) */
/* WARNING: Removing unreachable block (ram,0x000162234f6f) */
/* WARNING: Removing unreachable block (ram,0x000162235083) */
/* WARNING: Removing unreachable block (ram,0x000162235089) */
/* WARNING: Removing unreachable block (ram,0x000156e34e95) */
/* WARNING: Removing unreachable block (ram,0x000156e34ee6) */
/* WARNING: Removing unreachable block (ram,0x000156e34eea) */
/* WARNING: Removing unreachable block (ram,0x00015b8b01d7) */
/* WARNING: Removing unreachable block (ram,0x00015b8b0201) */
/* WARNING: Removing unreachable block (ram,0x00015b8b025b) */
/* WARNING: Removing unreachable block (ram,0x00015b47513a) */
/* WARNING: Removing unreachable block (ram,0x00015b4751df) */
/* WARNING: Removing unreachable block (ram,0x00015b4751ea) */
/* WARNING: Removing unreachable block (ram,0x000166381cb1) */
/* WARNING: Removing unreachable block (ram,0x000166381cbc) */
/* WARNING: Removing unreachable block (ram,0x000166381cb7) */
/* WARNING: Removing unreachable block (ram,0x000166381c1d) */
/* WARNING: Removing unreachable block (ram,0x00015b259917) */
/* WARNING: Removing unreachable block (ram,0x00015b25998d) */
/* WARNING: Removing unreachable block (ram,0x00015b259992) */
/* WARNING: Removing unreachable block (ram,0x00015b259998) */
/* WARNING: Removing unreachable block (ram,0x00015b25999d) */
/* WARNING: Removing unreachable block (ram,0x000166381c0d) */
/* WARNING: Removing unreachable block (ram,0x00014dd001c7) */
/* WARNING: Removing unreachable block (ram,0x00014dd001d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd001da) */

undefined8 FUN_14dd000b0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_R12;
  
  uVar2 = FUN_160c19e6c();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  if (*(longlong *)(unaff_R12 + -0x48) < 0) {
    uVar3 = FUN_166381b89();
    return uVar3;
  }
  uVar3 = FUN_162477ae2(~(uVar1 & uVar2) & ((-1 - (uVar1 & uVar2)) + uVar2) - ~uVar1,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ uVar2);
  return uVar3;
}



// FUNCTION 14dd00256 FUN_14dd00256 body=298 status=ok
// SIG undefined FUN_14dd00256(void)

/* WARNING: Removing unreachable block (ram,0x000156e34f2f) */
/* WARNING: Removing unreachable block (ram,0x000156e34f29) */
/* WARNING: Removing unreachable block (ram,0x000156e34f34) */
/* WARNING: Removing unreachable block (ram,0x00015b4751ea) */
/* WARNING: Removing unreachable block (ram,0x00014dd0037c) */
/* WARNING: Removing unreachable block (ram,0x00015b7772b8) */
/* WARNING: Removing unreachable block (ram,0x00015b777333) */
/* WARNING: Removing unreachable block (ram,0x00015b777338) */
/* WARNING: Removing unreachable block (ram,0x00015b77733e) */
/* WARNING: Removing unreachable block (ram,0x00015b777343) */
/* WARNING: Removing unreachable block (ram,0x00014dd00382) */
/* WARNING: Removing unreachable block (ram,0x00014dd00403) */
/* WARNING: Removing unreachable block (ram,0x00014dd00409) */
/* WARNING: Removing unreachable block (ram,0x00014dd0040e) */
/* WARNING: Removing unreachable block (ram,0x000162234f6f) */
/* WARNING: Removing unreachable block (ram,0x000156e34e95) */
/* WARNING: Removing unreachable block (ram,0x000156e34ee6) */
/* WARNING: Removing unreachable block (ram,0x000156e34eea) */
/* WARNING: Removing unreachable block (ram,0x00015b8b01d7) */
/* WARNING: Removing unreachable block (ram,0x00015b8b0201) */
/* WARNING: Removing unreachable block (ram,0x00015b8b025b) */
/* WARNING: Removing unreachable block (ram,0x00015b8b0273) */
/* WARNING: Removing unreachable block (ram,0x00015b8b027f) */
/* WARNING: Removing unreachable block (ram,0x00015b47513a) */
/* WARNING: Removing unreachable block (ram,0x00015b4751df) */
/* WARNING: Removing unreachable block (ram,0x00015b4751e4) */
/* WARNING: Removing unreachable block (ram,0x00015b4751f5) */
/* WARNING: Removing unreachable block (ram,0x000162235083) */
/* WARNING: Removing unreachable block (ram,0x000162235089) */

undefined8 FUN_14dd00256(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  
  FUN_14d843256(param_1,in_stack_00000008,
                ~(0xffffffffffffffff - ((~(~param_1 & local_res20) + local_res20) - param_1) |
                 ~((~(0xffffffffffffffff - local_res20 & param_1) + param_1) -
                  ~(0xffffffffffffffff - local_res20))));
  uVar1 = FUN_15b7772b8();
  return uVar1;
}



// FUNCTION 14dd00382 FUN_14dd00382 body=140 status=ok
// SIG undefined FUN_14dd00382(void)

/* WARNING: Removing unreachable block (ram,0x00015b8b0273) */
/* WARNING: Removing unreachable block (ram,0x00015b8b027f) */
/* WARNING: Removing unreachable block (ram,0x00015b4751ea) */
/* WARNING: Removing unreachable block (ram,0x00015b4751e4) */
/* WARNING: Removing unreachable block (ram,0x00015b4751f5) */
/* WARNING: Removing unreachable block (ram,0x000156e34f2f) */
/* WARNING: Removing unreachable block (ram,0x000156e34f29) */
/* WARNING: Removing unreachable block (ram,0x000156e34f34) */
/* WARNING: Removing unreachable block (ram,0x000162235083) */
/* WARNING: Removing unreachable block (ram,0x000162235089) */
/* WARNING: Removing unreachable block (ram,0x00014dd0040e) */
/* WARNING: Removing unreachable block (ram,0x000156e34ee6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd00382(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x30) < 0) {
    FUN_16646f11e();
    uVar1 = FUN_1654bf60e();
    return uVar1;
  }
  uVar1 = FUN_162234f6f();
  return uVar1;
}



// FUNCTION 14dd0040e FUN_14dd0040e body=174 status=ok
// SIG undefined FUN_14dd0040e(void)

undefined8 FUN_14dd0040e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong in_R10;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) | 0xffffffff95141f41;
  *(ulonglong *)(in_R10 + 8) = ~(~(uVar1 & 0xffffffff95141f41) & *(ulonglong *)(in_R10 + 8));
  FUN_166165f4b(local_res10);
  return param_3;
}



// FUNCTION 14dd005d2 FUN_14dd005d2 body=108 status=ok
// SIG undefined FUN_14dd005d2(void)

void FUN_14dd005d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dd0073d FUN_14dd0073d body=294 status=ok
// SIG undefined FUN_14dd0073d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd007d2) */
/* WARNING: Removing unreachable block (ram,0x00014dd007d8) */
/* WARNING: Removing unreachable block (ram,0x00014dd007e1) */
/* WARNING: Removing unreachable block (ram,0x00014dd007e7) */
/* WARNING: Removing unreachable block (ram,0x00014dd00825) */
/* WARNING: Removing unreachable block (ram,0x00014dd00837) */

void FUN_14dd0073d(void)

{
  return;
}



// FUNCTION 14dd00874 FUN_14dd00874 body=160 status=ok
// SIG undefined FUN_14dd00874(void)

void FUN_14dd00874(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  uVar1 = local_res20 ^ in_RAX;
  puVar2 = (ulonglong *)~(in_stack_00000028 & in_RAX | ~(in_stack_00000028 | in_RAX));
  bVar12 = (uVar1 & 0x4000) != 0;
  bVar11 = (uVar1 & 0x800) != 0;
  bVar10 = (uVar1 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar1 & 0x80) != 0;
  bVar7 = (uVar1 & 0x40) != 0;
  bVar6 = (uVar1 & 0x10) != 0;
  bVar5 = (uVar1 & 4) != 0;
  bVar4 = (uVar1 & 1) != 0;
  bVar16 = (uVar1 & 0x200000) != 0;
  bVar13 = (uVar1 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  puVar2[-1] = in_R9;
  puVar2[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *puVar2 = 0x4c676e;
  *puVar2 = *puVar2 ^ 0x2c530f4;
  puVar2[-2] = unaff_RBX;
  puVar2[-3] = unaff_RBX;
  puVar2[-2] = (ulonglong)&LAB_14dd00916;
  FUN_161436967();
  return;
}



// FUNCTION 14dd00be5 FUN_14dd00be5 body=124 status=ok
// SIG undefined FUN_14dd00be5(void)

void FUN_14dd00be5(void)

{
  return;
}



// FUNCTION 14dd00c63 FUN_14dd00c63 body=143 status=ok
// SIG undefined FUN_14dd00c63(void)

void FUN_14dd00c63(void)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  longlong unaff_R12;
  
  FUN_1573bc71b(-~in_RAX - (~in_R10 + 2),FUN_1573bc71b,*(undefined8 *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14dd00cf2 FUN_14dd00cf2 body=156 status=ok
// SIG undefined FUN_14dd00cf2(void)

void FUN_14dd00cf2(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RBX;
  
  FUN_14d88fb55(param_1,0xfffffffffd8dcb4c,unaff_RBX + (param_3 & param_1) * -2);
  return;
}



// FUNCTION 14dd00d8e FUN_14dd00d8e body=143 status=ok
// SIG undefined FUN_14dd00d8e(void)

void FUN_14dd00d8e(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_161d158fc(param_1,local_res8,FUN_161d158fc);
  return;
}



// FUNCTION 14dd0126c FUN_14dd0126c body=19 status=ok
// SIG undefined FUN_14dd0126c(void)

void FUN_14dd0126c(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d7a9e5a(param_1,local_res8);
  return;
}



// FUNCTION 14dd01446 FUN_14dd01446 body=145 status=ok
// SIG undefined FUN_14dd01446(void)

/* WARNING: Removing unreachable block (ram,0x00014dd014d7) */

undefined8 FUN_14dd01446(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd014d7 FUN_14dd014d7 body=124 status=ok
// SIG undefined FUN_14dd014d7(void)

void FUN_14dd014d7(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong local_res8 [4];
  
  uVar1 = ~param_1 | local_res8[0];
  local_res8[0] = ~param_1 & (local_res8[0] ^ 0xffffffffffffffff) | param_1;
  FUN_1613b866b(param_1,local_res8,uVar1);
  return;
}



// FUNCTION 14dd01554 FUN_14dd01554 body=190 status=ok
// SIG undefined FUN_14dd01554(void)

/* WARNING: Removing unreachable block (ram,0x00014dd015bf) */

void FUN_14dd01554(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  FUN_1626f7a57(param_1,FUN_1626f7a57,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                unaff_retaddr + param_1 + (param_4 & param_1) * -2);
  return;
}



// FUNCTION 14dd01613 FUN_14dd01613 body=128 status=ok
// SIG undefined FUN_14dd01613(void)

void FUN_14dd01613(undefined1 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char in_AL;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar3;
  undefined8 local_res8;
  ulonglong local_res10;
  longlong local_res18;
  
                    /* WARNING: Read-only address (ram,0x00014d7c41d6) is written */
  LOCK();
  uVar2 = param_1;
  if (in_AL != '\0') {
    uVar2 = uRam000000014d7c41d6;
  }
  uRam000000014d7c41d6 = uVar2;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined4 *)(local_res18 + -0x18) = 0xe30980f;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x100) != 0) * 0x100 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  uVar3 = *(ulonglong *)(local_res18 + -0x28);
  lVar1 = *(longlong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  uVar3 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(ulonglong *)(local_res18 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res18 + -8) = lVar1 + -0xa2e54ab;
  *(undefined8 *)(local_res18 + -0x28cf) = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x28d7) = *(undefined8 *)(local_res18 + -0x10);
  *(undefined **)(local_res18 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd016b2 FUN_14dd016b2 body=189 status=ok
// SIG undefined FUN_14dd016b2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd01749) */
/* WARNING: Removing unreachable block (ram,0x00014dd01743) */
/* WARNING: Removing unreachable block (ram,0x00014dd0174e) */
/* WARNING: Removing unreachable block (ram,0x00016666aaa0) */

ulonglong FUN_14dd016b2(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dd017cd FUN_14dd017cd body=176 status=ok
// SIG undefined FUN_14dd017cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd01873) */

void FUN_14dd017cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  undefined8 in_stack_00000008;
  undefined2 local_res20;
  
  local_res20 = ~(local_res20 & (ushort)in_RAX) & (local_res20 | (ushort)in_RAX);
  if (((~in_RAX | param_5) & (~param_5 + in_RAX) - (~param_5 & in_RAX)) == 0) {
    FUN_14df85fd8();
    return;
  }
  FUN_1572ff09f(in_stack_00000008,param_2,-~local_res20 - (~(0xfeff - ~(~local_res20 & 0x100)) + 2))
  ;
  return;
}



// FUNCTION 14dd01a32 FUN_14dd01a32 body=92 status=ok
// SIG undefined FUN_14dd01a32(void)

void FUN_14dd01a32(ushort *param_1)

{
  code *pcVar1;
  undefined8 local_res10;
  undefined8 *in_stack_00000028;
  
  *param_1 = ~*param_1;
  *param_1 = *param_1 | 0x100;
  *param_1 = *param_1 ^ 0xffff;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res10);
  *in_stack_00000028 = 0x6709482;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd01be1 FUN_14dd01be1 body=31 status=ok
// SIG undefined FUN_14dd01be1(void)

void FUN_14dd01be1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14de197bd(FUN_14de197bd,param_2,param_3,0x1d059d8);
  return;
}



// FUNCTION 14dd01e52 FUN_14dd01e52 body=148 status=ok
// SIG undefined FUN_14dd01e52(void)

/* WARNING: Removing unreachable block (ram,0x00014dd01ee2) */

void FUN_14dd01e52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165d88b29(FUN_165d88b29,param_2,param_3);
  return;
}



// FUNCTION 14dd01ee8 FUN_14dd01ee8 body=306 status=ok
// SIG undefined FUN_14dd01ee8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd01f87) */
/* WARNING: Removing unreachable block (ram,0x000160da1b9a) */

void FUN_14dd01ee8(ulonglong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong *unaff_R15;
  undefined8 unaff_retaddr;
  short local_res18;
  ulonglong local_res20;
  
  uVar2 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | param_1;
  *unaff_R15 = ~((~param_1 | uVar2) & *unaff_R15);
  uVar2 = 0xffffffffffffffff - (local_res20 & param_1) & (local_res20 | param_1);
  if (local_res18 != (short)param_1) {
    puVar1 = (undefined8 *)(uVar2 - 8);
    *puVar1 = unaff_retaddr;
    *(undefined8 *)(uVar2 - 0x10) = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(uVar2 - 0x18) = in_R11;
    lVar3 = *(longlong *)(uVar2 - 8);
    *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) & 0x1616921ca;
    *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) << 1;
    *(undefined1 **)(uVar2 - 8) = &LAB_1616921ca + (lVar3 - *(longlong *)(uVar2 - 8));
    *(undefined4 *)(uVar2 - 0x18) = 0x72dd4693;
    *(undefined4 *)(uVar2 - 0x14) = 0;
    *(undefined8 *)(uVar2 - 0x10) = unaff_RDI;
    *(undefined8 *)(uVar2 - 0x18) = unaff_RDI;
    *(undefined8 *)(uVar2 - 0x20) = unaff_R13;
    *(undefined8 *)(uVar2 - 0x28) = in_RAX;
    *(undefined4 *)(uVar2 - 0x28) = 0xe5e00c06;
    *(undefined4 *)(uVar2 - 0x24) = 0xffffffff;
    *(code **)(uVar2 + *(longlong *)(uVar2 - 0x28) + 0x1a1ff3ea) = thunk_FUN_15b642ca5;
    return;
  }
  FUN_160da1afc();
  return;
}



// FUNCTION 14dd02390 FUN_14dd02390 body=323 status=ok
// SIG undefined FUN_14dd02390(void)

/* WARNING: Removing unreachable block (ram,0x00014dedf85f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0243e) */
/* WARNING: Removing unreachable block (ram,0x00014dd0244d) */
/* WARNING: Removing unreachable block (ram,0x000157068f1b) */

void FUN_14dd02390(void)

{
  ulonglong uVar1;
  ulonglong *in_R10;
  
  uVar1 = *in_R10;
  *in_R10 = *in_R10 | 0xffffffff9686ad78;
  *in_R10 = ~(~(uVar1 & 0xffffffff9686ad78) & *in_R10);
  FUN_157068f1b();
  return;
}



// FUNCTION 14dd024d5 FUN_14dd024d5 body=380 status=ok
// SIG undefined FUN_14dd024d5(void)

/* WARNING: Removing unreachable block (ram,0x00014dedf85f) */

void FUN_14dd024d5(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16636d08d(0x34c65550,0xc3360cc,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dd026d1 FUN_14dd026d1 body=124 status=ok
// SIG undefined FUN_14dd026d1(void)

void FUN_14dd026d1(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_AL;
  ulonglong unaff_RBP;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  LOCK();
  UNLOCK();
  LAB_14d7be607 = in_AL;
  *(undefined8 *)((~(local_res20 & param_1) & (~(unaff_RBP & param_1) + param_1) - ~unaff_RBP) - 8)
       = 0x7329364;
  FUN_165c7153c(uStackX_10,param_2,param_3,param_4);
  return;
}


