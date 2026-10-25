// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d97518b FUN_14d97518b body=44 status=ok
// SIG undefined FUN_14d97518b(void)

void FUN_14d97518b(void)

{
  return;
}



// FUNCTION 14d9751fe FUN_14d9751fe body=151 status=ok
// SIG undefined FUN_14d9751fe(void)

/* WARNING: Instruction at (ram,0x00014d975217) overlaps instruction at (ram,0x00014d975216)
    */

void FUN_14d9751fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156a727ca(**(undefined8 **)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20),
                param_2,param_3);
  return;
}



// FUNCTION 14d9753ba FUN_14d9753ba body=24 status=ok
// SIG undefined FUN_14d9753ba(void)

void FUN_14d9753ba(void)

{
  return;
}



// FUNCTION 14d9754f6 FUN_14d9754f6 body=548 status=ok
// SIG undefined FUN_14d9754f6(void)

/* WARNING: Removing unreachable block (ram,0x00014d975615) */
/* WARNING: Removing unreachable block (ram,0x00014d975620) */
/* WARNING: Removing unreachable block (ram,0x00014d97561b) */

undefined8 FUN_14d9754f6(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong in_R10;
  code *pcVar3;
  
  pcVar3 = FUN_16118a2fc;
  FUN_16118a2fc();
  uVar2 = -~(*(ulonglong *)(pcVar3 + -0x78) | in_R10) - 1;
  uVar1 = FUN_162d16ee9((~(*(ulonglong *)(pcVar3 + -0x78) | in_R10) & uVar2) - unaff_RBP,uVar2,
                        ~(*(ulonglong *)(pcVar3 + -0x68) & in_R10 |
                         ~(*(ulonglong *)(pcVar3 + -0x68) | in_R10)),
                        *(ulonglong *)(pcVar3 + -0x88) ^ in_R10);
  return uVar1;
}



// FUNCTION 14d975a3f FUN_14d975a3f body=16 status=ok
// SIG undefined FUN_14d975a3f(void)

void FUN_14d975a3f(void)

{
  return;
}



// FUNCTION 14d975ac7 FUN_14d975ac7 body=204 status=ok
// SIG undefined FUN_14d975ac7(void)

/* WARNING: Removing unreachable block (ram,0x00014d975b6a) */

void FUN_14d975ac7(void)

{
  return;
}



// FUNCTION 14d975e79 FUN_14d975e79 body=152 status=ok
// SIG undefined FUN_14d975e79(void)

void FUN_14d975e79(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
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
  undefined8 unaff_retaddr;
  undefined1 local_res8 [32];
  undefined1 auStack_365f [13903];
  undefined8 local_10;
  
  local_10 = 0x365f;
  uVar1 = -(~(ulonglong)auStack_365f + 2);
  uVar2 = uVar1 + 0x3660;
  *(undefined8 *)(uVar1 + 0x3658) = unaff_RSI;
  *(undefined8 *)(uVar1 + 0x3650) = param_2;
  *(ulonglong *)(uVar1 + 0x3648) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar1,-0x3660) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar2 < 0) * 0x80 | (ulonglong)(uVar2 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0xffffffffffffc9a0) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  FUN_161c727e8(local_res8,FUN_161c727e8,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14d975f12 FUN_14d975f12 body=162 status=ok
// SIG undefined FUN_14d975f12(void)

/* WARNING: Removing unreachable block (ram,0x0001570f077a) */
/* WARNING: Removing unreachable block (ram,0x0001570f0785) */
/* WARNING: Removing unreachable block (ram,0x00016577247b) */
/* WARNING: Removing unreachable block (ram,0x0001570f0822) */
/* WARNING: Removing unreachable block (ram,0x0001570f0833) */
/* WARNING: Removing unreachable block (ram,0x0001570f083a) */
/* WARNING: Removing unreachable block (ram,0x00014e01441b) */
/* WARNING: Removing unreachable block (ram,0x00014d975fb6) */
/* WARNING: Removing unreachable block (ram,0x00014d976047) */
/* WARNING: Removing unreachable block (ram,0x000156911fa0) */
/* WARNING: Removing unreachable block (ram,0x00014e01437b) */
/* WARNING: Removing unreachable block (ram,0x0001646c7848) */
/* WARNING: Removing unreachable block (ram,0x00014e014426) */
/* WARNING: Removing unreachable block (ram,0x00014d97604d) */

void FUN_14d975f12(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong in_R11;
  ulonglong uVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar7;
  
  if (((*(ulonglong *)(unaff_RDI + -0x48) | param_1) & 0x10000) != 0) {
    FUN_1570f05c3();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RDI + -8);
  FUN_165f95f48();
  uVar6 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0);
  uVar5 = 0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0xa0);
  if (-1 < (longlong)uVar5) {
    FUN_156869b6f();
    return;
  }
  uVar5 = uVar5 | unaff_R15;
  uVar1 = uVar1 ^ unaff_R15;
  uVar3 = FUN_1618752e3();
  LOCK();
  uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),DAT_14d7abff1);
  UNLOCK();
  DAT_14d7abff1 = (char)uVar3;
  *(undefined8 *)(uVar1 - 8) = uVar4;
  *(undefined8 *)(uVar1 - 0x10) = uVar4;
  *(undefined8 *)(uVar1 - 0x18) = uVar4;
  *(undefined4 *)(uVar1 - 0x18) = 0xc4dee4d;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((in_R11 & 0x4000) != 0) * 0x4000 | (ulonglong)((in_R11 & 0x800) != 0) * 0x800 |
       (ulonglong)((in_R11 & 0x400) != 0) * 0x400 | (ulonglong)((in_R11 & 0x200) != 0) * 0x200 |
       (ulonglong)((in_R11 & 0x80) != 0) * 0x80 | (ulonglong)((in_R11 & 0x40) != 0) * 0x40 |
       (ulonglong)((in_R11 & 0x10) != 0) * 0x10 | (ulonglong)((in_R11 & 4) != 0) * 4 |
       (ulonglong)((in_R11 & 1) != 0) | (ulonglong)((in_R11 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((in_R11 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar1 - 0x20) = unaff_R15;
  uVar7 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) = ~((uVar5 - (uVar6 | uVar5)) + uVar6);
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x28) = 0xffffffffcfe3e374;
  *(longlong *)(uVar1 - 0x28) = *(longlong *)(uVar1 - 0x28) + 0x301c1c94;
  *(undefined8 *)(uVar1 - 0x28) = unaff_RBX;
  *(longlong *)(uVar1 - 8) = lVar2 + -0x902ef0b;
  FUN_1662a761c(param_4);
  return;
}



// FUNCTION 14d975fb6 FUN_14d975fb6 body=492 status=ok
// SIG undefined FUN_14d975fb6(void)

/* WARNING: Removing unreachable block (ram,0x00014d97604d) */

void FUN_14d975fb6(void)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  ushort *unaff_R14;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *unaff_R14 = ~*unaff_R14;
  uVar1 = *unaff_R14;
  *unaff_R14 = -*unaff_R14;
  *unaff_R14 = *unaff_R14 - 1;
  *unaff_R14 = (~(uVar1 & 0x100) + 0x100) - *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_10;
  uVar2 = *(ulonglong *)(local_res20 + -8);
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) & 0x156911fe0;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -1;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) & (uVar2 | 0x156911fe0);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9761a5 FUN_14d9761a5 body=363 status=ok
// SIG undefined FUN_14d9761a5(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001654b24cb) */
/* WARNING: Removing unreachable block (ram,0x0001654b24d1) */
/* WARNING: Removing unreachable block (ram,0x00014d7a8f38) */
/* WARNING: Removing unreachable block (ram,0x000164ab6184) */
/* WARNING: Removing unreachable block (ram,0x00014d9762e3) */
/* WARNING: Removing unreachable block (ram,0x000164c44564) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9761a5(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  int in_R11D;
  longlong unaff_R12;
  byte in_AF;
  
  if (in_R11D != 7) {
    FUN_1612fe3fe();
    (*(code *)0x1648de99d)();
    (*(code *)0x1615ec76d)();
                    /* WARNING: Ignoring partial resolution of indirect */
    pcVar2 = FUN_156888771;
    FUN_156888771();
    FUN_162ad9a55();
    FUN_165673739(pcVar2,FUN_165673739);
    return;
  }
  if (-1 < (int)(((uint)(in_AF & 1) * 0x10 | 0x45) << 0x19)) {
    uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
    uVar1 = ~(uVar1 & in_RAX) & (-~in_RAX - (~uVar1 + 2)) - (uVar1 & in_RAX);
    if (-1 < (longlong)uVar1) {
      uVar3 = ~*(ulonglong *)(unaff_R12 + -0x78);
      FUN_15ba27457(uVar1,~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                           (~(uVar3 & in_RAX) + in_RAX) - (uVar3 ^ 0xffffffffffffffff)),
                    *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                    param_1 + (unaff_RBX + in_RAX + 1) * -2);
      return;
    }
    FUN_162954690();
    return;
  }
  FUN_164c444e1();
  return;
}



// FUNCTION 14d976423 FUN_14d976423 body=157 status=ok
// SIG undefined FUN_14d976423(void)

/* WARNING: Removing unreachable block (ram,0x00014d976558) */
/* WARNING: Removing unreachable block (ram,0x00014d97655e) */
/* WARNING: Removing unreachable block (ram,0x00014d97658d) */
/* WARNING: Removing unreachable block (ram,0x00014d976588) */
/* WARNING: Removing unreachable block (ram,0x00014d9765bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9764c2) */
/* WARNING: Removing unreachable block (ram,0x000156c92b1b) */
/* WARNING: Removing unreachable block (ram,0x000156c92b21) */
/* WARNING: Removing unreachable block (ram,0x00015b11a3ed) */
/* WARNING: Removing unreachable block (ram,0x000156c92b26) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d976423(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  undefined8 local_res10;
  
  uVar2 = local_res10 | unaff_RBP;
  if ((local_res10 & unaff_RBP) == 0) {
    uVar1 = FUN_1629f3be2(uVar2,uVar2);
    return uVar1;
  }
  uVar1 = FUN_1629f3be2(uVar2,uVar2);
  return uVar1;
}



// FUNCTION 14d9764c2 FUN_14d9764c2 body=156 status=ok
// SIG undefined FUN_14d9764c2(void)

/* WARNING: Removing unreachable block (ram,0x00014d976558) */
/* WARNING: Removing unreachable block (ram,0x00014d97655e) */
/* WARNING: Removing unreachable block (ram,0x00014d97658d) */
/* WARNING: Removing unreachable block (ram,0x00014d976588) */
/* WARNING: Removing unreachable block (ram,0x00014d9765bd) */
/* WARNING: Removing unreachable block (ram,0x000156c92b26) */

undefined8
FUN_14d9764c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x88) ^ unaff_RBP;
  *(undefined8 *)(uVar1 - 8) = param_1;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_R11;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) + lVar2;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + 0x75958691;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) ^ 0x75958691;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined8 *)(uVar1 - 0x28) = param_4;
  *(undefined8 *)(uVar1 - 0x30) = param_4;
  *(undefined **)(uVar1 - 0x20) = &DAT_15b11a4d0;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_161d59136;
  return unaff_retaddr;
}



// FUNCTION 14d97655e FUN_14d97655e body=178 status=ok
// SIG undefined FUN_14d97655e(void)

void FUN_14d97655e(void)

{
  return;
}



// FUNCTION 14d9766ba FUN_14d9766ba body=162 status=ok
// SIG undefined FUN_14d9766ba(void)

/* WARNING: Removing unreachable block (ram,0x00014e03e788) */
/* WARNING: Removing unreachable block (ram,0x00014e03e7aa) */
/* WARNING: Removing unreachable block (ram,0x00014e03e7b0) */
/* WARNING: Removing unreachable block (ram,0x0001568eb5d1) */
/* WARNING: Removing unreachable block (ram,0x000165c87974) */
/* WARNING: Removing unreachable block (ram,0x00014d9767ee) */
/* WARNING: Removing unreachable block (ram,0x00014d97675d) */
/* WARNING: Removing unreachable block (ram,0x00014d9767e8) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001568eb5c6) */
/* WARNING: Removing unreachable block (ram,0x00014d976752) */

undefined8 FUN_14d9766ba(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_R14;
  
  if (unaff_R14 == 0xdc184) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_R14 == 0xdc185) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_R14 == 0xdc305) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_R14 != 0xdc306) {
    if ((unaff_R14 < 0xdc307) && (0xdc307 < unaff_R14)) {
      uVar4 = *(ulonglong *)(param_1 + -0x88);
      uVar2 = (~(~unaff_RBX & uVar4) + uVar4) - unaff_RBX;
      uVar4 = uVar4 ^ 0xffffffffffffffff | unaff_RBX;
      lVar3 = uVar4 - (uVar2 | uVar4);
      if (-1 < lVar3) {
        FUN_161b04b96(param_1,*(ulonglong *)(param_1 + -0x78) + unaff_RBX +
                              (*(ulonglong *)(param_1 + -0x78) & unaff_RBX) * -2,
                      -1 - (lVar3 + uVar2),
                      ~((unaff_RBX ^ 0xffffffffffffffff | *(ulonglong *)(param_1 + -0x58)) &
                       ~(*(ulonglong *)(param_1 + -0x58) & ~unaff_RBX)));
        uVar1 = FUN_1664bfccb();
        return uVar1;
      }
      uVar1 = FUN_14e03e72c();
      return uVar1;
    }
    if (unaff_R14 == 0xdc307) {
      uVar1 = FUN_1574ba9da();
      return uVar1;
    }
    if (unaff_R14 == 0xdc308) {
      uVar1 = FUN_1574ba9da();
      return uVar1;
    }
    if (unaff_R14 == 0xdc37b) {
      uVar1 = FUN_1574ba9da();
      return uVar1;
    }
    uVar1 = FUN_14db210e8();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14d97675d FUN_14d97675d body=271 status=ok
// SIG undefined FUN_14d97675d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9767ee) */

void ** FUN_14d97675d(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x98);
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  FUN_157048354(-~unaff_R15 - (~(0xffffffffffffffff - unaff_R15 | uVar1) + 2),param_2,
                &stack0xfffffffffffffff0,uVar1 + unaff_R15);
  *(undefined8 *)(uVar1 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar1 - 8) = 0x1db13e8;
  *(ulonglong *)(uVar1 - 0x28cf) = uVar2;
  *(ulonglong *)(uVar1 - 0x28d7) = uVar2;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return &ExceptionList;
}



// FUNCTION 14d9768f9 FUN_14d9768f9 body=177 status=ok
// SIG undefined FUN_14d9768f9(void)

void FUN_14d9768f9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000020;
  
  (*(code *)0x16219b4be)
            (param_1,param_2,0x16219b4be,param_4,
             in_stack_00000020 + unaff_R15 + (in_stack_00000020 & unaff_R15) * -2);
  return;
}



// FUNCTION 14d976ae6 FUN_14d976ae6 body=139 status=ok
// SIG undefined FUN_14d976ae6(void)

void FUN_14d976ae6(void)

{
  return;
}



// FUNCTION 14d976e1b FUN_14d976e1b body=473 status=ok
// SIG undefined FUN_14d976e1b(void)

/* WARNING: Removing unreachable block (ram,0x000156c561f3) */
/* WARNING: Removing unreachable block (ram,0x00014d976fee) */
/* WARNING: Removing unreachable block (ram,0x00014d976ff4) */
/* WARNING: Removing unreachable block (ram,0x000156c561bb) */
/* WARNING: Removing unreachable block (ram,0x000156c561ee) */
/* WARNING: Removing unreachable block (ram,0x000156c561fc) */
/* WARNING: Removing unreachable block (ram,0x000156c5622d) */
/* WARNING: Removing unreachable block (ram,0x000156c56233) */
/* WARNING: Removing unreachable block (ram,0x0001664908ea) */
/* WARNING: Removing unreachable block (ram,0x000156c562b6) */
/* WARNING: Removing unreachable block (ram,0x000156c562bc) */
/* WARNING: Removing unreachable block (ram,0x000165291c4c) */
/* WARNING: Removing unreachable block (ram,0x00014d976ed2) */
/* WARNING: Removing unreachable block (ram,0x000160d25ebc) */
/* WARNING: Removing unreachable block (ram,0x000161b3a8c2) */
/* WARNING: Removing unreachable block (ram,0x000161b3a921) */
/* WARNING: Removing unreachable block (ram,0x00014d976ede) */
/* WARNING: Removing unreachable block (ram,0x00014d976f74) */
/* WARNING: Removing unreachable block (ram,0x000161b3a791) */
/* WARNING: Removing unreachable block (ram,0x000161b3a814) */
/* WARNING: Removing unreachable block (ram,0x000161b3a81f) */
/* WARNING: Removing unreachable block (ram,0x000161b3a82a) */
/* WARNING: Removing unreachable block (ram,0x000161b3a8bc) */
/* WARNING: Removing unreachable block (ram,0x000164f892b6) */
/* WARNING: Removing unreachable block (ram,0x000161b3a825) */
/* WARNING: Removing unreachable block (ram,0x00014d976f7a) */

undefined8 FUN_14d976e1b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160d25ebc();
  return uVar1;
}



// FUNCTION 14d976ffa FUN_14d976ffa body=156 status=ok
// SIG undefined FUN_14d976ffa(void)

/* WARNING: Removing unreachable block (ram,0x0001665a2665) */
/* WARNING: Removing unreachable block (ram,0x0001665a266b) */
/* WARNING: Removing unreachable block (ram,0x0001665a26f8) */
/* WARNING: Removing unreachable block (ram,0x0001650fb92c) */
/* WARNING: Removing unreachable block (ram,0x0001650fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001650fb9be) */
/* WARNING: Removing unreachable block (ram,0x000162e13c6b) */
/* WARNING: Removing unreachable block (ram,0x000162e13c7b) */
/* WARNING: Removing unreachable block (ram,0x000162e13c76) */
/* WARNING: Removing unreachable block (ram,0x000162e13c7e) */
/* WARNING: Removing unreachable block (ram,0x000162bdeedf) */
/* WARNING: Removing unreachable block (ram,0x0001665a26fd) */
/* WARNING: Removing unreachable block (ram,0x0001665a2703) */
/* WARNING: Removing unreachable block (ram,0x0001665a2772) */
/* WARNING: Removing unreachable block (ram,0x0001665a2778) */
/* WARNING: Removing unreachable block (ram,0x000166b1ad3d) */
/* WARNING: Removing unreachable block (ram,0x000166b1ad7a) */
/* WARNING: Removing unreachable block (ram,0x0001665a253e) */
/* WARNING: Removing unreachable block (ram,0x0001665a25d5) */
/* WARNING: Removing unreachable block (ram,0x00015724fdd9) */
/* WARNING: Removing unreachable block (ram,0x000165aa65a4) */
/* WARNING: Removing unreachable block (ram,0x000165aa65d7) */
/* WARNING: Removing unreachable block (ram,0x00014d977096) */

void FUN_14d976ffa(void)

{
  return;
}



// FUNCTION 14d977096 FUN_14d977096 body=156 status=ok
// SIG undefined FUN_14d977096(void)

void FUN_14d977096(void)

{
  return;
}



// FUNCTION 14d977135 FUN_14d977135 body=231 status=ok
// SIG undefined FUN_14d977135(void)

/* WARNING: Removing unreachable block (ram,0x00014d9771ac) */
/* WARNING: Removing unreachable block (ram,0x00014d9771b2) */

undefined8 FUN_14d977135(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d97736d FUN_14d97736d body=273 status=ok
// SIG undefined FUN_14d97736d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9773e0) */
/* WARNING: Removing unreachable block (ram,0x00014d9773e6) */
/* WARNING: Removing unreachable block (ram,0x000157207914) */
/* WARNING: Removing unreachable block (ram,0x00016558b8e8) */

void FUN_14d97736d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (*(ulonglong *)(unaff_R13 + -0x68) + unaff_R15 <
      (*(ulonglong *)(unaff_R13 + -0x68) & unaff_R15) * 2) {
    FUN_1623bce3e(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_15720787f();
  return;
}



// FUNCTION 14d977480 FUN_14d977480 body=162 status=ok
// SIG undefined FUN_14d977480(void)

void FUN_14d977480(undefined8 param_1,undefined8 param_2)

{
  FUN_14dd7b508(param_1,param_2);
  return;
}



// FUNCTION 14d97777b FUN_14d97777b body=382 status=ok
// SIG undefined FUN_14d97777b(void)

/* WARNING: Removing unreachable block (ram,0x00014d9777ed) */

void FUN_14d97777b(void)

{
  undefined8 *puVar1;
  undefined8 in_R9;
  byte in_TF;
  
  FUN_1615b4bd5();
  FUN_16652b934();
  puVar1 = (undefined8 *)&stack0xfffffffffffffff8;
  if ((in_TF & 1) == 0) {
    puVar1 = (undefined8 *)register0x00000020;
  }
  *puVar1 = in_R9;
  puVar1[-1] = &LAB_1570e108b;
  return;
}



// FUNCTION 14d9778fd FUN_14d9778fd body=171 status=ok
// SIG undefined FUN_14d9778fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d9779a2) */
/* WARNING: Removing unreachable block (ram,0x00014d9779a8) */
/* WARNING: Removing unreachable block (ram,0x00015b8f32d1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9778fd(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9779a8 FUN_14d9779a8 body=135 status=ok
// SIG undefined FUN_14d9779a8(void)

void FUN_14d9779a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = param_2;
  FUN_156501c85(local_res8,FUN_156501c85);
  return;
}



// FUNCTION 14d977a2f FUN_14d977a2f body=158 status=ok
// SIG undefined FUN_14d977a2f(void)

undefined8 FUN_14d977a2f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d977c14 FUN_14d977c14 body=303 status=ok
// SIG undefined FUN_14d977c14(void)

void FUN_14d977c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int in_R10D;
  longlong unaff_R12;
  
  uVar1 = FUN_1624f7460(param_1,param_2,param_3,in_R10D + (int)param_2);
  (*(code *)0x15b2df12d)
            (~(*(ulonglong *)(unaff_R12 + -0x58) & uVar1) &
             (*(ulonglong *)(unaff_R12 + -0x58) | uVar1),*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14d977d45 FUN_14d977d45 body=135 status=ok
// SIG undefined FUN_14d977d45(void)

void FUN_14d977d45(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 unaff_RDI;
  ushort *in_R10;
  undefined8 unaff_retaddr;
  undefined8 *local_res20;
  
  *in_R10 = (*in_R10 | 0x100) - 0x100;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,unaff_retaddr,param_4);
  *local_res20 = unaff_RDI;
  local_res20[-1] = unaff_RDI;
  *(undefined4 *)(local_res20 + -2) = 0x84e53f9;
  *(undefined4 *)((longlong)local_res20 + -0xc) = 0;
  local_res20[-3] = &LAB_14d95a2ee;
  return;
}



// FUNCTION 14d977f5e FUN_14d977f5e body=149 status=ok
// SIG undefined FUN_14d977f5e(void)

void FUN_14d977f5e(void)

{
  FUN_14db98690(&stack0x00000010,FUN_14db98690);
  return;
}



// FUNCTION 14d97806a FUN_14d97806a body=428 status=ok
// SIG undefined FUN_14d97806a(void)

void FUN_14d97806a(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x1652b372b)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d97818c FUN_14d97818c body=142 status=ok
// SIG undefined FUN_14d97818c(void)

/* WARNING: Removing unreachable block (ram,0x00014d97820f) */
/* WARNING: Removing unreachable block (ram,0x00014d97821a) */
/* WARNING: Removing unreachable block (ram,0x00014d97834b) */
/* WARNING: Removing unreachable block (ram,0x00014d978351) */
/* WARNING: Removing unreachable block (ram,0x00014d9783bd) */
/* WARNING: Removing unreachable block (ram,0x00014d9783c2) */
/* WARNING: Removing unreachable block (ram,0x00014d9783eb) */
/* WARNING: Removing unreachable block (ram,0x00014d9783fa) */
/* WARNING: Removing unreachable block (ram,0x00014d978405) */
/* WARNING: Removing unreachable block (ram,0x00014d978400) */
/* WARNING: Removing unreachable block (ram,0x000161038116) */
/* WARNING: Removing unreachable block (ram,0x0001625233d8) */
/* WARNING: Removing unreachable block (ram,0x00014d978215) */

void FUN_14d97818c(undefined8 param_1,undefined8 param_2)

{
  FUN_14e119038(8,param_2);
  return;
}



// FUNCTION 14d97821a FUN_14d97821a body=462 status=ok
// SIG undefined FUN_14d97821a(void)

/* WARNING: Removing unreachable block (ram,0x00014d978405) */
/* WARNING: Removing unreachable block (ram,0x00014d978351) */
/* WARNING: Removing unreachable block (ram,0x00014d9783c2) */
/* WARNING: Removing unreachable block (ram,0x00014d9783eb) */
/* WARNING: Removing unreachable block (ram,0x00014d9783fa) */
/* WARNING: Removing unreachable block (ram,0x00014d978400) */
/* WARNING: Removing unreachable block (ram,0x000161038116) */
/* WARNING: Removing unreachable block (ram,0x00014d9783bd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d97821a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_164b6356b(param_1,(*(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_RDI + -0x68) | param_1));
  FUN_16538939d(param_1);
  return;
}



// FUNCTION 14d9784b7 FUN_14d9784b7 body=157 status=ok
// SIG undefined FUN_14d9784b7(void)

/* WARNING: Removing unreachable block (ram,0x00015b5b7af2) */

void FUN_14d9784b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 unaff_RDI;
  longlong in_R10;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  
  *(undefined8 *)(in_R10 + 0x10) = unaff_RDI;
  *(undefined8 *)(param_5 + -8) = uStackX_8;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined **)(param_5 + -8) = &DAT_15b5b7b5b;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x20) = unaff_R13;
  *(undefined **)(param_5 + -0x18) = &DAT_14d978556;
  return;
}



// FUNCTION 14d9785e3 FUN_14d9785e3 body=931 status=ok
// SIG undefined FUN_14d9785e3(void)

/* WARNING: Removing unreachable block (ram,0x00014d978686) */
/* WARNING: Removing unreachable block (ram,0x00014d97868c) */
/* WARNING: Removing unreachable block (ram,0x00014d978710) */
/* WARNING: Removing unreachable block (ram,0x00014d978716) */
/* WARNING: Removing unreachable block (ram,0x000161264a0b) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9785e3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,ulonglong param_7,undefined8 param_8,
                  undefined8 param_9,ulonglong param_10)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte unaff_BPL;
  ulonglong uVar5;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),
                   (~(byte)param_5 | unaff_BPL) + (byte)param_5 + '\x01');
  uVar5 = (*(ulonglong *)(unaff_R12 + -0x30) & in_RAX) << 1;
  lVar1 = FUN_166c3b275(param_1,unaff_BPL | (byte)param_5);
  pcVar3 = FUN_156d3617f;
  FUN_156d3617f(param_1,FUN_156d3617f,lVar1 + (uVar2 & unaff_R15) * -2);
  uVar2 = FUN_14df05fe9(param_1);
  uVar2 = 0xffffffffffffffff - (param_7 & uVar2) & in_stack_00000018;
  FUN_16619b55c();
  *(code **)((param_5 ^ unaff_R15) + 8) = pcVar3;
  uVar4 = param_10 ^ 0xffffffffffffffff | uVar5;
  uVar5 = (~uVar4 | ~uVar5 | param_10) + uVar4 + 1;
  uVar4 = ~uVar5;
  if (-1 < (longlong)uVar5) {
    FUN_165040f91();
    return;
  }
  *(ulonglong *)(uVar4 - 8) = uVar2;
  *(ulonglong *)(uVar4 - 0x10) = uVar2;
  *(undefined4 *)(uVar4 - 0x18) = 0xc052004;
  *(undefined4 *)(uVar4 - 0x14) = 0;
  *(undefined **)(uVar4 - 0x20) = &DAT_15b922ba1;
  return;
}



// FUNCTION 14d9787a8 thunk_FUN_1574ba9da body=19 status=ok
// SIG undefined thunk_FUN_1574ba9da(void)

void thunk_FUN_1574ba9da(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14d9787bb FUN_14d9787bb body=259 status=ok
// SIG undefined FUN_14d9787bb(void)

void FUN_14d9787bb(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xd68ed) {
    return;
  }
  FUN_166a48195();
  return;
}



// FUNCTION 14d97883a FUN_14d97883a body=30 status=ok
// SIG undefined FUN_14d97883a(void)

undefined8 FUN_14d97883a(void)

{
  undefined8 in_RAX;
  longlong unaff_R12;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_R12) = in_RAX;
  return auStackX_18[0];
}



// FUNCTION 14d978906 FUN_14d978906 body=145 status=ok
// SIG undefined FUN_14d978906(void)

void FUN_14d978906(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_R15;
  ulonglong auStackX_10 [3];
  
  param_2 = param_2 - unaff_RBX;
  uVar1 = *(ulonglong *)((longlong)auStackX_10 + param_2);
  *(ulonglong *)((longlong)auStackX_10 + param_2) = ~*(ulonglong *)((longlong)auStackX_10 + param_2)
  ;
  *(ulonglong *)((longlong)auStackX_10 + param_2) =
       *(ulonglong *)((longlong)auStackX_10 + param_2) | unaff_R15;
  (*(code *)&LAB_1668ca586)
            (param_1,(~*(ulonglong *)((longlong)auStackX_10 + param_2) | ~unaff_R15 | uVar1) +
                     *(longlong *)((longlong)auStackX_10 + param_2) + 1 ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d97899a FUN_14d97899a body=153 status=ok
// SIG undefined FUN_14d97899a(void)

undefined8 FUN_14d97899a(void)

{
  ulonglong in_RAX;
  longlong unaff_RSI;
  undefined8 local_res18;
  
  *(ulonglong *)(unaff_RSI + 8) = (~in_RAX | *(ulonglong *)(unaff_RSI + 8)) + in_RAX + 1;
  return local_res18;
}



// FUNCTION 14d978a34 FUN_14d978a34 body=335 status=ok
// SIG undefined FUN_14d978a34(void)

undefined8 FUN_14d978a34(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  undefined8 in_R11;
  longlong unaff_R13;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x20) = 0x14d978ad2;
  uVar1 = FUN_16486d394();
  *(undefined8 *)(local_res10 + -0x20) = uVar1;
  *(undefined4 *)(local_res10 + -0x20) = 0x6721c4c4;
  *(undefined4 *)(local_res10 + -0x1c) = 0xe02e7c62;
  uVar2 = *(ulonglong *)(local_res10 + -0x20);
  *(undefined8 *)(local_res10 + -0x20) = *(undefined8 *)(unaff_R13 + -0x58);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x40) | uVar2;
  *(ulonglong *)(local_res10 + -0x20) = uVar2;
  *(ulonglong *)(local_res10 + -0x28) = uVar2;
  *(ulonglong *)(local_res10 + -0x30) = uVar2;
  *(code **)(local_res10 + -0x20) = FUN_14d978b85;
  *(undefined **)(local_res10 + -0x28) = &DAT_15669ea69;
  return *(undefined8 *)(local_res10 + -0x30);
}



// FUNCTION 14d978b85 FUN_14d978b85 body=606 status=ok
// SIG undefined FUN_14d978b85(void)

/* WARNING: Removing unreachable block (ram,0x000162c663d7) */
/* WARNING: Removing unreachable block (ram,0x000162c66407) */
/* WARNING: Removing unreachable block (ram,0x000162c66498) */
/* WARNING: Removing unreachable block (ram,0x000162c6649d) */
/* WARNING: Removing unreachable block (ram,0x000162c664a3) */
/* WARNING: Removing unreachable block (ram,0x0001629cb34a) */
/* WARNING: Removing unreachable block (ram,0x000162c66383) */
/* WARNING: Removing unreachable block (ram,0x000162c66401) */
/* WARNING: Removing unreachable block (ram,0x000162c663fc) */
/* WARNING: Removing unreachable block (ram,0x000161ca5473) */
/* WARNING: Removing unreachable block (ram,0x00014d978bfb) */

undefined8 FUN_14d978b85(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50) | unaff_R15;
  if (CARRY8(~uVar2 | *(ulonglong *)(unaff_R13 + -0x50) & unaff_R15 ^ 0xffffffffffffffff,uVar2)) {
    uVar1 = FUN_15b94f732();
    return uVar1;
  }
  uVar1 = FUN_15b94f732();
  return uVar1;
}



// FUNCTION 14d978f14 FUN_14d978f14 body=274 status=ok
// SIG undefined FUN_14d978f14(void)

/* WARNING: Removing unreachable block (ram,0x00014d978f85) */
/* WARNING: Removing unreachable block (ram,0x00014d978f91) */
/* WARNING: Removing unreachable block (ram,0x00014d978feb) */
/* WARNING: Removing unreachable block (ram,0x00014d978ff0) */
/* WARNING: Removing unreachable block (ram,0x00014d978ffc) */
/* WARNING: Removing unreachable block (ram,0x00014d978fff) */
/* WARNING: Removing unreachable block (ram,0x00014d97904a) */
/* WARNING: Removing unreachable block (ram,0x00014d97904f) */
/* WARNING: Removing unreachable block (ram,0x0001651be2bf) */

void FUN_14d978f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_156b019fd(*(undefined8 *)(unaff_R13 + -0x98),param_2,param_3,param_4);
  return;
}



// FUNCTION 14d97902b FUN_14d97902b body=126 status=ok
// SIG undefined FUN_14d97902b(void)

void FUN_14d97902b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8;
  undefined8 local_res10;
  
  if (-1 < (longlong)local_res10) {
    *(byte *)(local_res10 & 0x7fffffffffffffff) = local_res8;
    thunk_FUN_156947643();
    return;
  }
  FUN_1566ce4ae(param_1,param_2,~(local_res8 & 0x86) + 0x86,param_4);
  return;
}



// FUNCTION 14d9790a9 FUN_14d9790a9 body=173 status=ok
// SIG undefined FUN_14d9790a9(void)

void FUN_14d9790a9(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x30);
  FUN_14dd7e230(~(in_RAX & uVar1),param_2,uVar1,~*(ulonglong *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14d97915c FUN_14d97915c body=302 status=ok
// SIG undefined FUN_14d97915c(void)

void FUN_14d97915c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161aaa561(param_1,param_2,param_3,param_4);
  (*(code *)0x16289b5a4)();
  return;
}



// FUNCTION 14d97928d FUN_14d97928d body=608 status=ok
// SIG undefined FUN_14d97928d(void)

/* WARNING: Removing unreachable block (ram,0x00014d97931d) */
/* WARNING: Removing unreachable block (ram,0x00014d979433) */
/* WARNING: Removing unreachable block (ram,0x00014d979437) */

undefined8 FUN_14d97928d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d979521 FUN_14d979521 body=218 status=ok
// SIG undefined FUN_14d979521(void)

void FUN_14d979521(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar5;
  longlong unaff_retaddr;
  undefined4 uStackX_c;
  ulonglong local_res10 [3];
  ulonglong uStack_8;
  
  param_4 = unaff_retaddr - param_4;
  puVar1 = (ulonglong *)((longlong)local_res10 + param_4 + 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_RBP;
  *(undefined8 *)((longlong)local_res10 + param_4) = in_R10;
  *(undefined4 *)(&stack0x00000008 + param_4) = 0x5a9ff9ef;
  *(undefined4 *)((longlong)&uStackX_c + param_4) = 0;
  uVar3 = (*(ulonglong *)(&stack0x00000008 + param_4) ^ 0x5a9ff9ff) - 1;
  *puVar1 = ~*puVar1;
  uVar5 = *puVar1;
  uVar2 = *puVar1;
  uVar4 = uVar3 - *puVar1;
  *puVar1 = uVar4;
  *(ulonglong *)((longlong)local_res10 + param_4) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar3,uVar2) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar3 < uVar5) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar5 = *(ulonglong *)((longlong)local_res10 + param_4);
  *(ulonglong *)((longlong)local_res10 + param_4) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)((longlong)local_res10 + param_4);
  *(ulonglong *)((longlong)local_res10 + param_4) = local_res10[0];
  *(ulonglong *)(&stack0x00000008 + param_4) = local_res10[0];
  *(undefined8 *)((longlong)local_res10 + param_4 + -0x10) = in_R11;
  *(ulonglong *)((longlong)&uStack_8 + param_4) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(code **)((longlong)local_res10 + param_4) = FUN_14d9795fc;
  FUN_1564db213(FUN_1564db213,param_2,param_3,*(undefined8 *)(&stack0x00000008 + param_4));
  return;
}



// FUNCTION 14d9795fc FUN_14d9795fc body=25 status=ok
// SIG undefined FUN_14d9795fc(void)

void FUN_14d9795fc(void)

{
  return;
}



// FUNCTION 14d9796a3 FUN_14d9796a3 body=628 status=ok
// SIG undefined FUN_14d9796a3(void)

/* WARNING: Removing unreachable block (ram,0x00014d979866) */
/* WARNING: Removing unreachable block (ram,0x00014d9798f2) */
/* WARNING: Removing unreachable block (ram,0x00014d9798f8) */
/* WARNING: Removing unreachable block (ram,0x00014d979977) */
/* WARNING: Removing unreachable block (ram,0x00014d97996c) */
/* WARNING: Removing unreachable block (ram,0x00014d97997a) */
/* WARNING: Removing unreachable block (ram,0x00015643ae13) */
/* WARNING: Removing unreachable block (ram,0x00014d979749) */
/* WARNING: Removing unreachable block (ram,0x00014d979860) */
/* WARNING: Removing unreachable block (ram,0x000161e3d498) */
/* WARNING: Removing unreachable block (ram,0x0001625d344c) */
/* WARNING: Removing unreachable block (ram,0x0001648d6b9c) */
/* WARNING: Removing unreachable block (ram,0x000161e3d519) */
/* WARNING: Removing unreachable block (ram,0x000161e3d51f) */
/* WARNING: Removing unreachable block (ram,0x00016244826a) */
/* WARNING: Removing unreachable block (ram,0x0001624482f7) */
/* WARNING: Removing unreachable block (ram,0x0001624482fb) */
/* WARNING: Removing unreachable block (ram,0x0001625d3441) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d9796a3(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_164bccfc7(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14d9797eb FUN_14d9797eb body=612 status=ok
// SIG undefined FUN_14d9797eb(void)

/* WARNING: Removing unreachable block (ram,0x000161e3d519) */
/* WARNING: Removing unreachable block (ram,0x000161e3d51f) */
/* WARNING: Removing unreachable block (ram,0x00014d979866) */
/* WARNING: Removing unreachable block (ram,0x00014d9798f2) */
/* WARNING: Removing unreachable block (ram,0x00014d9798f8) */
/* WARNING: Removing unreachable block (ram,0x00014d979977) */
/* WARNING: Removing unreachable block (ram,0x00014d97996c) */
/* WARNING: Removing unreachable block (ram,0x00014d97997a) */
/* WARNING: Removing unreachable block (ram,0x00015643ae13) */

ulonglong FUN_14d9797eb(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_162993b8b(param_1,param_2,param_3);
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14d979add FUN_14d979add body=137 status=ok
// SIG undefined FUN_14d979add(void)

void FUN_14d979add(ulonglong param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong unaff_RDI;
  
  FUN_164b8db6f((char)param_1,*(undefined8 *)(unaff_RDI + -0x68),*param_3 ^ param_1);
  return;
}



// FUNCTION 14d979d6b FUN_14d979d6b body=29 status=ok
// SIG undefined FUN_14d979d6b(void)

void FUN_14d979d6b(void)

{
  return;
}



// FUNCTION 14d979f59 FUN_14d979f59 body=141 status=ok
// SIG undefined FUN_14d979f59(void)

void FUN_14d979f59(undefined8 param_1,undefined8 param_2)

{
  FUN_156e3da19(param_1,param_2);
  return;
}



// FUNCTION 14d97a070 FUN_14d97a070 body=262 status=ok
// SIG undefined FUN_14d97a070(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c35b7) */
/* WARNING: Removing unreachable block (ram,0x00014d7c35d0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c35d7) */
/* WARNING: Removing unreachable block (ram,0x000166b60b2e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c35f8) */
/* WARNING: Removing unreachable block (ram,0x00014d97a0aa) */
/* WARNING: Removing unreachable block (ram,0x00014d97a0b0) */
/* WARNING: Removing unreachable block (ram,0x00016603bc6c) */
/* WARNING: Removing unreachable block (ram,0x00014d97a0b6) */
/* WARNING: Removing unreachable block (ram,0x00014d97a0f2) */
/* WARNING: Removing unreachable block (ram,0x00014d97a0f6) */

void FUN_14d97a070(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1620a4c13(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14d97a5e9 FUN_14d97a5e9 body=175 status=ok
// SIG undefined FUN_14d97a5e9(void)

void FUN_14d97a5e9(void)

{
  return;
}



// FUNCTION 14d97a699 FUN_14d97a699 body=432 status=ok
// SIG undefined FUN_14d97a699(void)

/* WARNING: Instruction at (ram,0x00016287d3f6) overlaps instruction at (ram,0x00016287d3f5)
    */
/* WARNING: Removing unreachable block (ram,0x000156d6840f) */
/* WARNING: Removing unreachable block (ram,0x000156d68415) */
/* WARNING: Removing unreachable block (ram,0x000156d683c0) */
/* WARNING: Removing unreachable block (ram,0x0001657c7095) */
/* WARNING: Removing unreachable block (ram,0x000166adaa7b) */
/* WARNING: Removing unreachable block (ram,0x000166adaaa1) */
/* WARNING: Removing unreachable block (ram,0x000166adaa9b) */
/* WARNING: Removing unreachable block (ram,0x000156d68409) */
/* WARNING: Removing unreachable block (ram,0x0001657c70ac) */
/* WARNING: Removing unreachable block (ram,0x00015b68850b) */
/* WARNING: Removing unreachable block (ram,0x0001657c70fe) */
/* WARNING: Removing unreachable block (ram,0x0001657c7104) */
/* WARNING: Removing unreachable block (ram,0x0001657c7109) */
/* WARNING: Removing unreachable block (ram,0x0001657c7188) */
/* WARNING: Removing unreachable block (ram,0x000161d6e202) */
/* WARNING: Removing unreachable block (ram,0x00015661b164) */
/* WARNING: Removing unreachable block (ram,0x0001657c718e) */
/* WARNING: Removing unreachable block (ram,0x00016287d3df) */
/* WARNING: Removing unreachable block (ram,0x00016287d3f6) */
/* WARNING: Removing unreachable block (ram,0x00016287d3f5) */
/* WARNING: Removing unreachable block (ram,0x00016287d3fd) */
/* WARNING: Removing unreachable block (ram,0x00014d97a72e) */
/* WARNING: Removing unreachable block (ram,0x00014d97a748) */
/* WARNING: Removing unreachable block (ram,0x00014d97a741) */
/* WARNING: Removing unreachable block (ram,0x00014d97a74a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d97a699(undefined1 param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R10;
  longlong lVar5;
  longlong in_R11;
  undefined8 unaff_R15;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x98);
  uVar6 = *(ulonglong *)(unaff_RSI + -8) ^ unaff_RBP;
  lVar5 = (-~unaff_RBP - (~*(ulonglong *)(unaff_RSI + -0x88) + 2)) +
          (*(ulonglong *)(unaff_RSI + -0x88) & unaff_RBP) * -2;
  if (-1 < in_R11) {
    uVar4 = FUN_16287d35c();
    return uVar4;
  }
  uVar6 = CONCAT62((int6)(uVar6 >> 0x10),~(ushort)uVar6) ^ 0xffff;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7a7bb3) is written */
                    /* WARNING: Read-only address (ram,0x00014d7a7bb3) is written */
  LOCK();
  cVar3 = (char)in_RAX;
  uVar2 = param_1;
  if (cVar3 != '\0') {
    in_RAX = in_RAX & 0xffffffffffffff00;
    uVar2 = uRam000000014d7a7bb3;
  }
  uRam000000014d7a7bb3 = uVar2;
  UNLOCK();
  *(undefined8 *)(lVar5 + -8) = unaff_R15;
  *(undefined8 *)(lVar5 + -0x10) = unaff_R15;
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar6 & 0x200) != 0) * 0x200 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(lVar5 + -0x18);
  *(ulonglong *)(lVar5 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar5 + -0x20) = in_R10;
  *(ulonglong *)(lVar5 + -0x28) = in_RAX;
  uVar6 = *(ulonglong *)(lVar5 + -0x18);
  *(ulonglong *)(lVar5 + -0x18) = uVar1 ^ unaff_RBP;
  *(ulonglong *)(lVar5 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar5 + -8) = 0x9e3bde;
  uVar4 = FUN_15b3d5987();
  return uVar4;
}



// FUNCTION 14d97a7c0 FUN_14d97a7c0 body=61 status=ok
// SIG undefined FUN_14d97a7c0(void)

void FUN_14d97a7c0(void)

{
  return;
}



// FUNCTION 14d97aa45 FUN_14d97aa45 body=161 status=ok
// SIG undefined FUN_14d97aa45(void)

/* WARNING: Removing unreachable block (ram,0x000157884316) */
/* WARNING: Removing unreachable block (ram,0x00014d97aae6) */

void FUN_14d97aa45(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong unaff_RDI;
  ulonglong unaff_R14;
  
  if (*(ulonglong *)(unaff_RDI + -0x40) + param_2 <
      (*(ulonglong *)(unaff_RDI + -0x40) & param_2) * 2) {
    FUN_157884283();
    return;
  }
  if (param_2 == 0) {
    FUN_165be68fa(0xc2,0xfffffffffffffff8,
                  (~param_2 | *(ulonglong *)(unaff_RDI + -0x50)) + param_2 + 1,
                  param_4 + ~(~unaff_R14 | ~param_1) * -2);
    return;
  }
  (*(code *)0x15b377899)(param_2,0x15b377899,0x7845a85b,*(undefined8 *)(unaff_RDI + -0x60));
  return;
}



// FUNCTION 14d97aae6 FUN_14d97aae6 body=129 status=ok
// SIG undefined FUN_14d97aae6(void)

void FUN_14d97aae6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ushort *in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ushort in_R11W;
  ulonglong uVar2;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  *in_RAX = *in_RAX | ~in_R11W;
  *in_RAX = ~*in_RAX;
  syscall();
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = param_2;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = uStackX_8;
  *(undefined4 *)(local_res20 + -0x20) = 0x690aee9b;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(local_res20 + -0x20);
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x28) = param_3;
  *(undefined8 *)(local_res20 + -0x30) = unaff_RSI;
  *(ulonglong *)(local_res20 + -0x18) = uStackX_18;
  *(ulonglong *)(local_res20 + -8) = (uVar1 ^ 0x616c1377) - 0x42babd2;
  (*(code *)0x161dc5728)(0x14d97aafc,0x161dc5728,*(undefined8 *)(local_res20 + -0x28));
  return;
}



// FUNCTION 14d97ad6a FUN_14d97ad6a body=194 status=ok
// SIG undefined FUN_14d97ad6a(void)

/* WARNING: Removing unreachable block (ram,0x00014d97ae08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d97ad6a(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = in_R11;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RSI;
  *(undefined1 **)(lStackX_18 + -8) = &LAB_156f625bc;
  *(undefined8 *)(lStackX_18 + -0x10) = in_RAX;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined **)(lStackX_18 + -0x10) = &DAT_14d7ad170;
  return *(undefined8 *)(lStackX_18 + -0x18);
}



// FUNCTION 14d97af34 FUN_14d97af34 body=133 status=ok
// SIG undefined FUN_14d97af34(void)

/* WARNING: Instruction at (ram,0x00014d97afdd) overlaps instruction at (ram,0x00014d97afdb)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014e216c43) */
/* WARNING: Removing unreachable block (ram,0x00014d97b057) */
/* WARNING: Removing unreachable block (ram,0x00014d97b062) */
/* WARNING: Removing unreachable block (ram,0x00014d97b05d) */
/* WARNING: Removing unreachable block (ram,0x00014e216c63) */
/* WARNING: Removing unreachable block (ram,0x00014d97afb9) */
/* WARNING: Removing unreachable block (ram,0x00014d97afd3) */
/* WARNING: Removing unreachable block (ram,0x00014d97afd8) */

void FUN_14d97af34(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1615c92c5((char)param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3);
  return;
}



// FUNCTION 14d97afb9 FUN_14d97afb9 body=36 status=ok
// SIG undefined FUN_14d97afb9(void)

/* WARNING: Instruction at (ram,0x00014d97afdd) overlaps instruction at (ram,0x00014d97afdb)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014e216c43) */
/* WARNING: Removing unreachable block (ram,0x00014d97b057) */
/* WARNING: Removing unreachable block (ram,0x00014d97b062) */
/* WARNING: Removing unreachable block (ram,0x00014d97b05d) */
/* WARNING: Removing unreachable block (ram,0x00014e216c63) */

void FUN_14d97afb9(ulonglong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  
  if (unaff_R13 == -0x6e59ce70) {
    (*(code *)0x16688aafa)
              (1,0x16688aafa,(*(ulonglong *)(unaff_RDI + -0x58) | param_1) ^ 0xffffffffffffffff);
    FUN_166813a7f();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d97b062 FUN_14d97b062 body=74 status=ok
// SIG undefined FUN_14d97b062(void)

void FUN_14d97b062(void)

{
  return;
}



// FUNCTION 14d97b183 FUN_14d97b183 body=14 status=ok
// SIG undefined FUN_14d97b183(void)

void FUN_14d97b183(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_15b3d5987(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d97b372 FUN_14d97b372 body=60 status=ok
// SIG undefined FUN_14d97b372(void)

void FUN_14d97b372(void)

{
  return;
}



// FUNCTION 14d97b418 FUN_14d97b418 body=969 status=ok
// SIG undefined FUN_14d97b418(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d97b609) */
/* WARNING: Removing unreachable block (ram,0x000157608acc) */
/* WARNING: Removing unreachable block (ram,0x00014d97b543) */
/* WARNING: Removing unreachable block (ram,0x00014d97b549) */
/* WARNING: Removing unreachable block (ram,0x00014d97b604) */
/* WARNING: Removing unreachable block (ram,0x00014d97b60f) */
/* WARNING: Removing unreachable block (ram,0x00014d97b7b3) */
/* WARNING: Removing unreachable block (ram,0x00014d97b7b7) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac4aa) */

undefined8 FUN_14d97b418(void)

{
  undefined8 uVar1;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  if (CARRY8(unaff_R15 - (local_res20 | unaff_R15),local_res20)) {
    uVar1 = thunk_FUN_161e278ab();
    return uVar1;
  }
  uVar1 = thunk_FUN_161e278ab();
  return uVar1;
}



// FUNCTION 14d97b7e6 FUN_14d97b7e6 body=53 status=ok
// SIG undefined FUN_14d97b7e6(void)

void FUN_14d97b7e6(void)

{
  return;
}



// FUNCTION 14d97ba67 FUN_14d97ba67 body=596 status=ok
// SIG undefined FUN_14d97ba67(void)

/* WARNING: Removing unreachable block (ram,0x00014d97bc46) */
/* WARNING: Removing unreachable block (ram,0x00014d97bccc) */
/* WARNING: Removing unreachable block (ram,0x00014d97bcd1) */
/* WARNING: Removing unreachable block (ram,0x00014d97bcd7) */
/* WARNING: Removing unreachable block (ram,0x00014d97bcdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d97ba67(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_156894bae(param_1,param_2,param_3);
  pcVar2 = FUN_15b6b095b;
  FUN_15b6b095b(param_1,0xc94a6fb);
  if (pcVar2 == (code *)0xc1b8a) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (pcVar2 != (code *)0xc1b8b) {
    uVar1 = FUN_161041e08();
    return uVar1;
  }
  uVar1 = FUN_165e93f27();
  return uVar1;
}



// FUNCTION 14d97bc46 FUN_14d97bc46 body=397 status=ok
// SIG undefined FUN_14d97bc46(void)

/* WARNING: Removing unreachable block (ram,0x00014d97bcdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_14d97bc46(void)

{
  undefined1 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15)) {
    uVar1 = FUN_16677ab80();
    return uVar1;
  }
  uVar1 = FUN_16677ab80();
  return uVar1;
}



// FUNCTION 14d97bf1e FUN_14d97bf1e body=8 status=ok
// SIG undefined FUN_14d97bf1e(void)

/* WARNING: Removing unreachable block (ram,0x00014d97bfad) */
/* WARNING: Removing unreachable block (ram,0x00014d97bf81) */
/* WARNING: Removing unreachable block (ram,0x00014d97bfa9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d97bf1e(undefined8 param_1)

{
  undefined8 *puVar1;
  byte unaff_BPL;
  longlong unaff_R13;
  char in_stack_00000018;
  
  thunk_FUN_15b642ca5(param_1);
  puVar1 = &SUB_15b4b71c2;
  (*(code *)&SUB_15b4b71c2)();
  FUN_16246e848(puVar1);
  FUN_162a0d28c(*(undefined8 *)(unaff_R13 + -0x48),(in_stack_00000018 + -1) - ~unaff_BPL);
  return;
}



// FUNCTION 14d97bf26 FUN_14d97bf26 body=577 status=ok
// SIG undefined FUN_14d97bf26(void)

/* WARNING: Removing unreachable block (ram,0x00014d97bfad) */
/* WARNING: Removing unreachable block (ram,0x00014d97bf81) */
/* WARNING: Removing unreachable block (ram,0x00014d97bfa9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d97bf26(undefined8 param_1)

{
  undefined8 *puVar1;
  byte unaff_BPL;
  longlong unaff_R13;
  char unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1);
  puVar1 = &SUB_15b4b71c2;
  (*(code *)&SUB_15b4b71c2)();
  FUN_16246e848(puVar1);
  FUN_162a0d28c(*(undefined8 *)(unaff_R13 + -0x48),(unaff_retaddr + -1) - ~unaff_BPL);
  return;
}



// FUNCTION 14d97c024 FUN_14d97c024 body=17 status=ok
// SIG undefined FUN_14d97c024(void)

void FUN_14d97c024(void)

{
  return;
}



// FUNCTION 14d97c0ca FUN_14d97c0ca body=131 status=ok
// SIG undefined FUN_14d97c0ca(void)

void FUN_14d97c0ca(void)

{
  return;
}



// FUNCTION 14d97c155 FUN_14d97c155 body=156 status=ok
// SIG undefined FUN_14d97c155(void)

void FUN_14d97c155(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_1658cc654(in_stack_00000008,in_stack_00000010,param_3);
  return;
}



// FUNCTION 14d97c1f2 FUN_14d97c1f2 body=47 status=ok
// SIG undefined FUN_14d97c1f2(void)

undefined8 FUN_14d97c1f2(void)

{
  undefined8 local_res10;
  
  return local_res10;
}



// FUNCTION 14d97c3c5 FUN_14d97c3c5 body=113 status=ok
// SIG undefined FUN_14d97c3c5(void)

void FUN_14d97c3c5(char param_1)

{
  char cVar1;
  char unaff_retaddr;
  longlong local_res10;
  
  LOCK();
  cVar1 = param_1;
  if (unaff_retaddr != DAT_14d7c1e7c) {
    cVar1 = DAT_14d7c1e7c;
  }
  DAT_14d7c1e7c = cVar1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x16f95d0;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d97c45f FUN_14d97c45f body=257 status=ok
// SIG undefined FUN_14d97c45f(void)

void FUN_14d97c45f(void)

{
  FUN_14de4cba6();
  FUN_162b3177d();
  return;
}



// FUNCTION 14d97c677 FUN_14d97c677 body=433 status=ok
// SIG undefined FUN_14d97c677(void)

/* WARNING: Removing unreachable block (ram,0x0001610b7d9a) */
/* WARNING: Removing unreachable block (ram,0x0001610b7f2e) */
/* WARNING: Removing unreachable block (ram,0x0001610b7f34) */
/* WARNING: Removing unreachable block (ram,0x00014da6c8a0) */
/* WARNING: Removing unreachable block (ram,0x00014d97c70b) */
/* WARNING: Removing unreachable block (ram,0x00014d97c711) */
/* WARNING: Removing unreachable block (ram,0x00015b9d9c6b) */
/* WARNING: Removing unreachable block (ram,0x00015b9d9d6e) */
/* WARNING: Removing unreachable block (ram,0x00015b9d9d73) */
/* WARNING: Removing unreachable block (ram,0x00015b9d9d79) */
/* WARNING: Removing unreachable block (ram,0x000166006498) */
/* WARNING: Removing unreachable block (ram,0x000161039c6d) */
/* WARNING: Removing unreachable block (ram,0x000166006509) */
/* WARNING: Removing unreachable block (ram,0x00016600650f) */
/* WARNING: Removing unreachable block (ram,0x00016600651a) */
/* WARNING: Removing unreachable block (ram,0x00014d97c792) */
/* WARNING: Removing unreachable block (ram,0x00014d97c798) */
/* WARNING: Removing unreachable block (ram,0x00014d97c79d) */
/* WARNING: Removing unreachable block (ram,0x00014d97c944) */
/* WARNING: Removing unreachable block (ram,0x00014d97c949) */
/* WARNING: Removing unreachable block (ram,0x00014d97c94f) */
/* WARNING: Removing unreachable block (ram,0x000161e1184b) */
/* WARNING: Removing unreachable block (ram,0x000161e118cc) */
/* WARNING: Removing unreachable block (ram,0x000161e118d2) */
/* WARNING: Removing unreachable block (ram,0x000161e118d7) */
/* WARNING: Removing unreachable block (ram,0x0001610b7d08) */
/* WARNING: Removing unreachable block (ram,0x0001610b7d94) */
/* WARNING: Removing unreachable block (ram,0x000165d3c559) */
/* WARNING: Removing unreachable block (ram,0x0001610b7d89) */

void FUN_14d97c677(undefined8 param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff1cb06d4 + unaff_RSI);
  *(uint *)puVar1 = 0x76789d12;
  *(uint *)(puVar1 + -1) = 0xe3bd99c1;
  *(uint *)((longlong)puVar1 + -4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + puVar1[-1] + 0x1c426643) = 0;
  uVar4 = *puVar1;
  *puVar1 = unaff_R14;
  uVar3 = (param_2 ^
          ~(~(uVar4 & 0xffffffff917543da) & (~(uVar4 & 0xffffffff917543da) - 0x6e8abc26) - ~uVar4))
          + *(longlong *)(unaff_R13 + -0x28);
  *puVar1 = unaff_R15;
  uVar4 = *puVar1;
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  *puVar1 = 0x7f869020;
  puVar1[-1] = unaff_R13;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xffffffffeeace244;
  *puVar1 = ~(~(uVar2 & 0xffffffffeeace244) & *puVar1);
  *puVar1 = *puVar1 ^ 0x6ed58d9b;
  *(uint *)puVar1 = 0;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x834676a2;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x25929d83;
  *(uint *)puVar1 = (uint)*puVar1 + 0x592b14df;
  *(uint *)puVar1 = (uint)*puVar1 ^ 0x8198b402;
  FUN_1660b99ac(param_1,~((~((uVar4 ^ 0xffffffffffffffff) & uVar3) + uVar3) -
                          ~(uVar4 ^ 0xffffffffffffffff) & (~uVar3 | unaff_R15)));
  return;
}



// FUNCTION 14d97c82c FUN_14d97c82c body=292 status=ok
// SIG undefined FUN_14d97c82c(void)

/* WARNING: Removing unreachable block (ram,0x0001610b7d9a) */
/* WARNING: Removing unreachable block (ram,0x0001610b7f2e) */
/* WARNING: Removing unreachable block (ram,0x0001610b7f34) */
/* WARNING: Removing unreachable block (ram,0x00014da6c8a0) */
/* WARNING: Removing unreachable block (ram,0x0001610b7d89) */
/* WARNING: Removing unreachable block (ram,0x000161e118d7) */
/* WARNING: Removing unreachable block (ram,0x00014d97c94f) */

void FUN_14d97c82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  longlong lVar11;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 uStack_48;
  ulonglong auStack_40 [2];
  undefined8 uStack_30;
  ulonglong auStack_28 [3];
  
  pcVar10 = FUN_1622f0ba0;
  auStack_28[1] = 0x14d97c8bd;
  FUN_1622f0ba0();
  puVar1 = (undefined8 *)((longlong)auStack_28 + unaff_RBP + 0x10);
  uVar6 = *puVar1;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x50);
  *puVar1 = pcVar10;
  uVar7 = *puVar1;
  *puVar1 = param_3;
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP + 8) = param_3;
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP) = in_stack_00000008;
  *(undefined4 *)((longlong)&uStack_30 + unaff_RBP) = 0x9eaf5df0;
  *(undefined4 *)((longlong)auStack_28 + unaff_RBP + -4) = 0xffffffff;
  lVar11 = *(longlong *)((longlong)&uStack_30 + unaff_RBP) + 0x6150a1a0;
  uVar8 = *(undefined8 *)((longlong)auStack_28 + unaff_RBP);
  *puVar1 = *(undefined8 *)(unaff_R13 + lVar11);
  uVar4 = *(undefined8 *)((longlong)auStack_28 + unaff_RBP + 8);
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP + 8) = unaff_RSI;
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP) = unaff_RSI;
  *(undefined8 *)((longlong)&uStack_30 + unaff_RBP) = 0xffffffffb0d69db6;
  if (lVar11 < 0) {
    FUN_161e1184b();
    return;
  }
  uVar9 = *(undefined8 *)((longlong)&uStack_30 + unaff_RBP);
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP + 8) = *(undefined8 *)(unaff_R13 + -8);
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP) = *(undefined8 *)(unaff_R13 + -0x98);
  uVar5 = *(ulonglong *)(unaff_R13 + -0xa0);
  *(undefined8 *)((longlong)&uStack_30 + unaff_RBP) = uVar8;
  uVar8 = *(undefined8 *)((longlong)&uStack_30 + unaff_RBP);
  *(undefined8 *)((longlong)&uStack_30 + unaff_RBP) = uVar9;
  lVar11 = *(longlong *)((longlong)auStack_28 + unaff_RBP);
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) = uVar4;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP) = uVar6;
  lVar11 = lVar11 + unaff_R15;
  uVar4 = *(undefined8 *)((longlong)auStack_40 + unaff_RBP);
  if (-1 < lVar11) {
    FUN_1610b7d08();
    return;
  }
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) =
       *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8);
  *(ulonglong *)((longlong)auStack_40 + unaff_RBP) = ~(uVar3 & unaff_R15) & (uVar3 | unaff_R15);
  *(undefined8 *)((longlong)&uStack_48 + unaff_RBP) = uVar7;
  uVar6 = *(undefined8 *)((longlong)&uStack_48 + unaff_RBP);
  *(ulonglong *)((longlong)auStack_28 + unaff_RBP) =
       (unaff_R15 - (*(ulonglong *)((longlong)auStack_28 + unaff_RBP) | unaff_R15)) +
       *(longlong *)((longlong)auStack_28 + unaff_RBP);
  puVar2 = (ulonglong *)((longlong)auStack_28 + unaff_RBP);
  *puVar2 = *puVar2 << 1 | (ulonglong)((longlong)*puVar2 < 0);
  *(ulonglong *)((longlong)auStack_28 + unaff_RBP) =
       *(ulonglong *)((longlong)auStack_28 + unaff_RBP) & 0xfffffffffffffffe;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) = param_4;
  *(ulonglong *)((longlong)auStack_40 + unaff_RBP) =
       ~((0xffffffffffffffff - unaff_R15 | uVar5) & (~uVar5 | unaff_R15));
  *(longlong *)((longlong)auStack_28 + unaff_RBP) =
       lVar11 - *(longlong *)((longlong)auStack_28 + unaff_RBP);
  *(undefined8 *)((longlong)&uStack_30 + unaff_RBP) = in_R10;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) = uVar6;
  uVar3 = *(ulonglong *)((longlong)auStack_28 + unaff_RBP + 8);
  uVar6 = *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8);
  puVar2 = (ulonglong *)((longlong)auStack_28 + unaff_RBP + 8);
  *puVar2 = *puVar2 & unaff_R15;
  puVar2 = (ulonglong *)((longlong)auStack_28 + unaff_RBP + 8);
  *puVar2 = ~*puVar2;
  puVar2 = (ulonglong *)((longlong)auStack_28 + unaff_RBP + 8);
  *puVar2 = *puVar2 & (uVar3 | unaff_R15);
  puVar2 = (ulonglong *)((longlong)auStack_28 + unaff_RBP + 0x10);
  *puVar2 = *puVar2 ^ unaff_R15;
  uVar7 = *(undefined8 *)((longlong)auStack_28 + unaff_RBP);
  *(undefined8 *)((longlong)auStack_28 + unaff_RBP) = unaff_R14;
  *(undefined8 *)((longlong)&uStack_30 + unaff_RBP) = uVar8;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) = uVar4;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP) = uVar6;
  *(undefined4 *)((longlong)&uStack_48 + unaff_RBP) = 0x19c9ebad;
  *(undefined4 *)((longlong)auStack_40 + unaff_RBP + -4) = 0;
  uVar3 = *(ulonglong *)((longlong)&uStack_48 + unaff_RBP);
  uVar4 = *(undefined8 *)((longlong)auStack_40 + unaff_RBP);
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP + 8) = uVar7;
  *(undefined8 *)((longlong)auStack_40 + unaff_RBP) = uVar7;
  *(undefined2 *)((longlong)auStack_40 + unaff_RBP) = 0x55a9;
  FUN_14dbed8d4(uVar4,(longlong)&uStack_30 + (uVar3 ^ 0x19c9ebbd) + unaff_RBP);
  return;
}



// FUNCTION 14d97c955 FUN_14d97c955 body=31 status=ok
// SIG undefined FUN_14d97c955(void)

void FUN_14d97c955(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d97c972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d97ca05 thunk_FUN_14d97ca0b body=5 status=ok
// SIG undefined thunk_FUN_14d97ca0b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab880) overlaps instruction at (ram,0x00014d7ab87f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7ab7b6) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab7bb) */
/* WARNING: Removing unreachable block (ram,0x00014d97ca90) */
/* WARNING: Removing unreachable block (ram,0x00014d97ca96) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb16) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb1b) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb21) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb26) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbae) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbb3) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbb9) */
/* WARNING: Removing unreachable block (ram,0x000156e4755c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab818) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab880) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab81c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab835) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab84b) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab84d) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab859) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab893) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab895) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab873) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab875) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab899) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8da) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8ba) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8c9) */
/* WARNING: Removing unreachable block (ram,0xb0005235) */

undefined8
thunk_FUN_14d97ca0b(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                   ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(in_R11 + 0x10) =
       (param_3 - (*(ulonglong *)(in_R11 + 0x10) | param_3)) + *(longlong *)(in_R11 + 0x10);
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x10) = unaff_retaddr;
  *(undefined8 *)(param_5 - 0x18) = unaff_retaddr;
  uVar1 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = param_2;
  *(undefined8 *)(param_5 - 0x10) = uVar1;
  uVar1 = FUN_16126079c();
  return uVar1;
}



// FUNCTION 14d97ca0b FUN_14d97ca0b body=283 status=ok
// SIG undefined FUN_14d97ca0b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7ab880) overlaps instruction at (ram,0x00014d7ab87f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d7ab7b6) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab7bb) */
/* WARNING: Removing unreachable block (ram,0x00014d97ca90) */
/* WARNING: Removing unreachable block (ram,0x00014d97ca96) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb16) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb1b) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb21) */
/* WARNING: Removing unreachable block (ram,0x00014d97cb26) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbae) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbb3) */
/* WARNING: Removing unreachable block (ram,0x00014d97cbb9) */
/* WARNING: Removing unreachable block (ram,0x000156e4755c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab818) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab880) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab81c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab835) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab84b) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab84d) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab859) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab893) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab895) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab873) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab875) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab899) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8da) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8ba) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab8c9) */
/* WARNING: Removing unreachable block (ram,0xb0005235) */

undefined8
FUN_14d97ca0b(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_retaddr;
  
  *(ulonglong *)(in_R11 + 0x10) =
       (param_3 - (*(ulonglong *)(in_R11 + 0x10) | param_3)) + *(longlong *)(in_R11 + 0x10);
  param_5 = param_5 ^ param_1;
  *(undefined8 *)(param_5 - 8) = unaff_RBP;
  *(undefined8 *)(param_5 - 0x10) = unaff_retaddr;
  *(undefined8 *)(param_5 - 0x18) = unaff_retaddr;
  uVar1 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = param_2;
  *(undefined8 *)(param_5 - 0x10) = uVar1;
  uVar1 = FUN_16126079c();
  return uVar1;
}



// FUNCTION 14d97cb26 FUN_14d97cb26 body=314 status=ok
// SIG undefined FUN_14d97cb26(void)

/* WARNING: Removing unreachable block (ram,0x00014d97cbb9) */

void FUN_14d97cb26(void)

{
  ulonglong uVar1;
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x90);
  if (uVar1 + unaff_R15 < (uVar1 & unaff_R15) * 2) {
    return;
  }
  FUN_156e4755c();
  return;
}



// FUNCTION 14d97cc68 FUN_14d97cc68 body=148 status=ok
// SIG undefined FUN_14d97cc68(void)

void FUN_14d97cc68(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_164ad1a52(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,
                *(undefined8 *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14d97ccfd FUN_14d97ccfd body=280 status=ok
// SIG undefined FUN_14d97ccfd(void)

void FUN_14d97ccfd(void)

{
  FUN_162ab00b7();
  return;
}



// FUNCTION 14d97d008 FUN_14d97d008 body=575 status=ok
// SIG undefined FUN_14d97d008(void)

/* WARNING: Removing unreachable block (ram,0x00014d97d0fe) */
/* WARNING: Removing unreachable block (ram,0x00014d97d104) */
/* WARNING: Removing unreachable block (ram,0x00014d97d10a) */
/* WARNING: Removing unreachable block (ram,0x0001573c7a9d) */

undefined8 FUN_14d97d008(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = FUN_164b9017e(param_1,unaff_SIL,
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1 ^ 0xffffffffffffffff) &
                        (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                        0xffffffffffffffff - ((~(in_RAX ^ param_1) | param_4) + param_1 + 1) &
                        param_2);
  uVar2 = FUN_166cca2a7(*(ulonglong *)(unaff_R12 + -0x58) + uVar1 +
                        ~(~*(ulonglong *)(unaff_R12 + -0x58) | ~uVar1) * -2,
                        *(undefined8 *)(unaff_R12 + -0x78),
                        *(ulonglong *)(unaff_R12 + -0x80) + uVar1 +
                        ~(~*(ulonglong *)(unaff_R12 + -0x80) | ~uVar1) * -2,
                        *(ulonglong *)(unaff_R12 + -0x30) ^ uVar1);
  return uVar2;
}



// FUNCTION 14d97d1ba FUN_14d97d1ba body=717 status=ok
// SIG undefined FUN_14d97d1ba(void)

/* WARNING: Removing unreachable block (ram,0x00014d97d244) */

void FUN_14d97d1ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar6;
  undefined8 unaff_R13;
  
  *(BADSPACEBASE **)(in_RAX + -0x10) = register0x00000020;
  *(longlong *)(in_RAX + -0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -8) = *(undefined8 *)(unaff_RSI + -0x40);
  uVar1 = *(ulonglong *)(in_RAX + -8);
  *(undefined4 *)(in_RAX + -8) = 0x877a74c9;
  *(undefined4 *)(in_RAX + -4) = 0xffffffff;
  uVar2 = *(ulonglong *)(*(longlong *)(in_RAX + -0x18) + *(longlong *)(in_RAX + -8) + 0x78858aff);
  uVar3 = *(ulonglong *)(*(longlong *)(in_RAX + -0x18) + -0x58);
  *(ulonglong *)(in_RAX + -8) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x10) = unaff_R13;
  uVar4 = *(ulonglong *)(in_RAX + -8);
  uVar6 = uVar3 | uVar4;
  *(undefined8 *)(in_RAX + -8) = param_3;
  uVar5 = *(undefined8 *)(in_RAX + -8);
  *(ulonglong *)(in_RAX + -8) = uVar1 ^ unaff_RBP;
  *(undefined4 *)(in_RAX + -8) = 0x603dc6e9;
  *(undefined4 *)(in_RAX + -4) = 0;
  *(undefined8 *)(in_RAX + -0x10) = param_4;
  *(undefined8 *)(in_RAX + -0x18) = param_4;
  *(undefined1 **)(in_RAX + -0x10) = &LAB_166979fda;
  (*(code *)0x161022f23)
            (uVar2 ^ unaff_RBP,(~uVar6 | ~(uVar3 & uVar4)) + uVar6 + 1,uVar5,
             *(undefined8 *)(in_RAX + -0x18));
  return;
}



// FUNCTION 14d97d369 FUN_14d97d369 body=164 status=ok
// SIG undefined FUN_14d97d369(void)

void FUN_14d97d369(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  plVar1 = (longlong *)(local_res20 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R12;
  thunk_FUN_166418cfb(param_1,&LAB_166418d22,param_3,param_4);
  return;
}



// FUNCTION 14d97d694 FUN_14d97d694 body=624 status=ok
// SIG undefined FUN_14d97d694(void)

/* WARNING: Removing unreachable block (ram,0x00014d97d6be) */
/* WARNING: Removing unreachable block (ram,0x00014d97d720) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d97d694(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  int in_stack_00000038;
  
  FUN_16586520e(unaff_retaddr,(ushort)*(undefined8 *)(unaff_RDI + -0x28) ^ (ushort)unaff_retaddr,
                FUN_16586520e,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & unaff_retaddr) &
                (*(ulonglong *)(unaff_RDI + -0x60) | unaff_retaddr));
  if (in_stack_00000038 < 0) {
    uVar1 = thunk_FUN_16580130c();
    return uVar1;
  }
  uVar1 = FUN_15683419c();
  return uVar1;
}



// FUNCTION 14d97d890 FUN_14d97d890 body=153 status=ok
// SIG undefined FUN_14d97d890(void)

void FUN_14d97d890(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x165be9692)(param_1,param_2);
  return;
}



// FUNCTION 14d97d9d4 FUN_14d97d9d4 body=558 status=ok
// SIG undefined FUN_14d97d9d4(void)

/* WARNING: Removing unreachable block (ram,0x00014d97da52) */

void FUN_14d97d9d4(ulonglong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000020;
  
  uVar2 = *param_2;
  *param_2 = ~*param_2;
  uVar1 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = (((param_1 - (uVar1 | param_1)) + uVar1 ^ 0xffffffffffffffff) + param_1) - *param_2;
  uVar2 = ~(~param_1 | uVar2) | ~*param_2;
  *param_2 = uVar2;
  if (-1 < (longlong)uVar2) {
    FUN_160b6dccc();
    return;
  }
  (*(code *)0x14de8046c)
            (0x14de8046c,unaff_retaddr,param_3,param_4,
             (~in_stack_00000020 + param_1) - (~in_stack_00000020 & param_1));
  return;
}



// FUNCTION 14d97ddd5 FUN_14d97ddd5 body=154 status=ok
// SIG undefined FUN_14d97ddd5(void)

void FUN_14d97ddd5(void)

{
  return;
}



// FUNCTION 14d97de70 FUN_14d97de70 body=162 status=ok
// SIG undefined FUN_14d97de70(void)

void FUN_14d97de70(void)

{
  return;
}



// FUNCTION 14d97dfd7 FUN_14d97dfd7 body=169 status=ok
// SIG undefined FUN_14d97dfd7(void)

void FUN_14d97dfd7(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(~((param_1 ^ 0x37cfdd01) & 0xffffffffbe84374e) &
           (param_1 ^ 0x37cfdd01 | 0xffffffffbe84374e)) + *(longlong *)(unaff_R13 + -0x78);
  (*(code *)0x164b59523)
            (uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,
             ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
              (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14d97e081 FUN_14d97e081 body=143 status=ok
// SIG undefined FUN_14d97e081(void)

void FUN_14d97e081(void)

{
  return;
}



// FUNCTION 14d97e1a5 FUN_14d97e1a5 body=194 status=ok
// SIG undefined FUN_14d97e1a5(void)

undefined8 FUN_14d97e1a5(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d97e2fd FUN_14d97e2fd body=134 status=ok
// SIG undefined FUN_14d97e2fd(void)

void FUN_14d97e2fd(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  ulonglong local_res18;
  
  *(undefined8 *)((local_res18 ^ param_1) - 0x10) = local_res8;
  *(undefined8 *)((local_res18 ^ param_1) - 8) = 0x753849c;
  FUN_15679e3a7(FUN_15679e3a7,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d97e4ba FUN_14d97e4ba body=145 status=ok
// SIG undefined FUN_14d97e4ba(void)

/* WARNING: Removing unreachable block (ram,0x00014d97e4f7) */

void FUN_14d97e4ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x160f89de6)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d97e5eb thunk_FUN_14d97e5f1 body=5 status=ok
// SIG undefined thunk_FUN_14d97e5f1(void)

/* WARNING: Removing unreachable block (ram,0x0001610a70f7) */
/* WARNING: Removing unreachable block (ram,0x0001610a720a) */
/* WARNING: Removing unreachable block (ram,0x0001610a720f) */
/* WARNING: Removing unreachable block (ram,0x0001610a7215) */
/* WARNING: Removing unreachable block (ram,0x0001610a721a) */
/* WARNING: Removing unreachable block (ram,0x00014df42bd0) */
/* WARNING: Removing unreachable block (ram,0x00014df42bd6) */
/* WARNING: Removing unreachable block (ram,0x00016241945a) */
/* WARNING: Removing unreachable block (ram,0x00014d97e672) */
/* WARNING: Removing unreachable block (ram,0x00014d97e678) */
/* WARNING: Removing unreachable block (ram,0x0001624193fd) */

void thunk_FUN_14d97e5f1(void)

{
  FUN_1610a70f7();
  return;
}



// FUNCTION 14d97e5f1 FUN_14d97e5f1 body=285 status=ok
// SIG undefined FUN_14d97e5f1(void)

/* WARNING: Removing unreachable block (ram,0x0001610a70f7) */
/* WARNING: Removing unreachable block (ram,0x0001610a720a) */
/* WARNING: Removing unreachable block (ram,0x0001610a720f) */
/* WARNING: Removing unreachable block (ram,0x0001610a7215) */
/* WARNING: Removing unreachable block (ram,0x0001610a721a) */
/* WARNING: Removing unreachable block (ram,0x00014df42bd0) */
/* WARNING: Removing unreachable block (ram,0x00014df42bd6) */
/* WARNING: Removing unreachable block (ram,0x00016241945a) */
/* WARNING: Removing unreachable block (ram,0x00014d97e672) */
/* WARNING: Removing unreachable block (ram,0x00014d97e678) */
/* WARNING: Removing unreachable block (ram,0x0001624193fd) */

void FUN_14d97e5f1(void)

{
  FUN_1610a70f7();
  return;
}



// FUNCTION 14d97e678 FUN_14d97e678 body=37 status=ok
// SIG undefined FUN_14d97e678(void)

void FUN_14d97e678(void)

{
  return;
}



// FUNCTION 14d97e7ab FUN_14d97e7ab body=162 status=ok
// SIG undefined FUN_14d97e7ab(void)

void FUN_14d97e7ab(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint in_stack_00000008;
  longlong in_stack_00000010;
  longlong alStackX_18 [2];
  
  *(undefined8 *)((longlong)alStackX_18 + ((ulonglong)in_stack_00000008 ^ 0x11448466)) = 0;
  alStackX_18[1] = alStackX_18[1] - in_stack_00000010;
  alStackX_18[0] = 0x14d7a6e79;
  FUN_1653318f7(param_1,FUN_1653318f7,param_3,param_4);
  return;
}



// FUNCTION 14d97e84d FUN_14d97e84d body=167 status=ok
// SIG undefined FUN_14d97e84d(void)

void FUN_14d97e84d(void)

{
  return;
}



// FUNCTION 14d97edba FUN_14d97edba body=279 status=ok
// SIG undefined FUN_14d97edba(void)

void FUN_14d97edba(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  (*(code *)0x164c468ae)(CONCAT71((int7)(-(~param_1 + 1) >> 8),0x24),param_2,param_3,local_res10);
  return;
}



// FUNCTION 14d97efe4 FUN_14d97efe4 body=145 status=ok
// SIG undefined FUN_14d97efe4(void)

void FUN_14d97efe4(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_16643868d(param_1,(~(*(ulonglong *)(unaff_RDI + -0x80) & param_1) + param_1) -
                        ~*(ulonglong *)(unaff_RDI + -0x80),
                ~-*(longlong *)(unaff_RDI + -0x70) + 1U ^ param_1,param_2);
  return;
}



// FUNCTION 14d97f077 FUN_14d97f077 body=175 status=ok
// SIG undefined FUN_14d97f077(void)

undefined8 FUN_14d97f077(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d97f126 FUN_14d97f126 body=163 status=ok
// SIG undefined FUN_14d97f126(void)

void FUN_14d97f126(void)

{
  FUN_1567c94d6();
  return;
}



// FUNCTION 14d97f1c9 FUN_14d97f1c9 body=168 status=ok
// SIG undefined FUN_14d97f1c9(void)

void FUN_14d97f1c9(void)

{
  return;
}



// FUNCTION 14d97f273 FUN_14d97f273 body=124 status=ok
// SIG undefined FUN_14d97f273(void)

void FUN_14d97f273(undefined8 param_1,longlong param_2)

{
  char unaff_SIL;
  undefined1 uStack0000000000000122;
  
  (&stack0x00000008)[param_2] = 0;
  (&stack0x00000008)[param_2] = (&stack0x00000008)[param_2] - unaff_SIL;
  (&stack0x00000008)[param_2] = -(&stack0x00000008)[param_2];
  uStack0000000000000122 = 0;
  FUN_1647afac3(0xdc);
  return;
}



// FUNCTION 14d97f59f FUN_14d97f59f body=138 status=ok
// SIG undefined FUN_14d97f59f(void)

void FUN_14d97f59f(void)

{
  FUN_1578122a8();
  return;
}



// FUNCTION 14d97f73c FUN_14d97f73c body=174 status=ok
// SIG undefined FUN_14d97f73c(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb29e1) */
/* WARNING: Removing unreachable block (ram,0x00014ddb29e7) */
/* WARNING: Removing unreachable block (ram,0x00014d97f7eb) */

void FUN_14d97f73c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 in_RAX;
  ulonglong uVar17;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  uint uVar18;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  uint uVar19;
  ulonglong uVar21;
  ulonglong uVar22;
  uint unaff_retaddr;
  ulonglong local_res8;
  ulonglong local_res10 [3];
  uint uVar20;
  
  *(undefined4 *)((longlong)local_res10 + ((ulonglong)unaff_retaddr ^ 0x5f84f106)) = 0;
  uVar16 = local_res10[0];
  uVar22 = (ulonglong)((local_res8 & 0x4000) != 0);
  uVar17 = (ulonglong)((local_res8 & 0x800) != 0);
  uVar21 = (ulonglong)((local_res8 & 0x400) != 0);
  uVar4 = (ulonglong)((local_res8 & 0x200) != 0);
  uVar5 = (ulonglong)((local_res8 & 0x100) != 0);
  uVar6 = (ulonglong)((local_res8 & 0x80) != 0);
  uVar7 = (ulonglong)((local_res8 & 0x40) != 0);
  uVar8 = (ulonglong)((local_res8 & 0x10) != 0);
  uVar9 = (ulonglong)((local_res8 & 4) != 0);
  uVar10 = (ulonglong)((local_res8 & 1) != 0);
  uVar11 = (ulonglong)((local_res8 & 0x200000) != 0);
  uVar12 = (ulonglong)((local_res8 & 0x40000) != 0);
  local_res10[0] =
       uVar22 * 0x4000 | uVar17 * 0x800 | uVar21 * 0x400 | uVar4 * 0x200 | uVar5 * 0x100 |
       uVar6 * 0x80 | uVar7 * 0x40 | uVar8 * 0x10 | uVar9 * 4 | uVar10 | uVar11 * 0x200000 |
       uVar12 * 0x40000;
  lVar2 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  *(undefined8 *)(&stack0xfffffffff26e50bd + uVar16) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff26e50b5 + uVar16) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(&stack0xfffffffff26e50bd + uVar16) = unaff_R13;
  *(ulonglong *)(&stack0xfffffffff26e50b5 + uVar16) =
       (ulonglong)(uVar22 != 0) * 0x4000 | (ulonglong)(uVar17 != 0) * 0x800 |
       (ulonglong)(uVar21 != 0) * 0x400 | (ulonglong)(uVar4 != 0) * 0x200 |
       (ulonglong)(uVar5 != 0) * 0x100 | (ulonglong)(uVar6 != 0) * 0x80 |
       (ulonglong)(uVar7 != 0) * 0x40 | (ulonglong)(uVar8 != 0) * 0x10 | (ulonglong)(uVar9 != 0) * 4
       | (ulonglong)(uVar10 != 0) | (ulonglong)(uVar11 != 0) * 0x200000 |
       (ulonglong)(uVar12 != 0) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff26e50ad + uVar16) = in_RAX;
  *(undefined8 *)(&stack0xfffffffff26e50a5 + uVar16) = unaff_RSI;
  uVar22 = *(ulonglong *)(&stack0xfffffffff26e50a5 + uVar16);
  uVar17 = *(ulonglong *)(&stack0xfffffffff26e50ad + uVar16);
  uVar21 = *(ulonglong *)(&stack0xfffffffff26e50b5 + uVar16);
  if ((uVar21 & 1) != 0) {
    FUN_14ddb294f();
    return;
  }
  *(undefined4 *)(&stack0xfffffffff26e50c5 + uVar16) = 0;
  *(undefined4 *)(&stack0xfffffffff26e50cd + in_R11 + (uVar16 - 0xd91af53) + 0xd91af53) =
       *(undefined4 *)(&stack0xfffffffff26e50c5 + uVar16);
  uVar3 = *(undefined8 *)(&stack0xfffffffff26e50cd + uVar16);
  *(undefined4 *)(&stack0xfffffffff26e50c5 + uVar16) = 0xcc0406b;
  *(undefined4 *)(&stack0xfffffffff26e50c9 + uVar16) = 0;
  lVar2 = *(longlong *)(&stack0xfffffffff26e50c5 + uVar16);
  *(ulonglong *)(&stack0xfffffffff26e50c5 + uVar16) =
       (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar21 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar21 & 0x400) != 0) * 0x400 | (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)((uVar21 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar21 & 0x40) != 0) * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar21 & 4) != 0) * 4 | (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  uVar21 = *(ulonglong *)(&stack0xfffffffff26e50c5 + uVar16);
  puVar1 = (ulonglong *)(&stack0xffffffffe5ae106a + lVar2 + (uVar16 - 0xd91af53) + 0xd91af53);
  puVar1[-1] = (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar21 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar21 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)((uVar21 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar21 & 0x40) != 0) * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar21 & 4) != 0) * 4 |
               (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  uVar21 = puVar1[-1];
  puVar1[-2] = 0;
  puVar1[-1] = puVar1[-2];
  *(undefined4 *)(puVar1 + -1) = 0x223f6f1f;
  uVar15 = puVar1[-1];
  puVar1[-1] = (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar21 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar21 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)((uVar21 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar21 & 0x40) != 0) * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar21 & 4) != 0) * 4 | (ulonglong)((uVar21 & 1) != 0) |
               (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  puVar1[-2] = in_R11;
  uVar18 = (uint)uVar15 ^ 0x6bc06a83;
  uVar21 = puVar1[-1];
  uVar13 = (uint)((uVar21 & 1) != 0);
  uVar20 = (uint)uVar3;
  uVar14 = uVar20 - uVar18;
  uVar19 = uVar14 - uVar13;
  if ((int)uVar19 < 0) {
    uVar17 = uVar22;
  }
  puVar1[-1] = (ulonglong)((uVar21 & 0x4000) != 0) * 0x4000 |
               (ulonglong)(SBORROW4(uVar20,uVar18) != SBORROW4(uVar14,uVar13)) * 0x800 |
               (ulonglong)((uVar21 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar21 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar21 & 0x100) != 0) * 0x100 | (ulonglong)((int)uVar19 < 0) * 0x80 |
               (ulonglong)(uVar19 == 0) * 0x40 | (ulonglong)((uVar21 & 0x10) != 0) * 0x10 |
               (ulonglong)((POPCOUNT(uVar19 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(uVar20 < uVar18 || uVar14 < uVar13) |
               (ulonglong)((uVar21 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar21 & 0x40000) != 0) * 0x40000;
  puVar1[-1] = puVar1[-1] ^ 1;
  uVar22 = *puVar1;
  *puVar1 = unaff_RBX;
  *puVar1 = uVar17;
  *puVar1 = param_1;
  puVar1[-1] = param_3;
  puVar1[-2] = unaff_RBP;
  puVar1[-2] = (ulonglong)((uVar22 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar22 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar22 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar22 & 0x100) != 0) * 0x100 | (ulonglong)((uVar22 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar22 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar22 & 0x40000) != 0) * 0x40000;
  puVar1[-2] = (ulonglong)uVar19;
  puVar1[-3] = (ulonglong)uVar19;
  puVar1[-2] = (ulonglong)&LAB_16495e129;
  FUN_14db1d147(1,param_2,FUN_14db1d147,param_4);
  return;
}



// FUNCTION 14d97f7eb FUN_14d97f7eb body=216 status=ok
// SIG undefined FUN_14d97f7eb(void)

void FUN_14d97f7eb(void)

{
  return;
}



// FUNCTION 14d97f96d FUN_14d97f96d body=157 status=ok
// SIG undefined FUN_14d97f96d(void)

/* WARNING: Removing unreachable block (ram,0x00014d97f9ae) */

void FUN_14d97f96d(void)

{
  return;
}



// FUNCTION 14d97fa0c FUN_14d97fa0c body=171 status=ok
// SIG undefined FUN_14d97fa0c(void)

/* WARNING: Removing unreachable block (ram,0x00014d97fb46) */
/* WARNING: Removing unreachable block (ram,0x00014d97fb4c) */
/* WARNING: Removing unreachable block (ram,0x00014d97fb51) */
/* WARNING: Removing unreachable block (ram,0x00014d97faae) */
/* WARNING: Removing unreachable block (ram,0x00014d97fab9) */
/* WARNING: Removing unreachable block (ram,0x000162480d5f) */
/* WARNING: Removing unreachable block (ram,0x00014d97fab4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d97fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  ulonglong local_res8;
  ulonglong uStackX_18;
  
  uVar1 = uStackX_18 ^ in_RAX;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 8) = param_3;
  uVar2 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar2;
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  *(undefined8 *)(uVar1 - 8) = 0x161d5eb39;
  *(undefined **)(uVar1 - 0x18) = &DAT_161d5eb0e;
  return local_res8 ^ in_RAX;
}



// FUNCTION 14d97fab9 FUN_14d97fab9 body=423 status=ok
// SIG undefined FUN_14d97fab9(void)

/* WARNING: Removing unreachable block (ram,0x00014d97fb46) */
/* WARNING: Removing unreachable block (ram,0x00014d97fb51) */
/* WARNING: Removing unreachable block (ram,0x00014d97fb4c) */

ulonglong FUN_14d97fab9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14d97fd8d FUN_14d97fd8d body=145 status=ok
// SIG undefined FUN_14d97fd8d(void)

void FUN_14d97fd8d(undefined8 param_1)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  
  (*(code *)&LAB_164a48c58)(param_1,unaff_RDI - ~(~unaff_RDI | ~unaff_RBP));
  return;
}



// FUNCTION 14d97fe26 FUN_14d97fe26 body=49 status=ok
// SIG undefined FUN_14d97fe26(void)

void FUN_14d97fe26(void)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  undefined8 local_res8;
  undefined8 *local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res18 = local_res8;
  local_res18[-1] = local_res8;
  local_res18[-2] = unaff_RSI;
  local_res18[-3] = unaff_RSI;
  local_res18[-2] = &LAB_14d97fe59;
  return;
}



// FUNCTION 14d980081 FUN_14d980081 body=439 status=ok
// SIG undefined FUN_14d980081(void)

void FUN_14d980081(void)

{
  FUN_16697b9c5();
  return;
}



// FUNCTION 14d980425 FUN_14d980425 body=165 status=ok
// SIG undefined FUN_14d980425(void)

/* WARNING: Removing unreachable block (ram,0x00014d9804c1) */
/* WARNING: Removing unreachable block (ram,0x00014d9804cc) */
/* WARNING: Removing unreachable block (ram,0x00014d9804c7) */

void FUN_14d980425(ulonglong param_1)

{
  byte bVar1;
  uint unaff_EBP;
  longlong lVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x50) & param_1) &
          (*(ulonglong *)(unaff_RDI + -0x50) | param_1);
  bVar1 = (byte)param_1 & 0x1f;
  lVar2 = (~uVar3 | (ulonglong)(unaff_EBP << bVar1 | unaff_EBP >> 0x20 - bVar1)) + uVar3 + 1;
  FUN_161050871();
  FUN_1564fd395(param_1,lVar2,FUN_1564fd395);
  return;
}



// FUNCTION 14d9804cc FUN_14d9804cc body=155 status=ok
// SIG undefined FUN_14d9804cc(void)

void FUN_14d9804cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1625a7ce1(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d980600 FUN_14d980600 body=184 status=ok
// SIG undefined FUN_14d980600(void)

void FUN_14d980600(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = local_res18 ^ in_RAX;
  local_res20 = local_res20 ^ in_RAX;
  FUN_165f92b9b(&local_res18,param_2,FUN_165f92b9b,unaff_retaddr);
  return;
}



// FUNCTION 14d980cca FUN_14d980cca body=63 status=ok
// SIG undefined FUN_14d980cca(void)

void FUN_14d980cca(void)

{
  undefined8 in_R11;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x7c977866 + unaff_retaddr) = in_R11;
  return;
}



// FUNCTION 14d980de8 FUN_14d980de8 body=424 status=ok
// SIG undefined FUN_14d980de8(void)

/* WARNING: Removing unreachable block (ram,0x00014d980e77) */
/* WARNING: Removing unreachable block (ram,0x00014d980e7d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d980de8(void)

{
  ulonglong uVar1;
  ulonglong in_R9;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  uVar1 = ~((unaff_retaddr ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x58)) &
           (~*(ulonglong *)(unaff_R12 + -0x58) | unaff_retaddr));
  FUN_16654de0d(uVar1,FUN_16654de0d,
                *(ulonglong *)(unaff_R12 + -0x80) + unaff_retaddr +
                (*(ulonglong *)(unaff_R12 + -0x80) & unaff_retaddr) * -2,
                ~(in_R9 & unaff_retaddr) & (in_R9 | unaff_retaddr));
  (*(code *)0x1616d207a)(uVar1);
  return;
}



// FUNCTION 14d980e83 FUN_14d980e83 body=155 status=ok
// SIG undefined FUN_14d980e83(void)

void FUN_14d980e83(void)

{
  FUN_16125abc1();
  return;
}



// FUNCTION 14d980f20 FUN_14d980f20 body=114 status=ok
// SIG undefined FUN_14d980f20(void)

void FUN_14d980f20(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ushort *in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  *in_R11 = (-0x101 - ((*in_R11 - 0x101) - (*in_R11 & 0xfeff))) + *in_R11;
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7bd486);
  UNLOCK();
  DAT_14d7bd486 = (char)in_RAX;
  *(undefined8 *)(uStackX_20 + -8) = local_res8;
  *(undefined8 *)(uStackX_20 + -0x10) = local_res8;
  *(undefined8 *)(uStackX_20 + -0x18) = uVar2;
  *(undefined4 *)(uStackX_20 + -0x18) = 0x3159c99;
  *(undefined4 *)(uStackX_20 + -0x14) = 0;
  lVar1 = *(longlong *)(uStackX_20 + -0x18);
  *(ulonglong *)(uStackX_20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_18 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_18 & 0x80) != 0) * 0x80
       | (ulonglong)((uStackX_18 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10
       | (ulonglong)((uStackX_18 & 4) != 0) * 4 | (ulonglong)((uStackX_18 & 1) != 0) |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uStackX_20 + -0x18) = uVar2;
  *(longlong *)(uStackX_20 + -8) = lVar1 + -0x29700a7;
  *(undefined8 *)(uStackX_20 + -0x18) = 0x15785f4b5;
  FUN_15b713faa(local_res10,unaff_retaddr);
  FUN_15785f4bb();
  return;
}



// FUNCTION 14d980fa5 FUN_14d980fa5 body=135 status=ok
// SIG undefined FUN_14d980fa5(void)

void FUN_14d980fa5(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_15738684f(param_1,param_2,FUN_15738684f,
                *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14d98102d FUN_14d98102d body=138 status=ok
// SIG undefined FUN_14d98102d(void)

longlong FUN_14d98102d(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  return (~param_2 | in_RAX) + param_2 + 1;
}



// FUNCTION 14d9810b7 FUN_14d9810b7 body=137 status=ok
// SIG undefined FUN_14d9810b7(void)

void FUN_14d9810b7(undefined8 param_1,longlong param_2)

{
  FUN_162daf29c(param_1,-param_2,-param_2,0x691e5a8f);
  return;
}



// FUNCTION 14d981141 FUN_14d981141 body=128 status=ok
// SIG undefined FUN_14d981141(void)

void FUN_14d981141(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x14df9c266)(param_1,0x10d0 - (~(param_1 - 0x10d0U) + 2),param_3,param_1);
  return;
}



// FUNCTION 14d9811c9 thunk_FUN_14d9811cf body=5 status=ok
// SIG undefined thunk_FUN_14d9811cf(void)

undefined8 thunk_FUN_14d9811cf(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9811cf FUN_14d9811cf body=14 status=ok
// SIG undefined FUN_14d9811cf(void)

undefined8 FUN_14d9811cf(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d9811dd FUN_14d9811dd body=234 status=ok
// SIG undefined FUN_14d9811dd(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9811dd(void)

{
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_14e07d7fe();
  FUN_1654d8971(FUN_1654d8971);
  return;
}



// FUNCTION 14d9812cb FUN_14d9812cb body=136 status=ok
// SIG undefined FUN_14d9812cb(void)

void FUN_14d9812cb(void)

{
  return;
}



// FUNCTION 14d981356 FUN_14d981356 body=145 status=ok
// SIG undefined FUN_14d981356(void)

/* WARNING: Removing unreachable block (ram,0x00014d98139a) */

undefined8 FUN_14d981356(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14d98149a FUN_14d98149a body=161 status=ok
// SIG undefined FUN_14d98149a(void)

void FUN_14d98149a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R12;
  
  thunk_FUN_1611a29b3(0xffffffffffffffa0,param_2,~*(ulonglong *)(unaff_R12 + -0x38),
                      thunk_FUN_1611a29b3);
  return;
}



// FUNCTION 14d9815ca FUN_14d9815ca body=123 status=ok
// SIG undefined FUN_14d9815ca(void)

void FUN_14d9815ca(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_14db90963)
            (~unaff_R15,&LAB_14db90963,
             ~((~unaff_RBP | param_3) &
              (~((param_3 ^ 0xffffffffffffffff) & unaff_R15) + unaff_R15) -
              ~(param_3 ^ 0xffffffffffffffff)));
  return;
}



// FUNCTION 14d9816e8 FUN_14d9816e8 body=140 status=ok
// SIG undefined FUN_14d9816e8(void)

void FUN_14d9816e8(void)

{
  return;
}



// FUNCTION 14d981775 FUN_14d981775 body=12 status=ok
// SIG undefined FUN_14d981775(void)

void FUN_14d981775(void)

{
  return;
}



// FUNCTION 14d98192e FUN_14d98192e body=142 status=ok
// SIG undefined FUN_14d98192e(void)

void FUN_14d98192e(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R10;
  
  FUN_15742a9f7(~((in_R10 - unaff_RDI) + unaff_RBP + 1) & param_2,
                *(ulonglong *)(unaff_RSI + -0x58) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) * -2);
  return;
}



// FUNCTION 14d981a84 FUN_14d981a84 body=182 status=ok
// SIG undefined FUN_14d981a84(void)

void FUN_14d981a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_161982a03(unaff_retaddr,param_2,FUN_161982a03);
  return;
}



// FUNCTION 14d981b3c FUN_14d981b3c body=335 status=ok
// SIG undefined FUN_14d981b3c(void)

/* WARNING: Removing unreachable block (ram,0x00014d981beb) */
/* WARNING: Removing unreachable block (ram,0x00014d981be0) */

void FUN_14d981b3c(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x14da248bf)
            (~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
              (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
             ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),
             *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,0x14da248bf);
  return;
}



// FUNCTION 14d981c8e FUN_14d981c8e body=595 status=ok
// SIG undefined FUN_14d981c8e(void)

/* WARNING: Removing unreachable block (ram,0x00014d981ed7) */
/* WARNING: Removing unreachable block (ram,0x00014d981edd) */
/* WARNING: Removing unreachable block (ram,0x00014d981ee2) */
/* WARNING: Removing unreachable block (ram,0x00014d981f6f) */
/* WARNING: Removing unreachable block (ram,0x00014d981f75) */
/* WARNING: Removing unreachable block (ram,0x00014d981f80) */
/* WARNING: Removing unreachable block (ram,0x00014d981fb9) */
/* WARNING: Removing unreachable block (ram,0x00014d981fbc) */
/* WARNING: Removing unreachable block (ram,0x00014d981d8d) */
/* WARNING: Removing unreachable block (ram,0x00014d981f6a) */
/* WARNING: Removing unreachable block (ram,0x0001666fc759) */
/* WARNING: Removing unreachable block (ram,0x00014d981dbb) */
/* WARNING: Removing unreachable block (ram,0x00014d981dff) */
/* WARNING: Removing unreachable block (ram,0x00014d981e0c) */

undefined8 FUN_14d981c8e(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1653b8ccc();
  if (-1 < (longlong)(unaff_R15 - 1)) {
    uVar1 = FUN_164899beb();
    return uVar1;
  }
  FUN_156421973(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x38)) +
                (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  uVar1 = FUN_1629e3f4d();
  return uVar1;
}



// FUNCTION 14d981ee2 FUN_14d981ee2 body=151 status=ok
// SIG undefined FUN_14d981ee2(void)

/* WARNING: Removing unreachable block (ram,0x00014d981fb9) */
/* WARNING: Removing unreachable block (ram,0x00014d981f80) */
/* WARNING: Removing unreachable block (ram,0x00014d981fbc) */
/* WARNING: Removing unreachable block (ram,0x00014d981f6a) */

void FUN_14d981ee2(void)

{
  FUN_156c5ab12();
  return;
}



// FUNCTION 14d981f80 FUN_14d981f80 body=131 status=ok
// SIG undefined FUN_14d981f80(void)

/* WARNING: Removing unreachable block (ram,0x00014d981fb9) */

void FUN_14d981f80(ulonglong param_1)

{
  longlong *plVar1;
  longlong unaff_RSI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  param_1 = local_res18 & param_1;
  plVar1 = (longlong *)(param_1 - 8);
  *plVar1 = unaff_RSI;
  *(undefined8 *)(param_1 - 0x10) = in_R10;
  *(longlong *)(param_1 - 0x10) = *plVar1;
  *(undefined8 *)(param_1 - 0x18) = in_R11;
  *(undefined8 *)(param_1 - 8) = 0;
  *plVar1 = *plVar1 + -0x14d982013;
  *plVar1 = -*plVar1;
  thunk_FUN_15b642ca5(unaff_retaddr);
  return;
}



// FUNCTION 14d982034 FUN_14d982034 body=134 status=ok
// SIG undefined FUN_14d982034(void)

/* WARNING: Removing unreachable block (ram,0x00014d9820a7) */

ulonglong FUN_14d982034(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~(~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x38)) &
          (0xffffffffffffffff - *(ulonglong *)(unaff_R13 + -0x38) | unaff_R15));
}



// FUNCTION 14d9820bd FUN_14d9820bd body=270 status=ok
// SIG undefined FUN_14d9820bd(void)

/* WARNING: Removing unreachable block (ram,0x00014d982148) */
/* WARNING: Removing unreachable block (ram,0x00014d982153) */
/* WARNING: Removing unreachable block (ram,0x00014d98214e) */

undefined8 FUN_14d9820bd(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9821d2 FUN_14d9821d2 body=310 status=ok
// SIG undefined FUN_14d9821d2(void)

/* WARNING: Removing unreachable block (ram,0x00014d982262) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14d9821d2(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = FUN_1649c634b(param_1,unaff_retaddr,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d98230e FUN_14d98230e body=343 status=ok
// SIG undefined FUN_14d98230e(void)

/* WARNING: Removing unreachable block (ram,0x00014d982469) */
/* WARNING: Removing unreachable block (ram,0x000166779493) */
/* WARNING: Removing unreachable block (ram,0x00016677957e) */
/* WARNING: Removing unreachable block (ram,0x00014d982598) */
/* WARNING: Removing unreachable block (ram,0x00014d9825a4) */
/* WARNING: Removing unreachable block (ram,0x00014d9825a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_14d98230e(void)

{
  undefined1 *puVar1;
  
  FUN_165e91833();
  if (-1 < (longlong)(&DAT_ac91427a73ca2b2b + _DAT_037c71e7)) {
    return &DAT_ac91427a73ca2b2b + _DAT_037c71e7 + (_DAT_037c71e7 & 0xac91427a73ca2b2b) * -2;
  }
  puVar1 = (undefined1 *)FUN_160da57f7();
  return puVar1;
}



// FUNCTION 14d982469 FUN_14d982469 body=318 status=ok
// SIG undefined FUN_14d982469(void)

/* WARNING: Removing unreachable block (ram,0x00014d9825a9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d982469(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R12;
  
  uVar1 = FUN_1564188a7();
  if ((longlong)(~uVar1 | *(ulonglong *)(unaff_R12 + -0xa0)) < 0) {
    FUN_14dc2a399(param_1,in_RAX,param_3);
    uVar2 = (*(code *)0x1565d069e)(param_1);
    return uVar2;
  }
  uVar2 = FUN_166779493();
  return uVar2;
}



// FUNCTION 14d9825a9 FUN_14d9825a9 body=148 status=ok
// SIG undefined FUN_14d9825a9(void)

undefined8 FUN_14d9825a9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d9828f0 FUN_14d9828f0 body=328 status=ok
// SIG undefined FUN_14d9828f0(void)

/* WARNING: Removing unreachable block (ram,0x000164ffcf2c) */
/* WARNING: Removing unreachable block (ram,0x000164ffcf32) */
/* WARNING: Removing unreachable block (ram,0x00014d982a73) */
/* WARNING: Removing unreachable block (ram,0x000166099731) */
/* WARNING: Removing unreachable block (ram,0x00014d982a3a) */
/* WARNING: Removing unreachable block (ram,0x00014d98298a) */
/* WARNING: Removing unreachable block (ram,0x00014d982a34) */
/* WARNING: Removing unreachable block (ram,0x00014d982a2f) */

undefined8 FUN_14d9828f0(ushort *param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  *param_1 = 0xff01 - (~(*param_1 | 0x100) + 2);
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R14;
  uVar2 = *(undefined8 *)(in_stack_00000028 + -0x20);
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R10;
  uVar1 = *(undefined8 *)(in_stack_00000028 + -0x20);
  *(undefined8 *)(in_stack_00000028 + -0x20) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 + -0x28) = unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uVar1;
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(undefined8 *)(in_stack_00000028 + -0x20) = *(undefined8 *)(in_stack_00000028 + -0x28);
  *(undefined8 *)(in_stack_00000028 + -0x28) = uVar2;
  uVar2 = FUN_166099731();
  return uVar2;
}



// FUNCTION 14d982a3a FUN_14d982a3a body=150 status=ok
// SIG undefined FUN_14d982a3a(void)

/* WARNING: Removing unreachable block (ram,0x00014d982a73) */

void FUN_14d982a3a(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong in_R9;
  longlong unaff_R12;
  
  uVar1 = ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
           (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX));
  FUN_157181343(uVar1,uVar1,
                ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x80)) &
                 (~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX)),~(unaff_RBP & (in_R9 | in_RAX)));
  return;
}



// FUNCTION 14d982ad1 FUN_14d982ad1 body=412 status=ok
// SIG undefined FUN_14d982ad1(void)

/* WARNING: Removing unreachable block (ram,0x0001572d0b39) */
/* WARNING: Removing unreachable block (ram,0x0001572d0b3f) */
/* WARNING: Removing unreachable block (ram,0x000156eed865) */
/* WARNING: Removing unreachable block (ram,0x0001572d0bbc) */
/* WARNING: Removing unreachable block (ram,0x0001572d0bc2) */
/* WARNING: Removing unreachable block (ram,0x0001572d0bc7) */
/* WARNING: Removing unreachable block (ram,0x0001568af4f0) */
/* WARNING: Removing unreachable block (ram,0x0001568af51c) */
/* WARNING: Removing unreachable block (ram,0x00014d982b61) */
/* WARNING: Removing unreachable block (ram,0x00014d982be6) */

void FUN_14d982ad1(void)

{
  FUN_1568af4f0();
  return;
}



// FUNCTION 14d982c74 FUN_14d982c74 body=62 status=ok
// SIG undefined FUN_14d982c74(void)

void FUN_14d982c74(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong unaff_R12;
  longlong local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + ~unaff_R12) = 0;
  puVar1 = (undefined8 *)((longlong)local_res10 + ~unaff_R12);
  *puVar1 = *puVar1;
  local_res10[1] = -(local_res10[1] - param_1);
                    /* WARNING: Could not recover jumptable at 0x00014d982cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res10[0],param_2);
  return;
}



// FUNCTION 14d982daf FUN_14d982daf body=214 status=ok
// SIG undefined FUN_14d982daf(void)

/* WARNING: Removing unreachable block (ram,0x0001620f9ebc) */

void FUN_14d982daf(void)

{
  FUN_1571ea64b(0x2ed08c8f0,FUN_1571ea64b);
  return;
}



// FUNCTION 14d982e4f FUN_14d982e4f body=247 status=ok
// SIG undefined FUN_14d982e4f(void)

/* WARNING: Removing unreachable block (ram,0x00014d982ed7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d982e4f(ulonglong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_res20;
  
  if ((longlong)(local_res20 & param_1) < 0) {
    uVar1 = FUN_15756a992(param_1);
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14d983008 FUN_14d983008 body=158 status=ok
// SIG undefined FUN_14d983008(void)

/* WARNING: Removing unreachable block (ram,0x00016530266f) */
/* WARNING: Removing unreachable block (ram,0x00014d9830a6) */

void FUN_14d983008(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  if (!CARRY8(unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x38) | unaff_R15),
              *(ulonglong *)(unaff_R13 + -0x38))) {
    FUN_161cd7576(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                  (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                  *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                  *(ulonglong *)
                   (unaff_R13 +
                   (unaff_retaddr & 0xffffffffd0bceb5b | ~(unaff_retaddr | 0xffffffffd0bceb5b))) ^
                  unaff_R15);
    return;
  }
  FUN_1653025d3();
  return;
}



// FUNCTION 14d9830a6 FUN_14d9830a6 body=153 status=ok
// SIG undefined FUN_14d9830a6(void)

void FUN_14d9830a6(void)

{
  return;
}



// FUNCTION 14d98330f FUN_14d98330f body=173 status=ok
// SIG undefined FUN_14d98330f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d98330f(void)

{
  FUN_1616906c5();
  return;
}



// FUNCTION 14d9835d4 FUN_14d9835d4 body=125 status=ok
// SIG undefined FUN_14d9835d4(void)

void FUN_14d9835d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d8edfa8(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4);
  return;
}



// FUNCTION 14d98379f FUN_14d98379f body=79 status=ok
// SIG undefined FUN_14d98379f(void)

/* WARNING: Removing unreachable block (ram,0x00014d983829) */
/* WARNING: Removing unreachable block (ram,0x00014d98382f) */
/* WARNING: Removing unreachable block (ram,0x00014d9838c8) */
/* WARNING: Removing unreachable block (ram,0x00014d9838ce) */
/* WARNING: Removing unreachable block (ram,0x00014d9838d3) */
/* WARNING: Removing unreachable block (ram,0x00015b43cae2) */
/* WARNING: Removing unreachable block (ram,0x00015b43cc10) */
/* WARNING: Removing unreachable block (ram,0x00015b43cc16) */
/* WARNING: Removing unreachable block (ram,0x0001615ea190) */

undefined8 FUN_14d98379f(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  byte in_CF;
  
  lVar5 = (param_1 + -0x5a24181) - (ulonglong)((in_CF & 1) != 0);
  *(undefined8 *)(&stack0xfffffffffa5dbe97 + lVar5 + 0x5a24181) = 0;
  *(ulonglong *)(&stack0xfffffffffa5dbe97 + lVar5 + 0x5a24181) =
       *(ulonglong *)(&stack0xfffffffffa5dbe97 + lVar5 + 0x5a24181) ^ unaff_RSI;
  plVar1 = (longlong *)(&stack0xfffffffffa5dbe8f + lVar5 + 0x5a24181);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - unaff_RDI;
  plVar1 = (longlong *)(&stack0xfffffffffa5dbe87 + lVar5 + 0x5a24181);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  puVar2 = (undefined8 *)(&stack0xfffffffffa5dbe7f + lVar5 + 0x5a24181);
  *puVar2 = in_R11;
  *(undefined8 *)(&stack0xfffffffffa5dbe7f + lVar5 + 0x5a24181) = *puVar2;
  uVar4 = *(undefined8 *)(&stack0xfffffffffa5dbe7f + lVar5 + 0x5a24181);
  *(undefined8 *)(&stack0xfffffffffa5dbe7f + lVar5 + 0x5a24181) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffffa5dbe77 + lVar5 + 0x5a24181) = uVar4;
  lVar3 = puVar2[2];
  *(undefined8 *)(&stack0xfffffffffa5dbe6f + lVar5 + 0x5a24181) = in_R10;
  lVar3 = -lVar3;
  *(longlong *)(&stack0xfffffffffa5dbe77 + lVar5 + 0x5a24181) = lVar3;
  *(longlong *)(&stack0xfffffffffa5dbe6f + lVar5 + 0x5a24181) = lVar3;
  *(longlong *)(&stack0xfffffffffa5dbe67 + lVar5 + 0x5a24181) = lVar3;
  *(undefined **)(&stack0xfffffffffa5dbe77 + lVar5 + 0x5a24181) = &DAT_15b3dc701;
  *(undefined1 **)(&stack0xfffffffffa5dbe6f + lVar5 + 0x5a24181) = &LAB_15b78a846;
  return in_RAX;
}



// FUNCTION 14d9838d3 thunk_FUN_14d9838d9 body=5 status=ok
// SIG undefined thunk_FUN_14d9838d9(void)

void thunk_FUN_14d9838d9(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                        longlong param_5)

{
  short sVar1;
  undefined8 uVar2;
  ushort unaff_BX;
  ushort unaff_R13W;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  
  sVar1 = *param_3;
  *param_3 = 0;
  *param_3 = *param_3 + (-0x101 - (unaff_BX | unaff_R13W)) + sVar1;
  *(undefined8 *)(param_5 + -8) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x10) = uStackX_10;
  uVar2 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = uStackX_8;
  *(undefined8 *)(param_5 + -0x18) = uStackX_8;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  FUN_162d24d15(param_1,param_2,uVar2,FUN_162d24d15);
  return;
}



// FUNCTION 14d9838d9 FUN_14d9838d9 body=158 status=ok
// SIG undefined FUN_14d9838d9(void)

void FUN_14d9838d9(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5)

{
  short sVar1;
  undefined8 uVar2;
  ushort unaff_BX;
  ushort unaff_R13W;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  
  sVar1 = *param_3;
  *param_3 = 0;
  *param_3 = *param_3 + (-0x101 - (unaff_BX | unaff_R13W)) + sVar1;
  *(undefined8 *)(param_5 + -8) = unaff_retaddr;
  *(undefined8 *)(param_5 + -0x10) = uStackX_10;
  uVar2 = *(undefined8 *)(param_5 + -0x10);
  *(undefined8 *)(param_5 + -0x10) = uStackX_8;
  *(undefined8 *)(param_5 + -0x18) = uStackX_8;
  *(undefined8 *)(param_5 + -0x20) = param_4;
  FUN_162d24d15(param_1,param_2,uVar2,FUN_162d24d15);
  return;
}



// FUNCTION 14d983978 FUN_14d983978 body=80 status=ok
// SIG undefined FUN_14d983978(void)

void FUN_14d983978(void)

{
  undefined8 uStackX_8;
  
  FUN_165c7153c(uStackX_8);
  return;
}



// FUNCTION 14d9839f5 FUN_14d9839f5 body=738 status=ok
// SIG undefined FUN_14d9839f5(void)

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
/* WARNING: Removing unreachable block (ram,0x00014d983a31) */
/* WARNING: Removing unreachable block (ram,0x00015706b0a5) */
/* WARNING: Removing unreachable block (ram,0x00015706b1c0) */
/* WARNING: Removing unreachable block (ram,0x00015706b1c5) */
/* WARNING: Removing unreachable block (ram,0x00015b4e2dce) */
/* WARNING: Removing unreachable block (ram,0x00015706b281) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9839f5(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_retaddr;
  
  *(int *)(unaff_RBP + 0x13c) = *(int *)(unaff_RBP + 0x13c) - unaff_retaddr;
  lVar1 = FUN_162080a16();
  uVar2 = (int)lVar1 + 0xb;
  *(byte *)(param_3 + -9) = *(byte *)(param_3 + -9) | (byte)uVar2;
  *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | (byte)uVar2;
  *(byte *)(param_4 + 0x51) = *(byte *)(param_4 + 0x51) | (byte)lVar1;
  *(ulonglong *)(unaff_RBX + 8) =
       ~((*(longlong *)(unaff_RBX + 8) - ((ulonglong)uVar2 | *(ulonglong *)(unaff_RBX + 8))) +
        (ulonglong)uVar2);
  FUN_1666addf5();
  return;
}



// FUNCTION 14d983ce0 FUN_14d983ce0 body=80 status=ok
// SIG undefined FUN_14d983ce0(void)

void FUN_14d983ce0(void)

{
  return;
}



// FUNCTION 14d983d46 FUN_14d983d46 body=59 status=ok
// SIG undefined FUN_14d983d46(void)

void FUN_14d983d46(void)

{
  FUN_166daf00b();
  return;
}



// FUNCTION 14d983f99 FUN_14d983f99 body=176 status=ok
// SIG undefined FUN_14d983f99(void)

/* WARNING: Removing unreachable block (ram,0x00014d984012) */

void FUN_14d983f99(undefined8 param_1)

{
  FUN_1568c1a8f(param_1);
  return;
}



// FUNCTION 14d9840d4 FUN_14d9840d4 body=27 status=ok
// SIG undefined FUN_14d9840d4(void)

void FUN_14d9840d4(void)

{
  return;
}



// FUNCTION 14d9842ba FUN_14d9842ba body=169 status=ok
// SIG undefined FUN_14d9842ba(void)

/* WARNING: Removing unreachable block (ram,0x00014d984410) */
/* WARNING: Removing unreachable block (ram,0x00014d98441c) */
/* WARNING: Removing unreachable block (ram,0x00014d98435f) */
/* WARNING: Removing unreachable block (ram,0x00014d98436a) */
/* WARNING: Removing unreachable block (ram,0x0001656ee389) */
/* WARNING: Removing unreachable block (ram,0x00014d984365) */

void FUN_14d9842ba(void)

{
  FUN_165245f1b();
  return;
}



// FUNCTION 14d98436a FUN_14d98436a body=175 status=ok
// SIG undefined FUN_14d98436a(void)

/* WARNING: Removing unreachable block (ram,0x00014d984410) */
/* WARNING: Removing unreachable block (ram,0x00014d98441c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d98436a(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_20;
  
  FUN_156df03f4(param_1,uStackX_20 | unaff_R15,param_3,local_res8);
  return;
}



// FUNCTION 14d98441c FUN_14d98441c body=139 status=ok
// SIG undefined FUN_14d98441c(void)

void FUN_14d98441c(longlong param_1)

{
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  
  FUN_16159707d((char)param_1,*(undefined8 *)(param_1 + -0x78),
                *(ulonglong *)(param_1 + -0x88) ^ unaff_RBX,unaff_RBP + -1);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d9844b0 FUN_14d9844b0 body=46 status=ok
// SIG undefined FUN_14d9844b0(void)

void FUN_14d9844b0(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d984570 FUN_14d984570 body=109 status=ok
// SIG undefined FUN_14d984570(void)

/* WARNING: Removing unreachable block (ram,0x00014d9845e0) */

void FUN_14d984570(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  undefined8 uVar1;
  longlong in_RAX;
  ushort uVar2;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R13;
  ulonglong uVar3;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  *(undefined8 *)(in_RAX + unaff_RSI + in_R11) = unaff_R13;
  param_8 = param_8 ^ param_1;
  uVar2 = ((ushort)param_7 | 0x100) - 0x100;
  if (uVar2 == 0) {
    FUN_16482cfd2();
    return;
  }
  *(undefined8 *)(param_8 - 8) = unaff_RBP;
  *(undefined8 *)(param_8 - 0x10) = unaff_RBP;
  *(ulonglong *)(param_8 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((param_7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_7 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(param_8 - 0x18);
  *(ulonglong *)(param_8 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_8 - 0x20) = param_4;
  *(undefined8 *)(param_8 - 0x28) = unaff_retaddr;
  uVar1 = *(undefined8 *)(param_8 - 0x20);
  uVar3 = *(ulonglong *)(param_8 - 0x18);
  *(undefined8 *)(param_8 - 0x18) = local_res20;
  *(ulonglong *)(param_8 - 0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_8 - 0x28) = uVar1;
  *(undefined8 *)(param_8 - 8) = 0x7cb8128;
  FUN_165c7153c(param_6,param_2,param_3,*(undefined8 *)(param_8 - 0x28));
  return;
}



// FUNCTION 14d9845e0 FUN_14d9845e0 body=30 status=ok
// SIG undefined FUN_14d9845e0(void)

void FUN_14d9845e0(void)

{
  return;
}



// FUNCTION 14d984a2b FUN_14d984a2b body=151 status=ok
// SIG undefined FUN_14d984a2b(void)

/* WARNING: Removing unreachable block (ram,0x00014d984ac2) */
/* WARNING: Removing unreachable block (ram,0x00014d984af7) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf8dd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d984a2b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  ulonglong in_R10;
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong in_stack_00000010;
  ulonglong uStackX_20;
  ulonglong in_stack_00000038;
  
  if ((~(~in_RAX | in_stack_00000010) | ~(~in_stack_00000010 | in_RAX)) == 0xffffffffffffffff) {
    uStackX_20 = uStackX_20 ^ in_RAX;
                    /* WARNING: Ignoring partial resolution of indirect */
    FUN_1662f3d2c(local_res8,param_2,param_3);
    uVar1 = *(ulonglong *)((longlong)&uStackX_20 + (in_R10 ^ 0x7a5e4f9a)) | unaff_R15;
    *(undefined8 *)((~uVar1 | ~(in_stack_00000038 & unaff_R15)) + uVar1 + -7) = unaff_RBP;
    FUN_156b05771(local_res8);
    return;
  }
  FUN_15b04d484();
  return;
}



// FUNCTION 14d984ac2 FUN_14d984ac2 body=137 status=ok
// SIG undefined FUN_14d984ac2(void)

void FUN_14d984ac2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_R13;
  
  *(undefined8 *)(&stack0xfffffffffafbd90a + param_3) = unaff_R13;
  return;
}



// FUNCTION 14d984cb3 FUN_14d984cb3 body=151 status=ok
// SIG undefined FUN_14d984cb3(void)

void FUN_14d984cb3(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_1661c7c9f(param_1,*(undefined8 *)(unaff_RDI + -0x88),0);
  return;
}



// FUNCTION 14d984e74 FUN_14d984e74 body=166 status=ok
// SIG undefined FUN_14d984e74(void)

/* WARNING: Removing unreachable block (ram,0x00014d984f16) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d984e74(undefined8 param_1,undefined8 param_2)

{
  FUN_160e322ac(FUN_160e322ac,param_2);
  return;
}



// FUNCTION 14d984f1c FUN_14d984f1c body=124 status=ok
// SIG undefined FUN_14d984f1c(void)

void FUN_14d984f1c(void)

{
  FUN_14d977480();
  return;
}



// FUNCTION 14d984f98 FUN_14d984f98 body=347 status=ok
// SIG undefined FUN_14d984f98(void)

/* WARNING: Removing unreachable block (ram,0x0001571532f7) */
/* WARNING: Removing unreachable block (ram,0x0001571532fd) */
/* WARNING: Removing unreachable block (ram,0x000157153256) */
/* WARNING: Removing unreachable block (ram,0x00016273e51d) */
/* WARNING: Removing unreachable block (ram,0x000157153302) */
/* WARNING: Removing unreachable block (ram,0x000157153250) */
/* WARNING: Removing unreachable block (ram,0x00014d985031) */

void FUN_14d984f98(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161b25bf9(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                ~(param_3 & unaff_R15) & (~unaff_RBX + unaff_R15) - ~param_2,param_4);
  return;
}



// FUNCTION 14d9850e5 FUN_14d9850e5 body=797 status=ok
// SIG undefined FUN_14d9850e5(void)

/* WARNING: Removing unreachable block (ram,0x00015b790268) */
/* WARNING: Removing unreachable block (ram,0x00015b79026e) */
/* WARNING: Removing unreachable block (ram,0x00015b7902fd) */
/* WARNING: Removing unreachable block (ram,0x00015b790302) */
/* WARNING: Removing unreachable block (ram,0x00015b25bb80) */
/* WARNING: Removing unreachable block (ram,0x00015b790308) */
/* WARNING: Removing unreachable block (ram,0x00015b79037e) */
/* WARNING: Removing unreachable block (ram,0x00015b790382) */
/* WARNING: Removing unreachable block (ram,0x00015b7903ad) */
/* WARNING: Removing unreachable block (ram,0x00015b7903b2) */
/* WARNING: Removing unreachable block (ram,0x00015b7903b8) */
/* WARNING: Removing unreachable block (ram,0x000165439da9) */
/* WARNING: Removing unreachable block (ram,0x0001654cdd7a) */
/* WARNING: Removing unreachable block (ram,0x0001651217db) */

undefined8 FUN_14d9850e5(short param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RSI;
  ulonglong unaff_retaddr;
  
  if (unaff_RSI == (unaff_retaddr ^ 0x34bc8667)) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x2b9de) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI == 0x2b9df) {
    FUN_165121723();
    return CONCAT62(0xffffffffffff,param_1 + 0x7d22);
  }
  if (unaff_RSI == 0x2b9e0) {
    return in_RAX;
  }
  if (unaff_RSI == 0x2b9e1) {
    return in_RAX;
  }
  if (unaff_RSI != 0x2b9e2) {
    uVar1 = FUN_1654cdd82();
    return uVar1;
  }
  uVar1 = thunk_FUN_1654cdd80();
  return uVar1;
}



// FUNCTION 14d985258 FUN_14d985258 body=24 status=ok
// SIG undefined FUN_14d985258(void)

void FUN_14d985258(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_165c7153c(uStackX_8,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d985356 FUN_14d985356 body=160 status=ok
// SIG undefined FUN_14d985356(void)

void FUN_14d985356(longlong param_1,undefined8 param_2)

{
  char unaff_BL;
  byte unaff_R14B;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  *(char *)(param_1 + 0x109) = *(char *)(param_1 + 0x109) + unaff_BL;
  *(byte *)(param_1 + 0x109) = *(byte *)(param_1 + 0x109) ^ unaff_R14B;
  FUN_1571eb7b0(CONCAT44(uStackX_14,local_res10),param_2,FUN_1571eb7b0);
  return;
}



// FUNCTION 14d985400 FUN_14d985400 body=34 status=ok
// SIG undefined FUN_14d985400(void)

void FUN_14d985400(undefined8 param_1)

{
  undefined8 local_res8;
  
  FUN_14d85d504(param_1,local_res8);
  return;
}



// FUNCTION 14d98552e FUN_14d98552e body=115 status=ok
// SIG undefined FUN_14d98552e(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d98552e(void)

{
  undefined8 *puVar1;
  undefined8 unaff_RSI;
  ushort *unaff_R12;
  undefined8 unaff_R13;
  longlong in_stack_00000028;
  
  *unaff_R12 = *unaff_R12 - (*unaff_R12 & 0x100);
  puVar1 = (undefined8 *)(in_stack_00000028 + -8);
  *puVar1 = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *puVar1;
  *puVar1 = &LAB_14d9855b7;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d985708 FUN_14d985708 body=614 status=ok
// SIG undefined FUN_14d985708(void)

/* WARNING: Removing unreachable block (ram,0x00014d98584e) */
/* WARNING: Removing unreachable block (ram,0x00014d985854) */
/* WARNING: Removing unreachable block (ram,0x00014d98589f) */
/* WARNING: Removing unreachable block (ram,0x00014d9858a4) */
/* WARNING: Removing unreachable block (ram,0x0001656c6923) */
/* WARNING: Removing unreachable block (ram,0x0001656c6802) */
/* WARNING: Removing unreachable block (ram,0x0001656c680c) */
/* WARNING: Removing unreachable block (ram,0x0001656c6883) */
/* WARNING: Removing unreachable block (ram,0x0001656c6927) */
/* WARNING: Removing unreachable block (ram,0x0001656c686c) */
/* WARNING: Removing unreachable block (ram,0x0001571b43f5) */
/* WARNING: Removing unreachable block (ram,0x00014d9857a2) */

void FUN_14d985708(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60);
  uVar3 = param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x70);
  if (CARRY8(uVar3,param_1)) {
    uVar2 = *(ulonglong *)(unaff_RDI + -0x68);
    FUN_156a12135(param_1,~((~((~uVar2 | -param_1 - 1) + uVar2 + 1) + uVar2) - ~(-param_1 - 1) &
                           (~uVar2 | param_1)),
                  (*(ulonglong *)(unaff_RDI + -0x70) - param_1) + uVar3 * -2 + -2,
                  ~(uVar1 & param_1) & (~(uVar1 & param_1) + param_1) - ~uVar1);
    return;
  }
  FUN_1656c6775();
  return;
}



// FUNCTION 14d985977 FUN_14d985977 body=295 status=ok
// SIG undefined FUN_14d985977(void)

void FUN_14d985977(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffdfffffbf;
  FUN_165303316();
  FUN_1569111e2(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d985b53 FUN_14d985b53 body=124 status=ok
// SIG undefined FUN_14d985b53(void)

/* WARNING: Removing unreachable block (ram,0x00014d985bc6) */

void FUN_14d985b53(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = param_1;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_R14;
  *(undefined1 **)(local_res10 + -8) = &LAB_15b85e9ea;
                    /* WARNING: Could not recover jumptable at 0x00015b85e9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d985bc6 FUN_14d985bc6 body=167 status=ok
// SIG undefined FUN_14d985bc6(void)

void FUN_14d985bc6(ulonglong param_1)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  
  FUN_1614b3fa8(~(unaff_RDI & (param_1 ^ 0xffffffffffffffff | unaff_RBP)),FUN_1614b3fa8);
  return;
}



// FUNCTION 14d985d1b FUN_14d985d1b body=150 status=ok
// SIG undefined FUN_14d985d1b(void)

void FUN_14d985d1b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b0b00da(FUN_15b0b00da,0xebc65f19,param_3,0x3d553a3f);
  return;
}



// FUNCTION 14d985e65 FUN_14d985e65 body=135 status=ok
// SIG undefined FUN_14d985e65(void)

void FUN_14d985e65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14db5c5c6(param_1,FUN_14db5c5c6,param_3);
  return;
}



// FUNCTION 14d985eed FUN_14d985eed body=51 status=ok
// SIG undefined FUN_14d985eed(void)

void FUN_14d985eed(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d986048 FUN_14d986048 body=144 status=ok
// SIG undefined FUN_14d986048(void)

void FUN_14d986048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000008;
  
  FUN_156b8f59a(param_1,in_stack_00000008 ^ in_RAX,param_3);
  return;
}



// FUNCTION 14d986225 FUN_14d986225 body=107 status=ok
// SIG undefined FUN_14d986225(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d986225(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 uStackX_10;
  longlong lStackX_20;
  
  *(undefined8 *)(lStackX_20 + -8) = local_res8;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_RBX;
  *(undefined8 *)(lStackX_20 + -0x20) = unaff_RBP;
  *(code **)(lStackX_20 + -0x28) = FUN_14d9862c2;
  uVar1 = FUN_161640def(uStackX_10);
  *(undefined8 *)(lStackX_20 + -0x20) = uVar1;
  *(undefined8 *)(lStackX_20 + -0x20) = in_R10;
  *(undefined1 **)(lStackX_20 + -0x28) = &LAB_14d986334;
  return;
}



// FUNCTION 14d9862c2 FUN_14d9862c2 body=111 status=ok
// SIG undefined FUN_14d9862c2(void)

void FUN_14d9862c2(void)

{
  return;
}



// FUNCTION 14d986372 FUN_14d986372 body=185 status=ok
// SIG undefined FUN_14d986372(void)

/* WARNING: Removing unreachable block (ram,0x00014d986422) */
/* WARNING: Removing unreachable block (ram,0x00014d986428) */
/* WARNING: Removing unreachable block (ram,0x00014d98642d) */

void FUN_14d986372(void)

{
  FUN_1649ff51d();
  return;
}



// FUNCTION 14d98642d FUN_14d98642d body=149 status=ok
// SIG undefined FUN_14d98642d(void)

void FUN_14d98642d(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  FUN_1664fbb04(uVar1,~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) & uVar1));
  FUN_14d9864c4();
  return;
}



// FUNCTION 14d9864c4 FUN_14d9864c4 body=159 status=ok
// SIG undefined FUN_14d9864c4(void)

void FUN_14d9864c4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint unaff_EDI;
  longlong unaff_R15;
  undefined8 in_stack_00000010;
  
  *(uint *)(param_2 + unaff_R15) = *(uint *)(param_2 + unaff_R15) | 0x95aba920;
  *(uint *)(param_2 + unaff_R15) = unaff_EDI | ~*(uint *)(param_2 + unaff_R15);
  FUN_1625bd7ce(FUN_1625bd7ce,in_stack_00000010,param_3,0x10914a30);
  return;
}



// FUNCTION 14d986609 FUN_14d986609 body=129 status=ok
// SIG undefined FUN_14d986609(void)

longlong FUN_14d986609(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) + unaff_RBP +
         (*(ulonglong *)(unaff_RSI + -0x40) & unaff_RBP) * -2;
}



// FUNCTION 14d98671b FUN_14d98671b body=736 status=ok
// SIG undefined FUN_14d98671b(void)

/* WARNING: Instruction at (ram,0x00014d9867ca) overlaps instruction at (ram,0x00014d9867c9)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9867aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9867ca) */
/* WARNING: Removing unreachable block (ram,0x00014d9867c9) */
/* WARNING: Removing unreachable block (ram,0x00014d98690b) */
/* WARNING: Removing unreachable block (ram,0x00014d986912) */
/* WARNING: Removing unreachable block (ram,0x00014d98695c) */
/* WARNING: Removing unreachable block (ram,0x00014d986968) */
/* WARNING: Removing unreachable block (ram,0x00015af235a7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d98671b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong in_stack_00000010;
  undefined8 in_stack_00000018;
  ulonglong in_stack_00000020;
  
  if (-1 < (longlong)
           ((~in_stack_00000010 | in_stack_00000020) &
           ((in_stack_00000020 ^ 0xffffffffffffffff) + in_stack_00000010) -
           ((in_stack_00000020 ^ 0xffffffffffffffff) & in_stack_00000010))) {
    uVar1 = FUN_1626e64a9();
    return uVar1;
  }
  uVar1 = FUN_16476ccfe(in_stack_00000010,in_stack_00000018,param_3);
  return uVar1;
}



// FUNCTION 14d986c71 FUN_14d986c71 body=601 status=ok
// SIG undefined FUN_14d986c71(void)

/* WARNING: Removing unreachable block (ram,0x00016680cf09) */
/* WARNING: Removing unreachable block (ram,0x00016680cf0f) */
/* WARNING: Removing unreachable block (ram,0x00014d986d76) */
/* WARNING: Removing unreachable block (ram,0x0001610b83c0) */
/* WARNING: Removing unreachable block (ram,0x000166537ea9) */
/* WARNING: Removing unreachable block (ram,0x000166537ebd) */
/* WARNING: Removing unreachable block (ram,0x000166537ec5) */
/* WARNING: Removing unreachable block (ram,0x000166537ec8) */
/* WARNING: Removing unreachable block (ram,0x000166537ecc) */
/* WARNING: Removing unreachable block (ram,0x000166537f10) */
/* WARNING: Removing unreachable block (ram,0x000166537f1d) */
/* WARNING: Removing unreachable block (ram,0x0001572d8b3f) */
/* WARNING: Removing unreachable block (ram,0x000162cabb38) */
/* WARNING: Removing unreachable block (ram,0x0001610b8399) */
/* WARNING: Removing unreachable block (ram,0x000162cabbcd) */
/* WARNING: Removing unreachable block (ram,0x000162cabbd3) */
/* WARNING: Removing unreachable block (ram,0x00014d986d10) */
/* WARNING: Removing unreachable block (ram,0x00014d986db0) */
/* WARNING: Removing unreachable block (ram,0x0001572d8aab) */
/* WARNING: Removing unreachable block (ram,0x0001572d8b39) */
/* WARNING: Removing unreachable block (ram,0x000162caba97) */
/* WARNING: Removing unreachable block (ram,0x000162cabb2d) */
/* WARNING: Removing unreachable block (ram,0x000162cabb33) */
/* WARNING: Removing unreachable block (ram,0x0001610cbb4c) */
/* WARNING: Removing unreachable block (ram,0x00016628b33e) */
/* WARNING: Removing unreachable block (ram,0x0001610cbbcf) */
/* WARNING: Removing unreachable block (ram,0x0001610cbbdb) */
/* WARNING: Removing unreachable block (ram,0x0001610cbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd0e) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd13) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd1e) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd19) */
/* WARNING: Removing unreachable block (ram,0x000162cabbd8) */
/* WARNING: Removing unreachable block (ram,0x0001617ace35) */
/* WARNING: Removing unreachable block (ram,0x0001617ace3b) */
/* WARNING: Removing unreachable block (ram,0x00014d986db6) */
/* WARNING: Removing unreachable block (ram,0x00015b726d61) */
/* WARNING: Removing unreachable block (ram,0x00015b726d67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d986c71(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  bVar2 = (in_AF & 1) != 0;
  iVar1 = -((int)(((uint)bVar2 * 0x10 | 0x44) << 0x19) >> 0x1f);
  if ((ushort)((ushort)((in_NT & 1) != 0) * 0x4000 | (ushort)((in_IF & 1) != 0) * 0x200 |
               (ushort)((in_TF & 1) != 0) * 0x100 | (ushort)(iVar1 == 0) * 0x40 |
               (ushort)bVar2 * 0x10 | (ushort)(POPCOUNT(iVar1) == '\0') * 4 | 0xffbf) != 0xffbf) {
    FUN_166c6676d(param_1,param_2,param_3);
    return;
  }
  (*(code *)0x166c6675b)();
  return;
}



// FUNCTION 14d986d10 FUN_14d986d10 body=330 status=ok
// SIG undefined FUN_14d986d10(void)

/* WARNING: Removing unreachable block (ram,0x00014d986d76) */
/* WARNING: Removing unreachable block (ram,0x0001610b83c0) */
/* WARNING: Removing unreachable block (ram,0x0001610cbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd0e) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd13) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd1e) */
/* WARNING: Removing unreachable block (ram,0x0001610cbd19) */
/* WARNING: Removing unreachable block (ram,0x0001572d8b3f) */
/* WARNING: Removing unreachable block (ram,0x000162cabbd8) */
/* WARNING: Removing unreachable block (ram,0x000162cabb38) */
/* WARNING: Removing unreachable block (ram,0x0001610b8399) */
/* WARNING: Removing unreachable block (ram,0x000162cabbcd) */
/* WARNING: Removing unreachable block (ram,0x000162cabbd3) */
/* WARNING: Removing unreachable block (ram,0x00014d986db6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d986d10(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x28);
  uVar3 = 0xffffffffffffffff - unaff_RBP;
  if (-1 < (longlong)uVar3) {
    FUN_1610cbb4c();
    return;
  }
  uVar2 = *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP;
  if (-1 < (longlong)uVar2) {
    FUN_16628b33e();
    return;
  }
  FUN_14e091e0f(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x58) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x58) & unaff_RBP) * -2,uVar2,
                ~((~(uVar3 & uVar1) + uVar1) - (uVar3 ^ 0xffffffffffffffff)) |
                ~(~unaff_RBP & ~uVar1 | unaff_RBP));
  FUN_16628b3e4();
  return;
}



// FUNCTION 14d98701f FUN_14d98701f body=99 status=ok
// SIG undefined FUN_14d98701f(void)

void FUN_14d98701f(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong local_res10;
  
                    /* WARNING: Could not recover jumptable at 0x00014d987080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,~(local_res10 & param_3) & (local_res10 | param_3));
  return;
}



// FUNCTION 14d98717d FUN_14d98717d body=96 status=ok
// SIG undefined FUN_14d98717d(void)

void FUN_14d98717d(void)

{
  return;
}



// FUNCTION 14d9871de FUN_14d9871de body=358 status=ok
// SIG undefined FUN_14d9871de(void)

void FUN_14d9871de(void)

{
  longlong unaff_retaddr;
  
  if (-1 < unaff_retaddr) {
    FUN_164818b06();
    FUN_1668bd668();
    return;
  }
  return;
}



// FUNCTION 14d9873d3 FUN_14d9873d3 body=144 status=ok
// SIG undefined FUN_14d9873d3(void)

/* WARNING: Removing unreachable block (ram,0x00014d98743f) */

void FUN_14d9873d3(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  longlong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + unaff_retaddr + 0x6defd8a4);
  (*(code *)0x160f83c24)
            (0x160f83c24,param_2,
             ~(*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) &
             (*(ulonglong *)(unaff_R12 + -0x80) | in_RAX),~((~in_RAX | uVar1) & (~uVar1 | in_RAX)));
  return;
}



// FUNCTION 14d987463 FUN_14d987463 body=68 status=ok
// SIG undefined FUN_14d987463(void)

void FUN_14d987463(void)

{
  return;
}



// FUNCTION 14d987501 FUN_14d987501 body=56 status=ok
// SIG undefined FUN_14d987501(void)

void FUN_14d987501(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  
  FUN_14d7bcee4(uStackX_8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d987587 FUN_14d987587 body=147 status=ok
// SIG undefined FUN_14d987587(void)

void FUN_14d987587(void)

{
  ulonglong in_R9;
  ulonglong unaff_R13;
  undefined8 local_res8;
  
  if (in_R9 == ~(local_res8 & (unaff_R13 & 0x6ceeb84f | 0xffffffff931147b0))) {
    FUN_165e93f27();
    return;
  }
  return;
}



// FUNCTION 14d9876c1 FUN_14d9876c1 body=115 status=ok
// SIG undefined FUN_14d9876c1(void)

void FUN_14d9876c1(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  ushort unaff_BP;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *param_3 = (-0x100 - (~-(unaff_BP | 0xfeff) + 2)) + *param_3;
  puVar1 = (undefined8 *)(param_5 + -8);
  *puVar1 = unaff_R14;
  *(undefined8 *)(param_5 + -0x10) = *puVar1;
  *puVar1 = &DAT_14d987752;
  thunk_FUN_15b642ca5(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d98777c FUN_14d98777c body=149 status=ok
// SIG undefined FUN_14d98777c(void)

void FUN_14d98777c(undefined8 param_1)

{
  ulonglong unaff_RBX;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162847ed2(param_1,(~(~(unaff_RBX ^ unaff_R15) & in_R10) + in_R10) - (unaff_RBX ^ unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d9878b7 FUN_14d9878b7 body=81 status=ok
// SIG undefined FUN_14d9878b7(void)

void FUN_14d9878b7(void)

{
  return;
}



// FUNCTION 14d987946 FUN_14d987946 body=163 status=ok
// SIG undefined FUN_14d987946(void)

void FUN_14d987946(void)

{
  FUN_1616671f4();
  return;
}



// FUNCTION 14d9879e9 FUN_14d9879e9 body=88 status=ok
// SIG undefined FUN_14d9879e9(void)

void FUN_14d9879e9(void)

{
  return;
}



// FUNCTION 14d987b1c FUN_14d987b1c body=308 status=ok
// SIG undefined FUN_14d987b1c(void)

/* WARNING: Removing unreachable block (ram,0x00014d987bc3) */

void FUN_14d987b1c(undefined8 param_1)

{
  ulonglong unaff_RBP;
  ulonglong local_res18;
  
  FUN_16135939a(param_1,~unaff_RBP & local_res18 | unaff_RBP);
  return;
}



// FUNCTION 14d987bc9 FUN_14d987bc9 body=456 status=ok
// SIG undefined FUN_14d987bc9(void)

/* WARNING: Removing unreachable block (ram,0x00014d987d04) */
/* WARNING: Removing unreachable block (ram,0x00014d987d0a) */
/* WARNING: Removing unreachable block (ram,0x00014d987e19) */
/* WARNING: Removing unreachable block (ram,0x00014d987e1e) */
/* WARNING: Removing unreachable block (ram,0x00014d9108c5) */
/* WARNING: Removing unreachable block (ram,0x000162ce1406) */
/* WARNING: Removing unreachable block (ram,0x00014d91094e) */
/* WARNING: Removing unreachable block (ram,0x00014d910954) */
/* WARNING: Removing unreachable block (ram,0x00014d91095f) */
/* WARNING: Removing unreachable block (ram,0x00014d9109a5) */
/* WARNING: Removing unreachable block (ram,0x00014d987e24) */
/* WARNING: Removing unreachable block (ram,0x00014d987e3c) */
/* WARNING: Removing unreachable block (ram,0x00015666398b) */
/* WARNING: Removing unreachable block (ram,0x000156663995) */
/* WARNING: Removing unreachable block (ram,0x00015666399a) */
/* WARNING: Removing unreachable block (ram,0x0001566639a0) */
/* WARNING: Removing unreachable block (ram,0x000166d7d10c) */
/* WARNING: Removing unreachable block (ram,0x000166d7d24f) */
/* WARNING: Removing unreachable block (ram,0x000166d7d255) */
/* WARNING: Removing unreachable block (ram,0x000165196ec8) */
/* WARNING: Removing unreachable block (ram,0x00014d9109aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9109ac) */
/* WARNING: Removing unreachable block (ram,0x00015676ba96) */
/* WARNING: Removing unreachable block (ram,0x00015676bb27) */
/* WARNING: Removing unreachable block (ram,0x00014d987c7c) */
/* WARNING: Removing unreachable block (ram,0x00015676ba90) */
/* WARNING: Removing unreachable block (ram,0x00015b6f20e6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d987bc9(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_R14;
  ulonglong local_res20;
  
  uVar1 = (~local_res20 | ~param_1) & (local_res20 | param_1);
  *(undefined8 *)(uVar1 - 0x10) = param_4;
  *(undefined8 *)(uVar1 - 0x18) = 0x146ae5e;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x10) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R14;
  *(code **)(uVar1 - 0x10) = FUN_165c7153c;
  return in_RAX;
}



// FUNCTION 14d987d92 FUN_14d987d92 body=494 status=ok
// SIG undefined FUN_14d987d92(void)

/* WARNING: Removing unreachable block (ram,0x00014d9109aa) */
/* WARNING: Removing unreachable block (ram,0x00014d91095f) */
/* WARNING: Removing unreachable block (ram,0x000166d7d255) */
/* WARNING: Removing unreachable block (ram,0x00014d987e24) */
/* WARNING: Removing unreachable block (ram,0x00014d987e3c) */
/* WARNING: Removing unreachable block (ram,0x00015666398b) */
/* WARNING: Removing unreachable block (ram,0x00015666399a) */
/* WARNING: Removing unreachable block (ram,0x000166d7d10c) */
/* WARNING: Removing unreachable block (ram,0x000166d7d24f) */
/* WARNING: Removing unreachable block (ram,0x000165196ec8) */
/* WARNING: Removing unreachable block (ram,0x000156663995) */
/* WARNING: Removing unreachable block (ram,0x0001566639a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d987d92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  undefined8 uStackX_18;
  
  if (unaff_RBP <= ~(~unaff_RBP & local_res10) + local_res10) {
    FUN_14d9108c5();
    return;
  }
  if (uStackX_18 + unaff_RBP < ~(~uStackX_18 | ~unaff_RBP) * 2) {
    FUN_162ce1406();
    return;
  }
  FUN_161e4b8d3(param_1,unaff_retaddr,param_3,param_4);
  FUN_166c2e75e();
  return;
}



// FUNCTION 14d987ec9 FUN_14d987ec9 body=174 status=ok
// SIG undefined FUN_14d987ec9(void)

void FUN_14d987ec9(char param_1)

{
  char cVar1;
  char cVar2;
  longlong unaff_RBP;
  
  cVar2 = FUN_157893feb();
  LOCK();
  cVar1 = param_1;
  if (cVar2 != DAT_14d7ac29a._6_1_) {
    cVar1 = DAT_14d7ac29a._6_1_;
  }
  DAT_14d7ac29a._6_1_ = cVar1;
  UNLOCK();
  *(undefined8 *)(unaff_RBP + -8) = 0x246b70c;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d987fda FUN_14d987fda body=284 status=ok
// SIG undefined FUN_14d987fda(void)

void FUN_14d987fda(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b3bd35d(param_1,param_2,unaff_retaddr);
  (*(code *)0x14de421ff)(0x14de421ff,param_2);
  return;
}



// FUNCTION 14d988428 FUN_14d988428 body=154 status=ok
// SIG undefined FUN_14d988428(void)

void FUN_14d988428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1659fad2b(FUN_1659fad2b,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9886cb FUN_14d9886cb body=146 status=ok
// SIG undefined FUN_14d9886cb(void)

void FUN_14d9886cb(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  (*(code *)&LAB_1664b5af4)
            (~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
              (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
             ~(uVar1 & in_RAX) & (~(uVar1 & in_RAX) + in_RAX) - ~uVar1);
  return;
}



// FUNCTION 14d9887f9 FUN_14d9887f9 body=199 status=ok
// SIG undefined FUN_14d9887f9(void)

/* WARNING: Removing unreachable block (ram,0x00014d98888d) */

void FUN_14d9887f9(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_1624bd416();
  FUN_15677f9ce(local_res8,param_2);
  return;
}



// FUNCTION 14d9888c0 FUN_14d9888c0 body=133 status=ok
// SIG undefined FUN_14d9888c0(void)

void FUN_14d9888c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  FUN_15677f9ce(local_res8,param_2);
  return;
}



// FUNCTION 14d988a79 FUN_14d988a79 body=42 status=ok
// SIG undefined FUN_14d988a79(void)

undefined8 FUN_14d988a79(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14d988d86 FUN_14d988d86 body=140 status=ok
// SIG undefined FUN_14d988d86(void)

void FUN_14d988d86(ulonglong param_1)

{
  ulonglong in_stack_00000030;
  
  in_stack_00000030 = ~(~param_1 & in_stack_00000030) + in_stack_00000030;
  if (param_1 <= in_stack_00000030) {
    FUN_164c31c12();
    return;
  }
  if (in_stack_00000030 <= param_1) {
    FUN_164c31c12();
    return;
  }
  return;
}



// FUNCTION 14d988e12 FUN_14d988e12 body=143 status=ok
// SIG undefined FUN_14d988e12(void)

void FUN_14d988e12(void)

{
  return;
}



// FUNCTION 14d988f49 FUN_14d988f49 body=131 status=ok
// SIG undefined FUN_14d988f49(void)

void FUN_14d988f49(undefined8 param_1)

{
  (*(code *)&LAB_16260bce5)(param_1);
  return;
}



// FUNCTION 14d989315 FUN_14d989315 body=175 status=ok
// SIG undefined FUN_14d989315(void)

void FUN_14d989315(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_165d4ca87(*(undefined8 *)(unaff_RDI + -0x98),&stack0xfffffffffffffff8,param_3);
  return;
}



// FUNCTION 14d9893c4 FUN_14d9893c4 body=174 status=ok
// SIG undefined FUN_14d9893c4(void)

undefined8 FUN_14d9893c4(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d9894fd FUN_14d9894fd body=662 status=ok
// SIG undefined FUN_14d9894fd(void)

/* WARNING: Removing unreachable block (ram,0x00014d9896bf) */

void FUN_14d9894fd(ulonglong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R12;
  undefined8 local_res10;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  uVar3 = ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1);
  uVar2 = FUN_1668e59d1(param_1,FUN_1668e59d1,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                        (uVar2 - (uVar3 | uVar2)) + uVar3);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x70) ^ uVar2;
  lVar1 = FUN_165af91ba();
  uVar2 = ~(~(uVar2 & 0xffffffff9483d13d) & (uVar2 | 0xffffffff9483d13d));
  *(undefined8 *)(&stack0x00000020 + uVar2) = 0;
  *(longlong *)(&stack0x00000020 + uVar2) = *(longlong *)(&stack0x00000020 + uVar2) + lVar1;
  FUN_1618d7c19(param_1,local_res10);
  return;
}



// FUNCTION 14d989817 FUN_14d989817 body=316 status=ok
// SIG undefined FUN_14d989817(void)

void FUN_14d989817(void)

{
  FUN_165edb5a2();
  FUN_164704e9a();
  return;
}



// FUNCTION 14d989c3f FUN_14d989c3f body=156 status=ok
// SIG undefined FUN_14d989c3f(void)

/* WARNING: Removing unreachable block (ram,0x00014d989cdd) */
/* WARNING: Removing unreachable block (ram,0x00014d989ccd) */

undefined8 FUN_14d989c3f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165b86d2e();
  return uVar1;
}



// FUNCTION 14d989cdd FUN_14d989cdd body=141 status=ok
// SIG undefined FUN_14d989cdd(void)

void FUN_14d989cdd(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x165ed3b7e)(param_1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14d989d6b FUN_14d989d6b body=91 status=ok
// SIG undefined FUN_14d989d6b(void)

void FUN_14d989d6b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R12;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + (unaff_R12 ^ 0x4a659716)) = param_3;
  FUN_14d7a95b8(param_1,param_2,auStackX_10[0]);
  return;
}



// FUNCTION 14d989e0c FUN_14d989e0c body=174 status=ok
// SIG undefined FUN_14d989e0c(void)

void FUN_14d989e0c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10 [3];
  
  local_res10[2] =
       (~local_res10[2] + (unaff_R15 ^ 0xffffffffffffffff)) -
       (~local_res10[2] & (unaff_R15 ^ 0xffffffffffffffff)) &
       (*(ulonglong *)((longlong)local_res10 + param_2) | unaff_R15);
  (*(code *)0x15718ac0b)(param_1,0x15718ac0b,local_res8,param_4);
  return;
}



// FUNCTION 14d98a358 FUN_14d98a358 body=147 status=ok
// SIG undefined FUN_14d98a358(void)

void FUN_14d98a358(ulonglong param_1)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1618cb33c(unaff_RSI + unaff_R15 + (param_1 & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14d98a3eb FUN_14d98a3eb body=137 status=ok
// SIG undefined FUN_14d98a3eb(void)

void FUN_14d98a3eb(short param_1)

{
  longlong unaff_R12;
  undefined8 unaff_R13;
  
  FUN_165d2ed14(param_1 + -1,~*(ulonglong *)(unaff_R12 + -0x38),unaff_R13);
  return;
}



// FUNCTION 14d98a637 FUN_14d98a637 body=137 status=ok
// SIG undefined FUN_14d98a637(void)

void FUN_14d98a637(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_165e0fd9d(param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3 ^ param_1);
  return;
}



// FUNCTION 14d98a6c1 FUN_14d98a6c1 body=128 status=ok
// SIG undefined FUN_14d98a6c1(void)

undefined8 FUN_14d98a6c1(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d98aa66 thunk_FUN_14d98aa6c body=5 status=ok
// SIG undefined thunk_FUN_14d98aa6c(void)

void thunk_FUN_14d98aa6c(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~((param_1 ^ 0xffffffffffffffff) & ~param_2);
  FUN_1654ddfaf(CONCAT71((int7)(*(longlong *)(unaff_R13 + -0x38) + unaff_R15 >> 8),1),
                CONCAT71((int7)(~param_2 >> 8),1),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~(((~param_4 | unaff_R15) - (uVar1 | ~param_4 | unaff_R15)) + uVar1));
  return;
}



// FUNCTION 14d98aa6c FUN_14d98aa6c body=132 status=ok
// SIG undefined FUN_14d98aa6c(void)

void FUN_14d98aa6c(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~((param_1 ^ 0xffffffffffffffff) & ~param_2);
  FUN_1654ddfaf(CONCAT71((int7)(*(longlong *)(unaff_R13 + -0x38) + unaff_R15 >> 8),1),
                CONCAT71((int7)(~param_2 >> 8),1),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~(((~param_4 | unaff_R15) - (uVar1 | ~param_4 | unaff_R15)) + uVar1));
  return;
}



// FUNCTION 14d98aaf6 FUN_14d98aaf6 body=447 status=ok
// SIG undefined FUN_14d98aaf6(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d98aba3) */
/* WARNING: Removing unreachable block (ram,0x00014d98ac32) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3f6a) */
/* WARNING: Removing unreachable block (ram,0x00014d98ac38) */

void FUN_14d98aaf6(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  undefined4 uStackX_14;
  
  if (-1 < (int)(0x6c5bad44 - (~uStackX_14 + 2))) {
    FUN_161a2ff28(0x93a452bc,param_2);
    return;
  }
  FUN_161a2ff28();
  return;
}



// FUNCTION 14d98ac3e FUN_14d98ac3e body=173 status=ok
// SIG undefined FUN_14d98ac3e(void)

void FUN_14d98ac3e(void)

{
  FUN_165108872();
  return;
}



// FUNCTION 14d98acec FUN_14d98acec body=91 status=ok
// SIG undefined FUN_14d98acec(void)

void FUN_14d98acec(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  
  uVar1 = (ulonglong)unaff_retaddr ^ 0x2cd062f9;
  *(undefined8 *)(&stack0xfffffffffe67b1cf + uVar1) = 0xefa5249;
  *(undefined8 *)(&stack0xfffffffffe67b1d7 + uVar1) =
       *(undefined8 *)(&stack0xfffffffffe67b1cf + uVar1);
  *(undefined1 **)(&stack0xfffffffffe67b1c7 + uVar1) = &LAB_14d98ad48;
  return;
}



// FUNCTION 14d98ad97 FUN_14d98ad97 body=40 status=ok
// SIG undefined FUN_14d98ad97(void)

void FUN_14d98ad97(void)

{
  undefined8 in_R9;
  undefined8 *unaff_R14;
  
  *unaff_R14 = in_R9;
  FUN_14d7ac597();
  return;
}



// FUNCTION 14d98af7d FUN_14d98af7d body=70 status=ok
// SIG undefined FUN_14d98af7d(void)

void FUN_14d98af7d(void)

{
  ushort *unaff_RDI;
  undefined1 uStackX_10;
  undefined8 local_res20;
  
  *unaff_RDI = (*unaff_RDI | 0x100) - 0x100;
                    /* WARNING: Read-only address (ram,0x00014d7c240d) is written */
  LOCK();
  uRam000000014d7c240d = uStackX_10;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = 0xfdbea6;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d98b0bd FUN_14d98b0bd body=45 status=ok
// SIG undefined FUN_14d98b0bd(void)

void FUN_14d98b0bd(void)

{
  return;
}



// FUNCTION 14d98b3f4 FUN_14d98b3f4 body=160 status=ok
// SIG undefined FUN_14d98b3f4(void)

void FUN_14d98b3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162ec2f3d(FUN_162ec2f3d,param_2,param_3);
  return;
}


