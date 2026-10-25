// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dc66eb0 FUN_14dc66eb0 body=82 status=ok
// SIG undefined FUN_14dc66eb0(void)

undefined8 FUN_14dc66eb0(void)

{
  ushort *in_RAX;
  ushort in_R10W;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  longlong local_res18;
  
  *in_RAX = *in_RAX | ~in_R10W;
  *in_RAX = ~*in_RAX;
  syscall();
  *(undefined8 *)(local_res18 + -8) = 0x14dc66ecd;
  *(undefined8 *)(local_res18 + -0x10) = 0x14dc66ecd;
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
  *(undefined8 *)(local_res18 + -8) = 0x65468e;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(code **)(local_res18 + -0x10) = FUN_165c7153c;
  return unaff_retaddr;
}



// FUNCTION 14dc67058 FUN_14dc67058 body=133 status=ok
// SIG undefined FUN_14dc67058(void)

void FUN_14dc67058(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x15b3b46c8)(param_1,param_2);
  return;
}



// FUNCTION 14dc670e4 FUN_14dc670e4 body=147 status=ok
// SIG undefined FUN_14dc670e4(void)

void FUN_14dc670e4(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x38);
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP;
  FUN_165f4c373(~((uVar1 - (uVar2 | uVar1)) + uVar2));
  return;
}



// FUNCTION 14dc672b9 FUN_14dc672b9 body=266 status=ok
// SIG undefined FUN_14dc672b9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc67337) */
/* WARNING: Removing unreachable block (ram,0x00014dc6733d) */

void FUN_14dc672b9(void)

{
  FUN_156b7c2fe();
  return;
}



// FUNCTION 14dc67343 FUN_14dc67343 body=338 status=ok
// SIG undefined FUN_14dc67343(void)

void FUN_14dc67343(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_162f67ac0(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc6749e FUN_14dc6749e body=454 status=ok
// SIG undefined FUN_14dc6749e(void)

/* WARNING: Removing unreachable block (ram,0x000161137311) */
/* WARNING: Removing unreachable block (ram,0x000161137317) */
/* WARNING: Removing unreachable block (ram,0x00015b468193) */
/* WARNING: Removing unreachable block (ram,0x00015b468199) */
/* WARNING: Removing unreachable block (ram,0x00015b46819e) */
/* WARNING: Removing unreachable block (ram,0x00014dc675e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc675ef) */
/* WARNING: Removing unreachable block (ram,0x00014dc6753f) */
/* WARNING: Removing unreachable block (ram,0x00014dc67550) */
/* WARNING: Removing unreachable block (ram,0x00014dc675be) */
/* WARNING: Removing unreachable block (ram,0x00014dc675c1) */
/* WARNING: Removing unreachable block (ram,0x00015b468108) */
/* WARNING: Removing unreachable block (ram,0x0001669bc393) */
/* WARNING: Removing unreachable block (ram,0x00014dc6754b) */

void FUN_14dc6749e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  longlong unaff_R15;
  ulonglong local_res18;
  
  uVar1 = *(ulonglong *)(unaff_RDI + unaff_R15);
  lVar2 = param_5 + param_1 + (param_5 & param_1) * -2;
  *(undefined8 *)(lVar2 + -8) = param_4;
  *(ulonglong *)(lVar2 + -0x10) = local_res18 ^ param_1;
  *(undefined8 *)(lVar2 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x18) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -8) = 0;
  *(longlong *)(lVar2 + -8) = *(longlong *)(lVar2 + -8) + 0x156e3c6a9;
  *(ulonglong *)(lVar2 + -0x18) = uVar1 ^ param_1;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RBP;
  *(undefined8 *)(lVar2 + -0x20) = unaff_RBP;
  *(undefined8 *)(lVar2 + -0x28) = unaff_RBP;
  *(code **)(lVar2 + -0x18) = FUN_162bd1b0f;
  *(undefined1 **)(lVar2 + -0x20) = &LAB_156e3c680;
  return;
}



// FUNCTION 14dc6767a FUN_14dc6767a body=195 status=ok
// SIG undefined FUN_14dc6767a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc677a2) */
/* WARNING: Removing unreachable block (ram,0x00014dc677ad) */
/* WARNING: Removing unreachable block (ram,0x00014dc677a8) */

void FUN_14dc6767a(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 in_register_00000004;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R12;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ushort local_res20;
  uint6 uStackX_22;
  
  lVar6 = ((param_1 - 1) - ~param_4) + (param_5 & param_1) * -2;
  uVar3 = rdtsc();
  lVar5 = CONCAT44((int)((ulonglong)param_2 >> 0x20),(int)((ulonglong)uVar3 >> 0x20));
  *(undefined8 *)(lVar6 + -8) = param_3;
  *(undefined8 *)(lVar6 + -0x10) = param_3;
  *(ulonglong *)(lVar6 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined4 *)(lVar6 + -0x20) = 0x5b4f2973;
  *(undefined4 *)(lVar6 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(lVar6 + -0x20);
  uVar7 = *(ulonglong *)(lVar6 + -0x18);
  *(ulonglong *)(lVar6 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar6 + -0x20) = in_R11;
  *(ulonglong *)(lVar6 + -0x28) = CONCAT44(in_register_00000004,(int)uVar3);
  *(undefined4 *)(lVar6 + -0x28) = 0x7b04836b;
  *(undefined8 *)(lVar6 + -0x30) = 0x14dc67718;
  uVar4 = FUN_162857b90(uStackX_18,lVar5,uVar2 ^ 0x4ba404d5,uStackX_10);
  lVar1 = *(longlong *)(unaff_R12 + unaff_RSI);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x48);
  *(ulonglong *)(lVar6 + -0x30) = ~uVar2;
  uVar7 = *(ulonglong *)(lVar6 + -0x30);
  *(ulonglong *)(lVar6 + -0x30) = -(lVar5 - lVar1) ^ uVar4;
  *(ulonglong *)(lVar6 + -0x30) =
       -1 - ((~uVar4 | uVar2) & ((~(~uVar7 | ~uVar4) ^ 0xffffffffffffffff) + uVar4) - uVar2);
  *(longlong *)(lVar6 + -0x30) = unaff_R12;
  FUN_1624a7b09();
  return;
}



// FUNCTION 14dc6780f FUN_14dc6780f body=195 status=ok
// SIG undefined FUN_14dc6780f(void)

void FUN_14dc6780f(void)

{
  return;
}



// FUNCTION 14dc678d3 FUN_14dc678d3 body=292 status=ok
// SIG undefined FUN_14dc678d3(void)

/* WARNING: Removing unreachable block (ram,0x00014dc67977) */

undefined8 FUN_14dc678d3(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -8);
}



// FUNCTION 14dc67a14 FUN_14dc67a14 body=237 status=ok
// SIG undefined FUN_14dc67a14(void)

void FUN_14dc67a14(ulonglong param_1)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  uVar5 = ~((~unaff_RBX | param_1) & (~param_1 + unaff_RBX) - (~param_1 & unaff_RBX));
  uVar2 = ~(local_res18 & unaff_RBX) & (local_res18 | unaff_RBX);
                    /* WARNING: Read-only address (ram,0x00014d7bcbbf) is written */
  LOCK();
  if ((char)in_RAX == '\0') {
    uRam000000014d7bcbbf = (undefined1)uVar5;
  }
  else {
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  UNLOCK();
  *(ulonglong *)(uVar2 - 8) = in_RAX;
  *(ulonglong *)(uVar2 - 0x10) = in_RAX;
  *(ulonglong *)(uVar2 - 0x18) = in_RAX;
  *(undefined4 *)(uVar2 - 0x18) = 0x71f2eb9;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  *(undefined8 *)(uVar2 - 0x20) = 0x14dc67a94;
  FUN_157136c18(uVar5,unaff_retaddr);
  puVar1 = (ushort *)(uVar2 - 8);
  *puVar1 = ~*puVar1;
  *(undefined8 *)(uVar2 - 0x20) = in_R10;
  *(ulonglong *)(uVar2 - 0x28) = CONCAT62((int6)((ulonglong)in_R10 >> 0x10),*puVar1 + 0x100);
  *puVar1 = ~*puVar1;
  uVar3 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar3 & 0xfeff) - 0x101) - *puVar1;
  *puVar1 = *puVar1 ^ 0xffff;
  uVar4 = *(undefined8 *)(uVar2 - 0x28);
  *(undefined8 *)(uVar2 - 0x28) = unaff_R15;
  *puVar1 = (short)uVar4 - *puVar1;
  *puVar1 = ~*puVar1;
  FUN_1651f4215();
  return;
}



// FUNCTION 14dc67b91 FUN_14dc67b91 body=65 status=ok
// SIG undefined FUN_14dc67b91(void)

void FUN_14dc67b91(void)

{
  return;
}



// FUNCTION 14dc67bd2 FUN_14dc67bd2 body=401 status=ok
// SIG undefined FUN_14dc67bd2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc67c47) */
/* WARNING: Removing unreachable block (ram,0x00014dc67cab) */
/* WARNING: Removing unreachable block (ram,0x00014dc67cae) */

undefined8 FUN_14dc67bd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RSI;
  
  if (unaff_RSI == 0x13075d) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI < 0x13075e) {
    uVar1 = FUN_1629f7f7e();
    return uVar1;
  }
  if (unaff_RSI == 0x13075e) {
    uVar1 = FUN_16131bb16(param_1,param_2,param_3);
    return uVar1;
  }
  if (unaff_RSI != 0x13075f) {
    if (unaff_RSI == 0x130760) {
      uVar1 = FUN_16131bb16(param_1,param_2,param_3);
      return uVar1;
    }
    if (unaff_RSI != 0x130761) {
      return in_RAX;
    }
    return in_RAX;
  }
  uVar1 = FUN_160b724ad();
  return uVar1;
}



// FUNCTION 14dc67eb2 FUN_14dc67eb2 body=164 status=ok
// SIG undefined FUN_14dc67eb2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc67ece) */

undefined8 FUN_14dc67eb2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc67f57 FUN_14dc67f57 body=148 status=ok
// SIG undefined FUN_14dc67f57(void)

/* WARNING: Removing unreachable block (ram,0x00014dc68090) */
/* WARNING: Removing unreachable block (ram,0x000164b88cbf) */

undefined8 FUN_14dc67f57(undefined8 param_1)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  undefined8 in_stack_00000008;
  longlong local_res18 [2];
  longlong lStack0000000000000028;
  
  lStack0000000000000028 =
       unaff_R13 - *(longlong *)((longlong)local_res18 + (unaff_R15 - (unaff_retaddr ^ 0x314b279f)))
  ;
  local_res18[0] = in_RAX;
  FUN_1664a95ad(param_1,in_stack_00000008);
  if (-1 < (longlong)unaff_R14) {
    FUN_162ae7759(unaff_R14,0x18266595,
                  *(ulonglong *)(unaff_RDI + -0x70) + unaff_R14 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & unaff_R14) * -2,
                  *(ulonglong *)(unaff_RDI + -0x60) ^ unaff_R14);
    return local_res18[0];
  }
  uVar1 = thunk_FUN_164b88c2d();
  return uVar1;
}



// FUNCTION 14dc67fee FUN_14dc67fee body=167 status=ok
// SIG undefined FUN_14dc67fee(void)

/* WARNING: Removing unreachable block (ram,0x00014dc68090) */
/* WARNING: Removing unreachable block (ram,0x000164b88cbf) */

undefined8 FUN_14dc67fee(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong local_res8;
  undefined8 uStackX_18;
  
  if (-1 < (longlong)local_res8) {
    FUN_162ae7759(local_res8,0x18266595,
                  *(ulonglong *)(unaff_RDI + -0x70) + local_res8 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & local_res8) * -2,
                  *(ulonglong *)(unaff_RDI + -0x60) ^ local_res8);
    return uStackX_18;
  }
  uVar1 = thunk_FUN_164b88c2d();
  return uVar1;
}



// FUNCTION 14dc68096 FUN_14dc68096 body=279 status=ok
// SIG undefined FUN_14dc68096(void)

int FUN_14dc68096(uint param_1)

{
  uint in_R10D;
  
  FUN_166c776f2();
  return in_R10D + param_1 + (in_R10D & param_1) * -2;
}



// FUNCTION 14dc6823b FUN_14dc6823b body=142 status=ok
// SIG undefined FUN_14dc6823b(void)

/* WARNING: Removing unreachable block (ram,0x0001662f4d33) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d39) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d3e) */
/* WARNING: Removing unreachable block (ram,0x000164a7af51) */
/* WARNING: Removing unreachable block (ram,0x000164a7af57) */
/* WARNING: Removing unreachable block (ram,0x000164a7af5c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6831e) */
/* WARNING: Removing unreachable block (ram,0x00014dc682ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc68319) */
/* WARNING: Removing unreachable block (ram,0x00014dc68321) */
/* WARNING: Removing unreachable block (ram,0x00014dc68363) */
/* WARNING: Removing unreachable block (ram,0x00014dc68368) */
/* WARNING: Removing unreachable block (ram,0x000164a7ae32) */
/* WARNING: Removing unreachable block (ram,0x000164a7aec0) */
/* WARNING: Removing unreachable block (ram,0x000164a7aec6) */
/* WARNING: Removing unreachable block (ram,0x000166c0ccf0) */
/* WARNING: Removing unreachable block (ram,0x00014dc6836e) */

void FUN_14dc6823b(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x38) + param_1 +
      (*(ulonglong *)(unaff_RDI + -0x38) & param_1) * -2 == 0) {
    uVar1 = *(ulonglong *)(unaff_RDI + -0x40);
    FUN_14d985708(param_1,FUN_14d985708,
                  -1 - ((~param_1 | uVar1) & (~(~uVar1 & param_1) + param_1) - uVar1),
                  ~param_1 | *(ulonglong *)(unaff_RDI + -0x50));
    return;
  }
  FUN_1656bcfe6();
  return;
}



// FUNCTION 14dc682ca FUN_14dc682ca body=168 status=ok
// SIG undefined FUN_14dc682ca(void)

/* WARNING: Removing unreachable block (ram,0x0001662f4d33) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d39) */
/* WARNING: Removing unreachable block (ram,0x0001662f4d3e) */
/* WARNING: Removing unreachable block (ram,0x000164a7af51) */
/* WARNING: Removing unreachable block (ram,0x000164a7af57) */
/* WARNING: Removing unreachable block (ram,0x000164a7af5c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6831e) */
/* WARNING: Removing unreachable block (ram,0x00014dc6836e) */
/* WARNING: Removing unreachable block (ram,0x000164a7aec6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc682ca(void)

{
  ulonglong unaff_RBP;
  longlong in_stack_00000008;
  
  if (*(longlong *)(in_stack_00000008 + -0x38) == 0) {
    (*(code *)&LAB_165adfd57)
              (unaff_RBP,
               (~*(ulonglong *)(in_stack_00000008 + -0x58) | ~unaff_RBP) &
               (*(ulonglong *)(in_stack_00000008 + -0x58) | unaff_RBP));
    return;
  }
  FUN_164a7ae32();
  return;
}



// FUNCTION 14dc68374 FUN_14dc68374 body=80 status=ok
// SIG undefined FUN_14dc68374(void)

longlong FUN_14dc68374(ulonglong param_1)

{
  ulonglong *unaff_RSI;
  
  return ((param_1 - 1) - ~*unaff_RSI) + (*unaff_RSI & param_1) * -2;
}



// FUNCTION 14dc683e3 FUN_14dc683e3 body=109 status=ok
// SIG undefined FUN_14dc683e3(void)

void FUN_14dc683e3(void)

{
  return;
}



// FUNCTION 14dc68591 thunk_FUN_14dc68597 body=5 status=ok
// SIG undefined thunk_FUN_14dc68597(void)

void thunk_FUN_14dc68597(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = param_1 ^ unaff_RSI ^ *(ulonglong *)(unaff_R13 + -0x78);
  FUN_165ec7c01((~uVar1 | ~unaff_R15) & ~(~uVar1 & ~unaff_R15),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 |
                 ~(*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dc68597 FUN_14dc68597 body=138 status=ok
// SIG undefined FUN_14dc68597(void)

void FUN_14dc68597(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = param_1 ^ unaff_RSI ^ *(ulonglong *)(unaff_R13 + -0x78);
  FUN_165ec7c01((~uVar1 | ~unaff_R15) & ~(~uVar1 & ~unaff_R15),
                ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 |
                 ~(*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14dc686a2 FUN_14dc686a2 body=257 status=ok
// SIG undefined FUN_14dc686a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6872c) */

void FUN_14dc686a2(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           ((~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x68)) + *(ulonglong *)(unaff_R13 + -0x68))
           - unaff_R15)) {
    FUN_16139622f(param_1,param_2);
    return;
  }
  FUN_160fc6f4f();
  return;
}



// FUNCTION 14dc68c61 FUN_14dc68c61 body=132 status=ok
// SIG undefined FUN_14dc68c61(void)

void FUN_14dc68c61(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16561ee4b(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dc68ce7 FUN_14dc68ce7 body=260 status=ok
// SIG undefined FUN_14dc68ce7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc68dc2) */

void FUN_14dc68ce7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  ushort in_AX;
  longlong lVar4;
  ushort *unaff_R12;
  
  uVar2 = *unaff_R12;
  *unaff_R12 = 0;
  *unaff_R12 = *unaff_R12 ^ (-0x101 - (in_AX | 0xfeff)) + uVar2;
  *(undefined8 *)(param_6 + -8) = param_1;
  plVar1 = (longlong *)(param_6 + -0x10);
  *plVar1 = (longlong)&LAB_15b15dea2;
  *plVar1 = *plVar1 + -0x4abf248;
  lVar3 = *plVar1;
  *(undefined8 *)(param_6 + -0x10) = param_3;
  *(undefined8 *)(param_6 + -0x18) = param_3;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  lVar4 = *(longlong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -8) = 0;
  *(longlong *)(param_6 + -8) = *(longlong *)(param_6 + -8) + lVar3;
  *(undefined8 *)(param_6 + -0x18) = 0x14dc68d88;
  FUN_15669ec2b();
  *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(lVar4 + -0x40);
  *(undefined **)(param_6 + -0x18) = &DAT_14dc68df0;
  return;
}



// FUNCTION 14dc68e2a FUN_14dc68e2a body=160 status=ok
// SIG undefined FUN_14dc68e2a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc68eb3) */
/* WARNING: Removing unreachable block (ram,0x00014dc68ebe) */
/* WARNING: Removing unreachable block (ram,0x00014dc68eb9) */

void FUN_14dc68e2a(void)

{
  return;
}



// FUNCTION 14dc68f88 FUN_14dc68f88 body=419 status=ok
// SIG undefined FUN_14dc68f88(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6902f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc68f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint in_EAX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong uVar1;
  undefined8 local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  *(ulonglong *)(unaff_R13 + 0x10) = ~unaff_RBP;
  uVar1 = (ulonglong)
          (in_EAX >> 0x18 | (in_EAX & 0xff0000) >> 8 | (in_EAX & 0xff00) << 8 | in_EAX << 0x18);
  *(ulonglong *)(local_res20 + -8) = uVar1;
  *(ulonglong *)(local_res20 + -0x10) = uVar1;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = in_R10;
  uVar1 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x20) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -8) = 0x129216c;
  FUN_165c7153c(local_res10,param_2,param_3);
  return;
}



// FUNCTION 14dc690cd FUN_14dc690cd body=157 status=ok
// SIG undefined FUN_14dc690cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dc691fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc69204) */
/* WARNING: Removing unreachable block (ram,0x00014dea96d6) */
/* WARNING: Removing unreachable block (ram,0x00014dc6916a) */
/* WARNING: Removing unreachable block (ram,0x00014dc691f9) */
/* WARNING: Removing unreachable block (ram,0x00014dc69263) */
/* WARNING: Removing unreachable block (ram,0x00014dc69265) */

void FUN_14dc690cd(void)

{
  undefined8 uStackX_8;
  
  if (uStackX_8 != 0) {
    FUN_1612b3cbd();
    return;
  }
  return;
}



// FUNCTION 14dc6916a FUN_14dc6916a body=281 status=ok
// SIG undefined FUN_14dc6916a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc691fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc69204) */
/* WARNING: Removing unreachable block (ram,0x00014dea96d6) */
/* WARNING: Removing unreachable block (ram,0x00014dc69263) */
/* WARNING: Removing unreachable block (ram,0x00014dc69265) */

void FUN_14dc6916a(void)

{
  FUN_14dea96d6();
  return;
}



// FUNCTION 14dc693c8 FUN_14dc693c8 body=153 status=ok
// SIG undefined FUN_14dc693c8(void)

void FUN_14dc693c8(undefined1 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 uStackX_18;
  
  FUN_166a22c17(param_1,-*(longlong *)(unaff_RDI + -0x68));
  FUN_1649a36e3();
  uVar1 = *(ulonglong *)(param_4 + in_R11);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = (~(uVar1 & uStackX_18) + uStackX_18) - *(longlong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  return;
}



// FUNCTION 14dc69461 FUN_14dc69461 body=250 status=ok
// SIG undefined FUN_14dc69461(void)

void FUN_14dc69461(undefined1 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong in_R11;
  undefined8 local_res8;
  undefined8 local_res10;
  
  FUN_1649a36e3(param_1,local_res8,param_3);
  uVar1 = *(ulonglong *)(param_4 + in_R11);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = (~(uVar1 & local_res10) + local_res10) - *(longlong *)(param_4 + 8);
  *(ulonglong *)(param_4 + 8) = ~*(ulonglong *)(param_4 + 8);
  return;
}



// FUNCTION 14dc69591 FUN_14dc69591 body=335 status=ok
// SIG undefined FUN_14dc69591(void)

/* WARNING: Removing unreachable block (ram,0x00014dc696b4) */
/* WARNING: Removing unreachable block (ram,0x00014dc696bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc696ba) */
/* WARNING: Removing unreachable block (ram,0x0001666d8363) */

void FUN_14dc69591(undefined8 param_1)

{
  ulonglong unaff_R13;
  
  FUN_166b5b92f(param_1);
  if (0x160f < unaff_R13) {
    FUN_16598dcfe();
    return;
  }
  FUN_1610f28c3();
  return;
}



// FUNCTION 14dc69756 FUN_14dc69756 body=169 status=ok
// SIG undefined FUN_14dc69756(void)

void FUN_14dc69756(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  ulonglong unaff_R13;
  
  (*(code *)0x165c3118f)
            (param_1,*(undefined8 *)(unaff_RDI + -0x50),~(param_3 & (unaff_R13 | param_1)));
  return;
}



// FUNCTION 14dc698a2 FUN_14dc698a2 body=126 status=ok
// SIG undefined FUN_14dc698a2(void)

void FUN_14dc698a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166cb6615(FUN_166cb6615,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc69b06 FUN_14dc69b06 body=158 status=ok
// SIG undefined FUN_14dc69b06(void)

ulonglong FUN_14dc69b06(void)

{
  ulonglong unaff_R15;
  
  return ~unaff_R15;
}



// FUNCTION 14dc69cd3 FUN_14dc69cd3 body=45 status=ok
// SIG undefined FUN_14dc69cd3(void)

undefined8 FUN_14dc69cd3(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc69e9d FUN_14dc69e9d body=55 status=ok
// SIG undefined FUN_14dc69e9d(void)

/* WARNING: Instruction at (ram,0x00014dc69ed4) overlaps instruction at (ram,0x00014dc69ed0)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Heritage AFTER dead removal. Example location: RDX : 0x00014dc69f35 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_14dc69e9d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R10;
  
  if (in_R10 == 0x2fc56b1d) {
    (*(code *)0x16695dfc1)(0x2804c734,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dc69fde FUN_14dc69fde body=128 status=ok
// SIG undefined FUN_14dc69fde(void)

void FUN_14dc69fde(void)

{
  return;
}



// FUNCTION 14dc6a071 FUN_14dc6a071 body=143 status=ok
// SIG undefined FUN_14dc6a071(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6a0f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc6a0fb) */
/* WARNING: Removing unreachable block (ram,0x00014dc6a100) */

void FUN_14dc6a071(void)

{
  return;
}



// FUNCTION 14dc6a100 FUN_14dc6a100 body=185 status=ok
// SIG undefined FUN_14dc6a100(void)

void FUN_14dc6a100(void)

{
  FUN_15b1cc873();
  return;
}



// FUNCTION 14dc6a3a2 FUN_14dc6a3a2 body=305 status=ok
// SIG undefined FUN_14dc6a3a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6a436) */
/* WARNING: Removing unreachable block (ram,0x00014dc6a43c) */

void FUN_14dc6a3a2(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 uStackX_20;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  FUN_14e19f358(*(ulonglong *)(unaff_R12 + -0x28) | in_RAX,in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                -1 - ((~in_RAX + uVar1) - (~in_RAX & uVar1) & (0xffffffffffffffff - uVar1 | in_RAX))
               );
  FUN_1564dc3aa(uStackX_20);
  return;
}



// FUNCTION 14dc6a674 FUN_14dc6a674 body=6 status=ok
// SIG undefined FUN_14dc6a674(void)

void FUN_14dc6a674(void)

{
  undefined8 unaff_retaddr;
  
  FUN_15b74836e(unaff_retaddr);
  return;
}



// FUNCTION 14dc6a67a FUN_14dc6a67a body=115 status=ok
// SIG undefined FUN_14dc6a67a(void)

void FUN_14dc6a67a(undefined8 param_1)

{
  FUN_14dcc7580(param_1,0);
  return;
}



// FUNCTION 14dc6a8c9 FUN_14dc6a8c9 body=299 status=ok
// SIG undefined FUN_14dc6a8c9(void)

undefined8 FUN_14dc6a8c9(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  int unaff_ESI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  puVar4 = &LAB_14dfafba0;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x18) = in_R10;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x28) = 0x14dc6a963;
  uVar3 = FUN_14dfafb3a(param_1);
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(ulonglong *)(local_res18 + -0x18) = (ulonglong)(uint)(unaff_ESI - unaff_EBP);
  plVar1 = (longlong *)(local_res18 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (ulonglong)(uint)(unaff_ESI - unaff_EBP);
  *plVar1 = -*plVar1;
  *(undefined8 *)(local_res18 + -0x28) = uVar3;
  *(undefined8 *)(local_res18 + -0x30) = 0xffffffffffffff90;
  *(undefined4 *)(local_res18 + -0x30) = 0;
  *(undefined4 *)(local_res18 + -0x2c) = 0;
  *(undefined1 **)(local_res18 + -0x30) = puVar4;
  uVar3 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x30) = uVar2;
  *(undefined1 **)(local_res18 + -0x38) = &LAB_156ce8694;
  return uVar3;
}



// FUNCTION 14dc6a9f7 FUN_14dc6a9f7 body=131 status=ok
// SIG undefined FUN_14dc6a9f7(void)

void FUN_14dc6a9f7(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_14d8f9a36(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                ~(param_3 & param_1) & ~(unaff_RBX & unaff_RSI));
  return;
}



// FUNCTION 14dc6adde FUN_14dc6adde body=167 status=ok
// SIG undefined FUN_14dc6adde(void)

void FUN_14dc6adde(ulonglong param_1)

{
  ulonglong *in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  *in_R11 = *in_R11 - 1;
  *in_R11 = *in_R11 | unaff_R15;
  *in_R11 = (~*in_R11 | param_1) + *in_R11 + 1 ^ 0xffffffffffffffff;
  in_stack_00000030 = in_stack_00000030 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000030 - 8) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 - 0x10) = unaff_R13;
  *(undefined8 *)(in_stack_00000030 - 0x18) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 - 0x20) = unaff_R12;
  *(undefined8 *)(in_stack_00000030 - 0x28) = unaff_R12;
  *(code **)(in_stack_00000030 - 0x18) = FUN_14dc6ae85;
  *(undefined8 *)(in_stack_00000030 - 0x20) = 0x162f29910;
  return;
}



// FUNCTION 14dc6ae85 FUN_14dc6ae85 body=150 status=ok
// SIG undefined FUN_14dc6ae85(void)

void FUN_14dc6ae85(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15647f924(FUN_15647f924,-*(ulonglong *)(unaff_R13 + -0x88),
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) << 1,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dc6af1e FUN_14dc6af1e body=56 status=ok
// SIG undefined FUN_14dc6af1e(void)

undefined8 FUN_14dc6af1e(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dc6b0e5 FUN_14dc6b0e5 body=203 status=ok
// SIG undefined FUN_14dc6b0e5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6b16a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc6b0e5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong in_RAX;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_RSI;
  char cVar13;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong unaff_R13;
  undefined8 unaff_R15;
  ulonglong local_res8;
  undefined8 auStack_28 [2];
  ulonglong local_18;
  undefined8 uStack_10;
  ulonglong uStack_8;
  
  uVar1 = local_res8 & 0x4000;
  uVar2 = local_res8 & 0x400;
  uVar3 = local_res8 & 0x200;
  uVar4 = local_res8 & 0x100;
  uVar5 = local_res8 & 0x10;
  uVar6 = local_res8 & 0x200000;
  uVar7 = local_res8 & 0x40000;
  local_res8 = -(~in_R11 + 1);
  lVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),0xe0);
  uStack_10 = param_3;
  cVar13 = DAT_14d7be948 + 0x20;
  uVar1 = (ulonglong)(uVar1 != 0);
  uVar2 = (ulonglong)(uVar2 != 0);
  uVar3 = (ulonglong)(uVar3 != 0);
  uVar4 = (ulonglong)(uVar4 != 0);
  uVar5 = (ulonglong)(uVar5 != 0);
  uVar8 = (ulonglong)((POPCOUNT(cVar13) & 1U) == 0);
  uVar9 = (ulonglong)(DAT_14d7be948 < 0xe0);
  uVar6 = (ulonglong)(uVar6 != 0);
  uVar7 = (ulonglong)(uVar7 != 0);
  local_18 = uVar1 * 0x4000 | (ulonglong)SBORROW1(DAT_14d7be948,-0x20) * 0x800 | uVar2 * 0x400 |
             uVar3 * 0x200 | uVar4 * 0x100 | (ulonglong)(cVar13 < '\0') * 0x80 |
             (ulonglong)(cVar13 == '\0') * 0x40 | uVar5 * 0x10 | uVar8 * 4 | uVar9 |
             uVar6 * 0x200000 | uVar7 * 0x40000;
  if (uVar9 == 0) {
    uVar11 = FUN_1564acd6c();
    return uVar11;
  }
  local_18 = (ulonglong)(uVar1 != 0) * 0x4000 |
             (ulonglong)((ulonglong)SBORROW1(DAT_14d7be948,-0x20) != 0) * 0x800 |
             (ulonglong)(uVar2 != 0) * 0x400 | (ulonglong)(uVar3 != 0) * 0x200 |
             (ulonglong)(uVar4 != 0) * 0x100 | (ulonglong)((ulonglong)(cVar13 < '\0') != 0) * 0x80 |
             (ulonglong)((ulonglong)(cVar13 == '\0') != 0) * 0x40 | (ulonglong)(uVar5 != 0) * 0x10 |
             (ulonglong)(uVar8 != 0) * 4 | (ulonglong)(uVar9 != 0) |
             (ulonglong)(uVar6 != 0) * 0x200000 | (ulonglong)(uVar7 != 0) * 0x40000;
  if (((ulonglong)(uVar9 != 0) == 0) && (((uint)local_18 >> 6 & 1) == 0)) {
    *(ulonglong *)((longlong)&uStack_10 + lVar10) =
         ~((~in_RAX & ~param_1 | in_RAX) & (~in_RAX | param_1));
    *(undefined8 *)((longlong)&uStack_10 + lVar10) = *(undefined8 *)((longlong)&uStack_10 + lVar10);
    *(undefined4 *)((longlong)&uStack_10 + lVar10) = 0x50076f6;
    *(undefined4 *)((longlong)&uStack_10 + lVar10 + 4) = 0;
    *(code **)((longlong)&uStack_10 + lVar10) = FUN_14de3bd4c;
    uVar12 = FUN_1668637a8(param_1,0x496dc4a8);
    uVar11 = *(undefined8 *)((longlong)&stack0x00000008 + lVar10);
    *(undefined8 *)((longlong)&stack0x00000008 + lVar10) = uVar11;
    *(undefined8 *)(&stack0x00000000 + lVar10) = uVar11;
    *(undefined8 *)((longlong)&uStack_8 + lVar10) = 0x4c6db25e;
    *(undefined8 *)((longlong)&uStack_10 + lVar10) = uVar12;
    *(undefined4 *)((longlong)&uStack_10 + lVar10) = 0x95c91f89;
    *(undefined4 *)((longlong)&uStack_10 + lVar10 + 4) = 0xffffffff;
    uVar1 = *(ulonglong *)((longlong)&uStack_10 + lVar10);
    *(ulonglong *)((longlong)&uStack_10 + lVar10) = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),0xe0)
    ;
    *(undefined8 *)((longlong)&local_18 + lVar10) =
         *(undefined8 *)(unaff_R13 + (uVar1 ^ 0x6a36e019));
    *(undefined8 *)((longlong)&stack0x00000008 + lVar10) =
         *(undefined8 *)((longlong)&local_18 + lVar10);
    *(undefined8 *)(&stack0x00000000 + lVar10) = *(undefined8 *)((longlong)&uStack_10 + lVar10);
    *(undefined8 *)((longlong)&uStack_8 + lVar10) = *(undefined8 *)((longlong)&uStack_10 + lVar10);
    *(undefined8 *)(&stack0x00000000 + lVar10) = *(undefined8 *)(unaff_R13 + -8);
    *(ulonglong *)((longlong)&uStack_8 + lVar10) = ~(~in_R10 | 0xfffffffe9979c857);
    *(ulonglong *)((longlong)&uStack_10 + lVar10) = ~(~in_R10 | 0xfffffffe9979c857);
    *(undefined8 *)((longlong)&local_18 + lVar10) = uVar12;
    *(undefined8 *)((longlong)auStack_28 + lVar10 + 8) = uVar12;
    *(undefined8 *)((longlong)auStack_28 + lVar10) = uVar12;
    *(code **)((longlong)&local_18 + lVar10) = FUN_14de3bdf9;
    *(undefined **)((longlong)auStack_28 + lVar10 + 8) = &DAT_15b6b4746;
    return *(undefined8 *)((longlong)auStack_28 + lVar10);
  }
  uVar11 = FUN_1564acd6c();
  return uVar11;
}



// FUNCTION 14dc6b33b FUN_14dc6b33b body=188 status=ok
// SIG undefined FUN_14dc6b33b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6b3f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6b474) */
/* WARNING: Removing unreachable block (ram,0x00014dc6b3ec) */

void FUN_14dc6b33b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_156e07c4b)(param_1,&stack0xffffffffffffffe8,param_3,param_4);
  return;
}



// FUNCTION 14dc6b3f7 FUN_14dc6b3f7 body=123 status=ok
// SIG undefined FUN_14dc6b3f7(void)

void FUN_14dc6b3f7(void)

{
  FUN_166002936();
  return;
}



// FUNCTION 14dc6b4a5 FUN_14dc6b4a5 body=179 status=ok
// SIG undefined FUN_14dc6b4a5(void)

undefined8 FUN_14dc6b4a5(undefined8 param_1,longlong param_2)

{
  return *(undefined8 *)(param_2 + -0x28);
}



// FUNCTION 14dc6b55e FUN_14dc6b55e body=130 status=ok
// SIG undefined FUN_14dc6b55e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6b5db) */

void FUN_14dc6b55e(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong in_stack_00000008;
  ushort local_res10;
  ulonglong uStackX_18;
  ulonglong in_stack_00000020;
  
  local_res10 = local_res10 + (ushort)in_stack_00000008 +
                (local_res10 & (ushort)in_stack_00000008) * -2;
  uStackX_18 = uStackX_18 ^ in_stack_00000008;
  uVar1 = FUN_1612041f6(~((~param_1 | param_1 ^ (ulonglong)&uStackX_18) &
                         (~(param_1 ^ (ulonglong)&uStackX_18) | param_1)),param_2,param_3,param_4,
                        in_stack_00000020 ^ in_stack_00000008);
  FUN_160b4b335(local_res10,local_res10,0x10,param_4 | uVar1);
  return;
}



// FUNCTION 14dc6b5e1 FUN_14dc6b5e1 body=163 status=ok
// SIG undefined FUN_14dc6b5e1(void)

/* WARNING: Removing unreachable block (ram,0x00014dfc34b0) */
/* WARNING: Removing unreachable block (ram,0x00014dc6b685) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dc6b5e1(void)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 local_res18;
  undefined2 uStackX_20;
  
  if (-1 < (longlong)((local_res18 - unaff_R15) + (~unaff_R15 | local_res18) * -2 + -2)) {
    uVar1 = FUN_14dfc3435();
    return uVar1;
  }
  uStackX_20 = ~(uStackX_20 & (ushort)unaff_R15) & (uStackX_20 | (ushort)unaff_R15) ^ 0xffff;
  uStackX_20 = uStackX_20 | 0x100;
  if (uStackX_20 == 0) {
    uVar1 = FUN_16540e13c();
    return uVar1;
  }
  uVar1 = FUN_16540e13c();
  return uVar1;
}



// FUNCTION 14dc6b685 FUN_14dc6b685 body=157 status=ok
// SIG undefined FUN_14dc6b685(void)

undefined8 FUN_14dc6b685(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc6b8fd FUN_14dc6b8fd body=53 status=ok
// SIG undefined FUN_14dc6b8fd(void)

void FUN_14dc6b8fd(void)

{
  return;
}



// FUNCTION 14dc6b985 FUN_14dc6b985 body=29 status=ok
// SIG undefined FUN_14dc6b985(void)

void FUN_14dc6b985(void)

{
  return;
}



// FUNCTION 14dc6ba95 FUN_14dc6ba95 body=105 status=ok
// SIG undefined FUN_14dc6ba95(void)

void FUN_14dc6ba95(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_2;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  *(undefined **)(local_res10 + -8) = &DAT_14dc6bb0f;
  thunk_FUN_15b642ca5(param_1,*(undefined8 *)(local_res10 + -0x10),param_3,
                      *(undefined8 *)(local_res10 + -0x20));
  return;
}



// FUNCTION 14dc6bbbc FUN_14dc6bbbc body=446 status=ok
// SIG undefined FUN_14dc6bbbc(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bfc74) overlaps instruction at (ram,0x00014d7bfc6e)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc6bcf2) */
/* WARNING: Removing unreachable block (ram,0x0001663d4a20) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bc50) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bcda) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bcdd) */
/* WARNING: Removing unreachable block (ram,0x000162193bcf) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bc3f) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bc45) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bce7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bced) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bd7c) */

void FUN_14dc6bbbc(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint in_EAX;
  char cVar4;
  longlong unaff_RBX;
  char *pcVar6;
  char *unaff_RSI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong unaff_R12;
  bool bVar9;
  undefined4 *puVar10;
  char cVar5;
  
  bVar9 = unaff_R12 == 0;
  puVar8 = (undefined4 *)(ulonglong)in_EAX;
  puVar10 = (undefined4 *)&LAB_15b25abe6;
  do {
    param_1 = param_1 + -1;
    if (param_1 == 0 || bVar9) {
      uVar2 = in((short)param_2);
      *puVar8 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (uint *)(unaff_RBX + 0x76 + (longlong)puVar8 * 8);
    *puVar1 = *puVar1 ^ 0x44f92ba3;
    uVar3 = in((short)param_2);
    pcVar6 = unaff_RSI;
    puVar7 = puVar8;
    param_2 = puVar10;
    while( true ) {
      puVar8 = (undefined4 *)((longlong)puVar7 + 1);
      *(undefined1 *)puVar7 = uVar3;
      unaff_RSI = pcVar6 + 1;
      cVar5 = (char)param_1;
      cVar4 = cVar5 + *pcVar6;
      param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4);
      bVar9 = cVar4 == '\0';
      if (bVar9 || SCARRY1(cVar5,*pcVar6) != cVar4 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar10 = puVar8;
      if (!bVar9) break;
      uVar3 = in((short)param_2);
      pcVar6 = unaff_RSI;
      puVar7 = puVar8;
      param_2 = puVar8;
    }
  } while( true );
}



// FUNCTION 14dc6be34 FUN_14dc6be34 body=400 status=ok
// SIG undefined FUN_14dc6be34(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6bf6b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6bf71) */

undefined8 FUN_14dc6be34(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162df1aac();
  return uVar1;
}



// FUNCTION 14dc6c088 FUN_14dc6c088 body=146 status=ok
// SIG undefined FUN_14dc6c088(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6c11c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6c1a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6c1ad) */
/* WARNING: Removing unreachable block (ram,0x000156a416aa) */

undefined8
FUN_14dc6c088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R15;
  undefined8 in_stack_00000010;
  longlong local_res20;
  
  if (local_res20 == unaff_R15) {
    uVar1 = FUN_1567bee50();
    return uVar1;
  }
  uVar1 = FUN_14dac34a2(in_stack_00000010,param_2,FUN_14dac34a2,param_4);
  return uVar1;
}



// FUNCTION 14dc6c11c FUN_14dc6c11c body=199 status=ok
// SIG undefined FUN_14dc6c11c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6c1ad) */

undefined8 FUN_14dc6c11c(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_162f52de5((*(ulonglong *)(unaff_R13 + -0x78) - unaff_R15) +
                        (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) * -2 + -2,
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + unaff_RBX) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + unaff_RBX) & unaff_R15) * -2);
  return uVar1;
}



// FUNCTION 14dc6c354 FUN_14dc6c354 body=137 status=ok
// SIG undefined FUN_14dc6c354(void)

void FUN_14dc6c354(undefined8 param_1,ulonglong *param_2)

{
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  
  *param_2 = ~*param_2;
  *param_2 = *param_2 | unaff_R15;
  *param_2 = ~unaff_R13 | ~*param_2;
  FUN_164b39602(0xff,uStackX_8);
  return;
}



// FUNCTION 14dc6c3dd FUN_14dc6c3dd body=328 status=ok
// SIG undefined FUN_14dc6c3dd(void)

/* WARNING: Instruction at (ram,0x00014dc6c5b6) overlaps instruction at (ram,0x00014dc6c5b5)
    */
/* WARNING: Removing unreachable block (ram,0x00014d98b0bd) */
/* WARNING: Removing unreachable block (ram,0x00014dc6c48c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6c5b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc6c5b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc6c3dd(void)

{
  FUN_14d98b0bd();
  return;
}



// FUNCTION 14dc6c528 FUN_14dc6c528 body=327 status=ok
// SIG undefined FUN_14dc6c528(void)

/* WARNING: Instruction at (ram,0x00014dc6c5b6) overlaps instruction at (ram,0x00014dc6c5b5)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc6c5b5) */

void FUN_14dc6c528(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x160f9ae0d)(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dc6c670 thunk_FUN_14dc6c676 body=5 status=ok
// SIG undefined thunk_FUN_14dc6c676(void)

void thunk_FUN_14dc6c676(void)

{
  return;
}



// FUNCTION 14dc6c676 FUN_14dc6c676 body=75 status=ok
// SIG undefined FUN_14dc6c676(void)

void FUN_14dc6c676(void)

{
  return;
}



// FUNCTION 14dc6c780 FUN_14dc6c780 body=26 status=ok
// SIG undefined FUN_14dc6c780(void)

undefined8 FUN_14dc6c780(void)

{
  undefined8 unaff_RSI;
  ulonglong uStackX_8;
  undefined8 uStackX_10;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + (uStackX_8 ^ 0x700f83c6)) = unaff_RSI;
  return uStackX_10;
}



// FUNCTION 14dc6c8db FUN_14dc6c8db body=281 status=ok
// SIG undefined FUN_14dc6c8db(void)

void FUN_14dc6c8db(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  short *unaff_RBP;
  ulonglong unaff_RSI;
  short unaff_DI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff46e2b80 + param_2);
  uVar2 = *(ulonglong *)(unaff_RSI - 0x28);
  *puVar1 = uVar2;
  uVar3 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_RSI - 0x60);
  uVar4 = *puVar1;
  lVar6 = (-~(ulonglong)unaff_RBP - (~uVar4 + 2)) +
          ((longlong)unaff_RBP + (uVar4 - (uVar4 | (ulonglong)unaff_RBP))) * -2;
  *puVar1 = unaff_RSI;
  puVar1[-1] = 0x14dc6c97b;
  uVar5 = FUN_162bbddfd(uVar2,lVar6,lVar6,uVar3 ^ (ulonglong)unaff_RBP);
  uVar2 = *puVar1;
  *puVar1 = unaff_R14;
  puVar1[-1] = lVar6;
  puVar1[-2] = uVar5;
  uVar5 = puVar1[-1];
  uVar3 = *puVar1;
  *unaff_RBP = unaff_DI + 1;
  lVar6 = puVar1[4];
  *(ulonglong *)(lVar6 + -8) = uVar3;
  *(ulonglong *)(lVar6 + -0x10) = unaff_RSI - 0x7a78;
  *(undefined8 *)(lVar6 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar6 + -0x18) = in_R10;
  FUN_162d0a057(uVar2,uVar5);
  return;
}



// FUNCTION 14dc6c9f6 FUN_14dc6c9f6 body=163 status=ok
// SIG undefined FUN_14dc6c9f6(void)

void FUN_14dc6c9f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14da51813(param_1,&stack0x00000000,param_3,FUN_14da51813);
  return;
}



// FUNCTION 14dc6ccfb FUN_14dc6ccfb body=148 status=ok
// SIG undefined FUN_14dc6ccfb(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc6ccfb(undefined8 param_1,undefined8 param_2)

{
  FUN_161d23491(param_1,param_2);
  return;
}



// FUNCTION 14dc6ce3c FUN_14dc6ce3c body=50 status=ok
// SIG undefined FUN_14dc6ce3c(void)

void FUN_14dc6ce3c(void)

{
  return;
}



// FUNCTION 14dc6cf83 FUN_14dc6cf83 body=15 status=ok
// SIG undefined FUN_14dc6cf83(void)

void FUN_14dc6cf83(void)

{
  return;
}



// FUNCTION 14dc6d157 FUN_14dc6d157 body=151 status=ok
// SIG undefined FUN_14dc6d157(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6d54e) */
/* WARNING: Removing unreachable block (ram,0x0001652d7da7) */
/* WARNING: Removing unreachable block (ram,0x0001652d7db8) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d264) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d26f) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d31b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d321) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d44a) */
/* WARNING: Removing unreachable block (ram,0x000161964a87) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d450) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d548) */
/* WARNING: Removing unreachable block (ram,0x00015660be32) */
/* WARNING: Removing unreachable block (ram,0x0001652d7c8a) */
/* WARNING: Removing unreachable block (ram,0x0001570e7af1) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bae) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bb3) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bb9) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bbe) */
/* WARNING: Removing unreachable block (ram,0x0001652d7dad) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d24b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d26a) */

void FUN_14dc6d157(undefined8 param_1)

{
  FUN_1564d2518();
  FUN_14dd78445(param_1);
  return;
}



// FUNCTION 14dc6d1ee FUN_14dc6d1ee body=128 status=ok
// SIG undefined FUN_14dc6d1ee(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6d54e) */
/* WARNING: Removing unreachable block (ram,0x0001652d7da7) */
/* WARNING: Removing unreachable block (ram,0x0001652d7db8) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d264) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d26f) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d31b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d321) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d44a) */
/* WARNING: Removing unreachable block (ram,0x000161964a87) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d450) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d548) */
/* WARNING: Removing unreachable block (ram,0x00015660be32) */
/* WARNING: Removing unreachable block (ram,0x0001652d7c8a) */
/* WARNING: Removing unreachable block (ram,0x0001570e7af1) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bae) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bb3) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bb9) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bbe) */
/* WARNING: Removing unreachable block (ram,0x0001652d7dad) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d24b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d26a) */

void FUN_14dc6d1ee(undefined8 param_1)

{
  FUN_14dd78445(param_1);
  return;
}



// FUNCTION 14dc6d26f FUN_14dc6d26f body=479 status=ok
// SIG undefined FUN_14dc6d26f(void)

/* WARNING: Removing unreachable block (ram,0x0001652d7da7) */
/* WARNING: Removing unreachable block (ram,0x0001652d7db8) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d31b) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d321) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d44a) */
/* WARNING: Removing unreachable block (ram,0x000161964a87) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d450) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d548) */
/* WARNING: Removing unreachable block (ram,0x00015660be32) */
/* WARNING: Removing unreachable block (ram,0x00014dc6d54e) */
/* WARNING: Removing unreachable block (ram,0x0001652d7dad) */
/* WARNING: Removing unreachable block (ram,0x0001570e7bbe) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc6d26f(void)

{
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  FUN_16296b233();
  if (local_res20 + unaff_R15 < (local_res20 & unaff_R15) << 1) {
    FUN_166d6520a();
    return;
  }
  FUN_166d6520a();
  return;
}



// FUNCTION 14dc6d450 FUN_14dc6d450 body=403 status=ok
// SIG undefined FUN_14dc6d450(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6d54e) */

void FUN_14dc6d450(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 in_AL;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong *unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong uStackX_8;
  undefined8 in_stack_00000010;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | uStackX_8;
  uVar2 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX + ~(param_3 & uVar2);
  param_5 = param_5 ^ uStackX_8;
  uVar9 = ~((~uStackX_8 | param_6) & (~param_6 | uStackX_8));
  LOCK();
  UNLOCK();
  LAB_14d7bdaa1 = in_AL;
  *(undefined8 *)(uVar9 - 8) = param_2;
  *(undefined8 *)(uVar9 - 0x10) = param_2;
  *(ulonglong *)(uVar9 - 0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x80) != 0) * 0x80 | (ulonglong)((param_5 & 0x40) != 0) * 0x40 |
       (ulonglong)((param_5 & 0x10) != 0) * 0x10 | (ulonglong)((param_5 & 4) != 0) * 4 |
       (ulonglong)((param_5 & 1) != 0) | (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  pcVar8 = FUN_156ea7729;
  *(undefined8 *)(uVar9 - 0x20) = 0x14dc6d4ce;
  uVar7 = FUN_156ea7729(local_res20,FUN_156ea7729,uStackX_18);
  uVar2 = *(ulonglong *)(uVar9 - 0x18);
  *(code **)(uVar9 - 0x18) = pcVar8;
  puVar1 = (ulonglong *)(uVar9 - 0x20);
  *puVar1 = in_R10;
  *(undefined8 *)(uVar9 - 0x28) = unaff_R14;
  *(undefined4 *)(uVar9 - 0x30) = 0x68be86c1;
  *(undefined4 *)(uVar9 - 0x2c) = 0;
  uVar4 = *(undefined8 *)(uVar9 - 0x28);
  uVar5 = *puVar1;
  *puVar1 = uVar2;
  *(ulonglong *)(uVar9 - 0x28) = uVar5;
  *(undefined8 *)(uVar9 - 0x30) = in_stack_00000010;
  uVar6 = *(undefined8 *)(uVar9 - 0x28);
  uVar5 = *puVar1;
  *(undefined8 *)(uVar9 - 0x18) = in_R11;
  *puVar1 = unaff_RSI;
  uVar2 = *(ulonglong *)(uVar9 - 0x10);
  *(undefined8 *)(uVar9 - 0x20) = uVar4;
  uVar4 = *(undefined8 *)(uVar9 - 0x20);
  *(ulonglong *)(uVar9 - 0x10) = *(ulonglong *)(uVar9 - 0x10) & uVar5;
  *(longlong *)(uVar9 - 0x10) = *(longlong *)(uVar9 - 0x10) << 1;
  *(undefined8 *)(uVar9 - 0x20) = uVar4;
  lVar3 = *(longlong *)(uVar9 - 0x10);
  *(undefined8 *)(uVar9 - 0x10) = 0;
  *(longlong *)(uVar9 - 0x10) = *(longlong *)(uVar9 - 0x10) - ((-~uVar5 - (~uVar2 + 2)) - lVar3);
  *(longlong *)(uVar9 - 0x10) = -*(longlong *)(uVar9 - 0x10);
  *(undefined8 *)(uVar9 - 0x18) = uVar6;
  *(undefined8 *)(uVar9 - 0x20) = uVar7;
  *(undefined8 *)(uVar9 - 0x28) = 0xffffffffd1e744ce;
  *(undefined4 *)(uVar9 - 0x28) = 0x69021648;
  *(undefined **)(uVar9 - 0x30) = &DAT_15767d78c;
  return;
}



// FUNCTION 14dc6d670 FUN_14dc6d670 body=146 status=ok
// SIG undefined FUN_14dc6d670(void)

void FUN_14dc6d670(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_157097c03(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dc6d8e2 FUN_14dc6d8e2 body=67 status=ok
// SIG undefined FUN_14dc6d8e2(void)

void FUN_14dc6d8e2(void)

{
  return;
}



// FUNCTION 14dc6da0e FUN_14dc6da0e body=880 status=ok
// SIG undefined FUN_14dc6da0e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6dbb4) */
/* WARNING: Removing unreachable block (ram,0x00014dc6dad4) */
/* WARNING: Removing unreachable block (ram,0x00014dc6dac0) */
/* WARNING: Removing unreachable block (ram,0x00014dc6db42) */
/* WARNING: Removing unreachable block (ram,0x00014dc6db47) */

void FUN_14dc6da0e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  undefined8 local_res10;
  
  FUN_14d8009de(param_1,local_res10,
                (~(*(ulonglong *)(unaff_RDI + -0xa0) & param_1) + param_1) -
                ~*(ulonglong *)(unaff_RDI + -0xa0),param_4);
  return;
}



// FUNCTION 14dc6dc9c FUN_14dc6dc9c body=282 status=ok
// SIG undefined FUN_14dc6dc9c(void)

/* WARNING: Removing unreachable block (ram,0x00016257acb4) */
/* WARNING: Removing unreachable block (ram,0x00016257acc5) */
/* WARNING: Removing unreachable block (ram,0x00016257ad49) */
/* WARNING: Removing unreachable block (ram,0x00016257ad4f) */
/* WARNING: Removing unreachable block (ram,0x00015702eb1c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ddac) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ddb7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6dddd) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ddb2) */
/* WARNING: Removing unreachable block (ram,0x00016257acc0) */
/* WARNING: Removing unreachable block (ram,0x00014dc6dd14) */

void FUN_14dc6dc9c(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_RSI;
  ulonglong uVar2;
  
  uVar1 = *unaff_RSI;
  uVar2 = (~(uVar1 & param_1) + param_1) - ~uVar1;
  if ((~uVar2 | 0xffffffffffffffff - ((param_1 - (uVar1 | param_1)) + uVar1)) + uVar2 == -1) {
    FUN_1667d653d();
    return;
  }
  FUN_16257ac17();
  return;
}



// FUNCTION 14dc6ddb7 FUN_14dc6ddb7 body=164 status=ok
// SIG undefined FUN_14dc6ddb7(void)

void FUN_14dc6ddb7(undefined1 param_1,undefined8 param_2)

{
  FUN_165997854(param_1,param_2,0xfffffffffffffff8);
  return;
}



// FUNCTION 14dc6de5d FUN_14dc6de5d body=871 status=ok
// SIG undefined FUN_14dc6de5d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6def7) */
/* WARNING: Removing unreachable block (ram,0x00014dc6df1f) */
/* WARNING: Removing unreachable block (ram,0x00014dc6df1a) */
/* WARNING: Removing unreachable block (ram,0x00014dc6df52) */
/* WARNING: Removing unreachable block (ram,0x00016643c6c7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc6de5d(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  
  pvVar4 = ProcessEnvironmentBlock;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar3 = *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x90) & param_1) &
          (*(ulonglong *)(unaff_RDI + -0x90) | param_1);
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(void **)(uVar1 - 0x18) = pvVar4;
  *(undefined4 *)(uVar1 - 0x18) = 0xfa8dca4;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  uVar5 = (*(code *)0x1658dac25)(uVar3 ^ param_1,~(uVar2 & param_1) & (uVar2 | param_1));
  return uVar5;
}



// FUNCTION 14dc6df85 FUN_14dc6df85 body=154 status=ok
// SIG undefined FUN_14dc6df85(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6e021) */

void FUN_14dc6df85(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ushort uVar4;
  ulonglong unaff_R15;
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
  undefined8 in_stack_00000008;
  ulonglong local_res18;
  ulonglong uStackX_20;
  
  uVar1 = 0xffffffffffffffff - (local_res18 & unaff_R15) &
          (~(local_res18 & unaff_R15) + unaff_R15) - ~local_res18;
  if (uVar1 == 0) {
    FUN_15b46e6d9();
    return;
  }
  puVar2 = (undefined8 *)(uStackX_20 ^ unaff_R15);
  local_res18._0_2_ = (ushort)uVar1;
  uVar4 = ~((ushort)local_res18 & 0x100) + (ushort)local_res18 + 1;
  FUN_156811d2a(in_stack_00000008,param_2,param_3,param_4);
  bVar13 = (uVar4 & 0x4000) != 0;
  bVar12 = (uVar4 & 0x800) != 0;
  bVar11 = (uVar4 & 0x200) != 0;
  bVar10 = (uVar4 & 0x100) != 0;
  bVar9 = (uVar4 & 0x80) != 0;
  bVar8 = (uVar4 & 0x40) != 0;
  bVar7 = (uVar4 & 0x10) != 0;
  bVar6 = (uVar4 & 4) != 0;
  bVar5 = (uVar4 & 1) != 0;
  bVar17 = (uVar1 & 0x200000) != 0;
  bVar14 = (uVar1 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar2 = unaff_RSI;
  puVar2[-1] = unaff_RSI;
  *(undefined4 *)(puVar2 + -2) = 0x135f47d1;
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0;
  puVar2[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar2[-3] = in_R11;
  puVar2[-4] = in_R11;
  puVar2[-3] = &DAT_15b46e7aa;
  return;
}



// FUNCTION 14dc6e021 FUN_14dc6e021 body=2 status=ok
// SIG undefined FUN_14dc6e021(void)

void FUN_14dc6e021(void)

{
  return;
}



// FUNCTION 14dc6e09e FUN_14dc6e09e body=136 status=ok
// SIG undefined FUN_14dc6e09e(void)

void FUN_14dc6e09e(short param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  short unaff_BP;
  short *unaff_R13;
  undefined8 uStackX_10;
  
  *unaff_R13 = unaff_BP + param_1 + *unaff_R13;
  puVar1 = (undefined8 *)(param_6 + -8);
  *puVar1 = param_3;
  *(undefined8 *)(param_6 + -0x10) = *puVar1;
  *puVar1 = &LAB_161b7090a;
  *(undefined8 *)(param_6 + -0x18) = param_2;
  *(undefined8 *)(param_6 + -0x20) = param_4;
  *(undefined8 *)(param_6 + -0x20) = *(undefined8 *)(param_6 + -0x20);
  FUN_161b708b5(uStackX_10,0xbd6bf6e4,FUN_161b708b5);
  return;
}



// FUNCTION 14dc6e126 FUN_14dc6e126 body=336 status=ok
// SIG undefined FUN_14dc6e126(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6e1d6) */

void FUN_14dc6e126(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 in_R11;
  undefined8 local_res8;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBP;
  *(undefined1 **)(local_res18 + -0x10) = &LAB_1658b74e9;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_1658b74e9;
  *(undefined8 *)(local_res18 + -0x20) = param_3;
  uVar3 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  lVar2 = *(longlong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + lVar2;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  thunk_FUN_15b642ca5(*(undefined8 *)(local_res18 + -0x18),*(undefined8 *)(local_res18 + -0x20),
                      uVar3);
  return;
}



// FUNCTION 14dc6e3f0 FUN_14dc6e3f0 body=58 status=ok
// SIG undefined FUN_14dc6e3f0(void)

/* WARNING: Instruction at (ram,0x00014dc6e487) overlaps instruction at (ram,0x00014dc6e485)
    */
/* WARNING: Removing unreachable block (ram,0x0001625df569) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e496) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e484) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e49c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e520) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e51b) */
/* WARNING: Removing unreachable block (ram,0x0001625df484) */
/* WARNING: Removing unreachable block (ram,0x0001625df47f) */
/* WARNING: Removing unreachable block (ram,0x0001625df499) */
/* WARNING: Removing unreachable block (ram,0x000162f2331a) */
/* WARNING: Removing unreachable block (ram,0x0001625df4d2) */
/* WARNING: Removing unreachable block (ram,0x0001625df4d8) */
/* WARNING: Removing unreachable block (ram,0x0001625df4dd) */
/* WARNING: Removing unreachable block (ram,0x0001625df563) */
/* WARNING: Removing unreachable block (ram,0x0001664ff363) */
/* WARNING: Removing unreachable block (ram,0x0001664ff378) */
/* WARNING: Removing unreachable block (ram,0x0001664ff373) */
/* WARNING: Removing unreachable block (ram,0x0001664ff383) */
/* WARNING: Removing unreachable block (ram,0x0001664ff3af) */
/* WARNING: Removing unreachable block (ram,0x0001664ff3b3) */
/* WARNING: Removing unreachable block (ram,0x0001625df56f) */
/* WARNING: Removing unreachable block (ram,0x0001625df57d) */

void FUN_14dc6e3f0(void)

{
  return;
}



// FUNCTION 14dc6e49c FUN_14dc6e49c body=147 status=ok
// SIG undefined FUN_14dc6e49c(void)

/* WARNING: Removing unreachable block (ram,0x0001625df569) */
/* WARNING: Removing unreachable block (ram,0x0001625df56f) */
/* WARNING: Removing unreachable block (ram,0x0001625df57d) */
/* WARNING: Removing unreachable block (ram,0x0001625df4dd) */
/* WARNING: Removing unreachable block (ram,0x0001625df563) */
/* WARNING: Removing unreachable block (ram,0x0001664ff363) */
/* WARNING: Removing unreachable block (ram,0x0001664ff378) */
/* WARNING: Removing unreachable block (ram,0x0001664ff373) */
/* WARNING: Removing unreachable block (ram,0x0001664ff383) */
/* WARNING: Removing unreachable block (ram,0x0001664ff3af) */
/* WARNING: Removing unreachable block (ram,0x0001664ff3b3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc6e49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong in_RAX;
  short sVar3;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  ulonglong *unaff_R14;
  ushort local_res20;
  uint6 uStackX_22;
  
  *unaff_R14 = *unaff_R14 ^ unaff_R13;
  param_5 = param_5 ^ in_RAX;
  sVar3 = -0x101 - (local_res20 | 0xfeff);
  if (sVar3 == 0) {
    return;
  }
  uVar2 = sVar3 + local_res20;
  if ((uVar2 & 1) == 0) {
    puVar1 = (ulonglong *)(param_5 - 8);
    *(undefined8 *)(param_5 - 0x10) = unaff_R12;
    *(ulonglong *)(param_5 - 0x18) =
         (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
         (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
    *puVar1 = 0x1ea07511;
    *puVar1 = *puVar1 ^ 0x1c2d0e3d;
    FUN_14d85d504(param_1,param_2,param_3);
    return;
  }
  FUN_162f2331a();
  return;
}



// FUNCTION 14dc6e537 FUN_14dc6e537 body=144 status=ok
// SIG undefined FUN_14dc6e537(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6e600) */

void FUN_14dc6e537(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_20;
  
  uVar2 = FUN_166592312(param_1,0xffffffffffffffc0,~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40));
  uVar1 = *(ulonglong *)(unaff_RBX + unaff_R15 + (unaff_R12 & unaff_R15) * -2 + -0x58);
  FUN_165bcf878(uVar1 + uVar2 + (uVar1 & uVar2) * -2,uStackX_20);
  return;
}



// FUNCTION 14dc6e5c7 FUN_14dc6e5c7 body=174 status=ok
// SIG undefined FUN_14dc6e5c7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6e600) */

void FUN_14dc6e5c7(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res20;
  
  FUN_165bcf878(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,local_res20);
  return;
}



// FUNCTION 14dc6e798 FUN_14dc6e798 body=415 status=ok
// SIG undefined FUN_14dc6e798(void)

/* WARNING: Removing unreachable block (ram,0x0001568c0fb1) */
/* WARNING: Removing unreachable block (ram,0x00015b395743) */
/* WARNING: Removing unreachable block (ram,0x00015b39574e) */
/* WARNING: Removing unreachable block (ram,0x00015b395832) */
/* WARNING: Removing unreachable block (ram,0x00015b395749) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e81f) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e8b6) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e8bb) */
/* WARNING: Removing unreachable block (ram,0x00015b395697) */
/* WARNING: Removing unreachable block (ram,0x0001568c0f84) */
/* WARNING: Removing unreachable block (ram,0x0001568c0fc0) */
/* WARNING: Removing unreachable block (ram,0x00014dc6e8c1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dc6e798(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_R13;
  
  uVar2 = ~in_RAX | *(ulonglong *)(unaff_R13 + -0x90);
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x90) | in_RAX;
  return (uVar1 - (uVar2 | uVar1)) + uVar2;
}



// FUNCTION 14dc6ec55 FUN_14dc6ec55 body=149 status=ok
// SIG undefined FUN_14dc6ec55(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6ed75) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ed80) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ed7b) */

void FUN_14dc6ec55(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ulonglong in_RAX;
  code *pcVar1;
  longlong unaff_RSI;
  longlong unaff_R12;
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  pcVar1 = FUN_162a539e2;
  FUN_162a539e2(FUN_162a539e2,
                (-in_RAX - *(ulonglong *)(unaff_R12 + -0x78)) +
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX) * 2);
  uStackX_18 = (~param_4 | uStackX_18) + param_4 + 1;
  uStackX_20 = ~(uStackX_20 & (ulonglong)pcVar1) &
               (~(ulonglong)pcVar1 & uStackX_20 | (ulonglong)pcVar1);
  FUN_1664402b1(FUN_1664402b1,(unaff_RSI - param_2) + param_1,&uStackX_18,
                ~((~(~param_5 | (ulonglong)pcVar1) |
                  (-(param_5 ^ 0xffffffffffffffff) - (1 - ~(ulonglong)pcVar1)) -
                  (~(ulonglong)pcVar1 & param_5)) + (~param_5 | (ulonglong)pcVar1) + 1));
  return;
}



// FUNCTION 14dc6ecea FUN_14dc6ecea body=309 status=ok
// SIG undefined FUN_14dc6ecea(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6ed75) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ed80) */
/* WARNING: Removing unreachable block (ram,0x00014dc6ed7b) */

void FUN_14dc6ecea(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 local_res8;
  ulonglong local_res20;
  
  local_res20 = (~param_4 | local_res20) + param_4 + 1;
  FUN_1664402b1(FUN_1664402b1,local_res8,&local_res20,
                ~((~(~param_6 | param_1) |
                  (-(param_6 ^ 0xffffffffffffffff) - (1 - ~param_1)) - (~param_1 & param_6)) +
                  (~param_6 | param_1) + 1));
  return;
}



// FUNCTION 14dc6ef74 FUN_14dc6ef74 body=154 status=ok
// SIG undefined FUN_14dc6ef74(void)

void FUN_14dc6ef74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong in_R11;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong local_res20;
  
  lVar1 = local_res20 - in_R11;
  *(undefined8 *)(lVar1 + -8) = param_4;
  *(undefined8 *)(lVar1 + -0x10) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x20) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = param_3;
  *(undefined8 *)(lVar1 + -8) = 0;
  *(longlong *)(lVar1 + -8) = (longlong)(&DAT_166ab0daa + *(longlong *)(lVar1 + -8));
  uVar2 = *(undefined8 *)(lVar1 + -0x18);
  *(undefined8 *)(lVar1 + -0x18) = in_RAX;
  *(undefined4 *)(lVar1 + -0x18) = 0x51fcb9f4;
  thunk_FUN_166ab0d39(uStackX_10,param_2,uVar2,thunk_FUN_166ab0d39);
  return;
}



// FUNCTION 14dc6f08f FUN_14dc6f08f body=424 status=ok
// SIG undefined FUN_14dc6f08f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6f11c) */
/* WARNING: Removing unreachable block (ram,0x00014dc6f122) */
/* WARNING: Removing unreachable block (ram,0x00014dc6f129) */
/* WARNING: Removing unreachable block (ram,0x00014dc6f12d) */
/* WARNING: Removing unreachable block (ram,0x0001612d451e) */

undefined8 FUN_14dc6f08f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1612d451e();
  return uVar1;
}



// FUNCTION 14dc6f29d FUN_14dc6f29d body=24 status=ok
// SIG undefined FUN_14dc6f29d(void)

void FUN_14dc6f29d(void)

{
  FUN_14dc305a9();
  return;
}



// FUNCTION 14dc6f4c7 FUN_14dc6f4c7 body=157 status=ok
// SIG undefined FUN_14dc6f4c7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6f55a) */
/* WARNING: Removing unreachable block (ram,0x00014dc6f560) */
/* WARNING: Removing unreachable block (ram,0x00016231233c) */
/* WARNING: Removing unreachable block (ram,0x00016231234d) */
/* WARNING: Removing unreachable block (ram,0x000162312348) */

void FUN_14dc6f4c7(void)

{
  FUN_1658465c8();
  return;
}



// FUNCTION 14dc6f566 FUN_14dc6f566 body=155 status=ok
// SIG undefined FUN_14dc6f566(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6f601) */

void FUN_14dc6f566(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x60);
  FUN_1567b6f14(FUN_1567b6f14,uVar1 | unaff_R15,
                (unaff_R14 - (~unaff_R14 & in_stack_00000030 | unaff_R14)) + in_stack_00000030,
                ~((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) & (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14dc6f601 thunk_FUN_14dc6f607 body=5 status=ok
// SIG undefined thunk_FUN_14dc6f607(void)

void thunk_FUN_14dc6f607(void)

{
  return;
}



// FUNCTION 14dc6f607 FUN_14dc6f607 body=154 status=ok
// SIG undefined FUN_14dc6f607(void)

void FUN_14dc6f607(void)

{
  return;
}



// FUNCTION 14dc6f757 FUN_14dc6f757 body=110 status=ok
// SIG undefined FUN_14dc6f757(void)

void FUN_14dc6f757(void)

{
  return;
}



// FUNCTION 14dc6f7f2 FUN_14dc6f7f2 body=148 status=ok
// SIG undefined FUN_14dc6f7f2(void)

void FUN_14dc6f7f2(void)

{
  FUN_161bae9d4();
  return;
}



// FUNCTION 14dc6f9b9 FUN_14dc6f9b9 body=289 status=ok
// SIG undefined FUN_14dc6f9b9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6fa5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc6f9b9(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  longlong in_R10;
  longlong unaff_R12;
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
  undefined8 uStackX_10;
  ulonglong in_stack_00000018;
  longlong local_res20;
  
  puVar2 = (ulonglong *)(unaff_R12 + local_res20 * -2);
  bVar12 = (in_stack_00000018 & 0x4000) != 0;
  bVar11 = (in_stack_00000018 & 0x800) != 0;
  bVar10 = (in_stack_00000018 & 0x200) != 0;
  bVar9 = (in_stack_00000018 & 0x100) != 0;
  bVar8 = (in_stack_00000018 & 0x80) != 0;
  bVar7 = (in_stack_00000018 & 0x40) != 0;
  bVar6 = (in_stack_00000018 & 0x10) != 0;
  bVar5 = (in_stack_00000018 & 4) != 0;
  bVar4 = (in_stack_00000018 & 1) != 0;
  bVar16 = (in_stack_00000018 & 0x200000) != 0;
  bVar13 = (in_stack_00000018 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(uStackX_10,param_2);
  *puVar2 = param_4;
  puVar2[-1] = param_4;
  puVar2[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((in_stack_00000018 & 0x400) != 0) * 0x400 |
               (ulonglong)(bVar10 & 1) * 0x200 | (ulonglong)(bVar9 & 1) * 0x100 |
               (ulonglong)(bVar8 & 1) * 0x80 | (ulonglong)(bVar7 & 1) * 0x40 |
               (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  puVar2[-3] = (ulonglong)FUN_160f2f8aa;
  FUN_162ec8ab9();
  *(undefined4 *)((longlong)puVar2 + -4) = 0;
  uVar17 = *puVar2;
  *puVar2 = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
            (ulonglong)((uVar17 & 0x800) != 0) * 0x800 | (ulonglong)((uVar17 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
            (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
            (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  uVar17 = puVar2[-1] ^ 0x781d9b73;
  if ((*puVar2 & 1) != 0) {
    uVar17 = uVar17 + 1;
  }
  lVar1 = (longlong)puVar2 + (in_R10 - uVar17) + 8;
  *(longlong *)(lVar1 + -8) = lVar1;
  lVar1 = *(longlong *)(lVar1 + -8);
  *(undefined4 *)(lVar1 + -8) = 0x19a27295;
  *(undefined4 *)(lVar1 + -0x10) = 0;
  *(undefined4 *)(lVar1 + -4) = *(undefined4 *)(lVar1 + -0x10);
  thunk_FUN_165c4dafd();
  return;
}



// FUNCTION 14dc6fa5c FUN_14dc6fa5c body=165 status=ok
// SIG undefined FUN_14dc6fa5c(void)

void FUN_14dc6fa5c(undefined1 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_00000020;
  
  uVar1 = *(ulonglong *)(in_R11 + 8);
  lVar2 = *(longlong *)(in_R11 + 8);
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) | unaff_R15;
  *(ulonglong *)(in_R11 + 8) =
       ~(((~param_4 & uVar1 ^ 0xffffffffffffffff) + lVar2) - ~unaff_RDI & *(ulonglong *)(in_R11 + 8)
        );
  *(undefined8 *)((~(param_7 & unaff_R15) & (param_7 | unaff_R15)) - 8) = in_stack_00000020;
  FUN_15b068d89(param_1,param_2,local_res10,local_res8);
  return;
}



// FUNCTION 14dc6fbbb FUN_14dc6fbbb body=138 status=ok
// SIG undefined FUN_14dc6fbbb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6fdef) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fdfa) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fcce) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fcd4) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd4e) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd53) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd5f) */
/* WARNING: Removing unreachable block (ram,0x0001624853e1) */
/* WARNING: Removing unreachable block (ram,0x00015b13976a) */
/* WARNING: Removing unreachable block (ram,0x000162485515) */
/* WARNING: Removing unreachable block (ram,0x00016248551b) */
/* WARNING: Removing unreachable block (ram,0x000166c30c40) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fdf5) */

undefined8 FUN_14dc6fbbb(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164a47a6d();
  return uVar1;
}



// FUNCTION 14dc6fc46 FUN_14dc6fc46 body=609 status=ok
// SIG undefined FUN_14dc6fc46(void)

/* WARNING: Removing unreachable block (ram,0x00014dc6fdef) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fdfa) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fcce) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fcd4) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd4e) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd53) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fd5f) */
/* WARNING: Removing unreachable block (ram,0x0001624853e1) */
/* WARNING: Removing unreachable block (ram,0x00015b13976a) */
/* WARNING: Removing unreachable block (ram,0x000162485515) */
/* WARNING: Removing unreachable block (ram,0x00016248551b) */
/* WARNING: Removing unreachable block (ram,0x000166c30c40) */
/* WARNING: Removing unreachable block (ram,0x00014dc6fdf5) */

undefined8 FUN_14dc6fc46(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc6ffec FUN_14dc6ffec body=140 status=ok
// SIG undefined FUN_14dc6ffec(void)

void FUN_14dc6ffec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_R12;
  *(undefined8 *)(param_5 + -8) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -0x18) = in_R10;
  *(undefined **)(param_5 + -8) = &DAT_160c7cc16;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(undefined8 *)(param_5 + -0x18) = param_4;
  *(undefined8 *)(param_5 + -0x10) = 0x14d7a5abe;
  FUN_160c7cc00(uStackX_8,param_2,param_3,FUN_160c7cc00);
  return;
}



// FUNCTION 14dc7008d FUN_14dc7008d body=121 status=ok
// SIG undefined FUN_14dc7008d(void)

void FUN_14dc7008d(undefined8 param_1)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xd959a) {
    FUN_1574ba9da(param_1);
    return;
  }
  if (unaff_R14 == 0xd9627) {
    thunk_FUN_16573214a();
    return;
  }
  FUN_165732194();
  return;
}



// FUNCTION 14dc70101 FUN_14dc70101 body=156 status=ok
// SIG undefined FUN_14dc70101(void)

undefined8 FUN_14dc70101(void)

{
  undefined8 unaff_retaddr;
  undefined1 auStack_1f0 [496];
  
  _fxsave(auStack_1f0);
  return unaff_retaddr;
}



// FUNCTION 14dc7022b FUN_14dc7022b body=169 status=ok
// SIG undefined FUN_14dc7022b(void)

void FUN_14dc7022b(void)

{
  ulonglong unaff_RBP;
  ulonglong in_stack_00000018;
  
  FUN_162aa890c();
  (*(code *)&LAB_161a17ba8)(&stack0x00000028);
                    /* WARNING: Could not recover jumptable at 0x00014dc70356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_stack_00000018 ^ unaff_RBP))();
  return;
}



// FUNCTION 14dc70319 FUN_14dc70319 body=63 status=ok
// SIG undefined FUN_14dc70319(void)

void FUN_14dc70319(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc70356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc70736 FUN_14dc70736 body=375 status=ok
// SIG undefined FUN_14dc70736(void)

/* WARNING: Removing unreachable block (ram,0x00014d907358) */
/* WARNING: Removing unreachable block (ram,0x00014d9072cc) */
/* WARNING: Removing unreachable block (ram,0x00014d90734d) */
/* WARNING: Removing unreachable block (ram,0x00014dc707ae) */
/* WARNING: Removing unreachable block (ram,0x00014dc70829) */
/* WARNING: Removing unreachable block (ram,0x00014d9072bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc7082f) */

undefined8 FUN_14dc70736(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = (*(code *)0x165b771eb)
                    ((*(ulonglong *)(unaff_R12 + -0x58) - in_RAX) +
                     (~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) * -2 + -2,
                     ~*(ulonglong *)(unaff_R12 + -0x78));
  return uVar1;
}



// FUNCTION 14dc70937 FUN_14dc70937 body=24 status=ok
// SIG undefined FUN_14dc70937(void)

void FUN_14dc70937(void)

{
  return;
}



// FUNCTION 14dc709e1 FUN_14dc709e1 body=680 status=ok
// SIG undefined FUN_14dc709e1(void)

/* WARNING: Removing unreachable block (ram,0x0001574ce986) */
/* WARNING: Removing unreachable block (ram,0x0001574ce992) */
/* WARNING: Removing unreachable block (ram,0x000165f55496) */
/* WARNING: Removing unreachable block (ram,0x0001574cea2d) */
/* WARNING: Removing unreachable block (ram,0x0001574cea33) */
/* WARNING: Removing unreachable block (ram,0x0001574cea38) */
/* WARNING: Removing unreachable block (ram,0x0001574ceacd) */
/* WARNING: Removing unreachable block (ram,0x0001574cead8) */
/* WARNING: Removing unreachable block (ram,0x0001574cead3) */
/* WARNING: Removing unreachable block (ram,0x000166830198) */
/* WARNING: Removing unreachable block (ram,0x000166830249) */
/* WARNING: Removing unreachable block (ram,0x00016683024e) */
/* WARNING: Removing unreachable block (ram,0x000166830254) */
/* WARNING: Removing unreachable block (ram,0x000166830259) */
/* WARNING: Removing unreachable block (ram,0x00014dc70b1b) */
/* WARNING: Removing unreachable block (ram,0x00014dc70c6f) */
/* WARNING: Removing unreachable block (ram,0x00014dc70c74) */
/* WARNING: Removing unreachable block (ram,0x00014dc70c7a) */
/* WARNING: Removing unreachable block (ram,0x00014dc70a8a) */
/* WARNING: Removing unreachable block (ram,0x00014dc70ae2) */
/* WARNING: Removing unreachable block (ram,0x00014dc70af5) */
/* WARNING: Removing unreachable block (ram,0x0001574ce904) */
/* WARNING: Removing unreachable block (ram,0x0001574ce953) */
/* WARNING: Removing unreachable block (ram,0x0001648c8944) */
/* WARNING: Removing unreachable block (ram,0x0001648c8963) */
/* WARNING: Removing unreachable block (ram,0x0001648c895e) */
/* WARNING: Removing unreachable block (ram,0x00014dc70b0f) */
/* WARNING: Removing unreachable block (ram,0x00014dc70a73) */
/* WARNING: Removing unreachable block (ram,0x00014dc70a8f) */
/* WARNING: Removing unreachable block (ram,0x00014dc70b15) */
/* WARNING: Removing unreachable block (ram,0x0001574ce8f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc70c85) */

undefined * FUN_14dc709e1(void)

{
  return &DAT_15b1eaf00;
}



// FUNCTION 14dc70d34 thunk_FUN_14dc70d3a body=5 status=ok
// SIG undefined thunk_FUN_14dc70d3a(void)

void thunk_FUN_14dc70d3a(void)

{
  (*(code *)&LAB_1619e7a8b)(&LAB_1619e7a8b,0xffffffffffffffc8);
  return;
}



// FUNCTION 14dc70d3a FUN_14dc70d3a body=48 status=ok
// SIG undefined FUN_14dc70d3a(void)

void FUN_14dc70d3a(void)

{
  (*(code *)&LAB_1619e7a8b)(&LAB_1619e7a8b,0xffffffffffffffc8);
  return;
}



// FUNCTION 14dc70e66 FUN_14dc70e66 body=115 status=ok
// SIG undefined FUN_14dc70e66(void)

void FUN_14dc70e66(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong in_R10;
  undefined8 unaff_retaddr;
  
  FUN_15726465c(unaff_retaddr,~*(ulonglong *)(param_3 + -0xa0) + in_R10,FUN_15726465c,param_4);
  return;
}



// FUNCTION 14dc70ed9 FUN_14dc70ed9 body=190 status=ok
// SIG undefined FUN_14dc70ed9(void)

void FUN_14dc70ed9(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_R15;
  
  FUN_1658fae09(unaff_R15,0xffffffffffffffb8,
                (~unaff_R15 | param_3) & (~param_3 | unaff_R15) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dc71103 FUN_14dc71103 body=288 status=ok
// SIG undefined FUN_14dc71103(void)

/* WARNING: Removing unreachable block (ram,0x00014dc712c1) */
/* WARNING: Removing unreachable block (ram,0x00014dc7121e) */
/* WARNING: Removing unreachable block (ram,0x00014dc71224) */
/* WARNING: Removing unreachable block (ram,0x00014dc712bb) */
/* WARNING: Removing unreachable block (ram,0x000165a076dc) */
/* WARNING: Removing unreachable block (ram,0x000165630f2b) */

undefined8 FUN_14dc71103(ulonglong param_1,longlong param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  FUN_162f064d3(FUN_162f064d3,*(ulonglong *)(unaff_R12 + -0x28) | in_RAX,~(-~param_1 - param_2));
  uVar1 = FUN_165630f2b();
  return uVar1;
}



// FUNCTION 14dc71224 FUN_14dc71224 body=344 status=ok
// SIG undefined FUN_14dc71224(void)

/* WARNING: Removing unreachable block (ram,0x00014dc712c1) */

void FUN_14dc71224(undefined8 param_1,undefined8 param_2)

{
  FUN_16297fd0b(param_1,param_2);
  return;
}



// FUNCTION 14dc7137e FUN_14dc7137e body=139 status=ok
// SIG undefined FUN_14dc7137e(void)

ulonglong FUN_14dc7137e(void)

{
  longlong unaff_RDI;
  ulonglong local_res8;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ 0xffffffffffffffff | local_res8;
}



// FUNCTION 14dc71835 FUN_14dc71835 body=160 status=ok
// SIG undefined FUN_14dc71835(void)

/* WARNING: Instruction at (ram,0x00014dc7186b) overlaps instruction at (ram,0x00014dc7186a)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014dc718b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc71835(undefined8 param_1,undefined4 *param_2)

{
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  *param_2 = 0;
  _DAT_ffffffffffffffbe = _DAT_ffffffffffffffbe + (uint)((unaff_retaddr & 0xffffffff9f9584e1) != 0);
  FUN_166016aaf(-1 - (unaff_retaddr & 0xffffffff9f9584e1),
                (unaff_retaddr - 0x606a7b1f) - ((unaff_retaddr | 0x606a7b1e) - 0x606a7b1e));
  FUN_162b65823(*(undefined8 *)(unaff_R12 + -0x28));
  FUN_1654949c6();
  return;
}



// FUNCTION 14dc718d7 FUN_14dc718d7 body=178 status=ok
// SIG undefined FUN_14dc718d7(void)

void FUN_14dc718d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - (param_1 & (param_4 | 0xffffffff88c5f002));
  uVar1 = ~(uVar1 & *(ulonglong *)(unaff_R12 + -0x30)) & (uVar1 | *(ulonglong *)(unaff_R12 + -0x30))
  ;
  FUN_162b65823(*(undefined8 *)(unaff_R12 + -0x28),param_2,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  FUN_1654949c6();
  return;
}



// FUNCTION 14dc71983 FUN_14dc71983 body=990 status=ok
// SIG undefined FUN_14dc71983(void)

/* WARNING: Instruction at (ram,0x0001569ef538) overlaps instruction at (ram,0x0001569ef537)
    */
/* WARNING: Removing unreachable block (ram,0x000156ed0148) */
/* WARNING: Removing unreachable block (ram,0x000156ed014e) */
/* WARNING: Removing unreachable block (ram,0x000166859dce) */
/* WARNING: Removing unreachable block (ram,0x00014dc71a1f) */
/* WARNING: Removing unreachable block (ram,0x0001569ef537) */
/* WARNING: Removing unreachable block (ram,0x00014dc719fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc71a22) */
/* WARNING: Removing unreachable block (ram,0x000161651b33) */
/* WARNING: Removing unreachable block (ram,0x000161651c59) */
/* WARNING: Removing unreachable block (ram,0x000161651c5f) */
/* WARNING: Removing unreachable block (ram,0x000161651ce7) */
/* WARNING: Removing unreachable block (ram,0x000166859da9) */
/* WARNING: Removing unreachable block (ram,0x000166859dc9) */
/* WARNING: Removing unreachable block (ram,0x000166859dd1) */
/* WARNING: Removing unreachable block (ram,0x00014dc71a91) */
/* WARNING: Removing unreachable block (ram,0x00014dc71aae) */
/* WARNING: Removing unreachable block (ram,0x00014dc71a9d) */
/* WARNING: Removing unreachable block (ram,0x0001569ef4e1) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6ae) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6b9) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6bf) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6c4) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6d0) */
/* WARNING: Removing unreachable block (ram,0x0001569ef6d4) */
/* WARNING: Removing unreachable block (ram,0x0001569ef4db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dc71983(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_R13;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong local_res8;
  
  if (unaff_R15 == 1) {
    uVar1 = FUN_16212d585();
    return uVar1;
  }
  if (unaff_R15 == 2) {
    uVar1 = FUN_162dc84e0();
    return uVar1;
  }
  if (unaff_R15 == 3) {
    uVar1 = FUN_157344edd();
    return uVar1;
  }
  if (unaff_R15 == 4) {
    if ((longlong)local_res8 < 0) {
      unaff_retaddr = unaff_retaddr & 0xffffffff ^ 0xb8374a98aeb06464;
      *(ulonglong *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
    }
    *(int *)(local_res8 & 0x7fffffffffffffff) = (int)unaff_retaddr;
    uVar1 = thunk_FUN_1573f2e58();
    return uVar1;
  }
  if (!CARRY8(unaff_R13,unaff_R13)) {
    uVar1 = FUN_156ed00ab();
    return uVar1;
  }
  if ((longlong)local_res8 < 0) {
    uVar2 = unaff_retaddr & 0xffffffff;
    unaff_retaddr =
         (uVar2 | 0x47c8b567514f9b9b) &
         (~(~uVar2 & 0xb8374a98aeb06464) + 0xb8374a98aeb06464) - uVar2 ^ 0xffffffffffffffff;
    *(ulonglong *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
  }
  *(int *)(local_res8 & 0x7fffffffffffffff) = (int)unaff_retaddr;
  uVar1 = thunk_FUN_1573f2e58();
  return uVar1;
}



// FUNCTION 14dc71aae thunk_FUN_14dc71ab4 body=5 status=ok
// SIG undefined thunk_FUN_14dc71ab4(void)

undefined8 thunk_FUN_14dc71ab4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc71ab4 FUN_14dc71ab4 body=154 status=ok
// SIG undefined FUN_14dc71ab4(void)

undefined8 FUN_14dc71ab4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc71d40 FUN_14dc71d40 body=171 status=ok
// SIG undefined FUN_14dc71d40(void)

void FUN_14dc71d40(void)

{
  return;
}



// FUNCTION 14dc71e83 FUN_14dc71e83 body=129 status=ok
// SIG undefined FUN_14dc71e83(void)

void FUN_14dc71e83(undefined8 param_1,undefined8 param_2)

{
  FUN_165f2cc05(param_1,param_2,0);
  return;
}



// FUNCTION 14dc71f05 FUN_14dc71f05 body=644 status=ok
// SIG undefined FUN_14dc71f05(void)

/* WARNING: Instruction at (ram,0x00014dc72020) overlaps instruction at (ram,0x00014dc7201d)
    */
/* WARNING: Removing unreachable block (ram,0x000166453caf) */
/* WARNING: Removing unreachable block (ram,0x000166453cb5) */
/* WARNING: Removing unreachable block (ram,0x00015707df1b) */
/* WARNING: Removing unreachable block (ram,0x00014dc7201d) */
/* WARNING: Removing unreachable block (ram,0x00014dc72059) */
/* WARNING: Removing unreachable block (ram,0x00014dc71fa9) */

void FUN_14dc71f05(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x40) ^ param_1)) {
    thunk_FUN_165f7d3f9();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_RDI + -0x30) | param_1;
  uVar3 = *(ulonglong *)(unaff_RDI + -0x30) & param_1 ^ 0xffffffffffffffff;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  FUN_15685d594(param_1,(uVar2 - (uVar3 | uVar2)) + uVar3,*(undefined8 *)(unaff_RDI + -0x70),
                (~param_1 + uVar1) - (~param_1 & uVar1) & (uVar1 ^ 0xffffffffffffffff | param_1) ^
                0xffffffffffffffff);
  FUN_14ded89a1();
  return;
}



// FUNCTION 14dc72059 FUN_14dc72059 body=16 status=ok
// SIG undefined FUN_14dc72059(void)

void FUN_14dc72059(void)

{
  FUN_16133aa9b();
  return;
}



// FUNCTION 14dc72178 FUN_14dc72178 body=174 status=ok
// SIG undefined FUN_14dc72178(void)

void FUN_14dc72178(void)

{
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1626febd8)
            (0xfffffffffffffff8,0xffffffffffffff78,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             in_R9 ^ unaff_R15);
  return;
}



// FUNCTION 14dc7222c FUN_14dc7222c body=297 status=ok
// SIG undefined FUN_14dc7222c(void)

void FUN_14dc7222c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong *puVar3;
  longlong unaff_RDI;
  uint uVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  uVar1 = *(undefined8 *)(unaff_RDI + -0x90);
  local_8 = *(undefined8 *)(unaff_RDI + -8);
  pcVar2 = FUN_16539dd4c;
  local_18 = 0x14dc722b2;
  local_10 = param_2;
  FUN_16539dd4c();
  uVar4 = (uint)uVar1;
  local_18 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  puVar3 = &local_18;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar3 = &local_10;
  }
  *(code **)((longlong)puVar3 + -8) = pcVar2;
  uVar1 = *(undefined8 *)((longlong)puVar3 + -8);
  uVar4 = ~(~(0xffffffff - ~(~uVar4 | 0x1e6af164)) | ~(uVar4 | 0xe1950e9b)) ^ 0xffffffff;
  *(ulonglong *)((longlong)puVar3 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
       (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)((longlong)puVar3 + -8) = uVar1;
  *(undefined8 *)((longlong)puVar3 + -0x10) = uVar1;
  *(undefined8 *)((longlong)puVar3 + -0x18) = uVar1;
  *(undefined1 **)((longlong)puVar3 + -8) = &LAB_14dc72359;
  *(undefined8 *)((longlong)puVar3 + -0x10) = 0x160cdf99b;
  return;
}



// FUNCTION 14dc7235f FUN_14dc7235f body=141 status=ok
// SIG undefined FUN_14dc7235f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7250b) */
/* WARNING: Removing unreachable block (ram,0x00014dc72500) */
/* WARNING: Removing unreachable block (ram,0x00014dc60f27) */

void FUN_14dc7235f(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16140257b((0xfffffffffffffffe - ~-(param_1 | unaff_R15) |
                ~((~param_1 - ~(param_1 & unaff_R15)) + param_1)) + (param_1 | unaff_R15) + 1,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dc723ec FUN_14dc723ec body=146 status=ok
// SIG undefined FUN_14dc723ec(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7250b) */
/* WARNING: Removing unreachable block (ram,0x00014dc72500) */

void FUN_14dc723ec(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  
  FUN_16489aabb(FUN_16489aabb,param_2,in_stack_00000008);
  uVar1 = *(ulonglong *)(&stack0x00000008 + unaff_RBX);
  *(ulonglong *)(&stack0x00000008 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000008 + unaff_RBX) ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0x00000008 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000008 + unaff_RBX) | unaff_R15;
  *(ulonglong *)(&stack0x00000008 + unaff_RBX) =
       ~((~*(ulonglong *)(&stack0x00000008 + unaff_RBX) | ~unaff_R15 | uVar1) +
         *(longlong *)(&stack0x00000008 + unaff_RBX) + 1);
  (*(code *)0x1667b0b77)();
  return;
}



// FUNCTION 14dc72482 FUN_14dc72482 body=309 status=ok
// SIG undefined FUN_14dc72482(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7250b) */
/* WARNING: Removing unreachable block (ram,0x00014dc72500) */

void FUN_14dc72482(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(&stack0x00000010 + unaff_RBX);
  *(ulonglong *)(&stack0x00000010 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000010 + unaff_RBX) ^ 0xffffffffffffffff;
  *(ulonglong *)(&stack0x00000010 + unaff_RBX) =
       *(ulonglong *)(&stack0x00000010 + unaff_RBX) | unaff_R15;
  *(ulonglong *)(&stack0x00000010 + unaff_RBX) =
       ~((~*(ulonglong *)(&stack0x00000010 + unaff_RBX) | ~unaff_R15 | uVar1) +
         *(longlong *)(&stack0x00000010 + unaff_RBX) + 1);
  (*(code *)0x1667b0b77)(param_1,0x1667b0b77);
  return;
}



// FUNCTION 14dc728e6 FUN_14dc728e6 body=169 status=ok
// SIG undefined FUN_14dc728e6(void)

void FUN_14dc728e6(undefined8 param_1)

{
  FUN_156fdbdbb(param_1);
  return;
}



// FUNCTION 14dc72a57 FUN_14dc72a57 body=1079 status=ok
// SIG undefined FUN_14dc72a57(void)

void FUN_14dc72a57(void)

{
  longlong unaff_RDI;
  undefined8 local_res10;
  
  FUN_156914799(local_res10,
                ~((~local_res10 | *(ulonglong *)(unaff_RDI + -0x68)) &
                 (~*(ulonglong *)(unaff_RDI + -0x68) | local_res10)));
  return;
}



// FUNCTION 14dc72c02 FUN_14dc72c02 body=9 status=ok
// SIG undefined FUN_14dc72c02(void)

void FUN_14dc72c02(void)

{
  return;
}



// FUNCTION 14dc72e83 FUN_14dc72e83 body=752 status=ok
// SIG undefined FUN_14dc72e83(void)

/* WARNING: Removing unreachable block (ram,0x00014dc72f74) */
/* WARNING: Removing unreachable block (ram,0x00014dc72efe) */

void FUN_14dc72e83(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 in_AL;
  uint7 in_register_00000001;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7aae58) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7aae58 = in_AL;
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  puVar1 = (undefined8 *)(local_res10 + -0x10);
  *puVar1 = unaff_RBP;
  *(ulonglong *)(local_res10 + -0x18) = (ulonglong)in_register_00000001 << 8;
  *(undefined4 *)(local_res10 + -0x18) = 0x8c65509;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar2 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res8 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)((local_res8 & 0x80) != 0) * 0x80
       | (ulonglong)((local_res8 & 0x40) != 0) * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10
       | (ulonglong)((local_res8 & 4) != 0) * 4 | (ulonglong)((local_res8 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(longlong *)(local_res10 + -8) = lVar2 + -0x6d86f0b;
  *puVar1 = unaff_RSI;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RSI;
  *puVar1 = 0x156ef2e25;
  return;
}



// FUNCTION 14dc73233 FUN_14dc73233 body=191 status=ok
// SIG undefined FUN_14dc73233(void)

void FUN_14dc73233(void)

{
  FUN_15ba0b5a6();
  return;
}



// FUNCTION 14dc73441 FUN_14dc73441 body=315 status=ok
// SIG undefined FUN_14dc73441(void)

/* WARNING: Removing unreachable block (ram,0x00014dc734ee) */

void FUN_14dc73441(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  uVar2 = 0xffffffffffffffff - (local_res18 & unaff_R15) &
          (~(local_res18 & unaff_R15) + unaff_R15) - ~local_res18;
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x6e206e2e;
  *puVar1 = *puVar1 ^ 0x6e206e2e;
  *puVar1 = *puVar1 + param_1;
  if (*puVar1 == 0) {
    *(ulonglong *)(uVar2 - 0x10) = *puVar1;
    *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
    *(undefined8 *)(uVar2 - 0x20) = unaff_retaddr;
    *(undefined8 *)(uVar2 - 0x28) = param_4;
    uVar3 = *(undefined8 *)(uVar2 - 0x28);
    *(undefined8 *)(uVar2 - 8) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(uVar2 - 0x18);
    *(longlong *)(uVar2 - 8) = (longlong)(&DAT_166392164 + *(longlong *)(uVar2 - 8));
                    /* WARNING: Could not recover jumptable at 0x000166392148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(uVar2 - 0x10),param_2,param_3,uVar3);
    return;
  }
  FUN_1663920e8();
  return;
}



// FUNCTION 14dc73585 FUN_14dc73585 body=434 status=ok
// SIG undefined FUN_14dc73585(void)

void FUN_14dc73585(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  longlong local_res10;
  longlong *local_res20;
  
  uVar9 = *(ulonglong *)(unaff_RDI + -0x30);
  uVar7 = ~uVar9 & ~unaff_retaddr | uVar9;
  puVar4 = (ushort *)~(uVar7 & (~uVar9 | unaff_retaddr));
  uVar9 = *(ulonglong *)(unaff_RDI + -0x60);
  lVar5 = 8;
  uVar8 = uVar9;
  uVar3 = FUN_15692a7f4();
  *puVar4 = -~*puVar4 - (1 - (-0x101 - (short)uVar7));
  plVar1 = local_res20 + -1;
  *plVar1 = local_res10;
  local_res20[-2] = uVar3;
  local_res20[-2] = 0x14dc736a0;
  FUN_14e088687();
  *plVar1 = *plVar1;
  local_res20[-2] = unaff_R15;
  lVar2 = *plVar1;
  *plVar1 = lVar5;
  lVar6 = (0xffffffffffffffff - ~(~uVar8 & ~unaff_R15) |
          local_res20[-2] ^ 0xffffffffffffffffU | 0xfffffffeb1f77978) + ~(~uVar8 & ~unaff_R15) + 1;
  lVar5 = *plVar1;
  *local_res20 = lVar6;
  *plVar1 = lVar6;
  local_res20[-2] = unaff_R15;
  *local_res20 = *(longlong *)(unaff_R13 + -0x70);
  local_res20[-2] = uVar9;
  local_res20[-3] = uVar9;
  local_res20[-2] = (longlong)&LAB_14dc7373a;
  FUN_1651f133d(lVar2,lVar5);
  return;
}



// FUNCTION 14dc73870 FUN_14dc73870 body=334 status=ok
// SIG undefined FUN_14dc73870(void)

void FUN_14dc73870(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = 0x14dc73917;
  FUN_15b592474(local_res8,uVar1);
  FUN_166dcd0a3();
  return;
}



// FUNCTION 14dc739c1 FUN_14dc739c1 body=328 status=ok
// SIG undefined FUN_14dc739c1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc73a5e) */

void FUN_14dc739c1(ulonglong param_1)

{
  longlong unaff_RDI;
  
  thunk_FUN_162e473d9(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                              (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
  return;
}



// FUNCTION 14dc73cb0 FUN_14dc73cb0 body=327 status=ok
// SIG undefined FUN_14dc73cb0(void)

/* WARNING: Removing unreachable block (ram,0x0001627eda91) */
/* WARNING: Removing unreachable block (ram,0x0001627edaa2) */
/* WARNING: Removing unreachable block (ram,0x0001627eda97) */
/* WARNING: Removing unreachable block (ram,0x00014dc73d65) */

void FUN_14dc73cb0(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0xa0) == unaff_R15) {
    return;
  }
  FUN_1627eda14();
  return;
}



// FUNCTION 14dc73ea2 FUN_14dc73ea2 body=156 status=ok
// SIG undefined FUN_14dc73ea2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc73f1b) */
/* WARNING: Removing unreachable block (ram,0x00014dc73f21) */
/* WARNING: Removing unreachable block (ram,0x00014dc73f26) */

void FUN_14dc73ea2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  ushort uVar4;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 local_res20;
  undefined6 uStackX_22;
  
  uVar3 = unaff_retaddr ^ 0xffffffffffffffff;
  uVar5 = *(ulonglong *)(unaff_R13 + 0x10);
  lVar1 = *(longlong *)(unaff_R13 + 0x10);
  lVar2 = *(longlong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = ~*(ulonglong *)(unaff_R13 + 0x10);
  *(ulonglong *)(unaff_R13 + 0x10) = *(ulonglong *)(unaff_R13 + 0x10) | unaff_RBP;
  *(ulonglong *)(unaff_R13 + 0x10) =
       ~((~((lVar1 - (uVar3 | uVar5)) + uVar3) + lVar2) - ~uVar3) |
       0xffffffffffffffffU - *(longlong *)(unaff_R13 + 0x10);
  uVar4 = (local_res20 | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -8) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x10) = unaff_RBX;
  *(undefined4 *)(param_5 + -0x18) = 0x1029d7c8;
  *(undefined4 *)(param_5 + -0x14) = 0;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = local_res8;
  uVar5 = *(ulonglong *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_RDI;
  *(ulonglong *)(param_5 + -0x20) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  FUN_160d543a4(param_1,param_2,local_res10,param_4);
  return;
}



// FUNCTION 14dc73fc6 FUN_14dc73fc6 body=175 status=ok
// SIG undefined FUN_14dc73fc6(void)

void FUN_14dc73fc6(void)

{
  return;
}



// FUNCTION 14dc741b7 FUN_14dc741b7 body=59 status=ok
// SIG undefined FUN_14dc741b7(void)

/* WARNING: Removing unreachable block (ram,0x00014df502e5) */
/* WARNING: Removing unreachable block (ram,0x00014df502f0) */
/* WARNING: Removing unreachable block (ram,0x00014dc7436a) */
/* WARNING: Removing unreachable block (ram,0x00014dc74370) */
/* WARNING: Removing unreachable block (ram,0x00014dc7440a) */
/* WARNING: Removing unreachable block (ram,0x00014dc74410) */
/* WARNING: Removing unreachable block (ram,0x0001620894de) */
/* WARNING: Removing unreachable block (ram,0x00014dc7421a) */
/* WARNING: Removing unreachable block (ram,0x000162478577) */
/* WARNING: Removing unreachable block (ram,0x00016247860e) */
/* WARNING: Removing unreachable block (ram,0x000162478614) */
/* WARNING: Removing unreachable block (ram,0x00014df5023d) */
/* WARNING: Removing unreachable block (ram,0x00014df502da) */
/* WARNING: Removing unreachable block (ram,0x00014df502eb) */

undefined8 FUN_14dc741b7(void)

{
  undefined8 uVar1;
  
  FUN_15743b5d0();
  FUN_161316e17();
  uVar1 = FUN_162478577();
  return uVar1;
}



// FUNCTION 14dc74242 FUN_14dc74242 body=600 status=ok
// SIG undefined FUN_14dc74242(void)

/* WARNING: Removing unreachable block (ram,0x00014df502e5) */
/* WARNING: Removing unreachable block (ram,0x00014df502f0) */
/* WARNING: Removing unreachable block (ram,0x00014dc74410) */
/* WARNING: Removing unreachable block (ram,0x00014dc7436a) */
/* WARNING: Removing unreachable block (ram,0x00014dc74370) */
/* WARNING: Removing unreachable block (ram,0x00014dc7440a) */
/* WARNING: Removing unreachable block (ram,0x0001620894de) */
/* WARNING: Removing unreachable block (ram,0x000162478577) */
/* WARNING: Removing unreachable block (ram,0x00016247860e) */
/* WARNING: Removing unreachable block (ram,0x000162478614) */
/* WARNING: Removing unreachable block (ram,0x00014df5023d) */
/* WARNING: Removing unreachable block (ram,0x00014df502da) */
/* WARNING: Removing unreachable block (ram,0x00014df502eb) */

undefined8 FUN_14dc74242(void)

{
  undefined8 uVar1;
  
  FUN_161316e17();
  uVar1 = FUN_162478577();
  return uVar1;
}



// FUNCTION 14dc7452f FUN_14dc7452f body=622 status=ok
// SIG undefined FUN_14dc7452f(void)

/* WARNING: Removing unreachable block (ram,0x00014e221c60) */
/* WARNING: Removing unreachable block (ram,0x00014e221c9c) */
/* WARNING: Removing unreachable block (ram,0x00014e221d3a) */
/* WARNING: Removing unreachable block (ram,0x00014e221d3f) */
/* WARNING: Removing unreachable block (ram,0x0001658d67da) */
/* WARNING: Removing unreachable block (ram,0x00014e221d45) */
/* WARNING: Removing unreachable block (ram,0x00014e221c29) */
/* WARNING: Removing unreachable block (ram,0x00014dc745c2) */
/* WARNING: Removing unreachable block (ram,0x00014dc745f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc74609) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014e221c44 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc7452f(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong in_R11;
  
  uVar2 = 0xd7ba591;
  lVar1 = FUN_162b0ca36();
  *(ulonglong *)(in_R11 + 8) =
       ((~(uVar2 & *(ulonglong *)(in_R11 + 8)) + *(longlong *)(in_R11 + 8)) - ~uVar2) + lVar1 + 1;
  FUN_166dad1d1(FUN_166dad1d1);
  return;
}



// FUNCTION 14dc745c2 FUN_14dc745c2 body=161 status=ok
// SIG undefined FUN_14dc745c2(void)

void FUN_14dc745c2(void)

{
  int local_res20;
  
  if (local_res20 < 0) {
    return;
  }
  FUN_1629425e1(FUN_1629425e1);
  return;
}



// FUNCTION 14dc74663 FUN_14dc74663 body=164 status=ok
// SIG undefined FUN_14dc74663(void)

void FUN_14dc74663(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161b94799(FUN_161b94799,0xffffffffffffffb8,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ((unaff_RBX - 1) - ~-(~(param_3 + 1U) | unaff_RBX)) + ~(param_3 + 1U));
  return;
}



// FUNCTION 14dc747a5 FUN_14dc747a5 body=128 status=ok
// SIG undefined FUN_14dc747a5(void)

void FUN_14dc747a5(void)

{
  FUN_1616dd448();
  return;
}



// FUNCTION 14dc748cf FUN_14dc748cf body=170 status=ok
// SIG undefined FUN_14dc748cf(void)

void FUN_14dc748cf(void)

{
  (*(code *)0x164c3b7ee)();
  return;
}



// FUNCTION 14dc7497a FUN_14dc7497a body=185 status=ok
// SIG undefined FUN_14dc7497a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc74a10) */

void FUN_14dc7497a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x15b48bd46)
            (~((0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dc74ada FUN_14dc74ada body=303 status=ok
// SIG undefined FUN_14dc74ada(void)

/* WARNING: Removing unreachable block (ram,0x00014dc74bff) */
/* WARNING: Removing unreachable block (ram,0x00014dc74c0a) */
/* WARNING: Removing unreachable block (ram,0x00014dc74b98) */
/* WARNING: Removing unreachable block (ram,0x00014dc74c05) */
/* WARNING: Removing unreachable block (ram,0x00014dc74b83) */

undefined8 FUN_14dc74ada(longlong param_1)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  
  plVar1 = (longlong *)(&stack0xfffffffffa56b0a0 + in_RAX);
  *(undefined4 *)plVar1 = 0xad8dacfd;
  *(undefined4 *)((longlong)plVar1 + 4) = 0xffffffff;
  plVar1[1] = *(undefined8 *)(param_1 + *plVar1 + 0x5272527b);
  *(undefined4 *)plVar1 = 0;
  *(undefined4 *)((longlong)plVar1 + 4) = 0;
  lVar3 = *plVar1 + plVar1[1] + unaff_RBX + (*plVar1 + plVar1[1] & unaff_RBX) * -2;
  plVar1[1] = unaff_RSI;
  if (lVar3 == 0) {
    uVar2 = FUN_1662b2fd1(param_1,0,0);
    return uVar2;
  }
  uVar2 = FUN_1662b2fd1(param_1,lVar3,lVar3);
  return uVar2;
}



// FUNCTION 14dc74c0a FUN_14dc74c0a body=91 status=ok
// SIG undefined FUN_14dc74c0a(void)

void FUN_14dc74c0a(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_R14;
  longlong local_res10;
  
  uVar2 = ~(~(param_1 & 0xffffffffc3a41eb0) & (param_1 | 0xffffffffc3a41eb0));
  *(undefined8 *)((longlong)&local_res10 + uVar2) = 0;
  plVar1 = (longlong *)((longlong)&local_res10 + uVar2);
  *plVar1 = *plVar1 + unaff_R14;
  return;
}



// FUNCTION 14dc74c96 FUN_14dc74c96 body=708 status=ok
// SIG undefined FUN_14dc74c96(void)

/* WARNING: Removing unreachable block (ram,0x00014dc74e0c) */
/* WARNING: Removing unreachable block (ram,0x00014dc74e17) */
/* WARNING: Removing unreachable block (ram,0x00014dc74e12) */
/* WARNING: Removing unreachable block (ram,0x00014dc74d51) */
/* WARNING: Removing unreachable block (ram,0x000160d0e6b3) */
/* WARNING: Removing unreachable block (ram,0x00014dc74d5d) */

void FUN_14dc74c96(void)

{
  FUN_160d0e6b3();
  return;
}



// FUNCTION 14dc74f5d FUN_14dc74f5d body=124 status=ok
// SIG undefined FUN_14dc74f5d(void)

void FUN_14dc74f5d(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc7514a FUN_14dc7514a body=131 status=ok
// SIG undefined FUN_14dc7514a(void)

void FUN_14dc7514a(byte param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_stack_00000030;
  
  FUN_165157317(~in_stack_00000030 & param_1 | in_stack_00000030,
                *(longlong *)(unaff_R13 + -0x48) + unaff_R15,
                ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dc7531c FUN_14dc7531c body=142 status=ok
// SIG undefined FUN_14dc7531c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc753ac) */

void FUN_14dc7531c(void)

{
  longlong unaff_RDI;
  
  if (-1 < unaff_RDI + -0x88) {
    FUN_1649f01a6();
    return;
  }
  FUN_1649f01a6();
  return;
}



// FUNCTION 14dc753ac FUN_14dc753ac body=148 status=ok
// SIG undefined FUN_14dc753ac(void)

void FUN_14dc753ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_1658e8224(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc754e5 FUN_14dc754e5 body=310 status=ok
// SIG undefined FUN_14dc754e5(void)

void FUN_14dc754e5(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  FUN_1649ce1c5();
  FUN_166c5e7af(uVar1,0xffffffffddffff79,FUN_166c5e7af,0xffffffffeed5a5ff);
  return;
}



// FUNCTION 14dc758a0 FUN_14dc758a0 body=151 status=ok
// SIG undefined FUN_14dc758a0(void)

void FUN_14dc758a0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 in_stack_00000008;
  
  puVar1 = (ulonglong *)(-(~(ulonglong)&stack0x00000000 + 2) + 0x21);
  *puVar1 = *puVar1 ^ 0xffffffffffffffff;
  puVar1 = (ulonglong *)(-(~(ulonglong)&stack0x00000000 + 2) + 0x21);
  *puVar1 = *puVar1 | param_1;
  FUN_160f01083(FUN_160f01083,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dc7593d FUN_14dc7593d body=51 status=ok
// SIG undefined FUN_14dc7593d(void)

void FUN_14dc7593d(void)

{
  char in_ZF;
  
  if (in_ZF != '\0') {
    FUN_16214b73a();
    return;
  }
  (*(code *)&LAB_156c32337)();
  return;
}



// FUNCTION 14dc759bf FUN_14dc759bf body=57 status=ok
// SIG undefined FUN_14dc759bf(void)

void FUN_14dc759bf(longlong param_1)

{
  *(undefined8 *)(&stack0x00000010 + param_1) = 0;
  return;
}



// FUNCTION 14dc75a5c FUN_14dc75a5c body=269 status=ok
// SIG undefined FUN_14dc75a5c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc75ae5) */
/* WARNING: Removing unreachable block (ram,0x00014dc75b45) */

void FUN_14dc75a5c(void)

{
  return;
}



// FUNCTION 14dc75ae5 FUN_14dc75ae5 body=120 status=ok
// SIG undefined FUN_14dc75ae5(void)

void FUN_14dc75ae5(void)

{
  char in_AL;
  undefined1 local_res8;
  undefined8 local_res20;
  
  LOCK();
  if (in_AL == DAT_14d7c119c) {
    DAT_14d7c119c = local_res8;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = 0x23ea6d6;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc75b87 FUN_14dc75b87 body=168 status=ok
// SIG undefined FUN_14dc75b87(void)

/* WARNING: Removing unreachable block (ram,0x00014dc75bd6) */

void FUN_14dc75b87(void)

{
  return;
}



// FUNCTION 14dc75e65 FUN_14dc75e65 body=42 status=ok
// SIG undefined FUN_14dc75e65(void)

void FUN_14dc75e65(void)

{
  FUN_14d7a506a();
  return;
}



// FUNCTION 14dc760bd FUN_14dc760bd body=285 status=ok
// SIG undefined FUN_14dc760bd(void)

void FUN_14dc760bd(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  short *psVar3;
  short unaff_R12W;
  undefined4 unaff_R13D;
  undefined4 unaff_000000ac;
  ulonglong unaff_R15;
  undefined8 uStackX_18;
  longlong in_stack_00000030;
  
  uVar1 = *(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x50);
  psVar3 = (short *)~(unaff_R15 & ~uVar1 | ~(~uVar1 | unaff_R15));
  uVar2 = FUN_166b0cb4a();
  *psVar3 = unaff_R12W + -0x34b5;
  *(undefined8 *)(in_stack_00000030 + -8) = uVar2;
  *(undefined8 *)(in_stack_00000030 + -0x10) = uStackX_18;
  *(undefined8 *)(in_stack_00000030 + -0x18) = uStackX_18;
  *(undefined8 *)(in_stack_00000030 + -0x20) = param_1;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RBX;
  *(undefined **)(in_stack_00000030 + -8) = &DAT_16123e920;
  *(undefined1 **)(in_stack_00000030 + -0x18) = &LAB_16123e8ac;
  return;
}



// FUNCTION 14dc76265 FUN_14dc76265 body=10 status=ok
// SIG undefined FUN_14dc76265(void)

void FUN_14dc76265(void)

{
  (*(code *)&LAB_156c3b4fe)();
  return;
}



// FUNCTION 14dc762e9 FUN_14dc762e9 body=88 status=ok
// SIG undefined FUN_14dc762e9(void)

undefined8 FUN_14dc762e9(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + (-~in_R10 - (~param_1 + 2))) = param_4;
  return unaff_retaddr;
}



// FUNCTION 14dc764a9 FUN_14dc764a9 body=143 status=ok
// SIG undefined FUN_14dc764a9(void)

/* WARNING: Removing unreachable block (ram,0x00015b259fe2) */
/* WARNING: Removing unreachable block (ram,0x00014dc76538) */

void FUN_14dc764a9(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong unaff_RDI;
  bool bVar2;
  undefined1 uStackX_20;
  int in_stack_00000030;
  
  bVar2 = (int)(((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xfd,uStackX_20)) ^
                0xfd00) + in_stack_00000030) < 0;
  if ((!bVar2) && (bVar2)) {
    FUN_156d4d9f0();
    FUN_16162fd2d();
    FUN_156afb8e6();
    FUN_160d33dd3();
    FUN_165a0a6b0();
    FUN_1661f7c86();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  thunk_FUN_15b118993(thunk_FUN_15b118993,
                      0xffffffffffffffff - ((~(~param_1 & uVar1) + uVar1) - param_1) |
                      ~(uVar1 ^ 0xffffffffffffffff | param_1),
                      *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  return;
}



// FUNCTION 14dc76538 FUN_14dc76538 body=113 status=ok
// SIG undefined FUN_14dc76538(void)

void FUN_14dc76538(HANDLE param_1,DWORD param_2,SIZE_T param_3)

{
  ulonglong *puVar1;
  longlong unaff_R14;
  longlong lVar2;
  ulonglong local_res8;
  ulonglong uStackX_20;
  
  lVar2 = unaff_R14 + (local_res8 ^ 0x3a1db76);
  *(undefined8 *)((longlong)&uStackX_20 + lVar2) = 0x70ada516;
  puVar1 = (ulonglong *)((longlong)&uStackX_20 + lVar2);
  *puVar1 = *puVar1 ^ 0x70ada516;
                    /* WARNING: Could not recover jumptable at 0x00014dc765a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc7668d FUN_14dc7668d body=135 status=ok
// SIG undefined FUN_14dc7668d(void)

void FUN_14dc7668d(void)

{
  uint *puVar1;
  int *piVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_R12;
  longlong lVar3;
  undefined8 unaff_R14;
  byte in_CF;
  
  lVar3 = (unaff_R12 + -0xb3f72a1) - (ulonglong)((in_CF & 1) != 0);
  puVar1 = (uint *)(&stack0xfffffffff4c08d6f + lVar3 + 0xb3f72a1);
  *puVar1 = 0x684f51a9;
  *puVar1 = *puVar1 ^ 0x6541f179;
  *(undefined8 *)(&stack0xfffffffff4c08d67 + lVar3 + 0xb3f72a1) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff4c08d67 + lVar3 + 0xb3f72a1) = 0xa12480a;
  piVar2 = (int *)(&stack0xfffffffff4c08d5f + lVar3 + 0xb3f72a1);
  *(undefined8 *)(piVar2 + -2) = unaff_R14;
  *piVar2 = 0;
  piVar2[3] = 0;
  piVar2[3] = piVar2[3] - *piVar2;
  piVar2[3] = -piVar2[3];
  *(undefined8 *)(piVar2 + 2) = unaff_RBP;
  piVar2[0] = 0x4dc7671d;
  piVar2[1] = 1;
  FUN_1665ace16();
  FUN_14dc76722();
  return;
}



// FUNCTION 14dc76722 FUN_14dc76722 body=63 status=ok
// SIG undefined FUN_14dc76722(void)

void FUN_14dc76722(void)

{
  longlong unaff_R12;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc7675a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R12 + 0xe0))();
  return;
}



// FUNCTION 14dc768de FUN_14dc768de body=184 status=ok
// SIG undefined FUN_14dc768de(void)

void FUN_14dc768de(undefined8 param_1,longlong param_2)

{
  ulonglong in_R10;
  
  FUN_165cf6f10(*(undefined8 *)(param_2 + -0x28),param_2,-*(longlong *)(param_2 + -0x88),
                *(ulonglong *)(param_2 + -0x60) ^ in_R10);
  return;
}



// FUNCTION 14dc7699a FUN_14dc7699a body=495 status=ok
// SIG undefined FUN_14dc7699a(void)

/* WARNING: Removing unreachable block (ram,0x00015b81092d) */
/* WARNING: Removing unreachable block (ram,0x00014dc76a43) */

void FUN_14dc7699a(void)

{
  return;
}



// FUNCTION 14dc76a43 FUN_14dc76a43 body=152 status=ok
// SIG undefined FUN_14dc76a43(void)

void FUN_14dc76a43(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_16622f583(param_1,unaff_RDI +
                        (-~param_2 -
                        (~((unaff_RBP - 1) - ~-((unaff_RSI + unaff_RBP) - (unaff_RSI & unaff_RBP)))
                        + 2)) * -2);
  return;
}



// FUNCTION 14dc76b69 FUN_14dc76b69 body=141 status=ok
// SIG undefined FUN_14dc76b69(void)

void FUN_14dc76b69(void)

{
  (*(code *)&LAB_156925883)(&LAB_156925883);
  return;
}



// FUNCTION 14dc76c00 FUN_14dc76c00 body=322 status=ok
// SIG undefined FUN_14dc76c00(void)

void FUN_14dc76c00(void)

{
  (*(code *)0x156fff78f)();
  return;
}



// FUNCTION 14dc76d35 FUN_14dc76d35 body=79 status=ok
// SIG undefined FUN_14dc76d35(void)

void FUN_14dc76d35(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14dc76f1b FUN_14dc76f1b body=298 status=ok
// SIG undefined FUN_14dc76f1b(void)

/* WARNING: Removing unreachable block (ram,0x000156ec9c62) */
/* WARNING: Removing unreachable block (ram,0x000156ec9c7f) */
/* WARNING: Removing unreachable block (ram,0x0001618d0ca3) */
/* WARNING: Removing unreachable block (ram,0x0001618d0ca9) */
/* WARNING: Removing unreachable block (ram,0x0001618d0d38) */
/* WARNING: Removing unreachable block (ram,0x000164f79f31) */
/* WARNING: Removing unreachable block (ram,0x0001618d0d3e) */
/* WARNING: Removing unreachable block (ram,0x0001618d0dd1) */
/* WARNING: Removing unreachable block (ram,0x0001618d0dd6) */
/* WARNING: Removing unreachable block (ram,0x0001618d0de2) */
/* WARNING: Removing unreachable block (ram,0x0001618d0de7) */
/* WARNING: Removing unreachable block (ram,0x000156ec9c6e) */
/* WARNING: Removing unreachable block (ram,0x00014dc770ef) */
/* WARNING: Removing unreachable block (ram,0x000156ec9bf2) */
/* WARNING: Removing unreachable block (ram,0x00014dc770e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14dc76f1b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1655ef510(param_1,param_2,param_3,param_4);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = ~(uVar2 & unaff_R15) & (~(uVar2 & unaff_R15) + unaff_R15) - ~uVar2;
  FUN_16210049e(uVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  uVar1 = FUN_165b5b0cb(uVar2,((uVar2 - 1) - ~_DAT_ffffffffffffff78) +
                              (_DAT_ffffffffffffff78 & uVar2) * -2,
                        _DAT_ffffffffffffff88 + uVar2 + (_DAT_ffffffffffffff88 & uVar2) * -2,
                        _DAT_ffffffffffffff98 ^ uVar2);
  return uVar1;
}



// FUNCTION 14dc77058 FUN_14dc77058 body=316 status=ok
// SIG undefined FUN_14dc77058(void)

/* WARNING: Removing unreachable block (ram,0x000156ec9c62) */
/* WARNING: Removing unreachable block (ram,0x000156ec9c7f) */
/* WARNING: Removing unreachable block (ram,0x0001618d0ca3) */
/* WARNING: Removing unreachable block (ram,0x0001618d0ca9) */
/* WARNING: Removing unreachable block (ram,0x0001618d0d38) */
/* WARNING: Removing unreachable block (ram,0x000164f79f31) */
/* WARNING: Removing unreachable block (ram,0x0001618d0d3e) */
/* WARNING: Removing unreachable block (ram,0x0001618d0dd1) */
/* WARNING: Removing unreachable block (ram,0x0001618d0dd6) */
/* WARNING: Removing unreachable block (ram,0x0001618d0de2) */
/* WARNING: Removing unreachable block (ram,0x0001618d0de7) */
/* WARNING: Removing unreachable block (ram,0x000156ec9c6e) */
/* WARNING: Removing unreachable block (ram,0x00014dc770ef) */
/* WARNING: Removing unreachable block (ram,0x000156ec9bf2) */
/* WARNING: Removing unreachable block (ram,0x00014dc770e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dc77058(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = ~(uVar2 & unaff_R15) & (~(uVar2 & unaff_R15) + unaff_R15) - ~uVar2;
  FUN_16210049e(uVar2,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  uVar1 = FUN_165b5b0cb(uVar2,((uVar2 - 1) - ~_DAT_ffffffffffffff78) +
                              (_DAT_ffffffffffffff78 & uVar2) * -2,
                        _DAT_ffffffffffffff88 + uVar2 + (_DAT_ffffffffffffff88 & uVar2) * -2,
                        _DAT_ffffffffffffff98 ^ uVar2);
  return uVar1;
}



// FUNCTION 14dc77636 FUN_14dc77636 body=135 status=ok
// SIG undefined FUN_14dc77636(void)

void FUN_14dc77636(void)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161627efb(*(undefined8 *)(unaff_R13 + -0x68),-unaff_RSI ^ unaff_R15);
  return;
}



// FUNCTION 14dc77800 FUN_14dc77800 body=156 status=ok
// SIG undefined FUN_14dc77800(void)

void FUN_14dc77800(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 local_res10;
  ushort local_res20;
  uint6 uStackX_22;
  
  *(ulonglong *)(unaff_RBP + 8) =
       ~((*(longlong *)(unaff_RBP + 8) - (unaff_RBX | *(ulonglong *)(unaff_RBP + 8))) + unaff_RBX);
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = local_res10;
  *(undefined8 *)(param_5 - 0x10) = local_res10;
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined4 *)(param_5 - 0x18) = 0xdc239b4;
  *(undefined4 *)(param_5 - 0x14) = 0;
  *(ulonglong *)(param_5 - 0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 - 0x20) = unaff_R12;
  *(undefined8 *)(param_5 - 0x28) = param_2;
  *(undefined8 *)(param_5 - 0x28) = in_R11;
  *(undefined8 *)(param_5 - 0x30) = in_R11;
  *(undefined8 *)(param_5 - 0x38) = in_R11;
  *(undefined **)(param_5 - 0x28) = &DAT_14dc7789c;
  *(undefined1 **)(param_5 - 0x30) = &LAB_156721825;
  return;
}



// FUNCTION 14dc77a35 FUN_14dc77a35 body=165 status=ok
// SIG undefined FUN_14dc77a35(void)

void FUN_14dc77a35(void)

{
  FUN_14dba8e1d();
  (*(code *)&LAB_16629f9ce)(&LAB_16629f9ce);
  return;
}



// FUNCTION 14dc77adb FUN_14dc77adb body=138 status=ok
// SIG undefined FUN_14dc77adb(void)

void FUN_14dc77adb(undefined8 param_1)

{
  FUN_156aa1875(param_1);
  return;
}



// FUNCTION 14dc77b67 FUN_14dc77b67 body=151 status=ok
// SIG undefined FUN_14dc77b67(void)

undefined8 FUN_14dc77b67(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14dc77ca6 FUN_14dc77ca6 body=33 status=ok
// SIG undefined FUN_14dc77ca6(void)

void FUN_14dc77ca6(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *unaff_RBP;
  longlong unaff_R14;
  ulonglong local_res10 [3];
  
  *(undefined4 *)((longlong)local_res10 + unaff_R14) = 0xdb2aaf3;
  *unaff_RBP = param_3 ^ local_res10[0];
  thunk_FUN_15b7ddc7c();
  return;
}



// FUNCTION 14dc77f3d FUN_14dc77f3d body=140 status=ok
// SIG undefined FUN_14dc77f3d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78064) */

void FUN_14dc77f3d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 in_R10;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined **)(uVar1 - 8) = &DAT_156535824;
  *(code **)(uVar1 - 0x18) = FUN_14dc77fc9;
  uVar3 = FUN_1565357f6(param_1,param_2,param_3,param_4);
  *(undefined8 *)(uVar1 - 0x10) = uVar3;
  *(undefined4 *)(uVar1 - 0x10) = 0;
  *(undefined4 *)(uVar1 - 0xc) = 0;
  uVar2 = *(ulonglong *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = uVar3;
  *(ulonglong *)(uVar1 - 0x18) = uVar2 ^ ~unaff_RBP;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 0x10);
  if ((unaff_R13 - unaff_R15) + (~unaff_R15 | unaff_R13) * -2 + -2 == 0x50) {
    FUN_165c42866();
    return;
  }
  FUN_165c42866();
  return;
}



// FUNCTION 14dc77fc9 FUN_14dc77fc9 body=274 status=ok
// SIG undefined FUN_14dc77fc9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78064) */

void FUN_14dc77fc9(void)

{
  longlong unaff_R13;
  
  if (unaff_R13 == 0x50) {
    FUN_165c42866();
    return;
  }
  FUN_165c42866();
  return;
}



// FUNCTION 14dc780fb FUN_14dc780fb body=134 status=ok
// SIG undefined FUN_14dc780fb(void)

undefined8 FUN_14dc780fb(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14dc783e4 FUN_14dc783e4 body=312 status=ok
// SIG undefined FUN_14dc783e4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78477) */
/* WARNING: Removing unreachable block (ram,0x00014dc78482) */
/* WARNING: Removing unreachable block (ram,0x00014dc7847d) */

void FUN_14dc783e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_161df7b61(in_stack_00000010,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc78595 FUN_14dc78595 body=594 status=ok
// SIG undefined FUN_14dc78595(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7887d) */
/* WARNING: Removing unreachable block (ram,0x00014dc78883) */
/* WARNING: Removing unreachable block (ram,0x00014dc7890d) */
/* WARNING: Removing unreachable block (ram,0x00014dc78913) */
/* WARNING: Removing unreachable block (ram,0x0001667c6c94) */
/* WARNING: Removing unreachable block (ram,0x0001620efd84) */
/* WARNING: Removing unreachable block (ram,0x00014dc787e9) */
/* WARNING: Removing unreachable block (ram,0x00014dc7882e) */
/* WARNING: Removing unreachable block (ram,0x00014dc78864) */

void FUN_14dc78595(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_161615621(param_1,param_2,param_3);
  FUN_1663f7c81();
  FUN_16120ebb7();
  if (param_4 < 0) {
    FUN_166c33a23();
    return;
  }
  return;
}



// FUNCTION 14dc787e9 FUN_14dc787e9 body=581 status=ok
// SIG undefined FUN_14dc787e9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7887d) */
/* WARNING: Removing unreachable block (ram,0x00014dc78883) */
/* WARNING: Removing unreachable block (ram,0x00014dc7890d) */
/* WARNING: Removing unreachable block (ram,0x00014dc78913) */
/* WARNING: Removing unreachable block (ram,0x0001667c6c94) */
/* WARNING: Removing unreachable block (ram,0x0001620efd84) */

void FUN_14dc787e9(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + param_3) = in_RAX;
  FUN_1620efd84();
  return;
}



// FUNCTION 14dc78999 FUN_14dc78999 body=195 status=ok
// SIG undefined FUN_14dc78999(void)

void FUN_14dc78999(void)

{
  FUN_14db3918a();
  return;
}



// FUNCTION 14dc78b79 FUN_14dc78b79 body=142 status=ok
// SIG undefined FUN_14dc78b79(void)

void FUN_14dc78b79(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  byte bVar3;
  undefined8 unaff_R15;
  byte in_CF;
  longlong lStackX_20;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xbb) ^ 0x35;
  bVar3 = (byte)uVar2;
  bVar3 = ~(bVar3 & 0x71) & (bVar3 | 0x71);
  if ((in_CF & 1) != 0) {
    bVar3 = bVar3 + 1;
  }
  uVar1 = FUN_164964659();
  *(undefined8 *)(lStackX_20 + -8) = in_R9;
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_RBP;
  *(ulonglong *)(lStackX_20 + -0x10) = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar3);
  *(undefined8 *)(lStackX_20 + -0x10) = unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_R15;
  *(ulonglong *)(lStackX_20 + -0x20) = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3);
  *(undefined4 *)(lStackX_20 + -0x28) = 0xf632d4e2;
  *(undefined4 *)(lStackX_20 + -0x24) = 0xffffffff;
  *(ulonglong *)(lStackX_20 + -0x28) = uVar2;
  *(undefined8 *)(lStackX_20 + -0x30) = uVar1;
  *(undefined8 *)(lStackX_20 + -0x38) = uVar1;
  *(code **)(lStackX_20 + -0x30) = FUN_14dc78cc9;
  (*(code *)0x166670a89)();
  return;
}



// FUNCTION 14dc78c07 FUN_14dc78c07 body=193 status=ok
// SIG undefined FUN_14dc78c07(void)

void FUN_14dc78c07(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = in_R9;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined4 *)(local_res20 + -0x28) = 0xf632d4e2;
  *(undefined4 *)(local_res20 + -0x24) = 0xffffffff;
  *(undefined8 *)(local_res20 + -0x28) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x30) = in_RAX;
  *(undefined8 *)(local_res20 + -0x38) = in_RAX;
  *(code **)(local_res20 + -0x30) = FUN_14dc78cc9;
  (*(code *)0x166670a89)();
  return;
}



// FUNCTION 14dc78cc9 FUN_14dc78cc9 body=154 status=ok
// SIG undefined FUN_14dc78cc9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78d18) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc78cc9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  FUN_14dda078a(local_res20 + unaff_R15 + (local_res20 & unaff_R15) * -2,unaff_retaddr,param_3,
                FUN_14dda078a);
  return;
}



// FUNCTION 14dc78d63 FUN_14dc78d63 body=166 status=ok
// SIG undefined FUN_14dc78d63(void)

void FUN_14dc78d63(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_1629d18e1(0xa6,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -8),
                *(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dc78e0d FUN_14dc78e0d body=167 status=ok
// SIG undefined FUN_14dc78e0d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78eb1) */
/* WARNING: Removing unreachable block (ram,0x000161c96110) */
/* WARNING: Removing unreachable block (ram,0x00014dc78ea0) */
/* WARNING: Removing unreachable block (ram,0x000161c96202) */

undefined8 FUN_14dc78e0d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lStackX_8;
  
  uVar1 = 0xffffffffffffff78;
  FUN_16475576c();
  if (lStackX_8 != -0x97c1da4) {
    uVar1 = FUN_165698c2a(uVar1,param_2);
    return uVar1;
  }
  uVar1 = FUN_165698ca0();
  return uVar1;
}



// FUNCTION 14dc78eb7 FUN_14dc78eb7 body=54 status=ok
// SIG undefined FUN_14dc78eb7(void)

void FUN_14dc78eb7(void)

{
  return;
}



// FUNCTION 14dc78f54 FUN_14dc78f54 body=156 status=ok
// SIG undefined FUN_14dc78f54(void)

/* WARNING: Removing unreachable block (ram,0x00014dc78fd7) */

void FUN_14dc78f54(undefined8 param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uVar3;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  if (((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x50)) &
      (~*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15)) != 0xffffffffffffffff) {
    uVar3 = *(undefined8 *)(unaff_R13 + -0x70);
    FUN_1620829c5();
    uVar2 = *(undefined8 *)((uVar1 ^ unaff_R15) - 0x30);
    FUN_166187d90(param_1,uVar2,uVar2,
                  ((unaff_RBP | unaff_R15) - (~(unaff_RSI & unaff_R15) | unaff_RBP | unaff_R15)) +
                  ~(unaff_RSI & unaff_R15),uVar3);
    return;
  }
  FUN_1667f2a00();
  return;
}



// FUNCTION 14dc791ba FUN_14dc791ba body=160 status=ok
// SIG undefined FUN_14dc791ba(void)

void FUN_14dc791ba(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  local_res8[1] =
       ~((~in_RAX | local_res8[1]) + in_RAX + 1) &
       (*(ulonglong *)
         ((longlong)local_res8 + ~(~(param_2 & 0xffffffffcf1eec27) & (param_2 | 0xffffffffcf1eec27))
         ) | in_RAX);
  local_res8[2] = local_res8[2] ^ in_RAX;
  local_res8[3] = local_res8[3] ^ in_RAX;
  FUN_14d8cdaa2(local_res8[0],unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14dc7925a FUN_14dc7925a body=268 status=ok
// SIG undefined FUN_14dc7925a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc79366) */

void FUN_14dc7925a(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),0x2c);
  FUN_160c242c3();
  if ((*(ulonglong *)(unaff_RDI + -0x60) - uVar1) +
      (~uVar1 | *(ulonglong *)(unaff_RDI + -0x60)) * -2 + -2 == 0) {
    FUN_160c45a2d(uVar1);
    return;
  }
  FUN_160c45a2d(uVar1);
  return;
}



// FUNCTION 14dc79366 FUN_14dc79366 body=172 status=ok
// SIG undefined FUN_14dc79366(void)

void FUN_14dc79366(void)

{
  return;
}



// FUNCTION 14dc79419 FUN_14dc79419 body=432 status=ok
// SIG undefined FUN_14dc79419(void)

/* WARNING: Removing unreachable block (ram,0x00014dc794a5) */

void FUN_14dc79419(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  uint unaff_EDI;
  short sVar5;
  uint uVar6;
  undefined8 in_R10;
  undefined8 unaff_R13;
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
  ushort local_res8;
  uint6 uStackX_a;
  undefined1 local_res10 [24];
  undefined8 auStack_18 [2];
  
  local_res8 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(in_OF & 1) * 0x800 |
               (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
               (ushort)(in_SF & 1) * 0x80 | (ushort)(in_ZF & 1) * 0x40 | (ushort)(in_AF & 1) * 0x10
               | (ushort)(in_PF & 1) * 4 | (ushort)(in_CF & 1);
  sVar5 = (0x100 - (local_res8 | 0x100)) + local_res8;
  _local_res8 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                         (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                         (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                         (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),sVar5);
  puVar3 = (ulonglong *)&local_res8;
  if (sVar5 == 0) {
    puVar3 = (ulonglong *)local_res10;
  }
  uVar6 = (uint)in_R10;
  puVar3[1] = *puVar3;
  uVar1 = uVar6 - (unaff_EDI & ~param_1) ^ 0xffffffff;
  uVar2 = uVar1 + uVar6;
  puVar4 = puVar3 + 1;
  puVar3[1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY4(uVar1,uVar6) * 0x800 |
              (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
              (ulonglong)((int)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
              (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
              (ulonglong)CARRY4(uVar1,uVar6) | (ulonglong)(in_ID & 1) * 0x200000 |
              (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
              (ulonglong)(in_AC & 1) * 0x40000;
  *(ushort *)(puVar3 + 1) = (ushort)puVar3[1] & 0x100;
  *puVar3 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
            (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((short)puVar3[1] < 0) * 0x80 |
            (ulonglong)((short)puVar3[1] == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
            (ulonglong)((POPCOUNT((ushort)puVar3[1] & 0xff) & 1U) == 0) * 4 |
            (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
            (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if (((uint)*puVar3 >> 6 & 1) != 0) {
    puVar4 = puVar3 + 2;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = unaff_R13;
  *(undefined8 *)((longlong)puVar4 + -0x10) = 0;
  *(undefined4 *)((longlong)puVar4 + -0x10) = 0xd3626949;
  *(undefined8 *)((longlong)puVar4 + -0x18) = in_R10;
  *(undefined8 *)((longlong)puVar4 + -0x20) = in_R10;
  *(undefined8 *)((longlong)puVar4 + -0x28) = in_R10;
  *(undefined8 *)((longlong)puVar4 + -0x18) = 0x165d9975b;
  *(undefined **)((longlong)puVar4 + -0x20) = &DAT_15b0ed84d;
  return;
}



// FUNCTION 14dc795fe FUN_14dc795fe body=426 status=ok
// SIG undefined FUN_14dc795fe(void)

void FUN_14dc795fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x16676ed6b)(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14dc7968b FUN_14dc7968b body=40 status=ok
// SIG undefined FUN_14dc7968b(void)

undefined8 FUN_14dc7968b(void)

{
  short *in_RAX;
  ushort unaff_R12W;
  ushort unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  *in_RAX = (((unaff_retaddr ^ 0x86b8) - 1) - ~unaff_R12W) + *in_RAX;
  *(undefined8 *)(in_stack_00000028 + -8) = uStackX_8;
  *(undefined8 *)(in_stack_00000028 + -0x10) = 0x14dc796f9;
  return uStackX_10;
}



// FUNCTION 14dc7970c FUN_14dc7970c body=157 status=ok
// SIG undefined FUN_14dc7970c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc7970c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x161271329)(0x161271329,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc797a9 FUN_14dc797a9 body=168 status=ok
// SIG undefined FUN_14dc797a9(void)

longlong FUN_14dc797a9(ulonglong param_1)

{
  return -(param_1 ^ 0xffffffffffffffff);
}



// FUNCTION 14dc79aad FUN_14dc79aad body=89 status=ok
// SIG undefined FUN_14dc79aad(void)

void FUN_14dc79aad(undefined8 param_1)

{
  code *pcVar1;
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
  undefined8 in_stack_00000008;
  ushort local_res18;
  uint6 uStackX_1a;
  undefined8 *local_res20;
  
  bVar10 = (local_res18 & 0x4000) != 0;
  bVar9 = (local_res18 & 0x800) != 0;
  bVar8 = (local_res18 & 0x200) != 0;
  bVar7 = 0;
  bVar6 = (local_res18 & 0x80) != 0;
  bVar5 = (local_res18 & 0x40) != 0;
  bVar4 = (local_res18 & 0x10) != 0;
  bVar3 = (local_res18 & 4) != 0;
  bVar2 = (local_res18 & 1) != 0;
  bVar14 = (uStackX_1a & 0x20) != 0;
  bVar11 = (uStackX_1a & 4) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,in_stack_00000008);
  *local_res20 = unaff_R14;
  local_res20[-1] = unaff_R14;
  local_res20[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  FUN_1665cce67();
  return;
}



// FUNCTION 14dc79bbe FUN_14dc79bbe body=31 status=ok
// SIG undefined FUN_14dc79bbe(void)

void FUN_14dc79bbe(void)

{
  return;
}



// FUNCTION 14dc79c57 FUN_14dc79c57 body=189 status=ok
// SIG undefined FUN_14dc79c57(void)

/* WARNING: Removing unreachable block (ram,0x000165eed338) */
/* WARNING: Removing unreachable block (ram,0x000165eed343) */
/* WARNING: Removing unreachable block (ram,0x000165eed3c6) */
/* WARNING: Removing unreachable block (ram,0x000165eed3cb) */
/* WARNING: Removing unreachable block (ram,0x000165eed3d1) */
/* WARNING: Removing unreachable block (ram,0x000165eed3d6) */
/* WARNING: Removing unreachable block (ram,0x000165eed33e) */
/* WARNING: Removing unreachable block (ram,0x00014dc79dae) */

undefined8
FUN_14dc79c57(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong in_RAX;
  undefined8 uVar10;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  undefined8 unaff_R15;
  ulonglong *local_res18;
  
  puVar2 = local_res18 + -1;
  *puVar2 = 0;
  *puVar2 = *puVar2 - unaff_R14;
  *puVar2 = -*puVar2;
  local_res18[-2] = unaff_R15;
  local_res18[-3] = unaff_R15;
  local_res18[-4] = in_RAX;
  local_res18[-2] = local_res18[-1];
  local_res18[-3] = param_4;
  local_res18[-1] = 0;
  uVar10 = local_res18[-3];
  local_res18[-1] = (ulonglong)(&DAT_15b5b1f86 + local_res18[-1]);
  local_res18[-3] = (ulonglong)FUN_14dc79d17;
  FUN_15b5b1f59();
  uVar6 = local_res18[-1];
  uVar7 = *local_res18;
  *local_res18 = *(ulonglong *)(unaff_RSI + -0x88);
  local_res18[-1] = param_2;
  local_res18[-2] = param_2;
  local_res18[-1] = *(undefined8 *)(unaff_RSI + -8);
  uVar8 = local_res18[-2];
  local_res18[-2] = uVar10;
  local_res18[-3] = uVar10;
  uVar10 = *(undefined8 *)(unaff_RSI + -0x98);
  local_res18[-4] = unaff_RBP;
  *(undefined4 *)(local_res18 + -5) = 0x755c5b4a;
  *(undefined4 *)((longlong)local_res18 + -0x24) = 0;
  *(undefined8 *)((longlong)local_res18 + ((local_res18[-5] + 0xdf4b57 ^ 0x763ba6a9) - 0x18)) =
       uVar10;
  uVar3 = local_res18[-4];
  uVar4 = *(ulonglong *)(unaff_RSI + -0xa0);
  local_res18[-3] = local_res18[-3];
  local_res18[-3] = uVar8;
  local_res18[-4] = uVar6;
  puVar2 = local_res18 + -2;
  uVar5 = *puVar2;
  *puVar2 = ~*puVar2;
  local_res18[-5] = ~uVar3 | uVar5;
  uVar5 = *puVar2;
  local_res18[-6] = uVar4 + uVar3 + (uVar4 & uVar3) * -2;
  *puVar2 = *puVar2 & uVar3;
  uVar4 = *puVar2;
  *puVar2 = 0;
  *puVar2 = *puVar2 ^ ((uVar3 - 1) - ~uVar5) - uVar4;
  *puVar2 = ~(local_res18[-5] & *puVar2);
  uVar4 = local_res18[-4];
  uVar9 = local_res18[-3];
  local_res18[-1] = local_res18[-1] ^ uVar3;
  local_res18[-3] = local_res18[-6];
  uVar5 = *local_res18;
  *local_res18 = *local_res18 & uVar3;
  *local_res18 = ~*local_res18;
  *local_res18 = *local_res18 & (uVar5 | uVar3);
  uVar3 = local_res18[-3];
  local_res18[-2] = uVar4;
  local_res18[-3] = uVar7;
  local_res18[-4] = uVar9;
  puVar2 = local_res18 + -5;
  *(undefined4 *)puVar2 = 0x48065b5;
  *(undefined4 *)((longlong)local_res18 + -0x24) = 0;
  uVar5 = *puVar2;
  *puVar2 = uVar3;
  puVar1 = (ushort *)((longlong)puVar2 + (uVar5 - 0x4806595));
  puVar2 = local_res18 + -4;
  *puVar2 = uVar4;
  *(undefined2 *)puVar2 = 0xfeff;
  uVar3 = *puVar2;
  *puVar1 = *puVar1 ^ 0xffff;
  *puVar1 = *puVar1 | ~(ushort)uVar3;
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  uVar10 = (*(code *)0x16599fb31)();
  return uVar10;
}



// FUNCTION 14dc79d17 FUN_14dc79d17 body=296 status=ok
// SIG undefined FUN_14dc79d17(void)

/* WARNING: Removing unreachable block (ram,0x000165eed338) */
/* WARNING: Removing unreachable block (ram,0x000165eed343) */
/* WARNING: Removing unreachable block (ram,0x000165eed3c6) */
/* WARNING: Removing unreachable block (ram,0x000165eed3cb) */
/* WARNING: Removing unreachable block (ram,0x000165eed3d1) */
/* WARNING: Removing unreachable block (ram,0x000165eed3d6) */
/* WARNING: Removing unreachable block (ram,0x000165eed33e) */
/* WARNING: Removing unreachable block (ram,0x00014dc79dae) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc79d17(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x16599fb31)(param_1,param_2);
  return uVar1;
}



// FUNCTION 14dc79dae FUN_14dc79dae body=135 status=ok
// SIG undefined FUN_14dc79dae(void)

void FUN_14dc79dae(void)

{
  ulonglong *in_R11;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  *in_R11 = ~((~*in_R11 | unaff_R15) + *in_R11 + 1);
  FUN_16254b00e(unaff_retaddr);
  return;
}



// FUNCTION 14dc79e37 FUN_14dc79e37 body=172 status=ok
// SIG undefined FUN_14dc79e37(void)

void FUN_14dc79e37(undefined8 param_1,undefined8 param_2)

{
  FUN_156faebe4(param_1,param_2);
  return;
}



// FUNCTION 14dc7a003 FUN_14dc7a003 body=325 status=ok
// SIG undefined FUN_14dc7a003(void)

/* WARNING: Instruction at (ram,0x000165130eb7) overlaps instruction at (ram,0x000165130eb4)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc7a13f) */
/* WARNING: Removing unreachable block (ram,0x00014dc7a145) */
/* WARNING: Removing unreachable block (ram,0x000165130e7f) */
/* WARNING: Removing unreachable block (ram,0x000165130e97) */
/* WARNING: Removing unreachable block (ram,0x000165130eaa) */
/* WARNING: Removing unreachable block (ram,0x000165130eb7) */
/* WARNING: Removing unreachable block (ram,0x000165130eb4) */
/* WARNING: Removing unreachable block (ram,0x000165130e91) */
/* WARNING: Removing unreachable block (ram,0x00014dc7a09f) */

undefined8 FUN_14dc7a003(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack0000000000000109;
  
  uStack0000000000000109 = 0x6c;
  uVar1 = FUN_16222eca8(param_1,param_2,FUN_16222eca8);
  return uVar1;
}



// FUNCTION 14dc7a14b FUN_14dc7a14b body=331 status=ok
// SIG undefined FUN_14dc7a14b(void)

void FUN_14dc7a14b(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = 0xffffffffffffffff - uVar1 | param_1;
  FUN_15689e31a(param_1,~((~uVar2 | (~param_1 + uVar1) - (~param_1 & uVar1)) + uVar2 + 1));
  return;
}



// FUNCTION 14dc7a29a FUN_14dc7a29a body=135 status=ok
// SIG undefined FUN_14dc7a29a(void)

void FUN_14dc7a29a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156a90d3f(param_1,param_2,(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x40)) + unaff_R15 + 1);
  return;
}



// FUNCTION 14dc7a6da FUN_14dc7a6da body=50 status=ok
// SIG undefined FUN_14dc7a6da(void)

void FUN_14dc7a6da(void)

{
  return;
}



// FUNCTION 14dc7a945 FUN_14dc7a945 body=3 status=ok
// SIG undefined FUN_14dc7a945(void)

void FUN_14dc7a945(void)

{
  return;
}



// FUNCTION 14dc7a9d9 FUN_14dc7a9d9 body=159 status=ok
// SIG undefined FUN_14dc7a9d9(void)

void FUN_14dc7a9d9(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 in_stack_00000008;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_166d3fd9e(param_1,param_2,in_stack_00000008);
                    /* WARNING: Could not recover jumptable at 0x00014dc7aa77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,unaff_RBP);
  return;
}



// FUNCTION 14dc7aa8c FUN_14dc7aa8c body=31 status=ok
// SIG undefined FUN_14dc7aa8c(void)

void FUN_14dc7aa8c(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dc7ab00 FUN_14dc7ab00 body=130 status=ok
// SIG undefined FUN_14dc7ab00(void)

void FUN_14dc7ab00(void)

{
  FUN_15647ab7a();
  return;
}



// FUNCTION 14dc7ab89 FUN_14dc7ab89 body=175 status=ok
// SIG undefined FUN_14dc7ab89(void)

void FUN_14dc7ab89(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156393145(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)));
  return;
}



// FUNCTION 14dc7ae79 FUN_14dc7ae79 body=486 status=ok
// SIG undefined FUN_14dc7ae79(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7b062) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc7ae79(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong in_R10;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  ushort in_stack_00000028;
  ulonglong in_stack_00000030;
  
  *(undefined8 *)(in_R10 + (in_RAX ^ 0x7219e914)) = unaff_retaddr;
  in_stack_00000030 = ~((~unaff_R15 | in_stack_00000030) & (~in_stack_00000030 | unaff_R15));
  puVar4 = &stack0x00000028;
  in_stack_00000028 = (in_stack_00000028 | 0x100) - 0x100;
  uVar1 = FUN_1622ae626(in_stack_00000008);
  uVar3 = ~((0xffffffffffffffff - uVar1 | *(ulonglong *)(unaff_R12 + -0x28)) &
           (~*(ulonglong *)(unaff_R12 + -0x28) | uVar1));
  uVar2 = *(ulonglong *)(unaff_R12 + -0x58) & uVar1;
  FUN_16117656f(uVar2,0xffffffffffffffd8,*(ulonglong *)(unaff_R12 + -0x80) ^ uVar1,
                (~(~in_stack_00000008 & ~(ulonglong)puVar4) + ~(ulonglong)puVar4) -
                in_stack_00000008);
  if (-1 < (longlong)
           ((~uVar2 | *(ulonglong *)(uVar3 - 0x50)) & (~*(ulonglong *)(uVar3 - 0x50) | uVar2))) {
    FUN_14d9fb90c();
    return;
  }
  FUN_15698cdff(uVar2,0xfffffffffffffff8,*(undefined8 *)(uVar3 - 0x40),-*(longlong *)(uVar3 - 0x60))
  ;
  return;
}



// FUNCTION 14dc7b062 FUN_14dc7b062 body=153 status=ok
// SIG undefined FUN_14dc7b062(void)

void FUN_14dc7b062(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_164f3d3fd(param_1,0xffffffffffffff68,param_3,param_4);
  FUN_14dc7b0fe();
  return;
}



// FUNCTION 14dc7b0fe FUN_14dc7b0fe body=399 status=ok
// SIG undefined FUN_14dc7b0fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7b190) */

void FUN_14dc7b0fe(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RSI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar2;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  uVar1 = local_res20 ^ unaff_R15;
                    /* WARNING: Read-only address (ram,0x00014d7ab4af) is written */
  LOCK();
  uRam000000014d7ab4af = (undefined1)in_RAX;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(ulonglong *)(uVar1 - 0x18) = in_RAX & 0xffffffffffffff00;
  *(undefined4 *)(uVar1 - 0x18) = 0xce41272;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(uVar1 - 0x18);
  *(longlong *)(uVar1 - 0x18) = unaff_RSI - local_res10;
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x28) = 0x15b14f653;
  return;
}



// FUNCTION 14dc7b29a FUN_14dc7b29a body=476 status=ok
// SIG undefined FUN_14dc7b29a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7b33b) */
/* WARNING: Removing unreachable block (ram,0x00014dc7b3a8) */
/* WARNING: Removing unreachable block (ram,0x00014dc7b3ac) */

void FUN_14dc7b29a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  longlong in_R10;
  undefined8 unaff_R14;
  undefined8 local_res18;
  
  uVar2 = *(ulonglong *)(in_R10 + 0x10);
  lVar3 = *(longlong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | in_RAX;
  uVar6 = (~(~in_RAX & uVar2) + lVar3) - in_RAX & *(ulonglong *)(in_R10 + 0x10);
  *(undefined8 *)(in_R10 + 0x10) = 0;
  uVar2 = *(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | ~uVar6;
  *(ulonglong *)(in_R10 + 0x10) = ~((uVar6 | uVar2) & *(ulonglong *)(in_R10 + 0x10));
  *(undefined8 *)(param_5 + -8) = param_3;
  plVar1 = (longlong *)(param_5 + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  *(longlong *)(param_5 + -0x18) = *plVar1;
  *(undefined8 *)(param_5 + -0x20) = param_1;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  uVar4 = *(undefined8 *)(param_5 + -0x20);
  uVar5 = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x18) = unaff_R14;
  *(undefined8 *)(param_5 + -0x20) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x28) = uVar5;
  *(undefined8 *)(param_5 + -0x30) = local_res18;
  *(undefined4 *)(param_5 + -0x30) = 0x626caf55;
  *(undefined4 *)(param_5 + -0x2c) = 0;
  uVar5 = *(undefined8 *)(param_5 + -0x28);
  *(undefined1 **)(param_5 + -0x20 + (*(ulonglong *)(param_5 + -0x30) ^ 0x626caf4d)) =
       &LAB_162a76884;
  FUN_162a767f7(uVar4,uVar5);
  return;
}



// FUNCTION 14dc7b515 FUN_14dc7b515 body=405 status=ok
// SIG undefined FUN_14dc7b515(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7b599) */

void FUN_14dc7b515(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R15;
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
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar18 = local_res10 ^ in_RAX;
  puVar1 = (undefined8 *)~(local_res18 & in_RAX | (local_res18 | in_RAX) ^ 0xffffffffffffffff);
  bVar13 = (uVar18 & 0x4000) != 0;
  bVar12 = (uVar18 & 0x800) != 0;
  bVar11 = (uVar18 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (uVar18 & 0x80) != 0;
  bVar8 = (uVar18 & 0x40) != 0;
  bVar7 = (uVar18 & 0x10) != 0;
  bVar6 = (uVar18 & 4) != 0;
  bVar5 = (uVar18 & 1) != 0;
  bVar17 = (uVar18 & 0x200000) != 0;
  bVar14 = (uVar18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar4 = (*pcVar2)(param_1,param_2,param_3);
  *puVar1 = 0x29f74e6;
  puVar1[-1] = unaff_RBP;
  puVar1[-2] = unaff_RBP;
  puVar1[-3] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  uVar18 = puVar1[-3];
  puVar1[-3] = in_R11;
  puVar1[-4] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  puVar1[-5] = uVar4;
  *(undefined4 *)(puVar1 + -5) = 0xc10e3b94;
  *(undefined4 *)((longlong)puVar1 + -0x24) = 0xffffffff;
  lVar3 = puVar1[-5];
  puVar1[-5] = unaff_R15;
  puVar1[-6] = &LAB_165b842f3;
  *(undefined8 *)((longlong)puVar1 + lVar3 + 0x3ef1c464) = puVar1[-6];
  FUN_165b842e6();
  return;
}



// FUNCTION 14dc7b630 FUN_14dc7b630 body=679 status=ok
// SIG undefined FUN_14dc7b630(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7b6e8) */
/* WARNING: Removing unreachable block (ram,0x000162a07b44) */
/* WARNING: Removing unreachable block (ram,0x000162a07b09) */
/* WARNING: Removing unreachable block (ram,0x000162a07b6f) */
/* WARNING: Removing unreachable block (ram,0x000162a07b75) */
/* WARNING: Removing unreachable block (ram,0x000162a07b6a) */
/* WARNING: Removing unreachable block (ram,0x000162a07b7a) */

ulonglong FUN_14dc7b630(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dc7b78e FUN_14dc7b78e body=281 status=ok
// SIG undefined FUN_14dc7b78e(void)

/* WARNING: Instruction at (ram,0x00014dc7b7c9) overlaps instruction at (ram,0x00014dc7b7c8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc7b8a8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014dc7b7ee */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc7b78e(void)

{
  ulonglong uVar1;
  undefined1 in_AL;
  ulonglong unaff_RBX;
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  longlong lVar2;
  ulonglong uStackX_8;
  ulonglong uStack_10;
  longlong in_stack_fffffffffffffff8;
  
  lVar2 = in_stack_fffffffffffffff8 -
          (~(~(unaff_RBX & 0xffffffffcd922bcb) & (unaff_RBX | 0xffffffffcd922bcb)) ^ 0x2195db9a);
  *(ulonglong *)((longlong)&stack0x00000008 + lVar2) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(&stack0x00000000 + lVar2) = 0x14dc7b815;
  DAT_57414b3567bbbb41 = in_AL;
  FUN_1660d4ea3();
  *(undefined4 *)(&stack0x00000000 + lVar2) = 0xb6579fb8;
  *(int *)(&stack0x00000000 + lVar2) = *(int *)(&stack0x00000000 + lVar2) + 0x49a86048;
  *(undefined4 *)(&stack0x00000004 + lVar2) = 0x310ff18b;
  *(uint *)(&stack0x00000004 + lVar2) = *(uint *)(&stack0x00000004 + lVar2) ^ 0x310ff18b;
  uVar1 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x38);
  *(undefined8 *)(&stack0x00000000 + lVar2) = 0x4987d76a;
  *(ulonglong *)(&stack0x00000000 + lVar2) = *(ulonglong *)(&stack0x00000000 + lVar2) ^ 0x4987d76a;
  *(ulonglong *)(&stack0x00000000 + lVar2) = *(ulonglong *)(&stack0x00000000 + lVar2) ^ uVar1;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = *(undefined8 *)(&stack0x00000000 + lVar2);
  *(undefined4 *)(&stack0xfffffffffffffff8 + lVar2) = 0xaea7c6f;
  *(undefined4 *)(&stack0xfffffffffffffffc + lVar2) = 0;
  *(undefined1 **)((longlong)&uStack_10 + lVar2) = &LAB_156e4aa6d;
  return;
}



// FUNCTION 14dc7b955 FUN_14dc7b955 body=360 status=ok
// SIG undefined FUN_14dc7b955(void)

void FUN_14dc7b955(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined8 local_res8;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong local_8;
  
  uVar5 = *(ulonglong *)(unaff_RDI + -0xa0) ^ param_1;
  local_8 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  uVar4 = 0xffffffffffffffff - param_1;
  uStack_28 = 0x14dc7b9f7;
  uStack_20 = param_4;
  FUN_15636fc92(param_1,local_res8,&stack0xfffffffffffffff8);
  puVar1 = (ulonglong *)((longlong)&uStack_20 + uVar5);
  *(undefined4 *)((longlong)&uStack_28 + uVar5) = 0x8b0ef190;
  *(undefined4 *)((longlong)&uStack_28 + uVar5 + 4) = 0xffffffff;
  *puVar1 = *(ulonglong *)(unaff_RSI + *(longlong *)((longlong)&uStack_28 + uVar5) + 0x74f10e20);
  uVar3 = ~((~uVar4 | *puVar1) & (~*puVar1 | uVar4));
  uVar4 = *(ulonglong *)(unaff_RSI + -0x30) | uVar4;
  bVar2 = (byte)uVar3;
  *puVar1 = 0x14dc7baa3;
  FUN_14dca34f8(uVar4,CONCAT71((int7)(uVar3 >> 8),bVar2 << 3 | bVar2 >> 6));
  *(ulonglong *)(&stack0xfffffffffffffff0 + uVar5) = uVar4;
  *(longlong *)(&stack0x00000000 + uVar5) = unaff_RSI;
  FUN_165c7153c(*(undefined8 *)(&stack0xfffffffffffffff0 + uVar5));
  return;
}



// FUNCTION 14dc7bd4b FUN_14dc7bd4b body=144 status=ok
// SIG undefined FUN_14dc7bd4b(void)

void FUN_14dc7bd4b(void)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_156955607)(in_stack_00000010);
  return;
}



// FUNCTION 14dc7c13f FUN_14dc7c13f body=306 status=ok
// SIG undefined FUN_14dc7c13f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc7c217) */
/* WARNING: Removing unreachable block (ram,0x00014dc7c1d4) */

undefined8 FUN_14dc7c13f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1648cd67e(0,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dc7c294 FUN_14dc7c294 body=122 status=ok
// SIG undefined FUN_14dc7c294(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dc7c30d) overlaps instruction at (ram,0x00014dc7c30c)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc7c324) */
/* WARNING: Removing unreachable block (ram,0x00014dc7c30c) */

void FUN_14dc7c294(ulonglong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  undefined8 unaff_R13;
  bool bVar10;
  byte in_AF;
  bool bVar11;
  byte in_TF;
  bool bVar12;
  byte in_IF;
  bool bVar13;
  bool bVar14;
  byte in_NT;
  bool bVar15;
  byte in_AC;
  bool bVar16;
  byte in_ID;
  bool bVar17;
  ulonglong uVar18;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  byte *local_res18;
  ulonglong local_res20;
  
  bVar15 = (in_NT & 1) != 0;
  bVar14 = false;
  bVar13 = (in_IF & 1) != 0;
  bVar12 = (in_TF & 1) != 0;
  bVar11 = (in_AF & 1) != 0;
  bVar17 = (in_ID & 1) != 0;
  bVar16 = (in_AC & 1) != 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  puVar5 = (ulonglong *)((longlong)&local_res20 + (-(-1 - param_2) - unaff_RSI));
  pbVar7 = local_res18;
  puVar8 = &local_res10;
  if (-1 < (longlong)&local_res18) {
    puVar8 = &local_res10;
  }
  while( true ) {
    puVar3 = (ulonglong *)*puVar8;
    *puVar5 = 0x2c3a56a;
    *puVar5 = *puVar5 ^ 0x2c3a56a;
    *puVar8 = unaff_RDI;
    uVar18 = *puVar5;
    puVar8[-1] = in_stack_00000008;
    puVar8[-2] = unaff_R13;
    unaff_R13 = puVar8[-2];
    in_stack_00000008 = puVar8[-1];
    *puVar5 = uVar18 + param_1;
    unaff_RDI = *puVar8;
    *puVar8 = (ulonglong)puVar3;
    *(undefined4 *)puVar8 = 0x947723c;
    *(undefined4 *)((longlong)puVar8 + 4) = 0;
    lVar4 = *puVar8;
    uVar9 = -param_4;
    *puVar8 = 0;
    uVar18 = *puVar8;
    lVar2 = *puVar8;
    *puVar8 = *puVar8 + param_4;
    param_4 = *puVar8;
    puVar8[-1] = (ulonglong)puVar3;
    puVar8[-2] = (ulonglong)bVar15 * 0x4000 | (ulonglong)SBORROW8(lVar2,uVar9) * 0x800 |
                 (ulonglong)bVar14 * 0x400 | (ulonglong)bVar13 * 0x200 | (ulonglong)bVar12 * 0x100 |
                 (ulonglong)((longlong)*puVar8 < 0) * 0x80 | (ulonglong)(*puVar8 == 0) * 0x40 |
                 (ulonglong)bVar11 * 0x10 | (ulonglong)((POPCOUNT(*puVar8 & 0xff) & 1U) == 0) * 4 |
                 (ulonglong)(uVar18 < uVar9) | (ulonglong)bVar17 * 0x200000 |
                 (ulonglong)bVar16 * 0x40000;
    puVar8[-2] = puVar8[-2] & 0xfffffffffffffffb;
    uVar18 = puVar8[-2];
    bVar15 = (uVar18 & 0x4000) != 0;
    bVar14 = (uVar18 & 0x400) != 0;
    bVar13 = (uVar18 & 0x200) != 0;
    bVar12 = (uVar18 & 0x100) != 0;
    bVar11 = (uVar18 & 0x10) != 0;
    bVar10 = (uVar18 & 1) != 0;
    bVar17 = (uVar18 & 0x200000) != 0;
    bVar16 = (uVar18 & 0x40000) != 0;
    if ((uVar18 & 4) == 0) break;
    *pbVar7 = *pbVar7 << 7 | *pbVar7 >> 1;
    LOCK();
    DAT_b217830f = SUB81(pbVar7,0);
    UNLOCK();
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),0xc0);
    cVar6 = *(char *)((longlong)puVar3 + 0x25) + '\x0f';
    param_1 = CONCAT71(0xb21783,cVar6) - 1;
    if ((param_1 != 0 && cVar6 != '\0') || (cVar6 == '\0')) goto code_r0x000162d5205d;
    *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
    puVar5 = puVar3;
    puVar8 = puVar8 + -1;
  }
  if ((!bVar10) || (bVar10 || (uVar18 & 0x40) != 0)) {
    *(undefined4 *)(puVar8 + -1) = 0x35bc733;
    *(undefined4 *)((longlong)puVar8 + -4) = 0;
    *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)((longlong)puVar8 + -4);
    uVar18 = puVar8[-1];
    puVar8[-1] = param_3;
    puVar8[-2] = unaff_RBP;
    puVar1 = (undefined8 *)((longlong)puVar8 + (lVar4 - (uVar18 ^ 0xa1cb507)) + -8);
    *puVar1 = unaff_R13;
    puVar1[1] = local_res10;
    puVar1[-1] = param_1;
    puVar1[-2] = param_1;
    puVar1[-3] = param_1;
    puVar1[-1] = &LAB_16595d2e7;
    puVar1[-2] = &LAB_1647802f6;
    return;
  }
code_r0x000162d5205d:
  uVar18 = ~(0xffffffffffffffff - param_4) & 0xffffffffffffffff - param_1;
  *(undefined4 *)(puVar8 + -2) = 0xd2580825;
  *(undefined4 *)((longlong)puVar8 + -0xc) = 0xe9887fdd;
  *(int *)((longlong)puVar8 + -0xc) = *(int *)((longlong)puVar8 + -0xc) + 0x16778022;
  FUN_164fd53c6(param_1,pbVar7,0x2da7f76b,
                (uVar18 | (~(~param_1 & param_4) + param_4) - param_1) + ~uVar18 + 1 ^
                0xffffffffffffffff);
  return;
}



// FUNCTION 14dc7c3cf FUN_14dc7c3cf body=423 status=ok
// SIG undefined FUN_14dc7c3cf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc7c3cf(undefined8 param_1)

{
  FUN_16141c7ae(param_1);
  FUN_156530b6d();
  FUN_15b8c9e80();
  return;
}



// FUNCTION 14dc7c57a FUN_14dc7c57a body=726 status=ok
// SIG undefined FUN_14dc7c57a(void)

void FUN_14dc7c57a(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x90);
  uVar1 = (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1;
  (*(code *)0x15b5d5754)
            (*(undefined8 *)(unaff_R13 + -0x60),0x15b5d5754,
             ~uVar1 & (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) | uVar1,
             *(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14dc7c610 FUN_14dc7c610 body=159 status=ok
// SIG undefined FUN_14dc7c610(void)

void FUN_14dc7c610(longlong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165008cef(param_1 + unaff_RDI,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dc7c6b3 FUN_14dc7c6b3 body=169 status=ok
// SIG undefined FUN_14dc7c6b3(void)

void FUN_14dc7c6b3(void)

{
  undefined8 unaff_RDI;
  longlong in_R9;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong in_stack_00000028;
  
  in_R9 = in_R9 + (in_stack_00000028 & unaff_R15) * -2;
  *(undefined8 *)(in_R9 + -8) = unaff_RDI;
  *(undefined8 *)(in_R9 + -0x10) = unaff_R12;
  *(undefined8 *)(in_R9 + -0x18) = unaff_R12;
  *(undefined1 **)(in_R9 + -0x10) = &LAB_14dc7c75e;
  return;
}



// FUNCTION 14dc7c766 FUN_14dc7c766 body=113 status=ok
// SIG undefined FUN_14dc7c766(void)

void FUN_14dc7c766(undefined8 param_1,undefined8 param_2,short param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined8 unaff_RBP;
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
  ulonglong uVar15;
  undefined8 local_res8;
  short *psStackX_10;
  
  *psStackX_10 = param_3 + 1;
  bVar10 = (param_6 & 0x4000) != 0;
  bVar9 = (param_6 & 0x800) != 0;
  bVar8 = (param_6 & 0x200) != 0;
  bVar7 = (param_6 & 0x100) != 0;
  bVar6 = (param_6 & 0x80) != 0;
  bVar5 = (param_6 & 0x40) != 0;
  bVar4 = (param_6 & 0x10) != 0;
  bVar3 = (param_6 & 4) != 0;
  bVar2 = (param_6 & 1) != 0;
  bVar14 = (param_6 & 0x200000) != 0;
  bVar11 = (param_6 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,local_res8);
  *param_7 = unaff_RBP;
  param_7[-1] = unaff_RBP;
  param_7[-2] = (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
                (ulonglong)((param_6 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
                (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
                (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 |
                (ulonglong)(bVar3 & 1) * 4 | (ulonglong)(bVar2 & 1) |
                (ulonglong)(bVar14 & 1) * 0x200000 | (ulonglong)(bVar13 & 1) * 0x100000 |
                (ulonglong)(bVar12 & 1) * 0x80000 | (ulonglong)(bVar11 & 1) * 0x40000;
  uVar15 = param_7[-2];
  param_7[-2] = (ulonglong)((uVar15 & 0x4000) != 0) * 0x4000 |
                (ulonglong)((uVar15 & 0x800) != 0) * 0x800 |
                (ulonglong)((uVar15 & 0x400) != 0) * 0x400 |
                (ulonglong)((uVar15 & 0x200) != 0) * 0x200 |
                (ulonglong)((uVar15 & 0x100) != 0) * 0x100 |
                (ulonglong)((uVar15 & 0x80) != 0) * 0x80 | (ulonglong)((uVar15 & 0x40) != 0) * 0x40
                | (ulonglong)((uVar15 & 0x10) != 0) * 0x10 | (ulonglong)((uVar15 & 4) != 0) * 4 |
                (ulonglong)((uVar15 & 1) != 0) | (ulonglong)((uVar15 & 0x200000) != 0) * 0x200000 |
                (ulonglong)((uVar15 & 0x40000) != 0) * 0x40000;
  param_7[-3] = param_5;
  *param_7 = 0x31c96aa;
  FUN_164b35bdb();
  return;
}



// FUNCTION 14dc7caba FUN_14dc7caba body=63 status=ok
// SIG undefined FUN_14dc7caba(void)

void FUN_14dc7caba(void)

{
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = 0x533ece2;
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14dc7cdf2 FUN_14dc7cdf2 body=102 status=ok
// SIG undefined FUN_14dc7cdf2(void)

void FUN_14dc7cdf2(undefined8 param_1,undefined8 param_2)

{
  FUN_166ae7a51(param_1,param_2);
  return;
}



// FUNCTION 14dc7ceeb FUN_14dc7ceeb body=121 status=ok
// SIG undefined FUN_14dc7ceeb(void)

void FUN_14dc7ceeb(undefined8 param_1,undefined8 param_2)

{
  FUN_14da7b8c0(param_1,param_2);
  return;
}



// FUNCTION 14dc7d075 FUN_14dc7d075 body=111 status=ok
// SIG undefined FUN_14dc7d075(void)

void FUN_14dc7d075(longlong param_1)

{
  ushort uVar1;
  ushort *unaff_RDI;
  short in_stack_00000008;
  longlong in_stack_00000028;
  
  uVar1 = ~*unaff_RDI & 0xffffU - in_stack_00000008;
  *unaff_RDI = ((~(uVar1 & *unaff_RDI) + *unaff_RDI) - ~uVar1) - 0x100;
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) + param_1;
  FUN_15658d5ce(FUN_15658d5ce);
  return;
}



// FUNCTION 14dc7d3f8 FUN_14dc7d3f8 body=142 status=ok
// SIG undefined FUN_14dc7d3f8(void)

void FUN_14dc7d3f8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  thunk_FUN_165ac85f3(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                               (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1)));
  return;
}


