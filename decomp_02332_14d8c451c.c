// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d8c451c FUN_14d8c451c body=157 status=ok
// SIG undefined FUN_14d8c451c(void)

void FUN_14d8c451c(void)

{
  FUN_166a6ae38(FUN_166a6ae38);
  return;
}



// FUNCTION 14d8c45b9 FUN_14d8c45b9 body=316 status=ok
// SIG undefined FUN_14d8c45b9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c4665) */

void FUN_14d8c45b9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1626d2a6c(param_1,param_2,param_3,param_4,(*(ulonglong *)(unaff_R13 + -0x70) & unaff_R15) << 1
               );
  FUN_1619d2836();
  return;
}



// FUNCTION 14d8c485e FUN_14d8c485e body=59 status=ok
// SIG undefined FUN_14d8c485e(void)

void FUN_14d8c485e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x166b6557d)(0x166b6557d,param_2,param_3);
  return;
}



// FUNCTION 14d8c4909 FUN_14d8c4909 body=138 status=ok
// SIG undefined FUN_14d8c4909(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c498e) */
/* WARNING: Removing unreachable block (ram,0x00014d8c4994) */

undefined8 FUN_14d8c4909(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong lVar1;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R15;
  ulonglong in_stack_00000028;
  
  lVar1 = in_stack_00000028 + unaff_RBP + (in_stack_00000028 & unaff_RBP) * -2;
  *(undefined8 *)(lVar1 + -8) = param_1;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = in_R11;
  *(undefined1 **)(lVar1 + -0x20) = &LAB_14de3aeb2;
  *(undefined8 *)(lVar1 + -0x28) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x30) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x38) = unaff_R15;
  *(code **)(lVar1 + -0x28) = FUN_1616945b9;
  *(undefined **)(lVar1 + -0x30) = &DAT_14de3ae65;
  return in_RAX;
}



// FUNCTION 14d8c4994 FUN_14d8c4994 body=147 status=ok
// SIG undefined FUN_14d8c4994(void)

void FUN_14d8c4994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16481cabf(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8c4aa7 FUN_14d8c4aa7 body=325 status=ok
// SIG undefined FUN_14d8c4aa7(void)

undefined8 FUN_14d8c4aa7(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  longlong unaff_R14;
  undefined8 local_res10;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d8c4b50;
  uVar1 = FUN_165036db8(param_1,local_res10);
  *(longlong *)(local_res20 + -8) = param_3 - unaff_R14;
  *(undefined8 *)(local_res20 + -8) = uVar1;
  *(undefined4 *)(local_res20 + -8) = 0x80803054;
  *(undefined4 *)(local_res20 + -4) = 0xffffffff;
  *(undefined8 *)(local_res20 + -8) = uVar1;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  uVar1 = *(undefined8 *)(local_res20 + -8);
  uVar2 = ~*(ulonglong *)(unaff_RDI + -0x40) | param_1;
  *(ulonglong *)(local_res20 + -8) =
       (~uVar2 | ~param_1 | *(ulonglong *)(unaff_RDI + -0x40)) + uVar2 + 1 ^ 0xffffffffffffffff;
  *(undefined1 **)(local_res20 + -8) = &LAB_162ac6dd5;
  return uVar1;
}



// FUNCTION 14d8c4bee FUN_14d8c4bee body=59 status=ok
// SIG undefined FUN_14d8c4bee(void)

void FUN_14d8c4bee(void)

{
  return;
}



// FUNCTION 14d8c4c9d FUN_14d8c4c9d body=129 status=ok
// SIG undefined FUN_14d8c4c9d(void)

void FUN_14d8c4c9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  
  uVar1 = ~((~unaff_R15 | param_5) & (~param_5 | unaff_R15));
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined1 **)(uVar1 - 8) = &LAB_14d8c4d32;
  FUN_14d7a4ef9(*(undefined8 *)(uVar1 - 0x10),param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14d8c4de3 FUN_14d8c4de3 body=148 status=ok
// SIG undefined FUN_14d8c4de3(void)

void FUN_14d8c4de3(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15b47a20e(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~param_1 & (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff) |
                         param_1)));
  return;
}



// FUNCTION 14d8c4e79 FUN_14d8c4e79 body=336 status=ok
// SIG undefined FUN_14d8c4e79(void)

void FUN_14d8c4e79(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_R12;
  
  puVar1 = (ulonglong *)(&stack0xffffffffffa4b103 + unaff_RBX);
  *puVar1 = *(ulonglong *)(unaff_R12 + -0x28);
  *puVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar2 = *puVar1;
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  (*(code *)0x165ad1fa7)
            (uVar2 ^ in_RAX,~in_RAX & ~-(*puVar1 - *(longlong *)(unaff_R12 + -0x78)) | in_RAX);
  return;
}



// FUNCTION 14d8c4fd3 FUN_14d8c4fd3 body=152 status=ok
// SIG undefined FUN_14d8c4fd3(void)

void FUN_14d8c4fd3(void)

{
  return;
}



// FUNCTION 14d8c5074 FUN_14d8c5074 body=140 status=ok
// SIG undefined FUN_14d8c5074(void)

void FUN_14d8c5074(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  undefined4 uStack_c;
  
  FUN_15750a109((ulonglong)uStack_c << 0x20,param_2,0x65602203,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14d8c52b6 FUN_14d8c52b6 body=171 status=ok
// SIG undefined FUN_14d8c52b6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c5328) */
/* WARNING: Removing unreachable block (ram,0x00014d8c532e) */

void FUN_14d8c52b6(void)

{
  return;
}



// FUNCTION 14d8c5580 FUN_14d8c5580 body=313 status=ok
// SIG undefined FUN_14d8c5580(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c55fb) */
/* WARNING: Removing unreachable block (ram,0x00014d8c55de) */
/* WARNING: Removing unreachable block (ram,0x00014d8c56bb) */

void FUN_14d8c5580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_R12;
  ulonglong local_res8;
  char in_stack_00000020;
  
  uVar4 = *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX;
  uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 - in_stack_00000020);
  pcVar2 = FUN_165c6fda3;
  uVar1 = FUN_165c6fda3();
  *(undefined8 *)
   (&stack0x00000020 + uVar1 + (local_res8 ^ 0x60820247) + (uVar1 & (local_res8 ^ 0x60820247)) * -2)
       = uVar3;
  FUN_160f5a24b(pcVar2,&stack0x00000018,
                (~(~param_5 & ~(ulonglong)pcVar2) + ~(ulonglong)pcVar2) - param_5,uVar4);
  return;
}



// FUNCTION 14d8c56bb FUN_14d8c56bb body=132 status=ok
// SIG undefined FUN_14d8c56bb(void)

void FUN_14d8c56bb(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  *(ulonglong *)(&stack0x00000000 + unaff_RSI) = in_RAX;
  *(undefined4 *)(&stack0x00000000 + unaff_RSI) = 0xf71f984c;
  *(undefined4 *)(&stack0x00000004 + unaff_RSI) = 0xffffffff;
  uVar3 = *(ulonglong *)(&stack0x00000000 + unaff_RSI);
  uVar1 = *(ulonglong *)(unaff_R12 + (uVar3 ^ 0x8e0679c));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x80);
  *(ulonglong *)(&stack0x00000000 + unaff_RSI) = in_RAX;
  uVar4 = *(ulonglong *)(&stack0x00000000 + unaff_RSI);
  *(undefined8 *)(&stack0x00000000 + unaff_RSI) = param_1;
  FUN_16665c4fa(0x75,uVar3 ^ 0x8e0679c,uVar2 & uVar4,
                ~((0xffffffffffffffff - in_RAX | uVar1) & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14d8c5ab9 FUN_14d8c5ab9 body=114 status=ok
// SIG undefined FUN_14d8c5ab9(void)

void FUN_14d8c5ab9(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165b03fa8(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8c5ce0 FUN_14d8c5ce0 body=159 status=ok
// SIG undefined FUN_14d8c5ce0(void)

ulonglong FUN_14d8c5ce0(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) ^ unaff_R15;
}



// FUNCTION 14d8c5d7f FUN_14d8c5d7f body=147 status=ok
// SIG undefined FUN_14d8c5d7f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c5dee) */

longlong FUN_14d8c5d7f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14d8c5eb0 FUN_14d8c5eb0 body=175 status=ok
// SIG undefined FUN_14d8c5eb0(void)

void FUN_14d8c5eb0(void)

{
  return;
}



// FUNCTION 14d8c607d FUN_14d8c607d body=149 status=ok
// SIG undefined FUN_14d8c607d(void)

void FUN_14d8c607d(void)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8 [4];
  
  lVar1 = unaff_R13 - unaff_RDI;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 0x18) = local_res8[0];
  *(undefined8 *)((longlong)local_res8 + lVar1 + 0x10) = unaff_R15;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 0x10) = in_R10;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 0x18) = unaff_R14;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 0x10) = unaff_RBP;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 8) = unaff_RBP;
  *(undefined8 *)((longlong)local_res8 + lVar1) = unaff_RBP;
  *(code **)((longlong)local_res8 + lVar1 + 0x10) = FUN_14d8c611a;
  *(undefined8 *)((longlong)local_res8 + lVar1 + 8) = 0x165b7eee6;
  return;
}



// FUNCTION 14d8c611a FUN_14d8c611a body=415 status=ok
// SIG undefined FUN_14d8c611a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c6222) */

undefined8 FUN_14d8c611a(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  pcVar3 = FUN_14ddf745d;
  FUN_14ddf745d();
  uVar2 = FUN_166035c6b(pcVar3,~(*(ulonglong *)(unaff_RDI + -0x28) & (ulonglong)pcVar3),
                        (~*(ulonglong *)(unaff_RDI + -0x70) | ~(ulonglong)pcVar3) &
                        (*(ulonglong *)(unaff_RDI + -0x70) | (ulonglong)pcVar3),
                        -1 - ((uVar1 ^ param_1) &
                             (ulonglong)(pcVar3 + (~(param_4 & (ulonglong)pcVar3) - ~param_4))));
  return uVar2;
}



// FUNCTION 14d8c62be FUN_14d8c62be body=177 status=ok
// SIG undefined FUN_14d8c62be(void)

void FUN_14d8c62be(void)

{
  return;
}



// FUNCTION 14d8c64ae thunk_FUN_14d8c64b4 body=5 status=ok
// SIG undefined thunk_FUN_14d8c64b4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c65ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8c65b3) */
/* WARNING: Removing unreachable block (ram,0x0001653c9e5f) */
/* WARNING: Removing unreachable block (ram,0x0001653c9ef7) */
/* WARNING: Removing unreachable block (ram,0x0001653c9efc) */
/* WARNING: Removing unreachable block (ram,0x0001653c9f02) */
/* WARNING: Removing unreachable block (ram,0x0001663f9b74) */
/* WARNING: Removing unreachable block (ram,0x0001653c9f07) */
/* WARNING: Removing unreachable block (ram,0x00014d8c6528) */
/* WARNING: Removing unreachable block (ram,0x000157598df7) */
/* WARNING: Removing unreachable block (ram,0x000157598dfc) */
/* WARNING: Removing unreachable block (ram,0x000157598e02) */
/* WARNING: Removing unreachable block (ram,0x000157598e07) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d8c64b4(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong uVar2;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if ((0xffffffffffffffff - ~unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x50)) == 0xffffffffffffffff)
  {
    FUN_1653c9dbf();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70);
  if (-1 < *(longlong *)(unaff_R13 + -0x98)) {
    uVar2 = (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
    if ((longlong)(uVar1 & unaff_R15) < 0) {
      uVar1 = ~(uVar2 & uVar1 & unaff_R15 | ~uVar2);
      *(undefined8 *)(uVar1 - 8) = param_1;
      *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
      *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
      *(ulonglong *)(uVar1 - 0x20) = unaff_RDI ^ unaff_R15;
      *(undefined8 *)(uVar1 - 0x28) = unaff_retaddr;
      *(undefined8 *)(uVar1 - 0x30) = unaff_R12;
      *(undefined8 *)(uVar1 - 0x38) = unaff_R12;
      *(code **)(uVar1 - 0x30) = FUN_15b86ea96;
      FUN_160e7e718(&DAT_160e7e780);
      return;
    }
    FUN_15b86e9f3();
    return;
  }
  FUN_1663f9adf();
  return;
}



// FUNCTION 14d8c64b4 FUN_14d8c64b4 body=772 status=ok
// SIG undefined FUN_14d8c64b4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c65ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8c65b3) */
/* WARNING: Removing unreachable block (ram,0x0001653c9e5f) */
/* WARNING: Removing unreachable block (ram,0x0001653c9ef7) */
/* WARNING: Removing unreachable block (ram,0x0001653c9efc) */
/* WARNING: Removing unreachable block (ram,0x0001653c9f02) */
/* WARNING: Removing unreachable block (ram,0x0001663f9b74) */
/* WARNING: Removing unreachable block (ram,0x0001653c9f07) */
/* WARNING: Removing unreachable block (ram,0x00014d8c6528) */
/* WARNING: Removing unreachable block (ram,0x000157598df7) */
/* WARNING: Removing unreachable block (ram,0x000157598dfc) */
/* WARNING: Removing unreachable block (ram,0x000157598e02) */
/* WARNING: Removing unreachable block (ram,0x000157598e07) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8c64b4(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong uVar2;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  if ((0xffffffffffffffff - ~unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x50)) == 0xffffffffffffffff)
  {
    FUN_1653c9dbf();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70);
  if (-1 < *(longlong *)(unaff_R13 + -0x98)) {
    uVar2 = (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
    if ((longlong)(uVar1 & unaff_R15) < 0) {
      uVar1 = ~(uVar2 & uVar1 & unaff_R15 | ~uVar2);
      *(undefined8 *)(uVar1 - 8) = param_1;
      *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
      *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
      *(ulonglong *)(uVar1 - 0x20) = unaff_RDI ^ unaff_R15;
      *(undefined8 *)(uVar1 - 0x28) = unaff_retaddr;
      *(undefined8 *)(uVar1 - 0x30) = unaff_R12;
      *(undefined8 *)(uVar1 - 0x38) = unaff_R12;
      *(code **)(uVar1 - 0x30) = FUN_15b86ea96;
      FUN_160e7e718(&DAT_160e7e780);
      return;
    }
    FUN_15b86e9f3();
    return;
  }
  FUN_1663f9adf();
  return;
}



// FUNCTION 14d8c66df FUN_14d8c66df body=318 status=ok
// SIG undefined FUN_14d8c66df(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c676b) */
/* WARNING: Removing unreachable block (ram,0x00014d8c6776) */
/* WARNING: Removing unreachable block (ram,0x00014d8c6771) */

void FUN_14d8c66df(void)

{
  FUN_15ba1e48b();
  return;
}



// FUNCTION 14d8c6821 FUN_14d8c6821 body=137 status=ok
// SIG undefined FUN_14d8c6821(void)

undefined1 * FUN_14d8c6821(void)

{
  undefined1 local_8 [8];
  
  return local_8;
}



// FUNCTION 14d8c69e4 FUN_14d8c69e4 body=16 status=ok
// SIG undefined FUN_14d8c69e4(void)

void FUN_14d8c69e4(HANDLE param_1,DWORD param_2,SIZE_T param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8c69ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8c6b19 FUN_14d8c6b19 body=324 status=ok
// SIG undefined FUN_14d8c6b19(void)

longlong FUN_14d8c6b19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = FUN_156996861(param_1,param_2,param_3);
  return uVar1 + unaff_R15 + ~(~uVar1 | ~unaff_R15) * -2;
}



// FUNCTION 14d8c6c65 FUN_14d8c6c65 body=160 status=ok
// SIG undefined FUN_14d8c6c65(void)

void FUN_14d8c6c65(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong in_R10;
  
  uVar1 = (ushort)*(undefined8 *)(param_2 + -0x28);
  FUN_15afe205c(((ushort)in_R10 - (uVar1 | (ushort)in_R10)) + uVar1,param_2,
                *(ulonglong *)(param_2 + -0x88) ^ in_R10,
                *(ulonglong *)(param_2 + -0x60) + in_R10 +
                (*(ulonglong *)(param_2 + -0x60) & in_R10) * -2);
  (*(code *)0x16586fbdc)();
  return;
}



// FUNCTION 14d8c6da3 FUN_14d8c6da3 body=109 status=ok
// SIG undefined FUN_14d8c6da3(void)

void FUN_14d8c6da3(undefined8 param_1,undefined8 param_2)

{
  FUN_1668f15e1(param_1,param_2);
  return;
}



// FUNCTION 14d8c7098 FUN_14d8c7098 body=140 status=ok
// SIG undefined FUN_14d8c7098(void)

void FUN_14d8c7098(void)

{
  return;
}



// FUNCTION 14d8c7126 FUN_14d8c7126 body=141 status=ok
// SIG undefined FUN_14d8c7126(void)

void FUN_14d8c7126(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong in_RAX;
  ulonglong *unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  *unaff_RBP = -*unaff_RBP;
  *unaff_RBP = *unaff_RBP - 1;
  *unaff_RBP = *unaff_RBP | in_RAX;
  *unaff_RBP = ~(unaff_RSI & *unaff_RBP);
  uVar1 = local_res20 ^ in_RAX;
  puVar2 = (undefined8 *)(in_stack_00000028 ^ in_RAX);
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar12 = (uVar1 & 0x800) != 0;
  bVar11 = (uVar1 & 0x400) != 0;
  bVar10 = (uVar1 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar1 & 0x80) != 0;
  bVar7 = (uVar1 & 0x40) != 0;
  bVar6 = (uVar1 & 0x10) != 0;
  bVar5 = (uVar1 & 4) != 0;
  bVar4 = (uVar1 & 1) != 0;
  bVar17 = (uVar1 & 0x200000) != 0;
  bVar14 = (uVar1 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(unaff_retaddr);
  *puVar2 = unaff_RDI;
  puVar2[-1] = unaff_RDI;
  *(undefined4 *)(puVar2 + -2) = 0x8af96f;
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
  puVar2[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)bVar11 * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar2[-3] = uStackX_10;
  puVar2[-4] = in_R11;
  *(undefined4 *)(puVar2 + -5) = 0xb9441;
  *(undefined4 *)((longlong)puVar2 - 0x24) = 0;
  puVar2[-5] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)bVar11 * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  FUN_1653db4e6();
  return;
}



// FUNCTION 14d8c725a FUN_14d8c725a body=147 status=ok
// SIG undefined FUN_14d8c725a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c72da) */

undefined8 FUN_14d8c725a(void)

{
  return 8;
}



// FUNCTION 14d8c72fb FUN_14d8c72fb body=158 status=ok
// SIG undefined FUN_14d8c72fb(void)

void FUN_14d8c72fb(void)

{
  return;
}



// FUNCTION 14d8c7472 FUN_14d8c7472 body=46 status=ok
// SIG undefined FUN_14d8c7472(void)

void FUN_14d8c7472(void)

{
  thunk_FUN_166485e23();
  return;
}



// FUNCTION 14d8c74a0 FUN_14d8c74a0 body=24 status=ok
// SIG undefined FUN_14d8c74a0(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c752b) */

ulonglong FUN_14d8c74a0(void)

{
  longlong unaff_RDI;
  
  FUN_1618bdd92();
  return ~*(ulonglong *)(unaff_RDI + -0x80);
}



// FUNCTION 14d8c74b8 FUN_14d8c74b8 body=159 status=ok
// SIG undefined FUN_14d8c74b8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c752b) */

ulonglong FUN_14d8c74b8(void)

{
  longlong unaff_RDI;
  
  return ~*(ulonglong *)(unaff_RDI + -0x80);
}



// FUNCTION 14d8c7716 FUN_14d8c7716 body=111 status=ok
// SIG undefined FUN_14d8c7716(void)

void FUN_14d8c7716(void)

{
  return;
}



// FUNCTION 14d8c77b5 FUN_14d8c77b5 body=103 status=ok
// SIG undefined FUN_14d8c77b5(void)

void FUN_14d8c77b5(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong auStackX_8 [4];
  
  *(ulonglong *)((longlong)auStackX_8 + param_1) = *(ulonglong *)(unaff_RSI + -0x38);
  uVar1 = *(ulonglong *)((longlong)auStackX_8 + param_1);
  uVar3 = ~(uVar1 & unaff_RBP) & (uVar1 | unaff_RBP);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x58);
  *(ulonglong *)((longlong)auStackX_8 + param_1) = unaff_RBP;
  uVar2 = *(ulonglong *)((longlong)auStackX_8 + param_1);
  *(ulonglong *)((longlong)auStackX_8 + param_1) = uVar3;
  *(undefined8 *)((longlong)auStackX_8 + param_1 + -8) = in_RAX;
  FUN_1616eb9a8(uVar3 & 0xffffffffffffff00,uVar1 & uVar2);
  return;
}



// FUNCTION 14d8c78b2 FUN_14d8c78b2 body=192 status=ok
// SIG undefined FUN_14d8c78b2(void)

void FUN_14d8c78b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  (*(code *)0x1571fd489)
            (in_stack_00000008,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14d8c7974 FUN_14d8c7974 body=164 status=ok
// SIG undefined FUN_14d8c7974(void)

void FUN_14d8c7974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  undefined8 in_stack_00000010;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = in_stack_00000010;
  *(undefined8 *)(local_res20 + -0x18) = in_stack_00000010;
  *(undefined8 *)(local_res20 + -0x20) = param_3;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_1617b2be9;
  return;
}



// FUNCTION 14d8c7a18 FUN_14d8c7a18 body=119 status=ok
// SIG undefined FUN_14d8c7a18(void)

void FUN_14d8c7a18(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x14dcdadac)(0,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d8c7b15 FUN_14d8c7b15 body=178 status=ok
// SIG undefined FUN_14d8c7b15(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d8c7bc3) overlaps instruction at (ram,0x00014d8c7bc2)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8c7b86) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014d8c7bb6 */
/* WARNING: Removing unreachable block (ram,0x00014d8c7bc2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8c7b15(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  ulonglong unaff_retaddr;
  byte abStackX_18 [16];
  
  bVar1 = 1 - ~param_1;
  FUN_15b08a895();
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x165334f91)
            (~((~((bVar1 ^ 0xff) & ~abStackX_18[param_4 - (unaff_retaddr ^ 0x3148a502)]) +
               ~abStackX_18[param_4 - (unaff_retaddr ^ 0x3148a502)]) - ~(bVar1 ^ 0xff)),0x165334f91)
  ;
  return;
}



// FUNCTION 14d8c7c85 FUN_14d8c7c85 body=166 status=ok
// SIG undefined FUN_14d8c7c85(void)

void FUN_14d8c7c85(void)

{
  FUN_161ce8f4d();
  return;
}



// FUNCTION 14d8c7dd2 FUN_14d8c7dd2 body=154 status=ok
// SIG undefined FUN_14d8c7dd2(void)

void FUN_14d8c7dd2(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong local_res8 [4];
  
  uVar1 = local_res8[1];
  local_res8[3] =
       ((param_1 - 1) - ~*(ulonglong *)((longlong)local_res8 + unaff_RSI)) +
       (local_res8[3] & param_1) * -2;
  local_res8[1] = param_2;
  FUN_162d159a7(uVar1);
  return;
}



// FUNCTION 14d8c7f0c FUN_14d8c7f0c body=315 status=ok
// SIG undefined FUN_14d8c7f0c(void)

/* WARNING: Instruction at (ram,0x0001612a2a02) overlaps instruction at (ram,0x0001612a2a01)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8c7fa4) */
/* WARNING: Removing unreachable block (ram,0x00014d8c7faa) */
/* WARNING: Removing unreachable block (ram,0x00014d8c7f83) */
/* WARNING: Removing unreachable block (ram,0x0001612a2826) */
/* WARNING: Removing unreachable block (ram,0x0001612a291b) */
/* WARNING: Removing unreachable block (ram,0x0001612a2921) */
/* WARNING: Removing unreachable block (ram,0x0001612a2926) */
/* WARNING: Removing unreachable block (ram,0x0001612a2a02) */
/* WARNING: Removing unreachable block (ram,0x0001612a2a01) */
/* WARNING: Removing unreachable block (ram,0x0001612a2a0e) */
/* WARNING: Removing unreachable block (ram,0x000156cf057b) */
/* WARNING: Removing unreachable block (ram,0x000161cf5611) */
/* WARNING: Removing unreachable block (ram,0x000156cf062e) */
/* WARNING: Removing unreachable block (ram,0x000156cf0634) */
/* WARNING: Removing unreachable block (ram,0x000156cf0639) */

void FUN_14d8c7f0c(void)

{
  int unaff_ESI;
  
  if (unaff_ESI < 0) {
    return;
  }
  FUN_1612a2826();
  return;
}



// FUNCTION 14d8c8059 thunk_FUN_14d8c805f body=5 status=ok
// SIG undefined thunk_FUN_14d8c805f(void)

void thunk_FUN_14d8c805f(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  FUN_156c93319(param_1,*(longlong *)(unaff_RDI + -0x80) + param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,param_4 ^ param_1);
  uVar1 = *(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x88);
  FUN_1626be7d5(*(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x78),FUN_1626be7d5,
                ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),0xfffffffea936cce6);
  return;
}



// FUNCTION 14d8c805f FUN_14d8c805f body=133 status=ok
// SIG undefined FUN_14d8c805f(void)

void FUN_14d8c805f(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  FUN_156c93319(param_1,*(longlong *)(unaff_RDI + -0x80) + param_1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,param_4 ^ param_1);
  uVar1 = *(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x88);
  FUN_1626be7d5(*(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x78),FUN_1626be7d5,
                ~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),0xfffffffea936cce6);
  return;
}



// FUNCTION 14d8c80e4 FUN_14d8c80e4 body=173 status=ok
// SIG undefined FUN_14d8c80e4(void)

void FUN_14d8c80e4(void)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1626be7d5(*(undefined8 *)(unaff_R13 + -0x78),FUN_1626be7d5,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),~unaff_RBX);
  return;
}



// FUNCTION 14d8c8191 FUN_14d8c8191 body=328 status=ok
// SIG undefined FUN_14d8c8191(void)

/* WARNING: Removing unreachable block (ram,0x00015705954b) */
/* WARNING: Removing unreachable block (ram,0x000157059556) */
/* WARNING: Removing unreachable block (ram,0x0001570595e5) */
/* WARNING: Removing unreachable block (ram,0x0001570595ea) */
/* WARNING: Removing unreachable block (ram,0x0001570595f0) */
/* WARNING: Removing unreachable block (ram,0x00015b0de2aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8259) */
/* WARNING: Removing unreachable block (ram,0x0001570594a1) */
/* WARNING: Removing unreachable block (ram,0x0001570594a7) */
/* WARNING: Removing unreachable block (ram,0x000157059546) */
/* WARNING: Removing unreachable block (ram,0x000157059551) */
/* WARNING: Removing unreachable block (ram,0x00014d8c823a) */

undefined8 FUN_14d8c8191(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  code *UNRECOVERED_JUMPTABLE;
  longlong lStackX_20;
  
  uVar5 = ~((~(~param_3 | unaff_R15) | in_RAX) + (~param_3 | unaff_R15) + 1);
  if (*(ulonglong *)(unaff_R13 + -0x38) == unaff_R15) {
    uVar4 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
    FUN_16170e85f(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                   (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)));
    *(longlong *)(lStackX_20 + -8) = unaff_R13;
    *(code **)(lStackX_20 + -0x10) = FUN_16170e85f;
    *(code **)(lStackX_20 + -0x18) = FUN_16170e85f;
    *(undefined8 *)(lStackX_20 + -0x20) = local_res8;
    uVar2 = *(ulonglong *)(lStackX_20 + -8);
    *(undefined8 *)(lStackX_20 + -0x20) = param_4;
    *(code **)(lStackX_20 + -0x28) = UNRECOVERED_JUMPTABLE;
    *(undefined4 *)(lStackX_20 + -0x28) = 0xf249cfd7;
    *(undefined4 *)(lStackX_20 + -0x24) = 0xdc07ce32;
    *(int *)(lStackX_20 + -0x24) = *(int *)(lStackX_20 + -0x24) + 0x23f831cd;
    lVar6 = *(longlong *)(lStackX_20 + -0x28) + 0xdb63031;
    *(undefined8 *)(lStackX_20 + -0x18 + lVar6) = 0;
    puVar1 = (ulonglong *)(lStackX_20 + -0x18 + lVar6);
    *puVar1 = *puVar1 ^ uVar2;
    *(undefined8 *)(lStackX_20 + -8) = 0x348b48b;
    *(ulonglong *)(lStackX_20 + -8) = *(ulonglong *)(lStackX_20 + -8) ^ 0x348b48b;
    *(ulonglong *)(lStackX_20 + -0x18) = uVar4;
    *(ulonglong *)(lStackX_20 + -0x20) = uVar5;
    *(longlong *)(lStackX_20 + -8) = *(longlong *)(lStackX_20 + -8) + -0x1665e7189;
    *(undefined8 *)(lStackX_20 + -0x18) = *(undefined8 *)(lStackX_20 + -0x20);
    *(longlong *)(lStackX_20 + -8) = -*(longlong *)(lStackX_20 + -8);
                    /* WARNING: Could not recover jumptable at 0x0001665e7170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
  uVar3 = FUN_15705933e();
  return uVar3;
}



// FUNCTION 14d8c8414 FUN_14d8c8414 body=168 status=ok
// SIG undefined FUN_14d8c8414(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c84bd) */

void FUN_14d8c8414(void)

{
  return;
}



// FUNCTION 14d8c84bd FUN_14d8c84bd body=38 status=ok
// SIG undefined FUN_14d8c84bd(void)

void FUN_14d8c84bd(void)

{
  return;
}



// FUNCTION 14d8c8565 FUN_14d8c8565 body=78 status=ok
// SIG undefined FUN_14d8c8565(void)

void FUN_14d8c8565(undefined1 param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char in_AL;
  longlong unaff_R12;
  undefined8 unaff_R13;
  longlong local_res18;
  
  lVar1 = local_res18 + unaff_R12;
                    /* WARNING: Read-only address (ram,0x00014d7a57cb) is written */
  LOCK();
  uVar2 = param_1;
  if (in_AL != '\0') {
    uVar2 = uRam000000014d7a57cb;
  }
  uRam000000014d7a57cb = uVar2;
  UNLOCK();
  *(undefined8 *)(lVar1 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x18) = 0x4435450;
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar1 + -0x18);
  *(undefined8 *)(lVar1 + -0x28cf) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined8 *)(lVar1 + -0x28d7) = *(undefined8 *)(lVar1 + -0x10);
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8c86a5 FUN_14d8c86a5 body=136 status=ok
// SIG undefined FUN_14d8c86a5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c86ea) */
/* WARNING: Removing unreachable block (ram,0x00014d8c872d) */
/* WARNING: Removing unreachable block (ram,0x00014d8c87cf) */

undefined8 FUN_14d8c86a5(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (~param_1 + *(ulonglong *)(unaff_RDI + -0x48) == (~param_1 & *(ulonglong *)(unaff_RDI + -0x48))
     ) {
    uVar1 = FUN_165001be6();
    return uVar1;
  }
  uVar1 = FUN_14e202036(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return uVar1;
}



// FUNCTION 14d8c872d FUN_14d8c872d body=193 status=ok
// SIG undefined FUN_14d8c872d(void)

undefined8 FUN_14d8c872d(char param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = 0x14d8c87c2;
  uVar4 = FUN_165821d20();
  *(ushort *)(uVar1 + 8) = *(ushort *)(uVar1 + 8) & 0xfeff;
  lVar2 = *(longlong *)(uVar1 + 0x10);
  LOCK();
  cVar3 = param_1;
  if ((char)uVar4 != DAT_14d7aa618) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),DAT_14d7aa618);
    cVar3 = DAT_14d7aa618;
  }
  DAT_14d7aa618 = cVar3;
  UNLOCK();
  *(undefined8 *)(lVar2 + -8) = unaff_retaddr;
  *(undefined8 *)(lVar2 + -0x10) = uVar4;
  *(undefined8 *)(lVar2 + -0x18) = uVar4;
  *(undefined1 **)(lVar2 + -0x10) = &LAB_14d8c87f1;
  return *(undefined8 *)(lVar2 + -0x18);
}



// FUNCTION 14d8c8829 FUN_14d8c8829 body=104 status=ok
// SIG undefined FUN_14d8c8829(void)

void FUN_14d8c8829(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  longlong local_res10;
  
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = param_2;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = &DAT_14d8c88af;
  *(undefined **)(local_res10 + -0x18) = &DAT_14d8c88af;
  uVar2 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x20) = uVar2;
  *(undefined8 *)(local_res10 + -0x28) = in_RAX;
  *(undefined4 *)(local_res10 + -0x28) = 0xb3e6722a;
  *(undefined4 *)(local_res10 + -0x24) = 0xffffffff;
  *(undefined **)(local_res10 + *(longlong *)(local_res10 + -0x28) + 0x4c198dc6) = &DAT_14d7a5daf;
  return;
}



// FUNCTION 14d8c88cb FUN_14d8c88cb body=426 status=ok
// SIG undefined FUN_14d8c88cb(void)

void FUN_14d8c88cb(ulonglong param_1)

{
  undefined2 uVar1;
  undefined6 uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  short *in_R10;
  ushort unaff_R13W;
  ushort unaff_R14W;
  undefined8 local_res10;
  longlong in_stack_00000028;
  
  uVar2 = (undefined6)(param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  param_1 = *(ulonglong *)(unaff_RDI + -0x60) ^ param_1;
  uVar3 = *(undefined8 *)(unaff_RDI + -0x80);
  FUN_16642e35a();
  *in_R10 = (-0x101 - ((~unaff_R13W | ~unaff_R14W) + unaff_R13W + 1 | unaff_R14W)) + *in_R10;
  *(undefined8 *)(in_stack_00000028 + -8) = local_res10;
  *(longlong *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x18) = uVar3;
  *(ulonglong *)(in_stack_00000028 + -0x10) = param_1;
  *(undefined8 *)(in_stack_00000028 + -0x18) = 0x14d8c89f5;
  FUN_157049ceb();
  *(ulonglong *)(in_stack_00000028 + -0x18) = CONCAT62(uVar2,uVar1);
  FUN_14dc493a4();
  return;
}



// FUNCTION 14d8c8a7f FUN_14d8c8a7f body=140 status=ok
// SIG undefined FUN_14d8c8a7f(void)

void FUN_14d8c8a7f(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1610e3e4e(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (*(ulonglong *)(unaff_R12 + -0x78) - in_RAX) +
                (0xfffffffffffffffe - ~-in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) * -2 + -2);
  return;
}



// FUNCTION 14d8c8ca4 FUN_14d8c8ca4 body=103 status=ok
// SIG undefined FUN_14d8c8ca4(void)

void FUN_14d8c8ca4(void)

{
  return;
}



// FUNCTION 14d8c8d1e FUN_14d8c8d1e body=411 status=ok
// SIG undefined FUN_14d8c8d1e(void)

/* WARNING: Removing unreachable block (ram,0x000156c9aabb) */
/* WARNING: Removing unreachable block (ram,0x00014ddb9a63) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8e41) */

undefined8 FUN_14d8c8d1e(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_15b15cc3c(param_1,param_2);
  if (*(ulonglong *)(unaff_RDI + -0x80) != param_1) {
    uVar1 = FUN_156c9aa34();
    return uVar1;
  }
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0x88),param_1)) {
    uVar1 = FUN_1564608d6();
    return uVar1;
  }
  uVar1 = FUN_1564608d6();
  return uVar1;
}



// FUNCTION 14d8c8ec3 thunk_FUN_14d8c8ec9 body=5 status=ok
// SIG undefined thunk_FUN_14d8c8ec9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c8f52) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f63) */
/* WARNING: Removing unreachable block (ram,0x00014d8c900a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9010) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9005) */
/* WARNING: Removing unreachable block (ram,0x0001666dbeee) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f5e) */

void thunk_FUN_14d8c8ec9(void)

{
  FUN_1658af9f6();
  return;
}



// FUNCTION 14d8c8ec9 FUN_14d8c8ec9 body=457 status=ok
// SIG undefined FUN_14d8c8ec9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c8f52) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f63) */
/* WARNING: Removing unreachable block (ram,0x00014d8c900a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9010) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9005) */
/* WARNING: Removing unreachable block (ram,0x0001666dbeee) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8f5e) */

void FUN_14d8c8ec9(void)

{
  FUN_1658af9f6();
  return;
}



// FUNCTION 14d8c912f FUN_14d8c912f body=148 status=ok
// SIG undefined FUN_14d8c912f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8c912f(undefined8 param_1,undefined8 param_2,short param_3)

{
  undefined8 local_res8;
  
  FUN_15728c81f(local_res8,FUN_15728c81f,param_3 + -1);
  return;
}



// FUNCTION 14d8c9307 FUN_14d8c9307 body=144 status=ok
// SIG undefined FUN_14d8c9307(void)

void FUN_14d8c9307(ulonglong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x78);
  FUN_165817b27((-~in_RAX - (~param_1 + 2)) + (param_1 & in_RAX) * -2,
                ~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                 (~(uVar1 & in_RAX) + in_RAX) - (-1 - uVar1)));
  return;
}



// FUNCTION 14d8c9399 FUN_14d8c9399 body=148 status=ok
// SIG undefined FUN_14d8c9399(void)

/* WARNING: Removing unreachable block (ram,0x00016546660b) */
/* WARNING: Removing unreachable block (ram,0x00014d8c94b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8c94b9) */
/* WARNING: Removing unreachable block (ram,0x000156fb9b6a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c954a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9550) */
/* WARNING: Removing unreachable block (ram,0x000156b47df9) */

undefined8 FUN_14d8c9399(void)

{
  undefined8 uVar1;
  
  FUN_14e1c2b88();
  uVar1 = FUN_16546660b();
  return uVar1;
}



// FUNCTION 14d8c942d FUN_14d8c942d body=606 status=ok
// SIG undefined FUN_14d8c942d(void)

/* WARNING: Removing unreachable block (ram,0x00016546660b) */
/* WARNING: Removing unreachable block (ram,0x00014d8c94b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8c94b9) */
/* WARNING: Removing unreachable block (ram,0x000156fb9b6a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c954a) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9550) */
/* WARNING: Removing unreachable block (ram,0x000156b47df9) */

undefined8 FUN_14d8c942d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16546660b(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d8c9809 FUN_14d8c9809 body=147 status=ok
// SIG undefined FUN_14d8c9809(void)

void FUN_14d8c9809(void)

{
  return;
}



// FUNCTION 14d8c989e FUN_14d8c989e body=147 status=ok
// SIG undefined FUN_14d8c989e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c98f5) */

void FUN_14d8c989e(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156d2f64a(*(undefined8 *)(unaff_R12 + -0x58),0xffffffffffffffa8,
                param_3 + in_RAX + (param_3 & in_RAX) * -2);
  return;
}



// FUNCTION 14d8c9ab9 FUN_14d8c9ab9 body=137 status=ok
// SIG undefined FUN_14d8c9ab9(void)

void FUN_14d8c9ab9(void)

{
  FUN_160f42f89();
  return;
}



// FUNCTION 14d8c9b44 FUN_14d8c9b44 body=29 status=ok
// SIG undefined FUN_14d8c9b44(void)

void FUN_14d8c9b44(void)

{
  return;
}



// FUNCTION 14d8c9c5c FUN_14d8c9c5c body=592 status=ok
// SIG undefined FUN_14d8c9c5c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8c9e0c) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9e12) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9cdd) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9ce8) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9d78) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9d7e) */
/* WARNING: Removing unreachable block (ram,0x000162b8eb86) */
/* WARNING: Removing unreachable block (ram,0x000162b8ebda) */
/* WARNING: Removing unreachable block (ram,0x000162b8ec1b) */
/* WARNING: Removing unreachable block (ram,0x000162b8ec21) */
/* WARNING: Removing unreachable block (ram,0x000162b8ec26) */
/* WARNING: Removing unreachable block (ram,0x0001622e5488) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9d73) */
/* WARNING: Removing unreachable block (ram,0x000161581ab8) */
/* WARNING: Removing unreachable block (ram,0x00016546018c) */
/* WARNING: Removing unreachable block (ram,0x000161581b37) */
/* WARNING: Removing unreachable block (ram,0x000161581b43) */
/* WARNING: Removing unreachable block (ram,0x000161581b48) */
/* WARNING: Removing unreachable block (ram,0x000161581b76) */
/* WARNING: Removing unreachable block (ram,0x000161581b71) */
/* WARNING: Removing unreachable block (ram,0x000161581b96) */
/* WARNING: Removing unreachable block (ram,0x000161581ba0) */
/* WARNING: Removing unreachable block (ram,0x00014d8c9ce3) */

undefined8
FUN_14d8c9c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_1612d1e48(param_1,0xf791091,0x10,param_4,*(undefined8 *)(unaff_RDI + -8),
                        *(undefined8 *)(unaff_RDI + -0x90));
  return uVar1;
}



// FUNCTION 14d8c9f57 FUN_14d8c9f57 body=33 status=ok
// SIG undefined FUN_14d8c9f57(void)

void FUN_14d8c9f57(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8c9f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d8ca139 FUN_14d8ca139 body=524 status=ok
// SIG undefined FUN_14d8ca139(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015666c298) */
/* WARNING: Removing unreachable block (ram,0x00015666c2a3) */
/* WARNING: Removing unreachable block (ram,0x0001613af952) */
/* WARNING: Removing unreachable block (ram,0x0001613af958) */
/* WARNING: Removing unreachable block (ram,0x0001563dc5d6) */
/* WARNING: Removing unreachable block (ram,0x00014d8ca1bb) */
/* WARNING: Removing unreachable block (ram,0x00015666c180) */
/* WARNING: Removing unreachable block (ram,0x00015666c204) */
/* WARNING: Removing unreachable block (ram,0x00015666c20a) */
/* WARNING: Removing unreachable block (ram,0x00015666c1f9) */
/* WARNING: Removing unreachable block (ram,0x00014e0d5268) */
/* WARNING: Removing unreachable block (ram,0x00014d8ca300) */
/* WARNING: Removing unreachable block (ram,0x00014d7bdcfd) */

undefined8 FUN_14d8ca139(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8ca5c1 FUN_14d8ca5c1 body=175 status=ok
// SIG undefined FUN_14d8ca5c1(void)

void FUN_14d8ca5c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R14;
  byte bVar2;
  byte bVar3;
  byte in_AF;
  byte bVar4;
  byte bVar5;
  byte in_TF;
  byte in_IF;
  byte bVar6;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_20 [3];
  undefined8 uStack_8;
  
  *(undefined1 *)((longlong)&uStack_8 + unaff_R14) =
       *(undefined1 *)((longlong)ProcessEnvironmentBlock + 0x308);
  *(undefined8 *)((longlong)&uStack_8 + unaff_R14) = in_RAX;
  *(undefined8 *)((longlong)auStack_20 + unaff_R14 + 0x10) = unaff_RSI;
  *(undefined8 *)((longlong)auStack_20 + unaff_R14 + 8) = 0x1347;
  *(ulonglong *)((longlong)auStack_20 + unaff_R14 + 8) =
       *(longlong *)((longlong)auStack_20 + unaff_R14 + 8) -
       ~((longlong)ProcessEnvironmentBlock - 0x11bcU);
  uVar1 = *(ulonglong *)((longlong)auStack_20 + unaff_R14 + 8);
  bVar2 = 0;
  bVar6 = 0;
  bVar5 = (longlong)uVar1 < 0;
  bVar4 = uVar1 == 0;
  bVar3 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
  *(undefined8 *)((longlong)&uStack_8 + unaff_R14) = 0x14d8ca64b;
  FUN_1610d9d1e(param_1,(ulonglong)ProcessEnvironmentBlock & 0xffff);
  *(undefined8 *)((longlong)&uStack_8 + unaff_R14) = unaff_R12;
  *(undefined8 *)((longlong)auStack_20 + unaff_R14 + 0x10) = unaff_R12;
  *(undefined8 *)((longlong)auStack_20 + unaff_R14 + 8) = param_3;
  *(ulonglong *)((longlong)auStack_20 + unaff_R14) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(bVar6 & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(bVar5 & 1) * 0x80 | (ulonglong)(bVar4 & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(bVar3 & 1) * 4 | (ulonglong)(bVar2 & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined **)((longlong)&uStack_8 + unaff_R14) = &DAT_14d8ca673;
  return;
}



// FUNCTION 14d8ca861 FUN_14d8ca861 body=128 status=ok
// SIG undefined FUN_14d8ca861(void)

void FUN_14d8ca861(void)

{
  return;
}



// FUNCTION 14d8caaf4 FUN_14d8caaf4 body=165 status=ok
// SIG undefined FUN_14d8caaf4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cab93) */
/* WARNING: Removing unreachable block (ram,0x00014d8cab99) */
/* WARNING: Removing unreachable block (ram,0x00014d8cac1e) */
/* WARNING: Removing unreachable block (ram,0x00014d8cac24) */
/* WARNING: Removing unreachable block (ram,0x00014d8cacac) */
/* WARNING: Removing unreachable block (ram,0x00016523daca) */
/* WARNING: Removing unreachable block (ram,0x00016699f72e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8caaf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  longlong in_stack_00000040;
  
  *(longlong *)(unaff_R14 + 8) = unaff_RSI - *(longlong *)(unaff_R14 + 8);
  *(longlong *)(unaff_R14 + 8) = -*(longlong *)(unaff_R14 + 8);
  *(longlong *)(unaff_R14 + 8) = *(longlong *)(unaff_R14 + 8) + -1;
  syscall();
  *(undefined8 *)(in_stack_00000040 + -8) = unaff_RBX;
  *(undefined8 *)(in_stack_00000040 + -0x10) = unaff_RBX;
  uVar1 = (*(code *)0x156c53431)(0x16618d143,param_2);
  return uVar1;
}



// FUNCTION 14d8cab99 FUN_14d8cab99 body=284 status=ok
// SIG undefined FUN_14d8cab99(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cac24) */
/* WARNING: Removing unreachable block (ram,0x00014d8cacac) */
/* WARNING: Removing unreachable block (ram,0x00016523daca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d8cab99(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  
  return ~unaff_RSI | ~(unaff_RBP - in_RAX);
}



// FUNCTION 14d8cb132 FUN_14d8cb132 body=128 status=ok
// SIG undefined FUN_14d8cb132(void)

void FUN_14d8cb132(ulonglong param_1,undefined8 param_2)

{
  int in_R10D;
  uint unaff_R15D;
  undefined4 local_res8;
  
  (*(code *)0x162798a43)
            (param_1 & 0xffffffffffffff00 ^ 0x3a,param_2,
             (~unaff_R15D + in_R10D) - ~local_res8 ^ 0xffffffff);
  return;
}



// FUNCTION 14d8cb251 FUN_14d8cb251 body=282 status=ok
// SIG undefined FUN_14d8cb251(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cb2e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb2ed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8cb251(ulonglong param_1,undefined2 param_2)

{
  longlong unaff_RDI;
  
  FUN_160bcf240(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  FUN_164885ddd();
  return;
}



// FUNCTION 14d8cb36e FUN_14d8cb36e body=177 status=ok
// SIG undefined FUN_14d8cb36e(void)

void FUN_14d8cb36e(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_161d55d4c(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14d8cb552 FUN_14d8cb552 body=132 status=ok
// SIG undefined FUN_14d8cb552(void)

void FUN_14d8cb552(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166a9883e(FUN_166a9883e,unaff_RDI + (((unaff_RSI & unaff_R15) - unaff_RSI) + param_2) * -2,
                *(longlong *)(unaff_R13 + -0x50) + unaff_R15);
  return;
}



// FUNCTION 14d8cb5d7 FUN_14d8cb5d7 body=770 status=ok
// SIG undefined FUN_14d8cb5d7(void)

/* WARNING: Removing unreachable block (ram,0x00015b324ec2) */
/* WARNING: Removing unreachable block (ram,0x00015b324de6) */
/* WARNING: Removing unreachable block (ram,0x00015b324e88) */
/* WARNING: Removing unreachable block (ram,0x00015b324e8e) */
/* WARNING: Removing unreachable block (ram,0x00015b324e93) */
/* WARNING: Removing unreachable block (ram,0x00015b324ec5) */
/* WARNING: Removing unreachable block (ram,0x00015b324f1d) */
/* WARNING: Removing unreachable block (ram,0x0001625a8f74) */
/* WARNING: Removing unreachable block (ram,0x0001625a8f90) */
/* WARNING: Removing unreachable block (ram,0x0001625a8f96) */
/* WARNING: Removing unreachable block (ram,0x000156c4745d) */
/* WARNING: Removing unreachable block (ram,0x000157319af6) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb667) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb66d) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb703) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb709) */
/* WARNING: Removing unreachable block (ram,0x000157319abe) */
/* WARNING: Removing unreachable block (ram,0x000157319af9) */
/* WARNING: Removing unreachable block (ram,0x000157319b3b) */
/* WARNING: Removing unreachable block (ram,0x000157319b40) */
/* WARNING: Removing unreachable block (ram,0x000157319b46) */
/* WARNING: Removing unreachable block (ram,0x00015b324f23) */

undefined8 FUN_14d8cb5d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = (*(code *)0x161503d31)
                    (param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                             (*(ulonglong *)(unaff_RDI + -0x68) | param_1),0x161503d31,param_4);
  return uVar1;
}



// FUNCTION 14d8cb7a6 FUN_14d8cb7a6 body=152 status=ok
// SIG undefined FUN_14d8cb7a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cb833) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb839) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb83e) */

void FUN_14d8cb7a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort in_AX;
  longlong unaff_R12;
  undefined2 uStack_8;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_R12 + -8);
  uVar2 = uVar1 | in_AX;
  uVar1 = ~(uVar1 & in_AX);
  uStack_8 = (uVar2 - (uVar1 | uVar2)) + uVar1;
  FUN_16618df3e(CONCAT62((int6)((ulonglong)param_1 >> 0x10),uStack_8) | 0xfeff,param_2,param_3,
                param_4);
  return;
}



// FUNCTION 14d8cb83e FUN_14d8cb83e body=42 status=ok
// SIG undefined FUN_14d8cb83e(void)

void FUN_14d8cb83e(void)

{
  return;
}



// FUNCTION 14d8cb8e7 FUN_14d8cb8e7 body=622 status=ok
// SIG undefined FUN_14d8cb8e7(void)

/* WARNING: Removing unreachable block (ram,0x0001626b644e) */
/* WARNING: Removing unreachable block (ram,0x00014d8cb98f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000160ef5267 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8cb8e7(void)

{
  return;
}



// FUNCTION 14d8cbb60 FUN_14d8cbb60 body=496 status=ok
// SIG undefined FUN_14d8cbb60(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cbcad) */
/* WARNING: Removing unreachable block (ram,0x00014d8cbd46) */
/* WARNING: Removing unreachable block (ram,0x00014d8cbd4b) */
/* WARNING: Removing unreachable block (ram,0x00014d8cbd51) */
/* WARNING: Removing unreachable block (ram,0x00016570b867) */
/* WARNING: Removing unreachable block (ram,0x00014d8cbca2) */
/* WARNING: Removing unreachable block (ram,0x00015b31d9b0) */
/* WARNING: Removing unreachable block (ram,0x00015b31da14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d8cbb60(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ulonglong in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0xa0);
  uVar4 = FUN_160ed72da();
  *(undefined8 *)
   (&stack0x00000018 + ~(~(in_R10 & 0xffffffffcaf684b1) & (in_R10 | 0xffffffffcaf684b1))) = param_3;
  uVar5 = ~param_1 & *(ulonglong *)(unaff_RDI + -0x98) | param_1;
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x98) & param_1);
  if (-1 < (longlong)((param_1 - 1) - ~local_res20)) {
    uVar4 = FUN_15b1d7e47();
    return uVar4;
  }
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = unaff_R14;
  *(undefined8 *)(param_5 - 0x10) = in_R11;
  *(undefined8 *)(param_5 - 0x18) = in_R11;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  uVar3 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = in_stack_00000008;
  *(ulonglong *)(param_5 - 0x20) = ~((0xffffffffffffffff - in_RAX | uVar2) & (~uVar2 | in_RAX));
  *(undefined8 *)(param_5 - 0x28) = uVar4;
  *(undefined8 *)(param_5 - 0x30) = uVar3;
  *(undefined8 *)(param_5 - 0x38) = uVar3;
  *(code **)(param_5 - 0x30) = FUN_15b1d7f00;
  uVar4 = FUN_165119c31((uVar5 - (uVar1 | uVar5)) + uVar1,param_2);
  return uVar4;
}



// FUNCTION 14d8cbd51 FUN_14d8cbd51 body=83 status=ok
// SIG undefined FUN_14d8cbd51(void)

undefined8 FUN_14d8cbd51(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8cbe4f FUN_14d8cbe4f body=133 status=ok
// SIG undefined FUN_14d8cbe4f(void)

void FUN_14d8cbe4f(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBX;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(ulonglong *)(unaff_RBX + 8) =
       ~((*(longlong *)(unaff_RBX + 8) - (param_4 | *(ulonglong *)(unaff_RBX + 8))) + param_4);
  FUN_15b2a2d05(local_res8,param_2,param_3,local_res18);
  return;
}



// FUNCTION 14d8cbed5 FUN_14d8cbed5 body=549 status=ok
// SIG undefined FUN_14d8cbed5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cbf2d) */
/* WARNING: Removing unreachable block (ram,0x00014d8cbf4c) */
/* WARNING: Removing unreachable block (ram,0x0001654617f7) */
/* WARNING: Removing unreachable block (ram,0x00014e06434a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8cbed5(undefined1 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  ulonglong in_RAX;
  undefined8 unaff_R13;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined8 unaff_R15;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ulonglong in_stack_00000010;
  ushort uStack0000000000000028;
  ulonglong in_stack_00000030;
  
  uVar7 = ~in_stack_00000010 & in_RAX | in_stack_00000010;
  uVar7 = (~uVar7 | 0xffffffffffffffff - (in_RAX & in_stack_00000010)) + uVar7 + 1;
  _uStack0000000000000028 = _uStack0000000000000028 ^ in_stack_00000010;
  lVar5 = in_stack_00000030 + in_stack_00000010 + (in_stack_00000030 & in_stack_00000010) * -2;
  uVar6 = (-0x101 - (uStack0000000000000028 | 0xfeff)) + uStack0000000000000028;
  bVar12 = (uVar6 & 0x4000) != 0;
  bVar11 = (uVar6 & 0x400) != 0;
  bVar10 = (uVar6 & 0x200) != 0;
  bVar9 = (uVar6 & 0x100) != 0;
  bVar8 = (uVar6 & 0x10) != 0;
  bVar14 = (_uStack0000000000000028 & 0x200000) != 0;
  bVar13 = (_uStack0000000000000028 & 0x40000) != 0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a82c7) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a82c7) is written */
  LOCK();
  cVar4 = (char)uVar7;
  uVar3 = param_1;
  if (cVar4 != '\0') {
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar3 = uRam000000014d7a82c7;
  }
  uRam000000014d7a82c7 = uVar3;
  UNLOCK();
  *(undefined8 *)(lVar5 + -8) = unaff_R15;
  *(undefined8 *)(lVar5 + -0x10) = unaff_R15;
  *(ulonglong *)(lVar5 + -0x18) = uVar7;
  *(undefined4 *)(lVar5 + -0x18) = 0x22690b8;
  *(undefined4 *)(lVar5 + -0x14) = 0;
  lVar2 = *(longlong *)(lVar5 + -0x18);
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)bVar11 * 0x400 | (ulonglong)bVar10 * 0x200 |
       (ulonglong)bVar9 * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
       (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)bVar8 * 0x10 |
       (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar14 * 0x200000 |
       (ulonglong)bVar13 * 0x40000;
  *(longlong *)(lVar5 + -0x20) = lVar2;
  uVar7 = *(ulonglong *)(lVar5 + -0x20);
  lVar1 = *(longlong *)(lVar5 + -0x20);
  *(longlong *)(lVar5 + -0x20) = *(longlong *)(lVar5 + -0x20) + -0xe03ce8;
  *(ulonglong *)(lVar5 + -0x20) =
       (ulonglong)bVar12 * 0x4000 | (ulonglong)SBORROW8(lVar1,0xe03ce8) * 0x800 |
       (ulonglong)bVar11 * 0x400 | (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 |
       (ulonglong)(*(longlong *)(lVar5 + -0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(lVar5 + -0x20) == 0) * 0x40 | (ulonglong)bVar8 * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)(lVar5 + -0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar7 < 0xe03ce8) | (ulonglong)bVar14 * 0x200000 | (ulonglong)bVar13 * 0x40000;
  uVar7 = *(ulonglong *)(lVar5 + -0x18);
  *(undefined8 *)(lVar5 + -0x18) = unaff_R13;
  *(ulonglong *)(lVar5 + -0x20) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lVar5 + -8) = lVar2 + -0xe03ce8;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d8cc2f8 FUN_14d8cc2f8 body=440 status=ok
// SIG undefined FUN_14d8cc2f8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cc356) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc44a) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc47d) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc48a) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc48f) */
/* WARNING: Removing unreachable block (ram,0x0001571d76a4) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc495) */
/* WARNING: Removing unreachable block (ram,0x00014d8cc49b) */

void FUN_14d8cc2f8(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined8 in_R9;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  longlong local_res10;
  
  uVar2 = DAT_14d7bd78b;
  LOCK();
  UNLOCK();
  DAT_14d7bd78b = in_AL;
  *(undefined8 *)(local_res10 + -8) = in_R9;
  *(undefined8 *)(local_res10 + -0x10) = in_R9;
  *(ulonglong *)(local_res10 + -0x18) = CONCAT71(in_register_00000001,uVar2);
  *(undefined4 *)(local_res10 + -0x18) = 0x394283e;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x21612be;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8cc49b FUN_14d8cc49b body=194 status=ok
// SIG undefined FUN_14d8cc49b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8cc49b(void)

{
  return;
}



// FUNCTION 14d8cc8d7 FUN_14d8cc8d7 body=154 status=ok
// SIG undefined FUN_14d8cc8d7(void)

void FUN_14d8cc8d7(void)

{
  (*(code *)0x15666db3e)();
  return;
}



// FUNCTION 14d8cca2f FUN_14d8cca2f body=180 status=ok
// SIG undefined FUN_14d8cca2f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ccab5) */
/* WARNING: Removing unreachable block (ram,0x00014d8ccabb) */
/* WARNING: Removing unreachable block (ram,0x000162503d4d) */
/* WARNING: Removing unreachable block (ram,0x000162503d8e) */

void FUN_14d8cca2f(void)

{
  FUN_162503d4d();
  return;
}



// FUNCTION 14d8ccb45 FUN_14d8ccb45 body=476 status=ok
// SIG undefined FUN_14d8ccb45(void)

/* WARNING: Instruction at (ram,0x0001647bf6ef) overlaps instruction at (ram,0x0001647bf6ee)
    */
/* WARNING: Removing unreachable block (ram,0x0001647bf896) */
/* WARNING: Removing unreachable block (ram,0x0001647bf939) */
/* WARNING: Removing unreachable block (ram,0x0001647bf93e) */
/* WARNING: Removing unreachable block (ram,0x0001647bf944) */
/* WARNING: Removing unreachable block (ram,0x0001647bf949) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8ccb45(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  ulonglong uVar11;
  undefined8 unaff_RSI;
  code *pcVar12;
  longlong in_R10;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_R13;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong unaff_R15;
  byte in_CF;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  byte in_AF;
  bool bVar23;
  bool bVar24;
  byte in_TF;
  bool bVar25;
  byte in_IF;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  byte in_NT;
  bool bVar29;
  byte in_AC;
  bool bVar30;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar31;
  ulonglong uVar32;
  ulonglong local_res10;
  
  lVar13 = in_R10 + unaff_RBP + (ulonglong)in_CF;
  uVar16 = *(ulonglong *)(unaff_R13 + -0x50) + unaff_R15;
  uVar11 = *(ulonglong *)(unaff_R13 + -0x50) & unaff_R15;
  bVar20 = uVar16 < uVar11 * 2;
  lVar17 = uVar16 + uVar11 * -2;
  FUN_1665f31fd();
  uVar11 = *(ulonglong *)(lVar13 + -0x57);
  uVar16 = -(uVar11 | param_1);
  lVar8 = (-param_1 - uVar11) + (uVar11 | param_1) * 2;
  uVar19 = *(undefined8 *)(lVar13 + -0x37);
  uVar14 = uVar19;
  lVar9 = FUN_14d9be083(param_1);
  lVar18 = lVar17 + -0xd57ef78;
  plVar1 = (longlong *)(&stack0xfffffffff2a81098 + lVar17);
  puVar2 = (undefined8 *)(&stack0xfffffffff2a81090 + lVar17);
  *puVar2 = param_2;
  uVar6 = *puVar2;
  *(undefined8 *)(&stack0x00000008 + lVar18) = uVar14;
  *plVar1 = (longlong)(&stack0x00000008 + lVar18);
  *(ulonglong *)(&stack0xfffffffff2a81088 + lVar17) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)puVar2,8) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)plVar1 < 0) * 0x80 | (ulonglong)(plVar1 == (longlong *)0x0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)plVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(&DAT_fffffffffffffff7 < puVar2) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *plVar1 = *plVar1 + 8;
  uVar32 = *(ulonglong *)(&stack0xfffffffff2a81088 + lVar17);
  bVar29 = (uVar32 & 0x4000) != 0;
  bVar27 = (uVar32 & 0x400) != 0;
  bVar26 = (uVar32 & 0x200) != 0;
  bVar25 = (uVar32 & 0x100) != 0;
  bVar23 = (uVar32 & 0x10) != 0;
  bVar31 = (uVar32 & 0x200000) != 0;
  bVar30 = (uVar32 & 0x40000) != 0;
  lVar15 = *(longlong *)(&stack0x00000008 + lVar18);
  *(undefined8 *)(&stack0x00000008 + lVar18) = 0;
  bVar21 = CARRY8(*(ulonglong *)(&stack0x00000008 + lVar18),uVar16);
  bVar28 = SCARRY8(*(longlong *)(&stack0x00000008 + lVar18),uVar16);
  *(ulonglong *)(&stack0x00000008 + lVar18) = *(longlong *)(&stack0x00000008 + lVar18) + uVar16;
  bVar24 = *(longlong *)(&stack0x00000008 + lVar18) < 0;
  lVar5 = *(longlong *)(&stack0x00000008 + lVar18);
  bVar22 = (POPCOUNT(*(ulonglong *)(&stack0x00000008 + lVar18) & 0xff) & 1U) == 0;
  *(longlong *)(&stack0xfffffffff2a81088 + lVar17) = lVar9;
  *(undefined4 *)(&stack0xfffffffff2a81088 + lVar17) = 0x90cfe66;
  *(undefined4 *)(&stack0xfffffffff2a8108c + lVar17) = 0;
  if (lVar5 != 0) {
    uVar32 = *(ulonglong *)(&stack0xfffffffff2a81088 + lVar17);
    *(undefined8 *)(&stack0xfffffffff2a81088 + lVar17) = uVar19;
    uVar19 = 8;
    *(ulonglong *)(&stack0xfffffffff2a81080 + lVar17) =
         (ulonglong)bVar29 * 0x4000 | (ulonglong)bVar27 * 0x400 | (ulonglong)bVar26 * 0x200 |
         (ulonglong)bVar25 * 0x100 | (ulonglong)bVar23 * 0x10 | (ulonglong)bVar31 * 0x200000 |
         (ulonglong)bVar30 * 0x40000;
    *(ulonglong *)(&stack0xfffffffff2a81080 + lVar17) =
         *(ulonglong *)(&stack0xfffffffff2a81080 + lVar17) & 0xfffffffffffff7ff;
    puVar7 = (undefined1 *)register0x00000020;
    if ((*(ulonglong *)(&stack0xfffffffff2a81080 + lVar17) & 0x800) == 0) {
      uVar16 = *(ulonglong *)(&stack0xfffffffff2a81098 + lVar17);
      uVar19 = *(undefined8 *)(&stack0xfffffffff2a81088 + lVar17);
      puVar7 = &stack0x00000008;
    }
    *(byte *)(local_res10 + 0x5d) = *(byte *)(local_res10 + 0x5d) | (byte)lVar9;
    *(undefined8 *)(puVar7 + lVar17 + -0xd57ef80) = 0xffffffffffffffa8;
    *(undefined8 *)(puVar7 + lVar17 + -0xd57ef88) = uVar19;
    uVar19 = *(undefined8 *)(puVar7 + lVar17 + -0xd57ef88);
    *(undefined8 *)(puVar7 + lVar17 + -0xd57ef70) = 0;
    *(ulonglong *)(puVar7 + lVar17 + -0xd57ef70) =
         *(longlong *)(puVar7 + lVar17 + -0xd57ef70) + uVar16 + (uVar32 ^ 0x90cfe6e);
    uVar10 = (ulonglong)(puVar7 + lVar17 + -0xd57ef68) & 0xfffffffffffffff0;
    *(undefined8 *)(uVar10 - 0x218) = *(undefined8 *)(puVar7 + lVar18);
    puVar3 = (ulonglong *)(uVar10 - 0x220);
    *(uint *)puVar3 = 0x31c130f5;
    *(uint *)puVar3 = (uint)*puVar3 ^ 0x3db1e3e1;
    pcVar12 = FUN_16143b10c;
    *(undefined8 *)(uVar10 - 0x228) = 0x1647bf768;
    uVar16 = FUN_16143b10c(local_res10,0x2c448b4e);
    *puVar3 = *(ulonglong *)(lVar13 + -0x4f);
    *puVar3 = local_res10;
    *puVar3 = uVar16;
    *(undefined8 *)(uVar10 - 0x228) = unaff_RSI;
    puVar4 = (ulonglong *)(uVar10 - 0x230);
    *puVar4 = lVar13 + 1U;
    *puVar4 = ~*puVar4;
    *puVar4 = *puVar4 + 2;
    *puVar4 = -*puVar4;
    *puVar4 = *puVar4 - 0x2f;
    *(undefined8 *)(uVar10 - 0x238) = 0x1647bf807;
    FUN_164b256b4();
    uVar16 = *(ulonglong *)(uVar10 - 0x228);
    *(ulonglong *)(uVar10 - 0x228) = *(ulonglong *)(uVar10 - 0x228) & local_res10;
    *(ulonglong *)(uVar10 - 0x228) = ~*(ulonglong *)(uVar10 - 0x228);
    *(ulonglong *)(uVar10 - 0x228) = *(ulonglong *)(uVar10 - 0x228) & (uVar16 | local_res10);
    *(ulonglong *)(uVar10 - 0x230) = *puVar4;
    *(ulonglong *)(uVar10 - 0x238) = ~(ulonglong)(pcVar12 + (1 - lVar15)) & uVar11;
    uVar11 = *puVar3;
    *puVar3 = ~*puVar3;
    *(ulonglong *)(uVar10 - 0x240) = ~local_res10 | uVar11;
    uVar11 = *puVar3;
    *puVar3 = *puVar3 & local_res10;
    *puVar3 = (uVar11 + local_res10) - *puVar3;
    uVar32 = *(ulonglong *)(uVar10 - 0x240);
    *(ulonglong *)(uVar10 - 0x240) = lVar13 + 1U;
    uVar11 = *puVar3;
    uVar16 = *puVar3;
    *(longlong *)(uVar10 - 0x248) = lVar8;
    *puVar3 = 0;
    *puVar3 = *puVar3 + ~(uVar32 + (uVar16 - (uVar32 | uVar11)));
    *(undefined8 *)(uVar10 - 0x230) = param_4;
    *(undefined8 *)(uVar10 - 0x238) = uVar19;
    *(ulonglong *)(uVar10 - 0x218) = ~*(ulonglong *)(uVar10 - 0x218);
    *(ulonglong *)(uVar10 - 0x218) = *(ulonglong *)(uVar10 - 0x218) | local_res10;
    FUN_15b0726b3(FUN_15b0726b3);
    return;
  }
  *(ulonglong *)(&stack0xfffffffff2a81080 + lVar17) =
       (ulonglong)bVar29 * 0x4000 | (ulonglong)bVar28 * 0x800 | (ulonglong)bVar27 * 0x400 |
       (ulonglong)bVar26 * 0x200 | (ulonglong)bVar25 * 0x100 | (ulonglong)bVar24 * 0x80 | 0x40 |
       (ulonglong)bVar23 * 0x10 | (ulonglong)bVar22 * 4 | (ulonglong)bVar21 |
       (ulonglong)bVar31 * 0x200000 | (ulonglong)bVar30 * 0x40000;
  *(undefined8 *)(&stack0xfffffffff2a81078 + lVar17) = 0xffffffffffffffa8;
  *(ulonglong *)(&stack0xfffffffff2a81070 + lVar17) = uVar16;
  *(ulonglong *)(&stack0xfffffffff2a81068 + lVar17) =
       (ulonglong)bVar29 * 0x4000 | (ulonglong)bVar28 * 0x800 | (ulonglong)bVar27 * 0x400 |
       (ulonglong)bVar26 * 0x200 | (ulonglong)bVar25 * 0x100 | (ulonglong)bVar24 * 0x80 | 0x40 |
       (ulonglong)bVar23 * 0x10 | (ulonglong)bVar22 * 4 | (ulonglong)bVar21 |
       (ulonglong)bVar31 * 0x200000 | (ulonglong)bVar30 * 0x40000;
  if ((*(ushort *)(&stack0xfffffffff2a81080 + lVar17) & 0x40) == 0) {
    *(code **)(&stack0xfffffffff2a810a8 + lVar17) =
         FUN_1665f31fd + (unaff_R15 & param_1) * -2 + bVar20 + param_1;
    *(longlong *)(&stack0xfffffffff2a810b8 + lVar17) = lVar8 - lVar9;
    FUN_165c7153c(local_res10,*(undefined8 *)(&stack0xfffffffff2a810a0 + lVar17),
                  *(undefined8 *)(&stack0xfffffffff2a81070 + lVar17));
    return;
  }
  FUN_1647bf6c7(local_res10,uVar6);
  return;
}



// FUNCTION 14d8ccd27 FUN_14d8ccd27 body=41 status=ok
// SIG undefined FUN_14d8ccd27(void)

void FUN_14d8ccd27(undefined8 param_1)

{
  longlong in_RAX;
  longlong unaff_R14;
  undefined8 uStackX_18;
  longlong lStack0000000000000030;
  
  lStack0000000000000030 = unaff_R14 - in_RAX;
  FUN_165c7153c(param_1,uStackX_18);
  return;
}



// FUNCTION 14d8cce84 FUN_14d8cce84 body=121 status=ok
// SIG undefined FUN_14d8cce84(void)

/* WARNING: Removing unreachable block (ram,0x0001656d45dc) */
/* WARNING: Removing unreachable block (ram,0x0001656d45e2) */
/* WARNING: Removing unreachable block (ram,0x0001656d4701) */
/* WARNING: Removing unreachable block (ram,0x0001656d4707) */
/* WARNING: Removing unreachable block (ram,0x0001625d3206) */
/* WARNING: Removing unreachable block (ram,0x0001625d3321) */
/* WARNING: Removing unreachable block (ram,0x0001625d3327) */
/* WARNING: Removing unreachable block (ram,0x000162bc00ed) */
/* WARNING: Removing unreachable block (ram,0x000166ca6406) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd007) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd00d) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd099) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd0a5) */
/* WARNING: Removing unreachable block (ram,0x0001570ae094) */
/* WARNING: Removing unreachable block (ram,0x000166bff1f8) */
/* WARNING: Removing unreachable block (ram,0x0001570ae126) */
/* WARNING: Removing unreachable block (ram,0x0001570ae12c) */
/* WARNING: Removing unreachable block (ram,0x000160d4108e) */
/* WARNING: Removing unreachable block (ram,0x000160d410ea) */
/* WARNING: Removing unreachable block (ram,0x000160d410f1) */
/* WARNING: Removing unreachable block (ram,0x000160d411b3) */
/* WARNING: Removing unreachable block (ram,0x000160d411b9) */
/* WARNING: Removing unreachable block (ram,0x0001656d4535) */
/* WARNING: Removing unreachable block (ram,0x0001656d45d7) */
/* WARNING: Removing unreachable block (ram,0x000160d4120b) */
/* WARNING: Removing unreachable block (ram,0x000160d4120e) */
/* WARNING: Removing unreachable block (ram,0x000166bff1e8) */
/* WARNING: Removing unreachable block (ram,0x00014d8ccefd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8cce84(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14d8ccefd FUN_14d8ccefd body=420 status=ok
// SIG undefined FUN_14d8ccefd(void)

/* WARNING: Removing unreachable block (ram,0x0001656d45dc) */
/* WARNING: Removing unreachable block (ram,0x0001656d45e2) */
/* WARNING: Removing unreachable block (ram,0x0001656d4701) */
/* WARNING: Removing unreachable block (ram,0x0001656d4707) */
/* WARNING: Removing unreachable block (ram,0x0001625d3206) */
/* WARNING: Removing unreachable block (ram,0x0001625d3321) */
/* WARNING: Removing unreachable block (ram,0x0001625d3327) */
/* WARNING: Removing unreachable block (ram,0x000162bc00ed) */
/* WARNING: Removing unreachable block (ram,0x000166ca6406) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd007) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd00d) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd099) */
/* WARNING: Removing unreachable block (ram,0x00014d8cd0a5) */
/* WARNING: Removing unreachable block (ram,0x0001570ae094) */
/* WARNING: Removing unreachable block (ram,0x000166bff1f8) */
/* WARNING: Removing unreachable block (ram,0x0001570ae126) */
/* WARNING: Removing unreachable block (ram,0x0001570ae12c) */
/* WARNING: Removing unreachable block (ram,0x000160d4108e) */
/* WARNING: Removing unreachable block (ram,0x000160d410ea) */
/* WARNING: Removing unreachable block (ram,0x000160d410f1) */
/* WARNING: Removing unreachable block (ram,0x000160d411b3) */
/* WARNING: Removing unreachable block (ram,0x000160d411b9) */
/* WARNING: Removing unreachable block (ram,0x0001656d4535) */
/* WARNING: Removing unreachable block (ram,0x0001656d45d7) */
/* WARNING: Removing unreachable block (ram,0x000160d4120b) */
/* WARNING: Removing unreachable block (ram,0x000160d4120e) */
/* WARNING: Removing unreachable block (ram,0x000166bff1e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8ccefd(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + param_2) = in_RAX;
  FUN_15b0487a1();
  uVar1 = FUN_166b68d0d(DAT_15b048729 ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14d8cd0a5 FUN_14d8cd0a5 body=177 status=ok
// SIG undefined FUN_14d8cd0a5(void)

void FUN_14d8cd0a5(undefined8 param_1,undefined8 param_2)

{
  FUN_161e3fa5a(param_1,param_2);
  return;
}



// FUNCTION 14d8cd1d8 FUN_14d8cd1d8 body=285 status=ok
// SIG undefined FUN_14d8cd1d8(void)

void FUN_14d8cd1d8(void)

{
  FUN_16181a8db();
  return;
}



// FUNCTION 14d8cd689 FUN_14d8cd689 body=154 status=ok
// SIG undefined FUN_14d8cd689(void)

void FUN_14d8cd689(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  FUN_162e6b32e(param_1,FUN_162e6b32e);
  return;
}



// FUNCTION 14d8cd7b0 FUN_14d8cd7b0 body=184 status=ok
// SIG undefined FUN_14d8cd7b0(void)

void FUN_14d8cd7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RSI;
  ulonglong local_res8;
  
  local_res8 = (ulonglong)(uint)local_res8;
  if (unaff_RSI == (local_res8 ^ 0x174d520a)) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI - (local_res8 ^ 0x174d520a) != 1) {
    return;
  }
  (*(code *)&LAB_16280e086)(param_1,&LAB_16280e086,param_3,FUN_16131bb16);
  return;
}



// FUNCTION 14d8cdaa2 FUN_14d8cdaa2 body=103 status=ok
// SIG undefined FUN_14d8cdaa2(void)

ulonglong FUN_14d8cdaa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  ulonglong local_res10;
  longlong local_res20;
  
                    /* WARNING: Read-only address (ram,0x00014d7a9cfc) is written */
  LOCK();
  uRam000000014d7a9cfc = (undefined1)local_res10;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(undefined8 *)(local_res20 + -0x18) = param_2;
  *(undefined **)(local_res20 + -0x10) = &DAT_14d8cdb0a;
  return local_res10 & 0xffffffffffffff00;
}



// FUNCTION 14d8cdcd4 FUN_14d8cdcd4 body=72 status=ok
// SIG undefined FUN_14d8cdcd4(void)

void FUN_14d8cdcd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_14d7aaa85(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d8cdfff FUN_14d8cdfff body=140 status=ok
// SIG undefined FUN_14d8cdfff(void)

void FUN_14d8cdfff(void)

{
  (*(code *)0x161bdba21)();
  return;
}



// FUNCTION 14d8ce133 FUN_14d8ce133 body=291 status=ok
// SIG undefined FUN_14d8ce133(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ce1b4) */

void FUN_14d8ce133(void)

{
  uint in_R10D;
  uint *unaff_retaddr;
  
  *unaff_retaddr = ~(*unaff_retaddr | ~in_R10D) + 1 + ~in_R10D + *unaff_retaddr;
  *unaff_retaddr = ~*unaff_retaddr;
  return;
}



// FUNCTION 14d8ce25a FUN_14d8ce25a body=166 status=ok
// SIG undefined FUN_14d8ce25a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ce2f0) */

void FUN_14d8ce25a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x60) != 0) {
    FUN_16224ea2e(0xffffffffffffffff,*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15);
    return;
  }
  FUN_166542b19(0,FUN_166542b19,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,unaff_R15);
  return;
}



// FUNCTION 14d8ce301 FUN_14d8ce301 body=124 status=ok
// SIG undefined FUN_14d8ce301(void)

void FUN_14d8ce301(undefined8 param_1)

{
  byte unaff_SIL;
  
  FUN_162c8497c(param_1,FUN_162c8497c,(-0x56 - (unaff_SIL | 0xaa)) + unaff_SIL);
  return;
}



// FUNCTION 14d8ce41c FUN_14d8ce41c body=123 status=ok
// SIG undefined FUN_14d8ce41c(void)

void FUN_14d8ce41c(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = *(ulonglong *)(unaff_RSI + 0x10) ^ 0xffffffffffffffff;
  uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) = ~*(ulonglong *)(unaff_RSI + 0x10);
  *(ulonglong *)(unaff_RSI + 0x10) =
       (~(uVar2 & param_1) + param_1) - *(longlong *)(unaff_RSI + 0x10);
  uVar2 = *(ulonglong *)(unaff_RSI + 0x10);
  *(undefined8 *)(unaff_RSI + 0x10) = 0;
  *(longlong *)(unaff_RSI + 0x10) =
       *(longlong *)(unaff_RSI + 0x10) + ~(~(~unaff_R15 & ~uVar1) & uVar2);
  FUN_1612b4bba(FUN_1612b4bba);
  return;
}



// FUNCTION 14d8ce498 FUN_14d8ce498 body=304 status=ok
// SIG undefined FUN_14d8ce498(void)

/* WARNING: Instruction at (ram,0x00016652fc94) overlaps instruction at (ram,0x00016652fc93)
    */
/* WARNING: Removing unreachable block (ram,0x00016652fc68) */
/* WARNING: Removing unreachable block (ram,0x00016652fc79) */
/* WARNING: Removing unreachable block (ram,0x00016652fc94) */
/* WARNING: Removing unreachable block (ram,0x00016652fc93) */
/* WARNING: Removing unreachable block (ram,0x00016652fc6e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ce538) */

void FUN_14d8ce498(void)

{
  FUN_1660f1d58();
  return;
}



// FUNCTION 14d8ce538 FUN_14d8ce538 body=28 status=ok
// SIG undefined FUN_14d8ce538(void)

void FUN_14d8ce538(void)

{
  return;
}



// FUNCTION 14d8ce73c FUN_14d8ce73c body=163 status=ok
// SIG undefined FUN_14d8ce73c(void)

void FUN_14d8ce73c(longlong param_1)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  
  FUN_1668f8da7(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ 0xffffffffffffffff | in_RAX,param_1 - unaff_RSI)
  ;
  return;
}



// FUNCTION 14d8ce7e1 FUN_14d8ce7e1 body=158 status=ok
// SIG undefined FUN_14d8ce7e1(void)

void FUN_14d8ce7e1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char unaff_BPL;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_R10;
  char unaff_R12B;
  
  uVar1 = 0xffffffffffffffff - in_R10 | *(ulonglong *)(param_3 + -0x78);
  uVar2 = ~*(ulonglong *)(param_3 + -0x78) | in_R10;
  (*(code *)0x1668e2cef)
            (unaff_BPL - unaff_R12B,0xffffffffb8b4e87c,param_3,~((uVar2 - (uVar1 | uVar2)) + uVar1))
  ;
  return;
}



// FUNCTION 14d8ce887 FUN_14d8ce887 body=320 status=ok
// SIG undefined FUN_14d8ce887(void)

void FUN_14d8ce887(void)

{
  FUN_161138c49();
  FUN_165d0eb9a();
  return;
}



// FUNCTION 14d8cea72 FUN_14d8cea72 body=10 status=ok
// SIG undefined FUN_14d8cea72(void)

void FUN_14d8cea72(void)

{
  return;
}



// FUNCTION 14d8cebb5 FUN_14d8cebb5 body=112 status=ok
// SIG undefined FUN_14d8cebb5(void)

void FUN_14d8cebb5(void)

{
  FUN_15664a888();
  return;
}



// FUNCTION 14d8cecbe FUN_14d8cecbe body=158 status=ok
// SIG undefined FUN_14d8cecbe(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ced58) */
/* WARNING: Removing unreachable block (ram,0x00015b13f936) */
/* WARNING: Removing unreachable block (ram,0x00015b13f9c7) */
/* WARNING: Removing unreachable block (ram,0x00015b13f9cd) */
/* WARNING: Removing unreachable block (ram,0x000165416414) */
/* WARNING: Removing unreachable block (ram,0x000165416446) */

void FUN_14d8cecbe(void)

{
  FUN_15b13f936();
  return;
}



// FUNCTION 14d8ced5e FUN_14d8ced5e body=308 status=ok
// SIG undefined FUN_14d8ced5e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cede7) */
/* WARNING: Removing unreachable block (ram,0x00014d8cedf8) */
/* WARNING: Removing unreachable block (ram,0x000161d443b4) */
/* WARNING: Removing unreachable block (ram,0x000161d443ba) */
/* WARNING: Removing unreachable block (ram,0x000161d4442c) */
/* WARNING: Removing unreachable block (ram,0x000161d44455) */
/* WARNING: Removing unreachable block (ram,0x00014d8cedf3) */

void FUN_14d8ced5e(LPCSTR param_1)

{
  undefined8 unaff_RBP;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000028 - 8) = in_R11;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RBP;
  *(undefined **)(in_stack_00000028 - 8) = &DAT_14dfb4eb0;
                    /* WARNING: Could not recover jumptable at 0x00014dfb4e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14d8cee96 FUN_14d8cee96 body=323 status=ok
// SIG undefined FUN_14d8cee96(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cefdb) */

undefined8 FUN_14d8cee96(undefined8 param_1)

{
  undefined8 uVar1;
  short sVar2;
  ulonglong uVar3;
  ushort local_res10;
  uint local_res20;
  
  uVar3 = (ulonglong)local_res20;
  FUN_15b45ad6e();
  sVar2 = (local_res10 | 0x100) - 0x100;
  if (-1 < sVar2) {
    uVar1 = FUN_156d5559f(param_1,sVar2,uVar3);
    return uVar1;
  }
  uVar1 = FUN_156d5559f(param_1,sVar2,uVar3);
  return uVar1;
}



// FUNCTION 14d8cefdb FUN_14d8cefdb body=81 status=ok
// SIG undefined FUN_14d8cefdb(void)

longlong FUN_14d8cefdb(void)

{
  longlong in_R9;
  longlong unaff_R15;
  
  return in_R9 + unaff_R15;
}



// FUNCTION 14d8cf064 FUN_14d8cf064 body=615 status=ok
// SIG undefined FUN_14d8cf064(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cf1a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf238) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf23e) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf243) */
/* WARNING: Removing unreachable block (ram,0x0001610169a9) */
/* WARNING: Removing unreachable block (ram,0x000161016a00) */
/* WARNING: Removing unreachable block (ram,0x000161016a03) */
/* WARNING: Removing unreachable block (ram,0x000161016ab3) */
/* WARNING: Removing unreachable block (ram,0x000161016aae) */
/* WARNING: Removing unreachable block (ram,0x000161016ac5) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf195) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf0f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf11b) */
/* WARNING: Removing unreachable block (ram,0x000165e4a7a2) */
/* WARNING: Removing unreachable block (ram,0x000165e4a79d) */

void FUN_14d8cf064(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar1;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RSI;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  uVar1 = *(ulonglong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x1b6152;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = 0x161e11808;
  if ((*(ulonglong *)(local_res10 + -0x20) & 0x40) != 0) {
    return;
  }
  FUN_156f53269();
  return;
}



// FUNCTION 14d8cf2cf FUN_14d8cf2cf body=166 status=ok
// SIG undefined FUN_14d8cf2cf(void)

void FUN_14d8cf2cf(void)

{
  return;
}



// FUNCTION 14d8cf41b FUN_14d8cf41b body=42 status=ok
// SIG undefined FUN_14d8cf41b(void)

void FUN_14d8cf41b(void)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14d8cf4b1 FUN_14d8cf4b1 body=122 status=ok
// SIG undefined FUN_14d8cf4b1(void)

void FUN_14d8cf4b1(void)

{
  ulonglong in_R9;
  longlong in_R11;
  undefined8 unaff_R12;
  
  *(undefined8 *)
   (&stack0x00000020 + in_R11 + ~(~(in_R9 & 0xfffffffffe53d112) & (in_R9 | 0xfffffffffe53d112))) =
       unaff_R12;
  return;
}



// FUNCTION 14d8cf55c FUN_14d8cf55c body=339 status=ok
// SIG undefined FUN_14d8cf55c(void)

/* WARNING: Removing unreachable block (ram,0x00015b49f9c8) */
/* WARNING: Removing unreachable block (ram,0x00014d8cf604) */
/* WARNING: Removing unreachable block (ram,0x00014d9aa1c1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8cf55c(ulonglong param_1)

{
  bool bVar1;
  bool bVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  if ((longlong)(*(ulonglong *)(param_1 - 0x88) ^ unaff_RBX) < 0) {
    FUN_15b49f91d();
    return;
  }
  uVar5 = *(ulonglong *)(param_1 - 0x48) ^ unaff_RBX;
  bVar1 = (param_1 & 0x1f) != 0;
  bVar2 = ~(~(uint)*(undefined8 *)(param_1 - 0x80) & ~(uint)unaff_RBX) << ((byte)param_1 & 0x1f) ==
          0;
  if ((!bVar1 && uVar5 == 0 || bVar1 && bVar2) && ((bVar1 || uVar5 != 0) && (!bVar1 || !bVar2))) {
    uVar3 = ~((unaff_R15 ^ 0xffffffffffffffff | uVar5) & (~uVar5 | unaff_R15));
    FUN_14e18b7c1(param_1,local_res8);
    uVar5 = *(ulonglong *)(uVar3 - 0x68);
    lVar4 = uVar5 + param_1 + (uVar5 & param_1) * -2;
    uVar5 = *(ulonglong *)(uVar3 - 0x88);
    if (-1 < (longlong)(uVar5 + param_1 + (uVar5 & param_1) * -2)) {
      FUN_16689c430(param_1,lVar4);
      return;
    }
    FUN_16689c430(param_1,lVar4);
    return;
  }
  (*(code *)0x165ff34cb)(param_1,*(ulonglong *)(param_1 - 0x78) ^ unaff_RBX);
  return;
}



// FUNCTION 14d8cf73a FUN_14d8cf73a body=138 status=ok
// SIG undefined FUN_14d8cf73a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8cf7c4) */

void FUN_14d8cf73a(undefined8 param_1)

{
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  if (unaff_RSI == 0) {
    thunk_FUN_15b642ca5(param_1,in_stack_00000008);
    return;
  }
  FUN_14ded28d9();
  return;
}



// FUNCTION 14d8cf7c4 FUN_14d8cf7c4 body=271 status=ok
// SIG undefined FUN_14d8cf7c4(void)

void FUN_14d8cf7c4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161d97c38(~(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX ^ 0xffffffffffffffff) |
                 ~(*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)));
  FUN_16278287c();
  return;
}



// FUNCTION 14d8cfa78 FUN_14d8cfa78 body=120 status=ok
// SIG undefined FUN_14d8cfa78(void)

void FUN_14d8cfa78(void)

{
  FUN_164a39fef();
  FUN_14d8cfaf2();
  return;
}



// FUNCTION 14d8cfaf2 FUN_14d8cfaf2 body=118 status=ok
// SIG undefined FUN_14d8cfaf2(void)

void FUN_14d8cfaf2(undefined8 param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_RSI);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  *puVar1 = *puVar1 - unaff_R15;
  *puVar1 = in_RAX;
  FUN_164a38217(-1 - (~(uVar2 & ~in_RAX) & (~in_RAX + uVar2) - (~in_RAX & uVar2)));
  return;
}



// FUNCTION 14d8cfb69 FUN_14d8cfb69 body=128 status=ok
// SIG undefined FUN_14d8cfb69(void)

void FUN_14d8cfb69(void)

{
  return;
}



// FUNCTION 14d8cfc1d FUN_14d8cfc1d body=32 status=ok
// SIG undefined FUN_14d8cfc1d(void)

void FUN_14d8cfc1d(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  LOCK();
  *(int *)(unaff_RBX + 8) = *(int *)(unaff_RBX + 8) + 1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x30a98;
  FUN_161668703(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8cfcaa FUN_14d8cfcaa body=24 status=ok
// SIG undefined FUN_14d8cfcaa(void)

undefined8 FUN_14d8cfcaa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8cfe2e FUN_14d8cfe2e body=181 status=ok
// SIG undefined FUN_14d8cfe2e(void)

void FUN_14d8cfe2e(void)

{
  FUN_166978fd8();
  return;
}



// FUNCTION 14d8cff7d FUN_14d8cff7d body=128 status=ok
// SIG undefined FUN_14d8cff7d(void)

void FUN_14d8cff7d(void)

{
  FUN_1624e1bfc();
  return;
}



// FUNCTION 14d8d0007 FUN_14d8d0007 body=136 status=ok
// SIG undefined FUN_14d8d0007(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d008e) */

void FUN_14d8d0007(void)

{
  return;
}



// FUNCTION 14d8d00b7 FUN_14d8d00b7 body=128 status=ok
// SIG undefined FUN_14d8d00b7(void)

void FUN_14d8d00b7(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  (*(code *)&LAB_1628e20c0)
            ((-in_RAX - *(ulonglong *)(unaff_R12 + -0x58)) +
             (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX) * 2,
             *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,~(param_3 & in_RAX) & unaff_RBX);
  return;
}



// FUNCTION 14d8d01c2 FUN_14d8d01c2 body=301 status=ok
// SIG undefined FUN_14d8d01c2(void)

void FUN_14d8d01c2(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156ea2924(param_1,-*(longlong *)(unaff_RDI + -0x68),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  FUN_161233428();
  return;
}



// FUNCTION 14d8d02f1 FUN_14d8d02f1 body=163 status=ok
// SIG undefined FUN_14d8d02f1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d0394) */
/* WARNING: Removing unreachable block (ram,0x00014d8d0384) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d02f1(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14da835b9(FUN_14da835b9,-1 - (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)));
  return;
}



// FUNCTION 14d8d0394 FUN_14d8d0394 body=175 status=ok
// SIG undefined FUN_14d8d0394(void)

void FUN_14d8d0394(void)

{
  FUN_15af4e42d();
  return;
}



// FUNCTION 14d8d04d4 FUN_14d8d04d4 body=12 status=ok
// SIG undefined FUN_14d8d04d4(void)

void FUN_14d8d04d4(undefined8 param_1)

{
  FUN_166a62797(param_1,0x14d7c1ea6);
  return;
}



// FUNCTION 14d8d05e8 FUN_14d8d05e8 body=148 status=ok
// SIG undefined FUN_14d8d05e8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d066c) */
/* WARNING: Removing unreachable block (ram,0x00014d8d0672) */
/* WARNING: Removing unreachable block (ram,0x00016606296a) */

void FUN_14d8d05e8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1657d29c4(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),*(undefined8 *)(unaff_R13 + -8));
  return;
}



// FUNCTION 14d8d07e3 FUN_14d8d07e3 body=136 status=ok
// SIG undefined FUN_14d8d07e3(void)

void FUN_14d8d07e3(void)

{
  return;
}



// FUNCTION 14d8d09bc FUN_14d8d09bc body=442 status=ok
// SIG undefined FUN_14d8d09bc(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d0ab9) */
/* WARNING: Removing unreachable block (ram,0x00014d8d0a4a) */

void FUN_14d8d09bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15695d9dd(*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4);
  return;
}



// FUNCTION 14d8d0ae3 FUN_14d8d0ae3 body=173 status=ok
// SIG undefined FUN_14d8d0ae3(void)

undefined8 FUN_14d8d0ae3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d0b91 FUN_14d8d0b91 body=178 status=ok
// SIG undefined FUN_14d8d0b91(void)

void FUN_14d8d0b91(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0xc80ea) {
    return;
  }
  return;
}



// FUNCTION 14d8d0c44 FUN_14d8d0c44 body=122 status=ok
// SIG undefined FUN_14d8d0c44(void)

void FUN_14d8d0c44(void)

{
  return;
}



// FUNCTION 14d8d0ccb FUN_14d8d0ccb body=122 status=ok
// SIG undefined FUN_14d8d0ccb(void)

void FUN_14d8d0ccb(void)

{
  FUN_165caa1cc();
  return;
}



// FUNCTION 14d8d0dda FUN_14d8d0dda body=159 status=ok
// SIG undefined FUN_14d8d0dda(void)

void FUN_14d8d0dda(void)

{
  return;
}



// FUNCTION 14d8d0ff2 FUN_14d8d0ff2 body=164 status=ok
// SIG undefined FUN_14d8d0ff2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d1096) */
/* WARNING: Removing unreachable block (ram,0x00014d8d109c) */
/* WARNING: Removing unreachable block (ram,0x00014da341bb) */

void FUN_14d8d0ff2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong unaff_RBP;
  longlong lVar2;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong local_res18;
  
  lVar2 = unaff_RBP - local_res18;
  *(undefined8 *)(lVar2 + -0x10) = param_1;
  *(undefined8 *)(lVar2 + -0x18) = param_4;
  *(undefined8 *)(lVar2 + -8) = in_R10;
  *(undefined **)(lVar2 + -0x10) = &DAT_150297199;
  *(longlong *)(lVar2 + -0x10) = *(longlong *)(lVar2 + -0x10) + -0x2862f55;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x20) = unaff_R12;
  puVar1 = (uint *)(lVar2 + -0x28);
  *puVar1 = 0x71da3e5c;
  *puVar1 = *puVar1 ^ 0x5d3807ef;
  FUN_14da341bb();
  return;
}



// FUNCTION 14d8d109c FUN_14d8d109c body=161 status=ok
// SIG undefined FUN_14d8d109c(void)

void FUN_14d8d109c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_15b6c4586(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,FUN_15b6c4586);
  return;
}



// FUNCTION 14d8d113d FUN_14d8d113d body=15 status=ok
// SIG undefined FUN_14d8d113d(void)

void FUN_14d8d113d(void)

{
  return;
}



// FUNCTION 14d8d11c7 FUN_14d8d11c7 body=41 status=ok
// SIG undefined FUN_14d8d11c7(void)

void FUN_14d8d11c7(void)

{
  return;
}



// FUNCTION 14d8d15c8 FUN_14d8d15c8 body=140 status=ok
// SIG undefined FUN_14d8d15c8(void)

void FUN_14d8d15c8(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_164b10511(param_1,2,~((~(~param_1 & param_3) + param_3) - param_1 & (~param_3 | param_1)));
  return;
}



// FUNCTION 14d8d194e FUN_14d8d194e body=137 status=ok
// SIG undefined FUN_14d8d194e(void)

void FUN_14d8d194e(void)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 in_R11;
  int unaff_R12D;
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
  ulonglong uVar17;
  ulonglong uStackX_8;
  undefined8 *local_res10;
  
  bVar12 = (uStackX_8 & 0x4000) != 0;
  bVar11 = (uStackX_8 & 0x800) != 0;
  bVar10 = (uStackX_8 & 0x200) != 0;
  bVar9 = (uStackX_8 & 0x100) != 0;
  bVar8 = (uStackX_8 & 0x80) != 0;
  bVar7 = (uStackX_8 & 0x40) != 0;
  bVar6 = (uStackX_8 & 0x10) != 0;
  bVar5 = (uStackX_8 & 4) != 0;
  bVar4 = (uStackX_8 & 1) != 0;
  bVar16 = (uStackX_8 & 0x200000) != 0;
  bVar13 = (uStackX_8 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res10 = in_R10;
  local_res10[-1] = in_R10;
  local_res10[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  local_res10[-3] = in_R9;
  *(undefined4 *)(local_res10 + -4) = 0x12ab7d59;
  *(undefined4 *)((longlong)local_res10 + -0x1c) = 0;
  uVar17 = local_res10[-4];
  local_res10[-4] = 0x77052e4;
  local_res10[-4] = local_res10[-4] - (uVar17 ^ 0x12ce7b21);
  uVar2 = local_res10[-4];
  uVar17 = local_res10[-2];
  local_res10[-2] = unaff_RDI;
  local_res10[-3] =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  local_res10[-4] = unaff_R14;
  local_res10[-5] = in_R11;
  *local_res10 = uVar2;
  uVar2 = local_res10[-2];
  local_res10[-2] = FUN_14d8d19d7;
  iVar3 = FUN_15725f8e8();
  local_res10[-1] = (ulonglong)(uint)(unaff_R12D - iVar3);
  local_res10[-2] = unaff_RSI;
  local_res10[-3] = uVar2;
  FUN_1623e3e4e();
  return;
}



// FUNCTION 14d8d19d7 FUN_14d8d19d7 body=168 status=ok
// SIG undefined FUN_14d8d19d7(void)

void FUN_14d8d19d7(undefined8 param_1)

{
  FUN_1623e3e4e(param_1,0x7e57f34c,FUN_1623e3e4e);
  return;
}



// FUNCTION 14d8d1a80 FUN_14d8d1a80 body=169 status=ok
// SIG undefined FUN_14d8d1a80(void)

void FUN_14d8d1a80(void)

{
  return;
}



// FUNCTION 14d8d1bc7 FUN_14d8d1bc7 body=52 status=ok
// SIG undefined FUN_14d8d1bc7(void)

void FUN_14d8d1bc7(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8d1ed7 FUN_14d8d1ed7 body=152 status=ok
// SIG undefined FUN_14d8d1ed7(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d1f75) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d1ed7(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  undefined1 unaff_SIL;
  undefined7 unaff_00000031;
  longlong in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong *puVar6;
  longlong in_stack_00000008;
  ulonglong local_res10;
  ulonglong uStackX_20;
  
  puVar6 = (ulonglong *)~((~unaff_RBX | uStackX_20) & (~uStackX_20 | unaff_RBX));
  puVar6[-1] = unaff_R13;
  puVar6[-2] = 0x16489dc9d;
  uVar5 = FUN_14e001ef4(param_1 + unaff_RBX + (param_1 & unaff_RBX) * -2);
  puVar6[-1] = unaff_R14;
  uVar3 = puVar6[-1];
  uVar1 = *(ulonglong *)(CONCAT71(unaff_00000031,unaff_SIL) + in_R10 + 0x16479d91);
  *puVar6 = unaff_RBP;
  puVar6[2] = uVar1;
  uVar4 = *puVar6;
  puVar6[1] = param_3;
  *puVar6 = param_3;
  uVar1 = *(ulonglong *)(CONCAT71(unaff_00000031,unaff_SIL) + -8);
  puVar6[-1] = uVar5;
  puVar6[1] = 0;
  puVar6[1] = puVar6[1] ^ uVar1;
  *puVar6 = uVar4;
  puVar6[-1] = uVar4;
  puVar6[-2] = uVar3;
  puVar6[-3] = 0x16489dd3a;
  FUN_161816efc();
  lVar2 = *(longlong *)(in_stack_00000008 + -0x98);
  puVar6[-2] = unaff_R12;
  *puVar6 = 0;
  *puVar6 = *puVar6 ^ 0x5f6f6717;
  *puVar6 = *puVar6 ^ 0x5f6f6717;
  *puVar6 = *puVar6 - lVar2;
  *puVar6 = -*puVar6;
  puVar6[-1] = param_2;
  puVar6[-2] = *(ulonglong *)(in_stack_00000008 + -0xa0);
  puVar6[-1] = (-~unaff_RBX - (~local_res10 + 2)) + (local_res10 & unaff_RBX) * -2;
  puVar6[-1] = in_R11;
  (*(code *)0x166675346)();
  return;
}



// FUNCTION 14d8d1f75 FUN_14d8d1f75 body=165 status=ok
// SIG undefined FUN_14d8d1f75(void)

void FUN_14d8d1f75(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1610efa5a(3,*(ulonglong *)(unaff_RDI + -0x60) + param_1,FUN_1610efa5a,
                *(ulonglong *)(unaff_RDI + -0x60) & param_1);
  return;
}



// FUNCTION 14d8d2127 thunk_FUN_14d8d212d body=5 status=ok
// SIG undefined thunk_FUN_14d8d212d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d226a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2275) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2270) */
/* WARNING: Removing unreachable block (ram,0x00014d8d21bc) */

undefined8 thunk_FUN_14d8d212d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d212d FUN_14d8d212d body=476 status=ok
// SIG undefined FUN_14d8d212d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d226a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2275) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2270) */
/* WARNING: Removing unreachable block (ram,0x00014d8d21bc) */

undefined8 FUN_14d8d212d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d230e FUN_14d8d230e body=209 status=ok
// SIG undefined FUN_14d8d230e(void)

void FUN_14d8d230e(ulonglong param_1)

{
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  FUN_1651d11ca(param_1 ^ unaff_R15);
  *(longlong *)(unaff_R14 + 8) = -*(longlong *)(unaff_R14 + 8);
  FUN_14d7c0201();
  return;
}



// FUNCTION 14d8d2599 FUN_14d8d2599 body=129 status=ok
// SIG undefined FUN_14d8d2599(void)

void FUN_14d8d2599(void)

{
  (*(code *)&LAB_15b2e3f57)();
  return;
}



// FUNCTION 14d8d27f3 FUN_14d8d27f3 body=297 status=ok
// SIG undefined FUN_14d8d27f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d2873) */
/* WARNING: Removing unreachable block (ram,0x00014d8d286d) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2878) */
/* WARNING: Removing unreachable block (ram,0x000161513aa1) */
/* WARNING: Removing unreachable block (ram,0x00015b230622) */
/* WARNING: Removing unreachable block (ram,0x000161513ba0) */
/* WARNING: Removing unreachable block (ram,0x000161513bb6) */
/* WARNING: Removing unreachable block (ram,0x000161513b95) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00015b2305be */
/* WARNING: Removing unreachable block (ram,0x00015b230617) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d27f3(void)

{
  FUN_15b44eb0d();
  return;
}



// FUNCTION 14d8d291c FUN_14d8d291c body=311 status=ok
// SIG undefined FUN_14d8d291c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d29ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8d29b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8d29e4) */

ulonglong FUN_14d8d291c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~(uVar1 & param_1) & (~(uVar1 & param_1) + param_1) - ~uVar1;
}



// FUNCTION 14d8d2af2 FUN_14d8d2af2 body=275 status=ok
// SIG undefined FUN_14d8d2af2(void)

void FUN_14d8d2af2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166697dfd(param_1,param_2,param_3);
  FUN_14e0a204b(FUN_14e0a204b,0);
  return;
}



// FUNCTION 14d8d2c08 FUN_14d8d2c08 body=155 status=ok
// SIG undefined FUN_14d8d2c08(void)

/* WARNING: Removing unreachable block (ram,0x0001574992ab) */
/* WARNING: Removing unreachable block (ram,0x00014d8d2ca3) */

void FUN_14d8d2c08(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong lVar1;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R14;
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(param_3 + 8) = 0;
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) ^ ~unaff_R14;
  lVar1 = param_6 + in_stack_00000008 + (param_6 & in_stack_00000008) * -2;
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = in_R10;
  *(undefined8 *)(lVar1 + -0x18) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
  *(undefined8 *)(lVar1 + -0x10) = in_R11;
  *(undefined8 *)(lVar1 + -0x18) = in_R11;
  *(undefined8 *)(lVar1 + -0x20) = unaff_RDI;
  *(undefined8 *)(lVar1 + -0x28) = in_RAX;
  *(undefined4 *)(lVar1 + -0x28) = 0xd1513608;
  *(undefined8 *)(lVar1 + -0x30) = in_stack_00000018;
  *(undefined8 *)(lVar1 + -0x38) = in_stack_00000018;
  *(undefined **)(lVar1 + -0x30) = &DAT_1574992c4;
  return;
}



// FUNCTION 14d8d2ca3 FUN_14d8d2ca3 body=156 status=ok
// SIG undefined FUN_14d8d2ca3(void)

void FUN_14d8d2ca3(void)

{
  (*(code *)0x156f67bcb)();
  return;
}



// FUNCTION 14d8d2d40 FUN_14d8d2d40 body=47 status=ok
// SIG undefined FUN_14d8d2d40(void)

void FUN_14d8d2d40(void)

{
  code in_AL;
  undefined2 *unaff_RBX;
  undefined2 unaff_DI;
  longlong in_stack_00000028;
  
  *unaff_RBX = unaff_DI;
  LOCK();
  UNLOCK();
  FUN_14d7a84e5 = in_AL;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x1163f54;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d8d2de4 FUN_14d8d2de4 body=116 status=ok
// SIG undefined FUN_14d8d2de4(void)

void FUN_14d8d2de4(void)

{
  return;
}



// FUNCTION 14d8d2e6e FUN_14d8d2e6e body=15 status=ok
// SIG undefined FUN_14d8d2e6e(void)

void FUN_14d8d2e6e(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8d2f28 thunk_FUN_14d8d2f2e body=5 status=ok
// SIG undefined thunk_FUN_14d8d2f2e(void)

void thunk_FUN_14d8d2f2e(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + unaff_RDI + 0x7a62a8d);
  uVar2 = ~unaff_RBX & ~uVar1;
  FUN_15761e0ab(param_1,~((0xffffffffffffffff - unaff_RBX | uVar1) &
                         (~(uVar2 & unaff_RBX) + unaff_RBX) - ~uVar2));
  return;
}



// FUNCTION 14d8d2f2e FUN_14d8d2f2e body=123 status=ok
// SIG undefined FUN_14d8d2f2e(void)

void FUN_14d8d2f2e(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + unaff_RDI + 0x7a62a8d);
  uVar2 = ~unaff_RBX & ~uVar1;
  FUN_15761e0ab(param_1,~((0xffffffffffffffff - unaff_RBX | uVar1) &
                         (~(uVar2 & unaff_RBX) + unaff_RBX) - ~uVar2));
  return;
}



// FUNCTION 14d8d2faa FUN_14d8d2faa body=118 status=ok
// SIG undefined FUN_14d8d2faa(void)

void FUN_14d8d2faa(void)

{
  return;
}



// FUNCTION 14d8d3069 FUN_14d8d3069 body=52 status=ok
// SIG undefined FUN_14d8d3069(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8d3069(byte param_1,longlong param_2)

{
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(float *)(param_2 + -0x64e35339) = (float)in_ST0;
  *(uint *)(param_2 + -0x31) = *(uint *)(param_2 + -0x31) | 0x1b1f5346;
  *(byte *)(unaff_RDI + 0x1d) = *(byte *)(unaff_RDI + 0x1d) ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8d3106 FUN_14d8d3106 body=164 status=ok
// SIG undefined FUN_14d8d3106(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d31ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8d3106(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x60);
  if (uVar1 == 0) {
    FUN_161712601();
    return;
  }
  (*(code *)0x1665b116f)
            (*(ulonglong *)(unaff_RSI + -0x38) ^ unaff_RBP,0,
             uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2,
             *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d8d31ab thunk_FUN_14d8d31b1 body=5 status=ok
// SIG undefined thunk_FUN_14d8d31b1(void)

void thunk_FUN_14d8d31b1(void)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_1573e60bf(unaff_retaddr,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14d8d31b1 FUN_14d8d31b1 body=117 status=ok
// SIG undefined FUN_14d8d31b1(void)

void FUN_14d8d31b1(void)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  FUN_1573e60bf(unaff_retaddr,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14d8d338b FUN_14d8d338b body=164 status=ok
// SIG undefined FUN_14d8d338b(void)

/* WARNING: Removing unreachable block (ram,0x0001665a870a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d34cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8d34d5) */
/* WARNING: Removing unreachable block (ram,0x0001665a8675) */
/* WARNING: Removing unreachable block (ram,0x00014d84d262) */
/* WARNING: Removing unreachable block (ram,0x0001665a867b) */
/* WARNING: Removing unreachable block (ram,0x00014d8d3431) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8d338b(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (-1 < (longlong)LoadLibraryA_exref) {
    return in_RAX;
  }
  uVar1 = FUN_165fcddb1();
  return uVar1;
}



// FUNCTION 14d8d3431 FUN_14d8d3431 body=342 status=ok
// SIG undefined FUN_14d8d3431(void)

/* WARNING: Removing unreachable block (ram,0x0001665a870a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d34cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8d34d5) */
/* WARNING: Removing unreachable block (ram,0x0001665a8675) */
/* WARNING: Removing unreachable block (ram,0x00014d84d262) */
/* WARNING: Removing unreachable block (ram,0x0001665a867b) */

undefined8 FUN_14d8d3431(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1565d0fa6();
  return uVar1;
}



// FUNCTION 14d8d3843 FUN_14d8d3843 body=145 status=ok
// SIG undefined FUN_14d8d3843(void)

undefined8 FUN_14d8d3843(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d394b FUN_14d8d394b body=159 status=ok
// SIG undefined FUN_14d8d394b(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d394b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_162b712dd)(param_1,param_2,param_3,0x6e8b1098);
  return;
}



// FUNCTION 14d8d3a55 FUN_14d8d3a55 body=118 status=ok
// SIG undefined FUN_14d8d3a55(void)

void FUN_14d8d3a55(void)

{
  undefined8 unaff_RBX;
  undefined8 in_R9;
  ulonglong unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = in_R9;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x14d8d3aec;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8d3b14 FUN_14d8d3b14 body=323 status=ok
// SIG undefined FUN_14d8d3b14(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d3bac) */

void FUN_14d8d3b14(ushort param_1)

{
  code *pcVar1;
  short *unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ushort in_R10W;
  ushort unaff_R15W;
  bool bVar2;
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
  ulonglong uVar15;
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  *unaff_RBX = (~(in_R10W | ~((param_1 ^ 0xffff) & ~(~unaff_R15W & 0xaaf1))) - 0x100) + *unaff_RBX;
  bVar10 = (in_stack_00000028 & 0x4000) != 0;
  bVar9 = (in_stack_00000028 & 0x800) != 0;
  bVar8 = (in_stack_00000028 & 0x200) != 0;
  bVar7 = (in_stack_00000028 & 0x100) != 0;
  bVar6 = (in_stack_00000028 & 0x80) != 0;
  bVar5 = (in_stack_00000028 & 0x40) != 0;
  bVar4 = (in_stack_00000028 & 0x10) != 0;
  bVar3 = (in_stack_00000028 & 4) != 0;
  bVar2 = (in_stack_00000028 & 1) != 0;
  bVar14 = (in_stack_00000028 & 0x200000) != 0;
  bVar11 = (in_stack_00000028 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *in_stack_00000030 = local_res18;
  in_stack_00000030[-1] = local_res18;
  in_stack_00000030[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((in_stack_00000028 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *(undefined4 *)(in_stack_00000030 + -3) = 0x2d37d37e;
  *(undefined4 *)((longlong)in_stack_00000030 + -0x14) = 0;
  if (!bVar2) {
    FUN_14dd60134();
    return;
  }
  uVar15 = in_stack_00000030[-2];
  in_stack_00000030[-2] =
       (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar15 & 0x400) != 0) * 0x400 | (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar15 & 0x100) != 0) * 0x100 | (ulonglong)((uVar15 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar15 & 0x40) != 0) * 0x40 | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar15 & 4) != 0) * 4 | (ulonglong)((uVar15 & 1) != 0) |
       (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  in_stack_00000030[-3] = unaff_RSI;
  in_stack_00000030[-4] = local_res20;
  in_stack_00000030[-5] = unaff_RDI;
  in_stack_00000030[-2] = in_stack_00000030[-3];
  in_stack_00000030[-3] = in_stack_00000030[-3];
  in_stack_00000030[-2] = &DAT_14dd60184;
  return;
}



// FUNCTION 14d8d3e09 FUN_14d8d3e09 body=108 status=ok
// SIG undefined FUN_14d8d3e09(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d3e23) */

undefined8 FUN_14d8d3e09(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d3f1e FUN_14d8d3f1e body=313 status=ok
// SIG undefined FUN_14d8d3f1e(void)

void FUN_14d8d3f1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 != 0x6d20940b) {
    FUN_16263350b(1,param_2,param_3);
    return;
  }
  FUN_1658ad0e7();
  return;
}



// FUNCTION 14d8d4043 FUN_14d8d4043 body=178 status=ok
// SIG undefined FUN_14d8d4043(void)

void FUN_14d8d4043(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x46186) {
    return;
  }
  if (param_2 == 0x46290) {
    return;
  }
  return;
}



// FUNCTION 14d8d436c FUN_14d8d436c body=142 status=ok
// SIG undefined FUN_14d8d436c(void)

void FUN_14d8d436c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  
  (*(code *)0x15b700ad2)(uStackX_10,param_2);
  return;
}



// FUNCTION 14d8d44c5 FUN_14d8d44c5 body=404 status=ok
// SIG undefined FUN_14d8d44c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d45cb) */
/* WARNING: Removing unreachable block (ram,0x00014d8d45d1) */

void FUN_14d8d44c5(longlong param_1)

{
  ulonglong uVar1;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(param_1 + -0x40);
  FUN_165b2e3d0();
  FUN_1611cdd77(local_res10 ^ uVar1);
  return;
}



// FUNCTION 14d8d465d FUN_14d8d465d body=173 status=ok
// SIG undefined FUN_14d8d465d(void)

void FUN_14d8d465d(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165a0c667(param_1,FUN_165a0c667,~*(ulonglong *)(unaff_R13 + -0x88),
                (~((param_2 ^ 0xffffffffffffffff) & param_4) + param_4) -
                ~(param_2 ^ 0xffffffffffffffff) & (~param_4 | unaff_R15) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d8d470f FUN_14d8d470f body=25 status=ok
// SIG undefined FUN_14d8d470f(void)

/* WARNING: Instruction at (ram,0x00014d8d471e) overlaps instruction at (ram,0x00014d8d471d)
    */

void FUN_14d8d470f(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  bool in_ZF;
  
  if (in_ZF) {
    puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x7f);
    *puVar1 = *puVar1 | param_1;
    out(param_2,in_EAX);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)0x1648691c7)();
  return;
}



// FUNCTION 14d8d4802 FUN_14d8d4802 body=710 status=ok
// SIG undefined FUN_14d8d4802(void)

/* WARNING: Removing unreachable block (ram,0x00014df8439b) */
/* WARNING: Removing unreachable block (ram,0x00014df843a1) */
/* WARNING: Removing unreachable block (ram,0x00014df844bc) */
/* WARNING: Removing unreachable block (ram,0x00014df844bf) */
/* WARNING: Removing unreachable block (ram,0x00014df844de) */
/* WARNING: Removing unreachable block (ram,0x00014df844e4) */
/* WARNING: Removing unreachable block (ram,0x0001625bfed6) */
/* WARNING: Removing unreachable block (ram,0x00014d8d48a9) */

undefined8 FUN_14d8d4802(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d4afe FUN_14d8d4afe body=169 status=ok
// SIG undefined FUN_14d8d4afe(void)

void FUN_14d8d4afe(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  
  uVar1 = *param_2;
  uVar2 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = ~*param_2;
  *param_2 = *param_2 & ~in_RAX;
  *param_2 = ~*param_2;
  *param_2 = (~(unaff_RDI & uVar1) + uVar2) - ~unaff_RDI & *param_2 ^ 0xffffffffffffffff;
  return;
}



// FUNCTION 14d8d4ba7 FUN_14d8d4ba7 body=146 status=ok
// SIG undefined FUN_14d8d4ba7(void)

void FUN_14d8d4ba7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_1574554ce(local_res8,param_2,param_3);
  return;
}



// FUNCTION 14d8d4c2d thunk_FUN_165e93f27 body=19 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d8d4c40 FUN_14d8d4c40 body=130 status=ok
// SIG undefined FUN_14d8d4c40(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d4c98) */

void FUN_14d8d4c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0x1209e7) {
    FUN_165e93f27();
    return;
  }
  if (param_4 == 0x1209e8) {
    FUN_165e93f27(param_1,param_2,param_3,0x14d7c1651);
    return;
  }
  return;
}



// FUNCTION 14d8d4d70 FUN_14d8d4d70 body=126 status=ok
// SIG undefined FUN_14d8d4d70(void)

undefined1 FUN_14d8d4d70(void)

{
  return 0xff;
}



// FUNCTION 14d8d4fa5 FUN_14d8d4fa5 body=301 status=ok
// SIG undefined FUN_14d8d4fa5(void)

void FUN_14d8d4fa5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_2;
  *(undefined8 *)(local_res10 + -0x18) = param_2;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  uVar2 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined **)(local_res10 + -8) = &DAT_164f04e55;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = 0x14d8d504f;
  FUN_164f04e19(param_1,uVar2,uVar1);
  uVar3 = *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ uVar3;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28) = unaff_R13;
  *(undefined **)(local_res10 + -0x20) = &DAT_14d8d50d7;
  FUN_15720656e();
  return;
}



// FUNCTION 14d8d516a FUN_14d8d516a body=101 status=ok
// SIG undefined FUN_14d8d516a(void)

/* WARNING: Removing unreachable block (ram,0x000166a79a24) */
/* WARNING: Removing unreachable block (ram,0x000166a79a2a) */
/* WARNING: Removing unreachable block (ram,0x0001667192b6) */
/* WARNING: Removing unreachable block (ram,0x0001667192bc) */
/* WARNING: Removing unreachable block (ram,0x000166a7991c) */
/* WARNING: Removing unreachable block (ram,0x000166a79943) */
/* WARNING: Removing unreachable block (ram,0x000166a79948) */
/* WARNING: Removing unreachable block (ram,0x000166a7996e) */
/* WARNING: Removing unreachable block (ram,0x000166a79973) */
/* WARNING: Removing unreachable block (ram,0x000166a799a7) */
/* WARNING: Removing unreachable block (ram,0x00015b134fbe) */
/* WARNING: Removing unreachable block (ram,0x000166719220) */
/* WARNING: Removing unreachable block (ram,0x000166719236) */
/* WARNING: Removing unreachable block (ram,0x000166719283) */
/* WARNING: Removing unreachable block (ram,0x00015b7cc2ec) */
/* WARNING: Removing unreachable block (ram,0x0001667192a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5283) */
/* WARNING: Removing unreachable block (ram,0x00014d8d51d1) */
/* WARNING: Removing unreachable block (ram,0x00015735cac3) */
/* WARNING: Removing unreachable block (ram,0x000166a79911) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8d516a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  FUN_161be7b63(FUN_161be7b63,param_2,param_3,*(undefined8 *)(unaff_R13 + -8));
  uVar1 = FUN_161c3decd();
  return uVar1;
}



// FUNCTION 14d8d51d1 FUN_14d8d51d1 body=472 status=ok
// SIG undefined FUN_14d8d51d1(void)

/* WARNING: Removing unreachable block (ram,0x000166a79a24) */
/* WARNING: Removing unreachable block (ram,0x000166a79a2a) */
/* WARNING: Removing unreachable block (ram,0x0001667192b6) */
/* WARNING: Removing unreachable block (ram,0x0001667192bc) */
/* WARNING: Removing unreachable block (ram,0x000166a7991c) */
/* WARNING: Removing unreachable block (ram,0x000166a79943) */
/* WARNING: Removing unreachable block (ram,0x000166a79948) */
/* WARNING: Removing unreachable block (ram,0x000166a7996e) */
/* WARNING: Removing unreachable block (ram,0x000166a79973) */
/* WARNING: Removing unreachable block (ram,0x000166a799a7) */
/* WARNING: Removing unreachable block (ram,0x00015b134fbe) */
/* WARNING: Removing unreachable block (ram,0x000166719220) */
/* WARNING: Removing unreachable block (ram,0x000166719236) */
/* WARNING: Removing unreachable block (ram,0x000166719283) */
/* WARNING: Removing unreachable block (ram,0x00015b7cc2ec) */
/* WARNING: Removing unreachable block (ram,0x0001667192a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5283) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d8d51d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  
  param_5 = param_5 ^ in_RAX;
  *(undefined8 *)(param_5 - 8) = 0;
  *(longlong *)(param_5 - 8) = *(longlong *)(param_5 - 8) - unaff_RDI;
  *(longlong *)(param_5 - 8) = -*(longlong *)(param_5 - 8);
  lVar1 = *(longlong *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x18) = param_2;
  *(undefined8 *)(param_5 - 8) = 0;
  uVar4 = *(undefined8 *)(param_5 - 0x18);
  *(undefined8 *)(param_5 - 0x18) = in_R11;
  *(undefined8 *)(param_5 - 0x20) = unaff_R14;
  *(undefined4 *)(param_5 - 0x28) = 0x85d7391;
  *(undefined4 *)(param_5 - 0x24) = 0;
  if (-1 < lVar1) {
    lVar1 = param_5 + *(longlong *)(param_5 - 0x28) + -0x85d73a1;
    *(undefined **)(param_5 - 0x28) = &DAT_15735cb32;
    uVar2 = *(ulonglong *)(param_5 - 0x28);
    uVar3 = *(ulonglong *)(lVar1 + 8);
    *(longlong *)(lVar1 + 8) = -*(longlong *)(lVar1 + 8);
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + -1;
    *(ulonglong *)(lVar1 + 8) = *(ulonglong *)(lVar1 + 8) | 0x15735cb32;
    *(ulonglong *)(lVar1 + 8) = ~((~uVar2 | uVar3) & *(ulonglong *)(lVar1 + 8));
    uVar4 = thunk_FUN_15b642ca5(param_1,uVar4,in_stack_00000008);
    return uVar4;
  }
  uVar4 = FUN_15735cac3();
  return uVar4;
}



// FUNCTION 14d8d53aa FUN_14d8d53aa body=141 status=ok
// SIG undefined FUN_14d8d53aa(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d5432) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5438) */
/* WARNING: Removing unreachable block (ram,0x00014d8d54ca) */
/* WARNING: Removing unreachable block (ram,0x00014d8d54cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8d54d5) */
/* WARNING: Removing unreachable block (ram,0x000156773861) */
/* WARNING: Removing unreachable block (ram,0x00016264e4f7) */
/* WARNING: Removing unreachable block (ram,0x00016264e57d) */
/* WARNING: Removing unreachable block (ram,0x00016264e582) */
/* WARNING: Removing unreachable block (ram,0x00016264e588) */
/* WARNING: Removing unreachable block (ram,0x00016264e58d) */

void FUN_14d8d53aa(void)

{
  ulonglong in_R11;
  longlong unaff_R14;
  
  *(ulonglong *)(unaff_R14 + 8) = *(ulonglong *)(unaff_R14 + 8) | in_R11;
  *(ulonglong *)(unaff_R14 + 8) = ~*(ulonglong *)(unaff_R14 + 8);
  FUN_16264e4f7();
  return;
}



// FUNCTION 14d8d5438 FUN_14d8d5438 body=161 status=ok
// SIG undefined FUN_14d8d5438(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d54d5) */

void FUN_14d8d5438(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x78) == 0) {
    return;
  }
  FUN_156773861();
  return;
}



// FUNCTION 14d8d54db FUN_14d8d54db body=482 status=ok
// SIG undefined FUN_14d8d54db(void)

/* WARNING: Instruction at (ram,0x00014d8d5626) overlaps instruction at (ram,0x00014d8d5625)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8d5616) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5626) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5625) */
/* WARNING: Removing unreachable block (ram,0x00014d8d562b) */
/* WARNING: Removing unreachable block (ram,0x00014d8d56d2) */
/* WARNING: Removing unreachable block (ram,0x000165f5ffd4) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5574) */
/* WARNING: Removing unreachable block (ram,0x00014d8d558d) */
/* WARNING: Removing unreachable block (ram,0x00014d8d560a) */
/* WARNING: Removing unreachable block (ram,0x000164a5d3bd) */
/* WARNING: Removing unreachable block (ram,0x00014d8d55ff) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5586) */

void FUN_14d8d54db(void)

{
  FUN_156444dc5();
  return;
}



// FUNCTION 14d8d56bf FUN_14d8d56bf body=161 status=ok
// SIG undefined FUN_14d8d56bf(void)

void FUN_14d8d56bf(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint *unaff_RBX;
  bool in_ZF;
  
  if (!in_ZF) {
    (*(code *)&LAB_165f5ffcf)
              (param_1,param_2,0xb00025d51e48a8a,
               (~((ulonglong)param_4 & 0xb00025d51e48a8a ^ 0xffffffffffffffff) |
               ~((ulonglong)param_4 | 0xb00025d51e48a8a)) ^ 0xffffffffffffffff);
    return;
  }
  *unaff_RBX = param_4;
  FUN_1627adc53();
  return;
}



// FUNCTION 14d8d5886 FUN_14d8d5886 body=780 status=ok
// SIG undefined FUN_14d8d5886(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d5b0c) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5a6a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5a70) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5b11) */
/* WARNING: Removing unreachable block (ram,0x00016208309e) */
/* WARNING: Removing unreachable block (ram,0x0001620830e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5b17) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5923) */
/* WARNING: Removing unreachable block (ram,0x00014d8d592e) */
/* WARNING: Removing unreachable block (ram,0x0001612527b4) */
/* WARNING: Removing unreachable block (ram,0x00014d8d5929) */

void FUN_14d8d5886(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_R15;
  uint unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong auStackX_18 [2];
  
  param_2 = param_2 - ((ulonglong)unaff_retaddr ^ 0x15ef723b);
  uVar1 = *(ulonglong *)((longlong)auStackX_18 + param_2);
  *(longlong *)((longlong)auStackX_18 + param_2) = -*(longlong *)((longlong)auStackX_18 + param_2);
  *(ulonglong *)((longlong)auStackX_18 + param_2) = ~*(ulonglong *)((longlong)auStackX_18 + param_2)
  ;
  *(longlong *)((longlong)auStackX_18 + param_2) = -*(longlong *)((longlong)auStackX_18 + param_2);
  *(longlong *)((longlong)auStackX_18 + param_2) =
       *(longlong *)((longlong)auStackX_18 + param_2) + -1;
  *(longlong *)((longlong)auStackX_18 + param_2) =
       *(longlong *)((longlong)auStackX_18 + param_2) + -1;
  lVar2 = *(longlong *)((longlong)auStackX_18 + param_2);
  *(ulonglong *)((longlong)auStackX_18 + param_2) =
       *(ulonglong *)((longlong)auStackX_18 + param_2) & unaff_R15;
  *(ulonglong *)((longlong)auStackX_18 + param_2) =
       (lVar2 + unaff_R15) - *(longlong *)((longlong)auStackX_18 + param_2);
  *(ulonglong *)((longlong)auStackX_18 + param_2) =
       -1 - ((0xffffffffffffffff - unaff_R15 | uVar1) &
            *(ulonglong *)((longlong)auStackX_18 + param_2));
  FUN_165f4ad88(param_1,uStackX_10);
  return;
}



// FUNCTION 14d8d5c81 FUN_14d8d5c81 body=140 status=ok
// SIG undefined FUN_14d8d5c81(void)

void FUN_14d8d5c81(void)

{
  undefined8 in_stack_00000008;
  
  FUN_166484f31(FUN_166484f31,in_stack_00000008);
  return;
}



// FUNCTION 14d8d5e52 FUN_14d8d5e52 body=173 status=ok
// SIG undefined FUN_14d8d5e52(void)

void FUN_14d8d5e52(void)

{
  return;
}



// FUNCTION 14d8d6226 FUN_14d8d6226 body=236 status=ok
// SIG undefined FUN_14d8d6226(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d62d1) */

undefined8 FUN_14d8d6226(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  uVar1 = thunk_FUN_15b642ca5(param_1,param_2,local_res10);
  return uVar1;
}



// FUNCTION 14d8d62d1 FUN_14d8d62d1 body=2 status=ok
// SIG undefined FUN_14d8d62d1(void)

undefined8 FUN_14d8d62d1(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8d635a FUN_14d8d635a body=136 status=ok
// SIG undefined FUN_14d8d635a(void)

void FUN_14d8d635a(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 unaff_RBP;
  longlong in_R10;
  longlong unaff_R12;
  undefined8 unaff_R14;
  longlong lStackX_20;
  undefined7 uStack_7;
  
  lVar2 = (~in_RAX | -in_R10) + in_RAX + 1;
  uStack_7 = (undefined7)((ulonglong)lVar2 >> 8);
  uVar1 = -(lVar2 >> 0x3f);
  if ((uVar1 != 0) && (uVar1 == 0)) {
    *(ushort *)(&stack0xfffffffff6996278 + (lVar2 * 2 | uVar1)) =
         (*(ushort *)(&stack0xfffffffff6996278 + (lVar2 * 2 | uVar1)) | 0x100) - 0x100;
    *(longlong *)(lStackX_20 + -8) = lVar2;
    *(undefined8 *)(lStackX_20 + -0x10) = unaff_R14;
    *(undefined8 *)(lStackX_20 + -0x18) = unaff_R14;
    *(ulonglong *)(lStackX_20 + -0x20) = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2 >> 7);
    FUN_15b95aefe(CONCAT71(uStack_7,1),param_2 << 1 ^ param_2 >> 7);
    return;
  }
  FUN_165f2e9ed(*(undefined8 *)(unaff_R12 + -0x28));
  return;
}



// FUNCTION 14d8d63e3 FUN_14d8d63e3 body=139 status=ok
// SIG undefined FUN_14d8d63e3(void)

void FUN_14d8d63e3(void)

{
  undefined8 unaff_RBP;
  longlong in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *(ushort *)(&stack0xfffffffff6996278 + in_R10) =
       (*(ushort *)(&stack0xfffffffff6996278 + in_R10) | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBP;
  FUN_15b95aefe();
  return;
}



// FUNCTION 14d8d65ac FUN_14d8d65ac body=14 status=ok
// SIG undefined FUN_14d8d65ac(void)

void FUN_14d8d65ac(undefined8 param_1,undefined1 *param_2)

{
  undefined1 unaff_BPL;
  
  *param_2 = unaff_BPL;
  thunk_FUN_156e7a0e9();
  return;
}



// FUNCTION 14d8d65ba FUN_14d8d65ba body=8 status=ok
// SIG undefined FUN_14d8d65ba(void)

void FUN_14d8d65ba(undefined8 param_1,undefined1 *param_2)

{
  undefined1 unaff_BPL;
  
  *param_2 = unaff_BPL;
  thunk_FUN_156e7a0e9();
  return;
}



// FUNCTION 14d8d65c2 thunk_FUN_156e7a0e9 body=5 status=ok
// SIG undefined thunk_FUN_156e7a0e9(void)

void thunk_FUN_156e7a0e9(void)

{
  FUN_156e7a0e9();
  return;
}



// FUNCTION 14d8d663e FUN_14d8d663e body=130 status=ok
// SIG undefined FUN_14d8d663e(void)

void FUN_14d8d663e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  
  *(undefined8 *)((local_res20 ^ param_1) - 8) = param_4;
  FUN_1664314c5(in_stack_00000010 ^ param_1,param_2,param_3,FUN_1664314c5);
  return;
}



// FUNCTION 14d8d66c1 FUN_14d8d66c1 body=96 status=ok
// SIG undefined FUN_14d8d66c1(void)

void FUN_14d8d66c1(short param_1)

{
  short *unaff_RBP;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *unaff_RBP = (-0x101 - param_1) + *unaff_RBP;
  *(undefined8 *)(local_res18 + -8) = 0x3ea4ce;
  *(undefined8 *)(local_res18 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res18 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8d6744 FUN_14d8d6744 body=230 status=ok
// SIG undefined FUN_14d8d6744(void)

void FUN_14d8d6744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  FUN_156812d22(param_1,unaff_retaddr,param_3,param_4);
  plVar1 = (longlong *)(local_res8 + -8);
  *plVar1 = 8;
  *(longlong *)(local_res8 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + -0x14d8d6841;
  *plVar1 = -*plVar1;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8d6a5d FUN_14d8d6a5d body=158 status=ok
// SIG undefined FUN_14d8d6a5d(void)

void FUN_14d8d6a5d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_166c0454c(param_1,-(~(*(ulonglong *)(unaff_RDI + -0x60) | param_1) |
                         ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1)),FUN_166c0454c);
  return;
}



// FUNCTION 14d8d6dd9 FUN_14d8d6dd9 body=317 status=ok
// SIG undefined FUN_14d8d6dd9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d6e81) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d6dd9(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  longlong lVar1;
  longlong unaff_R13;
  undefined8 unaff_R14;
  
  *(undefined8 *)(unaff_R13 + (param_2 ^ 0x69470174)) = param_4;
  lVar1 = param_7 + param_1 + (param_7 & param_1) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_R14;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined1 **)(lVar1 + -0x18) = &LAB_166b6294e;
  if (-1 < lVar1 + -8) {
    FUN_166b62903();
    return;
  }
  FUN_166b62903();
  return;
}



// FUNCTION 14d8d6f18 thunk_FUN_14d8d6f28 body=9 status=ok
// SIG undefined thunk_FUN_14d8d6f28(void)

void thunk_FUN_14d8d6f28(void)

{
  FUN_14d8d6f28();
  return;
}



// FUNCTION 14d8d6f28 FUN_14d8d6f28 body=645 status=ok
// SIG undefined FUN_14d8d6f28(void)

/* WARNING: Instruction at (ram,0x0001660c58dc) overlaps instruction at (ram,0x0001660c58db)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bc982) */
/* WARNING: Removing unreachable block (ram,0x00014d8b3559) */
/* WARNING: Removing unreachable block (ram,0x0001660c58cc) */
/* WARNING: Removing unreachable block (ram,0x0001660c58dc) */
/* WARNING: Removing unreachable block (ram,0x0001660c594f) */
/* WARNING: Removing unreachable block (ram,0x0001660c5956) */
/* WARNING: Removing unreachable block (ram,0x0001660c5949) */
/* WARNING: Removing unreachable block (ram,0x0001625f0c7a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d6fb8) */
/* WARNING: Removing unreachable block (ram,0x00014d8d6fc6) */
/* WARNING: Removing unreachable block (ram,0x00014d8d7107) */
/* WARNING: Removing unreachable block (ram,0x000156dbbb7e) */
/* WARNING: Removing unreachable block (ram,0x00014d8d710d) */
/* WARNING: Removing unreachable block (ram,0x00014d8d71b0) */
/* WARNING: Removing unreachable block (ram,0x00014d8d71b6) */
/* WARNING: Removing unreachable block (ram,0x000161dae565) */
/* WARNING: Removing unreachable block (ram,0x00014d8d71f4) */
/* WARNING: Removing unreachable block (ram,0x00015b3067ce) */
/* WARNING: Removing unreachable block (ram,0x0001660c58db) */

undefined8 FUN_14d8d6f28(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1660c58cc(param_1 ^ 0xffffffff,param_2);
  return uVar1;
}



// FUNCTION 14d8d71b6 FUN_14d8d71b6 body=175 status=ok
// SIG undefined FUN_14d8d71b6(void)

undefined8 FUN_14d8d71b6(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 in_RAX;
  longlong in_R11;
  undefined8 unaff_R15;
  int in_stack_00000008;
  int local_res10;
  
  if ((uint)(in_stack_00000008 + local_res10 + *(int *)(param_2 + 0x14 + in_R11)) < param_4) {
    return in_RAX;
  }
  FUN_15b17f5d0();
  *(undefined8 *)(&stack0x00000008 + param_2) = unaff_R15;
  return in_RAX;
}



// FUNCTION 14d8d7266 FUN_14d8d7266 body=28 status=ok
// SIG undefined FUN_14d8d7266(void)

void FUN_14d8d7266(void)

{
  return;
}



// FUNCTION 14d8d72fc FUN_14d8d72fc body=569 status=ok
// SIG undefined FUN_14d8d72fc(void)

/* WARNING: Removing unreachable block (ram,0x000162096832) */
/* WARNING: Removing unreachable block (ram,0x000162096838) */
/* WARNING: Removing unreachable block (ram,0x000162135228) */
/* WARNING: Removing unreachable block (ram,0x00014d8d74a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d753b) */
/* WARNING: Removing unreachable block (ram,0x000162845be5) */
/* WARNING: Removing unreachable block (ram,0x00014d8d7541) */
/* WARNING: Removing unreachable block (ram,0x00015b9fc55a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d7536) */

void FUN_14d8d72fc(ulonglong param_1)

{
  uint uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  
  FUN_156425bb7(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  uVar1 = FUN_161ae5218(*(ulonglong *)(unaff_R13 + -0x88),0xffffffffffffffff,
                        *(ulonglong *)(unaff_R13 + -0x88) ^ CONCAT62(unaff_000000ba,unaff_R15W),
                        ~(*(ulonglong *)(unaff_R13 + -0x60) & CONCAT62(unaff_000000ba,unaff_R15W)) &
                        (*(ulonglong *)(unaff_R13 + -0x60) | CONCAT62(unaff_000000ba,unaff_R15W)));
  if ((uVar1 & 0x80000000) != 0) {
    FUN_15b9fc4ca();
    return;
  }
  FUN_162135228();
  return;
}



// FUNCTION 14d8d7541 FUN_14d8d7541 body=194 status=ok
// SIG undefined FUN_14d8d7541(void)

void FUN_14d8d7541(void)

{
  FUN_165a450e4(0xffffffffffffff70,0x1de61bdf);
  return;
}



// FUNCTION 14d8d7697 FUN_14d8d7697 body=138 status=ok
// SIG undefined FUN_14d8d7697(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d7721) */
/* WARNING: Removing unreachable block (ram,0x00014d8d7711) */

void FUN_14d8d7697(void)

{
  FUN_15706429c();
  return;
}



// FUNCTION 14d8d7721 FUN_14d8d7721 body=146 status=ok
// SIG undefined FUN_14d8d7721(void)

void FUN_14d8d7721(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b45c6f7(param_1,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d8d7ab4 FUN_14d8d7ab4 body=353 status=ok
// SIG undefined FUN_14d8d7ab4(void)

void FUN_14d8d7ab4(ulonglong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_R15;
  code *apcStackX_18 [2];
  
  uVar4 = 0xffffffffffffffff;
  pcVar3 = FUN_15b1f1be4;
  FUN_15b1f1be4();
  uVar2 = ~(~(unaff_R15 + 0x4f7a84ecU & 0xffffffff9a02be5a) &
           (unaff_R15 + 0x4f7a84ecU | 0xffffffff9a02be5a));
  *(undefined8 *)((longlong)apcStackX_18 + uVar2) = 0;
  puVar1 = (ulonglong *)((longlong)apcStackX_18 + uVar2);
  *puVar1 = *puVar1 ^ unaff_RSI;
  apcStackX_18[0] = pcVar3;
  FUN_16654875d(param_1,param_2,*(ulonglong *)(unaff_RDI + -0xa0) | param_1,uVar4);
  return;
}



// FUNCTION 14d8d7d26 FUN_14d8d7d26 body=303 status=FAIL
// SIG undefined FUN_14d8d7d26(void)
/* DECOMPILE FAILED */

// FUNCTION 14d8d7e58 FUN_14d8d7e58 body=294 status=ok
// SIG undefined FUN_14d8d7e58(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d7eee) */
/* WARNING: Removing unreachable block (ram,0x0001654e7690) */

void FUN_14d8d7e58(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = in_R11;
  *(undefined8 *)(lStackX_18 + -0x10) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x28) = unaff_retaddr;
  *(undefined8 *)(lStackX_18 + -0x30) = in_R9;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined1 **)(lStackX_18 + -8) = &LAB_1654e76ba;
  FUN_1654e7690();
  return;
}



// FUNCTION 14d8d7f7f FUN_14d8d7f7f body=290 status=ok
// SIG undefined FUN_14d8d7f7f(void)

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffffd0 */
/* WARNING: Removing unreachable block (ram,0x0001573cd56d) */
/* WARNING: Removing unreachable block (ram,0x0001573cd573) */
/* WARNING: Removing unreachable block (ram,0x00014e204df8) */
/* WARNING: Removing unreachable block (ram,0x00014e204e02) */
/* WARNING: Removing unreachable block (ram,0x00014e204e57) */
/* WARNING: Removing unreachable block (ram,0x0001573cd620) */
/* WARNING: Removing unreachable block (ram,0x0001573cd626) */
/* WARNING: Removing unreachable block (ram,0x0001573cd62b) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6a1) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6bb) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6c5) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6cb) */
/* WARNING: Removing unreachable block (ram,0x0001661cf5c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d81b5) */
/* WARNING: Removing unreachable block (ram,0x000156838414) */
/* WARNING: Removing unreachable block (ram,0x00014d8d81bb) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8309) */
/* WARNING: Removing unreachable block (ram,0x00014d8d830f) */
/* WARNING: Removing unreachable block (ram,0x00014d8d83aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8d83b0) */
/* WARNING: Removing unreachable block (ram,0x0001614b03f5) */
/* WARNING: Removing unreachable block (ram,0x0001614b0464) */
/* WARNING: Removing unreachable block (ram,0x0001614b046a) */
/* WARNING: Removing unreachable block (ram,0x0001654e9478) */
/* WARNING: Removing unreachable block (ram,0x00015733490c) */
/* WARNING: Removing unreachable block (ram,0x000165324556) */
/* WARNING: Removing unreachable block (ram,0x000162cd0a1c) */
/* WARNING: Removing unreachable block (ram,0x0001653245db) */
/* WARNING: Removing unreachable block (ram,0x0001653245e1) */
/* WARNING: Removing unreachable block (ram,0x0001653245e6) */
/* WARNING: Removing unreachable block (ram,0x0001573349ab) */
/* WARNING: Removing unreachable block (ram,0x0001573349b7) */
/* WARNING: Removing unreachable block (ram,0x0001573349bc) */
/* WARNING: Removing unreachable block (ram,0x000157334a46) */
/* WARNING: Removing unreachable block (ram,0x000157334a4c) */
/* WARNING: Removing unreachable block (ram,0x0001651a987f) */
/* WARNING: Removing unreachable block (ram,0x0001651a9904) */
/* WARNING: Removing unreachable block (ram,0x0001651a990a) */
/* WARNING: Removing unreachable block (ram,0x0001573cd4ea) */
/* WARNING: Removing unreachable block (ram,0x000156497284) */
/* WARNING: Removing unreachable block (ram,0x000157334adb) */
/* WARNING: Removing unreachable block (ram,0x000157334adf) */
/* WARNING: Removing unreachable block (ram,0x00014d8d802a) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8030) */
/* WARNING: Removing unreachable block (ram,0x00014d8d811c) */
/* WARNING: Removing unreachable block (ram,0x0001651dbed9) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8122) */
/* WARNING: Removing unreachable block (ram,0x00014d8d81b0) */
/* WARNING: Removing unreachable block (ram,0x000160f9e0b4) */
/* WARNING: Removing unreachable block (ram,0x000160f9e139) */
/* WARNING: Removing unreachable block (ram,0x00016634e7f9) */

undefined8 FUN_14d8d7f7f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160f9e0b4();
  return uVar1;
}



// FUNCTION 14d8d80a3 FUN_14d8d80a3 body=950 status=ok
// SIG undefined FUN_14d8d80a3(void)

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffffd0 */
/* WARNING: Removing unreachable block (ram,0x0001573cd56d) */
/* WARNING: Removing unreachable block (ram,0x0001573cd573) */
/* WARNING: Removing unreachable block (ram,0x00014e204df8) */
/* WARNING: Removing unreachable block (ram,0x00014e204e02) */
/* WARNING: Removing unreachable block (ram,0x00014e204e57) */
/* WARNING: Removing unreachable block (ram,0x0001573cd620) */
/* WARNING: Removing unreachable block (ram,0x0001573cd626) */
/* WARNING: Removing unreachable block (ram,0x0001573cd62b) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6a1) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6bb) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6c5) */
/* WARNING: Removing unreachable block (ram,0x0001573cd6cb) */
/* WARNING: Removing unreachable block (ram,0x0001661cf5c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8d81b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8d81bb) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8309) */
/* WARNING: Removing unreachable block (ram,0x00014d8d830f) */
/* WARNING: Removing unreachable block (ram,0x00014d8d83aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8d83b0) */
/* WARNING: Removing unreachable block (ram,0x0001614b03f5) */
/* WARNING: Removing unreachable block (ram,0x0001614b0464) */
/* WARNING: Removing unreachable block (ram,0x0001614b046a) */
/* WARNING: Removing unreachable block (ram,0x0001654e9478) */
/* WARNING: Removing unreachable block (ram,0x00015733490c) */
/* WARNING: Removing unreachable block (ram,0x000165324556) */
/* WARNING: Removing unreachable block (ram,0x000162cd0a1c) */
/* WARNING: Removing unreachable block (ram,0x0001653245db) */
/* WARNING: Removing unreachable block (ram,0x0001653245e1) */
/* WARNING: Removing unreachable block (ram,0x0001653245e6) */
/* WARNING: Removing unreachable block (ram,0x0001573349ab) */
/* WARNING: Removing unreachable block (ram,0x0001573349b7) */
/* WARNING: Removing unreachable block (ram,0x0001573349bc) */
/* WARNING: Removing unreachable block (ram,0x000157334a46) */
/* WARNING: Removing unreachable block (ram,0x000157334a4c) */
/* WARNING: Removing unreachable block (ram,0x0001651a987f) */
/* WARNING: Removing unreachable block (ram,0x0001651a9904) */
/* WARNING: Removing unreachable block (ram,0x0001651a990a) */
/* WARNING: Removing unreachable block (ram,0x0001573cd4ea) */
/* WARNING: Removing unreachable block (ram,0x000156497284) */
/* WARNING: Removing unreachable block (ram,0x000157334adb) */
/* WARNING: Removing unreachable block (ram,0x000157334adf) */
/* WARNING: Removing unreachable block (ram,0x000156838414) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8122) */

undefined8 FUN_14d8d80a3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8d83b0 FUN_14d8d83b0 body=148 status=ok
// SIG undefined FUN_14d8d83b0(void)

void FUN_14d8d83b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined2 local_res18;
  
  (*(code *)&LAB_15719900c)(local_res10,0x100,param_3,local_res18);
  return;
}



// FUNCTION 14d8d8445 FUN_14d8d8445 body=157 status=ok
// SIG undefined FUN_14d8d8445(void)

/* WARNING: Removing unreachable block (ram,0x000165d9f5c6) */
/* WARNING: Removing unreachable block (ram,0x000165d9f5cc) */
/* WARNING: Removing unreachable block (ram,0x000165d9f700) */
/* WARNING: Removing unreachable block (ram,0x00014d8d856e) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8574) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8579) */
/* WARNING: Removing unreachable block (ram,0x00014d8d85c7) */
/* WARNING: Removing unreachable block (ram,0x000165bcc226) */
/* WARNING: Removing unreachable block (ram,0x00014d8d84e3) */
/* WARNING: Removing unreachable block (ram,0x000156d9999d) */
/* WARNING: Removing unreachable block (ram,0x000156d999a8) */
/* WARNING: Removing unreachable block (ram,0x000156d999a3) */
/* WARNING: Removing unreachable block (ram,0x000166b3d90a) */
/* WARNING: Removing unreachable block (ram,0x000166b3d973) */
/* WARNING: Removing unreachable block (ram,0x000166b3d97f) */
/* WARNING: Removing unreachable block (ram,0x000166b3d96e) */
/* WARNING: Removing unreachable block (ram,0x000166b3d984) */
/* WARNING: Removing unreachable block (ram,0x000166b3d9c0) */
/* WARNING: Removing unreachable block (ram,0x000166b3d9d0) */

void FUN_14d8d8445(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined8 in_stack_00000010;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  if (param_1 == 0xffffffffffffffff && *(longlong *)(unaff_RDI + -0xa0) == 0) {
    (*(code *)0x164859f08)
              (param_1,((~uVar1 & ~param_1) + uVar1) - (~uVar1 & ~param_1 & uVar1),in_stack_00000010
               ,param_4,*(undefined8 *)(unaff_RDI + -8),*(undefined8 *)(unaff_RDI + param_2));
    return;
  }
  FUN_15759016b();
  return;
}



// FUNCTION 14d8d84e3 FUN_14d8d84e3 body=377 status=ok
// SIG undefined FUN_14d8d84e3(void)

/* WARNING: Removing unreachable block (ram,0x000165d9f5c6) */
/* WARNING: Removing unreachable block (ram,0x000165d9f5cc) */
/* WARNING: Removing unreachable block (ram,0x000165d9f700) */
/* WARNING: Removing unreachable block (ram,0x00014d8d856e) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8574) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8579) */
/* WARNING: Removing unreachable block (ram,0x00014d8d85c7) */
/* WARNING: Removing unreachable block (ram,0x000165bcc226) */
/* WARNING: Removing unreachable block (ram,0x000166b3d984) */
/* WARNING: Removing unreachable block (ram,0x000166b3d9c0) */
/* WARNING: Removing unreachable block (ram,0x000166b3d9d0) */
/* WARNING: Removing unreachable block (ram,0x000156d999a8) */

void FUN_14d8d84e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70);
  if (CARRY8(uVar1,unaff_R15)) {
    FUN_166b3d90a();
    return;
  }
  if (uVar1 + unaff_R15 < (uVar1 & unaff_R15) << 1) {
    FUN_15b6247be(param_1,param_2,param_3);
    return;
  }
  FUN_15b6247be(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8d87df thunk_FUN_14d8d87e5 body=5 status=ok
// SIG undefined thunk_FUN_14d8d87e5(void)

void thunk_FUN_14d8d87e5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  FUN_1571dda96(unaff_RDI + in_RAX + (param_1 & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3);
  return;
}



// FUNCTION 14d8d87e5 FUN_14d8d87e5 body=132 status=ok
// SIG undefined FUN_14d8d87e5(void)

void FUN_14d8d87e5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  FUN_1571dda96(unaff_RDI + in_RAX + (param_1 & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3);
  return;
}



// FUNCTION 14d8d8a2e FUN_14d8d8a2e body=130 status=ok
// SIG undefined FUN_14d8d8a2e(void)

void FUN_14d8d8a2e(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_160ee7821(param_1,*(ulonglong *)(unaff_RDI + -0x28) | param_1,param_3 + unaff_RBP);
  return;
}



// FUNCTION 14d8d8bea FUN_14d8d8bea body=151 status=ok
// SIG undefined FUN_14d8d8bea(void)

void FUN_14d8d8bea(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  FUN_14e10a83a((in_RAX + -1) - ~(-(-1 - unaff_R12) - param_3),param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d8d8f23 FUN_14d8d8f23 body=183 status=ok
// SIG undefined FUN_14d8d8f23(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d8fcb) */
/* WARNING: Removing unreachable block (ram,0x00014d8d8fd1) */
/* WARNING: Removing unreachable block (ram,0x000162338243) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d8f23(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  thunk_FUN_162338249(param_1,param_2,*(ulonglong *)(unaff_R12 + -0xa0) | in_RAX);
  return;
}



// FUNCTION 14d8d9060 FUN_14d8d9060 body=145 status=ok
// SIG undefined FUN_14d8d9060(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8d9060(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_1626d6ce2(param_1,param_2,(param_1 + -1) - ~local_res10);
  FUN_14d8d90f2();
  return;
}



// FUNCTION 14d8d90f2 FUN_14d8d90f2 body=193 status=ok
// SIG undefined FUN_14d8d90f2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d91aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8d918e) */

void FUN_14d8d90f2(void)

{
  FUN_14db2666e();
  return;
}



// FUNCTION 14d8d9250 FUN_14d8d9250 body=290 status=ok
// SIG undefined FUN_14d8d9250(void)

/* WARNING: Removing unreachable block (ram,0x00014d8d92cd) */
/* WARNING: Removing unreachable block (ram,0x00014d8d92d3) */

void FUN_14d8d9250(void)

{
  return;
}



// FUNCTION 14d8d9488 FUN_14d8d9488 body=124 status=ok
// SIG undefined FUN_14d8d9488(void)

void FUN_14d8d9488(void)

{
  return;
}



// FUNCTION 14d8d9506 FUN_14d8d9506 body=220 status=ok
// SIG undefined FUN_14d8d9506(void)

void FUN_14d8d9506(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  undefined8 in_R9;
  ulonglong *puVar2;
  undefined8 in_R10;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ushort *puVar3;
  ulonglong unaff_R14;
  undefined8 local_res8;
  longlong in_stack_00000028;
  
  puVar3 = (ushort *)(unaff_R13 ^ unaff_R14);
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | 0x100;
  *puVar3 = ~*puVar3;
  *(undefined8 *)(in_stack_00000028 + -8) = local_res8;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  puVar2 = *(ulonglong **)(in_stack_00000028 + -0x18);
  *(undefined **)(in_stack_00000028 + -8) = &DAT_16284d9d5;
  *(undefined8 *)(in_stack_00000028 + -0x18) = 0x14d8d95a6;
  FUN_16284d9a1();
  *(uint *)(in_stack_00000028 + -4) = *(uint *)(in_stack_00000028 + -4) ^ 0x41aea737;
  uVar1 = *(ulonglong *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = in_R10;
  *puVar2 = ~(unaff_RBX & uVar1) & (unaff_RBX | uVar1);
  thunk_FUN_160f41655();
  return;
}



// FUNCTION 14d8d975a FUN_14d8d975a body=133 status=ok
// SIG undefined FUN_14d8d975a(void)

void FUN_14d8d975a(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  longlong unaff_R12;
  ulonglong auStackX_8 [4];
  
  *(ulonglong *)((longlong)auStackX_8 + unaff_RSI) = *(ulonglong *)(unaff_R12 + -0x78);
  uVar1 = *(ulonglong *)((longlong)auStackX_8 + unaff_RSI);
  *(ulonglong *)((longlong)auStackX_8 + unaff_RSI) = uVar1 + in_RAX + (uVar1 & in_RAX) * -2;
  FUN_160fd7efb(param_1,FUN_160fd7efb);
  return;
}



// FUNCTION 14d8d987c FUN_14d8d987c body=280 status=ok
// SIG undefined FUN_14d8d987c(void)

/* WARNING: Removing unreachable block (ram,0x00015b24abf1) */
/* WARNING: Removing unreachable block (ram,0x00015b24abf7) */
/* WARNING: Removing unreachable block (ram,0x00015b24abfc) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9990) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9902) */
/* WARNING: Removing unreachable block (ram,0x000165a43676) */
/* WARNING: Removing unreachable block (ram,0x00015b24ab56) */
/* WARNING: Removing unreachable block (ram,0x0001616bb948) */
/* WARNING: Removing unreachable block (ram,0x0001616bb94e) */
/* WARNING: Removing unreachable block (ram,0x0001616bb953) */
/* WARNING: Removing unreachable block (ram,0x0001616bb9ff) */
/* WARNING: Removing unreachable block (ram,0x0001616bba0a) */
/* WARNING: Removing unreachable block (ram,0x0001616bba05) */
/* WARNING: Removing unreachable block (ram,0x0001616bb9fa) */
/* WARNING: Removing unreachable block (ram,0x0001655fd727) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9940) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9943) */
/* WARNING: Removing unreachable block (ram,0x00014d8d998a) */
/* WARNING: Removing unreachable block (ram,0x00015ba2f269) */
/* WARNING: Removing unreachable block (ram,0x00015ba2f2f8) */
/* WARNING: Removing unreachable block (ram,0x00015ba2f309) */
/* WARNING: Removing unreachable block (ram,0x00015ba2f304) */
/* WARNING: Removing unreachable block (ram,0x00015ba2f2f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9985) */
/* WARNING: Removing unreachable block (ram,0x00015b3d8708) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d8d987c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  ulonglong unaff_R12;
  undefined8 unaff_R15;
  
  uVar4 = -~*(ulonglong *)(unaff_R12 - 0x50) - 1;
  if (*(longlong *)(0x24db - (~(unaff_R12 - 0x256a) + 2)) != -1 || in_RAX != 0xffffffffffffffff) {
    uVar3 = FUN_165a435f0();
    return uVar3;
  }
  if (unaff_R12 < 0xa0) {
    uVar1 = *(ulonglong *)(unaff_R12 - 0x98) ^ in_RAX;
    uVar2 = *(ulonglong *)(unaff_R12 - 0x68) ^ in_RAX;
    *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(unaff_R12 - 0xa0) ^ in_RAX;
    *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
    *(ulonglong *)(uVar2 - 0x18) =
         0xffffffffffffffff - ((~in_RAX | unaff_RSI) + in_RAX + 1) & (unaff_RSI | in_RAX);
    *(undefined8 *)(uVar2 - 0x20) = param_4;
    uVar3 = *(undefined8 *)(uVar2 - 0x20);
    *(undefined8 *)(uVar2 - 8) = 0;
    *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(uVar2 - 8);
    *(longlong *)(uVar2 - 8) = (longlong)(&LAB_1621a555a + *(longlong *)(uVar2 - 8));
    *(ulonglong *)(uVar2 - 0x10) = uVar1;
    *(ulonglong *)(uVar2 - 0x18) = uVar1;
    *(code **)(uVar2 - 0x10) = thunk_FUN_15b642ca5;
    *(undefined8 *)(uVar2 - 0x20) = 0x15753a3d7;
    uVar3 = FUN_1621a553f(param_1,param_2,param_3,uVar3);
    *(undefined8 *)(uVar2 - 0x20) = unaff_R15;
    *(ulonglong *)(uVar2 - 0x20) = ~((~in_RAX | uVar4) & (0xffffffffffffffff - uVar4 | in_RAX));
    *(undefined1 **)(uVar2 - 0x20) = &LAB_15753a439;
    return uVar3;
  }
  uVar3 = FUN_1616bb8c6();
  return uVar3;
}



// FUNCTION 14d8d9996 FUN_14d8d9996 body=152 status=ok
// SIG undefined FUN_14d8d9996(void)

void FUN_14d8d9996(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    FUN_16131bb16(unaff_retaddr);
    return;
  }
  if (unaff_RSI != 0x12cc0a) {
    FUN_166c10f9a();
    return;
  }
  FUN_166c10f78();
  return;
}



// FUNCTION 14d8d9d03 FUN_14d8d9d03 body=152 status=ok
// SIG undefined FUN_14d8d9d03(void)

/* WARNING: Removing unreachable block (ram,0x0001647d186c) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9d91) */
/* WARNING: Removing unreachable block (ram,0x00014d8d9d97) */
/* WARNING: Removing unreachable block (ram,0x0001647d189a) */
/* WARNING: Removing unreachable block (ram,0x0001647d189d) */
/* WARNING: Removing unreachable block (ram,0x0001647d18f8) */
/* WARNING: Removing unreachable block (ram,0x0001647d18fe) */
/* WARNING: Removing unreachable block (ram,0x000162d0b1ff) */
/* WARNING: Removing unreachable block (ram,0x000162d0b24c) */
/* WARNING: Removing unreachable block (ram,0x000162d0b250) */
/* WARNING: Removing unreachable block (ram,0x000162d0b2a5) */
/* WARNING: Removing unreachable block (ram,0x000162d0b2ab) */
/* WARNING: Removing unreachable block (ram,0x000156adf170) */

undefined8 FUN_14d8d9d03(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1647d186c();
  return uVar1;
}



// FUNCTION 14d8d9d9d FUN_14d8d9d9d body=142 status=ok
// SIG undefined FUN_14d8d9d9d(void)

void FUN_14d8d9d9d(void)

{
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(&stack0xfffffffff32c106e + local_res10) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff32c1066 + local_res10) = unaff_R13;
  FUN_15b973155();
  return;
}



// FUNCTION 14d8d9e2d FUN_14d8d9e2d body=157 status=ok
// SIG undefined FUN_14d8d9e2d(void)

void FUN_14d8d9e2d(void)

{
  return;
}


