// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d89b1e6 FUN_14d89b1e6 body=131 status=ok
// SIG undefined FUN_14d89b1e6(void)

void FUN_14d89b1e6(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  FUN_165c8e800(FUN_165c8e800,~((~uVar1 & ~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)),
                ~((param_3 - (param_2 | param_3)) + param_1));
  return;
}



// FUNCTION 14d89b39c FUN_14d89b39c body=183 status=ok
// SIG undefined FUN_14d89b39c(void)

/* WARNING: Removing unreachable block (ram,0x00015b4a61f2) */
/* WARNING: Removing unreachable block (ram,0x00015b4a61fe) */
/* WARNING: Removing unreachable block (ram,0x00015b4a6203) */
/* WARNING: Removing unreachable block (ram,0x00015b4a62d1) */
/* WARNING: Removing unreachable block (ram,0x00014d89b43d) */
/* WARNING: Removing unreachable block (ram,0x00014d89b443) */
/* WARNING: Removing unreachable block (ram,0x0001564d2025) */
/* WARNING: Removing unreachable block (ram,0x00014dbfba4a) */
/* WARNING: Removing unreachable block (ram,0x00014dbfba56) */
/* WARNING: Removing unreachable block (ram,0x0001564d201f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d89b39c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14d89b4d1 FUN_14d89b4d1 body=142 status=ok
// SIG undefined FUN_14d89b4d1(void)

void FUN_14d89b4d1(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)0x1569cdbf2)
            (~(param_2 & (param_1 | unaff_RBP)),
             ~(*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) &
             (*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP));
  return;
}



// FUNCTION 14d89b8ef FUN_14d89b8ef body=159 status=ok
// SIG undefined FUN_14d89b8ef(void)

/* WARNING: Removing unreachable block (ram,0x00014d89b978) */
/* WARNING: Removing unreachable block (ram,0x00014d89b983) */
/* WARNING: Removing unreachable block (ram,0x00014d89b97e) */

void FUN_14d89b8ef(void)

{
  FUN_160c88acb();
  return;
}



// FUNCTION 14d89ba7f FUN_14d89ba7f body=565 status=ok
// SIG undefined FUN_14d89ba7f(void)

/* WARNING: Removing unreachable block (ram,0x000162663a55) */
/* WARNING: Removing unreachable block (ram,0x000162663a5b) */
/* WARNING: Removing unreachable block (ram,0x000162663b3b) */
/* WARNING: Removing unreachable block (ram,0x00014d89bb94) */

undefined8 FUN_14d89ba7f(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_162a5154e();
  uVar1 = FUN_15b1f87d8(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,
                        ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1),
                        ~((~param_1 | param_3) & (0xffffffffffffffff - param_3 | param_1)));
  return uVar1;
}



// FUNCTION 14d89bc45 thunk_FUN_14d89bc4b body=5 status=ok
// SIG undefined thunk_FUN_14d89bc4b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d89bc4b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  
  FUN_161231604();
  FUN_15b8bc290(param_1,unaff_retaddr,unaff_RBX,param_4);
  return;
}



// FUNCTION 14d89bc4b FUN_14d89bc4b body=290 status=ok
// SIG undefined FUN_14d89bc4b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d89bc4b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  
  FUN_161231604();
  FUN_15b8bc290(param_1,unaff_retaddr,unaff_RBX,param_4);
  return;
}



// FUNCTION 14d89bd76 thunk_FUN_14d89bd7c body=5 status=ok
// SIG undefined thunk_FUN_14d89bd7c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d89bd7c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  int in_R10D;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong auStackX_8 [4];
  
  uVar1 = auStackX_8[1] & unaff_R15;
  auStackX_8[1] = uVar1 * 2;
  auStackX_8[1] =
       *(longlong *)
        ((longlong)auStackX_8 +
        ~(~(unaff_RBP & 0xffffffffcf742ff3) & (unaff_RBP | 0xffffffffcf742ff3))) + unaff_R15 +
       uVar1 * -2;
  auStackX_8[1] = FUN_15b9d966d(param_1,param_2,param_3);
  auStackX_8[0] = (ulonglong)(uint)(in_R10D + *(int *)(unaff_retaddr + 0x110));
  FUN_15ba16185();
  FUN_14d89bed5();
  return;
}



// FUNCTION 14d89bd7c FUN_14d89bd7c body=343 status=ok
// SIG undefined FUN_14d89bd7c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d89bd7c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  int in_R10D;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong local_res8 [4];
  
  uVar1 = local_res8[1] & unaff_R15;
  local_res8[1] = uVar1 * 2;
  local_res8[1] =
       *(longlong *)
        ((longlong)local_res8 +
        ~(~(unaff_RBP & 0xffffffffcf742ff3) & (unaff_RBP | 0xffffffffcf742ff3))) + unaff_R15 +
       uVar1 * -2;
  local_res8[1] = FUN_15b9d966d(param_1,param_2,param_3);
  local_res8[0] = (ulonglong)(uint)(in_R10D + *(int *)(unaff_retaddr + 0x110));
  FUN_15ba16185();
  FUN_14d89bed5();
  return;
}



// FUNCTION 14d89bed5 FUN_14d89bed5 body=163 status=ok
// SIG undefined FUN_14d89bed5(void)

void FUN_14d89bed5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15762bea4((char)param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  return;
}



// FUNCTION 14d89bf79 FUN_14d89bf79 body=38 status=ok
// SIG undefined FUN_14d89bf79(void)

void FUN_14d89bf79(void)

{
  longlong in_RAX;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014d89bf9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RAX + 0x58))(local_res8);
  return;
}



// FUNCTION 14d89c0c0 FUN_14d89c0c0 body=172 status=ok
// SIG undefined FUN_14d89c0c0(void)

void FUN_14d89c0c0(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1652b0aeb((~in_RAX | ~-*(longlong *)(unaff_R12 + -0x28) + 1U) + in_RAX,0,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14d89c3db FUN_14d89c3db body=486 status=ok
// SIG undefined FUN_14d89c3db(void)

/* WARNING: Removing unreachable block (ram,0x00014d89c40f) */

void FUN_14d89c3db(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_16213d316(param_1,-*(longlong *)(unaff_RDI + -0x68),FUN_16213d316);
  return;
}



// FUNCTION 14d89c485 FUN_14d89c485 body=314 status=ok
// SIG undefined FUN_14d89c485(void)

/* WARNING: Removing unreachable block (ram,0x00016696339a) */
/* WARNING: Removing unreachable block (ram,0x0001669633a5) */
/* WARNING: Removing unreachable block (ram,0x0001669633a0) */
/* WARNING: Removing unreachable block (ram,0x00014d89c51b) */
/* WARNING: Removing unreachable block (ram,0x00014d89c526) */
/* WARNING: Removing unreachable block (ram,0x00014d89c537) */
/* WARNING: Removing unreachable block (ram,0x00014d89c53a) */
/* WARNING: Removing unreachable block (ram,0x00014e1c86fb) */
/* WARNING: Removing unreachable block (ram,0x00014d89c5b6) */
/* WARNING: Removing unreachable block (ram,0x00014d89c5bc) */
/* WARNING: Removing unreachable block (ram,0x00014d89c5c1) */
/* WARNING: Removing unreachable block (ram,0x00014d89c636) */
/* WARNING: Removing unreachable block (ram,0x00014d89c63c) */
/* WARNING: Removing unreachable block (ram,0x00014d89c641) */
/* WARNING: Removing unreachable block (ram,0x00016696323f) */
/* WARNING: Removing unreachable block (ram,0x000166963395) */
/* WARNING: Removing unreachable block (ram,0x0001610508ff) */
/* WARNING: Removing unreachable block (ram,0x0001616e1649) */
/* WARNING: Removing unreachable block (ram,0x0001616e1655) */
/* WARNING: Removing unreachable block (ram,0x0001616e151b) */
/* WARNING: Removing unreachable block (ram,0x00014daa324f) */
/* WARNING: Removing unreachable block (ram,0x0001662b4e4e) */
/* WARNING: Removing unreachable block (ram,0x00014daa33e3) */
/* WARNING: Removing unreachable block (ram,0x00014daa32d0) */
/* WARNING: Removing unreachable block (ram,0x00014daa32d6) */
/* WARNING: Removing unreachable block (ram,0x000165061d14) */
/* WARNING: Removing unreachable block (ram,0x00014daa33dd) */
/* WARNING: Removing unreachable block (ram,0x00014daa33e8) */
/* WARNING: Removing unreachable block (ram,0x00014daa3421) */
/* WARNING: Removing unreachable block (ram,0x0001616e1510) */
/* WARNING: Removing unreachable block (ram,0x0001616e1516) */
/* WARNING: Removing unreachable block (ram,0x00014d89c521) */

void FUN_14d89c485(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166db5e74(param_1,(param_1 - (*(ulonglong *)(unaff_RDI + -0x28) | param_1)) +
                        *(ulonglong *)(unaff_RDI + -0x28));
  return;
}



// FUNCTION 14d89c5c1 FUN_14d89c5c1 body=271 status=ok
// SIG undefined FUN_14d89c5c1(void)

/* WARNING: Removing unreachable block (ram,0x00016696339a) */
/* WARNING: Removing unreachable block (ram,0x0001669633a5) */
/* WARNING: Removing unreachable block (ram,0x0001669633a0) */
/* WARNING: Removing unreachable block (ram,0x00014d89c641) */

void FUN_14d89c5c1(ulonglong param_1)

{
  char cVar1;
  longlong in_RAX;
  byte unaff_BPL;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  if ((unaff_BPL >> 3 & 1) != 0) {
    thunk_FUN_166963245();
    return;
  }
  cVar1 = FUN_161532865(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                        *(ulonglong *)(unaff_RDI + in_RAX) ^ param_1);
  FUN_1574df228(0xffffffffffffffa0,
                CONCAT71((int7)((ulonglong)*(undefined8 *)(unaff_R13 + -0x60) >> 8),cVar1 + '%'),
                0x25,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d89c78a FUN_14d89c78a body=121 status=ok
// SIG undefined FUN_14d89c78a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d89c78a(void)

{
  ulonglong *puVar1;
  undefined8 unaff_RBX;
  longlong in_R10;
  longlong local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = 0x76ee5912;
  *puVar1 = *puVar1 ^ 0x76ee5912;
  *puVar1 = *puVar1 + in_R10;
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(undefined1 **)(local_res10 + -8) = &LAB_14d89c816;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d89c830 FUN_14d89c830 body=145 status=ok
// SIG undefined FUN_14d89c830(void)

void FUN_14d89c830(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 in_AL;
  longlong lVar2;
  ulonglong in_R10;
  longlong unaff_R13;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  ushort local_res20 [4];
  longlong in_stack_00000028;
  
  lVar2 = unaff_R15 - unaff_R13;
  uVar1 = *(ulonglong *)((longlong)local_res20 + lVar2);
  *(undefined8 *)((longlong)local_res20 + lVar2) = 0;
  *(longlong *)((longlong)local_res20 + lVar2) =
       *(longlong *)((longlong)local_res20 + lVar2) +
       (in_R10 ^ 0xffffffffffffffff | uVar1) + in_R10 + 1;
  local_res20[0] = local_res20[0] & 0xfeff;
                    /* WARNING: Read-only address (ram,0x00014d7ad4be) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7ad4be = in_AL;
  *(undefined8 *)(in_stack_00000028 + -8) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x10) = param_1;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0x813ea63;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  FUN_1656f0a64(FUN_1656f0a64,unaff_retaddr);
  return;
}



// FUNCTION 14d89c8c1 FUN_14d89c8c1 body=173 status=ok
// SIG undefined FUN_14d89c8c1(void)

void FUN_14d89c8c1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_R13;
  undefined8 local_res8;
  
  *(undefined4 *)(&stack0x00000000 + param_3) = 0xffffffff;
  FUN_1647e204c(param_1,param_2,local_res8,*(undefined8 *)(unaff_R13 + -0x98));
  return;
}



// FUNCTION 14d89c96f FUN_14d89c96f body=281 status=ok
// SIG undefined FUN_14d89c96f(void)

/* WARNING: Removing unreachable block (ram,0x00014de83491) */
/* WARNING: Removing unreachable block (ram,0x00014d89ca88) */
/* WARNING: Removing unreachable block (ram,0x00014d89ca8e) */
/* WARNING: Removing unreachable block (ram,0x00014d89cb13) */
/* WARNING: Removing unreachable block (ram,0x0001613f6e6e) */
/* WARNING: Removing unreachable block (ram,0x0001613f6e74) */
/* WARNING: Removing unreachable block (ram,0x000156bde2c8) */
/* WARNING: Removing unreachable block (ram,0x00014d89cb18) */
/* WARNING: Removing unreachable block (ram,0x00014d89cb1e) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbc8) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbce) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbf7) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbfe) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbc3) */
/* WARNING: Removing unreachable block (ram,0x0001649530b7) */
/* WARNING: Removing unreachable block (ram,0x0001649530fa) */
/* WARNING: Removing unreachable block (ram,0x0001649530ff) */
/* WARNING: Removing unreachable block (ram,0x00014de83505) */
/* WARNING: Removing unreachable block (ram,0x00014de8350a) */
/* WARNING: Removing unreachable block (ram,0x00014d89c9bd) */

void FUN_14d89c96f(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16541f938(param_1,~((unaff_RSI | param_2) & (~param_2 | param_1)));
  FUN_1626e06c9(*(undefined8 *)(unaff_R13 + -0x78),0xffffffffffffff88,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  uVar1 = ~unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15;
  FUN_161122be1(uVar1,~uVar1);
  FUN_14dcaca37();
  FUN_156bde2c8();
  return;
}



// FUNCTION 14d89ca8e FUN_14d89ca8e body=457 status=ok
// SIG undefined FUN_14d89ca8e(void)

/* WARNING: Removing unreachable block (ram,0x00014de83491) */
/* WARNING: Removing unreachable block (ram,0x00014d89cb18) */
/* WARNING: Removing unreachable block (ram,0x00014d89cb1e) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbc3) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbc8) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbce) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbf7) */
/* WARNING: Removing unreachable block (ram,0x00014d89cbfe) */
/* WARNING: Removing unreachable block (ram,0x0001649530b7) */
/* WARNING: Removing unreachable block (ram,0x0001649530fa) */
/* WARNING: Removing unreachable block (ram,0x0001649530ff) */
/* WARNING: Removing unreachable block (ram,0x00014de83505) */
/* WARNING: Removing unreachable block (ram,0x00014de8350a) */

void FUN_14d89ca8e(void)

{
  FUN_14de83491();
  return;
}



// FUNCTION 14d89cf41 FUN_14d89cf41 body=146 status=ok
// SIG undefined FUN_14d89cf41(void)

void FUN_14d89cf41(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x6bc5753c;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x6bc5753c;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x14d89cfe4;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(longlong *)(local_res18 + -8) = -*(longlong *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = uVar1;
  *(undefined8 *)(local_res18 + -0x18) = uVar1;
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7ad220;
  return;
}



// FUNCTION 14d89d276 FUN_14d89d276 body=177 status=ok
// SIG undefined FUN_14d89d276(void)

void FUN_14d89d276(undefined8 param_1)

{
  FUN_162eb08f9(param_1);
  return;
}



// FUNCTION 14d89d3aa FUN_14d89d3aa body=125 status=ok
// SIG undefined FUN_14d89d3aa(void)

void FUN_14d89d3aa(void)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x14d9fb36b)(in_stack_00000008,0x14d9fb36b);
  return;
}



// FUNCTION 14d89d42a FUN_14d89d42a body=391 status=ok
// SIG undefined FUN_14d89d42a(void)

/* WARNING: Removing unreachable block (ram,0x00014d89d52b) */

void FUN_14d89d42a(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_166c7ea0e();
  if (-1 < (int)-(~param_3 + 2)) {
    FUN_16625ec5d();
    return;
  }
  FUN_16625ec5d();
  return;
}



// FUNCTION 14d89d84e FUN_14d89d84e body=496 status=ok
// SIG undefined FUN_14d89d84e(void)

/* WARNING: Removing unreachable block (ram,0x000162de2e18) */
/* WARNING: Removing unreachable block (ram,0x000162de2e1e) */
/* WARNING: Removing unreachable block (ram,0x00016107653a) */
/* WARNING: Removing unreachable block (ram,0x000162de2ea3) */
/* WARNING: Removing unreachable block (ram,0x000162de2eaf) */
/* WARNING: Removing unreachable block (ram,0x000162de2eb4) */
/* WARNING: Removing unreachable block (ram,0x00014dfbf863) */
/* WARNING: Removing unreachable block (ram,0x00014dfbf869) */
/* WARNING: Removing unreachable block (ram,0x00014dfbf94c) */
/* WARNING: Removing unreachable block (ram,0x000162de2d81) */
/* WARNING: Removing unreachable block (ram,0x000162de2e13) */
/* WARNING: Removing unreachable block (ram,0x0001614607c1) */
/* WARNING: Removing unreachable block (ram,0x00014d89d992) */
/* WARNING: Removing unreachable block (ram,0x00014d89da3a) */
/* WARNING: Removing unreachable block (ram,0x00016586def9) */
/* WARNING: Removing unreachable block (ram,0x00014d89da35) */
/* WARNING: Removing unreachable block (ram,0x00014d89da40) */
/* WARNING: Removing unreachable block (ram,0x0001566f78fb) */
/* WARNING: Removing unreachable block (ram,0x0001566f7961) */

undefined8 FUN_14d89d84e(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  FUN_156e239ad();
  if (unaff_R13 - 0x5b8U < 0xfffffffffffffa98) {
    uVar1 = FUN_162de2d81();
    return uVar1;
  }
  uVar1 = FUN_1566f7875();
  return uVar1;
}



// FUNCTION 14d89da40 FUN_14d89da40 body=306 status=ok
// SIG undefined FUN_14d89da40(void)

void FUN_14d89da40(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  ulonglong local_res8 [4];
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = ~*(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) =
       (~(uVar1 & unaff_R15) + unaff_R15) - *(longlong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = ~(param_1 & *(ulonglong *)(unaff_RBX + 0x10));
  local_res8[0] = 0x14d89dad6;
  FUN_162ed08f7(local_res8[2]);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  *(ulonglong *)((longlong)local_res8 + param_4) = ~uVar1;
  *(ulonglong *)(&stack0x00000000 + param_4) = ~uVar1;
  *(undefined1 **)((longlong)local_res8 + param_4) = &LAB_14d89db73;
  FUN_156e86600();
  return;
}



// FUNCTION 14d89dcdf FUN_14d89dcdf body=298 status=ok
// SIG undefined FUN_14d89dcdf(void)

/* WARNING: Removing unreachable block (ram,0x00014d89de8d) */

void FUN_14d89dcdf(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar6 = *(ulonglong *)(unaff_R13 + -0x80) ^ unaff_R15;
  bVar2 = ((byte)param_1 & 0x1f) % 0x11;
  uVar3 = FUN_14e0b1194(param_1,param_2,*(ulonglong *)(unaff_R13 + -0x40) | unaff_R15,
                        CONCAT62(0xffffffffffff,0xffc0U >> bVar2 | -0x40 << 0x11 - bVar2));
  uVar1 = *(ulonglong *)(uVar6 - 0x28);
  uVar4 = FUN_162de51f9(0xffffffff);
  uVar5 = ~*(ulonglong *)(uVar6 - 0x58) | uVar4;
  FUN_160ed9008(~((~uVar5 | 0xffffffffffffffff - uVar4 | *(ulonglong *)(uVar6 - 0x58)) + uVar5 + 1),
                *(ulonglong *)(uVar6 - 0x78) + uVar4 + (*(ulonglong *)(uVar6 - 0x78) & uVar4) * -2,
                ~(uVar1 ^ uVar3));
  return;
}



// FUNCTION 14d89de0d thunk_FUN_14d89de13 body=5 status=ok
// SIG undefined thunk_FUN_14d89de13(void)

/* WARNING: Removing unreachable block (ram,0x00014d89de8d) */

void thunk_FUN_14d89de13(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  FUN_160ed9008(~((~uVar1 | 0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) + uVar1
                 + 1),*(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                      (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2,~unaff_RBX);
  return;
}



// FUNCTION 14d89de13 FUN_14d89de13 body=134 status=ok
// SIG undefined FUN_14d89de13(void)

/* WARNING: Removing unreachable block (ram,0x00014d89de8d) */

void FUN_14d89de13(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  FUN_160ed9008(~((~uVar1 | 0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) + uVar1
                 + 1),*(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                      (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2,~unaff_RBX);
  return;
}



// FUNCTION 14d89de9c FUN_14d89de9c body=161 status=ok
// SIG undefined FUN_14d89de9c(void)

void FUN_14d89de9c(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15736d5ef(~(~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x38)) |
                ~(~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),FUN_15736d5ef);
  return;
}



// FUNCTION 14d89df3d FUN_14d89df3d body=136 status=ok
// SIG undefined FUN_14d89df3d(void)

undefined8 FUN_14d89df3d(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = ~((param_1 - (param_2 | param_1)) + param_2);
  uVar1 = FUN_16230fe7a(param_1,((param_2 | param_1) - (uVar2 | param_2 | param_1)) + uVar2);
  return uVar1;
}



// FUNCTION 14d89dfc6 FUN_14d89dfc6 body=175 status=ok
// SIG undefined FUN_14d89dfc6(void)

undefined8 FUN_14d89dfc6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d89e075 FUN_14d89e075 body=2 status=ok
// SIG undefined FUN_14d89e075(void)

void FUN_14d89e075(void)

{
  return;
}



// FUNCTION 14d89e10a FUN_14d89e10a body=453 status=ok
// SIG undefined FUN_14d89e10a(void)

/* WARNING: Removing unreachable block (ram,0x00014d89e1b7) */
/* WARNING: Removing unreachable block (ram,0x00014d89e1bd) */
/* WARNING: Removing unreachable block (ram,0x00014da8a2d0) */

ulonglong FUN_14d89e10a(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  return ~(unaff_RSI & in_RAX);
}



// FUNCTION 14d89e1bd FUN_14d89e1bd body=158 status=ok
// SIG undefined FUN_14d89e1bd(void)

void FUN_14d89e1bd(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined4 uStackX_20;
  
  FUN_1578a91f5(unaff_retaddr,(int)unaff_retaddr + uStackX_20,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d89e25b FUN_14d89e25b body=559 status=ok
// SIG undefined FUN_14d89e25b(void)

/* WARNING: Removing unreachable block (ram,0x00014d89e408) */
/* WARNING: Removing unreachable block (ram,0x00014d89e36d) */
/* WARNING: Removing unreachable block (ram,0x00014d89e373) */
/* WARNING: Removing unreachable block (ram,0x00014d89e402) */
/* WARNING: Removing unreachable block (ram,0x0001664b7e92) */
/* WARNING: Removing unreachable block (ram,0x0001664b7eed) */
/* WARNING: Removing unreachable block (ram,0x0001664b7ee8) */
/* WARNING: Removing unreachable block (ram,0x0001664b7ef2) */
/* WARNING: Removing unreachable block (ram,0x00014d89e3fd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d89e25b(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong *unaff_R12;
  undefined2 local_res18;
  
  uVar1 = *unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | in_RAX;
  *unaff_R12 = 0xffffffffffffffff - ((~in_RAX | uVar1) & *unaff_R12);
  local_res18 = ~(local_res18 & (ushort)in_RAX) & (local_res18 | (ushort)in_RAX);
  FUN_14d8f1045();
  uVar2 = -~*(ulonglong *)(~in_RAX - 0x60) - 1;
  uVar1 = *(ulonglong *)(~in_RAX - 0x70);
  if ((short)local_res18 < 0) {
    FUN_15679582c(param_1,8,(uVar1 & param_1 ^ 0xffffffffffffffff) & (uVar1 | param_1),
                  ~(uVar2 & param_1) & (uVar2 | param_1));
    return;
  }
  FUN_156795833();
  return;
}



// FUNCTION 14d89e495 FUN_14d89e495 body=6 status=ok
// SIG undefined FUN_14d89e495(void)

void FUN_14d89e495(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1664e9f42)(param_1,param_2,0xff);
  return;
}



// FUNCTION 14d89e51c FUN_14d89e51c body=63 status=ok
// SIG undefined FUN_14d89e51c(void)

void FUN_14d89e51c(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  ulonglong auStackX_10 [2];
  ushort uStackX_20;
  
  uVar1 = ~(param_5 & unaff_R15) & (*(ulonglong *)((longlong)auStackX_10 + unaff_R13) | unaff_R15);
  uStackX_20 = (-0x101 - (uStackX_20 | 0xfeff)) + uStackX_20;
  *(ulonglong *)(uVar1 - 8) = auStackX_10[0];
  *(undefined1 **)(uVar1 - 0x10) = &LAB_14d89e5b3;
  auStackX_10[0] = param_2;
  uVar3 = FUN_16474e44a(param_1,param_2);
  *(undefined8 *)(uVar1 - 0x10) = param_1;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined4 *)(uVar1 - 0x18) = 0xe4461496;
  *(undefined4 *)(uVar1 - 0x14) = 0xffffffff;
  *(code **)(uVar1 - 0x10) = FUN_16474e44a + (unaff_RBP + auStackX_10[1] + 1) * -2;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(in_stack_00000008 + -0x70);
  *(undefined8 *)(uVar1 - 0x18) = *(undefined8 *)(in_stack_00000008 + -8);
  *(undefined8 *)(uVar1 - 0x20) = uVar3;
  *(undefined8 *)(uVar1 - 0x28) = uVar3;
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(in_stack_00000008 + -0x98);
  *(undefined8 *)(uVar1 - 0x30) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x38) = unaff_R14;
  *(undefined1 **)(uVar1 - 0x30) = &LAB_14d89e65f;
  FUN_162e34935(uVar2);
  return;
}



// FUNCTION 14d89e708 FUN_14d89e708 body=147 status=ok
// SIG undefined FUN_14d89e708(void)

void FUN_14d89e708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15b33af97)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d89e79d FUN_14d89e79d body=39 status=ok
// SIG undefined FUN_14d89e79d(void)

void FUN_14d89e79d(void)

{
  return;
}



// FUNCTION 14d89e859 FUN_14d89e859 body=164 status=ok
// SIG undefined FUN_14d89e859(void)

void FUN_14d89e859(void)

{
  FUN_161ba0fb5();
  return;
}



// FUNCTION 14d89e8fd FUN_14d89e8fd body=154 status=ok
// SIG undefined FUN_14d89e8fd(void)

void FUN_14d89e8fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_1665a7c17(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d89eb5b FUN_14d89eb5b body=503 status=ok
// SIG undefined FUN_14d89eb5b(void)

/* WARNING: Removing unreachable block (ram,0x00014d89ebed) */
/* WARNING: Removing unreachable block (ram,0x00014d89ebf3) */
/* WARNING: Removing unreachable block (ram,0x000166254130) */
/* WARNING: Removing unreachable block (ram,0x00014d89ec76) */
/* WARNING: Removing unreachable block (ram,0x00014d89ec7c) */
/* WARNING: Removing unreachable block (ram,0x00014d89ec81) */
/* WARNING: Removing unreachable block (ram,0x00014d89ecd2) */
/* WARNING: Removing unreachable block (ram,0x00016639abe0) */
/* WARNING: Removing unreachable block (ram,0x00016639ac2c) */
/* WARNING: Removing unreachable block (ram,0x00016639ac30) */

undefined8 FUN_14d89eb5b(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined8 local_res18;
  
  FUN_156c129be(local_res18 ^ param_1,in_stack_00000008,local_res10);
  uVar1 = FUN_1627f4bed();
  return uVar1;
}



// FUNCTION 14d89ed22 FUN_14d89ed22 body=92 status=ok
// SIG undefined FUN_14d89ed22(void)

void FUN_14d89ed22(void)

{
  FUN_14d7a51ef();
  return;
}



// FUNCTION 14d89ed9a FUN_14d89ed9a body=23 status=ok
// SIG undefined FUN_14d89ed9a(void)

void FUN_14d89ed9a(void)

{
  return;
}



// FUNCTION 14d89f042 FUN_14d89f042 body=159 status=ok
// SIG undefined FUN_14d89f042(void)

/* WARNING: Removing unreachable block (ram,0x00014d89f0d7) */
/* WARNING: Removing unreachable block (ram,0x00014d89f0dd) */
/* WARNING: Removing unreachable block (ram,0x00014d89f0e2) */

void FUN_14d89f042(void)

{
  FUN_15707b932();
  return;
}



// FUNCTION 14d89f0e2 FUN_14d89f0e2 body=147 status=ok
// SIG undefined FUN_14d89f0e2(void)

void FUN_14d89f0e2(undefined8 param_1)

{
  (*(code *)0x15b48ce69)(param_1,0x15b48ce69);
  return;
}



// FUNCTION 14d89f176 FUN_14d89f176 body=326 status=ok
// SIG undefined FUN_14d89f176(void)

/* WARNING: Removing unreachable block (ram,0x00014d89f215) */
/* WARNING: Removing unreachable block (ram,0x00014d89f21b) */

void FUN_14d89f176(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_1616372f2(param_1,uVar1,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~((~param_1 | uVar1) & (~uVar1 | param_1)));
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d89f21b FUN_14d89f21b body=146 status=ok
// SIG undefined FUN_14d89f21b(void)

void FUN_14d89f21b(undefined8 param_1)

{
  FUN_156bc2474(param_1);
  return;
}



// FUNCTION 14d89f32a FUN_14d89f32a body=120 status=ok
// SIG undefined FUN_14d89f32a(void)

void FUN_14d89f32a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1618270b1)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d89f4e6 FUN_14d89f4e6 body=650 status=ok
// SIG undefined FUN_14d89f4e6(void)

/* WARNING: Removing unreachable block (ram,0x00014d89f61b) */
/* WARNING: Removing unreachable block (ram,0x00014d89f627) */
/* WARNING: Removing unreachable block (ram,0x00014d89f646) */
/* WARNING: Removing unreachable block (ram,0x00014d89f64b) */
/* WARNING: Removing unreachable block (ram,0x00014d89f57a) */
/* WARNING: Removing unreachable block (ram,0x00014d89f5a8) */
/* WARNING: Removing unreachable block (ram,0x00014d89f5ac) */

undefined8 FUN_14d89f4e6(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2;
  if (-1 < lVar1) {
    uVar2 = FUN_1667050df();
    return uVar2;
  }
  uVar2 = FUN_14de8991c((~param_1 + in_R10) - ~param_2,0xfffffffff489a38c,lVar1);
  return uVar2;
}



// FUNCTION 14d89f772 FUN_14d89f772 body=118 status=ok
// SIG undefined FUN_14d89f772(void)

void FUN_14d89f772(void)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  ushort *puVar1;
  short sVar2;
  longlong unaff_R14;
  ulonglong uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ushort local_8;
  uint6 uStack_6;
  
  uVar3 = -unaff_R14;
  *(undefined4 *)(&stack0x00000000 + unaff_RBX) = 0;
  local_8 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SBORROW8(0,unaff_R14) * 0x800 |
            (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
            (ushort)((longlong)uVar3 < 0) * 0x80 | (ushort)(uVar3 == 0) * 0x40 |
            (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 |
            (ushort)(unaff_R14 != 0);
  sVar2 = (local_8 | 0xfeff) + 0x101;
  _local_8 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                      (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                      (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                      (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),sVar2);
  puVar1 = &local_8;
  if (sVar2 == 0) {
    puVar1 = (ushort *)register0x00000020;
  }
  *(int *)((longlong)puVar1 + unaff_RBX) = *(int *)((longlong)puVar1 + unaff_RBX) - (int)uVar3;
  *(undefined8 *)((longlong)puVar1 + -8) = in_RAX;
  (*(code *)&LAB_16584a695)();
  return;
}



// FUNCTION 14d89f834 FUN_14d89f834 body=147 status=ok
// SIG undefined FUN_14d89f834(void)

void FUN_14d89f834(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164f4cbdd(~((~(unaff_RDI & param_1) + param_1) - ~unaff_RDI &
                 (param_1 ^ 0xffffffffffffffff | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d89f971 FUN_14d89f971 body=447 status=ok
// SIG undefined FUN_14d89f971(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d89fa95) */

void FUN_14d89f971(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  FUN_161aee23f();
  uVar1 = *(ulonglong *)(0x7689 - ~(unaff_RDI - 0x772aU));
  if (uVar1 + param_1 == (uVar1 & param_1) << 1) {
    FUN_1658bb76e();
    return;
  }
  FUN_1658bb76e();
  return;
}



// FUNCTION 14d89fe04 FUN_14d89fe04 body=328 status=ok
// SIG undefined FUN_14d89fe04(void)

/* WARNING: Removing unreachable block (ram,0x00014d89ff42) */
/* WARNING: Removing unreachable block (ram,0x00014d89ff4d) */
/* WARNING: Removing unreachable block (ram,0x00014d89ffe3) */
/* WARNING: Removing unreachable block (ram,0x00014d89ffe9) */
/* WARNING: Removing unreachable block (ram,0x000160d92060) */
/* WARNING: Removing unreachable block (ram,0x00014d89ff48) */

void FUN_14d89fe04(void)

{
  FUN_1563881c0();
  FUN_16692e298();
  return;
}



// FUNCTION 14d89ff4d FUN_14d89ff4d body=424 status=ok
// SIG undefined FUN_14d89ff4d(void)

/* WARNING: Removing unreachable block (ram,0x00014d89ffe9) */

void FUN_14d89ff4d(longlong param_1)

{
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1568a347e(~((unaff_RSI | unaff_RDI) + param_1 + 1),
                (-~*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -3);
  return;
}



// FUNCTION 14d8a006d FUN_14d8a006d body=181 status=ok
// SIG undefined FUN_14d8a006d(void)

void FUN_14d8a006d(void)

{
  return;
}



// FUNCTION 14d8a0125 FUN_14d8a0125 body=446 status=ok
// SIG undefined FUN_14d8a0125(void)

/* WARNING: Removing unreachable block (ram,0x0001654978ed) */
/* WARNING: Removing unreachable block (ram,0x0001654978f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8a01d7) */
/* WARNING: Removing unreachable block (ram,0x00014e1f6f8c) */
/* WARNING: Removing unreachable block (ram,0x00014e1f708e) */
/* WARNING: Removing unreachable block (ram,0x00014e1f7094) */
/* WARNING: Removing unreachable block (ram,0x00014e1f710d) */
/* WARNING: Removing unreachable block (ram,0x00014e1f7112) */
/* WARNING: Removing unreachable block (ram,0x000165134420) */
/* WARNING: Removing unreachable block (ram,0x0001651344a1) */
/* WARNING: Removing unreachable block (ram,0x000165134548) */
/* WARNING: Removing unreachable block (ram,0x00016513454e) */
/* WARNING: Removing unreachable block (ram,0x000165134553) */
/* WARNING: Removing unreachable block (ram,0x0001628adc56) */
/* WARNING: Removing unreachable block (ram,0x00014d8a0240) */
/* WARNING: Removing unreachable block (ram,0x00014d8a024c) */

void FUN_14d8a0125(void)

{
  FUN_1668d7362();
  FUN_14e1f6f8c();
  return;
}



// FUNCTION 14d8a02e9 FUN_14d8a02e9 body=87 status=ok
// SIG undefined FUN_14d8a02e9(void)

void FUN_14d8a02e9(undefined8 param_1)

{
  FUN_16279bdae(param_1);
  return;
}



// FUNCTION 14d8a0349 FUN_14d8a0349 body=377 status=ok
// SIG undefined FUN_14d8a0349(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164f3c48b) overlaps instruction at (ram,0x000164f3c488)
    */
/* WARNING: Removing unreachable block (ram,0x000162a134c5) */
/* WARNING: Removing unreachable block (ram,0x000162a134d0) */
/* WARNING: Removing unreachable block (ram,0x000164f3c488) */
/* WARNING: Removing unreachable block (ram,0x00016211adc0) */
/* WARNING: Removing unreachable block (ram,0x00016211adc6) */
/* WARNING: Removing unreachable block (ram,0x00016211aed0) */
/* WARNING: Removing unreachable block (ram,0x00016211aed5) */
/* WARNING: Removing unreachable block (ram,0x00016211aedb) */
/* WARNING: Removing unreachable block (ram,0x00016211aee0) */
/* WARNING: Removing unreachable block (ram,0x000162a134cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8a03fb) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05af) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05cb) */
/* WARNING: Removing unreachable block (ram,0x00016211ad40) */
/* WARNING: Removing unreachable block (ram,0x00016211ada5) */
/* WARNING: Removing unreachable block (ram,0x00016211ada7) */
/* WARNING: Removing unreachable block (ram,0x000164f3c48b) */
/* WARNING: Removing unreachable block (ram,0x0001612eb93a) */
/* WARNING: Removing unreachable block (ram,0x0001612eba2e) */
/* WARNING: Removing unreachable block (ram,0x0001612eba29) */
/* WARNING: Removing unreachable block (ram,0x0001612eba75) */
/* WARNING: Removing unreachable block (ram,0x0001612eb924) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d8a0349(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1666a3a9d();
  return uVar1;
}



// FUNCTION 14d8a0402 FUN_14d8a0402 body=575 status=ok
// SIG undefined FUN_14d8a0402(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164f3c48b) overlaps instruction at (ram,0x000164f3c488)
    */
/* WARNING: Removing unreachable block (ram,0x000164f3c488) */
/* WARNING: Removing unreachable block (ram,0x00016211adc0) */
/* WARNING: Removing unreachable block (ram,0x00016211adc6) */
/* WARNING: Removing unreachable block (ram,0x00016211aed0) */
/* WARNING: Removing unreachable block (ram,0x00016211aed5) */
/* WARNING: Removing unreachable block (ram,0x00016211aedb) */
/* WARNING: Removing unreachable block (ram,0x00016211aee0) */
/* WARNING: Removing unreachable block (ram,0x00014d8a05d1) */

undefined8
FUN_14d8a0402(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  byte bVar10;
  ulonglong unaff_RBP;
  ulonglong uVar11;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar12;
  longlong unaff_R14;
  longlong unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  *(ulonglong *)(unaff_R14 + 0x10) = *(ulonglong *)(unaff_R14 + 0x10) | param_3;
  *(ulonglong *)(unaff_R14 + 0x10) = ~*(ulonglong *)(unaff_R14 + 0x10);
  param_5 = param_5 ^ param_1;
  plVar1 = (longlong *)(param_5 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_retaddr;
  *(longlong *)(param_5 - 0x10) = *plVar1;
  *plVar1 = 0;
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  lVar4 = *(longlong *)(param_5 - 8);
  *(ulonglong *)(param_5 - 8) = *(ulonglong *)(param_5 - 8) & 0x161d8fe3e;
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) << 1;
  *(undefined1 **)(param_5 - 8) = &LAB_161d8fe3e + (lVar4 - *(longlong *)(param_5 - 8));
  *(undefined8 *)(param_5 - 0x18) = 0x14d8a048c;
  uVar9 = FUN_161d8fe18(local_res18,param_2,local_res8);
  *(undefined4 *)(param_5 - 0x10) = 0x8e1e5f05;
  *(undefined4 *)(param_5 - 0xc) = 0xffffffff;
  uVar5 = *(ulonglong *)(unaff_RDI + *(longlong *)(param_5 - 0x10) + 0x71e1a0b3);
  *(undefined8 *)(param_5 - 0x10) = unaff_R12;
  uVar12 = ~local_res18;
  uVar11 = uVar5 & local_res18;
  *(undefined8 *)(param_5 - 0x10) = uVar9;
  *(undefined8 *)(param_5 - 0x18) = param_2;
  *(undefined8 *)(param_5 - 0x20) = *(undefined8 *)(unaff_RDI + -0x88);
  puVar2 = (undefined8 *)(param_5 - 0x18);
  *puVar2 = *(undefined8 *)(param_5 - 0x20);
  *puVar2 = *puVar2;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 0x18) = 0x14d8a0526;
  uVar9 = FUN_165f6bcda();
  *(undefined8 *)(param_5 - 0x10) = uVar9;
  *(undefined4 *)(param_5 - 0x10) = 0x90145e43;
  *(int *)(param_5 - 0x10) = *(int *)(param_5 - 0x10) + 0x7c9f6cae;
  *(undefined4 *)(param_5 - 0xc) = 0x5e84fee;
  *(uint *)(param_5 - 0xc) = *(uint *)(param_5 - 0xc) ^ 0x5e84fee;
  uVar6 = *(ulonglong *)(param_5 - 0x10);
  *(undefined4 *)(param_5 - 0x10) = 0xc42d0ba5;
  *(int *)(param_5 - 0x10) = *(int *)(param_5 - 0x10) + 0x47a3474a;
  *(undefined4 *)(param_5 - 0xc) = 0;
  if (uVar6 != (*(ulonglong *)(param_5 - 0x10) ^ 0x763981e)) {
    unaff_RDI = unaff_RDI + 1 +
                (ulonglong)(((local_res20 ^ 0xffffffffffffffff) & unaff_RBP & 0x400) != 0) * -2;
  }
  *(ulonglong *)(param_5 - 0x10) = local_res18;
  uVar7 = *(ulonglong *)(param_5 - 0x10);
  *(ulonglong *)(param_5 - 0x10) =
       ~((~uVar7 | *(ulonglong *)(unaff_RDI + -0x60)) & (~*(ulonglong *)(unaff_RDI + -0x60) | uVar7)
        );
  uVar9 = *(undefined8 *)(param_5 - 0x10);
  uVar6 = *(ulonglong *)(unaff_RDI + -0x70);
                    /* WARNING: Bad instruction - Truncating control flow here */
  lVar4 = *(longlong *)(unaff_RDI + -0x80);
  *(ulonglong *)(param_5 - 0x10) = uVar7;
  puVar3 = (ulonglong *)(param_5 - 0x18);
  *puVar3 = uVar7;
  *(undefined1 *)puVar3 = 0;
  uVar8 = *puVar3;
  bVar10 = (byte)uVar8;
  *puVar3 = (uVar11 ^ 0xffffffffffffffff) & ~(~uVar5 & uVar12);
  uVar9 = (*(code *)0x160ccbbf9)
                    (CONCAT71((int7)(uVar8 >> 8),~(bVar10 & 0x51) & (bVar10 | 0x51)),lVar4 + uVar7,
                     uVar6 ^ uVar7,uVar9);
  return uVar9;
}



// FUNCTION 14d8a070c FUN_14d8a070c body=33 status=ok
// SIG undefined FUN_14d8a070c(void)

void FUN_14d8a070c(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + unaff_R13) = 0x2d9b9fbb;
  *(ulonglong *)((longlong)auStackX_10 + unaff_R13) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_R13) ^ 0x2d9b9fbb;
  *(ulonglong *)((longlong)auStackX_10 + unaff_R13) =
       *(ulonglong *)((longlong)auStackX_10 + unaff_R13) ^ param_1;
  thunk_FUN_15b642ca5(auStackX_10[0]);
  return;
}



// FUNCTION 14d8a07ad FUN_14d8a07ad body=120 status=ok
// SIG undefined FUN_14d8a07ad(void)

void FUN_14d8a07ad(undefined8 param_1)

{
  FUN_162d0c2de(param_1);
  FUN_162603057();
  return;
}



// FUNCTION 14d8a0825 FUN_14d8a0825 body=142 status=ok
// SIG undefined FUN_14d8a0825(void)

void FUN_14d8a0825(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000020;
  
  FUN_162603057(param_1,param_2,FUN_162603057,param_4,in_stack_00000020 ^ in_RAX);
  return;
}



// FUNCTION 14d8a08b5 FUN_14d8a08b5 body=20 status=ok
// SIG undefined FUN_14d8a08b5(void)

void FUN_14d8a08b5(void)

{
  return;
}



// FUNCTION 14d8a093b FUN_14d8a093b body=192 status=ok
// SIG undefined FUN_14d8a093b(void)

undefined8 FUN_14d8a093b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8a0a01 FUN_14d8a0a01 body=141 status=ok
// SIG undefined FUN_14d8a0a01(void)

void FUN_14d8a0a01(ulonglong param_1)

{
  longlong unaff_RDI;
  
  thunk_FUN_1663e05ae(param_1,*(ulonglong *)(unaff_RDI + -0x70),
                      *(ulonglong *)(unaff_RDI + -0x70) & param_1,
                      ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                      (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14d8a0bc1 FUN_14d8a0bc1 body=115 status=ok
// SIG undefined FUN_14d8a0bc1(void)

void FUN_14d8a0bc1(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint in_stack_00000008;
  
  FUN_1628abdac(param_1,param_2,~(in_stack_00000008 & param_4));
  return;
}



// FUNCTION 14d8a0c34 FUN_14d8a0c34 body=124 status=ok
// SIG undefined FUN_14d8a0c34(void)

void FUN_14d8a0c34(void)

{
  longlong unaff_retaddr;
  
  *(undefined4 *)(&stack0x07990b83 + unaff_retaddr) = 0;
  FUN_156e65473();
  return;
}



// FUNCTION 14d8a0cbb FUN_14d8a0cbb body=172 status=ok
// SIG undefined FUN_14d8a0cbb(void)

void FUN_14d8a0cbb(void)

{
  undefined8 in_RAX;
  longlong unaff_RSI;
  undefined8 *in_R11;
  
  *in_R11 = *(undefined8 *)(unaff_RSI + -0x48);
  *in_R11 = in_RAX;
  *(undefined4 *)in_R11 = 0;
  *(undefined4 *)((longlong)in_R11 + 4) = 0;
  *in_R11 = in_RAX;
  in_R11[-1] = unaff_RSI;
  in_R11[-2] = in_RAX;
  *(undefined4 *)(in_R11 + -2) = 0x7a0a8ed2;
  *(undefined4 *)(in_R11 + -3) = 0;
  *(undefined4 *)((longlong)in_R11 + -0xc) = *(undefined4 *)(in_R11 + -3);
  in_R11[-2] = &LAB_166ccec12;
  return;
}



// FUNCTION 14d8a0d68 FUN_14d8a0d68 body=114 status=ok
// SIG undefined FUN_14d8a0d68(void)

void FUN_14d8a0d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1567b496d)(param_1,param_2,param_3,0x1567b496d);
  return;
}



// FUNCTION 14d8a0e60 FUN_14d8a0e60 body=418 status=ok
// SIG undefined FUN_14d8a0e60(void)

void FUN_14d8a0e60(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x30) ^ unaff_R15;
  FUN_15b733b40(param_1,~(param_2 & unaff_R15) & (unaff_RSI + unaff_R15) - (unaff_RSI & unaff_R15));
  *param_3 = DAT_15b733ab0;
  *param_3 = 0xffffffffffffff78;
  param_3[-1] = 0x14d8a0f7f;
  uVar2 = FUN_15745d8a5();
  uVar1 = *param_3;
  *param_3 = uVar2;
  param_3[-1] = param_1;
  param_3[-1] = CONCAT62((int6)(uVar3 >> 0x10),(short)uVar3 + 1);
  param_3[-1] = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_3 + param_1 + 0x10);
  param_3[1] = unaff_R14;
  *param_3 = uVar1;
  param_3[-1] = 0x14d8a1000;
  FUN_16510a65f();
  FUN_14d8a1006();
  return;
}



// FUNCTION 14d8a1006 FUN_14d8a1006 body=2 status=ok
// SIG undefined FUN_14d8a1006(void)

void FUN_14d8a1006(void)

{
  return;
}



// FUNCTION 14d8a108c FUN_14d8a108c body=166 status=ok
// SIG undefined FUN_14d8a108c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a1134) */

undefined8 FUN_14d8a108c(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (-1 < (longlong)&stack0xffffffffffffffe8) {
    uVar1 = FUN_166b1c499();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14d8a1134 FUN_14d8a1134 body=143 status=ok
// SIG undefined FUN_14d8a1134(void)

void FUN_14d8a1134(undefined8 param_1,undefined8 param_2)

{
  FUN_1665c3479(param_1,param_2);
  return;
}



// FUNCTION 14d8a11cc FUN_14d8a11cc body=154 status=ok
// SIG undefined FUN_14d8a11cc(void)

/* WARNING: Removing unreachable block (ram,0x000162a1efca) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1261) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1267) */
/* WARNING: Removing unreachable block (ram,0x0001623d2396) */

void FUN_14d8a11cc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1666510a3)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8a1267 FUN_14d8a1267 body=148 status=ok
// SIG undefined FUN_14d8a1267(void)

void FUN_14d8a1267(void)

{
  FUN_14df2abd6();
  return;
}



// FUNCTION 14d8a12ff FUN_14d8a12ff body=132 status=ok
// SIG undefined FUN_14d8a12ff(void)

void FUN_14d8a12ff(uint param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong in_R10;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uStackX_c;
  ulonglong local_res10;
  
  *(uint *)((longlong)&uStackX_c + in_R10) = ~*(uint *)((longlong)&uStackX_c + in_R10);
  *(int *)((longlong)&uStackX_c + in_R10) = *(int *)((longlong)&uStackX_c + in_R10) + 2;
  *(int *)((longlong)&uStackX_c + in_R10) = -*(int *)((longlong)&uStackX_c + in_R10);
  *(int *)((longlong)&uStackX_c + in_R10) =
       *(int *)((longlong)&uStackX_c + in_R10) - (param_1 ^ 0xffffffff);
  uStackX_c = 0;
  uVar2 = local_res10 - 0xfc48612;
  *(undefined1 **)(&stack0xfffffffff03b79fe + local_res10) = &stack0xfffffffff03b7a06 + local_res10;
  uVar1 = *(undefined8 *)(&stack0xfffffffff03b79fe + local_res10);
  *(ulonglong *)(&stack0xfffffffff03b79fe + local_res10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(local_res10,0xfc48612) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(local_res10 < 0xfc48612) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar2 = *(ulonglong *)(&stack0xfffffffff03b79fe + local_res10);
  *(ulonglong *)(&stack0xfffffffff03b79fe + local_res10) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  FUN_162bdc104(uVar1,FUN_162bdc104);
  return;
}



// FUNCTION 14d8a1428 FUN_14d8a1428 body=135 status=ok
// SIG undefined FUN_14d8a1428(void)

void FUN_14d8a1428(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  FUN_156903956(param_1,param_2,(in_RAX - (~unaff_RSI | in_RAX)) + ~unaff_RSI);
  FUN_161d75573();
  return;
}



// FUNCTION 14d8a14b0 FUN_14d8a14b0 body=132 status=ok
// SIG undefined FUN_14d8a14b0(void)

void FUN_14d8a14b0(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161d75573(param_1,*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15);
  return;
}



// FUNCTION 14d8a1782 FUN_14d8a1782 body=183 status=ok
// SIG undefined FUN_14d8a1782(void)

void FUN_14d8a1782(void)

{
  return;
}



// FUNCTION 14d8a18bb FUN_14d8a18bb body=271 status=ok
// SIG undefined FUN_14d8a18bb(void)

void FUN_14d8a18bb(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x48);
  FUN_16512fb4e(param_1,-1 - (unaff_RDI & (~param_2 | in_RAX)));
  uVar1 = *(ulonglong *)((uVar1 ^ in_RAX) - 0x28);
  FUN_166212e26(unaff_retaddr,0xffffffffffffffd8,FUN_166212e26,
                FUN_16512fb4e + (uVar1 & 0x16512fb4e) * -2 + uVar1);
  return;
}



// FUNCTION 14d8a1a4d FUN_14d8a1a4d body=732 status=ok
// SIG undefined FUN_14d8a1a4d(void)

/* WARNING: Removing unreachable block (ram,0x00015b126b7f) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1aee) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d8a1a4d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *(ulonglong *)(in_R10 + 8) =
       (unaff_R13 - (*(ulonglong *)(in_R10 + 8) | unaff_R13)) + *(longlong *)(in_R10 + 8);
  param_5 = param_5 ^ unaff_R15;
  param_6 = unaff_R15 - param_6;
  *(undefined8 *)(param_6 + -8) = local_res18;
  *(undefined8 *)(param_6 + -0x10) = local_res18;
  if ((param_5 & 0x40) != 0) {
    *(ulonglong *)(param_6 + -0x18) =
         (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800
         | (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200
         | (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)((param_5 & 0x80) != 0) * 0x80 |
         0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 | (ulonglong)((param_5 & 4) != 0) * 4 |
         (ulonglong)((param_5 & 1) != 0) | (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
    uVar2 = *(ulonglong *)(param_6 + -0x18);
    *(ulonglong *)(param_6 + -0x18) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
         (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_6 + -0x20) = unaff_R12;
    uVar2 = *(ulonglong *)(param_6 + -0x18);
    *(undefined8 *)(param_6 + -0x18) = in_RAX;
    *(ulonglong *)(param_6 + -0x20) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
         (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_6 + -8) = 0x45dfe80;
    *(undefined8 *)(param_6 + -0x28cf) = *(undefined8 *)(param_6 + -0x10);
    *(undefined8 *)(param_6 + -0x28d7) = *(undefined8 *)(param_6 + -0x10);
    *(undefined **)(param_6 + -0x28cf) = &DAT_156ef2e4a;
    return *(undefined8 *)(param_6 + -0x18);
  }
  uVar1 = FUN_162a13eb9(param_1,local_res10,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d8a1b92 FUN_14d8a1b92 body=122 status=ok
// SIG undefined FUN_14d8a1b92(void)

void FUN_14d8a1b92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_160d95fcc(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8a1c0f FUN_14d8a1c0f body=312 status=ok
// SIG undefined FUN_14d8a1c0f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a1e83) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1e8e) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1ea0) */
/* WARNING: Removing unreachable block (ram,0x000165743bbe) */
/* WARNING: Removing unreachable block (ram,0x000165743bca) */
/* WARNING: Removing unreachable block (ram,0x000165743bf0) */
/* WARNING: Removing unreachable block (ram,0x000165743beb) */
/* WARNING: Removing unreachable block (ram,0x000165743c24) */
/* WARNING: Removing unreachable block (ram,0x000165743c52) */
/* WARNING: Removing unreachable block (ram,0x000165743c64) */
/* WARNING: Removing unreachable block (ram,0x000165743c69) */
/* WARNING: Removing unreachable block (ram,0x000165743c6f) */
/* WARNING: Removing unreachable block (ram,0x000165743c74) */
/* WARNING: Removing unreachable block (ram,0x00015b8bf579) */
/* WARNING: Removing unreachable block (ram,0x000165743d96) */
/* WARNING: Removing unreachable block (ram,0x000165743d9c) */
/* WARNING: Removing unreachable block (ram,0x000165743da2) */
/* WARNING: Removing unreachable block (ram,0x00015b8bf570) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1d42) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1d48) */
/* WARNING: Removing unreachable block (ram,0x000166ce8d9f) */
/* WARNING: Removing unreachable block (ram,0x000166ce8e2f) */
/* WARNING: Removing unreachable block (ram,0x000166ce8e34) */
/* WARNING: Removing unreachable block (ram,0x000166ce8e3a) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7a6) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7f4) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7f7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1e89) */
/* WARNING: Removing unreachable block (ram,0x000165743b50) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1c9b) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1d1c) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1d26) */

undefined8 FUN_14d8a1c0f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined8 local_res8;
  
  if ((ushort)(~((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_OF & 1) * 0x800 |
                 (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
                 (ushort)(in_SF & 1) * 0x80 | (ushort)(in_ZF & 1) * 0x40 |
                 (ushort)(in_AF & 1) * 0x10 | (ushort)(in_PF & 1) * 4 | (ushort)((in_ZF & 1) != 0))
              | 0xfffe) == 0xffff) {
    return in_RAX;
  }
  uVar1 = FUN_1618bc41f(param_1,param_2,local_res8,FUN_1618bc41f);
  return uVar1;
}



// FUNCTION 14d8a1d48 FUN_14d8a1d48 body=474 status=ok
// SIG undefined FUN_14d8a1d48(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a1e83) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1e8e) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1ea0) */
/* WARNING: Removing unreachable block (ram,0x000166ce8e34) */
/* WARNING: Removing unreachable block (ram,0x000166ce8e3a) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7a6) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7f4) */
/* WARNING: Removing unreachable block (ram,0x00014da0a7f7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a1e89) */

undefined8 FUN_14d8a1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R12;
  
  FUN_162d50124(param_1,param_2,param_3);
  uVar1 = FUN_14da0a7a6(~*(ulonglong *)(unaff_R12 + -0x28),0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14d8a1f24 FUN_14d8a1f24 body=168 status=ok
// SIG undefined FUN_14d8a1f24(void)

void FUN_14d8a1f24(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_166611da5(param_1,local_res8);
  return;
}



// FUNCTION 14d8a2076 FUN_14d8a2076 body=137 status=ok
// SIG undefined FUN_14d8a2076(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a20a1) */

ulonglong FUN_14d8a2076(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x80) | param_1;
  return ~((~uVar1 | ~param_1 | *(ulonglong *)(unaff_RDI + -0x80)) + uVar1 + 1);
}



// FUNCTION 14d8a2100 FUN_14d8a2100 body=318 status=ok
// SIG undefined FUN_14d8a2100(void)

void FUN_14d8a2100(void)

{
  FUN_16163cb46();
  FUN_1629498a1();
  return;
}



// FUNCTION 14d8a2240 FUN_14d8a2240 body=325 status=ok
// SIG undefined FUN_14d8a2240(void)

/* WARNING: Removing unreachable block (ram,0x000162df1961) */
/* WARNING: Removing unreachable block (ram,0x000162df196d) */
/* WARNING: Removing unreachable block (ram,0x000162df19d5) */
/* WARNING: Removing unreachable block (ram,0x000162df19f0) */
/* WARNING: Removing unreachable block (ram,0x000162df19f5) */
/* WARNING: Removing unreachable block (ram,0x000161c852d3) */
/* WARNING: Removing unreachable block (ram,0x00014d8a22f7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a23a4) */
/* WARNING: Removing unreachable block (ram,0x00014d8a239d) */
/* WARNING: Removing unreachable block (ram,0x00014d8a23a9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x000162df1893 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8a2240(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong in_R10;
  undefined8 local_res8;
  longlong lStack0000000000000028;
  
  lStack0000000000000028 = -(unaff_RBX - in_R10);
  local_res8 = 0x561e7c36;
  if (-1 < (longlong)&local_res8) {
    return in_RAX;
  }
  uVar1 = FUN_162df181f();
  return uVar1;
}



// FUNCTION 14d8a22f7 FUN_14d8a22f7 body=410 status=ok
// SIG undefined FUN_14d8a22f7(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a23a4) */

void FUN_14d8a22f7(ulonglong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  lVar2 = FUN_160bca0a1(param_1,unaff_retaddr ^ param_1);
  pbVar1 = (byte *)(unaff_RDI + -1 + lVar2);
  *pbVar1 = *pbVar1 ^ 0x74;
  pbVar1 = (byte *)(unaff_RDI + -1 + lVar2);
  *pbVar1 = ~*pbVar1;
  *(char *)(unaff_RDI + -1 + lVar2) = ((char)param_1 + -1) - *(char *)(unaff_RDI + -1 + lVar2);
  FUN_1610efcd2();
  return;
}



// FUNCTION 14d8a24c1 FUN_14d8a24c1 body=441 status=ok
// SIG undefined FUN_14d8a24c1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a266b) */
/* WARNING: Removing unreachable block (ram,0x00014d8a2671) */
/* WARNING: Removing unreachable block (ram,0x0001647027b9) */

void FUN_14d8a24c1(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R13;
  ulonglong in_stack_00000008;
  
  FUN_164fd8e40(param_1,(in_stack_00000008 - param_1) + (~param_1 | in_stack_00000008) * -2 + -2);
  FUN_161b59b37(0x31,CONCAT71((int7)(unaff_R13 + param_1 + (unaff_R13 & param_1) * -2 >> 8),0x9f) ^
                     0x4f,(param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x40),
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x40)) + param_1 + 1);
  FUN_1647027b9();
  return;
}



// FUNCTION 14d8a2799 FUN_14d8a2799 body=119 status=ok
// SIG undefined FUN_14d8a2799(void)

longlong FUN_14d8a2799(ulonglong param_1)

{
  ulonglong unaff_retaddr;
  
  return unaff_retaddr + param_1 + (unaff_retaddr & param_1) * -2;
}



// FUNCTION 14d8a282e FUN_14d8a282e body=143 status=ok
// SIG undefined FUN_14d8a282e(void)

/* WARNING: Instruction at (ram,0x00014d8a2924) overlaps instruction at (ram,0x00014d8a2923)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8a2923) */
/* WARNING: Removing unreachable block (ram,0x00014d8a2950) */
/* WARNING: Removing unreachable block (ram,0x00014d8a28be) */

ulonglong FUN_14d8a282e(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined8 local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + param_3 + unaff_RBP + (param_3 & unaff_RBP) * -2) =
       param_1;
  return *(ulonglong *)(unaff_R12 + -0x98) ^ in_RAX;
}



// FUNCTION 14d8a28be FUN_14d8a28be body=202 status=ok
// SIG undefined FUN_14d8a28be(void)

/* WARNING: Instruction at (ram,0x00014d8a2924) overlaps instruction at (ram,0x00014d8a2923)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8a2923) */
/* WARNING: Removing unreachable block (ram,0x00014d8a2950) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d8a293f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8a28be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong in_stack_00000008;
  ulonglong local_res10 [3];
  
  uVar2 = (in_stack_00000008 & 0xffffffff) + 0x23ec7a65 ^ 0x49e8e785;
  *(undefined4 *)((longlong)local_res10 + uVar2) = 0;
  uVar1 = local_res10[0];
  local_res10[0] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000 | 0x800;
  FUN_1564acf9d(uVar1 - DAT_14c872ce0,param_2,param_3);
  return;
}



// FUNCTION 14d8a2ce3 FUN_14d8a2ce3 body=70 status=ok
// SIG undefined FUN_14d8a2ce3(void)

void FUN_14d8a2ce3(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8a2da3 FUN_14d8a2da3 body=54 status=ok
// SIG undefined FUN_14d8a2da3(void)

void FUN_14d8a2da3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1625c56fe)(param_1,0x1625c56fe,param_3);
  return;
}



// FUNCTION 14d8a2e3a FUN_14d8a2e3a body=139 status=ok
// SIG undefined FUN_14d8a2e3a(void)

void FUN_14d8a2e3a(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_14da75c09(FUN_14da75c09,
                0xffffffffffffffff - (*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP));
  return;
}



// FUNCTION 14d8a2ec5 thunk_FUN_14d8a2ecf body=5 status=ok
// SIG undefined thunk_FUN_14d8a2ecf(void)

void thunk_FUN_14d8a2ecf(void)

{
  return;
}



// FUNCTION 14d8a2ecf FUN_14d8a2ecf body=26 status=ok
// SIG undefined FUN_14d8a2ecf(void)

void FUN_14d8a2ecf(void)

{
  return;
}



// FUNCTION 14d8a2ee9 FUN_14d8a2ee9 body=95 status=ok
// SIG undefined FUN_14d8a2ee9(void)

void FUN_14d8a2ee9(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 0xa8b13) {
    FUN_166a62797(param_1,0x14d7c6292,param_3,param_4);
    return;
  }
  if (param_2 != 0xa8b14) {
    FUN_16637e955();
    return;
  }
  FUN_16637e91d(param_1,FUN_16637e91d);
  return;
}



// FUNCTION 14d8a2f49 thunk_FUN_14d8a2f4f body=5 status=ok
// SIG undefined thunk_FUN_14d8a2f4f(void)

void thunk_FUN_14d8a2f4f(void)

{
  return;
}



// FUNCTION 14d8a2f4f FUN_14d8a2f4f body=9 status=ok
// SIG undefined FUN_14d8a2f4f(void)

void FUN_14d8a2f4f(void)

{
  return;
}



// FUNCTION 14d8a2fde thunk_FUN_14d8a2fe4 body=5 status=ok
// SIG undefined thunk_FUN_14d8a2fe4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001614d25c5) overlaps instruction at (ram,0x0001614d25c2)
    */
/* WARNING: Removing unreachable block (ram,0x000165c72e61) */
/* WARNING: Removing unreachable block (ram,0x000165c72e6d) */
/* WARNING: Removing unreachable block (ram,0x000165c72e75) */
/* WARNING: Removing unreachable block (ram,0x000165c72e8d) */
/* WARNING: Removing unreachable block (ram,0x00016129ed89) */
/* WARNING: Removing unreachable block (ram,0x00016129ed74) */
/* WARNING: Removing unreachable block (ram,0x00016129ed8d) */
/* WARNING: Removing unreachable block (ram,0x00016129ee0e) */
/* WARNING: Removing unreachable block (ram,0x00016129ee14) */
/* WARNING: Removing unreachable block (ram,0x000162c3ab4c) */
/* WARNING: Removing unreachable block (ram,0x0001614d25f0) */
/* WARNING: Removing unreachable block (ram,0x0001669e2be5) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d24) */
/* WARNING: Removing unreachable block (ram,0x0001669e2e4e) */
/* WARNING: Removing unreachable block (ram,0x0001669e2e54) */
/* WARNING: Removing unreachable block (ram,0x0001614d24f9) */
/* WARNING: Removing unreachable block (ram,0x0001614d25c2) */
/* WARNING: Removing unreachable block (ram,0x0001614d25b9) */
/* WARNING: Removing unreachable block (ram,0x0001614d25c5) */
/* WARNING: Removing unreachable block (ram,0x000162dd5cfb) */
/* WARNING: Removing unreachable block (ram,0x0001614d269d) */
/* WARNING: Removing unreachable block (ram,0x0001614d26a3) */
/* WARNING: Removing unreachable block (ram,0x000162eb8d71) */
/* WARNING: Removing unreachable block (ram,0x00015b68cb0c) */
/* WARNING: Removing unreachable block (ram,0x0001669e2c8e) */
/* WARNING: Removing unreachable block (ram,0x000165c72de5) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d19) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d1f) */
/* WARNING: Removing unreachable block (ram,0x0001614d26a8) */
/* WARNING: Removing unreachable block (ram,0x000162eb8c57) */
/* WARNING: Removing unreachable block (ram,0x0001569bc997) */
/* WARNING: Removing unreachable block (ram,0x000162eb8cd9) */
/* WARNING: Removing unreachable block (ram,0x000162eb8d66) */
/* WARNING: Removing unreachable block (ram,0x00015b68ca8d) */
/* WARNING: Removing unreachable block (ram,0x000165fb053f) */
/* WARNING: Removing unreachable block (ram,0x00015b68cb01) */

undefined8 thunk_FUN_14d8a2fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  longlong *plVar8;
  byte unaff_SIL;
  ulonglong uVar9;
  longlong *in_R11;
  ulonglong uVar10;
  ushort uVar11;
  undefined8 unaff_R15;
  byte in_AF;
  bool bVar12;
  byte in_TF;
  bool bVar13;
  byte in_IF;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte in_NT;
  bool bVar18;
  bool bVar19;
  byte in_AC;
  bool bVar20;
  bool bVar21;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar22;
  bool bVar23;
  
  lVar2 = *in_R11;
  in_R11[-1] = in_RAX;
  *(undefined4 *)(in_R11 + -1) = 0x359731eb;
  *(undefined4 *)((longlong)in_R11 + -4) = 0;
  uVar6 = in_R11[-1];
  uVar10 = uVar6 ^ 0x5ee71310;
  in_R11[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar10 < 0) * 0x80 |
               (ulonglong)(uVar10 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar10 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(in_R11 + -1) = *(ushort *)(in_R11 + -1) & 0x100;
  plVar8 = in_R11 + -1;
  if ((short)in_R11[-1] == 0) {
    plVar8 = in_R11;
  }
  puVar5 = (ulonglong *)((longlong)plVar8 + (uVar6 ^ 0x359731e3));
  uVar6 = *puVar5;
  puVar5[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar6 < 0) * 0x80 |
               (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar5[-3] = uVar6;
  puVar5[-4] = param_3;
  if ((puVar5[-2] & 0x80) != 0) {
    uVar7 = FUN_1669e2a52(param_1,param_2,puVar5[-4]);
    return uVar7;
  }
  uVar6 = puVar5[-3];
  uVar10 = puVar5[-2];
  if ((uVar10 & 0x80) != 0) {
    puVar5[-2] = *(ulonglong *)(uVar6 - 0x38);
    uVar7 = FUN_165bfec6a(param_1,0xffffffffffffffff,FUN_165bfec6a);
    return uVar7;
  }
  *(undefined4 *)(puVar5 + -1) = 0;
  *(int *)(puVar5 + -1) = (int)puVar5[-1] + 0x51f35323;
  *(undefined4 *)(puVar5 + -2) = 0x2552a6df;
  *(undefined4 *)((longlong)puVar5 + -0xc) = 0;
  *(undefined4 *)((longlong)puVar5 + ((puVar5[-2] ^ 0x2552a6db) - 8)) = 0;
  uVar9 = puVar5[-1] ^ 0x56dc929a;
  puVar5[-1] = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar9 < 0) * 0x80
               | (ulonglong)(uVar9 == 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar10 = puVar5[-1];
  bVar18 = (uVar10 & 0x4000) != 0;
  bVar15 = (uVar10 & 0x400) != 0;
  bVar14 = (uVar10 & 0x200) != 0;
  bVar13 = (uVar10 & 0x100) != 0;
  bVar12 = (uVar10 & 0x10) != 0;
  bVar22 = (uVar10 & 0x200000) != 0;
  bVar20 = (uVar10 & 0x40000) != 0;
  puVar5[-1] = (ulonglong)puVar5;
  puVar1 = (ulonglong *)(puVar5[-1] + ((uVar9 - 0x72fc1b1) - (ulonglong)((uVar10 & 1) != 0)));
  uVar10 = *puVar1;
  puVar1[-2] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)((longlong)uVar10 < 0) * 0x80 |
               (ulonglong)(uVar10 == 0) * 0x40 | (ulonglong)bVar12 * 0x10 |
               (ulonglong)((POPCOUNT(uVar10 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar22 * 0x200000 |
               (ulonglong)bVar20 * 0x40000;
  puVar1[-3] = unaff_R15;
  uVar11 = (ushort)puVar1[-2] & 1;
  puVar1[-4] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)(uVar11 == 0) * 0x40 |
               (ulonglong)bVar12 * 0x10 | (ulonglong)(POPCOUNT(uVar11) == '\0') * 4 |
               (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar20 * 0x40000;
  puVar1[-5] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)(uVar11 == 0) * 0x40 |
               (ulonglong)bVar12 * 0x10 | (ulonglong)(POPCOUNT(uVar11) == '\0') * 4 |
               (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar20 * 0x40000;
  *(int *)(puVar1 + -5) = (int)puVar1[-5] << 0x19;
  *(uint *)(puVar1 + -5) = (uint)puVar1[-5] >> 0x1f;
  if ((int)puVar1[-5] == 0) {
    uVar10 = puVar1[-3];
    uVar9 = puVar1[-2];
    bVar19 = (uVar9 & 0x4000) != 0;
    bVar17 = (uVar9 & 0x800) != 0;
    bVar16 = (uVar9 & 0x400) != 0;
    bVar22 = (uVar9 & 0x200) != 0;
    bVar20 = (uVar9 & 0x100) != 0;
    bVar18 = (uVar9 & 0x80) != 0;
    bVar15 = (uVar9 & 0x40) != 0;
    bVar14 = (uVar9 & 0x10) != 0;
    bVar13 = (uVar9 & 4) != 0;
    bVar23 = (uVar9 & 0x200000) != 0;
    bVar21 = (uVar9 & 0x40000) != 0;
    puVar1[-2] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)((uVar9 & 1) != 0) | (ulonglong)bVar23 * 0x200000 |
                 (ulonglong)bVar21 * 0x40000;
    bVar12 = (puVar1[-2] & 1) != 0;
    puVar1[-3] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)bVar12 | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar21 * 0x40000;
    puVar1[-4] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)bVar12 | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar21 * 0x40000;
    *(int *)(puVar1 + -4) = (int)puVar1[-4] << 0x1f;
    *(uint *)(puVar1 + -4) = (uint)puVar1[-4] >> 0x1f;
    if ((int)puVar1[-4] != 0) {
      puVar1[-3] = (ulonglong)puVar5;
      puVar1[-4] = (ulonglong)puVar5;
      puVar1[-3] = 0x1669e2be5;
      return in_RAX;
    }
    uVar9 = puVar1[-3];
    puVar1[-3] = (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar9 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
                 (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
    puVar1[-4] = (ulonglong)puVar1;
    if ((puVar1[-2] & 0x40) == 0) {
      puVar1[-2] = uVar10;
      uVar9 = ~(((0xffffffffffffffff - puVar1[-2] & uVar6 ^ 0xffffffffffffffff) + uVar6) -
                ~(0xffffffffffffffff - puVar1[-2]) & (uVar6 ^ 0xffffffffffffffff | uVar10));
      uVar6 = *(ulonglong *)(lVar2 + -0x40);
      puVar1[-2] = CONCAT71((int7)(uVar9 >> 8),~unaff_SIL);
      if ((byte)puVar1[-1] <= (byte)puVar1[-2]) {
        puVar1[-2] = (~uVar10 | uVar6) & ~(~(0xffffffffffffffff - uVar6) & ~uVar10) ^
                     0xffffffffffffffff;
        *(undefined4 *)(puVar1 + -2) = 0xa305a89d;
        *(undefined4 *)((longlong)puVar1 + -0xc) = 0xffffffff;
        lVar4 = *(longlong *)(lVar2 + -0x60);
        puVar1[-2] = 0;
        puVar1[-2] = puVar1[-2] + lVar4;
        uVar6 = *(ulonglong *)(lVar2 + -0x88);
        puVar1[-2] = uVar6;
        puVar1[-2] = ((uVar10 - 1) - ~uVar6) + ~(~uVar6 | ~uVar10) * -2;
        uVar6 = *(ulonglong *)(lVar2 + -0x38);
        uVar3 = *(ulonglong *)(lVar2 + -0x48);
        puVar1[-2] = uVar3;
        puVar1[-2] = uVar9;
        puVar1[-2] = uVar6 + uVar10 + (uVar6 & uVar10) * -2;
        puVar1[-3] = (~uVar10 | uVar3) + uVar10 + 1;
        uVar7 = puVar1[-2];
        puVar1[-2] = lVar2;
        puVar1[-3] = lVar2;
        puVar1[-4] = lVar2;
        puVar1[-2] = (ulonglong)&LAB_15b1cc311;
        puVar1[-3] = (ulonglong)&DAT_16196fd16;
        return uVar7;
      }
      uVar7 = FUN_162eb8c35();
      return uVar7;
    }
    puVar1[-3] = puVar1[-4];
    puVar1[-4] = puVar1[-4];
    puVar1[-3] = 0x1669e2bd4;
    return in_RAX;
  }
  uVar7 = thunk_FUN_15b36190b();
  return uVar7;
}



// FUNCTION 14d8a2fe4 FUN_14d8a2fe4 body=348 status=ok
// SIG undefined FUN_14d8a2fe4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001614d25c5) overlaps instruction at (ram,0x0001614d25c2)
    */
/* WARNING: Removing unreachable block (ram,0x000165c72e61) */
/* WARNING: Removing unreachable block (ram,0x000165c72e6d) */
/* WARNING: Removing unreachable block (ram,0x000165c72e75) */
/* WARNING: Removing unreachable block (ram,0x000165c72e8d) */
/* WARNING: Removing unreachable block (ram,0x00016129ed89) */
/* WARNING: Removing unreachable block (ram,0x00016129ed74) */
/* WARNING: Removing unreachable block (ram,0x00016129ed8d) */
/* WARNING: Removing unreachable block (ram,0x00016129ee0e) */
/* WARNING: Removing unreachable block (ram,0x00016129ee14) */
/* WARNING: Removing unreachable block (ram,0x000162c3ab4c) */
/* WARNING: Removing unreachable block (ram,0x0001614d25f0) */
/* WARNING: Removing unreachable block (ram,0x0001669e2be5) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d24) */
/* WARNING: Removing unreachable block (ram,0x0001669e2e4e) */
/* WARNING: Removing unreachable block (ram,0x0001669e2e54) */
/* WARNING: Removing unreachable block (ram,0x0001614d24f9) */
/* WARNING: Removing unreachable block (ram,0x0001614d25c2) */
/* WARNING: Removing unreachable block (ram,0x0001614d25b9) */
/* WARNING: Removing unreachable block (ram,0x0001614d25c5) */
/* WARNING: Removing unreachable block (ram,0x000162dd5cfb) */
/* WARNING: Removing unreachable block (ram,0x0001614d269d) */
/* WARNING: Removing unreachable block (ram,0x0001614d26a3) */
/* WARNING: Removing unreachable block (ram,0x000162eb8d71) */
/* WARNING: Removing unreachable block (ram,0x00015b68cb0c) */
/* WARNING: Removing unreachable block (ram,0x0001669e2c8e) */
/* WARNING: Removing unreachable block (ram,0x000165c72de5) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d19) */
/* WARNING: Removing unreachable block (ram,0x0001669e2d1f) */
/* WARNING: Removing unreachable block (ram,0x0001614d26a8) */
/* WARNING: Removing unreachable block (ram,0x000162eb8c57) */
/* WARNING: Removing unreachable block (ram,0x0001569bc997) */
/* WARNING: Removing unreachable block (ram,0x000162eb8cd9) */
/* WARNING: Removing unreachable block (ram,0x000162eb8d66) */
/* WARNING: Removing unreachable block (ram,0x00015b68ca8d) */
/* WARNING: Removing unreachable block (ram,0x000165fb053f) */
/* WARNING: Removing unreachable block (ram,0x00015b68cb01) */

undefined8 FUN_14d8a2fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  longlong *plVar8;
  byte unaff_SIL;
  ulonglong uVar9;
  longlong *in_R11;
  ulonglong uVar10;
  ushort uVar11;
  undefined8 unaff_R15;
  byte in_AF;
  bool bVar12;
  byte in_TF;
  bool bVar13;
  byte in_IF;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte in_NT;
  bool bVar18;
  bool bVar19;
  byte in_AC;
  bool bVar20;
  bool bVar21;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar22;
  bool bVar23;
  
  lVar2 = *in_R11;
  in_R11[-1] = in_RAX;
  *(undefined4 *)(in_R11 + -1) = 0x359731eb;
  *(undefined4 *)((longlong)in_R11 + -4) = 0;
  uVar6 = in_R11[-1];
  uVar10 = uVar6 ^ 0x5ee71310;
  in_R11[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar10 < 0) * 0x80 |
               (ulonglong)(uVar10 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar10 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(in_R11 + -1) = *(ushort *)(in_R11 + -1) & 0x100;
  plVar8 = in_R11 + -1;
  if ((short)in_R11[-1] == 0) {
    plVar8 = in_R11;
  }
  puVar5 = (ulonglong *)((longlong)plVar8 + (uVar6 ^ 0x359731e3));
  uVar6 = *puVar5;
  puVar5[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar6 < 0) * 0x80 |
               (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar5[-3] = uVar6;
  puVar5[-4] = param_3;
  if ((puVar5[-2] & 0x80) != 0) {
    uVar7 = FUN_1669e2a52(param_1,param_2,puVar5[-4]);
    return uVar7;
  }
  uVar6 = puVar5[-3];
  uVar10 = puVar5[-2];
  if ((uVar10 & 0x80) != 0) {
    puVar5[-2] = *(ulonglong *)(uVar6 - 0x38);
    uVar7 = FUN_165bfec6a(param_1,0xffffffffffffffff,FUN_165bfec6a);
    return uVar7;
  }
  *(undefined4 *)(puVar5 + -1) = 0;
  *(int *)(puVar5 + -1) = (int)puVar5[-1] + 0x51f35323;
  *(undefined4 *)(puVar5 + -2) = 0x2552a6df;
  *(undefined4 *)((longlong)puVar5 + -0xc) = 0;
  *(undefined4 *)((longlong)puVar5 + ((puVar5[-2] ^ 0x2552a6db) - 8)) = 0;
  uVar9 = puVar5[-1] ^ 0x56dc929a;
  puVar5[-1] = (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar10 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar9 < 0) * 0x80
               | (ulonglong)(uVar9 == 0) * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
  uVar10 = puVar5[-1];
  bVar18 = (uVar10 & 0x4000) != 0;
  bVar15 = (uVar10 & 0x400) != 0;
  bVar14 = (uVar10 & 0x200) != 0;
  bVar13 = (uVar10 & 0x100) != 0;
  bVar12 = (uVar10 & 0x10) != 0;
  bVar22 = (uVar10 & 0x200000) != 0;
  bVar20 = (uVar10 & 0x40000) != 0;
  puVar5[-1] = (ulonglong)puVar5;
  puVar1 = (ulonglong *)(puVar5[-1] + ((uVar9 - 0x72fc1b1) - (ulonglong)((uVar10 & 1) != 0)));
  uVar10 = *puVar1;
  puVar1[-2] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)((longlong)uVar10 < 0) * 0x80 |
               (ulonglong)(uVar10 == 0) * 0x40 | (ulonglong)bVar12 * 0x10 |
               (ulonglong)((POPCOUNT(uVar10 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar22 * 0x200000 |
               (ulonglong)bVar20 * 0x40000;
  puVar1[-3] = unaff_R15;
  uVar11 = (ushort)puVar1[-2] & 1;
  puVar1[-4] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)(uVar11 == 0) * 0x40 |
               (ulonglong)bVar12 * 0x10 | (ulonglong)(POPCOUNT(uVar11) == '\0') * 4 |
               (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar20 * 0x40000;
  puVar1[-5] = (ulonglong)bVar18 * 0x4000 | (ulonglong)bVar15 * 0x400 | (ulonglong)bVar14 * 0x200 |
               (ulonglong)bVar13 * 0x100 | (ulonglong)(uVar11 == 0) * 0x40 |
               (ulonglong)bVar12 * 0x10 | (ulonglong)(POPCOUNT(uVar11) == '\0') * 4 |
               (ulonglong)bVar22 * 0x200000 | (ulonglong)bVar20 * 0x40000;
  *(int *)(puVar1 + -5) = (int)puVar1[-5] << 0x19;
  *(uint *)(puVar1 + -5) = (uint)puVar1[-5] >> 0x1f;
  if ((int)puVar1[-5] == 0) {
    uVar10 = puVar1[-3];
    uVar9 = puVar1[-2];
    bVar19 = (uVar9 & 0x4000) != 0;
    bVar17 = (uVar9 & 0x800) != 0;
    bVar16 = (uVar9 & 0x400) != 0;
    bVar22 = (uVar9 & 0x200) != 0;
    bVar20 = (uVar9 & 0x100) != 0;
    bVar18 = (uVar9 & 0x80) != 0;
    bVar15 = (uVar9 & 0x40) != 0;
    bVar14 = (uVar9 & 0x10) != 0;
    bVar13 = (uVar9 & 4) != 0;
    bVar23 = (uVar9 & 0x200000) != 0;
    bVar21 = (uVar9 & 0x40000) != 0;
    puVar1[-2] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)((uVar9 & 1) != 0) | (ulonglong)bVar23 * 0x200000 |
                 (ulonglong)bVar21 * 0x40000;
    bVar12 = (puVar1[-2] & 1) != 0;
    puVar1[-3] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)bVar12 | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar21 * 0x40000;
    puVar1[-4] = (ulonglong)bVar19 * 0x4000 | (ulonglong)bVar17 * 0x800 | (ulonglong)bVar16 * 0x400
                 | (ulonglong)bVar22 * 0x200 | (ulonglong)bVar20 * 0x100 | (ulonglong)bVar18 * 0x80
                 | (ulonglong)bVar15 * 0x40 | (ulonglong)bVar14 * 0x10 | (ulonglong)bVar13 * 4 |
                 (ulonglong)bVar12 | (ulonglong)bVar23 * 0x200000 | (ulonglong)bVar21 * 0x40000;
    *(int *)(puVar1 + -4) = (int)puVar1[-4] << 0x1f;
    *(uint *)(puVar1 + -4) = (uint)puVar1[-4] >> 0x1f;
    if ((int)puVar1[-4] != 0) {
      puVar1[-3] = (ulonglong)puVar5;
      puVar1[-4] = (ulonglong)puVar5;
      puVar1[-3] = 0x1669e2be5;
      return in_RAX;
    }
    uVar9 = puVar1[-3];
    puVar1[-3] = (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar9 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar9 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)((uVar9 & 0x80) != 0) * 0x80
                 | (ulonglong)((uVar9 & 0x40) != 0) * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10
                 | (ulonglong)((uVar9 & 4) != 0) * 4 | (ulonglong)((uVar9 & 1) != 0) |
                 (ulonglong)((uVar9 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar9 & 0x40000) != 0) * 0x40000;
    puVar1[-4] = (ulonglong)puVar1;
    if ((puVar1[-2] & 0x40) == 0) {
      puVar1[-2] = uVar10;
      uVar9 = ~(((0xffffffffffffffff - puVar1[-2] & uVar6 ^ 0xffffffffffffffff) + uVar6) -
                ~(0xffffffffffffffff - puVar1[-2]) & (uVar6 ^ 0xffffffffffffffff | uVar10));
      uVar6 = *(ulonglong *)(lVar2 + -0x40);
      puVar1[-2] = CONCAT71((int7)(uVar9 >> 8),~unaff_SIL);
      if ((byte)puVar1[-1] <= (byte)puVar1[-2]) {
        puVar1[-2] = (~uVar10 | uVar6) & ~(~(0xffffffffffffffff - uVar6) & ~uVar10) ^
                     0xffffffffffffffff;
        *(undefined4 *)(puVar1 + -2) = 0xa305a89d;
        *(undefined4 *)((longlong)puVar1 + -0xc) = 0xffffffff;
        lVar4 = *(longlong *)(lVar2 + -0x60);
        puVar1[-2] = 0;
        puVar1[-2] = puVar1[-2] + lVar4;
        uVar6 = *(ulonglong *)(lVar2 + -0x88);
        puVar1[-2] = uVar6;
        puVar1[-2] = ((uVar10 - 1) - ~uVar6) + ~(~uVar6 | ~uVar10) * -2;
        uVar6 = *(ulonglong *)(lVar2 + -0x38);
        uVar3 = *(ulonglong *)(lVar2 + -0x48);
        puVar1[-2] = uVar3;
        puVar1[-2] = uVar9;
        puVar1[-2] = uVar6 + uVar10 + (uVar6 & uVar10) * -2;
        puVar1[-3] = (~uVar10 | uVar3) + uVar10 + 1;
        uVar7 = puVar1[-2];
        puVar1[-2] = lVar2;
        puVar1[-3] = lVar2;
        puVar1[-4] = lVar2;
        puVar1[-2] = (ulonglong)&LAB_15b1cc311;
        puVar1[-3] = (ulonglong)&DAT_16196fd16;
        return uVar7;
      }
      uVar7 = FUN_162eb8c35();
      return uVar7;
    }
    puVar1[-3] = puVar1[-4];
    puVar1[-4] = puVar1[-4];
    puVar1[-3] = 0x1669e2bd4;
    return in_RAX;
  }
  uVar7 = thunk_FUN_15b36190b();
  return uVar7;
}



// FUNCTION 14d8a314a FUN_14d8a314a body=43 status=ok
// SIG undefined FUN_14d8a314a(void)

undefined8 FUN_14d8a314a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8a31ee FUN_14d8a31ee body=180 status=ok
// SIG undefined FUN_14d8a31ee(void)

void FUN_14d8a31ee(undefined8 param_1)

{
  (*(code *)&LAB_15b92e8e1)(param_1);
  return;
}



// FUNCTION 14d8a32a3 FUN_14d8a32a3 body=311 status=ok
// SIG undefined FUN_14d8a32a3(void)

void FUN_14d8a32a3(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_R15;
  
  lVar3 = FUN_15698558a(param_1);
  uVar1 = *(ulonglong *)(&stack0xfffffffffda20375 + lVar3);
  lVar2 = *(longlong *)(&stack0xfffffffffda20375 + lVar3);
  *(undefined8 *)(&stack0xfffffffffda20375 + lVar3) = 0;
  *(longlong *)(&stack0xfffffffffda20375 + lVar3) =
       lVar2 - *(longlong *)(&stack0xfffffffffda20375 + lVar3);
  *(ulonglong *)(&stack0xfffffffffda20375 + lVar3) =
       ~*(ulonglong *)(&stack0xfffffffffda20375 + lVar3);
  *(ulonglong *)(&stack0xfffffffffda20375 + lVar3) =
       *(ulonglong *)(&stack0xfffffffffda20375 + lVar3) | unaff_R15;
  *(ulonglong *)(&stack0xfffffffffda20375 + lVar3) =
       unaff_R15 & ~uVar1 | ~*(ulonglong *)(&stack0xfffffffffda20375 + lVar3);
  FUN_14da2e24c();
  return;
}



// FUNCTION 14d8a351d FUN_14d8a351d body=128 status=ok
// SIG undefined FUN_14d8a351d(void)

void FUN_14d8a351d(void)

{
  FUN_16179a9e6();
  return;
}



// FUNCTION 14d8a363c FUN_14d8a363c body=153 status=ok
// SIG undefined FUN_14d8a363c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a3669) */

void FUN_14d8a363c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined8 local_res8;
  
  FUN_16131b31c(param_1,(*(ulonglong *)(unaff_RDI + -0x68) & param_1) << 1,param_3,local_res8);
  return;
}



// FUNCTION 14d8a3724 FUN_14d8a3724 body=753 status=ok
// SIG undefined FUN_14d8a3724(void)

/* WARNING: Removing unreachable block (ram,0x00015755d8cf) */
/* WARNING: Removing unreachable block (ram,0x00015755d8df) */
/* WARNING: Removing unreachable block (ram,0x00015755d8f0) */
/* WARNING: Removing unreachable block (ram,0x00015755d994) */
/* WARNING: Removing unreachable block (ram,0x00015755d99a) */
/* WARNING: Removing unreachable block (ram,0x00015764a28b) */
/* WARNING: Removing unreachable block (ram,0x00015764a30e) */
/* WARNING: Removing unreachable block (ram,0x00015764a313) */
/* WARNING: Removing unreachable block (ram,0x00015764a319) */
/* WARNING: Removing unreachable block (ram,0x00015764a324) */
/* WARNING: Removing unreachable block (ram,0x00015764a3cd) */
/* WARNING: Removing unreachable block (ram,0x00015764a3d3) */
/* WARNING: Removing unreachable block (ram,0x00015764a3c8) */
/* WARNING: Removing unreachable block (ram,0x000156e4ffe4) */
/* WARNING: Removing unreachable block (ram,0x00014d8a3750) */
/* WARNING: Removing unreachable block (ram,0x00014d8a3756) */

undefined8 FUN_14d8a3724(void)

{
  byte *in_R9;
  
  *in_R9 = 0x5f;
  *in_R9 = ~*in_R9;
  *in_R9 = 0xa0 - *in_R9;
  return 0x18;
}



// FUNCTION 14d8a37de thunk_FUN_14d8a37e4 body=5 status=ok
// SIG undefined thunk_FUN_14d8a37e4(void)

void thunk_FUN_14d8a37e4(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x40);
  uVar2 = (~(~in_RAX & uVar1) + uVar1) - in_RAX;
  FUN_15b0f2545(*(ulonglong *)(unaff_R12 + -0x60) | in_RAX,uVar2,-(uVar2 | ~uVar1 | in_RAX));
  return;
}



// FUNCTION 14d8a37e4 FUN_14d8a37e4 body=120 status=ok
// SIG undefined FUN_14d8a37e4(void)

void FUN_14d8a37e4(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x40);
  uVar2 = (~(~in_RAX & uVar1) + uVar1) - in_RAX;
  FUN_15b0f2545(*(ulonglong *)(unaff_R12 + -0x60) | in_RAX,uVar2,-(uVar2 | ~uVar1 | in_RAX));
  return;
}



// FUNCTION 14d8a385d FUN_14d8a385d body=85 status=ok
// SIG undefined FUN_14d8a385d(void)

void FUN_14d8a385d(void)

{
  return;
}



// FUNCTION 14d8a3a4a FUN_14d8a3a4a body=41 status=ok
// SIG undefined FUN_14d8a3a4a(void)

void FUN_14d8a3a4a(void)

{
  return;
}



// FUNCTION 14d8a3af5 FUN_14d8a3af5 body=140 status=ok
// SIG undefined FUN_14d8a3af5(void)

void FUN_14d8a3af5(void)

{
  return;
}



// FUNCTION 14d8a3ca1 FUN_14d8a3ca1 body=146 status=ok
// SIG undefined FUN_14d8a3ca1(void)

void FUN_14d8a3ca1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_16486db77(param_1,FUN_16486db77,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14d8a3d35 FUN_14d8a3d35 body=30 status=ok
// SIG undefined FUN_14d8a3d35(void)

void FUN_14d8a3d35(void)

{
  return;
}



// FUNCTION 14d8a3f0d FUN_14d8a3f0d body=147 status=ok
// SIG undefined FUN_14d8a3f0d(void)

void FUN_14d8a3f0d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - *(longlong *)(unaff_R12 + -0x40);
  (*(code *)&LAB_166522268)(uVar1,in_RAX & uVar1,param_3,&LAB_166522268);
  return;
}



// FUNCTION 14d8a40da FUN_14d8a40da body=11 status=ok
// SIG undefined FUN_14d8a40da(void)

void FUN_14d8a40da(void)

{
  return;
}



// FUNCTION 14d8a418a FUN_14d8a418a body=125 status=ok
// SIG undefined FUN_14d8a418a(void)

void FUN_14d8a418a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  
  (*(code *)0x15af7ff2b)(param_1,0x15af7ff2b,param_3,uStackX_8);
  return;
}



// FUNCTION 14d8a42a8 FUN_14d8a42a8 body=130 status=ok
// SIG undefined FUN_14d8a42a8(void)

void FUN_14d8a42a8(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = (-2 - (~param_1 | 0xffffffffffffffffU - unaff_R12)) - ~(0xffffffffffffffffU - unaff_R12);
  FUN_16627e8ec((char)param_1,(uVar1 - (param_2 | uVar1)) + param_2 ^ 0xffffffffffffffff,
                FUN_16627e8ec);
  return;
}



// FUNCTION 14d8a4475 FUN_14d8a4475 body=109 status=ok
// SIG undefined FUN_14d8a4475(void)

void FUN_14d8a4475(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d85d504(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8a4525 FUN_14d8a4525 body=344 status=ok
// SIG undefined FUN_14d8a4525(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a45b5) */

undefined8
FUN_14d8a4525(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined4 param_7)

{
  undefined4 unaff_R15D;
  
  *(undefined4 *)((longlong)&param_5 + param_3) = unaff_R15D;
  *(undefined4 *)(&stack0x00000048 + param_6) = param_7;
  return 0xf23b65;
}



// FUNCTION 14d8a4714 FUN_14d8a4714 body=180 status=ok
// SIG undefined FUN_14d8a4714(void)

void FUN_14d8a4714(void)

{
  return;
}



// FUNCTION 14d8a4c16 FUN_14d8a4c16 body=225 status=ok
// SIG undefined FUN_14d8a4c16(void)

void FUN_14d8a4c16(void)

{
  FUN_15b39b7eb();
  return;
}



// FUNCTION 14d8a4dbe FUN_14d8a4dbe body=133 status=ok
// SIG undefined FUN_14d8a4dbe(void)

void FUN_14d8a4dbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_156f7f2bd(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8a4e44 FUN_14d8a4e44 body=141 status=ok
// SIG undefined FUN_14d8a4e44(void)

void FUN_14d8a4e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x16568c241)(param_1,param_2,0x16568c241,param_4);
  return;
}



// FUNCTION 14d8a4ff2 FUN_14d8a4ff2 body=366 status=ok
// SIG undefined FUN_14d8a4ff2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8a4ff2(void)

{
  FUN_15b8a34e7();
  FUN_162415062();
  return;
}



// FUNCTION 14d8a528e FUN_14d8a528e body=305 status=ok
// SIG undefined FUN_14d8a528e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a53b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8a53bb) */

void FUN_14d8a528e(ulonglong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined1 *puVar5;
  longlong unaff_RBP;
  longlong lVar6;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong lStackX_8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStackX_20 [8];
  
  lVar6 = unaff_RBP - (param_1 ^ lStackX_8 + 0xff5fdc1U);
  puVar5 = auStackX_20;
  if (lVar6 == 0) {
    puVar5 = &stack0x00000028;
  }
  *(undefined8 *)(puVar5 + -8) = in_RAX;
  *(undefined8 *)(puVar5 + -0x10) = unaff_RBX;
  *(undefined8 *)(puVar5 + -0x18) = local_res18;
  lVar3 = *(longlong *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x18) = local_res10;
  *(longlong *)(puVar5 + -0x20) = lVar6 + 0x18eedb99;
  uVar2 = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x18) = 0x14d8a5316;
  FUN_165e6c5f2(lVar3,uVar2);
  uVar4 = *(ulonglong *)
           (unaff_R13 +
           lVar3 + ~(~(unaff_RDI & 0xffffffff889b789c) & (unaff_RDI | 0xffffffff889b789c)));
  uVar7 = unaff_R15 ^ 0xffffffffffffffff | uVar4;
  uVar9 = uVar4 ^ 0xffffffffffffffff | unaff_R15;
  puVar1 = (ulonglong *)(puVar5 + -0x18);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar4 = *puVar1;
  uVar8 = 0xffffffffffffffff - ((~unaff_R15 + uVar4) - (~unaff_R15 & uVar4) & (~uVar4 | unaff_R15));
  *puVar1 = uVar8;
  *(undefined4 *)puVar1 = 0x6a53ebd0;
  *(undefined4 *)(puVar5 + -0x14) = 0;
  uVar4 = (*(longlong *)(unaff_R13 + -0x48) + -1) - ~(*puVar1 ^ 0x6a53ebd0);
  *puVar1 = uVar8;
  *(undefined4 *)puVar1 = 0xc0adbfb9;
  *(undefined4 *)(puVar5 + -0x14) = 0;
  FUN_162cffa56(uVar4,uVar4 | unaff_R15,~((uVar7 - 1) - ~(uVar9 - (uVar7 | uVar9))));
  return;
}



// FUNCTION 14d8a53c1 FUN_14d8a53c1 body=163 status=ok
// SIG undefined FUN_14d8a53c1(void)

void FUN_14d8a53c1(undefined8 param_1)

{
  ushort *in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | 0x100;
  *in_RAX = -*in_RAX;
  *in_RAX = *in_RAX - 1;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 0x1621dd92e;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  FUN_1621dd8fb(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d8a5464 FUN_14d8a5464 body=135 status=ok
// SIG undefined FUN_14d8a5464(void)

void FUN_14d8a5464(void)

{
  return;
}



// FUNCTION 14d8a562e FUN_14d8a562e body=186 status=ok
// SIG undefined FUN_14d8a562e(void)

void FUN_14d8a562e(void)

{
  return;
}



// FUNCTION 14d8a5767 FUN_14d8a5767 body=142 status=ok
// SIG undefined FUN_14d8a5767(void)

void FUN_14d8a5767(undefined8 param_1)

{
  FUN_164879dce(param_1);
  return;
}



// FUNCTION 14d8a5934 FUN_14d8a5934 body=169 status=ok
// SIG undefined FUN_14d8a5934(void)

void FUN_14d8a5934(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1622d32e3(*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,param_2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d8a59df FUN_14d8a59df body=168 status=ok
// SIG undefined FUN_14d8a59df(void)

void FUN_14d8a59df(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1610c3f34(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d8a5a89 FUN_14d8a5a89 body=80 status=ok
// SIG undefined FUN_14d8a5a89(void)

void FUN_14d8a5a89(void)

{
  return;
}



// FUNCTION 14d8a5ba7 FUN_14d8a5ba7 body=476 status=ok
// SIG undefined FUN_14d8a5ba7(void)

/* WARNING: Removing unreachable block (ram,0x0001614df780) */
/* WARNING: Removing unreachable block (ram,0x0001614df786) */
/* WARNING: Removing unreachable block (ram,0x0001615520d7) */
/* WARNING: Removing unreachable block (ram,0x00016155220f) */
/* WARNING: Removing unreachable block (ram,0x000161552214) */
/* WARNING: Removing unreachable block (ram,0x00016155221f) */
/* WARNING: Removing unreachable block (ram,0x00016155221a) */
/* WARNING: Removing unreachable block (ram,0x0001614df663) */
/* WARNING: Removing unreachable block (ram,0x000162d60e9f) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5c1e) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5c24) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5cd7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5cdc) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5ce2) */
/* WARNING: Removing unreachable block (ram,0x000160e35497) */
/* WARNING: Removing unreachable block (ram,0x000160e35539) */
/* WARNING: Removing unreachable block (ram,0x000160e3553e) */
/* WARNING: Removing unreachable block (ram,0x000160e35544) */
/* WARNING: Removing unreachable block (ram,0x000160e35549) */
/* WARNING: Removing unreachable block (ram,0x0001653ef785) */

undefined8 FUN_14d8a5ba7(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1615520d7();
  return uVar1;
}



// FUNCTION 14d8a5ce2 FUN_14d8a5ce2 body=151 status=ok
// SIG undefined FUN_14d8a5ce2(void)

void FUN_14d8a5ce2(void)

{
  FUN_166b9b475();
  return;
}



// FUNCTION 14d8a5e19 FUN_14d8a5e19 body=144 status=ok
// SIG undefined FUN_14d8a5e19(void)

void FUN_14d8a5e19(void)

{
  FUN_16656e046();
  return;
}



// FUNCTION 14d8a5eab FUN_14d8a5eab body=194 status=ok
// SIG undefined FUN_14d8a5eab(void)

/* WARNING: Removing unreachable block (ram,0x0001652ba0a0) */
/* WARNING: Removing unreachable block (ram,0x0001652ba0a6) */
/* WARNING: Removing unreachable block (ram,0x0001650ac35d) */
/* WARNING: Removing unreachable block (ram,0x00014d8a5f1f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8a5eab(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBX;
  undefined8 in_stack_00000008;
  
  if (-1 < *(longlong *)(param_1 + -0x40)) {
    FUN_166a7e602(~(*(ulonglong *)(param_1 + -0xa0) & unaff_RBX) &
                  (*(ulonglong *)(param_1 + -0xa0) | unaff_RBX),param_2,param_3,in_stack_00000008,
                  *(undefined8 *)(param_1 + -0x30));
    FUN_165aeebe4();
    return;
  }
  FUN_1652ba024();
  return;
}



// FUNCTION 14d8a5fcc FUN_14d8a5fcc body=189 status=ok
// SIG undefined FUN_14d8a5fcc(void)

undefined8 FUN_14d8a5fcc(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x60);
}



// FUNCTION 14d8a613d FUN_14d8a613d body=160 status=ok
// SIG undefined FUN_14d8a613d(void)

void FUN_14d8a613d(void)

{
  return;
}



// FUNCTION 14d8a61de thunk_FUN_14d8a61e4 body=5 status=ok
// SIG undefined thunk_FUN_14d8a61e4(void)

void thunk_FUN_14d8a61e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_14db14058(unaff_retaddr,uStackX_8,param_3,FUN_14db14058);
  return;
}



// FUNCTION 14d8a61e4 FUN_14d8a61e4 body=119 status=ok
// SIG undefined FUN_14d8a61e4(void)

void FUN_14d8a61e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_14db14058(unaff_retaddr,local_res8,param_3,FUN_14db14058);
  return;
}



// FUNCTION 14d8a625c FUN_14d8a625c body=157 status=ok
// SIG undefined FUN_14d8a625c(void)

void FUN_14d8a625c(undefined8 param_1,undefined8 param_2)

{
  FUN_1652fdbd7(param_1,param_2);
  FUN_14d8a62fd();
  return;
}



// FUNCTION 14d8a62fd FUN_14d8a62fd body=222 status=ok
// SIG undefined FUN_14d8a62fd(void)

void FUN_14d8a62fd(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong *puVar2;
  undefined8 in_stack_00000008;
  
  puVar2 = (ulonglong *)(unaff_RBP ^ param_3);
  *puVar2 = 0x2f8fe037;
  uVar1 = *puVar2;
  *puVar2 = *puVar2 | 0xffffffffd0701fc8;
  *puVar2 = ~(~(uVar1 & 0xffffffffd0701fc8) & *puVar2);
  *puVar2 = *puVar2 + 0x4ecba179;
  uVar1 = *puVar2;
  *puVar2 = *puVar2 | 0xffffffffb1345e86;
  *puVar2 = ~(~(uVar1 & 0xffffffffb1345e86) & *puVar2);
  FUN_14df7abfc(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d8a6445 FUN_14d8a6445 body=79 status=ok
// SIG undefined FUN_14d8a6445(void)

void FUN_14d8a6445(void)

{
  longlong unaff_RBP;
  
  *(undefined **)(unaff_RBP + -8) = &DAT_14d8a6496;
  return;
}



// FUNCTION 14d8a64d5 FUN_14d8a64d5 body=301 status=ok
// SIG undefined FUN_14d8a64d5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a6559) */
/* WARNING: Removing unreachable block (ram,0x00014d8a655f) */
/* WARNING: Removing unreachable block (ram,0x00014d8a656a) */
/* WARNING: Removing unreachable block (ram,0x00014d8a65e6) */
/* WARNING: Removing unreachable block (ram,0x00014d8a65ec) */
/* WARNING: Removing unreachable block (ram,0x000161279427) */

void FUN_14d8a64d5(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  puVar2 = (undefined8 *)~((~param_1 | param_5) & (~param_5 | param_1));
                    /* WARNING: Ignoring partial resolution of indirect */
  puVar2[-1] = param_2;
  puVar2[-2] = in_stack_00000010;
  uVar1 = 0x17272595b;
  puVar2[-2] = puVar2[-2];
  puVar2[-3] = FUN_16176b601;
  FUN_1666f16e3(local_res18,0x17272595b,param_3,param_4);
  *puVar2 = param_3;
  puVar2[-1] = uVar1;
  puVar2[1] = 0x2cb6eea2;
  puVar2[1] = puVar2[1] ^ 0x2cb6eea2;
  puVar2[1] = FUN_1666f16e3 + puVar2[1];
  FUN_14d7c13ca();
  return;
}



// FUNCTION 14d8a667e FUN_14d8a667e body=182 status=ok
// SIG undefined FUN_14d8a667e(void)

/* WARNING: Instruction at (ram,0x00014d8a66ae) overlaps instruction at (ram,0x00014d8a66ad)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8a67d0) */

void FUN_14d8a667e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  longlong lVar10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  undefined1 local_res8 [32];
  
  bVar4 = (in_NT & 1) != 0;
  bVar5 = (in_IF & 1) != 0;
  bVar6 = (in_TF & 1) != 0;
  bVar7 = (in_AF & 1) != 0;
  bVar8 = (in_ID & 1) != 0;
  bVar9 = (in_AC & 1) != 0;
  uVar1 = *(ulonglong *)(&stack0xfffffffff390ceec + param_1);
  bVar11 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
  *(ulonglong *)(&stack0xfffffffff390cee4 + param_1) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)((longlong)uVar1 < 0) * 0x80 | (ulonglong)(uVar1 == 0) * 0x40 |
       (ulonglong)bVar7 * 0x10 | (ulonglong)bVar11 * 4 | (ulonglong)bVar8 * 0x200000 |
       (ulonglong)bVar9 * 0x40000;
  *(ulonglong *)(&stack0xfffffffff390cedc + param_1) =
       (ulonglong)bVar4 * 0x4000 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)((longlong)uVar1 < 0) * 0x80 | (ulonglong)(uVar1 == 0) * 0x40 |
       (ulonglong)bVar7 * 0x10 | (ulonglong)bVar11 * 4 | (ulonglong)bVar8 * 0x200000 |
       (ulonglong)bVar9 * 0x40000;
  *(int *)(&stack0xfffffffff390cedc + param_1) =
       *(int *)(&stack0xfffffffff390cedc + param_1) << 0x1f;
  *(uint *)(&stack0xfffffffff390cedc + param_1) =
       *(uint *)(&stack0xfffffffff390cedc + param_1) >> 0x1f;
  if (*(int *)(&stack0xfffffffff390cedc + param_1) == 0) {
    FUN_157864775();
    return;
  }
  if ((*(ulonglong *)(&stack0xfffffffff390cee4 + param_1) & 1) == 0 &&
      (*(ulonglong *)(&stack0xfffffffff390cee4 + param_1) & 0x40) == 0) {
    uVar3 = *(undefined8 *)(&stack0xfffffffff390cef4 + param_1);
    *(undefined8 *)(&stack0xfffffffff390cefc + param_1) = unaff_RDI;
    *(ulonglong *)(&stack0xfffffffff390cf14 + param_1) =
         *(ulonglong *)(&stack0xfffffffff390cf14 + param_1) & uVar1;
    *(ulonglong *)(&stack0xfffffffff390cefc + param_1) = uVar1;
    *(undefined8 *)(&stack0xfffffffff390cef4 + param_1) = param_4;
    *(undefined8 *)(&stack0xfffffffff390ceec + param_1) = unaff_R14;
    *(longlong *)(&stack0xfffffffff390cf14 + param_1) =
         *(longlong *)(&stack0xfffffffff390cf14 + param_1) << 1;
    uVar2 = *(undefined8 *)(&stack0xfffffffff390cefc + param_1);
    *(undefined8 *)(&stack0xfffffffff390cefc + param_1) = unaff_R15;
    lVar10 = (uVar1 - (in_R11 - in_R10)) - *(longlong *)(&stack0xfffffffff390cf14 + param_1);
    *(longlong *)(&stack0xfffffffff390cf14 + param_1) = lVar10;
    *(undefined8 *)(&stack0xfffffffff390cf04 + param_1) = uVar3;
    if (-1 < lVar10) {
      FUN_1619b3965(uVar2,local_res8,param_3,*(undefined8 *)(&stack0xfffffffff390cef4 + param_1));
      return;
    }
    FUN_1619b3965(uVar2,local_res8,param_3,*(undefined8 *)(&stack0xfffffffff390cef4 + param_1));
    return;
  }
  FUN_157864775();
  return;
}



// FUNCTION 14d8a673e FUN_14d8a673e body=145 status=ok
// SIG undefined FUN_14d8a673e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a67d0) */

void FUN_14d8a673e(ulonglong param_1)

{
  longlong in_R10;
  longlong in_R11;
  ulonglong in_stack_00000028;
  
  if (-1 < (longlong)((param_1 - (in_R11 - in_R10)) + (in_stack_00000028 & param_1) * -2)) {
    FUN_1619b3965();
    return;
  }
  FUN_1619b3965();
  return;
}



// FUNCTION 14d8a67d0 FUN_14d8a67d0 body=65 status=ok
// SIG undefined FUN_14d8a67d0(void)

void FUN_14d8a67d0(void)

{
  return;
}



// FUNCTION 14d8a6853 FUN_14d8a6853 body=60 status=ok
// SIG undefined FUN_14d8a6853(void)

void FUN_14d8a6853(void)

{
  return;
}



// FUNCTION 14d8a69b5 FUN_14d8a69b5 body=60 status=ok
// SIG undefined FUN_14d8a69b5(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8a69b5(undefined8 param_1,longlong param_2)

{
  longlong local_res10;
  
  *(char *)(param_2 + 0x420bf7b1) =
       (*(char *)(param_2 + 0x420bf7b1) - (char)param_2) - (local_res10 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8a6b9f FUN_14d8a6b9f body=198 status=ok
// SIG undefined FUN_14d8a6b9f(void)

undefined8 FUN_14d8a6b9f(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x88);
}



// FUNCTION 14d8a6d71 FUN_14d8a6d71 body=474 status=ok
// SIG undefined FUN_14d8a6d71(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a6d99) */
/* WARNING: Removing unreachable block (ram,0x00014d8a6dff) */
/* WARNING: Removing unreachable block (ram,0x00014d8a6e05) */
/* WARNING: Removing unreachable block (ram,0x00014d8a6e0a) */
/* WARNING: Removing unreachable block (ram,0x0001617c61db) */
/* WARNING: Removing unreachable block (ram,0x00014d8a6e97) */
/* WARNING: Removing unreachable block (ram,0x00014d8a6e9d) */

void FUN_14d8a6d71(longlong param_1,byte param_2,undefined8 param_3,byte param_4)

{
  ushort in_AX;
  longlong unaff_RDI;
  
  if ((in_AX & 0x8000) == 0) {
    FUN_166cd4e79();
    return;
  }
  FUN_1628bd959(param_1,param_2 + param_4 + (param_2 & param_4) * -2,
                *(longlong *)(unaff_RDI + -0x30) + param_1);
  return;
}



// FUNCTION 14d8a6e9d FUN_14d8a6e9d body=118 status=ok
// SIG undefined FUN_14d8a6e9d(void)

void FUN_14d8a6e9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint in_R11D;
  
  FUN_160febb3a(param_1,-1 - (~in_R11D | param_4 ^ 0xffffffff));
  return;
}



// FUNCTION 14d8a6fa3 FUN_14d8a6fa3 body=172 status=ok
// SIG undefined FUN_14d8a6fa3(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a7050) */

undefined8 FUN_14d8a6fa3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined8 local_res18;
  
  *(undefined8 *)(&stack0x4ac9437e + -(~unaff_R12 + 2)) = unaff_RSI;
  local_res18 = *(undefined8 *)(unaff_R13 + -8);
  local_res8 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
                (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15));
  local_res10 = ~(*(ulonglong *)(unaff_R13 + -0x98) & unaff_R15);
  uVar1 = FUN_156c67c7b(param_1,param_2,param_3,&local_res8);
  return uVar1;
}



// FUNCTION 14d8a7050 FUN_14d8a7050 body=23 status=ok
// SIG undefined FUN_14d8a7050(void)

void FUN_14d8a7050(void)

{
  return;
}



// FUNCTION 14d8a70ee FUN_14d8a70ee body=105 status=ok
// SIG undefined FUN_14d8a70ee(void)

undefined8 FUN_14d8a70ee(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RDI;
  *(undefined **)(local_res18 + -0x20) = &DAT_14d8a7163;
  return in_RAX;
}



// FUNCTION 14d8a7165 FUN_14d8a7165 body=146 status=ok
// SIG undefined FUN_14d8a7165(void)

ulonglong FUN_14d8a7165(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return ~-*(longlong *)(unaff_RDI + -0x88) + 1U | param_1;
}



// FUNCTION 14d8a71f8 FUN_14d8a71f8 body=111 status=ok
// SIG undefined FUN_14d8a71f8(void)

void FUN_14d8a71f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBX;
  
  thunk_FUN_15b0572f1(param_1,param_2,param_3,*(undefined8 *)(&stack0x4f23ac98 + unaff_RBX));
  return;
}



// FUNCTION 14d8a7528 FUN_14d8a7528 body=413 status=ok
// SIG undefined FUN_14d8a7528(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a75a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a7621) */
/* WARNING: Removing unreachable block (ram,0x00014d8a762c) */
/* WARNING: Removing unreachable block (ram,0x00014d8a7638) */
/* WARNING: Removing unreachable block (ram,0x00016265301a) */
/* WARNING: Removing unreachable block (ram,0x0001626530b3) */
/* WARNING: Removing unreachable block (ram,0x0001626530b9) */
/* WARNING: Removing unreachable block (ram,0x0001626530ca) */
/* WARNING: Removing unreachable block (ram,0x0001626530d5) */

void FUN_14d8a7528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_15ba45906(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8a7768 FUN_14d8a7768 body=149 status=ok
// SIG undefined FUN_14d8a7768(void)

undefined8 FUN_14d8a7768(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8a7904 FUN_14d8a7904 body=149 status=ok
// SIG undefined FUN_14d8a7904(void)

void FUN_14d8a7904(ulonglong param_1)

{
  undefined8 local_res10;
  
  FUN_1662479af(local_res10 + param_1 + (local_res10 & param_1) * -2);
  return;
}



// FUNCTION 14d8a7a17 FUN_14d8a7a17 body=434 status=ok
// SIG undefined FUN_14d8a7a17(void)

void FUN_14d8a7a17(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  ulonglong local_res10;
  ulonglong in_stack_00000020;
  
  uVar2 = 0x18;
  FUN_161c88a4b(0x18,param_2,param_3,param_4,(in_stack_00000020 & in_RAX) << 1);
  uVar3 = ~(~*(ulonglong *)(unaff_RDI + -0x60) + 2);
  uVar1 = FUN_157500daf();
  uVar1 = ~(~(uVar2 & uVar1 ^ 0xffffffffffffffff) | ~(~(uVar1 & 8) + uVar1 + 9));
  FUN_165de75db(((uVar1 << 0x1b | uVar1 >> 0x25 | 0x7ffffff) - 0x7ffffff ^ uVar1 >> 0x25) * param_2
                + -0x7a1435883d4d519d,FUN_165de75db,uVar3,local_res10 ^ in_RAX);
  return;
}



// FUNCTION 14d8a7db6 FUN_14d8a7db6 body=182 status=ok
// SIG undefined FUN_14d8a7db6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a7e6c) */

void FUN_14d8a7db6(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15afb6375(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  FUN_16290a6f3();
  return;
}



// FUNCTION 14d8a7e6c FUN_14d8a7e6c body=118 status=ok
// SIG undefined FUN_14d8a7e6c(void)

void FUN_14d8a7e6c(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  longlong in_RAX;
  ulonglong unaff_RBX;
  undefined8 unaff_R13;
  undefined8 local_res10 [2];
  ushort local_res20;
  
  *(undefined8 *)((longlong)local_res10 + (unaff_RBX ^ 0x29f9939a)) = unaff_R13;
  param_5 = param_5 ^ param_1;
  local_res20 = local_res20 & 0xfeff;
  puVar1 = (ulonglong *)(param_5 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_3;
  *(ulonglong *)(param_5 - 0x10) = *puVar1;
  *puVar1 = (ulonglong)&LAB_14d8a7ef4;
                    /* WARNING: Could not recover jumptable at 0x00014d8a7edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_RAX + 0xe0))(local_res10[1],param_2,*(undefined8 *)(param_5 - 0x10));
  return;
}



// FUNCTION 14d8a7f31 FUN_14d8a7f31 body=336 status=ok
// SIG undefined FUN_14d8a7f31(void)

void FUN_14d8a7f31(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_162cee1fe(param_1,0x7af13000,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                 (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)),
                0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14d8a811e FUN_14d8a811e body=346 status=ok
// SIG undefined FUN_14d8a811e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a81b6) */
/* WARNING: Removing unreachable block (ram,0x00014d8a81c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8a81bc) */

void FUN_14d8a811e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  ulonglong uStackX_10;
  
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15;
  lVar4 = (~uVar5 | 0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0xa0) & unaff_R15)) + uVar5;
  puVar3 = (undefined8 *)~((~unaff_R15 | uStackX_10) & (~uStackX_10 | unaff_R15));
  puVar3[-1] = unaff_RDI;
  puVar3[-2] = 0x161d3d9ed;
  uVar2 = FUN_164a6255b(param_1,param_2,param_3);
  uVar5 = *(ulonglong *)(lVar4 + 0x11);
  puVar3[-2] = FUN_164a6255b;
  uVar1 = puVar3[-2];
  *(ulonglong *)(lVar4 + 0x11) = (-~local_res8 - (~(~local_res8 | uVar5) + 2)) + 1;
  puVar3[1] = uVar1;
  *puVar3 = in_R11;
  puVar3[-1] = uVar2;
  uVar5 = puVar3[4];
  puVar3[4] = ~puVar3[4];
  puVar3[4] = puVar3[4] | uVar2;
  puVar3[4] = ~((~puVar3[-1] | uVar5) & puVar3[4]);
  puVar3[1] = unaff_RBP;
  *puVar3 = unaff_RBP;
  puVar3[1] = &LAB_161d3da84;
  FUN_160e048de();
  return;
}



// FUNCTION 14d8a831a FUN_14d8a831a body=701 status=ok
// SIG undefined FUN_14d8a831a(void)

/* WARNING: Removing unreachable block (ram,0x000157547ca4) */
/* WARNING: Removing unreachable block (ram,0x00014d8a83d0) */
/* WARNING: Removing unreachable block (ram,0x00014d8a8443) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8a831a(void)

{
  longlong in_R9;
  
  if (in_R9 != 0x128f4c) {
    FUN_15725a992();
    return;
  }
  return;
}



// FUNCTION 14d8a8531 FUN_14d8a8531 body=171 status=ok
// SIG undefined FUN_14d8a8531(void)

void FUN_14d8a8531(void)

{
  return;
}



// FUNCTION 14d8a85e3 FUN_14d8a85e3 body=156 status=ok
// SIG undefined FUN_14d8a85e3(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a8681) */
/* WARNING: Removing unreachable block (ram,0x00014d8a86ff) */
/* WARNING: Removing unreachable block (ram,0x00014d8a86fa) */
/* WARNING: Removing unreachable block (ram,0x00015b10d0ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8a8705) */

void FUN_14d8a85e3(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x30)) {
    FUN_1650ef3d6(param_1 ^ unaff_R15,
                  (*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
                  (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2,0x6793ac9a);
    return;
  }
  FUN_14db4236d();
  return;
}



// FUNCTION 14d8a8681 FUN_14d8a8681 body=241 status=ok
// SIG undefined FUN_14d8a8681(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a8705) */

void FUN_14d8a8681(void)

{
  FUN_156ee75fe();
  return;
}



// FUNCTION 14d8a877a FUN_14d8a877a body=107 status=ok
// SIG undefined FUN_14d8a877a(void)

void FUN_14d8a877a(void)

{
  return;
}



// FUNCTION 14d8a8841 FUN_14d8a8841 body=168 status=ok
// SIG undefined FUN_14d8a8841(void)

void FUN_14d8a8841(void)

{
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = in_R9;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(&LAB_15afcbe2f + *(longlong *)(local_res18 + -8));
  FUN_15afcbdf9();
  return;
}



// FUNCTION 14d8a8ad2 FUN_14d8a8ad2 body=127 status=ok
// SIG undefined FUN_14d8a8ad2(void)

void FUN_14d8a8ad2(void)

{
  FUN_1663b2aa4();
  return;
}



// FUNCTION 14d8a8be7 FUN_14d8a8be7 body=140 status=ok
// SIG undefined FUN_14d8a8be7(void)

void FUN_14d8a8be7(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  lVar1 = unaff_RDI - local_res20;
  *(undefined8 *)(lVar1 + -8) = unaff_RSI;
  *(undefined8 *)(lVar1 + -0x10) = param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2;
  *(undefined8 *)(lVar1 + -0x20) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = unaff_R13;
  *(undefined **)(lVar1 + -8) = &DAT_14dd3394e;
  *(undefined **)(lVar1 + -0x18) = &DAT_14d8a8c75;
  return;
}



// FUNCTION 14d8a8c86 FUN_14d8a8c86 body=414 status=ok
// SIG undefined FUN_14d8a8c86(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8a8dad) */
/* WARNING: Removing unreachable block (ram,0x00014d8a8db3) */
/* WARNING: Removing unreachable block (ram,0x00014d8a8d1e) */

void FUN_14d8a8c86(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ushort local_res20;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *(longlong *)(param_3 + 8) = -*(longlong *)(param_3 + 8);
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + -1;
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) | unaff_R15;
  *(ulonglong *)(param_3 + 8) =
       -1 - ((0xffffffffffffffffU - param_1 | uVar1) & *(ulonglong *)(param_3 + 8));
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = unaff_retaddr;
  if ((local_res20 & 1) != 0) {
    *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
    *(undefined8 *)(param_5 - 0x18) = in_R10;
    *(undefined8 *)(param_5 - 0x20) = in_RAX;
    *(undefined8 *)(param_5 - 0x28) = unaff_RDI;
    *(undefined1 **)(param_5 - 8) = &LAB_1575be97d;
    *(undefined8 *)(param_5 - 0x18) = *(undefined8 *)(param_5 - 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_1575be91c();
  return;
}



// FUNCTION 14d8a8db3 thunk_FUN_14d8a8db9 body=5 status=ok
// SIG undefined thunk_FUN_14d8a8db9(void)

void thunk_FUN_14d8a8db9(void)

{
  FUN_156e37510();
  return;
}



// FUNCTION 14d8a8db9 FUN_14d8a8db9 body=130 status=ok
// SIG undefined FUN_14d8a8db9(void)

void FUN_14d8a8db9(void)

{
  FUN_156e37510();
  return;
}



// FUNCTION 14d8a8ee8 FUN_14d8a8ee8 body=285 status=ok
// SIG undefined FUN_14d8a8ee8(void)

undefined8 FUN_14d8a8ee8(void)

{
  undefined8 uVar1;
  uint unaff_EDI;
  int in_R9D;
  longlong unaff_R13;
  
  uVar1 = FUN_156797d69();
  *(ulonglong *)(unaff_R13 + 0x10) =
       (ulonglong)((0xffffffffU - in_R9D | unaff_EDI) + in_R9D + 1) - 1;
  return uVar1;
}



// FUNCTION 14d8a900b FUN_14d8a900b body=124 status=ok
// SIG undefined FUN_14d8a900b(void)

void FUN_14d8a900b(void)

{
  thunk_FUN_1663ae11c();
  return;
}



// FUNCTION 14d8a9089 FUN_14d8a9089 body=191 status=ok
// SIG undefined FUN_14d8a9089(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a90a8) */
/* WARNING: Removing unreachable block (ram,0x00016213ac0a) */
/* WARNING: Removing unreachable block (ram,0x00014d8a90fc) */
/* WARNING: Removing unreachable block (ram,0x00014d8a9146) */
/* WARNING: Removing unreachable block (ram,0x00014d8a914b) */
/* WARNING: Removing unreachable block (ram,0x000160dcd6b4) */
/* WARNING: Removing unreachable block (ram,0x000160dcd61d) */
/* WARNING: Removing unreachable block (ram,0x000160dcd629) */
/* WARNING: Removing unreachable block (ram,0x000160dcd6a9) */
/* WARNING: Removing unreachable block (ram,0x000160dcd6ae) */
/* WARNING: Removing unreachable block (ram,0x000156531fac) */
/* WARNING: Removing unreachable block (ram,0x0001565320e3) */
/* WARNING: Removing unreachable block (ram,0x0001565320e9) */
/* WARNING: Removing unreachable block (ram,0x000165c8ea50) */
/* WARNING: Removing unreachable block (ram,0x0001577f13a1) */
/* WARNING: Removing unreachable block (ram,0x0001577f1419) */
/* WARNING: Removing unreachable block (ram,0x0001577f141f) */
/* WARNING: Removing unreachable block (ram,0x000165794c0b) */
/* WARNING: Removing unreachable block (ram,0x0001577f142c) */
/* WARNING: Removing unreachable block (ram,0x00016213ac3c) */
/* WARNING: Removing unreachable block (ram,0x00016213ac3f) */

void FUN_14d8a9089(void)

{
  undefined1 *in_RAX;
  bool in_ZF;
  
  if (in_ZF) {
    *in_RAX = 0x2c;
    FUN_1577f13a1();
    return;
  }
  FUN_16213ac0a();
  return;
}



// FUNCTION 14d8a914b FUN_14d8a914b body=52 status=ok
// SIG undefined FUN_14d8a914b(void)

void FUN_14d8a914b(undefined8 param_1)

{
  FUN_156a4c4d6(param_1,FUN_156a4c4d6);
  return;
}



// FUNCTION 14d8a917f FUN_14d8a917f body=117 status=ok
// SIG undefined FUN_14d8a917f(void)

void FUN_14d8a917f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_15721d90f(param_1,unaff_retaddr,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d8a91f4 FUN_14d8a91f4 body=158 status=ok
// SIG undefined FUN_14d8a91f4(void)

void FUN_14d8a91f4(void)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x16502f5c8)
            (*(ulonglong *)(unaff_R13 + ~unaff_RDI) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) & unaff_R15);
  return;
}



// FUNCTION 14d8a9298 FUN_14d8a9298 body=303 status=ok
// SIG undefined FUN_14d8a9298(void)

/* WARNING: Removing unreachable block (ram,0x00014d8a9333) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8a9298(void)

{
  return;
}



// FUNCTION 14d8a93c2 FUN_14d8a93c2 body=66 status=ok
// SIG undefined FUN_14d8a93c2(void)

undefined8 FUN_14d8a93c2(void)

{
  undefined8 in_R11;
  
  FUN_162273d37();
  return in_R11;
}



// FUNCTION 14d8a94e0 FUN_14d8a94e0 body=153 status=ok
// SIG undefined FUN_14d8a94e0(void)

void FUN_14d8a94e0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16486b9c2(param_1,~param_1 & *(ulonglong *)(unaff_RDI + -0x40) | param_1,
                *(ulonglong *)(unaff_RDI + -0x40),FUN_16486b9c2);
  return;
}



// FUNCTION 14d8a957f FUN_14d8a957f body=305 status=ok
// SIG undefined FUN_14d8a957f(void)

/* WARNING: Instruction at (ram,0x00014d8a9678) overlaps instruction at (ram,0x00014d8a9677)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8a9674) */

undefined8 FUN_14d8a957f(void)

{
  FUN_157069e9d();
  return 0x576dabc6;
}



// FUNCTION 14d8a96b6 FUN_14d8a96b6 body=172 status=ok
// SIG undefined FUN_14d8a96b6(void)

void FUN_14d8a96b6(void)

{
  FUN_162a4cf38();
  FUN_1649c49e0();
  return;
}



// FUNCTION 14d8a9763 FUN_14d8a9763 body=151 status=ok
// SIG undefined FUN_14d8a9763(void)

void FUN_14d8a9763(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_1649c49e0((char)param_1,*(undefined8 *)(unaff_RDI + -0x68),
                ((param_1 - 1) - ~param_2) + (param_3 & param_1) * -2);
  return;
}



// FUNCTION 14d8a97fb FUN_14d8a97fb body=688 status=ok
// SIG undefined FUN_14d8a97fb(void)

/* WARNING: Removing unreachable block (ram,0x000165cf5ac3) */
/* WARNING: Removing unreachable block (ram,0x00014d8a9878) */
/* WARNING: Removing unreachable block (ram,0x00014d8a987e) */
/* WARNING: Removing unreachable block (ram,0x00014d8a9900) */
/* WARNING: Removing unreachable block (ram,0x00014d8a9906) */
/* WARNING: Removing unreachable block (ram,0x000165cf5a36) */
/* WARNING: Removing unreachable block (ram,0x000165cf5abe) */
/* WARNING: Removing unreachable block (ram,0x000165cf5ac7) */
/* WARNING: Removing unreachable block (ram,0x000165cf5b22) */
/* WARNING: Removing unreachable block (ram,0x000165cf5b27) */
/* WARNING: Removing unreachable block (ram,0x000165cf5b2a) */

void FUN_14d8a97fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong in_R11;
  longlong lVar3;
  ulonglong in_stack_00000008;
  
  lVar3 = in_R11 - (in_stack_00000008 ^ 0x335b8814);
  uVar1 = *(ulonglong *)(&stack0x00000028 + lVar3);
  *(ulonglong *)(&stack0x00000028 + lVar3) = ~*(ulonglong *)(&stack0x00000028 + lVar3);
  lVar2 = *(longlong *)(&stack0x00000028 + lVar3);
  *(ulonglong *)(&stack0x00000028 + lVar3) = *(ulonglong *)(&stack0x00000028 + lVar3) & in_RAX;
  *(ulonglong *)(&stack0x00000028 + lVar3) =
       (lVar2 + in_RAX) - *(longlong *)(&stack0x00000028 + lVar3);
  *(ulonglong *)(&stack0x00000028 + lVar3) =
       ~((~in_RAX | uVar1) & *(ulonglong *)(&stack0x00000028 + lVar3));
  (*(code *)&LAB_15646f7b5)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8a9b1c FUN_14d8a9b1c body=138 status=ok
// SIG undefined FUN_14d8a9b1c(void)

void FUN_14d8a9b1c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  thunk_FUN_1616fad1e(*(longlong *)(unaff_R13 + -0x48) + unaff_R15,
                      CONCAT71((int7)((ulonglong)param_2 >> 8),0xa2) ^ 0xde);
  return;
}



// FUNCTION 14d8a9c29 FUN_14d8a9c29 body=289 status=ok
// SIG undefined FUN_14d8a9c29(void)

void FUN_14d8a9c29(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort unaff_BX;
  short unaff_BP;
  undefined8 unaff_RSI;
  undefined8 local_res10;
  
  *param_4 = (unaff_BP - (unaff_BX & *param_4)) - 0x100;
  *(undefined8 *)(param_5 + -8) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = 0x14d8a9cb1;
  uVar1 = FUN_166ae6024(param_1,param_2,param_3,local_res10);
  uVar2 = (-0x14fa742d - (uVar1 | 0xffffffffeb058bd3)) + uVar1;
  FUN_156d60393(uVar2,~(~uVar2 & (uVar1 | 0xffffffffeb058bd3)),FUN_156d60393);
  return;
}



// FUNCTION 14d8a9dde FUN_14d8a9dde body=149 status=ok
// SIG undefined FUN_14d8a9dde(void)

void FUN_14d8a9dde(void)

{
  FUN_16593dff6(FUN_16593dff6);
  return;
}



// FUNCTION 14d8a9f0e FUN_14d8a9f0e body=131 status=ok
// SIG undefined FUN_14d8a9f0e(void)

void FUN_14d8a9f0e(undefined8 param_1,undefined8 param_2)

{
  FUN_166466752(param_1,param_2);
  return;
}



// FUNCTION 14d8aa120 FUN_14d8aa120 body=538 status=ok
// SIG undefined FUN_14d8aa120(void)

/* WARNING: Removing unreachable block (ram,0x00014d8aa1ab) */
/* WARNING: Removing unreachable block (ram,0x00014d8aa1b6) */
/* WARNING: Removing unreachable block (ram,0x00014d8aa1b1) */

void FUN_14d8aa120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  uVar1 = *in_RAX;
  *in_RAX = ~*in_RAX;
  uVar2 = *in_RAX;
  *in_RAX = *in_RAX & unaff_R15;
  *in_RAX = (uVar2 + unaff_R15) - *in_RAX;
  *in_RAX = 0xffffffffffffffff - ((unaff_R15 ^ 0xffffffffffffffff | uVar1) & *in_RAX);
  uVar1 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 8) = 0x7c194601;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  FUN_16240b55e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8aa3fb FUN_14d8aa3fb body=27 status=ok
// SIG undefined FUN_14d8aa3fb(void)

void FUN_14d8aa3fb(void)

{
  return;
}



// FUNCTION 14d8aa486 FUN_14d8aa486 body=167 status=ok
// SIG undefined FUN_14d8aa486(void)

undefined1
FUN_14d8aa486(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  ulonglong unaff_R12;
  undefined8 unaff_R15;
  ulonglong uVar6;
  longlong unaff_retaddr;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(&stack0x00000010 + (unaff_RSI ^ 0x6db749c)) = param_4;
  lVar2 = *(longlong *)(unaff_retaddr + -0x98);
  uVar4 = FUN_14d8f4bd7(&stack0x00000010,param_2,param_3,in_stack_00000010);
  LOCK();
  uVar5 = DAT_14d7ab237;
  UNLOCK();
  DAT_14d7ab237 = uVar4;
  *(undefined8 *)(lVar2 + -8) = param_2;
  puVar1 = (undefined8 *)(lVar2 + -0x10);
  *puVar1 = param_2;
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((unaff_R12 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((unaff_R12 & 0x800) != 0) * 0x800 | (ulonglong)((unaff_R12 & 0x400) != 0) * 0x400
       | (ulonglong)((unaff_R12 & 0x200) != 0) * 0x200 |
       (ulonglong)((unaff_R12 & 0x100) != 0) * 0x100 | (ulonglong)((unaff_R12 & 0x80) != 0) * 0x80 |
       (ulonglong)((unaff_R12 & 0x40) != 0) * 0x40 | (ulonglong)((unaff_R12 & 0x10) != 0) * 0x10 |
       (ulonglong)((unaff_R12 & 4) != 0) * 4 | (ulonglong)((unaff_R12 & 1) != 0) |
       (ulonglong)((unaff_R12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((unaff_R12 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(lVar2 + -0x18);
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(code **)(lVar2 + -0x20) = FUN_14d8f4bd7;
  *(undefined8 *)(lVar2 + -0x28) = in_R10;
  uVar3 = *(undefined8 *)(lVar2 + -0x28);
  *(undefined8 *)(lVar2 + -8) = 0xf04e6;
  *puVar1 = unaff_R15;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R15;
  *puVar1 = FUN_156c79161;
  *(undefined8 *)(lVar2 + -0x20) = uVar3;
  *(undefined8 *)(lVar2 + -0x28) = uVar3;
  *(undefined8 *)(lVar2 + -0x30) = uVar3;
  *(undefined1 **)(lVar2 + -0x20) = &LAB_14d8aa5e0;
  *(undefined8 *)(lVar2 + -0x28) = 0x165f3634c;
  return uVar5;
}



// FUNCTION 14d8aa52d FUN_14d8aa52d body=175 status=ok
// SIG undefined FUN_14d8aa52d(void)

undefined1 FUN_14d8aa52d(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  undefined1 uVar3;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  ulonglong uVar4;
  ulonglong uStackX_10;
  longlong local_res18;
  
  LOCK();
  uVar3 = DAT_14d7ab237;
  UNLOCK();
  DAT_14d7ab237 = in_AL;
  *(undefined8 *)(local_res18 + -8) = param_2;
  puVar1 = (undefined8 *)(local_res18 + -0x10);
  *puVar1 = param_2;
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
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28) = in_R10;
  uVar2 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -8) = 0xf04e6;
  *puVar1 = unaff_R15;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R15;
  *puVar1 = FUN_156c79161;
  *(undefined8 *)(local_res18 + -0x20) = uVar2;
  *(undefined8 *)(local_res18 + -0x28) = uVar2;
  *(undefined8 *)(local_res18 + -0x30) = uVar2;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_14d8aa5e0;
  *(undefined8 *)(local_res18 + -0x28) = 0x165f3634c;
  return uVar3;
}



// FUNCTION 14d8aa6fd FUN_14d8aa6fd body=10 status=ok
// SIG undefined FUN_14d8aa6fd(void)

ulonglong FUN_14d8aa6fd(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15;
}



// FUNCTION 14d8aa898 FUN_14d8aa898 body=2 status=ok
// SIG undefined FUN_14d8aa898(void)

void FUN_14d8aa898(void)

{
  return;
}



// FUNCTION 14d8aa91f FUN_14d8aa91f body=86 status=ok
// SIG undefined FUN_14d8aa91f(void)

void FUN_14d8aa91f(void)

{
  return;
}



// FUNCTION 14d8aa976 FUN_14d8aa976 body=107 status=ok
// SIG undefined FUN_14d8aa976(void)

void FUN_14d8aa976(void)

{
  (*(code *)0x14e1c21f9)();
  return;
}



// FUNCTION 14d8aaa4c FUN_14d8aaa4c body=315 status=ok
// SIG undefined FUN_14d8aaa4c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8aaaec) */
/* WARNING: Removing unreachable block (ram,0x00015b2b8896) */

void FUN_14d8aaa4c(void)

{
  int in_stack_00000040;
  
  if (in_stack_00000040 < 0) {
    FUN_15b2b8896();
    return;
  }
  FUN_15b2b88d2();
  return;
}



// FUNCTION 14d8aacc4 FUN_14d8aacc4 body=167 status=ok
// SIG undefined FUN_14d8aacc4(void)

void FUN_14d8aacc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1564f9255(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d8aae04 FUN_14d8aae04 body=3 status=ok
// SIG undefined FUN_14d8aae04(void)

void FUN_14d8aae04(void)

{
  return;
}



// FUNCTION 14d8aae07 FUN_14d8aae07 body=155 status=ok
// SIG undefined FUN_14d8aae07(void)

void FUN_14d8aae07(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xf28a5) {
    return;
  }
  FUN_161d2a052(param_1,unaff_R14,param_3,param_4);
  return;
}



// FUNCTION 14d8aaea2 thunk_FUN_14d8aaea8 body=5 status=ok
// SIG undefined thunk_FUN_14d8aaea8(void)

void thunk_FUN_14d8aaea8(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d8aaea8 FUN_14d8aaea8 body=6 status=ok
// SIG undefined FUN_14d8aaea8(void)

void FUN_14d8aaea8(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d8ab22e FUN_14d8ab22e body=365 status=ok
// SIG undefined FUN_14d8ab22e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8ab22e(void)

{
  FUN_1618ba890();
  (*(code *)0x1668ccf9d)();
  return;
}



// FUNCTION 14d8ab39d FUN_14d8ab39d body=69 status=ok
// SIG undefined FUN_14d8ab39d(void)

void FUN_14d8ab39d(void)

{
  thunk_FUN_14d7bd083();
  return;
}



// FUNCTION 14d8ab4f9 FUN_14d8ab4f9 body=110 status=ok
// SIG undefined FUN_14d8ab4f9(void)

void FUN_14d8ab4f9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  longlong lVar3;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  
  lVar3 = -(~unaff_RBX + 2);
  puVar1 = (undefined8 *)(lVar3 + 0x6f1c);
  *puVar1 = param_1;
  *(ulonglong *)(lVar3 + 0x6f14) = unaff_RBP + *(longlong *)(lVar3 + 0x6f34);
  *(undefined8 *)(lVar3 + 0x6f0c) = unaff_RSI;
  *(undefined8 *)(lVar3 + 0x6f14) = *(undefined8 *)(lVar3 + 0x6f14);
  *(ulonglong *)(lVar3 + 0x6f14) =
       *(longlong *)(lVar3 + 0x6f14) + (unaff_RBP & *(ulonglong *)(lVar3 + 0x6f34)) * -2;
  uVar2 = *puVar1;
  *puVar1 = in_R10;
  FUN_156b734f1(uVar2,unaff_retaddr);
  return;
}



// FUNCTION 14d8ab578 FUN_14d8ab578 body=39 status=ok
// SIG undefined FUN_14d8ab578(void)

void FUN_14d8ab578(void)

{
  return;
}



// FUNCTION 14d8ab6ab FUN_14d8ab6ab body=174 status=ok
// SIG undefined FUN_14d8ab6ab(void)

void FUN_14d8ab6ab(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 auStackX_8 [2];
  ushort local_res18;
  longlong local_res20;
  
  *(undefined8 *)((longlong)auStackX_8 + (unaff_R15 ^ 0x7b46052b)) = unaff_RBP;
  local_res18 = local_res18 & 0xfeff;
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x20) = param_2;
  *(undefined4 *)(local_res20 + -0x28) = 0xe7bfd659;
  *(undefined4 *)(local_res20 + -0x24) = 0xffffffff;
  lVar2 = *(longlong *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = unaff_R12;
  uVar1 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + lVar2 + 0x1840299f);
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RBX;
  *(code **)(local_res20 + -0x20) = FUN_14d8ab759;
  FUN_161921214(FUN_161921214,uVar1,param_3,&DAT_161921269);
  return;
}



// FUNCTION 14d8ab759 FUN_14d8ab759 body=130 status=ok
// SIG undefined FUN_14d8ab759(void)

/* WARNING: Removing unreachable block (ram,0x00014da42d21) */
/* WARNING: Removing unreachable block (ram,0x00014d8ab7dc) */

longlong FUN_14d8ab759(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 in_RAX;
  longlong lVar8;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  longlong lVar9;
  undefined8 unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong auStackX_8 [4];
  longlong lStack_10;
  undefined4 uStack_4;
  
  uVar4 = *(undefined8 *)((longlong)auStackX_8 + param_4);
  *(undefined8 *)((longlong)auStackX_8 + param_4 + -8) = param_3;
  *(undefined8 *)(&stack0xfffffffffffffff8 + param_4) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffffffffff8 + param_4) = in_RAX;
  *(undefined8 *)((longlong)&lStack_10 + param_4) = unaff_RDI;
  *(undefined8 *)((longlong)auStackX_8 + param_4) = in_RAX;
  uVar5 = *(undefined8 *)((longlong)auStackX_8 + param_4 + -8);
  uVar6 = *(undefined8 *)((longlong)auStackX_8 + param_4);
  *(undefined8 *)((longlong)auStackX_8 + param_4) = unaff_R14;
  lVar9 = *(longlong *)((longlong)auStackX_8 + param_4 + 8) + unaff_retaddr;
  *(ulonglong *)((longlong)auStackX_8 + param_4 + 8) =
       *(ulonglong *)((longlong)auStackX_8 + param_4 + 8) & unaff_retaddr;
  *(ulonglong *)((longlong)auStackX_8 + param_4 + 8) =
       *(longlong *)((longlong)auStackX_8 + param_4 + 8) << 1 |
       (ulonglong)(*(longlong *)((longlong)auStackX_8 + param_4 + 8) < 0);
  *(ulonglong *)((longlong)auStackX_8 + param_4 + 8) =
       *(ulonglong *)((longlong)auStackX_8 + param_4 + 8) & 0xfffffffffffffffe;
  lVar8 = *(longlong *)((longlong)auStackX_8 + param_4 + 8);
  *(ulonglong *)((longlong)auStackX_8 + param_4 + -8) =
       ~((unaff_retaddr ^ 0xffffffffffffffff | unaff_RSI) & (~unaff_RSI | unaff_retaddr));
  *(undefined8 *)(&stack0xfffffffffffffff8 + param_4) = param_1;
  lVar2 = *(longlong *)((longlong)auStackX_8 + param_4 + 8);
  *(undefined8 *)((longlong)&lStack_10 + param_4) = unaff_R15;
  if (-1 < lVar8) {
    lVar8 = FUN_14da42c82(lVar9,param_2,uVar5,uVar4);
    return lVar8;
  }
  lVar7 = *(longlong *)(&stack0xfffffffffffffff8 + param_4);
  *(longlong *)((longlong)auStackX_8 + param_4 + 8) = lVar9 - lVar2;
  *(undefined8 *)((longlong)auStackX_8 + param_4) = in_R10;
  *(undefined8 *)((longlong)auStackX_8 + param_4 + -8) = uVar6;
  plVar1 = (longlong *)(&stack0xfffffffffffffff8 + param_4);
  *(undefined4 *)plVar1 = 0x6df6970;
  *(undefined4 *)((longlong)&uStack_4 + param_4) = 0;
  lVar8 = (longlong)auStackX_8 + param_4 + *plVar1 + -0x6df6968;
  uVar3 = *(ulonglong *)(lVar8 + 8);
  *(ulonglong *)(lVar8 + 8) = *(ulonglong *)(lVar8 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(lVar8 + 8) = *(ulonglong *)(lVar8 + 8) | unaff_retaddr;
  *plVar1 = lVar7;
  *(ulonglong *)(&stack0xfffffffffffffff8 + param_4) =
       -(~(0xffffffffffffffff - unaff_retaddr | uVar3) | ~*(ulonglong *)(lVar8 + 8));
  *(undefined8 *)(lVar8 + 8) = 0;
  *(longlong *)(lVar8 + 8) =
       *(longlong *)(lVar8 + 8) - *(longlong *)(&stack0xfffffffffffffff8 + param_4);
  *(undefined **)(&stack0xfffffffffffffff8 + param_4) = &DAT_16117cae6;
  return lVar8;
}



// FUNCTION 14d8ab7dc FUN_14d8ab7dc body=152 status=ok
// SIG undefined FUN_14d8ab7dc(void)

void FUN_14d8ab7dc(ulonglong param_1)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_165156a56(param_1,FUN_165156a56,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + unaff_RBX + 0x3d2cda12) ^ param_1);
  return;
}



// FUNCTION 14d8ab990 FUN_14d8ab990 body=346 status=ok
// SIG undefined FUN_14d8ab990(void)

/* WARNING: Removing unreachable block (ram,0x000165eeab0f) */
/* WARNING: Removing unreachable block (ram,0x000165eeab09) */
/* WARNING: Removing unreachable block (ram,0x000165eeab14) */
/* WARNING: Removing unreachable block (ram,0x000165eeab25) */
/* WARNING: Removing unreachable block (ram,0x000165eeabb6) */
/* WARNING: Removing unreachable block (ram,0x000165eeabbc) */
/* WARNING: Removing unreachable block (ram,0x000165eeabc1) */
/* WARNING: Removing unreachable block (ram,0x000165eeabec) */
/* WARNING: Removing unreachable block (ram,0x00014d8530da) */
/* WARNING: Removing unreachable block (ram,0x00014d8aba2d) */

void FUN_14d8ab990(void)

{
  return;
}



// FUNCTION 14d8abac3 FUN_14d8abac3 body=151 status=ok
// SIG undefined FUN_14d8abac3(void)

/* WARNING: Removing unreachable block (ram,0x00014d8abb50) */
/* WARNING: Removing unreachable block (ram,0x00014d8abb5b) */
/* WARNING: Removing unreachable block (ram,0x00014d8abb56) */
/* WARNING: Removing unreachable block (ram,0x00016108e566) */
/* WARNING: Removing unreachable block (ram,0x00014e0b40b6) */

void FUN_14d8abac3(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60) | 0xe02e7c626721c4c4;
  FUN_14db6c37d(*(ulonglong *)(unaff_R13 + -0x78) ^ 0xe02e7c626721c4c4,
                *(ulonglong *)(unaff_R13 + -0x28) ^ 0xe02e7c626721c4c4,
                &DAT_e02e7c626721c4c4 +
                (*(ulonglong *)(unaff_R13 + -0x88) & 0xe02e7c626721c4c4) * -2 +
                *(ulonglong *)(unaff_R13 + -0x88),
                (~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x60) & 0xe02e7c626721c4c4)) + uVar1 + 1);
  return;
}



// FUNCTION 14d8abb5b FUN_14d8abb5b body=158 status=ok
// SIG undefined FUN_14d8abb5b(void)

void FUN_14d8abb5b(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP;
  FUN_162bd1412(param_1,~((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x60)) &
                         uVar1),uVar1,*(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d8abbfc FUN_14d8abbfc body=46 status=ok
// SIG undefined FUN_14d8abbfc(void)

void FUN_14d8abbfc(undefined8 param_1,undefined8 param_2)

{
  FUN_15af54141(param_1,param_2,FUN_15af54141);
  return;
}



// FUNCTION 14d8abc7b FUN_14d8abc7b body=48 status=ok
// SIG undefined FUN_14d8abc7b(void)

undefined8 FUN_14d8abc7b(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8abcf4 FUN_14d8abcf4 body=158 status=ok
// SIG undefined FUN_14d8abcf4(void)

void FUN_14d8abcf4(void)

{
  FUN_156527688();
  return;
}



// FUNCTION 14d8abe34 FUN_14d8abe34 body=286 status=ok
// SIG undefined FUN_14d8abe34(void)

longlong FUN_14d8abe34(void)

{
  longlong unaff_RDI;
  
  FUN_1563ee540();
  return unaff_RDI + -0xa0;
}



// FUNCTION 14d8ac0f8 FUN_14d8ac0f8 body=18 status=ok
// SIG undefined FUN_14d8ac0f8(void)

void FUN_14d8ac0f8(void)

{
  FUN_14d8ac10b();
  return;
}



// FUNCTION 14d8ac10b FUN_14d8ac10b body=31 status=ok
// SIG undefined FUN_14d8ac10b(void)

void FUN_14d8ac10b(void)

{
  FUN_156cc6cfe();
  return;
}



// FUNCTION 14d8ac1d2 FUN_14d8ac1d2 body=153 status=ok
// SIG undefined FUN_14d8ac1d2(void)

void FUN_14d8ac1d2(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  ulonglong uStack_8;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x28);
  *(ulonglong *)(&stack0x00000000 + (unaff_RBP - (unaff_retaddr ^ 0x454dd58a))) =
       ~((~(~param_1 & uVar2) + uVar2) - param_1 & (~uVar2 | param_1));
  puVar1 = (ulonglong *)
           ((longlong)(&stack0x00000000 + (unaff_RBP - (unaff_retaddr ^ 0x454dd58a))) + -8);
  *(uint *)puVar1 = 0x24f65b62;
  *(uint *)puVar1 = (uint)*puVar1 | 0xdf3971b8;
  (*(code *)&LAB_166d1eae4)(param_1,&LAB_166d1eae4);
  return;
}



// FUNCTION 14d8ac546 FUN_14d8ac546 body=326 status=ok
// SIG undefined FUN_14d8ac546(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ac675) */
/* WARNING: Removing unreachable block (ram,0x00014d8ac67b) */
/* WARNING: Removing unreachable block (ram,0x00014d8ac68e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ac6dc) */
/* WARNING: Removing unreachable block (ram,0x00014d8ac6e2) */
/* WARNING: Removing unreachable block (ram,0x0001569880ff) */
/* WARNING: Removing unreachable block (ram,0x000156988171) */
/* WARNING: Removing unreachable block (ram,0x000156988176) */
/* WARNING: Removing unreachable block (ram,0x00015698817c) */
/* WARNING: Removing unreachable block (ram,0x0001665f0dbf) */
/* WARNING: Removing unreachable block (ram,0x0001665f0ddd) */
/* WARNING: Removing unreachable block (ram,0x000160e2f15f) */
/* WARNING: Removing unreachable block (ram,0x0001665f0de2) */
/* WARNING: Removing unreachable block (ram,0x00014d8ac5dc) */
/* WARNING: Removing unreachable block (ram,0x00015b2cb31f) */
/* WARNING: Removing unreachable block (ram,0x00015b2cb319) */
/* WARNING: Removing unreachable block (ram,0x00015b2cb323) */

undefined8 FUN_14d8ac546(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
  FUN_162d03191();
  return *(undefined8 *)(uVar1 + param_1 + (uVar1 & param_1) * -2 + -0x38);
}



// FUNCTION 14d8ac6e8 FUN_14d8ac6e8 body=128 status=ok
// SIG undefined FUN_14d8ac6e8(void)

void FUN_14d8ac6e8(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_RSI;
  uVar2 = *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | unaff_R15;
  *unaff_RSI = ~((~(((0xffffffffffffffff - unaff_R15) + uVar1) -
                   (0xffffffffffffffff - unaff_R15 & uVar2)) | ~*unaff_RSI) ^ 0xffffffffffffffff);
  FUN_16600cc79(param_1,param_2,FUN_16600cc79);
  return;
}



// FUNCTION 14d8ac769 FUN_14d8ac769 body=110 status=ok
// SIG undefined FUN_14d8ac769(void)

ulonglong FUN_14d8ac769(ulonglong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong *unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar4;
  
  *unaff_RBP = *(ulonglong *)(unaff_R12 + -0x50);
  uVar2 = *unaff_RBP;
  *unaff_RBP = unaff_R13;
  uVar4 = ~uVar2 & ~in_RAX | uVar2;
  uVar3 = ~uVar2 | in_RAX;
  *unaff_RBP = param_1;
  unaff_RBP[-1] = uVar4;
  lVar1 = unaff_RBP[-1];
  unaff_RBP[-1] = unaff_RBX;
  unaff_RBP[-1] = (ulonglong)FUN_14d8ac7d9;
  uVar2 = FUN_165347bda();
  uVar3 = ~((uVar3 - (~uVar3 & uVar4 | uVar3)) + lVar1) + 1;
  uVar3 = ~((~in_R10 | uVar3) & (~uVar3 | in_R10));
  *unaff_RBP = uVar2;
  unaff_RBP[-1] = unaff_RSI;
  *unaff_RBP = uVar3;
  unaff_RBP[-1] = uVar3;
  unaff_RBP[-2] = uVar3;
  unaff_RBP[-3] = uVar3;
  unaff_RBP[-1] = (ulonglong)&LAB_14d8ac87c;
  unaff_RBP[-2] = (ulonglong)&LAB_14dc9e00f;
  return ~in_R10;
}



// FUNCTION 14d8ac7d9 FUN_14d8ac7d9 body=162 status=ok
// SIG undefined FUN_14d8ac7d9(void)

ulonglong FUN_14d8ac7d9(void)

{
  ulonglong in_R10;
  
  return ~in_R10;
}



// FUNCTION 14d8ac99f FUN_14d8ac99f body=260 status=ok
// SIG undefined FUN_14d8ac99f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8aca2f) */
/* WARNING: Removing unreachable block (ram,0x00014d8aca35) */
/* WARNING: Removing unreachable block (ram,0x000162682ad5) */

void FUN_14d8ac99f(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  longlong lVar1;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  *(undefined8 *)(param_3 + 8) = in_R10;
  lVar1 = (-~unaff_R15 - (~param_6 + 2)) + (param_6 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -0x10) = local_res8;
  *(undefined8 *)(lVar1 + -8) = 0x3a80446;
  *(undefined8 *)(lVar1 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8acc82 FUN_14d8acc82 body=15 status=ok
// SIG undefined FUN_14d8acc82(void)

void FUN_14d8acc82(void)

{
  return;
}



// FUNCTION 14d8acd30 FUN_14d8acd30 body=177 status=ok
// SIG undefined FUN_14d8acd30(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015af73c78) overlaps instruction at (ram,0x00015af73c77)
    */
/* WARNING: Removing unreachable block (ram,0x000162cb19c1) */
/* WARNING: Removing unreachable block (ram,0x00014d8aceab) */
/* WARNING: Removing unreachable block (ram,0x00014d8acdcc) */
/* WARNING: Removing unreachable block (ram,0x00014d8acdd7) */
/* WARNING: Removing unreachable block (ram,0x00014d8ace63) */
/* WARNING: Removing unreachable block (ram,0x00015733de25) */
/* WARNING: Removing unreachable block (ram,0x00015733de3b) */
/* WARNING: Removing unreachable block (ram,0x00015733de3a) */
/* WARNING: Removing unreachable block (ram,0x00015733de41) */
/* WARNING: Removing unreachable block (ram,0x00015733de77) */
/* WARNING: Removing unreachable block (ram,0x00015733de7d) */
/* WARNING: Removing unreachable block (ram,0x00015733de84) */
/* WARNING: Removing unreachable block (ram,0x00015af73c50) */
/* WARNING: Removing unreachable block (ram,0x00015af73c78) */
/* WARNING: Removing unreachable block (ram,0x00015af73c77) */
/* WARNING: Removing unreachable block (ram,0x00015af73c80) */
/* WARNING: Removing unreachable block (ram,0x00014d8ace69) */
/* WARNING: Removing unreachable block (ram,0x00014d8aceaf) */
/* WARNING: Removing unreachable block (ram,0x00014d8acf06) */
/* WARNING: Removing unreachable block (ram,0x00014d8acf12) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad045) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad064) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad0ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad0b2) */
/* WARNING: Removing unreachable block (ram,0x000162cb1893) */
/* WARNING: Removing unreachable block (ram,0x000162cb19b6) */
/* WARNING: Removing unreachable block (ram,0x000162cb19bc) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7e7a) */
/* WARNING: Removing unreachable block (ram,0x00014d8acdd2) */

undefined8 FUN_14d8acd30(void)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_160c98bed(unaff_retaddr);
  return uVar1;
}



// FUNCTION 14d8acde3 FUN_14d8acde3 body=753 status=ok
// SIG undefined FUN_14d8acde3(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015af73c78) overlaps instruction at (ram,0x00015af73c77)
    */
/* WARNING: Removing unreachable block (ram,0x000162cb19c1) */
/* WARNING: Removing unreachable block (ram,0x00014d8aceab) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7e7a) */
/* WARNING: Removing unreachable block (ram,0x00014d8ace69) */
/* WARNING: Removing unreachable block (ram,0x00014d8acf06) */
/* WARNING: Removing unreachable block (ram,0x000162cb1893) */
/* WARNING: Removing unreachable block (ram,0x00015733de3a) */
/* WARNING: Removing unreachable block (ram,0x00015af73c77) */
/* WARNING: Removing unreachable block (ram,0x00014d8acf12) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad045) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad064) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad0b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad0ad) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00015af73c9b */
/* WARNING: Removing unreachable block (ram,0x00015733de84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8acde3(undefined8 param_1,longlong param_2)

{
  int unaff_ESI;
  int in_R10D;
  
  if (-1 < (int)((uint)param_2 & ~(unaff_ESI + in_R10D + 1U))) {
    FUN_1625e1a82();
    *(code **)(&stack0xfffffffff006a9c5 + param_2) = FUN_1625e1a82;
    FUN_14d85d504();
    return;
  }
  FUN_15af73c50();
  return;
}



// FUNCTION 14d8ad0d7 FUN_14d8ad0d7 body=134 status=ok
// SIG undefined FUN_14d8ad0d7(void)

void FUN_14d8ad0d7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1658d3fe9(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8ad43b FUN_14d8ad43b body=131 status=ok
// SIG undefined FUN_14d8ad43b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ad4bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8ad43b(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + 8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined4 *)(local_res18 + -0xc) = 0;
  uVar3 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  iVar2 = *(int *)(local_res18 + -0x10);
  *(int *)(local_res18 + -0x10) = iVar2;
  if (iVar2 < 0) {
    *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
    piVar1 = (int *)(local_res18 + -0xc);
    *piVar1 = -0x12ea9164;
    *piVar1 = *piVar1 + 0x12ea9163;
  }
  *(undefined8 *)(local_res18 + -0x18) = uVar3;
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x28) = 0x15b3a7100;
  FUN_161777f63(param_1,param_2,uStackX_8);
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x28d7) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x28df) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined **)(local_res18 + -0x28d7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8ad4bf FUN_14d8ad4bf body=346 status=ok
// SIG undefined FUN_14d8ad4bf(void)

void FUN_14d8ad4bf(undefined8 param_1)

{
  FUN_1619b3ab0(param_1);
  return;
}



// FUNCTION 14d8ad6a7 FUN_14d8ad6a7 body=146 status=ok
// SIG undefined FUN_14d8ad6a7(void)

/* WARNING: Removing unreachable block (ram,0x0001619d81b0) */
/* WARNING: Removing unreachable block (ram,0x0001619d81b6) */
/* WARNING: Removing unreachable block (ram,0x000157855514) */
/* WARNING: Removing unreachable block (ram,0x0001623605cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad73a) */
/* WARNING: Removing unreachable block (ram,0x00015b71d414) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad7d6) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad7dc) */
/* WARNING: Removing unreachable block (ram,0x00014d8ad7e1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d8ad6a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  lVar1 = *(longlong *)(unaff_R13 + -8);
  lVar3 = *(ulonglong *)(unaff_R13 + -0x70) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x70) & unaff_R15) * -2;
  *(undefined8 *)(lVar3 + -8) = in_RAX;
  *(undefined8 *)(lVar3 + -0x10) = in_R11;
  *(undefined8 *)(lVar3 + -0x18) = in_R10;
  if ((lVar1 + unaff_R15 & 1) == 0) {
    uVar2 = FUN_1619d8113();
    return uVar2;
  }
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = param_1;
  *(undefined8 *)(lVar3 + -0x20) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x28) = param_4;
  *(undefined8 *)(lVar3 + -8) = 0;
  uVar2 = *(undefined8 *)(lVar3 + -0x18);
  *(undefined **)(lVar3 + -8) = &DAT_157855562 + *(longlong *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x10) = unaff_RBP;
  *(undefined8 *)(lVar3 + -0x18) = unaff_RBP;
  *(undefined8 *)(lVar3 + -0x20) = unaff_RBX;
  *(undefined8 *)(lVar3 + -0x28) = unaff_retaddr;
  *(undefined8 *)(lVar3 + -0x28) = uVar2;
  uVar2 = FUN_157855514();
  return uVar2;
}



// FUNCTION 14d8ad73a FUN_14d8ad73a body=232 status=ok
// SIG undefined FUN_14d8ad73a(void)

undefined8 FUN_14d8ad73a(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  bool bVar8;
  ulonglong in_stack_00000018;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = ~(local_res20 & param_1) & (local_res20 | param_1);
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  local_res20._0_2_ = (ushort)uVar1;
  local_res20._0_2_ = (-0x101 - ((ushort)local_res20 | 0xfeff)) + (ushort)local_res20;
  *(undefined8 *)(in_stack_00000028 - 8) = 0;
  uVar2 = *(ulonglong *)(in_stack_00000028 - 8);
  lVar3 = *(longlong *)(in_stack_00000028 - 8);
  *(longlong *)(in_stack_00000028 - 8) = *(longlong *)(in_stack_00000028 - 8) + unaff_R15;
  lVar4 = *(longlong *)(in_stack_00000028 - 8);
  bVar8 = *(longlong *)(in_stack_00000028 - 8) == 0;
  uVar5 = *(ulonglong *)(in_stack_00000028 - 8);
  if (!bVar8) {
    *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
    *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R12;
    *(undefined1 **)(in_stack_00000028 - 8) = &LAB_15b71d485;
    *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R13;
    uVar7 = thunk_FUN_15b642ca5();
    return uVar7;
  }
  if (bVar8) {
    uVar7 = FUN_15b71d414();
    return uVar7;
  }
  *(undefined4 *)(in_stack_00000028 - 8) = 0xb3a05b8;
  *(undefined4 *)(in_stack_00000028 - 4) = 0;
  lVar6 = *(longlong *)(in_stack_00000028 - 8);
  *(ulonglong *)(in_stack_00000028 - 8) =
       (ulonglong)(((ushort)local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)SBORROW8(lVar3,-unaff_R15) * 0x800 |
       (ulonglong)(((ushort)local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res20 & 0x100) != 0) * 0x100 | (ulonglong)(lVar4 < 0) * 0x80 |
       (ulonglong)(((ushort)local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar2 < (ulonglong)-unaff_R15) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000
       | (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 - 0x10) = in_R10;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R14;
  *(ulonglong *)(in_stack_00000028 - 8) = in_stack_00000018 ^ param_1;
  *(longlong *)(in_stack_00000028 + 8) = lVar6 + -0x65da9a6;
  *(undefined8 *)(&DAT_ffffffffffffd741 + in_stack_00000028) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 - 0x28c7) = unaff_R13;
  *(undefined **)(&DAT_ffffffffffffd741 + in_stack_00000028) = &DAT_156ef2e4a;
  return in_RAX;
}



// FUNCTION 14d8ad9d4 FUN_14d8ad9d4 body=149 status=ok
// SIG undefined FUN_14d8ad9d4(void)

/* WARNING: Removing unreachable block (ram,0x000164ae9c00) */
/* WARNING: Removing unreachable block (ram,0x000164ae9d05) */
/* WARNING: Removing unreachable block (ram,0x000164ae9d11) */
/* WARNING: Removing unreachable block (ram,0x0001623053c8) */

void FUN_14d8ad9d4(void)

{
  return;
}



// FUNCTION 14d8ada6d FUN_14d8ada6d body=170 status=ok
// SIG undefined FUN_14d8ada6d(void)

undefined8 FUN_14d8ada6d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8adbab FUN_14d8adbab body=61 status=ok
// SIG undefined FUN_14d8adbab(void)

void FUN_14d8adbab(void)

{
  ulonglong *puVar1;
  ulonglong unaff_retaddr;
  undefined8 local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x14d8adc07;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8adc69 FUN_14d8adc69 body=140 status=ok
// SIG undefined FUN_14d8adc69(void)

void FUN_14d8adc69(void)

{
  FUN_162e2b3a3();
  FUN_14d8adcf6();
  return;
}



// FUNCTION 14d8adcf6 FUN_14d8adcf6 body=310 status=ok
// SIG undefined FUN_14d8adcf6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8add6e) */
/* WARNING: Removing unreachable block (ram,0x00014d8add7a) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade12) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade16) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade1f) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade24) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade2a) */
/* WARNING: Removing unreachable block (ram,0x00014d8ade2f) */

void FUN_14d8adcf6(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_162d63756(param_1,param_2,FUN_162d63756,
                (~*(ulonglong *)(unaff_RDI + -0x60) & ~param_1 | *(ulonglong *)(unaff_RDI + -0x60))
                + param_1 + 1);
  return;
}



// FUNCTION 14d8ade2f FUN_14d8ade2f body=122 status=ok
// SIG undefined FUN_14d8ade2f(void)

void FUN_14d8ade2f(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = 0xffffffffffffffff - (param_3 & unaff_R15);
  lVar1 = ((unaff_RSI | unaff_R15) - (uVar2 | unaff_RSI | unaff_R15)) + uVar2;
  FUN_14dca3dbf(CONCAT71((int7)((ulonglong)lVar1 >> 8),(byte)lVar1 << ((byte)lVar1 & 0x1f)),
                ~unaff_R15,lVar1);
  return;
}



// FUNCTION 14d8adeab FUN_14d8adeab body=68 status=ok
// SIG undefined FUN_14d8adeab(void)

void FUN_14d8adeab(void)

{
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined4 *)(local_res18 + -0x18) = 0x5c83635;
  *(undefined4 *)(local_res18 + -0x14) = 0;
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
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_14d8adef1;
  return;
}



// FUNCTION 14d8adf38 FUN_14d8adf38 body=182 status=ok
// SIG undefined FUN_14d8adf38(void)

/* WARNING: Instruction at (ram,0x00014d8adfa3) overlaps instruction at (ram,0x00014d8adfa2)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8adfa2) */

void FUN_14d8adf38(void)

{
  undefined8 local_res8;
  
  (*(code *)0x15737a82e)(local_res8,0x15737a82e);
  return;
}


