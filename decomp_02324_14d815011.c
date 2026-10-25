// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d815011 FUN_14d815011 body=152 status=ok
// SIG undefined FUN_14d815011(void)

void FUN_14d815011(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  longlong lStack0000000000000028;
  
  *(undefined8 *)(param_2 + -8) = unaff_RBP;
  *(undefined8 *)(param_2 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_2 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_2 + -0x20) = in_stack_00000010;
  *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = 0;
  *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_2 + -8);
  *(longlong *)(param_2 + -8) = (longlong)(&LAB_165bc7f8b + *(longlong *)(param_2 + -8));
  lStack0000000000000028 = param_2;
  (*(code *)0x165bc7f41)(local_res18,*(undefined8 *)(param_2 + -0x20));
  return;
}



// FUNCTION 14d81512a FUN_14d81512a body=54 status=ok
// SIG undefined FUN_14d81512a(void)

void FUN_14d81512a(void)

{
  return;
}



// FUNCTION 14d8151f8 FUN_14d8151f8 body=93 status=ok
// SIG undefined FUN_14d8151f8(void)

void FUN_14d8151f8(undefined8 param_1,undefined8 param_2)

{
  FUN_161612cc7(param_1,param_2);
  return;
}



// FUNCTION 14d815627 FUN_14d815627 body=116 status=ok
// SIG undefined FUN_14d815627(void)

void FUN_14d815627(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dceaf47(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15);
  return;
}



// FUNCTION 14d81573c FUN_14d81573c body=185 status=ok
// SIG undefined FUN_14d81573c(void)

/* WARNING: Instruction at (ram,0x00014d815758) overlaps instruction at (ram,0x00014d815757)
    */
/* WARNING: Removing unreachable block (ram,0x00014d815757) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d815794 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d81573c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d815afe FUN_14d815afe body=395 status=ok
// SIG undefined FUN_14d815afe(void)

/* WARNING: Removing unreachable block (ram,0x000164ee7f86) */
/* WARNING: Removing unreachable block (ram,0x000164ee7f91) */
/* WARNING: Removing unreachable block (ram,0x000164ee7f8c) */
/* WARNING: Removing unreachable block (ram,0x000157677a15) */

void FUN_14d815afe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R13;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | in_RAX;
  *(ulonglong *)(unaff_R15 + 8) = ~((~in_RAX | uVar1) & *(ulonglong *)(unaff_R15 + 8));
  FUN_15b631079(param_1,param_2,param_3);
  (*(code *)&LAB_156d5078a)
            (*(ulonglong *)(unaff_R13 + -0x80) + unaff_retaddr +
             (*(ulonglong *)(unaff_R13 + -0x80) & unaff_retaddr) * -2,param_2,
             *(ulonglong *)(unaff_R13 + -0x40) | unaff_retaddr,&LAB_156d5078a);
  return;
}



// FUNCTION 14d815c29 FUN_14d815c29 body=210 status=ok
// SIG undefined FUN_14d815c29(void)

/* WARNING: Removing unreachable block (ram,0x00015b44f570) */
/* WARNING: Removing unreachable block (ram,0x00015b44f576) */
/* WARNING: Removing unreachable block (ram,0x000156bf6984) */
/* WARNING: Removing unreachable block (ram,0x000156bf68d1) */
/* WARNING: Removing unreachable block (ram,0x000156bf697e) */
/* WARNING: Removing unreachable block (ram,0x000160d04906) */
/* WARNING: Removing unreachable block (ram,0x000160d04986) */
/* WARNING: Removing unreachable block (ram,0x0001628825d6) */
/* WARNING: Removing unreachable block (ram,0x000160d0498c) */
/* WARNING: Removing unreachable block (ram,0x00015b44f4de) */
/* WARNING: Removing unreachable block (ram,0x00015b44f460) */
/* WARNING: Removing unreachable block (ram,0x00015b44f4d3) */
/* WARNING: Removing unreachable block (ram,0x00015b44f4d8) */
/* WARNING: Removing unreachable block (ram,0x00015679f0f5) */
/* WARNING: Removing unreachable block (ram,0x00014d815cd5) */

undefined8 FUN_14d815c29(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar5 = ~(param_2 & (~param_1 | unaff_R15));
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  if (&DAT_fffffffffffffff7 < &stack0x00000000) {
    uVar3 = FUN_156bf6841();
    return uVar3;
  }
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  if ((longlong)(*(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15) < 0) {
    if (*(longlong *)(unaff_R13 + -8) == -1 && unaff_R15 == 0xffffffffffffffff) {
      uVar3 = FUN_1619c7964();
      return uVar3;
    }
    uVar4 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x70)) &
             (~*(ulonglong *)(unaff_R13 + -0x70) | unaff_R15));
    *(undefined8 *)(uVar4 - 8) = in_RAX;
    *(undefined8 *)(uVar4 - 0x10) = unaff_R12;
    *(undefined8 *)(uVar4 - 0x18) = unaff_R12;
    *(undefined8 *)(uVar4 - 0x20) = unaff_RBX;
    *(ulonglong *)(uVar4 - 0x28) = ~(uVar2 & unaff_R15) & (uVar2 | unaff_R15);
    *(ulonglong *)(uVar4 - 0x30) = uVar5;
    *(ulonglong *)(uVar4 - 0x38) = uVar5;
    *(undefined1 **)(uVar4 - 0x30) = &LAB_1619c7a07;
    uVar3 = FUN_156e9b894(*(undefined8 *)(uVar4 - 0x38),uVar1 ^ unaff_R15,param_3,param_4);
    return uVar3;
  }
  uVar3 = FUN_15b44f3ae();
  return uVar3;
}



// FUNCTION 14d815d7e FUN_14d815d7e body=149 status=ok
// SIG undefined FUN_14d815d7e(void)

/* WARNING: Removing unreachable block (ram,0x00014d815e58) */

void FUN_14d815d7e(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R11;
  longlong unaff_retaddr;
  undefined8 in_stack_00000008;
  
  param_1 = *(ulonglong *)(unaff_retaddr + -0x98) ^ param_1;
  FUN_161b70c36(param_1,param_2,in_stack_00000008,param_4);
  *(char *)(in_R11 + param_2) = (char)param_1;
  FUN_156d1e29a();
  return;
}



// FUNCTION 14d815e13 FUN_14d815e13 body=91 status=ok
// SIG undefined FUN_14d815e13(void)

/* WARNING: Removing unreachable block (ram,0x00014d815e58) */

void FUN_14d815e13(undefined1 param_1,longlong param_2)

{
  undefined8 local_res8;
  
  *(undefined1 *)(local_res8 + param_2) = param_1;
  FUN_156d1e29a();
  return;
}



// FUNCTION 14d815e83 FUN_14d815e83 body=249 status=ok
// SIG undefined FUN_14d815e83(void)

void FUN_14d815e83(longlong param_1)

{
  undefined8 in_stack_00000008;
  undefined2 in_stack_00000010;
  undefined2 *in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_1655a6749(FUN_1655a6749,in_stack_00000008);
    return;
  }
  if (param_1 == 1) {
    FUN_161193e82();
    return;
  }
  if (param_1 == 2) {
    FUN_14df6a9aa();
    return;
  }
  if (param_1 == 3) {
    thunk_FUN_157429631();
    return;
  }
  if (param_1 == 4) {
    if (((ulonglong)in_stack_00000018 & 0x8000000000000000) != 0) {
      return;
    }
    *in_stack_00000018 = in_stack_00000010;
    return;
  }
  if (param_1 == 5) {
    FUN_161027ad2();
    return;
  }
  if (param_1 == 6) {
    FUN_156bcac35(0);
    return;
  }
  return;
}



// FUNCTION 14d815fcd FUN_14d815fcd body=313 status=ok
// SIG undefined FUN_14d815fcd(void)

void FUN_14d815fcd(undefined8 param_1,ushort *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short in_R10W;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res10;
  
  *param_2 = 0x49c9;
  *param_2 = *param_2 ^ 0x49c9;
  *param_2 = *param_2 + in_R10W;
  *(undefined8 *)(param_5 + -8) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = unaff_R14;
  *(undefined **)(param_5 + -0x18) = &DAT_15a4034bf;
  *(undefined1 **)(param_5 + -0x20) = &LAB_14db0403b;
  uVar2 = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar3 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -8) = uVar2;
  *(undefined8 *)(param_5 + -0x18) = 0x14d816066;
  FUN_14db04010(*(undefined8 *)(param_5 + -0x20),local_res10);
  lVar1 = *(longlong *)(unaff_R13 + -0x60);
  uVar4 = ~((~uVar3 | *(ulonglong *)(unaff_R13 + -0x88)) &
           (~*(ulonglong *)(unaff_R13 + -0x88) | uVar3));
  *(ulonglong *)(param_5 + -0x20) = uVar4;
  *(undefined4 *)(param_5 + -0x20) = 0xdf83871f;
  *(uint *)(param_5 + -0x20) = *(uint *)(param_5 + -0x20) ^ 0x40089a96;
  *(undefined4 *)(param_5 + -0x1c) = 0xffffffff;
  *(undefined8 *)(param_5 + -0x20) =
       *(undefined8 *)(unaff_R13 + *(longlong *)(param_5 + -0x20) + 0x6074e23f);
  *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x20);
  thunk_FUN_161908bb7(~uVar3,0xfffffffffffffff8,uVar4,-(param_4 - lVar1) ^ uVar3);
  return;
}



// FUNCTION 14d8161ab FUN_14d8161ab body=336 status=ok
// SIG undefined FUN_14d8161ab(void)

/* WARNING: Instruction at (ram,0x000166be9960) overlaps instruction at (ram,0x000166be995e)
    */
/* WARNING: Removing unreachable block (ram,0x0001572322f5) */
/* WARNING: Removing unreachable block (ram,0x000157232309) */
/* WARNING: Removing unreachable block (ram,0x000157232311) */
/* WARNING: Removing unreachable block (ram,0x000157232380) */
/* WARNING: Removing unreachable block (ram,0x000157232384) */
/* WARNING: Removing unreachable block (ram,0x00014d816231) */
/* WARNING: Removing unreachable block (ram,0x00014d816237) */
/* WARNING: Removing unreachable block (ram,0x000166be9904) */
/* WARNING: Removing unreachable block (ram,0x000166be9960) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe0 : 0x000166be991f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8161ab(undefined8 param_1,longlong param_2)

{
  undefined8 *unaff_RDI;
  undefined8 in_XMM0_Qb;
  undefined4 in_stack_fffffffffffffff0;
  undefined4 in_stack_fffffffffffffff4;
  undefined8 in_stack_fffffffffffffff8;
  
  *unaff_RDI = param_1;
  unaff_RDI[1] = in_XMM0_Qb;
  FUN_162da63e0(0,param_2 - CONCAT44(in_stack_fffffffffffffff4,in_stack_fffffffffffffff0),
                in_stack_fffffffffffffff8);
  return;
}



// FUNCTION 14d816237 FUN_14d816237 body=123 status=ok
// SIG undefined FUN_14d816237(void)

void FUN_14d816237(void)

{
  return;
}



// FUNCTION 14d816368 FUN_14d816368 body=136 status=ok
// SIG undefined FUN_14d816368(void)

/* WARNING: Removing unreachable block (ram,0x00014d8163f2) */

undefined8
FUN_14d816368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R12;
  ulonglong in_stack_00000010;
  undefined8 local_res18;
  
  if (~(~*(ulonglong *)(unaff_R12 + -0xa0) & in_stack_00000010) + in_stack_00000010 <
      *(ulonglong *)(unaff_R12 + -0xa0)) {
    uVar1 = FUN_1661f6436();
    return uVar1;
  }
  uVar1 = (*(code *)((longlong)&DAT_15b902712 + 5))(0x15b902717,param_2,local_res18,param_4);
  return uVar1;
}



// FUNCTION 14d8163f2 FUN_14d8163f2 body=82 status=ok
// SIG undefined FUN_14d8163f2(void)

ulonglong FUN_14d8163f2(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  
  return ~(unaff_RSI & (~in_RAX + param_1) - (~in_RAX & param_1));
}



// FUNCTION 14d8165a3 FUN_14d8165a3 body=118 status=ok
// SIG undefined FUN_14d8165a3(void)

/* WARNING: Instruction at (ram,0x00014d81665d) overlaps instruction at (ram,0x00014d81665c)
    */

void FUN_14d8165a3(ulonglong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  longlong in_R11;
  longlong unaff_R15;
  bool bVar4;
  undefined8 uStackX_20;
  
  uVar2 = FUN_166c76a44();
  bVar4 = param_2 != -0x18a93ab2;
  uVar3 = unaff_RBX & 0xffffffffffffff00;
  if (bVar4) {
    uVar3 = param_1;
  }
  *(bool *)unaff_RDI = bVar4;
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(uVar3 + bVar4)) + -0x75);
  *puVar1 = *puVar1 >> 0x19 | *puVar1 << 7;
  FUN_165b02d2b();
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  *(ulonglong *)(unaff_R15 + 0x18) = *(ulonglong *)(unaff_R15 + 0x18) | 0xffffffffffffffffU - in_R11
  ;
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  FUN_160f4b05e(uStackX_20);
  return;
}



// FUNCTION 14d81661b FUN_14d81661b body=129 status=ok
// SIG undefined FUN_14d81661b(void)

/* WARNING: Instruction at (ram,0x00014d81665d) overlaps instruction at (ram,0x00014d81665c)
    */

void FUN_14d81661b(ulonglong param_1)

{
  uint *puVar1;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  longlong in_R11;
  longlong unaff_R15;
  bool bVar3;
  longlong unaff_retaddr;
  undefined8 uStackX_20;
  
  bVar3 = unaff_retaddr != -0x18a93ab2;
  uVar2 = unaff_RBX & 0xffffffffffffff00;
  if (bVar3) {
    uVar2 = param_1;
  }
  *(bool *)unaff_RDI = bVar3;
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(uVar2 + bVar3)) + -0x75)
  ;
  *puVar1 = *puVar1 >> 0x19 | *puVar1 << 7;
  FUN_165b02d2b();
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  *(ulonglong *)(unaff_R15 + 0x18) = *(ulonglong *)(unaff_R15 + 0x18) | 0xffffffffffffffffU - in_R11
  ;
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  FUN_160f4b05e(uStackX_20);
  return;
}



// FUNCTION 14d81669d FUN_14d81669d body=135 status=ok
// SIG undefined FUN_14d81669d(void)

void FUN_14d81669d(void)

{
  longlong in_R11;
  longlong unaff_R15;
  undefined8 uStackX_18;
  
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  *(ulonglong *)(unaff_R15 + 0x18) = *(ulonglong *)(unaff_R15 + 0x18) | 0xffffffffffffffffU - in_R11
  ;
  *(ulonglong *)(unaff_R15 + 0x18) = ~*(ulonglong *)(unaff_R15 + 0x18);
  FUN_160f4b05e(uStackX_18);
  return;
}



// FUNCTION 14d81672b FUN_14d81672b body=189 status=ok
// SIG undefined FUN_14d81672b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8167d7) */
/* WARNING: Removing unreachable block (ram,0x000160e85a08) */

void FUN_14d81672b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(&stack0x00000010 + unaff_RBP) = param_1;
  FUN_160e85a08(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d816906 FUN_14d816906 body=365 status=ok
// SIG undefined FUN_14d816906(void)

/* WARNING: Removing unreachable block (ram,0x00014d8169c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8169cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8169d0) */

void FUN_14d816906(void)

{
  return;
}



// FUNCTION 14d816a73 FUN_14d816a73 body=189 status=ok
// SIG undefined FUN_14d816a73(void)

void FUN_14d816a73(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_14df959ea(param_1,FUN_14df959ea,param_3,local_res10);
  return;
}



// FUNCTION 14d816b30 FUN_14d816b30 body=186 status=ok
// SIG undefined FUN_14d816b30(void)

/* WARNING: Removing unreachable block (ram,0x00014d816b97) */

undefined8 FUN_14d816b30(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d816bec FUN_14d816bec body=154 status=ok
// SIG undefined FUN_14d816bec(void)

/* WARNING: Instruction at (ram,0x00014d816c70) overlaps instruction at (ram,0x00014d816c6f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d816c6f) */

void FUN_14d816bec(void)

{
  return;
}



// FUNCTION 14d816c88 FUN_14d816c88 body=220 status=ok
// SIG undefined FUN_14d816c88(void)

/* WARNING: Removing unreachable block (ram,0x00014d816d60) */
/* WARNING: Removing unreachable block (ram,0x00014d816d59) */

void FUN_14d816c88(void)

{
  return;
}



// FUNCTION 14d816d65 FUN_14d816d65 body=143 status=ok
// SIG undefined FUN_14d816d65(void)

void FUN_14d816d65(void)

{
  FUN_1570d7ff8();
  return;
}



// FUNCTION 14d816f38 FUN_14d816f38 body=6 status=ok
// SIG undefined FUN_14d816f38(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d816f38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d816fcf FUN_14d816fcf body=1177 status=ok
// SIG undefined FUN_14d816fcf(void)

/* WARNING: Removing unreachable block (ram,0x00014d817059) */
/* WARNING: Removing unreachable block (ram,0x00014d817065) */
/* WARNING: Removing unreachable block (ram,0x00014d817093) */
/* WARNING: Removing unreachable block (ram,0x00014d81708e) */
/* WARNING: Removing unreachable block (ram,0x00014d8170c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8170c0) */
/* WARNING: Removing unreachable block (ram,0x00014de110d9) */
/* WARNING: Removing unreachable block (ram,0x00014de110f9) */
/* WARNING: Removing unreachable block (ram,0x00014de110f4) */
/* WARNING: Removing unreachable block (ram,0x00014de11141) */
/* WARNING: Removing unreachable block (ram,0x00014d94abc0) */
/* WARNING: Removing unreachable block (ram,0x00014d94abda) */
/* WARNING: Removing unreachable block (ram,0x00014d94abdf) */
/* WARNING: Removing unreachable block (ram,0x00014d8170e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8170ee) */
/* WARNING: Removing unreachable block (ram,0x00014d8170f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8170f9) */
/* WARNING: Removing unreachable block (ram,0x00014d817196) */
/* WARNING: Removing unreachable block (ram,0x00014d81719b) */
/* WARNING: Removing unreachable block (ram,0x00014de110cd) */
/* WARNING: Removing unreachable block (ram,0x000162d08cb2) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000162d08cb8) */

undefined8 FUN_14d816fcf(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R12;
  ulonglong uVar5;
  
  uVar4 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  uVar5 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),0x3492);
  lVar2 = FUN_1652363b4(*(ulonglong *)(unaff_RDI + -0x98) ^ param_1,unaff_RBP - param_2);
  uVar1 = *(ulonglong *)(uVar4 - 0x60);
  uVar3 = CONCAT44((int)((ulonglong)(lVar2 - unaff_R12) >> 0x20),0xb90e6fbe) ^ 0x46f1902e;
  FUN_14dcb4a03(uVar5,uVar3,*(undefined8 *)(uVar4 + uVar3),~(uVar1 & uVar5) & (uVar1 | uVar5));
  return 0xffffffffffffff80;
}



// FUNCTION 14d817342 FUN_14d817342 body=150 status=ok
// SIG undefined FUN_14d817342(void)

void FUN_14d817342(void)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  uint unaff_retaddr;
  
  uVar3 = (ulonglong)unaff_retaddr;
  puVar1 = (uint *)(&stack0xfffffffff409738f + uVar3);
  *puVar1 = 0xca1e0c0c;
  *puVar1 = *puVar1 + 0x219859d3;
  *puVar1 = *puVar1 ^ 0x10cedc09;
  *(undefined4 *)(&stack0xfffffffff4097393 + uVar3) = 0xffffffff;
  lVar2 = *(longlong *)(&stack0xfffffffff890b9e1 + *(longlong *)puVar1 + uVar3);
  *(undefined8 *)(&stack0xfffffffff4097397 + uVar3) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff409738f + uVar3) = in_R11;
  *(ulonglong *)(&stack0xfffffffff40973b7 + uVar3) =
       (~in_RAX | *(ulonglong *)(&stack0xfffffffff40973b7 + uVar3)) + in_RAX + 1;
  *(longlong *)(&stack0xfffffffff40973b7 + uVar3) =
       *(longlong *)(&stack0xfffffffff40973b7 + uVar3) << 1;
  *(ulonglong *)(&stack0xfffffffff40973b7 + uVar3) =
       (lVar2 + in_RAX) - *(longlong *)(&stack0xfffffffff40973b7 + uVar3);
  FUN_16125eef5();
  return;
}



// FUNCTION 14d8173da FUN_14d8173da body=79 status=ok
// SIG undefined FUN_14d8173da(void)

/* WARNING: Removing unreachable block (ram,0x00014d817467) */
/* WARNING: Removing unreachable block (ram,0x00014d817473) */
/* WARNING: Removing unreachable block (ram,0x000165817d76) */
/* WARNING: Removing unreachable block (ram,0x000165817d7c) */
/* WARNING: Removing unreachable block (ram,0x000165817d87) */
/* WARNING: Removing unreachable block (ram,0x000165817d82) */
/* WARNING: Removing unreachable block (ram,0x000165817d94) */
/* WARNING: Removing unreachable block (ram,0x00015688fa4c) */
/* WARNING: Removing unreachable block (ram,0x000165792f89) */
/* WARNING: Removing unreachable block (ram,0x00015688fabf) */
/* WARNING: Removing unreachable block (ram,0x00015688fac5) */
/* WARNING: Removing unreachable block (ram,0x00014d81750b) */
/* WARNING: Removing unreachable block (ram,0x00014d81750e) */
/* WARNING: Removing unreachable block (ram,0x00014ddf6f74) */

undefined8 FUN_14d8173da(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_15688fa52();
  return uVar1;
}



// FUNCTION 14d81751a FUN_14d81751a body=398 status=ok
// SIG undefined FUN_14d81751a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d81751a(void)

{
  FUN_15b992b87();
  FUN_15644cddf();
  FUN_16520cade();
  return;
}



// FUNCTION 14d81773e FUN_14d81773e body=314 status=ok
// SIG undefined FUN_14d81773e(void)

void FUN_14d81773e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000050;
  
  if ((unaff_RBX & param_1) == 0) {
    FUN_1619592c6();
    return;
  }
  if ((unaff_RBX & param_1) == 0) {
    *(undefined8 *)(unaff_R13 + (unaff_RBX | param_1)) = local_res18;
    *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) ^ param_1;
    *(undefined8 *)(~((~in_RAX | in_stack_00000050) & (~in_stack_00000050 | in_RAX)) - 8) =
         unaff_R14;
    FUN_1621c7eac(in_stack_00000038,~(unaff_RBX | param_1),param_3,local_res20);
    return;
  }
  FUN_15b5cdacb(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d817880 FUN_14d817880 body=449 status=ok
// SIG undefined FUN_14d817880(void)

void FUN_14d817880(uint param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 in_stack_00000008;
  
  uVar2 = (ulonglong)(1 - ~(param_3 - (param_1 ^ 0xffffffff) ^ 0xffffffff));
  FUN_166bb22f0(uVar2,param_2,in_stack_00000008,param_4);
  uVar3 = *(ulonglong *)(unaff_RDI + -0x78) ^ uVar2;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x38);
  FUN_1575bf887();
  uVar1 = *(ulonglong *)((uVar1 ^ uVar2) - 0x78);
  FUN_16139865f(FUN_16139865f,~((~uVar3 | uVar1) & (~uVar1 | uVar3)));
  return;
}



// FUNCTION 14d817a41 FUN_14d817a41 body=295 status=ok
// SIG undefined FUN_14d817a41(void)

/* WARNING: Removing unreachable block (ram,0x00014d817ae0) */

void FUN_14d817a41(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar3 = unaff_RBX + param_3 * -2;
  lVar2 = *(longlong *)(unaff_R13 + -0x38) + param_1 + 0x65941a8;
  lVar1 = *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15;
  if ((*(ulonglong *)(unaff_R13 + -0x48) & unaff_R15) == 0) {
    FUN_16648e619(lVar1,lVar2,lVar3);
    return;
  }
  FUN_16648e619(lVar1,lVar2,lVar3);
  return;
}



// FUNCTION 14d817bf5 FUN_14d817bf5 body=325 status=ok
// SIG undefined FUN_14d817bf5(void)

void FUN_14d817bf5(ulonglong param_1)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined4 *)(&stack0x00000008 + unaff_RSI) = 0;
  FUN_1577ff273(param_1 ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d817dc9 FUN_14d817dc9 body=153 status=ok
// SIG undefined FUN_14d817dc9(void)

void FUN_14d817dc9(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBX;
  undefined8 in_stack_00000008;
  
  FUN_156b6e5c5(param_1 ^ unaff_RBX,in_stack_00000008,param_3,FUN_156b6e5c5);
  return;
}



// FUNCTION 14d817e63 FUN_14d817e63 body=149 status=ok
// SIG undefined FUN_14d817e63(void)

void FUN_14d817e63(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x162571ef8)
            (param_1,*(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
                     (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,
             ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
             ~(in_RAX & unaff_R15) & (in_RAX | unaff_R15));
  return;
}



// FUNCTION 14d817eff FUN_14d817eff body=14 status=ok
// SIG undefined FUN_14d817eff(void)

void FUN_14d817eff(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1629c9909(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d818029 FUN_14d818029 body=124 status=ok
// SIG undefined FUN_14d818029(void)

void FUN_14d818029(void)

{
  undefined8 local_res18;
  
  (*(code *)0x164f2657f)(local_res18,0x164f2657f);
  return;
}



// FUNCTION 14d81814e FUN_14d81814e body=606 status=ok
// SIG undefined FUN_14d81814e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8181b6) */
/* WARNING: Removing unreachable block (ram,0x00014d8181bc) */
/* WARNING: Removing unreachable block (ram,0x000160ba3adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14d81814e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_stack_00000018;
  
  uVar1 = FUN_1653e99e7(in_stack_00000018,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d8184d1 FUN_14d8184d1 body=138 status=ok
// SIG undefined FUN_14d8184d1(void)

void FUN_14d8184d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156f1bb29(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d81855e FUN_14d81855e body=83 status=ok
// SIG undefined FUN_14d81855e(void)

undefined8 FUN_14d81855e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8185f2 FUN_14d8185f2 body=143 status=ok
// SIG undefined FUN_14d8185f2(void)

void FUN_14d8185f2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  
  FUN_162780027(param_1,param_2,param_3,in_stack_00000008,in_stack_00000010 ^ param_1);
  return;
}



// FUNCTION 14d818681 FUN_14d818681 body=55 status=ok
// SIG undefined FUN_14d818681(void)

/* WARNING: Removing unreachable block (ram,0x00014d818719) */
/* WARNING: Removing unreachable block (ram,0x00014d81871f) */

void FUN_14d818681(void)

{
  return;
}



// FUNCTION 14d818975 FUN_14d818975 body=275 status=ok
// SIG undefined FUN_14d818975(void)

/* WARNING: Removing unreachable block (ram,0x00014d8189e9) */

void FUN_14d818975(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (-1 < (longlong)
           ((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x80)) &
           (~*(ulonglong *)(unaff_RSI + -0x80) | unaff_RBP))) {
    FUN_15b8a0391();
    return;
  }
  return;
}



// FUNCTION 14d818b18 FUN_14d818b18 body=381 status=ok
// SIG undefined FUN_14d818b18(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166693ce7) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5903) */
/* WARNING: Removing unreachable block (ram,0x00014d818b99) */

undefined8 FUN_14d818b18(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1652c0c07();
  return uVar1;
}



// FUNCTION 14d818b99 FUN_14d818b99 body=72 status=ok
// SIG undefined FUN_14d818b99(void)

undefined8 FUN_14d818b99(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_R13;
  
  *(undefined8 *)(unaff_R13 + param_1) = unaff_RBX;
  return in_RAX;
}



// FUNCTION 14d818d41 FUN_14d818d41 body=156 status=ok
// SIG undefined FUN_14d818d41(void)

ulonglong FUN_14d818d41(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return ~((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x40)) &
          ~(*(ulonglong *)(unaff_RSI + -0x40) & ~unaff_RBP));
}



// FUNCTION 14d818e8a FUN_14d818e8a body=143 status=ok
// SIG undefined FUN_14d818e8a(void)

/* WARNING: Removing unreachable block (ram,0x00014d818faa) */
/* WARNING: Removing unreachable block (ram,0x00014d818fb0) */
/* WARNING: Removing unreachable block (ram,0x000165e7f694) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x000165e7f798 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d818e8a(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong uStackX_20;
  
  FUN_16528f077(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  uVar2 = FUN_166c6b4bc(*(ulonglong *)(unaff_R12 + -0x58) + uStackX_20 +
                        (*(ulonglong *)(unaff_R12 + -0x58) & uStackX_20) * -2,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ uStackX_20,FUN_166c6b4bc);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_166d6b726(~((uVar2 ^ 0xffffffffffffffff | uVar1) & (~(~uVar1 & uVar2) + uVar2) - uVar1));
  FUN_166dc160e();
  return;
}



// FUNCTION 14d818f19 FUN_14d818f19 body=386 status=ok
// SIG undefined FUN_14d818f19(void)

/* WARNING: Removing unreachable block (ram,0x00014d818faa) */
/* WARNING: Removing unreachable block (ram,0x00014d818fb0) */
/* WARNING: Removing unreachable block (ram,0x000165e7f694) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d818f19(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = FUN_166c6b4bc();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_166d6b726(~((uVar2 ^ 0xffffffffffffffff | uVar1) & (~(~uVar1 & uVar2) + uVar2) - uVar1));
  FUN_166dc160e();
  return;
}



// FUNCTION 14d8190a0 FUN_14d8190a0 body=657 status=ok
// SIG undefined FUN_14d8190a0(void)

/* WARNING: Removing unreachable block (ram,0x000165d57e4c) */
/* WARNING: Removing unreachable block (ram,0x000165d57e58) */
/* WARNING: Removing unreachable block (ram,0x000165d57e8e) */
/* WARNING: Removing unreachable block (ram,0x000160da4be2) */
/* WARNING: Removing unreachable block (ram,0x00014df0de31) */
/* WARNING: Removing unreachable block (ram,0x00014d81913e) */
/* WARNING: Removing unreachable block (ram,0x00014df0dd8c) */
/* WARNING: Removing unreachable block (ram,0x00014df0de11) */
/* WARNING: Removing unreachable block (ram,0x00014df0de16) */
/* WARNING: Removing unreachable block (ram,0x00014df0de26) */
/* WARNING: Removing unreachable block (ram,0x00014df0de2b) */
/* WARNING: Removing unreachable block (ram,0x0001659e64fb) */
/* WARNING: Removing unreachable block (ram,0x0001659e64ff) */
/* WARNING: Removing unreachable block (ram,0x0001659e6547) */
/* WARNING: Removing unreachable block (ram,0x0001659e6542) */
/* WARNING: Removing unreachable block (ram,0x0001659e655c) */
/* WARNING: Removing unreachable block (ram,0x00014df0dd0a) */
/* WARNING: Removing unreachable block (ram,0x00014df0dd38) */
/* WARNING: Removing unreachable block (ram,0x00014df0dd86) */
/* WARNING: Removing unreachable block (ram,0x0001567ab644) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8190a0(void)

{
  if (&DAT_fffffffffffffff7 < &stack0xffffffffffffffe0) {
    FUN_161635055();
    return;
  }
  FUN_165d57dbb();
  return;
}



// FUNCTION 14d819205 FUN_14d819205 body=98 status=ok
// SIG undefined FUN_14d819205(void)

void FUN_14d819205(void)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 0x14d819278;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8192a9 thunk_FUN_14d8192af body=5 status=ok
// SIG undefined thunk_FUN_14d8192af(void)

/* WARNING: Removing unreachable block (ram,0x00014d819332) */

void thunk_FUN_14d8192af(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000028;
  
  lVar1 = *(longlong *)(unaff_RSI + 8);
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | in_RAX;
  *(ulonglong *)(unaff_RSI + 8) =
       ~((unaff_RBX + lVar1) - (unaff_RBX & uVar2) & *(ulonglong *)(unaff_RSI + 8));
  in_stack_00000028 = in_stack_00000028 ^ in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RDI;
  uVar3 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = param_1;
  *(undefined8 *)(in_stack_00000028 - 0x10) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 8) = 0x622a686b;
  *(ulonglong *)(in_stack_00000028 - 8) = *(ulonglong *)(in_stack_00000028 - 8) ^ 0x4a9a75a8;
  *(ulonglong *)(in_stack_00000028 - 8) = *(ulonglong *)(in_stack_00000028 - 8) ^ 0x28b01dc3;
  *(longlong *)(in_stack_00000028 - 8) = *(longlong *)(in_stack_00000028 - 8) + 0x16165ae19;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R12;
  *(undefined1 **)(in_stack_00000028 - 0x10) = &LAB_14d7c10f9;
  return;
}



// FUNCTION 14d8192af FUN_14d8192af body=131 status=ok
// SIG undefined FUN_14d8192af(void)

/* WARNING: Removing unreachable block (ram,0x00014d819332) */

void FUN_14d8192af(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000028;
  
  lVar1 = *(longlong *)(unaff_RSI + 8);
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | in_RAX;
  *(ulonglong *)(unaff_RSI + 8) =
       ~((unaff_RBX + lVar1) - (unaff_RBX & uVar2) & *(ulonglong *)(unaff_RSI + 8));
  in_stack_00000028 = in_stack_00000028 ^ in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RDI;
  uVar3 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = param_1;
  *(undefined8 *)(in_stack_00000028 - 0x10) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 8) = 0x622a686b;
  *(ulonglong *)(in_stack_00000028 - 8) = *(ulonglong *)(in_stack_00000028 - 8) ^ 0x4a9a75a8;
  *(ulonglong *)(in_stack_00000028 - 8) = *(ulonglong *)(in_stack_00000028 - 8) ^ 0x28b01dc3;
  *(longlong *)(in_stack_00000028 - 8) = *(longlong *)(in_stack_00000028 - 8) + 0x16165ae19;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R12;
  *(undefined1 **)(in_stack_00000028 - 0x10) = &LAB_14d7c10f9;
  return;
}



// FUNCTION 14d819332 FUN_14d819332 body=13 status=ok
// SIG undefined FUN_14d819332(void)

void FUN_14d819332(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  
                    /* WARNING: Could not recover jumptable at 0x00014d81933d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14d8194fd FUN_14d8194fd body=572 status=ok
// SIG undefined FUN_14d8194fd(void)

void FUN_14d8194fd(short *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  short unaff_R14W;
  undefined8 unaff_R15;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  *param_1 = (-0x101 - unaff_R14W) + *param_1;
  bVar15 = (local_res18 & 0x4000) != 0;
  bVar14 = (local_res18 & 0x200) != 0;
  bVar13 = (local_res18 & 0x100) != 0;
  bVar12 = (local_res18 & 0x10) != 0;
  bVar19 = (local_res18 & 0x200000) != 0;
  bVar16 = (local_res18 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  plVar2 = (longlong *)(local_res20 + -8);
  *plVar2 = 0;
  *plVar2 = *plVar2 + param_3;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  puVar8 = &LAB_161dbd5c4;
  uVar10 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) = *(longlong *)(local_res20 + -0x10) + *plVar2;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined4 *)(local_res20 + -0x20) = 0x6d7c9b1d;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  *(undefined8 *)(local_res20 + -0x28) = 0x14d819599;
  uVar6 = FUN_161dbd582(uStackX_8);
  uVar9 = *(ulonglong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x20) = uVar10;
  *(ulonglong *)(local_res20 + -0x28) = uVar9;
  lVar3 = *(longlong *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = param_2;
  uVar7 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x20) = uVar6;
  *(undefined4 *)(local_res20 + -0x20) = 0;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  uVar4 = *(ulonglong *)(local_res20 + -0x20);
  uVar10 = *(undefined8 *)(local_res20 + -0x18);
  *(longlong *)(local_res20 + -0x20) = local_res20 + -0x18;
  puVar1 = (undefined8 *)
           (*(longlong *)(local_res20 + -0x20) + 8 +
           (uVar4 ^ ((lVar3 - unaff_RDI) + (uVar9 | unaff_RDI) * 2 + uVar9 * -2) - unaff_retaddr));
  *puVar1 = 0x5456b36d;
  pcVar11 = FUN_15712d522;
  puVar1[-1] = 0x14d819623;
  FUN_15712d522(uVar10);
  puVar1[1] = *(undefined8 *)(unaff_RSI + -0x88);
  uVar10 = *puVar1;
  *puVar1 = *(undefined8 *)(unaff_RSI + -8);
  plVar2 = puVar1 + -1;
  puVar1[-2] = uVar7;
  *plVar2 = local_res10;
  uVar9 = puVar1[-2];
  puVar1[-2] = local_res10;
  lVar3 = *(longlong *)(unaff_RSI + -0x98);
  *plVar2 = 0;
  *plVar2 = *plVar2 + ~-lVar3 + 1U;
  uVar7 = puVar1[-2];
  puVar1[-2] = uVar10;
  puVar1[-3] = uVar10;
  uVar10 = *(undefined8 *)(unaff_RSI + -0xa0);
  puVar1[-4] = unaff_RBX;
  puVar1[-2] = uVar10;
  lVar3 = puVar1[-4];
  puVar1[-2] = uVar7;
  puVar1[-3] = 0x14d8196d6;
  FUN_1566acf0c();
  uVar10 = puVar1[-2];
  uVar9 = (ulonglong)puVar8 & ~(~uVar9 & 0x12fef91e);
  lVar5 = *plVar2;
  *plVar2 = lVar3;
  uVar9 = (uVar9 | (ulonglong)pcVar11) & (~(ulonglong)pcVar11 | ~uVar9);
  lVar3 = *plVar2;
  puVar1[-1] = (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
               (ulonglong)(bVar14 & 1) * 0x200 | (ulonglong)(bVar13 & 1) * 0x100 |
               (ulonglong)((longlong)uVar9 < 0) * 0x80 | (ulonglong)(uVar9 == 0) * 0x40 |
               (ulonglong)(bVar12 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar9 & 0xff) & 1U) == 0) * 4
               | (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
               (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
  puVar1[-1] = lVar3;
  puVar1[-2] = lVar3;
  puVar1[-1] = &LAB_14d81973c;
  FUN_16125cbd1(uVar10,FUN_16125cbd1,lVar5);
  return;
}



// FUNCTION 14d8197d4 thunk_FUN_14d8197da body=5 status=ok
// SIG undefined thunk_FUN_14d8197da(void)

/* WARNING: Removing unreachable block (ram,0x000166c407c7) */
/* WARNING: Removing unreachable block (ram,0x0001565b3525) */
/* WARNING: Removing unreachable block (ram,0x000164b5db32) */
/* WARNING: Removing unreachable block (ram,0x000164b5db38) */
/* WARNING: Removing unreachable block (ram,0x00014d81989a) */
/* WARNING: Removing unreachable block (ram,0x00014d81992c) */
/* WARNING: Removing unreachable block (ram,0x00014d819932) */
/* WARNING: Removing unreachable block (ram,0x00014d8199cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8199d0) */
/* WARNING: Removing unreachable block (ram,0x00014d8199db) */
/* WARNING: Removing unreachable block (ram,0x00014d8199d6) */
/* WARNING: Removing unreachable block (ram,0x000164b5daa1) */
/* WARNING: Removing unreachable block (ram,0x000166c40774) */
/* WARNING: Removing unreachable block (ram,0x000166c407fa) */
/* WARNING: Removing unreachable block (ram,0x000157051852) */
/* WARNING: Removing unreachable block (ram,0x000166c40800) */
/* WARNING: Removing unreachable block (ram,0x000166c40827) */
/* WARNING: Removing unreachable block (ram,0x000166c40889) */
/* WARNING: Removing unreachable block (ram,0x000166c4088f) */
/* WARNING: Removing unreachable block (ram,0x000160d89f77) */
/* WARNING: Removing unreachable block (ram,0x00014d819883) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_14d8197da(void)

{
  uint in_EAX;
  
  return ~in_EAX;
}



// FUNCTION 14d8197da FUN_14d8197da body=511 status=ok
// SIG undefined FUN_14d8197da(void)

/* WARNING: Removing unreachable block (ram,0x000166c407c7) */
/* WARNING: Removing unreachable block (ram,0x0001565b3525) */
/* WARNING: Removing unreachable block (ram,0x000164b5db32) */
/* WARNING: Removing unreachable block (ram,0x000164b5db38) */
/* WARNING: Removing unreachable block (ram,0x00014d81989a) */
/* WARNING: Removing unreachable block (ram,0x00014d81992c) */
/* WARNING: Removing unreachable block (ram,0x00014d819932) */
/* WARNING: Removing unreachable block (ram,0x00014d8199cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8199d0) */
/* WARNING: Removing unreachable block (ram,0x00014d8199db) */
/* WARNING: Removing unreachable block (ram,0x00014d8199d6) */
/* WARNING: Removing unreachable block (ram,0x000164b5daa1) */
/* WARNING: Removing unreachable block (ram,0x000166c40774) */
/* WARNING: Removing unreachable block (ram,0x000166c407fa) */
/* WARNING: Removing unreachable block (ram,0x000157051852) */
/* WARNING: Removing unreachable block (ram,0x000166c40800) */
/* WARNING: Removing unreachable block (ram,0x000166c40827) */
/* WARNING: Removing unreachable block (ram,0x000166c40889) */
/* WARNING: Removing unreachable block (ram,0x000166c4088f) */
/* WARNING: Removing unreachable block (ram,0x000160d89f77) */
/* WARNING: Removing unreachable block (ram,0x00014d819883) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14d8197da(void)

{
  uint in_EAX;
  
  return ~in_EAX;
}



// FUNCTION 14d8199db FUN_14d8199db body=269 status=ok
// SIG undefined FUN_14d8199db(void)

void FUN_14d8199db(void)

{
  FUN_15b178087();
  return;
}



// FUNCTION 14d819bc3 FUN_14d819bc3 body=150 status=ok
// SIG undefined FUN_14d819bc3(void)

/* WARNING: Removing unreachable block (ram,0x00014d819c4a) */
/* WARNING: Removing unreachable block (ram,0x00014d819c56) */
/* WARNING: Removing unreachable block (ram,0x00014d819c5b) */

void FUN_14d819bc3(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162429332((param_1 + in_R10) - ~param_3,0xffffffffffffffc8,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d819c5b FUN_14d819c5b body=154 status=ok
// SIG undefined FUN_14d819c5b(void)

void FUN_14d819c5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1570d5243(param_1,param_2,param_3,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14d819e45 FUN_14d819e45 body=263 status=ok
// SIG undefined FUN_14d819e45(void)

void FUN_14d819e45(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = FUN_1666bb4c7(param_1,param_2,FUN_1666bb4c7,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_1566b81ed(~(uVar1 & uVar2) & (~(uVar1 & uVar2) + uVar2) - ~uVar1,
                *(ulonglong *)(unaff_R12 + -0x78) ^ uVar2);
  return;
}



// FUNCTION 14d819f54 FUN_14d819f54 body=136 status=ok
// SIG undefined FUN_14d819f54(void)

void FUN_14d819f54(undefined8 param_1,undefined8 param_2)

{
  FUN_157561bc5(param_1,param_2,FUN_157561bc5);
  return;
}



// FUNCTION 14d81a185 FUN_14d81a185 body=47 status=ok
// SIG undefined FUN_14d81a185(void)

void FUN_14d81a185(void)

{
  return;
}



// FUNCTION 14d81a22e FUN_14d81a22e body=44 status=ok
// SIG undefined FUN_14d81a22e(void)

void FUN_14d81a22e(void)

{
  return;
}



// FUNCTION 14d81a58b FUN_14d81a58b body=260 status=ok
// SIG undefined FUN_14d81a58b(void)

/* WARNING: Removing unreachable block (ram,0x00014d81a5cd) */
/* WARNING: Removing unreachable block (ram,0x00014d81a683) */

void FUN_14d81a58b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar7 = *(ulonglong *)(unaff_RDI + -0x38) ^ 0xac91427a73ca2b2b;
  lVar6 = -0x40;
  lVar5 = local_res20 + -1;
  uVar3 = FUN_160eeb2e5(&DAT_ac91427a73ca2b2b,lVar5,
                        CONCAT62((int6)((ulonglong)param_3 >> 0x10),0xc1c) ^ 0xacdf);
  uVar4 = ((ushort)local_res18 | 0x100) - 0x100;
  if (-1 < (short)uVar4) {
    FUN_164a7a509();
    return;
  }
  LOCK();
  bVar2 = (byte)uVar3;
  bVar8 = bVar2 < DAT_14d7ac2e4;
  bVar9 = SBORROW1(bVar2,DAT_14d7ac2e4);
  cVar1 = bVar2 - DAT_14d7ac2e4;
  if (cVar1 == '\0') {
    DAT_14d7ac2e4 = (byte)local_res10;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),DAT_14d7ac2e4);
  }
  UNLOCK();
  *(ulonglong *)(lVar6 + -8) = uVar7;
  *(ulonglong *)(lVar6 + -0x10) = uVar7;
  *(ulonglong *)(lVar6 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar9 * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar8 |
       (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar6 + -0x20) = uVar3;
  *(undefined8 *)(lVar6 + -0x28) = uVar3;
  *(undefined4 *)(lVar6 + -0x28) = 0x11b9b65e;
  *(undefined4 *)(lVar6 + -0x24) = 0;
  uVar7 = *(ulonglong *)(lVar6 + -0x28);
  *(undefined8 *)(lVar6 + -0x28) = 0x3202b96;
  *(ulonglong *)(lVar6 + -0x28) = *(longlong *)(lVar6 + -0x28) - (uVar7 ^ 0x10b9876a);
  *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(lVar6 + -0x28);
  FUN_165c7153c(local_res10,lVar5,local_res8,param_4);
  return;
}



// FUNCTION 14d81a78c FUN_14d81a78c body=726 status=ok
// SIG undefined FUN_14d81a78c(void)

/* WARNING: Removing unreachable block (ram,0x00015725c2d5) */
/* WARNING: Removing unreachable block (ram,0x00015725c2db) */
/* WARNING: Removing unreachable block (ram,0x00015725c2e0) */
/* WARNING: Removing unreachable block (ram,0x00014d81a8d4) */
/* WARNING: Removing unreachable block (ram,0x00014d81a950) */
/* WARNING: Removing unreachable block (ram,0x00014d81a955) */
/* WARNING: Removing unreachable block (ram,0x00014d81a969) */
/* WARNING: Removing unreachable block (ram,0x00015725c244) */
/* WARNING: Removing unreachable block (ram,0x00014d81a96f) */

undefined8 FUN_14d81a78c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  uVar2 = FUN_15b5d3eb7();
  uVar2 = local_res18 ^ uVar2;
  *(undefined8 *)(uVar2 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x1622b0529;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x20) = uVar1;
  *(undefined **)(uVar2 - 0x10) = &DAT_14d7c07aa;
  return local_res8;
}



// FUNCTION 14d81aa9a FUN_14d81aa9a body=173 status=ok
// SIG undefined FUN_14d81aa9a(void)

void FUN_14d81aa9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort *unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *(undefined8 *)(local_res20 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined8 *)(local_res20 + -0x20) = uVar1;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x30) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x38) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_14d81ab49;
  *(undefined1 **)(local_res20 + -0x30) = &LAB_1572108dd;
  return;
}



// FUNCTION 14d81abdb FUN_14d81abdb body=154 status=ok
// SIG undefined FUN_14d81abdb(void)

void FUN_14d81abdb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1616fe48f(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d81af1e FUN_14d81af1e body=137 status=ok
// SIG undefined FUN_14d81af1e(void)

void FUN_14d81af1e(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_R10;
  undefined8 unaff_R14;
  byte in_TF;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)register0x00000020;
  if ((in_TF & 1) == 0) {
    puVar1 = (undefined8 *)local_res8;
  }
  *puVar1 = param_1;
  puVar1[-1] = in_R10;
  puVar1[-2] = unaff_R14;
  FUN_160f20e3e(0x7e5b509);
  return;
}



// FUNCTION 14d81b326 FUN_14d81b326 body=268 status=ok
// SIG undefined FUN_14d81b326(void)

/* WARNING: Removing unreachable block (ram,0x00014d81b3ce) */

void FUN_14d81b326(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_156cf9d1f();
  FUN_166c6719b(FUN_166c6719b,unaff_RDI + (param_2 & 0x156cf9d1f) * -2,param_3);
  return;
}



// FUNCTION 14d81b8e8 FUN_14d81b8e8 body=66 status=ok
// SIG undefined FUN_14d81b8e8(void)

void FUN_14d81b8e8(void)

{
  return;
}



// FUNCTION 14d81b981 FUN_14d81b981 body=169 status=ok
// SIG undefined FUN_14d81b981(void)

void FUN_14d81b981(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_162e6f433(param_1,param_2,local_res10,param_4,param_3);
  return;
}



// FUNCTION 14d81ba31 FUN_14d81ba31 body=193 status=ok
// SIG undefined FUN_14d81ba31(void)

undefined8 FUN_14d81ba31(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d81bb87 FUN_14d81bb87 body=146 status=ok
// SIG undefined FUN_14d81bb87(void)

void FUN_14d81bb87(void)

{
  FUN_15643be3c();
  return;
}



// FUNCTION 14d81bdd9 FUN_14d81bdd9 body=107 status=ok
// SIG undefined FUN_14d81bdd9(void)

void FUN_14d81bdd9(void)

{
  return;
}



// FUNCTION 14d81be82 FUN_14d81be82 body=153 status=ok
// SIG undefined FUN_14d81be82(void)

/* WARNING: Removing unreachable block (ram,0x0001666df9b3) */
/* WARNING: Removing unreachable block (ram,0x0001666df9be) */
/* WARNING: Removing unreachable block (ram,0x00014d81bf12) */
/* WARNING: Removing unreachable block (ram,0x00014d81bf18) */
/* WARNING: Removing unreachable block (ram,0x00014d81bf1d) */
/* WARNING: Removing unreachable block (ram,0x00014d81bfb9) */
/* WARNING: Removing unreachable block (ram,0x00014d81bfb4) */
/* WARNING: Removing unreachable block (ram,0x00016614afc8) */
/* WARNING: Removing unreachable block (ram,0x00016614afce) */
/* WARNING: Removing unreachable block (ram,0x00016614afd3) */
/* WARNING: Removing unreachable block (ram,0x0001666df77f) */
/* WARNING: Removing unreachable block (ram,0x0001666df894) */
/* WARNING: Removing unreachable block (ram,0x0001666df89a) */
/* WARNING: Removing unreachable block (ram,0x00015760fe90) */
/* WARNING: Removing unreachable block (ram,0x000165f35498) */
/* WARNING: Removing unreachable block (ram,0x000165f354a3) */
/* WARNING: Removing unreachable block (ram,0x000165f3549e) */
/* WARNING: Removing unreachable block (ram,0x0001666df8ce) */
/* WARNING: Removing unreachable block (ram,0x0001666df8d3) */
/* WARNING: Removing unreachable block (ram,0x0001666df921) */
/* WARNING: Removing unreachable block (ram,0x000156955d04) */
/* WARNING: Removing unreachable block (ram,0x0001666df927) */
/* WARNING: Removing unreachable block (ram,0x0001666df9ae) */
/* WARNING: Removing unreachable block (ram,0x0001666df9b9) */
/* WARNING: Removing unreachable block (ram,0x000161442765) */
/* WARNING: Removing unreachable block (ram,0x000165f35385) */
/* WARNING: Removing unreachable block (ram,0x00016144281f) */
/* WARNING: Removing unreachable block (ram,0x000161442825) */
/* WARNING: Removing unreachable block (ram,0x000161442830) */

void FUN_14d81be82(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  uVar3 = ~(local_res8[1] & param_1) & (*(ulonglong *)((longlong)local_res8 + param_4) | param_1);
  uVar4 = param_1 + local_res8[2] + ~(~local_res8[2] | ~param_1) * -2;
  param_1 = local_res8[3] ^ param_1;
  local_res8[2] = uVar4 & 0xfffffffffffffeff;
  *(undefined8 *)(param_1 - 8) = unaff_RBP;
  *(undefined8 *)(param_1 - 0x10) = unaff_RDI;
  local_res8[0] = param_3;
  local_res8[1] = uVar3;
  local_res8[3] = param_1;
  if ((uVar4 & 1) != 0) {
    FUN_1663333ea();
    return;
  }
  uVar2 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = unaff_R13;
  uVar1 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = unaff_R12;
  *(undefined8 *)(param_1 - 0x18) = in_RAX;
  *(undefined4 *)(param_1 - 0x18) = 0x4fb28549;
  *(undefined4 *)(param_1 - 0x14) = 0;
  *(undefined8 *)(param_1 - 0x18) = unaff_RSI;
  *(undefined8 *)(param_1 - 0x20) = uVar2;
  *(undefined8 *)(param_1 - 0x18) = uVar1;
  *(code **)(param_1 - 0x18) = FUN_16633348c;
  uVar2 = FUN_16554193d();
  *(undefined8 *)(param_1 - 0x10) = uVar2;
  *(undefined4 *)(param_1 - 0x10) = 0x3c7e56f9;
  *(uint *)(param_1 - 0x10) = *(uint *)(param_1 - 0x10) ^ 0x17e6f06a;
  *(uint *)(param_1 - 0x10) = *(uint *)(param_1 - 0x10) ^ 0x6c9249ef;
  *(undefined4 *)(param_1 - 0xc) = 0;
  *(undefined8 *)(param_1 - 0x10) = uVar2;
  *(undefined4 *)(param_1 - 0x10) = 0x79ff502a;
  *(undefined4 *)(param_1 - 0xc) = 0;
  *(ulonglong *)(param_1 - 0x10) = uVar3;
  uVar2 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(param_1 - 0x18) = unaff_retaddr;
  *(code **)(param_1 - 0x10) = FUN_166333547;
  FUN_162c8334a(uVar2,param_2 + unaff_R15 + (param_2 & unaff_R15) * -2);
  return;
}



// FUNCTION 14d81bf1d thunk_FUN_14d81bf23 body=5 status=ok
// SIG undefined thunk_FUN_14d81bf23(void)

/* WARNING: Removing unreachable block (ram,0x0001666df9b3) */
/* WARNING: Removing unreachable block (ram,0x0001666df9be) */
/* WARNING: Removing unreachable block (ram,0x0001666df8ce) */
/* WARNING: Removing unreachable block (ram,0x0001666df9b9) */
/* WARNING: Removing unreachable block (ram,0x0001666df89a) */
/* WARNING: Removing unreachable block (ram,0x0001666df921) */
/* WARNING: Removing unreachable block (ram,0x0001666df927) */
/* WARNING: Removing unreachable block (ram,0x000156955d04) */
/* WARNING: Removing unreachable block (ram,0x00016614afd3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d81bf23(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong in_stack_00000018;
  
  *(undefined8 *)(&stack0x2833106c + unaff_retaddr) = 0;
  *(longlong *)(&stack0x2833106c + unaff_retaddr) =
       *(longlong *)(&stack0x2833106c + unaff_retaddr) + unaff_RBX;
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  if (((~unaff_R15 | in_stack_00000018) & (in_stack_00000018 ^ 0xffffffffffffffff | unaff_R15)) == 0
     ) {
    return;
  }
  FUN_15b4d17cb();
  if ((uVar1 ^ unaff_R15) != 0x90) {
    FUN_14da0b122(0xfffffffffffffff8);
    return;
  }
  FUN_1666df77f();
  return;
}



// FUNCTION 14d81bf23 FUN_14d81bf23 body=169 status=ok
// SIG undefined FUN_14d81bf23(void)

/* WARNING: Removing unreachable block (ram,0x0001666df9b3) */
/* WARNING: Removing unreachable block (ram,0x0001666df9be) */
/* WARNING: Removing unreachable block (ram,0x0001666df8ce) */
/* WARNING: Removing unreachable block (ram,0x0001666df9b9) */
/* WARNING: Removing unreachable block (ram,0x0001666df89a) */
/* WARNING: Removing unreachable block (ram,0x0001666df921) */
/* WARNING: Removing unreachable block (ram,0x0001666df927) */
/* WARNING: Removing unreachable block (ram,0x000156955d04) */
/* WARNING: Removing unreachable block (ram,0x00016614afd3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d81bf23(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  ulonglong in_stack_00000018;
  
  *(undefined8 *)(&stack0x2833106c + unaff_retaddr) = 0;
  *(longlong *)(&stack0x2833106c + unaff_retaddr) =
       *(longlong *)(&stack0x2833106c + unaff_retaddr) + unaff_RBX;
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  if (((~unaff_R15 | in_stack_00000018) & (in_stack_00000018 ^ 0xffffffffffffffff | unaff_R15)) == 0
     ) {
    return;
  }
  FUN_15b4d17cb();
  if ((uVar1 ^ unaff_R15) != 0x90) {
    FUN_14da0b122(0xfffffffffffffff8);
    return;
  }
  FUN_1666df77f();
  return;
}



// FUNCTION 14d81c18a FUN_14d81c18a body=47 status=ok
// SIG undefined FUN_14d81c18a(void)

/* WARNING: Instruction at (ram,0x00014d81c1b7) overlaps instruction at (ram,0x00014d81c1b4)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d81c1ed) */

void FUN_14d81c18a(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0x6c791c34) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)0x15b901a05)();
  return;
}



// FUNCTION 14d81c3ff FUN_14d81c3ff body=411 status=ok
// SIG undefined FUN_14d81c3ff(void)

/* WARNING: Removing unreachable block (ram,0x00014d81c476) */

void FUN_14d81c3ff(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = *(longlong *)(unaff_RSI + -0x88);
  uVar2 = FUN_1626f5173(param_1,*(ulonglong *)(unaff_RSI + -0x58) ^ (ulonglong)unaff_RBP,param_3);
  uVar4 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP ^ 0xffffffffffffffff;
  *unaff_RBP = *unaff_RBP | uVar2;
  *unaff_RBP = 0xffffffffffffffff - ((~uVar2 | uVar4) & *unaff_RBP);
  lVar3 = FUN_166bc1952();
  uVar4 = *(ulonglong *)(lVar1 + -0x88);
  uVar4 = (uVar4 | 0xfffffffe9943e6ad) & (0xffffffffffffffff - uVar4 | 0x166bc1952) ^
          0xffffffffffffffff;
  (*(code *)0x16499c130)
            (0xffffffffffffff78,uVar4,uVar4,
             (~param_4 | 0xfffffffe9943e6ad) & ~(0xffffffffffffffffU - lVar3 & 0xfffffffe9943e6ad));
  return;
}



// FUNCTION 14d81c5a3 FUN_14d81c5a3 body=517 status=ok
// SIG undefined FUN_14d81c5a3(void)

/* WARNING: Removing unreachable block (ram,0x00014d81c6e4) */

void FUN_14d81c5a3(void)

{
  undefined8 in_RAX;
  ulonglong *puVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_TF;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_8;
  
  local_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  puVar1 = &local_8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar1 = (ulonglong *)register0x00000020;
  }
  *(undefined8 *)((longlong)puVar1 + -8) = in_RAX;
  *(undefined4 *)((longlong)puVar1 + -8) = 0x9e9dcd8;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  *(undefined8 *)((longlong)puVar1 + *(longlong *)((longlong)puVar1 + -8) + -0x9e9dcd8) =
       0x14d81c63d;
  FUN_16185d808();
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15)) {
    FUN_1563f675c();
    return;
  }
  FUN_1563f675c();
  return;
}



// FUNCTION 14d81c7b2 FUN_14d81c7b2 body=85 status=ok
// SIG undefined FUN_14d81c7b2(void)

void FUN_14d81c7b2(void)

{
  ulonglong *puVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *puVar1 = unaff_RDI;
  *(undefined **)(local_res18 + -0x10) = &DAT_14d81c81e;
  *(undefined **)(local_res18 + -0x18) = &DAT_14d81c81e;
  *(ulonglong *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = 0x6a1314f9;
  *puVar1 = *puVar1 ^ 0x6a1314f9;
  *puVar1 = *puVar1 ^ *(ulonglong *)(local_res18 + -0x18);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d81c86c FUN_14d81c86c body=498 status=ok
// SIG undefined FUN_14d81c86c(void)

/* WARNING: Removing unreachable block (ram,0x00014d81c9ba) */
/* WARNING: Removing unreachable block (ram,0x00014d81c9c0) */
/* WARNING: Removing unreachable block (ram,0x0001623a7a61) */
/* WARNING: Removing unreachable block (ram,0x00015afcc5dd) */
/* WARNING: Removing unreachable block (ram,0x00015afcc5e3) */
/* WARNING: Removing unreachable block (ram,0x00014d81c963) */
/* WARNING: Removing unreachable block (ram,0x00014d81c97a) */
/* WARNING: Removing unreachable block (ram,0x00014d81c97f) */
/* WARNING: Removing unreachable block (ram,0x00014d81c922) */
/* WARNING: Removing unreachable block (ram,0x00014d81c937) */
/* WARNING: Removing unreachable block (ram,0x00014d81c917) */

undefined8 FUN_14d81c86c(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong in_R9;
  ulonglong in_stack_00000008;
  
  if (in_stack_00000008 == ~in_R9) {
    return in_RAX;
  }
  if (in_stack_00000008 != 0xcbfed) {
    if (in_stack_00000008 != 0xcbfee) {
      uVar1 = FUN_162219096();
      return uVar1;
    }
    return in_RAX;
  }
  uVar1 = FUN_165e93f27();
  return uVar1;
}



// FUNCTION 14d81ca5f FUN_14d81ca5f body=166 status=ok
// SIG undefined FUN_14d81ca5f(void)

void FUN_14d81ca5f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x165d5a65e)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d81d0ac FUN_14d81d0ac body=81 status=ok
// SIG undefined FUN_14d81d0ac(void)

void FUN_14d81d0ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d81d200 FUN_14d81d200 body=163 status=ok
// SIG undefined FUN_14d81d200(void)

/* WARNING: Removing unreachable block (ram,0x00014d81d298) */

void FUN_14d81d200(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = -1 - ((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x50)) &
               (*(ulonglong *)(unaff_RDI + -0x50) ^ 0xffffffffffffffff | param_1));
  if (*(longlong *)(unaff_RDI + -0x30) != 0) {
    FUN_164855aab(param_1,lVar1,-*(longlong *)(unaff_RDI + -0x30),~param_1);
    return;
  }
  FUN_164855aab(param_1,lVar1,0,~param_1);
  return;
}



// FUNCTION 14d81d31e FUN_14d81d31e body=195 status=ok
// SIG undefined FUN_14d81d31e(void)

void FUN_14d81d31e(undefined8 param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong in_R10;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_res18 [4];
  
  lVar3 = in_R10 - (local_res8 ^ 0x41a50447);
  local_res8 = lVar3;
  puVar1 = (uint *)((longlong)local_res18 + lVar3);
  *(undefined8 *)puVar1 = in_RAX;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x5afe;
  piVar2 = (int *)((longlong)local_res18 + lVar3 + -8);
  *piVar2 = 0x10f596ed;
  *piVar2 = *piVar2 + 0x5dd1fda5;
  *(undefined4 *)((longlong)&local_res8 + lVar3) = 0x431bba27;
  *(undefined4 *)((longlong)&local_res8 + lVar3 + 4) = 0;
  *(undefined4 *)
   ((longlong)local_res18 +
   (*(ulonglong *)((longlong)&local_res8 + lVar3) ^ 0x431bba23) + lVar3 + -8) = 0;
  *(undefined8 *)((longlong)local_res18 + lVar3 + -8) = unaff_RDI;
  *(undefined8 *)((longlong)local_res18 + lVar3 + -8) = local_res10;
  *(undefined8 *)((longlong)&local_res8 + lVar3) = param_1;
  (*(code *)&LAB_14e0dc562)(&LAB_14e0dc562);
  return;
}



// FUNCTION 14d81d52b FUN_14d81d52b body=133 status=ok
// SIG undefined FUN_14d81d52b(void)

/* WARNING: Removing unreachable block (ram,0x00014d81d62a) */
/* WARNING: Removing unreachable block (ram,0x00014d81d5a6) */
/* WARNING: Removing unreachable block (ram,0x00014d81d5b1) */
/* WARNING: Removing unreachable block (ram,0x00014d81d62d) */
/* WARNING: Removing unreachable block (ram,0x00014d81d652) */
/* WARNING: Removing unreachable block (ram,0x00014d81d658) */
/* WARNING: Removing unreachable block (ram,0x0001571d8893) */
/* WARNING: Removing unreachable block (ram,0x00014d81d5ac) */

void FUN_14d81d52b(void)

{
  FUN_1616d55bd();
  return;
}



// FUNCTION 14d81d5b1 FUN_14d81d5b1 body=337 status=ok
// SIG undefined FUN_14d81d5b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d81d62a) */
/* WARNING: Removing unreachable block (ram,0x00014d81d658) */

void FUN_14d81d5b1(void)

{
  FUN_14de6b3c9();
  return;
}



// FUNCTION 14d81d844 FUN_14d81d844 body=295 status=ok
// SIG undefined FUN_14d81d844(void)

/* WARNING: Removing unreachable block (ram,0x00014d81d8bb) */
/* WARNING: Removing unreachable block (ram,0x00014d81d91a) */
/* WARNING: Removing unreachable block (ram,0x00014d81d942) */

void FUN_14d81d844(void)

{
  return;
}



// FUNCTION 14d81daf3 FUN_14d81daf3 body=177 status=ok
// SIG undefined FUN_14d81daf3(void)

void FUN_14d81daf3(void)

{
  FUN_160c32100();
  return;
}



// FUNCTION 14d81dc1e FUN_14d81dc1e body=127 status=ok
// SIG undefined FUN_14d81dc1e(void)

void FUN_14d81dc1e(undefined8 param_1,undefined8 param_2)

{
  ushort unaff_BP;
  ushort in_R10W;
  undefined8 in_stack_00000008;
  
  if ((ushort)((~in_R10W & ~unaff_BP | in_R10W) + unaff_BP) == -1) {
    (*(code *)0x15b24baad)();
    return;
  }
  FUN_15b24bab8(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d81dda3 FUN_14d81dda3 body=150 status=ok
// SIG undefined FUN_14d81dda3(void)

void FUN_14d81dda3(void)

{
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined **)(local_res10 + -0x18) = &DAT_1566b4fad;
  return;
}



// FUNCTION 14d81de39 FUN_14d81de39 body=154 status=ok
// SIG undefined FUN_14d81de39(void)

void FUN_14d81de39(longlong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = ~*(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | unaff_R15;
  *(ulonglong *)(param_1 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(param_1 + 8));
  uVar1 = local_res20 ^ unaff_R15;
                    /* WARNING: Read-only address (ram,0x00014d7a65cc) is written */
  LOCK();
  uRam000000014d7a65cc = (undefined1)in_RAX;
  UNLOCK();
  *(ulonglong *)(uVar1 - 0x10) = in_RAX & 0xffffffffffffff00;
  *(ulonglong *)(uVar1 - 0x18) = in_RAX & 0xffffffffffffff00;
  *(undefined **)(uVar1 - 0x10) = &DAT_15748b599;
  FUN_15748b596(unaff_retaddr,local_res8);
  return;
}



// FUNCTION 14d81ded3 FUN_14d81ded3 body=145 status=ok
// SIG undefined FUN_14d81ded3(void)

void FUN_14d81ded3(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  short sStackX_18;
  ulonglong uStackX_20;
  
  param_1 = param_1 + (unaff_RSI + in_R10) * -2;
  uVar5 = *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15;
  uVar4 = FUN_14d8afdab(param_1,0xffffffffffffffc8,
                        *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                        *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                        ~(~*(ulonglong *)(unaff_R13 + -0x60) | ~unaff_R15) * -2);
  uVar1 = uStackX_20 ^ unaff_R15;
  if ((ushort)(0xffffU - sStackX_18 | 0x100) == 0) {
    return;
  }
  *(longlong *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000010;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar2;
  *(undefined8 *)(uVar1 - 0x18) = 1;
  *(undefined8 *)(uVar1 - 0x20) = uVar4;
  *(undefined4 *)(uVar1 - 0x20) = 0;
  *(uint *)(uVar1 - 0x20) = *(uint *)(uVar1 - 0x20) ^ 0x888bbade;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  *(uint *)(uVar1 - 0x1c) = *(uint *)(uVar1 - 0x1c) ^ 0xffffffff;
  lVar3 = *(longlong *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined1 **)(uVar1 + lVar3 + 0x7774451a) = &LAB_164f5c5ce;
  *(ulonglong *)(uVar1 - 0x18) = uVar5;
  *(ulonglong *)(uVar1 - 0x20) = uVar5;
  *(ulonglong *)(uVar1 - 0x28) = uVar5;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_1568eb41f;
  *(undefined8 *)(uVar1 - 0x20) = 0x164f5c5b2;
  return;
}



// FUNCTION 14d81df64 FUN_14d81df64 body=308 status=ok
// SIG undefined FUN_14d81df64(void)

void FUN_14d81df64(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  short local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  if ((ushort)(0xffffU - local_res18 | 0x100) == 0) {
    return;
  }
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000010;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar2;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = in_RAX;
  *(undefined4 *)(uVar1 - 0x20) = 0;
  *(uint *)(uVar1 - 0x20) = *(uint *)(uVar1 - 0x20) ^ 0x888bbade;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  *(uint *)(uVar1 - 0x1c) = *(uint *)(uVar1 - 0x1c) ^ 0xffffffff;
  lVar3 = *(longlong *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined1 **)(uVar1 + lVar3 + 0x7774451a) = &LAB_164f5c5ce;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_1568eb41f;
  *(undefined8 *)(uVar1 - 0x20) = 0x164f5c5b2;
  return;
}



// FUNCTION 14d81dffb FUN_14d81dffb body=952 status=ok
// SIG undefined FUN_14d81dffb(void)

/* WARNING: Removing unreachable block (ram,0x00014d81e095) */
/* WARNING: Removing unreachable block (ram,0x00014d81e09b) */
/* WARNING: Removing unreachable block (ram,0x000164f195b7) */
/* WARNING: Removing unreachable block (ram,0x000164f19602) */
/* WARNING: Removing unreachable block (ram,0x000156ae868d) */

void FUN_14d81dffb(ulonglong param_1)

{
  uint unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)unaff_ESI;
  if ((int)unaff_ESI < 0) {
    uVar1 = CONCAT44(0xb582f10f,unaff_ESI) ^ 0x4a7d0ef000000000;
  }
  FUN_162314188(param_1,CONCAT62((int6)(uVar1 >> 0x10),
                                 ((ushort)*(ulonglong *)(unaff_RDI + -0x70) & 0x7f) * 0x100),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  return;
}



// FUNCTION 14d81e24d FUN_14d81e24d body=143 status=ok
// SIG undefined FUN_14d81e24d(void)

undefined8 FUN_14d81e24d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d81e62f FUN_14d81e62f body=324 status=ok
// SIG undefined FUN_14d81e62f(void)

/* WARNING: Removing unreachable block (ram,0x00014d81e6e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d81e62f(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  longlong unaff_RBP;
  
  param_2 = param_2 + unaff_RBP;
  puVar1 = (ulonglong *)(param_2 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 - (~in_RAX + 1);
  uVar2 = *puVar1;
  *(undefined4 *)puVar1 = 0x1605c9d;
  *(undefined4 *)(param_2 + -4) = 0;
  *puVar1 = *puVar1;
  uVar3 = *puVar1;
  *(undefined4 *)puVar1 = 0x1aefbfbb;
  *(undefined4 *)(param_2 + -4) = 0;
  uVar3 = (*puVar1 ^ 0x1aefbfbb) + (uVar3 - 0x1605c95);
  *puVar1 = uVar3;
  param_2 = *puVar1 + param_2;
  *(ulonglong *)(param_2 + -8) = uVar2;
  *(undefined4 *)(param_2 + -8) = 0x2477808b;
  *(uint *)(param_2 + -8) = *(uint *)(param_2 + -8) ^ 0x5b89808b;
  *(undefined4 *)(param_2 + -4) = 0;
  *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -8) = 0x821737fb;
  *(undefined4 *)(param_2 + -4) = 0xffffffff;
  lVar4 = *(longlong *)(param_2 + -8);
  *(ulonglong *)(param_2 + -8) = uVar2;
  *(undefined4 *)(param_2 + -8) = 0x60c9085;
  *(undefined4 *)(param_2 + -4) = 0;
  FUN_166af01be(uVar3,lVar4 + 0x7de8c9f1,0x7c6e2266,FUN_166af01be);
  return;
}



// FUNCTION 14d81e775 FUN_14d81e775 body=134 status=ok
// SIG undefined FUN_14d81e775(void)

void FUN_14d81e775(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_16584ccd4(param_1,param_2,~(unaff_RBX + unaff_RDI));
  return;
}



// FUNCTION 14d81e898 FUN_14d81e898 body=158 status=ok
// SIG undefined FUN_14d81e898(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d81e898(void)

{
  FUN_1566e9099();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d81e938 FUN_14d81e938 body=12 status=ok
// SIG undefined FUN_14d81e938(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d81e938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d81ecf9 FUN_14d81ecf9 body=161 status=ok
// SIG undefined FUN_14d81ecf9(void)

undefined1 * FUN_14d81ecf9(void)

{
  undefined1 local_res18 [16];
  
  return local_res18;
}



// FUNCTION 14d81ee36 FUN_14d81ee36 body=311 status=ok
// SIG undefined FUN_14d81ee36(void)

void FUN_14d81ee36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  FUN_164ac6f4d(param_1,param_2,in_stack_00000008,param_4);
  lVar1 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  FUN_165c1e018(FUN_165c1e018,lVar1,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,lVar1);
  return;
}



// FUNCTION 14d81ef6e FUN_14d81ef6e body=116 status=ok
// SIG undefined FUN_14d81ef6e(void)

undefined8 FUN_14d81ef6e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d81f13b FUN_14d81f13b body=317 status=ok
// SIG undefined FUN_14d81f13b(void)

/* WARNING: Removing unreachable block (ram,0x00014d81f1e1) */

void FUN_14d81f13b(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  FUN_16131074f(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  *(ulonglong *)(&stack0xfffffffff98d085b + unaff_R13) =
       (uVar1 & unaff_R15 ^ 0xffffffffffffffff) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
  return;
}



// FUNCTION 14d81f1e1 FUN_14d81f1e1 body=8 status=ok
// SIG undefined FUN_14d81f1e1(void)

void FUN_14d81f1e1(void)

{
  return;
}



// FUNCTION 14d81f293 FUN_14d81f293 body=173 status=ok
// SIG undefined FUN_14d81f293(void)

void FUN_14d81f293(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  uVar2 = (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15 ^ 0xffffffffffffffff) &
          (*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15);
  FUN_162d2024d();
  pcVar1 = FUN_16159f1b9;
  FUN_16159f1b9(FUN_16159f1b9,&stack0x00000028);
  uVar2 = in_stack_00000030 ^ uVar2 ^ (ulonglong)pcVar1;
  *(undefined8 *)(uVar2 - 8) = param_2;
  *(undefined8 *)(uVar2 - 0x10) = 0xffffffffffffff70;
  *(undefined8 *)(uVar2 - 0x18) = 0xffffffffffffff70;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_15b689b41;
  return;
}



// FUNCTION 14d81f341 FUN_14d81f341 body=290 status=ok
// SIG undefined FUN_14d81f341(void)

void FUN_14d81f341(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  undefined1 local_res20 [8];
  
  pcVar2 = FUN_16159f1b9;
  FUN_16159f1b9(FUN_16159f1b9,local_res20);
  uVar1 = param_5 ^ in_R10 ^ (ulonglong)pcVar2;
  *(undefined8 *)(uVar1 - 8) = param_2;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_15b689b41;
  return;
}



// FUNCTION 14d81f500 FUN_14d81f500 body=131 status=ok
// SIG undefined FUN_14d81f500(void)

void FUN_14d81f500(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b424469((char)param_1,
                (param_2 & param_1 ^ 0xffffffffffffffff) & (~param_1 & param_2 | param_1),param_3,
                param_4);
  return;
}



// FUNCTION 14d81f584 FUN_14d81f584 body=779 status=ok
// SIG undefined FUN_14d81f584(void)

/* WARNING: Removing unreachable block (ram,0x000164afb892) */
/* WARNING: Removing unreachable block (ram,0x0001649ec302) */
/* WARNING: Removing unreachable block (ram,0x0001649ec308) */
/* WARNING: Removing unreachable block (ram,0x0001649ec30d) */
/* WARNING: Removing unreachable block (ram,0x0001649ec313) */
/* WARNING: Removing unreachable block (ram,0x0001566a6df6) */
/* WARNING: Removing unreachable block (ram,0x000156b04bf8) */
/* WARNING: Removing unreachable block (ram,0x000156b04bfe) */
/* WARNING: Removing unreachable block (ram,0x000156b04c09) */
/* WARNING: Removing unreachable block (ram,0x000162bc58c4) */
/* WARNING: Removing unreachable block (ram,0x00015687228f) */
/* WARNING: Removing unreachable block (ram,0x0001566a6df8) */
/* WARNING: Removing unreachable block (ram,0x00014d81f61e) */
/* WARNING: Removing unreachable block (ram,0x00014d81f6ac) */
/* WARNING: Removing unreachable block (ram,0x00014d81f6b2) */
/* WARNING: Removing unreachable block (ram,0x00014d81f747) */
/* WARNING: Removing unreachable block (ram,0x000164afb757) */
/* WARNING: Removing unreachable block (ram,0x000164afb871) */
/* WARNING: Removing unreachable block (ram,0x000164afb877) */
/* WARNING: Removing unreachable block (ram,0x00015b0047e7) */
/* WARNING: Removing unreachable block (ram,0x000156b04b58) */
/* WARNING: Removing unreachable block (ram,0x0001649ec250) */
/* WARNING: Removing unreachable block (ram,0x0001649ec255) */
/* WARNING: Removing unreachable block (ram,0x0001655925fd) */
/* WARNING: Removing unreachable block (ram,0x00014d81f74d) */
/* WARNING: Removing unreachable block (ram,0x00014d81f613) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d81f584(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  uVar1 = local_res18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  *(undefined4 *)(uVar1 - 0x28) = 0x1cf25788;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar2 = FUN_15b0ee5b9();
  return uVar2;
}



// FUNCTION 14d81f9ee FUN_14d81f9ee body=393 status=ok
// SIG undefined FUN_14d81f9ee(void)

/* WARNING: Removing unreachable block (ram,0x00014d81fa72) */
/* WARNING: Removing unreachable block (ram,0x00014d81fa93) */
/* WARNING: Removing unreachable block (ram,0x00014d81fa98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d81f9ee(void)

{
  longlong in_R9;
  undefined8 unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  auStackX_8[in_R9] = 0;
  auStackX_8[in_R9] = auStackX_8[in_R9];
  return unaff_retaddr;
}



// FUNCTION 14d81fbc6 FUN_14d81fbc6 body=468 status=ok
// SIG undefined FUN_14d81fbc6(void)

/* WARNING: Removing unreachable block (ram,0x00014d81fc6e) */
/* WARNING: Removing unreachable block (ram,0x00014d81fc82) */
/* WARNING: Removing unreachable block (ram,0x00014d81fc7d) */
/* WARNING: Removing unreachable block (ram,0x00014d81fce7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d81fbc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  (*(code *)&LAB_166c5ae6c)(in_stack_00000008,param_2,param_3);
  return;
}



// FUNCTION 14d81fdcd FUN_14d81fdcd body=158 status=ok
// SIG undefined FUN_14d81fdcd(void)

void FUN_14d81fdcd(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(&stack0x00000008 + param_4);
  *(ulonglong *)(&stack0x00000008 + param_4) = ~*(ulonglong *)(&stack0x00000008 + param_4);
  *(ulonglong *)(&stack0x00000008 + param_4) = *(ulonglong *)(&stack0x00000008 + param_4) | param_1;
  *(ulonglong *)(&stack0x00000008 + param_4) =
       ~((~param_1 | uVar1) & *(ulonglong *)(&stack0x00000008 + param_4));
  (*(code *)0x162658188)();
  return;
}



// FUNCTION 14d81fef4 FUN_14d81fef4 body=143 status=ok
// SIG undefined FUN_14d81fef4(void)

void FUN_14d81fef4(void)

{
  FUN_1572789b0();
  return;
}



// FUNCTION 14d81ff84 FUN_14d81ff84 body=146 status=ok
// SIG undefined FUN_14d81ff84(void)

void FUN_14d81ff84(void)

{
  FUN_1663f0eed();
  return;
}



// FUNCTION 14d8201d3 FUN_14d8201d3 body=313 status=ok
// SIG undefined FUN_14d8201d3(void)

void FUN_14d8201d3(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  char unaff_BPL;
  
  FUN_16639748c(FUN_16639748c,param_2,param_3,param_4);
  if (-1 < unaff_BPL) {
    FUN_1567b2f00();
    return;
  }
  FUN_1567b2eef();
  return;
}



// FUNCTION 14d820397 FUN_14d820397 body=155 status=ok
// SIG undefined FUN_14d820397(void)

/* WARNING: Removing unreachable block (ram,0x000161d4e05e) */
/* WARNING: Removing unreachable block (ram,0x0001654caa7f) */
/* WARNING: Removing unreachable block (ram,0x0001654ca9d6) */
/* WARNING: Removing unreachable block (ram,0x00014d820433) */

undefined8 FUN_14d820397(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_RAX;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong uStack_28;
  undefined4 uStack_1c;
  ulonglong auStack_18 [3];
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RBP);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90);
  *puVar1 = param_3;
  uVar5 = *puVar1;
  *puVar1 = unaff_RDI ^ in_RAX;
  puVar1[-1] = unaff_RDI ^ in_RAX;
  *puVar1 = *(ulonglong *)(unaff_R12 + -0x68);
  uVar8 = puVar1[-1];
  puVar1[-1] = unaff_retaddr;
  puVar1[-2] = unaff_retaddr;
  puVar1[-3] = uVar5;
  lVar3 = *(longlong *)(unaff_R12 + -8);
  uVar6 = puVar1[-3];
  puVar1[-1] = 0;
  puVar1[-1] = puVar1[-1] + lVar3;
  puVar1[-2] = unaff_RSI;
  puVar1[-3] = unaff_RSI;
  puVar1[-2] = *(undefined8 *)(unaff_R12 + -0x98);
  if (-1 < (longlong)puVar1[-1]) {
    uVar8 = thunk_FUN_1654ca955();
    return uVar8;
  }
  uVar5 = puVar1[-3];
  puVar1[-3] = in_RAX;
  puVar1[-4] = uVar5;
  uVar5 = *(ulonglong *)(unaff_R12 + -0xa0);
  puVar1[-4] = unaff_R14;
  uVar7 = puVar1[-3];
  puVar1[-3] = param_4;
  puVar1[-3] = unaff_R15;
  uVar4 = puVar1[-2];
  puVar1[-2] = puVar1[-2] & uVar7;
  puVar1[-2] = ~puVar1[-2];
  puVar1[-4] = uVar6;
  puVar1[-5] = ~(uVar2 & in_RAX) & (uVar2 | in_RAX);
  puVar1[-2] = ~puVar1[-2];
  puVar1[-2] = puVar1[-2] | ~(uVar4 | uVar7);
  if (puVar1[-2] == 0) {
    uVar8 = FUN_161d4dfaa();
    return uVar8;
  }
  puVar1[-2] = ~puVar1[-2];
  puVar1[-1] = puVar1[-1] ^ uVar7;
  puVar1[-3] = uVar5 + uVar7 + (uVar5 & uVar7) * -2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 & uVar7;
  *puVar1 = *puVar1 << 1;
  puVar1[-4] = uVar7;
  *(undefined4 *)(puVar1 + -4) = 0x2b7678ac;
  *(undefined4 *)((longlong)puVar1 + -0x1c) = 0;
  lVar3 = *(longlong *)((longlong)puVar1 + ((puVar1[-4] ^ 0x2369c02c) - 0x81fb880));
  *puVar1 = 0;
  *puVar1 = *puVar1 + ((uVar2 + uVar7) - lVar3);
  uVar6 = puVar1[-2];
  *(ushort *)(puVar1 + -1) = (ushort)puVar1[-1] & 0xfeff;
  uVar2 = *puVar1;
  *(ulonglong *)(uVar2 - 8) = puVar1[-3];
  *(undefined8 *)(uVar2 - 0x10) = uVar8;
  *(undefined8 *)(uVar2 - 0x18) = uVar8;
  *(undefined8 *)(uVar2 - 0x20) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = in_R10;
  *(undefined1 **)(uVar2 - 8) = &LAB_14db41a41 + *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) + -0x14d7c0a51;
  *(longlong *)(uVar2 - 0x10) = -*(longlong *)(uVar2 - 0x10);
  return uVar6;
}



// FUNCTION 14d820433 FUN_14d820433 body=93 status=ok
// SIG undefined FUN_14d820433(void)

void FUN_14d820433(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_165c7153c(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14d82054e FUN_14d82054e body=20 status=ok
// SIG undefined FUN_14d82054e(void)

undefined8 FUN_14d82054e(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8205f5 FUN_14d8205f5 body=145 status=ok
// SIG undefined FUN_14d8205f5(void)

void FUN_14d8205f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_1610efd5a(local_res8,0x1060,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d820895 FUN_14d820895 body=158 status=ok
// SIG undefined FUN_14d820895(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d820895(void)

{
  longlong in_R10;
  ulonglong local_res8;
  
  FUN_160e2d040(0x10,~(~(local_res8 & 0xffffffffb7305811) & (local_res8 | 0xffffffffb7305811)) -
                     in_R10,FUN_160e2d040);
  return;
}



// FUNCTION 14d8209d6 FUN_14d8209d6 body=432 status=ok
// SIG undefined FUN_14d8209d6(void)

void FUN_14d8209d6(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  FUN_1622b3df2();
  uVar2 = 0xffffffffffffffff - ((~param_1 | unaff_RBX) + param_1 + 1) & (param_2 | param_1);
  uVar1 = *(ulonglong *)((uVar1 ^ unaff_R15) - 0x68);
  FUN_15b5f8799(param_1,(-param_1 - uVar1) + (uVar1 | param_1) * 2);
  FUN_16554e9f7(*(ulonglong *)(param_1 - 0xa0) + uVar2 +
                (*(ulonglong *)(param_1 - 0xa0) & uVar2) * -2);
  return;
}



// FUNCTION 14d820b87 FUN_14d820b87 body=147 status=ok
// SIG undefined FUN_14d820b87(void)

undefined8 FUN_14d820b87(void)

{
  undefined8 in_RAX;
  bool in_ZF;
  
  if (!in_ZF) {
    return 0xfffffffffffbbfee;
  }
  return in_RAX;
}



// FUNCTION 14d820c1b FUN_14d820c1b body=56 status=ok
// SIG undefined FUN_14d820c1b(void)

void FUN_14d820c1b(void)

{
  return;
}



// FUNCTION 14d820d60 FUN_14d820d60 body=151 status=ok
// SIG undefined FUN_14d820d60(void)

void FUN_14d820d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000018;
  
  (*(code *)0x164f62946)(param_1,in_stack_00000018,param_3,param_4);
  return;
}



// FUNCTION 14d821065 FUN_14d821065 body=258 status=ok
// SIG undefined FUN_14d821065(void)

/* WARNING: Removing unreachable block (ram,0x00014d821160) */
/* WARNING: Removing unreachable block (ram,0x00014d821166) */
/* WARNING: Removing unreachable block (ram,0x00014d82116b) */
/* WARNING: Removing unreachable block (ram,0x00014d821210) */
/* WARNING: Removing unreachable block (ram,0x00014d82121b) */
/* WARNING: Removing unreachable block (ram,0x00014d8212ac) */
/* WARNING: Removing unreachable block (ram,0x000160ba99ac) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a33) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a38) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a3e) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a43) */
/* WARNING: Removing unreachable block (ram,0x00014d821216) */
/* WARNING: Removing unreachable block (ram,0x0001617eff12) */
/* WARNING: Removing unreachable block (ram,0x00014d8210e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8210ed) */
/* WARNING: Removing unreachable block (ram,0x00014d8210f2) */
/* WARNING: Removing unreachable block (ram,0x0001619cf2ed) */
/* WARNING: Removing unreachable block (ram,0x0001619cf437) */
/* WARNING: Removing unreachable block (ram,0x0001619cf442) */
/* WARNING: Removing unreachable block (ram,0x0001619cf43d) */
/* WARNING: Removing unreachable block (ram,0x0001566f78fb) */
/* WARNING: Removing unreachable block (ram,0x0001566f7961) */
/* WARNING: Removing unreachable block (ram,0x00014d8212b2) */

void FUN_14d821065(undefined8 param_1)

{
  (*(code *)&LAB_165ce9969)(param_1,&LAB_165ce9969);
  return;
}



// FUNCTION 14d82116b FUN_14d82116b body=686 status=ok
// SIG undefined FUN_14d82116b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8212b2) */
/* WARNING: Removing unreachable block (ram,0x00014d82121b) */
/* WARNING: Removing unreachable block (ram,0x00014d8212ac) */
/* WARNING: Removing unreachable block (ram,0x000160ba99ac) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a38) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a3e) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a33) */
/* WARNING: Removing unreachable block (ram,0x000160ba9a43) */

void FUN_14d82116b(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_162b97720(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,FUN_162b97720,
                ((unaff_R15 - (uVar1 | unaff_R15)) + uVar1 ^ 0xffffffffffffffff) &
                (uVar1 | unaff_R15),
                (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x60)) +
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15) * 2);
  return;
}



// FUNCTION 14d82149b FUN_14d82149b body=365 status=ok
// SIG undefined FUN_14d82149b(void)

/* WARNING: Removing unreachable block (ram,0x00014d821549) */
/* WARNING: Removing unreachable block (ram,0x00014d8215b9) */

void FUN_14d82149b(void)

{
  FUN_1648d11df();
  (*(code *)&DAT_14de90187)();
  FUN_15b9707a2();
  return;
}



// FUNCTION 14d821685 FUN_14d821685 body=365 status=ok
// SIG undefined FUN_14d821685(void)

void FUN_14d821685(void)

{
  FUN_1627a0b69(0x53e83,FUN_1627a0b69,0xfffffffffffffffb);
  return;
}



// FUNCTION 14d8219ae FUN_14d8219ae body=263 status=ok
// SIG undefined FUN_14d8219ae(void)

void FUN_14d8219ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165e53927(param_1,param_2,param_3,param_4);
  FUN_15b11b53a(FUN_15b11b53a);
  return;
}



// FUNCTION 14d821abe FUN_14d821abe body=109 status=ok
// SIG undefined FUN_14d821abe(void)

void FUN_14d821abe(void)

{
  return;
}



// FUNCTION 14d821c77 FUN_14d821c77 body=155 status=ok
// SIG undefined FUN_14d821c77(void)

void FUN_14d821c77(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  uint in_R10D;
  longlong unaff_R12;
  uint unaff_R14D;
  ulonglong unaff_R15;
  
  uVar1 = (ulonglong)
          (CONCAT31((int3)(-1 - (unaff_R14D & in_R10D) >> 8),*(undefined1 *)(unaff_R12 + param_3)) ^
          0x66ad3800);
  FUN_1574b5b25(param_1,uVar1);
  FUN_161562362(param_1,~(unaff_RDI & (uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14d821d13 FUN_14d821d13 body=129 status=ok
// SIG undefined FUN_14d821d13(void)

void FUN_14d821d13(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_161562362(param_1,~(unaff_RDI & (param_2 | unaff_R15)));
  return;
}



// FUNCTION 14d821d9c FUN_14d821d9c body=102 status=ok
// SIG undefined FUN_14d821d9c(void)

void FUN_14d821d9c(void)

{
  longlong in_RAX;
  longlong local_res8;
  
  *(undefined4 *)(&stack0xfffffffffda78cf8 + local_res8) = 0xd1ffce6a;
  *(undefined4 *)(&stack0xfffffffffda78cfc + local_res8) = 0xffffffff;
  *(undefined8 *)
   (&stack0x2ba7bea6 + *(longlong *)(&stack0xfffffffffda78cf8 + local_res8) + local_res8) = 0;
  *(longlong *)(&stack0xfffffffffda78d10 + local_res8) =
       *(longlong *)(&stack0xfffffffffda78d10 + local_res8) - in_RAX;
  in(0xd8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d822057 FUN_14d822057 body=279 status=ok
// SIG undefined FUN_14d822057(void)

/* WARNING: Removing unreachable block (ram,0x00014d8220dd) */

void FUN_14d822057(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d82216f FUN_14d82216f body=65 status=ok
// SIG undefined FUN_14d82216f(void)

void FUN_14d82216f(void)

{
  return;
}



// FUNCTION 14d8221fb FUN_14d8221fb body=268 status=ok
// SIG undefined FUN_14d8221fb(void)

/* WARNING: Removing unreachable block (ram,0x00014d822291) */
/* WARNING: Removing unreachable block (ram,0x00014d82229c) */
/* WARNING: Removing unreachable block (ram,0x00014d822297) */
/* WARNING: Removing unreachable block (ram,0x000165208291) */
/* WARNING: Removing unreachable block (ram,0x000162807b3b) */
/* WARNING: Removing unreachable block (ram,0x000165208205) */
/* WARNING: Removing unreachable block (ram,0x00016520828c) */
/* WARNING: Removing unreachable block (ram,0x000165208296) */
/* WARNING: Removing unreachable block (ram,0x000162807b41) */

undefined8 FUN_14d8221fb(void)

{
  undefined8 uVar1;
  
  FUN_15655a758();
  FUN_166ac9e7a();
  uVar1 = FUN_165208205();
  return uVar1;
}



// FUNCTION 14d822313 FUN_14d822313 body=137 status=ok
// SIG undefined FUN_14d822313(void)

void FUN_14d822313(void)

{
  return;
}



// FUNCTION 14d8224f2 FUN_14d8224f2 body=161 status=ok
// SIG undefined FUN_14d8224f2(void)

void FUN_14d8224f2(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4)

{
  uint unaff_R12D;
  uint uVar1;
  
  uVar1 = ~((param_2 - (unaff_R12D | param_2)) + unaff_R12D);
  *param_4 = *param_4 - uVar1;
  (*(code *)&LAB_15b40418d)(0,uVar1,param_3);
  return;
}



// FUNCTION 14d822593 FUN_14d822593 body=76 status=ok
// SIG undefined FUN_14d822593(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d822593(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_18 [3];
  
  uVar3 = -~unaff_RDI - (unaff_R13 + 2);
  puVar1 = &stack0x00000000 + uVar3;
  *(ulonglong *)(puVar1 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 |
       (ulonglong)SCARRY8((longlong)&stack0x00000000,uVar3) * 0x800 | (ulonglong)(in_IF & 1) * 0x200
       | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)puVar1 < 0) * 0x80 |
       (ulonglong)(puVar1 == (undefined1 *)0x0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)puVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)&stack0x00000000,uVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(puVar1 + -0x10) = in_RAX;
  *(undefined8 *)(puVar1 + -0x18) = unaff_RSI;
  uVar2 = *(undefined8 *)(puVar1 + -0x10);
  *(undefined1 **)(puVar1 + -0x10) = &LAB_14d8225e7;
  return uVar2;
}



// FUNCTION 14d822602 FUN_14d822602 body=181 status=ok
// SIG undefined FUN_14d822602(void)

void FUN_14d822602(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res18;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 + (uVar3 ^ unaff_R15);
  *(undefined8 *)(uVar2 - 0x10) = in_R10;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R14;
  *(code **)(uVar2 - 0x18) = FUN_14d8226b7;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_14d83c94d;
  return;
}



// FUNCTION 14d8226b7 FUN_14d8226b7 body=43 status=ok
// SIG undefined FUN_14d8226b7(void)

void FUN_14d8226b7(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d822770 FUN_14d822770 body=67 status=ok
// SIG undefined FUN_14d822770(void)

undefined8 FUN_14d822770(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8227b3 FUN_14d8227b3 body=73 status=ok
// SIG undefined FUN_14d8227b3(void)

void FUN_14d8227b3(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  if (param_2 == 0x5f4e8) {
    FUN_160e6f689(param_1,&DAT_14d7c2fef,param_3,FUN_160e6f689);
    return;
  }
  if (param_2 == 0x5f4e9) {
    FUN_166a62797(param_1,0x14d7ad364);
    return;
  }
  if (param_2 == 0x5f65e) {
    FUN_166a62797(param_1,&DAT_14d7bb122);
    return;
  }
  if ((param_2 < 0x5f65e) && (0x5f65e < param_2)) {
    FUN_162a7e061(param_1,in_stack_00000008,FUN_162a7e061);
    return;
  }
  if (param_2 == 0x5f65f) {
    return;
  }
  return;
}



// FUNCTION 14d8229a6 FUN_14d8229a6 body=711 status=ok
// SIG undefined FUN_14d8229a6(void)

/* WARNING: Instruction at (ram,0x00014d822bed) overlaps instruction at (ram,0x00014d822be9)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d822c3b) */
/* WARNING: Removing unreachable block (ram,0x00014d822c41) */
/* WARNING: Removing unreachable block (ram,0x00014d822b7c) */
/* WARNING: Removing unreachable block (ram,0x00014d822be1) */
/* WARNING: Removing unreachable block (ram,0x0001648ede19) */
/* WARNING: Removing unreachable block (ram,0x00014d822be6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8229a6(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  
  uVar2 = FUN_15674840f();
  puVar1 = (ulonglong *)((longlong)&local_res8 + unaff_RSI);
  *(undefined4 *)puVar1 = 0xa9052d7;
  *(undefined8 *)(&stack0x00000000 + unaff_RSI) = 0;
  uVar4 = *(ulonglong *)(&stack0x00000000 + unaff_RSI);
  *(undefined4 *)((longlong)&local_res8 + unaff_RSI + 4) = 0;
  uVar5 = *puVar1;
  *puVar1 = (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
            (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0x00000000 + unaff_RSI) = uVar2;
  *(undefined4 *)(&stack0x00000000 + unaff_RSI) = 0x28f482c;
  *(undefined4 *)(&stack0x00000004 + unaff_RSI) = 0;
  puVar1 = (ulonglong *)
           ((longlong)puVar1 + *(longlong *)(&stack0x00000000 + unaff_RSI) + -0x28f4834);
  *puVar1 = uVar5;
  *puVar1 = *puVar1 - 0xa905f54;
  uVar3 = *puVar1 + 0xc85;
  uVar5 = puVar1[1];
  puVar1[1] = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar5 & 0x800) != 0) * 0x800 | (ulonglong)((uVar5 & 0x400) != 0) * 0x400
              | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
              (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
              (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
              (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  puVar1[1] = 0x14d822ad1;
  uVar2 = FUN_1668e885a();
  puVar1[2] = uVar2;
  *(undefined4 *)(puVar1 + 2) = 0x5320e3ba;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  uVar5 = *(ulonglong *)(unaff_R13 + (puVar1[2] ^ 0xffffffffacdf1c72));
  *(undefined4 *)(puVar1 + 2) = 0x89f1b9b8;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
  uVar4 = *(ulonglong *)(unaff_R13 + puVar1[2] + 0x760e4600);
  puVar1[2] = uVar5 + uVar3 + ~(~uVar5 | ~uVar3) * -2;
  puVar1[1] = ~(~(0xffffffffffffffff - uVar3 | uVar4) | ~(uVar4 ^ 0xffffffffffffffff | uVar3)) ^
              0xffffffffffffffff;
  uVar5 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar4 = *(ulonglong *)(unaff_R13 + -0x28);
  puVar1[2] = puVar1[2];
  puVar1[1] = (ulonglong)FUN_162bbf025;
  FUN_1664bc6c6(uVar5 ^ uVar3,~(uVar4 & uVar3) & (uVar4 | uVar3),
                ~(param_3 & uVar3) & (~uVar3 | 0xfcb470c3));
  uVar2 = puVar1[2];
  puVar1[2] = uVar2;
  puVar1[1] = uVar2;
  puVar1[2] = (ulonglong)&DAT_162bbf03e;
  return;
}



// FUNCTION 14d822c41 FUN_14d822c41 body=169 status=ok
// SIG undefined FUN_14d822c41(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d822c41(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 & unaff_R15;
  local_res20 = uVar1 * 2;
  local_res20 = unaff_R14 + unaff_R15 + uVar1 * -2;
  FUN_165de1369(param_1,param_2,&local_res20);
  *(undefined8 *)
   ((longlong)&local_res20 + ~(~(param_3 & 0xffffffffe1b7c770) & (param_3 | 0xffffffffe1b7c770))) =
       param_1;
  FUN_14debe886(local_res20);
  return;
}



// FUNCTION 14d822ced FUN_14d822ced body=143 status=ok
// SIG undefined FUN_14d822ced(void)

void FUN_14d822ced(undefined8 param_1)

{
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)
   (&stack0x00000018 +
   ~(~(in_stack_00000008 & 0xffffffffe1b7c770) & (in_stack_00000008 | 0xffffffffe1b7c770))) =
       param_1;
  FUN_14debe886(in_stack_00000018);
  return;
}



// FUNCTION 14d822e23 FUN_14d822e23 body=630 status=ok
// SIG undefined FUN_14d822e23(void)

/* WARNING: Removing unreachable block (ram,0x00014d822eba) */
/* WARNING: Removing unreachable block (ram,0x00014d822ec5) */
/* WARNING: Removing unreachable block (ram,0x00014d822fd4) */
/* WARNING: Removing unreachable block (ram,0x00014d822fda) */
/* WARNING: Removing unreachable block (ram,0x0001655dfe4f) */
/* WARNING: Removing unreachable block (ram,0x0001655dfeb9) */
/* WARNING: Removing unreachable block (ram,0x0001655dfebe) */
/* WARNING: Removing unreachable block (ram,0x00014d822ec0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d822e23(void)

{
  return;
}



// FUNCTION 14d823070 FUN_14d823070 body=285 status=ok
// SIG undefined FUN_14d823070(void)

/* WARNING: Removing unreachable block (ram,0x00014d8230fd) */
/* WARNING: Removing unreachable block (ram,0x00014d823103) */
/* WARNING: Removing unreachable block (ram,0x000161127833) */

void FUN_14d823070(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_retaddr;
  
  FUN_162627e16(param_1,FUN_162627e16,-1 - ((~unaff_retaddr | param_3) & ~(param_3 & ~unaff_RBX)));
  return;
}



// FUNCTION 14d823103 FUN_14d823103 body=53 status=ok
// SIG undefined FUN_14d823103(void)

void FUN_14d823103(void)

{
  return;
}



// FUNCTION 14d82322f FUN_14d82322f body=444 status=ok
// SIG undefined FUN_14d82322f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8232fb) */
/* WARNING: Removing unreachable block (ram,0x0001566a488a) */
/* WARNING: Removing unreachable block (ram,0x00014d823354) */
/* WARNING: Removing unreachable block (ram,0x00014d82335a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00014d8232da */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d82322f(ulonglong param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_RBX;
  longlong local_res18;
  ulonglong in_stack_00000028;
  
  puVar1 = (undefined8 *)((in_stack_00000028 ^ param_1) - 8);
  *puVar1 = unaff_RBX;
  *(undefined8 *)((in_stack_00000028 ^ param_1) - 0x10) = *puVar1;
  FUN_1621412bd(local_res18 * 2);
  return;
}



// FUNCTION 14d823360 FUN_14d823360 body=28 status=ok
// SIG undefined FUN_14d823360(void)

void FUN_14d823360(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d823421 FUN_14d823421 body=191 status=ok
// SIG undefined FUN_14d823421(void)

void FUN_14d823421(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x15b6706c0)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d8234b5 FUN_14d8234b5 body=290 status=ok
// SIG undefined FUN_14d8234b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8234b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000010;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)
           (unaff_R13 +
           ~(~(in_stack_00000010 & 0xffffffffed56c4b5) & (in_stack_00000010 | 0xffffffffed56c4b5)));
  FUN_162e470ba(param_1,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,param_3,param_4);
  FUN_160bb0929(param_1,local_res18,param_3);
  return;
}



// FUNCTION 14d823653 FUN_14d823653 body=175 status=ok
// SIG undefined FUN_14d823653(void)

/* WARNING: Removing unreachable block (ram,0x00014d8236f2) */
/* WARNING: Removing unreachable block (ram,0x00014d8236fe) */
/* WARNING: Removing unreachable block (ram,0x00014d823703) */
/* WARNING: Removing unreachable block (ram,0x00014d823793) */
/* WARNING: Removing unreachable block (ram,0x00014d823798) */
/* WARNING: Removing unreachable block (ram,0x00014d82379e) */
/* WARNING: Removing unreachable block (ram,0x000161803be9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_14d823653(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint unaff_R15D;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  int unaff_retaddr;
  ulonglong uVar6;
  ulonglong in_stack_00000018;
  
  uVar2 = FUN_165480834(*(ulonglong *)(param_1 + -0xa0) ^ unaff_RBX,param_2,
                        in_stack_00000018 + unaff_RBX,param_4,(in_stack_00000018 & unaff_RBX) << 1);
  uVar6 = (ulonglong)unaff_R15D;
  uVar5 = uVar6 - 0xc0dfee0;
  *(undefined8 *)(&stack0xfffffffff3f20128 + uVar6) =
       *(undefined8 *)(&stack0xfffffffff3f20128 + uVar6);
  *(ulonglong *)(&stack0xfffffffff3f20120 + uVar6) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar6,0xc0dfee0) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar1 = (undefined8 *)(&stack0xfffffffff3f20118 + uVar6);
  *puVar1 = 0;
  *(undefined4 *)puVar1 = 0x37bd1ac0;
  uVar3 = (uint)*puVar1 ^ 0x37bd1ac0;
  uVar5 = *(ulonglong *)(&stack0xfffffffff3f20120 + uVar6);
  *(ulonglong *)(&stack0xfffffffff3f20120 + uVar6) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  iVar4 = uVar3 + 0x65480834;
  uVar5 = *(ulonglong *)(&stack0xfffffffff3f20120 + uVar6);
  *(ulonglong *)(&stack0xfffffffff3f20120 + uVar6) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(int *)(&stack0xfffffffff3f20120 + uVar6) = *(int *)(&stack0xfffffffff3f20120 + uVar6) << 0x1f;
  *(uint *)(&stack0xfffffffff3f20120 + uVar6) = *(uint *)(&stack0xfffffffff3f20120 + uVar6) >> 0x1f;
  if (*(int *)(&stack0xfffffffff3f20120 + uVar6) != 0) {
    iVar4 = uVar3 + 0x65480835;
  }
  *(undefined8 *)(&stack0xfffffffff3f20120 + uVar6) = param_4;
  *(undefined8 *)(&stack0xfffffffff3f20118 + uVar6) = uVar2;
  *(undefined **)(&stack0xfffffffff3f20110 + uVar6) = &DAT_15ba374b0;
  return unaff_retaddr + iVar4;
}



// FUNCTION 14d823703 FUN_14d823703 body=160 status=ok
// SIG undefined FUN_14d823703(void)

/* WARNING: Removing unreachable block (ram,0x00014d82379e) */

void FUN_14d823703(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong in_R9;
  ulonglong uVar4;
  longlong unaff_R12;
  
  uVar4 = -in_R9;
  lVar3 = *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2;
  if (lVar3 != 0) {
    uVar2 = in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x58);
    uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
    FUN_1659115df(~((uVar2 - 1) - ~(uVar1 - (uVar2 | uVar1))),FUN_1659115df,lVar3,
                  ~((~in_RAX | uVar4) + in_RAX + 1) & uVar4 + (-1 - (~in_RAX | uVar4)));
    return;
  }
  FUN_161803be9();
  return;
}



// FUNCTION 14d8237a4 FUN_14d8237a4 body=170 status=ok
// SIG undefined FUN_14d8237a4(void)

void FUN_14d8237a4(void)

{
  return;
}



// FUNCTION 14d823a8d FUN_14d823a8d body=257 status=ok
// SIG undefined FUN_14d823a8d(void)

void FUN_14d823a8d(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1657d9766(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX);
  return;
}



// FUNCTION 14d824154 FUN_14d824154 body=147 status=ok
// SIG undefined FUN_14d824154(void)

ulonglong FUN_14d824154(void)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000008;
  
  return ~(in_stack_00000008 & in_RAX) & (~in_RAX & in_stack_00000008 | in_RAX);
}



// FUNCTION 14d8241e8 FUN_14d8241e8 body=195 status=ok
// SIG undefined FUN_14d8241e8(void)

/* WARNING: Removing unreachable block (ram,0x00014d82427e) */
/* WARNING: Removing unreachable block (ram,0x00014d824284) */
/* WARNING: Removing unreachable block (ram,0x000165fde82a) */
/* WARNING: Removing unreachable block (ram,0x000165fde898) */
/* WARNING: Removing unreachable block (ram,0x000165fde89d) */
/* WARNING: Removing unreachable block (ram,0x000165fde8a9) */
/* WARNING: Removing unreachable block (ram,0x0001614c0e50) */
/* WARNING: Removing unreachable block (ram,0x000165fde938) */
/* WARNING: Removing unreachable block (ram,0x000165fde93e) */
/* WARNING: Removing unreachable block (ram,0x000165fde943) */
/* WARNING: Removing unreachable block (ram,0x0001566c030f) */
/* WARNING: Removing unreachable block (ram,0x0001615c778a) */
/* WARNING: Removing unreachable block (ram,0x0001566c0395) */
/* WARNING: Removing unreachable block (ram,0x0001566c039b) */

undefined8 FUN_14d8241e8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165fde82a();
  return uVar1;
}



// FUNCTION 14d824466 FUN_14d824466 body=162 status=ok
// SIG undefined FUN_14d824466(void)

void FUN_14d824466(void)

{
  FUN_165715e27();
  return;
}



// FUNCTION 14d824729 FUN_14d824729 body=157 status=ok
// SIG undefined FUN_14d824729(void)

void FUN_14d824729(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1569615af(in_R10 + unaff_R15 + (in_R10 & unaff_R15) * -2,param_2,
                *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15,
                (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x60)) +
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15) * 2);
  return;
}



// FUNCTION 14d8247c6 FUN_14d8247c6 body=149 status=ok
// SIG undefined FUN_14d8247c6(void)

void FUN_14d8247c6(void)

{
  return;
}



// FUNCTION 14d8248df FUN_14d8248df body=175 status=ok
// SIG undefined FUN_14d8248df(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8248df(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_15746a7b3(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14d824990 FUN_14d824990 body=298 status=ok
// SIG undefined FUN_14d824990(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c44b0) overlaps instruction at (ram,0x00014d7c44ae)
    */
/* WARNING: Removing unreachable block (ram,0x00014d824be8) */
/* WARNING: Removing unreachable block (ram,0x00014d824bf3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c447a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4482) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4490) */
/* WARNING: Removing unreachable block (ram,0x00014d7c444b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c44b0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c44bf) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4437) */
/* WARNING: Removing unreachable block (ram,0x00014d7c443f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4452) */
/* WARNING: Removing unreachable block (ram,0x000156710164) */
/* WARNING: Removing unreachable block (ram,0x000156710170) */
/* WARNING: Removing unreachable block (ram,0x00014dfd14b3) */
/* WARNING: Removing unreachable block (ram,0x00014dfd14b9) */
/* WARNING: Removing unreachable block (ram,0x00014d824bee) */
/* WARNING: Removing unreachable block (ram,0x00014dfd141c) */
/* WARNING: Removing unreachable block (ram,0x00014dfd1422) */
/* WARNING: Removing unreachable block (ram,0x00014dfd1427) */
/* WARNING: Removing unreachable block (ram,0x00014d824b4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d824990(ulonglong param_1,undefined8 param_2,SIZE_T param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 unaff_RBX;
  uint in_R10D;
  longlong in_R11;
  uint unaff_retaddr;
  HANDLE in_stack_00000008;
  longlong lStackX_18;
  ulonglong uStack_10;
  
  uVar3 = unaff_retaddr ^ in_R10D;
  FUN_165fe75e7();
  pcVar4 = FUN_156a76974;
  FUN_156a76974();
  uStack_10 = (ulonglong)(uVar3 + 0x3e03790);
  in_R11 = in_R11 - (uStack_10 ^ 0x4d4617d4);
  uVar1 = *(ulonglong *)(&stack0x00000008 + in_R11);
  *(ulonglong *)(&stack0x00000008 + in_R11) = ~*(ulonglong *)(&stack0x00000008 + in_R11);
  *(ulonglong *)(&stack0x00000008 + in_R11) = *(ulonglong *)(&stack0x00000008 + in_R11) | param_1;
  uVar2 = *(ulonglong *)(&stack0x00000008 + in_R11);
  *(undefined8 *)(&stack0x00000008 + in_R11) = 0;
  *(ulonglong *)(&stack0x00000008 + in_R11) =
       *(longlong *)(&stack0x00000008 + in_R11) + ~((~param_1 | uVar1) & uVar2);
  *(code **)(lStackX_18 + -8) = pcVar4;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x20) = param_4;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined1 **)(lStackX_18 + -8) = &LAB_1661e3438;
                    /* WARNING: Could not recover jumptable at 0x0001661e341e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(in_stack_00000008,(DWORD)*(undefined8 *)(lStackX_18 + -0x10),param_3);
  return;
}



// FUNCTION 14d824abd FUN_14d824abd body=322 status=ok
// SIG undefined FUN_14d824abd(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7c44b0) overlaps instruction at (ram,0x00014d7c44ae)
    */
/* WARNING: Removing unreachable block (ram,0x00014d824be8) */
/* WARNING: Removing unreachable block (ram,0x00014d824bf3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c447a) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4482) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4490) */
/* WARNING: Removing unreachable block (ram,0x00014d7c444b) */
/* WARNING: Removing unreachable block (ram,0x00014d7c44b0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c44bf) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4437) */
/* WARNING: Removing unreachable block (ram,0x00014d7c443f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c4452) */
/* WARNING: Removing unreachable block (ram,0x000156710164) */
/* WARNING: Removing unreachable block (ram,0x000156710170) */
/* WARNING: Removing unreachable block (ram,0x00014dfd14b3) */
/* WARNING: Removing unreachable block (ram,0x00014dfd14b9) */
/* WARNING: Removing unreachable block (ram,0x00014d824bee) */
/* WARNING: Removing unreachable block (ram,0x00014dfd141c) */
/* WARNING: Removing unreachable block (ram,0x00014dfd1422) */
/* WARNING: Removing unreachable block (ram,0x00014dfd1427) */
/* WARNING: Removing unreachable block (ram,0x00014d824b4d) */

void FUN_14d824abd(ulonglong param_1,undefined8 param_2,SIZE_T param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  longlong in_R11;
  ulonglong local_res8;
  undefined8 in_stack_00000018;
  HANDLE in_stack_00000020;
  
  local_res8 = (ulonglong)((int)local_res8 + 0x3e03790);
  lVar1 = in_R11 - (local_res8 ^ 0x4d4617d4);
  uVar2 = *(ulonglong *)(&stack0x00000020 + lVar1);
  *(ulonglong *)(&stack0x00000020 + lVar1) = ~*(ulonglong *)(&stack0x00000020 + lVar1);
  *(ulonglong *)(&stack0x00000020 + lVar1) = *(ulonglong *)(&stack0x00000020 + lVar1) | param_1;
  uVar3 = *(ulonglong *)(&stack0x00000020 + lVar1);
  *(undefined8 *)(&stack0x00000020 + lVar1) = 0;
  *(ulonglong *)(&stack0x00000020 + lVar1) =
       *(longlong *)(&stack0x00000020 + lVar1) + ~((~param_1 | uVar2) & uVar3);
  *(undefined8 *)(param_6 + -8) = param_2;
  *(undefined8 *)(param_6 + -0x10) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  *(undefined8 *)(param_6 + -0x20) = in_stack_00000018;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined1 **)(param_6 + -8) = &LAB_1661e3438;
                    /* WARNING: Could not recover jumptable at 0x0001661e341e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(in_stack_00000020,(DWORD)*(undefined8 *)(param_6 + -0x10),param_3);
  return;
}



// FUNCTION 14d824d9c FUN_14d824d9c body=201 status=ok
// SIG undefined FUN_14d824d9c(void)

/* WARNING: Removing unreachable block (ram,0x00014d824e1a) */
/* WARNING: Removing unreachable block (ram,0x00014d824e33) */

undefined8 FUN_14d824d9c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165e02094();
  return uVar1;
}



// FUNCTION 14d824edc FUN_14d824edc body=307 status=ok
// SIG undefined FUN_14d824edc(void)

/* WARNING: Removing unreachable block (ram,0x00014d824fed) */
/* WARNING: Removing unreachable block (ram,0x00014d824ff8) */
/* WARNING: Removing unreachable block (ram,0x00014d824f58) */
/* WARNING: Removing unreachable block (ram,0x00014d824f5e) */
/* WARNING: Removing unreachable block (ram,0x000162aa6bfa) */
/* WARNING: Removing unreachable block (ram,0x000162aa6c8d) */
/* WARNING: Removing unreachable block (ram,0x000162aa6c92) */
/* WARNING: Removing unreachable block (ram,0x000162aa6c9e) */
/* WARNING: Removing unreachable block (ram,0x000162aa6ca3) */
/* WARNING: Removing unreachable block (ram,0x00014d824ff3) */
/* WARNING: Removing unreachable block (ram,0x00016143c594) */
/* WARNING: Removing unreachable block (ram,0x000156b6e235) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d824edc(void)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  ushort unaff_R15W;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R13 + -8);
  if ((ushort)(0xffff - (uVar1 & unaff_R15W) & ~(~uVar1 & ~unaff_R15W) | 0xfeff) != 0xfeff) {
    uVar2 = FUN_16683df3a();
    return uVar2;
  }
  uVar2 = FUN_16683df3a();
  return uVar2;
}



// FUNCTION 14d82509e FUN_14d82509e body=71 status=ok
// SIG undefined FUN_14d82509e(void)

void FUN_14d82509e(undefined8 param_1)

{
  undefined8 unaff_RDI;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(&LAB_14d825101 + *(longlong *)(local_res18 + -8));
  FUN_14d7a7e0f(*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14d825301 FUN_14d825301 body=441 status=ok
// SIG undefined FUN_14d825301(void)

void FUN_14d825301(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_164801a38(param_1,*(ulonglong *)(param_1 + -0x78) + unaff_RBX +
                        (*(ulonglong *)(param_1 + -0x78) & unaff_RBX) * -2);
  return;
}



// FUNCTION 14d8253a6 FUN_14d8253a6 body=70 status=ok
// SIG undefined FUN_14d8253a6(void)

void FUN_14d8253a6(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) & param_1;
  *(ulonglong *)(unaff_RDI + 0x10) = (lVar1 + param_1) - *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~(unaff_retaddr & *(ulonglong *)(unaff_RDI + 0x10));
  return;
}



// FUNCTION 14d825437 FUN_14d825437 body=51 status=ok
// SIG undefined FUN_14d825437(void)

void FUN_14d825437(void)

{
  return;
}



// FUNCTION 14d825573 FUN_14d825573 body=166 status=ok
// SIG undefined FUN_14d825573(void)

void FUN_14d825573(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 in_R11;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar4 = (-0x101 - (local_res8 | 0xfeff)) + local_res8;
  *(undefined8 *)(local_res10 + -8) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0xa08ecbf;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x28) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  uVar12 = *(ulonglong *)(local_res10 + -0x28);
  bVar9 = (uVar12 & 0x4000) != 0;
  bVar8 = (uVar12 & 0x400) != 0;
  bVar7 = (uVar12 & 0x200) != 0;
  bVar6 = (uVar12 & 0x100) != 0;
  bVar5 = (uVar12 & 0x10) != 0;
  bVar11 = (uVar12 & 0x200000) != 0;
  bVar10 = (uVar12 & 0x40000) != 0;
  lVar2 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar8 * 0x400 | (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)((uVar12 & 0x80) != 0) * 0x80 | (ulonglong)((uVar12 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar5 * 0x10 | (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0)
       | (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar10 * 0x40000;
  *(longlong *)(local_res10 + -0x20) = lVar2;
  uVar12 = *(ulonglong *)(local_res10 + -0x20);
  lVar1 = *(longlong *)(local_res10 + -0x20);
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x8b93d81;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)bVar9 * 0x4000 | (ulonglong)SBORROW8(lVar1,0x8b93d81) * 0x800 |
       (ulonglong)bVar8 * 0x400 | (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x100 |
       (ulonglong)(*(longlong *)(local_res10 + -0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(local_res10 + -0x20) == 0) * 0x40 | (ulonglong)bVar5 * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)(local_res10 + -0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar12 < 0x8b93d81) | (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar10 * 0x40000;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x8b93d81;
  *(code **)(local_res10 + -0x18) = FUN_14d825619;
  uVar3 = FUN_16221e854(&ExceptionList,param_2,param_3);
  *(undefined8 *)(local_res10 + -0x10) = uVar3;
  *(undefined4 *)(local_res10 + -0x10) = 0x20ec39f5;
  *(undefined4 *)(local_res10 + -0xc) = 0;
  FUN_166216949();
  return;
}



// FUNCTION 14d825619 FUN_14d825619 body=147 status=ok
// SIG undefined FUN_14d825619(void)

void FUN_14d825619(void)

{
  FUN_166216949();
  return;
}



// FUNCTION 14d82574b FUN_14d82574b body=381 status=ok
// SIG undefined FUN_14d82574b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8258cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8257ab) */
/* WARNING: Removing unreachable block (ram,0x00014d8258c0) */
/* WARNING: Removing unreachable block (ram,0x00014d8258bb) */

void FUN_14d82574b(undefined8 param_1)

{
  longlong lVar1;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong uStackX_20;
  
  lVar1 = (uStackX_20 & unaff_R15) * 2;
  *(undefined8 *)(lVar1 + -8) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = 0;
  *(undefined1 **)(lVar1 + -8) = &LAB_1610b6c98 + *(longlong *)(lVar1 + -8);
  FUN_1610b6c52(param_1);
  return;
}



// FUNCTION 14d825b27 FUN_14d825b27 body=310 status=ok
// SIG undefined FUN_14d825b27(void)

/* WARNING: Removing unreachable block (ram,0x00014d825bb8) */

void FUN_14d825b27(void)

{
  return;
}



// FUNCTION 14d825c53 FUN_14d825c53 body=502 status=ok
// SIG undefined FUN_14d825c53(void)

/* WARNING: Removing unreachable block (ram,0x00014d825cec) */
/* WARNING: Removing unreachable block (ram,0x00015b930d01) */

undefined8 FUN_14d825c53(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b930d01();
  return uVar1;
}



// FUNCTION 14d825e49 FUN_14d825e49 body=386 status=ok
// SIG undefined FUN_14d825e49(void)

/* WARNING: Removing unreachable block (ram,0x0001613ff074) */
/* WARNING: Removing unreachable block (ram,0x0001613ff07a) */
/* WARNING: Removing unreachable block (ram,0x00014d825ede) */
/* WARNING: Removing unreachable block (ram,0x00014d825ee4) */
/* WARNING: Removing unreachable block (ram,0x0001613ff07f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d825e49(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  longlong unaff_R15;
  longlong in_stack_00000008;
  undefined8 local_res18;
  ulonglong local_res20;
  
  *(undefined8 *)((longlong)&local_res18 + unaff_R15) = in_RAX;
  uVar2 = *(ulonglong *)(in_stack_00000008 + -0x98);
  local_res20 = *(ulonglong *)(in_stack_00000008 + -8) ^ param_1;
  uVar3 = local_res20;
  param_5 = param_5 ^ param_1;
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = ~(ushort)local_res20;
  local_res20 = uVar3;
  local_res20._0_2_ = uVar1;
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = uVar1 | 0x100;
  local_res20._0_2_ = uVar1;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res20._0_2_ = ~uVar1;
  *(undefined8 *)(param_5 - 8) = unaff_R14;
  *(undefined8 *)(param_5 - 0x10) = unaff_RSI;
  *(ulonglong *)(param_5 - 0x18) = -~uVar2 - 1 ^ param_1;
  uVar4 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 8) = 0;
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) + -0x14dc27e74;
  *(longlong *)(param_5 - 8) = -*(longlong *)(param_5 - 8);
  uVar4 = (*(code *)0x14dc27e4f)(uVar4,param_2,param_3,local_res18);
  return uVar4;
}



// FUNCTION 14d826045 FUN_14d826045 body=134 status=ok
// SIG undefined FUN_14d826045(void)

/* WARNING: Removing unreachable block (ram,0x0001659176c8) */
/* WARNING: Removing unreachable block (ram,0x0001659176d9) */
/* WARNING: Removing unreachable block (ram,0x0001659176ce) */
/* WARNING: Removing unreachable block (ram,0x000165917580) */
/* WARNING: Removing unreachable block (ram,0x000165917648) */
/* WARNING: Removing unreachable block (ram,0x000162aa7bdd) */
/* WARNING: Removing unreachable block (ram,0x000162aa7c69) */
/* WARNING: Removing unreachable block (ram,0x000162aa7c6d) */
/* WARNING: Removing unreachable block (ram,0x000156aecf6d) */
/* WARNING: Removing unreachable block (ram,0x00014d8260cb) */
/* WARNING: Removing unreachable block (ram,0x00014dde6ca1) */
/* WARNING: Removing unreachable block (ram,0x00014dde6d14) */
/* WARNING: Removing unreachable block (ram,0x000165917312) */
/* WARNING: Removing unreachable block (ram,0x000165917447) */
/* WARNING: Removing unreachable block (ram,0x0001627b3174) */
/* WARNING: Removing unreachable block (ram,0x00016591744d) */
/* WARNING: Removing unreachable block (ram,0x00014e048a14) */
/* WARNING: Removing unreachable block (ram,0x00014e048aad) */
/* WARNING: Removing unreachable block (ram,0x00014e048aa0) */
/* WARNING: Removing unreachable block (ram,0x0001659174a4) */
/* WARNING: Removing unreachable block (ram,0x00015b321910) */
/* WARNING: Removing unreachable block (ram,0x00016591750b) */
/* WARNING: Removing unreachable block (ram,0x000165917575) */
/* WARNING: Removing unreachable block (ram,0x00016591757b) */
/* WARNING: Removing unreachable block (ram,0x0001651c96cb) */
/* WARNING: Removing unreachable block (ram,0x0001651c974b) */
/* WARNING: Removing unreachable block (ram,0x0001651c9751) */
/* WARNING: Removing unreachable block (ram,0x000156aecee7) */
/* WARNING: Removing unreachable block (ram,0x000156aecf67) */
/* WARNING: Removing unreachable block (ram,0x000156aecf62) */
/* WARNING: Removing unreachable block (ram,0x00015709a535) */
/* WARNING: Removing unreachable block (ram,0x0001651c9756) */
/* WARNING: Removing unreachable block (ram,0x000156aec95d) */
/* WARNING: Removing unreachable block (ram,0x0001651c976a) */
/* WARNING: Removing unreachable block (ram,0x00014dde6d1a) */
/* WARNING: Removing unreachable block (ram,0x00014d8260d1) */

undefined8 FUN_14d826045(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14dde6ca1();
  return uVar1;
}



// FUNCTION 14d8260d1 FUN_14d8260d1 body=86 status=ok
// SIG undefined FUN_14d8260d1(void)

void FUN_14d8260d1(void)

{
  return;
}



// FUNCTION 14d8263ce FUN_14d8263ce body=3 status=ok
// SIG undefined FUN_14d8263ce(void)

void FUN_14d8263ce(void)

{
  return;
}



// FUNCTION 14d826459 FUN_14d826459 body=170 status=ok
// SIG undefined FUN_14d826459(void)

/* WARNING: Removing unreachable block (ram,0x00014d826504) */

void FUN_14d826459(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_2;
  if (-1 < (longlong)local_res18) {
    FUN_15670a306(param_1,in_stack_00000010,param_3);
    return;
  }
  FUN_15670a306(param_1,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14d826504 FUN_14d826504 body=12 status=ok
// SIG undefined FUN_14d826504(void)

void FUN_14d826504(void)

{
  return;
}



// FUNCTION 14d8267fa FUN_14d8267fa body=122 status=ok
// SIG undefined FUN_14d8267fa(void)

void FUN_14d8267fa(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(longlong *)(local_res10 + -8) = unaff_R15;
  *(longlong *)(local_res10 + -0x10) = unaff_R15;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = param_1;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x30) = in_RAX;
  *(undefined4 *)(local_res10 + -0x30) = 0x2ceab832;
  *(undefined4 *)(local_res10 + -0x2c) = 0;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x28);
  *(longlong *)(local_res10 + -8) =
       0x392d15f - (*(longlong *)(local_res10 + -0x30) + 0x13742735U ^ 0x40524a88);
  FUN_164c4a911(*(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14d826876 FUN_14d826876 body=148 status=ok
// SIG undefined FUN_14d826876(void)

void FUN_14d826876(void)

{
  return;
}



// FUNCTION 14d826910 FUN_14d826910 body=44 status=ok
// SIG undefined FUN_14d826910(void)

void FUN_14d826910(void)

{
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    return;
  }
  FUN_16636d30b();
  return;
}



// FUNCTION 14d826a5d thunk_FUN_14d826a63 body=5 status=ok
// SIG undefined thunk_FUN_14d826a63(void)

void thunk_FUN_14d826a63(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_R13;
  
  lVar2 = ~-*(longlong *)(unaff_R13 + -0x60) + 1;
  plVar1 = (longlong *)FUN_15b83bbc0();
  *plVar1 = lVar2;
  *(int *)plVar1 = (int)lVar2;
  thunk_FUN_164846ef8();
  return;
}



// FUNCTION 14d826a63 FUN_14d826a63 body=142 status=ok
// SIG undefined FUN_14d826a63(void)

void FUN_14d826a63(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_R13;
  
  lVar2 = ~-*(longlong *)(unaff_R13 + -0x60) + 1;
  plVar1 = (longlong *)FUN_15b83bbc0();
  *plVar1 = lVar2;
  *(int *)plVar1 = (int)lVar2;
  thunk_FUN_164846ef8();
  return;
}



// FUNCTION 14d826af2 FUN_14d826af2 body=127 status=ok
// SIG undefined FUN_14d826af2(void)

void FUN_14d826af2(void)

{
  longlong in_stack_00000008;
  
  if (in_stack_00000008 < 0) {
    FUN_161888150();
    return;
  }
  return;
}



// FUNCTION 14d826c1e FUN_14d826c1e body=760 status=ok
// SIG undefined FUN_14d826c1e(void)

/* WARNING: Removing unreachable block (ram,0x00014d826cb5) */
/* WARNING: Removing unreachable block (ram,0x00014d826cc0) */
/* WARNING: Removing unreachable block (ram,0x00014d826d39) */
/* WARNING: Removing unreachable block (ram,0x00014d826d45) */
/* WARNING: Removing unreachable block (ram,0x00014d826d50) */
/* WARNING: Removing unreachable block (ram,0x00014d826de0) */
/* WARNING: Removing unreachable block (ram,0x00014d826deb) */
/* WARNING: Removing unreachable block (ram,0x00014d826e84) */
/* WARNING: Removing unreachable block (ram,0x00014d826e8f) */
/* WARNING: Removing unreachable block (ram,0x00014d826e8a) */
/* WARNING: Removing unreachable block (ram,0x000160b7ea8d) */
/* WARNING: Removing unreachable block (ram,0x00014d826de6) */
/* WARNING: Removing unreachable block (ram,0x000164bac9ac) */
/* WARNING: Removing unreachable block (ram,0x000161e22bf1) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe144) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe14a) */
/* WARNING: Removing unreachable block (ram,0x0001654429c1) */
/* WARNING: Removing unreachable block (ram,0x000165442a0f) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d826cbb) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0ac) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0b7) */
/* WARNING: Removing unreachable block (ram,0x00015b6fe0b2) */
/* WARNING: Removing unreachable block (ram,0x00014da76432) */

undefined8 FUN_14d826c1e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165463655();
  return uVar1;
}



// FUNCTION 14d827399 FUN_14d827399 body=283 status=ok
// SIG undefined FUN_14d827399(void)

void FUN_14d827399(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156f9d7ed(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  FUN_162bde5ac(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(undefined8 *)(unaff_R13 + -0x28));
  FUN_14d8274b9();
  return;
}



// FUNCTION 14d8274b9 FUN_14d8274b9 body=270 status=ok
// SIG undefined FUN_14d8274b9(void)

/* WARNING: Removing unreachable block (ram,0x00014d827557) */

void FUN_14d8274b9(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RDI;
  ulonglong local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RBX + 0x10);
  *(longlong *)(unaff_RBX + 0x10) = -*(longlong *)(unaff_RBX + 0x10);
  *(longlong *)(unaff_RBX + 0x10) = *(longlong *)(unaff_RBX + 0x10) + -1;
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | param_1;
  *(ulonglong *)(unaff_RBX + 0x10) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_RBX + 0x10));
  FUN_16154ce6c();
  FUN_1646cdd7e(local_res10,*(ulonglong *)(unaff_RDI + -0x68) ^ local_res10);
  FUN_16271e482(local_res10,param_4);
  FUN_14d82766f();
  return;
}



// FUNCTION 14d8275cb FUN_14d8275cb body=161 status=ok
// SIG undefined FUN_14d8275cb(void)

void FUN_14d8275cb(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_16271e482(param_1,local_res10);
  FUN_14d82766f();
  return;
}



// FUNCTION 14d82766f FUN_14d82766f body=606 status=ok
// SIG undefined FUN_14d82766f(void)

/* WARNING: Removing unreachable block (ram,0x00014d827701) */
/* WARNING: Removing unreachable block (ram,0x00014d827707) */
/* WARNING: Removing unreachable block (ram,0x00014d82784f) */
/* WARNING: Removing unreachable block (ram,0x00014d827855) */
/* WARNING: Removing unreachable block (ram,0x00015b0eb878) */

void FUN_14d82766f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong in_RAX;
  undefined8 unaff_R12;
  ushort uVar3;
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
  undefined8 in_stack_00000008;
  ushort local_res20;
  uint6 uStackX_22;
  
  puVar1 = (undefined8 *)(param_5 ^ in_RAX);
  uVar3 = (-0x101 - (local_res20 | 0xfeff)) + local_res20;
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x800) != 0;
  bVar10 = (uVar3 & 0x200) != 0;
  bVar9 = (uVar3 & 0x100) != 0;
  bVar8 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar4 = (uVar3 & 1) != 0;
  bVar16 = (uStackX_22 & 0x20) != 0;
  bVar13 = (uStackX_22 & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  puVar1[-1] = unaff_R12;
  puVar1[-2] = 0x244116;
  puVar1[-3] = param_3;
  puVar1[-4] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  *puVar1 = puVar1[-2];
  puVar1[-1] = in_stack_00000008;
  puVar1[-2] = in_stack_00000008;
  puVar1[-3] = unaff_R14;
  puVar1[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14d82791b FUN_14d82791b body=134 status=ok
// SIG undefined FUN_14d82791b(void)

void FUN_14d82791b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(code **)(local_res18 + -0x18) = FUN_14d8279a4;
  FUN_15759d2d4(param_1);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(unaff_R13 + -0x30);
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_157347248;
  return;
}



// FUNCTION 14d8279a4 FUN_14d8279a4 body=133 status=ok
// SIG undefined FUN_14d8279a4(void)

void FUN_14d8279a4(void)

{
  return;
}



// FUNCTION 14d827a2a FUN_14d827a2a body=19 status=ok
// SIG undefined FUN_14d827a2a(void)

void FUN_14d827a2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d827d89 FUN_14d827d89 body=568 status=ok
// SIG undefined FUN_14d827d89(void)

/* WARNING: Removing unreachable block (ram,0x000160e48b71) */
/* WARNING: Removing unreachable block (ram,0x00014d827e03) */
/* WARNING: Removing unreachable block (ram,0x00014d827e09) */
/* WARNING: Removing unreachable block (ram,0x000160e48c28) */
/* WARNING: Removing unreachable block (ram,0x000160e48b6b) */
/* WARNING: Removing unreachable block (ram,0x000160e48c1d) */
/* WARNING: Removing unreachable block (ram,0x000160e48c23) */
/* WARNING: Removing unreachable block (ram,0x000160f683bf) */

void FUN_14d827d89(void)

{
  FUN_15b9ff570();
  return;
}



// FUNCTION 14d82806d FUN_14d82806d body=135 status=ok
// SIG undefined FUN_14d82806d(void)

void FUN_14d82806d(void)

{
  FUN_15af98fb1();
  return;
}



// FUNCTION 14d8280f4 FUN_14d8280f4 body=316 status=ok
// SIG undefined FUN_14d8280f4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8281a3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8280f4(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 in_stack_00000008;
  undefined8 uStackX_18;
  
  uVar1 = param_2 + 0x46c85b42U ^ 0x6cc631f8;
  *(undefined8 *)(&stack0x00000010 + uVar1) = 0;
  *(ulonglong *)(&stack0x00000010 + uVar1) = *(ulonglong *)(&stack0x00000010 + uVar1) ^ param_4;
  FUN_1618ec8f0(uStackX_18,in_stack_00000008,FUN_1618ec8f0);
  return;
}



// FUNCTION 14d8282cf FUN_14d8282cf body=280 status=ok
// SIG undefined FUN_14d8282cf(void)

void FUN_14d8282cf(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong lStackX_10;
  
  uVar3 = ~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
          (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_160cc7ae3(uVar3,~((~in_RAX | uVar1) & (~(~uVar1 & in_RAX) + in_RAX) - uVar1));
  *(ulonglong *)(&stack0xfffffffffb5c3ff7 + lStackX_10) = uVar3;
  *(undefined8 *)(&stack0xfffffffffb5c3fef + lStackX_10) = *(undefined8 *)(unaff_R13 + -0x50);
  *(undefined4 *)(&stack0xfffffffffb5c3fe7 + lStackX_10) = 0;
  *(undefined4 *)(&stack0xfffffffffb5c3feb + lStackX_10) = 0;
  uVar2 = *(undefined8 *)(&stack0xfffffffffb5c3fe7 + lStackX_10);
  *(undefined8 *)(&stack0xfffffffffb5c3fe7 + lStackX_10) = in_R11;
  *(undefined8 *)(&stack0xfffffffffb5c3fdf + lStackX_10) = uVar2;
  *(undefined8 *)(&stack0xfffffffffb5c3fe7 + lStackX_10) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffffb5c3fdf + lStackX_10) = unaff_R14;
  uVar2 = *(undefined8 *)(&stack0xfffffffffb5c3ff7 + lStackX_10);
  *(undefined8 *)(&stack0xfffffffffb5c3ff7 + lStackX_10) = param_1;
  FUN_1666baf25(uVar2);
  return;
}



// FUNCTION 14d8283fe FUN_14d8283fe body=289 status=ok
// SIG undefined FUN_14d8283fe(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d828486) */
/* WARNING: Removing unreachable block (ram,0x00014d828492) */
/* WARNING: Removing unreachable block (ram,0x00014d828495) */

void FUN_14d8283fe(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  longlong local_res10;
  
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RSI;
  *(undefined **)(local_res10 + -8) = &DAT_160ce8c26 + *(longlong *)(local_res10 + -8);
  out(**(undefined1 **)(local_res10 + -0x20),param_2);
                    /* WARNING: Read-only address (ram,0x000148904fb6) is written */
  cRam0000000148904fb6 = unaff_BH + -0x40;
  *(undefined8 *)
   ((ulonglong)(uint)(*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * -0x31227b5f) -
   8) = 0x316919ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8285a8 FUN_14d8285a8 body=150 status=ok
// SIG undefined FUN_14d8285a8(void)

void FUN_14d8285a8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161bc5970(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14d8286e5 FUN_14d8286e5 body=151 status=ok
// SIG undefined FUN_14d8286e5(void)

void FUN_14d8286e5(void)

{
  FUN_162730cdd();
  return;
}



// FUNCTION 14d828812 FUN_14d828812 body=237 status=ok
// SIG undefined FUN_14d828812(void)

void FUN_14d828812(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  ulonglong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  
  FUN_156c9852c(param_1,param_2,in_stack_00000010,unaff_retaddr);
  *(undefined8 *)
   (&stack0x00000010 + ~(~(unaff_R12 & 0xffffffffb25433a4) & (unaff_R12 | 0xffffffffb25433a4))) =
       param_1;
  FUN_157649005(unaff_RSI,param_2);
  return;
}



// FUNCTION 14d828900 FUN_14d828900 body=285 status=ok
// SIG undefined FUN_14d828900(void)

/* WARNING: Removing unreachable block (ram,0x00014d828a15) */
/* WARNING: Removing unreachable block (ram,0x00014d828a20) */
/* WARNING: Removing unreachable block (ram,0x0001628b0673) */
/* WARNING: Removing unreachable block (ram,0x0001628b067e) */
/* WARNING: Removing unreachable block (ram,0x0001628b0679) */
/* WARNING: Removing unreachable block (ram,0x00014d828a1b) */

void FUN_14d828900(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000010;
  
  if ((in_R10 & (unaff_retaddr ^ param_3)) != 0) {
    FUN_1660b1800();
    FUN_1648f8c8e(in_stack_00000010,param_2,*(undefined8 *)(unaff_R13 + -0x98),param_4,
                  *(undefined8 *)(unaff_R13 + -0x70));
    return;
  }
  FUN_156db4bbd();
  return;
}



// FUNCTION 14d828a20 FUN_14d828a20 body=145 status=ok
// SIG undefined FUN_14d828a20(void)

void FUN_14d828a20(void)

{
  return;
}



// FUNCTION 14d8290e3 FUN_14d8290e3 body=31 status=ok
// SIG undefined FUN_14d8290e3(void)

undefined8 FUN_14d8290e3(void)

{
  undefined8 *unaff_RSI;
  
  return *unaff_RSI;
}



// FUNCTION 14d829197 FUN_14d829197 body=57 status=ok
// SIG undefined FUN_14d829197(void)

void FUN_14d829197(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined1 **)(local_res18 + -8) = &LAB_14d8291e3;
                    /* WARNING: Could not recover jumptable at 0x00014d8291ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d829232 FUN_14d829232 body=316 status=ok
// SIG undefined FUN_14d829232(void)

/* WARNING: Removing unreachable block (ram,0x00014d8292cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8292d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd134f6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d829232(void)

{
  FUN_14dd134f6();
  return;
}



// FUNCTION 14d8293e9 FUN_14d8293e9 body=259 status=ok
// SIG undefined FUN_14d8293e9(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8293e9(void)

{
  FUN_1621c0be0();
  FUN_166743ee0();
  FUN_165c7153c();
  return;
}



// FUNCTION 14d82957b FUN_14d82957b body=229 status=ok
// SIG undefined FUN_14d82957b(void)

/* WARNING: Removing unreachable block (ram,0x000165490f58) */
/* WARNING: Removing unreachable block (ram,0x0001620c0fae) */
/* WARNING: Removing unreachable block (ram,0x000165490ea4) */
/* WARNING: Removing unreachable block (ram,0x000165490f4d) */
/* WARNING: Removing unreachable block (ram,0x000165490f52) */
/* WARNING: Removing unreachable block (ram,0x000156d79c90) */
/* WARNING: Removing unreachable block (ram,0x0001620c0fb4) */
/* WARNING: Removing unreachable block (ram,0x00014d82960e) */

undefined8 FUN_14d82957b(void)

{
  undefined8 uVar1;
  
  if (&DAT_00000007 < &stack0x00000010) {
    uVar1 = FUN_1620c0e71();
    return uVar1;
  }
  FUN_1563421dc();
  uVar1 = FUN_165490ea4();
  return uVar1;
}



// FUNCTION 14d8296ad thunk_FUN_14d8296b3 body=5 status=ok
// SIG undefined thunk_FUN_14d8296b3(void)

/* WARNING: Removing unreachable block (ram,0x000156d8dd00) */
/* WARNING: Removing unreachable block (ram,0x000156d8dd06) */
/* WARNING: Removing unreachable block (ram,0x0001663b0070) */
/* WARNING: Removing unreachable block (ram,0x0001663b0076) */
/* WARNING: Removing unreachable block (ram,0x000156d8dc82) */
/* WARNING: Removing unreachable block (ram,0x00014d829759) */

undefined8 thunk_FUN_14d8296b3(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined8 in_stack_00000010;
  ushort uStackX_18;
  
  uVar4 = *(ulonglong *)(unaff_RDI + -0x50) ^ param_1;
  uVar3 = ~(~(~-*(longlong *)(unaff_RDI + -0x60) + 1U) & ~param_1);
  FUN_156420248();
  uVar1 = *(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = ~*(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = *(ulonglong *)(uVar4 + 0x10) | param_1;
  *(ulonglong *)(uVar4 + 0x10) =
       -1 - ((0xffffffffffffffff - param_1 | uVar1) & *(ulonglong *)(uVar4 + 0x10));
  if ((uStackX_18 | 0x100) < 0x101) {
    uVar2 = FUN_15760400b(in_stack_00000010,uVar3);
    return uVar2;
  }
  uVar2 = FUN_15760400b(in_stack_00000010,uVar3);
  return uVar2;
}



// FUNCTION 14d8296b3 FUN_14d8296b3 body=166 status=ok
// SIG undefined FUN_14d8296b3(void)

/* WARNING: Removing unreachable block (ram,0x000156d8dd00) */
/* WARNING: Removing unreachable block (ram,0x000156d8dd06) */
/* WARNING: Removing unreachable block (ram,0x0001663b0070) */
/* WARNING: Removing unreachable block (ram,0x0001663b0076) */
/* WARNING: Removing unreachable block (ram,0x000156d8dc82) */
/* WARNING: Removing unreachable block (ram,0x00014d829759) */

undefined8 FUN_14d8296b3(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined8 in_stack_00000010;
  ushort uStackX_18;
  
  uVar4 = *(ulonglong *)(unaff_RDI + -0x50) ^ param_1;
  uVar3 = ~(~(~-*(longlong *)(unaff_RDI + -0x60) + 1U) & ~param_1);
  FUN_156420248();
  uVar1 = *(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = ~*(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = *(ulonglong *)(uVar4 + 0x10) | param_1;
  *(ulonglong *)(uVar4 + 0x10) =
       -1 - ((0xffffffffffffffff - param_1 | uVar1) & *(ulonglong *)(uVar4 + 0x10));
  if ((uStackX_18 | 0x100) < 0x101) {
    uVar2 = FUN_15760400b(in_stack_00000010,uVar3);
    return uVar2;
  }
  uVar2 = FUN_15760400b(in_stack_00000010,uVar3);
  return uVar2;
}



// FUNCTION 14d829759 FUN_14d829759 body=174 status=ok
// SIG undefined FUN_14d829759(void)

void FUN_14d829759(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_161b7e56f(param_1,local_res10,FUN_161b7e56f);
  return;
}



// FUNCTION 14d829809 FUN_14d829809 body=286 status=ok
// SIG undefined FUN_14d829809(void)

/* WARNING: Removing unreachable block (ram,0x00014d829880) */
/* WARNING: Removing unreachable block (ram,0x00014d8298e0) */
/* WARNING: Removing unreachable block (ram,0x00014d8298db) */
/* WARNING: Removing unreachable block (ram,0x00014d8298f9) */
/* WARNING: Removing unreachable block (ram,0x00014d829916) */
/* WARNING: Removing unreachable block (ram,0x00014d82991c) */
/* WARNING: Removing unreachable block (ram,0x00014de847cd) */

void FUN_14d829809(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ushort *in_R10;
  longlong local_res20;
  
  *in_R10 = (-0x101 - ~((~*in_R10 | 0xfeff) + 0x101)) + *in_R10;
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = param_3;
  if (0xc1c5 < (ushort)unaff_RBP) {
    FUN_156b74636(param_1,param_2,*(undefined8 *)(local_res20 + -0x18));
    return;
  }
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = (longlong)(&LAB_156b74697 + *(longlong *)(local_res20 + -8));
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x18);
  return;
}



// FUNCTION 14d829ac9 FUN_14d829ac9 body=173 status=ok
// SIG undefined FUN_14d829ac9(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d829ac9(void)

{
  longlong in_RAX;
  undefined8 local_res18;
  
  return CONCAT62((int6)((ulonglong)(in_RAX - local_res18) >> 0x10),0x8ee8);
}



// FUNCTION 14d829b92 FUN_14d829b92 body=36 status=ok
// SIG undefined FUN_14d829b92(void)

void FUN_14d829b92(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14d829c4d FUN_14d829c4d body=136 status=ok
// SIG undefined FUN_14d829c4d(void)

void FUN_14d829c4d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_156bfac72(unaff_retaddr,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14d829dca FUN_14d829dca body=170 status=ok
// SIG undefined FUN_14d829dca(void)

void FUN_14d829dca(void)

{
  return;
}



// FUNCTION 14d829e74 FUN_14d829e74 body=535 status=ok
// SIG undefined FUN_14d829e74(void)

/* WARNING: Removing unreachable block (ram,0x00014d829efc) */
/* WARNING: Removing unreachable block (ram,0x00014d829f02) */
/* WARNING: Removing unreachable block (ram,0x00014d829f2e) */
/* WARNING: Removing unreachable block (ram,0x00014d829ed3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d829e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R13;
  
  uVar2 = 0xfffffffffffffff8;
  FUN_165b8864b();
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = *(ulonglong *)(unaff_R13 + 8) | 0xffffffffa673e897;
  *(ulonglong *)(unaff_R13 + 8) = ~(~(uVar1 & 0xffffffffa673e897) & *(ulonglong *)(unaff_R13 + 8));
  uVar2 = FUN_15b824a2c(FUN_15b824a2c,param_2,param_4,uVar2);
  return uVar2;
}



// FUNCTION 14d82a00c FUN_14d82a00c body=194 status=ok
// SIG undefined FUN_14d82a00c(void)

void FUN_14d82a00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_16250e848)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d82a294 FUN_14d82a294 body=521 status=ok
// SIG undefined FUN_14d82a294(void)

void FUN_14d82a294(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  undefined8 in_stack_00000018;
  
  uVar3 = ~(~(unaff_R15 & 0xffffffffdaccdb49) & (unaff_R15 | 0xffffffffdaccdb49));
  uVar1 = *(ulonglong *)(&stack0xfffffffffd6edbf8 + uVar3);
  *(longlong *)(&stack0xfffffffffd6edbf8 + uVar3) = -*(longlong *)(&stack0xfffffffffd6edbf8 + uVar3)
  ;
  *(longlong *)(&stack0xfffffffffd6edbf8 + uVar3) =
       *(longlong *)(&stack0xfffffffffd6edbf8 + uVar3) + -1;
  *(ulonglong *)(&stack0xfffffffffd6edbf8 + uVar3) =
       *(ulonglong *)(&stack0xfffffffffd6edbf8 + uVar3) | param_1;
  uVar2 = *(ulonglong *)(&stack0xfffffffffd6edbf8 + uVar3);
  *(undefined8 *)(&stack0xfffffffffd6edbf8 + uVar3) = 0;
  *(ulonglong *)(&stack0xfffffffffd6edbf8 + uVar3) =
       *(longlong *)(&stack0xfffffffffd6edbf8 + uVar3) + ~((~param_1 | uVar1) & uVar2);
  FUN_162c28699(in_stack_00000018);
  FUN_16600e586();
  FUN_162557e3c();
  FUN_161d54fc5();
  return;
}



// FUNCTION 14d82a4eb FUN_14d82a4eb body=304 status=ok
// SIG undefined FUN_14d82a4eb(void)

/* WARNING: Removing unreachable block (ram,0x00014d82a579) */
/* WARNING: Removing unreachable block (ram,0x00014d82a584) */
/* WARNING: Removing unreachable block (ram,0x00014d82a57f) */
/* WARNING: Removing unreachable block (ram,0x00014de3d4c7) */
/* WARNING: Removing unreachable block (ram,0x00014de3d4ac) */
/* WARNING: Removing unreachable block (ram,0x00014de3d4cf) */
/* WARNING: Removing unreachable block (ram,0x00014d841516) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d82a4eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d84f1de(0xdf9af1fd,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d82a6b5 FUN_14d82a6b5 body=319 status=ok
// SIG undefined FUN_14d82a6b5(void)

/* WARNING: Removing unreachable block (ram,0x00016676b085) */
/* WARNING: Removing unreachable block (ram,0x00016676b10e) */
/* WARNING: Removing unreachable block (ram,0x00016676b114) */
/* WARNING: Removing unreachable block (ram,0x00016676b119) */
/* WARNING: Removing unreachable block (ram,0x00016676b07f) */
/* WARNING: Removing unreachable block (ram,0x00016676b090) */
/* WARNING: Removing unreachable block (ram,0x00016676b0b8) */
/* WARNING: Removing unreachable block (ram,0x00016676b0c3) */
/* WARNING: Removing unreachable block (ram,0x00016676b0c6) */
/* WARNING: Removing unreachable block (ram,0x000161e1b21e) */
/* WARNING: Removing unreachable block (ram,0x00014d82a7f5) */
/* WARNING: Removing unreachable block (ram,0x00015b1d3fbe) */

void FUN_14d82a6b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  
  lVar2 = *(longlong *)(unaff_RSI + -0xa0);
  FUN_16230ad01(unaff_retaddr,param_2,param_3,param_4,*(undefined8 *)(unaff_RSI + -0x88));
  uVar3 = *(ulonglong *)(lVar2 + -0x38);
  uVar4 = *(ulonglong *)(lVar2 + -0x58);
  if (-1 < *(longlong *)(lVar2 + -0x88)) {
    FUN_16676afd0();
    return;
  }
  uVar5 = *(ulonglong *)(lVar2 + -0xa0);
  uVar1 = ~(unaff_RBX & unaff_RBP) & (unaff_RBX | unaff_RBP);
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(ulonglong *)(uVar1 - 0x10) = ~(uVar5 & unaff_RBP) & (uVar5 | unaff_RBP);
  FUN_156b37a87(uVar3 ^ unaff_RBP,uVar4 ^ unaff_RBP);
  return;
}



// FUNCTION 14d82a7f5 FUN_14d82a7f5 body=147 status=ok
// SIG undefined FUN_14d82a7f5(void)

void FUN_14d82a7f5(void)

{
  return;
}



// FUNCTION 14d82a88c FUN_14d82a88c body=145 status=ok
// SIG undefined FUN_14d82a88c(void)

void FUN_14d82a88c(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  longlong unaff_R13;
  
  FUN_15af56d05(param_1,(~(param_2 & param_4) + param_4) - ~param_2,
                *(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d82a992 FUN_14d82a992 body=148 status=ok
// SIG undefined FUN_14d82a992(void)

/* WARNING: Removing unreachable block (ram,0x00014d82a9b5) */

void FUN_14d82a992(void)

{
  ushort uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R13 + -0x38);
  FUN_1652561cc(*(undefined8 *)(unaff_R13 + -0x38),
                uVar1 + (ushort)unaff_R15 + (uVar1 & (ushort)unaff_R15) * -2,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15));
  return;
}



// FUNCTION 14d82ac52 FUN_14d82ac52 body=120 status=ok
// SIG undefined FUN_14d82ac52(void)

void FUN_14d82ac52(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_res8;
  
  FUN_1622af302(local_res8,param_2 + local_res8 + (param_2 & local_res8) * -2);
  return;
}



// FUNCTION 14d82ad6c FUN_14d82ad6c body=156 status=ok
// SIG undefined FUN_14d82ad6c(void)

void FUN_14d82ad6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x28) = param_2;
  *(undefined8 *)(local_res18 + -0x30) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(ulonglong *)(local_res18 + -0x10) =
       *(ulonglong *)(local_res18 + -0x10) ^ *(ulonglong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x20) = 0x14d82ae04;
  FUN_164a9a1f9(*(undefined8 *)(local_res18 + -0x30));
  FUN_14d82ae0a();
  return;
}



// FUNCTION 14d82ae0a FUN_14d82ae0a body=259 status=ok
// SIG undefined FUN_14d82ae0a(void)

/* WARNING: Removing unreachable block (ram,0x00014d82af89) */
/* WARNING: Removing unreachable block (ram,0x00014d82af8f) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2f7a) */
/* WARNING: Removing unreachable block (ram,0x00014de037a4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd312e) */
/* WARNING: Removing unreachable block (ram,0x00014de037ae) */
/* WARNING: Removing unreachable block (ram,0x00014de037dc) */
/* WARNING: Removing unreachable block (ram,0x00014de037e0) */

undefined8 FUN_14d82ae0a(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(ulonglong *)(local_res18 + -0x10) = unaff_RDI;
  *(ulonglong *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  lVar2 = *(longlong *)(local_res18 + -0x20);
  uVar1 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined1 **)(local_res18 + -8) = &LAB_165124208;
  *(undefined8 *)(local_res18 + -0x18) = 0x14d82ae9c;
  uVar3 = FUN_1651241df(local_res8);
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(ulonglong *)(local_res18 + -0x18) = uVar3;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  uVar5 = *(undefined8 *)(lVar2 + -0x48);
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  *(ulonglong *)(local_res18 + -0x18) =
       ~((~uVar3 | param_2) & (~(~param_2 & uVar3) + uVar3) - param_2);
  *(code **)(local_res18 + -0x20) = FUN_14d82af12;
  uVar4 = FUN_15b73bc58();
  *(undefined8 *)(local_res18 + -0x20) = uVar4;
  *(undefined8 *)(local_res18 + -0x20) = uVar5;
  *(longlong *)(local_res18 + -0x20) = lVar2;
  uVar5 = *(undefined8 *)(local_res18 + -0x20);
  *(ulonglong *)(local_res18 + -0x20) =
       ~((~((unaff_R15 ^ 0xffffffffffffffff) & uVar1) + uVar1) - ~(unaff_R15 ^ 0xffffffffffffffff))
       | ~((~(0xffffffffffffffff - uVar1 & unaff_R15) + unaff_R15) - ~(0xffffffffffffffff - uVar1));
  *(undefined8 *)(local_res18 + -0x20) = uVar5;
  uVar5 = FUN_14dbd2f7a();
  return uVar5;
}



// FUNCTION 14d82af12 FUN_14d82af12 body=190 status=ok
// SIG undefined FUN_14d82af12(void)

/* WARNING: Removing unreachable block (ram,0x00014d82af89) */
/* WARNING: Removing unreachable block (ram,0x00014d82af8f) */
/* WARNING: Removing unreachable block (ram,0x00014dbd2f7a) */
/* WARNING: Removing unreachable block (ram,0x00014de037a4) */
/* WARNING: Removing unreachable block (ram,0x00014dbd312e) */
/* WARNING: Removing unreachable block (ram,0x00014de037ae) */
/* WARNING: Removing unreachable block (ram,0x00014de037dc) */
/* WARNING: Removing unreachable block (ram,0x00014de037e0) */

undefined8 FUN_14d82af12(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14dbd2f7a();
  return uVar1;
}



// FUNCTION 14d82b0c3 FUN_14d82b0c3 body=11 status=ok
// SIG undefined FUN_14d82b0c3(void)

void FUN_14d82b0c3(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d82b155 FUN_14d82b155 body=174 status=ok
// SIG undefined FUN_14d82b155(void)

void FUN_14d82b155(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_162c649ed(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d82b20b thunk_FUN_14d82b211 body=5 status=ok
// SIG undefined thunk_FUN_14d82b211(void)

/* WARNING: Removing unreachable block (ram,0x00014da965ae) */
/* WARNING: Removing unreachable block (ram,0x00014da965b4) */
/* WARNING: Removing unreachable block (ram,0x00014d82b29c) */
/* WARNING: Removing unreachable block (ram,0x00014d82b2a7) */
/* WARNING: Removing unreachable block (ram,0x00014d82b335) */
/* WARNING: Removing unreachable block (ram,0x00014d82b33b) */
/* WARNING: Removing unreachable block (ram,0x00014da9651f) */
/* WARNING: Removing unreachable block (ram,0x000156d6b443) */
/* WARNING: Removing unreachable block (ram,0x00014d82b2a2) */

void thunk_FUN_14d82b211(undefined8 param_1)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R14;
  byte bVar2;
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
  ushort auStackX_8 [8];
  ulonglong uStackX_18;
  longlong lStackX_20;
  
  *(ushort *)((longlong)auStackX_8 + in_R10) =
       (*(ushort *)((longlong)auStackX_8 + in_R10) | 0x100) - 0x100;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x200) != 0;
  bVar7 = (uStackX_18 & 0x100) != 0;
  bVar6 = (uStackX_18 & 0x80) != 0;
  bVar5 = (uStackX_18 & 0x40) != 0;
  bVar4 = (uStackX_18 & 0x10) != 0;
  bVar3 = (uStackX_18 & 4) != 0;
  bVar2 = (uStackX_18 & 1) != 0;
  bVar14 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1);
  *(undefined8 *)(lStackX_20 + -8) = unaff_R14;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_RSI;
  *(ulonglong *)(lStackX_20 + -0x18) =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  FUN_15b333749();
  return;
}



// FUNCTION 14d82b211 FUN_14d82b211 body=576 status=ok
// SIG undefined FUN_14d82b211(void)

/* WARNING: Removing unreachable block (ram,0x00014da965ae) */
/* WARNING: Removing unreachable block (ram,0x00014da965b4) */
/* WARNING: Removing unreachable block (ram,0x00014d82b29c) */
/* WARNING: Removing unreachable block (ram,0x00014d82b2a7) */
/* WARNING: Removing unreachable block (ram,0x00014d82b335) */
/* WARNING: Removing unreachable block (ram,0x00014d82b33b) */
/* WARNING: Removing unreachable block (ram,0x00014da9651f) */
/* WARNING: Removing unreachable block (ram,0x000156d6b443) */
/* WARNING: Removing unreachable block (ram,0x00014d82b2a2) */

void FUN_14d82b211(undefined8 param_1)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R14;
  byte bVar2;
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
  ushort local_res8 [8];
  ulonglong uStackX_18;
  longlong local_res20;
  
  *(ushort *)((longlong)local_res8 + in_R10) =
       (*(ushort *)((longlong)local_res8 + in_R10) | 0x100) - 0x100;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x200) != 0;
  bVar7 = (uStackX_18 & 0x100) != 0;
  bVar6 = (uStackX_18 & 0x80) != 0;
  bVar5 = (uStackX_18 & 0x40) != 0;
  bVar4 = (uStackX_18 & 0x10) != 0;
  bVar3 = (uStackX_18 & 4) != 0;
  bVar2 = (uStackX_18 & 1) != 0;
  bVar14 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1);
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  FUN_15b333749();
  return;
}



// FUNCTION 14d82b46e FUN_14d82b46e body=467 status=ok
// SIG undefined FUN_14d82b46e(void)

/* WARNING: Removing unreachable block (ram,0x000160e1c150) */
/* WARNING: Removing unreachable block (ram,0x000160e1c156) */
/* WARNING: Removing unreachable block (ram,0x000164f4af27) */
/* WARNING: Removing unreachable block (ram,0x000164f4af2d) */
/* WARNING: Removing unreachable block (ram,0x000160e1c036) */
/* WARNING: Removing unreachable block (ram,0x000160e1c03c) */
/* WARNING: Removing unreachable block (ram,0x00015b7f3f0d) */
/* WARNING: Removing unreachable block (ram,0x00015b7f3f8e) */
/* WARNING: Removing unreachable block (ram,0x00015b7f3f9a) */
/* WARNING: Removing unreachable block (ram,0x00015b7f3f9f) */
/* WARNING: Removing unreachable block (ram,0x00014d8da653) */
/* WARNING: Removing unreachable block (ram,0x00014d8da6cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8da6d5) */
/* WARNING: Removing unreachable block (ram,0x000162eadfc8) */
/* WARNING: Removing unreachable block (ram,0x00014d8da700) */
/* WARNING: Removing unreachable block (ram,0x00014d8da703) */
/* WARNING: Removing unreachable block (ram,0x000160e1bfa9) */
/* WARNING: Removing unreachable block (ram,0x000164f4adf2) */
/* WARNING: Removing unreachable block (ram,0x000164f4ae81) */
/* WARNING: Removing unreachable block (ram,0x000164f4ae86) */
/* WARNING: Removing unreachable block (ram,0x000164f4ae8c) */
/* WARNING: Removing unreachable block (ram,0x000164f4ae91) */
/* WARNING: Removing unreachable block (ram,0x00015ba25fee) */
/* WARNING: Removing unreachable block (ram,0x000160e1bf8d) */
/* WARNING: Removing unreachable block (ram,0x00014d82b4fe) */
/* WARNING: Removing unreachable block (ram,0x00014d82b5a1) */
/* WARNING: Removing unreachable block (ram,0x00014d82b5a6) */
/* WARNING: Removing unreachable block (ram,0x00014d82b5ac) */
/* WARNING: Removing unreachable block (ram,0x00014d82b5fd) */
/* WARNING: Removing unreachable block (ram,0x0001653f85c9) */

void FUN_14d82b46e(void)

{
  FUN_166587894();
  return;
}



// FUNCTION 14d82b74f FUN_14d82b74f body=375 status=ok
// SIG undefined FUN_14d82b74f(void)

/* WARNING: Removing unreachable block (ram,0x00014d82b7b2) */
/* WARNING: Removing unreachable block (ram,0x00014d82b7e6) */
/* WARNING: Removing unreachable block (ram,0x00014d82b7f2) */

undefined8 FUN_14d82b74f(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80) ^ 0xffffffffffffffff | in_RAX;
  uVar1 = FUN_166dbcae9(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),
                        ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),
                        ~((~uVar2 | ~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) + uVar2 + 1));
  return uVar1;
}



// FUNCTION 14d82b916 FUN_14d82b916 body=141 status=ok
// SIG undefined FUN_14d82b916(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d82b916(undefined8 param_1,undefined8 param_2)

{
  FUN_164efc4be(param_1,param_2,FUN_164efc4be);
  FUN_161d42f04(param_1);
  return;
}



// FUNCTION 14d82b9a4 FUN_14d82b9a4 body=145 status=ok
// SIG undefined FUN_14d82b9a4(void)

void FUN_14d82b9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161d42f04(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d82bb5b FUN_14d82bb5b body=256 status=ok
// SIG undefined FUN_14d82bb5b(void)

/* WARNING: Removing unreachable block (ram,0x00014d82be59) */
/* WARNING: Removing unreachable block (ram,0x00014d82bbd6) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc2e) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc33) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc51) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc5c) */
/* WARNING: Removing unreachable block (ram,0x00014d82bde5) */
/* WARNING: Removing unreachable block (ram,0x000161c5fc86) */
/* WARNING: Removing unreachable block (ram,0x00014d82bdeb) */
/* WARNING: Removing unreachable block (ram,0x00014d82bdfd) */
/* WARNING: Removing unreachable block (ram,0x00014d82be00) */
/* WARNING: Removing unreachable block (ram,0x00014d82be5d) */
/* WARNING: Removing unreachable block (ram,0x00014d82be88) */
/* WARNING: Removing unreachable block (ram,0x00014d82be8d) */
/* WARNING: Removing unreachable block (ram,0x00014d82be93) */
/* WARNING: Removing unreachable block (ram,0x00014d82be98) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc57) */
/* WARNING: Removing unreachable block (ram,0x00014d82bc4c) */
/* WARNING: Removing unreachable block (ram,0x000161533332) */
/* WARNING: Removing unreachable block (ram,0x00016554e949) */

undefined8 FUN_14d82bb5b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(&stack0x00000010 + param_3) = unaff_RDI;
  uVar1 = FUN_16554e949();
  return uVar1;
}



// FUNCTION 14d82bc5c FUN_14d82bc5c body=727 status=ok
// SIG undefined FUN_14d82bc5c(void)

/* WARNING: Removing unreachable block (ram,0x00014d82be59) */
/* WARNING: Removing unreachable block (ram,0x00014d82bdeb) */
/* WARNING: Removing unreachable block (ram,0x00014d82bdfd) */
/* WARNING: Removing unreachable block (ram,0x00014d82be00) */
/* WARNING: Removing unreachable block (ram,0x00014d82be8d) */
/* WARNING: Removing unreachable block (ram,0x00014d82be98) */
/* WARNING: Removing unreachable block (ram,0x00014d82be93) */
/* WARNING: Removing unreachable block (ram,0x00014d82be88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d82bc5c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong unaff_RSI;
  longlong lVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  byte bVar10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_R13 + -0x70);
  bVar7 = (byte)FUN_156c1fa1e;
  local_10 = param_1;
  FUN_156c1fa1e();
  bVar10 = ~(byte)uVar11;
  uVar11 = CONCAT71((int7)((ulonglong)in_R11 >> 8),bVar10);
  uVar9 = ~*(ulonglong *)(unaff_RSI - 0x48);
  uVar6 = FUN_161c2467c(~(~bVar7 | bVar10),
                        -1 - (~(uVar9 & 0xf1b3c6aedb4dc9c9) &
                             (~*(ulonglong *)(unaff_RSI - 0x48) | 0xf1b3c6aedb4dc9c9)),
                        ~(~unaff_R14 & (param_3 | 0xffffffffda181735)));
  DAT_48e48b48242c034c = (undefined1)uVar6;
  plVar1 = (longlong *)((ulonglong)((int)&local_10 + 8) - 8);
  *plVar1 = (longlong)plVar1;
  *plVar1 = *plVar1 + 8;
  lVar5 = *plVar1;
  puVar4 = (ulonglong *)(lVar5 + -8);
  *puVar4 = 0;
  *puVar4 = *puVar4 ^ unaff_RSI;
  *(undefined4 *)(lVar5 + -0x10) = 0x5612d35;
  *(undefined4 *)(lVar5 + -0xc) = 0;
  lVar5 = *(longlong *)(lVar5 + -0x10);
  *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d3d) = uVar11;
  *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d45) = uVar6;
  *(undefined4 *)((longlong)puVar4 + lVar5 + -0x5612d45) = 0x9279caf;
  *(undefined4 *)((longlong)puVar4 + lVar5 + -0x5612d41) = 0;
  uVar11 = *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d45);
  *(ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d45) = uVar9;
  puVar2 = (ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d4d);
  *(int *)puVar2 = -0x1c2624ab;
  *(int *)puVar2 = (int)*puVar2 + 0x377e9168;
  *(undefined4 *)((longlong)puVar4 + lVar5 + -0x5612d49) = 0;
  uVar9 = *puVar2;
  *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d4d) = unaff_RDI;
  *(ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d55) = uVar9;
  uVar3 = *(ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d55);
  *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d55) = unaff_retaddr;
  *(ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d5d) =
       (~(uVar9 & 0xffffffffed800fdd) - 0x127ff023) - ~uVar9;
  uVar9 = *(ulonglong *)((longlong)puVar4 + lVar5 + -0x5612d5d);
  *(undefined8 *)((longlong)puVar4 + lVar5 + -0x5612d55) = uVar11;
  lVar8 = *(longlong *)((longlong)puVar4 + lVar5 + -0x5612d55) -
          ~((~uVar9 | ~(uVar3 & 0xffffffffed800fdd)) + uVar9 + 1);
  *(longlong *)((longlong)puVar4 + lVar5 + -0x5612d4d) = lVar8;
  *(longlong *)((longlong)puVar4 + lVar5 + -0x5612d55) = lVar8;
  *(undefined **)((longlong)puVar4 + lVar5 + -0x5612d4d) = &DAT_161c5fd21;
  return uVar6;
}



// FUNCTION 14d82bf3a FUN_14d82bf3a body=485 status=ok
// SIG undefined FUN_14d82bf3a(void)

/* WARNING: Removing unreachable block (ram,0x00014d82c0b6) */
/* WARNING: Removing unreachable block (ram,0x00014d82c08d) */
/* WARNING: Removing unreachable block (ram,0x00014d82c0b9) */
/* WARNING: Removing unreachable block (ram,0x0001566d6486) */

void FUN_14d82bf3a(void)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  longlong unaff_R12;
  
  FUN_1566132be(~*(ulonglong *)(unaff_R12 + -0x30),in_R10 | in_RAX);
  FUN_1566d6486();
  return;
}



// FUNCTION 14d82c321 FUN_14d82c321 body=155 status=ok
// SIG undefined FUN_14d82c321(void)

/* WARNING: Removing unreachable block (ram,0x00014d82c4dc) */
/* WARNING: Removing unreachable block (ram,0x00014d82c4e2) */
/* WARNING: Removing unreachable block (ram,0x00014d82c3bc) */
/* WARNING: Removing unreachable block (ram,0x00014d82c45e) */
/* WARNING: Removing unreachable block (ram,0x00014d82c4cf) */
/* WARNING: Removing unreachable block (ram,0x00014d82c4ca) */
/* WARNING: Removing unreachable block (ram,0x00014d82c4d6) */
/* WARNING: Removing unreachable block (ram,0x00014d82c463) */

void FUN_14d82c321(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x70);
  if (-1 < (longlong)
           ((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) & (uVar1 + param_1) - (uVar1 & param_1)))
  {
    FUN_14de39c98();
    return;
  }
  FUN_14de39c98();
  return;
}



// FUNCTION 14d82c3bc FUN_14d82c3bc body=323 status=ok
// SIG undefined FUN_14d82c3bc(void)

/* WARNING: Removing unreachable block (ram,0x00014d82c4dc) */
/* WARNING: Removing unreachable block (ram,0x00014d82c4e2) */

void FUN_14d82c3bc(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong local_res10;
  
  uVar2 = param_1 ^ 0xffffffffffffffff | local_res10;
  uVar1 = local_res10 ^ 0xffffffffffffffff | param_1;
  lVar3 = (uVar1 - (uVar2 | uVar1)) + uVar2;
  bVar4 = lVar3 == 0;
  FUN_1614cb92c(param_1,lVar3);
  if (bVar4) {
    return;
  }
  FUN_15b42043e();
  return;
}



// FUNCTION 14d82c6b1 FUN_14d82c6b1 body=148 status=ok
// SIG undefined FUN_14d82c6b1(void)

void FUN_14d82c6b1(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  
  FUN_1629fb046(~((in_RAX - 0x76e0601d) - (in_RAX & 0xffffffff891f9fe3)),param_2);
  return;
}



// FUNCTION 14d82c7c8 FUN_14d82c7c8 body=137 status=ok
// SIG undefined FUN_14d82c7c8(void)

void FUN_14d82c7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x161d7c775)(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d82c8e6 FUN_14d82c8e6 body=702 status=ok
// SIG undefined FUN_14d82c8e6(void)

/* WARNING: Removing unreachable block (ram,0x00014d82caf2) */
/* WARNING: Removing unreachable block (ram,0x00014d82c9ed) */
/* WARNING: Removing unreachable block (ram,0x0001570cf73b) */
/* WARNING: Removing unreachable block (ram,0x0001570cf740) */
/* WARNING: Removing unreachable block (ram,0x000161432f90) */
/* WARNING: Removing unreachable block (ram,0x0001570cf746) */

undefined8 FUN_14d82c8e6(ulonglong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  undefined8 in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar8;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar7 = ~((param_1 - (unaff_RDI | param_1)) + unaff_RDI);
  uVar8 = (unaff_RDI | param_1) - (uVar7 | unaff_RDI | param_1);
  if (!CARRY8(uVar8,uVar7)) {
    uVar5 = ~(local_res10 & param_1) & (local_res10 | param_1);
    param_1 = local_res20 ^ param_1;
    puVar1 = (undefined8 *)(param_1 - 8);
    *puVar1 = in_R11;
    *(undefined8 *)(param_1 - 0x10) = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 - 0x18) = unaff_RBP;
    *(undefined8 *)(param_1 - 0x20) = in_RAX;
    *(undefined1 **)(param_1 - 8) = &LAB_16273f4ae + *(longlong *)(param_1 - 8);
    uVar3 = *(undefined8 *)(param_1 - 0x10);
    *(undefined8 *)(param_1 - 0x10) = unaff_RSI;
    *(undefined8 *)(param_1 - 0x18) = unaff_RSI;
    *(undefined8 *)(param_1 - 0x10) = 0;
    *(ulonglong *)(param_1 - 0x10) = *(ulonglong *)(param_1 - 0x10) ^ 0x14d7ac254;
    *(undefined8 *)(param_1 - 0x20) = 0x156f550c8;
    uVar4 = FUN_16273f488(uVar5,in_stack_00000008);
    uVar6 = (unaff_R12 + *(longlong *)(unaff_R13 + 0x10)) -
            (unaff_R12 & *(ulonglong *)(unaff_R13 + 0x10));
    *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
    *(ulonglong *)(unaff_R13 + 0x10) = *(ulonglong *)(unaff_R13 + 0x10) | unaff_R15;
    *(ulonglong *)(unaff_R13 + 0x10) =
         -1 - ((*(longlong *)(unaff_R13 + 0x10) - (uVar6 | *(ulonglong *)(unaff_R13 + 0x10))) +
              uVar6);
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfeff;
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(ulonglong *)(lVar2 + -8) = uVar5;
    *(undefined8 *)(lVar2 + -0x10) = uVar3;
    *(undefined8 *)(lVar2 + -0x18) = uVar3;
    *(ulonglong *)(lVar2 + -0x20) = uVar8 + uVar7;
    *(undefined1 **)(lVar2 + -0x28) = &LAB_156f55150;
    return uVar4;
  }
  if (!CARRY8(uVar8,uVar7) && uVar8 + uVar7 != 0) {
    uVar7 = *(ulonglong *)(unaff_R13 + -0x88);
    uVar3 = FUN_160f6f749(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                          *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,
                          ~(uVar7 & unaff_R15 | ~((uVar7 + unaff_R15) - (uVar7 & unaff_R15))));
    return uVar3;
  }
  uVar3 = FUN_156f5501d();
  return uVar3;
}



// FUNCTION 14d82cbab FUN_14d82cbab body=132 status=ok
// SIG undefined FUN_14d82cbab(void)

void FUN_14d82cbab(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 local_res8;
  
  uVar1 = (uint)((ulonglong)param_2 >> 0x20);
  FUN_1661b8c96(0xf,~(uVar1 + param_3 + (uVar1 & param_3) * -2),local_res8);
  return;
}


