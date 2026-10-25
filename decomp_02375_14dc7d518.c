// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dc7d518 FUN_14dc7d518 body=42 status=ok
// SIG undefined FUN_14dc7d518(void)

void FUN_14dc7d518(void)

{
  return;
}



// FUNCTION 14dc7d662 FUN_14dc7d662 body=15 status=ok
// SIG undefined FUN_14dc7d662(void)

void FUN_14dc7d662(void)

{
  return;
}



// FUNCTION 14dc7d767 FUN_14dc7d767 body=150 status=ok
// SIG undefined FUN_14dc7d767(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc7d8bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc7d8c2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc7d767(void)

{
  undefined4 extraout_var;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  FUN_14d9fbeb5();
  if (unaff_RSI != 0) {
    (&stack0x270aa354)[CONCAT44(extraout_var,0xd8f55dc8)] = 0;
    (&stack0x270aa354)[CONCAT44(extraout_var,0xd8f55dc8)] =
         (&stack0x270aa354)[CONCAT44(extraout_var,0xd8f55dc8)];
    uVar1 = FUN_16214b277();
    return uVar1;
  }
  uVar1 = FUN_15b104460();
  return uVar1;
}



// FUNCTION 14dc7d7fe FUN_14dc7d7fe body=325 status=ok
// SIG undefined FUN_14dc7d7fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7d8a5) */
/* WARNING: Removing unreachable block (ram,0x00014dc7d8bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc7d8c2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc7d7fe(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_res10;
  
  if (local_res10 != 0) {
    local_res10 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),0xd8f55dc8);
    (&stack0x270aa364)[local_res10] = 0;
    (&stack0x270aa364)[local_res10] = (&stack0x270aa364)[local_res10];
    uVar1 = FUN_16214b277();
    return uVar1;
  }
  uVar1 = FUN_15b104460();
  return uVar1;
}



// FUNCTION 14dc7da0e FUN_14dc7da0e body=204 status=ok
// SIG undefined FUN_14dc7da0e(void)

/* WARNING: Removing unreachable block (ram,0x0001618f8de9) */
/* WARNING: Removing unreachable block (ram,0x00014dc7dac4) */

undefined8 FUN_14dc7da0e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000010;
  undefined8 uStack_58;
  
  uVar2 = ~(*(ulonglong *)(unaff_RDI + -0x98) & param_1) &
          (*(ulonglong *)(unaff_RDI + -0x98) | param_1);
  if ((0xffffffffffffffff - param_1 | *(ulonglong *)(unaff_RDI + -8)) != 0xffffffffffffffff ||
      (~*(ulonglong *)(unaff_RDI + -8) | param_1) != 0xffffffffffffffff) {
    uVar1 = FUN_1618f8cb0();
    return uVar1;
  }
  FUN_160f3dfc4(uVar2,param_2,param_3,unaff_retaddr,
                in_stack_00000010 + param_1 + (in_stack_00000010 & param_1) * -2);
  if (uVar2 == 0xffffffffffffffff && uStack_58 == 0) {
    return 0x534eb1e0;
  }
  uVar1 = FUN_1576044de();
  return uVar1;
}



// FUNCTION 14dc7db4f FUN_14dc7db4f body=3 status=ok
// SIG undefined FUN_14dc7db4f(void)

void FUN_14dc7db4f(void)

{
  return;
}



// FUNCTION 14dc7dbfc FUN_14dc7dbfc body=297 status=ok
// SIG undefined FUN_14dc7dbfc(void)

/* WARNING: Removing unreachable block (ram,0x000156597997) */
/* WARNING: Removing unreachable block (ram,0x00014dc7dc9b) */
/* WARNING: Removing unreachable block (ram,0x000156d72263) */
/* WARNING: Removing unreachable block (ram,0x000156d7225d) */
/* WARNING: Removing unreachable block (ram,0x000156d72268) */
/* WARNING: Removing unreachable block (ram,0x00014dc7dc90) */

void FUN_14dc7dbfc(undefined8 param_1)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  FUN_164a4f0b1(param_1,local_res10);
  (*(code *)0x15b5e8312)(~(DAT_164a4f039 & unaff_R15),0x15b5e8312,DAT_164a4f029 ^ unaff_R15);
  return;
}



// FUNCTION 14dc7dd29 FUN_14dc7dd29 body=471 status=ok
// SIG undefined FUN_14dc7dd29(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7ddbb) */
/* WARNING: Removing unreachable block (ram,0x00014dc7ddc1) */
/* WARNING: Removing unreachable block (ram,0x00014dc7de60) */
/* WARNING: Removing unreachable block (ram,0x00015b381b75) */

void FUN_14dc7dd29(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_1649942f1(~((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x38)) &
                 (~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP)),
                *(undefined8 *)(unaff_RSI + -0x58));
  FUN_156745a9c();
  return;
}



// FUNCTION 14dc7e1be FUN_14dc7e1be body=152 status=ok
// SIG undefined FUN_14dc7e1be(void)

void FUN_14dc7e1be(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  
  thunk_FUN_162bd462d(unaff_RSI,param_2,~(unaff_RBX & (param_3 | unaff_RBP)));
  return;
}



// FUNCTION 14dc7e25c FUN_14dc7e25c body=76 status=ok
// SIG undefined FUN_14dc7e25c(void)

void FUN_14dc7e25c(void)

{
  return;
}



// FUNCTION 14dc7e42c FUN_14dc7e42c body=184 status=ok
// SIG undefined FUN_14dc7e42c(void)

void FUN_14dc7e42c(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_157354458(param_1,0xffffffffa3966be2,local_res8);
  return;
}



// FUNCTION 14dc7e4e6 FUN_14dc7e4e6 body=271 status=ok
// SIG undefined FUN_14dc7e4e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7e579) */

void FUN_14dc7e4e6(ulonglong param_1)

{
  ulonglong unaff_RBX;
  longlong unaff_R14;
  undefined8 uStackX_20;
  
  *(ulonglong *)(unaff_R14 + 8) = ~(param_1 | ~*(ulonglong *)(unaff_R14 + 8)) | param_1;
  *(ulonglong *)(unaff_R14 + 8) = -1 - (unaff_RBX & *(ulonglong *)(unaff_R14 + 8));
  if (CARRY8(param_1,uStackX_20)) {
    FUN_16631ec56();
    return;
  }
  FUN_16631ec56();
  return;
}



// FUNCTION 14dc7e674 FUN_14dc7e674 body=100 status=ok
// SIG undefined FUN_14dc7e674(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dc7e674(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc7e7b7 FUN_14dc7e7b7 body=359 status=ok
// SIG undefined FUN_14dc7e7b7(void)

void FUN_14dc7e7b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1649fd07f(FUN_1649fd07f,param_2,param_3,param_4);
  FUN_15b5e8bc8();
  return;
}



// FUNCTION 14dc7e926 thunk_FUN_14dc7e92c body=5 status=ok
// SIG undefined thunk_FUN_14dc7e92c(void)

void thunk_FUN_14dc7e92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 unaff_RBX;
  ushort *unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_15699524d(0xfffffffffffffff8,param_2,param_3,unaff_retaddr);
  uVar1 = *unaff_RSI;
  *unaff_RSI = 0;
  *unaff_RSI = *unaff_RSI + ((uVar1 | 0x100) - 0x100);
  *(undefined8 *)(uStackX_8 + -8) = unaff_R14;
  *(undefined8 *)(uStackX_8 + -0x10) = unaff_R12;
  *(undefined8 *)(uStackX_8 + -0x18) = unaff_R13;
  *(undefined4 *)(uStackX_8 + -0x20) = 0x67d2;
  *(undefined4 *)(uStackX_8 + -0x1c) = 0xbf083441;
  *(int *)(uStackX_8 + -0x1c) = *(int *)(uStackX_8 + -0x1c) + 0x40f7cbbf;
  FUN_14dd9dc8f(unaff_RBX);
  return;
}



// FUNCTION 14dc7e92c FUN_14dc7e92c body=138 status=ok
// SIG undefined FUN_14dc7e92c(void)

void FUN_14dc7e92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 unaff_RBX;
  ushort *unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_15699524d(0xfffffffffffffff8,param_2,param_3,unaff_retaddr);
  uVar1 = *unaff_RSI;
  *unaff_RSI = 0;
  *unaff_RSI = *unaff_RSI + ((uVar1 | 0x100) - 0x100);
  *(undefined8 *)(uStackX_8 + -8) = unaff_R14;
  *(undefined8 *)(uStackX_8 + -0x10) = unaff_R12;
  *(undefined8 *)(uStackX_8 + -0x18) = unaff_R13;
  *(undefined4 *)(uStackX_8 + -0x20) = 0x67d2;
  *(undefined4 *)(uStackX_8 + -0x1c) = 0xbf083441;
  *(int *)(uStackX_8 + -0x1c) = *(int *)(uStackX_8 + -0x1c) + 0x40f7cbbf;
  FUN_14dd9dc8f(unaff_RBX);
  return;
}



// FUNCTION 14dc7e9b6 FUN_14dc7e9b6 body=148 status=ok
// SIG undefined FUN_14dc7e9b6(void)

void FUN_14dc7e9b6(void)

{
  ushort uVar1;
  ushort *unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  uVar1 = *unaff_RSI;
  *unaff_RSI = 0;
  *unaff_RSI = *unaff_RSI + ((uVar1 | 0x100) - 0x100);
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined4 *)(local_res20 + -0x20) = 0x67d2;
  *(undefined4 *)(local_res20 + -0x1c) = 0xbf083441;
  *(int *)(local_res20 + -0x1c) = *(int *)(local_res20 + -0x1c) + 0x40f7cbbf;
  FUN_14dd9dc8f(unaff_retaddr);
  return;
}



// FUNCTION 14dc7eaf4 FUN_14dc7eaf4 body=174 status=ok
// SIG undefined FUN_14dc7eaf4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7eb99) */
/* WARNING: Removing unreachable block (ram,0x00014dc7eba4) */
/* WARNING: Removing unreachable block (ram,0x00014dc7eb9f) */

void FUN_14dc7eaf4(void)

{
  FUN_156e7cd46();
  return;
}



// FUNCTION 14dc7eba4 thunk_FUN_14dc7ebaa body=5 status=ok
// SIG undefined thunk_FUN_14dc7ebaa(void)

void thunk_FUN_14dc7ebaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_164846ef8(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14dc7ebaa FUN_14dc7ebaa body=112 status=ok
// SIG undefined FUN_14dc7ebaa(void)

void FUN_14dc7ebaa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_164846ef8(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14dc7ec15 FUN_14dc7ec15 body=13 status=ok
// SIG undefined FUN_14dc7ec15(void)

void FUN_14dc7ec15(void)

{
  return;
}



// FUNCTION 14dc7f411 FUN_14dc7f411 body=86 status=ok
// SIG undefined FUN_14dc7f411(void)

void FUN_14dc7f411(void)

{
  return;
}



// FUNCTION 14dc7f48f FUN_14dc7f48f body=157 status=ok
// SIG undefined FUN_14dc7f48f(void)

void FUN_14dc7f48f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x14dacc0a0)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc7f52c FUN_14dc7f52c body=90 status=ok
// SIG undefined FUN_14dc7f52c(void)

void FUN_14dc7f52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_14d7a8182(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dc7f5c9 FUN_14dc7f5c9 body=79 status=ok
// SIG undefined FUN_14dc7f5c9(void)

void FUN_14dc7f5c9(void)

{
  return;
}



// FUNCTION 14dc7f670 FUN_14dc7f670 body=286 status=ok
// SIG undefined FUN_14dc7f670(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7f6fa) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f700) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f74e) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f749) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f751) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f75f) */
/* WARNING: Removing unreachable block (ram,0x00014dc7f762) */

void FUN_14dc7f670(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_1575fc9e7(param_1,*(undefined8 *)(param_2 + -0xa0),param_3,in_stack_00000008,
                *(undefined8 *)(param_2 + -0x40));
  FUN_1653b6b3b(param_1,*(ulonglong *)(unaff_RDI + -0x70) + param_1,
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) << 1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dc7f78e FUN_14dc7f78e body=139 status=ok
// SIG undefined FUN_14dc7f78e(void)

void FUN_14dc7f78e(undefined1 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162a0cde8(param_1,-1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                             (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dc7f82d FUN_14dc7f82d body=48 status=ok
// SIG undefined FUN_14dc7f82d(void)

ulonglong FUN_14dc7f82d(void)

{
  ulonglong uVar1;
  ulonglong *unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_R12;
  *unaff_R12 = *unaff_R12 ^ 0xffffffffffffffff;
  *unaff_R12 = *unaff_R12 | unaff_R15;
  return (~unaff_R15 | uVar1) & *unaff_R12;
}



// FUNCTION 14dc7fbca FUN_14dc7fbca body=553 status=ok
// SIG undefined FUN_14dc7fbca(void)

/* WARNING: Removing unreachable block (ram,0x00015b23e0a2) */
/* WARNING: Removing unreachable block (ram,0x00015b23e0c2) */
/* WARNING: Removing unreachable block (ram,0x00015b035378) */
/* WARNING: Removing unreachable block (ram,0x00015b03537e) */
/* WARNING: Removing unreachable block (ram,0x00014dc7fd3e) */
/* WARNING: Removing unreachable block (ram,0x00014dc7fcc5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc7fbca(void)

{
  ulonglong unaff_RDI;
  ulonglong uStackX_10;
  
  FUN_15b421913();
  FUN_15b23e0a2(unaff_RDI + uStackX_10 + (unaff_RDI & uStackX_10) * -2);
  return;
}



// FUNCTION 14dc7ff2e FUN_14dc7ff2e body=157 status=ok
// SIG undefined FUN_14dc7ff2e(void)

undefined8 FUN_14dc7ff2e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc8022f FUN_14dc8022f body=292 status=ok
// SIG undefined FUN_14dc8022f(void)

void FUN_14dc8022f(void)

{
  FUN_14e09f532();
  FUN_15b005e2d();
  return;
}



// FUNCTION 14dc80354 FUN_14dc80354 body=180 status=ok
// SIG undefined FUN_14dc80354(void)

void FUN_14dc80354(void)

{
  return;
}



// FUNCTION 14dc805d1 FUN_14dc805d1 body=283 status=ok
// SIG undefined FUN_14dc805d1(void)

void FUN_14dc805d1(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  FUN_1649909a1(param_1,(~param_1 + uVar1) - (~param_1 & uVar1) & (~uVar1 | param_1) ^
                        0xffffffffffffffff);
  FUN_14da6241b(local_res10);
  return;
}



// FUNCTION 14dc806f0 FUN_14dc806f0 body=138 status=ok
// SIG undefined FUN_14dc806f0(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc806f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  ulonglong unaff_R12;
  longlong unaff_R13;
  undefined8 local_res18;
  
  *(ulonglong *)(in_RAX + 0x18) = (unaff_R13 - ~unaff_R12) + 1;
  FUN_165d4d644(param_1,FUN_165d4d644,param_3,local_res18);
  return;
}



// FUNCTION 14dc8077b FUN_14dc8077b body=154 status=ok
// SIG undefined FUN_14dc8077b(void)

void FUN_14dc8077b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x1613661e1)(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dc80a76 FUN_14dc80a76 body=143 status=ok
// SIG undefined FUN_14dc80a76(void)

void FUN_14dc80a76(void)

{
  return;
}



// FUNCTION 14dc80d20 FUN_14dc80d20 body=272 status=ok
// SIG undefined FUN_14dc80d20(void)

/* WARNING: Removing unreachable block (ram,0x000164b594b9) */
/* WARNING: Removing unreachable block (ram,0x000164b595a4) */
/* WARNING: Removing unreachable block (ram,0x000164b595aa) */
/* WARNING: Removing unreachable block (ram,0x000166178e73) */
/* WARNING: Removing unreachable block (ram,0x00014dc80da0) */
/* WARNING: Removing unreachable block (ram,0x00014dc80da6) */
/* WARNING: Removing unreachable block (ram,0x000166dbd0e7) */
/* WARNING: Removing unreachable block (ram,0x000166dbd0e1) */
/* WARNING: Removing unreachable block (ram,0x000164b594b3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc80d20(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  *(undefined8 *)((*(ulonglong *)(unaff_RDI + -0x90) ^ unaff_retaddr) - 8) = 0x5d73f62;
  uVar2 = FUN_165c7153c(uVar1 ^ unaff_retaddr);
  return uVar2;
}



// FUNCTION 14dc80ead FUN_14dc80ead body=146 status=ok
// SIG undefined FUN_14dc80ead(void)

void FUN_14dc80ead(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_16545dcca(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14dc80f40 FUN_14dc80f40 body=500 status=ok
// SIG undefined FUN_14dc80f40(void)

/* WARNING: Removing unreachable block (ram,0x00014dc80ff3) */

void FUN_14dc80f40(void)

{
  ulonglong in_RAX;
  ushort unaff_DI;
  longlong unaff_R12;
  ushort in_stack_00000040;
  
  FUN_1620945b6(((~in_stack_00000040 & unaff_DI ^ 0xffff) + unaff_DI) - in_stack_00000040,
                0xffffffffffffff80,
                -1 - ((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                     (*(ulonglong *)(unaff_R12 + -0x80) ^ 0xffffffffffffffff | in_RAX)),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  FUN_16183db08();
  return;
}



// FUNCTION 14dc81093 FUN_14dc81093 body=125 status=ok
// SIG undefined FUN_14dc81093(void)

void FUN_14dc81093(undefined8 param_1)

{
  FUN_156a3da26(param_1,param_1);
  return;
}



// FUNCTION 14dc81117 FUN_14dc81117 body=334 status=ok
// SIG undefined FUN_14dc81117(void)

void FUN_14dc81117(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP;
  lVar2 = *(longlong *)(unaff_RSI + -0x60);
  lVar1 = unaff_RBP + lVar2;
  FUN_15b67ca0b();
  FUN_16598e9fc(lVar1,param_2,lVar2,uVar3);
  return;
}



// FUNCTION 14dc81267 FUN_14dc81267 body=276 status=ok
// SIG undefined FUN_14dc81267(void)

void FUN_14dc81267(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R15;
  longlong alStack_20 [4];
  
  alStack_20[3] = 0x14dc812d7;
  FUN_15680efe2(param_1,param_2,(~in_RAX | param_3) + unaff_RBP + 1);
  plVar1 = (longlong *)(&stack0x00000000 + ~param_1);
  lVar2 = *(longlong *)(unaff_RDI + -0x48);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar2;
  *plVar1 = in_R11;
  *plVar1 = *plVar1;
  plVar1[-1] = unaff_RDI;
  plVar1[-2] = unaff_R15;
  plVar1[-3] = unaff_R15;
  plVar1[-4] = unaff_R15;
  plVar1[-2] = (longlong)FUN_14dc8137e;
  plVar1[-3] = (longlong)&LAB_14dec3a0d;
  return;
}



// FUNCTION 14dc8137e FUN_14dc8137e body=196 status=ok
// SIG undefined FUN_14dc8137e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc814c6) */

undefined8 FUN_14dc8137e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_R11;
  ulonglong in_stack_00000010;
  
  uVar3 = *(ulonglong *)(&stack0x3328c7a5 + param_4);
  FUN_157112550(param_1,param_2);
  if (param_1 == -1) {
    uVar2 = FUN_1660f0d49();
    return uVar2;
  }
  FUN_162deae1e();
  uVar1 = 0xffffffffffffffff - uVar3 | in_stack_00000010;
  uVar3 = ~uVar1 | in_stack_00000010 ^ 0xffffffffffffffff | uVar3;
  if (CARRY8(uVar3,uVar1)) {
    return in_R11;
  }
  uVar2 = FUN_160f6f7ed(uVar3 + uVar1);
  return uVar2;
}



// FUNCTION 14dc81443 FUN_14dc81443 body=525 status=ok
// SIG undefined FUN_14dc81443(void)

/* WARNING: Removing unreachable block (ram,0x00014dc814c6) */

undefined8 FUN_14dc81443(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  uVar1 = in_RAX + param_3 * -2;
  if (param_1 == 0xffffffffffffffff) {
    uVar2 = FUN_1660f0d49();
    return uVar2;
  }
  FUN_162deae1e(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                ~((param_1 - (uVar1 | param_1)) + uVar1 | ~(uVar1 | param_1)));
  uVar1 = 0xffffffffffffffff - uStackX_8 | unaff_R15;
  uVar3 = ~uVar1 | unaff_R15 ^ 0xffffffffffffffff | uStackX_8;
  if (CARRY8(uVar3,uVar1)) {
    return in_R11;
  }
  uVar2 = FUN_160f6f7ed(uVar3 + uVar1);
  return uVar2;
}



// FUNCTION 14dc815db FUN_14dc815db body=69 status=ok
// SIG undefined FUN_14dc815db(void)

/* WARNING: Removing unreachable block (ram,0x00014dc81675) */
/* WARNING: Removing unreachable block (ram,0x00014dc81686) */
/* WARNING: Removing unreachable block (ram,0x00014dc8167b) */

undefined8 FUN_14dc815db(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156d049ee();
  return uVar1;
}



// FUNCTION 14dc8186e FUN_14dc8186e body=144 status=ok
// SIG undefined FUN_14dc8186e(void)

void FUN_14dc8186e(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + unaff_RSI + 0x7b77ac1e);
  (*(code *)&LAB_1570d9c10)
            (param_1,*(ulonglong *)(unaff_RDI + -0x80) & 0xffffffff,
             (~param_1 + uVar1) - (~param_1 & uVar1) & (~uVar1 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dc818fe FUN_14dc818fe body=153 status=ok
// SIG undefined FUN_14dc818fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dc81984) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dc818fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  
  *in_R10 = unaff_R14;
  FUN_162ad17cc(unaff_retaddr,param_2,param_3,param_4);
  return 0xfffffffe9618c224;
}



// FUNCTION 14dc819a5 FUN_14dc819a5 body=44 status=ok
// SIG undefined FUN_14dc819a5(void)

void FUN_14dc819a5(void)

{
  return;
}



// FUNCTION 14dc81bfc FUN_14dc81bfc body=331 status=ok
// SIG undefined FUN_14dc81bfc(void)

void FUN_14dc81bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_R10;
  ulonglong in_R11;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10 [3];
  
  uVar4 = FUN_1629efd02(*(ulonglong *)(unaff_R13 - 0x78) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 - 0x78) & unaff_R15) * -2,
                        ~((~unaff_R15 | *(ulonglong *)(unaff_R13 - 0x28)) &
                         (~*(ulonglong *)(unaff_R13 - 0x28) | unaff_R15)));
  lVar3 = 0x10 - ((~in_R11 ^ 0xffffffffffffffff) & unaff_R13);
  lVar2 = -(ulonglong)((local_res10[0] & 1) != 0);
  *(undefined8 *)((longlong)local_res10 + lVar2 + lVar3 + -0x10) = param_4;
  *(undefined4 *)((longlong)local_res10 + lVar2 + lVar3 + -0x18) = 0x26a925ef;
  *(undefined4 *)((longlong)local_res10 + lVar2 + lVar3 + -0x14) = 0;
  *(undefined8 *)((longlong)local_res10 + lVar2 + lVar3 + -0x10) = param_3;
  puVar1 = (undefined8 *)((longlong)local_res10 + lVar2 + lVar3 + -0x18);
  *(undefined4 *)puVar1 = 0x14af495e;
  *(undefined4 *)((longlong)local_res10 + lVar2 + lVar3 + -0x14) = 0;
  *puVar1 = uVar4;
  *(undefined8 *)((longlong)local_res10 + lVar2 + lVar3 + -0x20) = uVar4;
  *(undefined4 *)((longlong)local_res10 + lVar2 + lVar3 + -0x20) = 0x111265f0;
  *(undefined4 *)((longlong)local_res10 + lVar2 + lVar3 + -0x1c) = 0;
  *(undefined8 *)((longlong)local_res10 + lVar2 + lVar3 + -0x20) = in_R10;
  FUN_15b732d9d(local_res8);
  return;
}



// FUNCTION 14dc81df1 FUN_14dc81df1 body=168 status=ok
// SIG undefined FUN_14dc81df1(void)

longlong FUN_14dc81df1(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  return *(longlong *)(unaff_R13 + -8) + unaff_R15;
}



// FUNCTION 14dc81e99 FUN_14dc81e99 body=139 status=ok
// SIG undefined FUN_14dc81e99(void)

longlong FUN_14dc81e99(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return -~unaff_RBP - (~*(ulonglong *)(unaff_RSI + -0x98) + 2);
}



// FUNCTION 14dc81fab FUN_14dc81fab body=668 status=ok
// SIG undefined FUN_14dc81fab(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165b66c8c) */
/* WARNING: Removing unreachable block (ram,0x000165b66c92) */
/* WARNING: Removing unreachable block (ram,0x00016578654b) */
/* WARNING: Removing unreachable block (ram,0x000162913f55) */
/* WARNING: Removing unreachable block (ram,0x000162913f5b) */
/* WARNING: Removing unreachable block (ram,0x000162913eb4) */
/* WARNING: Removing unreachable block (ram,0x00014dc82043) */
/* WARNING: Removing unreachable block (ram,0x00014dc820c8) */
/* WARNING: Removing unreachable block (ram,0x00014dc820ce) */
/* WARNING: Removing unreachable block (ram,0x000162913d84) */
/* WARNING: Removing unreachable block (ram,0x000162913e0b) */
/* WARNING: Removing unreachable block (ram,0x000162913e00) */
/* WARNING: Removing unreachable block (ram,0x000156ab93a6) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fcc) */
/* WARNING: Removing unreachable block (ram,0x00015afc806f) */
/* WARNING: Removing unreachable block (ram,0x00015afc8074) */
/* WARNING: Removing unreachable block (ram,0x00014dec7dab) */
/* WARNING: Removing unreachable block (ram,0x00015afc807a) */
/* WARNING: Removing unreachable block (ram,0x000162913e11) */
/* WARNING: Removing unreachable block (ram,0x000162913eb9) */
/* WARNING: Removing unreachable block (ram,0x00016111393e) */
/* WARNING: Removing unreachable block (ram,0x0001611139b2) */
/* WARNING: Removing unreachable block (ram,0x00015b1725e3) */
/* WARNING: Removing unreachable block (ram,0x000162913ebf) */
/* WARNING: Removing unreachable block (ram,0x00016663ef25) */
/* WARNING: Removing unreachable block (ram,0x00016663ef29) */
/* WARNING: Removing unreachable block (ram,0x00016663efb4) */
/* WARNING: Removing unreachable block (ram,0x00016663efc0) */
/* WARNING: Removing unreachable block (ram,0x00015afc7f3e) */
/* WARNING: Removing unreachable block (ram,0x00014d7acf75) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fc1) */
/* WARNING: Removing unreachable block (ram,0x00015afc7fc7) */
/* WARNING: Removing unreachable block (ram,0x0001611139b8) */

void FUN_14dc81fab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000010;
  
  FUN_14db006e8(in_stack_00000010,param_2,param_3);
  return;
}



// FUNCTION 14dc8219c FUN_14dc8219c body=364 status=ok
// SIG undefined FUN_14dc8219c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8223a) */

undefined8
FUN_14dc8219c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  longlong in_R10;
  longlong lVar3;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ushort local_res20;
  
  lVar3 = in_R10 + (param_5 & in_RAX) * -2;
  *(undefined8 *)(lVar3 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar3 + -8) = 0;
  if ((local_res20 & 0x80) == 0) {
    uVar2 = FUN_16271fc8c();
    return uVar2;
  }
  *(longlong *)(lVar3 + -8) = *(longlong *)(lVar3 + -8) - unaff_R13;
  *(longlong *)(lVar3 + -8) = -*(longlong *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x10) = param_1;
  *(undefined8 *)(lVar3 + -0x18) = in_R11;
  *(undefined8 *)(lVar3 + -0x20) = param_4;
  uVar2 = *(undefined8 *)(lVar3 + -0x20);
  uVar1 = *(undefined8 *)(lVar3 + -0x10);
  *(undefined8 *)(lVar3 + -0x10) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x18) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x20) = local_res8;
  *(undefined1 **)(lVar3 + -8) = &LAB_1669a4f8a;
  uVar2 = FUN_1669a4f66(uVar1,param_2,param_3,uVar2);
  return uVar2;
}



// FUNCTION 14dc823b2 FUN_14dc823b2 body=16 status=ok
// SIG undefined FUN_14dc823b2(void)

void FUN_14dc823b2(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc823c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc82457 FUN_14dc82457 body=447 status=ok
// SIG undefined FUN_14dc82457(void)

/* WARNING: Instruction at (ram,0x00014dc824a9) overlaps instruction at (ram,0x00014dc824a8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc824a2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dc82500 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc82457(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  bool bVar2;
  longlong unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) | 0xffffffffbf7205f6;
  *(ulonglong *)(unaff_RSI + 0x10) =
       (uVar1 & 0xffffffffbf7205f6 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_RSI + 0x10) ^
       0xffffffffffffffff;
  FUN_14d90f9be(param_1,param_2,param_3);
  bVar2 = *(longlong *)(unaff_R13 + -0x50) != -1;
  if (bVar2 || unaff_R15 != 0) {
    FUN_165ccc0b2();
    return;
  }
  if (bVar2 || unaff_R15 != 0) {
    return;
  }
  FUN_165ccc0b2();
  return;
}



// FUNCTION 14dc8270a FUN_14dc8270a body=573 status=ok
// SIG undefined FUN_14dc8270a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc82836) */

void FUN_14dc8270a(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_162b931bd();
  *(ulonglong *)(param_1 + -8) = ~((~in_RAX | unaff_RBP) & (~unaff_RBP | in_RAX));
  *(undefined8 *)(param_1 + -0x10) = unaff_R12;
  *(undefined8 *)(param_1 + -0x18) = unaff_R12;
  *(undefined8 *)(param_1 + -0x20) = unaff_retaddr;
  *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_1 + -8);
  *(undefined8 *)(param_1 + -8) = 0;
  puVar1 = (ulonglong *)(param_1 + -8);
  *puVar1 = *puVar1 ^ 0x1660200f2;
  if (*puVar1 != 0) {
    FUN_1660200c1();
    return;
  }
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc8294c FUN_14dc8294c body=151 status=ok
// SIG undefined FUN_14dc8294c(void)

void FUN_14dc8294c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x98);
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(code **)(uVar1 - 0x10) = FUN_14dc829e3;
  FUN_160e01b06(param_1,param_2,param_3,local_res8);
  *(longlong *)(in_R11 + 0x18) = unaff_R12 + 1;
  *(longlong *)(uVar1 + 0x28) = -*(longlong *)(uVar1 + 0x28);
  *(longlong *)(uVar1 + 0x28) = *(longlong *)(uVar1 + 0x28) + -1;
  *(ulonglong *)(uVar1 + 0x28) = *(ulonglong *)(uVar1 + 0x28) & 0x160e01b06;
  *(ulonglong *)(uVar1 + 0x18) = uVar2 ^ unaff_R15;
  *(undefined8 *)(uVar1 + 0x10) = *(undefined8 *)(uVar1 + 8);
  *(ushort *)(uVar1 + 0x20) = (*(ushort *)(uVar1 + 0x20) | 0x100) - 0x100;
  *(undefined8 *)(*(longlong *)(uVar1 + 0x28) + -8) = 0x3611418;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc829e3 FUN_14dc829e3 body=108 status=ok
// SIG undefined FUN_14dc829e3(void)

void FUN_14dc829e3(void)

{
  ulonglong unaff_RSI;
  longlong in_R11;
  longlong unaff_R12;
  longlong in_stack_00000030;
  
  *(longlong *)(in_R11 + 0x18) = unaff_R12 + 1;
  *(undefined8 *)((0xffffffffffffffffU - in_stack_00000030 & unaff_RSI) - 8) = 0x3611418;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc82bce FUN_14dc82bce body=277 status=ok
// SIG undefined FUN_14dc82bce(void)

/* WARNING: Removing unreachable block (ram,0x00016224831b) */
/* WARNING: Removing unreachable block (ram,0x000162248321) */

ulonglong FUN_14dc82bce(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x70);
  FUN_161a22cc7(param_1,param_1,uVar1);
  if ((DAT_161a22c87 == 0 && param_1 == 0) && (DAT_161a22c87 != 0 || param_1 != 0)) {
    return ~((~param_1 | unaff_R13 + param_1 + (unaff_R13 & param_1) * -2) + param_1 + 1 |
            ~CONCAT71(~(uint7)((ulonglong)uVar1 >> 8),unaff_SIL));
  }
  uVar2 = FUN_156c6e2d7(param_1,DAT_161a22c5f,~(DAT_161a22c57 & param_1) & (DAT_161a22c57 | param_1)
                        ,DAT_161a22c67 ^ param_1);
  return uVar2;
}



// FUNCTION 14dc82ce5 FUN_14dc82ce5 body=76 status=ok
// SIG undefined FUN_14dc82ce5(void)

ulonglong FUN_14dc82ce5(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  return ~((~param_1 | in_RAX) + param_1 + 1 | ~unaff_RBP);
}



// FUNCTION 14dc82ebf FUN_14dc82ebf body=26 status=ok
// SIG undefined FUN_14dc82ebf(void)

void FUN_14dc82ebf(void)

{
  return;
}



// FUNCTION 14dc82fd3 FUN_14dc82fd3 body=498 status=ok
// SIG undefined FUN_14dc82fd3(void)

/* WARNING: Removing unreachable block (ram,0x0001653e98fb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc82fd3(void)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) ^ 0xffffffffffffffff | unaff_R15;
  uVar1 = ~uVar2 | unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x88);
  if (!CARRY8(uVar1,uVar2)) {
    FUN_15b7f905e(FUN_15b7f905e,0x534da30d,-1 - (uVar1 + uVar2 + 1));
    return;
  }
  if (!CARRY8(uVar1,uVar2)) {
    FUN_162564772(local_res8,unaff_RSI >> 0x2f & 0xff,uVar2,FUN_162564772);
    FUN_161b7dd97();
    return;
  }
  FUN_1653e98ad();
  return;
}



// FUNCTION 14dc831ca FUN_14dc831ca body=152 status=ok
// SIG undefined FUN_14dc831ca(void)

/* WARNING: Removing unreachable block (ram,0x00014dc83264) */
/* WARNING: Removing unreachable block (ram,0x0001660eba03) */

undefined8 FUN_14dc831ca(ulonglong param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  
  uVar2 = (~(~local_res18 & param_1) + param_1) - local_res18;
  if ((longlong)uVar2 < 0) {
    uVar2 = ~((param_1 ^ 0xffffffffffffffff | local_res18) & uVar2);
    *(undefined8 *)(uVar2 - 8) = param_2;
    *(undefined8 *)(uVar2 - 0x10) = unaff_RSI;
    *(undefined8 *)(uVar2 - 0x18) = unaff_RSI;
    *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
    *(undefined8 *)(uVar2 - 8) = 0;
    *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x164a9fa78;
    *(longlong *)(uVar2 - 8) = -*(longlong *)(uVar2 - 8);
    *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
    *(undefined8 *)(uVar2 - 0x10) = in_stack_00000008;
    *(undefined8 *)(uVar2 - 0x18) = in_stack_00000008;
    *(undefined **)(uVar2 - 0x10) = &DAT_14d7acec9;
    return in_RAX;
  }
  uVar1 = FUN_1660eb97c();
  return uVar1;
}



// FUNCTION 14dc83264 FUN_14dc83264 body=127 status=ok
// SIG undefined FUN_14dc83264(void)

void FUN_14dc83264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *unaff_RDI;
  longlong local_res20;
  
  *unaff_RDI = (-0x101 - ~((~*unaff_RDI | 0xfeff) + 0x101)) + *unaff_RDI;
  *(undefined8 *)(local_res20 + -8) = param_4;
  FUN_14de369b0(param_1,param_2,param_3,FUN_14de369b0);
  return;
}



// FUNCTION 14dc832e3 FUN_14dc832e3 body=23 status=ok
// SIG undefined FUN_14dc832e3(void)

void FUN_14dc832e3(void)

{
  return;
}



// FUNCTION 14dc8335e FUN_14dc8335e body=323 status=ok
// SIG undefined FUN_14dc8335e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8340d) */

undefined8 FUN_14dc8335e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (&stack0x00000000 == (undefined1 *)0x0) {
    uVar1 = FUN_1575c7c46(param_1,*(undefined8 *)(unaff_RDI + -0x40));
    return uVar1;
  }
  return 0x19806773;
}



// FUNCTION 14dc835db FUN_14dc835db body=162 status=ok
// SIG undefined FUN_14dc835db(void)

void FUN_14dc835db(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x14e1be331)
            (param_1,0x14e1be331,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
             ~((param_1 ^ 0xffffffffffffffff | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14dc83683 FUN_14dc83683 body=127 status=ok
// SIG undefined FUN_14dc83683(void)

void FUN_14dc83683(void)

{
  FUN_16221d713();
  return;
}



// FUNCTION 14dc83709 FUN_14dc83709 body=95 status=ok
// SIG undefined FUN_14dc83709(void)

void FUN_14dc83709(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int unaff_ESI;
  int unaff_retaddr;
  
  FUN_15b072df3(~-~(0xffffffffU - unaff_ESI & (param_1 | 0xbe9a82fd)) + 1,param_2,param_3,
                -unaff_retaddr);
  return;
}



// FUNCTION 14dc837f1 FUN_14dc837f1 body=299 status=ok
// SIG undefined FUN_14dc837f1(void)

void FUN_14dc837f1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  undefined8 uVar6;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + unaff_retaddr;
  uVar5 = *(undefined8 *)(local_res18 + -0x18);
  uVar6 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = 0x14dc83887;
  DAT_14d7abffb = FUN_14e102861(param_1,param_2,uVar5);
  uVar5 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  puVar1 = (ushort *)(local_res18 + -0x10);
  uVar2 = *puVar1;
  *(undefined8 *)(local_res18 + -0x28) = uVar6;
  uVar3 = *puVar1;
  *puVar1 = 0x1e67;
  *puVar1 = *puVar1 + 0xe199;
  *puVar1 = *puVar1 - ((-0x102 - ~-(uVar2 | 0xfeff)) + uVar3);
  *puVar1 = -*puVar1;
  uVar6 = *(undefined8 *)(local_res18 + -0x18);
  lVar4 = *(longlong *)(local_res18 + -8);
  LOCK();
  UNLOCK();
  *(undefined **)(lVar4 + -8) = &DAT_16599e0e9;
  *(undefined **)(lVar4 + -0x10) = &DAT_16599e0e9;
  *(undefined8 *)(lVar4 + -0x18) = 0x14dc8390c;
  FUN_166588b9a(uVar5,uVar6);
  *(undefined8 *)(lVar4 + -0x18) = in_R10;
  *(undefined8 *)(lVar4 + -0x20) = in_R10;
  *(code **)(lVar4 + -0x18) = FUN_14dc83920;
  return;
}



// FUNCTION 14dc83920 FUN_14dc83920 body=181 status=ok
// SIG undefined FUN_14dc83920(void)

void FUN_14dc83920(void)

{
  FUN_1660051fe();
  return;
}



// FUNCTION 14dc83a63 FUN_14dc83a63 body=162 status=ok
// SIG undefined FUN_14dc83a63(void)

void FUN_14dc83a63(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  puVar1 = (ushort *)(&stack0xfffffffffbc3a5e8 + unaff_RBP);
  *puVar1 = (~(*puVar1 | 0xfeff) - 0x100) + *puVar1;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x28) = in_R11;
  *(undefined8 *)(local_res20 + -0x30) = in_R11;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_14dc83b07;
  FUN_1656eac15(param_1,param_2,uStackX_8,8);
  return;
}



// FUNCTION 14dc83c3f FUN_14dc83c3f body=164 status=ok
// SIG undefined FUN_14dc83c3f(void)

void FUN_14dc83c3f(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x162ac6a28)(0,param_2);
  return;
}



// FUNCTION 14dc83ffb FUN_14dc83ffb body=44 status=ok
// SIG undefined FUN_14dc83ffb(void)

void FUN_14dc83ffb(void)

{
  return;
}



// FUNCTION 14dc840ac FUN_14dc840ac body=32 status=ok
// SIG undefined FUN_14dc840ac(void)

void FUN_14dc840ac(void)

{
  return;
}



// FUNCTION 14dc84147 FUN_14dc84147 body=129 status=ok
// SIG undefined FUN_14dc84147(void)

/* WARNING: Removing unreachable block (ram,0x000166bd6214) */
/* WARNING: Removing unreachable block (ram,0x00014dc841c3) */

void FUN_14dc84147(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint unaff_retaddr;
  
  if (~unaff_retaddr - 1 < ~unaff_retaddr) {
    FUN_166bd619b();
    return;
  }
  (*(code *)0x157661ddf)(0x157661ddf,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc841c9 FUN_14dc841c9 body=2 status=ok
// SIG undefined FUN_14dc841c9(void)

void FUN_14dc841c9(void)

{
  return;
}



// FUNCTION 14dc84246 FUN_14dc84246 body=150 status=ok
// SIG undefined FUN_14dc84246(void)

void FUN_14dc84246(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RBX;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong local_res8;
  undefined8 local_res18;
  ulonglong in_stack_00000038;
  
  *(ulonglong *)(local_res8 + 0x18) = ~*(ulonglong *)(local_res8 + 0x18);
  *(ulonglong *)(local_res8 + 0x18) = *(ulonglong *)(local_res8 + 0x18) | ~unaff_R15;
  *(ulonglong *)(local_res8 + 0x18) = ~*(ulonglong *)(local_res8 + 0x18);
  uVar2 = (in_stack_00000038 ^ 0xffffffffffffffff) & unaff_R13;
  *(ulonglong *)(uVar2 - 8) = uVar2;
  lVar4 = *(longlong *)(uVar2 - 8);
  plVar1 = (longlong *)(lVar4 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBX;
  *(undefined8 *)(lVar4 + -0x10) = param_3;
  *(undefined8 *)(lVar4 + -0x18) = 0x1713c794c;
  pcVar5 = FUN_162561373;
  *(code **)(lVar4 + -0x20) = FUN_14dc842dd;
  FUN_162561373(param_1,local_res18);
  lVar3 = *(longlong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) = *(ulonglong *)(lVar4 + -0x18) & param_1;
  *(ulonglong *)(lVar4 + -0x20) = param_1;
  *(longlong *)(lVar4 + -0x18) = *(longlong *)(lVar4 + -0x18) << 1;
  uVar2 = *(ulonglong *)(lVar4 + -0x20);
  *(ulonglong *)(lVar4 + -0x18) = (lVar3 + param_1) - *(longlong *)(lVar4 + -0x18);
  *(code **)(lVar4 + -0x20) = pcVar5;
  uVar6 = *(ulonglong *)(lVar4 + -0x10) | uVar2;
  *(ulonglong *)(lVar4 + -0x10) = *(ulonglong *)(lVar4 + -0x10) & uVar2;
  *(ulonglong *)(lVar4 + -0x10) = ~*(ulonglong *)(lVar4 + -0x10);
  *(undefined8 *)(lVar4 + -0x28) = unaff_R14;
  *(ulonglong *)(lVar4 + -0x30) = uVar2;
  *(ulonglong *)(lVar4 + -0x10) =
       (uVar6 - (*(ulonglong *)(lVar4 + -0x10) | uVar6)) + *(longlong *)(lVar4 + -0x10);
  *(ulonglong *)(lVar4 + -8) = *(ulonglong *)(lVar4 + -8) ^ *(ulonglong *)(lVar4 + -0x30);
  *(undefined8 *)(lVar4 + -0x28) = unaff_R12;
  *(undefined8 *)(lVar4 + -0x30) = unaff_R12;
  *(undefined8 *)(lVar4 + -0x38) = unaff_R12;
  *(undefined **)(lVar4 + -0x28) = &DAT_14dc84385;
  *(undefined **)(lVar4 + -0x30) = &DAT_160d8c237;
  return;
}



// FUNCTION 14dc842dd FUN_14dc842dd body=165 status=ok
// SIG undefined FUN_14dc842dd(void)

void FUN_14dc842dd(void)

{
  return;
}



// FUNCTION 14dc845e5 FUN_14dc845e5 body=167 status=ok
// SIG undefined FUN_14dc845e5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc84619) */

undefined8 FUN_14dc845e5(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dc8468d FUN_14dc8468d body=183 status=ok
// SIG undefined FUN_14dc8468d(void)

/* WARNING: Instruction at (ram,0x00014dc8470b) overlaps instruction at (ram,0x00014dc8470a)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc8473f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000165ad30d3 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc8468d(void)

{
  ulonglong uVar1;
  char in_AL;
  undefined7 in_register_00000001;
  ulonglong *in_R11;
  
  uVar1 = *in_R11;
  *in_R11 = *in_R11 | 0xffffffffc2bdba36;
  *in_R11 = ~(~(uVar1 & 0xffffffffc2bdba36) & *in_R11);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  DAT_0000005c = DAT_0000005c + in_AL;
  FUN_160d911fb(FUN_160d911fb);
  return;
}



// FUNCTION 14dc84745 FUN_14dc84745 body=305 status=ok
// SIG undefined FUN_14dc84745(void)

/* WARNING: Removing unreachable block (ram,0x00014dc847ea) */
/* WARNING: Removing unreachable block (ram,0x00014dc847f0) */

void FUN_14dc84745(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  ushort uVar1;
  undefined8 unaff_R13;
  ulonglong uVar2;
  undefined8 local_res8;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar1 = (local_res18 | 0x100) - 0x100;
  _fxsave(local_res20);
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = param_2;
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = local_res8;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -8) = 0x2eb4bc2;
  *(undefined8 *)(local_res20 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res20 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc8487d FUN_14dc8487d body=158 status=ok
// SIG undefined FUN_14dc8487d(void)

void FUN_14dc8487d(undefined8 param_1,float *param_2)

{
  longlong unaff_RSI;
  float10 in_ST0;
  longlong in_stack_00000008;
  
  *(undefined4 *)(&stack0x711700b9 + unaff_RSI) = 0xefb7151e;
  *(uint *)(&stack0x711700b9 + unaff_RSI) = *(uint *)(&stack0x711700b9 + unaff_RSI) ^ 0x1048eae1;
  if (in_stack_00000008 != -0x50cc63c7) {
    in((short)param_2);
    *param_2 = (float)in_ST0;
  }
  (*(code *)0x15762457b)(param_1,(short)param_2,0x15762457b);
  return;
}



// FUNCTION 14dc84b85 FUN_14dc84b85 body=140 status=ok
// SIG undefined FUN_14dc84b85(void)

/* WARNING: Removing unreachable block (ram,0x00014dc84c12) */

void FUN_14dc84b85(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000028;
  
  uVar1 = *param_1;
  *param_1 = ~*param_1;
  *param_1 = *param_1 | unaff_R15;
  *param_1 = ~((~unaff_R15 | uVar1) & *param_1);
  if (-1 < (longlong)(in_stack_00000028 ^ unaff_R15)) {
    FUN_166514d93(in_stack_00000008);
    return;
  }
  FUN_166514d93(in_stack_00000008);
  return;
}



// FUNCTION 14dc84c12 FUN_14dc84c12 body=74 status=ok
// SIG undefined FUN_14dc84c12(void)

void FUN_14dc84c12(void)

{
  return;
}



// FUNCTION 14dc84d4f FUN_14dc84d4f body=433 status=ok
// SIG undefined FUN_14dc84d4f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc84de4) */
/* WARNING: Removing unreachable block (ram,0x00014dc84e63) */
/* WARNING: Removing unreachable block (ram,0x00014dc84e6e) */
/* WARNING: Removing unreachable block (ram,0x00014dc84e7a) */
/* WARNING: Removing unreachable block (ram,0x000156d6121e) */
/* WARNING: Removing unreachable block (ram,0x000156d6122b) */
/* WARNING: Removing unreachable block (ram,0x000156d61299) */
/* WARNING: Removing unreachable block (ram,0x000156d6129e) */
/* WARNING: Removing unreachable block (ram,0x000156d61230) */
/* WARNING: Removing unreachable block (ram,0x000165e771a9) */
/* WARNING: Removing unreachable block (ram,0x000161a9cd9f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dc84d4f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong unaff_R13;
  short unaff_R14W;
  ushort uVar7;
  undefined8 unaff_R15;
  short local_res18;
  ulonglong uStackX_20;
  
  uVar7 = unaff_R14W + local_res18 * -2;
  uVar1 = uStackX_20 ^ in_RAX;
  uVar3 = ~uVar7 & 0x100 ^ 0xffff;
  if (uVar3 == 0) {
    uVar4 = FUN_156d61192();
    return uVar4;
  }
  if ((ushort)(uVar7 - 1) < (ushort)~(0xfeff - uVar3)) {
    uVar4 = FUN_161a9cc64();
    return uVar4;
  }
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = param_2;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  uVar4 = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 0x20) = &LAB_156c5a0d5;
  *(undefined8 *)(uVar1 - 0x10) = uVar4;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  *(undefined **)(uVar1 - 0x10) = &DAT_14d7c0937;
  uVar2 = *(ulonglong *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = 0x161a9cd15;
  uVar5 = FUN_156c5a0b3();
  *(ulonglong *)(uVar1 - 0x20) = (unaff_RBX - uVar2) + ~(~uVar5 & ~uVar2) * 2 + uVar5 * -2;
  *(undefined4 *)(uVar1 - 0x20) = 0;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  uVar5 = *(ulonglong *)(unaff_R13 + -0x78);
  *(undefined4 *)(uVar1 - 0x20) = 0;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  uVar6 = *(longlong *)(uVar1 - 0x20) + *(longlong *)(unaff_R13 + -0x28);
  *(undefined4 *)(uVar1 - 0x20) = 0x9d9b921;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  uVar4 = FUN_160c89a18(uVar5 + uVar2 + (uVar5 & uVar2) * -2,~(uVar6 & uVar2 | ~(uVar6 | uVar2)));
  return uVar4;
}



// FUNCTION 14dc8506e FUN_14dc8506e body=161 status=ok
// SIG undefined FUN_14dc8506e(void)

void FUN_14dc8506e(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_164bccaec(param_1,0xffffffffffffff88,*(ulonglong *)(unaff_RSI + -0x90) | unaff_RBP);
  return;
}



// FUNCTION 14dc85111 FUN_14dc85111 body=457 status=ok
// SIG undefined FUN_14dc85111(void)

/* WARNING: Removing unreachable block (ram,0x000165148fbc) */
/* WARNING: Removing unreachable block (ram,0x000165148fc2) */
/* WARNING: Removing unreachable block (ram,0x000165148fe9) */
/* WARNING: Removing unreachable block (ram,0x000165148fed) */
/* WARNING: Removing unreachable block (ram,0x000165149033) */
/* WARNING: Removing unreachable block (ram,0x00014dc8519a) */
/* WARNING: Removing unreachable block (ram,0x00014dc85194) */
/* WARNING: Removing unreachable block (ram,0x00014dc8519f) */
/* WARNING: Removing unreachable block (ram,0x000165149038) */

void FUN_14dc85111(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  FUN_156b0bb5c(param_1,param_2,in_stack_00000008,unaff_retaddr,
                *(ulonglong *)(unaff_R12 + -0x68) ^ in_RAX);
  FUN_156749b71();
  return;
}



// FUNCTION 14dc85246 FUN_14dc85246 body=238 status=ok
// SIG undefined FUN_14dc85246(void)

void FUN_14dc85246(undefined8 param_1)

{
  FUN_166299ce2();
  FUN_156c79161(param_1);
  return;
}



// FUNCTION 14dc85370 FUN_14dc85370 body=974 status=ok
// SIG undefined FUN_14dc85370(void)

/* WARNING: Removing unreachable block (ram,0x00014dc85405) */
/* WARNING: Removing unreachable block (ram,0x00014dc8540b) */
/* WARNING: Removing unreachable block (ram,0x0001664bd69c) */
/* WARNING: Removing unreachable block (ram,0x0001664bd7ab) */
/* WARNING: Removing unreachable block (ram,0x0001664bd7b0) */
/* WARNING: Removing unreachable block (ram,0x000166a87ddb) */
/* WARNING: Removing unreachable block (ram,0x0001664bd7b6) */
/* WARNING: Removing unreachable block (ram,0x0001664bd848) */
/* WARNING: Removing unreachable block (ram,0x0001664bd84e) */
/* WARNING: Removing unreachable block (ram,0x0001627c4e62) */
/* WARNING: Removing unreachable block (ram,0x0001627c4ee4) */
/* WARNING: Removing unreachable block (ram,0x0001627c4eea) */
/* WARNING: Removing unreachable block (ram,0x0001622d1f5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc85486) */
/* WARNING: Removing unreachable block (ram,0x00014dc8548c) */

void FUN_14dc85370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156fa335b(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc855d9 FUN_14dc855d9 body=423 status=ok
// SIG undefined FUN_14dc855d9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8567a) */

void FUN_14dc855d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_162b9fea2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc85990 FUN_14dc85990 body=16 status=ok
// SIG undefined FUN_14dc85990(void)

void FUN_14dc85990(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc85b61 FUN_14dc85b61 body=722 status=ok
// SIG undefined FUN_14dc85b61(void)

/* WARNING: Removing unreachable block (ram,0x00014dc85c64) */
/* WARNING: Removing unreachable block (ram,0x00014dc85c6a) */
/* WARNING: Removing unreachable block (ram,0x00014dc85bec) */

void FUN_14dc85b61(void)

{
  return;
}



// FUNCTION 14dc85ebb FUN_14dc85ebb body=49 status=ok
// SIG undefined FUN_14dc85ebb(void)

void FUN_14dc85ebb(void)

{
  longlong unaff_RBP;
  longlong lVar1;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  undefined8 auStackX_10 [3];
  
  lVar1 = unaff_RBP - unaff_R13;
  *(undefined8 *)((longlong)auStackX_10 + lVar1 + 8) = unaff_RDI;
  *(undefined8 *)((longlong)auStackX_10 + lVar1) = unaff_RDI;
  *(undefined **)((longlong)auStackX_10 + lVar1 + 8) = &DAT_14dc85eed;
  return;
}



// FUNCTION 14dc85f95 FUN_14dc85f95 body=183 status=ok
// SIG undefined FUN_14dc85f95(void)

void FUN_14dc85f95(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort *unaff_RSI;
  undefined8 in_R10;
  longlong local_res20;
  
  *unaff_RSI = (*unaff_RSI | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(longlong *)(local_res20 + -0x10) = local_res20 + -8;
  lVar2 = *(longlong *)(local_res20 + -0x10);
  *(undefined8 *)(lVar2 + -8) = unaff_RBP;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RBP;
  plVar1 = (longlong *)(lVar2 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_RAX;
  *(undefined8 *)(lVar2 + -0x20) = in_R10;
  *(undefined8 *)(lVar2 + -0x28) = in_R10;
  *(undefined8 *)(lVar2 + -0x30) = in_R10;
  *(code **)(lVar2 + -0x20) = FUN_14dc8604e;
  *(undefined **)(lVar2 + -0x28) = &DAT_15757c469;
  return;
}



// FUNCTION 14dc8604e FUN_14dc8604e body=160 status=ok
// SIG undefined FUN_14dc8604e(void)

void FUN_14dc8604e(void)

{
  (*(code *)0x15707cbc3)(0xffffffffffffff88,0x15707cbc3);
  return;
}



// FUNCTION 14dc862d2 FUN_14dc862d2 body=122 status=ok
// SIG undefined FUN_14dc862d2(void)

void FUN_14dc862d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort in_AX;
  short *unaff_R12;
  undefined8 in_stack_00000008;
  
  *unaff_R12 = (-0x102 - ~(~in_AX + 1)) + *unaff_R12;
  FUN_16686f0f2(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc8634c FUN_14dc8634c body=138 status=ok
// SIG undefined FUN_14dc8634c(void)

void FUN_14dc8634c(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  if (unaff_RSI == 0xc8d61) {
    return;
  }
  if (unaff_RSI == 0xc8d62) {
    FUN_16131bb16();
    return;
  }
  FUN_156d54bb8(param_1,param_2,unaff_retaddr);
  FUN_14dc863d7();
  return;
}



// FUNCTION 14dc863d7 FUN_14dc863d7 body=137 status=ok
// SIG undefined FUN_14dc863d7(void)

void FUN_14dc863d7(void)

{
  return;
}



// FUNCTION 14dc864e6 FUN_14dc864e6 body=269 status=ok
// SIG undefined FUN_14dc864e6(void)

void FUN_14dc864e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBP;
  longlong unaff_R15;
  undefined8 local_res10;
  
  FUN_14d9328ba(((0xffffffffffffffffU - unaff_R15) + local_res10) -
                (0xffffffffffffffffU - unaff_R15 & local_res10));
  FUN_160ed7948(unaff_RBP,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc865f5 FUN_14dc865f5 body=110 status=ok
// SIG undefined FUN_14dc865f5(void)

undefined8 FUN_14dc865f5(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dc86851 FUN_14dc86851 body=211 status=ok
// SIG undefined FUN_14dc86851(void)

void FUN_14dc86851(undefined8 param_1,undefined8 param_2)

{
  FUN_14d9b0716(param_1,param_2);
  return;
}



// FUNCTION 14dc86a43 FUN_14dc86a43 body=177 status=ok
// SIG undefined FUN_14dc86a43(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc86a43(void)

{
  FUN_162086c03();
  return;
}



// FUNCTION 14dc86f03 FUN_14dc86f03 body=175 status=ok
// SIG undefined FUN_14dc86f03(void)

/* WARNING: Removing unreachable block (ram,0x00014dc86fa8) */
/* WARNING: Removing unreachable block (ram,0x00014dc86fb3) */
/* WARNING: Removing unreachable block (ram,0x00014dc870af) */
/* WARNING: Removing unreachable block (ram,0x00014dc870b3) */
/* WARNING: Removing unreachable block (ram,0x00014dc870ef) */
/* WARNING: Removing unreachable block (ram,0x00015b0dd987) */
/* WARNING: Removing unreachable block (ram,0x00014dc870f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc872e3) */
/* WARNING: Removing unreachable block (ram,0x00014dc872e9) */
/* WARNING: Removing unreachable block (ram,0x0001613ee8dc) */
/* WARNING: Removing unreachable block (ram,0x0001613ee9f7) */
/* WARNING: Removing unreachable block (ram,0x0001613ee9fb) */
/* WARNING: Removing unreachable block (ram,0x0001613eea03) */
/* WARNING: Removing unreachable block (ram,0x0001613eea0f) */
/* WARNING: Removing unreachable block (ram,0x00015b40f14b) */
/* WARNING: Removing unreachable block (ram,0x00014dc86fae) */

void FUN_14dc86f03(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined4 *unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0xa0);
  uVar2 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  *(undefined8 *)(uVar2 - 0x10) = in_R10;
  *(undefined8 *)(uVar2 - 0x18) = in_R10;
  uVar5 = *(undefined8 *)(uVar2 - 8);
  *(ulonglong *)(uVar2 - 0x20) = ~(uVar3 & unaff_R15) & (uVar3 | unaff_R15);
  *(undefined8 *)(uVar2 - 0x10) = uVar5;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  puVar1 = (ulonglong *)(uVar2 - 0x20);
  *puVar1 = 0x73d2d538;
  *puVar1 = *puVar1 ^ 0x73d2d538;
  uVar3 = *puVar1;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RBP;
  *(ulonglong *)(uVar2 - 8) = uVar3;
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x15b40e356;
  *(ulonglong *)(uVar2 - 8) = ~*(ulonglong *)(uVar2 - 8);
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + 1;
  uVar4 = in(param_2);
  *unaff_RDI = uVar4;
  return;
}



// FUNCTION 14dc86fb3 FUN_14dc86fb3 body=1043 status=ok
// SIG undefined FUN_14dc86fb3(void)

/* WARNING: Removing unreachable block (ram,0x0001613eea0f) */
/* WARNING: Removing unreachable block (ram,0x0001613ee9f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc870af) */
/* WARNING: Removing unreachable block (ram,0x00014dc872e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc870f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc872e3) */
/* WARNING: Removing unreachable block (ram,0x00015b40f14b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc86fb3(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar3;
  
  uVar3 = unaff_R13 + unaff_RBP * -2;
  FUN_165c026ae();
  uVar2 = *(ulonglong *)(unaff_RSI + -0x28);
  uVar1 = (~((uVar3 - (~uVar2 | uVar3)) + ~uVar2) + uVar3) - uVar2;
  (*(code *)0x14d884c5c)
            (0xffffffff,uVar1,*(ulonglong *)(unaff_RSI + -0x60) ^ uVar3,~((~uVar3 | uVar2) & uVar1))
  ;
  return;
}



// FUNCTION 14dc872ef FUN_14dc872ef body=59 status=ok
// SIG undefined FUN_14dc872ef(void)

void FUN_14dc872ef(void)

{
  return;
}



// FUNCTION 14dc873a4 FUN_14dc873a4 body=157 status=ok
// SIG undefined FUN_14dc873a4(void)

void FUN_14dc873a4(undefined8 param_1)

{
  FUN_1619ac37e(param_1);
  return;
}



// FUNCTION 14dc87443 FUN_14dc87443 body=140 status=ok
// SIG undefined FUN_14dc87443(void)

void FUN_14dc87443(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ushort local_res10 [4];
  ulonglong local_res18;
  
  local_res18 = ~((~in_RAX | local_res18) & (~(~local_res18 & in_RAX) + in_RAX) - local_res18);
  FUN_1648bab89(local_res10,FUN_1648bab89,param_3,
                CONCAT62((int6)(local_res18 >> 0x10),
                         ~(local_res10[0] & 0x100) + local_res10[0] + 0x101));
  return;
}



// FUNCTION 14dc87572 thunk_FUN_14dc87578 body=5 status=ok
// SIG undefined thunk_FUN_14dc87578(void)

ulonglong thunk_FUN_14dc87578(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dc87578 FUN_14dc87578 body=160 status=ok
// SIG undefined FUN_14dc87578(void)

ulonglong FUN_14dc87578(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dc87620 FUN_14dc87620 body=53 status=ok
// SIG undefined FUN_14dc87620(void)

void FUN_14dc87620(void)

{
  return;
}



// FUNCTION 14dc876b8 FUN_14dc876b8 body=282 status=ok
// SIG undefined FUN_14dc876b8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc87756) */

void FUN_14dc876b8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  FUN_15b03d926(0,~(param_2 & unaff_R15 | 0xffffffffffffffff - (-unaff_RSI | unaff_R15)),param_3,
                param_4);
  return;
}



// FUNCTION 14dc877ee FUN_14dc877ee body=166 status=ok
// SIG undefined FUN_14dc877ee(void)

undefined8
FUN_14dc877ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong unaff_RBP;
  ushort *unaff_R12;
  undefined8 unaff_R13;
  ushort local_res8;
  undefined8 uStackX_18;
  
  *unaff_R12 = -*unaff_R12;
  *unaff_R12 = *unaff_R12 - 1;
  *unaff_R12 = *unaff_R12 | ~(local_res8 ^ 0xfeff);
  *unaff_R12 = ~*unaff_R12;
  plVar1 = (longlong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *plVar1 = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(longlong *)(param_5 + -0x10) = *plVar1;
  *plVar1 = 0;
  *(undefined8 *)(param_5 + -0x18) = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x20) = param_2;
  *plVar1 = (longlong)(&LAB_162729ebd + *plVar1);
  *(undefined1 **)(param_5 + -0x28) = &LAB_162729e9a;
  return uStackX_18;
}



// FUNCTION 14dc87919 FUN_14dc87919 body=156 status=ok
// SIG undefined FUN_14dc87919(void)

void FUN_14dc87919(void)

{
  return;
}



// FUNCTION 14dc87a38 FUN_14dc87a38 body=35 status=ok
// SIG undefined FUN_14dc87a38(void)

undefined8 FUN_14dc87a38(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc87cae FUN_14dc87cae body=162 status=ok
// SIG undefined FUN_14dc87cae(void)

void FUN_14dc87cae(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_16261a66b(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc87e8d FUN_14dc87e8d body=142 status=ok
// SIG undefined FUN_14dc87e8d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc87ec9) */

void FUN_14dc87e8d(void)

{
  longlong unaff_RBX;
  uint local_res10 [6];
  
  *(undefined4 *)((longlong)local_res10 + unaff_RBX) = 0xcfd6342c;
  local_res10[1] = 0x3029cbd5 - (~local_res10[1] + 2);
  FUN_1566b590d();
  return;
}



// FUNCTION 14dc87f42 FUN_14dc87f42 body=324 status=ok
// SIG undefined FUN_14dc87f42(void)

void FUN_14dc87f42(void)

{
  ushort *puVar1;
  longlong in_stack_00000008;
  
  puVar1 = (ushort *)(&stack0xfffffffff8feca65 + in_stack_00000008);
  *puVar1 = (~*puVar1 & 0x100 | *puVar1) - 0x100;
  FUN_15b8a70a6();
  FUN_1652807e5();
  return;
}



// FUNCTION 14dc88089 FUN_14dc88089 body=142 status=ok
// SIG undefined FUN_14dc88089(void)

void FUN_14dc88089(void)

{
  undefined8 unaff_retaddr;
  
  FUN_1616066ba(unaff_retaddr);
  return;
}



// FUNCTION 14dc881bf FUN_14dc881bf body=149 status=ok
// SIG undefined FUN_14dc881bf(void)

void FUN_14dc881bf(byte param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  FUN_166c4ef17(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX),*(undefined8 *)(unaff_R12 + -0x78),
                unaff_RBX - (param_3 << (param_1 & 0x3f)));
  return;
}



// FUNCTION 14dc88255 FUN_14dc88255 body=167 status=ok
// SIG undefined FUN_14dc88255(void)

void FUN_14dc88255(void)

{
  return;
}



// FUNCTION 14dc883a0 FUN_14dc883a0 body=137 status=ok
// SIG undefined FUN_14dc883a0(void)

void FUN_14dc883a0(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_15666eedf(param_1,local_res8);
  return;
}



// FUNCTION 14dc8842a FUN_14dc8842a body=183 status=ok
// SIG undefined FUN_14dc8842a(void)

undefined8 FUN_14dc8842a(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dc884e4 FUN_14dc884e4 body=43 status=ok
// SIG undefined FUN_14dc884e4(void)

void FUN_14dc884e4(void)

{
  return;
}



// FUNCTION 14dc8878b FUN_14dc8878b body=18 status=ok
// SIG undefined FUN_14dc8878b(void)

void FUN_14dc8878b(void)

{
  return;
}



// FUNCTION 14dc88820 FUN_14dc88820 body=1031 status=ok
// SIG undefined FUN_14dc88820(void)

/* WARNING: Instruction at (ram,0x00014df0fe1f) overlaps instruction at (ram,0x00014df0fe1e)
    */
/* WARNING: Removing unreachable block (ram,0x00014e1e0457) */
/* WARNING: Removing unreachable block (ram,0x00014e1e045d) */
/* WARNING: Removing unreachable block (ram,0x00014df0fd63) */
/* WARNING: Removing unreachable block (ram,0x00014df0fde3) */
/* WARNING: Removing unreachable block (ram,0x00014df0fde8) */
/* WARNING: Removing unreachable block (ram,0x00014df0fdee) */
/* WARNING: Removing unreachable block (ram,0x00014df0fdf3) */
/* WARNING: Removing unreachable block (ram,0x00014df0fdfd) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe02) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe1f) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe1e) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe24) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe84) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe8c) */
/* WARNING: Removing unreachable block (ram,0x000156a3f730) */
/* WARNING: Removing unreachable block (ram,0x000156a3f778) */
/* WARNING: Removing unreachable block (ram,0x000156a3f77a) */
/* WARNING: Removing unreachable block (ram,0x00014df0fe95) */
/* WARNING: Removing unreachable block (ram,0x00016564e631) */
/* WARNING: Removing unreachable block (ram,0x00016564e6a4) */
/* WARNING: Removing unreachable block (ram,0x00016564e6aa) */
/* WARNING: Removing unreachable block (ram,0x0001611b4247) */
/* WARNING: Removing unreachable block (ram,0x00014df0ff0e) */
/* WARNING: Removing unreachable block (ram,0x00014df0ff14) */
/* WARNING: Removing unreachable block (ram,0x00014dc8889f) */
/* WARNING: Removing unreachable block (ram,0x00014dc88899) */
/* WARNING: Removing unreachable block (ram,0x00014e1e03c4) */
/* WARNING: Removing unreachable block (ram,0x00014dc88939) */
/* WARNING: Removing unreachable block (ram,0x00014dc8893f) */
/* WARNING: Removing unreachable block (ram,0x00014dc889c7) */
/* WARNING: Removing unreachable block (ram,0x00014dc889cd) */
/* WARNING: Removing unreachable block (ram,0x00015b79dfb2) */
/* WARNING: Removing unreachable block (ram,0x000160bf0e16) */

undefined8
FUN_14dc88820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  code *pcVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000010;
  
  puVar3 = (undefined8 *)(param_5 + in_RAX + (param_5 & in_RAX) * -2);
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(param_1,param_2,in_stack_00000010);
  *puVar3 = uVar2;
  puVar3[-1] = param_2;
  puVar3[-2] = param_2;
  puVar3[-1] = &DAT_1662f8eb0;
  return uVar2;
}



// FUNCTION 14dc88a65 FUN_14dc88a65 body=1022 status=ok
// SIG undefined FUN_14dc88a65(void)

/* WARNING: Removing unreachable block (ram,0x00014dc88b84) */
/* WARNING: Removing unreachable block (ram,0x00014dc88b8a) */
/* WARNING: Removing unreachable block (ram,0x00014dc88cc0) */
/* WARNING: Removing unreachable block (ram,0x00014dc88cc5) */
/* WARNING: Removing unreachable block (ram,0x00014dc88ccb) */
/* WARNING: Removing unreachable block (ram,0x00015b36d91f) */
/* WARNING: Removing unreachable block (ram,0x00015b36d9b1) */
/* WARNING: Removing unreachable block (ram,0x00015b36d9b6) */
/* WARNING: Removing unreachable block (ram,0x00015b36d9bc) */
/* WARNING: Removing unreachable block (ram,0x00015b36d9c7) */
/* WARNING: Removing unreachable block (ram,0x00014dc88aee) */

void FUN_14dc88a65(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  ulonglong in_stack_00000010;
  
  if (CARRY8(~in_stack_00000010 | ~(param_4 + unaff_RBP),in_stack_00000010)) {
    FUN_1617d87f3(in_stack_00000008,param_2,param_3,
                  *(longlong *)(unaff_RDI + -0xa0) + in_stack_00000008,
                  *(undefined8 *)(unaff_RDI + -0x90));
    return;
  }
  FUN_165d29658();
  return;
}



// FUNCTION 14dc88ed2 FUN_14dc88ed2 body=173 status=ok
// SIG undefined FUN_14dc88ed2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc88f41) */

void FUN_14dc88ed2(undefined8 param_1)

{
  FUN_1651594e1(param_1,0xffffffffb7f3fc93,FUN_1651594e1);
  return;
}



// FUNCTION 14dc88f80 FUN_14dc88f80 body=632 status=ok
// SIG undefined FUN_14dc88f80(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8902b) */
/* WARNING: Removing unreachable block (ram,0x00014dc890ac) */
/* WARNING: Removing unreachable block (ram,0x00014dc890b2) */
/* WARNING: Removing unreachable block (ram,0x0001646f65b9) */

void FUN_14dc88f80(void)

{
  return;
}



// FUNCTION 14dc8915d FUN_14dc8915d body=168 status=ok
// SIG undefined FUN_14dc8915d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc891ff) */
/* WARNING: Removing unreachable block (ram,0x00014dc89205) */

void FUN_14dc8915d(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong unaff_R12;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 0x12b41e) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x12b41f) {
    return;
  }
  uVar1 = FUN_162b0ebe9();
  if (unaff_RBP + param_2 == 0x705e7795) {
    uVar2 = *(ulonglong *)(unaff_R12 + -0x48) ^ 0xffffffffffffffff;
    FUN_1668061e8((uVar2 + ~uVar1) - (uVar2 & ~uVar1),*(ulonglong *)(unaff_R12 + -0x78) ^ uVar1);
    return;
  }
  FUN_156a27a1c();
  return;
}



// FUNCTION 14dc89205 FUN_14dc89205 body=299 status=ok
// SIG undefined FUN_14dc89205(void)

void FUN_14dc89205(void)

{
  FUN_1576750c6();
  FUN_156a194d5();
  return;
}



// FUNCTION 14dc8946c FUN_14dc8946c body=159 status=ok
// SIG undefined FUN_14dc8946c(void)

void FUN_14dc8946c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  short unaff_DI;
  short *unaff_R12;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  *unaff_R12 = (-0x101 - unaff_DI) + *unaff_R12;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x28) = local_res10;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) + *(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_14dc8950c;
  FUN_161b049ac(param_1,&LAB_161b049f5);
  return;
}



// FUNCTION 14dc8958a FUN_14dc8958a body=128 status=ok
// SIG undefined FUN_14dc8958a(void)

void FUN_14dc8958a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  FUN_1620d44fb(local_res18,param_2,local_res8,param_4,
                (~in_stack_00000020 | ~param_1) & (in_stack_00000020 | param_1));
  return;
}



// FUNCTION 14dc89729 FUN_14dc89729 body=749 status=ok
// SIG undefined FUN_14dc89729(void)

/* WARNING: Removing unreachable block (ram,0x00014dc897c5) */
/* WARNING: Removing unreachable block (ram,0x000160fc8f0d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc89729(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  ulonglong in_stack_00000020;
  
  pcVar3 = FUN_161969d9b;
  FUN_161969d9b(FUN_161969d9b,param_2,param_3);
  uVar1 = *(ulonglong *)(unaff_RDI + param_1 + (unaff_RDI & param_1) * -2 + -0x40);
  uVar2 = FUN_16106c480();
  param_5 = *(ulonglong *)((uVar1 ^ (ulonglong)pcVar3) - 0x98);
  if (-1 < unaff_R14) {
    FUN_156786f12();
    return;
  }
  param_5 = ~((uVar2 - ~((param_5 ^ 0xffffffffffffffff) & ~uVar2)) + param_5);
  FUN_16664b97f(&stack0x00000020,param_2,in_stack_00000020 ^ param_1,param_4);
  return;
}



// FUNCTION 14dc8986b FUN_14dc8986b body=166 status=ok
// SIG undefined FUN_14dc8986b(void)

void FUN_14dc8986b(undefined8 param_1,undefined8 param_2)

{
  uint unaff_EDI;
  
  (*(code *)&LAB_160fc6352)(param_1,param_2,&LAB_160fc6352,~(~(unaff_EDI >> 0x19) & 0x7f));
  return;
}



// FUNCTION 14dc89b78 FUN_14dc89b78 body=137 status=ok
// SIG undefined FUN_14dc89b78(void)

void FUN_14dc89b78(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  FUN_16636a2d4(lVar1,param_2,*(undefined8 *)(unaff_R13 + -0x88),lVar1);
  return;
}



// FUNCTION 14dc89c03 FUN_14dc89c03 body=39 status=ok
// SIG undefined FUN_14dc89c03(void)

void FUN_14dc89c03(void)

{
  return;
}



// FUNCTION 14dc89ffd FUN_14dc89ffd body=123 status=ok
// SIG undefined FUN_14dc89ffd(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8a056) */

void FUN_14dc89ffd(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  
  FUN_14dc2dde9(0xf187f58,FUN_14dc2dde9,
                ~((~unaff_R15 | param_3) & (0xffffffffffffffff - param_3 | unaff_R15)));
  return;
}



// FUNCTION 14dc8a079 FUN_14dc8a079 body=89 status=ok
// SIG undefined FUN_14dc8a079(void)

void FUN_14dc8a079(void)

{
  return;
}



// FUNCTION 14dc8a0e7 FUN_14dc8a0e7 body=126 status=ok
// SIG undefined FUN_14dc8a0e7(void)

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000010 */
/* WARNING: Removing unreachable block (ram,0x000166a8e996) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcaf0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a1e8) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a1ee) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a160) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a166) */
/* WARNING: Removing unreachable block (ram,0x000166bc8fb5) */
/* WARNING: Removing unreachable block (ram,0x000166bc90d1) */
/* WARNING: Removing unreachable block (ram,0x000156663140) */
/* WARNING: Removing unreachable block (ram,0x0001566631c5) */
/* WARNING: Removing unreachable block (ram,0x0001566631ca) */
/* WARNING: Removing unreachable block (ram,0x0001566631d0) */
/* WARNING: Removing unreachable block (ram,0x00016174aaea) */
/* WARNING: Removing unreachable block (ram,0x000166bc90dd) */
/* WARNING: Removing unreachable block (ram,0x000166bc915c) */
/* WARNING: Removing unreachable block (ram,0x000166bc9162) */
/* WARNING: Removing unreachable block (ram,0x0001666d6c6e) */
/* WARNING: Removing unreachable block (ram,0x0001666d6cf1) */
/* WARNING: Removing unreachable block (ram,0x0001666d6cf7) */
/* WARNING: Removing unreachable block (ram,0x000166a8e803) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8a1) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8a6) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8ac) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8b7) */
/* WARNING: Removing unreachable block (ram,0x000166a8e90d) */
/* WARNING: Removing unreachable block (ram,0x000166a8e912) */
/* WARNING: Removing unreachable block (ram,0x000166a8e918) */
/* WARNING: Removing unreachable block (ram,0x000166a8e99b) */
/* WARNING: Removing unreachable block (ram,0x000166a8e9a1) */
/* WARNING: Removing unreachable block (ram,0x0001564c51c6) */
/* WARNING: Removing unreachable block (ram,0x0001564c51e0) */
/* WARNING: Removing unreachable block (ram,0x0001564c51e4) */
/* WARNING: Removing unreachable block (ram,0x0001564c5243) */
/* WARNING: Removing unreachable block (ram,0x0001564c5248) */
/* WARNING: Removing unreachable block (ram,0x0001564c524e) */
/* WARNING: Removing unreachable block (ram,0x00015ba59958) */
/* WARNING: Removing unreachable block (ram,0x00014e0dca00) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcaf3) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcba4) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcbaa) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcbb5) */
/* WARNING: Removing unreachable block (ram,0x000162ac2ce0) */
/* WARNING: Removing unreachable block (ram,0x000162ac2d62) */
/* WARNING: Removing unreachable block (ram,0x000162ac2d68) */
/* WARNING: Removing unreachable block (ram,0x0001652c0412) */
/* WARNING: Removing unreachable block (ram,0x000166a8e9a6) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea2f) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea3a) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea35) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea2a) */
/* WARNING: Removing unreachable block (ram,0x0001620986ba) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a24a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a24e) */
/* WARNING: Removing unreachable block (ram,0x0001575c0a93) */

undefined8 FUN_14dc8a0e7(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  if (-1 < (longlong)(param_1 | ~*(ulonglong *)(unaff_RDI + -0x98))) {
    uVar1 = FUN_16538f756();
    return uVar1;
  }
  uVar1 = (*(code *)0x164b00832)(param_1,param_2,param_3,local_res8);
  return uVar1;
}



// FUNCTION 14dc8a166 FUN_14dc8a166 body=590 status=ok
// SIG undefined FUN_14dc8a166(void)

/* WARNING: Removing unreachable block (ram,0x000166a8e996) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcaf0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a1e8) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a1ee) */
/* WARNING: Removing unreachable block (ram,0x000166bc915c) */
/* WARNING: Removing unreachable block (ram,0x000166bc9162) */
/* WARNING: Removing unreachable block (ram,0x000166a8e9a6) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea2f) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea3a) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea35) */
/* WARNING: Removing unreachable block (ram,0x000166a8ea2a) */
/* WARNING: Removing unreachable block (ram,0x0001620986ba) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a24a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8a24e) */
/* WARNING: Removing unreachable block (ram,0x0001564c51e0) */
/* WARNING: Removing unreachable block (ram,0x0001564c51c6) */
/* WARNING: Removing unreachable block (ram,0x0001564c51e4) */
/* WARNING: Removing unreachable block (ram,0x0001564c5248) */
/* WARNING: Removing unreachable block (ram,0x00015ba59958) */
/* WARNING: Removing unreachable block (ram,0x0001564c5243) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8b7) */
/* WARNING: Removing unreachable block (ram,0x000166a8e90d) */
/* WARNING: Removing unreachable block (ram,0x000166a8e912) */
/* WARNING: Removing unreachable block (ram,0x00014e0dca00) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcba4) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcbaa) */
/* WARNING: Removing unreachable block (ram,0x000162ac2ce0) */
/* WARNING: Removing unreachable block (ram,0x000162ac2d62) */
/* WARNING: Removing unreachable block (ram,0x000162ac2d68) */
/* WARNING: Removing unreachable block (ram,0x0001652c0412) */
/* WARNING: Removing unreachable block (ram,0x00014e0dcbb5) */
/* WARNING: Removing unreachable block (ram,0x0001564c524e) */
/* WARNING: Removing unreachable block (ram,0x0001666d6c6e) */
/* WARNING: Removing unreachable block (ram,0x0001666d6cf1) */
/* WARNING: Removing unreachable block (ram,0x000166a8e803) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8a1) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8a6) */
/* WARNING: Removing unreachable block (ram,0x000166a8e8ac) */
/* WARNING: Removing unreachable block (ram,0x0001666d6cf7) */
/* WARNING: Removing unreachable block (ram,0x0001566631d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dc8a166(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  
  param_5 = param_5 ^ unaff_RBP;
  *(undefined8 *)(param_5 - 8) = in_stack_00000008;
  *(undefined8 *)(param_5 - 0x10) = unaff_R12;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 8) = 0;
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) + -0x15b83b499;
  *(ulonglong *)(param_5 - 8) = ~*(ulonglong *)(param_5 - 8);
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) + 1;
  *(undefined8 *)(param_5 - 0x18) = 0x166bc9042;
  FUN_15b83b46f(in_stack_00000010,param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_5 - 0x10);
  *(undefined8 *)(param_5 - 8) = *(undefined8 *)(unaff_RDI + -0x60);
  *(undefined8 *)(param_5 - 0x10) = 0;
  *(undefined8 *)(param_5 - 0x18) = uVar2;
  *(undefined8 *)(param_5 - 8) = *(undefined8 *)(unaff_RDI + -0x80);
  uVar1 = *(ulonglong *)(param_5 - 8);
  if ((longlong)((unaff_RBX << ((byte)in_stack_00000010 & 0x3f)) - uVar1) < 0) {
    lVar3 = FUN_16174aaea();
    return lVar3;
  }
  *(ulonglong *)(param_5 - 8) = in_stack_00000010;
  *(ulonglong *)(param_5 - 0x10) = (uVar1 & in_stack_00000010) * 2;
  *(undefined4 *)(param_5 - 0x10) = 0x5ad3f90;
  *(undefined4 *)(param_5 - 0xc) = 0;
  *(undefined1 **)(param_5 + *(longlong *)(param_5 - 0x10) + -0x5ad3f98) = &LAB_14df6a319;
  return uVar1 + in_stack_00000010 + (uVar1 & in_stack_00000010) * -2;
}



// FUNCTION 14dc8a290 FUN_14dc8a290 body=143 status=ok
// SIG undefined FUN_14dc8a290(void)

void FUN_14dc8a290(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  FUN_156c33979(FUN_156c33979,
                (~((in_RAX ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R12 + -0x28)) +
                *(ulonglong *)(unaff_R12 + -0x28)) - ~(in_RAX ^ 0xffffffffffffffff),
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                ~((~in_RAX | param_4) + in_RAX + 1) & (unaff_RBX & param_1 | in_RAX));
  return;
}



// FUNCTION 14dc8a31f FUN_14dc8a31f body=137 status=ok
// SIG undefined FUN_14dc8a31f(void)

void FUN_14dc8a31f(void)

{
  return;
}



// FUNCTION 14dc8a615 FUN_14dc8a615 body=15 status=ok
// SIG undefined FUN_14dc8a615(void)

void FUN_14dc8a615(void)

{
  return;
}



// FUNCTION 14dc8a876 FUN_14dc8a876 body=118 status=ok
// SIG undefined FUN_14dc8a876(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8a8d2) */

void FUN_14dc8a876(void)

{
  return;
}



// FUNCTION 14dc8a975 FUN_14dc8a975 body=141 status=ok
// SIG undefined FUN_14dc8a975(void)

undefined8 FUN_14dc8a975(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dc8aa02 FUN_14dc8aa02 body=226 status=ok
// SIG undefined FUN_14dc8aa02(void)

void FUN_14dc8aa02(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166994484(param_1,param_2,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
                (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15));
  return;
}



// FUNCTION 14dc8ab95 FUN_14dc8ab95 body=136 status=ok
// SIG undefined FUN_14dc8ab95(void)

void FUN_14dc8ab95(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong in_R10;
  
  uVar1 = 0xffffffffffffffff - in_R10;
  FUN_16207a82a((~((in_RAX - (uVar1 | in_RAX)) + uVar1) + in_RAX) - (-1 - uVar1) &
                (~in_RAX | in_R10) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dc8ac1d FUN_14dc8ac1d body=315 status=ok
// SIG undefined FUN_14dc8ac1d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8acbe) */
/* WARNING: Removing unreachable block (ram,0x00014dc8acc4) */

void FUN_14dc8ac1d(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong in_stack_00000008;
  undefined8 in_stack_00000020;
  
  uVar1 = *(ulonglong *)(in_stack_00000008 + 8);
  *(ulonglong *)(in_stack_00000008 + 8) = *(ulonglong *)(in_stack_00000008 + 8) ^ 0xffffffffffffffff
  ;
  *(ulonglong *)(in_stack_00000008 + 8) = *(ulonglong *)(in_stack_00000008 + 8) | unaff_RBP;
  *(ulonglong *)(in_stack_00000008 + 8) =
       ~((~unaff_RBP | uVar1) & *(ulonglong *)(in_stack_00000008 + 8));
  FUN_166d49142(in_stack_00000020);
  return;
}



// FUNCTION 14dc8ae77 FUN_14dc8ae77 body=338 status=ok
// SIG undefined FUN_14dc8ae77(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8af2b) */
/* WARNING: Removing unreachable block (ram,0x00014dc8af31) */
/* WARNING: Removing unreachable block (ram,0x000166782c52) */
/* WARNING: Removing unreachable block (ram,0x000166782c95) */

void FUN_14dc8ae77(void)

{
  FUN_166782c52();
  return;
}



// FUNCTION 14dc8b17f FUN_14dc8b17f body=179 status=ok
// SIG undefined FUN_14dc8b17f(void)

void FUN_14dc8b17f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  uVar2 = *(undefined8 *)(local_res10 + -0x28);
  *(undefined8 *)(local_res10 + -0x28) = uVar2;
  *(undefined8 *)(local_res10 + -0x30) = uVar2;
  *(code **)(local_res10 + -0x28) = FUN_14dc8b23b;
  FUN_1613b2202(*(undefined8 *)(local_res10 + -0x30),uVar1);
  return;
}



// FUNCTION 14dc8b23b FUN_14dc8b23b body=300 status=ok
// SIG undefined FUN_14dc8b23b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8b485) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b417) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b489) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4ab) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0271) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0277) */
/* WARNING: Removing unreachable block (ram,0x000166c37d22) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4bb) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b54a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b550) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b59e) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5d1) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5d7) */
/* WARNING: Removing unreachable block (ram,0x00015b1a01f7) */
/* WARNING: Removing unreachable block (ram,0x00015b1a026c) */
/* WARNING: Removing unreachable block (ram,0x0001619a1395) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b401) */

undefined8 FUN_14dc8b23b(byte param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *unaff_RBX;
  ulonglong in_R10;
  longlong unaff_R12;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  uVar5 = (~uVar1 + unaff_R15) - ~(uVar1 | unaff_R15 ^ 0xffffffffffffffff);
  uVar4 = *(undefined8 *)(unaff_R13 + -0x70);
  lVar3 = FUN_156d35c4e();
  uVar1 = *(ulonglong *)(~((~uVar5 | ~unaff_R15 | uVar1) + uVar5 + 1) - 0x30);
  lVar2 = -uVar1;
  uVar5 = ~(lVar2 - 1U);
  FUN_165e29fe6(in_R10,FUN_165e29fe6,~in_R10 | uVar1);
  *unaff_RBX = (short)in_R10 - ~(ushort)lVar2;
  *(undefined8 *)(in_stack_00000028 + -8) = uVar4;
  *(ulonglong *)(in_stack_00000028 + -0x10) = uVar5;
  *(ulonglong *)(in_stack_00000028 + -0x18) = uVar5;
  *(longlong *)(in_stack_00000028 + -0x20) = lVar3 - (unaff_R12 << (param_1 & 0x3f));
  *(undefined8 *)(in_stack_00000028 + -0x28) = uStackX_18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  uVar4 = FUN_164bef5b6();
  return uVar4;
}



// FUNCTION 14dc8b36b FUN_14dc8b36b body=480 status=ok
// SIG undefined FUN_14dc8b36b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8b485) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b417) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b489) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4ab) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0271) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0277) */
/* WARNING: Removing unreachable block (ram,0x000166c37d22) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4bb) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b54a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b550) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5a3) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b59e) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5d1) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5d7) */
/* WARNING: Removing unreachable block (ram,0x00015b1a01f7) */
/* WARNING: Removing unreachable block (ram,0x00015b1a026c) */
/* WARNING: Removing unreachable block (ram,0x0001619a1395) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b4b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b401) */

undefined8 FUN_14dc8b36b(void)

{
  undefined8 uVar1;
  short *unaff_RBX;
  ushort unaff_BP;
  short unaff_SI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  longlong in_stack_00000030;
  
  *unaff_RBX = unaff_SI - ~unaff_BP;
  *(undefined8 *)(in_stack_00000030 + -8) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000030 + -0x10) = in_R10;
  *(undefined8 *)(in_stack_00000030 + -0x18) = in_R10;
  *(undefined8 *)(in_stack_00000030 + -0x20) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x28) = local_res20;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  uVar1 = FUN_164bef5b6();
  return uVar1;
}



// FUNCTION 14dc8b550 FUN_14dc8b550 body=289 status=ok
// SIG undefined FUN_14dc8b550(void)

/* WARNING: Removing unreachable block (ram,0x00015b1a0271) */
/* WARNING: Removing unreachable block (ram,0x00015b1a0277) */
/* WARNING: Removing unreachable block (ram,0x000166c37d22) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b5d7) */

undefined8 FUN_14dc8b550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166c37d22(0x10,param_2);
  return uVar1;
}



// FUNCTION 14dc8b718 FUN_14dc8b718 body=201 status=ok
// SIG undefined FUN_14dc8b718(void)

void FUN_14dc8b718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 local_res8;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = 0;
  *puVar1 = (ulonglong)(&DAT_1660bea87 + *puVar1);
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = param_1;
  *(undefined8 *)(local_res18 + -0x28) = param_3;
  FUN_1660bea1d(0x24b56442,param_2,FUN_1660bea1d,uVar2);
  return;
}



// FUNCTION 14dc8b7e2 FUN_14dc8b7e2 body=739 status=ok
// SIG undefined FUN_14dc8b7e2(void)

/* WARNING: Removing unreachable block (ram,0x00016666bdd8) */
/* WARNING: Removing unreachable block (ram,0x00016666bea4) */
/* WARNING: Removing unreachable block (ram,0x00016666bea8) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b866) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b87c) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b89d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b99a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8b9a0) */
/* WARNING: Removing unreachable block (ram,0x000165bca236) */

void FUN_14dc8b7e2(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 +
      ~(~*(ulonglong *)(unaff_RDI + -0x88) | ~param_1) * -2 == 0) {
    FUN_16666bd3c();
    return;
  }
  (*(code *)&LAB_14e1cc32a)(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dc8bb67 FUN_14dc8bb67 body=117 status=ok
// SIG undefined FUN_14dc8bb67(void)

void FUN_14dc8bb67(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  undefined1 unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  LOCK();
  UNLOCK();
  DAT_14d7a84dc = unaff_retaddr;
  *(undefined8 *)(local_res10 + -8) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined4 *)(local_res10 + -0x18) = 0x3976558;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(longlong *)(local_res10 + -0x20) = lVar1;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x280b20c;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x280b20c;
  FUN_14d85d504(param_1,*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dc8be7d FUN_14dc8be7d body=146 status=ok
// SIG undefined FUN_14dc8be7d(void)

void FUN_14dc8be7d(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x60) & in_RAX;
  FUN_14d9e8f09(*(ulonglong *)(unaff_R12 + -0x60) + in_RAX + uVar1 * -2,uVar1 * 2,FUN_14d9e8f09,
                ~in_RAX);
  return;
}



// FUNCTION 14dc8bf10 FUN_14dc8bf10 body=134 status=ok
// SIG undefined FUN_14dc8bf10(void)

void FUN_14dc8bf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18;
  
  FUN_1658b8c61(param_1,param_2,param_3,local_res18);
  return;
}



// FUNCTION 14dc8c01e thunk_FUN_14dc8c024 body=5 status=ok
// SIG undefined thunk_FUN_14dc8c024(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8c0be) */
/* WARNING: Removing unreachable block (ram,0x00014dc8c0c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc8c0c4) */

void thunk_FUN_14dc8c024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  longlong lVar3;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  longlong lStackX_20;
  
  lVar3 = unaff_R13 - lStackX_20;
  puVar1 = (ulonglong *)(lVar3 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RDI;
  *(undefined8 *)(lVar3 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x18) = param_4;
  uVar2 = *(undefined8 *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = param_3;
  *(undefined8 *)(lVar3 + -0x20) = uStackX_10;
  *(undefined1 **)(lVar3 + -8) = &LAB_15641b1c5;
  thunk_FUN_15b642ca5(unaff_retaddr,param_2,*(undefined8 *)(lVar3 + -0x18),uVar2);
  return;
}



// FUNCTION 14dc8c024 FUN_14dc8c024 body=273 status=ok
// SIG undefined FUN_14dc8c024(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8c0be) */
/* WARNING: Removing unreachable block (ram,0x00014dc8c0c9) */
/* WARNING: Removing unreachable block (ram,0x00014dc8c0c4) */

void FUN_14dc8c024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  longlong lVar3;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  longlong local_res20;
  
  lVar3 = unaff_R13 - local_res20;
  puVar1 = (ulonglong *)(lVar3 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RDI;
  *(undefined8 *)(lVar3 + -0x10) = unaff_R12;
  *(undefined8 *)(lVar3 + -0x18) = param_4;
  uVar2 = *(undefined8 *)(lVar3 + -0x18);
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = param_3;
  *(undefined8 *)(lVar3 + -0x20) = local_res10;
  *(undefined1 **)(lVar3 + -8) = &LAB_15641b1c5;
  thunk_FUN_15b642ca5(unaff_retaddr,param_2,*(undefined8 *)(lVar3 + -0x18),uVar2);
  return;
}



// FUNCTION 14dc8c137 FUN_14dc8c137 body=171 status=ok
// SIG undefined FUN_14dc8c137(void)

void FUN_14dc8c137(ushort *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *param_1 = (-0x100 - (~-(((~*param_1 | 0x100) - 0x101) - ~*param_1) + 2)) + *param_1;
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = 0x14dc8c1a2;
  uVar1 = FUN_14e1d1eb4(uStackX_8,unaff_retaddr);
  *(undefined8 *)(local_res20 + -0x10) = uVar1;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_14dc8c1e3;
  return;
}



// FUNCTION 14dc8c63d FUN_14dc8c63d body=318 status=ok
// SIG undefined FUN_14dc8c63d(void)

void FUN_14dc8c63d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = 0x595375e5;
  *(ulonglong *)(local_res10 + -0x10) = *(ulonglong *)(local_res10 + -0x10) ^ 0x595375e5;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 0x1619837d8;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  *(undefined8 *)(local_res10 + -0x20) = 0x14dc8c6e3;
  FUN_161983787();
  puVar1 = (undefined8 *)(local_res10 + -0x20);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)puVar1 = *(undefined4 *)puVar1;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *puVar1 = unaff_RBP;
  *(undefined2 *)puVar1 = 0x3a37;
  *puVar1 = &LAB_16634653a;
  return;
}



// FUNCTION 14dc8c81c FUN_14dc8c81c body=114 status=ok
// SIG undefined FUN_14dc8c81c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8c844) */

void FUN_14dc8c81c(void)

{
  FUN_15b351c9e();
  return;
}



// FUNCTION 14dc8c927 FUN_14dc8c927 body=159 status=ok
// SIG undefined FUN_14dc8c927(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc8c927(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_165582012)(param_1,~(*(ulonglong *)(unaff_RDI + -0x28) & param_1) + param_1);
  return;
}



// FUNCTION 14dc8c9c6 FUN_14dc8c9c6 body=104 status=ok
// SIG undefined FUN_14dc8c9c6(void)

void FUN_14dc8c9c6(void)

{
  return;
}



// FUNCTION 14dc8cb7f FUN_14dc8cb7f body=168 status=ok
// SIG undefined FUN_14dc8cb7f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8cd55) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd66) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cdf1) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cdec) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde1) */
/* WARNING: Removing unreachable block (ram,0x0001619a6d80) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cc1d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cc23) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cc28) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cc9d) */
/* WARNING: Removing unreachable block (ram,0x0001572cfeb9) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cca3) */
/* WARNING: Removing unreachable block (ram,0x00015687f3b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8ccac) */
/* WARNING: Removing unreachable block (ram,0x000165727e43) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd61) */

void FUN_14dc8cb7f(void)

{
  FUN_1612d3575();
  return;
}



// FUNCTION 14dc8cc28 thunk_FUN_14dc8cc2e body=5 status=ok
// SIG undefined thunk_FUN_14dc8cc2e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8cdf1) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd55) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd66) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cdec) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde1) */
/* WARNING: Removing unreachable block (ram,0x0001619a6d80) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd61) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cca3) */
/* WARNING: Removing unreachable block (ram,0x00014dc8ccac) */
/* WARNING: Removing unreachable block (ram,0x00015687f3b0) */

void thunk_FUN_14dc8cc2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong *unaff_RBX;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX ^ 0xffffffffffffffff;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX - 1;
  *unaff_RBX = *unaff_RBX - 1;
  *unaff_RBX = *unaff_RBX | unaff_R15;
  *unaff_RBX = ~((*unaff_RBX - (~unaff_R15 | uVar1 | *unaff_RBX)) + (~unaff_R15 | uVar1));
  FUN_1617cb965(param_1,param_2,param_3,FUN_1617cb965);
  return;
}



// FUNCTION 14dc8cc2e FUN_14dc8cc2e body=476 status=ok
// SIG undefined FUN_14dc8cc2e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8cdf1) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8a) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd55) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd66) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd8d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cdec) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cde1) */
/* WARNING: Removing unreachable block (ram,0x0001619a6d80) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cd61) */
/* WARNING: Removing unreachable block (ram,0x00014dc8cca3) */
/* WARNING: Removing unreachable block (ram,0x00014dc8ccac) */
/* WARNING: Removing unreachable block (ram,0x00015687f3b0) */

void FUN_14dc8cc2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong *unaff_RBX;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_RBX;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX ^ 0xffffffffffffffff;
  *unaff_RBX = -*unaff_RBX;
  *unaff_RBX = *unaff_RBX - 1;
  *unaff_RBX = *unaff_RBX - 1;
  *unaff_RBX = *unaff_RBX | unaff_R15;
  *unaff_RBX = ~((*unaff_RBX - (~unaff_R15 | uVar1 | *unaff_RBX)) + (~unaff_R15 | uVar1));
  FUN_1617cb965(param_1,param_2,param_3,FUN_1617cb965);
  return;
}



// FUNCTION 14dc8cdf1 FUN_14dc8cdf1 body=323 status=ok
// SIG undefined FUN_14dc8cdf1(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc8cdf1(void)

{
  FUN_1661e81c9();
  FUN_165cda6fc();
  return;
}



// FUNCTION 14dc8cf38 FUN_14dc8cf38 body=139 status=ok
// SIG undefined FUN_14dc8cf38(void)

void FUN_14dc8cf38(void)

{
  FUN_156823923();
  return;
}



// FUNCTION 14dc8d253 FUN_14dc8d253 body=135 status=ok
// SIG undefined FUN_14dc8d253(void)

/* WARNING: Instruction at (ram,0x00014dc8d283) overlaps instruction at (ram,0x00014dc8d282)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc8d282) */

void FUN_14dc8d253(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  (*(code *)0x1656216c9)(0x33f810a6,local_res8,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dc8d2e1 FUN_14dc8d2e1 body=127 status=ok
// SIG undefined FUN_14dc8d2e1(void)

void FUN_14dc8d2e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_16688d35e(param_1,param_2,local_res8,param_4);
  return;
}



// FUNCTION 14dc8d360 FUN_14dc8d360 body=293 status=ok
// SIG undefined FUN_14dc8d360(void)

void FUN_14dc8d360(undefined1 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  FUN_1611e4f39(param_1,~(param_2 & unaff_R15) & (unaff_retaddr | unaff_R15));
  *(ulonglong *)((uVar1 ^ unaff_R15) + 8) =
       ~(0xffffffffffffffff - (uVar2 & unaff_R15) & (uVar2 | unaff_R15));
  return;
}



// FUNCTION 14dc8d63f FUN_14dc8d63f body=490 status=ok
// SIG undefined FUN_14dc8d63f(void)

void FUN_14dc8d63f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000010;
  
  pcVar2 = FUN_156d0de44;
  FUN_156d0de44(FUN_156d0de44,in_stack_00000008,param_3,in_stack_00000010);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_162357740(pcVar2,-uVar1,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,
                ~((~unaff_RBX |
                  ~((~(~in_stack_00000010 & unaff_R15) + unaff_R15) - in_stack_00000010)) ^
                 0xffffffffffffffff));
  FUN_166bfe9fe(&DAT_ac91427a73ca2b2b,DAT_1623576e8,unaff_RBP);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc8d82d FUN_14dc8d82d body=303 status=ok
// SIG undefined FUN_14dc8d82d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc8d82d(undefined8 param_1,undefined2 param_2)

{
  FUN_15b046366(&DAT_ac91427a73ca2b2b,param_2,param_2);
  FUN_14da7481e(0);
  return;
}



// FUNCTION 14dc8de04 FUN_14dc8de04 body=348 status=ok
// SIG undefined FUN_14dc8de04(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8debb) */
/* WARNING: Removing unreachable block (ram,0x00014dc8df52) */
/* WARNING: Removing unreachable block (ram,0x00014dc8df57) */
/* WARNING: Removing unreachable block (ram,0x00014dc8df5d) */
/* WARNING: Removing unreachable block (ram,0x00014dc8df62) */
/* WARNING: Removing unreachable block (ram,0x00014dc8deb0) */

void FUN_14dc8de04(void)

{
  return;
}



// FUNCTION 14dc8df62 FUN_14dc8df62 body=176 status=ok
// SIG undefined FUN_14dc8df62(void)

void FUN_14dc8df62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,param_3);
  local_res10[-1] = param_4;
  *local_res10 = 0x4c4dfae;
  local_res10[-1] = unaff_RBP;
  local_res10[-2] = unaff_RBP;
  local_res10[-3] = 0x14dc8dfe3;
  FUN_15b18e11e();
  local_res10[-2] = unaff_R12;
  local_res10[-3] = 0x335a067c;
  local_res10[-4] = 0x335a067c;
  local_res10[-3] = &DAT_14dc8e014;
  return;
}



// FUNCTION 14dc8e091 FUN_14dc8e091 body=287 status=ok
// SIG undefined FUN_14dc8e091(void)

/* WARNING: Removing unreachable block (ram,0x00016187a03d) */

void FUN_14dc8e091(void)

{
  undefined8 uVar1;
  ushort unaff_BX;
  ushort *unaff_RDI;
  ulonglong in_R10;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  longlong local_res20;
  
  *unaff_RDI = -*unaff_RDI;
  *unaff_RDI = *unaff_RDI - 1;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = *unaff_RDI & unaff_BX;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) - unaff_retaddr;
  *(ulonglong *)(local_res20 + -8) = ~*(ulonglong *)(local_res20 + -8);
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + 1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined1 **)(local_res20 + -8) = &LAB_166a4787c;
  *(undefined8 *)(local_res20 + -0x18) = 0x14dc8e11b;
  uVar1 = FUN_166a47835();
  *(ulonglong *)(local_res20 + -0x18) = in_R10 & 0xffffffff;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined4 *)(local_res20 + -0x18) = 0x5c949566;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  FUN_14db6210d();
  return;
}



// FUNCTION 14dc8e236 FUN_14dc8e236 body=157 status=ok
// SIG undefined FUN_14dc8e236(void)

void FUN_14dc8e236(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15af4ba1c(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),FUN_15af4ba1c);
  return;
}



// FUNCTION 14dc8e498 FUN_14dc8e498 body=181 status=ok
// SIG undefined FUN_14dc8e498(void)

void FUN_14dc8e498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16114ccf9(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc8e5e0 FUN_14dc8e5e0 body=20 status=ok
// SIG undefined FUN_14dc8e5e0(void)

void FUN_14dc8e5e0(void)

{
  return;
}



// FUNCTION 14dc8e694 FUN_14dc8e694 body=124 status=ok
// SIG undefined FUN_14dc8e694(void)

void FUN_14dc8e694(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_retaddr;
  
  uVar1 = param_2 ^ 0xffffffffffffffff | unaff_retaddr;
  FUN_1617f3f5f(param_1,(uVar1 - (~unaff_retaddr | param_2 | uVar1)) + (~unaff_retaddr | param_2) ^
                        0xffffffffffffffff,FUN_1617f3f5f);
  return;
}



// FUNCTION 14dc8e710 FUN_14dc8e710 body=156 status=ok
// SIG undefined FUN_14dc8e710(void)

/* WARNING: Removing unreachable block (ram,0x00014dd62a67) */
/* WARNING: Removing unreachable block (ram,0x00014dd62a6d) */
/* WARNING: Removing unreachable block (ram,0x00014dd62a72) */
/* WARNING: Removing unreachable block (ram,0x00014dc8e7a2) */
/* WARNING: Removing unreachable block (ram,0x00014dc8e7a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc8e7ad) */

void FUN_14dc8e710(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (in_RAX ^ 0x2c296bf3));
  FUN_14de36ef2((*(ulonglong *)(unaff_R13 + -0x78) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) * -2 + -2,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,
                ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15),in_R9);
  return;
}



// FUNCTION 14dc8e7ad FUN_14dc8e7ad body=64 status=ok
// SIG undefined FUN_14dc8e7ad(void)

void FUN_14dc8e7ad(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc8e852 FUN_14dc8e852 body=427 status=ok
// SIG undefined FUN_14dc8e852(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8e8f0) */
/* WARNING: Removing unreachable block (ram,0x00014dc8e8f6) */
/* WARNING: Removing unreachable block (ram,0x0001575bf561) */
/* WARNING: Removing unreachable block (ram,0x0001575bf5ae) */
/* WARNING: Removing unreachable block (ram,0x0001575bf5b0) */
/* WARNING: Removing unreachable block (ram,0x0001575bf5dc) */
/* WARNING: Removing unreachable block (ram,0x0001575bf5e2) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

undefined8 FUN_14dc8e852(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1575bf561();
  return uVar1;
}



// FUNCTION 14dc8ea08 FUN_14dc8ea08 body=168 status=ok
// SIG undefined FUN_14dc8ea08(void)

void FUN_14dc8ea08(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res10 + -8) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x1b9d0ae2;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x1b9d0ae2;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x162d2d99b;
  *(undefined8 *)(local_res10 + -0x18) = in_R9;
  (*(code *)0x162d2d94a)();
  return;
}



// FUNCTION 14dc8eced FUN_14dc8eced body=147 status=ok
// SIG undefined FUN_14dc8eced(void)

void FUN_14dc8eced(undefined8 param_1)

{
  FUN_166b49efb(param_1);
  return;
}



// FUNCTION 14dc8edfa FUN_14dc8edfa body=124 status=ok
// SIG undefined FUN_14dc8edfa(void)

void FUN_14dc8edfa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_1653d5e56(~((~uVar1 | ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + uVar1 + 1),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  uVar2 = 0;
  if (((DAT_1653d5e26 | unaff_RBP) & 0x80000000) != 0) {
    uVar2 = 0xffffffff;
  }
  FUN_161ce09d0(~((~unaff_RBP | DAT_1653d5dee) & (0xffffffffffffffff - DAT_1653d5dee | unaff_RBP)),
                uVar2,param_3,0);
  return;
}



// FUNCTION 14dc8ee78 FUN_14dc8ee78 body=171 status=ok
// SIG undefined FUN_14dc8ee78(void)

void FUN_14dc8ee78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = 0;
  if (((*(ulonglong *)(unaff_RSI + -0x30) | unaff_RBP) & 0x80000000) != 0) {
    uVar1 = 0xffffffff;
  }
  FUN_161ce09d0(~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x68)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_RSI + -0x68) | unaff_RBP)),uVar1,param_3
                ,0);
  return;
}



// FUNCTION 14dc8ef23 FUN_14dc8ef23 body=312 status=ok
// SIG undefined FUN_14dc8ef23(void)

void FUN_14dc8ef23(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 auStack_30 [2];
  
  auStack_30[1] = 0x47aeeec3;
  pcVar3 = FUN_156b332f2;
  FUN_156b332f2();
  lVar4 = (longlong)pcVar3 - ~(~(param_3 & 0xffffffffcebc1fc7) & (param_3 | 0xffffffffcebc1fc7));
  plVar1 = (longlong *)(&stack0xffffffffffffffe0 + lVar4);
  lVar2 = *(longlong *)(unaff_RDI + -0x60);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - lVar2;
  *(undefined8 *)((longlong)auStack_30 + lVar4 + 8) = in_R11;
  *(undefined8 *)((longlong)auStack_30 + lVar4) = in_R11;
  *(code **)((longlong)auStack_30 + lVar4 + 8) = FUN_14dc8f064;
  FUN_166b6a7e3();
  return;
}



// FUNCTION 14dc8f064 FUN_14dc8f064 body=140 status=ok
// SIG undefined FUN_14dc8f064(void)

void FUN_14dc8f064(void)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0x484916c;
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14dc8f237 FUN_14dc8f237 body=77 status=ok
// SIG undefined FUN_14dc8f237(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8f25e) */
/* WARNING: Removing unreachable block (ram,0x00014dc8f274) */
/* WARNING: Removing unreachable block (ram,0x00014dc8f27f) */

void FUN_14dc8f237(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_162b99a55)(&DAT_162b99a55,param_2);
  FUN_1574b4c74();
  return;
}



// FUNCTION 14dc8f285 FUN_14dc8f285 body=142 status=ok
// SIG undefined FUN_14dc8f285(void)

void FUN_14dc8f285(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong *unaff_R14;
  ulonglong in_stack_00000008;
  undefined8 local_res18;
  
  uVar1 = *unaff_R14;
  *unaff_R14 = -*unaff_R14;
  *unaff_R14 = *unaff_R14 - 1;
  *unaff_R14 = *unaff_R14 | unaff_RBX;
  *unaff_R14 = ~(~(in_stack_00000008 & ~uVar1) & *unaff_R14);
  FUN_1663f3753(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14dc8f31a FUN_14dc8f31a body=244 status=ok
// SIG undefined FUN_14dc8f31a(void)

void FUN_14dc8f31a(ushort *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  longlong lStackX_8;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined8 *local_res20;
  
  *param_1 = (*param_1 - 1) - ~(0xfeff - (*param_1 | 0xfeff));
  bVar15 = (local_res18 & 0x4000) != 0;
  bVar14 = (local_res18 & 0x800) != 0;
  bVar13 = (local_res18 & 0x400) != 0;
  bVar12 = (local_res18 & 0x200) != 0;
  bVar11 = (local_res18 & 0x100) != 0;
  bVar10 = (local_res18 & 0x80) != 0;
  bVar9 = (local_res18 & 0x40) != 0;
  bVar8 = (local_res18 & 0x10) != 0;
  bVar7 = (local_res18 & 4) != 0;
  bVar6 = (local_res18 & 1) != 0;
  bVar19 = (local_res18 & 0x200000) != 0;
  bVar16 = (local_res18 & 0x40000) != 0;
  bVar18 = 0;
  bVar17 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *local_res20 = unaff_R14;
  local_res20[-1] = unaff_R14;
  local_res20[-2] =
       (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)(bVar14 & 1) * 0x800 |
       (ulonglong)bVar13 * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 | (ulonglong)(bVar11 & 1) * 0x100
       | (ulonglong)(bVar10 & 1) * 0x80 | (ulonglong)(bVar9 & 1) * 0x40 |
       (ulonglong)(bVar8 & 1) * 0x10 | (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
       (ulonglong)(bVar19 & 1) * 0x200000 | (ulonglong)(bVar18 & 1) * 0x100000 |
       (ulonglong)(bVar17 & 1) * 0x80000 | (ulonglong)(bVar16 & 1) * 0x40000;
  local_res20[-3] = 0x14dc8f395;
  lVar5 = FUN_1649771d0();
  local_res20[-2] = local_res10;
  uVar3 = local_res20[-2];
  local_res20[-2] = unaff_RBP;
  local_res20[-3] = unaff_RBX;
  uVar4 = local_res20[-1];
  *(undefined1 *)(param_4 + 1 + lVar5) =
       *(undefined1 *)((longlong)local_res20 + ((unaff_RDI + (6 - lStackX_8)) - ~unaff_RSI));
  local_res20[-1] = param_4;
  puVar1 = local_res20 + -2;
  *puVar1 = uVar3;
  uVar3 = *puVar1;
  *puVar1 = param_3;
  local_res20[-3] = lVar5;
  local_res20[-4] =
       (ulonglong)(bVar15 & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)local_res20,-8) * 0x800 |
       (ulonglong)bVar13 * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 | (ulonglong)(bVar11 & 1) * 0x100
       | (ulonglong)((longlong)(local_res20 + -1) < 0) * 0x80 |
       (ulonglong)(local_res20 == (undefined8 *)&DAT_00000008) * 0x40 |
       (ulonglong)(bVar8 & 1) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)(local_res20 + -1) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(&DAT_00000007 < local_res20) | (ulonglong)(bVar19 & 1) * 0x200000 |
       (ulonglong)(bVar18 & 1) * 0x100000 | (ulonglong)(bVar17 & 1) * 0x80000 |
       (ulonglong)(bVar16 & 1) * 0x40000;
  FUN_160f2a789(uVar4,param_2,FUN_160f2a789,uVar3);
  return;
}



// FUNCTION 14dc8f696 FUN_14dc8f696 body=97 status=ok
// SIG undefined FUN_14dc8f696(void)

void FUN_14dc8f696(ushort param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *param_2 = *param_2 ^ 0xffff;
  *param_2 = *param_2 | ~param_1;
  *param_2 = ~*param_2;
  *(undefined8 *)(param_5 + -8) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -8) = 0x341f28c9;
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x341f28c9;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -8);
  *(longlong *)(param_5 + -8) = (longlong)(&DAT_14dc8f719 + *(longlong *)(param_5 + -8));
  FUN_14d7abedd(uStackX_18,uStackX_10);
  return;
}



// FUNCTION 14dc8f979 FUN_14dc8f979 body=282 status=ok
// SIG undefined FUN_14dc8f979(void)

void FUN_14dc8f979(uint param_1,uint param_2)

{
  longlong unaff_RDI;
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(unaff_RDI + -0xa0);
  uVar1 = (~param_1 | uVar1) & (~uVar1 | param_1);
  FUN_14d91dee3();
  FUN_15ba641ed(0x28,(~(param_2 & uVar1) + uVar1) - ~param_2);
  return;
}



// FUNCTION 14dc8fa97 FUN_14dc8fa97 body=150 status=ok
// SIG undefined FUN_14dc8fa97(void)

void FUN_14dc8fa97(void)

{
  return;
}



// FUNCTION 14dc8fb2f FUN_14dc8fb2f body=567 status=ok
// SIG undefined FUN_14dc8fb2f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8fc59) */
/* WARNING: Removing unreachable block (ram,0x00014dc8fc5f) */
/* WARNING: Removing unreachable block (ram,0x00014dc8fbba) */
/* WARNING: Removing unreachable block (ram,0x000162981cb2) */
/* WARNING: Removing unreachable block (ram,0x00014dc8fbaf) */

void FUN_14dc8fb2f(void)

{
  return;
}



// FUNCTION 14dc8fd11 FUN_14dc8fd11 body=160 status=ok
// SIG undefined FUN_14dc8fd11(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8fdb1) */

undefined1 * FUN_14dc8fd11(void)

{
  return &LAB_1627008d9;
}



// FUNCTION 14dc8fdb1 FUN_14dc8fdb1 body=136 status=ok
// SIG undefined FUN_14dc8fdb1(void)

void FUN_14dc8fdb1(void)

{
  return;
}



// FUNCTION 14dc8fe3a FUN_14dc8fe3a body=175 status=ok
// SIG undefined FUN_14dc8fe3a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc8febd) */

void FUN_14dc8fe3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x165f7c6e1)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3);
  return;
}



// FUNCTION 14dc8feea FUN_14dc8feea body=139 status=ok
// SIG undefined FUN_14dc8feea(void)

void FUN_14dc8feea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  ulonglong uStackX_20;
  undefined8 uStack_60;
  ulonglong uStack_40;
  
  uVar17 = local_res18 ^ unaff_R15;
  pcVar7 = FUN_14df6c176;
  FUN_14df6c176(in_stack_00000008);
  FUN_165b5b28b();
  FUN_165668e3e();
  uVar1 = uStackX_20 ^ unaff_R15;
  bVar12 = (uVar17 & 0x4000) != 0;
  bVar11 = (uVar17 & 0x200) != 0;
  bVar8 = 0;
  bVar10 = (uVar17 & 0x10) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar13 = (uVar17 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  *(ulonglong *)(uVar1 - 8) = (uStack_40 ^ unaff_R15 ^ 0x53700ea) + uStack_40 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  uVar4 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar4;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dc90130;
  uVar6 = FUN_1615669a2(uStack_60);
  uVar5 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uStack_60;
  *(undefined8 *)(uVar1 - 0x20) = uVar6;
  bVar2 = *(byte *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = uVar5;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R12;
  *(ulonglong *)(uVar1 - 0x30) =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)SCARRY8(uVar1 - 0x20,8) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)((longlong)(uVar1 - 0x18) < 0) * 0x80 |
       (ulonglong)(uVar1 == 0x18) * 0x40 | (ulonglong)(bVar10 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar1 - 0x18 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
       (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = *(ulonglong *)(uVar1 - 0x30);
  bVar8 = ((uVar17 & 1) != 0) - 3;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  *(code **)(uVar1 - 0x30) = pcVar7;
  bVar8 = bVar8 - (bVar2 | bVar8);
  cVar9 = bVar8 + bVar2;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar8,bVar2) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)(cVar9 < '\0') * 0x80 |
       (ulonglong)(cVar9 == '\0') * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar9) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar8,bVar2) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x28) = 0x14dc90199;
  FUN_165d5edbe();
  *(undefined8 *)(uVar1 - 0x28) = *(undefined8 *)(uVar1 - 0x18);
  *(undefined4 *)(uVar1 - 0x24) = 0xd2d4d4c7;
  *(int *)(uVar1 - 0x24) = *(int *)(uVar1 - 0x24) + 0x2d2b2b39;
  iVar3 = *(int *)(uVar1 - 0x28);
  *(int *)(uVar1 - 0x28) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
  }
  FUN_157810f4e();
  return;
}



// FUNCTION 14dc8ff76 FUN_14dc8ff76 body=123 status=ok
// SIG undefined FUN_14dc8ff76(void)

void FUN_14dc8ff76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong uStackX_20;
  
  uVar17 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar4 = *(undefined8 *)(unaff_R13 + -0x70);
  FUN_165b5b28b();
  lVar5 = *(longlong *)(unaff_R13 + -0x50);
  uVar6 = *(undefined8 *)(unaff_R13 + -8);
  FUN_165668e3e();
  uVar1 = uStackX_20 ^ unaff_R15;
  bVar12 = (local_res18 & 0x4000) != 0;
  bVar11 = (local_res18 & 0x200) != 0;
  bVar8 = 0;
  bVar10 = (local_res18 & 0x10) != 0;
  bVar16 = (uStackX_1a & 0x20) != 0;
  bVar13 = (uStackX_1a & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  *(ulonglong *)(uVar1 - 8) = (uVar17 ^ unaff_R15 ^ 0x53700ea) + lVar5 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  uVar17 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar17;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dc90130;
  uVar7 = FUN_1615669a2(uVar4);
  uVar4 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uVar6;
  *(undefined8 *)(uVar1 - 0x20) = uVar7;
  bVar2 = *(byte *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = uVar4;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R12;
  *(ulonglong *)(uVar1 - 0x30) =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)SCARRY8(uVar1 - 0x20,8) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)((longlong)(uVar1 - 0x18) < 0) * 0x80 |
       (ulonglong)(uVar1 == 0x18) * 0x40 | (ulonglong)(bVar10 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar1 - 0x18 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
       (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = *(ulonglong *)(uVar1 - 0x30);
  bVar8 = ((uVar17 & 1) != 0) - 3;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  *(undefined8 *)(uVar1 - 0x30) = param_2;
  bVar8 = bVar8 - (bVar2 | bVar8);
  cVar9 = bVar8 + bVar2;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar8,bVar2) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)(cVar9 < '\0') * 0x80 |
       (ulonglong)(cVar9 == '\0') * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar9) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar8,bVar2) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x28) = 0x14dc90199;
  FUN_165d5edbe();
  *(undefined8 *)(uVar1 - 0x28) = *(undefined8 *)(uVar1 - 0x18);
  *(undefined4 *)(uVar1 - 0x24) = 0xd2d4d4c7;
  *(int *)(uVar1 - 0x24) = *(int *)(uVar1 - 0x24) + 0x2d2b2b39;
  iVar3 = *(int *)(uVar1 - 0x28);
  *(int *)(uVar1 - 0x28) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(uVar1 - 0x24) = 0xffffffff;
  }
  FUN_157810f4e();
  return;
}



// FUNCTION 14dc8fff9 FUN_14dc8fff9 body=116 status=ok
// SIG undefined FUN_14dc8fff9(void)

void FUN_14dc8fff9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong unaff_RBP;
  char cVar8;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined8 uStackX_10;
  ushort uStackX_20;
  uint6 uStackX_22;
  
  lVar3 = *(longlong *)(unaff_R13 + -0x50);
  uVar4 = *(undefined8 *)(unaff_R13 + -8);
  FUN_165668e3e();
  param_5 = param_5 ^ unaff_R15;
  bVar11 = (uStackX_20 & 0x4000) != 0;
  bVar10 = (uStackX_20 & 0x200) != 0;
  bVar7 = 0;
  bVar9 = (uStackX_20 & 0x10) != 0;
  bVar15 = (uStackX_22 & 0x20) != 0;
  bVar12 = (uStackX_22 & 4) != 0;
  bVar14 = 0;
  bVar13 = 0;
  *(ulonglong *)(param_5 - 8) = (unaff_RBP ^ 0x53700ea) + lVar3 ^ unaff_R15;
  *(undefined8 *)(param_5 - 0x10) = param_3;
  *(undefined8 *)(param_5 - 0x18) = param_3;
  uVar16 = *(ulonglong *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x10) = 0;
  *(ulonglong *)(param_5 - 0x10) = *(ulonglong *)(param_5 - 0x10) ^ uVar16;
  *(undefined8 *)(param_5 - 0x20) = 0x14dc90130;
  uVar6 = FUN_1615669a2(uStackX_10);
  uVar5 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = uVar4;
  *(undefined8 *)(param_5 - 0x20) = uVar6;
  bVar1 = *(byte *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 0x20) = uVar5;
  *(undefined8 *)(param_5 - 0x28) = unaff_R12;
  *(ulonglong *)(param_5 - 0x30) =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)SCARRY8(param_5 - 0x20,8) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)((longlong)(param_5 - 0x18) < 0) * 0x80 |
       (ulonglong)(param_5 == 0x18) * 0x40 | (ulonglong)(bVar9 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(param_5 - 0x18 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
       (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  uVar16 = *(ulonglong *)(param_5 - 0x30);
  bVar7 = ((uVar16 & 1) != 0) - 3;
  *(undefined8 *)(param_5 - 0x28) = in_R10;
  *(undefined8 *)(param_5 - 0x30) = param_2;
  bVar7 = bVar7 - (bVar1 | bVar7);
  cVar8 = bVar7 + bVar1;
  *(ulonglong *)(param_5 - 0x28) =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar7,bVar1) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)(cVar8 < '\0') * 0x80 |
       (ulonglong)(cVar8 == '\0') * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar8) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar7,bVar1) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x28) = 0x14dc90199;
  FUN_165d5edbe();
  *(undefined8 *)(param_5 - 0x28) = *(undefined8 *)(param_5 - 0x18);
  *(undefined4 *)(param_5 - 0x24) = 0xd2d4d4c7;
  *(int *)(param_5 - 0x24) = *(int *)(param_5 - 0x24) + 0x2d2b2b39;
  iVar2 = *(int *)(param_5 - 0x28);
  *(int *)(param_5 - 0x28) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_5 - 0x24) = 0xffffffff;
  }
  FUN_157810f4e();
  return;
}



// FUNCTION 14dc90087 FUN_14dc90087 body=417 status=ok
// SIG undefined FUN_14dc90087(void)

void FUN_14dc90087(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 unaff_RBP;
  char cVar6;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 local_res8;
  undefined8 local_res18;
  
  param_6 = param_6 ^ unaff_R15;
  bVar9 = (param_5 & 0x4000) != 0;
  bVar8 = (param_5 & 0x200) != 0;
  bVar5 = 0;
  bVar7 = (param_5 & 0x10) != 0;
  bVar13 = (param_5 & 0x200000) != 0;
  bVar10 = (param_5 & 0x40000) != 0;
  bVar12 = 0;
  bVar11 = 0;
  *(undefined8 *)(param_6 - 8) = unaff_RBP;
  *(undefined8 *)(param_6 - 0x10) = param_3;
  *(undefined8 *)(param_6 - 0x18) = param_3;
  uVar14 = *(ulonglong *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x10) = 0;
  *(ulonglong *)(param_6 - 0x10) = *(ulonglong *)(param_6 - 0x10) ^ uVar14;
  *(undefined8 *)(param_6 - 0x20) = 0x14dc90130;
  uVar4 = FUN_1615669a2(local_res18);
  uVar3 = *(undefined8 *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x18) = local_res8;
  *(undefined8 *)(param_6 - 0x20) = uVar4;
  bVar1 = *(byte *)(param_6 - 0x20);
  *(undefined8 *)(param_6 - 0x20) = uVar3;
  *(undefined8 *)(param_6 - 0x28) = unaff_R12;
  *(ulonglong *)(param_6 - 0x30) =
       (ulonglong)(bVar9 & 1) * 0x4000 | (ulonglong)SCARRY8(param_6 - 0x20,8) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar5 & 1) * 0x100 | (ulonglong)((longlong)(param_6 - 0x18) < 0) * 0x80 |
       (ulonglong)(param_6 == 0x18) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
       (ulonglong)((POPCOUNT(param_6 - 0x18 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar13 & 1) * 0x200000 | (ulonglong)(bVar12 & 1) * 0x100000 |
       (ulonglong)(bVar11 & 1) * 0x80000 | (ulonglong)(bVar10 & 1) * 0x40000;
  uVar14 = *(ulonglong *)(param_6 - 0x30);
  bVar5 = ((uVar14 & 1) != 0) - 3;
  *(undefined8 *)(param_6 - 0x28) = in_R10;
  *(undefined8 *)(param_6 - 0x30) = param_2;
  bVar5 = bVar5 - (bVar1 | bVar5);
  cVar6 = bVar5 + bVar1;
  *(ulonglong *)(param_6 - 0x28) =
       (ulonglong)((uVar14 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY1(bVar5,bVar1) * 0x800 |
       (ulonglong)((uVar14 & 0x400) != 0) * 0x400 | (ulonglong)((uVar14 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar14 & 0x100) != 0) * 0x100 | (ulonglong)(cVar6 < '\0') * 0x80 |
       (ulonglong)(cVar6 == '\0') * 0x40 | (ulonglong)((uVar14 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar6) & 1U) == 0) * 4 | (ulonglong)CARRY1(bVar5,bVar1) |
       (ulonglong)((uVar14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar14 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 - 0x28) = 0x14dc90199;
  FUN_165d5edbe();
  *(undefined8 *)(param_6 - 0x28) = *(undefined8 *)(param_6 - 0x18);
  *(undefined4 *)(param_6 - 0x24) = 0xd2d4d4c7;
  *(int *)(param_6 - 0x24) = *(int *)(param_6 - 0x24) + 0x2d2b2b39;
  iVar2 = *(int *)(param_6 - 0x28);
  *(int *)(param_6 - 0x28) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_6 - 0x24) = 0xffffffff;
  }
  FUN_157810f4e();
  return;
}



// FUNCTION 14dc90232 FUN_14dc90232 body=183 status=ok
// SIG undefined FUN_14dc90232(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9033f) */
/* WARNING: Removing unreachable block (ram,0x00014dc902de) */
/* WARNING: Removing unreachable block (ram,0x00014dc902e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc90341) */
/* WARNING: Removing unreachable block (ram,0x00014dc902e4) */

void FUN_14dc90232(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1668ba94d(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc902e9 thunk_FUN_14dc902ef body=5 status=ok
// SIG undefined thunk_FUN_14dc902ef(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9033f) */

void thunk_FUN_14dc902ef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined4 uStack0000000000000108;
  
  uStack0000000000000108 = 0x4f746553;
  FUN_161cfa7ce(FUN_161cfa7ce,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc902ef FUN_14dc902ef body=165 status=ok
// SIG undefined FUN_14dc902ef(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9033f) */

void FUN_14dc902ef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack0000000000000108;
  
  uStack0000000000000108 = 0x4f746553;
  FUN_161cfa7ce(FUN_161cfa7ce,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc90421 FUN_14dc90421 body=539 status=ok
// SIG undefined FUN_14dc90421(void)

/* WARNING: Removing unreachable block (ram,0x0001625f2816) */
/* WARNING: Removing unreachable block (ram,0x00014dc904d2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc90421(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  longlong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x30);
  if ((longlong)uVar2 < 0) {
    FUN_1625f26d2();
    return;
  }
  uVar5 = (~(~uVar2 & param_1) + param_1) - uVar2;
  uVar6 = ~((~param_1 | uVar2) & uVar5);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar4 = FUN_1629de33e();
  *(ulonglong *)(uVar5 + 0x10) = ~*(ulonglong *)(uVar5 + 0x10);
  *(ulonglong *)(uVar5 + 0x10) = *(ulonglong *)(uVar5 + 0x10) | unaff_retaddr;
  uVar3 = *(ulonglong *)(uVar5 + 0x10);
  *(undefined8 *)(uVar5 + 0x10) = 0;
  *(ulonglong *)(uVar5 + 0x10) = *(ulonglong *)(uVar5 + 0x10) ^ ~(uVar6 & uVar3);
  *(undefined8 *)(in_stack_00000028 + -8) = uVar4;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(ulonglong *)(in_stack_00000028 + -0x18) = ~param_1 | uVar2;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x28) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  puVar1 = (ulonglong *)(in_stack_00000028 + -8);
  uVar2 = *puVar1;
  *puVar1 = (ulonglong)(&LAB_165d2b3a8 + *puVar1);
  if (uVar2 < 0xfffffffe9a2d4c58) {
    thunk_FUN_15b0572f1(uStackX_18);
    return;
  }
  FUN_165d2b38e();
  return;
}



// FUNCTION 14dc906e2 FUN_14dc906e2 body=137 status=ok
// SIG undefined FUN_14dc906e2(void)

void FUN_14dc906e2(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  (*(code *)0x161db2e9f)
            (param_1,0x161db2e9f,
             (~(uVar1 | unaff_R15) | ~((unaff_R15 - ~(~uVar1 & ~unaff_R15)) + uVar1)) +
             (uVar1 | unaff_R15) + 1);
  return;
}



// FUNCTION 14dc9076d FUN_14dc9076d body=296 status=ok
// SIG undefined FUN_14dc9076d(void)

longlong FUN_14dc9076d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  FUN_15b618e9c(param_1,param_2,param_3,param_4);
  return *(longlong *)((in_RAX ^ unaff_RBP) - 0x28) + unaff_RBP;
}



// FUNCTION 14dc90cc4 FUN_14dc90cc4 body=146 status=ok
// SIG undefined FUN_14dc90cc4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc90d51) */
/* WARNING: Removing unreachable block (ram,0x00014dc90d57) */
/* WARNING: Removing unreachable block (ram,0x000160dcc770) */

void FUN_14dc90cc4(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_160dcc770(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) + param_1 + 1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  return;
}



// FUNCTION 14dc90d57 FUN_14dc90d57 body=11 status=ok
// SIG undefined FUN_14dc90d57(void)

void FUN_14dc90d57(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc90d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dc90e9b FUN_14dc90e9b body=151 status=ok
// SIG undefined FUN_14dc90e9b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc90f2c) */
/* WARNING: Removing unreachable block (ram,0x00014dc90f32) */

ulonglong FUN_14dc90e9b(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R15;
  longlong in_stack_00000008;
  ulonglong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RDI) = in_RAX;
  local_res18[0] = *(ulonglong *)(in_stack_00000008 + -0x98) ^ param_1;
  param_5 = param_5 ^ param_1;
  local_res18[1] = (local_res18[1] ^ param_1) & 0xfffffffffffffeff;
  *(undefined8 *)(param_5 - 8) = param_3;
  *(undefined8 *)(param_5 - 0x10) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x18) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x20) = unaff_R15;
  *(undefined8 *)(param_5 - 0x28) = unaff_RSI;
  *(undefined8 *)(param_5 - 0x30) = param_4;
  uVar2 = *(undefined8 *)(param_5 - 0x30);
  uVar3 = *(ulonglong *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined1 **)(param_5 - 0x20) = &LAB_1652e20fa;
  FUN_156717a16(local_res18[0],param_2,&LAB_156717a65,uVar2);
  *(undefined4 *)(param_5 - 0x14) = 0;
  *(undefined8 *)(param_5 - 0x18) = *(undefined8 *)(unaff_R13 + -0x38);
  uVar1 = *(ulonglong *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = 0x161015059;
  return uVar1 & uVar3;
}



// FUNCTION 14dc91047 FUN_14dc91047 body=136 status=ok
// SIG undefined FUN_14dc91047(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc91047(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  uVar2 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                   (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                   (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                   (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),
                   ((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 |
                    (ushort)(in_TF & 1) * 0x100 | 0x80 | (ushort)(in_AF & 1) * 0x10 | 0xfeff) +
                   0x101);
  FUN_15b840a9d(0xffffffffd7794067,FUN_15b840a9d);
  FUN_156df6c75();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar3 = uVar1 ^ 0xffffffffffffffff | uVar2;
  FUN_16695d9d8(uVar2,unaff_RBX + (unaff_RBP + 1) * -2,
                ~((0xffffffffffffffff - uVar3 | (~uVar2 + uVar1) - (~uVar2 & uVar1)) + uVar3 + 1));
  return;
}



// FUNCTION 14dc910cf FUN_14dc910cf body=289 status=ok
// SIG undefined FUN_14dc910cf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc910cf(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  FUN_156df6c75();
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar2 = uVar1 ^ 0xffffffffffffffff | in_stack_00000008;
  FUN_16695d9d8(in_stack_00000008,unaff_RBX + (unaff_RBP + 1) * -2,
                ~((0xffffffffffffffff - uVar2 |
                  (~in_stack_00000008 + uVar1) - (~in_stack_00000008 & uVar1)) + uVar2 + 1));
  return;
}



// FUNCTION 14dc913dd FUN_14dc913dd body=195 status=ok
// SIG undefined FUN_14dc913dd(void)

/* WARNING: Removing unreachable block (ram,0x000162dfbc98) */
/* WARNING: Removing unreachable block (ram,0x00015b5d92af) */
/* WARNING: Removing unreachable block (ram,0x000162dfbd1f) */
/* WARNING: Removing unreachable block (ram,0x000162dfbd25) */
/* WARNING: Removing unreachable block (ram,0x00014dc914b1) */
/* WARNING: Removing unreachable block (ram,0x00014dc914a2) */
/* WARNING: Removing unreachable block (ram,0x00014dc91529) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc913dd(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc914a2 FUN_14dc914a2 body=173 status=ok
// SIG undefined FUN_14dc914a2(void)

longlong FUN_14dc914a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  longlong lVar1;
  longlong in_R11;
  bool in_ZF;
  ushort local_res8;
  
  if (!in_ZF) {
    param_4 = (ushort *)((ulonglong)param_4 & 0x7fffffffffffffff);
    local_res8 = local_res8 ^ 0x8b8b;
  }
  *param_4 = local_res8;
  lVar1 = FUN_164b94af5(param_1,param_2,thunk_FUN_1569d2db0);
  return lVar1 + in_R11;
}



// FUNCTION 14dc919a5 FUN_14dc919a5 body=404 status=ok
// SIG undefined FUN_14dc919a5(void)

/* WARNING: Removing unreachable block (ram,0x0001575bba06) */
/* WARNING: Removing unreachable block (ram,0x00014dc91a34) */
/* WARNING: Removing unreachable block (ram,0x0001575bb9e1) */

void FUN_14dc919a5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  longlong in_R10;
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
  byte bVar17;
  ulonglong uVar18;
  undefined8 local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  ulonglong local_res18;
  
  plVar1 = (longlong *)
           ~((param_1 - (local_res18 | param_1)) + local_res18 | ~(local_res18 | param_1));
  bVar13 = (local_res10 & 0x4000) != 0;
  bVar12 = (local_res10 & 0x800) != 0;
  bVar11 = (local_res10 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (local_res10 & 0x80) != 0;
  bVar8 = (local_res10 & 0x40) != 0;
  bVar7 = (local_res10 & 0x10) != 0;
  bVar6 = (local_res10 & 4) != 0;
  bVar5 = (local_res10 & 1) != 0;
  bVar17 = (uStackX_12 & 0x20) != 0;
  bVar14 = (uStackX_12 & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)(local_res8,param_2,param_3);
  *plVar1 = in_R10;
  plVar1[-1] = in_R10;
  plVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  plVar1[-3] = uVar4;
  *(undefined4 *)(plVar1 + -3) = 0x5d31bf1d;
  *(undefined4 *)((longlong)plVar1 + -0x14) = 0;
  uVar3 = plVar1[-3];
  uVar18 = plVar1[-2];
  plVar1[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  plVar1[-3] = uVar3 ^ 0x52cf1769;
  plVar1[-3] = plVar1[-3] + -0xf30d258;
  uVar18 = plVar1[-2];
  plVar1[-2] = unaff_RBP;
  plVar1[-3] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  plVar1[-4] = 0xffffffffb7716898;
  plVar1[-4] = plVar1[-4] + 0x488e9770;
  *plVar1 = (uVar3 ^ 0x52cf1769) - 0xf30d258;
  plVar1[-1] = local_res8;
  plVar1[-2] = local_res8;
  plVar1[-1] = (longlong)FUN_165c7153c;
  return;
}



// FUNCTION 14dc91a34 FUN_14dc91a34 body=14 status=ok
// SIG undefined FUN_14dc91a34(void)

void FUN_14dc91a34(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dc91ac2 FUN_14dc91ac2 body=192 status=ok
// SIG undefined FUN_14dc91ac2(void)

void FUN_14dc91ac2(void)

{
  return;
}



// FUNCTION 14dc91c1f FUN_14dc91c1f body=163 status=ok
// SIG undefined FUN_14dc91c1f(void)

void FUN_14dc91c1f(void)

{
  FUN_161380593();
  return;
}



// FUNCTION 14dc920bd FUN_14dc920bd body=158 status=ok
// SIG undefined FUN_14dc920bd(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9215b) */

void FUN_14dc920bd(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) + param_1;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) & param_1;
  if (uVar2 < uVar1 * 2) {
    FUN_1650b75da();
    return;
  }
  FUN_16626c607(param_1,uVar2 + uVar1 * -2,param_3,param_4);
  return;
}



// FUNCTION 14dc9215b FUN_14dc9215b body=179 status=ok
// SIG undefined FUN_14dc9215b(void)

void FUN_14dc9215b(void)

{
  return;
}



// FUNCTION 14dc92292 FUN_14dc92292 body=147 status=ok
// SIG undefined FUN_14dc92292(void)

/* WARNING: Removing unreachable block (ram,0x00014dc92326) */
/* WARNING: Removing unreachable block (ram,0x00014dc923ee) */
/* WARNING: Removing unreachable block (ram,0x00014dc923ef) */
/* WARNING: Removing unreachable block (ram,0x00014dc923fa) */
/* WARNING: Removing unreachable block (ram,0x00014dc92403) */

undefined8 FUN_14dc92292(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined1 local_6b5f [27463];
  
  if ((undefined1 *)0xffffffffffff9480 < local_6b5f) {
    uVar1 = FUN_165ddbd29();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc92326 FUN_14dc92326 body=229 status=ok
// SIG undefined FUN_14dc92326(void)

/* WARNING: Removing unreachable block (ram,0x00014dc923ee) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc92326(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res10;
  
  (*(code *)0x16137ea92)(local_res10 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc92410 FUN_14dc92410 body=403 status=ok
// SIG undefined FUN_14dc92410(void)

/* WARNING: Removing unreachable block (ram,0x00014dc924c5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc92410(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 in_stack_00000010;
  longlong in_stack_00000030;
  
  *(undefined8 *)(in_stack_00000030 + -8) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_RSI;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RSI;
  *(undefined8 *)(in_stack_00000030 + -0x20) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 + -0x20) = in_R10;
  *(undefined8 *)(in_stack_00000030 + -0x28) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -0x30) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -0x30) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 + -0x38) = unaff_R12;
  *(undefined1 **)(in_stack_00000030 + -0x30) = &LAB_160b82abf;
  FUN_1651c4307(param_1,param_2,&LAB_1651c4385);
  return;
}



// FUNCTION 14dc926a7 FUN_14dc926a7 body=297 status=ok
// SIG undefined FUN_14dc926a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc92745) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc926a7(ulonglong param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 in_R11;
  bool bVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar3 = local_res18 ^ param_1;
  param_1 = local_res20 ^ param_1;
  local_res18._0_2_ = (ushort)uVar3;
  uVar1 = (~(ushort)local_res18 & 0x100 | (ushort)local_res18) - 0x100;
  bVar2 = (uVar1 & 1) != 0;
  *(undefined8 *)(param_1 - 8) = in_R11;
  *(undefined8 *)(param_1 - 0x10) = in_R11;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)bVar2 |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  if (bVar2) {
    uVar3 = *(ulonglong *)(param_1 - 0x18);
    *(ulonglong *)(param_1 - 0x18) =
         (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
         (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_1 - 0x20) = param_2;
    uVar3 = *(ulonglong *)(param_1 - 0x18);
    *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(param_1 - 0x20);
    *(ulonglong *)(param_1 - 0x20) =
         (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
         (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(param_1 - 8) = 0x18e16a2;
    FUN_165c7153c(local_res10,*(undefined8 *)(param_1 - 0x18));
    return;
  }
  FUN_160cbeef9();
  return;
}



// FUNCTION 14dc927d1 FUN_14dc927d1 body=298 status=ok
// SIG undefined FUN_14dc927d1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc928b0) */
/* WARNING: Removing unreachable block (ram,0x0001614db677) */
/* WARNING: Removing unreachable block (ram,0x00014dc92852) */

void FUN_14dc927d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  longlong *plVar4;
  ushort uVar5;
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
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000018;
  ulonglong local_res20;
  
  uVar19 = ~((~in_RAX | in_stack_00000018) + in_RAX + 1) & (in_stack_00000018 | in_RAX);
  plVar4 = (longlong *)(local_res20 + in_RAX + (local_res20 & in_RAX) * -2);
  uVar5 = ((ushort)uVar19 | 0x100) - 0x100;
  bVar14 = (uVar5 & 0x4000) != 0;
  bVar13 = (uVar5 & 0x800) != 0;
  bVar12 = (uVar5 & 0x200) != 0;
  bVar11 = (uVar5 & 0x100) != 0;
  bVar10 = (uVar5 & 0x80) != 0;
  bVar9 = (uVar5 & 0x40) != 0;
  bVar8 = (uVar5 & 0x10) != 0;
  bVar7 = (uVar5 & 4) != 0;
  bVar6 = (uVar5 & 1) != 0;
  bVar18 = (uVar19 & 0x200000) != 0;
  bVar15 = (uVar19 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)(unaff_retaddr,param_2,param_3);
  *plVar4 = unaff_RBX;
  plVar4[-1] = unaff_RBX;
  plVar4[-2] = uVar3;
  *(undefined4 *)(plVar4 + -2) = 0xc7853c5;
  plVar4[-3] = unaff_RDI;
  plVar4[-4] = (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
               (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar12 & 1) * 0x200 |
               (ulonglong)(bVar11 & 1) * 0x100 | (ulonglong)(bVar10 & 1) * 0x80 |
               (ulonglong)(bVar9 & 1) * 0x40 | (ulonglong)(bVar8 & 1) * 0x10 |
               (ulonglong)(bVar7 & 1) * 4 | (ulonglong)(bVar6 & 1) |
               (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
               (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  *(undefined4 *)((longlong)plVar4 + -0xc) = 0;
  uVar19 = plVar4[-4];
  lVar2 = plVar4[-2];
  plVar4[-2] = (ulonglong)((uVar19 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar19 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar19 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar19 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar19 & 0x100) != 0) * 0x100 | (ulonglong)((uVar19 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar19 & 0x40) != 0) * 0x40 | (ulonglong)((uVar19 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar19 & 4) != 0) * 4 | (ulonglong)((uVar19 & 1) != 0) |
               (ulonglong)((uVar19 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar19 & 0x40000) != 0) * 0x40000;
  plVar4[-2] = param_2;
  *plVar4 = lVar2 + -0xb2ab793;
  plVar4[-1] = param_4;
  plVar4[-2] = param_4;
  plVar4[-1] = (longlong)FUN_14d85d504;
  return;
}



// FUNCTION 14dc92d94 FUN_14dc92d94 body=64 status=ok
// SIG undefined FUN_14dc92d94(void)

void FUN_14dc92d94(void)

{
  return;
}



// FUNCTION 14dc92e28 FUN_14dc92e28 body=158 status=ok
// SIG undefined FUN_14dc92e28(void)

void FUN_14dc92e28(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  FUN_160dd37bd(0xffffffffffffff70,
                ~((~(~unaff_R15 & uVar1) + uVar1) - unaff_R15 & (~uVar1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14dc92f4a FUN_14dc92f4a body=661 status=ok
// SIG undefined FUN_14dc92f4a(void)

/* WARNING: Removing unreachable block (ram,0x000156ced9e1) */
/* WARNING: Removing unreachable block (ram,0x000156ced9e7) */
/* WARNING: Removing unreachable block (ram,0x000156ced9ec) */
/* WARNING: Removing unreachable block (ram,0x000156ced9f3) */
/* WARNING: Removing unreachable block (ram,0x000156ceda60) */
/* WARNING: Removing unreachable block (ram,0x000156ced9f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc9303d) */
/* WARNING: Removing unreachable block (ram,0x000156ced965) */
/* WARNING: Removing unreachable block (ram,0x00015b8d8adc) */
/* WARNING: Removing unreachable block (ram,0x000156ceda65) */
/* WARNING: Removing unreachable block (ram,0x00014dc92fca) */

undefined8 FUN_14dc92f4a(void)

{
  undefined8 uVar1;
  ulonglong in_stack_00000008;
  undefined8 local_res18;
  
  if ((in_stack_00000008 & 0x40) == 0) {
    uVar1 = FUN_1575679f0();
    return uVar1;
  }
  if ((local_res18 & 0x80) != 0) {
    uVar1 = FUN_162e4da64();
    return uVar1;
  }
  uVar1 = FUN_162e4da64();
  return uVar1;
}



// FUNCTION 14dc9307f FUN_14dc9307f body=132 status=ok
// SIG undefined FUN_14dc9307f(void)

void FUN_14dc9307f(void)

{
  longlong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong local_res10 [3];
  
  uVar1 = *(ulonglong *)((longlong)local_res10 + in_RAX) | unaff_R15;
  local_res10[1] = (uVar1 - (~(local_res10[1] & unaff_R15) | uVar1)) + ~(local_res10[1] & unaff_R15)
  ;
  (*(code *)0x16294df36)();
  return;
}



// FUNCTION 14dc931a7 FUN_14dc931a7 body=295 status=ok
// SIG undefined FUN_14dc931a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc93236) */
/* WARNING: Removing unreachable block (ram,0x00014dc9323c) */
/* WARNING: Removing unreachable block (ram,0x00015b697683) */
/* WARNING: Removing unreachable block (ram,0x00014dc9333c) */
/* WARNING: Removing unreachable block (ram,0x00014dc93342) */
/* WARNING: Removing unreachable block (ram,0x00014dc93347) */

void FUN_14dc931a7(ulonglong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  
  FUN_165cb3104(FUN_165cb3104,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                (param_3 - param_1) + (param_4 | param_1) * 2 + param_4 * -2);
  return;
}



// FUNCTION 14dc9323c FUN_14dc9323c body=429 status=ok
// SIG undefined FUN_14dc9323c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc93347) */

void FUN_14dc9323c(longlong param_1)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  ulonglong uStack_60;
  ulonglong uStack_40;
  ulonglong uStack_30;
  
  uVar1 = *(ulonglong *)(param_1 + -0xa0);
  uVar1 = ~((~(~unaff_RBX & uVar1) + uVar1) - unaff_RBX & (~uVar1 | unaff_RBX));
  FUN_165dfd604();
  if (-1 < (longlong)(~(uVar1 & ~uStack_30) & (0xffffffffffffffff - uStack_30 | uVar1))) {
    FUN_15b697683();
    return;
  }
  FUN_165fd55ff();
  FUN_161a32751(&DAT_ac91427a73ca2b2b,uStack_60 | 0xac91427a73ca2b2b);
  FUN_1628d7782(&DAT_ac91427a73ca2b2b,
                &DAT_ac91427a73ca2b2b + (uStack_40 & 0xac91427a73ca2b2b) * -2 + uStack_40);
  return;
}



// FUNCTION 14dc933ef FUN_14dc933ef body=156 status=ok
// SIG undefined FUN_14dc933ef(void)

void FUN_14dc933ef(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  FUN_162450f28(~((~unaff_R15 | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1),
                ~*(ulonglong *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dc93516 FUN_14dc93516 body=283 status=ok
// SIG undefined FUN_14dc93516(void)

/* WARNING: Removing unreachable block (ram,0x00014dc9359a) */
/* WARNING: Removing unreachable block (ram,0x00014dc935a0) */
/* WARNING: Removing unreachable block (ram,0x000166a08bf8) */

void FUN_14dc93516(ulonglong param_1,undefined8 param_2)

{
  ulonglong unaff_RSI;
  
  if (-1 < (longlong)(unaff_RSI & param_1)) {
    FUN_160d2c6fc();
    return;
  }
  if ((longlong)(unaff_RSI & param_1) < 1) {
    FUN_160d2c6fc();
    return;
  }
  FUN_1574ba9da(&LAB_160d2c6ff,param_2);
  return;
}



// FUNCTION 14dc9377d FUN_14dc9377d body=164 status=ok
// SIG undefined FUN_14dc9377d(void)

void FUN_14dc9377d(void)

{
  return;
}



// FUNCTION 14dc93821 FUN_14dc93821 body=202 status=ok
// SIG undefined FUN_14dc93821(void)

/* WARNING: Removing unreachable block (ram,0x0001620b89df) */

void FUN_14dc93821(void)

{
  int unaff_ESI;
  
  if (unaff_ESI < 0) {
    return;
  }
  return;
}



// FUNCTION 14dc938d8 FUN_14dc938d8 body=328 status=ok
// SIG undefined FUN_14dc938d8(void)

void FUN_14dc938d8(void)

{
  undefined8 in_stack_00000008;
  
  FUN_160fdb841(0xffffffffb1f3e6cf,in_stack_00000008);
  FUN_14dee3323();
  return;
}



// FUNCTION 14dc93a23 FUN_14dc93a23 body=330 status=ok
// SIG undefined FUN_14dc93a23(void)

void FUN_14dc93a23(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_161ba117c(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14dc93cc8 FUN_14dc93cc8 body=177 status=ok
// SIG undefined FUN_14dc93cc8(void)

void FUN_14dc93cc8(void)

{
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x28) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x28);
  FUN_1655f1991(unaff_retaddr);
  return;
}



// FUNCTION 14dc93e0d FUN_14dc93e0d body=145 status=ok
// SIG undefined FUN_14dc93e0d(void)

void FUN_14dc93e0d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166903114(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dc93ea1 FUN_14dc93ea1 body=403 status=ok
// SIG undefined FUN_14dc93ea1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000164a92033) */
/* WARNING: Removing unreachable block (ram,0x000162dbc14d) */
/* WARNING: Removing unreachable block (ram,0x000162dbc153) */
/* WARNING: Removing unreachable block (ram,0x000162dbc158) */
/* WARNING: Removing unreachable block (ram,0x0001658cde1a) */
/* WARNING: Removing unreachable block (ram,0x0001658cde2b) */
/* WARNING: Removing unreachable block (ram,0x0001658cdec1) */
/* WARNING: Removing unreachable block (ram,0x0001658cdecc) */
/* WARNING: Removing unreachable block (ram,0x0001620d6b8f) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf5e6) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf5f1) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf5fa) */
/* WARNING: Removing unreachable block (ram,0x00461e3a) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf5e4) */
/* WARNING: Removing unreachable block (ram,0x0001658cded2) */
/* WARNING: Removing unreachable block (ram,0x0001658cdf09) */
/* WARNING: Removing unreachable block (ram,0x0001658cdf0d) */
/* WARNING: Removing unreachable block (ram,0x0001658cdf67) */
/* WARNING: Removing unreachable block (ram,0x0001658cdf6d) */
/* WARNING: Removing unreachable block (ram,0x000164a91f91) */
/* WARNING: Removing unreachable block (ram,0x000164a9202d) */
/* WARNING: Removing unreachable block (ram,0x000162dbc0c1) */
/* WARNING: Removing unreachable block (ram,0x000166125123) */
/* WARNING: Removing unreachable block (ram,0x0001661251b4) */
/* WARNING: Removing unreachable block (ram,0x0001661251b9) */
/* WARNING: Removing unreachable block (ram,0x0001661251bf) */
/* WARNING: Removing unreachable block (ram,0x0001578722b6) */
/* WARNING: Removing unreachable block (ram,0x0001653ba922) */
/* WARNING: Removing unreachable block (ram,0x0001653ba928) */
/* WARNING: Removing unreachable block (ram,0x0001658cdd7c) */
/* WARNING: Removing unreachable block (ram,0x0001658cde15) */
/* WARNING: Removing unreachable block (ram,0x0001658cde20) */
/* WARNING: Removing unreachable block (ram,0x0001653ba876) */
/* WARNING: Removing unreachable block (ram,0x00014dc93fff) */

longlong FUN_14dc93ea1(ulonglong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  byte unaff_BL;
  longlong unaff_retaddr;
  undefined2 uStackX_e;
  undefined8 local_res10;
  short in_stack_00000048;
  
  uVar1 = *(ulonglong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | in_RAX;
  uVar2 = *(ulonglong *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(longlong *)(param_2 + 8) =
       *(longlong *)(param_2 + 8) - ~((~(param_1 & uVar1) + lVar3) - (-1 - param_1) & uVar2);
  *(longlong *)(param_2 + 8) = -*(longlong *)(param_2 + 8);
  FUN_162589ae3();
  if (param_3 != 0x48cdcee7) {
    lVar3 = FUN_164accd7a();
    return lVar3;
  }
  uStackX_e = (ushort)unaff_BL;
  if ((ushort)(uStackX_e + in_stack_00000048) != 0) {
    if (local_res10 == 0) {
      lVar3 = FUN_1568912b0(0,*(longlong *)(unaff_retaddr + -0x50) + local_res10);
      return lVar3;
    }
    return local_res10;
  }
  lVar3 = thunk_FUN_1653ba7fd();
  return lVar3;
}



// FUNCTION 14dc9408c FUN_14dc9408c body=137 status=ok
// SIG undefined FUN_14dc9408c(void)

void FUN_14dc9408c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164b21812(param_1,param_2,param_3);
  FUN_14dc94116();
  return;
}



// FUNCTION 14dc94116 FUN_14dc94116 body=458 status=ok
// SIG undefined FUN_14dc94116(void)

/* WARNING: Removing unreachable block (ram,0x00014dc94212) */
/* WARNING: Removing unreachable block (ram,0x00014dc94218) */
/* WARNING: Removing unreachable block (ram,0x00014dc9419b) */

void FUN_14dc94116(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  ulonglong uVar3;
  ushort local_res8;
  undefined6 uStackX_a;
  longlong local_res10;
  
  uVar3 = CONCAT62(uStackX_a,~local_res8) ^ 0xffff;
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0xf7188;
  uVar3 = *(ulonglong *)(local_res10 + -0x20);
  *(ulonglong *)(local_res10 + -0x21f0) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x21f8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x2200) = param_1;
  puVar1 = (ushort *)(local_res10 + -0x21f0);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(local_res10 + -0x2208) = *(undefined8 *)(local_res10 + -0x18);
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar2 & 0x100) + 0x100) - *puVar1;
  FUN_16133aa9b(puVar1,param_2,*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14dc9431d FUN_14dc9431d body=393 status=ok
// SIG undefined FUN_14dc9431d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc943b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc943bc) */

void FUN_14dc9431d(undefined1 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  short unaff_BX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res20;
  
  *param_2 = (-0x101 - unaff_BX) + *param_2;
  *(undefined8 *)(local_res20 + -8) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(ulonglong *)(local_res20 + -0x18) = CONCAT71(in_register_00000001,in_AL);
  *(undefined4 *)(local_res20 + -0x18) = 0x49dcdbbf;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  uVar3 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(undefined **)(local_res20 + -8) =
       &DAT_1622d89d2 + ~(~(uVar2 & 0xffffffffb6235f62) & (uVar2 | 0xffffffffb6235f62));
  uVar4 = *(undefined8 *)(local_res20 + -0x18);
  uVar1 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = uVar1;
  *(undefined8 *)(local_res20 + -0x18) = uVar1;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  *(undefined8 *)(local_res20 + -0x28) = uVar3;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7bcc01;
  (*(code *)0x1622e04de)(param_1,local_res8,*(undefined8 *)(local_res20 + -0x20),uVar4);
  return;
}



// FUNCTION 14dc9442f FUN_14dc9442f body=124 status=ok
// SIG undefined FUN_14dc9442f(void)

void FUN_14dc9442f(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1575575de(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc944ad FUN_14dc944ad body=357 status=ok
// SIG undefined FUN_14dc944ad(void)

void FUN_14dc944ad(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    FUN_16619b1f8();
    return;
  }
  FUN_16619b1f2(unaff_retaddr,local_res18,param_3);
  return;
}


