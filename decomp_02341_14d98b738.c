// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d98b738 FUN_14d98b738 body=138 status=ok
// SIG undefined FUN_14d98b738(void)

void FUN_14d98b738(void)

{
  FUN_16284a649();
  FUN_16472553b();
  return;
}



// FUNCTION 14d98b7c2 FUN_14d98b7c2 body=174 status=ok
// SIG undefined FUN_14d98b7c2(void)

void FUN_14d98b7c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_16472553b(param_1,local_res8,0xa3beea9,param_4);
  return;
}



// FUNCTION 14d98b914 FUN_14d98b914 body=89 status=ok
// SIG undefined FUN_14d98b914(void)

undefined8 FUN_14d98b914(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d98ba6b FUN_14d98ba6b body=157 status=ok
// SIG undefined FUN_14d98ba6b(void)

void FUN_14d98ba6b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  FUN_1655dee9a(*(undefined8 *)(unaff_R13 + -0x78),unaff_retaddr,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                 (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)));
  FUN_14d7a53de();
  return;
}



// FUNCTION 14d98bbbd FUN_14d98bbbd body=85 status=ok
// SIG undefined FUN_14d98bbbd(void)

void FUN_14d98bbbd(HMODULE param_1,LPCSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d98bc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14d98bd1b FUN_14d98bd1b body=150 status=ok
// SIG undefined FUN_14d98bd1b(void)

void FUN_14d98bd1b(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1669ea32f(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,FUN_1669ea32f);
  return;
}



// FUNCTION 14d98be3e FUN_14d98be3e body=47 status=ok
// SIG undefined FUN_14d98be3e(void)

void FUN_14d98be3e(void)

{
  return;
}



// FUNCTION 14d98bed0 FUN_14d98bed0 body=307 status=ok
// SIG undefined FUN_14d98bed0(void)

/* WARNING: Removing unreachable block (ram,0x00014d98bfa3) */
/* WARNING: Removing unreachable block (ram,0x00014d98bf65) */
/* WARNING: Removing unreachable block (ram,0x00014d98bfa6) */
/* WARNING: Removing unreachable block (ram,0x00014d98bf55) */

void FUN_14d98bed0(void)

{
  FUN_1621ab6eb();
  return;
}



// FUNCTION 14d98c007 FUN_14d98c007 body=301 status=ok
// SIG undefined FUN_14d98c007(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c09d) */

void FUN_14d98c007(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_retaddr;
  undefined8 local_res20;
  
  if (local_res20 == param_1) {
    FUN_14dd8eb66(~(unaff_retaddr & param_1) & (unaff_retaddr | param_1),param_2,param_3,param_4);
    return;
  }
  FUN_15af8670e();
  return;
}



// FUNCTION 14d98c139 FUN_14d98c139 body=161 status=ok
// SIG undefined FUN_14d98c139(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c41d) */
/* WARNING: Removing unreachable block (ram,0x00014d98c423) */
/* WARNING: Removing unreachable block (ram,0x00014d98c428) */
/* WARNING: Removing unreachable block (ram,0x00014d98c4b4) */
/* WARNING: Removing unreachable block (ram,0x00014d98c4ba) */
/* WARNING: Removing unreachable block (ram,0x000165c01e61) */
/* WARNING: Removing unreachable block (ram,0x00014d98c1d5) */
/* WARNING: Removing unreachable block (ram,0x00014d98c1db) */
/* WARNING: Removing unreachable block (ram,0x00014d98c2ef) */
/* WARNING: Removing unreachable block (ram,0x00014d98c412) */
/* WARNING: Removing unreachable block (ram,0x00014d7a775c) */

void FUN_14d98c139(void)

{
  longlong in_R9;
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_R15 + 8) = ~(in_R9 + 1U);
  FUN_1617b1d07();
  return;
}



// FUNCTION 14d98c1db FUN_14d98c1db body=586 status=ok
// SIG undefined FUN_14d98c1db(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c41d) */
/* WARNING: Removing unreachable block (ram,0x00014d98c423) */
/* WARNING: Removing unreachable block (ram,0x00014d98c428) */
/* WARNING: Removing unreachable block (ram,0x00014d98c4b4) */
/* WARNING: Removing unreachable block (ram,0x00014d98c4ba) */
/* WARNING: Removing unreachable block (ram,0x000165c01e61) */

void FUN_14d98c1db(ulonglong param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong in_R10;
  undefined8 in_stack_00000008;
  
  lVar1 = (*(ulonglong *)(unaff_RDI + -0x68) & param_1) << 1;
  FUN_1622535b6();
  FUN_160e08dc1(param_1,lVar1);
  FUN_14e1c9eac();
  *param_4 = ~*param_4;
  *param_4 = ~*param_4;
  *param_4 = *param_4 & 0xfeff;
  *param_4 = ~*param_4;
  *param_4 = ~*param_4;
  *(ulonglong *)(in_R10 + -8) = param_1;
  *(undefined8 *)(in_R10 + -0x10) = in_stack_00000008;
  *(undefined8 *)(in_R10 + -0x18) = in_stack_00000008;
  *(undefined **)(in_R10 + -0x20) = &DAT_160cd839a;
  FUN_160cd8310();
  return;
}



// FUNCTION 14d98c428 FUN_14d98c428 body=146 status=ok
// SIG undefined FUN_14d98c428(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c4b4) */
/* WARNING: Removing unreachable block (ram,0x00014d98c4ba) */

void FUN_14d98c428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_165de475b(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d98c4ba FUN_14d98c4ba body=10 status=ok
// SIG undefined FUN_14d98c4ba(void)

void FUN_14d98c4ba(void)

{
  return;
}



// FUNCTION 14d98c559 thunk_FUN_14d98c55f body=5 status=ok
// SIG undefined thunk_FUN_14d98c55f(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c5f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5a7ae) */

undefined8 thunk_FUN_14d98c55f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined1 uStackX_8;
  undefined2 uStackX_18;
  undefined6 uStackX_1a;
  undefined8 uStackX_20;
  
                    /* WARNING: Read-only address (ram,0x00014d7aad8c) is written */
  LOCK();
  if (uStackX_8 == '\0') {
    uRam000000014d7aad8c = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(uStackX_20 + -8) = in_R11;
  *(undefined8 *)(uStackX_20 + -0x10) = in_R11;
  *(undefined4 *)(uStackX_20 + -0x18) = 0x904f090;
  *(undefined8 *)(uStackX_20 + -0x20) = unaff_RBP;
  *(ulonglong *)(uStackX_20 + -0x28) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 | (ulonglong)(uStackX_8 < '\0') * 0x80 |
       (ulonglong)(uStackX_8 == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uStackX_8) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  uVar1 = FUN_14dd5a7ae(param_1,unaff_retaddr);
  return uVar1;
}



// FUNCTION 14d98c55f FUN_14d98c55f body=293 status=ok
// SIG undefined FUN_14d98c55f(void)

/* WARNING: Removing unreachable block (ram,0x00014d98c5f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd5a7ae) */

undefined8 FUN_14d98c55f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined1 uStackX_8;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
                    /* WARNING: Read-only address (ram,0x00014d7aad8c) is written */
  LOCK();
  if (uStackX_8 == '\0') {
    uRam000000014d7aad8c = (undefined1)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined4 *)(local_res20 + -0x18) = 0x904f090;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 | (ulonglong)(uStackX_8 < '\0') * 0x80 |
       (ulonglong)(uStackX_8 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uStackX_8) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  uVar1 = FUN_14dd5a7ae(param_1,unaff_retaddr);
  return uVar1;
}



// FUNCTION 14d98c72c FUN_14d98c72c body=85 status=ok
// SIG undefined FUN_14d98c72c(void)

void FUN_14d98c72c(void)

{
  return;
}



// FUNCTION 14d98c7c1 FUN_14d98c7c1 body=135 status=ok
// SIG undefined FUN_14d98c7c1(void)

void FUN_14d98c7c1(void)

{
  FUN_156a3aa3b();
  return;
}



// FUNCTION 14d98ca0c FUN_14d98ca0c body=79 status=ok
// SIG undefined FUN_14d98ca0c(void)

void FUN_14d98ca0c(longlong param_1,PSP_DEVINFO_DATA param_2,DEVPROPKEY *param_3,
                  DEVPROPTYPE *param_4,longlong param_5)

{
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 uStackX_18;
  
  *(longlong *)(unaff_R12 + 0x10) = -1 - (param_1 + *(longlong *)(unaff_R12 + 0x10) + 1);
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -8) = 0;
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x14d98ca74;
                    /* WARNING: Could not recover jumptable at 0x00014d98ca56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetupDiGetDevicePropertyW
            (uStackX_18,param_2,param_3,param_4,*(PBYTE *)(param_5 + 0x20),
             *(DWORD *)(param_5 + 0x28),*(PDWORD *)(param_5 + 0x30),*(DWORD *)(param_5 + 0x38));
  return;
}



// FUNCTION 14d98cab3 FUN_14d98cab3 body=349 status=ok
// SIG undefined FUN_14d98cab3(void)

/* WARNING: Removing unreachable block (ram,0x00014d98cc06) */
/* WARNING: Removing unreachable block (ram,0x00014d98cbe4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d98cab3(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b296685(param_1,param_2,unaff_retaddr);
  FUN_16618be40();
  return;
}



// FUNCTION 14d98cc12 FUN_14d98cc12 body=176 status=ok
// SIG undefined FUN_14d98cc12(void)

void FUN_14d98cc12(undefined8 param_1)

{
  longlong unaff_RBP;
  undefined8 local_res18;
  
  FUN_14d9194b8(param_1,local_res18 + unaff_RBP);
  return;
}



// FUNCTION 14d98cdeb FUN_14d98cdeb body=163 status=ok
// SIG undefined FUN_14d98cdeb(void)

void FUN_14d98cdeb(undefined8 param_1)

{
  FUN_161aa1965(param_1,FUN_161aa1965);
  return;
}



// FUNCTION 14d98ce92 FUN_14d98ce92 body=145 status=ok
// SIG undefined FUN_14d98ce92(void)

/* WARNING: Instruction at (ram,0x00014d98ced1) overlaps instruction at (ram,0x00014d98ced0)
    */
/* WARNING: Removing unreachable block (ram,0x00014d98ced0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d98cf2a */
/* WARNING: Removing unreachable block (ram,0x00014d98cf22) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d98ce92(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  ulonglong in_stack_fffffffffffffff8;
  
  if ((in_stack_fffffffffffffff8 & 0x80) == 0) {
    FUN_166717be0();
    return;
  }
  FUN_164a664b3(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d98cf24 FUN_14d98cf24 body=136 status=ok
// SIG undefined FUN_14d98cf24(void)

void FUN_14d98cf24(void)

{
  FUN_15b3dd7a7();
  return;
}



// FUNCTION 14d98cfac FUN_14d98cfac body=118 status=ok
// SIG undefined FUN_14d98cfac(void)

void FUN_14d98cfac(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined **)(local_res18 + -8) = &DAT_14d98d041;
  FUN_14d7a6c83();
  return;
}



// FUNCTION 14d98d16a FUN_14d98d16a body=273 status=ok
// SIG undefined FUN_14d98d16a(void)

void FUN_14d98d16a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = ~*(ulonglong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = *(ulonglong *)(unaff_R14 + 8) | param_4;
  *(ulonglong *)(unaff_R14 + 8) = ~((~param_4 | uVar1) & *(ulonglong *)(unaff_R14 + 8));
  FUN_16104a98d();
  FUN_1651fcf9b(param_1,FUN_1651fcf9b,param_2);
  return;
}



// FUNCTION 14d98d31e FUN_14d98d31e body=223 status=ok
// SIG undefined FUN_14d98d31e(void)

void FUN_14d98d31e(undefined8 param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 in_RAX;
  longlong in_R11;
  undefined8 unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar3;
  uint unaff_retaddr;
  uint local_res8;
  
  uVar2 = local_res8 ^ 0x767d3575 - (~unaff_retaddr + 2) ^ 0xb86a872;
  plVar1 = (longlong *)(&stack0xfffffffff322e921 + uVar2);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_R11;
  *(undefined8 *)(&stack0xfffffffff322e919 + uVar2) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff322e919 + uVar2) = 0x43ebf4dc;
  *(undefined4 *)(&stack0xfffffffff322e91d + uVar2) = 0;
  *(ulonglong *)(&stack0xfffffffff322e911 + uVar2) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  uVar3 = *(ulonglong *)(&stack0xfffffffff322e911 + uVar2);
  *(undefined8 *)(&stack0xfffffffff322e911 + uVar2) = param_1;
  *(undefined8 *)(&stack0xfffffffff322e909 + uVar2) = param_1;
  *(undefined8 *)(&stack0xfffffffff322e901 + uVar2) = param_1;
  *(undefined8 *)(&stack0xfffffffff322e8f9 + uVar2) = unaff_R14;
  *(ulonglong *)(&stack0xfffffffff322e8f1 + uVar2) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(code **)(&stack0xfffffffff322e911 + uVar2) = FUN_14d98d407;
  *(undefined1 **)(&stack0xfffffffff322e909 + uVar2) = &LAB_15b8cb41f;
  return;
}



// FUNCTION 14d98d407 FUN_14d98d407 body=136 status=ok
// SIG undefined FUN_14d98d407(void)

void FUN_14d98d407(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = (~unaff_RSI | (param_2 ^ 0xffffffffffffffff) & 0x6c6f9009) +
          *(longlong *)(unaff_RDI + -0x68);
  FUN_1578a0606(param_1,uVar1 + param_1 + (uVar1 & param_1) * -2);
  return;
}



// FUNCTION 14d98d492 FUN_14d98d492 body=2 status=ok
// SIG undefined FUN_14d98d492(void)

void FUN_14d98d492(void)

{
  return;
}



// FUNCTION 14d98dbc0 FUN_14d98dbc0 body=158 status=ok
// SIG undefined FUN_14d98dbc0(void)

void FUN_14d98dbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = local_res18 ^ unaff_R15;
  (*(code *)&LAB_16615a05e)(param_1,0xf21f,&local_res18,param_4,in_stack_00000020 ^ unaff_R15);
  return;
}



// FUNCTION 14d98dc67 thunk_FUN_14d98dc6d body=5 status=ok
// SIG undefined thunk_FUN_14d98dc6d(void)

/* WARNING: Removing unreachable block (ram,0x00014d98dcd1) */

void thunk_FUN_14d98dc6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dfa554f(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d98dc6d FUN_14d98dc6d body=122 status=ok
// SIG undefined FUN_14d98dc6d(void)

/* WARNING: Removing unreachable block (ram,0x00014d98dcd1) */

void FUN_14d98dc6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dfa554f(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d98ddf3 FUN_14d98ddf3 body=314 status=ok
// SIG undefined FUN_14d98ddf3(void)

ulonglong FUN_14d98ddf3(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  
  uVar1 = FUN_14e0f337c();
  return ~(unaff_RBP | ~uVar1 | param_1) + 1 + (~uVar1 | param_1) + unaff_RBP ^ 0xffffffffffffffff;
}



// FUNCTION 14d98dfd2 FUN_14d98dfd2 body=288 status=ok
// SIG undefined FUN_14d98dfd2(void)

void FUN_14d98dfd2(ulonglong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_161a0b9b3(param_1,unaff_RBX + param_1 + (unaff_RBX & param_1) * -2);
  FUN_15b292f40(param_1);
  return;
}



// FUNCTION 14d98e0f4 FUN_14d98e0f4 body=300 status=ok
// SIG undefined FUN_14d98e0f4(void)

void FUN_14d98e0f4(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160ef28bf(*(undefined8 *)(unaff_R13 + -0x78),param_2,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d98e227 FUN_14d98e227 body=156 status=ok
// SIG undefined FUN_14d98e227(void)

undefined8
FUN_14d98e227(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  longlong lVar1;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(&stack0x03701772 + param_1) + unaff_R15 + (param_5 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = local_res8;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = 0;
  *(longlong *)(lVar1 + -8) = (longlong)(&LAB_165474082 + *(longlong *)(lVar1 + -8));
  *(undefined1 **)(lVar1 + -0x18) = &LAB_16547401f;
  return in_RAX;
}



// FUNCTION 14d98e352 FUN_14d98e352 body=437 status=ok
// SIG undefined FUN_14d98e352(void)

void FUN_14d98e352(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162bfeaf0(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d98e499 FUN_14d98e499 body=130 status=ok
// SIG undefined FUN_14d98e499(void)

void FUN_14d98e499(ulonglong param_1)

{
  ulonglong unaff_R15;
  
  (*(code *)&LAB_1627412bf)(param_1 & unaff_R15,param_1 + unaff_R15);
  return;
}



// FUNCTION 14d98e7b1 FUN_14d98e7b1 body=301 status=ok
// SIG undefined FUN_14d98e7b1(void)

void FUN_14d98e7b1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  longlong in_R10;
  longlong unaff_R12;
  ulonglong uVar3;
  longlong local_res8;
  longlong local_res18;
  
  lVar1 = in_R10 + local_res18 * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = param_4;
  *(undefined8 *)(lVar1 + -0x18) = param_4;
  *(undefined1 **)(lVar1 + -0x20) = &LAB_1666e5748;
  *(undefined8 *)(lVar1 + -0x28) = in_RAX;
  *(undefined8 *)(lVar1 + -0x30) = unaff_RDI;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x38) = 0x14d98e846;
  uVar2 = FUN_1666e56e2(param_1);
  uVar3 = -(local_res8 - *(longlong *)(unaff_R12 + -0x88)) ^ uVar2;
  *(ulonglong *)(lVar1 + -0x38) =
       (0xffffffffffffffff - uVar2 | *(ulonglong *)(unaff_R12 + -0x60)) + uVar2 + 1;
  *(ulonglong *)(lVar1 + -0x40) = uVar3;
  *(ulonglong *)(lVar1 + -0x48) = uVar3;
  *(undefined1 **)(lVar1 + -0x40) = &LAB_14d98e8e3;
  FUN_1619a01a3(FUN_1619a01a3);
  return;
}



// FUNCTION 14d98ea0b FUN_14d98ea0b body=119 status=ok
// SIG undefined FUN_14d98ea0b(void)

void FUN_14d98ea0b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6)

{
  undefined8 uVar1;
  ushort unaff_SI;
  undefined8 unaff_RDI;
  short *in_R11;
  ushort unaff_R13W;
  ulonglong uVar2;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  *in_R11 = (~unaff_SI | ~unaff_R13W) - 0x100;
  _fxsave(param_6);
  *(undefined8 *)(param_6 + -8) = unaff_RDI;
  *(undefined8 *)(param_6 + -0x10) = unaff_RDI;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)((param_5 & 0x80) != 0) * 0x80 |
       (ulonglong)((param_5 & 0x40) != 0) * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 |
       (ulonglong)((param_5 & 4) != 0) * 4 | (ulonglong)((param_5 & 1) != 0) |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -0x20) = param_3;
  uVar1 = *(undefined8 *)(param_6 + -0x20);
  uVar2 = *(ulonglong *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -0x20) = uStackX_20;
  FUN_1572ae0b8(param_1,param_2,uVar1,uStackX_10);
  return;
}



// FUNCTION 14d98ea84 FUN_14d98ea84 body=138 status=ok
// SIG undefined FUN_14d98ea84(void)

/* WARNING: Removing unreachable block (ram,0x00014d98eabd) */

void FUN_14d98ea84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16643f7fd(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d98ec74 FUN_14d98ec74 body=51 status=ok
// SIG undefined FUN_14d98ec74(void)

ulonglong FUN_14d98ec74(void)

{
  longlong in_RAX;
  ulonglong unaff_R15;
  
  return ~unaff_R15 | 0xffffffffffffffffU - in_RAX;
}



// FUNCTION 14d98ed30 FUN_14d98ed30 body=146 status=ok
// SIG undefined FUN_14d98ed30(void)

void FUN_14d98ed30(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
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
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res18 ^ param_1;
  puVar2 = (undefined8 *)(local_res20 ^ param_1);
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
  (*pcVar3)(local_res10 ^ param_1,param_2,param_3,local_res8);
  puVar2[-1] = unaff_RSI;
  *puVar2 = param_2;
  puVar2[-1] = param_2;
  puVar2[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  puVar2[-3] = ~(unaff_RDI & param_1) & (unaff_RDI | param_1);
  puVar2[-4] = unaff_R14;
  puVar2[-5] = unaff_R13;
  puVar2[-6] = unaff_R13;
  puVar2[-5] = FUN_14d98edd1;
  FUN_16471ab39();
  return;
}



// FUNCTION 14d98edd1 FUN_14d98edd1 body=370 status=ok
// SIG undefined FUN_14d98edd1(void)

/* WARNING: Removing unreachable block (ram,0x00014df2d0f0) */
/* WARNING: Removing unreachable block (ram,0x00014df2d0fb) */
/* WARNING: Removing unreachable block (ram,0x000166dbb7d1) */
/* WARNING: Removing unreachable block (ram,0x00015b6df571) */
/* WARNING: Removing unreachable block (ram,0x00015b6df577) */
/* WARNING: Removing unreachable block (ram,0x00015b6df615) */
/* WARNING: Removing unreachable block (ram,0x00015b6df61b) */
/* WARNING: Removing unreachable block (ram,0x000161dcd599) */
/* WARNING: Removing unreachable block (ram,0x000156e2963f) */
/* WARNING: Removing unreachable block (ram,0x000156e29645) */
/* WARNING: Removing unreachable block (ram,0x00014df2d0f6) */
/* WARNING: Removing unreachable block (ram,0x000156e295b5) */
/* WARNING: Removing unreachable block (ram,0x00015b3e97ec) */
/* WARNING: Removing unreachable block (ram,0x00015b6df451) */
/* WARNING: Removing unreachable block (ram,0x00015b6df4dd) */
/* WARNING: Removing unreachable block (ram,0x00014df2cfd1) */
/* WARNING: Removing unreachable block (ram,0x000156e295aa) */
/* WARNING: Removing unreachable block (ram,0x000156e295af) */
/* WARNING: Removing unreachable block (ram,0x000166dbb72c) */
/* WARNING: Removing unreachable block (ram,0x000166dbb7a8) */
/* WARNING: Removing unreachable block (ram,0x000166dbb79d) */
/* WARNING: Removing unreachable block (ram,0x00015b3e9768) */
/* WARNING: Removing unreachable block (ram,0x00015b3e97e1) */
/* WARNING: Removing unreachable block (ram,0x00015b3e97e6) */
/* WARNING: Removing unreachable block (ram,0x0001652c1b11) */
/* WARNING: Removing unreachable block (ram,0x0001652c1b89) */
/* WARNING: Removing unreachable block (ram,0x0001652c1b8f) */
/* WARNING: Removing unreachable block (ram,0x0001611c974c) */
/* WARNING: Removing unreachable block (ram,0x000166dbb7ae) */
/* WARNING: Removing unreachable block (ram,0x00015b6df4e3) */
/* WARNING: Removing unreachable block (ram,0x00014d98ee4f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14d98edd1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x98);
  if ((longlong)
      (*(ulonglong *)(unaff_R13 + -0x50) + unaff_R15 +
      (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) * -2) < 0) {
    lVar3 = FUN_14d8b2253();
    return lVar3;
  }
  FUN_1652a9f7f(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  uVar1 = *(ulonglong *)(unaff_RSI + (in_RAX ^ 0xdc3ec9b));
  return uVar1 + uVar2 + (uVar1 & uVar2) * -2;
}



// FUNCTION 14d98ee4f FUN_14d98ee4f body=162 status=ok
// SIG undefined FUN_14d98ee4f(void)

void FUN_14d98ee4f(void)

{
  FUN_16109e8a5();
  return;
}



// FUNCTION 14d98eef2 FUN_14d98eef2 body=633 status=ok
// SIG undefined FUN_14d98eef2(void)

/* WARNING: Removing unreachable block (ram,0x00014d98ef87) */
/* WARNING: Removing unreachable block (ram,0x00014d98ef8d) */
/* WARNING: Removing unreachable block (ram,0x0001649175bc) */
/* WARNING: Removing unreachable block (ram,0x000164917659) */
/* WARNING: Removing unreachable block (ram,0x00016491765f) */
/* WARNING: Removing unreachable block (ram,0x000164917694) */
/* WARNING: Removing unreachable block (ram,0x0001649176ab) */
/* WARNING: Removing unreachable block (ram,0x000165bd1cbd) */
/* WARNING: Removing unreachable block (ram,0x00014d98f028) */
/* WARNING: Removing unreachable block (ram,0x00014d98f02e) */

undefined8
FUN_14d98eef2(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,longlong param_5
             ,undefined8 param_6,ulonglong param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  longlong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  *(ulonglong *)(param_3 + 8) = in_R11 + unaff_R15 + 1;
  param_7 = param_7 ^ unaff_R15;
  *(longlong *)(param_7 - 8) = param_4 + param_5 * -2;
  *(longlong *)(param_7 - 0x10) = unaff_R13;
  plVar1 = (longlong *)(param_7 - 0x18);
  *plVar1 = unaff_R13;
  *(longlong *)(param_7 - 0x10) = *(longlong *)(param_7 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_1;
  *plVar1 = -*plVar1;
  *(undefined8 *)(param_7 - 0x20) = unaff_RSI;
  *(undefined8 *)(param_7 - 0x28) = in_RAX;
  *(undefined4 *)(param_7 - 0x28) = 0x53805c61;
  *(undefined4 *)(param_7 - 0x24) = 0;
  plVar2 = (longlong *)
           ((longlong)plVar1 + ((*(ulonglong *)(param_7 - 0x28) ^ 0x522263bf) - 0x1a23fce));
  *plVar2 = 0;
  *plVar2 = (longlong)(&LAB_165ac36b2 + *plVar2);
  uVar3 = FUN_165ac3645(*plVar1,local_res8,in_stack_00000010,local_res20);
  return uVar3;
}



// FUNCTION 14d98f0da FUN_14d98f0da body=52 status=ok
// SIG undefined FUN_14d98f0da(void)

void FUN_14d98f0da(ulonglong *param_1)

{
  ulonglong unaff_RDI;
  
  *param_1 = unaff_RDI ^ 0x151b1dc4374f7d7d;
  *(int *)param_1 = (int)(unaff_RDI ^ 0x151b1dc4374f7d7d);
  FUN_1653c0931();
  return;
}



// FUNCTION 14d98f10f FUN_14d98f10f body=99 status=ok
// SIG undefined FUN_14d98f10f(void)

void FUN_14d98f10f(void)

{
  undefined8 in_stack_00000008;
  
  FUN_166070394(in_stack_00000008,FUN_166070394);
  return;
}



// FUNCTION 14d98f1cd FUN_14d98f1cd body=312 status=ok
// SIG undefined FUN_14d98f1cd(void)

undefined8
FUN_14d98f1cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  if ((0xfffffffffffffffd < (local_res18 ^ 0xffffffffffffffff)) &&
     ((local_res18 ^ 0xffffffffffffffff) < 0xfffffffffffffffe)) {
    return in_RAX;
  }
  uVar1 = FUN_166c16e11(param_1,param_2,in_stack_00000008,param_4);
  return uVar1;
}



// FUNCTION 14d98f280 FUN_14d98f280 body=125 status=ok
// SIG undefined FUN_14d98f280(void)

void FUN_14d98f280(void)

{
  return;
}



// FUNCTION 14d98f3a8 FUN_14d98f3a8 body=156 status=ok
// SIG undefined FUN_14d98f3a8(void)

void FUN_14d98f3a8(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  uVar2 = ~((0xffffffffffffffff - in_RAX | in_stack_00000028) &
           (~in_stack_00000028 + in_RAX) - (~in_stack_00000028 & in_RAX));
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)local_res18 >> 8),DAT_14d7c142e);
  UNLOCK();
  DAT_14d7c142e = (char)local_res18;
  *(undefined8 *)(uVar2 - 8) = local_res8;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = local_res8;
  *(undefined8 *)(uVar2 - 0x18) = uVar1;
  *(undefined4 *)(uVar2 - 0x18) = 0xc1d24c9;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_161c1eeba;
  return;
}



// FUNCTION 14d98f4f5 FUN_14d98f4f5 body=894 status=ok
// SIG undefined FUN_14d98f4f5(void)

/* WARNING: Removing unreachable block (ram,0x000166ab24c5) */
/* WARNING: Removing unreachable block (ram,0x00014d98f57a) */
/* WARNING: Removing unreachable block (ram,0x00014d98f585) */
/* WARNING: Removing unreachable block (ram,0x00014d98f695) */
/* WARNING: Removing unreachable block (ram,0x00014d98f69b) */
/* WARNING: Removing unreachable block (ram,0x000166ab23b0) */
/* WARNING: Removing unreachable block (ram,0x000166ab2447) */
/* WARNING: Removing unreachable block (ram,0x000166ab244d) */
/* WARNING: Removing unreachable block (ram,0x000166ab24ca) */
/* WARNING: Removing unreachable block (ram,0x000166ab24e1) */
/* WARNING: Removing unreachable block (ram,0x000166ab24e8) */
/* WARNING: Removing unreachable block (ram,0x000166ccdca1) */
/* WARNING: Removing unreachable block (ram,0x000166ccdd2b) */
/* WARNING: Removing unreachable block (ram,0x000166ccdd30) */
/* WARNING: Removing unreachable block (ram,0x000166ccdd36) */
/* WARNING: Removing unreachable block (ram,0x00016252b6e5) */
/* WARNING: Removing unreachable block (ram,0x00014d98f580) */

undefined8 FUN_14d98f4f5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong in_stack_00000008;
  
  FUN_1663e8660(param_1,param_2,param_3);
  uVar1 = FUN_161b83736(in_stack_00000008 ^ in_RAX ^ param_1);
  return uVar1;
}



// FUNCTION 14d98f745 FUN_14d98f745 body=196 status=ok
// SIG undefined FUN_14d98f745(void)

/* WARNING: Removing unreachable block (ram,0x00014d98f7e0) */

undefined8
FUN_14d98f745(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong lVar2;
  undefined8 local_res20;
  
  lVar2 = unaff_RBP - (local_res20 | unaff_RBP);
  if (-1 < lVar2) {
    uVar1 = FUN_156f58ca4(param_1,param_2,lVar2,param_4);
    return uVar1;
  }
  uVar1 = FUN_156f58ca4(param_1,param_2,lVar2,param_4);
  return uVar1;
}



// FUNCTION 14d98f914 FUN_14d98f914 body=138 status=ok
// SIG undefined FUN_14d98f914(void)

void FUN_14d98f914(void)

{
  FUN_162820965();
  return;
}



// FUNCTION 14d98f9a7 FUN_14d98f9a7 body=146 status=ok
// SIG undefined FUN_14d98f9a7(void)

void FUN_14d98f9a7(ulonglong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_14d7fb5c2(param_1 ^ unaff_RBX);
  return;
}



// FUNCTION 14d98fbb6 FUN_14d98fbb6 body=237 status=ok
// SIG undefined FUN_14d98fbb6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd486a2) */

void FUN_14d98fbb6(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_stack_00000010;
  
  if (unaff_RSI == (ulonglong *)0x118058) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == (ulonglong *)0x118059) {
    FUN_16131bb16();
    return;
  }
  if ((unaff_RSI < (ulonglong *)0x118059) && ((ulonglong *)0x118059 < unaff_RSI)) {
    uVar1 = *unaff_RSI;
    uVar2 = *unaff_RSI;
    *unaff_RSI = ~*unaff_RSI;
    *unaff_RSI = *unaff_RSI | in_RAX;
    *unaff_RSI = ~((((~(param_2 & uVar1) + uVar2) - ~param_2 & *unaff_RSI) - *unaff_RSI) +
                  *unaff_RSI);
    FUN_1571a7218(param_1,in_stack_00000010,param_3);
    return;
  }
  if (unaff_RSI == (ulonglong *)0x11805a) {
    return;
  }
  if (unaff_RSI != (ulonglong *)0x11805b) {
    if (unaff_RSI == (ulonglong *)0x11805c) {
      return;
    }
    FUN_160f71f3d();
    if (*(longlong *)(unaff_RDI + -0x38) == -1) {
      FUN_161b6ee57();
      FUN_156af9892();
      return;
    }
    FUN_164f5ca5c();
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14d98fca3 FUN_14d98fca3 body=171 status=ok
// SIG undefined FUN_14d98fca3(void)

void FUN_14d98fca3(void)

{
  undefined8 in_R11;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = in_R11;
  FUN_14da9e4e9();
  return;
}



// FUNCTION 14d98fd4e FUN_14d98fd4e body=148 status=ok
// SIG undefined FUN_14d98fd4e(void)

void FUN_14d98fd4e(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *in_R10;
  
  uVar1 = *in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = *in_R10 | param_1;
  *in_R10 = ~((~param_1 | uVar1) & *in_R10);
  FUN_1613a35dd(param_1,param_1);
  return;
}



// FUNCTION 14d98fde4 FUN_14d98fde4 body=121 status=ok
// SIG undefined FUN_14d98fde4(void)

void FUN_14d98fde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x14d8871f4)(in_stack_00000008,param_2,param_3);
  return;
}



// FUNCTION 14d98ff80 FUN_14d98ff80 body=465 status=ok
// SIG undefined FUN_14d98ff80(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016292f972) */
/* WARNING: Removing unreachable block (ram,0x00016292f98c) */
/* WARNING: Removing unreachable block (ram,0x00014d990140) */
/* WARNING: Removing unreachable block (ram,0x00014d990146) */
/* WARNING: Removing unreachable block (ram,0x00016292f991) */
/* WARNING: Removing unreachable block (ram,0x00014d990022) */
/* WARNING: Removing unreachable block (ram,0x00014d9900aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9900b0) */
/* WARNING: Removing unreachable block (ram,0x00014d9900a5) */
/* WARNING: Removing unreachable block (ram,0x00014e0221c1) */
/* WARNING: Removing unreachable block (ram,0x00014d9900b5) */
/* WARNING: Removing unreachable block (ram,0x00014d9900b9) */
/* WARNING: Removing unreachable block (ram,0x00014d9900bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9900fd) */
/* WARNING: Removing unreachable block (ram,0x00014d9900e8) */
/* WARNING: Removing unreachable block (ram,0x00014d990102) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d98ff80(ushort param_1)

{
  ushort uVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  ushort *in_R10;
  undefined8 local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar1 = *in_R10;
  *in_R10 = 0;
  *in_R10 = *in_R10 - ((~param_1 | uVar1) - 0x100);
  *in_R10 = -*in_R10;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7c095a) is written */
                    /* WARNING: Read-only address (ram,0x00014d7c095a) is written */
  LOCK();
  cVar2 = (char)in_RAX;
  if (cVar2 == '\0') {
    uRam000000014d7c095a = (undefined1)local_res10;
  }
  else {
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined8 *)(local_res20 + -0x20) = local_res10;
  *(ulonglong *)(local_res20 + -0x28) = in_RAX;
  *(ulonglong *)(local_res20 + -0x30) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_1653409fe;
  return *(undefined8 *)(local_res20 + -0x28);
}



// FUNCTION 14d9901ee FUN_14d9901ee body=167 status=ok
// SIG undefined FUN_14d9901ee(void)

void FUN_14d9901ee(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 1;
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + -1;
  uVar1 = *(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = (~(uVar1 & param_1) + param_1) - *(longlong *)(param_4 + 8);
  (*(code *)0x161633b27)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d99051d FUN_14d99051d body=299 status=ok
// SIG undefined FUN_14d99051d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9905b2) */
/* WARNING: Removing unreachable block (ram,0x00014d9905b8) */
/* WARNING: Removing unreachable block (ram,0x00016255048b) */

undefined8 FUN_14d99051d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16255048b();
  return uVar1;
}



// FUNCTION 14d99064c FUN_14d99064c body=138 status=ok
// SIG undefined FUN_14d99064c(void)

void FUN_14d99064c(void)

{
  undefined1 unaff_DIL;
  longlong unaff_R13;
  
  FUN_15b20b456(0,unaff_DIL,FUN_15b20b456,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d99078d FUN_14d99078d body=144 status=ok
// SIG undefined FUN_14d99078d(void)

void FUN_14d99078d(void)

{
  ulonglong in_R10;
  undefined8 unaff_R13;
  
  *(undefined8 *)(&stack0x3af41fcd + ~(~in_R10 + 2)) = unaff_R13;
  return;
}



// FUNCTION 14d9909a4 FUN_14d9909a4 body=148 status=ok
// SIG undefined FUN_14d9909a4(void)

void FUN_14d9909a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_162975c34(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14d990a39 FUN_14d990a39 body=48 status=ok
// SIG undefined FUN_14d990a39(void)

void FUN_14d990a39(void)

{
  (*(code *)0x160ec2c3a)();
  (*(code *)&LAB_162c58a37)();
  return;
}



// FUNCTION 14d990aa9 FUN_14d990aa9 body=177 status=ok
// SIG undefined FUN_14d990aa9(void)

void FUN_14d990aa9(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + (local_res8 ^ 0x72b9a93b));
  (*(code *)&LAB_162c58a37)(param_1,&LAB_162c58a37,uVar1 + param_1 + ~(~uVar1 | ~param_1) * -2);
  return;
}



// FUNCTION 14d990c97 FUN_14d990c97 body=40 status=ok
// SIG undefined FUN_14d990c97(void)

void FUN_14d990c97(void)

{
  FUN_165b0d5b5();
  FUN_15b68e7be();
  return;
}



// FUNCTION 14d990cc1 FUN_14d990cc1 body=214 status=ok
// SIG undefined FUN_14d990cc1(void)

void FUN_14d990cc1(void)

{
  FUN_15b68e7be();
  return;
}



// FUNCTION 14d990d99 FUN_14d990d99 body=611 status=ok
// SIG undefined FUN_14d990d99(void)

/* WARNING: Removing unreachable block (ram,0x00014d990ebe) */

void FUN_14d990d99(void)

{
  ulonglong uVar1;
  ulonglong unaff_R13;
  longlong unaff_R14;
  longlong local_res10;
  
  *(ulonglong *)(unaff_R14 + 0x10) =
       unaff_R13 & *(ulonglong *)(unaff_R14 + 0x10) ^ 0xffffffffffffffff;
  FUN_15ba27cc4();
  uVar1 = *(ulonglong *)(local_res10 + -0x60);
  if ((~(uVar1 & 0x15ba27cc4) & (ulonglong)(FUN_15ba27cc4 + (~(uVar1 & 0x15ba27cc4) - ~uVar1))) == 0
     ) {
    FUN_15b10c01b();
    return;
  }
  FUN_14ddb8594(0x7ac92d7a,8,
                (*(ulonglong *)(local_res10 + -0x88) | 0xfffffffea45d833b) ^ 0xffffffffffffffff |
                0xffffffffffffffff - (*(ulonglong *)(local_res10 + -0x88) & 0xfffffffea45d833b) ^
                0xffffffffffffffff);
  return;
}



// FUNCTION 14d991002 FUN_14d991002 body=59 status=ok
// SIG undefined FUN_14d991002(void)

/* WARNING: Removing unreachable block (ram,0x00014d991086) */
/* WARNING: Removing unreachable block (ram,0x00014d991044) */
/* WARNING: Removing unreachable block (ram,0x00014d991139) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d991002(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong *plVar6;
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
  byte bVar17;
  byte bVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  lVar5 = unaff_RBX + unaff_RBP + (param_3 & unaff_RBP) * -2;
  uVar3 = *(ulonglong *)(unaff_RSI + -0x40);
  uVar4 = 0x1661570ef;
  (*(code *)0x1661570ef)();
  uVar20 = uStackX_18 ^ uVar3;
  plVar6 = (longlong *)(uStackX_20 + uVar3 + (uStackX_20 & uVar3) * -2);
  uStackX_18._0_2_ = (ushort)uVar20;
  uVar2 = ((ushort)uStackX_18 | 0x100) - 0x100;
  bVar15 = (uVar2 & 0x4000) != 0;
  bVar14 = (uVar2 & 0x800) != 0;
  bVar13 = (uVar2 & 0x200) != 0;
  bVar12 = (uVar2 & 0x100) != 0;
  bVar11 = (uVar2 & 0x80) != 0;
  bVar10 = (uVar2 & 0x40) != 0;
  bVar9 = (uVar2 & 0x10) != 0;
  bVar8 = (uVar2 & 4) != 0;
  bVar7 = (uVar2 & 1) != 0;
  bVar19 = (uVar20 & 0x200000) != 0;
  bVar16 = (uVar20 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(((~uStackX_10 | uVar3) - (~uVar3 | uStackX_10 | ~uStackX_10 | uVar3)) +
            (~uVar3 | uStackX_10) ^ 0xffffffffffffffff,uVar4);
  *plVar6 = unaff_RSI;
  plVar6[-1] = unaff_RSI;
  plVar6[-2] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
               (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
               (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
               (ulonglong)(bVar10 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
               (ulonglong)(bVar8 & 1) * 4 | (ulonglong)(bVar7 & 1) |
               (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
               (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
  uVar20 = plVar6[-2];
  plVar6[-2] = lVar5;
  plVar6[-3] = (ulonglong)((uVar20 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar20 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar20 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar20 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar20 & 0x100) != 0) * 0x100 | (ulonglong)((uVar20 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar20 & 0x40) != 0) * 0x40 | (ulonglong)((uVar20 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar20 & 4) != 0) * 4 | (ulonglong)((uVar20 & 1) != 0) |
               (ulonglong)((uVar20 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar20 & 0x40000) != 0) * 0x40000;
  FUN_1649747a2();
  return;
}



// FUNCTION 14d9910b8 FUN_14d9910b8 body=377 status=ok
// SIG undefined FUN_14d9910b8(void)

/* WARNING: Removing unreachable block (ram,0x00014d991139) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9910b8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 unaff_RSI;
  undefined8 *puVar3;
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
  ulonglong uVar17;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar17 = local_res20 ^ param_1;
  puVar3 = (undefined8 *)(param_5 + param_1 + (param_5 & param_1) * -2);
  local_res20._0_2_ = (ushort)uVar17;
  uVar2 = ((ushort)local_res20 | 0x100) - 0x100;
  bVar12 = (uVar2 & 0x4000) != 0;
  bVar11 = (uVar2 & 0x800) != 0;
  bVar10 = (uVar2 & 0x200) != 0;
  bVar9 = (uVar2 & 0x100) != 0;
  bVar8 = (uVar2 & 0x80) != 0;
  bVar7 = (uVar2 & 0x40) != 0;
  bVar6 = (uVar2 & 0x10) != 0;
  bVar5 = (uVar2 & 4) != 0;
  bVar4 = (uVar2 & 1) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar13 = (uVar17 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(((~local_res18 | param_1) - (~param_1 | local_res18 | ~local_res18 | param_1)) +
            (~param_1 | local_res18) ^ 0xffffffffffffffff,param_2);
  *puVar3 = unaff_RSI;
  puVar3[-1] = unaff_RSI;
  puVar3[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar3[-2];
  puVar3[-2] = param_3;
  puVar3[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  FUN_1649747a2();
  return;
}



// FUNCTION 14d9911c1 FUN_14d9911c1 body=133 status=ok
// SIG undefined FUN_14d9911c1(void)

void FUN_14d9911c1(void)

{
  return;
}



// FUNCTION 14d99127d FUN_14d99127d body=161 status=ok
// SIG undefined FUN_14d99127d(void)

/* WARNING: Instruction at (ram,0x000162071156) overlaps instruction at (ram,0x000162071155)
    */
/* WARNING: Removing unreachable block (ram,0x0001620710e7) */
/* WARNING: Removing unreachable block (ram,0x000162071118) */
/* WARNING: Removing unreachable block (ram,0x000162071156) */
/* WARNING: Removing unreachable block (ram,0x00015b344c26) */
/* WARNING: Removing unreachable block (ram,0x00015b344c2c) */
/* WARNING: Removing unreachable block (ram,0x000162b82ab0) */
/* WARNING: Removing unreachable block (ram,0x00015b344ce1) */
/* WARNING: Removing unreachable block (ram,0x00015b344ced) */
/* WARNING: Removing unreachable block (ram,0x00015b344cf2) */
/* WARNING: Removing unreachable block (ram,0x00016207114d) */
/* WARNING: Removing unreachable block (ram,0x000162071159) */
/* WARNING: Removing unreachable block (ram,0x00014d991307) */

void FUN_14d99127d(void)

{
  FUN_1620710e7();
  return;
}



// FUNCTION 14d9913cc FUN_14d9913cc body=319 status=ok
// SIG undefined FUN_14d9913cc(void)

void FUN_14d9913cc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) & uVar2;
  FUN_1564d74eb(uVar1,uVar2,local_res8 - param_3);
  thunk_FUN_1566619db(uVar1);
  return;
}



// FUNCTION 14d9915a3 FUN_14d9915a3 body=52 status=ok
// SIG undefined FUN_14d9915a3(void)

void FUN_14d9915a3(void)

{
  return;
}



// FUNCTION 14d9916e4 FUN_14d9916e4 body=153 status=ok
// SIG undefined FUN_14d9916e4(void)

void FUN_14d9916e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_1650735ce(param_1,param_2,in_stack_00000010,param_4);
  return;
}



// FUNCTION 14d99181f FUN_14d99181f body=149 status=ok
// SIG undefined FUN_14d99181f(void)

void FUN_14d99181f(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28);
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  FUN_162b2a272(param_1,~((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14d9918b5 FUN_14d9918b5 body=135 status=ok
// SIG undefined FUN_14d9918b5(void)

void FUN_14d9918b5(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164b769c6(param_1,param_2,FUN_164b769c6,
                (~unaff_R15 | in_R10 ^ *(ulonglong *)(unaff_R13 + -0x90)) + unaff_R15 + 1);
  return;
}



// FUNCTION 14d991945 FUN_14d991945 body=19 status=ok
// SIG undefined FUN_14d991945(void)

void FUN_14d991945(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d991956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d991bea FUN_14d991bea body=377 status=ok
// SIG undefined FUN_14d991bea(void)

void FUN_14d991bea(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBX;
  
  FUN_156d33293();
  FUN_1568ac8af(param_2,*(ulonglong *)(param_2 + -0x50) + unaff_RBX +
                        (*(ulonglong *)(param_2 + -0x50) & unaff_RBX) * -2);
  return;
}



// FUNCTION 14d991d93 FUN_14d991d93 body=146 status=ok
// SIG undefined FUN_14d991d93(void)

void FUN_14d991d93(ulonglong param_1)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16238cf96(~(unaff_RBP & (~(unaff_RDI & unaff_R15) + unaff_R15) - ~param_1),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  FUN_14d991e28();
  return;
}



// FUNCTION 14d991e28 FUN_14d991e28 body=153 status=ok
// SIG undefined FUN_14d991e28(void)

undefined8 FUN_14d991e28(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_14e1c93a7(param_1,FUN_14e1c93a7,
                        *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                        ~((param_1 ^ 0xffffffffffffffff | param_4) &
                         (~((param_4 ^ 0xffffffffffffffff) & param_1) + param_1) -
                         ~(param_4 ^ 0xffffffffffffffff)));
  return uVar1;
}



// FUNCTION 14d991f5a FUN_14d991f5a body=478 status=ok
// SIG undefined FUN_14d991f5a(void)

/* WARNING: Removing unreachable block (ram,0x00014d992095) */

void FUN_14d991f5a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x30) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x38) = 0x14d991ff8;
  FUN_162c1b04b(param_1,param_2,local_res8,&DAT_162c1b0b3);
  *(undefined8 *)(local_res20 + -0x30) = param_1;
  uVar3 = *(ulonglong *)(local_res20 + -0x30);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  *(ulonglong *)(local_res20 + -0x30) = uVar1;
  lVar2 = *(longlong *)(local_res20 + -0x30);
  *(ulonglong *)(local_res20 + -0x30) = uVar3;
  if (-1 < (longlong)(lVar2 + uVar3 + (uVar1 & uVar3) * -2)) {
    FUN_16684bdaa(*(undefined8 *)(local_res20 + -0x30));
    return;
  }
  FUN_16684bdaa(*(undefined8 *)(local_res20 + -0x30));
  return;
}



// FUNCTION 14d9923a4 FUN_14d9923a4 body=122 status=ok
// SIG undefined FUN_14d9923a4(void)

short FUN_14d9923a4(void)

{
  char in_AL;
  
  return (short)in_AL;
}



// FUNCTION 14d992425 FUN_14d992425 body=163 status=ok
// SIG undefined FUN_14d992425(void)

void FUN_14d992425(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x40);
  uVar2 = 0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x40) | in_RAX;
  FUN_15763388f(param_1,-1 - ((uVar2 - (uVar1 | uVar2)) + uVar1),FUN_15763388f);
  return;
}



// FUNCTION 14d9924c8 FUN_14d9924c8 body=82 status=ok
// SIG undefined FUN_14d9924c8(void)

void FUN_14d9924c8(void)

{
  ulonglong *puVar1;
  longlong unaff_RSI;
  longlong unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xffffffffff530c79 + unaff_retaddr);
  *puVar1 = 0x5141ee6;
  *puVar1 = *puVar1 ^ 0x5141ee6;
  *puVar1 = *puVar1 - unaff_RSI;
  *puVar1 = -*puVar1;
  return;
}



// FUNCTION 14d99254c FUN_14d99254c body=174 status=ok
// SIG undefined FUN_14d99254c(void)

void FUN_14d99254c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_162780397(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d99282e FUN_14d99282e body=149 status=ok
// SIG undefined FUN_14d99282e(void)

/* WARNING: Removing unreachable block (ram,0x00014d9928c5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d99282e(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RSI;
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    FUN_16131bb16(param_1,param_2,unaff_retaddr);
    return;
  }
  if (unaff_RSI != 0xcc482) {
    if (unaff_RSI < 0xcc483) {
      FUN_165d1cac6();
      return;
    }
    FUN_165d1cac6();
    return;
  }
  FUN_16131bb16(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d9928c5 FUN_14d9928c5 body=208 status=ok
// SIG undefined FUN_14d9928c5(void)

void FUN_14d9928c5(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161155fc9(FUN_161155fc9,0xfffffffffffffff8,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  return;
}



// FUNCTION 14d992a10 FUN_14d992a10 body=887 status=ok
// SIG undefined FUN_14d992a10(void)

/* WARNING: Removing unreachable block (ram,0x00014d992a93) */
/* WARNING: Removing unreachable block (ram,0x00014d992a99) */
/* WARNING: Removing unreachable block (ram,0x00015b98481e) */
/* WARNING: Removing unreachable block (ram,0x00014d992b3c) */
/* WARNING: Removing unreachable block (ram,0x00014d992b42) */
/* WARNING: Removing unreachable block (ram,0x00014d992b59) */
/* WARNING: Removing unreachable block (ram,0x00014d992b54) */
/* WARNING: Removing unreachable block (ram,0x00014d992b66) */
/* WARNING: Removing unreachable block (ram,0x00014d992bd8) */
/* WARNING: Removing unreachable block (ram,0x00014d992bdd) */
/* WARNING: Removing unreachable block (ram,0x00014d992be3) */
/* WARNING: Removing unreachable block (ram,0x00015b341f92) */
/* WARNING: Removing unreachable block (ram,0x00015b342012) */
/* WARNING: Removing unreachable block (ram,0x00015b342017) */
/* WARNING: Removing unreachable block (ram,0x00015b34201d) */
/* WARNING: Removing unreachable block (ram,0x00015b342022) */

void FUN_14d992a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong auStack_10 [2];
  
  puVar1 = (undefined8 *)(&stack0x00000000 + unaff_RBP);
  *puVar1 = unaff_RSI;
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90);
  uVar3 = puVar1[1];
  puVar1[1] = param_2;
  *puVar1 = unaff_R14;
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar1[1] = unaff_R15;
  *puVar1 = unaff_R15;
  uVar4 = *(undefined8 *)(unaff_R12 + -0x68);
  puVar1[-1] = param_1;
  puVar1[-2] = 0xffffffffffffffff - ((uVar3 - (uVar2 | uVar3)) + uVar2) & (uVar2 | uVar3);
  puVar1[-3] = uVar3;
  *(undefined4 *)(puVar1 + -3) = 0x57de338b;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0;
  uVar2 = puVar1[-3];
  puVar1[-3] = uVar6;
  uVar6 = puVar1[-3];
  *(undefined8 *)
   ((longlong)puVar1 + (~(~(uVar2 & 0xffffffffafa47cdf) & (uVar2 | 0xffffffffafa47cdf)) ^ 0x785b0a3)
   ) = uVar4;
  puVar1[-1] = in_R11;
  *puVar1 = uVar6;
  puVar1[-1] = uVar6;
  puVar1[-2] = uVar5;
  puVar1[-2] = puVar1[-2];
  puVar1[-3] = uVar3;
  *(undefined4 *)(puVar1 + -3) = 0;
  *(int *)(puVar1 + -3) = *(int *)(puVar1 + -3) + 0x6eb086ad;
  puVar1[-4] = &LAB_156844183;
  return;
}



// FUNCTION 14d992c7b FUN_14d992c7b body=177 status=ok
// SIG undefined FUN_14d992c7b(void)

void FUN_14d992c7b(void)

{
  return;
}



// FUNCTION 14d992d33 FUN_14d992d33 body=192 status=ok
// SIG undefined FUN_14d992d33(void)

void FUN_14d992d33(void)

{
  FUN_1627755d9();
  return;
}



// FUNCTION 14d992fa7 FUN_14d992fa7 body=48 status=ok
// SIG undefined FUN_14d992fa7(void)

void FUN_14d992fa7(void)

{
  FUN_14d7a95fb();
  return;
}



// FUNCTION 14d993051 FUN_14d993051 body=299 status=ok
// SIG undefined FUN_14d993051(void)

void FUN_14d993051(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_157391e4f(param_1,*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  (*(code *)0x160baeaf2)();
  return;
}



// FUNCTION 14d9932cb FUN_14d9932cb body=473 status=ok
// SIG undefined FUN_14d9932cb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000161064653) */
/* WARNING: Removing unreachable block (ram,0x000161064659) */
/* WARNING: Removing unreachable block (ram,0x0001669b3483) */
/* WARNING: Removing unreachable block (ram,0x0001669b3505) */
/* WARNING: Removing unreachable block (ram,0x0001669b3516) */
/* WARNING: Removing unreachable block (ram,0x0001669b35c0) */
/* WARNING: Removing unreachable block (ram,0x0001669b35c6) */
/* WARNING: Removing unreachable block (ram,0x0001669b35bb) */
/* WARNING: Removing unreachable block (ram,0x0001610645c2) */
/* WARNING: Removing unreachable block (ram,0x00016106464e) */
/* WARNING: Removing unreachable block (ram,0x0001669b350b) */
/* WARNING: Removing unreachable block (ram,0x0001620708bb) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0d80) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0d7a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c0d84) */
/* WARNING: Removing unreachable block (ram,0x00014d9933af) */
/* WARNING: Removing unreachable block (ram,0x00014d99336c) */
/* WARNING: Removing unreachable block (ram,0x00014d9933b4) */
/* WARNING: Removing unreachable block (ram,0x0001615c07e9) */
/* WARNING: Removing unreachable block (ram,0x00014d99340a) */
/* WARNING: Removing unreachable block (ram,0x00014d993410) */
/* WARNING: Removing unreachable block (ram,0x00014d99342b) */
/* WARNING: Removing unreachable block (ram,0x00014d99342e) */
/* WARNING: Removing unreachable block (ram,0x000164c3d785) */

void FUN_14d9932cb(void)

{
  FUN_1669b3483();
  return;
}



// FUNCTION 14d9935db FUN_14d9935db body=574 status=ok
// SIG undefined FUN_14d9935db(void)

/* WARNING: Removing unreachable block (ram,0x0001622d95c4) */
/* WARNING: Removing unreachable block (ram,0x0001622d95b3) */
/* WARNING: Removing unreachable block (ram,0x00014d993700) */
/* WARNING: Removing unreachable block (ram,0x00014d993805) */
/* WARNING: Removing unreachable block (ram,0x0001622d959a) */

void FUN_14d9935db(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  param_3 = param_3 + in_R10;
  lVar1 = *(ulonglong *)(unaff_R13 + -0x90) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * -2;
  uVar2 = *(undefined8 *)(unaff_R13 + -0x60);
  FUN_16218633e(param_3);
  FUN_15b6c8e48(unaff_retaddr,lVar1,param_3,uVar2);
  return;
}



// FUNCTION 14d99381b FUN_14d99381b body=149 status=ok
// SIG undefined FUN_14d99381b(void)

/* WARNING: Removing unreachable block (ram,0x000161d7ddb9) */
/* WARNING: Removing unreachable block (ram,0x000161d7ddc4) */
/* WARNING: Removing unreachable block (ram,0x000161d7ddbf) */
/* WARNING: Removing unreachable block (ram,0x00014d9938b1) */
/* WARNING: Removing unreachable block (ram,0x0001620c4193) */
/* WARNING: Removing unreachable block (ram,0x00014d993939) */
/* WARNING: Removing unreachable block (ram,0x00014d993945) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd33) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd39) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd3e) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd4b) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd58) */
/* WARNING: Removing unreachable block (ram,0x000160dc8872) */
/* WARNING: Removing unreachable block (ram,0x000161d7dd46) */
/* WARNING: Removing unreachable block (ram,0x00014d99394a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99381b(void)

{
  undefined1 local_6cc7 [27799];
  
  if (local_6cc7 < (undefined1 *)0xffffffffffff9351) {
    FUN_161d7dcad();
    return;
  }
  return;
}



// FUNCTION 14d9938b1 FUN_14d9938b1 body=145 status=ok
// SIG undefined FUN_14d9938b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d99394a) */

void FUN_14d9938b1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  bVar3 = (byte)*(undefined8 *)(unaff_R13 + -0x48);
  if ((byte)((~(byte)unaff_R15 + bVar3) - (~(byte)unaff_R15 & bVar3)) == -1) {
    FUN_1620c4193();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28);
  uVar4 = ~uVar2 & ~unaff_R15 | uVar2;
  FUN_16629d95a(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                (~uVar4 & ~(~uVar2 | unaff_R15) | uVar4) + (~uVar2 | unaff_R15) + 1 ^
                0xffffffffffffffff,unaff_RDI + unaff_R15 + (param_3 & unaff_R15) * -2);
  thunk_FUN_15b642ca5(uVar1 ^ unaff_R15);
  return;
}



// FUNCTION 14d99394a FUN_14d99394a body=135 status=ok
// SIG undefined FUN_14d99394a(void)

void FUN_14d99394a(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  
  FUN_15b85ad17(in_stack_00000010 + param_1 + (in_stack_00000010 & param_1) * -2,param_2,param_3,
                unaff_retaddr);
  return;
}



// FUNCTION 14d993a5d FUN_14d993a5d body=17 status=ok
// SIG undefined FUN_14d993a5d(void)

void FUN_14d993a5d(void)

{
  FUN_164998deb();
  return;
}



// FUNCTION 14d993ae5 FUN_14d993ae5 body=191 status=ok
// SIG undefined FUN_14d993ae5(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d993ae5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  ulonglong in_stack_00000010;
  ulonglong in_stack_00000018;
  
  FUN_16536c8a4(param_1,param_2,in_stack_00000018 + unaff_RBP,param_4,
                ~(in_stack_00000010 & unaff_RBP) & (in_stack_00000010 | unaff_RBP),
                (in_stack_00000018 & unaff_RBP) << 1);
  return;
}



// FUNCTION 14d993ba4 FUN_14d993ba4 body=84 status=ok
// SIG undefined FUN_14d993ba4(void)

void FUN_14d993ba4(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d993cf5 FUN_14d993cf5 body=146 status=ok
// SIG undefined FUN_14d993cf5(void)

void FUN_14d993cf5(void)

{
  FUN_14ddaa746();
  return;
}



// FUNCTION 14d993d88 FUN_14d993d88 body=155 status=ok
// SIG undefined FUN_14d993d88(void)

void FUN_14d993d88(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16258a4f9(8,0x18,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14d993eac FUN_14d993eac body=555 status=ok
// SIG undefined FUN_14d993eac(void)

/* WARNING: Removing unreachable block (ram,0x00014d993f36) */
/* WARNING: Removing unreachable block (ram,0x00014d993f42) */
/* WARNING: Removing unreachable block (ram,0x000165100cf9) */

undefined8 FUN_14d993eac(void)

{
  return 0x31798342;
}



// FUNCTION 14d994048 FUN_14d994048 body=153 status=ok
// SIG undefined FUN_14d994048(void)

void FUN_14d994048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)0x15b04322c)(param_1,local_res8,param_3,0x15b04322c);
  return;
}



// FUNCTION 14d9940e4 FUN_14d9940e4 body=68 status=ok
// SIG undefined FUN_14d9940e4(void)

void FUN_14d9940e4(void)

{
  ulonglong *in_R11;
  ulonglong unaff_R14;
  
  *in_R11 = unaff_R14 ^ 0xdb2aaf3d7897979;
  *(int *)in_R11 = (int)(unaff_R14 ^ 0xdb2aaf3d7897979);
  return;
}



// FUNCTION 14d994163 FUN_14d994163 body=156 status=ok
// SIG undefined FUN_14d994163(void)

void FUN_14d994163(undefined8 param_1)

{
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)unaff_RSI = 0xe14b7555;
  *(undefined4 *)((longlong)unaff_RSI + 4) = 0xffffffff;
  unaff_RSI[1] = *(undefined8 *)(unaff_RDI + *unaff_RSI + 0x1eb48a2b);
  unaff_RSI[1] = *(undefined8 *)(unaff_RDI + -0x68);
  FUN_156849947(param_1,unaff_RSI[1]);
  return;
}



// FUNCTION 14d994200 FUN_14d994200 body=422 status=ok
// SIG undefined FUN_14d994200(void)

/* WARNING: Instruction at (ram,0x0001625667ed) overlaps instruction at (ram,0x0001625667ec)
    */
/* WARNING: Removing unreachable block (ram,0x00014e0e6922) */
/* WARNING: Removing unreachable block (ram,0x00014e0e6928) */
/* WARNING: Removing unreachable block (ram,0x00014d9942a1) */
/* WARNING: Removing unreachable block (ram,0x00016256682d) */
/* WARNING: Removing unreachable block (ram,0x0001625668d0) */
/* WARNING: Removing unreachable block (ram,0x0001625668d5) */
/* WARNING: Removing unreachable block (ram,0x0001625668db) */
/* WARNING: Removing unreachable block (ram,0x0001625668e0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x000162566815 */
/* WARNING: Removing unreachable block (ram,0x000162566827) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d994200(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  
  uVar2 = ~(~(unaff_RDI & 0xffffffffb9b8b54a) & (unaff_RDI | 0xffffffffb9b8b54a));
  *(int *)(unaff_RBX + 0x48) = *(int *)(unaff_RBX + 0x48) + -0x7db9b73 + (uint)(param_2 < uVar2);
  uVar1 = FUN_161cd726c(param_1,0xffffffffffffed9e,-(~(0x35a4d69e - ~(param_2 - uVar2)) + 2),param_4
                       );
  return uVar1;
}



// FUNCTION 14d99432c FUN_14d99432c body=141 status=ok
// SIG undefined FUN_14d99432c(void)

/* WARNING: Instruction at (ram,0x00014d994425) overlaps instruction at (ram,0x00014d994424)
    */
/* WARNING: Removing unreachable block (ram,0x00014d994424) */

undefined8 FUN_14d99432c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1621e2ef9();
  return uVar1;
}



// FUNCTION 14d9943bb FUN_14d9943bb body=172 status=ok
// SIG undefined FUN_14d9943bb(void)

/* WARNING: Instruction at (ram,0x00014d994425) overlaps instruction at (ram,0x00014d994424)
    */
/* WARNING: Removing unreachable block (ram,0x00014d994424) */

undefined8 FUN_14d9943bb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d99446a FUN_14d99446a body=87 status=ok
// SIG undefined FUN_14d99446a(void)

void FUN_14d99446a(undefined8 param_1)

{
  FUN_1569bcc86(param_1);
  return;
}



// FUNCTION 14d99460b FUN_14d99460b body=163 status=ok
// SIG undefined FUN_14d99460b(void)

void FUN_14d99460b(void)

{
  FUN_16222fba2();
  return;
}



// FUNCTION 14d99474a FUN_14d99474a body=152 status=ok
// SIG undefined FUN_14d99474a(void)

void FUN_14d99474a(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_2 | 0xffffffffee32d7c4;
  *param_2 = ~(~(uVar1 & 0xffffffffee32d7c4) & *param_2);
  return;
}



// FUNCTION 14d994869 FUN_14d994869 body=668 status=ok
// SIG undefined FUN_14d994869(void)

/* WARNING: Removing unreachable block (ram,0x0001667acf5f) */
/* WARNING: Removing unreachable block (ram,0x00014d99490f) */
/* WARNING: Removing unreachable block (ram,0x00014d9949b6) */
/* WARNING: Removing unreachable block (ram,0x0001667acea2) */
/* WARNING: Removing unreachable block (ram,0x0001667acf59) */
/* WARNING: Removing unreachable block (ram,0x000166924e06) */
/* WARNING: Removing unreachable block (ram,0x00014d9948b9) */
/* WARNING: Removing unreachable block (ram,0x00014da96332) */
/* WARNING: Removing unreachable block (ram,0x00014da96338) */
/* WARNING: Removing unreachable block (ram,0x00014d9949bb) */
/* WARNING: Removing unreachable block (ram,0x00014d9949c1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d994869(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_15b198612(param_1,4,param_3,param_4);
  return;
}



// FUNCTION 14d9949c1 FUN_14d9949c1 body=135 status=ok
// SIG undefined FUN_14d9949c1(void)

void FUN_14d9949c1(undefined8 param_1,undefined8 param_2)

{
  FUN_14d994a50(param_1,param_2);
  return;
}



// FUNCTION 14d994a50 FUN_14d994a50 body=150 status=ok
// SIG undefined FUN_14d994a50(void)

void FUN_14d994a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156cdb306();
  FUN_1668cabec(FUN_1668cabec,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d994b88 FUN_14d994b88 body=156 status=ok
// SIG undefined FUN_14d994b88(void)

void FUN_14d994b88(void)

{
  return;
}



// FUNCTION 14d994c24 FUN_14d994c24 body=280 status=ok
// SIG undefined FUN_14d994c24(void)

void FUN_14d994c24(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  byte *in_R10;
  undefined8 unaff_R13;
  ulonglong uVar4;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar5;
  undefined1 local_res8 [32];
  
  bVar3 = *in_R10;
  if ((in_TF & 1) == 0) {
    register0x00000020 = (BADSPACEBASE *)local_res8;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R13;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RBP;
  bVar3 = ~bVar3 | 0xdc;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar3 < '\0') * 0x80 |
       (ulonglong)(bVar3 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar3) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(byte **)((longlong)register0x00000020 + -0x18) = in_R10;
  if ((*(ushort *)((longlong)register0x00000020 + -0x10) & 0x80) == 0) {
    uVar5 = *(ulonglong *)((longlong)register0x00000020 + -0x10);
    *(ulonglong *)((longlong)register0x00000020 + -0x10) =
         (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
         (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_R14;
    if ((*(ushort *)((longlong)register0x00000020 + -0x10) & 0x80) != 0) {
      uVar5 = *(ulonglong *)((longlong)register0x00000020 + -0x18);
      *(undefined4 *)((longlong)register0x00000020 + -4) = 0;
      *(undefined4 *)((longlong)register0x00000020 + -4) =
           *(undefined4 *)((longlong)register0x00000020 + -4);
      lVar1 = *(longlong *)((longlong)register0x00000020 + -8);
      *(undefined4 *)((longlong)register0x00000020 + -8) = 0;
      *(undefined4 *)((longlong)register0x00000020 + -4) = 0;
      uVar4 = ~(*(longlong *)((longlong)register0x00000020 + -8) + *(longlong *)(unaff_RDI + -0x38)
               & param_1) &
              (*(longlong *)((longlong)register0x00000020 + -8) + *(longlong *)(unaff_RDI + -0x38) |
              param_1);
      uVar2 = *(undefined8 *)(unaff_RDI + -0x40);
      *(code **)((longlong)register0x00000020 + -8) = FUN_14d994d3e;
      FUN_160e64bd2(param_1,uVar2,-(lVar1 - uVar5),(uVar5 - 1) - ~((uVar5 & param_1) - uVar5));
      uVar5 = *(ulonglong *)(uVar4 - 0x88);
      *(undefined8 *)register0x00000020 = *(undefined8 *)(uVar4 - 0x78);
      FUN_1649ab2a7(*(undefined8 *)register0x00000020,0xffffffffffffffb8,
                    uVar5 + unaff_R15 + (uVar5 & unaff_R15) * -2);
      return;
    }
    FUN_162437ea4(param_1,~bVar3);
    return;
  }
  FUN_162437ea4(param_1,~bVar3);
  return;
}



// FUNCTION 14d994d3e FUN_14d994d3e body=149 status=ok
// SIG undefined FUN_14d994d3e(void)

void FUN_14d994d3e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1649ab2a7(*(undefined8 *)(unaff_R13 + -0x78),0xffffffffffffffb8,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d994e7f FUN_14d994e7f body=61 status=ok
// SIG undefined FUN_14d994e7f(void)

void FUN_14d994e7f(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  *(undefined4 *)((longlong)local_res10 + param_2) = 0;
  return;
}



// FUNCTION 14d994f25 FUN_14d994f25 body=35 status=ok
// SIG undefined FUN_14d994f25(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d994f45) overlaps instruction at (ram,0x00014d994f44)
    */
/* WARNING: Removing unreachable block (ram,0x00014d994f44) */

void FUN_14d994f25(void)

{
  (*(code *)0x1615631a5)(ProcessEnvironmentBlock,0x5959a4,0xfffffffff47147c9);
  FUN_165a214ca();
  return;
}



// FUNCTION 14d994fb9 FUN_14d994fb9 body=133 status=ok
// SIG undefined FUN_14d994fb9(void)

void FUN_14d994fb9(void)

{
  FUN_165a214ca();
  return;
}



// FUNCTION 14d99503f FUN_14d99503f body=307 status=ok
// SIG undefined FUN_14d99503f(void)

/* WARNING: Removing unreachable block (ram,0x00014d9950cf) */
/* WARNING: Removing unreachable block (ram,0x00014d995115) */
/* WARNING: Removing unreachable block (ram,0x00014d995118) */

void FUN_14d99503f(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  
  uVar1 = ~(~((param_3 & in_RAX) << 1 | (param_3 & in_RAX) >> 0x3f) | 1);
  if (in_RAX + unaff_R13 != 0) {
    FUN_1619444b4(param_1 >> 0x12 | param_1 << 0x2f |
                  (ulonglong)((ulonglong)(unaff_RDI + unaff_RBX) < uVar1) << 0x2e);
    return;
  }
  (*(code *)0x1624ecd3f)
            (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX,0x1624ecd3f,(unaff_RDI + unaff_RBX) - uVar1)
  ;
  return;
}



// FUNCTION 14d995209 FUN_14d995209 body=186 status=ok
// SIG undefined FUN_14d995209(void)

void FUN_14d995209(undefined8 param_1,undefined8 param_2)

{
  undefined4 in_stack_00000030;
  
  FUN_165df69ba(0x20,param_2,in_stack_00000030);
  return;
}



// FUNCTION 14d99533b FUN_14d99533b body=238 status=ok
// SIG undefined FUN_14d99533b(void)

undefined8 FUN_14d99533b(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  code *pcVar2;
  undefined8 local_res8;
  
  pcVar2 = FUN_1669e8487;
  uVar1 = FUN_1669e8487();
  if (unaff_RBP != ((ulonglong)pcVar2 ^ 0x19e50352)) {
    return uVar1;
  }
  uVar1 = FUN_164998deb(local_res8);
  return uVar1;
}



// FUNCTION 14d995464 FUN_14d995464 body=126 status=ok
// SIG undefined FUN_14d995464(void)

void FUN_14d995464(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R12;
  undefined4 local_res10;
  undefined4 local_res14;
  
  *(ulonglong *)(param_1 + 8) = -1 - ~(~unaff_R12 | ~*(ulonglong *)(param_1 + 8));
  FUN_14d7bd76a(CONCAT44(local_res14,local_res10),param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9954f7 FUN_14d9954f7 body=18 status=ok
// SIG undefined FUN_14d9954f7(void)

void FUN_14d9954f7(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d9955c8 FUN_14d9955c8 body=140 status=ok
// SIG undefined FUN_14d9955c8(void)

/* WARNING: Removing unreachable block (ram,0x00014d995898) */
/* WARNING: Removing unreachable block (ram,0x00014d99589e) */
/* WARNING: Removing unreachable block (ram,0x00014d99576c) */

void FUN_14d9955c8(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  code unaff_R12B;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong in_stack_00000028;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x98);
  FUN_14d90485d();
  uVar2 = (param_1 ^ 0x209da6b6) + *(longlong *)(unaff_retaddr + -0x78);
  uVar2 = ~(~(unaff_R15 & ~uVar2) & (~(~uVar2 & unaff_R15) + unaff_R15) - uVar2);
  FUN_160d1beb1(uVar2,*(ulonglong *)(unaff_retaddr + -0x28) ^ unaff_R15);
  FUN_14d90485d[uVar2 + (in_stack_00000028 ^ 0x45418d40)] = unaff_R12B;
  if ((byte)((byte)uVar1 | 0x2d) == 0x2d) {
                    /* WARNING (jumptable): Read-only address (ram,0x00014d904965) is written */
                    /* WARNING: Read-only address (ram,0x00014d904965) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014d904965) is written */
                    /* WARNING: Read-only address (ram,0x00014d904965) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014d904965) is written */
                    /* WARNING: Read-only address (ram,0x00014d904965) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014d904965) is written */
                    /* WARNING: Read-only address (ram,0x00014d904965) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014d904965) is written */
                    /* WARNING: Read-only address (ram,0x00014d904965) is written */
    uRam000000014d904965 = 0x2d;
    FUN_160fc3422();
    return;
  }
  FUN_16496c65a();
  return;
}



// FUNCTION 14d995655 FUN_14d995655 body=140 status=ok
// SIG undefined FUN_14d995655(void)

/* WARNING: Removing unreachable block (ram,0x00014d995898) */
/* WARNING: Removing unreachable block (ram,0x00014d99589e) */
/* WARNING: Removing unreachable block (ram,0x00014d99576c) */

void FUN_14d995655(ulonglong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  undefined1 unaff_R12B;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_stack_00000008;
  ulonglong in_stack_00000040;
  
  uVar2 = (param_1 ^ 0x209da6b6) + *(longlong *)(unaff_R13 + -0x78);
  uVar2 = ~(~(unaff_R15 & ~uVar2) & (~(~uVar2 & unaff_R15) + unaff_R15) - uVar2);
  FUN_160d1beb1(uVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  *(undefined1 *)(unaff_RBX + uVar2 + (in_stack_00000040 ^ 0x45418d40)) = unaff_R12B;
  if ((byte)(-~*(byte *)(unaff_RBX + 0x108) -
            (~(0xffU - *(char *)(unaff_RBX + 0x108) | in_stack_00000008) + 2)) == -1) {
    *(undefined1 *)(unaff_RBX + 0x108) = 0xd9;
    bVar1 = *(byte *)(unaff_RBX + 0x108);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) & 0xd9;
    *(byte *)(unaff_RBX + 0x108) = ~*(byte *)(unaff_RBX + 0x108);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) & (bVar1 | 0xd9);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) ^ 0xff;
    FUN_160fc3422();
    return;
  }
  FUN_16496c65a();
  return;
}



// FUNCTION 14d9956e3 FUN_14d9956e3 body=571 status=ok
// SIG undefined FUN_14d9956e3(void)

/* WARNING: Removing unreachable block (ram,0x00014d995898) */
/* WARNING: Removing unreachable block (ram,0x00014d99589e) */
/* WARNING: Removing unreachable block (ram,0x00014d99576c) */

void FUN_14d9956e3(longlong param_1)

{
  byte bVar1;
  longlong unaff_RBX;
  undefined1 unaff_R12B;
  ulonglong unaff_retaddr;
  byte in_stack_00000010;
  
  *(undefined1 *)(unaff_RBX + param_1 + (unaff_retaddr ^ 0x45418d40)) = unaff_R12B;
  if ((byte)(-~*(byte *)(unaff_RBX + 0x108) -
            (~(0xffU - *(char *)(unaff_RBX + 0x108) | in_stack_00000010) + 2)) == -1) {
    *(undefined1 *)(unaff_RBX + 0x108) = 0xd9;
    bVar1 = *(byte *)(unaff_RBX + 0x108);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) & 0xd9;
    *(byte *)(unaff_RBX + 0x108) = ~*(byte *)(unaff_RBX + 0x108);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) & (bVar1 | 0xd9);
    *(byte *)(unaff_RBX + 0x108) = *(byte *)(unaff_RBX + 0x108) ^ 0xff;
    FUN_160fc3422();
    return;
  }
  FUN_16496c65a();
  return;
}



// FUNCTION 14d99589e FUN_14d99589e body=415 status=ok
// SIG undefined FUN_14d99589e(void)

void FUN_14d99589e(char param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  uVar1 = (*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15) -
          ~(~(uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0)) | 1);
  FUN_14e1b7741(FUN_14e1b7741,uVar1,uVar1,unaff_RBX - (param_4 << (param_1 + 1U & 0x3f)));
  FUN_16642cd49();
  (*(code *)0x1649d66ce)
            (*(undefined8 *)(unaff_R13 + -0x78),*(undefined8 *)(unaff_R13 + -0x78),~uVar1);
  return;
}



// FUNCTION 14d995ade FUN_14d995ade body=11 status=ok
// SIG undefined FUN_14d995ade(void)

void FUN_14d995ade(void)

{
  return;
}



// FUNCTION 14d995b6e FUN_14d995b6e body=242 status=ok
// SIG undefined FUN_14d995b6e(void)

/* WARNING: Removing unreachable block (ram,0x00014d995c11) */

undefined8 FUN_14d995b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_8;
  *(undefined4 *)(local_res20 + -0x20) = 0x577849af;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  if (-1 < local_res20 + -8) {
    uVar2 = FUN_14de91905(param_1,param_2,param_3);
    return uVar2;
  }
  uVar1 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined1 **)(local_res20 + -0x10 + (uVar1 ^ 0x577849a7)) = &LAB_14de91958;
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x20);
  *(code **)(local_res20 + -0x10) = thunk_FUN_15b642ca5;
  return uVar2;
}



// FUNCTION 14d995c61 FUN_14d995c61 body=68 status=ok
// SIG undefined FUN_14d995c61(void)

/* WARNING: Removing unreachable block (ram,0x00014d995d80) */
/* WARNING: Removing unreachable block (ram,0x00014d995d1d) */

void FUN_14d995c61(undefined8 param_1,undefined8 param_2)

{
  FUN_164a6c139();
  FUN_161bbeaa2(param_1,param_2);
  return;
}



// FUNCTION 14d995ca5 FUN_14d995ca5 body=237 status=ok
// SIG undefined FUN_14d995ca5(void)

/* WARNING: Removing unreachable block (ram,0x00014d995d80) */
/* WARNING: Removing unreachable block (ram,0x00014d995d1d) */

void FUN_14d995ca5(undefined8 param_1,undefined8 param_2)

{
  FUN_161bbeaa2(param_1,param_2);
  return;
}



// FUNCTION 14d995e5a FUN_14d995e5a body=153 status=ok
// SIG undefined FUN_14d995e5a(void)

void FUN_14d995e5a(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_retaddr + 0x7100f234);
  FUN_166633194(1,uVar1 + unaff_R15,(unaff_R15 - (uVar1 | unaff_R15)) + uVar1);
  return;
}



// FUNCTION 14d99603b thunk_FUN_14d996041 body=5 status=ok
// SIG undefined thunk_FUN_14d996041(void)

void thunk_FUN_14d996041(int param_1)

{
  if (param_1 < 0) {
    return;
  }
  return;
}



// FUNCTION 14d996041 FUN_14d996041 body=150 status=ok
// SIG undefined FUN_14d996041(void)

void FUN_14d996041(int param_1)

{
  if (param_1 < 0) {
    return;
  }
  return;
}



// FUNCTION 14d99614c FUN_14d99614c body=325 status=ok
// SIG undefined FUN_14d99614c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165bcea72) */
/* WARNING: Removing unreachable block (ram,0x000165bcea78) */
/* WARNING: Removing unreachable block (ram,0x00014d9961ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9961f9) */
/* WARNING: Removing unreachable block (ram,0x00014d9961fe) */
/* WARNING: Removing unreachable block (ram,0x00014d996216) */

undefined8
FUN_14d99614c(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined4 in_stack_00000008;
  longlong in_stack_00000018;
  
  if (*(longlong *)
       (unaff_R12 +
       ~((CONCAT44(0xffffffff,in_stack_00000008) | 0xffffffff9d46d1f9) &
        (~CONCAT44(0xffffffff,in_stack_00000008) | 0x62b92e06))) < 0) {
    uVar2 = FUN_165bce943();
    return uVar2;
  }
  FUN_157628534(param_1);
  uVar1 = *(ulonglong *)(in_stack_00000018 + 0x10);
  *(ulonglong *)(in_stack_00000018 + 0x10) = ~*(ulonglong *)(in_stack_00000018 + 0x10);
  *(ulonglong *)(in_stack_00000018 + 0x10) = *(ulonglong *)(in_stack_00000018 + 0x10) | unaff_R15;
  *(ulonglong *)(in_stack_00000018 + 0x10) =
       ~((~unaff_R15 | uVar1) & *(ulonglong *)(in_stack_00000018 + 0x10));
  *(undefined8 *)(param_7 + -8) = param_4;
  *(undefined8 *)(param_7 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_7 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_7 + -0x10) = *(undefined8 *)(param_7 + -8);
  *(undefined8 *)(param_7 + -8) = 0;
  *(longlong *)(param_7 + -8) = (longlong)(&LAB_16680b518 + *(longlong *)(param_7 + -8));
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d996296 FUN_14d996296 body=95 status=ok
// SIG undefined FUN_14d996296(void)

void FUN_14d996296(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong local_res10;
  
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(longlong *)(local_res10 + -0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_14d996306;
  thunk_FUN_15b642ca5(uVar2);
  return;
}



// FUNCTION 14d9963d0 FUN_14d9963d0 body=640 status=ok
// SIG undefined FUN_14d9963d0(void)

/* WARNING: Removing unreachable block (ram,0x00014d996482) */
/* WARNING: Removing unreachable block (ram,0x00014d996514) */
/* WARNING: Removing unreachable block (ram,0x00014d99651a) */
/* WARNING: Removing unreachable block (ram,0x00015726f64f) */
/* WARNING: Removing unreachable block (ram,0x00014d996477) */

void FUN_14d9963d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  short *unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  short unaff_R14W;
  undefined8 uStackX_10;
  
  *unaff_RBP = unaff_R14W + -0x100;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x20) = uStackX_10;
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) + *(longlong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  puVar1 = (ulonglong *)(param_5 + -8);
  *puVar1 = 0;
  *(undefined8 *)(param_5 + -0x20) = unaff_R12;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 & 0x161330865;
  *puVar1 = *puVar1 << 1;
  *puVar1 = (ulonglong)(&LAB_161330865 + (uVar2 - *puVar1));
  FUN_14d7be377(param_1,*(undefined8 *)(param_5 + -0x10));
  return;
}



// FUNCTION 14d996821 FUN_14d996821 body=146 status=ok
// SIG undefined FUN_14d996821(void)

/* WARNING: Removing unreachable block (ram,0x00014d9968a4) */

void FUN_14d996821(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uStackX_8;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x20) = 0x127d48e6;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x30) = param_2;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0xf847330;
  *(undefined8 *)(local_res10 + -8) = 0x2f8d5b6;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x28);
  *(code **)(local_res10 + -0x10) = FUN_14d85d504;
  return;
}



// FUNCTION 14d9968aa FUN_14d9968aa body=36 status=ok
// SIG undefined FUN_14d9968aa(void)

void FUN_14d9968aa(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_160dec2d9((0xffffffffffffffffU - param_1 | ~unaff_RBP) & param_2,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4);
  return;
}



// FUNCTION 14d99693c FUN_14d99693c body=146 status=ok
// SIG undefined FUN_14d99693c(void)

void FUN_14d99693c(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  
  uVar1 = unaff_retaddr ^ *(ulonglong *)(unaff_RDI + -0x70);
  FUN_161d8a767((char)param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                (0xffffffffffffffff - param_1 | uVar1) & (0xffffffffffffffff - uVar1 | param_1) ^
                0xffffffffffffffff,FUN_161d8a767);
  return;
}



// FUNCTION 14d9969cf FUN_14d9969cf body=112 status=ok
// SIG undefined FUN_14d9969cf(void)

void FUN_14d9969cf(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong unaff_RBP;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *param_4 = 0xffffffffffffffff - ((*param_4 - (param_3 | *param_4)) + param_3);
  *(undefined8 *)((param_6 ^ unaff_RBP) - 8) = unaff_R13;
  *(undefined8 *)((param_6 ^ unaff_RBP) - 0x10) = unaff_R13;
  FUN_1654178e6(uStackX_8,param_2,uStackX_18,uStackX_10);
  return;
}



// FUNCTION 14d996a55 FUN_14d996a55 body=170 status=ok
// SIG undefined FUN_14d996a55(void)

void FUN_14d996a55(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + unaff_RBX + param_3);
  (*(code *)0x1655516ec)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
             ~(uVar1 & in_RAX) & (uVar1 | in_RAX));
  return;
}



// FUNCTION 14d996b01 FUN_14d996b01 body=177 status=ok
// SIG undefined FUN_14d996b01(void)

undefined8 FUN_14d996b01(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d996c3a FUN_14d996c3a body=356 status=ok
// SIG undefined FUN_14d996c3a(void)

ulonglong FUN_14d996c3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_157304a95(param_1,param_2,param_3);
  FUN_161bc856a();
  uVar2 = *(ulonglong *)(lVar1 + -0x38);
  return ~(uVar2 & unaff_R15) & (uVar2 | unaff_R15);
}



// FUNCTION 14d996e2a FUN_14d996e2a body=295 status=ok
// SIG undefined FUN_14d996e2a(void)

/* WARNING: Removing unreachable block (ram,0x00014d996ea7) */

undefined8 FUN_14d996e2a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9971dc FUN_14d9971dc body=327 status=ok
// SIG undefined FUN_14d9971dc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d997290) */
/* WARNING: Removing unreachable block (ram,0x0001661b0e4b) */
/* WARNING: Removing unreachable block (ram,0x0001661b0e51) */
/* WARNING: Removing unreachable block (ram,0x00014d99729f) */
/* WARNING: Removing unreachable block (ram,0x00014d9972a2) */
/* WARNING: Removing unreachable block (ram,0x00014d99731e) */
/* WARNING: Removing unreachable block (ram,0x00014d997323) */
/* WARNING: Removing unreachable block (ram,0x00014d997329) */
/* WARNING: Removing unreachable block (ram,0x00014d997353) */
/* WARNING: Removing unreachable block (ram,0x00014d997358) */
/* WARNING: Removing unreachable block (ram,0x0001610fd015) */
/* WARNING: Removing unreachable block (ram,0x00014d7a75a0) */
/* WARNING: Removing unreachable block (ram,0x00014d7a75ac) */
/* WARNING: Removing unreachable block (ram,0x00014d7a75bd) */
/* WARNING: Removing unreachable block (ram,0x00014d7a75bf) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7596) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7529) */
/* WARNING: Removing unreachable block (ram,0x00014d7a752a) */
/* WARNING: Removing unreachable block (ram,0x00014d7a74c1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7532) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7536) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7527) */
/* WARNING: Removing unreachable block (ram,0x00014d7a759a) */
/* WARNING: Removing unreachable block (ram,0x000162da0707) */

undefined8 FUN_14d9971dc(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  
  if (unaff_RBP != -0x54f9a38) {
    uVar2 = *(ulonglong *)(unaff_RDI + -0xa0);
    uVar4 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x98)) &
             ~(*(ulonglong *)(unaff_RDI + -0x98) & ~param_1));
    uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x90) & param_1) &
            (*(ulonglong *)(unaff_RDI + -0x90) | param_1);
    *(undefined8 *)(uVar1 - 8) = unaff_R13;
    *(ulonglong *)(uVar1 - 0x10) = uVar2 ^ param_1;
    *(undefined8 *)(uVar1 - 0x18) = unaff_retaddr;
    *(undefined8 *)(uVar1 - 0x20) = in_R10;
    uVar3 = *(undefined8 *)(uVar1 - 0x18);
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    *(undefined8 *)(uVar1 - 8) = &LAB_14de678da;
    *(undefined8 *)(uVar1 - 0x10) = uVar3;
    *(undefined8 *)(uVar1 - 0x18) = uVar3;
    *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
    *(ulonglong *)(uVar1 - 0x28) = uVar4;
    *(ulonglong *)(uVar1 - 0x30) = uVar4;
    *(ulonglong *)(uVar1 - 0x38) = uVar4;
    *(code **)(uVar1 - 0x28) = thunk_FUN_1612b9ed7;
    *(undefined8 *)(uVar1 - 0x30) = 0x14de6787c;
    return in_RAX;
  }
  uVar3 = FUN_14de678f2();
  return uVar3;
}



// FUNCTION 14d997329 FUN_14d997329 body=132 status=ok
// SIG undefined FUN_14d997329(void)

void FUN_14d997329(void)

{
  char unaff_BL;
  char unaff_BPL;
  
  if ((char)(unaff_BPL + unaff_BL) == '\0') {
    FUN_1571915c7();
    return;
  }
  FUN_16179b699();
  return;
}



// FUNCTION 14d99746a FUN_14d99746a body=142 status=ok
// SIG undefined FUN_14d99746a(void)

void FUN_14d99746a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  short unaff_retaddr;
  longlong local_res20;
  
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | 0xffffU - unaff_retaddr;
  *unaff_RSI = ~*unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_166408701;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_166408701;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  FUN_166408690(param_1,param_2,FUN_166408690);
  return;
}



// FUNCTION 14d9974fc FUN_14d9974fc body=166 status=ok
// SIG undefined FUN_14d9974fc(void)

void FUN_14d9974fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x156ae7920)
            (0x156ae7920,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4,
             *(undefined8 *)(unaff_RSI + -0x88));
  return;
}



// FUNCTION 14d99760f FUN_14d99760f body=596 status=ok
// SIG undefined FUN_14d99760f(void)

/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d9976aa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99760f(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  
  uVar1 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
           (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15));
  uVar2 = uStackX_10 ^ 0xffffffffffffffff | unaff_R15;
  uVar3 = (~uVar2 | ~unaff_R15 | uStackX_10) + uVar2 + 1;
  uVar2 = ~uVar3;
  if (-1 < (longlong)uVar3) {
    FUN_165040f91(unaff_retaddr);
    return;
  }
  *(ulonglong *)(uVar2 - 8) = uVar1;
  *(ulonglong *)(uVar2 - 0x10) = uVar1;
  *(undefined4 *)(uVar2 - 0x18) = 0xc052004;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  *(undefined **)(uVar2 - 0x20) = &DAT_15b922ba1;
  return;
}



// FUNCTION 14d99798d FUN_14d99798d body=168 status=ok
// SIG undefined FUN_14d99798d(void)

void FUN_14d99798d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  ulonglong in_stack_00000018;
  
  (*(code *)0x162b18d61)(local_res8,param_2,param_3,param_4,in_stack_00000018 ^ param_1);
  return;
}



// FUNCTION 14d997ad9 FUN_14d997ad9 body=142 status=ok
// SIG undefined FUN_14d997ad9(void)

undefined8 FUN_14d997ad9(void)

{
  return 0xffffffffffffffd0;
}



// FUNCTION 14d997d34 FUN_14d997d34 body=103 status=ok
// SIG undefined FUN_14d997d34(void)

void FUN_14d997d34(void)

{
  FUN_1565b5a13();
  return;
}



// FUNCTION 14d997e19 FUN_14d997e19 body=130 status=ok
// SIG undefined FUN_14d997e19(void)

void FUN_14d997e19(ulonglong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar4;
  ushort in_R10W;
  ushort unaff_R14W;
  
  uVar2 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x60);
  uVar4 = ~*(ulonglong *)(unaff_RDI + -0x60);
  uVar4 = (uVar4 + param_1) - (uVar4 & param_1);
  puVar3 = (ushort *)((uVar4 - (uVar2 | uVar4)) + uVar2);
  FUN_14da1355b(param_1,uVar4,*(ushort *)(&stack0x00000000 + unaff_RSI) & in_R10W);
  *puVar3 = *puVar3;
  *puVar3 = ~*puVar3;
  uVar1 = *puVar3;
  *puVar3 = *puVar3 & ~unaff_R14W;
  *puVar3 = (uVar1 + ~unaff_R14W) - *puVar3;
  *puVar3 = ~*puVar3;
  FUN_15b9e9d8d();
  return;
}



// FUNCTION 14d997e9c FUN_14d997e9c body=139 status=ok
// SIG undefined FUN_14d997e9c(void)

void FUN_14d997e9c(void)

{
  ushort uVar1;
  ushort *unaff_RBP;
  ushort unaff_R14W;
  
  *unaff_RBP = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  uVar1 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP & ~unaff_R14W;
  *unaff_RBP = (uVar1 + ~unaff_R14W) - *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  FUN_15b9e9d8d();
  return;
}



// FUNCTION 14d997f29 FUN_14d997f29 body=86 status=ok
// SIG undefined FUN_14d997f29(void)

void FUN_14d997f29(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  byte bVar3;
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
  ulonglong uStackX_10;
  undefined8 *local_res18;
  
  bVar11 = (uStackX_10 & 0x4000) != 0;
  bVar10 = (uStackX_10 & 0x800) != 0;
  bVar9 = (uStackX_10 & 0x200) != 0;
  bVar8 = (uStackX_10 & 0x100) != 0;
  bVar7 = (uStackX_10 & 0x80) != 0;
  bVar6 = (uStackX_10 & 0x40) != 0;
  bVar5 = (uStackX_10 & 0x10) != 0;
  bVar4 = (uStackX_10 & 4) != 0;
  bVar3 = (uStackX_10 & 1) != 0;
  bVar15 = (uStackX_10 & 0x200000) != 0;
  bVar12 = (uStackX_10 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res18 = in_R11;
  local_res18[-1] = in_R11;
  local_res18[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res18[-3] = uVar2;
  local_res18[-4] = in_R10;
  local_res18[-2] = local_res18[-4];
  *local_res18 = 0x1ce2452;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d998020 FUN_14d998020 body=142 status=ok
// SIG undefined FUN_14d998020(void)

void FUN_14d998020(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1658d4f27)
            (param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                      (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),0x1658d4f27);
  return;
}



// FUNCTION 14d998603 FUN_14d998603 body=136 status=ok
// SIG undefined FUN_14d998603(void)

undefined8 FUN_14d998603(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x88);
}



// FUNCTION 14d99868d FUN_14d99868d body=154 status=ok
// SIG undefined FUN_14d99868d(void)

/* WARNING: Removing unreachable block (ram,0x00016583aeb4) */
/* WARNING: Removing unreachable block (ram,0x00016583afd6) */
/* WARNING: Removing unreachable block (ram,0x00016583afe1) */
/* WARNING: Removing unreachable block (ram,0x00016583afe7) */
/* WARNING: Removing unreachable block (ram,0x00016182bc51) */
/* WARNING: Removing unreachable block (ram,0x00014d998721) */
/* WARNING: Removing unreachable block (ram,0x00014d998727) */
/* WARNING: Removing unreachable block (ram,0x00014d99880f) */
/* WARNING: Removing unreachable block (ram,0x00014d9987f2) */
/* WARNING: Removing unreachable block (ram,0x00014d998828) */
/* WARNING: Removing unreachable block (ram,0x00016583b085) */
/* WARNING: Removing unreachable block (ram,0x00016583b08b) */
/* WARNING: Removing unreachable block (ram,0x00014e11c906) */
/* WARNING: Removing unreachable block (ram,0x00014e11c9c0) */
/* WARNING: Removing unreachable block (ram,0x00014e11c9cd) */

undefined8 FUN_14d99868d(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16583aeb4();
  return uVar1;
}



// FUNCTION 14d998727 FUN_14d998727 body=163 status=ok
// SIG undefined FUN_14d998727(void)

void FUN_14d998727(undefined8 param_1,undefined8 param_2)

{
  FUN_162af2157(param_1,param_2);
  FUN_14df7e8f3();
  return;
}



// FUNCTION 14d9987cb FUN_14d9987cb body=118 status=ok
// SIG undefined FUN_14d9987cb(void)

void FUN_14d9987cb(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_14df7e8f3(param_1,FUN_14df7e8f3,~param_3);
  return;
}



// FUNCTION 14d9988d4 FUN_14d9988d4 body=163 status=ok
// SIG undefined FUN_14d9988d4(void)

void FUN_14d9988d4(void)

{
  return;
}



// FUNCTION 14d998c72 FUN_14d998c72 body=140 status=ok
// SIG undefined FUN_14d998c72(void)

void FUN_14d998c72(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_164990f33(*(ulonglong *)(param_2 + -0x48) ^ in_R10);
  FUN_14d998d01();
  return;
}



// FUNCTION 14d998d01 FUN_14d998d01 body=12 status=ok
// SIG undefined FUN_14d998d01(void)

void FUN_14d998d01(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d99907c FUN_14d99907c body=86 status=ok
// SIG undefined FUN_14d99907c(void)

void FUN_14d99907c(void)

{
  return;
}



// FUNCTION 14d9990f9 FUN_14d9990f9 body=51 status=ok
// SIG undefined FUN_14d9990f9(void)

void FUN_14d9990f9(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_R12;
  longlong in_stack_00000008;
  undefined8 local_res18;
  
  *(undefined8 *)(&stack0x36f71bd6 + in_stack_00000008) = unaff_R12;
  FUN_165c7153c(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14d99920c FUN_14d99920c body=134 status=ok
// SIG undefined FUN_14d99920c(void)

void FUN_14d99920c(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong local_res8;
  
  (*(code *)&LAB_164903b3a)
            (~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) &
             (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),
             *(ulonglong *)(local_res8 + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14d999294 FUN_14d999294 body=282 status=ok
// SIG undefined FUN_14d999294(void)

/* WARNING: Removing unreachable block (ram,0x00014d999301) */
/* WARNING: Removing unreachable block (ram,0x00014d999307) */
/* WARNING: Removing unreachable block (ram,0x00014d999342) */
/* WARNING: Removing unreachable block (ram,0x00014d999344) */

void FUN_14d999294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1659c201e(param_1,param_2,param_3,FUN_1659c201e);
  return;
}



// FUNCTION 14d9993b2 FUN_14d9993b2 body=262 status=ok
// SIG undefined FUN_14d9993b2(void)

/* WARNING: Removing unreachable block (ram,0x00014d999438) */

void FUN_14d9993b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = ~(local_res20 & unaff_R15 | ~(local_res20 | unaff_R15));
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  *(undefined8 *)(uVar1 - 0x20) = param_1;
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  UNRECOVERED_JUMPTABLE = *(code **)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x160ecc269;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x000160ecc247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
  return;
}



// FUNCTION 14d999438 FUN_14d999438 body=238 status=ok
// SIG undefined FUN_14d999438(void)

void FUN_14d999438(longlong param_1)

{
  longlong unaff_RBP;
  undefined8 local_res10;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = param_1 - *(longlong *)(&stack0xfffffffff0546148 + unaff_RBP);
  FUN_15b325474(local_res10);
  lStack0000000000000028 = 0x1c5ba5c;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d9996f4 FUN_14d9996f4 body=244 status=ok
// SIG undefined FUN_14d9996f4(void)

/* WARNING: Removing unreachable block (ram,0x00014d999789) */

void FUN_14d9996f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  
  plVar1 = (longlong *)(param_6 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  *(undefined8 *)(param_6 + -0x10) = unaff_R15;
  *(undefined8 *)(param_6 + -0x18) = unaff_R15;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -8) = 0x17bdb5ee;
  *(ulonglong *)(param_6 + -8) = *(ulonglong *)(param_6 + -8) ^ 0x17bdb5ee;
  *(undefined8 *)(param_6 + -0x18) = param_2;
  uVar2 = *(ulonglong *)(param_6 + -8);
  *(ulonglong *)(param_6 + -8) = *(ulonglong *)(param_6 + -8) & 0x157300a21;
  *(ulonglong *)(param_6 + -8) = ~*(ulonglong *)(param_6 + -8);
  *(ulonglong *)(param_6 + -8) = *(ulonglong *)(param_6 + -8) & (uVar2 | 0x157300a21);
                    /* WARNING: Could not recover jumptable at 0x000157300a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(param_6 + -0x18),param_3,uStackX_8);
  return;
}



// FUNCTION 14d99980c FUN_14d99980c body=138 status=ok
// SIG undefined FUN_14d99980c(void)

/* WARNING: Removing unreachable block (ram,0x00014d99988b) */
/* WARNING: Removing unreachable block (ram,0x00014d999896) */
/* WARNING: Removing unreachable block (ram,0x00014d999891) */

void FUN_14d99980c(void)

{
  FUN_165f1b68c();
  return;
}



// FUNCTION 14d999896 FUN_14d999896 body=192 status=ok
// SIG undefined FUN_14d999896(void)

void FUN_14d999896(void)

{
  return;
}



// FUNCTION 14d999957 FUN_14d999957 body=126 status=ok
// SIG undefined FUN_14d999957(void)

void FUN_14d999957(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  *(longlong *)(unaff_R12 + 0x10) = unaff_RDI + unaff_RBP + *(longlong *)(unaff_R12 + 0x10);
  (*(code *)0x166c89fd5)();
  return;
}



// FUNCTION 14d999b3b FUN_14d999b3b body=488 status=ok
// SIG undefined FUN_14d999b3b(void)

/* WARNING: Removing unreachable block (ram,0x00014d999caf) */

undefined1 * FUN_14d999b3b(undefined8 param_1,ushort param_2)

{
  ushort in_R10W;
  
  FUN_156463c00(param_1,((~(~in_R10W | 0xc0ce) ^ 0xffff) + 0x3f31) - (param_2 ^ 0xffff));
  FUN_1571368ed(param_1);
  return &stack0x00000010;
}



// FUNCTION 14d999eb1 FUN_14d999eb1 body=124 status=ok
// SIG undefined FUN_14d999eb1(void)

undefined8 FUN_14d999eb1(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  code *pcVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_10;
  ulonglong local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = param_3;
  pcVar6 = FUN_14df46960;
  *(code **)(uVar2 - 0x10) = FUN_14d999f2f;
  FUN_14df46960();
  uVar3 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38) ^ uStackX_10;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
  *puVar1 = ~*(ulonglong *)(0x116d - (~(unaff_R13 - 0x11b4U) + 2)) | uStackX_10;
  uVar5 = *puVar1;
  *(undefined4 *)puVar1 = 0;
  *(int *)puVar1 = (int)*puVar1;
  *(undefined8 *)(uVar2 - 0x10) = 0x14d999fc5;
  uVar5 = FUN_1649b01a0(uVar3,~uVar5,~(ulonglong)pcVar6 & param_2);
  *puVar1 = param_4;
  *puVar1 = uVar5;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(uVar2 - 4) = 0;
  *puVar1 = 0x14d99a057;
  FUN_166a93d0b();
  *(undefined8 *)(uVar2 + 8) = *(undefined8 *)(uVar2 + 8);
  uVar4 = *(undefined8 *)(uVar2 + 8);
  *(undefined8 *)(uVar2 + 0x10) = *(undefined8 *)(uVar2 + 0x10);
  *(undefined8 *)(uVar2 + 0x10) = 0;
  *(undefined8 *)(uVar2 + 8) = 0;
  *(undefined **)(uVar2 + 0x10) = &DAT_14d99a0ad;
  return uVar4;
}



// FUNCTION 14d999f2f FUN_14d999f2f body=225 status=ok
// SIG undefined FUN_14d999f2f(void)

undefined8 FUN_14d999f2f(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  FUN_1649b01a0(unaff_retaddr,~(~*(ulonglong *)(0x116d - (~(unaff_R13 - 0x11b4U) + 2)) | unaff_R15),
                ~param_3 & param_2);
  FUN_166a93d0b();
  return uStackX_10;
}



// FUNCTION 14d99a0d6 FUN_14d99a0d6 body=164 status=ok
// SIG undefined FUN_14d99a0d6(void)

/* WARNING: Removing unreachable block (ram,0x00014d99a222) */
/* WARNING: Removing unreachable block (ram,0x00014d99a228) */
/* WARNING: Removing unreachable block (ram,0x00014d99a17a) */

undefined8
FUN_14d99a0d6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  puVar3 = (undefined8 *)(((param_1 - 1) - ~param_5) + (param_5 & param_1) * -2);
  if (((ushort)param_1 >> 9 & 1) != 0) {
    uVar2 = FUN_166dc222f();
    return uVar2;
  }
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(local_res18,param_2,in_stack_00000008,in_stack_00000010);
  *puVar3 = unaff_RBP;
  puVar3[-1] = unaff_RBP;
  puVar3[-2] = unaff_RBX;
  puVar3[-3] = unaff_RBX;
  puVar3[-2] = &LAB_16154a1aa;
  uVar2 = (*(code *)0x16154a1a7)();
  return uVar2;
}



// FUNCTION 14d99a17a FUN_14d99a17a body=369 status=ok
// SIG undefined FUN_14d99a17a(void)

/* WARNING: Removing unreachable block (ram,0x00014d99a222) */
/* WARNING: Removing unreachable block (ram,0x00014d99a228) */

undefined8 FUN_14d99a17a(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_16119ac36(~((~uVar1 & ~unaff_R15 | uVar1) + unaff_R15 + 1) & (uVar1 | unaff_R15),
                ~(~*(ulonglong *)(unaff_R13 + -0x28) + *(longlong *)(unaff_R13 + -0x28) + 1 |
                 ~*(ulonglong *)(unaff_R13 + -0x28)));
  uVar2 = FUN_162be0390();
  return uVar2;
}



// FUNCTION 14d99a2c6 FUN_14d99a2c6 body=134 status=ok
// SIG undefined FUN_14d99a2c6(void)

/* WARNING: Removing unreachable block (ram,0x00014d99a3e5) */

void FUN_14d99a2c6(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  undefined8 local_res8;
  
  uVar2 = local_res8 ^ param_1;
  FUN_1567040e0();
  uVar1 = *(ulonglong *)
           (~(((~unaff_RDI | param_1) - (~param_1 | unaff_RDI | ~unaff_RDI | param_1)) +
             (~param_1 | unaff_RDI)) - 0x68);
  if (-1 < (longlong)((-uVar2 - uVar1) + (uVar1 | uVar2) * 2)) {
    FUN_1653bc213();
    return;
  }
  FUN_1653bc213();
  return;
}



// FUNCTION 14d99a34e FUN_14d99a34e body=151 status=ok
// SIG undefined FUN_14d99a34e(void)

/* WARNING: Removing unreachable block (ram,0x00014d99a3e5) */

void FUN_14d99a34e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((-param_1 - *(ulonglong *)(unaff_RDI + -0x68)) +
           (*(ulonglong *)(unaff_RDI + -0x68) | param_1) * 2)) {
    FUN_1653bc213();
    return;
  }
  FUN_1653bc213();
  return;
}



// FUNCTION 14d99a3e5 FUN_14d99a3e5 body=87 status=ok
// SIG undefined FUN_14d99a3e5(void)

void FUN_14d99a3e5(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d99a648 FUN_14d99a648 body=154 status=ok
// SIG undefined FUN_14d99a648(void)

void FUN_14d99a648(void)

{
  FUN_165c45507();
  return;
}



// FUNCTION 14d99a6ea FUN_14d99a6ea body=17 status=ok
// SIG undefined FUN_14d99a6ea(void)

void FUN_14d99a6ea(ulonglong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong auStack_10 [2];
  
  *(ulonglong *)((longlong)auStack_10 + unaff_RBX + 8) = in_RAX ^ param_1;
  *(undefined1 **)((longlong)auStack_10 + unaff_RBX) = &LAB_14d99a6fc;
  return;
}



// FUNCTION 14d99a75d FUN_14d99a75d body=293 status=ok
// SIG undefined FUN_14d99a75d(void)

void FUN_14d99a75d(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_15703171c(param_1,~(unaff_RSI & (param_2 | in_RAX)));
  (*(code *)0x15b7fd107)
            (0x1c009442,0x15b7fd107,0xffffffffffffffff,
             (-~(-unaff_RBX | unaff_R15) -
             (~(0xffffffffffffffff - (-unaff_RBX | unaff_R15) | ~(param_4 & unaff_R15)) + 2)) + 1);
  return;
}



// FUNCTION 14d99a872 FUN_14d99a872 body=109 status=ok
// SIG undefined FUN_14d99a872(void)

void FUN_14d99a872(void)

{
  ushort *unaff_RBP;
  ushort in_R11W;
  
  *unaff_RBP = -~*unaff_RBP - (3 - (~(in_R11W ^ 0xffff) + 2));
  return;
}



// FUNCTION 14d99aac1 FUN_14d99aac1 body=134 status=ok
// SIG undefined FUN_14d99aac1(void)

/* WARNING: Removing unreachable block (ram,0x00014d99ab48) */

void FUN_14d99aac1(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  if (~(in_RAX & 0xffffffffcfa70000) - 0x30586489 ==
      (in_RAX & 0xffffffffffff0000 ^ 0xffffffffffffffff)) {
    FUN_16149401e();
    return;
  }
  FUN_160dd4776(param_1,param_2 ^ param_1);
  return;
}



// FUNCTION 14d99ab48 FUN_14d99ab48 body=158 status=ok
// SIG undefined FUN_14d99ab48(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000028 : 0x00014d99ac3a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99ab48(void)

{
  FUN_156bec4a1();
  FUN_161ddedec(0x5e53ff34);
  return;
}



// FUNCTION 14d99abe6 FUN_14d99abe6 body=129 status=ok
// SIG undefined FUN_14d99abe6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99abe6(void)

{
  FUN_161ddedec(0x5e53ff34);
  return;
}



// FUNCTION 14d99acf3 FUN_14d99acf3 body=608 status=ok
// SIG undefined FUN_14d99acf3(void)

/* WARNING: Removing unreachable block (ram,0x00014d99ad77) */
/* WARNING: Removing unreachable block (ram,0x00014d99ad7d) */
/* WARNING: Removing unreachable block (ram,0x00014d99ada6) */
/* WARNING: Removing unreachable block (ram,0x00014d99adaa) */

void FUN_14d99acf3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  longlong in_RAX;
  ulonglong *unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | unaff_R15;
  *unaff_R14 = (in_RAX - 1U | uVar1) & *unaff_R14 ^ 0xffffffffffffffff;
  *(undefined8 *)(~((~unaff_R15 | param_6) & (~param_6 | unaff_R15)) - 0x10) = param_4;
  FUN_160d0f540(param_1,local_res8,param_3,FUN_160d0f540);
  return;
}



// FUNCTION 14d99aedd FUN_14d99aedd body=117 status=ok
// SIG undefined FUN_14d99aedd(void)

void FUN_14d99aedd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined3 uVar2;
  undefined4 in_EAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined2 local_res20;
  undefined6 uStackX_22;
  
  *(ulonglong *)(unaff_RSI + 0x18) =
       (unaff_RBP - (*(ulonglong *)(unaff_RSI + 0x18) | unaff_RBP)) +
       *(longlong *)(unaff_RSI + 0x18);
  uVar1 = ~param_5 & unaff_R13;
  uVar2 = SegmentLimit(in_EAX);
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 |
       (ulonglong)((byte)((uint3)uVar2 >> 0x10) & 1) * 0x40 |
       (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  (*(code *)0x160e14cf7)(param_1,0xe8eb9ec);
  return;
}



// FUNCTION 14d99af5b FUN_14d99af5b body=294 status=ok
// SIG undefined FUN_14d99af5b(void)

/* WARNING: Removing unreachable block (ram,0x00014d99b043) */

void FUN_14d99af5b(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90) + in_RAX;
  uVar1 = (*(ulonglong *)(unaff_R12 + -0x90) & in_RAX) << 1;
  if (uVar1 <= uVar2) {
    FUN_14e1e46c8(param_1);
    return;
  }
  if (uVar1 < uVar2) {
    FUN_162e66546(0,param_2,0,
                  ~(-~(*(ulonglong *)((*(ulonglong *)(unaff_R12 + -0x50) ^ in_RAX) - 0x60) ^
                      0xffffffffffffffff) - 1));
    return;
  }
  FUN_14e1e46c8(param_1);
  return;
}



// FUNCTION 14d99b2b0 FUN_14d99b2b0 body=147 status=ok
// SIG undefined FUN_14d99b2b0(void)

void FUN_14d99b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_4 == ((ulonglong)in_stack_00000008 ^ 0x6c04e872)) {
    return;
  }
  if (param_4 - ((ulonglong)in_stack_00000008 ^ 0x6c04e872) != 1) {
    FUN_1652230d5();
    return;
  }
  FUN_1654dc9c4(param_1,in_stack_00000010,param_3,0x12b6a9);
  return;
}



// FUNCTION 14d99b475 FUN_14d99b475 body=150 status=ok
// SIG undefined FUN_14d99b475(void)

undefined8 FUN_14d99b475(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  ulonglong *in_R10;
  undefined8 unaff_R15;
  undefined8 local_res18;
  undefined8 uStackX_20;
  
  uVar1 = *in_R10;
  *in_R10 = *in_R10 ^ 0xffffffffffffffff;
  *in_R10 = *in_R10 | unaff_RBP;
  *in_R10 = ~((~unaff_RBP | uVar1) & *in_R10);
  if ((~(local_res18 | unaff_RBP) | ~((~unaff_RBP | local_res18) + unaff_RBP + 1)) +
      (local_res18 | unaff_RBP) == -1) {
    return in_RAX;
  }
  uVar1 = ~(uStackX_20 & unaff_RBP | ~(uStackX_20 | unaff_RBP));
  *(undefined8 *)(uVar1 - 8) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0x1611fc653;
  uVar2 = FUN_14d7c2366(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 14d99b6c1 FUN_14d99b6c1 body=10 status=ok
// SIG undefined FUN_14d99b6c1(void)

void FUN_14d99b6c1(void)

{
  return;
}



// FUNCTION 14d99b764 FUN_14d99b764 body=842 status=ok
// SIG undefined FUN_14d99b764(void)

/* WARNING: Removing unreachable block (ram,0x00016255924e) */
/* WARNING: Removing unreachable block (ram,0x00014d99b88d) */
/* WARNING: Removing unreachable block (ram,0x00014d99b8bf) */
/* WARNING: Removing unreachable block (ram,0x00014d99b8c2) */
/* WARNING: Removing unreachable block (ram,0x000166dd2eda) */
/* WARNING: Removing unreachable block (ram,0x000166dd2ee0) */
/* WARNING: Removing unreachable block (ram,0x00014d99b7f4) */

void FUN_14d99b764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_16564dd2e(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d99b88d FUN_14d99b88d body=87 status=ok
// SIG undefined FUN_14d99b88d(void)

/* WARNING: Removing unreachable block (ram,0x00014d99b8bf) */

void FUN_14d99b88d(uint param_1)

{
  FUN_14e241f86(~param_1 + 1);
  return;
}



// FUNCTION 14d99ba9d FUN_14d99ba9d body=169 status=ok
// SIG undefined FUN_14d99ba9d(void)

void FUN_14d99ba9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 unaff_RSI;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x10) = param_3;
  *(undefined8 *)(param_5 - 0x18) = param_3;
  *(undefined1 **)(param_5 - 0x10) = &LAB_14d99bb49;
  FUN_157428bb5(param_1,uStackX_10,*(undefined8 *)(param_5 - 0x18),local_res8);
  return;
}



// FUNCTION 14d99bc53 FUN_14d99bc53 body=65 status=ok
// SIG undefined FUN_14d99bc53(void)

void FUN_14d99bc53(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong in_R10;
  longlong unaff_R14;
  undefined8 uStackX_18;
  
  *(undefined8 *)(unaff_R14 + (in_R10 ^ 0x74f9ddcc)) = 0;
  plVar1 = (longlong *)(unaff_R14 + (in_R10 ^ 0x74f9ddcc));
  *plVar1 = *plVar1 + param_3;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(param_1,param_2,uStackX_18);
  *param_6 = 0x174700;
  FUN_165e5ce37();
  return;
}



// FUNCTION 14d99bcd7 FUN_14d99bcd7 body=143 status=ok
// SIG undefined FUN_14d99bcd7(void)

undefined8 FUN_14d99bcd7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d99bd68 FUN_14d99bd68 body=135 status=ok
// SIG undefined FUN_14d99bd68(void)

void FUN_14d99bd68(void)

{
  return;
}



// FUNCTION 14d99be8f FUN_14d99be8f body=160 status=ok
// SIG undefined FUN_14d99be8f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99be8f(undefined8 param_1)

{
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(&stack0x00000018 + in_R11) = unaff_R12;
  FUN_1622aa611(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d99bf33 FUN_14d99bf33 body=227 status=ok
// SIG undefined FUN_14d99bf33(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c13c) */
/* WARNING: Removing unreachable block (ram,0x00014d99c098) */
/* WARNING: Removing unreachable block (ram,0x00014d99c0a4) */
/* WARNING: Removing unreachable block (ram,0x00014d99c126) */
/* WARNING: Removing unreachable block (ram,0x00014d99bff3) */
/* WARNING: Removing unreachable block (ram,0x00014d99c011) */
/* WARNING: Removing unreachable block (ram,0x00014d99c05e) */
/* WARNING: Removing unreachable block (ram,0x00014d99c070) */
/* WARNING: Removing unreachable block (ram,0x00014d99c08d) */
/* WARNING: Removing unreachable block (ram,0x00014d99c092) */
/* WARNING: Removing unreachable block (ram,0x00014d99c006) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014d99bfbd */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99bf33(void)

{
  FUN_15b5bde1b();
  return;
}



// FUNCTION 14d99c017 FUN_14d99c017 body=138 status=ok
// SIG undefined FUN_14d99c017(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c13c) */
/* WARNING: Removing unreachable block (ram,0x00014d99c098) */
/* WARNING: Removing unreachable block (ram,0x00014d99c0a4) */
/* WARNING: Removing unreachable block (ram,0x00014d99c126) */

void FUN_14d99c017(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xfdabd) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 != 0xfdb4d) {
    FUN_160cc5333();
    return;
  }
  return;
}



// FUNCTION 14d99c0a4 FUN_14d99c0a4 body=302 status=ok
// SIG undefined FUN_14d99c0a4(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c13c) */

void FUN_14d99c0a4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 local_res8;
  undefined8 auStackX_10 [3];
  ulonglong uStack_10;
  int aiStack_8 [2];
  int iVar5;
  uint uVar6;
  
  piVar1 = (int *)((longlong)&local_res8 + param_3);
  *piVar1 = 0;
  *(undefined8 *)((longlong)auStackX_10 + param_3 + -0x10) = in_RAX;
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -0x10) = 0x9af6252;
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -0xc) = 0;
  *piVar1 = *piVar1 - ((uint)*(undefined8 *)((longlong)auStackX_10 + param_3 + -0x10) ^ 0x9af6252);
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -4) = 0x9219c2a3;
  puVar2 = (uint *)((longlong)auStackX_10 + param_3 + -4);
  *puVar2 = ~*puVar2;
  *(int *)((longlong)auStackX_10 + param_3 + -4) =
       0x6de63d5c - *(int *)((longlong)auStackX_10 + param_3 + -4);
  *(undefined8 *)((longlong)&local_res8 + param_3) = *(undefined8 *)piVar1;
  *(longlong *)((longlong)&local_res8 + param_3) =
       *(longlong *)((longlong)&local_res8 + param_3) - unaff_R12;
  lVar7 = *(longlong *)((longlong)&local_res8 + param_3);
  puVar3 = (undefined8 *)((longlong)auStackX_10 + param_3 + 8);
  uVar8 = *puVar3;
  *puVar3 = param_4;
  *(undefined8 *)((longlong)auStackX_10 + param_3) = unaff_RDI;
  piVar1 = (int *)((longlong)&local_res8 + param_3);
  *(undefined8 *)piVar1 = in_RAX;
  *piVar1 = -0x225723e1;
  *piVar1 = *piVar1 + 0x452cc93f;
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -4) = 0xb251777a;
  piVar1 = (int *)((longlong)auStackX_10 + param_3 + -4);
  *piVar1 = *piVar1 + 0x4dae8886;
  *(undefined8 *)((longlong)&local_res8 + param_3) = unaff_R13;
  *(undefined8 *)((longlong)&local_res8 + param_3) = unaff_RBX;
  *(undefined8 *)((longlong)auStackX_10 + param_3 + -0x10) = in_RAX;
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -0x10) = 0;
  *(int *)((longlong)auStackX_10 + param_3 + -0x10) =
       *(int *)((longlong)auStackX_10 + param_3 + -0x10) + 0x14098817;
  *(uint *)((longlong)auStackX_10 + param_3 + -0x10) =
       *(uint *)((longlong)auStackX_10 + param_3 + -0x10) ^ 0x204a4118;
  iVar4 = *(int *)((longlong)auStackX_10 + param_3 + -0x10);
  iVar5 = *(int *)((longlong)auStackX_10 + param_3 + -0x10);
  uVar6 = *(uint *)((longlong)auStackX_10 + param_3 + -0x10);
  *(undefined4 *)((longlong)auStackX_10 + param_3 + -0xc) = 0;
  *(undefined8 *)((longlong)auStackX_10 + param_3 + -0x10) = unaff_RSI;
  *(undefined4 *)((longlong)aiStack_8 + param_3) = 0x1d9070c0;
  *(undefined4 *)((longlong)aiStack_8 + param_3 + 4) = 0;
  *(ulonglong *)((longlong)&uStack_10 + param_3) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(iVar4 < 0) * 0x80 |
       (ulonglong)(iVar5 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)((longlong)&uStack_10 + param_3) = 0x1662ecbd5;
  FUN_1648c27ef(param_1,-lVar7,uVar8,-lVar7);
  return;
}



// FUNCTION 14d99c224 FUN_14d99c224 body=145 status=ok
// SIG undefined FUN_14d99c224(void)

void FUN_14d99c224(void)

{
  (*(code *)0x16259c49d)();
  return;
}



// FUNCTION 14d99c2b7 FUN_14d99c2b7 body=142 status=ok
// SIG undefined FUN_14d99c2b7(void)

void FUN_14d99c2b7(longlong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = param_1 + *(longlong *)(unaff_R13 + -0x78);
  (*(code *)&LAB_160d5fb18)
            (~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),
             (*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
             (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2);
  return;
}



// FUNCTION 14d99c3fa FUN_14d99c3fa body=156 status=ok
// SIG undefined FUN_14d99c3fa(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c48c) */
/* WARNING: Removing unreachable block (ram,0x00014d99c492) */
/* WARNING: Removing unreachable block (ram,0x00014d99c497) */

void FUN_14d99c3fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R15;
  
  FUN_156bee217(param_1,~(unaff_RSI + unaff_R15 + 1U) & unaff_RDI,param_3,param_4);
  FUN_14d85d504();
  return;
}



// FUNCTION 14d99c497 FUN_14d99c497 body=87 status=ok
// SIG undefined FUN_14d99c497(void)

void FUN_14d99c497(void)

{
  return;
}



// FUNCTION 14d99c5cf FUN_14d99c5cf body=431 status=ok
// SIG undefined FUN_14d99c5cf(void)

void FUN_14d99c5cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)0x14d8ba0d4)(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14d99c669 FUN_14d99c669 body=297 status=ok
// SIG undefined FUN_14d99c669(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c719) */
/* WARNING: Removing unreachable block (ram,0x00014d99c6f3) */
/* WARNING: Removing unreachable block (ram,0x00014d99c6fe) */
/* WARNING: Removing unreachable block (ram,0x00014d99c71b) */
/* WARNING: Removing unreachable block (ram,0x00014d99c6f9) */

void FUN_14d99c669(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_156cb03a5)(param_1,&stack0xfffffffffffffff8,param_3,param_4);
  return;
}



// FUNCTION 14d99c811 FUN_14d99c811 body=499 status=ok
// SIG undefined FUN_14d99c811(void)

/* WARNING: Removing unreachable block (ram,0x00014d99c950) */
/* WARNING: Removing unreachable block (ram,0x00014d99c956) */
/* WARNING: Removing unreachable block (ram,0x0001659fc14e) */

void FUN_14d99c811(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  uint6 uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R15;
  undefined4 local_res20;
  
  FUN_1576636cf(param_1,~(param_2 & local_res20) & (param_2 | local_res20),
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                param_3 + (unaff_RBX + unaff_RBP + 1) * -2);
  uVar1 = (uint6)((ulonglong)param_1 >> 0x10);
  lVar2 = (ulonglong)uVar1 << 0x10;
  if (param_6 < '\0') {
    lVar2 = CONCAT62(uVar1,0xffff);
  }
  FUN_1659fc14e(CONCAT71((int7)((ulonglong)lVar2 >> 8),param_6),
                (((~unaff_R15 | in_R10) - 1) -
                ~-(unaff_R15 | 0xfffffffea899c930 | ~unaff_R15 | in_R10)) +
                (unaff_R15 | 0xfffffffea899c930));
  return;
}



// FUNCTION 14d99cd45 FUN_14d99cd45 body=166 status=ok
// SIG undefined FUN_14d99cd45(void)

void FUN_14d99cd45(void)

{
  return;
}



// FUNCTION 14d99cdf4 FUN_14d99cdf4 body=649 status=ok
// SIG undefined FUN_14d99cdf4(void)

/* WARNING: Removing unreachable block (ram,0x000156a0b44a) */
/* WARNING: Removing unreachable block (ram,0x000156a0b420) */
/* WARNING: Removing unreachable block (ram,0x000156a0b415) */
/* WARNING: Removing unreachable block (ram,0x000156a0b41b) */
/* WARNING: Removing unreachable block (ram,0x000161134764) */
/* WARNING: Removing unreachable block (ram,0x00014d99ce71) */

void FUN_14d99cdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_14e0b2938(param_1,unaff_retaddr,param_3,FUN_14e0b2938,*(undefined8 *)(unaff_RDI + -0x90));
  FUN_164afd775();
  return;
}



// FUNCTION 14d99d156 FUN_14d99d156 body=143 status=ok
// SIG undefined FUN_14d99d156(void)

void FUN_14d99d156(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78) & unaff_R15 ^ 0xffffffffffffffff;
  FUN_16689f46c((uVar2 - (uVar1 | uVar2)) + uVar1,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d99d1ec FUN_14d99d1ec body=290 status=ok
// SIG undefined FUN_14d99d1ec(void)

/* WARNING: Removing unreachable block (ram,0x0001614c7d21) */
/* WARNING: Removing unreachable block (ram,0x0001614c7d27) */
/* WARNING: Removing unreachable block (ram,0x00014d99d295) */

void FUN_14d99d1ec(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15;
  if ((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) + uVar1 == -1) {
    return;
  }
  FUN_1614c7c87();
  return;
}



// FUNCTION 14d99d4dd FUN_14d99d4dd body=149 status=ok
// SIG undefined FUN_14d99d4dd(void)

void FUN_14d99d4dd(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_8;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RDI);
  *puVar1 = param_1;
  puVar2 = puVar1 + -1;
  *puVar2 = unaff_RDI;
  *(byte *)puVar2 = 0x1c;
  *(byte *)puVar2 = (byte)*puVar2 ^ 0x80;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar3 = *puVar1;
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28);
  *puVar1 = in_RAX;
  *(uint *)puVar1 = 0xc9a26ddc;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x4223747c;
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0xfce0cc71;
  *(uint *)((longlong)puVar1 + -4) = 0xffffffff;
  (*(code *)&LAB_16686e0b5)(~(uVar3 & unaff_R15) & (uVar3 | unaff_R15),uVar4 ^ unaff_R15);
  return;
}



// FUNCTION 14d99d572 FUN_14d99d572 body=156 status=ok
// SIG undefined FUN_14d99d572(void)

void FUN_14d99d572(void)

{
  ulonglong uVar1;
  longlong *in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *in_RAX = *(longlong *)(unaff_R13 + -0x38);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  *(undefined4 *)in_RAX = 0;
  *(undefined4 *)((longlong)in_RAX + 4) = 0;
  FUN_1646dd46c(uVar1 ^ unaff_R15,~(*in_RAX + *(longlong *)(unaff_R13 + -0x28) & unaff_R15));
  return;
}



// FUNCTION 14d99d97c FUN_14d99d97c body=129 status=ok
// SIG undefined FUN_14d99d97c(void)

void FUN_14d99d97c(void)

{
  return;
}



// FUNCTION 14d99d9fe FUN_14d99d9fe body=233 status=ok
// SIG undefined FUN_14d99d9fe(void)

void FUN_14d99d9fe(void)

{
  longlong in_RAX;
  longlong unaff_R12;
  ulonglong unaff_R14;
  
  if ((unaff_R14 < 0xdd0f8) && (0xdd0f8 < unaff_R14)) {
    FUN_164ef6972(FUN_164ef6972,*(longlong *)(unaff_R12 + -0x70) + in_RAX);
    FUN_14d85d504();
    return;
  }
  if (unaff_R14 == 0xdd0f8) {
    return;
  }
  if (unaff_R14 == 0xdd0f9) {
    return;
  }
  FUN_15b3556fc();
  return;
}



// FUNCTION 14d99db51 FUN_14d99db51 body=617 status=ok
// SIG undefined FUN_14d99db51(void)

undefined8 FUN_14d99db51(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  FUN_1613ee0b3();
  in_stack_00000018 = in_stack_00000018 ^ unaff_R15;
  FUN_165ed611a(param_1,unaff_RSI,param_3);
  uVar1 = FUN_166256a22(param_1,0xffffffffffffffd0,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        *(ulonglong *)(unaff_RDI + -0x60) ^ param_1,in_stack_00000018);
  return uVar1;
}



// FUNCTION 14d99e02f FUN_14d99e02f body=136 status=ok
// SIG undefined FUN_14d99e02f(void)

void FUN_14d99e02f(undefined8 param_1,longlong param_2)

{
  longlong in_R11;
  
  FUN_14dc13bee(param_1,param_2 == in_R11 + 0x1e14bdc7);
  return;
}



// FUNCTION 14d99e0b7 FUN_14d99e0b7 body=17 status=ok
// SIG undefined FUN_14d99e0b7(void)

void FUN_14d99e0b7(void)

{
  return;
}



// FUNCTION 14d99e151 FUN_14d99e151 body=324 status=ok
// SIG undefined FUN_14d99e151(void)

/* WARNING: Removing unreachable block (ram,0x00014d99e1db) */
/* WARNING: Removing unreachable block (ram,0x00014d99e1e6) */
/* WARNING: Removing unreachable block (ram,0x00014d99e1e1) */

void FUN_14d99e151(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  ulonglong unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R11;
  longlong unaff_R12;
  ulonglong uVar3;
  ulonglong unaff_R13;
  longlong lStackX_8;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffaa30c33 + lStackX_8);
  *puVar1 = *(ulonglong *)(unaff_R12 + -0xa0);
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  uVar3 = puVar1[-1] ^ *puVar1;
  puVar1[1] = in_R11;
  *puVar1 = unaff_R13;
  puVar1[1] = unaff_RBP;
  uVar2 = puVar1[2];
  puVar1[2] = puVar1[2] & in_RAX;
  puVar1[2] = ~puVar1[2];
  puVar1[2] = puVar1[2] & (uVar2 | in_RAX);
  puVar1[3] = puVar1[3] ^ in_RAX;
  puVar1[1] = ((in_RAX - (uVar3 | in_RAX)) + uVar3 ^ 0xffffffffffffffff) & (uVar3 | in_RAX);
  *puVar1 = unaff_RDI;
  uVar2 = puVar1[4];
  puVar1[4] = ~puVar1[4];
  puVar1[4] = puVar1[4] | in_RAX;
  puVar1[-1] = in_R9;
  puVar1[4] = 0xfffffffffffffffe - ~-((~in_RAX | uVar2) & puVar1[4]);
  FUN_161c11fdb();
  return;
}



// FUNCTION 14d99e3ba FUN_14d99e3ba body=357 status=ok
// SIG undefined FUN_14d99e3ba(void)

/* WARNING: Removing unreachable block (ram,0x00014d99e461) */

void FUN_14d99e3ba(ushort *param_1)

{
  ulonglong *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 unaff_RSI;
  undefined8 uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  uVar2 = *param_1;
  uVar3 = *param_1;
  *param_1 = 0x2839;
  *param_1 = *param_1 ^ 0x2839;
  *param_1 = *param_1 + ~(uVar2 & 0x100) + uVar3 + 1;
  *(undefined8 *)(local_res20 + -8) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = 0x53cec69e;
  *puVar1 = *puVar1 ^ 0x53cec69e;
  *puVar1 = (ulonglong)(&LAB_14dd9644f + *puVar1);
  if (*puVar1 == 0) {
    FUN_14dd96433(uStackX_8);
    return;
  }
  FUN_14dd96433(uStackX_8);
  return;
}



// FUNCTION 14d99e523 FUN_14d99e523 body=169 status=ok
// SIG undefined FUN_14d99e523(void)

void FUN_14d99e523(void)

{
  return;
}



// FUNCTION 14d99e5cd FUN_14d99e5cd body=167 status=ok
// SIG undefined FUN_14d99e5cd(void)

/* WARNING: Removing unreachable block (ram,0x00014d99e629) */

void FUN_14d99e5cd(void)

{
  return;
}



// FUNCTION 14d99e675 FUN_14d99e675 body=273 status=ok
// SIG undefined FUN_14d99e675(void)

void FUN_14d99e675(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_60;
  
  uVar1 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = *param_2 | unaff_R15;
  *param_2 = 0xffffffffffffffff - ((~unaff_R15 | uVar1) & *param_2);
  FUN_16103b560(param_1,in_stack_00000008);
  lVar3 = local_60 + unaff_R15 + (local_60 & unaff_R15) * -2;
  FUN_161cd0a3d();
  uVar1 = *(ulonglong *)((~unaff_R15 + param_5) - (~unaff_R15 & param_5));
  uVar2 = ~uVar1 | unaff_R15;
  FUN_16629c2f6(lVar3,~((~uVar2 | ~unaff_R15 | uVar1) + uVar2 + 1));
  return;
}



// FUNCTION 14d99e788 FUN_14d99e788 body=867 status=ok
// SIG undefined FUN_14d99e788(void)

void FUN_14d99e788(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = ~*unaff_RSI | unaff_R15;
  FUN_16629c2f6(param_1,~((~uVar1 | ~unaff_R15 | *unaff_RSI) + uVar1 + 1));
  return;
}



// FUNCTION 14d99e817 FUN_14d99e817 body=304 status=ok
// SIG undefined FUN_14d99e817(void)

/* WARNING: Removing unreachable block (ram,0x00014d99e8b6) */

void FUN_14d99e817(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff63fc2ea + unaff_RSI);
  puVar1[-1] = in_RAX;
  puVar1[-2] = unaff_RSI - 0x9c03d16;
  lVar2 = *(longlong *)(unaff_R13 + -0x78);
  *puVar1 = 0;
  *puVar1 = *puVar1 + lVar2;
  uVar4 = *puVar1;
  *puVar1 = uVar4;
  uVar4 = *puVar1 + unaff_R15 + (uVar4 & unaff_R15) * -2;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  bVar3 = (uVar4 & 0x1f) != 0;
  if ((bVar3 || -1 < (longlong)uVar4) &&
      (!bVar3 || -1 < (short)((short)puVar1 << ((byte)uVar4 & 0x1f)))) {
    FUN_15758d9eb(uVar4,*puVar1);
    return;
  }
  *puVar1 = uVar4;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  *puVar1 = unaff_R14;
  uVar4 = *puVar1;
  *puVar1 = uVar4;
  puVar1[-1] = uVar4;
  puVar1[-2] = uVar4;
  *puVar1 = (ulonglong)FUN_15758da8b;
  puVar1[-1] = (ulonglong)&LAB_16119b296;
  return;
}



// FUNCTION 14d99e949 FUN_14d99e949 body=16 status=ok
// SIG undefined FUN_14d99e949(void)

void FUN_14d99e949(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7bcb9f(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d99e971 FUN_14d99e971 body=67 status=ok
// SIG undefined FUN_14d99e971(void)

undefined8 FUN_14d99e971(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d99e9de FUN_14d99e9de body=148 status=ok
// SIG undefined FUN_14d99e9de(void)

void FUN_14d99e9de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_157619cc8(param_1,param_2,param_3,FUN_157619cc8);
  return;
}



// FUNCTION 14d99ebc4 FUN_14d99ebc4 body=84 status=ok
// SIG undefined FUN_14d99ebc4(void)

void FUN_14d99ebc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_14d7a6492(local_res8,param_2);
  return;
}



// FUNCTION 14d99ec9e FUN_14d99ec9e body=500 status=ok
// SIG undefined FUN_14d99ec9e(void)

/* WARNING: Removing unreachable block (ram,0x0001653c5053) */
/* WARNING: Removing unreachable block (ram,0x0001653c5059) */
/* WARNING: Removing unreachable block (ram,0x00014d99edd0) */
/* WARNING: Removing unreachable block (ram,0x00014d99ee94) */

void FUN_14d99ec9e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong unaff_R12;
  
  puVar11 = *(ulonglong **)(unaff_RDI + -0x90);
  uVar6 = FUN_16677307a();
  uVar9 = *(ulonglong *)(unaff_R12 + -0x58) + uVar6 +
          (*(ulonglong *)(unaff_R12 + -0x58) & uVar6) * -2;
  uVar7 = FUN_14dd27ba9(uVar9,*(ulonglong *)(unaff_R12 + -0x78) ^ uVar6);
  *puVar11 = *(ulonglong *)(unaff_R12 + -0x60);
  uVar6 = *puVar11;
  uVar1 = *(ulonglong *)(unaff_R12 + -0x40);
  *puVar11 = uVar9;
  uVar9 = *(ulonglong *)(unaff_R12 + -0x30);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80);
  uVar3 = *(ulonglong *)(unaff_R12 + -0x28);
  *puVar11 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar5 = *puVar11;
  *(undefined4 *)puVar11 = 0;
  *(undefined4 *)((longlong)puVar11 + 4) = 0;
  uVar10 = *puVar11 + *(longlong *)(unaff_R12 + -0x78);
  uVar8 = uVar10 ^ 0xffffffffffffffff;
  *puVar11 = (-~uVar7 - (~uVar1 + 2)) + (uVar1 & uVar7) * -2;
  uVar4 = *(undefined8 *)(unaff_R12 + -0x50);
  *puVar11 = uVar6 ^ uVar7;
  puVar11[-1] = uVar4;
  puVar11[-1] = uVar3 ^ uVar7;
  FUN_1658ba2a2(uVar5 ^ uVar7,
                ~(0xffffffffffffffff - (~(~uVar7 | uVar10) | ~((~(uVar8 & uVar7) + uVar7) - ~uVar8))
                 ),uVar2 ^ uVar7,uVar9 ^ uVar7);
  return;
}



// FUNCTION 14d99ee94 FUN_14d99ee94 body=157 status=ok
// SIG undefined FUN_14d99ee94(void)

void FUN_14d99ee94(void)

{
  undefined8 local_res18;
  
  FUN_161b32db5(local_res18);
  return;
}



// FUNCTION 14d99efd5 FUN_14d99efd5 body=113 status=ok
// SIG undefined FUN_14d99efd5(void)

void FUN_14d99efd5(void)

{
  return;
}



// FUNCTION 14d99f17e FUN_14d99f17e body=126 status=ok
// SIG undefined FUN_14d99f17e(void)

void FUN_14d99f17e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156ee0578(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        ~(~*(ulonglong *)(unaff_RDI + -0x68) | ~param_1) * -2);
  return;
}



// FUNCTION 14d99f1fd FUN_14d99f1fd body=126 status=ok
// SIG undefined FUN_14d99f1fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d983cd5) */
/* WARNING: Removing unreachable block (ram,0x00014d983cdb) */
/* WARNING: Removing unreachable block (ram,0x00014d983ce0) */
/* WARNING: Removing unreachable block (ram,0x00014d983ba1) */
/* WARNING: Removing unreachable block (ram,0x00014d983ba7) */
/* WARNING: Removing unreachable block (ram,0x00014d983c01) */
/* WARNING: Removing unreachable block (ram,0x00014d983c05) */
/* WARNING: Removing unreachable block (ram,0x00014d983cbb) */
/* WARNING: Removing unreachable block (ram,0x00014d983cb6) */
/* WARNING: Removing unreachable block (ram,0x00014d983cc8) */
/* WARNING: Removing unreachable block (ram,0x00016543770e) */
/* WARNING: Removing unreachable block (ram,0x0001654377a7) */
/* WARNING: Removing unreachable block (ram,0x0001654377a2) */
/* WARNING: Removing unreachable block (ram,0x00015b9397ba) */
/* WARNING: Removing unreachable block (ram,0x0001651adc6f) */
/* WARNING: Removing unreachable block (ram,0x00015b9397cb) */
/* WARNING: Removing unreachable block (ram,0x00015b93983e) */
/* WARNING: Removing unreachable block (ram,0x00015b939844) */
/* WARNING: Removing unreachable block (ram,0x00015734636e) */
/* WARNING: Removing unreachable block (ram,0x00014d983af0) */
/* WARNING: Removing unreachable block (ram,0x00014d983af6) */
/* WARNING: Removing unreachable block (ram,0x00014d983b9c) */
/* WARNING: Removing unreachable block (ram,0x000165b22c32) */
/* WARNING: Removing unreachable block (ram,0x00015706b1cb) */
/* WARNING: Removing unreachable block (ram,0x00015706b27b) */
/* WARNING: Removing unreachable block (ram,0x00016210542a) */
/* WARNING: Removing unreachable block (ram,0x0001651adbfa) */
/* WARNING: Removing unreachable block (ram,0x0001666addf5) */
/* WARNING: Removing unreachable block (ram,0x00015b93960d) */
/* WARNING: Removing unreachable block (ram,0x00015b9396fe) */
/* WARNING: Removing unreachable block (ram,0x00015b939721) */
/* WARNING: Removing unreachable block (ram,0x00015b939726) */
/* WARNING: Removing unreachable block (ram,0x00015b93972c) */
/* WARNING: Removing unreachable block (ram,0x00015706b0a5) */
/* WARNING: Removing unreachable block (ram,0x00015706b1c5) */
/* WARNING: Removing unreachable block (ram,0x00015b4e2dce) */
/* WARNING: Removing unreachable block (ram,0x00015706b1c0) */
/* WARNING: Removing unreachable block (ram,0x00015706b281) */

void FUN_14d99f1fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffb0d3b28 + unaff_R14);
  uVar6 = *puVar1;
  puVar2 = puVar1 + 2;
  *puVar2 = 0;
  *puVar2 = *puVar2 + unaff_R15;
  uVar3 = *puVar2;
  puVar1[3] = unaff_RBX;
  uVar7 = puVar1[3];
  puVar1[4] = puVar1[4] ^ in_RAX;
  puVar1[3] = param_1;
  puVar2 = puVar1 + 2;
  *puVar2 = uVar7;
  uVar7 = puVar1[5];
  puVar1[5] = ~puVar1[5];
  puVar1[5] = puVar1[5] | in_RAX;
  puVar1[1] = param_4;
  puVar1[1] = puVar1[1];
  *puVar1 = in_RAX;
  puVar1[-1] = unaff_RDI;
  puVar1[5] = ~((puVar1[5] - (~in_RAX | uVar7 | puVar1[5])) + (~in_RAX | uVar7));
  uVar4 = *puVar1;
  uVar5 = puVar1[3];
  puVar1[3] = uVar6;
  *puVar2 = ~((~in_RAX | uVar3) & (uVar3 ^ 0xffffffffffffffff | in_RAX));
  puVar1[1] = uVar4;
  *(undefined4 *)(puVar1 + 1) = 0x843bcf22;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
  lVar8 = puVar1[1];
  puVar1[1] = unaff_RSI;
  uVar7 = *(ulonglong *)((longlong)puVar2 + lVar8 + 0x7bc430fe);
  *puVar2 = *puVar2;
  puVar1[1] = uVar5;
  puVar1[6] = (~uVar4 | puVar1[6]) + uVar4 + 1;
  puVar1[6] = ~puVar1[6];
  puVar1[6] = puVar1[6] & (uVar7 | uVar4);
  puVar1[4] = param_3;
  puVar1[3] = *puVar2;
  FUN_1666addf5();
  return;
}



// FUNCTION 14d99f285 thunk_FUN_14d99f28b body=5 status=ok
// SIG undefined thunk_FUN_14d99f28b(void)

void thunk_FUN_14d99f28b(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  (*(code *)0x16123c88e)
            (unaff_retaddr,
             ~((~unaff_retaddr | *(ulonglong *)(unaff_RDI + -0x68)) &
              (~*(ulonglong *)(unaff_RDI + -0x68) | unaff_retaddr)));
  return;
}



// FUNCTION 14d99f28b FUN_14d99f28b body=122 status=ok
// SIG undefined FUN_14d99f28b(void)

void FUN_14d99f28b(void)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  (*(code *)0x16123c88e)
            (unaff_retaddr,
             ~((~unaff_retaddr | *(ulonglong *)(unaff_RDI + -0x68)) &
              (~*(ulonglong *)(unaff_RDI + -0x68) | unaff_retaddr)));
  return;
}



// FUNCTION 14d99f309 FUN_14d99f309 body=468 status=ok
// SIG undefined FUN_14d99f309(void)

/* WARNING: Removing unreachable block (ram,0x000164750d1f) */
/* WARNING: Removing unreachable block (ram,0x00015b673002) */
/* WARNING: Removing unreachable block (ram,0x000164750da0) */
/* WARNING: Removing unreachable block (ram,0x000164750da6) */
/* WARNING: Removing unreachable block (ram,0x000164750dab) */
/* WARNING: Removing unreachable block (ram,0x000160cee6a2) */
/* WARNING: Removing unreachable block (ram,0x000160cee72d) */
/* WARNING: Removing unreachable block (ram,0x000160cee738) */
/* WARNING: Removing unreachable block (ram,0x000160cee73e) */
/* WARNING: Removing unreachable block (ram,0x000165dcc4c2) */
/* WARNING: Removing unreachable block (ram,0x000165dcc556) */
/* WARNING: Removing unreachable block (ram,0x000165dcc55b) */
/* WARNING: Removing unreachable block (ram,0x000165dcc561) */
/* WARNING: Removing unreachable block (ram,0x00014da7f48e) */
/* WARNING: Removing unreachable block (ram,0x000165baa30d) */
/* WARNING: Removing unreachable block (ram,0x000165baa3b1) */
/* WARNING: Removing unreachable block (ram,0x00014d99f399) */
/* WARNING: Removing unreachable block (ram,0x00014d99f39f) */
/* WARNING: Removing unreachable block (ram,0x0001577ffae9) */
/* WARNING: Removing unreachable block (ram,0x00014d99f435) */
/* WARNING: Removing unreachable block (ram,0x00014d99f43b) */
/* WARNING: Removing unreachable block (ram,0x00014d99f440) */
/* WARNING: Removing unreachable block (ram,0x000165baa3bc) */
/* WARNING: Removing unreachable block (ram,0x000165baa3c2) */
/* WARNING: Removing unreachable block (ram,0x000160cee7da) */
/* WARNING: Removing unreachable block (ram,0x000160cee7e6) */
/* WARNING: Removing unreachable block (ram,0x000166412f28) */
/* WARNING: Removing unreachable block (ram,0x000160cee868) */
/* WARNING: Removing unreachable block (ram,0x000160cee86e) */

void FUN_14d99f309(void)

{
  FUN_165baa30d();
  return;
}



// FUNCTION 14d99f6c6 FUN_14d99f6c6 body=315 status=ok
// SIG undefined FUN_14d99f6c6(void)

void FUN_14d99f6c6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong in_stack_00000018;
  
  pcVar1 = FUN_162815d71;
  FUN_162815d71(FUN_162815d71,in_stack_00000018 + param_1,param_3,param_4,
                ((param_1 - (in_stack_00000018 | param_1)) + in_stack_00000018) * 2);
  FUN_164b9493c(pcVar1);
  return;
}



// FUNCTION 14d99f897 FUN_14d99f897 body=127 status=ok
// SIG undefined FUN_14d99f897(void)

/* WARNING: Removing unreachable block (ram,0x00014d99f9b1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d99f897(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_R14;
  ulonglong local_res18;
  longlong in_stack_00000028;
  
  uVar1 = ~(local_res18 & unaff_RBP) & (local_res18 | unaff_RBP);
  uVar2 = FUN_157075dbc();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBX;
  *(ulonglong *)(in_stack_00000028 + -0x10) = ~((~unaff_RBP | unaff_RSI) & (~unaff_RSI | unaff_RBP))
  ;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *(ulonglong *)(in_stack_00000028 + -0x10) = uVar1;
  *(ulonglong *)(in_stack_00000028 + -0x18) = uVar1;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uVar2;
  uVar2 = *(undefined8 *)(in_stack_00000028 + -0x20);
  *(code **)(in_stack_00000028 + -0x20) = FUN_157075dbc;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) + 0x1654d534b;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar2;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -0x18);
  return;
}



// FUNCTION 14d99f917 FUN_14d99f917 body=166 status=ok
// SIG undefined FUN_14d99f917(void)

/* WARNING: Removing unreachable block (ram,0x00014d99f9b1) */

void FUN_14d99f917(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 unaff_R14;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = in_R9;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  uVar1 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x1654d534b;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x18);
  return;
}


