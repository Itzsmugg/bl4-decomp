// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d843256 FUN_14d843256 body=142 status=ok
// SIG undefined FUN_14d843256(void)

void FUN_14d843256(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R14;
  undefined8 local_res18;
  
  *(undefined8 *)(unaff_R14 + 8) = 0;
  *(longlong *)(unaff_R14 + 8) = *(longlong *)(unaff_R14 + 8) - (param_3 ^ 0xffffffffffffffff);
  *(longlong *)(unaff_R14 + 8) = -*(longlong *)(unaff_R14 + 8);
  FUN_161d94509(FUN_161d94509,param_2,local_res18);
  return;
}



// FUNCTION 14d84338f FUN_14d84338f body=294 status=ok
// SIG undefined FUN_14d84338f(void)

/* WARNING: Removing unreachable block (ram,0x00014d84344a) */
/* WARNING: Removing unreachable block (ram,0x00014d843439) */
/* WARNING: Removing unreachable block (ram,0x00014d84343f) */
/* WARNING: Removing unreachable block (ram,0x00014d84344e) */
/* WARNING: Removing unreachable block (ram,0x000161b47036) */
/* WARNING: Removing unreachable block (ram,0x00014d8433af) */

void FUN_14d84338f(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  FUN_161b47036(param_1,(~in_RAX | *(ulonglong *)(unaff_R12 + -0x40)) &
                        (~*(ulonglong *)(unaff_R12 + -0x40) | in_RAX) ^ 0xffffffffffffffff,uVar1,
                ~(uVar1 & in_RAX) & (uVar1 | in_RAX));
  return;
}



// FUNCTION 14d8434fb FUN_14d8434fb body=127 status=ok
// SIG undefined FUN_14d8434fb(void)

void FUN_14d8434fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1629580be(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8437ee FUN_14d8437ee body=153 status=ok
// SIG undefined FUN_14d8437ee(void)

void FUN_14d8437ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  FUN_1653db1de(in_stack_00000008,param_2,0xfffffffff11e1807,param_4,
                *(undefined8 *)(unaff_R12 + -0x68));
  return;
}



// FUNCTION 14d843923 FUN_14d843923 body=189 status=ok
// SIG undefined FUN_14d843923(void)

void FUN_14d843923(void)

{
  return;
}



// FUNCTION 14d8439e2 FUN_14d8439e2 body=142 status=ok
// SIG undefined FUN_14d8439e2(void)

ulonglong FUN_14d8439e2(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  return ~in_RAX & param_2;
}



// FUNCTION 14d843a71 FUN_14d843a71 body=43 status=ok
// SIG undefined FUN_14d843a71(void)

void FUN_14d843a71(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_stack_00000008;
  undefined8 local_res20;
  
  *(undefined8 *)((longlong)&local_res20 + (in_stack_00000008 ^ 0x57efd981)) = param_2;
  FUN_156c79161(param_1,local_res20);
  return;
}



// FUNCTION 14d843daa FUN_14d843daa body=62 status=ok
// SIG undefined FUN_14d843daa(void)

void FUN_14d843daa(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_R13;
  undefined8 local_res8;
  ulonglong local_res18;
  
  puVar1 = (undefined8 *)(local_res18 & unaff_RBX);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(local_res8);
  *puVar1 = 0x1706040;
  puVar1[-1] = unaff_R13;
  puVar1[-2] = unaff_R13;
  puVar1[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14d843e58 FUN_14d843e58 body=12 status=ok
// SIG undefined FUN_14d843e58(void)

void FUN_14d843e58(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14d843f09 FUN_14d843f09 body=131 status=ok
// SIG undefined FUN_14d843f09(void)

/* WARNING: Removing unreachable block (ram,0x00014d8441b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8441bb) */
/* WARNING: Removing unreachable block (ram,0x00014d844148) */
/* WARNING: Removing unreachable block (ram,0x000165610b6c) */
/* WARNING: Removing unreachable block (ram,0x000165610b72) */
/* WARNING: Removing unreachable block (ram,0x000166c3a8f9) */
/* WARNING: Removing unreachable block (ram,0x0001617a7edf) */
/* WARNING: Removing unreachable block (ram,0x00014da498d8) */
/* WARNING: Removing unreachable block (ram,0x00014da498de) */
/* WARNING: Removing unreachable block (ram,0x00014d84401f) */
/* WARNING: Removing unreachable block (ram,0x00014d84409f) */
/* WARNING: Removing unreachable block (ram,0x00014d8440a4) */
/* WARNING: Removing unreachable block (ram,0x000156b1d3f3) */
/* WARNING: Removing unreachable block (ram,0x000166806818) */
/* WARNING: Removing unreachable block (ram,0x00014d843f8d) */
/* WARNING: Removing unreachable block (ram,0x00014d844014) */
/* WARNING: Removing unreachable block (ram,0x00014d844019) */
/* WARNING: Removing unreachable block (ram,0x00014da497b7) */
/* WARNING: Removing unreachable block (ram,0x00014da498c5) */
/* WARNING: Removing unreachable block (ram,0x00014d8440b0) */

undefined8 FUN_14d843f09(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (!CARRY8(unaff_R15 - (*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15),
              *(ulonglong *)(unaff_R13 + -0xa0))) {
    uVar1 = FUN_16680678d();
    return uVar1;
  }
  if (*(longlong *)(unaff_R13 + -0x98) - 1U < (ulonglong)(*(longlong *)(unaff_R13 + -0x98) * 2)) {
    uVar1 = FUN_14dc9b51a();
    return uVar1;
  }
  uVar1 = FUN_165f4632b();
  return uVar1;
}



// FUNCTION 14d843f8d FUN_14d843f8d body=692 status=ok
// SIG undefined FUN_14d843f8d(void)

/* WARNING: Removing unreachable block (ram,0x000165610b6c) */
/* WARNING: Removing unreachable block (ram,0x000165610b72) */
/* WARNING: Removing unreachable block (ram,0x000166c3a8f9) */
/* WARNING: Removing unreachable block (ram,0x00014d844148) */
/* WARNING: Removing unreachable block (ram,0x00014d8441b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8441bb) */
/* WARNING: Removing unreachable block (ram,0x0001617a7edf) */
/* WARNING: Removing unreachable block (ram,0x00014da498d8) */
/* WARNING: Removing unreachable block (ram,0x00014da498de) */
/* WARNING: Removing unreachable block (ram,0x00014d84401f) */
/* WARNING: Removing unreachable block (ram,0x00014d84409f) */
/* WARNING: Removing unreachable block (ram,0x00014d8440a4) */
/* WARNING: Removing unreachable block (ram,0x000156b1d3f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8440b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d843f8d(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong in_R10;
  ushort uVar5;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong uVar6;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined8 local_res8;
  ushort uStackX_10;
  uint6 uStackX_12;
  ulonglong local_res18;
  
  lVar4 = local_res18 + param_1 + (local_res18 & param_1) * -2;
  if ((local_res18 & param_1) * 2 <= local_res18 + param_1) {
    uVar2 = FUN_14da497b7();
    return uVar2;
  }
  uVar5 = ~(uStackX_10 & 0x100) + uStackX_10 + 1;
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7ab792);
  UNLOCK();
  DAT_14d7ab792 = (char)in_RAX;
  *(undefined8 *)(lVar4 + -8) = unaff_R12;
  *(undefined8 *)(lVar4 + -0x10) = unaff_R12;
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -0x20) = uVar2;
  *(undefined4 *)(lVar4 + -0x20) = 0x108016ca;
  *(undefined4 *)(lVar4 + -0x1c) = 0;
  uVar6 = *(ulonglong *)(lVar4 + -0x20) ^ 0x1bb55180;
  uVar7 = *(ulonglong *)(lVar4 + -0x18);
  *(ulonglong *)(lVar4 + -0x18) =
       (ulonglong)((uVar7 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar7 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar7 & 0x400) != 0) * 0x400 | (ulonglong)((uVar7 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar7 & 0x100) != 0) * 0x100 | (ulonglong)((uVar7 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar7 & 0x40) != 0) * 0x40 | (ulonglong)((uVar7 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar7 & 4) != 0) * 4 | (ulonglong)((uVar7 & 1) != 0) |
       (ulonglong)((uVar7 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar7 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar4 + -0x20) = param_2;
  plVar1 = (longlong *)(lVar4 + -0x28);
  pcVar3 = FUN_1568336a2;
  *(undefined8 *)(lVar4 + -0x30) = 0x14da4984f;
  FUN_1568336a2();
  *plVar1 = in_R10;
  *(undefined8 *)(lVar4 + -0x30) = local_res8;
  *plVar1 = *plVar1 << 1;
  *plVar1 = *plVar1 + uVar6;
  *(undefined4 *)(lVar4 + -0x30) = 0x97aec18e;
  *(int *)(lVar4 + -0x30) = *(int *)(lVar4 + -0x30) + 0x6a2683a4;
  *(undefined4 *)(lVar4 + -0x2c) = 0xe1f260b0;
  *(int *)(lVar4 + -0x2c) = *(int *)(lVar4 + -0x2c) + 0x1e0d9f50;
  lVar4 = lVar4 + *(longlong *)(lVar4 + -0x30) + -0x1d54552;
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(pcVar3 + -0x58);
  *(undefined8 *)(lVar4 + -8) = unaff_R13;
  *(undefined8 *)(lVar4 + -0x10) = in_R11;
  *(ulonglong *)(lVar4 + -0x18) = uVar6;
  *(undefined8 *)(lVar4 + -8) = unaff_R14;
  *(undefined8 *)(lVar4 + -0x10) = param_3;
  *(undefined8 *)(lVar4 + -0x18) = param_3;
  *(code **)(lVar4 + -0x10) = FUN_15780cd29;
  uVar2 = FUN_157337c22();
  return uVar2;
}



// FUNCTION 14d84452f FUN_14d84452f body=308 status=ok
// SIG undefined FUN_14d84452f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8445c4) */
/* WARNING: Removing unreachable block (ram,0x00014d8445ca) */
/* WARNING: Removing unreachable block (ram,0x00014d8445b1) */
/* WARNING: Removing unreachable block (ram,0x0001619634ac) */
/* WARNING: Removing unreachable block (ram,0x00016196353a) */
/* WARNING: Removing unreachable block (ram,0x000161963540) */
/* WARNING: Removing unreachable block (ram,0x000161963568) */
/* WARNING: Removing unreachable block (ram,0x000161963535) */
/* WARNING: Removing unreachable block (ram,0x000166257bd7) */

undefined8 FUN_14d84452f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1619634ac(param_1,param_2,0x9b);
  return uVar1;
}



// FUNCTION 14d844706 FUN_14d844706 body=157 status=ok
// SIG undefined FUN_14d844706(void)

longlong FUN_14d844706(ulonglong param_1)

{
  undefined8 local_res8;
  
  return (param_1 - (local_res8 | param_1)) + local_res8;
}



// FUNCTION 14d8447a6 FUN_14d8447a6 body=130 status=ok
// SIG undefined FUN_14d8447a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d844809) */

void FUN_14d8447a6(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x165aa3125)(param_1,param_2);
  return;
}



// FUNCTION 14d84497b FUN_14d84497b body=212 status=ok
// SIG undefined FUN_14d84497b(void)

void FUN_14d84497b(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  longlong unaff_R15;
  undefined8 uStackX_8;
  undefined8 local_res20;
  ulonglong in_stack_00000028;
  ulonglong in_stack_00000030;
  
  *(undefined8 *)(unaff_R15 + (0x57fa00a3 - ~unaff_R12)) = in_RAX;
  in_stack_00000030 = in_stack_00000030 ^ param_1;
  *(undefined8 *)(in_stack_00000030 - 8) = uStackX_8;
  *(undefined8 *)(in_stack_00000030 - 0x10) = uStackX_8;
  *(ulonglong *)(in_stack_00000030 - 0x18) =
       (ulonglong)((in_stack_00000028 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((in_stack_00000028 & 0x800) != 0) * 0x800 |
       (ulonglong)((in_stack_00000028 & 0x400) != 0) * 0x400 |
       (ulonglong)((in_stack_00000028 & 0x200) != 0) * 0x200 |
       (ulonglong)((in_stack_00000028 & 0x80) != 0) * 0x80 |
       (ulonglong)((in_stack_00000028 & 0x40) != 0) * 0x40 |
       (ulonglong)((in_stack_00000028 & 0x10) != 0) * 0x10 |
       (ulonglong)((in_stack_00000028 & 4) != 0) * 4 | (ulonglong)((in_stack_00000028 & 1) != 0) |
       (ulonglong)((in_stack_00000028 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((in_stack_00000028 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000030 - 8) = 0x4f24714;
  *(undefined8 *)(in_stack_00000030 - 0x18) = 0x14d844a0c;
  FUN_1668e1df5(local_res20);
  uVar1 = *(undefined8 *)(in_stack_00000030 - 8);
  *(code **)(in_stack_00000030 - 8) = FUN_1668e1df5;
  *(undefined8 *)(in_stack_00000030 + 8) = 0;
  *(longlong *)(in_stack_00000030 + 8) = *(longlong *)(in_stack_00000030 + 8) - unaff_RBP;
  *(undefined8 *)(in_stack_00000030 - 8) = uVar1;
  return;
}



// FUNCTION 14d844a9d FUN_14d844a9d body=51 status=ok
// SIG undefined FUN_14d844a9d(void)

void FUN_14d844a9d(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d844c6d FUN_14d844c6d body=138 status=ok
// SIG undefined FUN_14d844c6d(void)

void FUN_14d844c6d(void)

{
  return;
}



// FUNCTION 14d844cf9 FUN_14d844cf9 body=479 status=ok
// SIG undefined FUN_14d844cf9(void)

/* WARNING: Removing unreachable block (ram,0x00014d844d90) */
/* WARNING: Removing unreachable block (ram,0x00014d844d96) */
/* WARNING: Removing unreachable block (ram,0x00014d844e1e) */
/* WARNING: Removing unreachable block (ram,0x00014d844e29) */
/* WARNING: Removing unreachable block (ram,0x00014d844e24) */
/* WARNING: Removing unreachable block (ram,0x00014d844e19) */
/* WARNING: Removing unreachable block (ram,0x00015b4cf122) */

undefined8 FUN_14d844cf9(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  
  uVar1 = FUN_15b6b58eb(param_1,~unaff_RSI | ~param_2,param_3,FUN_15b6b58eb);
  return uVar1;
}



// FUNCTION 14d844e29 FUN_14d844e29 body=169 status=ok
// SIG undefined FUN_14d844e29(void)

ulonglong FUN_14d844e29(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return ~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x68) |
         ~*(ulonglong *)(unaff_RSI + -0x68) | unaff_RBP;
}



// FUNCTION 14d844ed4 FUN_14d844ed4 body=585 status=ok
// SIG undefined FUN_14d844ed4(void)

/* WARNING: Removing unreachable block (ram,0x00014d844f6b) */
/* WARNING: Removing unreachable block (ram,0x00014d845066) */
/* WARNING: Removing unreachable block (ram,0x00014d845094) */

void FUN_14d844ed4(void)

{
  FUN_165aada60();
  return;
}



// FUNCTION 14d845140 FUN_14d845140 body=5 status=ok
// SIG undefined FUN_14d845140(void)

void FUN_14d845140(void)

{
  return;
}



// FUNCTION 14d8451bf FUN_14d8451bf body=205 status=ok
// SIG undefined FUN_14d8451bf(void)

undefined8 FUN_14d8451bf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d84528d FUN_14d84528d body=283 status=ok
// SIG undefined FUN_14d84528d(void)

void FUN_14d84528d(ulonglong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  
  uVar1 = (ushort)*(undefined8 *)(unaff_RDI + -0x50);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x30) + param_1;
  uVar3 = (*(ulonglong *)(unaff_RDI + -0x30) & param_1) << 1;
  if (uVar3 <= uVar2) {
    FUN_1654a41ae(param_1,(short)((-(ushort)param_1 - uVar1) + (uVar1 | (ushort)param_1) * 2) >> 0xf
                  ,(~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
                   (~param_1 & ~*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                  *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
    return;
  }
  if (uVar2 <= uVar3) {
    FUN_1618db802();
    return;
  }
  FUN_16101cc3a(param_1);
  return;
}



// FUNCTION 14d845433 FUN_14d845433 body=277 status=ok
// SIG undefined FUN_14d845433(void)

undefined8 FUN_14d845433(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  bool in_CF;
  
  if (in_CF) {
    param_2 = param_2 + 1;
  }
  FUN_165210a0c();
  return CONCAT71(~(uint7)((ulonglong)(unaff_RBP - param_2) >> 8),0x6c);
}



// FUNCTION 14d845549 FUN_14d845549 body=44 status=ok
// SIG undefined FUN_14d845549(void)

void FUN_14d845549(void)

{
  undefined8 *in_RAX;
  undefined4 in_R11D;
  undefined4 in_register_0000009c;
  
  *in_RAX = CONCAT44(in_register_0000009c,in_R11D);
  *(undefined4 *)in_RAX = in_R11D;
  return;
}



// FUNCTION 14d845575 FUN_14d845575 body=35 status=ok
// SIG undefined FUN_14d845575(void)

void FUN_14d845575(void)

{
  return;
}



// FUNCTION 14d845794 thunk_FUN_14d84579a body=5 status=ok
// SIG undefined thunk_FUN_14d84579a(void)

/* WARNING: Removing unreachable block (ram,0x00014d845824) */
/* WARNING: Removing unreachable block (ram,0x00014d84582a) */
/* WARNING: Removing unreachable block (ram,0x00014d8458ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8458b2) */
/* WARNING: Removing unreachable block (ram,0x0001624ce9f6) */
/* WARNING: Removing unreachable block (ram,0x000165a41794) */

void thunk_FUN_14d84579a(void)

{
  FUN_165a41794();
  return;
}



// FUNCTION 14d84579a FUN_14d84579a body=280 status=ok
// SIG undefined FUN_14d84579a(void)

/* WARNING: Removing unreachable block (ram,0x00014d845824) */
/* WARNING: Removing unreachable block (ram,0x00014d84582a) */
/* WARNING: Removing unreachable block (ram,0x00014d8458ac) */
/* WARNING: Removing unreachable block (ram,0x00014d8458b2) */
/* WARNING: Removing unreachable block (ram,0x0001624ce9f6) */
/* WARNING: Removing unreachable block (ram,0x000165a41794) */

void FUN_14d84579a(void)

{
  FUN_165a41794();
  return;
}



// FUNCTION 14d8458b2 FUN_14d8458b2 body=65 status=ok
// SIG undefined FUN_14d8458b2(void)

void FUN_14d8458b2(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *param_2 = (*param_2 | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -8) = 0x106b510;
  FUN_15b3d5987(param_1,uStackX_10,uStackX_18);
  return;
}



// FUNCTION 14d845950 FUN_14d845950 body=3 status=ok
// SIG undefined FUN_14d845950(void)

void FUN_14d845950(void)

{
  return;
}



// FUNCTION 14d845bde thunk_FUN_14d845be4 body=5 status=ok
// SIG undefined thunk_FUN_14d845be4(void)

void thunk_FUN_14d845be4(void)

{
  FUN_161dfc5a8();
  return;
}



// FUNCTION 14d845be4 FUN_14d845be4 body=143 status=ok
// SIG undefined FUN_14d845be4(void)

void FUN_14d845be4(void)

{
  FUN_161dfc5a8();
  return;
}



// FUNCTION 14d845c76 FUN_14d845c76 body=152 status=ok
// SIG undefined FUN_14d845c76(void)

void FUN_14d845c76(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 unaff_retaddr;
  
  uVar1 = *param_2;
  *param_2 = *param_2 ^ 0xffffffffffffffff;
  *param_2 = *param_2 | in_RAX;
  uVar2 = *param_2;
  *param_2 = 0x3138f988;
  *param_2 = *param_2 ^ 0x3138f988;
  *param_2 = *param_2 - ~((~in_RAX | uVar1) & uVar2);
  *param_2 = -*param_2;
  (*(code *)&LAB_161ae213e)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d845d14 FUN_14d845d14 body=15 status=ok
// SIG undefined FUN_14d845d14(void)

void FUN_14d845d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(unaff_retaddr,param_2,local_res8);
  return;
}



// FUNCTION 14d845da8 thunk_FUN_14d845dae body=5 status=ok
// SIG undefined thunk_FUN_14d845dae(void)

undefined8 thunk_FUN_14d845dae(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  FUN_1616cab88(FUN_1616cab88,in_stack_00000008,unaff_retaddr,uStackX_10);
  return param_1;
}



// FUNCTION 14d845dae FUN_14d845dae body=170 status=ok
// SIG undefined FUN_14d845dae(void)

undefined8 FUN_14d845dae(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  
  FUN_1616cab88(FUN_1616cab88,in_stack_00000008,unaff_retaddr,local_res10);
  return param_1;
}



// FUNCTION 14d845f62 FUN_14d845f62 body=58 status=ok
// SIG undefined FUN_14d845f62(void)

/* WARNING: Removing unreachable block (ram,0x00014d846006) */

void FUN_14d845f62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong in_RAX;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined1 auStack_17db [6075];
  
  lVar5 = -~(ulonglong)auStack_17db;
  *(ulonglong *)(lVar5 + 0x17ca) = *(ulonglong *)(unaff_R12 + -0xa0) ^ in_RAX;
  lVar2 = *(longlong *)(lVar5 + 0x17da);
  *(ulonglong *)(lVar5 + 0x17da) = *(ulonglong *)(lVar5 + 0x17da) & in_RAX;
  *(undefined8 *)(lVar5 + 0x17ca) = param_1;
  puVar1 = (undefined8 *)(lVar5 + 0x17c2);
  *puVar1 = param_3;
  *(undefined8 *)(lVar5 + 0x17ba) = unaff_R15;
  *(undefined8 *)(lVar5 + 0x17ba) = unaff_R13;
  uVar3 = *puVar1;
  *(longlong *)(lVar5 + 0x17da) = *(longlong *)(lVar5 + 0x17da) << 1;
  uVar4 = *(undefined8 *)(lVar5 + 0x17ca);
  *(undefined8 *)(lVar5 + 0x17ca) = in_R11;
  *puVar1 = in_R10;
  *(undefined8 *)(lVar5 + 0x17ba) = in_R10;
  *puVar1 = FUN_156a658c2;
  (*(code *)&LAB_165154c65)(uVar4,lVar2 + in_RAX,uVar3,param_4);
  return;
}



// FUNCTION 14d846099 FUN_14d846099 body=37 status=ok
// SIG undefined FUN_14d846099(void)

undefined8 FUN_14d846099(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d846136 FUN_14d846136 body=136 status=ok
// SIG undefined FUN_14d846136(void)

/* WARNING: Removing unreachable block (ram,0x00014d8461bf) */

void FUN_14d846136(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x50);
  if (uVar1 + param_1 < (((uVar1 | param_1) ^ 0xffffffffffffffff) + 1 + param_1 + uVar1) * 2) {
    FUN_15658aa48();
    return;
  }
  FUN_15658aa48();
  return;
}



// FUNCTION 14d8461bf FUN_14d8461bf body=27 status=ok
// SIG undefined FUN_14d8461bf(void)

void FUN_14d8461bf(void)

{
  return;
}



// FUNCTION 14d84625b FUN_14d84625b body=61 status=ok
// SIG undefined FUN_14d84625b(void)

void FUN_14d84625b(void)

{
  return;
}



// FUNCTION 14d846501 FUN_14d846501 body=120 status=ok
// SIG undefined FUN_14d846501(void)

void FUN_14d846501(void)

{
  return;
}



// FUNCTION 14d8465bc FUN_14d8465bc body=322 status=ok
// SIG undefined FUN_14d8465bc(void)

/* WARNING: Removing unreachable block (ram,0x00014d84665c) */

void FUN_14d8465bc(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x162b1588f)
            (*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
             (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,*(undefined8 *)(unaff_R12 + -0x78));
  return;
}



// FUNCTION 14d8468b0 FUN_14d8468b0 body=49 status=ok
// SIG undefined FUN_14d8468b0(void)

void FUN_14d8468b0(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  FUN_14dab0309(*(ulonglong *)(param_2 + -0x38) ^ unaff_RBP,
                *(ulonglong *)(unaff_retaddr + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14d846933 FUN_14d846933 body=149 status=ok
// SIG undefined FUN_14d846933(void)

void FUN_14d846933(void)

{
  return;
}



// FUNCTION 14d8469ca FUN_14d8469ca body=179 status=ok
// SIG undefined FUN_14d8469ca(void)

/* WARNING: Removing unreachable block (ram,0x00014d846a6e) */

void FUN_14d8469ca(void)

{
  return;
}



// FUNCTION 14d846cb0 FUN_14d846cb0 body=129 status=ok
// SIG undefined FUN_14d846cb0(void)

void FUN_14d846cb0(ulonglong param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  FUN_162171ff4(param_1,param_2,~local_res18 & ~param_1 | local_res18);
  return;
}



// FUNCTION 14d846dbc FUN_14d846dbc body=293 status=ok
// SIG undefined FUN_14d846dbc(void)

/* WARNING: Removing unreachable block (ram,0x00014d846ee2) */

void FUN_14d846dbc(void)

{
  longlong unaff_R13;
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  
  FUN_1568b6608();
  if (CONCAT62(unaff_000000ba,unaff_R15W) == -1 && *(longlong *)(unaff_R13 + -0x88) == 0) {
    FUN_1610fc14e(-*(longlong *)(unaff_R13 + -0x78),-*(longlong *)(unaff_R13 + -0x78),
                  0xffffffffffffffff);
    return;
  }
  FUN_15b2d25ce();
  return;
}



// FUNCTION 14d846ee2 FUN_14d846ee2 body=136 status=ok
// SIG undefined FUN_14d846ee2(void)

void FUN_14d846ee2(undefined8 param_1,undefined8 param_2,ulonglong *param_3,ushort param_4)

{
  ulonglong in_R11;
  ushort unaff_R15W;
  undefined8 in_stack_00000008;
  
  *param_3 = ~(~in_R11 | ~*param_3) ^ 0xffffffffffffffff;
  FUN_15692728f(param_1,param_2,in_stack_00000008,(~(~param_4 & unaff_R15W) + unaff_R15W) - param_4)
  ;
  return;
}



// FUNCTION 14d846f6a FUN_14d846f6a body=754 status=ok
// SIG undefined FUN_14d846f6a(void)

/* WARNING: Removing unreachable block (ram,0x00014d847030) */

void FUN_14d846f6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  FUN_1659a7648(param_1,param_2,param_3,local_res8);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x40) | unaff_R15;
  FUN_162cc2d64(uVar1,~uVar1);
  return;
}



// FUNCTION 14d84713c FUN_14d84713c body=161 status=ok
// SIG undefined FUN_14d84713c(void)

void FUN_14d84713c(void)

{
  FUN_1664452a1();
  return;
}



// FUNCTION 14d8471de FUN_14d8471de body=161 status=ok
// SIG undefined FUN_14d8471de(void)

/* WARNING: Removing unreachable block (ram,0x000160e37711) */
/* WARNING: Removing unreachable block (ram,0x00014d847280) */
/* WARNING: Removing unreachable block (ram,0x00014d8472ee) */
/* WARNING: Removing unreachable block (ram,0x000161c5d25e) */
/* WARNING: Removing unreachable block (ram,0x00014d8472f4) */

void FUN_14d8471de(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_RSI + -0x38);
  FUN_1616b07e1(-1 - ((unaff_RBP ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x38)) &
                     (uVar1 + unaff_RBP) - (uVar1 & unaff_RBP)),
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14d847280 FUN_14d847280 body=265 status=ok
// SIG undefined FUN_14d847280(void)

/* WARNING: Removing unreachable block (ram,0x00014d8472f4) */

void FUN_14d847280(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_16625202b(param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2,param_3 ^ param_1,
                FUN_16625202b,*(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14d8472fa FUN_14d8472fa body=142 status=ok
// SIG undefined FUN_14d8472fa(void)

void FUN_14d8472fa(void)

{
  return;
}



// FUNCTION 14d8475f3 FUN_14d8475f3 body=489 status=ok
// SIG undefined FUN_14d8475f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d847692) */
/* WARNING: Removing unreachable block (ram,0x00014d847681) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8475f3(void)

{
  return;
}



// FUNCTION 14d847717 FUN_14d847717 body=160 status=ok
// SIG undefined FUN_14d847717(void)

void FUN_14d847717(void)

{
  return;
}



// FUNCTION 14d847c92 FUN_14d847c92 body=43 status=ok
// SIG undefined FUN_14d847c92(void)

void FUN_14d847c92(void)

{
  return;
}



// FUNCTION 14d848099 FUN_14d848099 body=338 status=ok
// SIG undefined FUN_14d848099(void)

/* WARNING: Removing unreachable block (ram,0x00014d848151) */
/* WARNING: Removing unreachable block (ram,0x00014d848157) */
/* WARNING: Removing unreachable block (ram,0x00014d8481d7) */
/* WARNING: Removing unreachable block (ram,0x00014d8481dc) */
/* WARNING: Removing unreachable block (ram,0x00014d8481e2) */
/* WARNING: Removing unreachable block (ram,0x000166245d2e) */
/* WARNING: Removing unreachable block (ram,0x000156bf7be7) */

undefined8
FUN_14d848099(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  longlong in_R10;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = param_1;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  plVar1 = (longlong *)(local_res20 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + in_R10;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined8 *)(local_res20 + -8) = *(undefined8 *)(local_res20 + -8);
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x156bf7c04;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = param_4;
  *(undefined **)(local_res20 + -0x10) = &DAT_14d7c292f;
  uVar2 = FUN_156bf7be7();
  return uVar2;
}



// FUNCTION 14d8484d4 FUN_14d8484d4 body=269 status=ok
// SIG undefined FUN_14d8484d4(void)

void FUN_14d8484d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 in_stack_00000008;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0xa0);
  param_5 = param_5 ^ in_RAX;
  *(undefined8 *)(param_5 - 8) = in_R10;
  *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
  puVar1 = (ulonglong *)(param_5 - 0x18);
  *puVar1 = ~((~in_RAX | uVar2) & (0xffffffffffffffff - uVar2 | in_RAX));
  *(undefined8 *)(param_5 - 0x20) = 0x14d848561;
  uVar4 = FUN_16651d049();
  *(undefined8 *)(param_5 - 0x20) = in_stack_00000008;
  uVar3 = *(ulonglong *)(param_5 - 0x20);
  *(undefined8 *)(param_5 - 0x20) = uVar4;
  *(undefined8 *)(param_5 - 0x28) = param_3;
  uVar4 = *(undefined8 *)(param_5 - 0x28);
  *puVar1 = *puVar1;
  *(undefined8 *)(param_5 - 0x20) = in_R11;
  uVar2 = *(ulonglong *)(param_5 - 0x10);
  *(ulonglong *)(param_5 - 0x10) = *(ulonglong *)(param_5 - 0x10) & uVar3;
  *(ulonglong *)(param_5 - 0x10) = ~*(ulonglong *)(param_5 - 0x10);
  *(ulonglong *)(param_5 - 0x10) = *(ulonglong *)(param_5 - 0x10) & (uVar2 | uVar3);
  FUN_1667009f4(uVar3,param_2,uVar4);
  return;
}



// FUNCTION 14d8485e3 FUN_14d8485e3 body=157 status=ok
// SIG undefined FUN_14d8485e3(void)

/* WARNING: Removing unreachable block (ram,0x00014d848684) */

void FUN_14d8485e3(void)

{
  undefined8 uStackX_8;
  
  if (uStackX_8 == 0) {
    FUN_1662fc4c3();
    return;
  }
  FUN_1662fc4c3();
  return;
}



// FUNCTION 14d848684 FUN_14d848684 body=278 status=ok
// SIG undefined FUN_14d848684(void)

void FUN_14d848684(undefined8 param_1)

{
  undefined8 unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162368635(param_1,(~(*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) + unaff_R15) -
                        ~*(ulonglong *)(unaff_R13 + -0x90),
                *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_166cd36c0(unaff_RSI,FUN_166cd36c0);
  return;
}



// FUNCTION 14d84879c FUN_14d84879c body=522 status=ok
// SIG undefined FUN_14d84879c(void)

/* WARNING: Removing unreachable block (ram,0x000156376233) */
/* WARNING: Removing unreachable block (ram,0x00015637635e) */
/* WARNING: Removing unreachable block (ram,0x000156376363) */
/* WARNING: Removing unreachable block (ram,0x000156376369) */
/* WARNING: Removing unreachable block (ram,0x00015637636e) */
/* WARNING: Removing unreachable block (ram,0x00015b867bd8) */
/* WARNING: Removing unreachable block (ram,0x00015b867bde) */
/* WARNING: Removing unreachable block (ram,0x00015b867c59) */
/* WARNING: Removing unreachable block (ram,0x00015b867c54) */
/* WARNING: Removing unreachable block (ram,0x00015b867c5c) */
/* WARNING: Removing unreachable block (ram,0x00015b867c67) */
/* WARNING: Removing unreachable block (ram,0x00014d848840) */
/* WARNING: Removing unreachable block (ram,0x00014d848846) */
/* WARNING: Removing unreachable block (ram,0x000160fb7345) */
/* WARNING: Removing unreachable block (ram,0x000166b7a29e) */

undefined8 FUN_14d84879c(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  uint unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffe6ce8cb + unaff_retaddr);
  uVar4 = *puVar1;
  *puVar1 = param_3;
  puVar1[-1] = param_3;
  puVar1[-2] = unaff_RSI;
  uVar12 = *(undefined8 *)(unaff_RDI + -8);
  uVar5 = puVar1[-2];
  puVar1[-2] = unaff_R15;
  *(undefined4 *)(puVar1 + -3) = 0x7ee41b2c;
  *(undefined4 *)((longlong)puVar1 + -0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + ((puVar1[-3] ^ 0x7ee41b24) - 8)) = uVar12;
  uVar6 = puVar1[-1];
  puVar1[-1] = param_4;
  puVar1[-2] = param_4;
  puVar1[-3] = param_1;
  uVar8 = puVar1[-3];
  puVar1[-1] = *(undefined8 *)(unaff_RDI + -0x98);
  uVar9 = puVar1[-2];
  puVar1[-2] = uVar4;
  puVar1[-3] = uVar5;
  uVar4 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar12 = puVar1[-2];
  puVar1[-2] = uVar6;
  puVar1[-1] = puVar1[-1] ^ uVar8;
  puVar1[-2] = uVar9;
  puVar1[-3] = in_R11;
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  puVar1[-4] = unaff_RBX;
  uVar3 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = (~(uVar3 & uVar8) + uVar8) - *puVar1;
  uVar3 = puVar1[-4];
  puVar1[-4] = in_R10;
  *puVar1 = ~((0xffffffffffffffff - uVar8 | uVar2) & *puVar1);
  uVar10 = puVar1[-4];
  uVar11 = puVar1[-3];
  uVar5 = puVar1[-2];
  puVar1[1] = puVar1[1] ^ uVar8;
  puVar1[-1] = uVar3;
  puVar1[-2] = unaff_R12;
  puVar1[-3] = uVar12;
  uVar12 = puVar1[-3];
  puVar1[-3] = unaff_R14;
  puVar1[-4] = uVar5;
  uVar5 = puVar1[-3];
  *(ushort *)puVar1 = (-0x101 - ((ushort)*puVar1 | 0xfeff)) + (short)*puVar1;
  uVar6 = puVar1[-2];
  uVar9 = puVar1[-1];
  lVar7 = puVar1[1];
  *(ulonglong *)(lVar7 + -8) = ~((~uVar8 | uVar4) & (~uVar4 | uVar8));
  *(undefined8 *)(lVar7 + -0x10) = uVar11;
  *(undefined8 *)(lVar7 + -0x18) = uVar11;
  *(undefined8 *)(lVar7 + -0x20) = uVar9;
  *(undefined8 *)(lVar7 + -0x28) = uVar6;
  *(undefined8 *)(lVar7 + -0x20) = *(undefined8 *)(lVar7 + -0x28);
  *(undefined8 *)(lVar7 + -0x28) = uVar5;
  *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(lVar7 + -8);
  *(undefined8 *)(lVar7 + -0x18) = unaff_R13;
  *(undefined1 **)(lVar7 + -8) = &LAB_166c6a9b4;
  *(undefined8 *)(lVar7 + -0x18) = uVar12;
  *(undefined8 *)(lVar7 + -0x20) = uVar10;
  uVar12 = FUN_14d7abddd();
  return uVar12;
}



// FUNCTION 14d848ab2 FUN_14d848ab2 body=7 status=ok
// SIG undefined FUN_14d848ab2(void)

void FUN_14d848ab2(void)

{
  return;
}



// FUNCTION 14d848dfb FUN_14d848dfb body=453 status=ok
// SIG undefined FUN_14d848dfb(void)

/* WARNING: Removing unreachable block (ram,0x00014d848e96) */
/* WARNING: Removing unreachable block (ram,0x00014d848e9c) */

void FUN_14d848dfb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R12;
  longlong unaff_retaddr;
  undefined8 in_stack_00000018;
  undefined8 local_res20;
  
  *(undefined8 *)(&stack0x1bb2d1a9 + unaff_R12 + unaff_retaddr) = param_4;
  FUN_1573f1223(local_res20,param_2,param_3,in_stack_00000018);
  return;
}



// FUNCTION 14d848f30 FUN_14d848f30 body=141 status=ok
// SIG undefined FUN_14d848f30(void)

void FUN_14d848f30(void)

{
  FUN_1653ca1f2();
  FUN_14d848fbe();
  return;
}



// FUNCTION 14d848fbe FUN_14d848fbe body=153 status=ok
// SIG undefined FUN_14d848fbe(void)

/* WARNING: Removing unreachable block (ram,0x000161582e44) */
/* WARNING: Removing unreachable block (ram,0x000161582e4a) */
/* WARNING: Removing unreachable block (ram,0x000161582e85) */
/* WARNING: Removing unreachable block (ram,0x000161582e88) */
/* WARNING: Removing unreachable block (ram,0x00014d849057) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d848fbe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  
  param_5 = param_5 ^ unaff_R15;
  if (&DAT_ffffffffffffffe7 < &stack0x00000008) {
    *(undefined8 *)(param_5 - 8) = unaff_R14;
    *(undefined8 *)(param_5 - 0x10) = local_res10;
    *(undefined8 *)(param_5 - 0x18) = in_R11;
    *(undefined8 *)(param_5 - 0x10) = in_stack_00000008;
    *(longlong *)(param_5 - 0x18) = 0x160fcd903;
    lVar1 = *(longlong *)(param_5 - 0x18);
    *(undefined8 *)(param_5 - 0x10) = param_2;
    *(undefined8 *)(param_5 - 0x18) = param_2;
    *(undefined8 *)(param_5 - 0x10) = *(undefined8 *)(param_5 - 8);
    uVar2 = *(undefined8 *)(param_5 - 0x18);
    *(undefined8 *)(param_5 - 0x18) = unaff_RSI;
    *(longlong *)(param_5 - 8) = lVar1 + -0xa99b232;
    thunk_FUN_15b642ca5(param_1,uVar2);
    return;
  }
  FUN_161582dcf();
  return;
}



// FUNCTION 14d849057 FUN_14d849057 body=273 status=ok
// SIG undefined FUN_14d849057(void)

void FUN_14d849057(void)

{
  FUN_15708fc04();
  return;
}



// FUNCTION 14d84916a FUN_14d84916a body=68 status=ok
// SIG undefined FUN_14d84916a(void)

void FUN_14d84916a(void)

{
  return;
}



// FUNCTION 14d8491ae FUN_14d8491ae body=169 status=ok
// SIG undefined FUN_14d8491ae(void)

void FUN_14d8491ae(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  longlong unaff_RBP;
  ulonglong in_stack_00000010;
  
  *(ulonglong *)(unaff_RBP + 0x10) = (~param_3 | *(ulonglong *)(unaff_RBP + 0x10)) + param_3 + 1;
  FUN_157549a78(FUN_157549a78,param_2,
                ~((~(~param_6 | in_stack_00000010) |
                  0xffffffffffffffff - in_stack_00000010 | param_6) + (~param_6 | in_stack_00000010)
                 + 1));
  return;
}



// FUNCTION 14d849257 FUN_14d849257 body=258 status=ok
// SIG undefined FUN_14d849257(void)

/* WARNING: Removing unreachable block (ram,0x00014d849341) */
/* WARNING: Removing unreachable block (ram,0x00014d8492f5) */
/* WARNING: Removing unreachable block (ram,0x00014d849344) */
/* WARNING: Removing unreachable block (ram,0x00014d8492e5) */
/* WARNING: Removing unreachable block (ram,0x0001615e6f71) */

undefined8 FUN_14d849257(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = FUN_162546591(param_1 + unaff_RBP + (param_1 & unaff_RBP) * -2,
                        *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d849422 FUN_14d849422 body=288 status=ok
// SIG undefined FUN_14d849422(void)

void FUN_14d849422(longlong param_1,longlong param_2)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  (*(code *)0x14dd1d127)
            (1,param_2 + unaff_RSI * -2,unaff_RSI * 2,*(longlong *)(unaff_RDI + -0x50) + param_1);
  return;
}



// FUNCTION 14d8494ab FUN_14d8494ab body=151 status=ok
// SIG undefined FUN_14d8494ab(void)

void FUN_14d8494ab(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1618ad6ef(unaff_retaddr,param_2,FUN_1618ad6ef);
  return;
}



// FUNCTION 14d849546 FUN_14d849546 body=168 status=ok
// SIG undefined FUN_14d849546(void)

void FUN_14d849546(void)

{
  undefined4 local_res18;
  undefined8 local_res20;
  
  FUN_161d29fbd(local_res20,~local_res18);
  return;
}



// FUNCTION 14d8496a6 FUN_14d8496a6 body=647 status=ok
// SIG undefined FUN_14d8496a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8497d3) */
/* WARNING: Removing unreachable block (ram,0x00014d8497d9) */
/* WARNING: Removing unreachable block (ram,0x00014d84974a) */
/* WARNING: Removing unreachable block (ram,0x00014d849750) */
/* WARNING: Removing unreachable block (ram,0x00014d849753) */

undefined8 FUN_14d8496a6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  
  param_1 = local_res18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_RDI;
  *(undefined8 *)(param_1 - 0x10) = unaff_R15;
  *(undefined8 *)(param_1 - 0x18) = unaff_R15;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 8) = 0x2f20d520;
  *(ulonglong *)(param_1 - 8) = *(ulonglong *)(param_1 - 8) ^ 0x2f20d520;
  *(undefined8 *)(param_1 - 0x18) = unaff_RBP;
  lVar1 = *(longlong *)(param_1 - 8);
  *(ulonglong *)(param_1 - 8) = *(ulonglong *)(param_1 - 8) & 0x14df46efb;
  *(longlong *)(param_1 - 8) = *(longlong *)(param_1 - 8) << 1;
  *(undefined1 **)(param_1 - 8) = &LAB_14df46efb + (lVar1 - *(longlong *)(param_1 - 8));
  *(undefined8 *)(param_1 - 0x18) = param_3;
  *(undefined8 *)(param_1 - 0x20) = param_4;
  *(undefined8 *)(param_1 - 0x28) = in_R11;
  uVar2 = FUN_14df46e94(local_res8,param_2,&LAB_14df46efb + unaff_R13,
                        ~(~unaff_R13 & 0xfffffffeb20b9104));
  return uVar2;
}



// FUNCTION 14d8497ed FUN_14d8497ed body=323 status=ok
// SIG undefined FUN_14d8497ed(void)

/* WARNING: Removing unreachable block (ram,0x00014d849809) */

void FUN_14d8497ed(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166d78555(~unaff_R15,
                ~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x38)) +
                *(ulonglong *)(unaff_R13 + -0x38),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                (*(ulonglong *)(unaff_R13 + -0x60) ^ 0xffffffffffffffff | unaff_R15) ^
                0xffffffffffffffff);
  return;
}



// FUNCTION 14d849896 FUN_14d849896 body=657 status=ok
// SIG undefined FUN_14d849896(void)

/* WARNING: Removing unreachable block (ram,0x00015759b8e2) */
/* WARNING: Removing unreachable block (ram,0x00015759b8e8) */
/* WARNING: Removing unreachable block (ram,0x00015759b83d) */
/* WARNING: Removing unreachable block (ram,0x00015759b8dd) */
/* WARNING: Removing unreachable block (ram,0x0001621c3e3c) */
/* WARNING: Removing unreachable block (ram,0x00015759b82d) */
/* WARNING: Removing unreachable block (ram,0x00014d8499ce) */
/* WARNING: Removing unreachable block (ram,0x00014d849930) */
/* WARNING: Removing unreachable block (ram,0x00014d8499c8) */
/* WARNING: Removing unreachable block (ram,0x00015759b79f) */
/* WARNING: Removing unreachable block (ram,0x00015759b7c8) */
/* WARNING: Removing unreachable block (ram,0x00015759b7c3) */
/* WARNING: Removing unreachable block (ram,0x00015759b7d2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d849896(undefined8 param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000010;
  
  if (-1 < in_stack_00000010) {
    uVar1 = FUN_16471e8d1();
    return uVar1;
  }
  uVar1 = FUN_1665ca2ce(param_1,2);
  return uVar1;
}



// FUNCTION 14d849b1f FUN_14d849b1f body=350 status=ok
// SIG undefined FUN_14d849b1f(void)

/* WARNING: Removing unreachable block (ram,0x00014d849bc2) */
/* WARNING: Removing unreachable block (ram,0x00014d849bc8) */
/* WARNING: Removing unreachable block (ram,0x0001629ee583) */
/* WARNING: Removing unreachable block (ram,0x00014d849c75) */
/* WARNING: Removing unreachable block (ram,0x00014d849c7b) */
/* WARNING: Removing unreachable block (ram,0x00014d849c80) */

void FUN_14d849b1f(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uStack0000000000000028;
  ulonglong in_stack_00000038;
  
  uVar1 = *(ulonglong *)
           (param_1 +
           unaff_RDI + ~(~(unaff_RSI & 0xffffffffbeb39349) & (unaff_RSI | 0xffffffffbeb39349)));
  *(undefined8 *)((in_stack_00000038 ^ unaff_RBX) - 8) = param_3;
  uStack0000000000000028 = param_3;
  FUN_1650ec79f(uVar1 ^ unaff_RBX,param_2,FUN_1650ec79f);
  return;
}



// FUNCTION 14d849c80 FUN_14d849c80 body=172 status=ok
// SIG undefined FUN_14d849c80(void)

void FUN_14d849c80(void)

{
  FUN_157279815();
  return;
}



// FUNCTION 14d849d2c FUN_14d849d2c body=127 status=ok
// SIG undefined FUN_14d849d2c(void)

void FUN_14d849d2c(void)

{
  return;
}



// FUNCTION 14d849dde FUN_14d849dde body=131 status=ok
// SIG undefined FUN_14d849dde(void)

/* WARNING: Removing unreachable block (ram,0x00014d84a014) */
/* WARNING: Removing unreachable block (ram,0x00014d84a01f) */
/* WARNING: Removing unreachable block (ram,0x00014d849f5f) */
/* WARNING: Removing unreachable block (ram,0x00014d849f6d) */
/* WARNING: Removing unreachable block (ram,0x00014d849f73) */
/* WARNING: Removing unreachable block (ram,0x00014d849f78) */
/* WARNING: Removing unreachable block (ram,0x00014d84a00f) */
/* WARNING: Removing unreachable block (ram,0x00014d84a01a) */
/* WARNING: Removing unreachable block (ram,0x00014d849e63) */

void FUN_14d849dde(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong in_stack_00000008;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x98);
  lVar3 = local_res20 + param_1 + (local_res20 & param_1) * -2;
  plVar1 = (longlong *)(lVar3 + -8);
  *plVar1 = in_stack_00000008;
  *(longlong *)(lVar3 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = (longlong)(&LAB_14df09774 + *plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014df09758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + -0x10))(uVar2 ^ param_1);
  return;
}



// FUNCTION 14d849e63 FUN_14d849e63 body=441 status=ok
// SIG undefined FUN_14d849e63(void)

/* WARNING: Removing unreachable block (ram,0x00014d84a014) */
/* WARNING: Removing unreachable block (ram,0x00014d84a01f) */
/* WARNING: Removing unreachable block (ram,0x00014d849f5f) */
/* WARNING: Removing unreachable block (ram,0x00014d849f6d) */
/* WARNING: Removing unreachable block (ram,0x00014d849f73) */
/* WARNING: Removing unreachable block (ram,0x00014d849f78) */
/* WARNING: Removing unreachable block (ram,0x00014d84a00f) */
/* WARNING: Removing unreachable block (ram,0x00014d84a01a) */

void FUN_14d849e63(void)

{
  FUN_15b6b7a75();
  FUN_15687f46a();
  return;
}



// FUNCTION 14d84a01f FUN_14d84a01f body=153 status=ok
// SIG undefined FUN_14d84a01f(void)

void FUN_14d84a01f(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R13;
  
  plVar1 = (longlong *)(&stack0x00000000 + unaff_RSI);
  lVar2 = *(longlong *)(unaff_R13 + -0x30);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar2;
  *plVar1 = -*plVar1;
  *plVar1 = unaff_RBX;
  FUN_15b02be6b();
  return;
}



// FUNCTION 14d84a1fd FUN_14d84a1fd body=264 status=ok
// SIG undefined FUN_14d84a1fd(void)

void FUN_14d84a1fd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165065b0e(param_1,param_2,param_3,param_4);
  FUN_165c7153c();
  return;
}



// FUNCTION 14d84a337 FUN_14d84a337 body=478 status=ok
// SIG undefined FUN_14d84a337(void)

/* WARNING: Removing unreachable block (ram,0x00014d84a3d1) */
/* WARNING: Removing unreachable block (ram,0x00014d84a3d7) */
/* WARNING: Removing unreachable block (ram,0x00014d84a386) */
/* WARNING: Removing unreachable block (ram,0x000160dab450) */
/* WARNING: Removing unreachable block (ram,0x000160dab4da) */
/* WARNING: Removing unreachable block (ram,0x000162d4a8ef) */
/* WARNING: Removing unreachable block (ram,0x000160dab4e0) */

undefined8 FUN_14d84a337(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  undefined8 local_res20;
  
  if (-1 < (longlong)(0xffffffffffffffffU - local_res20 | ~unaff_RBP)) {
    uVar1 = FUN_162bbd3af();
    return uVar1;
  }
  uVar1 = FUN_162bbd3af();
  return uVar1;
}



// FUNCTION 14d84a5a8 FUN_14d84a5a8 body=56 status=ok
// SIG undefined FUN_14d84a5a8(void)

undefined8 FUN_14d84a5a8(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d84a641 FUN_14d84a641 body=174 status=ok
// SIG undefined FUN_14d84a641(void)

/* WARNING: Removing unreachable block (ram,0x0001611e1008) */
/* WARNING: Removing unreachable block (ram,0x000156c875b3) */
/* WARNING: Removing unreachable block (ram,0x000156c875b9) */
/* WARNING: Removing unreachable block (ram,0x00014d84a7fc) */
/* WARNING: Removing unreachable block (ram,0x00014d84a802) */
/* WARNING: Removing unreachable block (ram,0x00014d84a807) */
/* WARNING: Removing unreachable block (ram,0x00014d84a6f0) */
/* WARNING: Removing unreachable block (ram,0x00014d84a769) */
/* WARNING: Removing unreachable block (ram,0x00014d84a774) */
/* WARNING: Removing unreachable block (ram,0x000160c9438b) */
/* WARNING: Removing unreachable block (ram,0x00014d84a6e5) */
/* WARNING: Removing unreachable block (ram,0x00014d84a6eb) */
/* WARNING: Removing unreachable block (ram,0x00014d84a77a) */
/* WARNING: Removing unreachable block (ram,0x000156c8750a) */
/* WARNING: Removing unreachable block (ram,0x000156c87510) */
/* WARNING: Removing unreachable block (ram,0x000166b07283) */

undefined8 FUN_14d84a641(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  
  FUN_161bdbf7a(param_1,(~(~*(ulonglong *)(unaff_R13 + -8) & unaff_retaddr) + unaff_retaddr) -
                        *(ulonglong *)(unaff_R13 + -8),param_3);
  uVar1 = FUN_161d907be();
  return uVar1;
}



// FUNCTION 14d84a6f0 thunk_FUN_14d84a6f6 body=5 status=ok
// SIG undefined thunk_FUN_14d84a6f6(void)

/* WARNING: Removing unreachable block (ram,0x0001611e1008) */
/* WARNING: Removing unreachable block (ram,0x000156c875b3) */
/* WARNING: Removing unreachable block (ram,0x000156c875b9) */
/* WARNING: Removing unreachable block (ram,0x00014d84a7fc) */
/* WARNING: Removing unreachable block (ram,0x00014d84a802) */
/* WARNING: Removing unreachable block (ram,0x00014d84a807) */
/* WARNING: Removing unreachable block (ram,0x00014d84a77a) */
/* WARNING: Removing unreachable block (ram,0x000156c8750a) */
/* WARNING: Removing unreachable block (ram,0x000156c87510) */
/* WARNING: Removing unreachable block (ram,0x000166b07283) */

undefined8 thunk_FUN_14d84a6f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  undefined8 uStackX_8;
  
  if (-1 < unaff_RBX) {
    uVar1 = (*(code *)0x162c1bce8)(uStackX_8,param_2,param_3);
    return uVar1;
  }
  uVar1 = FUN_160c9438b();
  return uVar1;
}



// FUNCTION 14d84a6f6 FUN_14d84a6f6 body=269 status=ok
// SIG undefined FUN_14d84a6f6(void)

/* WARNING: Removing unreachable block (ram,0x0001611e1008) */
/* WARNING: Removing unreachable block (ram,0x000156c875b3) */
/* WARNING: Removing unreachable block (ram,0x000156c875b9) */
/* WARNING: Removing unreachable block (ram,0x00014d84a7fc) */
/* WARNING: Removing unreachable block (ram,0x00014d84a802) */
/* WARNING: Removing unreachable block (ram,0x00014d84a807) */
/* WARNING: Removing unreachable block (ram,0x00014d84a77a) */
/* WARNING: Removing unreachable block (ram,0x000156c8750a) */
/* WARNING: Removing unreachable block (ram,0x000156c87510) */
/* WARNING: Removing unreachable block (ram,0x000166b07283) */

undefined8 FUN_14d84a6f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  undefined8 local_res8;
  
  if (-1 < unaff_RBX) {
    uVar1 = (*(code *)0x162c1bce8)(local_res8,param_2,param_3);
    return uVar1;
  }
  uVar1 = FUN_160c9438b();
  return uVar1;
}



// FUNCTION 14d84a807 FUN_14d84a807 body=162 status=ok
// SIG undefined FUN_14d84a807(void)

longlong FUN_14d84a807(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  return -(in_RAX - unaff_RBX);
}



// FUNCTION 14d84a8ab FUN_14d84a8ab body=285 status=ok
// SIG undefined FUN_14d84a8ab(void)

/* WARNING: Instruction at (ram,0x00014d84a969) overlaps instruction at (ram,0x00014d84a968)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84a968) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00014d84a99b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d84a8ab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1649c83a3(param_1,param_2,param_3);
  FUN_157859f0e(0x6aec1e8,param_2);
  return;
}



// FUNCTION 14d84aa5c FUN_14d84aa5c body=155 status=ok
// SIG undefined FUN_14d84aa5c(void)

/* WARNING: Removing unreachable block (ram,0x00014d84aaf3) */
/* WARNING: Removing unreachable block (ram,0x00014d84aafe) */
/* WARNING: Removing unreachable block (ram,0x00014d84aaf9) */

void FUN_14d84aa5c(void)

{
  FUN_15782d3e7();
  return;
}



// FUNCTION 14d84aafe FUN_14d84aafe body=152 status=ok
// SIG undefined FUN_14d84aafe(void)

void FUN_14d84aafe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  short unaff_SI;
  short *in_R10;
  ushort unaff_R13W;
  ulonglong uVar2;
  short unaff_retaddr;
  undefined6 uStackX_8;
  undefined2 local_rese;
  undefined8 uStackX_10;
  
  *in_R10 = ((unaff_retaddr + -1) - ~unaff_R13W) + unaff_SI + *in_R10;
  LOCK();
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7a822a);
  UNLOCK();
  DAT_14d7a822a = (char)in_RAX;
  *(undefined8 *)(param_6 + -8) = param_1;
  *(undefined8 *)(param_6 + -0x10) = param_1;
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       (ulonglong)((param_5 & 0x100) != 0) * 0x100 | (ulonglong)((param_5 & 0x80) != 0) * 0x80 |
       (ulonglong)((param_5 & 0x40) != 0) * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10 |
       (ulonglong)((param_5 & 4) != 0) * 4 | (ulonglong)((param_5 & 1) != 0) |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = uVar1;
  *(ulonglong *)(param_6 + -0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_6 + -8) = 0x152aa5a;
  *(undefined8 *)(param_6 + -0x20) = uStackX_10;
  *(undefined8 *)(param_6 + -0x28) = uStackX_10;
  *(undefined **)(param_6 + -0x20) = &DAT_14d84ab9e;
  FUN_156bfe36f(FUN_156bfe36f,param_2,CONCAT26(local_rese,uStackX_8));
  return;
}



// FUNCTION 14d84ac4f FUN_14d84ac4f body=295 status=ok
// SIG undefined FUN_14d84ac4f(void)

/* WARNING: Removing unreachable block (ram,0x00016581698b) */
/* WARNING: Removing unreachable block (ram,0x00014d84acda) */

void FUN_14d84ac4f(ulonglong param_1)

{
  code *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = FUN_1619a66f0;
  FUN_1619a66f0(FUN_1619a66f0,(*(ulonglong *)(unaff_RDI + -0x68) & param_1) << 1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1);
  FUN_14dd6b2e4(pcVar1);
  thunk_FUN_15b330cd1();
  return;
}



// FUNCTION 14d84ad78 FUN_14d84ad78 body=109 status=ok
// SIG undefined FUN_14d84ad78(void)

void FUN_14d84ad78(void)

{
  ushort unaff_SI;
  ushort *unaff_retaddr;
  
  *unaff_retaddr = unaff_SI ^ 0xffff;
  FUN_15b5b3956();
  return;
}



// FUNCTION 14d84af6d FUN_14d84af6d body=190 status=ok
// SIG undefined FUN_14d84af6d(void)

void FUN_14d84af6d(void)

{
  return;
}



// FUNCTION 14d84b02d FUN_14d84b02d body=145 status=ok
// SIG undefined FUN_14d84b02d(void)

/* WARNING: Removing unreachable block (ram,0x00015b776bd5) */
/* WARNING: Removing unreachable block (ram,0x00015b776be1) */
/* WARNING: Removing unreachable block (ram,0x00014d84b149) */
/* WARNING: Removing unreachable block (ram,0x00014d84b14f) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1e6) */
/* WARNING: Removing unreachable block (ram,0x00015b776b2f) */
/* WARNING: Removing unreachable block (ram,0x0001658606e3) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1ec) */
/* WARNING: Removing unreachable block (ram,0x00014d84b307) */
/* WARNING: Removing unreachable block (ram,0x00014d84b30d) */
/* WARNING: Removing unreachable block (ram,0x00014d8d4200) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1e1) */

void FUN_14d84b02d(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP;
  FUN_16149eee5();
  if (uVar1 == 0x109207) {
    FUN_1662eee07();
    return;
  }
  if (uVar1 == 0x109208) {
    return;
  }
  FUN_15b980c22();
  return;
}



// FUNCTION 14d84b0be FUN_14d84b0be body=931 status=ok
// SIG undefined FUN_14d84b0be(void)

/* WARNING: Removing unreachable block (ram,0x00015b776bd5) */
/* WARNING: Removing unreachable block (ram,0x00015b776be1) */
/* WARNING: Removing unreachable block (ram,0x00014d84b149) */
/* WARNING: Removing unreachable block (ram,0x00014d84b14f) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1e6) */
/* WARNING: Removing unreachable block (ram,0x00015b776b2f) */
/* WARNING: Removing unreachable block (ram,0x0001658606e3) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1ec) */
/* WARNING: Removing unreachable block (ram,0x00014d84b307) */
/* WARNING: Removing unreachable block (ram,0x00014d84b30d) */
/* WARNING: Removing unreachable block (ram,0x00014d8d4200) */
/* WARNING: Removing unreachable block (ram,0x00014d84b1e1) */

void FUN_14d84b0be(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0x109207) {
    FUN_1662eee07(param_1,&DAT_14d7a4f86);
    return;
  }
  if (param_2 == 0x109208) {
    return;
  }
  FUN_15b980c22();
  return;
}



// FUNCTION 14d84b766 FUN_14d84b766 body=130 status=ok
// SIG undefined FUN_14d84b766(void)

void FUN_14d84b766(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_162b16838(param_1,FUN_162b16838,*(undefined8 *)(unaff_RDI + -0x70),
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14d84b87e FUN_14d84b87e body=603 status=ok
// SIG undefined FUN_14d84b87e(void)

/* WARNING: Removing unreachable block (ram,0x00016100f8a4) */
/* WARNING: Removing unreachable block (ram,0x00016100f8aa) */
/* WARNING: Removing unreachable block (ram,0x00014d84b914) */

void FUN_14d84b87e(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  
  FUN_162e02cfe(~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x38)) + unaff_RBP + 1) &
                (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),
                *(ulonglong *)(unaff_RSI + -0x58) + unaff_RBP +
                ~(~*(ulonglong *)(unaff_RSI + -0x58) | ~unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,in_R9 ^ unaff_RBP);
  return;
}



// FUNCTION 14d84b91a thunk_FUN_14d84b920 body=5 status=ok
// SIG undefined thunk_FUN_14d84b920(void)

undefined8 thunk_FUN_14d84b920(void)

{
  return 0xffffffffffffffff;
}



// FUNCTION 14d84b920 FUN_14d84b920 body=150 status=ok
// SIG undefined FUN_14d84b920(void)

undefined8 FUN_14d84b920(void)

{
  return 0xffffffffffffffff;
}



// FUNCTION 14d84ba3b FUN_14d84ba3b body=169 status=ok
// SIG undefined FUN_14d84ba3b(void)

undefined8 FUN_14d84ba3b(longlong param_1)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort uVar1;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000018;
  ushort local_res20;
  uint6 uStackX_22;
  longlong in_stack_00000028;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_RBX;
  uVar1 = (local_res20 | 0x100) - 0x100;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R14;
  *(undefined8 *)(in_stack_00000028 + -0x18) = 0xa614de;
  *(undefined8 *)(in_stack_00000028 + -0x20) = unaff_RBP;
  *(ulonglong *)(in_stack_00000028 + -0x28) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -8) = *(undefined8 *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x30) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x38) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 + -0x40) = unaff_R15;
  *(undefined1 **)(in_stack_00000028 + -0x30) = &LAB_14d84bae6;
  *(undefined1 **)(in_stack_00000028 + -0x38) = &LAB_156f04337;
  return in_stack_00000018;
}



// FUNCTION 14d84bc0d FUN_14d84bc0d body=144 status=ok
// SIG undefined FUN_14d84bc0d(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d84bc0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1564bad2c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d84bc9e FUN_14d84bc9e body=360 status=ok
// SIG undefined FUN_14d84bc9e(void)

/* WARNING: Removing unreachable block (ram,0x000165dd0b45) */
/* WARNING: Removing unreachable block (ram,0x000165dd091e) */
/* WARNING: Removing unreachable block (ram,0x000165dd0924) */
/* WARNING: Removing unreachable block (ram,0x000165dd0ae7) */
/* WARNING: Removing unreachable block (ram,0x000165dd0aec) */
/* WARNING: Removing unreachable block (ram,0x000160f31589) */
/* WARNING: Removing unreachable block (ram,0x000160f316aa) */
/* WARNING: Removing unreachable block (ram,0x000160f316b0) */
/* WARNING: Removing unreachable block (ram,0x00015b70531d) */
/* WARNING: Removing unreachable block (ram,0x000165dd0af8) */
/* WARNING: Removing unreachable block (ram,0x000165dd0b48) */
/* WARNING: Removing unreachable block (ram,0x000165dd0b7a) */
/* WARNING: Removing unreachable block (ram,0x000165dd0b7f) */
/* WARNING: Removing unreachable block (ram,0x000165dd0b85) */
/* WARNING: Removing unreachable block (ram,0x00015b168e13) */
/* WARNING: Removing unreachable block (ram,0x00015b168eab) */
/* WARNING: Removing unreachable block (ram,0x00015b168f9b) */
/* WARNING: Removing unreachable block (ram,0x00015b168eb0) */
/* WARNING: Removing unreachable block (ram,0x00015666a835) */
/* WARNING: Removing unreachable block (ram,0x00015b168eb6) */
/* WARNING: Removing unreachable block (ram,0x00015b168f55) */
/* WARNING: Removing unreachable block (ram,0x00015b168f5a) */
/* WARNING: Removing unreachable block (ram,0x00014d86321b) */
/* WARNING: Removing unreachable block (ram,0x00015b168f60) */
/* WARNING: Removing unreachable block (ram,0x00015b168f76) */
/* WARNING: Removing unreachable block (ram,0x00015b168fa4) */
/* WARNING: Removing unreachable block (ram,0x00015b168fd0) */
/* WARNING: Removing unreachable block (ram,0x00015b168f7b) */
/* WARNING: Removing unreachable block (ram,0x00015b168fd5) */
/* WARNING: Removing unreachable block (ram,0x00015b169065) */
/* WARNING: Removing unreachable block (ram,0x00015b16906b) */
/* WARNING: Removing unreachable block (ram,0x000164a70793) */
/* WARNING: Removing unreachable block (ram,0x000164c2d1d0) */
/* WARNING: Removing unreachable block (ram,0x000164c2d1d6) */
/* WARNING: Removing unreachable block (ram,0x00014d84bd15) */
/* WARNING: Removing unreachable block (ram,0x000165dd077b) */
/* WARNING: Removing unreachable block (ram,0x000165dd0919) */
/* WARNING: Removing unreachable block (ram,0x000156549990) */
/* WARNING: Removing unreachable block (ram,0x0001565499c1) */
/* WARNING: Removing unreachable block (ram,0x00014d84bd41) */

undefined8 FUN_14d84bc9e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165dd077b();
  return uVar1;
}



// FUNCTION 14d84bdcb FUN_14d84bdcb body=131 status=ok
// SIG undefined FUN_14d84bdcb(void)

undefined8
FUN_14d84bdcb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uStackX_8;
  
  *(ushort *)(&stack0xfffffffff3b1616b + in_RAX) =
       (*(ushort *)(&stack0xfffffffff3b1616b + in_RAX) | 0x100) - 0x100;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x18) = 0x388a2b8;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -0x18);
  *(undefined8 *)(param_5 + -0x10) = param_2;
  *(undefined8 *)(param_5 + -0x18) = param_2;
  *(undefined8 *)(param_5 + -0x20) = unaff_RDI;
  *(undefined8 *)(param_5 + -0x10) = 0x156ef2e25;
  return uStackX_8;
}



// FUNCTION 14d84be60 FUN_14d84be60 body=286 status=ok
// SIG undefined FUN_14d84be60(void)

/* WARNING: Removing unreachable block (ram,0x00014d84bf80) */

void FUN_14d84be60(longlong param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  byte bVar3;
  
  *(undefined1 *)(param_1 + param_3) = 0;
  bVar3 = ~param_4 | *(byte *)(param_1 + param_3);
  *(byte *)(param_1 + param_3) = ~*(byte *)(param_1 + param_3);
  *(byte *)(param_1 + param_3) = *(byte *)(param_1 + param_3) | param_4;
  bVar1 = *(byte *)(param_1 + param_3);
  cVar2 = *(char *)(param_1 + param_3);
  *(undefined1 *)(param_1 + param_3) = 0;
  *(byte *)(param_1 + param_3) = *(byte *)(param_1 + param_3) ^ ~((cVar2 - (bVar3 | bVar1)) + bVar3)
  ;
  FUN_156a5308d();
  if ((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0xa0)) + unaff_RBP == -2) {
    FUN_15714f193();
    return;
  }
  return;
}



// FUNCTION 14d84bf80 FUN_14d84bf80 body=123 status=ok
// SIG undefined FUN_14d84bf80(void)

void FUN_14d84bf80(void)

{
  FUN_1624989e3();
  return;
}



// FUNCTION 14d84bffc FUN_14d84bffc body=20 status=ok
// SIG undefined FUN_14d84bffc(void)

void FUN_14d84bffc(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14d84c21b FUN_14d84c21b body=177 status=ok
// SIG undefined FUN_14d84c21b(void)

void FUN_14d84c21b(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  FUN_165f49c02(param_1,param_2 ^ param_1,param_3);
  return;
}



// FUNCTION 14d84c336 FUN_14d84c336 body=254 status=ok
// SIG undefined FUN_14d84c336(void)

/* WARNING: Removing unreachable block (ram,0x000165984664) */
/* WARNING: Removing unreachable block (ram,0x00016598470b) */
/* WARNING: Removing unreachable block (ram,0x000165984710) */
/* WARNING: Removing unreachable block (ram,0x000165984716) */
/* WARNING: Removing unreachable block (ram,0x000165984721) */
/* WARNING: Removing unreachable block (ram,0x0001654058b2) */
/* WARNING: Removing unreachable block (ram,0x0001654058cd) */
/* WARNING: Removing unreachable block (ram,0x0001654058c6) */
/* WARNING: Removing unreachable block (ram,0x000160b59bc0) */
/* WARNING: Removing unreachable block (ram,0x000160b59bc6) */
/* WARNING: Removing unreachable block (ram,0x00015b3647c0) */
/* WARNING: Removing unreachable block (ram,0x00015b3f595e) */
/* WARNING: Removing unreachable block (ram,0x00014d84c435) */
/* WARNING: Removing unreachable block (ram,0x00015b36474d) */
/* WARNING: Removing unreachable block (ram,0x00015b3647ba) */
/* WARNING: Removing unreachable block (ram,0x000160b59b3f) */

undefined8 FUN_14d84c336(undefined8 param_1)

{
  undefined8 uVar1;
  longlong in_R10;
  uint unaff_R14D;
  uint in_stack_00000010;
  
  FUN_1656a2c4f();
  if (~(~in_stack_00000010 & ~unaff_R14D) + ~unaff_R14D < in_stack_00000010) {
    uVar1 = FUN_15b3f58ce();
    return uVar1;
  }
  if (in_R10 != 0) {
    uVar1 = FUN_162438e17(param_1);
    return uVar1;
  }
  uVar1 = FUN_15b3646b5();
  return uVar1;
}



// FUNCTION 14d84c435 FUN_14d84c435 body=91 status=ok
// SIG undefined FUN_14d84c435(void)

void FUN_14d84c435(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 unaff_R13;
  byte in_CF;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  puVar2 = (undefined8 *)((param_3 - local_res18) - (ulonglong)in_CF);
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,unaff_retaddr);
  *puVar2 = 0x2f011d4;
  *(undefined8 *)((longlong)puVar2 + -0x28c7) = unaff_R13;
  *(undefined8 *)((longlong)puVar2 + -0x28cf) = unaff_R13;
  *(undefined **)((longlong)puVar2 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d84c565 FUN_14d84c565 body=187 status=ok
// SIG undefined FUN_14d84c565(void)

void FUN_14d84c565(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  undefined8 auStack_10 [2];
  
  param_1 = param_1 - ~(~(param_2 & 0xffffffffeeb15d73) & (param_2 | 0xffffffffeeb15d73));
  puVar1 = (uint *)(&stack0x00000000 + param_1);
  *(longlong *)puVar1 = param_1;
  *puVar1 = 0x2aa2fa86;
  *puVar1 = *puVar1 ^ 0x2ee0cfe9;
  puVar1[1] = 0;
  uVar2 = *(undefined8 *)puVar1;
  *puVar1 = 0x4423567;
  puVar1[1] = 0;
  lVar3 = *(longlong *)puVar1;
  *(undefined8 *)puVar1 = uVar2;
  *(longlong *)puVar1 = *(longlong *)puVar1 - lVar3;
  lVar3 = *(longlong *)puVar1;
  *(undefined8 *)((longlong)puVar1 + lVar3) = unaff_RSI;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -8) = unaff_RSI;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -0x10) = unaff_RSI;
  *(code **)((longlong)puVar1 + lVar3) = FUN_14d84c622;
  *(undefined8 *)((longlong)puVar1 + lVar3 + -8) = 0x156ed84e8;
  return;
}



// FUNCTION 14d84c622 FUN_14d84c622 body=145 status=ok
// SIG undefined FUN_14d84c622(void)

void FUN_14d84c622(void)

{
  longlong unaff_RDI;
  ulonglong local_res8;
  
  FUN_15b2be185(local_res8,FUN_15b2be185,~local_res8,
                (~local_res8 + *(ulonglong *)(unaff_RDI + -0x50)) -
                (~local_res8 & *(ulonglong *)(unaff_RDI + -0x50)));
  return;
}



// FUNCTION 14d84c759 FUN_14d84c759 body=338 status=ok
// SIG undefined FUN_14d84c759(void)

/* WARNING: Instruction at (ram,0x000157267abe) overlaps instruction at (ram,0x000157267abd)
    */
/* WARNING: Removing unreachable block (ram,0x000157267a5a) */
/* WARNING: Removing unreachable block (ram,0x00014d84c85e) */
/* WARNING: Removing unreachable block (ram,0x000157267abb) */
/* WARNING: Removing unreachable block (ram,0x00014d84c812) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d84c759(longlong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x78) ^ unaff_R15;
  if (-1 < (longlong)uVar1) {
    FUN_165a1ce9e(uVar1,*(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x28) ^ unaff_R15,
                  param_1 - unaff_RDI);
    return;
  }
  FUN_157267a47();
  return;
}



// FUNCTION 14d84cb67 FUN_14d84cb67 body=286 status=ok
// SIG undefined FUN_14d84cb67(void)

undefined8 FUN_14d84cb67(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong unaff_RBX;
  ulonglong in_R9;
  longlong unaff_R13;
  longlong lVar3;
  ulonglong unaff_R15;
  
  lVar3 = -(~(unaff_RBX - 0x503cU) + 2);
  *(undefined8 *)(lVar3 + 0x503d) = in_RAX;
  *(undefined4 *)(lVar3 + 0x503d) = 0x7ffe0000;
  *(undefined4 *)(lVar3 + 0x5041) = 0;
  uVar2 = 0xfffffffffbc75518;
  *(undefined8 *)(lVar3 + 0x503d) = 0x14d84cc05;
  FUN_14dff1b51();
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  *(undefined8 *)(lVar3 + 0x503d) = uVar2;
  *(ulonglong *)(lVar3 + 0x503d) = uVar1 ^ unaff_R15;
  *(ulonglong *)(lVar3 + 0x5035) = in_R9 & 0xffffffff;
  uVar2 = *(undefined8 *)(unaff_R13 + -0x48);
  *(undefined8 *)(lVar3 + 0x502d) = 0x165c1c07a;
  return uVar2;
}



// FUNCTION 14d84ccdf FUN_14d84ccdf body=18 status=ok
// SIG undefined FUN_14d84ccdf(void)

void FUN_14d84ccdf(void)

{
  return;
}



// FUNCTION 14d84cd25 FUN_14d84cd25 body=181 status=ok
// SIG undefined FUN_14d84cd25(void)

longlong FUN_14d84cd25(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14d84cf23 FUN_14d84cf23 body=479 status=ok
// SIG undefined FUN_14d84cf23(void)

/* WARNING: Instruction at (ram,0x00014ddca778) overlaps instruction at (ram,0x00014ddca776)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84cfcc) */
/* WARNING: Removing unreachable block (ram,0x00014d84cfd2) */
/* WARNING: Removing unreachable block (ram,0x00014d84cfe3) */
/* WARNING: Removing unreachable block (ram,0x00014d84d064) */
/* WARNING: Removing unreachable block (ram,0x00014d84d070) */
/* WARNING: Removing unreachable block (ram,0x00014ddca6eb) */
/* WARNING: Removing unreachable block (ram,0x00014ddca6f5) */
/* WARNING: Removing unreachable block (ram,0x00014ddca744) */
/* WARNING: Removing unreachable block (ram,0x00014ddca747) */
/* WARNING: Removing unreachable block (ram,0x00014ddca76e) */
/* WARNING: Removing unreachable block (ram,0x00014d84cf94) */
/* WARNING: Removing unreachable block (ram,0x00014ddca773) */
/* WARNING: Removing unreachable block (ram,0x00014ddca776) */

void FUN_14d84cf23(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165862278(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                ~*(ulonglong *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d84d076 FUN_14d84d076 body=69 status=ok
// SIG undefined FUN_14d84d076(void)

/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_14d84d076(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  byte *pbVar4;
  char *pcVar5;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  char in_AF;
  undefined1 auStackX_10 [24];
  
  if (unaff_R13 != 0) {
    *(undefined1 *)(unaff_RBP + -0x77) = *(undefined1 *)(unaff_RBP + -0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4 = (byte *)(param_2 & 0xffffffff);
  puVar1 = (uint *)(unaff_RBX * 8 + 0x10b97011);
  *puVar1 = ~*puVar1;
  bVar3 = (byte)pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  out(0x42,bVar3);
  if (param_1 != 1) {
    bVar2 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar3;
    pcVar5 = (char *)CONCAT62((int6)((ulonglong)pbVar4 >> 0x10),
                              CONCAT11(((char)*pbVar4 < '\0') << 7 | (*pbVar4 == 0) << 6 |
                                       in_AF << 4 | ((POPCOUNT(*pbVar4) & 1U) == 0) << 2 | 2U |
                                       CARRY1(bVar2,bVar3),bVar3));
    LOCK();
    *(int *)(ulonglong)in_EAX = (int)auStackX_10;
    UNLOCK();
    *(uint *)(unaff_RSI + 0x55a87a2e) =
         *(uint *)(unaff_RSI + 0x55a87a2e) ^
         (uint)CONCAT71((int7)((ulonglong)pcVar5 >> 8),bVar3 - *pcVar5);
    return unaff_RBX & 0xffffffff;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d84d0d6 FUN_14d84d0d6 body=69 status=ok
// SIG undefined FUN_14d84d0d6(void)

void FUN_14d84d0d6(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1570fbfb4(param_1,param_2,thunk_FUN_1570fbfb4);
  return;
}



// FUNCTION 14d84d1d0 FUN_14d84d1d0 body=145 status=ok
// SIG undefined FUN_14d84d1d0(void)

void FUN_14d84d1d0(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = ~(unaff_RBP ^ 0xffffffffffffffff);
  (*(code *)0x165169536)
            (0x165169536,unaff_RBP ^ 0xffffffffffffffff,
             (~*(ulonglong *)(unaff_RSI + -0x70) - (uVar1 | ~*(ulonglong *)(unaff_RSI + -0x70))) +
             uVar1,unaff_RBX - (param_4 << ((param_1 ^ 0xfc) & 0x3f)));
  return;
}



// FUNCTION 14d84d424 FUN_14d84d424 body=141 status=ok
// SIG undefined FUN_14d84d424(void)

void FUN_14d84d424(void)

{
  return;
}



// FUNCTION 14d84d4b1 FUN_14d84d4b1 body=179 status=ok
// SIG undefined FUN_14d84d4b1(void)

void FUN_14d84d4b1(void)

{
  return;
}



// FUNCTION 14d84d7ee FUN_14d84d7ee body=137 status=ok
// SIG undefined FUN_14d84d7ee(void)

void FUN_14d84d7ee(ulonglong param_1)

{
  ulonglong uVar1;
  longlong in_stack_00000008;
  undefined8 local_res20;
  
  uVar1 = ~param_1 & ~local_res20 | param_1;
  FUN_156c69aab(-~(~param_1 | local_res20) - (~(uVar1 - (~param_1 | local_res20 | uVar1)) + 2),
                -in_stack_00000008);
  return;
}



// FUNCTION 14d84dabe FUN_14d84dabe body=146 status=ok
// SIG undefined FUN_14d84dabe(void)

/* WARNING: Removing unreachable block (ram,0x00014d84db52) */

void FUN_14d84dabe(void)

{
  ulonglong unaff_RBP;
  longlong unaff_retaddr;
  
  if ((~unaff_RBP | *(ulonglong *)(unaff_retaddr + -0x40)) + unaff_RBP == -1) {
    FUN_157187b7f(~(*(ulonglong *)(unaff_retaddr + -0x38) & unaff_RBP) &
                  (*(ulonglong *)(unaff_retaddr + -0x38) | unaff_RBP),FUN_157187b7f);
    return;
  }
  FUN_162f6420b();
  return;
}



// FUNCTION 14d84db52 FUN_14d84db52 body=154 status=ok
// SIG undefined FUN_14d84db52(void)

void FUN_14d84db52(void)

{
  return;
}



// FUNCTION 14d84dc9d thunk_FUN_14d84dca3 body=5 status=ok
// SIG undefined thunk_FUN_14d84dca3(void)

/* WARNING: Instruction at (ram,0x00014d84dd33) overlaps instruction at (ram,0x00014d84dd32)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84dd99) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd1d) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd33) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd32) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd3a) */

undefined8 thunk_FUN_14d84dca3(void)

{
  undefined8 uVar1;
  undefined2 unaff_BP;
  undefined6 unaff_0000002a;
  longlong unaff_RSI;
  
  uVar1 = FUN_161d8ea20(*(ulonglong *)(unaff_RSI + -0x38) ^ CONCAT62(unaff_0000002a,unaff_BP),
                        *(ulonglong *)(unaff_RSI + -0x58) ^ CONCAT62(unaff_0000002a,unaff_BP));
  return uVar1;
}



// FUNCTION 14d84dca3 FUN_14d84dca3 body=405 status=ok
// SIG undefined FUN_14d84dca3(void)

/* WARNING: Instruction at (ram,0x00014d84dd33) overlaps instruction at (ram,0x00014d84dd32)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84dd99) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd1d) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd33) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd32) */
/* WARNING: Removing unreachable block (ram,0x00014d84dd3a) */

undefined8 FUN_14d84dca3(void)

{
  undefined8 uVar1;
  undefined2 unaff_BP;
  undefined6 unaff_0000002a;
  longlong unaff_RSI;
  
  uVar1 = FUN_161d8ea20(*(ulonglong *)(unaff_RSI + -0x38) ^ CONCAT62(unaff_0000002a,unaff_BP),
                        *(ulonglong *)(unaff_RSI + -0x58) ^ CONCAT62(unaff_0000002a,unaff_BP));
  return uVar1;
}



// FUNCTION 14d84ddc4 FUN_14d84ddc4 body=364 status=ok
// SIG undefined FUN_14d84ddc4(void)

/* WARNING: Removing unreachable block (ram,0x00014d84de78) */
/* WARNING: Removing unreachable block (ram,0x00014d84de68) */

void FUN_14d84ddc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156bb250d(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d84df33 FUN_14d84df33 body=114 status=ok
// SIG undefined FUN_14d84df33(void)

void FUN_14d84df33(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_1660186a0(thunk_FUN_1660186a0,param_2,
                      (~*(ulonglong *)(unaff_R13 + -0x50) | ~unaff_R15) + unaff_R15);
  return;
}



// FUNCTION 14d84e049 FUN_14d84e049 body=4 status=ok
// SIG undefined FUN_14d84e049(void)

void FUN_14d84e049(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
                    /* WARNING: Could not recover jumptable at 0x00014d84e04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d84e0e0 FUN_14d84e0e0 body=473 status=ok
// SIG undefined FUN_14d84e0e0(void)

/* WARNING: Removing unreachable block (ram,0x000165e1fd46) */
/* WARNING: Removing unreachable block (ram,0x00016292c4eb) */
/* WARNING: Removing unreachable block (ram,0x00016292c4f1) */
/* WARNING: Removing unreachable block (ram,0x00014d84e16d) */
/* WARNING: Removing unreachable block (ram,0x00014d84e173) */
/* WARNING: Removing unreachable block (ram,0x00016292c490) */

void FUN_14d84e0e0(void)

{
  FUN_165e1fd46();
  return;
}



// FUNCTION 14d84e173 FUN_14d84e173 body=145 status=ok
// SIG undefined FUN_14d84e173(void)

void FUN_14d84e173(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_10;
  
  FUN_165c5a235(param_1,param_2,uStackX_10,param_4);
  return;
}



// FUNCTION 14d84e205 FUN_14d84e205 body=41 status=ok
// SIG undefined FUN_14d84e205(void)

void FUN_14d84e205(void)

{
  return;
}



// FUNCTION 14d84e2aa FUN_14d84e2aa body=830 status=ok
// SIG undefined FUN_14d84e2aa(void)

/* WARNING: Removing unreachable block (ram,0x00014d84e3eb) */
/* WARNING: Removing unreachable block (ram,0x00014d84e3f1) */
/* WARNING: Removing unreachable block (ram,0x00014d84e35c) */
/* WARNING: Removing unreachable block (ram,0x00014d84e367) */
/* WARNING: Removing unreachable block (ram,0x0001574c3f00) */
/* WARNING: Removing unreachable block (ram,0x00014d84e362) */
/* WARNING: Removing unreachable block (ram,0x00016101f5bd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d84e2aa(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x30);
}



// FUNCTION 14d84e826 FUN_14d84e826 body=171 status=ok
// SIG undefined FUN_14d84e826(void)

ulonglong FUN_14d84e826(void)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  return in_RAX ^ unaff_R15;
}



// FUNCTION 14d84ea19 FUN_14d84ea19 body=306 status=ok
// SIG undefined FUN_14d84ea19(void)

/* WARNING: Removing unreachable block (ram,0x00014d84ea88) */

void FUN_14d84ea19(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R15;
  
  uVar1 = param_1;
  FUN_1616ad677(param_1,param_1,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,~param_3);
  FUN_1666bea1b(-1 - (~((~uVar1 | param_1) + uVar1 + 1) & (0xffffffffffffffffU - in_R11 | unaff_R15)
                     ));
  return;
}



// FUNCTION 14d84ec7e FUN_14d84ec7e body=163 status=ok
// SIG undefined FUN_14d84ec7e(void)

/* WARNING: Removing unreachable block (ram,0x00014d84ece5) */

void FUN_14d84ec7e(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0x10bf8492;
  FUN_165a40088(0x10bf8492,0xffffffffa04aaf4e,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                 (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  FUN_16250def5(~(uVar1 & unaff_R15) & unaff_RBP,
                ~((~uVar2 | 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) +
                  uVar2 + 1));
  return;
}



// FUNCTION 14d84ed21 FUN_14d84ed21 body=328 status=ok
// SIG undefined FUN_14d84ed21(void)

void FUN_14d84ed21(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15;
  FUN_16250def5(~(param_1 & unaff_R15) & unaff_RBP,
                ~((~uVar1 | 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) +
                  uVar1 + 1));
  return;
}



// FUNCTION 14d84ef7e FUN_14d84ef7e body=421 status=ok
// SIG undefined FUN_14d84ef7e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000165798e94) */
/* WARNING: Removing unreachable block (ram,0x00015b2eff98) */
/* WARNING: Removing unreachable block (ram,0x00015b2effa1) */
/* WARNING: Removing unreachable block (ram,0x00015b2effa6) */
/* WARNING: Removing unreachable block (ram,0x00014d84f00b) */
/* WARNING: Removing unreachable block (ram,0x00014d84f011) */
/* WARNING: Removing unreachable block (ram,0x00014d84f0b4) */
/* WARNING: Removing unreachable block (ram,0x00014d84f0c0) */
/* WARNING: Removing unreachable block (ram,0x00014d84f0c5) */
/* WARNING: Removing unreachable block (ram,0x000165798e03) */
/* WARNING: Removing unreachable block (ram,0x000165798e8f) */
/* WARNING: Removing unreachable block (ram,0x000165798e9a) */

void FUN_14d84ef7e(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 *puVar3;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
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
  ulonglong local_res8;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  undefined8 *puStack0000000000000030;
  
  puVar3 = (undefined8 *)
           (param_4 - *(longlong *)(&stack0xfffffffffbf911f0 + (param_1 ^ local_res8 ^ 0x5dbcf13f)))
  ;
  bVar12 = (param_5 & 0x4000) != 0;
  bVar11 = (param_5 & 0x800) != 0;
  bVar10 = (param_5 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (param_5 & 0x80) != 0;
  bVar7 = (param_5 & 0x40) != 0;
  bVar6 = (param_5 & 0x10) != 0;
  bVar5 = (param_5 & 4) != 0;
  bVar4 = (param_5 & 1) != 0;
  bVar16 = (param_5 & 0x200000) != 0;
  bVar13 = (param_5 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  puStack0000000000000030 = puVar3;
  (*pcVar1)(local_res20,in_stack_00000010);
  *puVar3 = local_res20;
  puVar3[-1] = local_res20;
  puVar3[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar3[-2];
  puVar3[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar3[-3] = unaff_R12;
  puVar3[-4] = unaff_RBX;
  uVar17 = puVar3[-2];
  puVar3[-2] = unaff_R13;
  puVar3[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(puVar3 + -4) = 0x92a9b51e;
  *(undefined4 *)((longlong)puVar3 + -0x1c) = 0xffffffff;
  lVar2 = puVar3[-4];
  puVar3[-4] = unaff_RSI;
  puVar3[-5] = unaff_RDI;
  *(undefined8 *)((longlong)puVar3 + lVar2 + 0x6d564ae2) = 0x3a0737c;
  FUN_165c7153c(puVar3[-1]);
  return;
}



// FUNCTION 14d84f1de FUN_14d84f1de body=79 status=ok
// SIG undefined FUN_14d84f1de(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d84f227) overlaps instruction at (ram,0x00014d84f226)
    */
/* WARNING: Removing unreachable block (ram,0x00014d84f3b6) */
/* WARNING: Removing unreachable block (ram,0x00014d84f3bc) */
/* WARNING: Removing unreachable block (ram,0x00015b719e8c) */
/* WARNING: Removing unreachable block (ram,0x00015b719e92) */
/* WARNING: Removing unreachable block (ram,0x00014d84f313) */
/* WARNING: Removing unreachable block (ram,0x00014d84f31f) */
/* WARNING: Removing unreachable block (ram,0x000165121527) */
/* WARNING: Removing unreachable block (ram,0x000165121532) */
/* WARNING: Removing unreachable block (ram,0x00016512152d) */
/* WARNING: Removing unreachable block (ram,0x00016507bc89) */
/* WARNING: Removing unreachable block (ram,0x00014d84f27c) */
/* WARNING: Removing unreachable block (ram,0x00015b719e00) */
/* WARNING: Removing unreachable block (ram,0x00014d84f26f) */
/* WARNING: Removing unreachable block (ram,0x00014d84f226) */

void FUN_14d84f1de(uint param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint unaff_ESI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong uStackX_20;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x161017b78)(param_1 & ~unaff_ESI,param_2);
  uVar1 = ~(uStackX_20 & unaff_R15) &
          (*(ulonglong *)(&stack0x00000008 + unaff_R12) + unaff_R15) -
          (*(ulonglong *)(&stack0x00000008 + unaff_R12) & unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 0x10) = 0x1651cb1d5;
  FUN_161ae1d64();
  FUN_1651cb1db();
  return;
}



// FUNCTION 14d84f586 FUN_14d84f586 body=151 status=ok
// SIG undefined FUN_14d84f586(void)

void FUN_14d84f586(void)

{
  return;
}



// FUNCTION 14d84f7ed FUN_14d84f7ed body=186 status=ok
// SIG undefined FUN_14d84f7ed(void)

void FUN_14d84f7ed(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong in_R10;
  
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ((~param_3 | ~param_1) + param_1) - *(longlong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = ~(in_R10 & *(ulonglong *)(param_2 + 8));
  return;
}



// FUNCTION 14d84f9cd FUN_14d84f9cd body=187 status=ok
// SIG undefined FUN_14d84f9cd(void)

/* WARNING: Removing unreachable block (ram,0x00014d84fa8f) */

void FUN_14d84f9cd(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  if (0xffffffffffffd87a < unaff_RDI - 0x7d26U) {
    FUN_16142e397(param_1,param_2,unaff_retaddr);
    return;
  }
  return;
}



// FUNCTION 14d84fa8f FUN_14d84fa8f body=3 status=ok
// SIG undefined FUN_14d84fa8f(void)

void FUN_14d84fa8f(void)

{
  return;
}



// FUNCTION 14d84fb5e FUN_14d84fb5e body=104 status=ok
// SIG undefined FUN_14d84fb5e(void)

/* WARNING: Removing unreachable block (ram,0x00014d84fbc6) */
/* WARNING: Removing unreachable block (ram,0x00015738b254) */

void FUN_14d84fb5e(void)

{
  longlong in_R9;
  
  if (in_R9 == 0x11ad7d) {
    FUN_165e93f27();
    return;
  }
  if (in_R9 == 0x11ad7e) {
    thunk_FUN_165e93f27();
    return;
  }
  FUN_15738b26e();
  return;
}



// FUNCTION 14d84fbc6 FUN_14d84fbc6 body=160 status=ok
// SIG undefined FUN_14d84fbc6(void)

void FUN_14d84fbc6(longlong param_1)

{
  FUN_1656904c7(*(undefined8 *)(param_1 + 0x20),FUN_1656904c7);
  return;
}



// FUNCTION 14d84fefe FUN_14d84fefe body=316 status=ok
// SIG undefined FUN_14d84fefe(void)

/* WARNING: Removing unreachable block (ram,0x00014d84ff99) */

void FUN_14d84fefe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000010;
  undefined8 local_res18;
  
  if (param_1 + in_stack_00000010 * -2 != 0) {
    FUN_165c82abf(local_res18,param_2,unaff_R15);
    return;
  }
  FUN_1568ccfe6(local_res8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d850043 FUN_14d850043 body=94 status=ok
// SIG undefined FUN_14d850043(void)

void FUN_14d850043(void)

{
  return;
}



// FUNCTION 14d8501d7 FUN_14d8501d7 body=717 status=ok
// SIG undefined FUN_14d8501d7(void)

/* WARNING: Removing unreachable block (ram,0x000156ab16ea) */
/* WARNING: Removing unreachable block (ram,0x000156ab16f5) */
/* WARNING: Removing unreachable block (ram,0x00014d850456) */
/* WARNING: Removing unreachable block (ram,0x00014d850461) */
/* WARNING: Removing unreachable block (ram,0x00014d85047d) */
/* WARNING: Removing unreachable block (ram,0x00014d85045c) */
/* WARNING: Removing unreachable block (ram,0x000156ab16f0) */
/* WARNING: Removing unreachable block (ram,0x00014d85030a) */
/* WARNING: Removing unreachable block (ram,0x00014d8503aa) */
/* WARNING: Removing unreachable block (ram,0x00014d8503af) */
/* WARNING: Removing unreachable block (ram,0x000156ab1647) */
/* WARNING: Removing unreachable block (ram,0x00014d85026a) */
/* WARNING: Removing unreachable block (ram,0x00014d850304) */
/* WARNING: Removing unreachable block (ram,0x000156f8e430) */
/* WARNING: Removing unreachable block (ram,0x000156f8e4b1) */
/* WARNING: Removing unreachable block (ram,0x000156f8e4b6) */
/* WARNING: Removing unreachable block (ram,0x0001572f89f9) */
/* WARNING: Removing unreachable block (ram,0x000156f8e4bc) */
/* WARNING: Removing unreachable block (ram,0x00014d8503b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8501d7(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x88) ^ param_1)) {
    uVar1 = (*(code *)0x15afb5129)
                      (param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_14d863b66();
  return uVar1;
}



// FUNCTION 14d850509 FUN_14d850509 body=128 status=ok
// SIG undefined FUN_14d850509(void)

void FUN_14d850509(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14e00da3f(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14d85058a FUN_14d85058a body=12 status=ok
// SIG undefined FUN_14d85058a(void)

void FUN_14d85058a(void)

{
  FUN_15751fa1b();
  return;
}



// FUNCTION 14d8506c4 FUN_14d8506c4 body=146 status=ok
// SIG undefined FUN_14d8506c4(void)

void FUN_14d8506c4(void)

{
  ushort uVar1;
  undefined8 unaff_R12;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar1 = ~(((local_res8 ^ 0xffff) + 0x100) - ((local_res8 ^ 0xffff) & 0x100));
  *(void ***)(local_res10 + -8) = &ExceptionList;
  *(void ***)(local_res10 + -0x10) = &ExceptionList;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = 0x962c551;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x7d4f279;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -8) = 0x18dd2d8;
  FUN_165f53004(FUN_165f53004);
  return;
}



// FUNCTION 14d850758 FUN_14d850758 body=463 status=ok
// SIG undefined FUN_14d850758(void)

/* WARNING: Removing unreachable block (ram,0x00014d850873) */
/* WARNING: Removing unreachable block (ram,0x00014d85087e) */
/* WARNING: Removing unreachable block (ram,0x00014d8507ee) */
/* WARNING: Removing unreachable block (ram,0x00014d8507f4) */
/* WARNING: Removing unreachable block (ram,0x000166cc885e) */
/* WARNING: Removing unreachable block (ram,0x00014d850879) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d850758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  ulonglong local_res18;
  ulonglong local_res20;
  
  local_res18 = (-local_res18 - unaff_R15) + (local_res18 | unaff_R15) * 2;
  local_res20 = ((local_res20 | unaff_R15) - (~(local_res20 & unaff_R15) | local_res20 | unaff_R15))
                + ~(local_res20 & unaff_R15);
  FUN_16500280e(param_1,param_2,param_3,&local_res18);
  return;
}



// FUNCTION 14d85087e FUN_14d85087e body=155 status=ok
// SIG undefined FUN_14d85087e(void)

void FUN_14d85087e(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  FUN_165441259(~((~unaff_R15 | local_res20) & ~(~(0xffffffffffffffff - local_res20) & ~unaff_R15)),
                param_2);
  return;
}



// FUNCTION 14d8509bd thunk_FUN_14d8509c3 body=5 status=ok
// SIG undefined thunk_FUN_14d8509c3(void)

/* WARNING: Removing unreachable block (ram,0x0001649bf7f3) */
/* WARNING: Removing unreachable block (ram,0x00014d850a53) */

void thunk_FUN_14d8509c3(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RSI + -0x60);
  uVar1 = ~(uVar2 | unaff_RBP);
  uVar2 = (uVar1 ^ 0xffffffffffffffff) & (unaff_RBP - (uVar2 | unaff_RBP)) + uVar2;
  uVar2 = (uVar2 + uVar1) - (uVar2 & uVar1);
  if (-1 < (longlong)uVar2) {
    FUN_1649bf7d3();
    return;
  }
  FUN_162bb255c(0xab7bf606,0x2943367a,~uVar2,unaff_retaddr);
  return;
}



// FUNCTION 14d8509c3 FUN_14d8509c3 body=149 status=ok
// SIG undefined FUN_14d8509c3(void)

/* WARNING: Removing unreachable block (ram,0x0001649bf7f3) */
/* WARNING: Removing unreachable block (ram,0x00014d850a53) */

void FUN_14d8509c3(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RSI + -0x60);
  uVar1 = ~(uVar2 | unaff_RBP);
  uVar2 = (uVar1 ^ 0xffffffffffffffff) & (unaff_RBP - (uVar2 | unaff_RBP)) + uVar2;
  uVar2 = (uVar2 + uVar1) - (uVar2 & uVar1);
  if (-1 < (longlong)uVar2) {
    FUN_1649bf7d3();
    return;
  }
  FUN_162bb255c(0xab7bf606,0x2943367a,~uVar2,unaff_retaddr);
  return;
}



// FUNCTION 14d850a59 FUN_14d850a59 body=317 status=ok
// SIG undefined FUN_14d850a59(void)

/* WARNING: Removing unreachable block (ram,0x0001667cf6f3) */
/* WARNING: Removing unreachable block (ram,0x0001667cf6f9) */
/* WARNING: Removing unreachable block (ram,0x0001667cf6fe) */

void FUN_14d850a59(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = ~(~uVar1 & unaff_R15) + unaff_R15;
  if ((uVar2 < uVar1) && (uVar1 < uVar2)) {
    FUN_15735f24a(~(unaff_R15 & ~uVar1),~param_2 + 1 + unaff_RBP + unaff_RBX,FUN_15735f24a);
    return;
  }
  return;
}



// FUNCTION 14d850bac FUN_14d850bac body=136 status=ok
// SIG undefined FUN_14d850bac(void)

/* WARNING: Removing unreachable block (ram,0x00014d850cc9) */
/* WARNING: Removing unreachable block (ram,0x00014d850ccf) */
/* WARNING: Removing unreachable block (ram,0x0001564be82e) */

void FUN_14d850bac(void)

{
  FUN_15b1ec1cb();
  FUN_1564be82e();
  return;
}



// FUNCTION 14d850c34 FUN_14d850c34 body=282 status=ok
// SIG undefined FUN_14d850c34(void)

/* WARNING: Removing unreachable block (ram,0x00014d850cc9) */
/* WARNING: Removing unreachable block (ram,0x00014d850ccf) */
/* WARNING: Removing unreachable block (ram,0x0001564be82e) */

void FUN_14d850c34(void)

{
  FUN_1564be82e();
  return;
}



// FUNCTION 14d850d58 FUN_14d850d58 body=201 status=ok
// SIG undefined FUN_14d850d58(void)

/* WARNING: Removing unreachable block (ram,0x00014d850df5) */

void FUN_14d850d58(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong *unaff_RDI;
  undefined8 in_stack_00000010;
  undefined1 local_res18 [16];
  
  uVar1 = *unaff_RDI;
  *unaff_RDI = ~*unaff_RDI;
  *unaff_RDI = (in_RAX ^ 0xffffffffffffffff) & *unaff_RDI | in_RAX;
  *unaff_RDI = ~((~in_RAX | uVar1) & *unaff_RDI);
  if (-1 < param_2) {
    FUN_162c290e7(param_1,local_res18,in_stack_00000010);
    return;
  }
  return;
}



// FUNCTION 14d850f03 FUN_14d850f03 body=75 status=ok
// SIG undefined FUN_14d850f03(void)

/* WARNING: Removing unreachable block (ram,0x00014d850f27) */

void FUN_14d850f03(void)

{
  return;
}



// FUNCTION 14d851207 FUN_14d851207 body=188 status=ok
// SIG undefined FUN_14d851207(void)

void FUN_14d851207(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar1 = ~(param_2 & param_1);
  uVar2 = 0xffffffffffffffd8;
  local_8 = (ulonglong)param_5;
  if ((int)param_5 < 0) {
    uVar1 = 4;
    uVar2 = 0xffffffff;
    local_8 = CONCAT44(0xffffffff,param_5);
  }
  FUN_1658f8da3(local_8,uVar1,uVar2,*(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14d851367 FUN_14d851367 body=93 status=ok
// SIG undefined FUN_14d851367(void)

void FUN_14d851367(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong local_res8;
  undefined8 local_res10;
  
  if (param_4 != (local_res8 ^ 0x794e731a)) {
    return;
  }
  FUN_165e93f27(param_1,local_res10,param_3,&DAT_14d7ad6dd);
  return;
}



// FUNCTION 14d851483 FUN_14d851483 body=71 status=ok
// SIG undefined FUN_14d851483(void)

/* WARNING: Removing unreachable block (ram,0x00014d8514ca) */

void FUN_14d851483(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  
  if (-1 < *(longlong *)(unaff_R13 + -0x80)) {
    FUN_1667445c3();
    return;
  }
  uVar1 = ~((*(ulonglong *)(unaff_R13 + -0x60) | 0x1fd1839d98de3b3b) &
           (*(ulonglong *)(unaff_R13 + -0x60) ^ 0xffffffffffffffff | 0xe02e7c626721c4c4));
  FUN_161031556(uVar1,*(ulonglong *)(unaff_R13 + -0x88) | 0xe02e7c626721c4c4,
                ~(~*(ulonglong *)(unaff_R13 + -0x88) | 0x1fd1839d98de3b3b),uVar1);
  return;
}



// FUNCTION 14d8514ca FUN_14d8514ca body=165 status=ok
// SIG undefined FUN_14d8514ca(void)

void FUN_14d8514ca(void)

{
  ulonglong uVar1;
  code *pcVar2;
  
  pcVar2 = FUN_157862860;
  uVar1 = FUN_157862860();
  FUN_1610c2d52(FUN_1610c2d52,-(longlong)pcVar2 ^ uVar1);
  return;
}



// FUNCTION 14d851570 FUN_14d851570 body=171 status=ok
// SIG undefined FUN_14d851570(void)

void FUN_14d851570(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  FUN_1610c2d52(FUN_1610c2d52,-param_2 ^ in_RAX);
  return;
}



// FUNCTION 14d85161c FUN_14d85161c body=244 status=ok
// SIG undefined FUN_14d85161c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8517e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8517ed) */
/* WARNING: Removing unreachable block (ram,0x000165d3de71) */
/* WARNING: Removing unreachable block (ram,0x00014d8516c6) */
/* WARNING: Removing unreachable block (ram,0x00014d851713) */
/* WARNING: Removing unreachable block (ram,0x00014d851731) */
/* WARNING: Removing unreachable block (ram,0x00014d851736) */
/* WARNING: Removing unreachable block (ram,0x00014d85173c) */
/* WARNING: Removing unreachable block (ram,0x00014d851741) */
/* WARNING: Removing unreachable block (ram,0x00014da278a9) */
/* WARNING: Removing unreachable block (ram,0x00014da27937) */
/* WARNING: Removing unreachable block (ram,0x00014da27942) */
/* WARNING: Removing unreachable block (ram,0x000165821836) */
/* WARNING: Removing unreachable block (ram,0x000165d3de66) */
/* WARNING: Removing unreachable block (ram,0x000165d3de6c) */
/* WARNING: Removing unreachable block (ram,0x00014da27948) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d85161c(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_R12;
  undefined8 local_res8;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x70);
  if (((~local_res8 + uVar1) - (~local_res8 & uVar1) & (~uVar1 | local_res8)) == 0) {
    uVar2 = FUN_14da91771();
    return uVar2;
  }
  uVar2 = FUN_14da91771();
  return uVar2;
}



// FUNCTION 14d851741 FUN_14d851741 body=331 status=ok
// SIG undefined FUN_14d851741(void)

/* WARNING: Removing unreachable block (ram,0x00014d8517e7) */
/* WARNING: Removing unreachable block (ram,0x00014d8517ed) */
/* WARNING: Removing unreachable block (ram,0x00014da27948) */
/* WARNING: Removing unreachable block (ram,0x000165d3de71) */

undefined8 FUN_14d851741(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong uVar4;
  ulonglong unaff_R15;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  FUN_160cda8d4(param_1);
  uVar2 = *(ulonglong *)(uVar4 - 0x40) | 0x1fd1839d98de3b3b;
  uVar3 = 0xffffffffffffffff - *(ulonglong *)(uVar4 - 0x40) | 0xe02e7c626721c4c4;
  if (~(~uVar3 & uVar2) + uVar2 < uVar3) {
    uVar1 = FUN_14da278a9();
    return uVar1;
  }
  uVar2 = *(ulonglong *)(uVar4 - 0x90);
  if ((longlong)
      (&DAT_e02e7c626721c4c4 +
      (uVar2 - (longlong)(&DAT_e02e7c626721c4c4 + (~(uVar2 & 0xe02e7c626721c4c4) - ~uVar2)))) < 0) {
    uVar1 = FUN_165821836();
    return uVar1;
  }
  uVar2 = ~((*(ulonglong *)(uVar4 - 0x88) | 0x1fd1839d98de3b3b) &
           (~*(ulonglong *)(uVar4 - 0x88) | 0xe02e7c626721c4c4));
  uVar1 = FUN_1620b88a9(FUN_1620b88a9,uVar2,uVar2,*(ulonglong *)(uVar4 - 0x60) ^ 0xe02e7c626721c4c4)
  ;
  return uVar1;
}



// FUNCTION 14d8517ed FUN_14d8517ed body=203 status=ok
// SIG undefined FUN_14d8517ed(void)

void FUN_14d8517ed(void)

{
  return;
}



// FUNCTION 14d8518b9 FUN_14d8518b9 body=150 status=ok
// SIG undefined FUN_14d8518b9(void)

void FUN_14d8518b9(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 unaff_retaddr;
  
  FUN_156bf7318(CONCAT44(param_3,unaff_retaddr),param_2);
  return;
}



// FUNCTION 14d851ab9 FUN_14d851ab9 body=589 status=ok
// SIG undefined FUN_14d851ab9(void)

/* WARNING: Removing unreachable block (ram,0x00014d851af3) */
/* WARNING: Removing unreachable block (ram,0x00014d851b56) */
/* WARNING: Removing unreachable block (ram,0x00014d851be5) */
/* WARNING: Removing unreachable block (ram,0x000162cd62c4) */
/* WARNING: Removing unreachable block (ram,0x000162cd63b9) */
/* WARNING: Removing unreachable block (ram,0x000162cd63b4) */
/* WARNING: Removing unreachable block (ram,0x000162cd63c4) */
/* WARNING: Removing unreachable block (ram,0x00014d851beb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d851ab9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 in_R11;
  ulonglong uVar2;
  undefined8 unaff_R12;
  ulonglong uVar3;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined8 in_stack_00000018;
  undefined8 uStackX_20;
  
  if (CARRY2(0xfeff - ((ushort)param_6 | 0xfeff),(ushort)param_6)) {
    bVar13 = (param_6 & 0x4000) != 0;
    bVar12 = (param_6 & 0x800) != 0;
    bVar11 = (param_6 & 0x400) != 0;
    bVar10 = (param_6 & 0x200) != 0;
    bVar9 = (param_6 & 0x100) != 0;
    bVar8 = (param_6 & 0x80) != 0;
    bVar7 = (param_6 & 0x40) != 0;
    bVar6 = (param_6 & 0x10) != 0;
    bVar5 = (param_6 & 4) != 0;
    bVar4 = (param_6 & 1) != 0;
    bVar15 = (param_6 & 0x200000) != 0;
    bVar14 = (param_6 & 0x40000) != 0;
    *(undefined8 *)(param_7 + -8) = param_4;
    *(undefined8 *)(param_7 + -0x10) = param_4;
    *(ulonglong *)(param_7 + -0x18) =
         (ulonglong)bVar13 * 0x4000 | (ulonglong)bVar12 * 0x800 | (ulonglong)bVar11 * 0x400 |
         (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 | (ulonglong)bVar8 * 0x80 |
         (ulonglong)bVar7 * 0x40 | (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar4
         | (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
    *(undefined8 *)(param_7 + -0x20) = in_R11;
    *(undefined8 *)(param_7 + -0x28) = unaff_R15;
    *(ulonglong *)(param_7 + -0x30) =
         (ulonglong)bVar13 * 0x4000 | (ulonglong)bVar12 * 0x800 | (ulonglong)bVar11 * 0x400 |
         (ulonglong)bVar10 * 0x200 | (ulonglong)bVar9 * 0x100 | (ulonglong)bVar8 * 0x80 |
         (ulonglong)bVar7 * 0x40 | (ulonglong)bVar6 * 0x10 | (ulonglong)bVar5 * 4 | (ulonglong)bVar4
         | (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
    *(undefined4 *)(param_7 + -0x38) = 0x78876e9;
    *(undefined4 *)(param_7 + -0x34) = 0;
    uVar2 = *(longlong *)(param_7 + -0x38) + 0x3fbcee4;
    uVar16 = *(ulonglong *)(param_7 + -0x30);
    *(undefined8 *)(param_7 + -0x30) = 0xd26a857;
    uVar1 = *(ulonglong *)(param_7 + -0x30);
    *(undefined8 *)(param_7 + -0x30) = unaff_R14;
    *(undefined8 *)(param_7 + -0x38) = unaff_R12;
    uVar3 = uVar1 - uVar2;
    *(ulonglong *)(param_7 + -0x30) =
         (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)SBORROW8(uVar1,uVar2) * 0x800 |
         (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((longlong)uVar3 < 0) * 0x80 |
         (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)(uVar1 < uVar2) |
         (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
    FUN_162ca4002(uStackX_20,in_stack_00000018,param_3,uVar3);
    return;
  }
  FUN_1657bdcd0();
  return;
}



// FUNCTION 14d851bf1 FUN_14d851bf1 body=145 status=ok
// SIG undefined FUN_14d851bf1(void)

void FUN_14d851bf1(undefined8 param_1,undefined8 param_2)

{
  FUN_15ba0f28c(param_1,param_2);
  return;
}



// FUNCTION 14d851e6a FUN_14d851e6a body=146 status=ok
// SIG undefined FUN_14d851e6a(void)

/* WARNING: Removing unreachable block (ram,0x000160d691da) */
/* WARNING: Removing unreachable block (ram,0x000160d691e0) */
/* WARNING: Removing unreachable block (ram,0x00014d851ef2) */
/* WARNING: Removing unreachable block (ram,0x00014d851efd) */
/* WARNING: Removing unreachable block (ram,0x00014d851f3e) */
/* WARNING: Removing unreachable block (ram,0x00014d851f4d) */
/* WARNING: Removing unreachable block (ram,0x000164b04198) */
/* WARNING: Removing unreachable block (ram,0x000164b041b2) */
/* WARNING: Removing unreachable block (ram,0x000164b041b6) */
/* WARNING: Removing unreachable block (ram,0x000164b041fd) */
/* WARNING: Removing unreachable block (ram,0x000164b04203) */
/* WARNING: Removing unreachable block (ram,0x000164b0423f) */
/* WARNING: Removing unreachable block (ram,0x000164b04251) */
/* WARNING: Removing unreachable block (ram,0x0001610d9c93) */
/* WARNING: Removing unreachable block (ram,0x0001610d9ce0) */
/* WARNING: Removing unreachable block (ram,0x0001610d9ce6) */
/* WARNING: Removing unreachable block (ram,0x0001610d9d18) */
/* WARNING: Removing unreachable block (ram,0x0001610d9d1e) */
/* WARNING: Removing unreachable block (ram,0x0001610d9e46) */
/* WARNING: Removing unreachable block (ram,0x0001610d9e48) */
/* WARNING: Removing unreachable block (ram,0x00014d9dd698) */
/* WARNING: Removing unreachable block (ram,0x00014d851ef8) */
/* WARNING: Removing unreachable block (ram,0x00014e1c1fbf) */
/* WARNING: Removing unreachable block (ram,0x00014e1c2001) */
/* WARNING: Removing unreachable block (ram,0x000160d6915d) */
/* WARNING: Removing unreachable block (ram,0x000160d6916e) */
/* WARNING: Removing unreachable block (ram,0x000160d69163) */

void FUN_14d851e6a(void)

{
  FUN_14deed0ff();
  return;
}



// FUNCTION 14d851efd FUN_14d851efd body=155 status=ok
// SIG undefined FUN_14d851efd(void)

/* WARNING: Removing unreachable block (ram,0x0001610d9d18) */
/* WARNING: Removing unreachable block (ram,0x0001610d9d1e) */
/* WARNING: Removing unreachable block (ram,0x0001610d9e46) */
/* WARNING: Removing unreachable block (ram,0x0001610d9e48) */
/* WARNING: Removing unreachable block (ram,0x000164b04203) */
/* WARNING: Removing unreachable block (ram,0x000164b0423f) */
/* WARNING: Removing unreachable block (ram,0x000164b04251) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d851efd(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  ulonglong in_stack_00000010;
  longlong in_stack_00000018;
  
  if ((in_stack_00000010 & 0x40) != 0) {
    FUN_166d261f8(param_1,param_2,FUN_166d261f8);
    return;
  }
  if (*(char *)(in_stack_00000018 + in_RAX) != '.') {
    FUN_14d9dd6b2();
    return;
  }
  return;
}



// FUNCTION 14d851f9a FUN_14d851f9a body=174 status=ok
// SIG undefined FUN_14d851f9a(void)

void FUN_14d851f9a(void)

{
  FUN_15b0b1891();
  return;
}



// FUNCTION 14d852048 thunk_FUN_14d85204e body=5 status=ok
// SIG undefined thunk_FUN_14d85204e(void)

void thunk_FUN_14d85204e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  longlong in_RAX;
  ushort auStackX_8 [4];
  undefined8 uStackX_10;
  longlong lStackX_20;
  
  puVar1 = (ushort *)((longlong)auStackX_8 + in_RAX);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & 0xfeff | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(lStackX_20 + -8) = param_3;
  *(undefined8 *)(lStackX_20 + -0x10) = uStackX_10;
  *(undefined8 *)(lStackX_20 + -0x18) = uStackX_10;
  *(undefined1 **)(lStackX_20 + -0x10) = &LAB_14d85210e;
  FUN_16166b16c(param_1,param_2,FUN_16166b16c,*(undefined8 *)(lStackX_20 + -0x18));
  return;
}



// FUNCTION 14d85204e FUN_14d85204e body=185 status=ok
// SIG undefined FUN_14d85204e(void)

void FUN_14d85204e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  longlong in_RAX;
  ushort local_res8 [4];
  undefined8 local_res10;
  longlong local_res20;
  
  puVar1 = (ushort *)((longlong)local_res8 + in_RAX);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 & 0xfeff | 0x100;
  *puVar1 = ~*puVar1;
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = local_res10;
  *(undefined8 *)(local_res20 + -0x18) = local_res10;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_14d85210e;
  FUN_16166b16c(param_1,param_2,FUN_16166b16c,*(undefined8 *)(local_res20 + -0x18));
  return;
}



// FUNCTION 14d85228d FUN_14d85228d body=170 status=ok
// SIG undefined FUN_14d85228d(void)

/* WARNING: Removing unreachable block (ram,0x00014d85233a) */

void FUN_14d85228d(void)

{
  longlong unaff_retaddr;
  
  if (unaff_retaddr == 0) {
    FUN_15762b8f5();
    return;
  }
  FUN_15762b8f5();
  return;
}



// FUNCTION 14d85233a FUN_14d85233a body=128 status=ok
// SIG undefined FUN_14d85233a(void)

void FUN_14d85233a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_165c571fa(param_1,local_res10,param_3);
  return;
}



// FUNCTION 14d8523bb FUN_14d8523bb body=894 status=ok
// SIG undefined FUN_14d8523bb(void)

/* WARNING: Removing unreachable block (ram,0x00014d852449) */

void FUN_14d8523bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  (*(code *)0x165e5c2c6)(uStackX_10,in_stack_00000008,param_3);
  return;
}



// FUNCTION 14d852473 FUN_14d852473 body=81 status=ok
// SIG undefined FUN_14d852473(void)

undefined8 FUN_14d852473(void)

{
  return 0x3f30a0a;
}



// FUNCTION 14d852577 FUN_14d852577 body=155 status=ok
// SIG undefined FUN_14d852577(void)

/* WARNING: Removing unreachable block (ram,0x00014d852746) */
/* WARNING: Removing unreachable block (ram,0x00014df0459d) */
/* WARNING: Removing unreachable block (ram,0x00014d8527f6) */
/* WARNING: Removing unreachable block (ram,0x00014d8527fc) */
/* WARNING: Removing unreachable block (ram,0x0001652b372b) */
/* WARNING: Removing unreachable block (ram,0x0001652b37bd) */
/* WARNING: Removing unreachable block (ram,0x00016600f814) */
/* WARNING: Removing unreachable block (ram,0x0001652b37c9) */
/* WARNING: Removing unreachable block (ram,0x0001652b3725) */
/* WARNING: Removing unreachable block (ram,0x00014dbc597f) */
/* WARNING: Removing unreachable block (ram,0x00014d852697) */
/* WARNING: Removing unreachable block (ram,0x00014d85273b) */
/* WARNING: Removing unreachable block (ram,0x00014d852740) */
/* WARNING: Removing unreachable block (ram,0x0001572a705b) */
/* WARNING: Removing unreachable block (ram,0x00014d852801) */
/* WARNING: Removing unreachable block (ram,0x00014d852899) */
/* WARNING: Removing unreachable block (ram,0x00014d85289f) */
/* WARNING: Removing unreachable block (ram,0x00016471b77e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d852577(void)

{
  undefined8 uVar1;
  
  FUN_1652cf501();
  uVar1 = FUN_14dbc597f();
  return uVar1;
}



// FUNCTION 14d852612 FUN_14d852612 body=494 status=ok
// SIG undefined FUN_14d852612(void)

/* WARNING: Removing unreachable block (ram,0x00014d852746) */
/* WARNING: Removing unreachable block (ram,0x00014df0459d) */
/* WARNING: Removing unreachable block (ram,0x00014d8527f6) */
/* WARNING: Removing unreachable block (ram,0x00014d8527fc) */
/* WARNING: Removing unreachable block (ram,0x0001652b3725) */
/* WARNING: Removing unreachable block (ram,0x00014dbc597f) */
/* WARNING: Removing unreachable block (ram,0x0001652b37c9) */
/* WARNING: Removing unreachable block (ram,0x0001652b372b) */
/* WARNING: Removing unreachable block (ram,0x0001652b37bd) */
/* WARNING: Removing unreachable block (ram,0x00016600f814) */
/* WARNING: Removing unreachable block (ram,0x00014d852697) */
/* WARNING: Removing unreachable block (ram,0x00014d85273b) */
/* WARNING: Removing unreachable block (ram,0x00014d852740) */
/* WARNING: Removing unreachable block (ram,0x0001572a705b) */
/* WARNING: Removing unreachable block (ram,0x00014d852801) */
/* WARNING: Removing unreachable block (ram,0x00014d852899) */
/* WARNING: Removing unreachable block (ram,0x00014d85289f) */
/* WARNING: Removing unreachable block (ram,0x00016471b77e) */

undefined8 FUN_14d852612(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14dbc597f();
  return uVar1;
}



// FUNCTION 14d852801 FUN_14d852801 body=408 status=ok
// SIG undefined FUN_14d852801(void)

/* WARNING: Removing unreachable block (ram,0x00014d85289f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d852801(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x90);
  FUN_164bb7ad5(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x90)) &
                 (uVar1 + unaff_R15) - (uVar1 & unaff_R15)),FUN_164bb7ad5,
                *(undefined8 *)(unaff_R13 + -0x88),
                -1 - (~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15 ^ 0xffffffffffffffff) |
                     ~(*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14d8529a1 FUN_14d8529a1 body=141 status=ok
// SIG undefined FUN_14d8529a1(void)

/* WARNING: Removing unreachable block (ram,0x0001569aabbd) */
/* WARNING: Removing unreachable block (ram,0x00016541163b) */
/* WARNING: Removing unreachable block (ram,0x0001569aabc3) */
/* WARNING: Removing unreachable block (ram,0x0001569aac43) */
/* WARNING: Removing unreachable block (ram,0x0001569aac49) */
/* WARNING: Removing unreachable block (ram,0x0001569aac5a) */
/* WARNING: Removing unreachable block (ram,0x0001569aac5d) */
/* WARNING: Removing unreachable block (ram,0x00015b42f6fa) */
/* WARNING: Removing unreachable block (ram,0x0001569aab1e) */
/* WARNING: Removing unreachable block (ram,0x0001569aab2a) */
/* WARNING: Removing unreachable block (ram,0x0001569aab79) */
/* WARNING: Removing unreachable block (ram,0x0001569aab74) */
/* WARNING: Removing unreachable block (ram,0x0001569aab8f) */
/* WARNING: Removing unreachable block (ram,0x0001569aabb8) */
/* WARNING: Removing unreachable block (ram,0x000156c6721d) */
/* WARNING: Removing unreachable block (ram,0x000156c67223) */
/* WARNING: Removing unreachable block (ram,0x0001573cfa64) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000156c67181) */
/* WARNING: Removing unreachable block (ram,0x000156c67187) */
/* WARNING: Removing unreachable block (ram,0x000161d4ee5b) */
/* WARNING: Removing unreachable block (ram,0x000161d4ee55) */
/* WARNING: Removing unreachable block (ram,0x000161d4ee63) */
/* WARNING: Removing unreachable block (ram,0x00014d852a2f) */

undefined1 * FUN_14d8529a1(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined4 unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000018 + param_3 + in_R10) = unaff_retaddr;
  if (unaff_RSI == -1 && param_1 == -1) {
    FUN_157507ec3();
    uVar3 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
             (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
    uVar2 = *(undefined8 *)(unaff_R13 + -0x28);
    FUN_165e3c8b3();
    FUN_1649d5d2e(uVar3,uVar2);
    FUN_14ddfd7b8();
    return &DAT_b85a4d9b5869ffff;
  }
  puVar1 = (undefined1 *)FUN_1573cf9d5();
  return puVar1;
}



// FUNCTION 14d852a2f FUN_14d852a2f body=92 status=ok
// SIG undefined FUN_14d852a2f(void)

void FUN_14d852a2f(void)

{
  return;
}



// FUNCTION 14d852d3a FUN_14d852d3a body=134 status=ok
// SIG undefined FUN_14d852d3a(void)

void FUN_14d852d3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_162a57d55(param_1,param_2,local_res10,FUN_162a57d55);
  return;
}



// FUNCTION 14d852dc0 FUN_14d852dc0 body=112 status=ok
// SIG undefined FUN_14d852dc0(void)

void FUN_14d852dc0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  undefined8 unaff_R13;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff99ee675 + unaff_retaddr) = in_RAX;
  *(ulonglong *)(&stack0xfffffffff99ee66d + unaff_retaddr) = param_1 | unaff_RBX;
  uVar2 = (~unaff_RBX | param_1) + unaff_RBX + 1;
  uVar1 = *(ulonglong *)(&stack0xfffffffff99ee66d + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff99ee66d + unaff_retaddr) = param_3;
  *(undefined8 *)(&stack0xfffffffff99ee665 + unaff_retaddr) = unaff_R13;
  (*(code *)&LAB_1652d36b1)((uVar2 & ~uVar1 | ~uVar2) + uVar1 + 1,param_2,&LAB_1652d36b1,param_4);
  return;
}



// FUNCTION 14d852e31 FUN_14d852e31 body=102 status=ok
// SIG undefined FUN_14d852e31(void)

void FUN_14d852e31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_3;
  *(undefined8 *)(local_res10 + -0x10) = param_3;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res10 + -0x20) = 0x662e6802;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(local_res10 + -0x20);
  uVar2 = *(ulonglong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = in_RAX;
  *(undefined8 *)(local_res10 + -0x28) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x28) = unaff_RBX;
  *(undefined1 **)(local_res10 + -0x20) = &LAB_157547ad3;
  FUN_157547ad0(param_1,param_2,(uVar1 ^ 0x61d600d1) - 0x4a81c23);
  return;
}



// FUNCTION 14d85304f FUN_14d85304f body=42 status=ok
// SIG undefined FUN_14d85304f(void)

void FUN_14d85304f(void)

{
  undefined1 in_AL;
  undefined8 local_res10;
  
                    /* WARNING: Read-only address (ram,0x00014d7c03cd) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7c03cd = in_AL;
  *(undefined8 *)(local_res10 + -8) = 0x2c45a06;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d8530da thunk_FUN_14d8530e0 body=5 status=ok
// SIG undefined thunk_FUN_14d8530e0(void)

void thunk_FUN_14d8530e0(void)

{
  longlong unaff_R13;
  
  FUN_1572eedb6(*(undefined8 *)(unaff_R13 + -0x40));
  FUN_157074f16();
  return;
}



// FUNCTION 14d8530e0 FUN_14d8530e0 body=335 status=ok
// SIG undefined FUN_14d8530e0(void)

void FUN_14d8530e0(void)

{
  longlong unaff_R13;
  
  FUN_1572eedb6(*(undefined8 *)(unaff_R13 + -0x40));
  FUN_157074f16();
  return;
}



// FUNCTION 14d85322f FUN_14d85322f body=49 status=ok
// SIG undefined FUN_14d85322f(void)

void FUN_14d85322f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_retaddr;
  code *UNRECOVERED_JUMPTABLE [4];
  
  *(undefined8 *)((longlong)UNRECOVERED_JUMPTABLE + param_3) = in_RAX;
                    /* WARNING: Could not recover jumptable at 0x00014d85325e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE[1])(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8532c7 FUN_14d8532c7 body=150 status=ok
// SIG undefined FUN_14d8532c7(void)

/* WARNING: Removing unreachable block (ram,0x00014d853364) */

void FUN_14d8532c7(longlong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  
  uVar1 = *(ulonglong *)(param_1 + -0x78) ^ unaff_RBX;
  if ((~(~*(ulonglong *)(param_1 + -0x80) & unaff_RBX) + unaff_RBX) -
      *(ulonglong *)(param_1 + -0x80) == -1) {
    FUN_15697a6a6(param_1,uVar1);
    return;
  }
  FUN_15697a6a6(param_1,uVar1);
  return;
}



// FUNCTION 14d853364 FUN_14d853364 body=178 status=ok
// SIG undefined FUN_14d853364(void)

void FUN_14d853364(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (ulonglong *)((longlong)local_res8 + param_1);
  *puVar1 = ~*puVar1;
  *puVar1 = (*puVar1 | 0xffffffffde26098c) + 0x21d9f674;
  return;
}



// FUNCTION 14d85349e FUN_14d85349e body=297 status=ok
// SIG undefined FUN_14d85349e(void)

/* WARNING: Removing unreachable block (ram,0x00014d85352e) */

void FUN_14d85349e(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1613a4f77(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d8536d5 FUN_14d8536d5 body=173 status=ok
// SIG undefined FUN_14d8536d5(void)

void FUN_14d8536d5(void)

{
  undefined2 unaff_R13W;
  undefined6 unaff_000000aa;
  ulonglong unaff_R15;
  
  (*(code *)0x164c36cb0)
            (*(undefined8 *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x38),0xd06d081,
             *(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x88) ^ unaff_R15,
             *(ulonglong *)(CONCAT62(unaff_000000aa,unaff_R13W) + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d853837 FUN_14d853837 body=219 status=ok
// SIG undefined FUN_14d853837(void)

/* WARNING: Removing unreachable block (ram,0x00014d8538cb) */

void FUN_14d853837(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  
  uVar1 = *(ulonglong *)
           (unaff_RDI + (unaff_R12 & (in_RAX | 0xffffffffe1768d7c) ^ 0xffffffffffffffff));
  if (uVar1 + param_1 < (uVar1 & param_1) << 1) {
    FUN_166882344(param_1);
    return;
  }
  return;
}



// FUNCTION 14d8539f9 FUN_14d8539f9 body=154 status=ok
// SIG undefined FUN_14d8539f9(void)

void FUN_14d8539f9(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x166116f6a)(param_1,param_2,0xffffffffca3324c3,unaff_retaddr);
  return;
}



// FUNCTION 14d853bd4 FUN_14d853bd4 body=153 status=ok
// SIG undefined FUN_14d853bd4(void)

/* WARNING: Removing unreachable block (ram,0x00014d853c6f) */
/* WARNING: Removing unreachable block (ram,0x0001651348c5) */
/* WARNING: Removing unreachable block (ram,0x00014d853cf6) */
/* WARNING: Removing unreachable block (ram,0x00014d853d02) */
/* WARNING: Removing unreachable block (ram,0x00014d853d07) */

undefined8 FUN_14d853bd4(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (~(~*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) + unaff_R15 <
      0xffffffffffffffff - ~*(ulonglong *)(unaff_R13 + -0x30)) {
    return in_RAX;
  }
  uVar1 = FUN_165977233();
  return uVar1;
}



// FUNCTION 14d853c6f FUN_14d853c6f body=285 status=ok
// SIG undefined FUN_14d853c6f(void)

/* WARNING: Removing unreachable block (ram,0x00014d853d07) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14d853c6f(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  
  if (*(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
      (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2 == 0) {
    uVar1 = FUN_1651348c5(param_1,-1 - (param_2 + (in_R10 & unaff_RBP) * -2),0);
    return uVar1;
  }
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14d853e36 FUN_14d853e36 body=136 status=ok
// SIG undefined FUN_14d853e36(void)

void FUN_14d853e36(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong unaff_R15;
  ulonglong auStackX_18 [2];
  
  param_4 = param_4 - ~(~(in_R10 & 0xffffffffaa854006) & (in_R10 | 0xffffffffaa854006));
  uVar1 = *(ulonglong *)((longlong)auStackX_18 + param_4);
  uVar2 = *(ulonglong *)((longlong)auStackX_18 + param_4);
  *(ulonglong *)((longlong)auStackX_18 + param_4) = ~*(ulonglong *)((longlong)auStackX_18 + param_4)
  ;
  uVar3 = *(ulonglong *)((longlong)auStackX_18 + param_4);
  *(ulonglong *)((longlong)auStackX_18 + param_4) = ~*(ulonglong *)((longlong)auStackX_18 + param_4)
  ;
  *(ulonglong *)((longlong)auStackX_18 + param_4) =
       (~(uVar3 & unaff_R15) + unaff_R15) - *(longlong *)((longlong)auStackX_18 + param_4);
  *(ulonglong *)((longlong)auStackX_18 + param_4) =
       ~((~uVar1 & ~unaff_R15 | uVar2) & *(ulonglong *)((longlong)auStackX_18 + param_4));
  thunk_FUN_165e898df(param_1,param_2);
  return;
}



// FUNCTION 14d853f7d thunk_FUN_14d853f83 body=5 status=ok
// SIG undefined thunk_FUN_14d853f83(void)

/* WARNING: Removing unreachable block (ram,0x00014d854025) */

void thunk_FUN_14d853f83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_R12;
  *(undefined8 *)(in_R11 + -8) = param_3;
  *(undefined8 *)(in_R11 + -0x10) = unaff_retaddr;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x20) = param_2;
  *(undefined8 *)(in_R11 + -0x10) = *(undefined8 *)(in_R11 + -8);
  *(undefined8 *)(in_R11 + -0x18) = in_RAX;
  *(undefined **)(in_R11 + -8) = &DAT_160d33cba;
  FUN_160d33c9c(param_1,*(undefined8 *)(in_R11 + -0x20),FUN_160d33c9c);
  return;
}



// FUNCTION 14d853f83 FUN_14d853f83 body=314 status=ok
// SIG undefined FUN_14d853f83(void)

/* WARNING: Removing unreachable block (ram,0x00014d854025) */

void FUN_14d853f83(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(in_R11 + -0x10) = unaff_R12;
  *(undefined8 *)(in_R11 + -8) = param_3;
  *(undefined8 *)(in_R11 + -0x10) = unaff_retaddr;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x20) = param_2;
  *(undefined8 *)(in_R11 + -0x10) = *(undefined8 *)(in_R11 + -8);
  *(undefined8 *)(in_R11 + -0x18) = in_RAX;
  *(undefined **)(in_R11 + -8) = &DAT_160d33cba;
  FUN_160d33c9c(param_1,*(undefined8 *)(in_R11 + -0x20),FUN_160d33c9c);
  return;
}



// FUNCTION 14d854147 FUN_14d854147 body=128 status=ok
// SIG undefined FUN_14d854147(void)

void FUN_14d854147(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  uVar2 = *(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = *(ulonglong *)(param_3 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(param_3 + 0x10) =
       (~((unaff_R15 - (uVar2 | unaff_R15)) + uVar2) + unaff_R15) - *(longlong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = ~((~param_4 | uVar1) & *(ulonglong *)(param_3 + 0x10));
  return;
}



// FUNCTION 14d8541ce FUN_14d8541ce body=34 status=ok
// SIG undefined FUN_14d8541ce(void)

void FUN_14d8541ce(void)

{
  return;
}



// FUNCTION 14d85426c FUN_14d85426c body=154 status=ok
// SIG undefined FUN_14d85426c(void)

void FUN_14d85426c(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_165544778(param_1,param_2,param_1,*(ulonglong *)(unaff_RDI + -0x50) | param_1);
  return;
}



// FUNCTION 14d854307 FUN_14d854307 body=190 status=ok
// SIG undefined FUN_14d854307(void)

/* WARNING: Removing unreachable block (ram,0x0001649a14c8) */
/* WARNING: Removing unreachable block (ram,0x0001649a14c2) */
/* WARNING: Removing unreachable block (ram,0x0001649a14d3) */
/* WARNING: Removing unreachable block (ram,0x0001649a1544) */
/* WARNING: Removing unreachable block (ram,0x0001649a1547) */
/* WARNING: Removing unreachable block (ram,0x00016522ba3a) */
/* WARNING: Removing unreachable block (ram,0x00016522ba40) */
/* WARNING: Removing unreachable block (ram,0x00014d8543c6) */
/* WARNING: Removing unreachable block (ram,0x00014d85443a) */
/* WARNING: Removing unreachable block (ram,0x0001649a1438) */
/* WARNING: Removing unreachable block (ram,0x00014d854440) */
/* WARNING: Removing unreachable block (ram,0x000165e5de81) */

void FUN_14d854307(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  if (((unaff_R15 - (uVar1 | unaff_R15)) + uVar1) * 2 <= uVar1 + unaff_R15) {
    return;
  }
  FUN_165e5ddf4();
  return;
}



// FUNCTION 14d8543c6 FUN_14d8543c6 body=276 status=ok
// SIG undefined FUN_14d8543c6(void)

/* WARNING: Removing unreachable block (ram,0x0001649a1544) */
/* WARNING: Removing unreachable block (ram,0x0001649a14c2) */
/* WARNING: Removing unreachable block (ram,0x0001649a14d3) */
/* WARNING: Removing unreachable block (ram,0x0001649a1547) */
/* WARNING: Removing unreachable block (ram,0x0001649a14c8) */
/* WARNING: Removing unreachable block (ram,0x00014d854440) */

void FUN_14d8543c6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  *(undefined8 *)((longlong)&local_res10 + param_2) = in_R11;
  uVar1 = ~((~in_RAX | local_res18) & (~local_res18 | in_RAX));
  local_res20 = ~((~in_RAX + local_res20) - (~in_RAX & local_res20) & (~local_res20 | in_RAX));
  local_res18._0_2_ = (ushort)uVar1;
  local_res18 = CONCAT62((int6)(uVar1 >> 0x10),-0x101 - ~((ushort)local_res18 | 0x100));
  *(undefined8 *)(local_res20 - 8) = 0x21ac268;
  FUN_14d85d504(param_1,local_res8,param_3,param_4);
  return;
}



// FUNCTION 14d854446 FUN_14d854446 body=45 status=ok
// SIG undefined FUN_14d854446(void)

void FUN_14d854446(void)

{
  return;
}



// FUNCTION 14d854588 FUN_14d854588 body=159 status=ok
// SIG undefined FUN_14d854588(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d854612 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d854588(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  
  uVar2 = 0xfffffffffffffff8;
  uVar1 = 0;
  FUN_15b9e7fd2(0,0xfffffffffffffff8,unaff_RBX + param_3 * -2);
  FUN_157879483(uVar1,uVar2);
  return;
}



// FUNCTION 14d854628 FUN_14d854628 body=159 status=ok
// SIG undefined FUN_14d854628(void)

void FUN_14d854628(undefined8 param_1,undefined8 param_2)

{
  FUN_157879483(param_1,param_2);
  return;
}



// FUNCTION 14d854895 FUN_14d854895 body=20 status=ok
// SIG undefined FUN_14d854895(void)

void FUN_14d854895(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8548a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d854b4b thunk_FUN_14d854b51 body=5 status=ok
// SIG undefined thunk_FUN_14d854b51(void)

void thunk_FUN_14d854b51(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_166d3a956)(param_1,&LAB_166d3a956,in_stack_00000010);
  return;
}



// FUNCTION 14d854b51 FUN_14d854b51 body=123 status=ok
// SIG undefined FUN_14d854b51(void)

void FUN_14d854b51(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  (*(code *)&LAB_166d3a956)(param_1,&LAB_166d3a956,in_stack_00000010);
  return;
}



// FUNCTION 14d854c4c FUN_14d854c4c body=312 status=ok
// SIG undefined FUN_14d854c4c(void)

/* WARNING: Instruction at (ram,0x00015780f4ed) overlaps instruction at (ram,0x00015780f4ec)
    */
/* WARNING: Removing unreachable block (ram,0x000161250355) */
/* WARNING: Removing unreachable block (ram,0x00016125035b) */
/* WARNING: Removing unreachable block (ram,0x000161250361) */
/* WARNING: Removing unreachable block (ram,0x00015780f3f4) */
/* WARNING: Removing unreachable block (ram,0x00015780f52a) */
/* WARNING: Removing unreachable block (ram,0x00015780f43c) */
/* WARNING: Removing unreachable block (ram,0x000161250333) */
/* WARNING: Removing unreachable block (ram,0x00014d854ce9) */

undefined8 FUN_14d854c4c(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong in_R9;
  ulonglong uVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined1 unaff_R15B;
  undefined7 unaff_000000b9;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStackX_18 [2];
  ulonglong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_R13 + (in_R9 ^ 0x15efc379));
  uVar7 = ~(uVar2 & CONCAT71(unaff_000000b9,unaff_R15B)) &
          (uVar2 | CONCAT71(unaff_000000b9,unaff_R15B));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  lVar3 = FUN_16299c78e(0xffffffffffffffff -
                        ((CONCAT71(unaff_000000b9,unaff_R15B) -
                         (uVar2 | CONCAT71(unaff_000000b9,unaff_R15B))) + uVar2) &
                        (uVar2 | CONCAT71(unaff_000000b9,unaff_R15B)),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ CONCAT71(unaff_000000b9,unaff_R15B),
                        (CONCAT71(unaff_000000b9,unaff_R15B) - *(ulonglong *)(unaff_R13 + -0x88)) +
                        (CONCAT71(unaff_000000b9,unaff_R15B) -
                        (*(ulonglong *)(unaff_R13 + -0x88) | CONCAT71(unaff_000000b9,unaff_R15B))) *
                        -2,*(ulonglong *)(unaff_R13 + -0x60) ^ CONCAT71(unaff_000000b9,unaff_R15B));
  puVar1 = (ulonglong *)((longlong)auStackX_18 + (lVar3 - uVar7));
  uVar4 = *puVar1 + 4;
  *puVar1 = *puVar1 & 4;
  uVar2 = *puVar1;
  uVar7 = *puVar1;
  uVar5 = uVar4 - *puVar1;
  *puVar1 = uVar5;
  auStackX_18[0] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW8(uVar4,uVar7) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((longlong)uVar5 < 0) * 0x80 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 | (ulonglong)(uVar4 < uVar2) |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if ((in_stack_00000028 & 4) != 0) {
    uVar6 = FUN_1572458d1(0x24048b48);
    return uVar6;
  }
  if (-1 < unaff_R12) {
    uVar6 = FUN_165458231();
    return uVar6;
  }
  return auStackX_18[1];
}



// FUNCTION 14d854e24 FUN_14d854e24 body=159 status=ok
// SIG undefined FUN_14d854e24(void)

void FUN_14d854e24(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  longlong unaff_R12;
  
  *(undefined8 *)(unaff_R12 + -8) = unaff_RDI;
  *(undefined8 *)(unaff_R12 + -0x10) = unaff_RDI;
  *(undefined8 *)(unaff_R12 + -0x18) = in_RAX;
  *(undefined4 *)(unaff_R12 + -0x18) = 0xf6e2581;
  *(undefined4 *)(unaff_R12 + -0x14) = 0;
  FUN_166dd01c0();
  return;
}



// FUNCTION 14d854ec3 FUN_14d854ec3 body=158 status=ok
// SIG undefined FUN_14d854ec3(void)

void FUN_14d854ec3(void)

{
  return;
}



// FUNCTION 14d854fea FUN_14d854fea body=195 status=ok
// SIG undefined FUN_14d854fea(void)

undefined8 FUN_14d854fea(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d85517d FUN_14d85517d body=162 status=ok
// SIG undefined FUN_14d85517d(void)

longlong FUN_14d85517d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ((-1 - (~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x40))) +
         *(ulonglong *)(unaff_R13 + -0x40)) - unaff_R15;
}



// FUNCTION 14d855490 FUN_14d855490 body=151 status=ok
// SIG undefined FUN_14d855490(void)

void FUN_14d855490(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_CF;
  
  FUN_14da5152f(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0x40aae763,
                (unaff_RBX - param_3) - (ulonglong)in_CF);
  return;
}



// FUNCTION 14d855649 FUN_14d855649 body=155 status=ok
// SIG undefined FUN_14d855649(void)

void FUN_14d855649(void)

{
  return;
}



// FUNCTION 14d855821 FUN_14d855821 body=340 status=ok
// SIG undefined FUN_14d855821(void)

/* WARNING: Removing unreachable block (ram,0x00014d8558af) */
/* WARNING: Removing unreachable block (ram,0x00014d8558ba) */
/* WARNING: Removing unreachable block (ram,0x00014d8558b5) */
/* WARNING: Removing unreachable block (ram,0x0001620a9a93) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d855821(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong in_stack_00000008;
  
  uVar1 = *(undefined8 *)(in_stack_00000008 + -8);
  FUN_166475e5a(param_1,param_2,param_3,param_4,*(undefined8 *)(in_stack_00000008 + -0x70));
  FUN_14e17d65c();
  if (-1 < (short)(~(~(ushort)uVar1 & 0x100) + 0x100)) {
    FUN_161249b62();
    return;
  }
  FUN_161249b62();
  return;
}



// FUNCTION 14d855a21 FUN_14d855a21 body=639 status=ok
// SIG undefined FUN_14d855a21(void)

/* WARNING: Removing unreachable block (ram,0x00014d855b46) */

void FUN_14d855a21(void)

{
  FUN_15b300f27();
  FUN_16676a7c9(FUN_16676a7c9);
  return;
}



// FUNCTION 14d855c6a FUN_14d855c6a body=127 status=ok
// SIG undefined FUN_14d855c6a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d855c6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 in_EAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  bool in_ZF;
  
  if (!in_ZF) {
    out(0x11,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_16586b250(param_1,param_2,(~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) + unaff_RBP + 1,
                ~(~(param_4 & unaff_RBP ^ 0xffffffffffffffff) |
                 ~((~(param_4 & unaff_RBP) + unaff_RBP) - (param_4 ^ 0xffffffffffffffff))));
  return;
}



// FUNCTION 14d855cea FUN_14d855cea body=169 status=ok
// SIG undefined FUN_14d855cea(void)

void FUN_14d855cea(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 in_stack_00000008;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x20) = in_stack_00000008;
  *(undefined8 *)(local_res20 + -0x28) = in_stack_00000008;
  *(undefined8 *)(local_res20 + -0x30) = in_stack_00000008;
  *(code **)(local_res20 + -0x20) = FUN_14d855d93;
  *(undefined **)(local_res20 + -0x28) = &DAT_1612fe067;
  return;
}



// FUNCTION 14d855d93 FUN_14d855d93 body=156 status=ok
// SIG undefined FUN_14d855d93(void)

void FUN_14d855d93(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14df3c2f9(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d855ff8 FUN_14d855ff8 body=132 status=ok
// SIG undefined FUN_14d855ff8(void)

void FUN_14d855ff8(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_1666a55d6(param_1 + ((unaff_RSI | in_RAX) + unaff_R15 + 1) * -2,
                *(undefined8 *)(unaff_R13 + -0x78));
  return;
}



// FUNCTION 14d85612b FUN_14d85612b body=247 status=ok
// SIG undefined FUN_14d85612b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8561c9) */

void FUN_14d85612b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  longlong local_res20;
  
  *(undefined8 *)(in_R10 + 0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = in_stack_00000008;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) - *(longlong *)(local_res20 + -8);
  *(longlong *)(local_res20 + -0x10) = -*(longlong *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -8) = 0x59d3aa6d;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x59d3aa6d;
  *(ulonglong *)(local_res20 + -8) = *(ulonglong *)(local_res20 + -8) ^ 0x1623e206f;
  thunk_FUN_15b642ca5(param_1,param_2,*(undefined8 *)(local_res20 + -0x20),param_4);
  return;
}



// FUNCTION 14d8561cf FUN_14d8561cf body=282 status=ok
// SIG undefined FUN_14d8561cf(void)

/* WARNING: Removing unreachable block (ram,0x000162ae95a0) */
/* WARNING: Removing unreachable block (ram,0x00014d856265) */
/* WARNING: Removing unreachable block (ram,0x00014d8562b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8562c5) */
/* WARNING: Removing unreachable block (ram,0x00016249bc44) */

undefined8 FUN_14d8561cf(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x38);
  if (((~param_1 | uVar1) & (~(~uVar1 & param_1) + param_1) - uVar1) != 0) {
    return 0xffffffffffffffd7;
  }
  uVar2 = FUN_16249bb99();
  return uVar2;
}



// FUNCTION 14d8563a5 FUN_14d8563a5 body=212 status=ok
// SIG undefined FUN_14d8563a5(void)

undefined * FUN_14d8563a5(void)

{
  ulonglong unaff_RSI;
  ulonglong uVar1;
  ulonglong in_R11;
  longlong unaff_R13;
  uint unaff_retaddr;
  
  uVar1 = unaff_RSI ^ unaff_R13 + (ulonglong)unaff_retaddr;
  *(undefined8 *)(&stack0x00000028 + uVar1) = 0;
  *(ulonglong *)(&stack0x00000028 + uVar1) = *(ulonglong *)(&stack0x00000028 + uVar1) ^ in_R11;
  return &DAT_14d7a9b51;
}



// FUNCTION 14d85647a FUN_14d85647a body=139 status=ok
// SIG undefined FUN_14d85647a(void)

void FUN_14d85647a(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_160d242f1(*(ulonglong *)(unaff_R12 + -0x58) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2,0xb4169c5);
  return;
}



// FUNCTION 14d856803 FUN_14d856803 body=94 status=ok
// SIG undefined FUN_14d856803(void)

void FUN_14d856803(void)

{
  return;
}



// FUNCTION 14d8568be FUN_14d8568be body=267 status=ok
// SIG undefined FUN_14d8568be(void)

/* WARNING: Removing unreachable block (ram,0x00014d856948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d8568be(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_R10;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  undefined8 local_res18;
  
  uVar1 = *param_4;
  *param_4 = ~*param_4;
  *param_4 = *param_4 | unaff_R15;
  *param_4 = ~((0xffffffffffffffff - unaff_R15 | uVar1) & *param_4);
  uVar2 = ~(((~local_res10 | unaff_R15) - (~unaff_R15 | local_res10 | ~local_res10 | unaff_R15)) +
           (~unaff_R15 | local_res10));
  uVar1 = ~((unaff_R15 - (local_res18 | unaff_R15)) + local_res18) & (local_res18 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  FUN_16263f863(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d856948 FUN_14d856948 body=255 status=ok
// SIG undefined FUN_14d856948(void)

void FUN_14d856948(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000018;
  
  (*(code *)0x14df4a856)(param_1,param_2,in_stack_00000018);
  return;
}



// FUNCTION 14d8569f3 FUN_14d8569f3 body=337 status=ok
// SIG undefined FUN_14d8569f3(void)

/* WARNING: Removing unreachable block (ram,0x00014d856a92) */
/* WARNING: Removing unreachable block (ram,0x00014d856a98) */

void FUN_14d8569f3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x20) = param_2;
  uVar2 = *(undefined8 *)(local_res10 + -0x20);
  *(code **)(local_res10 + -8) = FUN_15afe0ae1;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = uVar1;
  *(undefined8 *)(local_res10 + -0x18) = uVar1;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x28) = in_R11;
  *(undefined8 *)(local_res10 + -0x30) = uVar2;
  *(undefined **)(local_res10 + -0x10) = &DAT_14d7aaa5c;
  return;
}



// FUNCTION 14d856c31 FUN_14d856c31 body=142 status=ok
// SIG undefined FUN_14d856c31(void)

void FUN_14d856c31(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  FUN_161b6cb4e(param_1,in_stack_00000010,local_res18);
  return;
}



// FUNCTION 14d856cbf FUN_14d856cbf body=128 status=ok
// SIG undefined FUN_14d856cbf(void)

void FUN_14d856cbf(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x156fc4a48)
            (~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
             -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                  (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14d856d41 FUN_14d856d41 body=296 status=ok
// SIG undefined FUN_14d856d41(void)

/* WARNING: Removing unreachable block (ram,0x00015b32d0b9) */
/* WARNING: Removing unreachable block (ram,0x00014d856dde) */
/* WARNING: Removing unreachable block (ram,0x00014d856e1a) */
/* WARNING: Removing unreachable block (ram,0x00014d856e1e) */

void FUN_14d856d41(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  uVar5 = *(ulonglong *)(unaff_R13 + -0x68) ^ unaff_R15;
  uVar4 = FUN_1574aafe0(param_1,param_2,*(undefined8 *)(unaff_R13 + -0xa0));
  uVar3 = *(undefined8 *)(&stack0xfffffffff3e20705 + uVar5);
  *(undefined8 *)(&stack0xfffffffff3e20705 + uVar5) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffff3e206fd + uVar5) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff3e206f5 + uVar5) = uVar4;
  *(undefined8 *)(&stack0xfffffffff3e206ed + uVar5) = unaff_R12;
  lVar2 = *(longlong *)(&stack0xfffffffff3e20715 + uVar5);
  *(ulonglong *)(&stack0xfffffffff3e20715 + uVar5) =
       *(ulonglong *)(&stack0xfffffffff3e20715 + uVar5) & unaff_R15;
  plVar1 = (longlong *)(&stack0xfffffffff3e20715 + uVar5);
  *plVar1 = *plVar1 << 1;
  *(undefined8 *)(&stack0xfffffffff3e206fd + uVar5) = uVar3;
  *(undefined8 *)(&stack0xfffffffff3e206f5 + uVar5) =
       *(undefined8 *)(&stack0xfffffffff3e206f5 + uVar5);
  *(undefined4 *)(&stack0xfffffffff3e206f5 + uVar5) = 0x604457b7;
  *(undefined4 *)(&stack0xfffffffff3e206f9 + uVar5) = 0;
  if (*plVar1 < 0) {
    *(ulonglong *)(&stack0xfffffffff3e20715 + uVar5) =
         (lVar2 + unaff_R15) -
         *(longlong *)
          (&stack0xffffffffed9d0910 +
          (*(ulonglong *)(&stack0xfffffffff3e206f5 + uVar5) ^ 0x6600a9b2) + uVar5);
    *(undefined8 *)(&stack0xfffffffff3e20705 + uVar5) = unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff3e206fd + uVar5) = unaff_RBX;
    *(undefined1 **)(&stack0xfffffffff3e20705 + uVar5) = &LAB_14d91867c;
    return;
  }
  FUN_14d91864f();
  return;
}



// FUNCTION 14d856dde FUN_14d856dde body=321 status=ok
// SIG undefined FUN_14d856dde(void)

void FUN_14d856dde(undefined8 param_1)

{
  longlong in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0;
  if (in_RAX < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_1652dd8d1(param_1,uVar1,*(undefined8 *)(unaff_R13 + -0x88),
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_1614461fd(FUN_1614461fd);
  return;
}



// FUNCTION 14d856f20 FUN_14d856f20 body=209 status=ok
// SIG undefined FUN_14d856f20(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d856feb) overlaps instruction at (ram,0x00014d856fea)
    */

void FUN_14d856f20(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  char cVar5;
  code *pcVar6;
  longlong unaff_R12;
  char unaff_R15B;
  char cVar7;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar8;
  ulonglong uStack_10;
  int iStack_4;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + unaff_R12);
  *puVar1 = *(ulonglong *)(unaff_RDI + -0x40);
  cVar5 = '\b';
  uVar8 = *(ulonglong *)(unaff_RDI + -0x50);
  *puVar1 = uVar8;
  uVar3 = *puVar1;
  *puVar1 = param_1;
  uVar2 = *puVar1;
  *(int *)puVar1 = -0x31a536d9;
  *(int *)puVar1 = (int)*puVar1 + 0x492b35a7;
  *(int *)(puVar1 + -1) = -0x2811bf34;
  *(int *)((longlong)puVar1 + -4) = -1;
  pcVar6 = FUN_15b1d8881;
  puVar1[-2] = 0x14d856fcd;
  FUN_15b1d8881(uVar2,uVar3 + param_1 + (uVar8 & param_1) * -2);
  cVar7 = -unaff_R15B + cVar5;
  puVar1[-1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(-unaff_R15B,cVar5) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)(cVar7 < '\0') * 0x80 | (ulonglong)(cVar7 == '\0') * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(cVar7) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar1[-1] = puVar1[-1] | 0x40;
  uVar8 = puVar1[-1];
  if ((uVar8 & 0x40) == 0) {
    puVar1[-1] = 0x14d856fef;
    func_0x00017206b88b();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1[-1] = (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar8 & 0x800) != 0) * 0x800 | (ulonglong)((uVar8 & 0x400) != 0) * 0x400
               | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)((uVar8 & 0x80) != 0) * 0x80 |
               0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 | (ulonglong)((uVar8 & 4) != 0) * 4 |
               (ulonglong)((uVar8 & 1) != 0) | (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  puVar1[-1] = puVar1[-1] & 0xffffffffffffff7f;
  uVar8 = puVar1[-1];
  if ((uVar8 & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1[-1] = 0xfffffffffffffff8;
  puVar1[-2] = (ulonglong)pcVar6;
  uVar4 = puVar1[-1];
  puVar1[-1] = CONCAT71(0xffffffffffffff,-1 - (cVar7 + -0x50 + ((uVar8 & 1) != 0)));
  puVar1[-1] = 0x14d857041;
  (*(code *)0x1569afe50)();
  puVar1[-1] = uVar4;
  puVar1[-2] = uVar4;
  puVar1[-1] = 0x14d857052;
  return;
}



// FUNCTION 14d8570d8 FUN_14d8570d8 body=495 status=ok
// SIG undefined FUN_14d8570d8(void)

/* WARNING: Removing unreachable block (ram,0x00016132865a) */
/* WARNING: Removing unreachable block (ram,0x000161328665) */
/* WARNING: Removing unreachable block (ram,0x0001613286b9) */
/* WARNING: Removing unreachable block (ram,0x0001613286e9) */
/* WARNING: Removing unreachable block (ram,0x0001613286ef) */
/* WARNING: Removing unreachable block (ram,0x00016505f438) */
/* WARNING: Removing unreachable block (ram,0x0001629198aa) */
/* WARNING: Removing unreachable block (ram,0x0001629198b0) */
/* WARNING: Removing unreachable block (ram,0x00014d8571e4) */
/* WARNING: Removing unreachable block (ram,0x00014d8571ea) */
/* WARNING: Removing unreachable block (ram,0x00014d857279) */
/* WARNING: Removing unreachable block (ram,0x00014d85727f) */
/* WARNING: Removing unreachable block (ram,0x0001624862d3) */
/* WARNING: Removing unreachable block (ram,0x0001661b84bc) */
/* WARNING: Removing unreachable block (ram,0x00016248635f) */
/* WARNING: Removing unreachable block (ram,0x000162486365) */
/* WARNING: Removing unreachable block (ram,0x00016248636a) */
/* WARNING: Removing unreachable block (ram,0x0001624863d8) */
/* WARNING: Removing unreachable block (ram,0x0001624863de) */
/* WARNING: Removing unreachable block (ram,0x0001613285b1) */
/* WARNING: Removing unreachable block (ram,0x0001623118b0) */
/* WARNING: Removing unreachable block (ram,0x000161328660) */
/* WARNING: Removing unreachable block (ram,0x000165c36d8f) */

void FUN_14d8570d8(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x60);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88);
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = 0x14d85716c;
  uVar4 = FUN_162b2e424(param_1,(~unaff_R15 | in_R10) + unaff_R15 + 1,uVar3 ^ unaff_R15,
                        uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2);
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = param_1;
  uVar2 = *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = uVar4;
  *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff794ed36 + unaff_retaddr) + ~in_R11 * -2;
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = 0x584108ff416618f7;
  lVar5 = *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) + uVar2 +
          (*(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) & uVar2) * -2;
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = 0xb416618234166d3;
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = 0xdc8b416653e90000;
  *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) = uVar2 + 0x55d224a48d4d0824;
  *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) =
       *(longlong *)(&stack0xfffffffff794ed36 + unaff_retaddr) + ~(~uVar2 | 0xaa2ddb5b72b2f7db) * -2
  ;
  *(ulonglong *)(&stack0xfffffffff794ed36 + unaff_retaddr) = uVar2;
  *(undefined8 *)(&stack0xfffffffff794ed36 + unaff_retaddr) = 0x6900000001e90824;
  *(undefined8 *)(&stack0xfffffffff794ed2e + unaff_retaddr) = 0xe7ff41ffb68dc13d;
  *(longlong *)(&stack0xfffffffff794ed26 + unaff_retaddr) = lVar5;
  *(longlong *)(&stack0xfffffffff794ed1e + unaff_retaddr) = lVar5;
  *(ulonglong *)(&stack0xfffffffff794ed16 + unaff_retaddr) = unaff_R15;
  puVar1 = (ulonglong *)(&stack0xfffffffff794ed0e + unaff_retaddr);
  *puVar1 = 0x50540c77;
  *puVar1 = *puVar1 ^ 0x50540c77;
  *puVar1 = *puVar1 + 0x648d48ff8bac5786;
  if (*puVar1 == 0) {
    FUN_14d9804cc();
    return;
  }
  FUN_14d9804cc();
  return;
}



// FUNCTION 14d85731e FUN_14d85731e body=140 status=ok
// SIG undefined FUN_14d85731e(void)

void FUN_14d85731e(void)

{
  FUN_16644c83d();
  return;
}



// FUNCTION 14d8573ab FUN_14d8573ab body=298 status=ok
// SIG undefined FUN_14d8573ab(void)

/* WARNING: Removing unreachable block (ram,0x00014d8573e2) */

void FUN_14d8573ab(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  longlong unaff_retaddr;
  ulonglong auStackX_10 [3];
  ushort local_20;
  
  uVar3 = -((param_1 + *(longlong *)((longlong)auStackX_10 + param_3)) -
           (param_1 & *(ulonglong *)((longlong)auStackX_10 + param_3)));
  puVar1 = (ulonglong *)((longlong)auStackX_10 + param_3);
  iVar2 = -((int)((uint)CARRY8(uVar3,*puVar1) << 0x1f) >> 0x1f);
  local_20 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY8(uVar3,*puVar1) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 | (ushort)(iVar2 == 0) * 0x40
             | (ushort)(in_AF & 1) * 0x10 | (ushort)(POPCOUNT(iVar2) == '\0') * 4;
  if ((ushort)((0x40 - (local_20 | 0x40)) + local_20) == 0) {
    return;
  }
  uVar3 = -~param_1 - ((uVar3 + *puVar1 ^ 0xffffffffffffffff) + 2);
  FUN_160d55cdb(uVar3,FUN_160d55cdb,ProcessEnvironmentBlock,param_4);
  FUN_1663e97f9(0xf0,0xf0,0xffffffffffffffc8,unaff_RBX + uVar3 + (-unaff_retaddr & uVar3) * -2);
  return;
}



// FUNCTION 14d8576f0 FUN_14d8576f0 body=205 status=ok
// SIG undefined FUN_14d8576f0(void)

/* WARNING: Removing unreachable block (ram,0x00014d85772b) */

undefined8 FUN_14d8576f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  int in_R11D;
  int unaff_R12D;
  
  if (in_R11D + unaff_R12D == 0) {
    unaff_RDI = param_3;
  }
  return *(undefined8 *)(unaff_RDI + -0x50);
}



// FUNCTION 14d857908 FUN_14d857908 body=253 status=ok
// SIG undefined FUN_14d857908(void)

/* WARNING: Removing unreachable block (ram,0x00014d8579ac) */

undefined8 FUN_14d857908(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_R15;
  uint unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  *(undefined8 *)(&stack0x00000010 + ((ulonglong)unaff_retaddr ^ 0x3ab4247f)) = param_1;
  uVar1 = local_res20 ^ unaff_R15;
  if (&stack0x00000000 == &DAT_ffffffffffffffe8) {
    uVar2 = FUN_166130cf3();
    return uVar2;
  }
  *(undefined8 *)(uVar1 - 8) = in_stack_00000008;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000008;
  *(code **)(uVar1 - 8) = FUN_166130d81;
  uVar2 = FUN_15b9ee5b4(FUN_15b9ee5b4,param_2);
  return uVar2;
}



// FUNCTION 14d857baf thunk_FUN_14d857bb5 body=5 status=ok
// SIG undefined thunk_FUN_14d857bb5(void)

void thunk_FUN_14d857bb5(void)

{
  return;
}



// FUNCTION 14d857bb5 FUN_14d857bb5 body=31 status=ok
// SIG undefined FUN_14d857bb5(void)

void FUN_14d857bb5(void)

{
  return;
}



// FUNCTION 14d857c42 FUN_14d857c42 body=143 status=ok
// SIG undefined FUN_14d857c42(void)

void FUN_14d857c42(void)

{
  FUN_156b7e781();
  return;
}


