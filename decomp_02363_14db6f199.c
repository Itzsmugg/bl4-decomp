// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14db6f199 FUN_14db6f199 body=154 status=ok
// SIG undefined FUN_14db6f199(void)

/* WARNING: Removing unreachable block (ram,0x00014db6f22f) */

void FUN_14db6f199(void)

{
  ulonglong in_RAX;
  
  if (((in_RAX & 0x8000) != 0) && (-1 < (char)(in_RAX >> 8))) {
    thunk_FUN_165f65883();
    return;
  }
  return;
}



// FUNCTION 14db6f4b9 FUN_14db6f4b9 body=450 status=ok
// SIG undefined FUN_14db6f4b9(void)

/* WARNING: Instruction at (ram,0x00014db6f622) overlaps instruction at (ram,0x00014db6f621)
    */
/* WARNING: Removing unreachable block (ram,0x00014db6f61d) */
/* WARNING: Removing unreachable block (ram,0x00014db6f54f) */
/* WARNING: Removing unreachable block (ram,0x00014db6f555) */
/* WARNING: Removing unreachable block (ram,0x00014db6f618) */
/* WARNING: Removing unreachable block (ram,0x00014db6f620) */
/* WARNING: Removing unreachable block (ram,0x000164993ff7) */
/* WARNING: Removing unreachable block (ram,0x0001649940a2) */
/* WARNING: Removing unreachable block (ram,0x0001649940a8) */
/* WARNING: Removing unreachable block (ram,0x000165600ced) */

void FUN_14db6f4b9(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  
  *(longlong *)(param_4 + 8) = -*(longlong *)(param_4 + 8);
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + -1;
  *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | in_RAX;
  *(ulonglong *)(param_4 + 8) = ~(param_2 & *(ulonglong *)(param_4 + 8));
  FUN_164993ff7();
  return;
}



// FUNCTION 14db6f71b FUN_14db6f71b body=171 status=ok
// SIG undefined FUN_14db6f71b(void)

void FUN_14db6f71b(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1623c75cf)
            (*(undefined8 *)(unaff_R13 + -0x38),0x1623c75cf,~(param_2 & (~param_3 | unaff_R15)));
  return;
}



// FUNCTION 14db6f7cf FUN_14db6f7cf body=132 status=ok
// SIG undefined FUN_14db6f7cf(void)

void FUN_14db6f7cf(void)

{
  longlong in_RAX;
  undefined8 local_res8;
  
  *(undefined8 *)(&stack0x6b6773ca + in_RAX) = local_res8;
  FUN_14ddf8f98(FUN_14ddf8f98);
  return;
}



// FUNCTION 14db6f853 FUN_14db6f853 body=278 status=ok
// SIG undefined FUN_14db6f853(void)

/* WARNING: Removing unreachable block (ram,0x00014db6f8ee) */
/* WARNING: Removing unreachable block (ram,0x00014db6f8f4) */

void FUN_14db6f853(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  
  FUN_15af9e358(param_1,unaff_retaddr,FUN_15af9e358,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14db6f96a FUN_14db6f96a body=150 status=ok
// SIG undefined FUN_14db6f96a(void)

void FUN_14db6f96a(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  short sVar2;
  ushort unaff_R13W;
  short unaff_retaddr;
  undefined8 local_res10;
  longlong local_res18;
  
  sVar2 = *param_1;
  *param_1 = 0;
  *param_1 = *param_1 + unaff_retaddr + (unaff_R13W ^ 0x4a87) + sVar2;
  puVar1 = (ulonglong *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x10) = param_2;
  *(ulonglong *)(param_5 + -0x18) = 0x1fc762fd;
  *puVar1 = *(ulonglong *)(param_5 + -0x18);
  *puVar1 = *puVar1 ^ 0x1fc762fd;
  *puVar1 = *puVar1 + local_res18;
  FUN_1657095c5(local_res10,*(undefined8 *)(param_5 + -0x10),param_3,FUN_1657095c5);
  return;
}



// FUNCTION 14db6fa00 FUN_14db6fa00 body=122 status=ok
// SIG undefined FUN_14db6fa00(void)

void FUN_14db6fa00(void)

{
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  
  (*(code *)0x16176c5e0)(~*(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x78),0x16176c5e0);
  return;
}



// FUNCTION 14db6fc28 FUN_14db6fc28 body=137 status=ok
// SIG undefined FUN_14db6fc28(void)

void FUN_14db6fc28(void)

{
  return;
}



// FUNCTION 14db6fcb2 FUN_14db6fcb2 body=109 status=ok
// SIG undefined FUN_14db6fcb2(void)

ulonglong FUN_14db6fcb2(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90);
}



// FUNCTION 14db6fdf5 FUN_14db6fdf5 body=55 status=ok
// SIG undefined FUN_14db6fdf5(void)

void FUN_14db6fdf5(void)

{
  ulonglong *unaff_R12;
  
  *unaff_R12 = 0x2ef39bce;
  *unaff_R12 = *unaff_R12 ^ 0x2f83a302;
  return;
}



// FUNCTION 14db6ffa8 FUN_14db6ffa8 body=400 status=ok
// SIG undefined FUN_14db6ffa8(void)

/* WARNING: Removing unreachable block (ram,0x00014db70030) */
/* WARNING: Removing unreachable block (ram,0x00014db70036) */

void FUN_14db6ffa8(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = -~*(ulonglong *)(unaff_R13 + -0x88) - 1;
  uVar1 = ~((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15));
  (*(code *)0x1616ce820)
            (param_1,uVar1,uVar1,
             ((unaff_R15 - 1) - (*(ulonglong *)(unaff_R13 + -0x60) ^ 0xffffffffffffffff)) +
             (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  return;
}



// FUNCTION 14db700e5 FUN_14db700e5 body=718 status=ok
// SIG undefined FUN_14db700e5(void)

/* WARNING: Instruction at (ram,0x0001622fbb76) overlaps instruction at (ram,0x0001622fbb75)
    */
/* WARNING: Removing unreachable block (ram,0x00014db70304) */
/* WARNING: Removing unreachable block (ram,0x00014db7030f) */
/* WARNING: Removing unreachable block (ram,0x00014db7029a) */
/* WARNING: Removing unreachable block (ram,0x00014db702a0) */
/* WARNING: Removing unreachable block (ram,0x00014db702ff) */
/* WARNING: Removing unreachable block (ram,0x00014db7030a) */
/* WARNING: Removing unreachable block (ram,0x0001622fbb5a) */
/* WARNING: Removing unreachable block (ram,0x0001622fbb76) */
/* WARNING: Removing unreachable block (ram,0x0001622fbb75) */
/* WARNING: Removing unreachable block (ram,0x00014db70218) */
/* WARNING: Removing unreachable block (ram,0x00014db7025f) */
/* WARNING: Removing unreachable block (ram,0x0001614c1b6d) */
/* WARNING: Removing unreachable block (ram,0x0001614c1b76) */
/* WARNING: Removing unreachable block (ram,0x0001614c1b93) */
/* WARNING: Removing unreachable block (ram,0x0001614c1b9a) */

void FUN_14db700e5(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 in_R9;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  FUN_16161c587(~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX));
  *(ulonglong *)(uVar1 + 8) = ~((-~*(ulonglong *)(uVar1 + 8) - (~unaff_R15 + 2)) + 1);
  in_stack_00000028 = in_stack_00000028 ^ unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 - 8) = local_res10;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(longlong *)(in_stack_00000028 - 0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 - 0x20) = in_R9;
  *(undefined8 *)(in_stack_00000028 - 0x28) = unaff_R14;
  if (0xffffffffffffffef < in_stack_00000028 - 0x18) {
    *(undefined **)(in_stack_00000028 - 8) = &DAT_156960a03;
    thunk_FUN_15b642ca5(*(undefined8 *)(in_stack_00000028 - 0x10),uStackX_8);
    return;
  }
  FUN_1569609ce();
  return;
}



// FUNCTION 14db703be FUN_14db703be body=162 status=ok
// SIG undefined FUN_14db703be(void)

/* WARNING: Removing unreachable block (ram,0x000165fbae2e) */
/* WARNING: Removing unreachable block (ram,0x000165fbae45) */
/* WARNING: Removing unreachable block (ram,0x000165fbada2) */
/* WARNING: Removing unreachable block (ram,0x00016689d56b) */
/* WARNING: Removing unreachable block (ram,0x000165fbae3a) */
/* WARNING: Removing unreachable block (ram,0x000165fbae40) */
/* WARNING: Removing unreachable block (ram,0x00014dfe025c) */
/* WARNING: Removing unreachable block (ram,0x00014db705ad) */
/* WARNING: Removing unreachable block (ram,0x00014db7063a) */
/* WARNING: Removing unreachable block (ram,0x00014db70653) */
/* WARNING: Removing unreachable block (ram,0x00014db7064c) */
/* WARNING: Removing unreachable block (ram,0x00014db70634) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db703be(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RSI;
  ulonglong uVar7;
  longlong unaff_R12;
  short in_stack_00000050;
  
  uVar2 = FUN_14e0affd4(param_1,param_2,FUN_14e0affd4);
  uVar4 = unaff_RSI + (unaff_RBX * 2 - (param_2 | unaff_RBX)) * -2 +
          *(longlong *)(unaff_R12 + -0x28);
  uVar5 = 0xffffffffffffffff - (uVar4 & uVar2) & (uVar4 | uVar2);
  uVar4 = 0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x58) & uVar2) &
          (*(ulonglong *)(unaff_R12 + -0x58) | uVar2);
  FUN_162cd3841(uVar4,*(ulonglong *)(unaff_R12 + -0x78) ^ uVar2);
  uVar2 = *(ulonglong *)(uVar4 - 0x58) ^ uVar5;
  if (-1 < in_stack_00000050) {
    uVar3 = FUN_14dfe01b1();
    return uVar3;
  }
  uVar7 = ~((~uVar5 | *(ulonglong *)(uVar4 - 0x88)) + uVar5 + 1) &
          (*(ulonglong *)(uVar4 - 0x88) | uVar5);
  uVar1 = *(ulonglong *)(uVar4 - 0x78);
  uVar5 = (~uVar1 & ~uVar5 | uVar1) & (~uVar1 | uVar5);
  lVar6 = -1 - uVar5;
  if (uVar5 != 0) {
    if (*(longlong *)(uVar4 - 0x40) == 0) {
      uVar3 = FUN_1628bfbdd(uVar4,lVar6,uVar7,uVar2);
      return uVar3;
    }
    uVar3 = FUN_1628bfbdd(uVar4,lVar6,uVar7,uVar2);
    return uVar3;
  }
  uVar3 = FUN_165fbacf9();
  return uVar3;
}



// FUNCTION 14db70460 FUN_14db70460 body=652 status=ok
// SIG undefined FUN_14db70460(void)

/* WARNING: Removing unreachable block (ram,0x000165fbae2e) */
/* WARNING: Removing unreachable block (ram,0x000165fbae45) */
/* WARNING: Removing unreachable block (ram,0x000165fbada2) */
/* WARNING: Removing unreachable block (ram,0x00016689d56b) */
/* WARNING: Removing unreachable block (ram,0x000165fbae3a) */
/* WARNING: Removing unreachable block (ram,0x000165fbae40) */
/* WARNING: Removing unreachable block (ram,0x00014dfe025c) */
/* WARNING: Removing unreachable block (ram,0x00014db705ad) */
/* WARNING: Removing unreachable block (ram,0x00014db7063a) */
/* WARNING: Removing unreachable block (ram,0x00014db70653) */
/* WARNING: Removing unreachable block (ram,0x00014db7064c) */
/* WARNING: Removing unreachable block (ram,0x00014db70634) */

undefined8 FUN_14db70460(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R12;
  short in_stack_00000048;
  
  uVar3 = unaff_RSI + (unaff_RBX * 2 - (param_2 | unaff_RBX)) * -2 +
          *(longlong *)(unaff_R12 + -0x28);
  uVar4 = 0xffffffffffffffff - (uVar3 & in_RAX) & (uVar3 | in_RAX);
  uVar3 = 0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) &
          (*(ulonglong *)(unaff_R12 + -0x58) | in_RAX);
  FUN_162cd3841(uVar3,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  uVar7 = *(ulonglong *)(uVar3 - 0x58) ^ uVar4;
  if (-1 < in_stack_00000048) {
    uVar2 = FUN_14dfe01b1();
    return uVar2;
  }
  uVar6 = ~((~uVar4 | *(ulonglong *)(uVar3 - 0x88)) + uVar4 + 1) &
          (*(ulonglong *)(uVar3 - 0x88) | uVar4);
  uVar1 = *(ulonglong *)(uVar3 - 0x78);
  uVar4 = (~uVar1 & ~uVar4 | uVar1) & (~uVar1 | uVar4);
  lVar5 = -1 - uVar4;
  if (uVar4 != 0) {
    if (*(longlong *)(uVar3 - 0x40) == 0) {
      uVar2 = FUN_1628bfbdd(uVar3,lVar5,uVar6,uVar7);
      return uVar2;
    }
    uVar2 = FUN_1628bfbdd(uVar3,lVar5,uVar6,uVar7);
    return uVar2;
  }
  uVar2 = FUN_165fbacf9();
  return uVar2;
}



// FUNCTION 14db70a0c FUN_14db70a0c body=152 status=ok
// SIG undefined FUN_14db70a0c(void)

void FUN_14db70a0c(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_1573cda6f(param_1,8,unaff_retaddr);
  return;
}



// FUNCTION 14db70b54 FUN_14db70b54 body=158 status=ok
// SIG undefined FUN_14db70b54(void)

/* WARNING: Removing unreachable block (ram,0x00014db70bec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db70b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  longlong lVar1;
  
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | 1;
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  lVar1 = (~(param_5 | unaff_R15) | ~param_5 | ~unaff_R15) + (param_5 | unaff_R15);
  *(undefined8 *)(lVar1 + -7) = in_RAX;
  *(undefined8 *)(lVar1 + -0xf) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x17) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x1f) = param_4;
  thunk_FUN_16473b047(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db71155 FUN_14db71155 body=285 status=ok
// SIG undefined FUN_14db71155(void)

void FUN_14db71155(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = ~*(ulonglong *)(unaff_R12 + 0x10);
  *(ulonglong *)(unaff_R12 + 0x10) = *(ulonglong *)(unaff_R12 + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_R12 + 0x10) =
       (~unaff_R15 | uVar1) ^ 0xffffffffffffffff | ~*(ulonglong *)(unaff_R12 + 0x10);
  FUN_1627f8c72();
  FUN_16295085d(FUN_16295085d);
  return;
}



// FUNCTION 14db714bf FUN_14db714bf body=91 status=ok
// SIG undefined FUN_14db714bf(void)

void FUN_14db714bf(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  bool bVar4;
  bool bVar5;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  LOCK();
  bVar3 = (byte)uStackX_8;
  bVar4 = bVar3 < DAT_14d7abd9e;
  bVar5 = SBORROW1(bVar3,DAT_14d7abd9e);
  cVar2 = bVar3 - DAT_14d7abd9e;
  if (cVar2 == '\0') {
    DAT_14d7abd9e = (byte)param_1;
  }
  else {
    uStackX_8 = CONCAT71((int7)((ulonglong)uStackX_8 >> 8),DAT_14d7abd9e);
  }
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined4 *)(local_res18 + -0x18) = 0x6d841c7;
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
  *(undefined8 *)(local_res18 + -0x20) = param_1;
  *(undefined8 *)(local_res18 + -0x28) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(longlong *)(local_res18 + -8) = lVar1 + -0x282b429;
  FUN_165c7153c(*(undefined8 *)(local_res18 + -0x20));
  return;
}



// FUNCTION 14db7169f FUN_14db7169f body=657 status=ok
// SIG undefined FUN_14db7169f(void)

/* WARNING: Removing unreachable block (ram,0x000165eda0e8) */
/* WARNING: Removing unreachable block (ram,0x00014db71763) */
/* WARNING: Removing unreachable block (ram,0x000165eda108) */
/* WARNING: Removing unreachable block (ram,0x00014db7174a) */

void FUN_14db7169f(void)

{
  uint in_EAX;
  undefined8 unaff_retaddr;
  longlong lVar1;
  
  lVar1 = CONCAT44(((uint)((ulonglong)unaff_retaddr >> 0x20) ^ 0xffffffff) & in_EAX,
                   (int)unaff_retaddr);
  *(undefined4 *)(&stack0x161f2538 + lVar1) = 0x993f4860;
  *(int *)(&stack0x161f2538 + lVar1) = *(int *)(&stack0x161f2538 + lVar1) + 0xbe547a1;
  *(uint *)(&stack0x161f2538 + lVar1) = ~*(uint *)(&stack0x161f2538 + lVar1);
  *(int *)(&stack0x161f2538 + lVar1) = 0x5adb6ffe - *(int *)(&stack0x161f2538 + lVar1);
  FUN_14dcce3ac();
  return;
}



// FUNCTION 14db71896 FUN_14db71896 body=171 status=ok
// SIG undefined FUN_14db71896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db71896(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong unaff_R15;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 local_res10;
  
  uVar2 = _CurrentLocale;
  uVar1 = ~(local_res10 & unaff_R15 | (local_res10 | unaff_R15) ^ 0xffffffffffffffff);
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined4 *)(uVar1 - 0x18) = 0x10cf8965;
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  FUN_162a10f35();
  return;
}



// FUNCTION 14db71941 FUN_14db71941 body=80 status=ok
// SIG undefined FUN_14db71941(void)

undefined8 FUN_14db71941(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14db719e8 FUN_14db719e8 body=161 status=ok
// SIG undefined FUN_14db719e8(void)

void FUN_14db719e8(undefined8 param_1,undefined8 param_2)

{
  FUN_156fb576d(param_1,param_2,param_1,FUN_156fb576d);
  return;
}



// FUNCTION 14db71b8b FUN_14db71b8b body=141 status=ok
// SIG undefined FUN_14db71b8b(void)

/* WARNING: Removing unreachable block (ram,0x0001660a2c97) */
/* WARNING: Removing unreachable block (ram,0x0001660a2c9d) */
/* WARNING: Removing unreachable block (ram,0x00014db71c0e) */
/* WARNING: Removing unreachable block (ram,0x00014db71c14) */
/* WARNING: Removing unreachable block (ram,0x00014db71c19) */
/* WARNING: Removing unreachable block (ram,0x00014db71caa) */
/* WARNING: Removing unreachable block (ram,0x00014db71cb0) */
/* WARNING: Removing unreachable block (ram,0x00014db71cb5) */
/* WARNING: Removing unreachable block (ram,0x0001659f2f2b) */

undefined8 FUN_14db71b8b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db71c19 FUN_14db71c19 body=156 status=ok
// SIG undefined FUN_14db71c19(void)

/* WARNING: Removing unreachable block (ram,0x00014db71caa) */
/* WARNING: Removing unreachable block (ram,0x00014db71cb0) */
/* WARNING: Removing unreachable block (ram,0x00014db71cb5) */

void FUN_14db71c19(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong in_RAX;
  undefined8 local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2);
  *(undefined8 *)(0xffffffffffffffff - (local_res18 & in_RAX) & (local_res18 | in_RAX)) = 0x13a99a8;
  FUN_14d85d504();
  return;
}



// FUNCTION 14db71cb5 thunk_FUN_14db71cc1 body=5 status=ok
// SIG undefined thunk_FUN_14db71cc1(void)

void thunk_FUN_14db71cc1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_14dd2e261(param_1,param_2,0xffffffffe041c023,
                      ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                      ~(~*(ulonglong *)(unaff_R13 + -0x60) & ~unaff_R15));
  return;
}



// FUNCTION 14db71cbb thunk_FUN_14db71cc1 body=5 status=ok
// SIG undefined thunk_FUN_14db71cc1(void)

void thunk_FUN_14db71cc1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_14dd2e261(param_1,param_2,0xffffffffe041c023,
                      ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                      ~(~*(ulonglong *)(unaff_R13 + -0x60) & ~unaff_R15));
  return;
}



// FUNCTION 14db71cc1 FUN_14db71cc1 body=124 status=ok
// SIG undefined FUN_14db71cc1(void)

void FUN_14db71cc1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_14dd2e261(param_1,param_2,0xffffffffe041c023,
                      ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                      ~(~*(ulonglong *)(unaff_R13 + -0x60) & ~unaff_R15));
  return;
}



// FUNCTION 14db71dc1 FUN_14db71dc1 body=47 status=ok
// SIG undefined FUN_14db71dc1(void)

void FUN_14db71dc1(char param_1)

{
  char cVar1;
  char in_AL;
  longlong local_res18;
  
  LOCK();
  cVar1 = param_1;
  if (in_AL != DAT_14d7c2011) {
    cVar1 = DAT_14d7c2011;
  }
  DAT_14d7c2011 = cVar1;
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = 0x223e4c;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14db71f7d FUN_14db71f7d body=59 status=ok
// SIG undefined FUN_14db71f7d(void)

void FUN_14db71f7d(void)

{
  return;
}



// FUNCTION 14db720b9 FUN_14db720b9 body=93 status=ok
// SIG undefined FUN_14db720b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14db720b9(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 local_res18;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ param_1;
  uVar1 = _CurrentLocale;
  *(undefined8 *)(in_stack_00000028 - 8) = 0x7bf3472;
  *(undefined8 *)(in_stack_00000028 - 0x10) = local_res18;
  *(undefined8 *)(in_stack_00000028 - 0x18) = local_res18;
  *(code **)(in_stack_00000028 - 0x10) = FUN_165c7153c;
  return uVar1;
}



// FUNCTION 14db7214b FUN_14db7214b body=492 status=ok
// SIG undefined FUN_14db7214b(void)

/* WARNING: Removing unreachable block (ram,0x00014db721d0) */
/* WARNING: Removing unreachable block (ram,0x00014db721d6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db7214b(void)

{
  return;
}



// FUNCTION 14db723f6 FUN_14db723f6 body=486 status=ok
// SIG undefined FUN_14db723f6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b1fba7d) */
/* WARNING: Removing unreachable block (ram,0x00016581f24f) */
/* WARNING: Removing unreachable block (ram,0x00016581f2e2) */
/* WARNING: Removing unreachable block (ram,0x000162ab4477) */
/* WARNING: Removing unreachable block (ram,0x00016581f2ee) */
/* WARNING: Removing unreachable block (ram,0x00016581f37a) */
/* WARNING: Removing unreachable block (ram,0x00016581f386) */
/* WARNING: Removing unreachable block (ram,0x0001620b3626) */
/* WARNING: Removing unreachable block (ram,0x0001620b36d3) */
/* WARNING: Removing unreachable block (ram,0x00014d7c04be) */
/* WARNING: Removing unreachable block (ram,0x000160ddf587) */
/* WARNING: Removing unreachable block (ram,0x00014db72538) */
/* WARNING: Removing unreachable block (ram,0x00014db7253e) */
/* WARNING: Removing unreachable block (ram,0x00014db725d8) */
/* WARNING: Removing unreachable block (ram,0x00014db725de) */
/* WARNING: Removing unreachable block (ram,0x000161925d00) */
/* WARNING: Removing unreachable block (ram,0x000161925d9c) */
/* WARNING: Removing unreachable block (ram,0x000161925da1) */
/* WARNING: Removing unreachable block (ram,0x000161925da7) */
/* WARNING: Removing unreachable block (ram,0x00016150a6f7) */
/* WARNING: Removing unreachable block (ram,0x00015b1fbb01) */
/* WARNING: Removing unreachable block (ram,0x000162390cef) */
/* WARNING: Removing unreachable block (ram,0x000162390c7f) */
/* WARNING: Removing unreachable block (ram,0x000162390cf2) */
/* WARNING: Removing unreachable block (ram,0x00014db72497) */

void FUN_14db723f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong uStackX_18;
  
  uVar1 = uStackX_18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = param_4;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBP;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_R12;
  *(undefined4 *)(uVar1 - 0x28) = 0x4c2a52b7;
  *(uint *)(uVar1 - 0x28) = *(uint *)(uVar1 - 0x28) ^ 0x2fd3b67;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar4 = *(ulonglong *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x28) = local_res8;
  uVar5 = *(undefined8 *)(uVar1 - 0x28);
  *(undefined8 *)((uVar1 - 0x18) + (uVar4 ^ 0x4ed769d8)) = uVar2;
  lVar3 = *(longlong *)(uVar1 - 0x18);
  *(undefined1 **)(uVar1 - 8) = &LAB_14e10cd92;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  if (lVar3 == 0) {
    FUN_14e10cd37(param_1,uVar5);
    return;
  }
  FUN_14e10cd37(param_1,uVar5);
  return;
}



// FUNCTION 14db725de FUN_14db725de body=16 status=ok
// SIG undefined FUN_14db725de(void)

void FUN_14db725de(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14db72724 FUN_14db72724 body=151 status=ok
// SIG undefined FUN_14db72724(void)

void FUN_14db72724(void)

{
  return;
}



// FUNCTION 14db727be FUN_14db727be body=750 status=ok
// SIG undefined FUN_14db727be(void)

/* WARNING: Removing unreachable block (ram,0x00014db72906) */
/* WARNING: Removing unreachable block (ram,0x00014db7285e) */
/* WARNING: Removing unreachable block (ram,0x00014db728d7) */
/* WARNING: Removing unreachable block (ram,0x00014db728da) */
/* WARNING: Removing unreachable block (ram,0x00014db72900) */
/* WARNING: Removing unreachable block (ram,0x000165847411) */

undefined8 FUN_14db727be(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_8;
  
  local_8 = CONCAT44(local_8._4_4_,0x2b1a7ea6);
  lVar3 = -(local_8 ^ 0x22202679);
  *(undefined1 **)(&stack0x093a58e7 + lVar3) = &stack0x093a58ef + lVar3;
  puVar2 = *(undefined8 **)(&stack0x093a58e7 + lVar3);
  puVar2[-1] = unaff_RDI;
  *puVar2 = unaff_RBX;
  puVar2[-1] = thunk_FUN_15b642ca5;
  puVar2[-2] = &DAT_156ff5618;
  puVar2[-3] = &DAT_156ff5618;
  puVar1 = puVar2 + -4;
  *puVar1 = unaff_retaddr;
  uVar4 = *puVar1;
  *puVar1 = unaff_RSI;
  *(undefined4 *)(puVar2 + -5) = 0xdd836a3b;
  *(undefined4 *)((longlong)puVar2 + -0x24) = 0xffffffff;
  puVar2[-5] = unaff_R15;
  puVar2[-6] = 0x162e3b1f3;
  FUN_165fa47bd(param_1,uVar4);
  uVar4 = FUN_162e3b1f9();
  return uVar4;
}



// FUNCTION 14db72b2e FUN_14db72b2e body=311 status=ok
// SIG undefined FUN_14db72b2e(void)

/* WARNING: Removing unreachable block (ram,0x0001615117c0) */
/* WARNING: Removing unreachable block (ram,0x0001615117c6) */
/* WARNING: Removing unreachable block (ram,0x000165b5042d) */
/* WARNING: Removing unreachable block (ram,0x000165b5046d) */
/* WARNING: Removing unreachable block (ram,0x00014db72bf8) */
/* WARNING: Removing unreachable block (ram,0x00014db72c3e) */
/* WARNING: Removing unreachable block (ram,0x00014db72c44) */
/* WARNING: Removing unreachable block (ram,0x0001648213fb) */
/* WARNING: Removing unreachable block (ram,0x00014db72bc6) */
/* WARNING: Removing unreachable block (ram,0x00014db72bf3) */
/* WARNING: Removing unreachable block (ram,0x000164821420) */
/* WARNING: Removing unreachable block (ram,0x00014db72c39) */

undefined8 FUN_14db72b2e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165b5042d();
  return uVar1;
}



// FUNCTION 14db72bc6 FUN_14db72bc6 body=125 status=ok
// SIG undefined FUN_14db72bc6(void)

/* WARNING: Removing unreachable block (ram,0x00014db72c44) */

void FUN_14db72bc6(void)

{
  undefined8 *unaff_R12;
  ulonglong unaff_retaddr;
  undefined1 *in_stack_00000008;
  
  if (((ulonglong)unaff_R12 & (unaff_retaddr >> 1 ^ unaff_retaddr << 0x3f)) != 0) {
    if (((ulonglong)unaff_R12 & 0x7fffffffffffffff) != 0) {
      FUN_1648213fb();
      return;
    }
    in_stack_00000008 =
         &DAT_f1b3c6aedb4dc9c9 +
         (longlong)(in_stack_00000008 + ((ulonglong)in_stack_00000008 & 0xf1b3c6aedb4dc9c9) * -2);
    unaff_R12 = (undefined8 *)0x0;
  }
  *unaff_R12 = in_stack_00000008;
  return;
}



// FUNCTION 14db72c44 FUN_14db72c44 body=171 status=ok
// SIG undefined FUN_14db72c44(void)

void FUN_14db72c44(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  
  uVar1 = *param_3;
  *param_3 = -*param_3;
  *param_3 = *param_3 - 1;
  *param_3 = *param_3 | unaff_R15;
  *param_3 = ~((0xffffffffffffffff - unaff_R15 | uVar1) & *param_3);
  FUN_16226a720();
  return;
}



// FUNCTION 14db72f71 FUN_14db72f71 body=340 status=ok
// SIG undefined FUN_14db72f71(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db72f71(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (param_7 < 0) {
    FUN_156aa28a3();
    FUN_161a5eb47();
    return;
  }
  FUN_1573480af(unaff_RDI + param_1 * -2,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)),param_3,param_4);
  return;
}



// FUNCTION 14db730cc FUN_14db730cc body=305 status=ok
// SIG undefined FUN_14db730cc(void)

/* WARNING: Removing unreachable block (ram,0x00014db73170) */
/* WARNING: Removing unreachable block (ram,0x000161613dcb) */

void FUN_14db730cc(undefined8 param_1,undefined8 param_2)

{
  FUN_161613dcb(param_1,param_2);
  return;
}



// FUNCTION 14db73342 FUN_14db73342 body=101 status=ok
// SIG undefined FUN_14db73342(void)

void FUN_14db73342(void)

{
  code *pcVar1;
  undefined8 in_R11;
  ushort *unaff_R13;
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
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  undefined8 *local_res20;
  
  *unaff_R13 = (-0x101 - (*unaff_R13 | 0xfeff)) + *unaff_R13;
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
  (*pcVar1)();
  *local_res20 = in_R11;
  local_res20[-1] = in_R11;
  local_res20[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  *local_res20 = 0x476a234;
  local_res20[-1] = uStackX_10;
  local_res20[-2] = uStackX_10;
  local_res20[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14db733df FUN_14db733df body=137 status=ok
// SIG undefined FUN_14db733df(void)

/* WARNING: Removing unreachable block (ram,0x00015b340c4f) */
/* WARNING: Removing unreachable block (ram,0x00015b340c5a) */
/* WARNING: Removing unreachable block (ram,0x00014e0bc652) */
/* WARNING: Removing unreachable block (ram,0x00015b340b83) */
/* WARNING: Removing unreachable block (ram,0x00016183c4c6) */
/* WARNING: Removing unreachable block (ram,0x00015b340c55) */
/* WARNING: Removing unreachable block (ram,0x00014db73502) */
/* WARNING: Removing unreachable block (ram,0x00014db7359e) */
/* WARNING: Removing unreachable block (ram,0x00014db735a4) */
/* WARNING: Removing unreachable block (ram,0x00014db73627) */
/* WARNING: Removing unreachable block (ram,0x00014db7362c) */
/* WARNING: Removing unreachable block (ram,0x00014db73637) */
/* WARNING: Removing unreachable block (ram,0x00014db73632) */
/* WARNING: Removing unreachable block (ram,0x00014e0bc63e) */
/* WARNING: Removing unreachable block (ram,0x00014db7346a) */
/* WARNING: Removing unreachable block (ram,0x0001569213e0) */
/* WARNING: Removing unreachable block (ram,0x00015692146d) */
/* WARNING: Removing unreachable block (ram,0x000164b9f540) */
/* WARNING: Removing unreachable block (ram,0x00014db734f7) */
/* WARNING: Removing unreachable block (ram,0x00014db734fd) */
/* WARNING: Removing unreachable block (ram,0x000156921473) */

void FUN_14db733df(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) == 0 &&
      (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15) == 0xffffffffffffffff) {
    FUN_161c7c0d9();
    return;
  }
  FUN_161c7c0d9();
  return;
}



// FUNCTION 14db7346a FUN_14db7346a body=151 status=ok
// SIG undefined FUN_14db7346a(void)

/* WARNING: Removing unreachable block (ram,0x00015b340c4f) */
/* WARNING: Removing unreachable block (ram,0x00015b340c5a) */
/* WARNING: Removing unreachable block (ram,0x00014e0bc652) */
/* WARNING: Removing unreachable block (ram,0x00015b340b83) */
/* WARNING: Removing unreachable block (ram,0x00016183c4c6) */
/* WARNING: Removing unreachable block (ram,0x00015b340c55) */
/* WARNING: Removing unreachable block (ram,0x00014db73502) */
/* WARNING: Removing unreachable block (ram,0x00014db7359e) */
/* WARNING: Removing unreachable block (ram,0x00014e0bc63e) */
/* WARNING: Removing unreachable block (ram,0x00014db73637) */
/* WARNING: Removing unreachable block (ram,0x00014db735a4) */
/* WARNING: Removing unreachable block (ram,0x00014db73627) */
/* WARNING: Removing unreachable block (ram,0x00014db7362c) */
/* WARNING: Removing unreachable block (ram,0x00014db73632) */
/* WARNING: Removing unreachable block (ram,0x000156921473) */

void FUN_14db7346a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong *puVar3;
  undefined8 uStackX_18;
  
  puVar3 = (ulonglong *)(0x1fa1 - (~unaff_R12 + 2));
  uVar2 = *puVar3;
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | param_1;
  *puVar3 = ~((0xffffffffffffffff - param_1 | uVar2) & *puVar3);
  if (param_1 == 0) {
    FUN_1569213e0();
    return;
  }
  uVar2 = ~(~(0xffffffffffffffff - ~(~param_5 | ~param_1)) | ~(~-param_5 + 1 | param_1));
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = in_R11;
  *(longlong *)(uVar2 - 0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = (longlong)(&DAT_164b9f58f + *plVar1);
                    /* WARNING: Could not recover jumptable at 0x000164b9f575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStackX_18,param_2,param_3);
  return;
}



// FUNCTION 14db73502 FUN_14db73502 body=161 status=ok
// SIG undefined FUN_14db73502(void)

/* WARNING: Removing unreachable block (ram,0x00015b340c4f) */
/* WARNING: Removing unreachable block (ram,0x00015b340c5a) */
/* WARNING: Removing unreachable block (ram,0x00014e0bc652) */
/* WARNING: Removing unreachable block (ram,0x00015b340b83) */
/* WARNING: Removing unreachable block (ram,0x00016183c4c6) */
/* WARNING: Removing unreachable block (ram,0x00015b340c55) */
/* WARNING: Removing unreachable block (ram,0x00014db735a4) */
/* WARNING: Removing unreachable block (ram,0x00014db73627) */
/* WARNING: Removing unreachable block (ram,0x00014db7362c) */
/* WARNING: Removing unreachable block (ram,0x00014db73632) */
/* WARNING: Removing unreachable block (ram,0x00014db73637) */

void FUN_14db73502(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x28);
  (*(code *)0x16600bb8e)(~(uVar1 & in_RAX) & ((uVar1 - (~in_RAX | uVar1)) + ~in_RAX | in_RAX));
  return;
}



// FUNCTION 14db735a4 FUN_14db735a4 body=147 status=ok
// SIG undefined FUN_14db735a4(void)

/* WARNING: Removing unreachable block (ram,0x00014db73637) */

void FUN_14db735a4(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte in_R11B;
  ulonglong unaff_R15;
  byte in_stack_00000040;
  
  uVar1 = ~((~unaff_R15 | ~param_1 & param_2) &
           (0xffffffffffffffff - (~param_1 & param_2) | unaff_R15));
  if ((in_stack_00000040 & in_R11B) == 0) {
    FUN_16658cf7c(uVar1);
    return;
  }
  FUN_16658cf7c(uVar1);
  return;
}



// FUNCTION 14db73637 thunk_FUN_14db7363d body=5 status=ok
// SIG undefined thunk_FUN_14db7363d(void)

void thunk_FUN_14db7363d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1578535ce();
  FUN_160efe335();
  FUN_15af37be7(0xffffffffffffff89,FUN_15af37be7,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14db7363d FUN_14db7363d body=393 status=ok
// SIG undefined FUN_14db7363d(void)

void FUN_14db7363d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1578535ce();
  FUN_160efe335();
  FUN_15af37be7(0xffffffffffffff89,FUN_15af37be7,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14db737c9 FUN_14db737c9 body=3 status=ok
// SIG undefined FUN_14db737c9(void)

void FUN_14db737c9(void)

{
  return;
}



// FUNCTION 14db7397b thunk_FUN_14db73981 body=5 status=ok
// SIG undefined thunk_FUN_14db73981(void)

void thunk_FUN_14db73981(void)

{
  return;
}



// FUNCTION 14db73981 FUN_14db73981 body=33 status=ok
// SIG undefined FUN_14db73981(void)

void FUN_14db73981(void)

{
  return;
}



// FUNCTION 14db73a13 FUN_14db73a13 body=255 status=ok
// SIG undefined FUN_14db73a13(void)

void FUN_14db73a13(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = CONCAT44(local_res10._4_4_ + 0x2bd3f27b,(undefined4)local_res10);
  FUN_164a54dbe(local_res10,local_res8,param_3);
  return;
}



// FUNCTION 14db73c01 FUN_14db73c01 body=37 status=ok
// SIG undefined FUN_14db73c01(void)

void FUN_14db73c01(void)

{
  return;
}



// FUNCTION 14db73c80 FUN_14db73c80 body=125 status=ok
// SIG undefined FUN_14db73c80(void)

/* WARNING: Removing unreachable block (ram,0x00014db73cf5) */
/* WARNING: Removing unreachable block (ram,0x000156beccdd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000156becc82 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db73c80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 *puVar2;
  uint *puVar3;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  byte in_AF;
  bool bVar4;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 in_stack_00000010;
  undefined1 local_8 [8];
  
  bVar4 = (in_TF & 1) == 0;
  puVar2 = (undefined8 *)local_8;
  if (bVar4) {
    puVar2 = (undefined8 *)register0x00000020;
  }
  *puVar2 = unaff_R14;
  puVar2[-1] = in_stack_00000010;
  puVar2[-2] = (ulonglong)(in_NT & 1) * 0x4000 |
               (ulonglong)(bVar4 && SCARRY8((longlong)local_8,8)) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(bVar4 && (longlong)&stack0x00000000 < 0) * 0x80 |
               (ulonglong)(bVar4 && &stack0x00000000 == (undefined1 *)0x0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | 4 |
               (ulonglong)(bVar4 && &DAT_fffffffffffffff7 < local_8) |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(puVar2 + -2) = *(ushort *)(puVar2 + -2) & 0x100;
  puVar3 = (uint *)(puVar2 + -2);
  if (*(short *)(puVar2 + -2) == 0) {
    puVar3 = (uint *)(puVar2 + -1);
  }
  *puVar3 = 0;
  *puVar3 = *puVar3 ^ 0xb9fbc628;
  *puVar3 = *puVar3 + 0x1695113b;
  *puVar3 = *puVar3 + 0x3d291b18;
  puVar3[-2] = 0x56becceb;
  puVar3[-1] = 1;
  FUN_161a927d9(FUN_161a927d9);
  lVar1 = *(longlong *)(param_3 + 8);
  *(undefined8 *)puVar3 = unaff_R13;
  *(longlong *)(param_3 + 8) = -lVar1;
  *(undefined8 *)(puVar3 + 4) = unaff_RBX;
  *(undefined8 *)(puVar3 + 2) = unaff_RBX;
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(unaff_R12 + 0xe0);
  return;
}



// FUNCTION 14db73eaf FUN_14db73eaf body=287 status=ok
// SIG undefined FUN_14db73eaf(void)

/* WARNING: Removing unreachable block (ram,0x00014db73f33) */

undefined8 FUN_14db73eaf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  *param_3 = param_1;
  if ((unaff_R15 & 0x400000000000) != 0) {
    return in_stack_00000008;
  }
  uVar1 = FUN_156a29d55();
  return uVar1;
}



// FUNCTION 14db73fd5 FUN_14db73fd5 body=744 status=ok
// SIG undefined FUN_14db73fd5(void)

/* WARNING: Removing unreachable block (ram,0x00014db740f0) */
/* WARNING: Removing unreachable block (ram,0x00014db74182) */
/* WARNING: Removing unreachable block (ram,0x00014db74188) */
/* WARNING: Removing unreachable block (ram,0x0001666d37ce) */
/* WARNING: Removing unreachable block (ram,0x00014db740e5) */
/* WARNING: Removing unreachable block (ram,0x000161747244) */
/* WARNING: Removing unreachable block (ram,0x00014db74060) */
/* WARNING: Removing unreachable block (ram,0x00014db740dc) */
/* WARNING: Removing unreachable block (ram,0x000164b467e8) */
/* WARNING: Removing unreachable block (ram,0x000161747224) */
/* WARNING: Removing unreachable block (ram,0x000161747248) */
/* WARNING: Removing unreachable block (ram,0x000164b467f4) */
/* WARNING: Removing unreachable block (ram,0x000164b467e3) */

void FUN_14db73fd5(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000028 - 8) = local_res10;
  *(undefined8 *)(in_stack_00000028 - 0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 - 8) = 0x1b118a66;
  *(undefined8 *)(in_stack_00000028 - 0x20) = unaff_RDI;
  FUN_14e1e24cc(&DAT_162701ad0);
  return;
}



// FUNCTION 14db74483 FUN_14db74483 body=142 status=ok
// SIG undefined FUN_14db74483(void)

void FUN_14db74483(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b348765(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db7471d FUN_14db7471d body=154 status=ok
// SIG undefined FUN_14db7471d(void)

void FUN_14db7471d(void)

{
  return;
}



// FUNCTION 14db74861 FUN_14db74861 body=404 status=ok
// SIG undefined FUN_14db74861(void)

/* WARNING: Removing unreachable block (ram,0x00014db748e5) */
/* WARNING: Removing unreachable block (ram,0x00014db748f9) */
/* WARNING: Removing unreachable block (ram,0x0001659131dc) */

void FUN_14db74861(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_162995540(param_1,param_2 + param_1 + (param_2 & param_1) * -2,param_3,param_4);
  return;
}



// FUNCTION 14db74965 FUN_14db74965 body=103 status=ok
// SIG undefined FUN_14db74965(void)

void FUN_14db74965(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  FUN_16131bb16(uStackX_10,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14db74b50 FUN_14db74b50 body=249 status=ok
// SIG undefined FUN_14db74b50(void)

void FUN_14db74b50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R14;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  
  lVar1 = FUN_1572a8b20(0x7ffe0000);
  puVar2 = (ulonglong *)(param_2 + lVar1);
  uVar10 = *puVar2;
  bVar7 = (uVar10 & 0x4000) != 0;
  bVar6 = (uVar10 & 0x400) != 0;
  bVar5 = (uVar10 & 0x200) != 0;
  bVar4 = (uVar10 & 0x100) != 0;
  bVar3 = (uVar10 & 0x10) != 0;
  bVar9 = (uVar10 & 0x200000) != 0;
  bVar8 = (uVar10 & 0x40000) != 0;
  *puVar2 = (ulonglong)bVar7 * 0x4000 | (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
            (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar4 * 0x100 |
            (ulonglong)((uVar10 & 0x80) != 0) * 0x80 | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 |
            (ulonglong)bVar3 * 0x10 | (ulonglong)((uVar10 & 4) != 0) * 4 |
            (ulonglong)((uVar10 & 1) != 0) | (ulonglong)bVar9 * 0x200000 |
            (ulonglong)bVar8 * 0x40000;
  puVar2[-1] = (ulonglong)bVar7 * 0x4000 | (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 |
               (ulonglong)bVar4 * 0x100 | (ulonglong)((*puVar2 & 0x400) == 0) * 0x40 |
               (ulonglong)bVar3 * 0x10 | 4 | (ulonglong)bVar9 * 0x200000 |
               (ulonglong)bVar8 * 0x40000;
  thunk_FUN_1625bf6f5(unaff_RSI,unaff_R14);
  return;
}



// FUNCTION 14db74c4b FUN_14db74c4b body=380 status=ok
// SIG undefined FUN_14db74c4b(void)

void FUN_14db74c4b(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  
  FUN_1666666f6(param_1,param_2,param_3);
  (*(code *)0x1615ee937)(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14db74d68 FUN_14db74d68 body=135 status=ok
// SIG undefined FUN_14db74d68(void)

void FUN_14db74d68(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_1616b30fc(param_1,*(undefined8 *)(unaff_R13 + -0x98));
  return;
}



// FUNCTION 14db74eb1 FUN_14db74eb1 body=115 status=ok
// SIG undefined FUN_14db74eb1(void)

void FUN_14db74eb1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short in_AX;
  short *unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *unaff_R15 = (-0x101 - in_AX) + *unaff_R15;
  *(undefined8 *)(local_res20 + -8) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = uStackX_10;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x14db74f42;
  thunk_FUN_15b642ca5(*(undefined8 *)(local_res20 + -0x10),param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14db75143 FUN_14db75143 body=179 status=ok
// SIG undefined FUN_14db75143(void)

void FUN_14db75143(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1655fb90b)
            (0x1655fb90b,0xfffffffffb644539,0x757ba5dd,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14db754c6 FUN_14db754c6 body=3 status=ok
// SIG undefined FUN_14db754c6(void)

void FUN_14db754c6(void)

{
  return;
}



// FUNCTION 14db7571f FUN_14db7571f body=313 status=ok
// SIG undefined FUN_14db7571f(void)

void FUN_14db7571f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *unaff_R13;
  
  *unaff_R13 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  FUN_160bc97b2(param_1,FUN_160bc97b2,param_3,param_4);
  return;
}



// FUNCTION 14db759ad FUN_14db759ad body=138 status=ok
// SIG undefined FUN_14db759ad(void)

void FUN_14db759ad(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_164763096(thunk_FUN_164763096,param_2,param_3,param_4);
  return;
}



// FUNCTION 14db75a38 FUN_14db75a38 body=303 status=ok
// SIG undefined FUN_14db75a38(void)

/* WARNING: Removing unreachable block (ram,0x00014db75adc) */
/* WARNING: Removing unreachable block (ram,0x00014db75ae7) */
/* WARNING: Removing unreachable block (ram,0x00014db75ae2) */

longlong FUN_14db75a38(void)

{
  ulonglong unaff_RSI;
  ulonglong unaff_R14;
  
  return (~unaff_RSI | unaff_R14) + unaff_RSI + 1;
}



// FUNCTION 14db75bfe FUN_14db75bfe body=158 status=ok
// SIG undefined FUN_14db75bfe(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db75c0d) */
/* WARNING: Removing unreachable block (ram,0x0001647819d5) */
/* WARNING: Removing unreachable block (ram,0x0001647819db) */
/* WARNING: Removing unreachable block (ram,0x00014db75c7f) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5976) */
/* WARNING: Removing unreachable block (ram,0x00014db75c93) */

void FUN_14db75bfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int in_EAX;
  uint uVar1;
  uint unaff_EDI;
  uint unaff_R13D;
  undefined8 in_stack_00000008;
  
  uVar1 = ~(in_EAX + unaff_EDI & unaff_EDI) & (in_EAX + unaff_EDI | unaff_EDI);
  FUN_1626b5c82(in_stack_00000008,
                -~uVar1 - (~(-(unaff_R13D ^ 0xffffffff) - (~-~(~uVar1 & ~unaff_R13D) + 2)) + 2),
                param_3,0xffffffffffffffff);
  return;
}



// FUNCTION 14db75c9e FUN_14db75c9e body=116 status=ok
// SIG undefined FUN_14db75c9e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db75c9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  longlong in_R10;
  ulonglong unaff_R15;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar3 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = ~*(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) | unaff_R15;
  *(ulonglong *)(in_R10 + 8) = ~((~unaff_R15 | uVar3) & *(ulonglong *)(in_R10 + 8));
  param_5 = param_5 ^ unaff_R15;
  puVar2 = (undefined8 *)(param_5 - 8);
  *puVar2 = in_RAX;
  *(undefined8 *)(param_5 - 0x10) = *puVar2;
  *puVar2 = &LAB_14db75d31;
  uVar4 = *(undefined8 *)(param_5 - 0x10);
  *unaff_RDI = (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),
                             (cRam1659824689754764 + 'A') -
                             CARRY1((byte)param_2,(byte)((ulonglong)param_2 >> 8)));
  pbVar1 = (byte *)(unaff_RBP + -0x20c2a5e);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)uVar4 >> 8);
  *(ulonglong *)(param_5 - 0x10) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 | (ulonglong)((char)*pbVar1 < '\0') * 0x80 |
       (ulonglong)(*pbVar1 == 0) * 0x40 | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(*pbVar1) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db75d54 FUN_14db75d54 body=156 status=ok
// SIG undefined FUN_14db75d54(void)

void FUN_14db75d54(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char in_AL;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ushort *unaff_R15;
  undefined8 unaff_retaddr;
  longlong local_res20;
  
  *unaff_R15 = 0xfeff - ~(*unaff_R15 | 0x100);
                    /* WARNING: Read-only address (ram,0x00014d7a5f25) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a5f25;
  }
  uRam000000014d7a5f25 = uVar1;
  UNLOCK();
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined8 *)(local_res20 + -8) = 0x3ea32de;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(undefined8 *)(local_res20 + -0x18) = param_4;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x28) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x30) = 0x165bbe074;
  return;
}



// FUNCTION 14db75df3 FUN_14db75df3 body=325 status=ok
// SIG undefined FUN_14db75df3(void)

/* WARNING: Removing unreachable block (ram,0x00014db75e8e) */
/* WARNING: Removing unreachable block (ram,0x00014db75e83) */

void FUN_14db75df3(void)

{
  ulonglong unaff_R13;
  longlong unaff_R15;
  
  FUN_15b8bef29(*(undefined8 *)(unaff_R15 + -0x50),0x8e8da12,
                *(ulonglong *)(unaff_R15 + -0x78) ^ unaff_R13);
  return;
}



// FUNCTION 14db75fb5 FUN_14db75fb5 body=27 status=ok
// SIG undefined FUN_14db75fb5(void)

void FUN_14db75fb5(void)

{
  return;
}



// FUNCTION 14db76166 FUN_14db76166 body=320 status=ok
// SIG undefined FUN_14db76166(void)

/* WARNING: Removing unreachable block (ram,0x00014db7629e) */
/* WARNING: Removing unreachable block (ram,0x00014db7620c) */

void FUN_14db76166(void)

{
  return;
}



// FUNCTION 14db762ad FUN_14db762ad body=135 status=ok
// SIG undefined FUN_14db762ad(void)

void FUN_14db762ad(void)

{
  undefined8 *puVar1;
  uint in_EAX;
  longlong in_R9;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong auStackX_8 [4];
  undefined8 uStack_10;
  undefined4 uStack_4;
  
  puVar1 = (undefined8 *)((longlong)auStackX_8 + in_R9 + -8);
  puVar1[1] = (ulonglong)(~in_EAX + 1);
  *puVar1 = *puVar1;
  puVar1[-1] = unaff_R12;
  puVar1[-2] = unaff_R13;
  *(undefined4 *)(puVar1 + -1) = 0x6d38e64;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  FUN_165995189();
  return;
}



// FUNCTION 14db76335 FUN_14db76335 body=126 status=ok
// SIG undefined FUN_14db76335(void)

void FUN_14db76335(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_164b83891(CONCAT71((int7)(*(ulonglong *)(unaff_R12 + -0x30) + in_RAX >> 8),0x74),0xde,
                FUN_164b83891,
                -1 - ~((~*(ulonglong *)(unaff_R12 + -0x30) ^ 0xffffffffffffffff) & in_RAX));
  return;
}



// FUNCTION 14db76431 FUN_14db76431 body=139 status=ok
// SIG undefined FUN_14db76431(void)

void FUN_14db76431(void)

{
  FUN_166755deb();
  return;
}



// FUNCTION 14db764be FUN_14db764be body=151 status=ok
// SIG undefined FUN_14db764be(void)

void FUN_14db764be(void)

{
  FUN_162282d01();
  return;
}



// FUNCTION 14db765d3 FUN_14db765d3 body=160 status=ok
// SIG undefined FUN_14db765d3(void)

/* WARNING: Removing unreachable block (ram,0x000165cb7536) */
/* WARNING: Removing unreachable block (ram,0x00015b0c0061) */
/* WARNING: Removing unreachable block (ram,0x00014db7667b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14db765d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7)

{
  ulonglong uVar1;
  longlong in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R15;
  bool bVar3;
  longlong in_stack_00000058;
  
  *(undefined8 *)(&stack0x51a38182 + in_RAX) = 0x4b0a9933;
  *(ulonglong *)(&stack0x51a38182 + in_RAX) = *(ulonglong *)(&stack0x51a38182 + in_RAX) ^ 0x4b0a9933
  ;
  uVar1 = *(ulonglong *)(&stack0x51a38182 + in_RAX);
  *(ulonglong *)(&stack0x51a38182 + in_RAX) = ~*(ulonglong *)(&stack0x51a38182 + in_RAX);
  *(ulonglong *)(&stack0x51a38182 + in_RAX) = *(ulonglong *)(&stack0x51a38182 + in_RAX) | unaff_RBX;
  *(ulonglong *)(&stack0x51a38182 + in_RAX) =
       ~((~unaff_RBX | uVar1) & *(ulonglong *)(&stack0x51a38182 + in_RAX));
  bVar3 = param_6 == unaff_R15;
  uVar2 = FUN_160d597f3(param_1,param_2);
  if (bVar3) {
    uVar2 = FUN_16131bb16();
    return uVar2;
  }
  if (unaff_RSI == 0x79) {
    return uVar2;
  }
  if (unaff_RSI == 0x7a) {
    FUN_15b0bffc0();
    _FUN_160d597f3 = (-0x101 - (_FUN_160d597f3 | 0xfeff)) + _FUN_160d597f3;
    *(undefined8 *)(in_stack_00000058 + -8) = param_3;
    *(undefined8 *)(in_stack_00000058 + -0x10) = *(undefined8 *)(in_stack_00000058 + -8);
    *(undefined8 *)(in_stack_00000058 + -0x18) = param_7;
    *(undefined1 **)(in_stack_00000058 + -8) = &LAB_1657dca4a;
    uVar2 = FUN_14d7c114e();
    return uVar2;
  }
  if (unaff_RSI != 0x7b) {
    if (unaff_RSI == 0x7c) {
      uVar2 = thunk_FUN_16519d70e();
      return uVar2;
    }
    uVar2 = FUN_16519d735();
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 14db7667b FUN_14db7667b body=99 status=ok
// SIG undefined FUN_14db7667b(void)

void FUN_14db7667b(void)

{
  longlong unaff_RBP;
  undefined4 local_res8 [8];
  
  *(undefined4 *)((longlong)local_res8 + unaff_RBP) = 0;
  return;
}



// FUNCTION 14db769ff thunk_FUN_14db76a05 body=5 status=ok
// SIG undefined thunk_FUN_14db76a05(void)

void thunk_FUN_14db76a05(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1613df4ab(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14db76a05 FUN_14db76a05 body=131 status=ok
// SIG undefined FUN_14db76a05(void)

void FUN_14db76a05(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1613df4ab(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14db76e2d FUN_14db76e2d body=264 status=ok
// SIG undefined FUN_14db76e2d(void)

void FUN_14db76e2d(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_161595ffb(param_1,~((~unaff_RSI | param_2) & (~param_2 | unaff_RSI)),FUN_161595ffb,
                (~param_1 + *(ulonglong *)(unaff_RDI + -0xa0)) -
                (~param_1 & *(ulonglong *)(unaff_RDI + -0xa0)),*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14db770cc FUN_14db770cc body=151 status=ok
// SIG undefined FUN_14db770cc(void)

void FUN_14db770cc(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  
  FUN_162072861(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,FUN_162072861,
                *(ulonglong *)(unaff_R12 + ~(unaff_RBX & (param_3 | 0xffffffffb08a671c))) ^ in_RAX,
                param_4);
  return;
}



// FUNCTION 14db77163 FUN_14db77163 body=162 status=ok
// SIG undefined FUN_14db77163(void)

void FUN_14db77163(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  (*(code *)0x14de5960c)(param_1,param_2,unaff_retaddr,param_4,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14db77205 FUN_14db77205 body=92 status=ok
// SIG undefined FUN_14db77205(void)

void FUN_14db77205(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 uStackX_18;
  
  FUN_15b3d5987(uStackX_18,param_2,local_res8);
  return;
}



// FUNCTION 14db77368 FUN_14db77368 body=94 status=ok
// SIG undefined FUN_14db77368(void)

void FUN_14db77368(void)

{
  return;
}



// FUNCTION 14db774b7 FUN_14db774b7 body=40 status=ok
// SIG undefined FUN_14db774b7(void)

void FUN_14db774b7(void)

{
  return;
}



// FUNCTION 14db776ed FUN_14db776ed body=130 status=ok
// SIG undefined FUN_14db776ed(void)

void FUN_14db776ed(void)

{
  char in_AL;
  longlong in_R11;
  longlong lVar1;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined1 local_res8;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  lVar1 = in_R11 - local_res18;
                    /* WARNING: Read-only address (ram,0x00014d7be438) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7be438 = local_res8;
  }
  UNLOCK();
  *(undefined8 *)(lVar1 + -8) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x10) = unaff_R15;
  *(ulonglong *)(lVar1 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 | (ulonglong)(in_AL < '\0') * 0x80 |
       (ulonglong)(in_AL == '\0') * 0x40 | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(in_AL) & 1U) == 0) * 4 |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(lVar1 + -0x20) = unaff_retaddr;
  *(undefined8 *)(lVar1 + -0x28) = 0x14db77768;
  FUN_15754f69d();
  return;
}



// FUNCTION 14db77888 FUN_14db77888 body=129 status=ok
// SIG undefined FUN_14db77888(void)

void FUN_14db77888(ulonglong param_1,longlong param_2)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(param_2 + ~(param_1 & ~(~unaff_R15 & 0x8682d35))) = unaff_retaddr;
  FUN_164c6b4b8(uStackX_8,in_stack_00000010);
  return;
}



// FUNCTION 14db7790a FUN_14db7790a body=152 status=ok
// SIG undefined FUN_14db7790a(void)

void FUN_14db7790a(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_1656fc57e(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2);
  FUN_14db779a3();
  return;
}



// FUNCTION 14db779a3 FUN_14db779a3 body=276 status=ok
// SIG undefined FUN_14db779a3(void)

void FUN_14db779a3(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  ulonglong local_res10;
  
  FUN_162535f5f();
  uVar1 = *(ulonglong *)(local_res10 + param_1 + (local_res10 & param_1) * -2 + -0x78);
  FUN_165a53685((-unaff_R15 - uVar1) + (uVar1 | unaff_R15) * 2,FUN_165a53685);
  return;
}



// FUNCTION 14db77b3e FUN_14db77b3e body=409 status=ok
// SIG undefined FUN_14db77b3e(void)

/* WARNING: Removing unreachable block (ram,0x00014db77bcb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14db77b3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ulonglong in_R11;
  longlong unaff_R12;
  longlong local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *puVar1 = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  uVar4 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = uVar4;
  *(undefined8 *)(local_res10 + -0x28) = param_2;
  *(ulonglong *)(local_res10 + -0x10) = *puVar1;
  uVar4 = *(undefined8 *)(local_res10 + -0x18);
  *puVar1 = 0x4be0a9a3;
  *puVar1 = *puVar1 ^ 0x4be0a9a3;
  *puVar1 = *puVar1 - 0x15b0e8335;
  *puVar1 = -*puVar1;
  *(code **)(local_res10 + -0x18) = FUN_166a9c458;
  uVar3 = FUN_15b0e8315(param_1,*(undefined8 *)(local_res10 + -0x28),param_3,uVar4);
  *(ulonglong *)(local_res10 + -0x18) = uVar3;
  *(undefined4 *)(local_res10 + -0x18) = 0x9d0811d0;
  *(undefined4 *)(local_res10 + -0x14) = 0xffffffff;
  *(undefined8 *)(local_res10 + -0x10) =
       *(undefined8 *)(unaff_R12 + *(longlong *)(local_res10 + -0x18) + 0x62f7ede8);
  uVar2 = *(ulonglong *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(ulonglong *)(local_res10 + -0x10) = (~uVar3 + uVar2) - (~uVar3 & uVar2);
  uVar4 = FUN_165ad4356();
  return uVar4;
}



// FUNCTION 14db77c56 FUN_14db77c56 body=196 status=ok
// SIG undefined FUN_14db77c56(void)

/* WARNING: Removing unreachable block (ram,0x00014db77c91) */

int FUN_14db77c56(void)

{
  int unaff_ESI;
  
  return unaff_ESI + 0x4ff921fb;
}



// FUNCTION 14db77dd6 FUN_14db77dd6 body=128 status=ok
// SIG undefined FUN_14db77dd6(void)

/* WARNING: Removing unreachable block (ram,0x000161493509) */
/* WARNING: Removing unreachable block (ram,0x00014db77e58) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db77dd6(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  
  uVar3 = ~param_1 | -(param_2 - unaff_RBP);
  uVar2 = ~-(param_2 - unaff_RBP) | param_1;
  FUN_156d85005(param_1,~((uVar3 - 1) - ~(uVar2 - (uVar3 | uVar2))),param_3,param_4);
  if (&DAT_fffffffffffffff7 < &stack0xffffffffffffffe8) {
    uVar1 = (*(code *)0x16476ce1e)();
    return uVar1;
  }
  uVar1 = FUN_1669f6ac2();
  return uVar1;
}



// FUNCTION 14db77e58 FUN_14db77e58 body=274 status=ok
// SIG undefined FUN_14db77e58(void)

undefined8 FUN_14db77e58(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_164c056a9((*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) << 1,
                        *(ulonglong *)(unaff_R13 + -0x78),in_RAX ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14db78085 FUN_14db78085 body=129 status=ok
// SIG undefined FUN_14db78085(void)

void FUN_14db78085(void)

{
  FUN_1647bfe2c(FUN_1647bfe2c);
  return;
}



// FUNCTION 14db781af FUN_14db781af body=116 status=ok
// SIG undefined FUN_14db781af(void)

void FUN_14db781af(longlong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  (*(code *)&LAB_165ccddf0)
            (~((~unaff_RBP | -param_1) & (~-param_1 | unaff_RBP)),
             -1 - ~(~(~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58)) |
                   ~(~*(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP)));
  return;
}



// FUNCTION 14db782b0 FUN_14db782b0 body=172 status=ok
// SIG undefined FUN_14db782b0(void)

void FUN_14db782b0(void)

{
  return;
}



// FUNCTION 14db78418 FUN_14db78418 body=117 status=ok
// SIG undefined FUN_14db78418(void)

void FUN_14db78418(void)

{
  longlong unaff_R12;
  undefined8 local_res8;
  
  FUN_166a15462(*(ulonglong *)(unaff_R12 + -0x30) + local_res8 +
                (*(ulonglong *)(unaff_R12 + -0x30) & local_res8) * -2);
  thunk_FUN_14db78496();
  return;
}



// FUNCTION 14db78490 thunk_FUN_14db78496 body=5 status=ok
// SIG undefined thunk_FUN_14db78496(void)

undefined8 thunk_FUN_14db78496(void)

{
  return 0x5c16068c;
}



// FUNCTION 14db78496 FUN_14db78496 body=58 status=ok
// SIG undefined FUN_14db78496(void)

undefined8 FUN_14db78496(void)

{
  return 0x5c16068c;
}



// FUNCTION 14db78554 FUN_14db78554 body=412 status=ok
// SIG undefined FUN_14db78554(void)

/* WARNING: Removing unreachable block (ram,0x00014db785ca) */
/* WARNING: Removing unreachable block (ram,0x00014db785d0) */

void FUN_14db78554(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RDI;
  undefined1 *local_res8 [2];
  ushort local_res18;
  
  *(undefined8 *)
   ((longlong)local_res8 + ~(~(param_1 & 0xffffffffd7ae82b0) & (param_1 | 0xffffffffd7ae82b0))) =
       unaff_RDI;
  local_res18 = (~local_res18 | 0x100) ^ 0xffff;
  local_res8[0] = &LAB_156d4722f;
  FUN_166b998f0(local_res8[1],param_2,param_3,param_4);
  return;
}



// FUNCTION 14db78668 FUN_14db78668 body=293 status=ok
// SIG undefined FUN_14db78668(void)

void FUN_14db78668(void)

{
  FUN_16495f388();
  return;
}



// FUNCTION 14db7878e FUN_14db7878e body=3 status=ok
// SIG undefined FUN_14db7878e(void)

void FUN_14db7878e(void)

{
  return;
}



// FUNCTION 14db78905 FUN_14db78905 body=267 status=ok
// SIG undefined FUN_14db78905(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db78998) */
/* WARNING: Removing unreachable block (ram,0x00014db7899e) */

void FUN_14db78905(uint *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar9;
  undefined1 *unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar4 = *(ulonglong *)(unaff_RSI + -0xa0);
  uVar8 = local_res10 + unaff_RBP + (local_res10 & unaff_RBP) * -2;
  uVar3 = local_res18 ^ unaff_RBP;
  bVar14 = (uVar8 & 0x4000) != 0;
  bVar13 = (uVar8 & 0x400) != 0;
  bVar12 = (uVar8 & 0x200) != 0;
  bVar11 = 0;
  bVar10 = (uVar8 & 0x10) != 0;
  bVar18 = (uVar8 & 0x200000) != 0;
  bVar15 = (uVar8 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  *(undefined8 *)(uVar3 - 8) = param_4;
  *(undefined8 *)(uVar3 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar3 - 0x10) = in_R10;
  *(undefined8 *)(uVar3 - 0x18) = in_R10;
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
  *(undefined1 **)(uVar3 - 0x18) = &LAB_1628cf99c;
  *(undefined8 *)(uVar3 - 8) = 0x655caf19;
  lVar5 = *(longlong *)(uVar3 - 0x18);
  *(ulonglong *)(uVar3 - 8) = *(ulonglong *)(uVar3 - 8) ^ 0x7eda11ac;
  *(ulonglong *)(uVar3 - 8) = *(ulonglong *)(uVar3 - 8) ^ 0x1b86beb5;
  *(longlong *)(uVar3 - 8) = *(longlong *)(uVar3 - 8) - lVar5;
  *(ulonglong *)(uVar3 - 8) = ~*(ulonglong *)(uVar3 - 8);
  *(longlong *)(uVar3 - 8) = *(longlong *)(uVar3 - 8) + 1;
  XACQUIRE();
  LOCK();
  uVar2 = param_1[0xa3747c9];
  param_1[0xa3747c9] = (uint)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),uRamfca3493509292b29);
  UNLOCK();
  pbVar9 = unaff_RDI + (ulonglong)bVar13 * -2 + 1;
  *unaff_RDI = (char)uVar2;
  *(undefined8 *)(uVar3 - 0x10) = 0x14d7c250f;
  bVar6 = func_0xdf846e53();
  pcVar1 = (char *)((local_res8 ^ unaff_RBP) + 0x15);
  *pcVar1 = *pcVar1 + '\x01';
  uVar2 = *param_1;
  *(undefined8 *)(uVar3 - 0x10) = 0x69;
  out(0xf2,(int)param_1);
  if (-0x73a5a1bb < (int)param_1) {
    *pbVar9 = *pbVar9 | bVar6;
    uVar7 = in(param_2);
    bVar6 = (byte)uVar7 ^ 0x32;
    *(ulonglong *)(uVar3 - 0x18) =
         (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)bVar13 * 0x400 |
         (ulonglong)(bVar12 & 1) * 0x200 | (ulonglong)(bVar11 & 1) * 0x100 |
         (ulonglong)((char)bVar6 < '\0') * 0x80 | (ulonglong)(bVar6 == 0) * 0x40 |
         (ulonglong)(bVar10 & 1) * 0x10 | (ulonglong)((POPCOUNT(bVar6) & 1U) == 0) * 4 |
         (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
         (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_c602231961003eb0 = (char)param_1 + -0x46;
  *(undefined4 *)pbVar9 = *(undefined4 *)(uVar4 + unaff_RBP + (uVar4 & unaff_RBP) * -2);
  *(ulonglong *)(uVar3 - 0x18) = (ulonglong)((uint)(local_res8 ^ unaff_RBP) & uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db789a4 FUN_14db789a4 body=175 status=ok
// SIG undefined FUN_14db789a4(void)

/* WARNING: Removing unreachable block (ram,0x00014db78a31) */
/* WARNING: Removing unreachable block (ram,0x00014db78a3c) */
/* WARNING: Removing unreachable block (ram,0x00014db78a37) */

void FUN_14db789a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1570bc109(param_1,*(undefined8 *)(unaff_R13 + -0x38),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,unaff_RBX + (param_4 & unaff_R15) * -2
               );
  return;
}



// FUNCTION 14db78abf FUN_14db78abf body=468 status=ok
// SIG undefined FUN_14db78abf(void)

/* WARNING: Removing unreachable block (ram,0x00014debc45f) */

void FUN_14db78abf(undefined8 param_1)

{
  short unaff_BX;
  
  FUN_16227ffe1();
  if (-1 < unaff_BX) {
    return;
  }
  (*(code *)&LAB_14debc3f0)(param_1,&LAB_14debc3f0,0xffffffffa804a2a0);
  return;
}



// FUNCTION 14db78bf1 FUN_14db78bf1 body=120 status=ok
// SIG undefined FUN_14db78bf1(void)

void FUN_14db78bf1(void)

{
  FUN_15757ab69();
  return;
}



// FUNCTION 14db78c69 FUN_14db78c69 body=151 status=ok
// SIG undefined FUN_14db78c69(void)

void FUN_14db78c69(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong in_R10;
  longlong unaff_R13;
  
  FUN_160d24b0a(param_1 - unaff_R13,param_2,param_3,
                ~((0xffffffffffffffff - in_R10 | *(ulonglong *)(param_2 + -0x60)) &
                 (~*(ulonglong *)(param_2 + -0x60) | in_R10)));
  return;
}



// FUNCTION 14db78d01 FUN_14db78d01 body=280 status=ok
// SIG undefined FUN_14db78d01(void)

/* WARNING: Removing unreachable block (ram,0x0001654dcdf5) */
/* WARNING: Removing unreachable block (ram,0x0001654dce01) */
/* WARNING: Removing unreachable block (ram,0x0001654dce06) */
/* WARNING: Removing unreachable block (ram,0x0001654dce65) */
/* WARNING: Removing unreachable block (ram,0x0001654dce6b) */
/* WARNING: Removing unreachable block (ram,0x000156ddcf8a) */
/* WARNING: Removing unreachable block (ram,0x0001654dceb4) */
/* WARNING: Removing unreachable block (ram,0x0001654dceb7) */
/* WARNING: Removing unreachable block (ram,0x000165ddf0d4) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000165ddf0c9) */
/* WARNING: Removing unreachable block (ram,0x000165223f19) */
/* WARNING: Removing unreachable block (ram,0x000165223f1f) */

undefined8
FUN_14db78d01(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = FUN_1664b5fea();
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = thunk_FUN_1660f21a2(local_res8,thunk_FUN_1660f21a2);
      return uVar1;
    }
    if (param_2 == 3) {
      uVar1 = FUN_160df7270();
      return uVar1;
    }
    if (param_2 == 4) {
      if (-1 < param_5) {
        uVar1 = FUN_15b1ef5a4();
        return uVar1;
      }
      (*(code *)0x1617f865d)(local_res8,0);
      uVar1 = thunk_FUN_15b642ca5();
      return uVar1;
    }
    if (param_2 == 5) {
      if (-1 < param_5) {
        return in_stack_00000018;
      }
      return in_stack_00000018;
    }
    if (param_2 == 6) {
      if (-1 < param_5) {
        uVar1 = thunk_FUN_15ba45906();
        return uVar1;
      }
      uVar1 = (*(code *)&LAB_1613bec30)(local_res8,0xeb5d52b5);
      return uVar1;
    }
    if (param_2 == 7) {
      if (param_5 < 0) {
        uVar1 = (*(code *)&LAB_162f5093d)(&LAB_162f5093d,in_stack_00000020,param_3,param_5 << 1);
        return uVar1;
      }
      uVar1 = FUN_1569dcdda();
      return uVar1;
    }
  }
  if (-1 < param_5) {
    uVar1 = FUN_1626a4b96();
    return uVar1;
  }
  FUN_1626a4b5b(local_res8,in_stack_00000020);
  return *(undefined8 *)(local_res8 + -0x50);
}



// FUNCTION 14db78e49 FUN_14db78e49 body=144 status=ok
// SIG undefined FUN_14db78e49(void)

void FUN_14db78e49(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166dd07b4((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x38)) &
                (~*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15) ^ 0xffffffffffffffff,param_2,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,~(unaff_RBP + 1U));
  FUN_16594ec68();
  return;
}



// FUNCTION 14db78edb FUN_14db78edb body=157 status=ok
// SIG undefined FUN_14db78edb(void)

void FUN_14db78edb(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_16594ec68(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14db7900b FUN_14db7900b body=152 status=ok
// SIG undefined FUN_14db7900b(void)

/* WARNING: Instruction at (ram,0x00014db791a6) overlaps instruction at (ram,0x00014db791a5)
    */
/* WARNING: Removing unreachable block (ram,0x000156b30263) */
/* WARNING: Removing unreachable block (ram,0x000156b301e8) */
/* WARNING: Removing unreachable block (ram,0x00014e172ee8) */

void FUN_14db7900b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 in_R10;
  undefined8 in_R11;
  ulonglong uVar14;
  ulonglong unaff_R12;
  ulonglong uVar15;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong lVar16;
  ulonglong unaff_R15;
  byte in_AF;
  bool bVar17;
  byte in_TF;
  bool bVar18;
  byte in_IF;
  bool bVar19;
  bool bVar20;
  byte in_NT;
  bool bVar21;
  byte in_AC;
  bool bVar22;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 in_stack_00000008;
  ushort local_res10;
  
  uVar14 = CONCAT62((int6)((ulonglong)in_R11 >> 0x10),0xfeff);
  puVar11 = &stack0xfffffffffffffff0;
  uVar12 = CONCAT62((int6)((ulonglong)unaff_RDI >> 0x10),-(~-(local_res10 | 0xfeff) + 2));
  FUN_15b6d7cfc(in_stack_00000008,FUN_15b6d7cfc,param_3);
  uVar26 = *(ulonglong *)(unaff_R13 - 0x48);
  uVar13 = *(ulonglong *)(unaff_R13 - 0x78);
  uVar8 = FUN_15b31375b();
  uVar10 = ~(~(unaff_R14 & 0xffffffff83afcb94) & (unaff_R14 | 0xffffffff83afcb94));
  lVar5 = uVar10 - 0xcd999a;
  uVar15 = unaff_R12 & 0xffffffffc521685d ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0xffffffffff326656 + uVar10) = uVar8;
  *(ulonglong *)(&stack0xffffffffff32664e + uVar10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar15 < 0) * 0x80 |
       (ulonglong)(uVar15 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar15 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(&stack0xffffffffff32664e + uVar10) =
       *(ulonglong *)(&stack0xffffffffff32664e + uVar10) | 4;
  uVar24 = *(ulonglong *)(&stack0xffffffffff32664e + uVar10);
  if ((uVar24 & 4) == 0) {
    uVar8 = uVar8 & 0xffffffffffffff08;
    uVar26 = (ulonglong)
             (uint)(*(int *)(uVar26 + unaff_R15 + (uVar26 & unaff_R15) * -2 + 0x34 + uVar13 * 4) *
                   0x648d4824);
    lVar16 = lVar5;
  }
  else {
    lVar16 = *(longlong *)(&stack0xffffffffff326656 + uVar10);
    puVar11 = &stack0xfffffffffffffff8;
    uVar26 = uVar13;
  }
  puVar2 = (ulonglong *)(puVar11 + (uVar10 - 0xcd99a2));
  *puVar2 = unaff_RSI;
  puVar1 = (ulonglong *)(puVar11 + (uVar10 - 0xcd99aa));
  *(undefined4 *)puVar1 = 0xc521685d;
  *(ulonglong *)(puVar11 + (uVar10 - 0xcd99b2)) =
       (ulonglong)((uVar24 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar24 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar24 & 0x200) != 0) * 0x200 | (ulonglong)((uVar24 & 0x100) != 0) * 0x100 |
       0x80 | (ulonglong)((uVar24 & 0x10) != 0) * 0x10 | 1 |
       (ulonglong)((uVar24 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar24 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ba)) = in_R10;
  if ((*(ushort *)(puVar11 + (uVar10 - 0xcd99b2)) & 0x80) != 0) {
    FUN_156b30008();
    return;
  }
  uVar24 = *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba));
  uVar25 = *(ulonglong *)(puVar11 + (uVar10 - 0xcd99b2));
  bVar21 = (uVar25 & 0x4000) != 0;
  bVar20 = (uVar25 & 0x400) != 0;
  bVar19 = (uVar25 & 0x200) != 0;
  bVar18 = (uVar25 & 0x100) != 0;
  bVar17 = (uVar25 & 0x10) != 0;
  bVar23 = (uVar25 & 0x200000) != 0;
  bVar22 = (uVar25 & 0x40000) != 0;
  if ((uVar25 & 0x80) != 0) {
    *(uint *)(puVar11 + (uVar10 - 0xcd9992)) = *(uint *)(puVar11 + (uVar10 - 0xcd9992)) ^ 0x2ac6d748
    ;
    *(undefined8 *)(puVar11 + lVar5) = 0xfffffffffffffff8;
    uVar4 = *(undefined4 *)(puVar11 + (uVar10 - 0xcd9992));
    *(ulonglong *)(puVar11 + lVar5) = uVar12;
    *puVar2 = uVar8;
    *(uint *)puVar2 = 0xa3c5b043;
    *(undefined4 *)puVar1 = 0x3a1589bf;
    *(undefined4 *)(puVar11 + (uVar10 - 0xcd99a6)) = 0;
    uVar26 = *puVar1;
    *puVar1 = uVar14;
    *(undefined4 *)((longlong)puVar2 + (uVar26 ^ 0x3a1589bb)) = 0xffffffff;
    uVar26 = *puVar2;
    *puVar2 = unaff_R13;
    uVar13 = uVar26 + 0x5c3a50d1;
    *(ulonglong *)(puVar11 + (uVar10 - 0xcd99aa)) =
         (ulonglong)bVar21 * 0x4000 | (ulonglong)SCARRY8(uVar26,0x5c3a50d1) * 0x800 |
         (ulonglong)bVar20 * 0x400 | (ulonglong)bVar19 * 0x200 | (ulonglong)bVar18 * 0x100 |
         (ulonglong)((longlong)uVar13 < 0) * 0x80 | (ulonglong)(uVar13 == 0) * 0x40 |
         (ulonglong)bVar17 * 0x10 | (ulonglong)((POPCOUNT(uVar13 & 0xff) & 1U) == 0) * 4 |
         (ulonglong)(0xffffffffa3c5af2e < uVar26) | (ulonglong)bVar23 * 0x200000 |
         (ulonglong)bVar22 * 0x40000;
    FUN_165e01a9c(uVar4);
    return;
  }
  *(undefined4 *)(puVar11 + (uVar10 - 0xcd99a6)) = 0xffffffff;
  uVar25 = *puVar1;
  *puVar2 = uVar26;
  *puVar1 = uVar15;
  *(ulonglong *)(puVar11 + (uVar10 - 0xcd99b2)) = uVar14;
  uVar25 = (lVar16 + -0x3ade97a3) - ~(~uVar8 | 0xffffffffffffffff - uVar25);
  uVar26 = *(ulonglong *)(puVar11 + (uVar10 - 0xcd99b2));
  uVar8 = *puVar1;
  *puVar2 = *puVar2;
  *puVar1 = uVar25;
  uVar14 = *puVar1;
  uVar15 = *puVar2;
  *puVar2 = (ulonglong)bVar21 * 0x4000 | (ulonglong)bVar20 * 0x400 | (ulonglong)bVar19 * 0x200 |
            (ulonglong)bVar18 * 0x100 | (ulonglong)((longlong)uVar25 < 0) * 0x80 |
            (ulonglong)(uVar25 == 0) * 0x40 | (ulonglong)bVar17 * 0x10 |
            (ulonglong)((POPCOUNT(uVar25 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar23 * 0x200000 |
            (ulonglong)bVar22 * 0x40000;
  *puVar1 = uVar26;
  if ((*puVar2 & 0x80) == 0) {
    uVar26 = *puVar2;
    *puVar2 = (ulonglong)((uVar26 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar26 & 0x800) != 0) * 0x800 |
              (ulonglong)((uVar26 & 0x400) != 0) * 0x400 |
              (ulonglong)((uVar26 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar26 & 0x100) != 0) * 0x100 | (ulonglong)((uVar26 & 0x80) != 0) * 0x80
              | (ulonglong)((uVar26 & 0x40) != 0) * 0x40 | (ulonglong)((uVar26 & 0x10) != 0) * 0x10
              | (ulonglong)((uVar26 & 4) != 0) * 4 | (ulonglong)((uVar26 & 1) != 0) |
              (ulonglong)((uVar26 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar26 & 0x40000) != 0) * 0x40000;
    if (((uint)*puVar2 >> 7 & 1) != 0) {
      uVar9 = *(undefined8 *)(puVar11 + lVar5);
      *(ulonglong *)(puVar11 + lVar5) = uVar15;
      uVar25 = *(ulonglong *)(puVar11 + lVar5);
      *(undefined8 *)(puVar11 + lVar5) = uVar9;
      *(ulonglong *)(puVar11 + lVar5) =
           *(longlong *)(puVar11 + lVar5) + ((uVar15 - (uVar13 | uVar15)) + uVar13) * -2;
      uVar9 = *(undefined8 *)(puVar11 + lVar5);
      uVar6 = *(undefined8 *)(puVar11 + (uVar10 - 0xcd9992));
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd9992)) = uVar9;
      *(undefined8 *)(puVar11 + lVar5) = uVar9;
      *puVar2 = uVar14;
      uVar9 = *(undefined8 *)(uVar12 - 0x90);
      uVar26 = *puVar2;
      *puVar2 = uVar12;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd9992)) = uVar9;
      uVar13 = *puVar2;
      *(ulonglong *)(puVar11 + lVar5) = uVar24;
      *puVar2 = uVar24;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99aa)) = uVar26;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ba)) = 0x156b30148;
      uVar9 = FUN_165e89c70();
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ba)) = *(undefined8 *)(uVar13 - 0x90);
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99c2)) = uVar9;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ca)) = uVar9;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99c2)) = *(undefined8 *)(uVar13 - 8);
      uVar7 = *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ca));
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ca)) = *(undefined8 *)(uVar13 - 0x98);
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99d2)) = *(undefined8 *)(uVar13 - 0xa0);
      uVar26 = *(ulonglong *)(puVar11 + (uVar10 - 0xcd99d2));
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ca)) =
           *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ca)) ^ uVar25;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99c2)) =
           *(ulonglong *)(puVar11 + (uVar10 - 0xcd99c2)) ^ uVar25;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99d2)) = param_4;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99da)) = uVar26 ^ uVar25;
      uVar26 = *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba));
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba)) =
           *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba)) & uVar25;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba)) = ~*(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba))
      ;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba)) =
           *(ulonglong *)(puVar11 + (uVar10 - 0xcd99ba)) & (uVar26 | uVar25);
      uVar9 = *(undefined8 *)(puVar11 + (uVar10 - 0xcd99d2));
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99ca)) = uVar6;
      *(ulonglong *)(puVar11 + (uVar10 - 0xcd99d2)) = unaff_R15;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99da)) = uVar7;
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99e2)) = uVar7;
      *(undefined4 *)(puVar11 + (uVar10 - 0xcd99e2)) = 0x222e199a;
      *(uint *)(puVar11 + (uVar10 - 0xcd99e2)) =
           *(uint *)(puVar11 + (uVar10 - 0xcd99e2)) ^ 0x2dea1c76;
      *(undefined4 *)(puVar11 + (uVar10 - 0xcd99ea)) = 0;
      *(undefined4 *)(puVar11 + (uVar10 - 0xcd99de)) =
           *(undefined4 *)(puVar11 + (uVar10 - 0xcd99ea));
      lVar16 = *(longlong *)(puVar11 + (uVar10 - 0xcd99e2));
      uVar6 = *(undefined8 *)(puVar11 + (uVar10 - 0xcd99da));
      uVar3 = *(ushort *)(puVar11 + lVar16 + -0xfc40614 + lVar5);
      *(undefined8 *)(puVar11 + (uVar10 - 0xcd99da)) = uVar9;
      *(undefined1 **)(puVar11 + (uVar10 - 0xcd99e2)) = puVar11 + lVar16 + -0xfc40614 + lVar5;
      **(short **)(puVar11 + (uVar10 - 0xcd99e2)) =
           (-0x101 - (uVar3 | 0xfeff)) + **(short **)(puVar11 + (uVar10 - 0xcd99e2));
      lVar5 = *(longlong *)(puVar11 + (uVar10 - 0xcd99ba));
      *(undefined8 *)(lVar5 + -8) = uVar6;
      *(ulonglong *)(lVar5 + -0x10) = uVar8;
      *(ulonglong *)(lVar5 + -0x18) = uVar8;
      *(code **)(lVar5 + -0x10) = FUN_164765752;
      FUN_166870c0c();
      return;
    }
    FUN_15658dfa6();
    return;
  }
  FUN_15658dfa6();
  return;
}



// FUNCTION 14db790a4 FUN_14db790a4 body=359 status=ok
// SIG undefined FUN_14db790a4(void)

/* WARNING: Instruction at (ram,0x00014db791a6) overlaps instruction at (ram,0x00014db791a5)
    */
/* WARNING: Removing unreachable block (ram,0x000156b30263) */
/* WARNING: Removing unreachable block (ram,0x000156b301e8) */
/* WARNING: Removing unreachable block (ram,0x00014e172ee8) */

void FUN_14db790a4(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R9;
  undefined8 in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong uVar11;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  longlong lVar12;
  ulonglong unaff_R15;
  byte in_AF;
  bool bVar13;
  byte in_TF;
  bool bVar14;
  byte in_IF;
  bool bVar15;
  bool bVar16;
  byte in_NT;
  bool bVar17;
  byte in_AC;
  bool bVar18;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar19;
  ulonglong uVar20;
  
  uVar9 = *(ulonglong *)(unaff_R13 - 0x48);
  uVar4 = *(ulonglong *)(unaff_R13 - 0x78);
  uVar6 = FUN_15b31375b();
  uVar8 = ~(~(unaff_R14 & 0xffffffff83afcb94) & (unaff_R14 | 0xffffffff83afcb94));
  lVar12 = uVar8 - 0xcd999a;
  puVar10 = (ulonglong *)(&stack0xffffffffff326666 + uVar8);
  uVar11 = unaff_R12 & 0xffffffffc521685d ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0xffffffffff326666 + uVar8) = uVar6;
  *(ulonglong *)(&stack0xffffffffff32665e + uVar8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar11 < 0) * 0x80 |
       (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(&stack0xffffffffff32665e + uVar8) =
       *(ulonglong *)(&stack0xffffffffff32665e + uVar8) | 4;
  uVar20 = *(ulonglong *)(&stack0xffffffffff32665e + uVar8);
  if ((uVar20 & 4) == 0) {
    uVar6 = uVar6 & 0xffffffffffffff08;
    uVar9 = (ulonglong)
            (uint)(*(int *)(uVar9 + unaff_R15 + (uVar9 & unaff_R15) * -2 + 0x34 + uVar4 * 4) *
                  0x648d4824);
  }
  else {
    lVar12 = *(longlong *)(&stack0xffffffffff326666 + uVar8);
    puVar10 = (ulonglong *)(&stack0xffffffffff32666e + uVar8);
    uVar9 = uVar4;
  }
  puVar2 = puVar10 + -1;
  *puVar2 = unaff_RSI;
  puVar1 = puVar10 + -2;
  *(undefined4 *)puVar1 = 0xc521685d;
  puVar10[-3] = (ulonglong)((uVar20 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar20 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar20 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar20 & 0x100) != 0) * 0x100 | 0x80 |
                (ulonglong)((uVar20 & 0x10) != 0) * 0x10 | 1 |
                (ulonglong)((uVar20 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar20 & 0x40000) != 0) * 0x40000;
  puVar10[-4] = in_R10;
  if ((puVar10[-3] & 0x80) != 0) {
    FUN_156b30008();
    return;
  }
  uVar8 = puVar10[-3];
  bVar17 = (uVar8 & 0x4000) != 0;
  bVar16 = (uVar8 & 0x400) != 0;
  bVar15 = (uVar8 & 0x200) != 0;
  bVar14 = (uVar8 & 0x100) != 0;
  bVar13 = (uVar8 & 0x10) != 0;
  bVar19 = (uVar8 & 0x200000) != 0;
  bVar18 = (uVar8 & 0x40000) != 0;
  if ((uVar8 & 0x80) != 0) {
    *(uint *)(puVar10 + 1) = (uint)puVar10[1] ^ 0x2ac6d748;
    *puVar10 = 0xfffffffffffffff8;
    uVar4 = puVar10[1];
    *puVar10 = unaff_RDI;
    *puVar2 = uVar6;
    *(uint *)puVar2 = 0xa3c5b043;
    *(undefined4 *)puVar1 = 0x3a1589bf;
    *(undefined4 *)((longlong)puVar10 + -0xc) = 0;
    uVar9 = *puVar1;
    *puVar1 = in_R11;
    *(undefined4 *)((longlong)puVar2 + (uVar9 ^ 0x3a1589bb)) = 0xffffffff;
    uVar9 = *puVar2;
    *puVar2 = unaff_R13;
    uVar6 = uVar9 + 0x5c3a50d1;
    puVar10[-2] = (ulonglong)bVar17 * 0x4000 | (ulonglong)SCARRY8(uVar9,0x5c3a50d1) * 0x800 |
                  (ulonglong)bVar16 * 0x400 | (ulonglong)bVar15 * 0x200 | (ulonglong)bVar14 * 0x100
                  | (ulonglong)((longlong)uVar6 < 0) * 0x80 | (ulonglong)(uVar6 == 0) * 0x40 |
                  (ulonglong)bVar13 * 0x10 | (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
                  (ulonglong)(0xffffffffa3c5af2e < uVar9) | (ulonglong)bVar19 * 0x200000 |
                  (ulonglong)bVar18 * 0x40000;
    FUN_165e01a9c((int)uVar4);
    return;
  }
  *(undefined4 *)((longlong)puVar10 + -0xc) = 0xffffffff;
  uVar8 = *puVar1;
  *puVar2 = uVar9;
  *puVar1 = uVar11;
  puVar10[-3] = in_R11;
  uVar11 = (lVar12 + -0x3ade97a3) - ~(~uVar6 | 0xffffffffffffffff - uVar8);
  uVar9 = *puVar1;
  *puVar2 = *puVar2;
  *puVar1 = uVar11;
  uVar6 = *puVar1;
  uVar8 = *puVar2;
  *puVar2 = (ulonglong)bVar17 * 0x4000 | (ulonglong)bVar16 * 0x400 | (ulonglong)bVar15 * 0x200 |
            (ulonglong)bVar14 * 0x100 | (ulonglong)((longlong)uVar11 < 0) * 0x80 |
            (ulonglong)(uVar11 == 0) * 0x40 | (ulonglong)bVar13 * 0x10 |
            (ulonglong)((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * 4 | (ulonglong)bVar19 * 0x200000 |
            (ulonglong)bVar18 * 0x40000;
  *puVar1 = puVar10[-3];
  if ((*puVar2 & 0x80) == 0) {
    uVar11 = *puVar2;
    *puVar2 = (ulonglong)((uVar11 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar11 & 0x800) != 0) * 0x800 |
              (ulonglong)((uVar11 & 0x400) != 0) * 0x400 |
              (ulonglong)((uVar11 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar11 & 0x100) != 0) * 0x100 | (ulonglong)((uVar11 & 0x80) != 0) * 0x80
              | (ulonglong)((uVar11 & 0x40) != 0) * 0x40 | (ulonglong)((uVar11 & 0x10) != 0) * 0x10
              | (ulonglong)((uVar11 & 4) != 0) * 4 | (ulonglong)((uVar11 & 1) != 0) |
              (ulonglong)((uVar11 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar11 & 0x40000) != 0) * 0x40000;
    if (((uint)*puVar2 >> 7 & 1) != 0) {
      uVar7 = *puVar10;
      *puVar10 = uVar8;
      uVar11 = *puVar10;
      *puVar10 = uVar7;
      *puVar10 = *puVar10 + ((uVar8 - (uVar4 | uVar8)) + uVar4) * -2;
      uVar8 = puVar10[1];
      puVar10[1] = *puVar10;
      *puVar10 = *puVar10;
      *puVar2 = uVar6;
      uVar4 = *(ulonglong *)(unaff_RDI - 0x90);
      uVar6 = *puVar2;
      *puVar2 = unaff_RDI;
      puVar10[1] = uVar4;
      uVar4 = *puVar2;
      *puVar10 = puVar10[-4];
      *puVar2 = puVar10[-4];
      puVar10[-2] = uVar6;
      puVar10[-4] = 0x156b30148;
      uVar7 = FUN_165e89c70();
      puVar10[-4] = *(undefined8 *)(uVar4 - 0x90);
      puVar10[-5] = uVar7;
      puVar10[-6] = uVar7;
      puVar10[-5] = *(undefined8 *)(uVar4 - 8);
      uVar5 = puVar10[-6];
      puVar10[-6] = *(undefined8 *)(uVar4 - 0x98);
      puVar10[-7] = *(undefined8 *)(uVar4 - 0xa0);
      uVar4 = puVar10[-7];
      puVar10[-6] = puVar10[-6] ^ uVar11;
      puVar10[-5] = puVar10[-5] ^ uVar11;
      puVar10[-7] = in_R9;
      puVar10[-8] = uVar4 ^ uVar11;
      uVar4 = puVar10[-4];
      puVar10[-4] = puVar10[-4] & uVar11;
      puVar10[-4] = ~puVar10[-4];
      puVar10[-4] = puVar10[-4] & (uVar4 | uVar11);
      uVar7 = puVar10[-7];
      puVar10[-6] = uVar8;
      puVar10[-7] = unaff_R15;
      puVar10[-8] = uVar5;
      puVar10[-9] = uVar5;
      *(undefined4 *)(puVar10 + -9) = 0x222e199a;
      *(uint *)(puVar10 + -9) = (uint)puVar10[-9] ^ 0x2dea1c76;
      *(undefined4 *)(puVar10 + -10) = 0;
      *(int *)((longlong)puVar10 + -0x44) = (int)puVar10[-10];
      uVar5 = puVar10[-8];
      uVar3 = *(ushort *)((longlong)puVar10 + puVar10[-9] + -0xfc40614);
      puVar10[-8] = uVar7;
      puVar10[-9] = (longlong)puVar10 + puVar10[-9] + -0xfc40614;
      *(short *)puVar10[-9] = (-0x101 - (uVar3 | 0xfeff)) + *(short *)puVar10[-9];
      lVar12 = puVar10[-4];
      *(undefined8 *)(lVar12 + -8) = uVar5;
      *(ulonglong *)(lVar12 + -0x10) = uVar9;
      *(ulonglong *)(lVar12 + -0x18) = uVar9;
      *(code **)(lVar12 + -0x10) = FUN_164765752;
      FUN_166870c0c();
      return;
    }
    FUN_15658dfa6();
    return;
  }
  FUN_15658dfa6();
  return;
}



// FUNCTION 14db79215 FUN_14db79215 body=161 status=ok
// SIG undefined FUN_14db79215(void)

void FUN_14db79215(void)

{
  undefined4 local_res18;
  
  FUN_165e01a9c(local_res18 ^ 0x2ac6d748);
  return;
}



// FUNCTION 14db792bd FUN_14db792bd body=135 status=ok
// SIG undefined FUN_14db792bd(void)

void FUN_14db792bd(longlong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + (unaff_RBP - param_1));
  FUN_16645511f(~(uVar1 & in_RAX) & (~in_RAX & uVar1 | in_RAX),
                ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  return;
}



// FUNCTION 14db79346 FUN_14db79346 body=316 status=ok
// SIG undefined FUN_14db79346(void)

undefined8 FUN_14db79346(ulonglong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar3 = ~*(ulonglong *)(unaff_RDI + -0x88) | param_1;
  uVar2 = FUN_16547b9d2(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  iVar1 = *(int *)(uVar3 + 0xa4);
  *(undefined4 *)(uVar3 + 0xa4) = 0;
  *(int *)(uVar3 + 0xa4) = *(int *)(uVar3 + 0xa4) + iVar1 + (int)param_1;
  *(int *)(uVar3 + 0xa4) = -*(int *)(uVar3 + 0xa4);
  *(int *)(uVar3 + 0xa4) = *(int *)(uVar3 + 0xa4) - ((uint)unaff_RDI ^ 0xffffffff);
  return uVar2;
}



// FUNCTION 14db795ef FUN_14db795ef body=150 status=ok
// SIG undefined FUN_14db795ef(void)

void FUN_14db795ef(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res10 [3];
  char in_stack_00000028;
  
  local_res10[0] = (ulonglong)(uint)(int)in_stack_00000028;
  FUN_16681c316(*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15,local_res10,
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14db797da FUN_14db797da body=296 status=ok
// SIG undefined FUN_14db797da(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001619943a5) */
/* WARNING: Removing unreachable block (ram,0x000161994367) */
/* WARNING: Removing unreachable block (ram,0x0001659d524c) */
/* WARNING: Removing unreachable block (ram,0x0001659d5258) */
/* WARNING: Removing unreachable block (ram,0x00014d7a5030) */
/* WARNING: Removing unreachable block (ram,0x000161994331) */
/* WARNING: Removing unreachable block (ram,0x00015b9a54e7) */
/* WARNING: Removing unreachable block (ram,0x00015b9a5572) */
/* WARNING: Removing unreachable block (ram,0x00015b9a558d) */
/* WARNING: Removing unreachable block (ram,0x00015b9a5582) */
/* WARNING: Removing unreachable block (ram,0x00014dd8f622) */
/* WARNING: Removing unreachable block (ram,0x00014db79851) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db797da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (&stack0x00000000 == &DAT_fffffffffffffff0) {
    FUN_15b815e83();
    return;
  }
  FUN_161b48655(FUN_161b48655,param_2,0x227599b7,param_4);
  return;
}



// FUNCTION 14db7997f FUN_14db7997f body=129 status=ok
// SIG undefined FUN_14db7997f(void)

void FUN_14db7997f(longlong param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ushort *in_R11;
  
  *in_R11 = ~*in_R11;
  uVar2 = *in_R11;
  *in_R11 = ~*in_R11;
  *in_R11 = (~(uVar2 & 0x100) + 0x100) - *in_R11;
  *in_R11 = ~*in_R11;
  plVar1 = (longlong *)(param_5 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_1;
  *(longlong *)(param_5 + -0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_14db79a1a;
                    /* WARNING: Could not recover jumptable at 0x00014db799fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(*(HMODULE *)(param_5 + -0x10),param_2);
  return;
}



// FUNCTION 14db79ad0 FUN_14db79ad0 body=145 status=ok
// SIG undefined FUN_14db79ad0(void)

void FUN_14db79ad0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_164fe8920((char)param_1,FUN_164fe8920,
                *(ulonglong *)(unaff_RDI + -0x30) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x30) & param_1) * -2);
  return;
}



// FUNCTION 14db79b63 FUN_14db79b63 body=163 status=ok
// SIG undefined FUN_14db79b63(void)

void FUN_14db79b63(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x15b0b1fad)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,0x15b0b1fad,param_4);
  return;
}



// FUNCTION 14db79c06 FUN_14db79c06 body=324 status=ok
// SIG undefined FUN_14db79c06(void)

/* WARNING: Removing unreachable block (ram,0x000160f5cfae) */
/* WARNING: Removing unreachable block (ram,0x00014db79ca8) */

undefined8 FUN_14db79c06(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  if (-1 < (longlong)(uVar2 * 2)) {
    uVar1 = FUN_160f5cf99();
    return uVar1;
  }
  uVar1 = (*(code *)&LAB_1571f2a78)
                    (0xb5,CONCAT71((int7)(-1 - unaff_R15 >> 8),0xb4),
                     *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 + uVar2 * -2);
  return uVar1;
}



// FUNCTION 14db79ddc FUN_14db79ddc body=177 status=ok
// SIG undefined FUN_14db79ddc(void)

undefined8 FUN_14db79ddc(void)

{
  return 0;
}



// FUNCTION 14db79e91 FUN_14db79e91 body=70 status=ok
// SIG undefined FUN_14db79e91(void)

/* WARNING: Instruction at (ram,0x00014db79ebb) overlaps instruction at (ram,0x00014db79eba)
    */
/* WARNING: Removing unreachable block (ram,0x00014db79eba) */

void FUN_14db79e91(void)

{
  uint *in_RAX;
  uint unaff_EDI;
  
  *in_RAX = 0xffffffff - ((~*in_RAX | unaff_EDI) + *in_RAX + 1);
  return;
}



// FUNCTION 14db7a030 FUN_14db7a030 body=149 status=ok
// SIG undefined FUN_14db7a030(void)

/* WARNING: Instruction at (ram,0x00014db7a08c) overlaps instruction at (ram,0x00014db7a08b)
    */
/* WARNING: Removing unreachable block (ram,0x00014db7a089) */

void FUN_14db7a030(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161aeb3e3(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX);
  FUN_166659485();
  return;
}



// FUNCTION 14db7a0c6 FUN_14db7a0c6 body=141 status=ok
// SIG undefined FUN_14db7a0c6(void)

void FUN_14db7a0c6(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166659485(param_1,*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15);
  return;
}



// FUNCTION 14db7a154 FUN_14db7a154 body=800 status=ok
// SIG undefined FUN_14db7a154(void)

/* WARNING: Removing unreachable block (ram,0x00014db7a468) */
/* WARNING: Removing unreachable block (ram,0x00016246c6b9) */
/* WARNING: Removing unreachable block (ram,0x00014db7a1e5) */
/* WARNING: Removing unreachable block (ram,0x00014db7a1f0) */
/* WARNING: Removing unreachable block (ram,0x00014db7a3dc) */
/* WARNING: Removing unreachable block (ram,0x00014db7a3e8) */
/* WARNING: Removing unreachable block (ram,0x00014db7a3ed) */
/* WARNING: Removing unreachable block (ram,0x00014db7a46d) */
/* WARNING: Removing unreachable block (ram,0x0001565c7dce) */
/* WARNING: Removing unreachable block (ram,0x00016246c68c) */
/* WARNING: Removing unreachable block (ram,0x00016246c6bc) */
/* WARNING: Removing unreachable block (ram,0x00016246c728) */
/* WARNING: Removing unreachable block (ram,0x00016246c72e) */
/* WARNING: Removing unreachable block (ram,0x00015714192b) */
/* WARNING: Removing unreachable block (ram,0x00014db7a473) */
/* WARNING: Removing unreachable block (ram,0x00014db7a1eb) */

undefined8 FUN_14db7a154(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) | param_1;
  uVar1 = FUN_157500d09(param_1,(0xffffffffffffffff - uVar2 |
                                ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1)) + uVar2 + 1,param_3,
                        param_4);
  return uVar1;
}



// FUNCTION 14db7a479 FUN_14db7a479 body=121 status=ok
// SIG undefined FUN_14db7a479(void)

void FUN_14db7a479(void)

{
  FUN_156aafe94();
  return;
}



// FUNCTION 14db7a4f4 FUN_14db7a4f4 body=703 status=ok
// SIG undefined FUN_14db7a4f4(void)

/* WARNING: Removing unreachable block (ram,0x00016118fd22) */
/* WARNING: Removing unreachable block (ram,0x00016118fdbc) */
/* WARNING: Removing unreachable block (ram,0x000160d2acba) */
/* WARNING: Removing unreachable block (ram,0x00014db7a6bb) */
/* WARNING: Removing unreachable block (ram,0x00014db7a59b) */
/* WARNING: Removing unreachable block (ram,0x00014db7a5c3) */
/* WARNING: Removing unreachable block (ram,0x00014db7a63c) */
/* WARNING: Removing unreachable block (ram,0x00014db7a640) */
/* WARNING: Removing unreachable block (ram,0x000166450399) */
/* WARNING: Removing unreachable block (ram,0x00016645039d) */
/* WARNING: Removing unreachable block (ram,0x0001664503a6) */
/* WARNING: Removing unreachable block (ram,0x0001626f5eac) */
/* WARNING: Removing unreachable block (ram,0x00014db7a5a7) */
/* WARNING: Removing unreachable block (ram,0x00016118fd31) */
/* WARNING: Removing unreachable block (ram,0x00016118fdab) */
/* WARNING: Removing unreachable block (ram,0x00016118fdb0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db7a4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong unaff_R12;
  
  FUN_15640a8da(param_1,param_2,param_3);
  lVar1 = *(longlong *)(unaff_R12 + -0x98);
  FUN_15b166d3d();
  if (-1 < (longlong)(~*(ulonglong *)(lVar1 + -0x68) | 0x15b166d3d)) {
    uVar2 = FUN_14da9cbfa();
    return uVar2;
  }
  plVar3 = (longlong *)&DAT_fffffffffffffff8;
  FUN_15ba2b9dc(0xfffffffffffffff8,FUN_15ba2b9dc);
  *plVar3 = lVar1;
  uVar2 = FUN_16693a9e5();
  return uVar2;
}



// FUNCTION 14db7a8f5 FUN_14db7a8f5 body=162 status=ok
// SIG undefined FUN_14db7a8f5(void)

/* WARNING: Removing unreachable block (ram,0x00014db7a99a) */
/* WARNING: Removing unreachable block (ram,0x00014db7a952) */
/* WARNING: Removing unreachable block (ram,0x00014db7a989) */
/* WARNING: Removing unreachable block (ram,0x0001625097c6) */

void FUN_14db7a8f5(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if ((longlong)
      ((param_1 - (*(ulonglong *)(unaff_RDI + -0x48) | param_1)) + *(ulonglong *)(unaff_RDI + -0x48)
      ) < 0) {
    return;
  }
  FUN_165519c02();
  return;
}



// FUNCTION 14db7a99a FUN_14db7a99a body=167 status=ok
// SIG undefined FUN_14db7a99a(void)

void FUN_14db7a99a(void)

{
  return;
}



// FUNCTION 14db7acb4 FUN_14db7acb4 body=443 status=ok
// SIG undefined FUN_14db7acb4(void)

/* WARNING: Removing unreachable block (ram,0x0001648f1ba9) */
/* WARNING: Removing unreachable block (ram,0x0001648f1baf) */
/* WARNING: Removing unreachable block (ram,0x000161ad1a2b) */
/* WARNING: Removing unreachable block (ram,0x00014e021028) */
/* WARNING: Removing unreachable block (ram,0x000161ad1ab3) */
/* WARNING: Removing unreachable block (ram,0x000161ad1abf) */
/* WARNING: Removing unreachable block (ram,0x000161ad1aeb) */
/* WARNING: Removing unreachable block (ram,0x000161ad1b0f) */
/* WARNING: Removing unreachable block (ram,0x000161ad1b15) */
/* WARNING: Removing unreachable block (ram,0x00015713111c) */
/* WARNING: Removing unreachable block (ram,0x0001648f1c4b) */
/* WARNING: Removing unreachable block (ram,0x0001648f1c51) */
/* WARNING: Removing unreachable block (ram,0x0001648f1cac) */
/* WARNING: Removing unreachable block (ram,0x000162c7a2db) */
/* WARNING: Removing unreachable block (ram,0x000162c7a360) */
/* WARNING: Removing unreachable block (ram,0x000162c7a36b) */
/* WARNING: Removing unreachable block (ram,0x000162c7a371) */
/* WARNING: Removing unreachable block (ram,0x000166bdad7c) */
/* WARNING: Removing unreachable block (ram,0x000156dd7ceb) */
/* WARNING: Removing unreachable block (ram,0x000166bdaded) */
/* WARNING: Removing unreachable block (ram,0x000166bdadf3) */
/* WARNING: Removing unreachable block (ram,0x000166bdadf8) */
/* WARNING: Removing unreachable block (ram,0x0001648f1cd5) */
/* WARNING: Removing unreachable block (ram,0x0001648f1cdb) */
/* WARNING: Removing unreachable block (ram,0x000164803ec2) */
/* WARNING: Removing unreachable block (ram,0x000164803ecd) */
/* WARNING: Removing unreachable block (ram,0x000164803ec8) */
/* WARNING: Removing unreachable block (ram,0x00014db7ad4b) */
/* WARNING: Removing unreachable block (ram,0x00014db7ad51) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db7acb4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  
  lVar2 = *(ulonglong *)(unaff_R13 + -0x70) + unaff_retaddr +
          ~(~*(ulonglong *)(unaff_R13 + -0x70) | ~unaff_retaddr) * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_R14;
  *(undefined8 *)(lVar2 + -0x10) = in_R10;
  *(undefined8 *)(lVar2 + -0x18) = in_R10;
  *(undefined8 *)(lVar2 + -0x20) = unaff_RSI;
  uVar1 = FUN_15b8b6d7b(param_1);
  return uVar1;
}



// FUNCTION 14db7b4e9 FUN_14db7b4e9 body=605 status=ok
// SIG undefined FUN_14db7b4e9(void)

/* WARNING: Removing unreachable block (ram,0x00014db7b7e3) */
/* WARNING: Removing unreachable block (ram,0x00014db7b7e9) */
/* WARNING: Removing unreachable block (ram,0x00014db7b9a2) */
/* WARNING: Removing unreachable block (ram,0x000161a93eaf) */
/* WARNING: Removing unreachable block (ram,0x00014db7b74c) */
/* WARNING: Removing unreachable block (ram,0x000157019bcd) */
/* WARNING: Removing unreachable block (ram,0x0001649964cc) */
/* WARNING: Removing unreachable block (ram,0x0001649964d2) */
/* WARNING: Removing unreachable block (ram,0x000165b6abf9) */
/* WARNING: Removing unreachable block (ram,0x000165b6abff) */
/* WARNING: Removing unreachable block (ram,0x000165b6ac04) */
/* WARNING: Removing unreachable block (ram,0x00014db7b575) */
/* WARNING: Removing unreachable block (ram,0x00014db7b601) */
/* WARNING: Removing unreachable block (ram,0x00014db7b607) */
/* WARNING: Removing unreachable block (ram,0x00014db7b5fc) */
/* WARNING: Removing unreachable block (ram,0x000166400e49) */
/* WARNING: Removing unreachable block (ram,0x00016138a775) */
/* WARNING: Removing unreachable block (ram,0x00014db7b60c) */
/* WARNING: Removing unreachable block (ram,0x00014db7b6a3) */
/* WARNING: Removing unreachable block (ram,0x00014db7b6ae) */
/* WARNING: Removing unreachable block (ram,0x00014db7b6b9) */
/* WARNING: Removing unreachable block (ram,0x00014db7b6b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db7b4e9(void)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong unaff_R13;
  byte unaff_R15B;
  
  bVar1 = (byte)*(undefined8 *)(unaff_R13 + -0x78);
  if ((byte)(bVar1 + unaff_R15B + (bVar1 & unaff_R15B) * -2) == -1) {
    return in_RAX;
  }
  uVar2 = FUN_1649963b7();
  return uVar2;
}



// FUNCTION 14db7b74c FUN_14db7b74c body=773 status=ok
// SIG undefined FUN_14db7b74c(void)

/* WARNING: Removing unreachable block (ram,0x00014db7b7e3) */
/* WARNING: Removing unreachable block (ram,0x00014db7b7e9) */
/* WARNING: Removing unreachable block (ram,0x00014db7b9a2) */
/* WARNING: Removing unreachable block (ram,0x000161a93eaf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db7b74c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  *unaff_R13 = ~(param_3 & *unaff_R13);
  uVar1 = FUN_166b3e2c2(param_1,param_2,FUN_166b3e2c2);
  return uVar1;
}



// FUNCTION 14db7bb94 FUN_14db7bb94 body=307 status=ok
// SIG undefined FUN_14db7bb94(void)

void FUN_14db7bb94(ulonglong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  ushort *puVar6;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong lStackX_20;
  
  uVar3 = param_2 + unaff_RDI + (param_1 & unaff_R15) * -2;
  uVar5 = ~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x28));
  uVar4 = ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  lVar2 = *(longlong *)(unaff_R13 + -0x30);
  FUN_14dbaaa2c(uVar3,~((uVar4 - (uVar5 | uVar4)) + uVar5));
  FUN_15787ee66();
  uVar4 = *(ulonglong *)(lVar2 + -0x70);
  puVar6 = (ushort *)((uVar4 & uVar3 ^ 0xffffffffffffffff) & (uVar4 | uVar3));
  FUN_16473e031();
  *puVar6 = *puVar6 - (*puVar6 & 0x100);
  *(undefined8 *)(lStackX_20 + -8) = unaff_R14;
  *(undefined8 *)(lStackX_20 + -0x10) = 0x14db7be0a;
  FUN_1617f8510();
  *(undefined4 *)(lStackX_20 + -0x10) = 0x7782e4a;
  *(undefined4 *)(lStackX_20 + -0xc) = 0;
  puVar1 = (undefined8 *)(lStackX_20 + *(longlong *)(lStackX_20 + -0x10) + -0x7782e5a);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + -1) = 0x96907780;
  *(undefined4 *)puVar1 = *(undefined4 *)(puVar1 + -1);
  FUN_1650737b7();
  return;
}



// FUNCTION 14db7bcc7 FUN_14db7bcc7 body=505 status=ok
// SIG undefined FUN_14db7bcc7(void)

void FUN_14db7bcc7(ulonglong param_1)

{
  undefined8 *puVar1;
  longlong unaff_RDI;
  ushort *puVar2;
  undefined8 unaff_R14;
  longlong local_res20;
  
  puVar2 = (ushort *)
           ((*(ulonglong *)(unaff_RDI + -0x70) & param_1 ^ 0xffffffffffffffff) &
           (*(ulonglong *)(unaff_RDI + -0x70) | param_1));
  FUN_16473e031();
  *puVar2 = *puVar2 - (*puVar2 & 0x100);
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = 0x14db7be0a;
  FUN_1617f8510();
  *(undefined4 *)(local_res20 + -0x10) = 0x7782e4a;
  *(undefined4 *)(local_res20 + -0xc) = 0;
  puVar1 = (undefined8 *)(local_res20 + *(longlong *)(local_res20 + -0x10) + -0x7782e5a);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + -1) = 0x96907780;
  *(undefined4 *)puVar1 = *(undefined4 *)(puVar1 + -1);
  FUN_1650737b7();
  return;
}



// FUNCTION 14db7bf94 FUN_14db7bf94 body=127 status=ok
// SIG undefined FUN_14db7bf94(void)

/* WARNING: Removing unreachable block (ram,0x00014db7c00f) */

void FUN_14db7bf94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15)) {
    (*(code *)&LAB_1627d0fda)(param_1,param_2,param_3);
    return;
  }
  FUN_15af4cb6a();
  return;
}



// FUNCTION 14db7c015 FUN_14db7c015 body=137 status=ok
// SIG undefined FUN_14db7c015(void)

undefined8 FUN_14db7c015(void)

{
  longlong unaff_R12;
  
  return *(undefined8 *)(unaff_R12 + -0x90);
}



// FUNCTION 14db7c321 FUN_14db7c321 body=121 status=ok
// SIG undefined FUN_14db7c321(void)

/* WARNING: Instruction at (ram,0x000161437fa1) overlaps instruction at (ram,0x000161437f9e)
    */
/* WARNING: Removing unreachable block (ram,0x000157079ad2) */
/* WARNING: Removing unreachable block (ram,0x000157079add) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7c0) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7ff) */
/* WARNING: Removing unreachable block (ram,0x00014db7c805) */
/* WARNING: Removing unreachable block (ram,0x000157079ad8) */
/* WARNING: Removing unreachable block (ram,0x00014db7c642) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6d7) */
/* WARNING: Removing unreachable block (ram,0x000164796b8f) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6dd) */
/* WARNING: Removing unreachable block (ram,0x0001666c0341) */
/* WARNING: Removing unreachable block (ram,0x0001666c0347) */
/* WARNING: Removing unreachable block (ram,0x0001570799aa) */
/* WARNING: Removing unreachable block (ram,0x00016656d264) */
/* WARNING: Removing unreachable block (ram,0x00016656d338) */
/* WARNING: Removing unreachable block (ram,0x00016656d327) */
/* WARNING: Removing unreachable block (ram,0x00014d97421d) */
/* WARNING: Removing unreachable block (ram,0x00016656d33e) */

void FUN_14db7c321(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  uint local_res8;
  undefined8 in_stack_00000010;
  ulonglong uVar4;
  
  *(undefined8 *)(&stack0x7747d7ba + -~param_1) = param_4;
  FUN_162c2d933(in_stack_00000010,param_2);
  uVar7 = *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15;
  uVar3 = unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x38);
  uVar5 = 0;
  pcVar1 = (char *)FUN_16276f7a7(uVar3,0,uVar7,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  uVar2 = (int)uVar3 + 0x6693475;
  uVar4 = (ulonglong)uVar2;
  if ((local_res8 < uVar2) && (uVar2 < local_res8)) {
    uVar3 = *(ulonglong *)((ulonglong)((int)uVar3 + 0xf996cb8a) - 0x68);
    uVar6 = ~uVar3;
    FUN_15b5a93fc(uVar4,~((~uVar4 | uVar3) & (uVar6 + uVar4) - (uVar6 & uVar4)),uVar7 & uVar5);
    FUN_14e0644c4();
    return;
  }
  FUN_1651484e7();
  FUN_161596c04(*(undefined8 *)(unaff_R12 + -0x88));
  return;
}



// FUNCTION 14db7c39a FUN_14db7c39a body=493 status=ok
// SIG undefined FUN_14db7c39a(void)

/* WARNING: Instruction at (ram,0x000161437fa1) overlaps instruction at (ram,0x000161437f9e)
    */
/* WARNING: Removing unreachable block (ram,0x000157079ad2) */
/* WARNING: Removing unreachable block (ram,0x000157079add) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7c0) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7ff) */
/* WARNING: Removing unreachable block (ram,0x00014db7c805) */
/* WARNING: Removing unreachable block (ram,0x000157079ad8) */
/* WARNING: Removing unreachable block (ram,0x00014db7c642) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6d7) */
/* WARNING: Removing unreachable block (ram,0x000164796b8f) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6dd) */
/* WARNING: Removing unreachable block (ram,0x0001666c0341) */
/* WARNING: Removing unreachable block (ram,0x0001666c0347) */
/* WARNING: Removing unreachable block (ram,0x0001570799aa) */
/* WARNING: Removing unreachable block (ram,0x00016656d264) */
/* WARNING: Removing unreachable block (ram,0x00016656d338) */
/* WARNING: Removing unreachable block (ram,0x00016656d327) */
/* WARNING: Removing unreachable block (ram,0x00014d97421d) */
/* WARNING: Removing unreachable block (ram,0x00016656d33e) */

void FUN_14db7c39a(void)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  uint unaff_ESI;
  ulonglong uVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar4;
  
  uVar7 = *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15;
  uVar3 = unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x38);
  uVar5 = 0;
  pcVar1 = (char *)FUN_16276f7a7(uVar3,0,uVar7,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  uVar2 = (int)uVar3 + 0x6693475;
  uVar4 = (ulonglong)uVar2;
  if ((unaff_ESI < uVar2) && (uVar2 < unaff_ESI)) {
    uVar3 = *(ulonglong *)((ulonglong)((int)uVar3 + 0xf996cb8a) - 0x68);
    uVar6 = ~uVar3;
    FUN_15b5a93fc(uVar4,~((~uVar4 | uVar3) & (uVar6 + uVar4) - (uVar6 & uVar4)),uVar7 & uVar5);
    FUN_14e0644c4();
    return;
  }
  FUN_1651484e7();
  FUN_161596c04(*(undefined8 *)(unaff_R12 + -0x88));
  return;
}



// FUNCTION 14db7c47a FUN_14db7c47a body=1019 status=ok
// SIG undefined FUN_14db7c47a(void)

/* WARNING: Instruction at (ram,0x000161437fa1) overlaps instruction at (ram,0x000161437f9e)
    */
/* WARNING: Removing unreachable block (ram,0x000157079ad2) */
/* WARNING: Removing unreachable block (ram,0x000157079add) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7c0) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7ff) */
/* WARNING: Removing unreachable block (ram,0x00014db7c805) */
/* WARNING: Removing unreachable block (ram,0x000157079ad8) */
/* WARNING: Removing unreachable block (ram,0x00014db7c642) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6d7) */
/* WARNING: Removing unreachable block (ram,0x00014db7c6dd) */
/* WARNING: Removing unreachable block (ram,0x0001666c0341) */
/* WARNING: Removing unreachable block (ram,0x0001666c0347) */
/* WARNING: Removing unreachable block (ram,0x0001570799aa) */
/* WARNING: Removing unreachable block (ram,0x00016656d264) */
/* WARNING: Removing unreachable block (ram,0x00016656d338) */
/* WARNING: Removing unreachable block (ram,0x00016656d327) */
/* WARNING: Removing unreachable block (ram,0x00014d97421d) */
/* WARNING: Removing unreachable block (ram,0x000164796b8f) */
/* WARNING: Removing unreachable block (ram,0x00016656d33e) */

void FUN_14db7c47a(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68);
  FUN_15b5a93fc(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (uVar1 + param_1) - (uVar1 & param_1)),param_3 & param_2);
  FUN_14e0644c4();
  return;
}



// FUNCTION 14db7c773 FUN_14db7c773 body=876 status=ok
// SIG undefined FUN_14db7c773(void)

/* WARNING: Removing unreachable block (ram,0x000157079ad2) */
/* WARNING: Removing unreachable block (ram,0x000157079add) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7c0) */
/* WARNING: Removing unreachable block (ram,0x00014db7c7ff) */
/* WARNING: Removing unreachable block (ram,0x00014db7c805) */
/* WARNING: Removing unreachable block (ram,0x000157079ad8) */
/* WARNING: Removing unreachable block (ram,0x00016656d33e) */
/* WARNING: Removing unreachable block (ram,0x0001666c0347) */

void FUN_14db7c773(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  undefined8 uVar4;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x98);
  FUN_15b3aaa6d();
  uVar3 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),0xb375) & 0xffffffffffffac93;
  uVar4 = CONCAT62((int6)(uVar3 >> 0x10),
                   CONCAT11((char)((ushort)(~(~(ushort)uVar3 & 0xbff7) + 0x1fe7) >> 8),
                            (char)unaff_RSI));
  uVar3 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) &
          (~*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15) ^ 0xffffffffffffffff;
  FUN_164fdd0f1();
  uVar3 = unaff_retaddr ^ uVar3;
  *(ulonglong *)(uVar3 - 8) = uVar1 ^ in_RAX;
  *(ulonglong *)(uVar3 - 0x10) = ~((~in_RAX | uVar2) & (~uVar2 | in_RAX));
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 0x18) = unaff_RSI;
  *(ulonglong *)(uVar3 - 0x20) = unaff_R15;
  *(undefined8 *)(uVar3 - 8) = 0;
  *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(uVar3 - 8);
  *(undefined1 **)(uVar3 - 8) = &LAB_14d9742b5 + *(longlong *)(uVar3 - 8);
  *(undefined1 **)(uVar3 - 0x18) = &LAB_16656d264;
  *(undefined8 *)(uVar3 - 0x10) = uVar4;
  *(undefined8 *)(uVar3 - 0x18) = uVar4;
  *(undefined8 *)(uVar3 - 0x10) = 0x14d7beb20;
  return;
}



// FUNCTION 14db7cc4e FUN_14db7cc4e body=448 status=ok
// SIG undefined FUN_14db7cc4e(void)

void FUN_14db7cc4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  uVar1 = FUN_1648c0b2e(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15,uVar1,
                        ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 | ~uVar1),param_3);
  (*(code *)0x15b2e111f)(local_res8,*(ulonglong *)(unaff_R12 + -0x78) ^ uVar1);
  return;
}



// FUNCTION 14db7d022 FUN_14db7d022 body=113 status=ok
// SIG undefined FUN_14db7d022(void)

undefined8 FUN_14db7d022(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db7d1e4 FUN_14db7d1e4 body=461 status=ok
// SIG undefined FUN_14db7d1e4(void)

/* WARNING: Instruction at (ram,0x00015b4a76db) overlaps instruction at (ram,0x00015b4a76da)
    */
/* WARNING: Removing unreachable block (ram,0x00015b4a76da) */
/* WARNING: Removing unreachable block (ram,0x00014db7d292) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00015b4a7720 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14db7d1e4(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong local_10 [2];
  
  uVar1 = *(ulonglong *)(unaff_RDI + -8);
  local_10[0] = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  local_10[1] = -1 - ((~param_1 + uVar1) - (~param_1 & uVar1) & (~uVar1 | param_1));
  FUN_164ba6527(unaff_R14 + 0xbb6f70c,param_2);
  uVar1 = unaff_RBX - 0xf8485ec;
  *(undefined8 *)((longlong)local_10 + uVar1) =
       *(undefined8 *)(&stack0xfffffffff07b7a0c + unaff_RBX);
  uVar2 = *(undefined8 *)((longlong)local_10 + uVar1);
  *(ulonglong *)((longlong)local_10 + uVar1) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SCARRY8((longlong)local_10,uVar1) * 0x800
       | (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((longlong)((longlong)local_10 + uVar1) < 0) * 0x80 |
       (ulonglong)((undefined1 *)((longlong)local_10 + uVar1) == (undefined1 *)0x0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 |
       (ulonglong)((POPCOUNT((longlong)local_10 + uVar1 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)local_10,uVar1) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((in_AC & 1) != 0) * 0x40000;
  uVar2 = FUN_1626bac24(uVar2);
  return uVar2;
}



// FUNCTION 14db7d331 FUN_14db7d331 body=56 status=ok
// SIG undefined FUN_14db7d331(void)

undefined8 FUN_14db7d331(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(longlong *)(unaff_RBP + 0x10) = -*(longlong *)(unaff_RBP + 0x10);
  return in_RAX;
}



// FUNCTION 14db7d3c5 FUN_14db7d3c5 body=177 status=ok
// SIG undefined FUN_14db7d3c5(void)

void FUN_14db7d3c5(void)

{
  (*(code *)0x1669f10b0)();
  return;
}



// FUNCTION 14db7d478 FUN_14db7d478 body=216 status=ok
// SIG undefined FUN_14db7d478(void)

/* WARNING: Removing unreachable block (ram,0x00014db7d52e) */

void FUN_14db7d478(void)

{
  if (-1 < (longlong)&stack0x00000008) {
    FUN_15b02ed14();
    return;
  }
  FUN_1572aafde();
  return;
}



// FUNCTION 14db7d5ec FUN_14db7d5ec body=134 status=ok
// SIG undefined FUN_14db7d5ec(void)

void FUN_14db7d5ec(void)

{
  FUN_156ea7151();
  return;
}



// FUNCTION 14db7d714 FUN_14db7d714 body=123 status=ok
// SIG undefined FUN_14db7d714(void)

void FUN_14db7d714(void)

{
  return;
}



// FUNCTION 14db7d9d5 FUN_14db7d9d5 body=141 status=ok
// SIG undefined FUN_14db7d9d5(void)

void FUN_14db7d9d5(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15734015c(in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x28),FUN_15734015c,
                ~((in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x80)) &
                 (*(ulonglong *)(unaff_R12 + -0x80) ^ 0xffffffffffffffff | in_RAX)),
                (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14db7da64 FUN_14db7da64 body=20 status=ok
// SIG undefined FUN_14db7da64(void)

void FUN_14db7da64(void)

{
  return;
}



// FUNCTION 14db7db19 FUN_14db7db19 body=295 status=ok
// SIG undefined FUN_14db7db19(void)

void FUN_14db7db19(void)

{
  (*(code *)&LAB_165a1a60b)();
  return;
}



// FUNCTION 14db7dc4a FUN_14db7dc4a body=125 status=ok
// SIG undefined FUN_14db7dc4a(void)

void FUN_14db7dc4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_20;
  
  FUN_162ac0e45(param_1,param_2,uStackX_20);
  return;
}



// FUNCTION 14db7dcca FUN_14db7dcca body=187 status=ok
// SIG undefined FUN_14db7dcca(void)

void FUN_14db7dcca(void)

{
  return;
}



// FUNCTION 14db7dd8c FUN_14db7dd8c body=53 status=ok
// SIG undefined FUN_14db7dd8c(void)

void FUN_14db7dd8c(void)

{
  return;
}



// FUNCTION 14db7de38 FUN_14db7de38 body=302 status=ok
// SIG undefined FUN_14db7de38(void)

/* WARNING: Removing unreachable block (ram,0x00014db7df14) */
/* WARNING: Removing unreachable block (ram,0x0001568648b9) */
/* WARNING: Removing unreachable block (ram,0x00014db7ded0) */

void FUN_14db7de38(void)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ushort local_res10;
  longlong lStackX_18;
  
  if ((ushort)(~((local_res10 - 0x101) - (local_res10 & 0xfeff)) + 1) < 0x101) {
    *(undefined8 *)(lStackX_18 + -8) = unaff_RBP;
    *(undefined8 *)(lStackX_18 + -0x10) = in_R10;
    *(undefined8 *)(lStackX_18 + -0x18) = in_R10;
    *(undefined8 *)(lStackX_18 + -0x20) = in_R9;
    *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
    *(undefined8 *)(lStackX_18 + -0x18) = unaff_R13;
    plVar1 = (longlong *)(lStackX_18 + -0x20);
    *plVar1 = (longlong)UNRECOVERED_JUMPTABLE;
    *(undefined4 *)plVar1 = 0x93126d67;
    *(undefined4 *)(lStackX_18 + -0x1c) = 0x819c1787;
    *(int *)(lStackX_18 + -0x1c) = *(int *)(lStackX_18 + -0x1c) + 0x7e63e878;
    *(undefined1 **)(lStackX_18 + *plVar1 + 0x6ced9291) = &LAB_1616e4453;
                    /* WARNING: Could not recover jumptable at 0x0001616e4437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_156864801();
  return;
}



// FUNCTION 14db7df66 FUN_14db7df66 body=170 status=ok
// SIG undefined FUN_14db7df66(void)

undefined8 FUN_14db7df66(void)

{
  longlong in_R11;
  
  return *(undefined8 *)(in_R11 + -0x88);
}



// FUNCTION 14db7e0a3 FUN_14db7e0a3 body=260 status=ok
// SIG undefined FUN_14db7e0a3(void)

/* WARNING: Removing unreachable block (ram,0x00014db7e14c) */

void FUN_14db7e0a3(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *puVar1;
  undefined1 in_R10B;
  
  puVar1 = (undefined1 *)(*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP);
  FUN_165ed8e26();
  *puVar1 = in_R10B;
  thunk_FUN_160f41655();
  return;
}



// FUNCTION 14db7e1a9 thunk_FUN_14db7e1af body=5 status=ok
// SIG undefined thunk_FUN_14db7e1af(void)

void thunk_FUN_14db7e1af(void)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined8 uStack_8;
  
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI) = 0x7b4b255;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI + 4) = 0;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RDI) = in_RAX;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI) = 0x3abd27d5;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI + 4) = 0;
  FUN_166189e11();
  return;
}



// FUNCTION 14db7e1af FUN_14db7e1af body=154 status=ok
// SIG undefined FUN_14db7e1af(void)

void FUN_14db7e1af(void)

{
  undefined8 in_RAX;
  longlong unaff_RDI;
  undefined8 uStack_8;
  
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI) = 0x7b4b255;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI + 4) = 0;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RDI) = in_RAX;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI) = 0x3abd27d5;
  *(undefined4 *)((longlong)&uStack_8 + unaff_RDI + 4) = 0;
  FUN_166189e11();
  return;
}



// FUNCTION 14db7e35e FUN_14db7e35e body=345 status=ok
// SIG undefined FUN_14db7e35e(void)

/* WARNING: Removing unreachable block (ram,0x00014db7e3fa) */
/* WARNING: Removing unreachable block (ram,0x00014db7e400) */

void FUN_14db7e35e(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1662bafd5(param_1,param_2,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x70)) &
                 (*(ulonglong *)(unaff_R13 + -0x70) ^ 0xffffffffffffffff | unaff_R15)),FUN_1662bafd5
               );
  return;
}



// FUNCTION 14db7e58e FUN_14db7e58e body=137 status=ok
// SIG undefined FUN_14db7e58e(void)

void FUN_14db7e58e(undefined8 param_1,char param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  char cStackX_10;
  
  FUN_1626a1925(FUN_1626a1925,param_2 + cStackX_10,
                ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x88)) +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return;
}



// FUNCTION 14db7e61f FUN_14db7e61f body=135 status=ok
// SIG undefined FUN_14db7e61f(void)

void FUN_14db7e61f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16214f05a(param_1,param_2,param_3,FUN_16214f05a);
  return;
}



// FUNCTION 14db7e6a6 FUN_14db7e6a6 body=121 status=ok
// SIG undefined FUN_14db7e6a6(void)

void FUN_14db7e6a6(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x1575d0264)(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14db7e71f FUN_14db7e71f body=92 status=ok
// SIG undefined FUN_14db7e71f(void)

void FUN_14db7e71f(void)

{
  return;
}



// FUNCTION 14db7e7a2 FUN_14db7e7a2 body=280 status=ok
// SIG undefined FUN_14db7e7a2(void)

/* WARNING: Removing unreachable block (ram,0x00014db7e817) */
/* WARNING: Removing unreachable block (ram,0x00014db7e81d) */
/* WARNING: Removing unreachable block (ram,0x00014db7e871) */
/* WARNING: Removing unreachable block (ram,0x00015b04df4d) */
/* WARNING: Removing unreachable block (ram,0x00014db7e8b1) */
/* WARNING: Removing unreachable block (ram,0x00014db7e8b7) */

void FUN_14db7e7a2(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong *puVar4;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_18;
  ulonglong local_res20;
  
  puVar4 = (ulonglong *)(&stack0x00000008 + unaff_RDI);
  uVar2 = *puVar4;
  *puVar4 = ~*puVar4;
  *puVar4 = *puVar4 | param_1;
  uVar3 = *puVar4;
  *puVar4 = 0;
  *puVar4 = *puVar4 + ~((~param_1 | uVar2) & uVar3);
  uVar2 = local_res20 ^ param_1;
  param_5 = param_5 ^ param_1;
  local_res20._0_2_ = (ushort)uVar2;
  local_res20._0_2_ = (-0x101 - (((ushort)local_res20 & 0x100) - 0x101)) + (ushort)local_res20;
  *(undefined8 *)(param_5 - 8) = unaff_retaddr;
  *(undefined8 *)(param_5 - 0x10) = unaff_retaddr;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)(((ushort)local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)(((ushort)local_res20 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)local_res20 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)local_res20 & 4) != 0) * 4 | (ulonglong)(((ushort)local_res20 & 1) != 0)
       | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = unaff_R14;
  *(undefined8 *)(param_5 - 0x28) = unaff_RBX;
  *(undefined8 *)(param_5 - 0x30) = 0x1615c820c;
  FUN_15b86120b(uStackX_18,param_2,param_3,param_4);
  piVar1 = (int *)(param_5 - 0x18);
  *piVar1 = -0x4d1c98d5;
  *piVar1 = *piVar1 + 0x4d1c98d5;
  *(undefined4 *)(param_5 - 0x14) = 0;
  *piVar1 = -0x40d6c0f2;
  FUN_165b91725(FUN_165b91725);
  return;
}



// FUNCTION 14db7e8bd FUN_14db7e8bd body=140 status=ok
// SIG undefined FUN_14db7e8bd(void)

void FUN_14db7e8bd(void)

{
  return;
}



// FUNCTION 14db7eaa1 FUN_14db7eaa1 body=36 status=ok
// SIG undefined FUN_14db7eaa1(void)

void FUN_14db7eaa1(void)

{
  return;
}



// FUNCTION 14db7eb02 FUN_14db7eb02 body=33 status=ok
// SIG undefined FUN_14db7eb02(void)

void FUN_14db7eb02(void)

{
  thunk_FUN_161a4a61a(thunk_FUN_161a4a61a);
  return;
}



// FUNCTION 14db7ed45 FUN_14db7ed45 body=137 status=ok
// SIG undefined FUN_14db7ed45(void)

/* WARNING: Removing unreachable block (ram,0x00014db7ed7c) */

undefined8 FUN_14db7ed45(void)

{
  return 0xffffffffffffffa8;
}



// FUNCTION 14db7ede0 FUN_14db7ede0 body=135 status=ok
// SIG undefined FUN_14db7ede0(void)

/* WARNING: Removing unreachable block (ram,0x000165dd568a) */
/* WARNING: Removing unreachable block (ram,0x00014db7ee68) */

void FUN_14db7ede0(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  if (-1 < (longlong)(*(ulonglong *)(unaff_R12 + -0x28) ^ in_RAX)) {
    uVar2 = ((0xffffffffffffffff - in_RAX) + uVar1) - (0xffffffffffffffff - in_RAX & uVar1);
    uVar2 = ~(((~uVar1 | in_RAX) - (uVar2 | ~uVar1 | in_RAX)) + uVar2);
    uVar1 = *(ulonglong *)(unaff_R12 + -0x50);
    FUN_156ec0c7c(uVar2,-~*(ulonglong *)(unaff_R12 + -0x78) - 1 ^ in_RAX);
    FUN_1610fe90a(uVar2,~*(ulonglong *)(uVar1 + in_RAX + (uVar1 & in_RAX) * -2 + -0x68) | uVar2);
    return;
  }
  thunk_FUN_165dd560b();
  return;
}



// FUNCTION 14db7ee68 FUN_14db7ee68 body=144 status=ok
// SIG undefined FUN_14db7ee68(void)

void FUN_14db7ee68(void)

{
  thunk_FUN_14d9cef77();
  return;
}



// FUNCTION 14db7efaf FUN_14db7efaf body=102 status=ok
// SIG undefined FUN_14db7efaf(void)

void FUN_14db7efaf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar3;
  longlong unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + -8) = param_4;
  *(undefined8 *)(unaff_retaddr + -0x10) = param_4;
  *(void ***)(unaff_retaddr + -0x18) = &ExceptionList;
  *(undefined4 *)(unaff_retaddr + -0x18) = 0x869bab8;
  *(undefined4 *)(unaff_retaddr + -0x14) = 0;
  lVar1 = *(longlong *)(unaff_retaddr + -0x18);
  *(ulonglong *)(unaff_retaddr + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(unaff_retaddr + -0x20) = param_1;
  *(undefined8 *)(unaff_retaddr + -0x28) = unaff_RBX;
  *(ulonglong *)(unaff_retaddr + -0x30) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar2 = *(undefined8 *)(unaff_retaddr + -0x20);
  uVar3 = *(ulonglong *)(unaff_retaddr + -0x18);
  *(undefined8 *)(unaff_retaddr + -0x18) = param_2;
  *(ulonglong *)(unaff_retaddr + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(longlong *)(unaff_retaddr + -8) = lVar1 + -0x74f39a2;
  FUN_14d85d504(uVar2,*(undefined8 *)(unaff_retaddr + -0x18),param_3,
                *(undefined8 *)(unaff_retaddr + -0x10));
  return;
}



// FUNCTION 14db7f0a7 FUN_14db7f0a7 body=180 status=ok
// SIG undefined FUN_14db7f0a7(void)

/* WARNING: Removing unreachable block (ram,0x00014db7f157) */
/* WARNING: Removing unreachable block (ram,0x00016477b815) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db7f0a7(void)

{
  FUN_16477b815();
  return;
}



// FUNCTION 14db7f15d FUN_14db7f15d body=124 status=ok
// SIG undefined FUN_14db7f15d(void)

void FUN_14db7f15d(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 in_AL;
  ushort unaff_BX;
  undefined8 unaff_R12;
  ushort unaff_R15W;
  undefined8 local_res10;
  
  *param_2 = ((~unaff_BX + *param_2) - ~unaff_R15W) + -0x100;
  LOCK();
  UNLOCK();
  FUN_14d7a7afc = in_AL;
  *(undefined8 *)(param_5 + -8) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  (*(code *)0x14dac3cc7)(param_1,local_res10);
  return;
}



// FUNCTION 14db7f1db FUN_14db7f1db body=156 status=ok
// SIG undefined FUN_14db7f1db(void)

void FUN_14db7f1db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 unaff_retaddr;
  
  *(undefined8 *)(&stack0x516e02ce + CONCAT44(0xffffffff,unaff_retaddr)) = param_3;
  FUN_1657b951f(param_1,param_2,FUN_1657b951f);
  return;
}



// FUNCTION 14db7f277 FUN_14db7f277 body=126 status=ok
// SIG undefined FUN_14db7f277(void)

void FUN_14db7f277(undefined8 param_1)

{
  (*(code *)&LAB_15b651666)(param_1);
  return;
}



// FUNCTION 14db7f464 FUN_14db7f464 body=157 status=ok
// SIG undefined FUN_14db7f464(void)

void FUN_14db7f464(ulonglong param_1)

{
  undefined8 unaff_RBP;
  ulonglong uVar1;
  undefined8 local_res20;
  
  uVar1 = ~(((0xffffffffffffffff - param_1) + local_res20) -
            (0xffffffffffffffff - param_1 & local_res20) & (~local_res20 | param_1));
  *(undefined8 *)(uVar1 - 8) = unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = 0x14e1e41e5;
  return;
}



// FUNCTION 14db7f502 FUN_14db7f502 body=443 status=ok
// SIG undefined FUN_14db7f502(void)

/* WARNING: Removing unreachable block (ram,0x00014db7f618) */
/* WARNING: Removing unreachable block (ram,0x00014db7f6a4) */
/* WARNING: Removing unreachable block (ram,0x00014db7f6a8) */
/* WARNING: Removing unreachable block (ram,0x00014db7f60d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db7f502(void)

{
  ushort uVar1;
  ulonglong in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar2;
  longlong unaff_R12;
  ushort uStackX_18;
  
  uVar2 = ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) + in_RAX + 1) &
          (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX);
  uVar1 = FUN_160f0f522();
  uStackX_18 = uStackX_18 ^ uVar1;
  UNRECOVERED_JUMPTABLE = (code *)FUN_15b4d87a4(uStackX_18,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00016245afc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14db7f6bf FUN_14db7f6bf body=340 status=ok
// SIG undefined FUN_14db7f6bf(void)

void FUN_14db7f6bf(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  
  FUN_1650710fa(param_1,param_2);
  FUN_1647473b6(param_1 - ~(((param_3 | 0xffffffffcb213a74) -
                            (unaff_RBX | param_3 | 0xffffffffcb213a74)) + unaff_RBX));
  FUN_16610407c();
  return;
}



// FUNCTION 14db7f93b FUN_14db7f93b body=127 status=ok
// SIG undefined FUN_14db7f93b(void)

void FUN_14db7f93b(longlong param_1)

{
  longlong unaff_RDI;
  
  FUN_166d819b9(param_1,*(longlong *)(unaff_RDI + -0x28) + param_1);
  return;
}



// FUNCTION 14db7faf2 FUN_14db7faf2 body=302 status=ok
// SIG undefined FUN_14db7faf2(void)

void FUN_14db7faf2(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_160fc707d(CONCAT71((int7)(param_1 >> 8),0x77) ^ 0x76,
                ((param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x68)) +
                (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  FUN_16500f23a();
  return;
}



// FUNCTION 14db7fc21 FUN_14db7fc21 body=230 status=ok
// SIG undefined FUN_14db7fc21(void)

void FUN_14db7fc21(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = *(undefined8 *)(unaff_R12 + -0x98);
  FUN_156a83832(param_1);
  FUN_164846ef8(uVar1);
  return;
}



// FUNCTION 14db7fd4a FUN_14db7fd4a body=195 status=ok
// SIG undefined FUN_14db7fd4a(void)

void FUN_14db7fd4a(void)

{
  (*(code *)0x164fa64b4)(0xfffffffffffffff8);
  return;
}



// FUNCTION 14db7feb5 FUN_14db7feb5 body=331 status=ok
// SIG undefined FUN_14db7feb5(void)

/* WARNING: Instruction at (ram,0x00014d8311b7) overlaps instruction at (ram,0x00014d8311b6)
    */
/* WARNING: Removing unreachable block (ram,0x000165711eb0) */
/* WARNING: Removing unreachable block (ram,0x000165711eb6) */
/* WARNING: Removing unreachable block (ram,0x000160c8ce9a) */
/* WARNING: Removing unreachable block (ram,0x000160c8cf0a) */
/* WARNING: Removing unreachable block (ram,0x000160c8cf0f) */
/* WARNING: Removing unreachable block (ram,0x000160c8cf15) */
/* WARNING: Removing unreachable block (ram,0x0001647f413a) */
/* WARNING: Removing unreachable block (ram,0x000165711e16) */
/* WARNING: Removing unreachable block (ram,0x00014d83112e) */
/* WARNING: Removing unreachable block (ram,0x00014d83117a) */
/* WARNING: Removing unreachable block (ram,0x00014d83117e) */
/* WARNING: Removing unreachable block (ram,0x00014d8311ae) */
/* WARNING: Removing unreachable block (ram,0x000165711e1c) */
/* WARNING: Removing unreachable block (ram,0x000165711eab) */
/* WARNING: Removing unreachable block (ram,0x00014d8311b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8311b6) */
/* WARNING: Removing unreachable block (ram,0x00015afb6941) */
/* WARNING: Removing unreachable block (ram,0x00014d831255) */
/* WARNING: Removing unreachable block (ram,0x00014d83125b) */
/* WARNING: Removing unreachable block (ram,0x000166a0291b) */
/* WARNING: Removing unreachable block (ram,0x000166a02949) */

void FUN_14db7feb5(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  ulonglong uVar1;
  
  FUN_16514b8af(0x85d94d5);
  uVar1 = *(ulonglong *)(param_2 + -0x90) & in_R10;
  if (-1 < (longlong)
           ((*(ulonglong *)(param_2 + -0x90) + in_R10) -
           ((uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0) | 1) - 1))) {
    return;
  }
  if (*(ulonglong *)(param_2 + -0x60) + in_R10 !=
      ((~in_R10 | *(ulonglong *)(param_2 + -0x60)) + in_R10 + 1) * 2) {
    FUN_165711d7e();
    return;
  }
  FUN_14d83112e();
  return;
}



// FUNCTION 14db8012d FUN_14db8012d body=158 status=ok
// SIG undefined FUN_14db8012d(void)

void FUN_14db8012d(void)

{
  FUN_161b90d43();
  return;
}



// FUNCTION 14db802f8 FUN_14db802f8 body=487 status=ok
// SIG undefined FUN_14db802f8(void)

/* WARNING: Removing unreachable block (ram,0x00014db80390) */

undefined8 FUN_14db802f8(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_14db4bf91(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                         (*(ulonglong *)(unaff_R13 + -0x78) ^ 0xffffffffffffffff | unaff_R15)),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + (-~unaff_RBP - in_RAX)) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14db804d4 FUN_14db804d4 body=155 status=ok
// SIG undefined FUN_14db804d4(void)

void FUN_14db804d4(byte param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  undefined8 uStackX_10;
  
  FUN_1615af204(uStackX_10,param_2,unaff_RBP - (param_3 << (param_1 & 0x3f)));
  return;
}



// FUNCTION 14db80995 FUN_14db80995 body=464 status=ok
// SIG undefined FUN_14db80995(void)

/* WARNING: Removing unreachable block (ram,0x00014db80b43) */
/* WARNING: Removing unreachable block (ram,0x00015afba386) */
/* WARNING: Removing unreachable block (ram,0x000166aeeec1) */

void * FUN_14db80995(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong in_RAX;
  void *pvVar8;
  ushort uVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar10;
  undefined8 unaff_R14;
  bool bVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  ushort local_res10;
  uint6 uStackX_12;
  
  uVar9 = local_res10 + 0x100;
  uVar7 = local_res10 & 0x100;
  if ((uVar9 >= uVar7) || (uVar9 < uVar7 || (ushort)(uVar9 - uVar7) == 0)) {
    uVar7 = 0xff01 - (~(uVar9 - uVar7) + 2);
    pvVar8 = ClientId.UniqueProcess;
    *(undefined8 *)(in_RAX + -8) = unaff_RBX;
    *(undefined8 *)(in_RAX + -0x10) = unaff_RBX;
    *(ulonglong *)(in_RAX + -0x18) =
         (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
         (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
         (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
    *(undefined8 *)(in_RAX + -0x20) = unaff_R14;
    *(ulonglong *)(in_RAX + -0x28) = local_res8;
    *(undefined8 *)(in_RAX + -0x30) = param_4;
    *(longlong *)(in_RAX + -0x18) = unaff_R13;
    *(undefined8 *)(in_RAX + -8) = 0x452c640;
    *(undefined8 *)(in_RAX + -0x18) = param_3;
    *(undefined8 *)(in_RAX + -0x20) = param_3;
    *(undefined1 **)(in_RAX + -0x18) = &LAB_15709cd3e;
    return pvVar8;
  }
  uVar3 = *(undefined8 *)(unaff_R13 + -0x98);
  lVar2 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_164c3dc3f(param_1,param_2);
  if ((ulonglong *)(lVar2 + -0xa0) != (ulonglong *)0x0) {
    pvVar8 = (void *)FUN_15afba2ed();
    return pvVar8;
  }
  uVar10 = *(ulonglong *)(lVar2 + -0xa0) ^ local_res8;
  uVar12 = *(ulonglong *)(lVar2 + -8) ^ local_res8;
  uVar1 = *(ulonglong *)(lVar2 + -0x70) ^ local_res8;
  uVar6 = rdtsc();
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined4 *)(uVar1 - 0x18) = 0x139b95d9;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x80) != 0) * 0x80 | (ulonglong)((uVar12 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar12 & 0x10) != 0) * 0x10 | (ulonglong)((uVar12 & 4) != 0) * 4 |
       (ulonglong)((uVar12 & 1) != 0) | (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  uVar12 = *(ulonglong *)(uVar1 - 0x28);
  uVar4 = *(undefined8 *)(uVar1 - 0x20);
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  uVar5 = *(undefined8 *)(uVar1 - 0x20);
  uVar12 = *(ulonglong *)(uVar1 - 0x18);
  bVar11 = (uVar12 & 0x80) != 0;
  *(undefined8 *)(uVar1 - 0x18) = uVar4;
  *(undefined8 *)(uVar1 - 0x20) = uVar5;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)bVar11 * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  if (bVar11) {
    pvVar8 = (void *)FUN_156788af5();
    return pvVar8;
  }
  *(longlong *)(uVar1 - 8) = lVar2 + -0xeaa79bf;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar10;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar10;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return (void *)CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)uVar6);
}



// FUNCTION 14db80a19 FUN_14db80a19 body=135 status=ok
// SIG undefined FUN_14db80a19(void)

/* WARNING: Removing unreachable block (ram,0x00014db80b43) */
/* WARNING: Removing unreachable block (ram,0x00015afba386) */

void FUN_14db80a19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R15;
  bool bVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_164c3dc3f();
  if ((ulonglong *)(lVar2 + -0xa0) != (ulonglong *)0x0) {
    FUN_15afba2ed();
    return;
  }
  uVar5 = *(ulonglong *)(lVar2 + -0xa0) ^ unaff_R15;
  uVar7 = *(ulonglong *)(lVar2 + -8) ^ unaff_R15;
  uVar1 = *(ulonglong *)(lVar2 + -0x70) ^ unaff_R15;
  rdtsc();
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined4 *)(uVar1 - 0x18) = 0x139b95d9;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x80) != 0) * 0x80 | (ulonglong)((uVar7 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar7 & 0x10) != 0) * 0x10 | (ulonglong)((uVar7 & 4) != 0) * 4 |
       (ulonglong)((uVar7 & 1) != 0) | (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  uVar7 = *(ulonglong *)(uVar1 - 0x28);
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  uVar4 = *(undefined8 *)(uVar1 - 0x20);
  uVar7 = *(ulonglong *)(uVar1 - 0x18);
  bVar6 = (uVar7 & 0x80) != 0;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined8 *)(uVar1 - 0x20) = uVar4;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  if (bVar6) {
    FUN_156788af5();
    return;
  }
  *(longlong *)(uVar1 - 8) = lVar2 + -0xeaa79bf;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar5;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar5;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14db80aa1 FUN_14db80aa1 body=290 status=ok
// SIG undefined FUN_14db80aa1(void)

/* WARNING: Removing unreachable block (ram,0x00014db80b43) */
/* WARNING: Removing unreachable block (ram,0x00015afba386) */

void FUN_14db80aa1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R15;
  bool bVar6;
  ulonglong uVar7;
  
  if ((ulonglong *)(unaff_R13 + -0xa0) != (ulonglong *)0x0) {
    FUN_15afba2ed();
    return;
  }
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar7 = *(ulonglong *)(unaff_R13 + -8) ^ unaff_R15;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  rdtsc();
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined4 *)(uVar1 - 0x18) = 0x139b95d9;
  *(undefined8 *)(uVar1 - 0x20) = param_3;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x80) != 0) * 0x80 | (ulonglong)((uVar7 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar7 & 0x10) != 0) * 0x10 | (ulonglong)((uVar7 & 4) != 0) * 4 |
       (ulonglong)((uVar7 & 1) != 0) | (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  uVar7 = *(ulonglong *)(uVar1 - 0x28);
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  lVar3 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  uVar4 = *(undefined8 *)(uVar1 - 0x20);
  uVar7 = *(ulonglong *)(uVar1 - 0x18);
  bVar6 = (uVar7 & 0x80) != 0;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = uVar4;
  *(ulonglong *)(uVar1 - 0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)bVar6 * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  if (bVar6) {
    FUN_156788af5();
    return;
  }
  *(longlong *)(uVar1 - 8) = lVar3 + -0xeaa79bf;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar5;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar5;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14db80e7c FUN_14db80e7c body=149 status=ok
// SIG undefined FUN_14db80e7c(void)

void FUN_14db80e7c(undefined8 param_1)

{
  FUN_164823ef8(param_1);
  return;
}



// FUNCTION 14db80f90 FUN_14db80f90 body=285 status=ok
// SIG undefined FUN_14db80f90(void)

void FUN_14db80f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  
  uVar2 = FUN_1651a97ca();
  uVar1 = *(ulonglong *)(local_res8 + -0x40);
  uVar3 = ~uVar1 & ~uVar2 | uVar1;
  FUN_160b81eec(param_1,param_4,~(uVar3 & (~uVar1 | uVar2)),uVar3);
  return;
}



// FUNCTION 14db8114d FUN_14db8114d body=585 status=ok
// SIG undefined FUN_14db8114d(void)

/* WARNING: Removing unreachable block (ram,0x00014db811d6) */
/* WARNING: Removing unreachable block (ram,0x00014db812ea) */
/* WARNING: Removing unreachable block (ram,0x00014db812f0) */
/* WARNING: Removing unreachable block (ram,0x000161230660) */
/* WARNING: Removing unreachable block (ram,0x00014db811c6) */

undefined8 FUN_14db8114d(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b8176b2(param_1,0);
  return uVar1;
}



// FUNCTION 14db813a7 FUN_14db813a7 body=158 status=ok
// SIG undefined FUN_14db813a7(void)

undefined8 FUN_14db813a7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db814fe FUN_14db814fe body=158 status=ok
// SIG undefined FUN_14db814fe(void)

void FUN_14db814fe(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dbebb87(FUN_14dbebb87,
                ~((*(ulonglong *)(unaff_R13 + -0x48) -
                  (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48))) + ~unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,param_3 + param_4 * -2);
  return;
}



// FUNCTION 14db81622 FUN_14db81622 body=11 status=ok
// SIG undefined FUN_14db81622(void)

void FUN_14db81622(void)

{
  return;
}



// FUNCTION 14db816c2 FUN_14db816c2 body=298 status=ok
// SIG undefined FUN_14db816c2(void)

/* WARNING: Removing unreachable block (ram,0x00014db81766) */
/* WARNING: Removing unreachable block (ram,0x000156c5ce89) */
/* WARNING: Removing unreachable block (ram,0x00014db817e9) */
/* WARNING: Removing unreachable block (ram,0x00014db817ef) */
/* WARNING: Removing unreachable block (ram,0x00014db817f4) */

ulonglong FUN_14db816c2(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if ((longlong)((~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) + param_1 + 1) < 0) {
    return 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
           (*(ulonglong *)(unaff_RDI + -0x80) | param_1);
  }
  uVar1 = FUN_1567eed43(1,*(ulonglong *)(unaff_RDI + -0x28) + param_1);
  return uVar1;
}



// FUNCTION 14db817f4 FUN_14db817f4 body=194 status=ok
// SIG undefined FUN_14db817f4(void)

void FUN_14db817f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_162da315a(param_1,param_2,unaff_retaddr);
  FUN_165c7153c();
  return;
}



// FUNCTION 14db81d86 FUN_14db81d86 body=314 status=ok
// SIG undefined FUN_14db81d86(void)

/* WARNING: Removing unreachable block (ram,0x00014db81e28) */

longlong FUN_14db81d86(void)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x40) + unaff_R15 <
      (*(ulonglong *)(unaff_R13 + -0x40) & unaff_R15) << 1) {
    return (-unaff_R15 - *(ulonglong *)(unaff_R13 + -0x90)) +
           (unaff_R15 ^ 0xffffffffffffffff) * -2 +
           ((unaff_R15 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R13 + -0x90)) * 2 + -2;
  }
  lVar1 = FUN_160ce86a7();
  return lVar1;
}



// FUNCTION 14db81f66 FUN_14db81f66 body=2 status=ok
// SIG undefined FUN_14db81f66(void)

void FUN_14db81f66(void)

{
  return;
}



// FUNCTION 14db81ff0 FUN_14db81ff0 body=142 status=ok
// SIG undefined FUN_14db81ff0(void)

void FUN_14db81ff0(longlong param_1,longlong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_160d4d261(-(param_1 - param_2),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14db82084 FUN_14db82084 body=435 status=ok
// SIG undefined FUN_14db82084(void)

/* WARNING: Removing unreachable block (ram,0x0001654c656d) */
/* WARNING: Removing unreachable block (ram,0x0001654c6573) */
/* WARNING: Removing unreachable block (ram,0x00014db8211f) */

undefined8 FUN_14db82084(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_14df928f8(param_1,FUN_14df928f8,
                        (~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                        (~(param_1 | *(ulonglong *)(unaff_RDI + -0x70)) | param_1) ^
                        0xffffffffffffffff);
  return uVar1;
}



// FUNCTION 14db8223c FUN_14db8223c body=587 status=ok
// SIG undefined FUN_14db8223c(void)

/* WARNING: Removing unreachable block (ram,0x000165955133) */
/* WARNING: Removing unreachable block (ram,0x00016595513e) */
/* WARNING: Removing unreachable block (ram,0x0001659551d8) */
/* WARNING: Removing unreachable block (ram,0x0001659551dd) */
/* WARNING: Removing unreachable block (ram,0x0001659551e3) */
/* WARNING: Removing unreachable block (ram,0x0001659551ee) */
/* WARNING: Removing unreachable block (ram,0x000165955280) */
/* WARNING: Removing unreachable block (ram,0x000165955286) */
/* WARNING: Removing unreachable block (ram,0x00015780a805) */
/* WARNING: Removing unreachable block (ram,0x00014db82355) */
/* WARNING: Removing unreachable block (ram,0x00014db8235b) */
/* WARNING: Removing unreachable block (ram,0x00014db823e6) */
/* WARNING: Removing unreachable block (ram,0x00016511135b) */
/* WARNING: Removing unreachable block (ram,0x000165955091) */
/* WARNING: Removing unreachable block (ram,0x00016595512e) */
/* WARNING: Removing unreachable block (ram,0x000165955139) */
/* WARNING: Removing unreachable block (ram,0x00014db822d1) */

void FUN_14db8223c(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong unaff_R13;
  
  if (unaff_EBX + (param_2 ^ 0x5ff4a52) + 0x1e9a4444 == 0) {
    param_1 = unaff_R13;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + -0x70) ^ param_1;
  if ((*(ulonglong *)(unaff_RDI + -0x28) & param_1) == 0) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
    FUN_15af76708();
    FUN_1658b0f48(param_1,uVar1,uVar2);
    return;
  }
  FUN_15786274d();
  return;
}



// FUNCTION 14db82493 FUN_14db82493 body=123 status=ok
// SIG undefined FUN_14db82493(void)

void FUN_14db82493(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  longlong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = ~*(ulonglong *)(unaff_R15 + 0x10);
  *(ulonglong *)(unaff_R15 + 0x10) = *(ulonglong *)(unaff_R15 + 0x10) | param_1;
  *(ulonglong *)(unaff_R15 + 0x10) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_R15 + 0x10));
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -8) = param_3;
  uVar2 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = uVar2;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  (*(code *)&LAB_14dda3177)(local_res10,uStackX_8,0x1665a09be,&LAB_14dda3177);
  return;
}



// FUNCTION 14db82702 FUN_14db82702 body=295 status=ok
// SIG undefined FUN_14db82702(void)

/* WARNING: Removing unreachable block (ram,0x00014db8278d) */
/* WARNING: Removing unreachable block (ram,0x00014db8277d) */

void FUN_14db82702(void)

{
  undefined8 unaff_retaddr;
  
  FUN_157232146(unaff_retaddr);
  return;
}



// FUNCTION 14db8282b FUN_14db8282b body=147 status=ok
// SIG undefined FUN_14db8282b(void)

void FUN_14db8282b(undefined8 param_1,undefined8 param_2)

{
  FUN_16261df58(param_1,param_2);
  return;
}



// FUNCTION 14db828bf FUN_14db828bf body=23 status=ok
// SIG undefined FUN_14db828bf(void)

void FUN_14db828bf(void)

{
  return;
}



// FUNCTION 14db82a39 FUN_14db82a39 body=152 status=ok
// SIG undefined FUN_14db82a39(void)

void FUN_14db82a39(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_R10B;
  
  FUN_165067163(param_1,param_2,in_R10B);
  return;
}



// FUNCTION 14db82b56 FUN_14db82b56 body=1167 status=ok
// SIG undefined FUN_14db82b56(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014db82d25) */
/* WARNING: Removing unreachable block (ram,0x00014db82d2b) */
/* WARNING: Removing unreachable block (ram,0x00014db82dd2) */
/* WARNING: Removing unreachable block (ram,0x00014db82dd7) */
/* WARNING: Removing unreachable block (ram,0x00014db82ddd) */
/* WARNING: Removing unreachable block (ram,0x00014db82de2) */
/* WARNING: Removing unreachable block (ram,0x00014db82bf8) */
/* WARNING: Removing unreachable block (ram,0x00014db82c87) */
/* WARNING: Removing unreachable block (ram,0x000165f978f6) */
/* WARNING: Removing unreachable block (ram,0x00014db82c8d) */
/* WARNING: Removing unreachable block (ram,0x00014db82d20) */
/* WARNING: Removing unreachable block (ram,0x000164aed4d5) */

void FUN_14db82b56(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong in_R11;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 uStackX_18;
  ulonglong in_stack_00000028;
  
  *(undefined8 *)(unaff_RBX + 0x18) = unaff_R14;
  uVar2 = ~in_stack_00000028 & in_R11;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x379dc28f;
  *puVar1 = *puVar1 ^ 0x379dc28f;
  *puVar1 = *puVar1 + in_RAX;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBP;
  *(undefined **)(uVar2 - 0x20) = &DAT_15afeec24;
  *(undefined4 *)(uVar2 - 0x20) = 0x1de6ad10;
  *(uint *)(uVar2 - 0x20) = *(uint *)(uVar2 - 0x20) ^ 0x5d2b067b;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  uVar4 = *(ulonglong *)(uVar2 - 0x20);
  *(undefined **)(uVar2 - 0x20) = &DAT_15afeec24;
  uVar4 = uVar4 ^ 0x40cdab63;
  lVar3 = *(longlong *)(uVar2 - 0x20);
  *(undefined8 *)((uVar2 - 0x10) + uVar4) = 0x1f43080e;
  puVar1 = (ulonglong *)((uVar2 - 0x10) + uVar4);
  *puVar1 = *puVar1 ^ 0x1f43080e;
  *(undefined8 *)(uVar2 - 0x20) = local_res8;
  *(undefined8 *)(uVar2 - 0x28) = uStackX_18;
  *(longlong *)((uVar2 - 0x10) + uVar4) = *(longlong *)((uVar2 - 0x10) + uVar4) + lVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db82fc0 FUN_14db82fc0 body=143 status=ok
// SIG undefined FUN_14db82fc0(void)

void FUN_14db82fc0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x16495edf3)(param_1,param_2);
  return;
}



// FUNCTION 14db83106 FUN_14db83106 body=156 status=ok
// SIG undefined FUN_14db83106(void)

/* WARNING: Instruction at (ram,0x00014db83134) overlaps instruction at (ram,0x00014db83131)
    */
/* WARNING: Removing unreachable block (ram,0x00014db83127) */
/* WARNING: Removing unreachable block (ram,0x00014db83131) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014db8315b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db83106(void)

{
  FUN_16632476c(0x72a47560);
  return;
}



// FUNCTION 14db831b6 FUN_14db831b6 body=166 status=ok
// SIG undefined FUN_14db831b6(void)

/* WARNING: Removing unreachable block (ram,0x00015645ce5c) */
/* WARNING: Removing unreachable block (ram,0x00015645cd9a) */
/* WARNING: Removing unreachable block (ram,0x00015645ce5f) */
/* WARNING: Removing unreachable block (ram,0x00015645cd8f) */
/* WARNING: Removing unreachable block (ram,0x00014db83253) */

undefined1 * FUN_14db831b6(void)

{
  return &LAB_15af4a8ce;
}



// FUNCTION 14db83253 FUN_14db83253 body=150 status=ok
// SIG undefined FUN_14db83253(void)

void FUN_14db83253(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x14d861428)
            (~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14db832eb FUN_14db832eb body=303 status=ok
// SIG undefined FUN_14db832eb(void)

void FUN_14db832eb(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_14dedfe73(param_1,param_2,param_3,0xffffffffb9f2afa0);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_16587491e(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar1,*(ulonglong *)(unaff_R12 + -0x78) ^ uVar1)
  ;
  return;
}



// FUNCTION 14db8341b FUN_14db8341b body=375 status=ok
// SIG undefined FUN_14db8341b(void)

/* WARNING: Removing unreachable block (ram,0x00014db834b5) */
/* WARNING: Removing unreachable block (ram,0x00014db834bb) */
/* WARNING: Removing unreachable block (ram,0x000162683278) */
/* WARNING: Removing unreachable block (ram,0x0001626832df) */
/* WARNING: Removing unreachable block (ram,0x0001626832ef) */

void FUN_14db8341b(void)

{
  FUN_162683278();
  return;
}



// FUNCTION 14db835e1 FUN_14db835e1 body=291 status=ok
// SIG undefined FUN_14db835e1(void)

void FUN_14db835e1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  byte local_res8;
  ulonglong uStackX_10;
  longlong local_res18;
  
  LOCK();
  bVar5 = local_res8 < DAT_14d7bf994;
  bVar6 = SBORROW1(local_res8,DAT_14d7bf994);
  cVar3 = local_res8 - DAT_14d7bf994;
  if (cVar3 == '\0') {
    DAT_14d7bf994 = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res18 + -8) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar6 * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar5 |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R14;
  uVar7 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  uVar2 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -8) = 0x2857190;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x10) = 0x156ef2e25;
  *(undefined8 *)(local_res18 + -0x20) = 0x14db83668;
  uVar4 = FUN_166388a6a(param_1,uVar2);
  uVar7 = *(ulonglong *)(unaff_R12 + -0x28);
  *(undefined8 *)(local_res18 + -0x18) = 0;
  *(ulonglong *)(local_res18 + -0x18) = *(ulonglong *)(local_res18 + -0x18) ^ uVar7;
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) = uVar7;
  uVar7 = *(ulonglong *)(unaff_R12 + -0x58);
  *(longlong *)(local_res18 + -0x18) = local_res18 + -0x10;
  FUN_161496f4e(uVar7 ^ uVar4,FUN_161496f4e,unaff_RBP + (param_3 & uVar4) * -2);
  return;
}



// FUNCTION 14db839c4 FUN_14db839c4 body=151 status=ok
// SIG undefined FUN_14db839c4(void)

void FUN_14db839c4(undefined8 param_1)

{
  ushort unaff_R15W;
  undefined2 local_res10;
  
  local_res10 = local_res10 ^ unaff_R15W;
  FUN_16501eca3(param_1,~local_res10 & 0x100 | local_res10);
  return;
}



// FUNCTION 14db83b06 FUN_14db83b06 body=512 status=ok
// SIG undefined FUN_14db83b06(void)

/* WARNING: Removing unreachable block (ram,0x00014db83c49) */
/* WARNING: Removing unreachable block (ram,0x00014db83c4f) */
/* WARNING: Removing unreachable block (ram,0x00014db83c5a) */

undefined8 FUN_14db83b06(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164f94c23();
  plVar1 = (longlong *)(&stack0x00000000 + unaff_RBX);
  lVar2 = *(longlong *)(unaff_R13 + -0x38);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar2;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x78);
  *plVar1 = *(longlong *)(unaff_R13 + -0x30);
  uVar4 = FUN_156d68cc3(~(uVar3 & unaff_R15) & (uVar3 | unaff_R15));
  return uVar4;
}



// FUNCTION 14db83e1d FUN_14db83e1d body=245 status=ok
// SIG undefined FUN_14db83e1d(void)

void FUN_14db83e1d(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + -0x98);
  FUN_165db6255();
  if (lVar1 < 0) {
    return;
  }
  thunk_FUN_156947643();
  return;
}



// FUNCTION 14db83f26 FUN_14db83f26 body=13 status=ok
// SIG undefined FUN_14db83f26(void)

void FUN_14db83f26(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1617c0bbc)(param_1,param_2,0x1617c0bbc);
  return;
}



// FUNCTION 14db83fd3 FUN_14db83fd3 body=145 status=ok
// SIG undefined FUN_14db83fd3(void)

void FUN_14db83fd3(ulonglong param_1,longlong param_2)

{
  longlong unaff_RDI;
  char in_stack_00000038;
  
  if (in_stack_00000038 < '\0') {
    FUN_15b3513c5();
    return;
  }
  FUN_16163e129(param_1,param_2 + *(longlong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14db84115 FUN_14db84115 body=165 status=ok
// SIG undefined FUN_14db84115(void)

/* WARNING: Removing unreachable block (ram,0x00014db842e8) */
/* WARNING: Removing unreachable block (ram,0x00014d93e76e) */
/* WARNING: Removing unreachable block (ram,0x00014db841c0) */
/* WARNING: Removing unreachable block (ram,0x00014db8422c) */
/* WARNING: Removing unreachable block (ram,0x0001574de120) */
/* WARNING: Removing unreachable block (ram,0x00014db84238) */

void FUN_14db84115(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  longlong unaff_R12;
  
  uVar3 = *(ulonglong *)(unaff_R12 + -0x48) | in_RAX;
  if ((~uVar3 | ~(*(ulonglong *)(unaff_R12 + -0x48) & in_RAX)) + uVar3 == -1) {
    FUN_14d93e734();
    return;
  }
  lVar1 = *(longlong *)(unaff_R12 + -8);
  uVar2 = FUN_1654e67f8(~((param_1 - (unaff_RSI | param_1)) + unaff_RSI),
                        ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                        (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX),param_3,param_4);
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = uVar2;
  *(undefined8 *)(lVar1 + -0x18) = uVar2;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = param_3;
  *(undefined1 **)(lVar1 + -8) = &LAB_162ddf4a7;
  FUN_162ddf47b();
  return;
}



// FUNCTION 14db841c0 FUN_14db841c0 body=460 status=ok
// SIG undefined FUN_14db841c0(void)

/* WARNING: Removing unreachable block (ram,0x00014db842e8) */
/* WARNING: Removing unreachable block (ram,0x00014db84238) */

void FUN_14db841c0(void)

{
  FUN_156e52dae();
  return;
}



// FUNCTION 14db8441e FUN_14db8441e body=508 status=ok
// SIG undefined FUN_14db8441e(void)

/* WARNING: Removing unreachable block (ram,0x00014db84545) */
/* WARNING: Removing unreachable block (ram,0x00014db8454b) */
/* WARNING: Removing unreachable block (ram,0x0001621e038c) */

void FUN_14db8441e(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  
  uVar3 = ~(~in_RAX & (param_1 | 0xffffffffa4d5b08d));
  *(ulonglong *)(&stack0xfffffffff0625ffe + uVar3) = *(ulonglong *)(in_R11 + -0x78);
  uVar4 = *(ulonglong *)(&stack0xfffffffff0625ffe + uVar3);
  uVar1 = *(ulonglong *)(in_R11 + -0x70);
  *(ulonglong *)(&stack0xfffffffff0625ffe + uVar3) = ~(uVar4 & in_R10) & (uVar4 | in_R10);
  *(undefined8 *)(&stack0xfffffffff0625ff6 + uVar3) = 0xffffffffffffffd8;
  uVar4 = *(ulonglong *)(in_R11 + -0x28);
  *(undefined8 *)(&stack0xfffffffff0625ffe + uVar3) = 0x14db844c1;
  uVar4 = FUN_156eab421(uVar4 ^ in_R10);
  uVar2 = *(undefined8 *)(&stack0xfffffffff062600e + uVar3);
  *(undefined8 *)(&stack0xfffffffff062601e + ~(uVar4 & unaff_R14) + (uVar3 - 0xf9da00a) + 0xf9da00a)
       = 0;
  *(ulonglong *)(&stack0xfffffffff062601e + ~(uVar4 & unaff_R14) + (uVar3 - 0xf9da00a) + 0xf9da00a)
       = *(longlong *)
          (&stack0xfffffffff062601e + ~(uVar4 & unaff_R14) + (uVar3 - 0xf9da00a) + 0xf9da00a) +
         (uVar1 ^ in_R10);
  *(undefined8 *)(&stack0xfffffffff062600e + uVar3) =
       *(undefined8 *)(&stack0xfffffffff0626016 + uVar3);
  *(undefined8 *)(&stack0xfffffffff0626006 + uVar3) = 0xfffffffffffffff8;
  *(undefined8 *)(&stack0xfffffffff062601e + uVar3) =
       *(undefined8 *)(&stack0xfffffffff0626006 + uVar3);
  *(undefined8 *)(&stack0xfffffffff0626016 + uVar3) = *(undefined8 *)(unaff_R13 + -0xa0);
  *(undefined8 *)(&stack0xfffffffff062601e + uVar3) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff0626016 + uVar3) = uVar2;
  *(undefined4 *)(&stack0xfffffffff0626016 + uVar3) = 0;
  *(undefined4 *)(&stack0xfffffffff062601a + uVar3) = 0;
  FUN_1621e038c();
  return;
}



// FUNCTION 14db8461e FUN_14db8461e body=534 status=ok
// SIG undefined FUN_14db8461e(void)

/* WARNING: Removing unreachable block (ram,0x00014db84772) */
/* WARNING: Removing unreachable block (ram,0x00014db847e7) */
/* WARNING: Removing unreachable block (ram,0x00014db847ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db8461e(ulonglong param_1)

{
  uint unaff_ESI;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  if (CONCAT44(0x6d20d318,~unaff_ESI) != 0x6d20d3184515423e) {
    (*(code *)&LAB_15692399b)(&LAB_15692399b);
    return;
  }
  FUN_156e55b8d(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  if ((longlong)(-0x1611 - ~unaff_R12) < 0) {
    (*(code *)0x161168940)();
    return;
  }
  FUN_164bbab3c();
  return;
}



// FUNCTION 14db848af FUN_14db848af body=208 status=ok
// SIG undefined FUN_14db848af(void)

/* WARNING: Instruction at (ram,0x00014db848c2) overlaps instruction at (ram,0x00014db848c1)
    */
/* WARNING: Removing unreachable block (ram,0x00014db848c1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x0001663a2ef9 */
/* WARNING: Removing unreachable block (ram,0x00014db8495f) */
/* WARNING: Removing unreachable block (ram,0x00014db8496e) */
/* WARNING: Removing unreachable block (ram,0x0001663a2edd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14db848af(void)

{
  FUN_1663a2edd();
  return;
}



// FUNCTION 14db84a99 FUN_14db84a99 body=135 status=ok
// SIG undefined FUN_14db84a99(void)

void FUN_14db84a99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15694c325(param_1,param_2,param_3);
  return;
}



// FUNCTION 14db84b21 FUN_14db84b21 body=814 status=ok
// SIG undefined FUN_14db84b21(void)

/* WARNING: Removing unreachable block (ram,0x00014db84bb2) */
/* WARNING: Removing unreachable block (ram,0x00014db84bb8) */
/* WARNING: Removing unreachable block (ram,0x00014db84c6d) */
/* WARNING: Removing unreachable block (ram,0x00014db84c73) */
/* WARNING: Removing unreachable block (ram,0x00014db84c78) */
/* WARNING: Removing unreachable block (ram,0x00014db84d25) */
/* WARNING: Removing unreachable block (ram,0x00014da75458) */
/* WARNING: Removing unreachable block (ram,0x000164868c00) */
/* WARNING: Removing unreachable block (ram,0x000157140273) */
/* WARNING: Removing unreachable block (ram,0x000164868c93) */
/* WARNING: Removing unreachable block (ram,0x000164868c99) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014db84d2b) */

void FUN_14db84b21(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165c7e7a9(param_1,&stack0xfffffffffffffff0,param_3,param_4);
  return;
}



// FUNCTION 14db84db7 FUN_14db84db7 body=337 status=ok
// SIG undefined FUN_14db84db7(void)

/* WARNING: Removing unreachable block (ram,0x00014db84e17) */
/* WARNING: Removing unreachable block (ram,0x00014db84e1d) */
/* WARNING: Removing unreachable block (ram,0x00014db84e75) */
/* WARNING: Removing unreachable block (ram,0x00014db84e96) */

void FUN_14db84db7(void)

{
  ushort *in_R10;
  bool in_ZF;
  ushort in_stack_00000008;
  
  if (!in_ZF) {
    in_R10 = (ushort *)((ulonglong)in_R10 & 0x7fffffffffffffff);
    in_stack_00000008 = ~(~(in_stack_00000008 & 0x3636) & (in_stack_00000008 | 0x3636));
  }
  *in_R10 = in_stack_00000008;
  FUN_16258c056();
  return;
}



// FUNCTION 14db84edb FUN_14db84edb body=446 status=ok
// SIG undefined FUN_14db84edb(void)

/* WARNING: Removing unreachable block (ram,0x00014db84f72) */

undefined8 FUN_14db84edb(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14db8547f FUN_14db8547f body=154 status=ok
// SIG undefined FUN_14db8547f(void)

/* WARNING: Removing unreachable block (ram,0x00014db8550e) */
/* WARNING: Removing unreachable block (ram,0x00014db85514) */
/* WARNING: Removing unreachable block (ram,0x00014db8551f) */
/* WARNING: Removing unreachable block (ram,0x00014db8562b) */
/* WARNING: Removing unreachable block (ram,0x00014db85631) */
/* WARNING: Removing unreachable block (ram,0x00016476d393) */
/* WARNING: Removing unreachable block (ram,0x00015b02e533) */
/* WARNING: Removing unreachable block (ram,0x00015b02e54c) */
/* WARNING: Removing unreachable block (ram,0x00015b02e547) */
/* WARNING: Removing unreachable block (ram,0x00015b02e5aa) */
/* WARNING: Removing unreachable block (ram,0x00015b02e590) */

void FUN_14db8547f(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  if (*(longlong *)(unaff_R12 + -0x50) != 0) {
    FUN_161b16819(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                  ~(uVar1 & in_RAX) & (uVar1 + in_RAX) - (uVar1 & in_RAX),0xfffffffff4711807);
    return;
  }
  FUN_15b0d5b02();
  return;
}



// FUNCTION 14db8551f FUN_14db8551f body=273 status=ok
// SIG undefined FUN_14db8551f(void)

/* WARNING: Removing unreachable block (ram,0x00014db85631) */

void FUN_14db8551f(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  ulonglong in_R11;
  longlong lVar6;
  
  uVar2 = (unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x60)) &
          (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP) ^ 0xffffffffffffffff;
  uVar4 = -*(longlong *)(unaff_RSI + -0x70);
  pcVar3 = FUN_15b09c159;
  uVar1 = FUN_15b09c159(FUN_15b09c159,
                        *(ulonglong *)(unaff_RSI + -0x40) + unaff_RBP +
                        (*(ulonglong *)(unaff_RSI + -0x40) & unaff_RBP) * -2,uVar2,
                        (param_1 - param_2) + (param_4 & unaff_RBP) * -2);
  lVar6 = *(ulonglong *)(pcVar3 + ~(uVar1 & (in_R11 | 0xffffffff83239533))) + uVar4 +
          (*(ulonglong *)(pcVar3 + ~(uVar1 & (in_R11 | 0xffffffff83239533))) & uVar4) * -2;
  uVar4 = FUN_1624f3ff3(pcVar3,FUN_1624f3ff3,
                        CONCAT71((uint7)(uint3)(((uint)unaff_RSI ^ 0xffffffff | (uint)uVar2) +
                                                (uint)unaff_RSI + 1 >> 8),10) ^ 0x76,
                        (uVar4 - (*(ulonglong *)(pcVar3 + -0x90) | uVar4)) +
                        *(ulonglong *)(pcVar3 + -0x90));
  uVar1 = *(ulonglong *)(lVar6 + -0x58);
  uVar2 = *(ulonglong *)(lVar6 + -0x78);
  uVar5 = uVar2 | uVar4;
  FUN_162b8daba(uVar1 + uVar4 + (uVar1 & uVar4) * -2,(~uVar5 | ~(uVar2 & uVar4)) + uVar5 + 1);
  return;
}



// FUNCTION 14db85631 FUN_14db85631 body=148 status=ok
// SIG undefined FUN_14db85631(void)

void FUN_14db85631(undefined8 param_1)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  FUN_162eaaf83(FUN_162eaaf83,uStackX_8);
  return;
}



// FUNCTION 14db85880 FUN_14db85880 body=129 status=ok
// SIG undefined FUN_14db85880(void)

void FUN_14db85880(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x12cd3b) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x12cd3c) {
    FUN_161768714();
    return;
  }
  FUN_1617686ec();
  return;
}



// FUNCTION 14db8599f FUN_14db8599f body=52 status=ok
// SIG undefined FUN_14db8599f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14db8599f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14db85c38 FUN_14db85c38 body=89 status=ok
// SIG undefined FUN_14db85c38(void)

void FUN_14db85c38(void)

{
  return;
}



// FUNCTION 14db85ce6 FUN_14db85ce6 body=176 status=ok
// SIG undefined FUN_14db85ce6(void)

undefined8 FUN_14db85ce6(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  longlong unaff_R13;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 0x10);
  lVar2 = *(longlong *)(unaff_R13 + 0x10);
  *(undefined8 *)(unaff_R13 + 0x10) = 0;
  *(ulonglong *)(unaff_R13 + 0x10) =
       *(ulonglong *)(unaff_R13 + 0x10) ^ (-2 - (uVar1 | 0xfffffffffffffffe)) + lVar2;
  return in_RAX;
}



// FUNCTION 14db85db8 FUN_14db85db8 body=186 status=ok
// SIG undefined FUN_14db85db8(void)

void FUN_14db85db8(void)

{
  longlong unaff_RDI;
  ulonglong in_R11;
  
  *(undefined8 *)(&stack0x199b0574 + unaff_RDI) = 0;
  *(ulonglong *)(&stack0x199b0574 + unaff_RDI) =
       *(ulonglong *)(&stack0x199b0574 + unaff_RDI) ^ in_R11;
  return;
}



// FUNCTION 14db85f8b FUN_14db85f8b body=168 status=ok
// SIG undefined FUN_14db85f8b(void)

/* WARNING: Instruction at (ram,0x00014db85fde) overlaps instruction at (ram,0x00014db85fdd)
    */
/* WARNING: Removing unreachable block (ram,0x00014db85fdb) */

void FUN_14db85f8b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16141d090(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  FUN_14db86034();
  return;
}



// FUNCTION 14db86034 FUN_14db86034 body=7 status=ok
// SIG undefined FUN_14db86034(void)

void FUN_14db86034(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14db860c0 FUN_14db860c0 body=161 status=ok
// SIG undefined FUN_14db860c0(void)

void FUN_14db860c0(ulonglong param_1,byte param_2)

{
  longlong unaff_RDI;
  byte local_res20;
  
  (*(code *)0x15b6338ec)
            ((char)param_1,(local_res20 - (param_2 | local_res20)) + param_2,
             param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x50));
  return;
}



// FUNCTION 14db86162 FUN_14db86162 body=49 status=ok
// SIG undefined FUN_14db86162(void)

void FUN_14db86162(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14db86202 FUN_14db86202 body=8 status=ok
// SIG undefined FUN_14db86202(void)

void FUN_14db86202(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_165c7153c(param_1,uStackX_8,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14db862a9 FUN_14db862a9 body=347 status=ok
// SIG undefined FUN_14db862a9(void)

void FUN_14db862a9(uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong in_R10;
  ulonglong local_res8;
  ulonglong local_res18;
  
  local_res8 = (ulonglong)param_1;
  pcVar2 = FUN_160c1231f;
  uVar1 = FUN_160c1231f();
  *(ulonglong *)pcVar2 = ~*(ulonglong *)pcVar2;
  *(ulonglong *)pcVar2 = ~*(ulonglong *)pcVar2;
  *(ulonglong *)pcVar2 = *(ulonglong *)pcVar2 & ~uVar1;
  *(ulonglong *)pcVar2 = ~*(ulonglong *)pcVar2;
  uVar1 = *(ulonglong *)pcVar2;
  *(ulonglong *)pcVar2 = 0;
  *(ulonglong *)pcVar2 =
       *(ulonglong *)pcVar2 - ~((-~local_res8 - (~in_R10 + 2)) - ~local_res18 & uVar1);
  *(ulonglong *)pcVar2 = -*(ulonglong *)pcVar2;
  return;
}



// FUNCTION 14db86405 FUN_14db86405 body=17 status=ok
// SIG undefined FUN_14db86405(void)

void FUN_14db86405(void)

{
  FUN_14d7a93a7();
  return;
}



// FUNCTION 14db8649c FUN_14db8649c body=132 status=ok
// SIG undefined FUN_14db8649c(void)

/* WARNING: Removing unreachable block (ram,0x00014db866e7) */
/* WARNING: Removing unreachable block (ram,0x00014db866e1) */
/* WARNING: Removing unreachable block (ram,0x00014db866ec) */
/* WARNING: Removing unreachable block (ram,0x00014db8666b) */
/* WARNING: Removing unreachable block (ram,0x00014db8663d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14db8649c(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong *puVar2;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar5;
  ulonglong uStack_8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + (in_RAX ^ 0x3a2bc9fb));
  lVar3 = *(ulonglong *)(unaff_RDI + -0xa0) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0xa0) & param_1) * -2;
  uStack_8 = uVar1;
  FUN_15639604b();
  uStack_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  puVar2 = &uStack_8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar2 = (ulonglong *)register0x00000020;
  }
  puVar2 = (ulonglong *)((longlong)puVar2 + param_4 + -0xc9921bb);
  uVar5 = *puVar2;
  uVar4 = uVar5 + 0x77274be4;
  *puVar2 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar5,-0x77274be4) * 0x800 |
            (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
            (ulonglong)((longlong)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
            (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)(uVar5 < 0xffffffff88d8b41c) | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  uVar5 = *puVar2;
  *puVar2 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *puVar2;
  *puVar2 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *puVar2;
  *puVar2 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *puVar2;
  *puVar2 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  puVar2[-1] = 0x14db865a5;
  FUN_1622ee944();
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 + 2;
  *puVar2 = -*puVar2;
  *puVar2 = *puVar2 - ~uVar4;
  if (-1 < (longlong)
           -(~param_1 | *(ulonglong *)(lVar3 + -0x50) |
            0xffffffffffffffff - *(ulonglong *)(lVar3 + -0x50) | param_1)) {
    FUN_14df10181();
    return;
  }
  *puVar2 = *(ulonglong *)(lVar3 + -0x30);
  (*(code *)0x15b6c8f6c)
            (uVar1 & 0xffff,~((~param_1 | *puVar2) & (~*puVar2 | param_1)),0x5742ee84,
             *(undefined8 *)(lVar3 + -0x60));
  return;
}


