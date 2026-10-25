// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd6cf71 FUN_14dd6cf71 body=157 status=ok
// SIG undefined FUN_14dd6cf71(void)

void FUN_14dd6cf71(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_R12;
  undefined8 unaff_retaddr;
  int aiStackX_10 [6];
  
  uVar1 = ~(~(unaff_R12 & 0xffffffffcd077f5c) & (unaff_R12 | 0xffffffffcd077f5c));
  param_1 = param_1 ^ ~(~(uVar1 & 0xffffffffc513aba5) & (uVar1 | 0xffffffffc513aba5));
  *(undefined4 *)((longlong)aiStackX_10 + param_1) = 0xefb25eaa;
  *(int *)((longlong)aiStackX_10 + param_1) = *(int *)((longlong)aiStackX_10 + param_1) + 0x104da156
  ;
  *(undefined4 *)((longlong)aiStackX_10 + param_1) =
       *(undefined4 *)((longlong)aiStackX_10 + param_1);
  *(int *)((longlong)aiStackX_10 + param_1) = *(int *)((longlong)aiStackX_10 + param_1) + 0x69706170
  ;
  (*(code *)&LAB_15b76fa89)(param_1,&LAB_15b76fa89,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dd6d014 FUN_14dd6d014 body=2 status=ok
// SIG undefined FUN_14dd6d014(void)

undefined8 FUN_14dd6d014(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd6d0b6 FUN_14dd6d0b6 body=139 status=ok
// SIG undefined FUN_14dd6d0b6(void)

void FUN_14dd6d0b6(undefined8 param_1)

{
  FUN_160be9762(param_1,&stack0x00000000);
  return;
}



// FUNCTION 14dd6d148 FUN_14dd6d148 body=187 status=ok
// SIG undefined FUN_14dd6d148(void)

void FUN_14dd6d148(void)

{
  return;
}



// FUNCTION 14dd6d204 FUN_14dd6d204 body=341 status=ok
// SIG undefined FUN_14dd6d204(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6d2a4) */
/* WARNING: Removing unreachable block (ram,0x00014dd6d2cb) */
/* WARNING: Removing unreachable block (ram,0x00014dd6d2ce) */

undefined8 FUN_14dd6d204(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong in_stack_00000008;
  
  if (-1 < (longlong)(*(ulonglong *)(in_stack_00000008 + -0xa0) | param_1)) {
    uVar1 = FUN_1621ae662(param_1,param_2,param_3,param_4,*(undefined8 *)(in_stack_00000008 + -0x90)
                         );
    return uVar1;
  }
  uVar1 = FUN_1627490e4();
  return uVar1;
}



// FUNCTION 14dd6d35c FUN_14dd6d35c body=235 status=ok
// SIG undefined FUN_14dd6d35c(void)

undefined8 FUN_14dd6d35c(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 8);
  lVar2 = *(longlong *)(unaff_RBX + 8);
  lVar3 = *(longlong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = ~*(ulonglong *)(unaff_RBX + 8);
  *(ulonglong *)(unaff_RBX + 8) = *(ulonglong *)(unaff_RBX + 8) | uStackX_8;
  *(ulonglong *)(unaff_RBX + 8) =
       ~(((-1 - ((~uVar1 | param_2) + lVar2 + 1)) + lVar3) - ~unaff_R15 &
        *(ulonglong *)(unaff_RBX + 8));
  FUN_15b75d78a(uStackX_8,local_res10);
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dd6d4b4 FUN_14dd6d4b4 body=287 status=ok
// SIG undefined FUN_14dd6d4b4(void)

void FUN_14dd6d4b4(void)

{
  FUN_16544a2e1();
  thunk_FUN_156399580(0x100,thunk_FUN_156399580);
  return;
}



// FUNCTION 14dd6d5d7 FUN_14dd6d5d7 body=1375 status=ok
// SIG undefined FUN_14dd6d5d7(void)

/* WARNING: Removing unreachable block (ram,0x000165282e34) */
/* WARNING: Removing unreachable block (ram,0x000165282ed2) */
/* WARNING: Removing unreachable block (ram,0x000165282ed9) */
/* WARNING: Removing unreachable block (ram,0x000165282ee7) */
/* WARNING: Removing unreachable block (ram,0x000165282eed) */
/* WARNING: Removing unreachable block (ram,0x00014dd6d686) */
/* WARNING: Removing unreachable block (ram,0x000165282e24) */
/* WARNING: Removing unreachable block (ram,0x00014dd6d6ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd6d6b9) */
/* WARNING: Removing unreachable block (ram,0x00014dadad36) */
/* WARNING: Removing unreachable block (ram,0x0001666abe13) */
/* WARNING: Removing unreachable block (ram,0x00014dadae3e) */
/* WARNING: Removing unreachable block (ram,0x00014dadae44) */
/* WARNING: Removing unreachable block (ram,0x00014dadabbf) */
/* WARNING: Removing unreachable block (ram,0x00014dadae49) */

undefined8 FUN_14dd6d5d7(void)

{
  undefined8 uVar1;
  
  FUN_156ab4bf8();
  FUN_1629e7c2c();
  FUN_165f79331(&DAT_ac91427a73ca2b2b);
  uVar1 = FUN_165735659();
  return uVar1;
}



// FUNCTION 14dd6d872 FUN_14dd6d872 body=59 status=ok
// SIG undefined FUN_14dd6d872(void)

void FUN_14dd6d872(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14dd6d8c5 FUN_14dd6d8c5 body=37 status=ok
// SIG undefined FUN_14dd6d8c5(void)

void FUN_14dd6d8c5(void)

{
  return;
}



// FUNCTION 14dd6d98d FUN_14dd6d98d body=178 status=ok
// SIG undefined FUN_14dd6d98d(void)

undefined8 FUN_14dd6d98d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd6da41 FUN_14dd6da41 body=177 status=ok
// SIG undefined FUN_14dd6da41(void)

/* WARNING: Removing unreachable block (ram,0x000165f6d7bf) */
/* WARNING: Removing unreachable block (ram,0x000165f6d7ca) */
/* WARNING: Removing unreachable block (ram,0x000165f6d861) */
/* WARNING: Removing unreachable block (ram,0x000165f6d867) */
/* WARNING: Removing unreachable block (ram,0x000165f6d856) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1a7e) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1b15) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1b1a) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1b20) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1b25) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1bc1) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1bc7) */
/* WARNING: Removing unreachable block (ram,0x00015b3f1bcc) */
/* WARNING: Removing unreachable block (ram,0x00016195fd3e) */
/* WARNING: Removing unreachable block (ram,0x0001567c5c34) */
/* WARNING: Removing unreachable block (ram,0x0001567c5c3a) */
/* WARNING: Removing unreachable block (ram,0x0001567c5cbd) */
/* WARNING: Removing unreachable block (ram,0x0001567c5cc2) */
/* WARNING: Removing unreachable block (ram,0x0001567c5cc8) */
/* WARNING: Removing unreachable block (ram,0x00015661e84c) */
/* WARNING: Removing unreachable block (ram,0x000165f6d7c5) */
/* WARNING: Removing unreachable block (ram,0x0001567c5ba4) */
/* WARNING: Removing unreachable block (ram,0x00014dd6dae2) */
/* WARNING: Removing unreachable block (ram,0x00014dd6dae8) */
/* WARNING: Removing unreachable block (ram,0x00014dd6daed) */

undefined8 FUN_14dd6da41(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = thunk_FUN_15b268ad1(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                              *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                              *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar1;
}



// FUNCTION 14dd6daf3 FUN_14dd6daf3 body=20 status=ok
// SIG undefined FUN_14dd6daf3(void)

void FUN_14dd6daf3(void)

{
  return;
}



// FUNCTION 14dd6db69 FUN_14dd6db69 body=143 status=ok
// SIG undefined FUN_14dd6db69(void)

void FUN_14dd6db69(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156469507(param_1,*(longlong *)(unaff_R12 + -0x80) + in_RAX,*(longlong *)(unaff_R12 + -0x80),
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14dd6dbf9 FUN_14dd6dbf9 body=3 status=ok
// SIG undefined FUN_14dd6dbf9(void)

void FUN_14dd6dbf9(void)

{
  return;
}



// FUNCTION 14dd6dc9a FUN_14dd6dc9a body=523 status=ok
// SIG undefined FUN_14dd6dc9a(void)

void FUN_14dd6dc9a(void)

{
  int iVar1;
  code *pcVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong unaff_retaddr;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 local_38 [4];
  longlong lStack_18;
  
  lStack_18 = *(ulonglong *)(unaff_RDI + -0x88) + unaff_retaddr +
              (*(ulonglong *)(unaff_RDI + -0x88) & unaff_retaddr) * -2;
  uVar3 = 0xffffffffffffff68;
  local_38[1] = *(undefined8 *)(unaff_RDI + -0x98);
  pcVar2 = FUN_161a1d504;
  local_38[0] = 0x14dd6dd2b;
  iVar1 = FUN_161a1d504();
  local_38[2] = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)
   ((longlong)local_38 +
   (CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x23bf7319) ^ 0x23bf7311)) =
       *(undefined8 *)(unaff_RDI + -8);
  local_38[0] = *(undefined8 *)(unaff_RDI + -0x98);
  FUN_166d9fcc4(pcVar2);
  uVar3 = ~(~(uVar3 & 0xffffffffc1a0ac33) & (uVar3 | 0xffffffffc1a0ac33));
  uVar3 = ~(~(uVar3 & 0xffffffffbbd0aa02) & (uVar3 | 0xffffffffbbd0aa02));
  *(undefined4 *)(&stack0xffffffffffffffb8 + uVar3) = 0xae63367b;
  *(int *)(&stack0xffffffffffffffb8 + uVar3) =
       *(int *)(&stack0xffffffffffffffb8 + uVar3) + 0x519cc985;
  if (iVar1 < 0) {
    (*(code *)&LAB_166468ea0)();
    return;
  }
  FUN_161b11dd5();
  return;
}



// FUNCTION 14dd6dfc3 FUN_14dd6dfc3 body=230 status=ok
// SIG undefined FUN_14dd6dfc3(void)

void FUN_14dd6dfc3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_162e83bd9(param_1,0xffffffffffffffef,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dd6e34f FUN_14dd6e34f body=305 status=ok
// SIG undefined FUN_14dd6e34f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6e3e0) */

ulonglong FUN_14dd6e34f(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  
  uVar1 = *(ulonglong *)(param_2 + -0x38);
  uVar2 = in_R10 ^ 0xffffffffffffffff;
  return ~((~((uVar1 - (uVar2 | uVar1)) + uVar2) + uVar1) - ~uVar2 & (~uVar1 | in_R10));
}



// FUNCTION 14dd6e482 FUN_14dd6e482 body=529 status=ok
// SIG undefined FUN_14dd6e482(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6e5f3) */
/* WARNING: Removing unreachable block (ram,0x00014dd6e541) */
/* WARNING: Removing unreachable block (ram,0x00014dd6e5e8) */
/* WARNING: Removing unreachable block (ram,0x00014dd6e5ee) */
/* WARNING: Removing unreachable block (ram,0x00014dd6e5dd) */
/* WARNING: Removing unreachable block (ram,0x00014dd6e530) */

void FUN_14dd6e482(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 uVar6;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong local_res8;
  ushort auStackX_20 [4];
  
  *(ulonglong *)(&stack0x00000028 + in_R11) = *(ulonglong *)(&stack0x00000028 + in_R11) ^ local_res8
  ;
  *(ushort *)((longlong)auStackX_20 + in_R11) = *(ushort *)((longlong)auStackX_20 + in_R11) & 0xfeff
  ;
  puVar1 = *(ulonglong **)(&stack0x00000028 + in_R11);
  puVar1[-1] = unaff_R12;
  puVar1[-2] = puVar1[-1];
  puVar1[-3] = in_R10;
  puVar1[-4] = param_3;
  uVar4 = puVar1[-4];
  puVar1[-1] = 0x6fcf4997;
  uVar6 = puVar1[-3];
  puVar1[-3] = unaff_R14;
  puVar1[-4] = param_1;
  uVar2 = puVar1[-1];
  puVar1[-5] = unaff_RDI;
  puVar1[-6] = (ulonglong)(puVar1 + -2);
  lVar5 = puVar1[-6];
  *(ulonglong *)(lVar5 + 8) = *(ulonglong *)(lVar5 + 8) | 0xffffffff9030b668;
  uVar3 = *(ulonglong *)(lVar5 + 8);
  *(undefined8 *)(lVar5 + 8) = 0;
  *(longlong *)(lVar5 + 8) =
       *(longlong *)(lVar5 + 8) +
       (-1 - (~(0xffffffff9030b66a - ((~uVar2 & 0xffffffff9030b668) + 2)) & uVar3));
  puVar1[-5] = unaff_R13;
  puVar1[-6] = *(ulonglong *)(lVar5 + 8);
  puVar1[-1] = (ulonglong)(FUN_15b12b08a + puVar1[-1]);
  puVar1[-3] = (ulonglong)FUN_165d48b6e;
  FUN_15b12b044(puVar1[-4],param_2,uVar4);
  puVar1[-2] = param_2;
  puVar1[-3] = uVar6;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x14d7a45d2;
  return;
}



// FUNCTION 14dd6e6b1 FUN_14dd6e6b1 body=129 status=ok
// SIG undefined FUN_14dd6e6b1(void)

void FUN_14dd6e6b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165716254(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd6e732 FUN_14dd6e732 body=152 status=ok
// SIG undefined FUN_14dd6e732(void)

void FUN_14dd6e732(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000018;
  
  (*(code *)0x164898ded)(param_1,param_2,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14dd6e7cb FUN_14dd6e7cb body=171 status=ok
// SIG undefined FUN_14dd6e7cb(void)

ulonglong FUN_14dd6e7cb(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return ~(in_RAX & unaff_R15) & (in_RAX | unaff_R15);
}



// FUNCTION 14dd6e9a0 thunk_FUN_14dd6e9a6 body=5 status=ok
// SIG undefined thunk_FUN_14dd6e9a6(void)

void thunk_FUN_14dd6e9a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 uStackX_18;
  
  if (uStackX_18 < 0) {
    FUN_162b3bd49(in_stack_00000008,param_2,uStackX_18);
    return;
  }
  return;
}



// FUNCTION 14dd6e9a6 FUN_14dd6e9a6 body=225 status=ok
// SIG undefined FUN_14dd6e9a6(void)

void FUN_14dd6e9a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 local_res18;
  
  if (local_res18 < 0) {
    FUN_162b3bd49(in_stack_00000008,param_2,local_res18);
    return;
  }
  return;
}



// FUNCTION 14dd6ee09 FUN_14dd6ee09 body=506 status=ok
// SIG undefined FUN_14dd6ee09(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6ef83) */
/* WARNING: Removing unreachable block (ram,0x00014dd6ef59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd6ee09(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_1669d744b();
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R12 + -0x48) + uVar1 +
           (*(ulonglong *)(unaff_R12 + -0x48) & uVar1) * -2)) {
    thunk_FUN_165a658d1();
    return;
  }
  thunk_FUN_165a658d1();
  return;
}



// FUNCTION 14dd6f00c FUN_14dd6f00c body=114 status=ok
// SIG undefined FUN_14dd6f00c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6f06f) */

void FUN_14dd6f00c(void)

{
  FUN_162ab2730();
  return;
}



// FUNCTION 14dd6f3f4 FUN_14dd6f3f4 body=155 status=ok
// SIG undefined FUN_14dd6f3f4(void)

void FUN_14dd6f3f4(void)

{
  FUN_1622d1393();
  return;
}



// FUNCTION 14dd6f490 FUN_14dd6f490 body=348 status=ok
// SIG undefined FUN_14dd6f490(void)

void FUN_14dd6f490(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_R10;
  longlong in_R11;
  longlong unaff_R12;
  
  lVar2 = *(ulonglong *)(in_R11 + -0x28) + in_R10 + (*(ulonglong *)(in_R11 + -0x28) & in_R10) * -2;
  FUN_14da3ed47(lVar2,*(ulonglong *)(in_R11 + -0x80) ^ in_R10);
  lVar1 = -*(longlong *)(unaff_R12 + -0x60);
  FUN_15b40d3e3(lVar2,lVar1,*(longlong *)(unaff_R12 + -0x60),lVar1);
  return;
}



// FUNCTION 14dd6f73a FUN_14dd6f73a body=352 status=ok
// SIG undefined FUN_14dd6f73a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd6f7c0) */
/* WARNING: Removing unreachable block (ram,0x00014dd6f7c6) */
/* WARNING: Removing unreachable block (ram,0x000161995e17) */

undefined8 FUN_14dd6f73a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161995e17();
  return uVar1;
}



// FUNCTION 14dd6f89e FUN_14dd6f89e body=16 status=ok
// SIG undefined FUN_14dd6f89e(void)

void FUN_14dd6f89e(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd6f9e4 FUN_14dd6f9e4 body=14 status=ok
// SIG undefined FUN_14dd6f9e4(void)

void FUN_14dd6f9e4(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd6fd75 FUN_14dd6fd75 body=82 status=ok
// SIG undefined FUN_14dd6fd75(void)

undefined8 FUN_14dd6fd75(void)

{
  ushort *unaff_RBP;
  undefined8 unaff_R13;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  *unaff_RBP = -*unaff_RBP;
  *unaff_RBP = *unaff_RBP - 1;
  *unaff_RBP = *unaff_RBP | 0x100;
  *unaff_RBP = -*unaff_RBP;
  *unaff_RBP = *unaff_RBP - 1;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x161c92a;
  *(undefined8 *)(in_stack_00000028 + -0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000028 + -0x28cf) = &DAT_156ef2e4a;
  return local_res8;
}



// FUNCTION 14dd6fe9d thunk_FUN_165e93f27 body=5 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dd6fea2 thunk_FUN_14dd6feba body=5 status=ok
// SIG undefined thunk_FUN_14dd6feba(void)

/* WARNING: Removing unreachable block (ram,0x00015666c2a3) */
/* WARNING: Removing unreachable block (ram,0x00014dd6ffb2) */
/* WARNING: Removing unreachable block (ram,0x00014dd6ffb8) */
/* WARNING: Removing unreachable block (ram,0x00015666c298) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
thunk_FUN_14dd6feba(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_4 == 0x1302af) {
    return in_RAX;
  }
  if (param_4 == 0x1302b0) {
    uVar1 = FUN_15710fea3(param_1,param_2,param_3,0x14d7c4e73);
    return uVar1;
  }
  if (param_4 == 0x1302b1) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (param_4 == 0x1302b2) {
    return in_RAX;
  }
  if (param_4 == 0x1302b3) {
    FUN_162728d63();
    uVar1 = FUN_15b345eeb(FUN_15b345eeb);
    return uVar1;
  }
  uVar1 = FUN_162728db7();
  return uVar1;
}



// FUNCTION 14dd6fea7 thunk_FUN_165e93f27 body=19 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dd6feba FUN_14dd6feba body=416 status=ok
// SIG undefined FUN_14dd6feba(void)

/* WARNING: Removing unreachable block (ram,0x00015666c2a3) */
/* WARNING: Removing unreachable block (ram,0x00014dd6ffb2) */
/* WARNING: Removing unreachable block (ram,0x00014dd6ffb8) */
/* WARNING: Removing unreachable block (ram,0x00015666c298) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd6feba(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_4 == 0x1302af) {
    return in_RAX;
  }
  if (param_4 == 0x1302b0) {
    uVar1 = FUN_15710fea3(param_1,param_2,param_3,0x14d7c4e73);
    return uVar1;
  }
  if (param_4 == 0x1302b1) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (param_4 == 0x1302b2) {
    return in_RAX;
  }
  if (param_4 == 0x1302b3) {
    FUN_162728d63();
    uVar1 = FUN_15b345eeb(FUN_15b345eeb);
    return uVar1;
  }
  uVar1 = FUN_162728db7();
  return uVar1;
}



// FUNCTION 14dd702ac FUN_14dd702ac body=100 status=ok
// SIG undefined FUN_14dd702ac(void)

void FUN_14dd702ac(void)

{
  return;
}



// FUNCTION 14dd703b1 FUN_14dd703b1 body=323 status=ok
// SIG undefined FUN_14dd703b1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd70451) */
/* WARNING: Removing unreachable block (ram,0x00014dd704b8) */
/* WARNING: Removing unreachable block (ram,0x00014dd704b3) */
/* WARNING: Removing unreachable block (ram,0x00014dd704d1) */
/* WARNING: Removing unreachable block (ram,0x000161227447) */

undefined8 FUN_14dd703b1(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong in_R10;
  undefined8 local_res8;
  
  *(ulonglong *)(in_R10 + 0x10) = ~param_2;
  uVar1 = FUN_161227447(param_1,local_res8);
  return uVar1;
}



// FUNCTION 14dd704f5 FUN_14dd704f5 body=173 status=ok
// SIG undefined FUN_14dd704f5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd705a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd70649) */
/* WARNING: Removing unreachable block (ram,0x00014dd7064f) */
/* WARNING: Removing unreachable block (ram,0x00016130e11e) */
/* WARNING: Removing unreachable block (ram,0x00016130e173) */
/* WARNING: Removing unreachable block (ram,0x00016130e177) */
/* WARNING: Removing unreachable block (ram,0x00014de58996) */
/* WARNING: Removing unreachable block (ram,0x00014de58986) */
/* WARNING: Removing unreachable block (ram,0x00014de589a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd7058f) */
/* WARNING: Removing unreachable block (ram,0x00014dd7059b) */
/* WARNING: Removing unreachable block (ram,0x00014dd70654) */

void FUN_14dd704f5(void)

{
  FUN_16685b520();
  return;
}



// FUNCTION 14dd705a8 FUN_14dd705a8 body=191 status=ok
// SIG undefined FUN_14dd705a8(void)

/* WARNING: Removing unreachable block (ram,0x00016130e173) */
/* WARNING: Removing unreachable block (ram,0x00014dd70654) */

void FUN_14dd705a8(void)

{
  ulonglong in_RAX;
  ulonglong in_R9;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~(~(in_R9 & 0xffffffffe4d6d24d) & (in_R9 | 0xffffffffe4d6d24d)) +
          *(longlong *)(unaff_R12 + -0x30);
  FUN_14da29256(-1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                     (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,(~uVar1 | ~in_RAX) & (uVar1 | in_RAX));
  return;
}



// FUNCTION 14dd70668 FUN_14dd70668 body=151 status=ok
// SIG undefined FUN_14dd70668(void)

void FUN_14dd70668(void)

{
  (*(code *)0x162f10b00)();
  return;
}



// FUNCTION 14dd708a0 FUN_14dd708a0 body=416 status=ok
// SIG undefined FUN_14dd708a0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd709fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd70a0d) */
/* WARNING: Removing unreachable block (ram,0x00014dd70a02) */

void FUN_14dd708a0(longlong param_1)

{
  longlong unaff_R12;
  
  FUN_16535a581(param_1,*(undefined8 *)(unaff_R12 + -0x78));
  *(undefined4 *)(&stack0x00000000 + param_1) = 0xac91427a;
  FUN_156c265fb();
  return;
}



// FUNCTION 14dd70b3c FUN_14dd70b3c body=142 status=ok
// SIG undefined FUN_14dd70b3c(void)

undefined8 FUN_14dd70b3c(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14dd70bd3 FUN_14dd70bd3 body=313 status=ok
// SIG undefined FUN_14dd70bd3(void)

/* WARNING: Removing unreachable block (ram,0x00016470f239) */
/* WARNING: Removing unreachable block (ram,0x0001660397e8) */
/* WARNING: Removing unreachable block (ram,0x00016603988c) */
/* WARNING: Removing unreachable block (ram,0x000166039897) */
/* WARNING: Removing unreachable block (ram,0x000166039892) */
/* WARNING: Removing unreachable block (ram,0x000160ee2205) */
/* WARNING: Removing unreachable block (ram,0x000166039764) */
/* WARNING: Removing unreachable block (ram,0x000166039800) */
/* WARNING: Removing unreachable block (ram,0x000166039806) */
/* WARNING: Removing unreachable block (ram,0x00016470f214) */
/* WARNING: Removing unreachable block (ram,0x0001564acc03) */
/* WARNING: Removing unreachable block (ram,0x0001564acc4f) */
/* WARNING: Removing unreachable block (ram,0x00014dd70d17) */
/* WARNING: Removing unreachable block (ram,0x00014dd70c50) */
/* WARNING: Removing unreachable block (ram,0x00014dd70d06) */
/* WARNING: Removing unreachable block (ram,0x0001660396b5) */
/* WARNING: Removing unreachable block (ram,0x000166039759) */
/* WARNING: Removing unreachable block (ram,0x0001564acb6f) */
/* WARNING: Removing unreachable block (ram,0x0001564acbf8) */
/* WARNING: Removing unreachable block (ram,0x000164bad701) */

undefined8 FUN_14dd70bd3(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 in_AL;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 local_res8;
  ulonglong in_stack_00000018;
  ulonglong local_res20;
  
  uVar4 = in_stack_00000018 ^ unaff_RBP;
  uVar2 = local_res20 ^ unaff_RBP;
  LOCK();
  UNLOCK();
  DAT_14d7a7581 = in_AL;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *(ulonglong *)(uVar2 - 0x20) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x80) != 0) * 0x80 | (ulonglong)((uVar4 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar4 & 0x10) != 0) * 0x10 | (ulonglong)((uVar4 & 4) != 0) * 4 |
       (ulonglong)((uVar4 & 1) != 0) | (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  uVar4 = *(ulonglong *)(uVar2 - 0x20);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x5d0ce91b;
  *puVar1 = *puVar1 ^ 0x5c62d775;
  uVar3 = FUN_15b3d5987(param_1,local_res8);
  return uVar3;
}



// FUNCTION 14dd70d17 FUN_14dd70d17 body=158 status=ok
// SIG undefined FUN_14dd70d17(void)

void FUN_14dd70d17(undefined8 param_1,undefined8 param_2,short param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *unaff_RBP = (0xffffU - param_3 | *unaff_RBP) - 0x100;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  *(undefined8 *)(param_5 + -0x18) = unaff_R12;
  *(undefined8 *)(param_5 + -0x20) = unaff_R15;
  FUN_165b9267a(param_1,&LAB_165b926d3,local_res18);
  return;
}



// FUNCTION 14dd70dc6 thunk_FUN_14dd70dcc body=5 status=ok
// SIG undefined thunk_FUN_14dd70dcc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd70e0d) */

undefined4 thunk_FUN_14dd70dcc(void)

{
  undefined4 uStackX_18;
  
  return uStackX_18;
}



// FUNCTION 14dd70dcc FUN_14dd70dcc body=123 status=ok
// SIG undefined FUN_14dd70dcc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd70e0d) */

undefined4 FUN_14dd70dcc(void)

{
  undefined4 uStackX_18;
  
  return uStackX_18;
}



// FUNCTION 14dd70e49 FUN_14dd70e49 body=298 status=ok
// SIG undefined FUN_14dd70e49(void)

/* WARNING: Removing unreachable block (ram,0x00014dd70fee) */

void FUN_14dd70e49(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong in_R9;
  bool in_ZF;
  
  if (!in_ZF) {
    FUN_16671e00c();
    lVar1 = *(longlong *)(unaff_RDI + -0x48);
    FUN_15670ab67();
    uVar2 = *(ulonglong *)(in_R9 + lVar1);
    FUN_162ada6c2(*(undefined8 *)(in_R9 + -0x78),*(undefined8 *)(in_R9 + -0x78),
                  *(ulonglong *)(in_R9 + -0x88) ^ 0x16671e00c,
                  FUN_16671e00c + (uVar2 & 0x16671e00c) * -2 + uVar2);
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dd70f75 FUN_14dd70f75 body=139 status=ok
// SIG undefined FUN_14dd70f75(void)

void FUN_14dd70f75(void)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (unaff_R15 == 0xffffffffffffffff && *(longlong *)(unaff_R13 + -0x38) == 0) {
    return;
  }
  FUN_162ada6c2(*(undefined8 *)(unaff_R13 + -0x78),*(undefined8 *)(unaff_R13 + -0x78),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + unaff_RSI) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + unaff_RSI) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd7100d FUN_14dd7100d body=95 status=ok
// SIG undefined FUN_14dd7100d(void)

void FUN_14dd7100d(undefined1 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char in_AL;
  uint7 in_register_00000001;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  lVar1 = -local_res18;
                    /* WARNING: Read-only address (ram,0x00014d7aa52d) is written */
  LOCK();
  uVar3 = param_1;
  if (in_AL != '\0') {
    uVar3 = uRam000000014d7aa52d;
  }
  uRam000000014d7aa52d = uVar3;
  UNLOCK();
  *(undefined8 *)(lVar1 + -8) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R12;
  *(ulonglong *)(lVar1 + -0x18) = (ulonglong)in_register_00000001 << 8;
  *(undefined4 *)(lVar1 + -0x18) = 0xda1489d;
  *(undefined4 *)(lVar1 + -0x14) = 0;
  lVar2 = *(longlong *)(lVar1 + -0x18);
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(longlong *)(lVar1 + -8) = lVar2 + -0xb2aa5a7;
  *(undefined8 *)(lVar1 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd71159 FUN_14dd71159 body=153 status=ok
// SIG undefined FUN_14dd71159(void)

undefined8 FUN_14dd71159(void)

{
  longlong unaff_RSI;
  
  return *(undefined8 *)(unaff_RSI + -0x50);
}



// FUNCTION 14dd711f9 FUN_14dd711f9 body=128 status=ok
// SIG undefined FUN_14dd711f9(void)

void FUN_14dd711f9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  
  FUN_160cefe3f(param_1,param_2,uStackX_10,~unaff_R15 | param_5);
  return;
}



// FUNCTION 14dd71281 FUN_14dd71281 body=130 status=ok
// SIG undefined FUN_14dd71281(void)

undefined8 FUN_14dd71281(void)

{
  undefined8 in_R9;
  
  return in_R9;
}



// FUNCTION 14dd71313 FUN_14dd71313 body=133 status=ok
// SIG undefined FUN_14dd71313(void)

void FUN_14dd71313(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166b6df3c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd7139b FUN_14dd7139b body=591 status=ok
// SIG undefined FUN_14dd7139b(void)

/* WARNING: Removing unreachable block (ram,0x0001569e7eb0) */
/* WARNING: Removing unreachable block (ram,0x0001569e7e9f) */
/* WARNING: Removing unreachable block (ram,0x0001569e7f1e) */
/* WARNING: Removing unreachable block (ram,0x0001569e7f23) */
/* WARNING: Removing unreachable block (ram,0x0001569e7f29) */
/* WARNING: Removing unreachable block (ram,0x0001569e7f2e) */
/* WARNING: Removing unreachable block (ram,0x0001569e8076) */
/* WARNING: Removing unreachable block (ram,0x0001569e8071) */
/* WARNING: Removing unreachable block (ram,0x0001569e7e6d) */
/* WARNING: Removing unreachable block (ram,0x00014dd71426) */

ulonglong FUN_14dd7139b(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong auStack_28 [2];
  
  uVar6 = unaff_RSI ^ 0xffffffffffffffff;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x80) | param_1;
  auStack_28[0] = ~(*(ulonglong *)(unaff_RDI + -0x80) & param_1);
  auStack_28[0] = (uVar3 - (auStack_28[0] | uVar3)) + auStack_28[0];
  uVar3 = *(ulonglong *)(unaff_RDI + -0x28) ^ param_1;
  auStack_28[1] =
       *(ulonglong *)(unaff_RDI + -0x68) + param_1 +
       (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2;
  if (*(ulonglong *)(unaff_RDI + -0x48) == 0xffffffffffffffff) {
    uVar4 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x48)) & param_1);
    uVar5 = *(ulonglong *)(unaff_RDI + -0x88) ^ param_1;
    uStack_30 = 0x8288ce9e;
    lVar2 = FUN_15afc9fae();
    *(ulonglong *)((longlong)auStack_28 + lVar2) = uVar6;
    *(longlong *)((longlong)auStack_28 + lVar2) =
         *(longlong *)((longlong)auStack_28 + lVar2) - (param_4 << ((byte)param_1 & 0x3f));
    *(undefined8 *)((longlong)auStack_28 + lVar2) = *(undefined8 *)(uVar4 - 0x60);
    uVar6 = *(ulonglong *)(uVar4 - 0x40);
    *(ulonglong *)((longlong)auStack_28 + lVar2) = uVar6;
    uVar4 = *(ulonglong *)((longlong)auStack_28 + lVar2);
    *(undefined4 *)((longlong)&uStack_30 + lVar2) = 0x19aec73;
    *(undefined4 *)((longlong)&uStack_2c + lVar2) = 0;
    lVar2 = *(longlong *)((longlong)&uStack_30 + lVar2) + lVar2;
    *(short *)(&stack0xfffffffffe65136b + lVar2) = (short)uVar3;
    uVar1 = CONCAT62((int6)(uVar3 >> 0x10),(short)((uVar6 & 0xffffffff) >> 0xf));
    *(undefined8 *)(&stack0xfffffffffe651363 + lVar2) = uVar1;
    *(undefined8 *)(&stack0xfffffffffe65135b + lVar2) = uVar1;
    *(undefined8 *)(&stack0xfffffffffe651353 + lVar2) = uVar1;
    *(undefined1 **)(&stack0xfffffffffe651363 + lVar2) = &LAB_156e565e8;
    *(undefined1 **)(&stack0xfffffffffe65135b + lVar2) = &LAB_1649ef6b3;
    return uVar4 ^ uVar5;
  }
  uVar3 = FUN_156e56489();
  return uVar3;
}



// FUNCTION 14dd715d9 FUN_14dd715d9 body=159 status=ok
// SIG undefined FUN_14dd715d9(void)

ulonglong FUN_14dd715d9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~(*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) &
         (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15);
}



// FUNCTION 14dd717c6 thunk_FUN_14dd717cc body=5 status=ok
// SIG undefined thunk_FUN_14dd717cc(void)

void thunk_FUN_14dd717cc(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x166865617)
            (param_1,0x166865617,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dd717cc FUN_14dd717cc body=143 status=ok
// SIG undefined FUN_14dd717cc(void)

void FUN_14dd717cc(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x166865617)
            (param_1,0x166865617,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dd7185b FUN_14dd7185b body=602 status=ok
// SIG undefined FUN_14dd7185b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd71a12) */
/* WARNING: Removing unreachable block (ram,0x00014dd71a2d) */
/* WARNING: Removing unreachable block (ram,0x00014dd71a38) */
/* WARNING: Removing unreachable block (ram,0x00014dd71ab4) */
/* WARNING: Removing unreachable block (ram,0x00014dd71aba) */
/* WARNING: Removing unreachable block (ram,0x0001655916cc) */
/* WARNING: Removing unreachable block (ram,0x000165b5c2db) */
/* WARNING: Removing unreachable block (ram,0x000165591757) */
/* WARNING: Removing unreachable block (ram,0x00016559175d) */
/* WARNING: Removing unreachable block (ram,0x000165591762) */
/* WARNING: Removing unreachable block (ram,0x00014dd71982) */
/* WARNING: Removing unreachable block (ram,0x00014dee3603) */
/* WARNING: Removing unreachable block (ram,0x000162e26665) */
/* WARNING: Removing unreachable block (ram,0x000162e2666b) */
/* WARNING: Removing unreachable block (ram,0x000160fe4f90) */
/* WARNING: Removing unreachable block (ram,0x000160fe5028) */
/* WARNING: Removing unreachable block (ram,0x000160fe502d) */
/* WARNING: Removing unreachable block (ram,0x0001622a35b5) */
/* WARNING: Removing unreachable block (ram,0x000160fe5033) */
/* WARNING: Removing unreachable block (ram,0x000162e26670) */
/* WARNING: Removing unreachable block (ram,0x00014dd718d9) */
/* WARNING: Removing unreachable block (ram,0x000160fe4f8a) */
/* WARNING: Removing unreachable block (ram,0x000160fe4f85) */

undefined8 FUN_14dd7185b(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  puVar1 = (undefined8 *)(local_res18 + -8);
  *puVar1 = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = &DAT_165a57334;
  *(undefined8 *)(local_res18 + -0x10) = unaff_retaddr;
  return in_RAX;
}



// FUNCTION 14dd71aba FUN_14dd71aba body=127 status=ok
// SIG undefined FUN_14dd71aba(void)

void FUN_14dd71aba(void)

{
  FUN_165befe37();
  return;
}



// FUNCTION 14dd71c56 FUN_14dd71c56 body=46 status=ok
// SIG undefined FUN_14dd71c56(void)

void FUN_14dd71c56(void)

{
  return;
}



// FUNCTION 14dd71cf8 FUN_14dd71cf8 body=184 status=ok
// SIG undefined FUN_14dd71cf8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd71db2) */
/* WARNING: Removing unreachable block (ram,0x00014dd71da1) */
/* WARNING: Removing unreachable block (ram,0x000165ff8d1c) */
/* WARNING: Removing unreachable block (ram,0x000161a72a28) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd71cf8(void)

{
  FUN_161a72a28();
  return;
}



// FUNCTION 14dd71db2 FUN_14dd71db2 body=188 status=ok
// SIG undefined FUN_14dd71db2(void)

void FUN_14dd71db2(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI) =
       ~*(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI);
  uVar2 = *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI) =
       ~*(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI) =
       (~(uVar2 & unaff_R15) + unaff_R15) - *(longlong *)(&stack0xfffffffffeb6f22b + unaff_RDI);
  *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI) =
       ~((~unaff_R15 | uVar1) & *(ulonglong *)(&stack0xfffffffffeb6f22b + unaff_RDI));
  return;
}



// FUNCTION 14dd720e5 FUN_14dd720e5 body=573 status=ok
// SIG undefined FUN_14dd720e5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd721eb) */
/* WARNING: Removing unreachable block (ram,0x000160c174d8) */
/* WARNING: Removing unreachable block (ram,0x00014dd7217f) */
/* WARNING: Removing unreachable block (ram,0x00014dd72201) */
/* WARNING: Removing unreachable block (ram,0x00016615f3f9) */
/* WARNING: Removing unreachable block (ram,0x00014dd72207) */

void FUN_14dd720e5(undefined8 param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (~(~unaff_RBX & ~unaff_RBP) + ~unaff_RBP < unaff_RBX) {
    FUN_164879788(*(undefined8 *)(unaff_RSI + -0x38),~param_2,param_3,param_4);
    FUN_1666a0ada();
    return;
  }
  FUN_160c17472();
  return;
}



// FUNCTION 14dd72325 FUN_14dd72325 body=261 status=ok
// SIG undefined FUN_14dd72325(void)

/* WARNING: Removing unreachable block (ram,0x00014dd723d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd723cb) */
/* WARNING: Removing unreachable block (ram,0x000160efc20a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd72325(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)(~*(ulonglong *)(unaff_R13 + -0x48) | ~unaff_R15) < 0) {
    (*(code *)&LAB_165d0e29c)
              (*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
               (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
               -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                    (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
    return;
  }
  FUN_15b255be5();
  return;
}



// FUNCTION 14dd7246b FUN_14dd7246b body=132 status=ok
// SIG undefined FUN_14dd7246b(void)

void FUN_14dd7246b(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = ~(param_1 & (~(param_3 & in_R10) + in_R10) - ~param_3);
  FUN_1654e1c36(uVar1,param_2,uVar1);
  FUN_14dd724f2();
  return;
}



// FUNCTION 14dd724f2 FUN_14dd724f2 body=150 status=ok
// SIG undefined FUN_14dd724f2(void)

/* WARNING: Removing unreachable block (ram,0x00014dd72545) */

void FUN_14dd724f2(ulonglong param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  FUN_1616825e1(param_1,0xffffffffec4c8391,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + param_2 + 0x6c5d2784) ^ param_1);
  return;
}



// FUNCTION 14dd727e5 FUN_14dd727e5 body=135 status=ok
// SIG undefined FUN_14dd727e5(void)

void FUN_14dd727e5(undefined8 param_1)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined1 **)(local_res10 + -8) = &LAB_166c9efe5;
  (*(code *)&LAB_166c9efbe)(*(undefined8 *)(local_res10 + -0x18));
  return;
}



// FUNCTION 14dd7286c FUN_14dd7286c body=15 status=ok
// SIG undefined FUN_14dd7286c(void)

void FUN_14dd7286c(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd72875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14dd72bcc FUN_14dd72bcc body=560 status=ok
// SIG undefined FUN_14dd72bcc(void)

/* WARNING: Removing unreachable block (ram,0x0001652542fb) */
/* WARNING: Removing unreachable block (ram,0x00014dd72c74) */
/* WARNING: Removing unreachable block (ram,0x00014dd72d0f) */
/* WARNING: Removing unreachable block (ram,0x000164ff9770) */
/* WARNING: Removing unreachable block (ram,0x00014dd72d15) */
/* WARNING: Removing unreachable block (ram,0x00014dd72d59) */

undefined8 FUN_14dd72bcc(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (unaff_RSI == (~(param_1 & in_R10) & (param_1 | in_R10))) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0xc3763) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0xc3764) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI != 0xc3765) {
    FUN_15726155a();
    FUN_15b78369f();
    uVar1 = FUN_15727234c(~(*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15),FUN_15727234c,
                          *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
    return uVar1;
  }
  uVar1 = FUN_16131bb16();
  return uVar1;
}



// FUNCTION 14dd72d99 FUN_14dd72d99 body=715 status=FAIL
// SIG undefined FUN_14dd72d99(void)
/* DECOMPILE FAILED */

// FUNCTION 14dd72fd2 FUN_14dd72fd2 body=158 status=ok
// SIG undefined FUN_14dd72fd2(void)

void FUN_14dd72fd2(void)

{
  FUN_156b40e49();
  return;
}



// FUNCTION 14dd73071 FUN_14dd73071 body=145 status=ok
// SIG undefined FUN_14dd73071(void)

void FUN_14dd73071(undefined8 param_1,undefined8 param_2)

{
  FUN_1570c94cc(param_1,param_2);
  return;
}



// FUNCTION 14dd732ba FUN_14dd732ba body=337 status=ok
// SIG undefined FUN_14dd732ba(void)

void FUN_14dd732ba(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = FUN_16171a6ff(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                        ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  FUN_14da9ab41(0x6eb53f2e,FUN_14da9ab41,lVar1 + unaff_R15 + (unaff_RSI & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd734ad thunk_FUN_14dd734b3 body=5 status=ok
// SIG undefined thunk_FUN_14dd734b3(void)

void thunk_FUN_14dd734b3(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0x00000000 + (param_2 - unaff_RBX)) = *(undefined8 *)(unaff_RDI + -0x28);
  *(undefined8 *)(&stack0x00000000 + (param_2 - unaff_RBX)) = *(undefined8 *)(unaff_RDI + -0x68);
  FUN_162f731c9();
  return;
}



// FUNCTION 14dd734b3 FUN_14dd734b3 body=114 status=ok
// SIG undefined FUN_14dd734b3(void)

void FUN_14dd734b3(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(undefined8 *)(&stack0x00000000 + (param_2 - unaff_RBX)) = *(undefined8 *)(unaff_RDI + -0x28);
  *(undefined8 *)(&stack0x00000000 + (param_2 - unaff_RBX)) = *(undefined8 *)(unaff_RDI + -0x68);
  FUN_162f731c9();
  return;
}



// FUNCTION 14dd73525 FUN_14dd73525 body=113 status=ok
// SIG undefined FUN_14dd73525(void)

/* WARNING: Removing unreachable block (ram,0x000161930690) */
/* WARNING: Removing unreachable block (ram,0x00014dd73634) */
/* WARNING: Removing unreachable block (ram,0x000161125c4b) */
/* WARNING: Removing unreachable block (ram,0x000161125cc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd7363a) */
/* WARNING: Removing unreachable block (ram,0x00014dd73674) */
/* WARNING: Removing unreachable block (ram,0x00014dd73679) */
/* WARNING: Removing unreachable block (ram,0x00014dd736c2) */
/* WARNING: Removing unreachable block (ram,0x00016193056c) */
/* WARNING: Removing unreachable block (ram,0x000161930593) */
/* WARNING: Removing unreachable block (ram,0x0001619305a2) */
/* WARNING: Removing unreachable block (ram,0x00016193059d) */
/* WARNING: Removing unreachable block (ram,0x0001619305e9) */
/* WARNING: Removing unreachable block (ram,0x0001619305ef) */
/* WARNING: Removing unreachable block (ram,0x00016193068a) */
/* WARNING: Removing unreachable block (ram,0x00016134eb14) */
/* WARNING: Removing unreachable block (ram,0x0001570245fb) */
/* WARNING: Removing unreachable block (ram,0x00015702462e) */
/* WARNING: Removing unreachable block (ram,0x00015702466c) */
/* WARNING: Removing unreachable block (ram,0x0001570246a1) */
/* WARNING: Removing unreachable block (ram,0x0001570246a7) */
/* WARNING: Removing unreachable block (ram,0x000157024732) */
/* WARNING: Removing unreachable block (ram,0x000157024738) */
/* WARNING: Removing unreachable block (ram,0x00015702473f) */
/* WARNING: Removing unreachable block (ram,0x00015b5c12cb) */
/* WARNING: Removing unreachable block (ram,0x000160d67ffa) */
/* WARNING: Removing unreachable block (ram,0x000160d68013) */
/* WARNING: Removing unreachable block (ram,0x000160d6800e) */
/* WARNING: Removing unreachable block (ram,0x000160d68047) */
/* WARNING: Removing unreachable block (ram,0x000160d68080) */
/* WARNING: Removing unreachable block (ram,0x000164a340de) */
/* WARNING: Removing unreachable block (ram,0x000160d6804c) */
/* WARNING: Removing unreachable block (ram,0x000161125caf) */

undefined8 FUN_14dd73525(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_161d5d778(param_1);
  uVar1 = FUN_161125c4b();
  return uVar1;
}



// FUNCTION 14dd735a4 FUN_14dd735a4 body=357 status=ok
// SIG undefined FUN_14dd735a4(void)

/* WARNING: Removing unreachable block (ram,0x000161930690) */
/* WARNING: Removing unreachable block (ram,0x00014dd73634) */
/* WARNING: Removing unreachable block (ram,0x000161125c4b) */
/* WARNING: Removing unreachable block (ram,0x000161125cc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd7363a) */
/* WARNING: Removing unreachable block (ram,0x00014dd73674) */
/* WARNING: Removing unreachable block (ram,0x00014dd73679) */
/* WARNING: Removing unreachable block (ram,0x00014dd736c2) */
/* WARNING: Removing unreachable block (ram,0x00016193056c) */
/* WARNING: Removing unreachable block (ram,0x000161930593) */
/* WARNING: Removing unreachable block (ram,0x0001619305a2) */
/* WARNING: Removing unreachable block (ram,0x00016193059d) */
/* WARNING: Removing unreachable block (ram,0x0001619305e9) */
/* WARNING: Removing unreachable block (ram,0x0001619305ef) */
/* WARNING: Removing unreachable block (ram,0x00016193068a) */
/* WARNING: Removing unreachable block (ram,0x00016134eb14) */
/* WARNING: Removing unreachable block (ram,0x0001570245fb) */
/* WARNING: Removing unreachable block (ram,0x00015702462e) */
/* WARNING: Removing unreachable block (ram,0x00015702466c) */
/* WARNING: Removing unreachable block (ram,0x0001570246a1) */
/* WARNING: Removing unreachable block (ram,0x0001570246a7) */
/* WARNING: Removing unreachable block (ram,0x000157024732) */
/* WARNING: Removing unreachable block (ram,0x000157024738) */
/* WARNING: Removing unreachable block (ram,0x00015702473f) */
/* WARNING: Removing unreachable block (ram,0x00015b5c12cb) */
/* WARNING: Removing unreachable block (ram,0x000160d67ffa) */
/* WARNING: Removing unreachable block (ram,0x000160d68013) */
/* WARNING: Removing unreachable block (ram,0x000160d6800e) */
/* WARNING: Removing unreachable block (ram,0x000160d68047) */
/* WARNING: Removing unreachable block (ram,0x000160d68080) */
/* WARNING: Removing unreachable block (ram,0x000164a340de) */
/* WARNING: Removing unreachable block (ram,0x000160d6804c) */
/* WARNING: Removing unreachable block (ram,0x000161125caf) */

undefined8 FUN_14dd735a4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161125c4b();
  return uVar1;
}



// FUNCTION 14dd73cf1 FUN_14dd73cf1 body=328 status=ok
// SIG undefined FUN_14dd73cf1(void)

/* WARNING: Removing unreachable block (ram,0x000165fed9ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd73d80) */
/* WARNING: Removing unreachable block (ram,0x00014dd73d86) */

void FUN_14dd73cf1(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar1 = 0x47c80b4b;
  FUN_156d1909e();
  uVar2 = ~(uVar1 & 0xffffffffffffffff -
                    ((~unaff_R15 + uVar2) - (~unaff_R15 & uVar2) &
                    (~uVar2 + unaff_R15) - (~uVar2 & unaff_R15))) ^
          *(ulonglong *)(unaff_R13 + -0x48);
  FUN_164f28624(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd73e3d FUN_14dd73e3d body=581 status=ok
// SIG undefined FUN_14dd73e3d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd73ed6) */
/* WARNING: Removing unreachable block (ram,0x00014dd73edc) */
/* WARNING: Removing unreachable block (ram,0x00014dd73ff1) */
/* WARNING: Removing unreachable block (ram,0x00014dd73ffc) */
/* WARNING: Removing unreachable block (ram,0x00014dd73ff7) */
/* WARNING: Removing unreachable block (ram,0x00015760f608) */
/* WARNING: Removing unreachable block (ram,0x000164af92f0) */

undefined8 FUN_14dd73e3d(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70) | param_1;
  uVar1 = FUN_164af92f0(param_1,0x5149823,
                        ~(uVar2 & ~(0xffffffffffffffff -
                                   (*(ulonglong *)(unaff_RDI + -0x70) & param_1))) + uVar2 + 1);
  return uVar1;
}



// FUNCTION 14dd73ffc FUN_14dd73ffc body=176 status=ok
// SIG undefined FUN_14dd73ffc(void)

undefined8 FUN_14dd73ffc(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd741e3 FUN_14dd741e3 body=126 status=ok
// SIG undefined FUN_14dd741e3(void)

void FUN_14dd741e3(void)

{
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_8;
  
  local_8 = CONCAT71((int7)((unaff_R12 - unaff_R15) + (~unaff_R15 | unaff_R12) * -2 + -2 >> 8),0x5c)
  ;
  FUN_1655a0c7e(local_8,FUN_1655a0c7e,0xff,*(longlong *)(unaff_R13 + -0x40) + unaff_R15);
  return;
}



// FUNCTION 14dd74394 FUN_14dd74394 body=146 status=ok
// SIG undefined FUN_14dd74394(void)

void FUN_14dd74394(void)

{
  FUN_164ba3914();
  return;
}



// FUNCTION 14dd744b5 FUN_14dd744b5 body=156 status=ok
// SIG undefined FUN_14dd744b5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd74551) */
/* WARNING: Removing unreachable block (ram,0x0001568f658b) */
/* WARNING: Removing unreachable block (ram,0x0001568f6591) */
/* WARNING: Removing unreachable block (ram,0x0001568f6595) */

void FUN_14dd744b5(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  ulonglong in_R10;
  longlong lVar5;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar4 = ~(unaff_RBP & unaff_R15) & (local_res8 + unaff_R15) - (local_res8 & unaff_R15);
  lVar5 = *(longlong *)(local_res10 + -0x70);
  uVar1 = *(ulonglong *)(local_res10 + -0xa0);
  uVar2 = lVar5 << 1 | (ulonglong)(lVar5 < 0);
  lVar5 = (lVar5 + unaff_R15) - ((-2 - (uVar2 | 0xfffffffffffffffe)) + uVar2);
  *(undefined8 *)(lVar5 + -8) = unaff_RSI;
  *(undefined8 *)(lVar5 + -0x10) = in_RAX;
  *(undefined8 *)(lVar5 + -0x18) = 0x166dea375;
  FUN_16654a1a9();
  uVar3 = *(undefined8 *)(lVar5 + -0x10);
  *(undefined8 *)(lVar5 + -0x10) = DAT_166543daa;
  *(undefined8 *)(lVar5 + -0x18) = DAT_166543da2;
  *(ulonglong *)(lVar5 + -0x10) = *(ulonglong *)(lVar5 + -0x10) ^ uVar4;
  *(undefined8 *)(lVar5 + -0x18) = unaff_R14;
  *(ulonglong *)(lVar5 + -0x20) = in_R10 ^ unaff_R15;
  *(undefined8 *)(lVar5 + -0x28) = uVar3;
  *(undefined8 *)(lVar5 + -0x20) = in_R9;
  *(ulonglong *)(lVar5 + -0x28) = uVar1 ^ unaff_R15;
  *(ulonglong *)(lVar5 + -8) = (0xffffffffffffffff - uVar4 | *(ulonglong *)(lVar5 + -8)) + uVar4 + 1
  ;
  *(undefined8 *)(lVar5 + -0x28) = unaff_R12;
  *(undefined8 *)(lVar5 + -0x30) = unaff_R12;
  *(undefined1 **)(lVar5 + -0x28) = &LAB_166dea414;
  FUN_161a231bb();
  return;
}



// FUNCTION 14dd74551 FUN_14dd74551 body=121 status=ok
// SIG undefined FUN_14dd74551(void)

void FUN_14dd74551(void)

{
  FUN_1649eb4c4();
  return;
}



// FUNCTION 14dd745d1 FUN_14dd745d1 body=288 status=ok
// SIG undefined FUN_14dd745d1(void)

void FUN_14dd745d1(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_14debf3fa();
  (*(code *)0x162d8df5f)(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dd747a5 thunk_FUN_14dd747ab body=5 status=ok
// SIG undefined thunk_FUN_14dd747ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dd74845) */
/* WARNING: Removing unreachable block (ram,0x00014dd7484b) */
/* WARNING: Removing unreachable block (ram,0x00014dd748a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd748d1) */
/* WARNING: Removing unreachable block (ram,0x00016266cee1) */
/* WARNING: Removing unreachable block (ram,0x00014dd748d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd749f9) */
/* WARNING: Removing unreachable block (ram,0x0001619ea937) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9da) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9e0) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9d5) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed0a) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed92) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed98) */
/* WARNING: Removing unreachable block (ram,0x00015b613015) */
/* WARNING: Removing unreachable block (ram,0x00014dd749ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd74aa7) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad0) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad6) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ba3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74b9e) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bec) */
/* WARNING: Removing unreachable block (ram,0x00014dd74c08) */
/* WARNING: Removing unreachable block (ram,0x00015b279cee) */
/* WARNING: Removing unreachable block (ram,0x000160cd02fb) */
/* WARNING: Removing unreachable block (ram,0x000160cd0388) */
/* WARNING: Removing unreachable block (ram,0x000160cd038d) */
/* WARNING: Removing unreachable block (ram,0x000166d2e278) */
/* WARNING: Removing unreachable block (ram,0x000160cd0393) */
/* WARNING: Removing unreachable block (ram,0x000160cd03af) */
/* WARNING: Removing unreachable block (ram,0x000160cd0425) */
/* WARNING: Removing unreachable block (ram,0x000160cd042a) */
/* WARNING: Removing unreachable block (ram,0x00015700d184) */
/* WARNING: Removing unreachable block (ram,0x000160cd0430) */
/* WARNING: Removing unreachable block (ram,0x000160cd04a6) */
/* WARNING: Removing unreachable block (ram,0x000160cd04ab) */
/* WARNING: Removing unreachable block (ram,0x000160cd04b1) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */

undefined8 thunk_FUN_14dd747ab(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_160cd0301();
  return uVar1;
}



// FUNCTION 14dd747ab FUN_14dd747ab body=298 status=ok
// SIG undefined FUN_14dd747ab(void)

/* WARNING: Removing unreachable block (ram,0x00014dd74845) */
/* WARNING: Removing unreachable block (ram,0x00014dd7484b) */
/* WARNING: Removing unreachable block (ram,0x00014dd748a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd748d1) */
/* WARNING: Removing unreachable block (ram,0x00016266cee1) */
/* WARNING: Removing unreachable block (ram,0x00014dd748d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd749f9) */
/* WARNING: Removing unreachable block (ram,0x0001619ea937) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9da) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9e0) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9d5) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed0a) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed92) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed98) */
/* WARNING: Removing unreachable block (ram,0x00015b613015) */
/* WARNING: Removing unreachable block (ram,0x00014dd749ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd74aa7) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad0) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad6) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ba3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74b9e) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bec) */
/* WARNING: Removing unreachable block (ram,0x00014dd74c08) */
/* WARNING: Removing unreachable block (ram,0x00015b279cee) */
/* WARNING: Removing unreachable block (ram,0x000160cd02fb) */
/* WARNING: Removing unreachable block (ram,0x000160cd0388) */
/* WARNING: Removing unreachable block (ram,0x000160cd038d) */
/* WARNING: Removing unreachable block (ram,0x000166d2e278) */
/* WARNING: Removing unreachable block (ram,0x000160cd0393) */
/* WARNING: Removing unreachable block (ram,0x000160cd03af) */
/* WARNING: Removing unreachable block (ram,0x000160cd0425) */
/* WARNING: Removing unreachable block (ram,0x000160cd042a) */
/* WARNING: Removing unreachable block (ram,0x00015700d184) */
/* WARNING: Removing unreachable block (ram,0x000160cd0430) */
/* WARNING: Removing unreachable block (ram,0x000160cd04a6) */
/* WARNING: Removing unreachable block (ram,0x000160cd04ab) */
/* WARNING: Removing unreachable block (ram,0x000160cd04b1) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d8ab) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d92f) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d934) */
/* WARNING: Removing unreachable block (ram,0x00014dc0d93a) */
/* WARNING: Removing unreachable block (ram,0x000165eb5930) */

undefined8 FUN_14dd747ab(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_160cd0301();
  return uVar1;
}



// FUNCTION 14dd748d7 FUN_14dd748d7 body=819 status=ok
// SIG undefined FUN_14dd748d7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd749ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd74aa7) */
/* WARNING: Removing unreachable block (ram,0x000162e8ed98) */
/* WARNING: Removing unreachable block (ram,0x0001619ea9e0) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad0) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ad6) */
/* WARNING: Removing unreachable block (ram,0x00014dd74ba3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74b9e) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd74bec) */
/* WARNING: Removing unreachable block (ram,0x00014dd74c08) */
/* WARNING: Removing unreachable block (ram,0x00015b279cee) */

undefined8
FUN_14dd748d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  longlong in_R11;
  ulonglong unaff_R14;
  ulonglong uVar3;
  undefined8 in_stack_00000008;
  ulonglong uStackX_20;
  
  uVar3 = 0xffffffffffffffff - ~(~uStackX_20 | 0xffffffffffffffff - param_1) &
          (*(ulonglong *)(&stack0x00000018 + in_R11 + (unaff_R14 ^ 0x7943395d)) | param_1);
  uVar2 = FUN_1660d904e();
  uVar3 = ~((unaff_RBX - (uVar3 | unaff_RBX)) + uVar3) & (uVar3 | unaff_RBX);
  uVar1 = ~(param_5 & param_1) ^ unaff_RBX;
  *(undefined8 *)(uVar1 - 8) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000008;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = 0x20c34c3;
  *(longlong *)(uVar1 - 0x20) = *(longlong *)(uVar1 - 0x20) + -0x1eb4a9d;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(undefined8 *)(uVar1 - 0x28) = param_3;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_15b613019;
  return uVar2;
}



// FUNCTION 14dd74cc6 FUN_14dd74cc6 body=128 status=ok
// SIG undefined FUN_14dd74cc6(void)

void FUN_14dd74cc6(void)

{
  return;
}



// FUNCTION 14dd74d87 FUN_14dd74d87 body=230 status=ok
// SIG undefined FUN_14dd74d87(void)

/* WARNING: Removing unreachable block (ram,0x00016139b75a) */
/* WARNING: Removing unreachable block (ram,0x00016139b765) */
/* WARNING: Removing unreachable block (ram,0x00014d807c1f) */
/* WARNING: Removing unreachable block (ram,0x0001569af617) */
/* WARNING: Removing unreachable block (ram,0x0001569af611) */
/* WARNING: Removing unreachable block (ram,0x0001569af61c) */
/* WARNING: Removing unreachable block (ram,0x0001569af6cc) */
/* WARNING: Removing unreachable block (ram,0x0001569af6cf) */
/* WARNING: Removing unreachable block (ram,0x0001569af6fe) */
/* WARNING: Removing unreachable block (ram,0x0001569af701) */
/* WARNING: Removing unreachable block (ram,0x0001569af7b4) */
/* WARNING: Removing unreachable block (ram,0x0001569af7ba) */
/* WARNING: Removing unreachable block (ram,0x0001569af7bf) */
/* WARNING: Removing unreachable block (ram,0x0001569af834) */
/* WARNING: Removing unreachable block (ram,0x00015641a558) */
/* WARNING: Removing unreachable block (ram,0x00016139b760) */
/* WARNING: Removing unreachable block (ram,0x000156e28f31) */
/* WARNING: Removing unreachable block (ram,0x00014d807c93) */
/* WARNING: Removing unreachable block (ram,0x00014dd74e2b) */
/* WARNING: Removing unreachable block (ram,0x000156e28ea3) */
/* WARNING: Removing unreachable block (ram,0x000156e28f26) */
/* WARNING: Removing unreachable block (ram,0x0001569af596) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14dd74d87(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  if ((param_2 & 0x7fffffffffffffff) == 0) {
    uVar2 = FUN_156e28d89();
    return uVar2;
  }
  uVar2 = -~*(ulonglong *)(unaff_RDI + -0x68) - 1;
  FUN_1564028d7(param_1,~((~param_1 | uVar2) + param_1 + 1 | ~(uVar2 | param_1)));
  uVar2 = *(ulonglong *)(unaff_RDI + -0x48);
  lVar1 = *(longlong *)(unaff_RDI + -0xa0);
  FUN_166d30dc5();
  if (*(longlong *)(lVar1 + -0x90) == 0) {
    uVar2 = FUN_14d7f7dc1();
    return uVar2;
  }
  return ~((~uVar2 & ~param_1 | uVar2) & (0xffffffffffffffff - uVar2 | param_1));
}



// FUNCTION 14dd75255 FUN_14dd75255 body=148 status=ok
// SIG undefined FUN_14dd75255(void)

void FUN_14dd75255(void)

{
  return;
}



// FUNCTION 14dd754db FUN_14dd754db body=303 status=ok
// SIG undefined FUN_14dd754db(void)

/* WARNING: Instruction at (ram,0x00014dd755b7) overlaps instruction at (ram,0x00014dd755b6)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd7556a) */
/* WARNING: Removing unreachable block (ram,0x00014dd75576) */
/* WARNING: Removing unreachable block (ram,0x00014dd755b7) */
/* WARNING: Removing unreachable block (ram,0x00014dd755b6) */
/* WARNING: Removing unreachable block (ram,0x00014dd755cb) */
/* WARNING: Removing unreachable block (ram,0x00014dd755d0) */
/* WARNING: Removing unreachable block (ram,0x00014dd755ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd75605) */
/* WARNING: Removing unreachable block (ram,0x00014dd7560c) */
/* WARNING: Removing unreachable block (ram,0x00014dd75610) */
/* WARNING: Removing unreachable block (ram,0x000165cc1ab5) */
/* WARNING: Removing unreachable block (ram,0x000156d92d7c) */

undefined8 FUN_14dd754db(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156d92d7c();
  return uVar1;
}



// FUNCTION 14dd7560c FUN_14dd7560c body=164 status=ok
// SIG undefined FUN_14dd7560c(void)

void FUN_14dd7560c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160b6cd00(*(undefined8 *)(unaff_R13 + -0x38),FUN_160b6cd00,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                ((~*(ulonglong *)(unaff_R13 + -0x88) | ~unaff_R15) ^ 0xffffffffffffffff) * -2);
  return;
}



// FUNCTION 14dd756b1 FUN_14dd756b1 body=163 status=ok
// SIG undefined FUN_14dd756b1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7574e) */
/* WARNING: Removing unreachable block (ram,0x00014dd75754) */
/* WARNING: Removing unreachable block (ram,0x0001576039f5) */

void FUN_14dd756b1(void)

{
  FUN_1576039f5();
  return;
}



// FUNCTION 14dd75754 FUN_14dd75754 body=203 status=ok
// SIG undefined FUN_14dd75754(void)

void FUN_14dd75754(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16269416f(param_1,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dd7595d FUN_14dd7595d body=465 status=ok
// SIG undefined FUN_14dd7595d(void)

/* WARNING: Instruction at (ram,0x00015af2df88) overlaps instruction at (ram,0x00015af2df87)
    */
/* WARNING: Removing unreachable block (ram,0x00015af2df2b) */
/* WARNING: Removing unreachable block (ram,0x00015af2df31) */
/* WARNING: Removing unreachable block (ram,0x00015af2df72) */
/* WARNING: Removing unreachable block (ram,0x00015af2df88) */
/* WARNING: Removing unreachable block (ram,0x00015af2df87) */
/* WARNING: Removing unreachable block (ram,0x00015af2df8d) */
/* WARNING: Removing unreachable block (ram,0x0001618cad90) */
/* WARNING: Removing unreachable block (ram,0x00014dd759e4) */

void FUN_14dd7595d(void)

{
  FUN_1618cad90();
  return;
}



// FUNCTION 14dd75c16 FUN_14dd75c16 body=149 status=ok
// SIG undefined FUN_14dd75c16(void)

void FUN_14dd75c16(void)

{
  FUN_162bfb351(0x11cbbe57,0x11cbbe56);
  return;
}



// FUNCTION 14dd75e53 FUN_14dd75e53 body=142 status=ok
// SIG undefined FUN_14dd75e53(void)

void FUN_14dd75e53(void)

{
  longlong unaff_R13;
  
  FUN_15b1f6c3c(*(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14dd75ee3 FUN_14dd75ee3 body=117 status=ok
// SIG undefined FUN_14dd75ee3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd75f25) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd75ee3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161315827(param_1,FUN_161315827,param_3);
  if (*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 ==
      (unaff_R15 - ~(unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x88))) * 2) {
    return;
  }
  FUN_1567444ac(param_1);
  return;
}



// FUNCTION 14dd75f59 FUN_14dd75f59 body=171 status=ok
// SIG undefined FUN_14dd75f59(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd75f59(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 !=
      (unaff_R15 - ~(unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x88))) * 2) {
    FUN_1567444ac(param_1);
    return;
  }
  return;
}



// FUNCTION 14dd76010 thunk_FUN_14dd76016 body=5 status=ok
// SIG undefined thunk_FUN_14dd76016(void)

void thunk_FUN_14dd76016(void)

{
  return;
}



// FUNCTION 14dd76016 FUN_14dd76016 body=70 status=ok
// SIG undefined FUN_14dd76016(void)

void FUN_14dd76016(void)

{
  return;
}



// FUNCTION 14dd7614a FUN_14dd7614a body=177 status=ok
// SIG undefined FUN_14dd7614a(void)

ulonglong FUN_14dd7614a(void)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_CF;
  
  return *(ulonglong *)(unaff_R13 + unaff_RBX + 0x4a8a41d3 + (ulonglong)in_CF) ^ unaff_R15;
}



// FUNCTION 14dd762c4 FUN_14dd762c4 body=846 status=ok
// SIG undefined FUN_14dd762c4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7635a) */
/* WARNING: Removing unreachable block (ram,0x00015b9e4c9a) */
/* WARNING: Removing unreachable block (ram,0x00014dd763f0) */
/* WARNING: Removing unreachable block (ram,0x00014dd763f6) */
/* WARNING: Removing unreachable block (ram,0x00014dfd2bde) */
/* WARNING: Removing unreachable block (ram,0x00014dd764a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd764ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd764b3) */

void FUN_14dd762c4(void)

{
  char unaff_BPL;
  char unaff_SIL;
  
  if ((char)(unaff_BPL + unaff_SIL) == '\0') {
    return;
  }
  return;
}



// FUNCTION 14dd765b4 thunk_FUN_165a5955d body=5 status=ok
// SIG undefined thunk_FUN_165a5955d(void)

void thunk_FUN_165a5955d(void)

{
  undefined8 unaff_retaddr;
  
  FUN_15afa398c(FUN_15afa398c,unaff_retaddr);
  FUN_15717b43d();
  return;
}



// FUNCTION 14dd7663b FUN_14dd7663b body=171 status=ok
// SIG undefined FUN_14dd7663b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd766e8) */
/* WARNING: Removing unreachable block (ram,0x00014dd76772) */
/* WARNING: Removing unreachable block (ram,0x00014dd76778) */
/* WARNING: Removing unreachable block (ram,0x00014dd7677f) */
/* WARNING: Removing unreachable block (ram,0x0001658d30ff) */
/* WARNING: Removing unreachable block (ram,0x00014dd766d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd766af) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000161d4c9b8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7663b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b793651(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                ~(~*(ulonglong *)(unaff_R13 + -0x78) | ~unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dd766e8 FUN_14dd766e8 body=321 status=ok
// SIG undefined FUN_14dd766e8(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7677f) */
/* WARNING: Removing unreachable block (ram,0x00014dd76772) */

void FUN_14dd766e8(void)

{
  return;
}



// FUNCTION 14dd76829 FUN_14dd76829 body=37 status=ok
// SIG undefined FUN_14dd76829(void)

void FUN_14dd76829(void)

{
  return;
}



// FUNCTION 14dd7691c FUN_14dd7691c body=39 status=ok
// SIG undefined FUN_14dd7691c(void)

undefined8 FUN_14dd7691c(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dd769a6 FUN_14dd769a6 body=127 status=ok
// SIG undefined FUN_14dd769a6(void)

/* WARNING: Removing unreachable block (ram,0x000156823ef2) */
/* WARNING: Removing unreachable block (ram,0x000156823efd) */
/* WARNING: Removing unreachable block (ram,0x00014dd76a19) */
/* WARNING: Removing unreachable block (ram,0x00014dd76a1f) */
/* WARNING: Removing unreachable block (ram,0x00014dd76a2a) */

void FUN_14dd769a6(void)

{
  return;
}



// FUNCTION 14dd76a2a FUN_14dd76a2a body=153 status=ok
// SIG undefined FUN_14dd76a2a(void)

void FUN_14dd76a2a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  undefined8 unaff_R14;
  
  puVar3 = (undefined8 *)(&stack0xfffffffff900e6d9 + unaff_RBP);
  puVar3[-1] = in_RAX;
  *(undefined4 *)(puVar3 + -1) = 0xa4c24bea;
  *(undefined4 *)((longlong)puVar3 + -4) = 0xffffffff;
  *puVar3 = *(undefined8 *)(param_3 + (puVar3[-1] ^ 0x5b3db432));
  plVar1 = puVar3 + 1;
  lVar5 = *plVar1;
  *plVar1 = unaff_R12;
  *puVar3 = *puVar3;
  *puVar3 = FUN_14dd76ac3;
  FUN_16598cf7b();
  lVar6 = *plVar1;
  *(longlong *)(lVar6 + 0x20) = lVar5 - *(longlong *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x10) = unaff_R14;
  *(undefined8 *)(lVar6 + 8) = param_2;
  puVar2 = (ushort *)(lVar6 + 0x18);
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 | 0x100;
  *puVar2 = ~*puVar2;
  puVar3 = *(undefined8 **)(lVar6 + 0x20);
  pcVar4 = (code *)swi(0x2e);
  (*pcVar4)();
  puVar3[-1] = param_1;
  puVar3[-2] = 0x10151ec;
  *puVar3 = puVar3[-2];
  FUN_14d85d504(puVar3[-1]);
  return;
}



// FUNCTION 14dd76ac3 FUN_14dd76ac3 body=135 status=ok
// SIG undefined FUN_14dd76ac3(void)

void FUN_14dd76ac3(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  
  *(longlong *)(unaff_retaddr + 0x20) = unaff_RSI - *(longlong *)(unaff_retaddr + 0x20);
  *(undefined8 *)(unaff_retaddr + 0x10) = unaff_R14;
  *(undefined8 *)(unaff_retaddr + 8) = param_2;
  puVar1 = (ushort *)(unaff_retaddr + 0x18);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  puVar2 = *(undefined8 **)(unaff_retaddr + 0x20);
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(param_1,*(undefined8 *)(unaff_retaddr + 8));
  puVar2[-1] = param_1;
  puVar2[-2] = 0x10151ec;
  *puVar2 = puVar2[-2];
  FUN_14d85d504(puVar2[-1]);
  return;
}



// FUNCTION 14dd76b54 FUN_14dd76b54 body=470 status=ok
// SIG undefined FUN_14dd76b54(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164ae0301) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd76b54(undefined8 param_1)

{
  ulonglong unaff_R15;
  
  FUN_160cd5706(param_1);
  FUN_164fb88d8();
  FUN_164ae02f0(FUN_164ae02f0,1,_DAT_fffffffffffffef0,_DAT_ffffffffffffff18 ^ unaff_R15);
  return;
}



// FUNCTION 14dd77252 thunk_FUN_14dd77258 body=5 status=ok
// SIG undefined thunk_FUN_14dd77258(void)

void thunk_FUN_14dd77258(undefined8 param_1)

{
  (*(code *)0x1613d4ae3)(param_1,0xffffffffde8af68b);
  return;
}



// FUNCTION 14dd77258 FUN_14dd77258 body=141 status=ok
// SIG undefined FUN_14dd77258(void)

void FUN_14dd77258(undefined8 param_1)

{
  (*(code *)0x1613d4ae3)(param_1,0xffffffffde8af68b);
  return;
}



// FUNCTION 14dd772e5 FUN_14dd772e5 body=365 status=ok
// SIG undefined FUN_14dd772e5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd77370) */
/* WARNING: Removing unreachable block (ram,0x00014dd77376) */

void FUN_14dd772e5(void)

{
  longlong unaff_R13;
  
  *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
  return;
}



// FUNCTION 14dd77663 FUN_14dd77663 body=200 status=ok
// SIG undefined FUN_14dd77663(void)

void FUN_14dd77663(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ushort *unaff_R14;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | 0x100;
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(param_5 + -8) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_R12;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = in_RAX;
  *(undefined4 *)(param_5 + -0x28) = 0x5a65840;
  *(undefined4 *)(param_5 + -0x24) = 0;
  *(undefined1 **)(param_5 + *(longlong *)(param_5 + -0x28) + -0x5a65848) = &LAB_160ff1eef;
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *(undefined8 *)(param_5 + -0x28) = param_2;
  *(undefined **)(param_5 + -0x18) = &DAT_14dd7772b;
  *(undefined1 **)(param_5 + -0x20) = &LAB_160ff1ecc;
  return;
}



// FUNCTION 14dd777cc FUN_14dd777cc body=491 status=ok
// SIG undefined FUN_14dd777cc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7786a) */

void FUN_14dd777cc(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  code *local_res8;
  undefined8 local_res20;
  ulonglong in_stack_00000030;
  
  uVar1 = ~(in_stack_00000030 & unaff_R15) & (in_stack_00000030 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  *(undefined8 *)(uVar1 - 0x18) = param_1;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x28) = in_RAX;
  *(undefined4 *)(uVar1 - 0x28) = 0x3028c6db;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  *(undefined8 *)((uVar1 - 0x18) + (*(ulonglong *)(uVar1 - 0x28) ^ 0x3028c6d3)) = uVar2;
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = local_res20;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x1654e5a6f;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x0001654e5a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_res8)(uVar2);
  return;
}



// FUNCTION 14dd7793c FUN_14dd7793c body=172 status=ok
// SIG undefined FUN_14dd7793c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd779a1) */

void FUN_14dd7793c(void)

{
  longlong unaff_R12;
  
  FUN_15b6531e8(*(ulonglong *)(unaff_R12 + -0x58),~*(ulonglong *)(unaff_R12 + -0x58),FUN_15b6531e8);
  return;
}



// FUNCTION 14dd77b53 FUN_14dd77b53 body=132 status=ok
// SIG undefined FUN_14dd77b53(void)

/* WARNING: Removing unreachable block (ram,0x000160f9a5bc) */
/* WARNING: Removing unreachable block (ram,0x000160f9a5d8) */
/* WARNING: Removing unreachable block (ram,0x000160f9a5de) */
/* WARNING: Removing unreachable block (ram,0x000160f9a620) */
/* WARNING: Removing unreachable block (ram,0x000160f9a64a) */
/* WARNING: Removing unreachable block (ram,0x000160f9a650) */
/* WARNING: Removing unreachable block (ram,0x000160f9a65b) */
/* WARNING: Removing unreachable block (ram,0x000160f9a694) */
/* WARNING: Removing unreachable block (ram,0x000160f9a698) */
/* WARNING: Removing unreachable block (ram,0x00014dd77bd9) */
/* WARNING: Removing unreachable block (ram,0x00014dd77bdf) */
/* WARNING: Removing unreachable block (ram,0x000160f9a645) */

void FUN_14dd77b53(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | ~param_1;
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  FUN_160f9a5bc();
  return;
}



// FUNCTION 14dd77bdf FUN_14dd77bdf body=153 status=ok
// SIG undefined FUN_14dd77bdf(void)

void FUN_14dd77bdf(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_160edd31b(param_1,~(unaff_RBP & (param_2 | param_1)),0xffffffffffffff60,param_4,
                *(undefined8 *)(unaff_RDI + -0x98),*(undefined8 *)(unaff_RDI + -8));
  return;
}



// FUNCTION 14dd77c79 FUN_14dd77c79 body=292 status=ok
// SIG undefined FUN_14dd77c79(void)

/* WARNING: Removing unreachable block (ram,0x00014dd77d15) */

void FUN_14dd77c79(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156f04ecc(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd77d15 FUN_14dd77d15 body=169 status=ok
// SIG undefined FUN_14dd77d15(void)

void FUN_14dd77d15(ulonglong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  lVar1 = local_res20 + param_1 + (local_res20 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x20) = unaff_RBX;
  *(undefined1 **)(lVar1 + -0x10) = &LAB_14dd77dc0;
  *(undefined8 *)(lVar1 + -0x18) = 0x15780eaf8;
  return;
}



// FUNCTION 14dd77e43 FUN_14dd77e43 body=185 status=ok
// SIG undefined FUN_14dd77e43(void)

void FUN_14dd77e43(void)

{
  return;
}



// FUNCTION 14dd77efe FUN_14dd77efe body=292 status=ok
// SIG undefined FUN_14dd77efe(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7801d) */
/* WARNING: Removing unreachable block (ram,0x00014dd78023) */
/* WARNING: Removing unreachable block (ram,0x00014dd78040) */
/* WARNING: Removing unreachable block (ram,0x00014dd78042) */
/* WARNING: Removing unreachable block (ram,0x00014dd77f84) */
/* WARNING: Removing unreachable block (ram,0x00014dd77f8a) */
/* WARNING: Removing unreachable block (ram,0x00015708b67f) */
/* WARNING: Removing unreachable block (ram,0x0001656b87fa) */

undefined8 FUN_14dd77efe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1656b87fa();
  return uVar1;
}



// FUNCTION 14dd78023 FUN_14dd78023 body=123 status=ok
// SIG undefined FUN_14dd78023(void)

void FUN_14dd78023(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *local_res20;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,param_3,param_4);
  *local_res20 = 0x1cbacd4;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd780cb FUN_14dd780cb body=78 status=ok
// SIG undefined FUN_14dd780cb(void)

/* WARNING: Instruction at (ram,0x00014dd780da) overlaps instruction at (ram,0x00014dd780d9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd780d9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dd780f1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd780cb(longlong param_1,undefined1 param_2)

{
  undefined1 auStackX_8 [32];
  
  auStackX_8[param_1] = param_2;
  thunk_FUN_1617d428c(0);
  return;
}



// FUNCTION 14dd781d1 FUN_14dd781d1 body=317 status=ok
// SIG undefined FUN_14dd781d1(void)

/* WARNING: Removing unreachable block (ram,0x000166537c57) */
/* WARNING: Removing unreachable block (ram,0x0001648cbd1a) */
/* WARNING: Removing unreachable block (ram,0x0001648cbd20) */
/* WARNING: Removing unreachable block (ram,0x00014db4032b) */
/* WARNING: Removing unreachable block (ram,0x00014db4033a) */
/* WARNING: Removing unreachable block (ram,0x00014db40320) */
/* WARNING: Removing unreachable block (ram,0x00014dd78280) */

undefined8 FUN_14dd781d1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166537c57();
  return uVar1;
}



// FUNCTION 14dd78280 FUN_14dd78280 body=96 status=ok
// SIG undefined FUN_14dd78280(void)

undefined8 FUN_14dd78280(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd782f5 FUN_14dd782f5 body=186 status=ok
// SIG undefined FUN_14dd782f5(void)

/* WARNING: Removing unreachable block (ram,0x00015ba5c3df) */
/* WARNING: Removing unreachable block (ram,0x00014dd783aa) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00016520bd23 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd782f5(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = ~(~*(ulonglong *)(unaff_RSI + -0x60) | ~unaff_RBP);
  if ((uVar2 & 0x7fffffffffffffff) == 0) {
    FUN_16520bcc4(param_1);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_RSI + -0x38);
  FUN_1575a6e08(uVar1,uVar1,*(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP + uVar2 * -2,
                param_4 + *(longlong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  (*(code *)0x16122bb4c)(uVar1,0x16122bb4c);
  return;
}



// FUNCTION 14dd78445 FUN_14dd78445 body=146 status=ok
// SIG undefined FUN_14dd78445(void)

/* WARNING: Removing unreachable block (ram,0x00014dd784d7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dd78445(void)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  ulonglong uVar4;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar1 = _CurrentLocale;
  uVar3 = (local_res8 | 0x100) - 0x100;
  *(undefined8 *)(local_res10 + -8) = _CurrentLocale;
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined4 *)(local_res10 + -0x18) = 0x82a721b;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar4 = *(ulonglong *)(local_res10 + -0x28);
  lVar2 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = in_R9;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x4ca620d;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = 0x156ef2e25;
  return uVar1;
}



// FUNCTION 14dd784d7 FUN_14dd784d7 body=123 status=ok
// SIG undefined FUN_14dd784d7(void)

void FUN_14dd784d7(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15762ed22(param_1,*(undefined8 *)(unaff_RDI + -0x30),*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd785e0 FUN_14dd785e0 body=137 status=ok
// SIG undefined FUN_14dd785e0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd785e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15b07f203(unaff_retaddr,param_2,param_3,FUN_15b07f203);
  return;
}



// FUNCTION 14dd787a9 FUN_14dd787a9 body=1226 status=ok
// SIG undefined FUN_14dd787a9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd78a25) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a2b) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a30) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a54) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a4a) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a5d) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b07) */
/* WARNING: Removing unreachable block (ram,0x00014dd7884d) */
/* WARNING: Removing unreachable block (ram,0x00014dd78853) */
/* WARNING: Removing unreachable block (ram,0x00014dd788dd) */
/* WARNING: Removing unreachable block (ram,0x000161bddbb9) */
/* WARNING: Removing unreachable block (ram,0x00014dd788e3) */
/* WARNING: Removing unreachable block (ram,0x00014dd78904) */
/* WARNING: Removing unreachable block (ram,0x00014dd78907) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a0e) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a13) */
/* WARNING: Removing unreachable block (ram,0x00014dd78a20) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b0c) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b10) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b40) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b4b) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b51) */
/* WARNING: Removing unreachable block (ram,0x00014dd78b56) */

void FUN_14dd787a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  if (unaff_RSI == 0x1280be) {
    return;
  }
  if (unaff_RSI != 0x1280bf) {
    if (unaff_RSI == 0x1280c0) {
      (*(code *)&LAB_156c1117a)();
      return;
    }
    FUN_156c111ca();
    return;
  }
  FUN_16131bb16(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14dd78c6d FUN_14dd78c6d body=174 status=ok
// SIG undefined FUN_14dd78c6d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd78d1c) */

void FUN_14dd78c6d(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  if ((~(in_stack_00000030 | unaff_R15) | ~(in_stack_00000030 & unaff_R15)) +
      (in_stack_00000030 | unaff_R15) != -1) {
    FUN_156af447f(&stack0x00000018,param_2);
    return;
  }
  FUN_156af447f(&stack0x00000018,param_2);
  return;
}



// FUNCTION 14dd78d1c FUN_14dd78d1c body=153 status=ok
// SIG undefined FUN_14dd78d1c(void)

void FUN_14dd78d1c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dfde485(~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 ~(*(ulonglong *)(unaff_R13 + -0x78) & ~unaff_R15)));
  return;
}



// FUNCTION 14dd78db5 FUN_14dd78db5 body=159 status=ok
// SIG undefined FUN_14dd78db5(void)

void FUN_14dd78db5(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  FUN_15b8b060b(~(~in_RAX & uVar1) + uVar1,FUN_15b8b060b,uVar1,
                *(ulonglong *)(unaff_R12 + -0x30) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) * -2);
  return;
}



// FUNCTION 14dd79092 FUN_14dd79092 body=295 status=ok
// SIG undefined FUN_14dd79092(void)

void FUN_14dd79092(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_15b6c536b(*(ulonglong *)(param_2 + -0x48) ^ in_R10);
  FUN_14deee01d();
  FUN_14dd791bc();
  return;
}



// FUNCTION 14dd791bc FUN_14dd791bc body=139 status=ok
// SIG undefined FUN_14dd791bc(void)

void FUN_14dd791bc(undefined8 param_1)

{
  FUN_1669435fa(param_1);
  return;
}



// FUNCTION 14dd79247 FUN_14dd79247 body=267 status=ok
// SIG undefined FUN_14dd79247(void)

void FUN_14dd79247(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  ulonglong unaff_RDI;
  ulonglong in_R10;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000018;
  
  uVar2 = *(ulonglong *)(param_2 + -0x98) ^ in_R10;
  bVar4 = FUN_165b2ed04(param_1,*(ulonglong *)(param_2 + -0xa0) ^ in_R10,param_3,param_4,
                        ~in_stack_00000018 | in_R10);
  LOCK();
  bVar5 = bVar4 < DAT_14d7ab93a;
  bVar6 = SBORROW1(bVar4,DAT_14d7ab93a);
  cVar3 = bVar4 - DAT_14d7ab93a;
  if (cVar3 == '\0') {
    DAT_14d7ab93a = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(uVar2 - 8) = param_4;
  *(undefined8 *)(uVar2 - 0x10) = param_4;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((unaff_RDI & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((unaff_RDI & 0x400) != 0) * 0x400 | (ulonglong)((unaff_RDI & 0x200) != 0) * 0x200
       | (ulonglong)((unaff_RDI & 0x100) != 0) * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((unaff_RDI & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((unaff_RDI & 0x200000) != 0) * 0x200000 |
       (ulonglong)((unaff_RDI & 0x40000) != 0) * 0x40000;
  uVar7 = *(ulonglong *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *(ulonglong *)(uVar2 - 0x20) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *plVar1 = *plVar1 + 0x63700ea;
  FUN_165c7153c(*(undefined8 *)(uVar2 - 0x18));
  return;
}



// FUNCTION 14dd795e9 FUN_14dd795e9 body=49 status=ok
// SIG undefined FUN_14dd795e9(void)

void FUN_14dd795e9(void)

{
  FUN_14d7ab721();
  return;
}



// FUNCTION 14dd7969c FUN_14dd7969c body=145 status=ok
// SIG undefined FUN_14dd7969c(void)

void FUN_14dd7969c(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RDI;
  
  thunk_FUN_166095279(&DAT_ac91427a73ca2b2b,(param_2 ^ 0xffffffffffffffff) + 1,unaff_RDI + -0x58);
  return;
}



// FUNCTION 14dd79730 FUN_14dd79730 body=37 status=ok
// SIG undefined FUN_14dd79730(void)

void FUN_14dd79730(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong in_RAX;
  int unaff_EBX;
  ulonglong in_R10;
  
  if (unaff_EBX < 0) {
    return;
  }
  (*(code *)0x156852581)
            (0x156852581,&LAB_14dd79758,
             (~param_1 | 0xffffffffffffffff - (-1 - ~((param_4 | in_R10) + in_RAX + 1))) + param_1 +
             1);
  return;
}



// FUNCTION 14dd797d9 FUN_14dd797d9 body=156 status=ok
// SIG undefined FUN_14dd797d9(void)

void FUN_14dd797d9(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  short in_R11W;
  undefined8 unaff_R12;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *param_1 = (-1 - ~-in_R11W) + *param_1;
  *(undefined8 *)(param_5 + -8) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = 0x14dd79870;
  FUN_161cbb089(uStackX_10,param_2,local_res8,param_4);
  FUN_14dd79876();
  return;
}



// FUNCTION 14dd79876 FUN_14dd79876 body=467 status=ok
// SIG undefined FUN_14dd79876(void)

/* WARNING: Removing unreachable block (ram,0x00014dd79a49) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ac0) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ad2) */
/* WARNING: Removing unreachable block (ram,0x000162b9569d) */
/* WARNING: Removing unreachable block (ram,0x000162b957c4) */
/* WARNING: Removing unreachable block (ram,0x000162b957d5) */
/* WARNING: Removing unreachable block (ram,0x00015b6c6e2b) */
/* WARNING: Removing unreachable block (ram,0x00015b6c6db9) */
/* WARNING: Removing unreachable block (ram,0x00014dd798de) */
/* WARNING: Removing unreachable block (ram,0x00014dd79987) */
/* WARNING: Removing unreachable block (ram,0x00014dd7998d) */
/* WARNING: Removing unreachable block (ram,0x00015b6c6d24) */
/* WARNING: Removing unreachable block (ram,0x00016499e00c) */
/* WARNING: Removing unreachable block (ram,0x00015b6c6da8) */
/* WARNING: Removing unreachable block (ram,0x00015b6c6dae) */
/* WARNING: Removing unreachable block (ram,0x00014da73d1a) */

void FUN_14dd79876(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte unaff_DIL;
  byte unaff_R14B;
  
  if (-1 < (char)(unaff_DIL | unaff_R14B)) {
    FUN_162da5a3d(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_156891473();
  return;
}



// FUNCTION 14dd79992 FUN_14dd79992 body=479 status=ok
// SIG undefined FUN_14dd79992(void)

/* WARNING: Removing unreachable block (ram,0x00014dd79a49) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ab5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ac0) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ad2) */
/* WARNING: Removing unreachable block (ram,0x000162b9569d) */
/* WARNING: Removing unreachable block (ram,0x000162b957c4) */
/* WARNING: Removing unreachable block (ram,0x000162b957d5) */

void FUN_14dd79992(void)

{
  return;
}



// FUNCTION 14dd79b77 FUN_14dd79b77 body=532 status=ok
// SIG undefined FUN_14dd79b77(void)

/* WARNING: Instruction at (ram,0x00014dd79ce2) overlaps instruction at (ram,0x00014dd79ce1)
    */
/* WARNING: Removing unreachable block (ram,0x00016207eb54) */
/* WARNING: Removing unreachable block (ram,0x00014dd79c99) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ca5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ce2) */
/* WARNING: Removing unreachable block (ram,0x00014dd79cd9) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ce3) */
/* WARNING: Removing unreachable block (ram,0x00014dd79ce5) */
/* WARNING: Removing unreachable block (ram,0x00014dd79d2f) */
/* WARNING: Removing unreachable block (ram,0x00016207e966) */
/* WARNING: Removing unreachable block (ram,0x00016207eb49) */
/* WARNING: Removing unreachable block (ram,0x00016207eb4f) */
/* WARNING: Removing unreachable block (ram,0x00014dd79d47) */
/* WARNING: Removing unreachable block (ram,0x00016207e961) */
/* WARNING: Removing unreachable block (ram,0x00014dd79d4d) */
/* WARNING: Removing unreachable block (ram,0x00014dd79d53) */
/* WARNING: Removing unreachable block (ram,0x00014dd79d58) */
/* WARNING: Removing unreachable block (ram,0x00016207eb44) */
/* WARNING: Removing unreachable block (ram,0x00014dd79c13) */
/* WARNING: Removing unreachable block (ram,0x00014dd79c1e) */
/* WARNING: Removing unreachable block (ram,0x00014de51d13) */
/* WARNING: Removing unreachable block (ram,0x00014dd79c19) */

undefined8 FUN_14dd79b77(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_157282b77(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                        *(undefined8 *)(unaff_R12 + -0x78));
  return uVar1;
}



// FUNCTION 14dd79de3 FUN_14dd79de3 body=300 status=ok
// SIG undefined FUN_14dd79de3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd79f9b) */

void FUN_14dd79de3(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar4;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  byte bVar24;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  bool bVar29;
  ulonglong uVar30;
  ulonglong *unaff_retaddr;
  ulonglong local_8;
  
  local_8 = CONCAT71(0x4caf59,(char)param_1) ^ 0x4caf5900;
  uVar2 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),0xffff);
  uVar4 = CONCAT62(0x4caf,~(ushort)local_8);
  FUN_162e5db94();
  uVar30 = *(ulonglong *)(unaff_RSI + -8);
  uVar3 = local_8;
  FUN_162f644d5();
  local_8._0_2_ = (ushort)uVar30;
  local_8._0_2_ = (-0x101 - ((ushort)local_8 | 0xfeff)) + (ushort)local_8;
  bVar22 = ((ushort)local_8 & 0x4000) != 0;
  bVar20 = ((ushort)local_8 & 0x800) != 0;
  bVar17 = ((ushort)local_8 & 0x200) != 0;
  bVar15 = ((ushort)local_8 & 0x100) != 0;
  bVar13 = ((ushort)local_8 & 0x80) != 0;
  bVar11 = ((ushort)local_8 & 0x40) != 0;
  bVar9 = ((ushort)local_8 & 0x10) != 0;
  bVar7 = ((ushort)local_8 & 4) != 0;
  bVar5 = ((ushort)local_8 & 1) != 0;
  bVar28 = (uVar30 & 0x200000) != 0;
  bVar24 = (uVar30 & 0x40000) != 0;
  bVar27 = 0;
  bVar26 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *unaff_retaddr = uVar3;
  unaff_retaddr[-1] = uVar3;
  unaff_retaddr[-2] =
       (ulonglong)(bVar22 & 1) * 0x4000 | (ulonglong)(bVar20 & 1) * 0x800 |
       (ulonglong)(((ushort)local_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar17 & 1) * 0x200 |
       (ulonglong)(bVar15 & 1) * 0x100 | (ulonglong)(bVar13 & 1) * 0x80 |
       (ulonglong)(bVar11 & 1) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 | (ulonglong)(bVar7 & 1) * 4 |
       (ulonglong)(bVar5 & 1) | (ulonglong)(bVar28 & 1) * 0x200000 |
       (ulonglong)(bVar27 & 1) * 0x100000 | (ulonglong)(bVar26 & 1) * 0x80000 |
       (ulonglong)(bVar24 & 1) * 0x40000;
  uVar30 = unaff_retaddr[-2];
  bVar23 = (uVar30 & 0x4000) != 0;
  bVar21 = (uVar30 & 0x800) != 0;
  bVar19 = (uVar30 & 0x400) != 0;
  bVar18 = (uVar30 & 0x200) != 0;
  bVar16 = (uVar30 & 0x100) != 0;
  bVar14 = (uVar30 & 0x80) != 0;
  bVar12 = (uVar30 & 0x40) != 0;
  bVar10 = (uVar30 & 0x10) != 0;
  bVar8 = (uVar30 & 4) != 0;
  bVar6 = (uVar30 & 1) != 0;
  bVar29 = (uVar30 & 0x200000) != 0;
  bVar25 = (uVar30 & 0x40000) != 0;
  unaff_retaddr[-2] =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar18 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar14 * 0x80 |
       (ulonglong)bVar12 * 0x40 | (ulonglong)bVar10 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar6
       | (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  unaff_retaddr[-3] = uVar2;
  unaff_retaddr[-4] = in_R11;
  if (bVar14) {
    FUN_161d88173();
    return;
  }
  unaff_retaddr[-5] =
       (ulonglong)bVar23 * 0x4000 | (ulonglong)bVar21 * 0x800 | (ulonglong)bVar19 * 0x400 |
       (ulonglong)bVar18 * 0x200 | (ulonglong)bVar16 * 0x100 | (ulonglong)bVar12 * 0x40 |
       (ulonglong)bVar10 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar6 |
       (ulonglong)bVar29 * 0x200000 | (ulonglong)bVar25 * 0x40000;
  uVar30 = unaff_retaddr[-2];
  unaff_retaddr[-2] = ~(unaff_RBP & (~(~param_4 & unaff_R15) + unaff_R15) - param_4);
  unaff_retaddr[-3] = uVar4;
  unaff_retaddr[-4] =
       (ulonglong)((uVar30 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar30 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar30 & 0x400) != 0) * 0x400 | (ulonglong)((uVar30 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar30 & 0x100) != 0) * 0x100 | (ulonglong)((uVar30 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar30 & 0x40) != 0) * 0x40 | (ulonglong)((uVar30 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar30 & 4) != 0) * 4 | (ulonglong)((uVar30 & 1) != 0) |
       (ulonglong)((uVar30 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar30 & 0x40000) != 0) * 0x40000;
  *unaff_retaddr = 0x3511adc;
  *(undefined8 *)((longlong)unaff_retaddr + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)unaff_retaddr + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)unaff_retaddr + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dd79f13 FUN_14dd79f13 body=150 status=ok
// SIG undefined FUN_14dd79f13(void)

/* WARNING: Removing unreachable block (ram,0x00014dd79f9b) */

void FUN_14dd79f13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R13;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  byte bVar22;
  bool bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  bool bVar27;
  ulonglong uVar28;
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  uVar2 = (-0x101 - (local_res10 | 0xfeff)) + local_res10;
  bVar20 = (uVar2 & 0x4000) != 0;
  bVar18 = (uVar2 & 0x800) != 0;
  bVar15 = (uVar2 & 0x200) != 0;
  bVar13 = (uVar2 & 0x100) != 0;
  bVar11 = (uVar2 & 0x80) != 0;
  bVar9 = (uVar2 & 0x40) != 0;
  bVar7 = (uVar2 & 0x10) != 0;
  bVar5 = (uVar2 & 4) != 0;
  bVar3 = (uVar2 & 1) != 0;
  bVar26 = (uStackX_12 & 0x20) != 0;
  bVar22 = (uStackX_12 & 4) != 0;
  bVar25 = 0;
  bVar24 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res18 = param_2;
  local_res18[-1] = param_2;
  local_res18[-2] =
       (ulonglong)(bVar20 & 1) * 0x4000 | (ulonglong)(bVar18 & 1) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)(bVar15 & 1) * 0x200 |
       (ulonglong)(bVar13 & 1) * 0x100 | (ulonglong)(bVar11 & 1) * 0x80 |
       (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar26 & 1) * 0x200000 |
       (ulonglong)(bVar25 & 1) * 0x100000 | (ulonglong)(bVar24 & 1) * 0x80000 |
       (ulonglong)(bVar22 & 1) * 0x40000;
  uVar28 = local_res18[-2];
  bVar21 = (uVar28 & 0x4000) != 0;
  bVar19 = (uVar28 & 0x800) != 0;
  bVar17 = (uVar28 & 0x400) != 0;
  bVar16 = (uVar28 & 0x200) != 0;
  bVar14 = (uVar28 & 0x100) != 0;
  bVar12 = (uVar28 & 0x80) != 0;
  bVar10 = (uVar28 & 0x40) != 0;
  bVar8 = (uVar28 & 0x10) != 0;
  bVar6 = (uVar28 & 4) != 0;
  bVar4 = (uVar28 & 1) != 0;
  bVar27 = (uVar28 & 0x200000) != 0;
  bVar23 = (uVar28 & 0x40000) != 0;
  local_res18[-2] =
       (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar17 * 0x400 |
       (ulonglong)bVar16 * 0x200 | (ulonglong)bVar14 * 0x100 | (ulonglong)bVar12 * 0x80 |
       (ulonglong)bVar10 * 0x40 | (ulonglong)bVar8 * 0x10 | (ulonglong)bVar6 * 4 | (ulonglong)bVar4
       | (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar23 * 0x40000;
  local_res18[-3] = param_1;
  local_res18[-4] = in_R11;
  if (!bVar12) {
    local_res18[-5] =
         (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar19 * 0x800 | (ulonglong)bVar17 * 0x400 |
         (ulonglong)bVar16 * 0x200 | (ulonglong)bVar14 * 0x100 | (ulonglong)bVar10 * 0x40 |
         (ulonglong)bVar8 * 0x10 | (ulonglong)bVar6 * 4 | (ulonglong)bVar4 |
         (ulonglong)bVar27 * 0x200000 | (ulonglong)bVar23 * 0x40000;
    uVar28 = local_res18[-2];
    local_res18[-2] = unaff_RBP;
    local_res18[-3] = param_3;
    local_res18[-4] =
         (ulonglong)((uVar28 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar28 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar28 & 0x400) != 0) * 0x400 | (ulonglong)((uVar28 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar28 & 0x100) != 0) * 0x100 | (ulonglong)((uVar28 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar28 & 0x40) != 0) * 0x40 | (ulonglong)((uVar28 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar28 & 4) != 0) * 4 | (ulonglong)((uVar28 & 1) != 0) |
         (ulonglong)((uVar28 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar28 & 0x40000) != 0) * 0x40000;
    *local_res18 = 0x3511adc;
    *(undefined8 *)((longlong)local_res18 + -0x28c7) = unaff_R13;
    *(undefined8 *)((longlong)local_res18 + -0x28cf) = unaff_R13;
    *(undefined **)((longlong)local_res18 + -0x28c7) = &DAT_156ef2e4a;
    return;
  }
  FUN_161d88173();
  return;
}



// FUNCTION 14dd7a039 FUN_14dd7a039 body=827 status=ok
// SIG undefined FUN_14dd7a039(void)

/* WARNING: Removing unreachable block (ram,0x000162b71f56) */
/* WARNING: Removing unreachable block (ram,0x000164c18000) */
/* WARNING: Removing unreachable block (ram,0x000164c18055) */
/* WARNING: Removing unreachable block (ram,0x00016196c2aa) */
/* WARNING: Removing unreachable block (ram,0x00016196c2b0) */
/* WARNING: Removing unreachable block (ram,0x0001574175a8) */
/* WARNING: Removing unreachable block (ram,0x0001574175ae) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a153) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a15f) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a1f6) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a1fb) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a201) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a206) */
/* WARNING: Removing unreachable block (ram,0x00015741750e) */
/* WARNING: Removing unreachable block (ram,0x000164c17ebd) */
/* WARNING: Removing unreachable block (ram,0x000164c17ec1) */
/* WARNING: Removing unreachable block (ram,0x000164c17f11) */
/* WARNING: Removing unreachable block (ram,0x000164c17f17) */
/* WARNING: Removing unreachable block (ram,0x000164c17f0c) */
/* WARNING: Removing unreachable block (ram,0x0001574173d4) */
/* WARNING: Removing unreachable block (ram,0x0001574173e0) */
/* WARNING: Removing unreachable block (ram,0x000157417461) */
/* WARNING: Removing unreachable block (ram,0x000157417467) */
/* WARNING: Removing unreachable block (ram,0x000157417503) */
/* WARNING: Removing unreachable block (ram,0x000157417508) */
/* WARNING: Removing unreachable block (ram,0x000161bd5d16) */
/* WARNING: Removing unreachable block (ram,0x000161bd5d47) */
/* WARNING: Removing unreachable block (ram,0x000161bd5d98) */
/* WARNING: Removing unreachable block (ram,0x000161bd5d9e) */
/* WARNING: Removing unreachable block (ram,0x000161bd5df8) */
/* WARNING: Removing unreachable block (ram,0x000161bd5def) */
/* WARNING: Removing unreachable block (ram,0x00014db569cc) */
/* WARNING: Removing unreachable block (ram,0x000156620af2) */
/* WARNING: Removing unreachable block (ram,0x000164c17f1c) */
/* WARNING: Removing unreachable block (ram,0x000164c17f26) */

void FUN_14dd7a039(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong lVar6;
  undefined8 local_res8;
  ulonglong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RSI) = local_res8;
  uVar4 = local_res18[0];
  uVar5 = ~((~local_res18[0] | *(ulonglong *)(unaff_R13 + -0xa0)) &
           ~(~(*(ulonglong *)(unaff_R13 + -0xa0) ^ 0xffffffffffffffff) & ~local_res18[0]));
  local_res18[0] = *(ulonglong *)(unaff_R13 + -0x98);
  FUN_16179e01c();
  uVar2 = (param_5 + uVar4) - (param_5 & uVar4);
  lVar6 = (~uVar2 | ~param_5 | ~uVar4) + uVar2;
  local_res18[1] = local_res18[1] + uVar4 + (local_res18[1] & uVar4) * -2 & 0xfffffffffffffeff;
  *(undefined8 *)(lVar6 + -7) = unaff_RDI;
  *(undefined8 *)(lVar6 + -0xf) = unaff_RBX;
  *(undefined8 *)(lVar6 + -0x17) = unaff_RBX;
  *(undefined8 *)(lVar6 + -0x1f) = param_3;
  puVar1 = (uint *)(lVar6 + -0x27);
  *puVar1 = 0xf1e5d834;
  *puVar1 = *puVar1 ^ 0x640033be;
  *(undefined4 *)(lVar6 + -0x23) = 0xffffffff;
  lVar3 = *(longlong *)puVar1;
  *(undefined8 *)(lVar6 + -0x27) = unaff_R14;
  *(undefined8 *)(lVar6 + lVar3 + 0x6a1a1467) = *(undefined8 *)(lVar6 + -7);
  *(undefined8 *)(lVar6 + -0x17) = in_R11;
  *(undefined8 *)(lVar6 + -7) = 0;
  *(ulonglong *)(lVar6 + -7) = *(ulonglong *)(lVar6 + -7) ^ 0x14dcf4e81;
  thunk_FUN_15b642ca5(param_1,uVar5,*(undefined8 *)(lVar6 + -0x1f));
  return;
}



// FUNCTION 14dd7a7d2 FUN_14dd7a7d2 body=313 status=ok
// SIG undefined FUN_14dd7a7d2(void)

/* WARNING: Removing unreachable block (ram,0x0001659b0fbe) */
/* WARNING: Removing unreachable block (ram,0x00014dd7a864) */

void FUN_14dd7a7d2(void)

{
  code *pcVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  undefined8 in_R11;
  ulonglong local_res18;
  ulonglong in_stack_00000028;
  
  FUN_15b21a1c6(FUN_15b21a1c6,~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x70),
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2);
  uVar2 = ~unaff_RDI;
  pcVar1 = FUN_161510f20;
  FUN_161510f20();
  *(undefined8 *)(in_stack_00000028 + uVar2 + (in_stack_00000028 & uVar2) * -2 + -8) = in_R11;
  FUN_162a57270((local_res18 - uVar2) + (~local_res18 & ~uVar2 | local_res18) * -2 + -2,pcVar1);
  return;
}



// FUNCTION 14dd7aa53 FUN_14dd7aa53 body=331 status=ok
// SIG undefined FUN_14dd7aa53(void)

/* WARNING: Removing unreachable block (ram,0x000156e3eb3a) */
/* WARNING: Removing unreachable block (ram,0x000156e3ebb4) */
/* WARNING: Removing unreachable block (ram,0x000156e3ebb9) */
/* WARNING: Removing unreachable block (ram,0x000164b25bb3) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ab0a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ab8a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ab90) */
/* WARNING: Removing unreachable block (ram,0x0001623acc1f) */
/* WARNING: Removing unreachable block (ram,0x000156e3ebbf) */

void FUN_14dd7aa53(void)

{
  FUN_156e3eb3a();
  return;
}



// FUNCTION 14dd7ac53 FUN_14dd7ac53 body=472 status=ok
// SIG undefined FUN_14dd7ac53(void)

/* WARNING: Removing unreachable block (ram,0x000162e048d7) */
/* WARNING: Removing unreachable block (ram,0x000162e048e2) */
/* WARNING: Removing unreachable block (ram,0x000162e048dd) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ad83) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ad6e) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ad78) */

void FUN_14dd7ac53(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  byte unaff_SIL;
  byte bVar2;
  longlong unaff_R12;
  
  bVar2 = 0xff - ((byte)*(undefined8 *)(unaff_R12 + -0x30) ^ (byte)in_RAX);
  uVar1 = FUN_16645272f(CONCAT71((int7)(*(ulonglong *)(unaff_R12 + -0x28) + in_RAX +
                                        (*(ulonglong *)(unaff_R12 + -0x28) & in_RAX) * -2 >> 8),
                                 (~(bVar2 & unaff_SIL) + unaff_SIL) - ~bVar2),FUN_16645272f,
                        *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  FUN_1659a1cb2(*(ulonglong *)(unaff_R12 + -0x58) + uVar1 +
                (*(ulonglong *)(unaff_R12 + -0x58) & uVar1) * -2,FUN_1659a1cb2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ uVar1);
  return;
}



// FUNCTION 14dd7ae2d FUN_14dd7ae2d body=11 status=ok
// SIG undefined FUN_14dd7ae2d(void)

undefined8 FUN_14dd7ae2d(void)

{
  undefined8 unaff_retaddr;
  
                    /* WARNING: Treating indirect jump as return */
  return unaff_retaddr;
}



// FUNCTION 14dd7afa1 FUN_14dd7afa1 body=874 status=ok
// SIG undefined FUN_14dd7afa1(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7b16f) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b175) */
/* WARNING: Removing unreachable block (ram,0x000166b2d989) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b214) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b21a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b21f) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b0dc) */
/* WARNING: Removing unreachable block (ram,0x0001654e673e) */
/* WARNING: Removing unreachable block (ram,0x000164f7c9a9) */
/* WARNING: Removing unreachable block (ram,0x000164f7ca24) */
/* WARNING: Removing unreachable block (ram,0x000164f7ca2a) */
/* WARNING: Removing unreachable block (ram,0x000164f7ca1f) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b03a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7b0d6) */
/* WARNING: Removing unreachable block (ram,0x000165fe5aa1) */
/* WARNING: Removing unreachable block (ram,0x000164f7ca2f) */

longlong FUN_14dd7afa1(longlong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(ulonglong *)(&stack0xfffffffff16320d0 + param_1) =
       CONCAT71((int7)((ulonglong)in_RAX >> 8),unaff_RDI != 0x26ada1de);
  if (unaff_RDI == 0x26ada1de) {
    in(0x57);
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88);
  *(undefined8 *)(&stack0xfffffffff16320d0 + param_1) = *(undefined8 *)(unaff_R13 + -0x38);
  uVar1 = *(ulonglong *)(&stack0xfffffffff16320d0 + param_1);
  lVar2 = uVar1 + unaff_R15;
  if (lVar2 < 0) {
    lVar2 = FUN_156d946c9(param_1 + -0xe9cdf30,lVar2,
                          ~((~uVar3 | ~unaff_R15) ^ 0xffffffffffffffff |
                           (uVar3 | unaff_R15) ^ 0xffffffffffffffff));
    return lVar2;
  }
  *(ulonglong *)(&stack0xfffffffff16320d0 + param_1) = unaff_R15;
  uVar3 = ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  *(ulonglong *)(&stack0xfffffffff16320d0 + param_1) = uVar3;
  *(ulonglong *)(&stack0xfffffffff16320c8 + param_1) = uVar3;
  *(ulonglong *)(&stack0xfffffffff16320c0 + param_1) = uVar3;
  *(code **)(&stack0xfffffffff16320d0 + param_1) = FUN_156d94775;
  *(undefined1 **)(&stack0xfffffffff16320c8 + param_1) = &LAB_165a3db1a;
  return lVar2 + (uVar1 & unaff_R15) * -2;
}



// FUNCTION 14dd7b46b FUN_14dd7b46b body=156 status=ok
// SIG undefined FUN_14dd7b46b(void)

void FUN_14dd7b46b(void)

{
  return;
}



// FUNCTION 14dd7b508 FUN_14dd7b508 body=138 status=ok
// SIG undefined FUN_14dd7b508(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7b529) */

void FUN_14dd7b508(undefined8 param_1,undefined8 param_2)

{
  FUN_16592c423(param_1,param_2);
  return;
}



// FUNCTION 14dd7b593 FUN_14dd7b593 body=177 status=ok
// SIG undefined FUN_14dd7b593(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7b62d) */

void FUN_14dd7b593(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_15b07e71e(param_1,FUN_15b07e71e,0xdb59737,param_4 ^ param_1);
  return;
}



// FUNCTION 14dd7b644 FUN_14dd7b644 body=497 status=ok
// SIG undefined FUN_14dd7b644(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7b644(undefined8 param_1)

{
  uint in_R10D;
  
  (*(code *)0x14e0d6999)(param_1,(~(uint)param_1 + in_R10D) - (~(uint)param_1 & in_R10D));
  return;
}



// FUNCTION 14dd7b7ef FUN_14dd7b7ef body=67 status=ok
// SIG undefined FUN_14dd7b7ef(void)

void FUN_14dd7b7ef(void)

{
  return;
}



// FUNCTION 14dd7bb60 FUN_14dd7bb60 body=587 status=ok
// SIG undefined FUN_14dd7bb60(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7bd4d) */
/* WARNING: Removing unreachable block (ram,0x00014d83fe9a) */

void FUN_14dd7bb60(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong unaff_R12;
  longlong unaff_retaddr;
  longlong local_res18;
  
  uVar1 = (~(unaff_RDI & 0xfffffffff6193443) - 0x9e6cbbd) - ~unaff_RDI;
  uVar1 = ~((uVar1 - (unaff_R12 | uVar1)) + unaff_R12);
  *(undefined8 *)((longlong)&local_res18 + uVar1) = 0;
  *(longlong *)((longlong)&local_res18 + uVar1) =
       *(longlong *)((longlong)&local_res18 + uVar1) - unaff_retaddr;
  *(longlong *)((longlong)&local_res18 + uVar1) = -*(longlong *)((longlong)&local_res18 + uVar1);
  FUN_1650bbac3(ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14dd7bca5 FUN_14dd7bca5 body=185 status=ok
// SIG undefined FUN_14dd7bca5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7bd4d) */

void FUN_14dd7bca5(uint param_1)

{
  uint in_EAX;
  uint unaff_EDI;
  
  FUN_1567c636f(param_1 & ~(~in_EAX & (unaff_EDI + 0xb6a20a60) - (unaff_EDI & 0xb6a20a60)));
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd7bdcd FUN_14dd7bdcd body=127 status=ok
// SIG undefined FUN_14dd7bdcd(void)

/* WARNING: Removing unreachable block (ram,0x0001656a8272) */
/* WARNING: Removing unreachable block (ram,0x0001656a8278) */
/* WARNING: Removing unreachable block (ram,0x000160f3c54f) */
/* WARNING: Removing unreachable block (ram,0x000161a50d28) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5d5) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5db) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5e0) */
/* WARNING: Removing unreachable block (ram,0x000160f3c661) */
/* WARNING: Removing unreachable block (ram,0x000160f3c667) */
/* WARNING: Removing unreachable block (ram,0x000156a5f6f5) */
/* WARNING: Removing unreachable block (ram,0x00015b11a5ec) */
/* WARNING: Removing unreachable block (ram,0x00016558e6d2) */
/* WARNING: Removing unreachable block (ram,0x00016558e6cc) */
/* WARNING: Removing unreachable block (ram,0x00016558e6d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd7beec) */
/* WARNING: Removing unreachable block (ram,0x00014dd7bef2) */
/* WARNING: Removing unreachable block (ram,0x00015b11a5e1) */
/* WARNING: Removing unreachable block (ram,0x000156c1f49e) */
/* WARNING: Removing unreachable block (ram,0x00015b29d7cd) */
/* WARNING: Removing unreachable block (ram,0x0001656a8017) */
/* WARNING: Removing unreachable block (ram,0x0001656a81e2) */
/* WARNING: Removing unreachable block (ram,0x0001656a81e8) */
/* WARNING: Removing unreachable block (ram,0x000156c1f3ca) */
/* WARNING: Removing unreachable block (ram,0x000156c1f44f) */
/* WARNING: Removing unreachable block (ram,0x000156c1f455) */
/* WARNING: Removing unreachable block (ram,0x000161c6d7d5) */
/* WARNING: Removing unreachable block (ram,0x0001653902c1) */
/* WARNING: Removing unreachable block (ram,0x000161c6d84c) */
/* WARNING: Removing unreachable block (ram,0x000161c6d852) */
/* WARNING: Removing unreachable block (ram,0x000161c6d857) */
/* WARNING: Removing unreachable block (ram,0x000161c6d89c) */
/* WARNING: Removing unreachable block (ram,0x000161c6d892) */
/* WARNING: Removing unreachable block (ram,0x0001656a7eec) */
/* WARNING: Removing unreachable block (ram,0x0001656a8006) */
/* WARNING: Removing unreachable block (ram,0x0001656a8011) */
/* WARNING: Removing unreachable block (ram,0x00016540d4fe) */
/* WARNING: Removing unreachable block (ram,0x000156c1f45a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7bdcd(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong uVar6;
  ulonglong in_stack_00000010;
  
  uVar4 = ~(param_1 & ~param_4) & (~param_4 + param_1) - (~param_4 & param_1) ^ 0xffffffffffffffff;
  uVar5 = *(ulonglong *)(unaff_RDI + -0x80);
  uVar6 = param_1 - (uVar5 | param_1);
  if ((!CARRY8(uVar6,uVar5)) || (CARRY8(uVar6,uVar5) || uVar6 + uVar5 == 0)) {
    FUN_166bf3214(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
    return;
  }
  uVar5 = (param_5 & in_stack_00000010 ^ 0xffffffffffffffff) & (param_5 | in_stack_00000010);
  param_5._0_2_ = (ushort)uVar5;
  param_5._0_2_ = (-0x101 - ((ushort)param_5 | 0xfeff)) + (ushort)param_5;
  param_5._2_6_ = (undefined6)(uVar5 >> 0x10);
  FUN_165b998e7(param_1,param_2);
  bVar3 = (byte)(ushort)param_5 & 0x1f;
  bVar1 = ((ushort)param_5 & 0x1f) != 0;
  bVar2 = (-8 >> bVar3 - 1 & 1U) != 0;
  if (bVar1 && bVar2) {
    if (bVar1 && bVar2 || ((ushort)param_5 & 0x1f) != 0 && -8 >> bVar3 == 0) {
      FUN_16558e656();
      return;
    }
    FUN_16270cfa0(*(undefined8 *)(unaff_R12 + -0x60),8,
                  *(ulonglong *)(unaff_R12 + -0x40) |
                  ~(*(ulonglong *)(unaff_RDI + -0x80) & param_5) &
                  (*(ulonglong *)(unaff_RDI + -0x80) | param_5));
    return;
  }
  uVar6 = ~(~*(ulonglong *)(unaff_RDI + -0xa0) & ~param_5);
  uVar5 = ~(*(ulonglong *)(unaff_RDI + -0xa0) & param_5);
  if ((uVar6 - (uVar5 | uVar6)) + uVar5 == 0) {
    FUN_1627386a9();
    return;
  }
  FUN_164901d8e(FUN_164901d8e,
                (*(ulonglong *)(unaff_RDI + -0x68) & param_5 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RDI + -0x68) | param_5),
                *(ulonglong *)(unaff_RDI + -0x70) + param_5 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_5) * -2,
                (longlong)FUN_165b998e7 - (uVar4 << ((char)param_1 - 0x12U & 0x3f)));
  return;
}



// FUNCTION 14dd7be4c FUN_14dd7be4c body=295 status=ok
// SIG undefined FUN_14dd7be4c(void)

/* WARNING: Removing unreachable block (ram,0x000160f3c54f) */
/* WARNING: Removing unreachable block (ram,0x000161a50d28) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5d5) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5e0) */
/* WARNING: Removing unreachable block (ram,0x000160f3c661) */
/* WARNING: Removing unreachable block (ram,0x000160f3c667) */
/* WARNING: Removing unreachable block (ram,0x000156a5f6f5) */
/* WARNING: Removing unreachable block (ram,0x0001656a8272) */
/* WARNING: Removing unreachable block (ram,0x0001656a8278) */
/* WARNING: Removing unreachable block (ram,0x000160f3c5db) */
/* WARNING: Removing unreachable block (ram,0x00015b11a5ec) */
/* WARNING: Removing unreachable block (ram,0x00016558e6d2) */
/* WARNING: Removing unreachable block (ram,0x00016558e6cc) */
/* WARNING: Removing unreachable block (ram,0x00016558e6d7) */
/* WARNING: Removing unreachable block (ram,0x00015b11a5e1) */
/* WARNING: Removing unreachable block (ram,0x000156c1f49e) */
/* WARNING: Removing unreachable block (ram,0x00014dd7beec) */
/* WARNING: Removing unreachable block (ram,0x00014dd7bef2) */
/* WARNING: Removing unreachable block (ram,0x0001656a8017) */
/* WARNING: Removing unreachable block (ram,0x0001656a81e2) */
/* WARNING: Removing unreachable block (ram,0x0001656a81e8) */
/* WARNING: Removing unreachable block (ram,0x000156c1f3ca) */
/* WARNING: Removing unreachable block (ram,0x000156c1f44f) */
/* WARNING: Removing unreachable block (ram,0x000156c1f455) */
/* WARNING: Removing unreachable block (ram,0x000161c6d7d5) */
/* WARNING: Removing unreachable block (ram,0x000161c6d84c) */
/* WARNING: Removing unreachable block (ram,0x000161c6d852) */
/* WARNING: Removing unreachable block (ram,0x000161c6d857) */
/* WARNING: Removing unreachable block (ram,0x000161c6d89c) */
/* WARNING: Removing unreachable block (ram,0x000161c6d892) */
/* WARNING: Removing unreachable block (ram,0x0001653902c1) */
/* WARNING: Removing unreachable block (ram,0x0001656a7eec) */
/* WARNING: Removing unreachable block (ram,0x0001656a8006) */
/* WARNING: Removing unreachable block (ram,0x0001656a8011) */
/* WARNING: Removing unreachable block (ram,0x00016540d4fe) */
/* WARNING: Removing unreachable block (ram,0x000156c1f45a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong in_stack_00000010;
  
  uVar4 = (param_5 & in_stack_00000010 ^ 0xffffffffffffffff) & (param_5 | in_stack_00000010);
  param_5._0_2_ = (ushort)uVar4;
  param_5._0_2_ = (-0x101 - ((ushort)param_5 | 0xfeff)) + (ushort)param_5;
  param_5._2_6_ = (undefined6)(uVar4 >> 0x10);
  FUN_165b998e7(param_1,param_2);
  bVar3 = (byte)(ushort)param_5 & 0x1f;
  bVar1 = ((ushort)param_5 & 0x1f) != 0;
  bVar2 = (-8 >> bVar3 - 1 & 1U) != 0;
  if (bVar1 && bVar2) {
    if (bVar1 && bVar2 || ((ushort)param_5 & 0x1f) != 0 && -8 >> bVar3 == 0) {
      FUN_16558e656();
      return;
    }
    FUN_16270cfa0(*(undefined8 *)(unaff_R12 + -0x60),8,
                  *(ulonglong *)(unaff_R12 + -0x40) |
                  ~(*(ulonglong *)(unaff_RDI + -0x80) & param_5) &
                  (*(ulonglong *)(unaff_RDI + -0x80) | param_5));
    return;
  }
  uVar5 = ~(~*(ulonglong *)(unaff_RDI + -0xa0) & ~param_5);
  uVar4 = ~(*(ulonglong *)(unaff_RDI + -0xa0) & param_5);
  if ((uVar5 - (uVar4 | uVar5)) + uVar4 == 0) {
    FUN_1627386a9();
    return;
  }
  FUN_164901d8e(FUN_164901d8e,
                (*(ulonglong *)(unaff_RDI + -0x68) & param_5 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RDI + -0x68) | param_5),
                *(ulonglong *)(unaff_RDI + -0x70) + param_5 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_5) * -2,
                (longlong)FUN_165b998e7 - (param_4 << ((char)param_1 - 0x12U & 0x3f)));
  return;
}



// FUNCTION 14dd7c041 FUN_14dd7c041 body=200 status=ok
// SIG undefined FUN_14dd7c041(void)

void FUN_14dd7c041(void)

{
  FUN_1648ed223();
  return;
}



// FUNCTION 14dd7c1bf FUN_14dd7c1bf body=119 status=ok
// SIG undefined FUN_14dd7c1bf(void)

void FUN_14dd7c1bf(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong in_stack_00000008;
  
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) & param_1;
  *(ulonglong *)(unaff_R13 + 8) = (unaff_R12 + param_1) - *(longlong *)(unaff_R13 + 8);
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  lVar2 = *(longlong *)(unaff_R13 + 8);
  *(undefined8 *)(unaff_R13 + 8) = 0;
  *(longlong *)(unaff_R13 + 8) =
       *(longlong *)(unaff_R13 + 8) - ~((lVar2 - (in_stack_00000008 | uVar1)) + in_stack_00000008);
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(longlong *)(unaff_R13 + 8) = *(longlong *)(unaff_R13 + 8) + 1;
  return;
}



// FUNCTION 14dd7c612 FUN_14dd7c612 body=165 status=ok
// SIG undefined FUN_14dd7c612(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7c805) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c80b) */
/* WARNING: Removing unreachable block (ram,0x000165154ee1) */
/* WARNING: Removing unreachable block (ram,0x000165154ee7) */
/* WARNING: Removing unreachable block (ram,0x00014dc4f1e1) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c857) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c85a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c888) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c88e) */
/* WARNING: Removing unreachable block (ram,0x0001612ca9c9) */
/* WARNING: Removing unreachable block (ram,0x000165154e44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7c612(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar5 = in_stack_00000008 & 0xffffffff ^ 0x664961b1 ^ *(ulonglong *)(unaff_RDI + -0x48) ^ param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -8);
  FUN_1652c0b77();
  lVar2 = *(longlong *)(unaff_RDI + -0x98);
  uVar4 = FUN_1649aeaee();
  lVar3 = -((0xffffffffffffffff - param_1 | uVar1) & (~uVar1 | param_1));
  *(longlong *)(lVar3 + -9) = lVar2 * 2;
  *(ulonglong *)(lVar3 + -0x11) = uVar5;
  *(ulonglong *)(lVar3 + -0x19) = uVar5;
  *(undefined8 *)(lVar3 + -0x21) = param_4;
  *(undefined8 *)(lVar3 + -0x29) = uVar4;
  *(undefined4 *)(lVar3 + -0x29) = 0x93b8bdbb;
  *(undefined4 *)(lVar3 + -0x25) = 0xffffffff;
  *(undefined8 *)(lVar3 + -0x11) =
       *(undefined8 *)(lVar3 + *(ulonglong *)(lVar3 + -0x29) + 0x6c47423c);
  if (0xffffffff93b8bdaa < *(ulonglong *)(lVar3 + -0x29)) {
    *(undefined1 **)(lVar3 + -9) = &LAB_162a9e3cc;
    *(code **)(lVar3 + -0x19) = FUN_1652c0b77;
    *(undefined4 *)(lVar3 + -0x21) = 0xb93925ed;
    *(undefined4 *)(lVar3 + -0x1d) = 0xffffffff;
    *(ulonglong *)(lVar3 + -0x11) = uVar5;
    *(ulonglong *)(lVar3 + -0x19) = uVar5;
    *(undefined **)(lVar3 + -0x11) = &DAT_14d7be688;
    return;
  }
  FUN_162a9e35e();
  return;
}



// FUNCTION 14dd7c6b7 FUN_14dd7c6b7 body=582 status=ok
// SIG undefined FUN_14dd7c6b7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7c805) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c80b) */
/* WARNING: Removing unreachable block (ram,0x000165154ee1) */
/* WARNING: Removing unreachable block (ram,0x000165154ee7) */
/* WARNING: Removing unreachable block (ram,0x00014dc4f1e1) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c857) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c85a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c888) */
/* WARNING: Removing unreachable block (ram,0x00014dd7c88e) */
/* WARNING: Removing unreachable block (ram,0x0001612ca9c9) */
/* WARNING: Removing unreachable block (ram,0x000165154e44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7c6b7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uStackX_8;
  
  lVar1 = *(longlong *)(unaff_RDI + -0x98);
  uVar3 = FUN_1649aeaee();
  lVar2 = -((0xffffffffffffffff - param_1 | uStackX_8) & (~uStackX_8 | param_1));
  *(longlong *)(lVar2 + -9) = lVar1 * 2;
  *(undefined8 *)(lVar2 + -0x11) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x19) = unaff_RSI;
  *(undefined8 *)(lVar2 + -0x21) = param_4;
  *(undefined8 *)(lVar2 + -0x29) = uVar3;
  *(undefined4 *)(lVar2 + -0x29) = 0x93b8bdbb;
  *(undefined4 *)(lVar2 + -0x25) = 0xffffffff;
  *(undefined8 *)(lVar2 + -0x11) =
       *(undefined8 *)(lVar2 + *(ulonglong *)(lVar2 + -0x29) + 0x6c47423c);
  if (0xffffffff93b8bdaa < *(ulonglong *)(lVar2 + -0x29)) {
    *(undefined1 **)(lVar2 + -9) = &LAB_162a9e3cc;
    *(undefined8 *)(lVar2 + -0x19) = unaff_R15;
    *(undefined4 *)(lVar2 + -0x21) = 0xb93925ed;
    *(undefined4 *)(lVar2 + -0x1d) = 0xffffffff;
    *(undefined8 *)(lVar2 + -0x11) = unaff_RSI;
    *(undefined8 *)(lVar2 + -0x19) = unaff_RSI;
    *(undefined **)(lVar2 + -0x11) = &DAT_14d7be688;
    return;
  }
  FUN_162a9e35e();
  return;
}



// FUNCTION 14dd7c88e FUN_14dd7c88e body=210 status=ok
// SIG undefined FUN_14dd7c88e(void)

void FUN_14dd7c88e(void)

{
  return;
}



// FUNCTION 14dd7cbbf FUN_14dd7cbbf body=128 status=ok
// SIG undefined FUN_14dd7cbbf(void)

void FUN_14dd7cbbf(undefined8 param_1)

{
  FUN_161e36961(param_1,0x10);
  return;
}



// FUNCTION 14dd7cc42 FUN_14dd7cc42 body=457 status=FAIL
// SIG undefined FUN_14dd7cc42(void)
/* DECOMPILE FAILED */

// FUNCTION 14dd7ccdf FUN_14dd7ccdf body=82 status=ok
// SIG undefined FUN_14dd7ccdf(void)

void FUN_14dd7ccdf(void)

{
  return;
}



// FUNCTION 14dd7cd8e FUN_14dd7cd8e body=567 status=ok
// SIG undefined FUN_14dd7cd8e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7ce25) */
/* WARNING: Removing unreachable block (ram,0x00014dd7ce2b) */
/* WARNING: Removing unreachable block (ram,0x000165b05ac9) */
/* WARNING: Removing unreachable block (ram,0x000165b05b47) */
/* WARNING: Removing unreachable block (ram,0x000165b05b5e) */

void FUN_14dd7cd8e(void)

{
  FUN_165b05ac9();
  return;
}



// FUNCTION 14dd7cfc8 FUN_14dd7cfc8 body=172 status=ok
// SIG undefined FUN_14dd7cfc8(void)

void FUN_14dd7cfc8(void)

{
  return;
}



// FUNCTION 14dd7d2d6 FUN_14dd7d2d6 body=166 status=ok
// SIG undefined FUN_14dd7d2d6(void)

void FUN_14dd7d2d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_R10;
  uint unaff_retaddr;
  
  if (in_R10 == (param_4 ^
                ~(~((ulonglong)unaff_retaddr & 0xffffffff9eb80094) &
                 ((ulonglong)unaff_retaddr | 0xffffffff9eb80094)))) {
    return;
  }
  FUN_160ded9c0(param_1,param_2);
  return;
}



// FUNCTION 14dd7d37d FUN_14dd7d37d body=78 status=ok
// SIG undefined FUN_14dd7d37d(void)

void FUN_14dd7d37d(void)

{
  return;
}



// FUNCTION 14dd7d42a FUN_14dd7d42a body=46 status=ok
// SIG undefined FUN_14dd7d42a(void)

void FUN_14dd7d42a(void)

{
  return;
}



// FUNCTION 14dd7d530 FUN_14dd7d530 body=186 status=ok
// SIG undefined FUN_14dd7d530(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7d530(void)

{
  return;
}



// FUNCTION 14dd7d79e FUN_14dd7d79e body=113 status=ok
// SIG undefined FUN_14dd7d79e(void)

void FUN_14dd7d79e(undefined8 param_1)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_15b3b42b0(param_1);
    return;
  }
  FUN_15b3b42ba();
  return;
}



// FUNCTION 14dd7da41 FUN_14dd7da41 body=124 status=ok
// SIG undefined FUN_14dd7da41(void)

void * FUN_14dd7da41(void)

{
  return ProcessEnvironmentBlock;
}



// FUNCTION 14dd7db60 FUN_14dd7db60 body=268 status=ok
// SIG undefined FUN_14dd7db60(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7db60(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 unaff_retaddr;
  
  puVar2 = (uint *)FUN_1648d6182(0x7ffe0000);
  uVar1 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = (~uVar1 - 1) - *puVar2;
  uVar3 = 0xffffffff - ((*puVar2 - (~param_2 | *puVar2)) + ~param_2);
  *puVar2 = 0x628e735d;
  *puVar2 = *puVar2 ^ 0x628e735d;
  uVar1 = *puVar2;
  *puVar2 = *puVar2 & uVar3;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 & (uVar1 | uVar3);
  FUN_14df8a085(0xd76c55dd,unaff_retaddr);
  return;
}



// FUNCTION 14dd7dd6b thunk_FUN_14dd7dd71 body=5 status=ok
// SIG undefined thunk_FUN_14dd7dd71(void)

void thunk_FUN_14dd7dd71(void)

{
  return;
}



// FUNCTION 14dd7dd71 FUN_14dd7dd71 body=128 status=ok
// SIG undefined FUN_14dd7dd71(void)

void FUN_14dd7dd71(void)

{
  return;
}



// FUNCTION 14dd7de93 FUN_14dd7de93 body=175 status=ok
// SIG undefined FUN_14dd7de93(void)

void FUN_14dd7de93(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  undefined8 unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  param_3 = param_3 | ~(unaff_RBX & 0xf32e487 | 0xfffffffff0cd1b78);
  uVar1 = param_3 - 0x4b815fd;
  *(ulonglong *)(&stack0xfffffffffb47ea0b + param_3) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(param_3,0x4b815fd) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar1 < 0) * 0x80 | (ulonglong)(uVar1 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(param_3 < 0x4b815fd) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(&stack0xfffffffffb47ea0b + param_3) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffffb47ea03 + param_3) = unaff_R13;
  *(undefined **)(&stack0xfffffffffb47ea0b + param_3) = &DAT_14dd7df43;
  return;
}



// FUNCTION 14dd7e007 FUN_14dd7e007 body=267 status=ok
// SIG undefined FUN_14dd7e007(void)

undefined1 FUN_14dd7e007(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  
  local_res18 = local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2;
  uVar2 = FUN_14e0c718b(param_1,param_2,param_3,unaff_retaddr);
  uVar1 = local_res18 ^ (ulonglong)local_res10;
  LOCK();
  uVar3 = DAT_14d7a473c;
  UNLOCK();
  DAT_14d7a473c = uVar2;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x18) = 0x4fb2a76;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x18);
  *(code **)(uVar1 - 0x28cf) = FUN_14e0c718b;
  *(code **)(uVar1 - 0x28d7) = FUN_14e0c718b;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return uVar3;
}



// FUNCTION 14dd7e1a6 FUN_14dd7e1a6 body=2 status=ok
// SIG undefined FUN_14dd7e1a6(void)

void FUN_14dd7e1a6(void)

{
  return;
}



// FUNCTION 14dd7e230 FUN_14dd7e230 body=204 status=ok
// SIG undefined FUN_14dd7e230(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7e2dc) */

void FUN_14dd7e230(void)

{
  return;
}



// FUNCTION 14dd7e3bd FUN_14dd7e3bd body=139 status=ok
// SIG undefined FUN_14dd7e3bd(void)

void FUN_14dd7e3bd(void)

{
  FUN_16215e3e9();
  return;
}



// FUNCTION 14dd7e451 FUN_14dd7e451 body=23 status=ok
// SIG undefined FUN_14dd7e451(void)

void FUN_14dd7e451(void)

{
  return;
}



// FUNCTION 14dd7e500 FUN_14dd7e500 body=166 status=ok
// SIG undefined FUN_14dd7e500(void)

void FUN_14dd7e500(ulonglong param_1)

{
  ulonglong uVar1;
  undefined4 local_res8 [8];
  
  uVar1 = ~((~param_1 | 0x312872e8) & (param_1 - 0x312872e9) - (param_1 & 0xffffffffced78d17));
  *(undefined4 *)((longlong)local_res8 + uVar1) = 0;
  *(undefined4 *)((longlong)local_res8 + uVar1) = *(undefined4 *)((longlong)local_res8 + uVar1);
  *(undefined4 *)((longlong)local_res8 + uVar1) = *(undefined4 *)((longlong)local_res8 + uVar1);
  return;
}



// FUNCTION 14dd7e5a6 FUN_14dd7e5a6 body=122 status=ok
// SIG undefined FUN_14dd7e5a6(void)

void FUN_14dd7e5a6(void)

{
  (*(code *)0x15b0ac269)();
  return;
}



// FUNCTION 14dd7e779 FUN_14dd7e779 body=454 status=ok
// SIG undefined FUN_14dd7e779(void)

/* WARNING: Removing unreachable block (ram,0x00015b4bc5a6) */
/* WARNING: Removing unreachable block (ram,0x00014dd7e8da) */
/* WARNING: Removing unreachable block (ram,0x00014dd7e8e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd7e82a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7e8d4) */
/* WARNING: Removing unreachable block (ram,0x00014dd7e8cf) */

undefined8 FUN_14dd7e779(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_R9;
  *(undefined8 *)(uVar1 - 0x20) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -0x162af3295;
  *(ulonglong *)(uVar1 - 8) = ~*(ulonglong *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 1;
  uVar2 = thunk_FUN_15b642ca5();
  return uVar2;
}



// FUNCTION 14dd7e943 FUN_14dd7e943 body=33 status=ok
// SIG undefined FUN_14dd7e943(void)

void FUN_14dd7e943(void)

{
  (*(code *)0x15b870310)(0x15b870310,0x1e8eb09f,2);
  return;
}



// FUNCTION 14dd7e964 FUN_14dd7e964 body=169 status=ok
// SIG undefined FUN_14dd7e964(void)

ulonglong FUN_14dd7e964(void)

{
  ulonglong in_RAX;
  undefined8 local_res8;
  
  return local_res8 ^ in_RAX;
}



// FUNCTION 14dd7ec70 FUN_14dd7ec70 body=160 status=ok
// SIG undefined FUN_14dd7ec70(void)

void FUN_14dd7ec70(undefined8 param_1)

{
  FUN_15b202eeb(param_1,0x818e2b35,0x9cffe96e);
  FUN_160d3e671();
  FUN_164f53730();
  return;
}



// FUNCTION 14dd7ed12 FUN_14dd7ed12 body=424 status=ok
// SIG undefined FUN_14dd7ed12(void)

void FUN_14dd7ed12(undefined8 param_1,undefined8 param_2)

{
  FUN_160d3e671(param_1,param_2);
  FUN_164f53730();
  return;
}



// FUNCTION 14dd7f015 FUN_14dd7f015 body=292 status=ok
// SIG undefined FUN_14dd7f015(void)

/* WARNING: Removing unreachable block (ram,0x00014dd7f0af) */
/* WARNING: Removing unreachable block (ram,0x00014dd7f0bb) */
/* WARNING: Removing unreachable block (ram,0x00015764c67f) */

undefined8 FUN_14dd7f015(ulonglong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong local_res20;
  
  uVar2 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = *param_2 | param_1;
  *param_2 = ~((~param_1 | uVar2) & *param_2);
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_RDI;
  *(undefined8 *)(param_1 - 0x10) = &DAT_166619194;
  *(undefined **)(param_1 - 0x18) = &DAT_166619194;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  lVar3 = *(longlong *)(param_1 - 0x18);
  *(undefined8 *)(param_1 - 0x18) = param_3;
  *(undefined8 *)(param_1 - 8) = 0x45f0d8cd;
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(param_1 - 0x18);
  *(longlong *)(param_1 - 0x20) = -lVar3;
  uVar2 = *(ulonglong *)(param_1 - 8);
  *(ulonglong *)(param_1 - 8) = *(ulonglong *)(param_1 - 8) | 0xffffffffba0f2732;
  *(ulonglong *)(param_1 - 8) = ~(~(uVar2 & 0xffffffffba0f2732) & *(ulonglong *)(param_1 - 8));
  uVar4 = *(ulonglong *)(param_1 - 0x20);
  uVar5 = *(undefined8 *)(param_1 - 0x18);
  puVar1 = (ulonglong *)(param_1 - 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar4;
  if (uVar2 < uVar4) {
    uVar5 = FUN_166619144();
    return uVar5;
  }
  *(undefined8 *)(param_1 - 0x18) = unaff_RBP;
  *(undefined4 *)(param_1 - 0x20) = 0x116a6ab1;
  *(undefined4 *)(param_1 - 0x1c) = 0;
  uVar5 = thunk_FUN_15b642ca5(uStackX_10,unaff_retaddr,uVar5);
  return uVar5;
}



// FUNCTION 14dd7f13c FUN_14dd7f13c body=157 status=ok
// SIG undefined FUN_14dd7f13c(void)

void FUN_14dd7f13c(void)

{
  ushort uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ushort *in_R9;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *in_R9 = ~*in_R9;
  uVar1 = *in_R9;
  *in_R9 = ~*in_R9;
  *in_R9 = (~(uVar1 & 0x100) + 0x100) - *in_R9;
  *in_R9 = ~*in_R9;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -8) = 0;
  FUN_1657c4b8f();
  return;
}



// FUNCTION 14dd7f1da FUN_14dd7f1da body=10 status=ok
// SIG undefined FUN_14dd7f1da(void)

void FUN_14dd7f1da(void)

{
  return;
}



// FUNCTION 14dd7f46f FUN_14dd7f46f body=53 status=ok
// SIG undefined FUN_14dd7f46f(void)

void FUN_14dd7f46f(void)

{
  undefined8 in_R9;
  undefined8 *unaff_R14;
  
  *unaff_R14 = in_R9;
  return;
}



// FUNCTION 14dd7f4b4 FUN_14dd7f4b4 body=27 status=ok
// SIG undefined FUN_14dd7f4b4(void)

undefined8 FUN_14dd7f4b4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd7f518 FUN_14dd7f518 body=727 status=ok
// SIG undefined FUN_14dd7f518(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd7f594) */
/* WARNING: Removing unreachable block (ram,0x00014dd7f59a) */
/* WARNING: Removing unreachable block (ram,0x00014dd7f621) */
/* WARNING: Removing unreachable block (ram,0x0001665759e1) */
/* WARNING: Removing unreachable block (ram,0x0001665759e7) */
/* WARNING: Removing unreachable block (ram,0x00016568252e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd7f518(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 *puVar11;
  undefined8 in_R10;
  longlong lVar12;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char unaff_retaddr;
  undefined8 local_res8;
  ulonglong uStackX_10;
  ulonglong local_res20;
  
  puVar11 = (undefined8 *)(unaff_RSI + unaff_R15 + (local_res20 & unaff_R15) * -2);
  puVar11[-1] = param_2;
  puVar9 = &LAB_165dcb0ea;
  puVar11[-2] = local_res8;
  puVar11[-3] = local_res8;
  puVar11[-2] = puVar11[-1];
  uVar5 = puVar11[-3];
  puVar11[-3] = in_R11;
  puVar11[-4] = 0x1665758c7;
  uVar6 = FUN_165dcb0b3();
  puVar11[-3] = uVar5;
  *(undefined1 *)(puVar11 + -3) = 0x49;
  if ((char)(unaff_retaddr + (char)puVar11[-3] + -0x49) != '\0') {
    puVar10 = (ulonglong *)((ulonglong)puVar9 ^ uStackX_10);
    uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
    uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
    puVar11[-3] = uVar6;
    puVar11[-4] = ~((~uStackX_10 | uVar1) & (~uVar1 | uStackX_10));
    puVar11[-4] = FUN_16657595b;
    uVar7 = FUN_1665cc3ac();
    uVar1 = puVar11[-2];
    uVar8 = *puVar10;
    *puVar10 = ~*puVar10;
    *puVar10 = *puVar10 | param_1;
    *puVar10 = ~((~uVar1 | uVar8) & *puVar10);
    *puVar11 = puVar11[-1];
    puVar11[-1] = in_R10;
    uVar3 = puVar11[-1];
    puVar11[-1] = puVar11[2] | param_1;
    puVar11[-2] = param_4;
    puVar11[2] = ~puVar11[2];
    puVar11[2] = puVar11[2] | ~param_1;
    puVar11[2] = ~puVar11[2];
    puVar11[2] = ~puVar11[2];
    puVar11[2] = puVar11[2] & puVar11[-1];
    uVar5 = *puVar11;
    puVar11[3] = puVar11[3] ^ param_1;
    uVar8 = puVar11[1];
    puVar11[1] = uStackX_10;
    *puVar11 = unaff_R12;
    puVar11[-1] = uVar2 ^ uStackX_10;
    uVar2 = puVar11[-1];
    *(ushort *)(puVar11 + 2) = (*(ushort *)(puVar11 + 2) | 0x100) - 0x100;
    uVar6 = *puVar11;
    puVar10 = (ulonglong *)puVar11[3];
    puVar10[-1] = uVar3;
    puVar10[-2] = puVar10[-1];
    puVar10[-3] = uVar7;
    puVar10[-4] = uVar6;
    puVar10[-1] = (ulonglong)&LAB_156b8be8f;
    uVar6 = puVar10[-2];
    puVar10[-2] = puVar10[-3];
    puVar10[-3] = puVar10[-3];
    pcVar4 = SetupDiGetDevicePropertyW_exref;
    puVar10[-4] = puVar10[-4];
    puVar10[-2] = (ulonglong)pcVar4;
    uVar3 = puVar10[-4];
    puVar10[-4] = 0x15b7edfb7;
    FUN_156b8be71(uVar8,uVar5);
    puVar10[-4] = param_3;
    uVar1 = puVar10[-1];
    uVar5 = puVar10[-4];
    puVar10[-1] = puVar10[-1] & uVar8;
    puVar10[-4] = uVar8;
    puVar10[-5] = uVar1 + uVar8;
    lVar12 = puVar10[-5];
    puVar10[-1] = puVar10[-1] << 1;
    puVar10[-4] = puVar10[-4];
    puVar10[-5] = uVar3;
    puVar10[-6] = unaff_RBX;
    uVar1 = puVar10[-4];
    puVar10[-4] = uVar6;
    puVar10[-1] = lVar12 - puVar10[-1];
    lVar12 = puVar10[-4];
    uVar6 = puVar10[-3];
    *puVar10 = *puVar10 ^ uVar1;
    puVar10[-3] = 0;
    puVar10[-3] = puVar10[-3] ^ uVar2;
    puVar10[-4] = (ulonglong)FUN_15b7ee04a;
    uVar5 = FUN_161b4bedd(uVar1,uVar6,uVar5);
    *puVar10 = 0;
    *puVar10 = *puVar10 + lVar12;
    puVar10[-1] = puVar10[-1];
    puVar10[-2] = uVar5;
    *(undefined4 *)(puVar10 + -2) = 0x74eb6e9;
    *(undefined4 *)((longlong)puVar10 + -0xc) = 0;
    *(undefined8 *)((longlong)puVar10 + (puVar10[-2] ^ 0x74eb6e1)) = uVar6;
    FUN_14d7c02a0();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd7f8c0 FUN_14dd7f8c0 body=134 status=ok
// SIG undefined FUN_14dd7f8c0(void)

void FUN_14dd7f8c0(undefined8 param_1,ushort param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RDI;
  ushort uVar1;
  ulonglong unaff_R15;
  
  uVar1 = (~(param_2 | 0xdb58) | ~(param_2 & 0xdb58)) + (param_2 | 0xdb58) + 1;
  (*(code *)&LAB_165a6a294)
            (param_1,~uVar1,uVar1,
             ((~(~unaff_RBX + 2) + 1) - ~unaff_RDI) + (param_4 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd7f9ea FUN_14dd7f9ea body=154 status=ok
// SIG undefined FUN_14dd7f9ea(void)

void FUN_14dd7f9ea(undefined4 param_1)

{
  FUN_1659eb6be(param_1,2,FUN_1659eb6be);
  return;
}



// FUNCTION 14dd7fbf0 FUN_14dd7fbf0 body=179 status=ok
// SIG undefined FUN_14dd7fbf0(void)

void FUN_14dd7fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_161a2e351(unaff_retaddr,FUN_161a2e351,param_3,param_4);
  return;
}



// FUNCTION 14dd7fe4f FUN_14dd7fe4f body=56 status=ok
// SIG undefined FUN_14dd7fe4f(void)

void FUN_14dd7fe4f(void)

{
  return;
}



// FUNCTION 14dd7ff4c FUN_14dd7ff4c body=109 status=ok
// SIG undefined FUN_14dd7ff4c(void)

void FUN_14dd7ff4c(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong *unaff_RBX;
  ulonglong unaff_retaddr;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | unaff_retaddr;
  *unaff_RBX = (uVar1 | ~in_RAX) + ~uVar1 + 1 | ~*unaff_RBX;
  FUN_1611ec833();
  return;
}



// FUNCTION 14dd7ffb9 FUN_14dd7ffb9 body=64 status=ok
// SIG undefined FUN_14dd7ffb9(void)

void FUN_14dd7ffb9(undefined8 param_1)

{
  FUN_165c7153c(param_1);
  return;
}



// FUNCTION 14dd806f0 FUN_14dd806f0 body=347 status=ok
// SIG undefined FUN_14dd806f0(void)

/* WARNING: Removing unreachable block (ram,0x000156d4d42d) */
/* WARNING: Removing unreachable block (ram,0x00014dd808c4) */
/* WARNING: Removing unreachable block (ram,0x00014dd80797) */
/* WARNING: Removing unreachable block (ram,0x00014dd808b9) */
/* WARNING: Removing unreachable block (ram,0x00014dd808ae) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd806f0(void)

{
  undefined2 local_res18;
  
  if (-1 < (short)((local_res18 | 0x100) - 0x100)) {
    FUN_1652c4880();
    return;
  }
  FUN_1652c4880();
  return;
}



// FUNCTION 14dd80819 FUN_14dd80819 body=495 status=ok
// SIG undefined FUN_14dd80819(void)

/* WARNING: Removing unreachable block (ram,0x00014dd808c4) */

void FUN_14dd80819(void)

{
  undefined8 unaff_R13;
  longlong unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000030;
  
  *(undefined8 *)(unaff_R15 + 0x18) = unaff_R13;
  if (local_res8 < (ulonglong)(in_stack_00000030 * 2)) {
    FUN_15671ac36();
    return;
  }
  FUN_15671ac36();
  return;
}



// FUNCTION 14dd80a0b FUN_14dd80a0b body=250 status=ok
// SIG undefined FUN_14dd80a0b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd80ada) */
/* WARNING: Removing unreachable block (ram,0x0001660ab14e) */
/* WARNING: Removing unreachable block (ram,0x0001660ab1de) */
/* WARNING: Removing unreachable block (ram,0x0001660ab1e3) */
/* WARNING: Removing unreachable block (ram,0x0001660ab1e9) */
/* WARNING: Removing unreachable block (ram,0x0001660ab1ee) */
/* WARNING: Removing unreachable block (ram,0x0001660ab23a) */

void FUN_14dd80a0b(void)

{
  FUN_1660ab14e();
  return;
}



// FUNCTION 14dd80d0c FUN_14dd80d0c body=276 status=ok
// SIG undefined FUN_14dd80d0c(void)

/* WARNING: Removing unreachable block (ram,0x00016137dd47) */
/* WARNING: Removing unreachable block (ram,0x00015b03aab5) */
/* WARNING: Removing unreachable block (ram,0x00015b03a9ce) */
/* WARNING: Removing unreachable block (ram,0x00015b03aa27) */
/* WARNING: Removing unreachable block (ram,0x00015b03aa2d) */
/* WARNING: Removing unreachable block (ram,0x000156ad359c) */
/* WARNING: Removing unreachable block (ram,0x00015b03aaaa) */
/* WARNING: Removing unreachable block (ram,0x00016137dcf4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd80d0c(void)

{
  FUN_15b03a9c6();
  FUN_165368d43();
  return;
}



// FUNCTION 14dd80f76 FUN_14dd80f76 body=131 status=ok
// SIG undefined FUN_14dd80f76(void)

void FUN_14dd80f76(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_R14;
  longlong in_stack_00000008;
  
  lVar1 = *(longlong *)(unaff_RSI + 8);
  *(undefined8 *)(unaff_RSI + 8) = 0;
  *(undefined8 *)(unaff_RSI + 8) = *(undefined8 *)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) =
       *(longlong *)(unaff_RSI + 8) + ((in_stack_00000008 + -1) - ~-unaff_R14) + lVar1;
  (*(code *)&LAB_15700f54f)();
  return;
}



// FUNCTION 14dd81001 FUN_14dd81001 body=104 status=ok
// SIG undefined FUN_14dd81001(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd81001(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  int unaff_R12D;
  ulonglong in_stack_00000008;
  
  lVar2 = *(longlong *)(unaff_RSI + -0x80);
  FUN_165f46e4a(~unaff_RDI,
                ~((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x58)) &
                 (~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP)));
  uVar1 = *(ulonglong *)(lVar2 + -0x88);
  FUN_164873560(in_stack_00000008);
  FUN_162b3964e(CONCAT44(0xf3b3eac4,0x64873560 - unaff_R12D) ^ 0x5f22a8be00000000);
  if (uVar1 + in_stack_00000008 + (uVar1 & in_stack_00000008) * -2 != -0x5dec955) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd8106a FUN_14dd8106a body=386 status=ok
// SIG undefined FUN_14dd8106a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd8106a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  int unaff_R12D;
  ulonglong in_stack_00000008;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  FUN_164873560(in_stack_00000008,param_2,param_3,param_4);
  FUN_162b3964e(CONCAT44(0xf3b3eac4,0x64873560 - unaff_R12D) ^ 0x5f22a8be00000000);
  if (uVar1 + in_stack_00000008 + (uVar1 & in_stack_00000008) * -2 != -0x5dec955) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd8125f FUN_14dd8125f body=6 status=ok
// SIG undefined FUN_14dd8125f(void)

void FUN_14dd8125f(void)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14dd81520 FUN_14dd81520 body=557 status=ok
// SIG undefined FUN_14dd81520(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000165a2778b) overlaps instruction at (ram,0x000165a27788)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd81749) */
/* WARNING: Removing unreachable block (ram,0x00014dd81754) */
/* WARNING: Removing unreachable block (ram,0x00014dd817d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd817dc) */
/* WARNING: Removing unreachable block (ram,0x0001625ab144) */
/* WARNING: Removing unreachable block (ram,0x00014dd8174f) */
/* WARNING: Removing unreachable block (ram,0x00014dd816ab) */
/* WARNING: Removing unreachable block (ram,0x00014dd81729) */
/* WARNING: Removing unreachable block (ram,0x000165a27740) */
/* WARNING: Removing unreachable block (ram,0x000165a2778b) */
/* WARNING: Removing unreachable block (ram,0x000165a27788) */
/* WARNING: Removing unreachable block (ram,0x00014dd815ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd81639) */
/* WARNING: Removing unreachable block (ram,0x000165a276d7) */
/* WARNING: Removing unreachable block (ram,0x000165a27735) */
/* WARNING: Removing unreachable block (ram,0x000165a2773a) */
/* WARNING: Removing unreachable block (ram,0x00015b2d09c7) */
/* WARNING: Removing unreachable block (ram,0x00014dd8163f) */
/* WARNING: Removing unreachable block (ram,0x00014dd816a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc17d19) */
/* WARNING: Removing unreachable block (ram,0x00014dd8172e) */

undefined8 FUN_14dd81520(void)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if ((longlong)(unaff_R15 ^ 0xffffffffffffffff) < 0) {
    return unaff_retaddr;
  }
  uVar1 = FUN_162d0639e();
  return uVar1;
}



// FUNCTION 14dd81754 FUN_14dd81754 body=144 status=ok
// SIG undefined FUN_14dd81754(void)

/* WARNING: Removing unreachable block (ram,0x00014dd817dc) */

undefined8 FUN_14dd81754(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd81949 FUN_14dd81949 body=10 status=ok
// SIG undefined FUN_14dd81949(void)

void FUN_14dd81949(void)

{
  return;
}



// FUNCTION 14dd81a64 FUN_14dd81a64 body=132 status=ok
// SIG undefined FUN_14dd81a64(void)

void FUN_14dd81a64(longlong param_1)

{
  undefined8 local_res10;
  
  FUN_16545f771(~(*(ulonglong *)(param_1 + -0xa0) & local_res10) &
                (*(ulonglong *)(param_1 + -0xa0) | local_res10));
  return;
}



// FUNCTION 14dd81aea FUN_14dd81aea body=69 status=ok
// SIG undefined FUN_14dd81aea(void)

void FUN_14dd81aea(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14dd81d25 FUN_14dd81d25 body=134 status=ok
// SIG undefined FUN_14dd81d25(void)

void FUN_14dd81d25(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(undefined1 **)(local_res10 + -0x10) = &LAB_1574423cc;
  FUN_1574423c8(unaff_retaddr,param_2,FUN_1574423c8);
  return;
}



// FUNCTION 14dd81f1d FUN_14dd81f1d body=198 status=ok
// SIG undefined FUN_14dd81f1d(void)

void FUN_14dd81f1d(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  cVar1 = FUN_15b6ce105(param_1,param_2,0x66d587f6);
  LOCK();
  if (cVar1 == DAT_14d7be7ff) {
    DAT_14d7be7ff = (char)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x80d072e;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd821a0 FUN_14dd821a0 body=158 status=ok
// SIG undefined FUN_14dd821a0(void)

/* WARNING: Instruction at (ram,0x00014dd821da) overlaps instruction at (ram,0x00014dd821d9)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd821d9) */
/* WARNING: Removing unreachable block (ram,0x00014dd822f6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014dd822aa */
/* WARNING: Removing unreachable block (ram,0x00014dd82247) */
/* WARNING: Removing unreachable block (ram,0x00014dd822b4) */
/* WARNING: Removing unreachable block (ram,0x00014dd822cc) */
/* WARNING: Removing unreachable block (ram,0x00014dd822f0) */
/* WARNING: Removing unreachable block (ram,0x000166b95ea8) */
/* WARNING: Removing unreachable block (ram,0x000166b95ee7) */
/* WARNING: Removing unreachable block (ram,0x000166b95ef0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd821a0(void)

{
  longlong in_stack_00000008;
  
  *(undefined4 *)(&stack0x766ebb90 + in_stack_00000008) = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  if (in_stack_00000008 == -0x766ebb80) {
    thunk_FUN_16212ce8a();
    return;
  }
  thunk_FUN_16212ce8a();
  return;
}



// FUNCTION 14dd82247 FUN_14dd82247 body=343 status=ok
// SIG undefined FUN_14dd82247(void)

/* WARNING: Removing unreachable block (ram,0x00014dd822f6) */

void FUN_14dd82247(void)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  int local_res20;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  if (local_res20 < 0) {
    thunk_FUN_14e247ce4(in_stack_00000008,
                        ~((in_stack_00000008 - (uVar1 | in_stack_00000008)) + uVar1) &
                        (uVar1 | in_stack_00000008));
    return;
  }
  FUN_14e247ce4();
  return;
}



// FUNCTION 14dd822fc FUN_14dd822fc body=166 status=ok
// SIG undefined FUN_14dd822fc(void)

void FUN_14dd822fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 in_R10;
  ulonglong unaff_R15;
  ulonglong uVar2;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  uVar2 = local_res20 ^ unaff_R15;
  param_5 = param_5 ^ unaff_R15;
  uVar1 = rdtsc();
  *(undefined8 *)(param_5 - 8) = param_4;
  *(undefined8 *)(param_5 - 0x10) = param_4;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(param_5 - 0x20) =
       CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)((ulonglong)uVar1 >> 0x20));
  uVar1 = *(undefined8 *)(param_5 - 0x20);
  uVar2 = *(ulonglong *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = in_R10;
  *(ulonglong *)(param_5 - 0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 8) = 0x14ffc5e;
  FUN_166001c0c(param_1,uVar1,uStackX_10);
  return;
}



// FUNCTION 14dd8244d FUN_14dd8244d body=200 status=ok
// SIG undefined FUN_14dd8244d(void)

void FUN_14dd8244d(void)

{
  return;
}



// FUNCTION 14dd82517 FUN_14dd82517 body=286 status=ok
// SIG undefined FUN_14dd82517(void)

/* WARNING: Removing unreachable block (ram,0x00014dd825a1) */
/* WARNING: Removing unreachable block (ram,0x00014dd82590) */

void FUN_14dd82517(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong local_res18;
  
  uVar2 = (~in_RAX | param_5) & (~param_5 | in_RAX) ^ 0xffffffffffffffff;
  if ((longlong)uVar2 < 0) {
    *(undefined8 *)(uVar2 - 8) = unaff_R12;
    *(undefined8 *)(uVar2 - 0x10) = param_2;
    *(undefined8 *)(uVar2 - 0x18) = param_2;
    *(undefined8 *)(uVar2 - 0x20) = unaff_RBX;
    uVar1 = *(undefined8 *)(uVar2 - 8);
    *(ulonglong *)(uVar2 - 0x20) = (local_res18 & in_RAX) * 2;
    *(undefined8 *)(uVar2 - 0x10) = uVar1;
    uVar1 = *(undefined8 *)(uVar2 - 0x18);
    *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
    *(undefined1 **)(uVar2 - 8) = &LAB_16512a986;
    FUN_16512a94a(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 14dd82639 FUN_14dd82639 body=36 status=ok
// SIG undefined FUN_14dd82639(void)

void FUN_14dd82639(void)

{
  return;
}



// FUNCTION 14dd82846 FUN_14dd82846 body=195 status=ok
// SIG undefined FUN_14dd82846(void)

void FUN_14dd82846(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_RBP;
  longlong unaff_R13;
  
  *(undefined8 *)(&stack0xfffffffffdd59559 + param_3) = *(undefined8 *)(unaff_R13 + -0x38);
  *(undefined8 *)(&stack0xfffffffffdd59551 + param_3) =
       *(undefined8 *)(&stack0xfffffffffdd59559 + param_3);
  *(undefined4 *)(&stack0xfffffffffdd59551 + param_3) = 0xc918d36a;
  *(int *)(&stack0xfffffffffdd59551 + param_3) =
       *(int *)(&stack0xfffffffffdd59551 + param_3) + 0x67c6efc8;
  *(undefined4 *)(&stack0xfffffffffdd59555 + param_3) = 0;
  *(undefined8 *)(&stack0xfffffffffdd59551 + param_3) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffffdd59549 + param_3) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffffdd59541 + param_3) = unaff_RBP;
  *(code **)(&stack0xfffffffffdd59551 + param_3) = FUN_14dd82909;
  *(undefined1 **)(&stack0xfffffffffdd59549 + param_3) = &LAB_1653e612b;
  return;
}



// FUNCTION 14dd82909 FUN_14dd82909 body=177 status=ok
// SIG undefined FUN_14dd82909(void)

/* WARNING: Removing unreachable block (ram,0x00014de98df6) */
/* WARNING: Removing unreachable block (ram,0x00015b33b55e) */
/* WARNING: Removing unreachable block (ram,0x00014de98e0d) */
/* WARNING: Removing unreachable block (ram,0x00014de98e9f) */
/* WARNING: Removing unreachable block (ram,0x00014e0a6d5d) */
/* WARNING: Removing unreachable block (ram,0x000156f27211) */
/* WARNING: Removing unreachable block (ram,0x00014de98ea5) */
/* WARNING: Removing unreachable block (ram,0x00014dd829b5) */

undefined8
FUN_14dd82909(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  ushort *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong lVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 in_stack_00000018;
  undefined8 local_res20;
  
  *(ulonglong *)(unaff_RDI + 0x18) =
       -~*(ulonglong *)(unaff_RDI + 0x18) -
       (~(unaff_R15 - (*(ulonglong *)(unaff_RDI + 0x18) | unaff_R15)) + 2);
  puVar11 = (ulonglong *)(param_6 * 2);
  puVar11[-1] = unaff_R14;
  puVar11[-2] = unaff_RBP;
  puVar11[-3] = unaff_RBP;
  puVar11[-4] = unaff_R13;
  puVar11[-5] = param_4;
  puVar11[-6] = unaff_R12;
  puVar11[-7] = in_stack_00000018;
  *(undefined4 *)(puVar11 + -7) = 0x74c1f62f;
  *(undefined4 *)((longlong)puVar11 + -0x34) = 0;
  uVar5 = puVar11[-6];
  uVar13 = puVar11[-5];
  *(ulonglong *)((longlong)puVar11 + puVar11[-7] + -0x74c1f63f) = puVar11[-1];
  uVar6 = puVar11[-4];
  puVar11[-3] = unaff_RBX;
  puVar11[-4] = 0x14de98d7a;
  uVar12 = FUN_162a63963(param_1,param_2,param_3,uVar13);
  uVar13 = puVar11[-3];
  puVar11[-2] = puVar11[-2] ^ uVar12;
  puVar11[-3] = in_R11;
  puVar11[-4] = uVar6;
  puVar2 = puVar11 + -5;
  *(int *)puVar2 = 0;
  *(int *)puVar2 = (int)*puVar2 + 0x6772fa29;
  *(int *)puVar2 = (int)*puVar2 + 0x11d12985;
  *(undefined4 *)((longlong)puVar11 + -0x24) = 0;
  lVar14 = *(longlong *)
            ((longlong)puVar11 +
            (~(~(*puVar2 & 0xffffffff86bbdc41) & (*puVar2 | 0xffffffff86bbdc41)) - 0x18));
  uVar7 = puVar11[-4];
  puVar11[-4] = param_1;
  lVar14 = lVar14 + uVar12;
  if (lVar14 == 0) {
    uVar13 = FUN_156f27173();
    return uVar13;
  }
  puVar11[-1] = puVar11[-1] & uVar12;
  puVar11[-4] = puVar11[-4];
  puVar11[-1] = puVar11[-1] << 1;
  uVar8 = puVar11[-4];
  puVar11[-4] = uVar7;
  puVar11[-5] = uVar5 + uVar12 + (uVar5 & uVar12) * -2;
  lVar9 = puVar11[-4];
  puVar11[-1] = lVar14 - puVar11[-1];
  uVar7 = puVar11[-3];
  *puVar11 = *puVar11 ^ uVar12;
  uVar10 = puVar11[-2];
  puVar11[-2] = local_res8;
  puVar11[-3] = uVar8;
  puVar11[-4] = uVar13;
  *(undefined4 *)(puVar11 + -5) = 0x7fd973f;
  *(undefined4 *)((longlong)puVar11 + -0x24) = 0;
  uVar5 = puVar11[-5];
  puVar11[-5] = local_res20;
  puVar11[-5] = uVar7;
  if (0x7fd972e < uVar5) {
    puVar1 = (ushort *)((longlong)puVar11 + (uVar5 - 0x7fd9747));
    uVar7 = puVar11[-5];
    uVar4 = *puVar1;
    puVar11[-4] = param_2;
    uVar13 = puVar11[-4];
    *puVar1 = (uVar4 | 0x100) - 0x100;
    uVar5 = *puVar11;
    *(undefined8 *)(uVar5 - 8) = uVar7;
    plVar3 = (longlong *)(uVar5 - 0x10);
    *plVar3 = 0;
    *plVar3 = *plVar3 - lVar9;
    *plVar3 = -*plVar3;
    *(longlong *)(uVar5 - 0x18) = lVar9;
    *(undefined8 *)(uVar5 - 0x20) = in_R10;
    *(undefined8 *)(uVar5 - 0x28) = uVar13;
    *(undefined8 *)(uVar5 - 0x30) = uVar13;
    *(undefined **)(uVar5 - 0x28) = &DAT_166833d27;
    return uVar10;
  }
  uVar13 = FUN_15b33b4cf();
  return uVar13;
}



// FUNCTION 14dd829bb FUN_14dd829bb body=332 status=ok
// SIG undefined FUN_14dd829bb(void)

/* WARNING: Removing unreachable block (ram,0x00014dd82a53) */

void FUN_14dd829bb(undefined1 param_1)

{
  FUN_160b5c704(param_1,FUN_160b5c704);
  return;
}



// FUNCTION 14dd82b6d FUN_14dd82b6d body=137 status=ok
// SIG undefined FUN_14dd82b6d(void)

void FUN_14dd82b6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161944aea(param_1,param_2,param_3,FUN_161944aea);
  return;
}



// FUNCTION 14dd82d50 thunk_FUN_14dd82d56 body=5 status=ok
// SIG undefined thunk_FUN_14dd82d56(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd82dcc) */
/* WARNING: Removing unreachable block (ram,0x00014dd82e47) */
/* WARNING: Removing unreachable block (ram,0x000156dbd57f) */
/* WARNING: Removing unreachable block (ram,0x00014dd82e4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14dd82d56(ulonglong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uVar5 = (uint)*(undefined8 *)(unaff_RDI + -0x48);
  uVar8 = ~((0xffffffff - (uint)param_1 | uVar5) & (~uVar5 | (uint)param_1));
  uVar3 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar5 = FUN_1656cd404();
  lVar6 = CONCAT62((int6)(uVar7 >> 0x10),CONCAT11(0x70,(char)uVar7));
  if ((longlong)&stack0xfffffffffffffff8 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)((uVar3 ^ param_1) - 0x7a5833ac) = unaff_R13;
  piVar1 = (int *)(lVar6 + 0x67);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + uVar8;
  if (-1 < *piVar1) {
    if (*piVar1 != 0 && !SCARRY4(iVar2,uVar8)) {
      *(undefined8 *)((ulonglong)uVar5 - 8) = 0x14d7bc879;
      func_0x0001145dd97a();
      out((short)lVar6,(char)uVar5);
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ffffffffffffffb9)();
      return;
    }
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd82d56 FUN_14dd82d56 body=417 status=ok
// SIG undefined FUN_14dd82d56(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dd82dcc) */
/* WARNING: Removing unreachable block (ram,0x00014dd82e47) */
/* WARNING: Removing unreachable block (ram,0x000156dbd57f) */
/* WARNING: Removing unreachable block (ram,0x00014dd82e4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd82d56(ulonglong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  uVar5 = (uint)*(undefined8 *)(unaff_RDI + -0x48);
  uVar8 = ~((0xffffffff - (uint)param_1 | uVar5) & (~uVar5 | (uint)param_1));
  uVar3 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar5 = FUN_1656cd404();
  lVar6 = CONCAT62((int6)(uVar7 >> 0x10),CONCAT11(0x70,(char)uVar7));
  if ((longlong)&stack0xfffffffffffffff8 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)((uVar3 ^ param_1) - 0x7a5833ac) = unaff_R13;
  piVar1 = (int *)(lVar6 + 0x67);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + uVar8;
  if (-1 < *piVar1) {
    if (*piVar1 != 0 && !SCARRY4(iVar2,uVar8)) {
      *(undefined8 *)((ulonglong)uVar5 - 8) = 0x14d7bc879;
      func_0x0001145dd97a();
      out((short)lVar6,(char)uVar5);
                    /* WARNING: Could not recover jumptable at 0x00014d7bc87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_ffffffffffffffb9)();
      return;
    }
    pcVar4 = (code *)swi(1);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd82fa9 FUN_14dd82fa9 body=110 status=ok
// SIG undefined FUN_14dd82fa9(void)

undefined4 FUN_14dd82fa9(void)

{
  undefined4 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14dd8305c FUN_14dd8305c body=306 status=ok
// SIG undefined FUN_14dd8305c(void)

void FUN_14dd8305c(void)

{
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  FUN_14e18d37e(*(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x78) ^ unaff_R15,
                *(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x28));
  return;
}



// FUNCTION 14dd833f8 FUN_14dd833f8 body=177 status=ok
// SIG undefined FUN_14dd833f8(void)

void FUN_14dd833f8(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  
  FUN_160f2971b(param_1,in_RAX & (param_2 | param_1) ^ 0xffffffffffffffff,param_3,FUN_160f2971b,
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14dd834b1 FUN_14dd834b1 body=156 status=ok
// SIG undefined FUN_14dd834b1(void)

void FUN_14dd834b1(void)

{
  FUN_15b7a478c();
  return;
}



// FUNCTION 14dd8354d FUN_14dd8354d body=176 status=ok
// SIG undefined FUN_14dd8354d(void)

void FUN_14dd8354d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  *(undefined8 *)(param_5 + -8) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = unaff_R14;
  puVar1 = (uint *)(param_5 + -0x28);
  *puVar1 = 0x8e1f767a;
  *puVar1 = *puVar1 ^ 0x6eaa420d;
  *(undefined4 *)(param_5 + -0x24) = 0xffffffff;
  uVar2 = *(undefined8 *)(param_5 + *(longlong *)puVar1 + 0x1f4acb81);
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = uVar2;
  *(undefined **)(param_5 + -8) = &DAT_15b290dfe;
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x20) = unaff_RSI;
  *(undefined **)(param_5 + -0x18) = &DAT_14dd835fd;
  (*(code *)&LAB_15b290ddf)(uStackX_18,param_2,local_res8);
  return;
}



// FUNCTION 14dd83680 FUN_14dd83680 body=141 status=ok
// SIG undefined FUN_14dd83680(void)

void FUN_14dd83680(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x164b8f623)
            (param_1,(param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x88)) &
                     (*(ulonglong *)(unaff_RDI + -0x88) ^ 0xffffffffffffffff | param_1) ^
                     0xffffffffffffffff,param_3,param_4);
  return;
}



// FUNCTION 14dd83839 FUN_14dd83839 body=587 status=ok
// SIG undefined FUN_14dd83839(void)

/* WARNING: Removing unreachable block (ram,0x00014dd83a48) */
/* WARNING: Removing unreachable block (ram,0x00014dd83a84) */
/* WARNING: Removing unreachable block (ram,0x00016631d7ac) */
/* WARNING: Removing unreachable block (ram,0x00016127738f) */
/* WARNING: Removing unreachable block (ram,0x00016631d7b2) */
/* WARNING: Removing unreachable block (ram,0x00016631d723) */
/* WARNING: Removing unreachable block (ram,0x00014dd838c0) */
/* WARNING: Removing unreachable block (ram,0x00015b8de666) */
/* WARNING: Removing unreachable block (ram,0x00015b8de707) */
/* WARNING: Removing unreachable block (ram,0x00014dd83a8a) */

void FUN_14dd83839(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0x50)) &
      (~*(ulonglong *)(unaff_RDI + -0x50) | param_1)) == 0) {
    FUN_16127738f();
    return;
  }
  FUN_16631d706();
  return;
}



// FUNCTION 14dd83a8a FUN_14dd83a8a body=111 status=ok
// SIG undefined FUN_14dd83a8a(void)

void FUN_14dd83a8a(char param_1)

{
  undefined8 local_res8;
  
  FUN_15b60bf3a('u' - ('\x01' - param_1),local_res8);
  return;
}



// FUNCTION 14dd83b7f FUN_14dd83b7f body=327 status=ok
// SIG undefined FUN_14dd83b7f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd83c1b) */

undefined1 * FUN_14dd83b7f(undefined8 param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) = 0;
  *(longlong *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) - in_R11;
  *(longlong *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) =
       -*(longlong *)(&stack0xfffffffffd4c68e7 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = in_RAX;
  *(undefined4 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = 0xe92918d8;
  *(undefined4 *)(&stack0xfffffffffd4c68e3 + unaff_retaddr) = 0xffffffff;
  *(undefined8 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffffd4c68d7 + unaff_retaddr) = in_RAX;
  *(undefined4 *)(&stack0xfffffffffd4c68d7 + unaff_retaddr) = 0x6087d8ae;
  *(undefined4 *)(&stack0xfffffffffd4c68db + unaff_retaddr) = 0;
  *(undefined8 *)(&stack0xfffffffffd4c68d7 + unaff_retaddr) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = in_RAX;
  *(undefined4 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = 0x6eb15dcc;
  *(undefined4 *)(&stack0xfffffffffd4c68e3 + unaff_retaddr) = 0;
  *(undefined8 *)(&stack0xfffffffffd4c68df + unaff_retaddr) = param_1;
  *(void **)(&stack0xfffffffffd4c68d7 + unaff_retaddr) = ProcessEnvironmentBlock;
  *(undefined8 *)(&stack0xfffffffffd4c68ef + unaff_retaddr) = 0;
  *(longlong *)(&stack0xfffffffffd4c68ef + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffffd4c68ef + unaff_retaddr) + unaff_RBX;
  *(undefined8 *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) = in_RAX;
  *(undefined8 *)(&stack0xfffffffffd4c68e7 + unaff_retaddr) =
       *(undefined8 *)(&stack0xfffffffffd4c68e7 + unaff_retaddr);
  *(undefined1 **)(&stack0xfffffffffd4c68df + unaff_retaddr) = &LAB_160b46083;
  return &LAB_160b46083;
}



// FUNCTION 14dd83d4d FUN_14dd83d4d body=156 status=ok
// SIG undefined FUN_14dd83d4d(void)

void FUN_14dd83d4d(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) & param_1;
  uVar1 = uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0);
  FUN_161618230(param_1,FUN_161618230,
                (*(ulonglong *)(unaff_RDI + -0x70) + param_1) -
                ((-2 - (uVar1 | 0xfffffffffffffffe)) + uVar1),(~param_4 | ~param_1) & unaff_RBX);
  return;
}



// FUNCTION 14dd83deb FUN_14dd83deb body=167 status=ok
// SIG undefined FUN_14dd83deb(void)

void FUN_14dd83deb(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  undefined1 local_8 [8];
  
  FUN_15b714350(local_8,param_2,FUN_15b714350,
                ~(*(ulonglong *)(unaff_R13 + -0x58) | 0x1fd1839d98de3b3b) |
                ~(~*(ulonglong *)(unaff_R13 + -0x58) | 0xe02e7c626721c4c4));
  return;
}



// FUNCTION 14dd83efe FUN_14dd83efe body=396 status=ok
// SIG undefined FUN_14dd83efe(void)

/* WARNING: Removing unreachable block (ram,0x00014dd83f7d) */
/* WARNING: Removing unreachable block (ram,0x00014dd83f83) */
/* WARNING: Removing unreachable block (ram,0x000157383a1d) */

void FUN_14dd83efe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164c4e4ef(param_1,-~*(ulonglong *)(unaff_R13 + -0x28) - (unaff_RDI + 2) ^ unaff_R15,param_3);
  *(undefined4 *)(&stack0x38346462 + unaff_R12) = 0;
  *(undefined4 *)(&stack0x38346462 + unaff_R12) = *(undefined4 *)(&stack0x38346462 + unaff_R12);
  return;
}



// FUNCTION 14dd8411f FUN_14dd8411f body=160 status=ok
// SIG undefined FUN_14dd8411f(void)

void FUN_14dd8411f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b910d4a(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd8425b FUN_14dd8425b body=164 status=ok
// SIG undefined FUN_14dd8425b(void)

void FUN_14dd8425b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  ushort uVar3;
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
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  uVar3 = (-0x101 - ((~(local_res10 & 0xfeff) - 0x101) - ~local_res10)) + local_res10;
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x800) != 0;
  bVar10 = (uVar3 & 0x200) != 0;
  bVar9 = (uVar3 & 0x100) != 0;
  bVar8 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar4 = (uVar3 & 1) != 0;
  bVar16 = (uStackX_12 & 0x20) != 0;
  bVar13 = (uStackX_12 & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(param_1);
  *local_res18 = in_R10;
  local_res18[-1] = in_R10;
  local_res18[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res18[-3] = param_4;
  local_res18[-4] = uVar2;
  *(undefined4 *)(local_res18 + -4) = 0x1c6b7a0a;
  FUN_16538b762();
  return;
}


