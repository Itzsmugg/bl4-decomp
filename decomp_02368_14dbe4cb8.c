// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dbe4cb8 FUN_14dbe4cb8 body=149 status=ok
// SIG undefined FUN_14dbe4cb8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe4d42) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4d4d) */
/* WARNING: Removing unreachable block (ram,0x0001669ee6fa) */
/* WARNING: Removing unreachable block (ram,0x00014dbe4d48) */
/* WARNING: Removing unreachable block (ram,0x00015781955f) */
/* WARNING: Removing unreachable block (ram,0x0001567e51d1) */

void FUN_14dbe4cb8(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffa1d0678 + (in_RAX ^ 0x36eb982f));
  *puVar1 = unaff_RSI;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar5 = puVar1[1];
  uVar3 = *(ulonglong *)(unaff_R13 + -0x78);
  puVar1[1] = unaff_R12;
  puVar1[1] = puVar1[1];
  puVar1[1] = unaff_R13;
  uVar6 = puVar1[1];
  puVar1[1] = (~uVar3 | ~unaff_R15) & ~(~uVar3 & ~unaff_R15);
  puVar7 = puVar1 + 1;
  lVar4 = *(longlong *)(uVar6 - 0x30);
  *puVar7 = 0;
  *puVar7 = *puVar7 + lVar4;
  uVar3 = *puVar7;
  *puVar1 = puVar7;
  puVar7 = (ulonglong *)*puVar1;
  *puVar7 = uVar5;
  *(uint *)puVar7 = 0;
  *(uint *)puVar7 = (uint)*puVar7 ^ 0x35239682;
  puVar7[-1] = uVar5;
  *(undefined4 *)(puVar7 + -1) = 0xda72d091;
  *(uint *)((longlong)puVar7 + -4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + puVar7[-1] + 0x258d2f73) = 0;
  if (*puVar7 == 0x10d37886) {
    FUN_166d3463d();
    return;
  }
  uVar8 = *(longlong *)(uVar6 - 0x68) + unaff_R15;
  *puVar7 = uVar8;
  if (uVar8 == 0) {
    *puVar7 = uVar5;
    *puVar7 = *(ulonglong *)(uVar6 - 0x50);
    *puVar7 = ~(uVar3 & unaff_R15) & (uVar3 | unaff_R15);
    puVar7[-1] = unaff_R15;
    puVar7[-1] = uVar6;
    puVar7[-2] = uVar2 ^ unaff_R15;
    FUN_166da1750();
    return;
  }
  FUN_1669ee6d1();
  return;
}



// FUNCTION 14dbe4d4d thunk_FUN_165e93f27 body=19 status=ok
// SIG undefined thunk_FUN_165e93f27(void)

void thunk_FUN_165e93f27(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbe504c FUN_14dbe504c body=683 status=ok
// SIG undefined FUN_14dbe504c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe50cd) */
/* WARNING: Removing unreachable block (ram,0x00014dbe516d) */
/* WARNING: Removing unreachable block (ram,0x0001624d451e) */
/* WARNING: Removing unreachable block (ram,0x0001624d4524) */
/* WARNING: Removing unreachable block (ram,0x0001624d4571) */
/* WARNING: Removing unreachable block (ram,0x0001624d45c2) */
/* WARNING: Removing unreachable block (ram,0x000161d8da07) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5172) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5178) */
/* WARNING: Removing unreachable block (ram,0x00014dbe517d) */

void FUN_14dbe504c(void)

{
  FUN_161d8da07();
  return;
}



// FUNCTION 14dbe50cd FUN_14dbe50cd body=174 status=ok
// SIG undefined FUN_14dbe50cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe5172) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5178) */
/* WARNING: Removing unreachable block (ram,0x00014dbe517d) */

void FUN_14dbe50cd(void)

{
  FUN_161536ea8();
  return;
}



// FUNCTION 14dbe517d FUN_14dbe517d body=142 status=ok
// SIG undefined FUN_14dbe517d(void)

void FUN_14dbe517d(undefined8 param_1,undefined8 param_2)

{
  FUN_166b67709(param_1,param_2,FUN_166b67709);
  return;
}



// FUNCTION 14dbe5354 FUN_14dbe5354 body=303 status=ok
// SIG undefined FUN_14dbe5354(void)

/* WARNING: Removing unreachable block (ram,0x00016650f9e5) */
/* WARNING: Removing unreachable block (ram,0x00016650f9df) */
/* WARNING: Removing unreachable block (ram,0x00016650f9ea) */
/* WARNING: Removing unreachable block (ram,0x00014dbe539f) */
/* WARNING: Removing unreachable block (ram,0x00014dbe53cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbe53da) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5435) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5439) */
/* WARNING: Removing unreachable block (ram,0x00014dbe53d5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_14dbe5354(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) + param_1 +
         (*(ulonglong *)(unaff_RDI + -0x80) & param_1) * -2;
}



// FUNCTION 14dbe5519 FUN_14dbe5519 body=306 status=ok
// SIG undefined FUN_14dbe5519(void)

void FUN_14dbe5519(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_1646d526e(param_1,param_2,param_3,unaff_retaddr);
  FUN_1565ea113();
  return;
}



// FUNCTION 14dbe5797 FUN_14dbe5797 body=244 status=ok
// SIG undefined FUN_14dbe5797(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe5825) */
/* WARNING: Removing unreachable block (ram,0x00014dbe582b) */
/* WARNING: Removing unreachable block (ram,0x000164c30b94) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5805) */
/* WARNING: Removing unreachable block (ram,0x0001574666fc) */
/* WARNING: Removing unreachable block (ram,0x00015746681a) */
/* WARNING: Removing unreachable block (ram,0x000157466827) */
/* WARNING: Removing unreachable block (ram,0x00015746682b) */
/* WARNING: Removing unreachable block (ram,0x0001575c067e) */
/* WARNING: Removing unreachable block (ram,0x00015b08c025) */

undefined8 FUN_14dbe5797(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  ulonglong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar2 = ~(0xffffffffffffffff - ~*(ulonglong *)(unaff_R13 + -0x78) & ~unaff_R15);
  if ((~unaff_R12 | CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),(short)unaff_RBP + 1)) + unaff_R12
      != -1) {
    uVar1 = FUN_15b08bf88();
    return uVar1;
  }
  if (!CARRY8(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x30),unaff_R15)) {
    if (*(longlong *)(unaff_R13 + -0x68) + unaff_R15 +
        ~(0xffffffffffffffffU - *(longlong *)(unaff_R13 + -0x68) | ~unaff_R15) * -2 != 0) {
      uVar1 = FUN_16668ca99(~(~((~(uVar3 & uVar2) + uVar2) - ~uVar3) + 1 + uVar2 + uVar3),
                            ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                            (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15),
                            (*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15) << 1,in_R9);
      return uVar1;
    }
    uVar1 = FUN_165814131();
    return uVar1;
  }
  uVar1 = FUN_164c30b0a();
  return uVar1;
}



// FUNCTION 14dbe58eb FUN_14dbe58eb body=271 status=ok
// SIG undefined FUN_14dbe58eb(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe592b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe59bc) */
/* WARNING: Removing unreachable block (ram,0x00014dbe59fb) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5981) */
/* WARNING: Removing unreachable block (ram,0x00014dbe59f5) */
/* WARNING: Removing unreachable block (ram,0x0001611226be) */
/* WARNING: Removing unreachable block (ram,0x0001611227d4) */
/* WARNING: Removing unreachable block (ram,0x0001611227df) */
/* WARNING: Removing unreachable block (ram,0x0001611227da) */
/* WARNING: Removing unreachable block (ram,0x0001611227cf) */
/* WARNING: Removing unreachable block (ram,0x000162bb37c7) */
/* WARNING: Removing unreachable block (ram,0x00014dbe5976) */

void FUN_14dbe58eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_161bfa114(param_1,param_2,0xffffffffbf18eb8d,param_4);
  return;
}



// FUNCTION 14dbe59fb FUN_14dbe59fb body=145 status=ok
// SIG undefined FUN_14dbe59fb(void)

void FUN_14dbe59fb(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong in_stack_00000008;
  
  puVar3 = (ulonglong *)(&stack0xfffffffff20c2d62 + in_stack_00000008);
  uVar1 = *puVar3;
  *puVar3 = ~*puVar3;
  uVar2 = *puVar3;
  *puVar3 = *puVar3 & param_1;
  *puVar3 = (uVar2 + param_1) - *puVar3;
  *puVar3 = ~((~param_1 | uVar1) & *puVar3);
  return;
}



// FUNCTION 14dbe5a8d FUN_14dbe5a8d body=146 status=ok
// SIG undefined FUN_14dbe5a8d(void)

void FUN_14dbe5a8d(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong unaff_RSI;
  longlong *unaff_R14;
  longlong unaff_R15;
  undefined8 local_res10;
  
  *unaff_R14 = unaff_RSI + param_3 + *unaff_R14;
  *(undefined8 *)(unaff_R15 + -0x10) = param_5;
  FUN_1662defbc((undefined8 *)(unaff_R15 + -0x10),param_2,local_res10);
  return;
}



// FUNCTION 14dbe5bab FUN_14dbe5bab body=16 status=ok
// SIG undefined FUN_14dbe5bab(void)

void FUN_14dbe5bab(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x156bd7a09)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbe5c5c FUN_14dbe5c5c body=108 status=ok
// SIG undefined FUN_14dbe5c5c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbe5eca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbe5c5c(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  int iStackX_10;
  
  FUN_16586539b(param_1,FUN_16586539b,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15);
  param_1 = param_1 & 0xffffffff;
  uVar1 = 0;
  uVar2 = param_1;
  FUN_15742118e();
  FUN_1622f47a6(iStackX_10,param_1,uVar1);
  iStackX_10 = (int)uVar2;
  if (-1 < iStackX_10) {
    FUN_15b27e486();
    return;
  }
  return;
}



// FUNCTION 14dbe5cf2 FUN_14dbe5cf2 body=491 status=ok
// SIG undefined FUN_14dbe5cf2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbe5eca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbe5cf2(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int local_res8;
  
  param_1 = param_1 & 0xffffffff;
  uVar1 = 0;
  uVar2 = param_1;
  FUN_15742118e();
  FUN_1622f47a6(local_res8,param_1,uVar1);
  local_res8 = (int)uVar2;
  if (-1 < local_res8) {
    FUN_15b27e486();
    return;
  }
  return;
}



// FUNCTION 14dbe5f81 FUN_14dbe5f81 body=12 status=ok
// SIG undefined FUN_14dbe5f81(void)

void FUN_14dbe5f81(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dbe5f8d FUN_14dbe5f8d body=877 status=ok
// SIG undefined FUN_14dbe5f8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe61af) */
/* WARNING: Removing unreachable block (ram,0x00014dbe6256) */

undefined8 FUN_14dbe5f8d(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  bool bVar3;
  
  if (unaff_R14 == 0xed267) {
    uVar2 = FUN_1574ba9da();
    return uVar2;
  }
  if (unaff_R14 != 0xed268) {
    uVar2 = FUN_1667c41aa();
    return uVar2;
  }
  FUN_1667c416f();
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  FUN_162adf623((uVar1 & unaff_RBP ^ 0xffffffffffffffff) &
                (~(uVar1 & unaff_RBP) + unaff_RBP) - ~uVar1,*(undefined8 *)(unaff_RSI + -0x58));
  bVar3 = (*(ulonglong *)(unaff_RSI + -0x90) & unaff_RBP) == 0;
  FUN_164bb4c05();
  if (!bVar3) {
    uVar2 = FUN_1665a577b();
    return uVar2;
  }
  FUN_15636f353();
  uVar2 = FUN_165702df0();
  return uVar2;
}



// FUNCTION 14dbe6449 FUN_14dbe6449 body=148 status=ok
// SIG undefined FUN_14dbe6449(void)

void FUN_14dbe6449(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dc93cc8(FUN_14dc93cc8,param_2,param_3);
  return;
}



// FUNCTION 14dbe6569 FUN_14dbe6569 body=128 status=ok
// SIG undefined FUN_14dbe6569(void)

void FUN_14dbe6569(undefined8 param_1)

{
  undefined4 unaff_EBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162338d5f(param_1,unaff_EBX,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_14dbe65ea();
  return;
}



// FUNCTION 14dbe65ea FUN_14dbe65ea body=113 status=ok
// SIG undefined FUN_14dbe65ea(void)

void FUN_14dbe65ea(void)

{
  (*(code *)&LAB_1564e1b64)();
  return;
}



// FUNCTION 14dbe668b FUN_14dbe668b body=130 status=ok
// SIG undefined FUN_14dbe668b(void)

void FUN_14dbe668b(undefined8 param_1)

{
  longlong unaff_R12;
  
  FUN_1568ccc56(param_1,&DAT_b85a4d9b5869ffff +
                        (*(ulonglong *)(unaff_R12 + -0x88) -
                        (*(ulonglong *)(unaff_R12 + -0x88) | 0xb85a4d9b5869ffff)));
  return;
}



// FUNCTION 14dbe68e8 FUN_14dbe68e8 body=170 status=ok
// SIG undefined FUN_14dbe68e8(void)

void FUN_14dbe68e8(void)

{
  return;
}



// FUNCTION 14dbe6a0f FUN_14dbe6a0f body=207 status=ok
// SIG undefined FUN_14dbe6a0f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe6aa4) */

void FUN_14dbe6a0f(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_stack_00000008;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined8 *)(local_res18 + -0x28) = 0x60fc089d;
  *(undefined4 *)(local_res18 + -0x28) = 0x25e46eeb;
  *(undefined4 *)(local_res18 + -0x24) = 0;
  *(undefined8 *)(local_res18 + -0x10) =
       *(undefined8 *)
        (local_res18 + -0x18 + (*(longlong *)(local_res18 + -0x28) + 0x3b1799a2U ^ 0x60fc089d));
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(&LAB_14ddd3503 + *(longlong *)(local_res18 + -8));
  thunk_FUN_15b642ca5(in_stack_00000008,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14dbe6aa4 FUN_14dbe6aa4 body=176 status=ok
// SIG undefined FUN_14dbe6aa4(void)

void FUN_14dbe6aa4(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_166a18463(param_1,FUN_166a18463,unaff_retaddr);
  return;
}



// FUNCTION 14dbe6ff1 FUN_14dbe6ff1 body=286 status=ok
// SIG undefined FUN_14dbe6ff1(void)

void FUN_14dbe6ff1(undefined8 param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  byte in_CF;
  
  lVar9 = unaff_RBP - (ulonglong)in_CF;
  *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9) = param_1;
  *(ulonglong *)(&stack0xfffffffff73abb62 + lVar9) = unaff_RBX + unaff_R15;
  *(ulonglong *)(&stack0xfffffffff73abb62 + lVar9) =
       *(longlong *)(&stack0xfffffffff73abb62 + lVar9) +
       ((unaff_R15 - (unaff_RBX | unaff_R15)) + unaff_RBX) * -2;
  *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9) =
       *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar8 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9) = *(undefined8 *)(unaff_R13 + -0x30);
  uVar3 = *(ulonglong *)(&stack0xfffffffff73abb62 + lVar9);
  *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9) = 0x14dbe7077;
  puVar7 = (ushort *)FUN_16183b20e(uVar2 ^ unaff_R15);
  uVar1 = *puVar7;
  *(undefined8 *)(&stack0xfffffffff73abb72 + lVar9) = unaff_R12;
  *(ulonglong *)(&stack0xfffffffff73abb6a + lVar9) = uVar8;
  *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9) = unaff_R14;
  uVar4 = *(undefined8 *)(&stack0xfffffffff73abb62 + lVar9);
  uVar5 = *(undefined8 *)(&stack0xfffffffff73abb6a + lVar9);
  *puVar7 = (uVar1 | 0x100) - 0x100;
  uVar6 = *(undefined8 *)(&stack0xfffffffff73abb82 + lVar9);
  lVar9 = *(longlong *)(&stack0xfffffffff73abb92 + lVar9);
  *(ulonglong *)(lVar9 + -8) = ~unaff_R15 | uVar3;
  *(undefined8 *)(lVar9 + -0x10) = uVar4;
  *(undefined8 *)(lVar9 + -0x18) = uVar4;
  *(undefined8 *)(lVar9 + -0x10) = *(undefined8 *)(lVar9 + -8);
  *(undefined8 *)(lVar9 + -0x18) = uVar5;
  *(undefined8 *)(lVar9 + -8) = 0;
  *(undefined8 *)(lVar9 + -0x18) = uVar6;
  FUN_1657a32b2();
  return;
}



// FUNCTION 14dbe736e FUN_14dbe736e body=187 status=ok
// SIG undefined FUN_14dbe736e(void)

void FUN_14dbe736e(void)

{
  return;
}



// FUNCTION 14dbe742a FUN_14dbe742a body=54 status=ok
// SIG undefined FUN_14dbe742a(void)

void FUN_14dbe742a(void)

{
  return;
}



// FUNCTION 14dbe74b6 FUN_14dbe74b6 body=146 status=ok
// SIG undefined FUN_14dbe74b6(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe786e) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7874) */
/* WARNING: Removing unreachable block (ram,0x00014dbe768d) */
/* WARNING: Removing unreachable block (ram,0x00014de28de3) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7693) */
/* WARNING: Removing unreachable block (ram,0x000162b7b98d) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9d7) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9cd) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9ea) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9f0) */
/* WARNING: Removing unreachable block (ram,0x00016574559c) */
/* WARNING: Removing unreachable block (ram,0x0001657455d9) */
/* WARNING: Removing unreachable block (ram,0x00014dbe753d) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7543) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7548) */
/* WARNING: Removing unreachable block (ram,0x00014dbe75d6) */
/* WARNING: Removing unreachable block (ram,0x00014df7025a) */
/* WARNING: Removing unreachable block (ram,0x00014dbe75dc) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7682) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7714) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7720) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7730) */
/* WARNING: Removing unreachable block (ram,0x00014dbe772b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe77ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbe77d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7869) */
/* WARNING: Removing unreachable block (ram,0x000165c03f22) */
/* WARNING: Removing unreachable block (ram,0x0001627604a8) */

void FUN_14dbe74b6(void)

{
  FUN_156f93a7d();
  return;
}



// FUNCTION 14dbe7548 FUN_14dbe7548 body=649 status=ok
// SIG undefined FUN_14dbe7548(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe786e) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7874) */
/* WARNING: Removing unreachable block (ram,0x00014dbe768d) */
/* WARNING: Removing unreachable block (ram,0x00014de28de3) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7693) */
/* WARNING: Removing unreachable block (ram,0x000162b7b98d) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9d7) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9cd) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9ea) */
/* WARNING: Removing unreachable block (ram,0x000162b7b9f0) */
/* WARNING: Removing unreachable block (ram,0x00016574559c) */
/* WARNING: Removing unreachable block (ram,0x0001657455d9) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7714) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7720) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7730) */
/* WARNING: Removing unreachable block (ram,0x00014dbe772b) */
/* WARNING: Removing unreachable block (ram,0x00014dbe77ca) */
/* WARNING: Removing unreachable block (ram,0x00014dbe77d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7869) */
/* WARNING: Removing unreachable block (ram,0x000165c03f22) */
/* WARNING: Removing unreachable block (ram,0x0001627604a8) */
/* WARNING: Removing unreachable block (ram,0x00014dbe75dc) */

void FUN_14dbe7548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014df70265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbe77d0 FUN_14dbe77d0 body=163 status=ok
// SIG undefined FUN_14dbe77d0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe786e) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7874) */
/* WARNING: Removing unreachable block (ram,0x0001627604a8) */

void FUN_14dbe77d0(void)

{
  FUN_1627604a8();
  return;
}



// FUNCTION 14dbe7874 FUN_14dbe7874 body=52 status=ok
// SIG undefined FUN_14dbe7874(void)

void FUN_14dbe7874(void)

{
  FUN_165813257();
  FUN_162be0619();
  return;
}



// FUNCTION 14dbe78a9 FUN_14dbe78a9 body=250 status=ok
// SIG undefined FUN_14dbe78a9(void)

void FUN_14dbe78a9(void)

{
  FUN_165813257();
  FUN_162be0619();
  return;
}



// FUNCTION 14dbe7c06 FUN_14dbe7c06 body=126 status=ok
// SIG undefined FUN_14dbe7c06(void)

ulonglong FUN_14dbe7c06(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dbe7c85 FUN_14dbe7c85 body=155 status=ok
// SIG undefined FUN_14dbe7c85(void)

void FUN_14dbe7c85(void)

{
  undefined8 in_stack_00000010;
  
  FUN_156b9dea5(in_stack_00000010);
  return;
}



// FUNCTION 14dbe7d21 FUN_14dbe7d21 body=316 status=ok
// SIG undefined FUN_14dbe7d21(void)

longlong FUN_14dbe7d21(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156832a83(param_1);
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14dbe7e69 FUN_14dbe7e69 body=444 status=ok
// SIG undefined FUN_14dbe7e69(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe8031) */
/* WARNING: Removing unreachable block (ram,0x000165089e36) */
/* WARNING: Removing unreachable block (ram,0x000165089e3c) */
/* WARNING: Removing unreachable block (ram,0x0001661fef76) */
/* WARNING: Removing unreachable block (ram,0x0001661ff01c) */
/* WARNING: Removing unreachable block (ram,0x0001661ff022) */
/* WARNING: Removing unreachable block (ram,0x00014db95155) */
/* WARNING: Removing unreachable block (ram,0x000165089d96) */
/* WARNING: Removing unreachable block (ram,0x000164eee55f) */
/* WARNING: Removing unreachable block (ram,0x00014db951e5) */
/* WARNING: Removing unreachable block (ram,0x00014db951eb) */
/* WARNING: Removing unreachable block (ram,0x00014db951f0) */
/* WARNING: Removing unreachable block (ram,0x000156b3e00e) */
/* WARNING: Removing unreachable block (ram,0x00014db9526c) */
/* WARNING: Removing unreachable block (ram,0x00014db95272) */
/* WARNING: Removing unreachable block (ram,0x00014db9527d) */
/* WARNING: Removing unreachable block (ram,0x0001658a2011) */
/* WARNING: Removing unreachable block (ram,0x00014db95500) */
/* WARNING: Removing unreachable block (ram,0x00014db95506) */
/* WARNING: Removing unreachable block (ram,0x000161890458) */
/* WARNING: Removing unreachable block (ram,0x000161890464) */
/* WARNING: Removing unreachable block (ram,0x00016189046b) */
/* WARNING: Removing unreachable block (ram,0x00014db955a0) */
/* WARNING: Removing unreachable block (ram,0x00014db955ac) */
/* WARNING: Removing unreachable block (ram,0x00014db955b1) */
/* WARNING: Removing unreachable block (ram,0x00014db95312) */
/* WARNING: Removing unreachable block (ram,0x00014db95318) */
/* WARNING: Removing unreachable block (ram,0x00014db9531d) */
/* WARNING: Removing unreachable block (ram,0x0001621f2eb8) */
/* WARNING: Removing unreachable block (ram,0x0001621f2f4f) */
/* WARNING: Removing unreachable block (ram,0x0001657cb1cb) */
/* WARNING: Removing unreachable block (ram,0x0001621f2f55) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fd7) */
/* WARNING: Removing unreachable block (ram,0x0001621f2fdd) */
/* WARNING: Removing unreachable block (ram,0x0001621f2ffb) */
/* WARNING: Removing unreachable block (ram,0x0001621f3002) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba117) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba141) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba13c) */
/* WARNING: Removing unreachable block (ram,0x00014e0ba144) */
/* WARNING: Removing unreachable block (ram,0x00014db9544d) */
/* WARNING: Removing unreachable block (ram,0x00014db95453) */
/* WARNING: Removing unreachable block (ram,0x00014db9545e) */
/* WARNING: Removing unreachable block (ram,0x00016554a877) */
/* WARNING: Removing unreachable block (ram,0x00015af3367e) */
/* WARNING: Removing unreachable block (ram,0x00015af336ea) */
/* WARNING: Removing unreachable block (ram,0x0001567f51ba) */
/* WARNING: Removing unreachable block (ram,0x0001567f51d4) */
/* WARNING: Removing unreachable block (ram,0x0001567f5270) */
/* WARNING: Removing unreachable block (ram,0x0001567f5276) */
/* WARNING: Removing unreachable block (ram,0x0001661c1653) */
/* WARNING: Removing unreachable block (ram,0x0001567f51d9) */
/* WARNING: Removing unreachable block (ram,0x000161173d50) */
/* WARNING: Removing unreachable block (ram,0x00014d833451) */
/* WARNING: Removing unreachable block (ram,0x00014dbe7fa1) */

undefined8
FUN_14dbe7e69(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar7 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x20) = 0x14dbe7f05;
  FUN_14d9dc072(unaff_retaddr,param_2,uVar7,0xfffffffeb2623f2a);
  *(int *)(local_res18 + -0x14) = *(int *)(local_res18 + -0x14) + 0x7faa359e;
  uVar5 = *(ulonglong *)(local_res18 + -0x18);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x58);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(unaff_R13 + -0x80);
  if (-1 < *(longlong *)(unaff_R13 + -0x40)) {
    uVar7 = FUN_15af3353c();
    return uVar7;
  }
  uVar4 = *(ulonglong *)(unaff_R13 + -0x90);
  *(undefined8 *)(local_res18 + -0x18) = 0;
  *(ulonglong *)(local_res18 + -0x18) = *(longlong *)(local_res18 + -0x18) - (~uVar4 + 1);
  uVar4 = *(ulonglong *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(unaff_R13 + -0x60);
  uVar10 = ~(*(ulonglong *)(local_res18 + -0x18) & uVar5);
  *(undefined8 *)(local_res18 + -0x18) = 0x15af335d0;
  FUN_165fb1821();
  uVar8 = 0xffffffffffffffff - ((~uVar5 | uVar4) & (~uVar5 & ~uVar4 | uVar5) ^ 0xffffffffffffffff) |
          uVar10;
  uVar11 = 0xffffffffffffffff - uVar10 | unaff_retaddr;
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(unaff_RDI + -0x70);
  uVar9 = -~*(ulonglong *)(local_res18 + -0x18) - 1;
  plVar2 = (longlong *)(local_res18 + -0x20);
  *plVar2 = -0x70;
  *(undefined4 *)plVar2 = 0xd961340;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  lVar1 = local_res18 + *plVar2 + -0xd961350;
  uVar4 = *(ulonglong *)(unaff_RDI + -0x80);
  *(undefined4 *)(lVar1 + -8) = 0xaf79ea7;
  *(undefined4 *)(lVar1 + -4) = 0x69d277cb;
  *(uint *)(lVar1 + -4) = *(uint *)(lVar1 + -4) ^ 0x69d277cb;
  uVar10 = *(ulonglong *)(lVar1 + -8) ^ 0xaf79ea7 ^ *(ulonglong *)(unaff_RDI + -0x68);
  if ((longlong)uVar10 < 0) {
    uVar7 = FUN_161173ce1();
    return uVar7;
  }
  *(ulonglong *)(lVar1 + -8) = (uVar11 - (uVar8 | uVar11)) + uVar8 ^ 0xffffffffffffffff;
  *(ulonglong *)(lVar1 + -0x10) = uVar4 ^ unaff_retaddr;
  uVar6 = *(undefined8 *)(lVar1 + -0x10);
  *(ulonglong *)(lVar1 + -8) = uVar10 + unaff_retaddr + (uVar10 & unaff_retaddr) * -2;
  uVar4 = *(ulonglong *)(unaff_RDI + -0x48);
  *(ulonglong *)(lVar1 + -8) = uVar9 + unaff_retaddr + (uVar9 & unaff_retaddr) * -2;
  *(ulonglong *)(lVar1 + -0x10) = unaff_retaddr;
  uVar10 = *(ulonglong *)(lVar1 + -0x10);
  *(undefined8 *)(lVar1 + -0x10) = 0;
  *(ulonglong *)(lVar1 + -0x10) =
       *(longlong *)(lVar1 + -0x10) -
       ~((~(~unaff_retaddr & uVar4) + uVar4) - (~unaff_retaddr ^ 0xffffffffffffffff) &
        (~uVar4 | uVar10));
  uVar7 = *(undefined8 *)(lVar1 + -8);
  *(ulonglong *)(lVar1 + -8) = uVar3 ^ uVar5;
  *(longlong *)(lVar1 + -8) = -*(longlong *)(lVar1 + -0x10);
  *(longlong *)(lVar1 + -0x10) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x10) = uVar7;
  *(undefined8 *)(lVar1 + -0x18) = uVar7;
  *(undefined8 *)(lVar1 + -0x20) = uVar7;
  *(code **)(lVar1 + -0x10) = FUN_15b63b577;
  *(undefined8 *)(lVar1 + -0x18) = 0x16260a2db;
  return uVar6;
}



// FUNCTION 14dbe8031 FUN_14dbe8031 body=145 status=ok
// SIG undefined FUN_14dbe8031(void)

void FUN_14dbe8031(void)

{
  undefined8 in_stack_00000008;
  
  FUN_164f491cd(in_stack_00000008);
  FUN_14dbe80c5();
  return;
}



// FUNCTION 14dbe80c5 FUN_14dbe80c5 body=186 status=ok
// SIG undefined FUN_14dbe80c5(void)

void FUN_14dbe80c5(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (*(ulonglong *)(unaff_R13 + -0x88) | ~unaff_R15) + ~*(ulonglong *)(unaff_R13 + -0x88) + 1;
  FUN_15b21d092(param_1,uVar1,uVar1 | unaff_R15,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dbe834d FUN_14dbe834d body=76 status=ok
// SIG undefined FUN_14dbe834d(void)

void FUN_14dbe834d(void)

{
  return;
}



// FUNCTION 14dbe8570 FUN_14dbe8570 body=142 status=ok
// SIG undefined FUN_14dbe8570(void)

void FUN_14dbe8570(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong *puVar2;
  ulonglong local_res10 [3];
  
  puVar2 = (ulonglong *)((longlong)local_res10 + unaff_RBP);
  uVar1 = *puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = ~*puVar2;
  *puVar2 = *puVar2 & ~in_RAX;
  *puVar2 = ~*puVar2;
  *puVar2 = ~((0xffffffffffffffff - in_RAX | uVar1) & *puVar2);
  local_res10[1] = param_1;
  FUN_164ae040e();
  FUN_14dbe8601();
  return;
}



// FUNCTION 14dbe8601 FUN_14dbe8601 body=161 status=ok
// SIG undefined FUN_14dbe8601(void)

void FUN_14dbe8601(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  param_4 = param_4 ^ *(ulonglong *)(unaff_RDI + -0x60);
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) & param_1;
  (*(code *)0x1619007c7)
            (param_1,*(ulonglong *)(unaff_RDI + -0x70) + param_1,
             uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0),
             -1 - ((~param_1 | param_4) & (~param_4 | param_1)));
  return;
}



// FUNCTION 14dbe86a2 FUN_14dbe86a2 body=304 status=ok
// SIG undefined FUN_14dbe86a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe8846) */
/* WARNING: Removing unreachable block (ram,0x00014dbe883b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbe86a2(void)

{
  ulonglong unaff_RBX;
  longlong lVar1;
  
  lVar1 = unaff_RBX + 0x30aaad0d + (unaff_RBX & 0x30aaad0d) * -2;
  *(undefined4 *)(&stack0x30aaad15 + lVar1 + -0x30aaad0d) = 0;
  *(uint *)(&stack0x30aaad15 + lVar1 + -0x30aaad0d) =
       *(uint *)(&stack0x30aaad15 + lVar1 + -0x30aaad0d) ^ 0xffffffff;
  FUN_15b5f1d18();
  FUN_1573a6230();
  FUN_166154388();
  return;
}



// FUNCTION 14dbe87da FUN_14dbe87da body=108 status=ok
// SIG undefined FUN_14dbe87da(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe8846) */
/* WARNING: Removing unreachable block (ram,0x00014dbe883b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbe87da(uint param_1,int param_2)

{
  uint unaff_EDI;
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = (~param_1 | param_2 + in_stack_00000010) & (~(param_2 + in_stack_00000010) | param_1);
  FUN_166154388(param_1,~uVar1,(-1 - (~(unaff_EDI ^ 0xffffffff) & uVar1)) + unaff_EDI);
  return;
}



// FUNCTION 14dbe8846 FUN_14dbe8846 body=147 status=ok
// SIG undefined FUN_14dbe8846(void)

void FUN_14dbe8846(undefined8 param_1)

{
  longlong unaff_R12;
  
  FUN_1575dd176(param_1,*(undefined8 *)(unaff_R12 + -0xa0),FUN_1575dd176);
  return;
}



// FUNCTION 14dbe8a1f FUN_14dbe8a1f body=156 status=ok
// SIG undefined FUN_14dbe8a1f(void)

void FUN_14dbe8a1f(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1657fdf5c(param_1,FUN_1657fdf5c,
                *(ulonglong *)(unaff_RDI + -0x50) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x50) & param_1) * -2);
  return;
}



// FUNCTION 14dbe8c24 FUN_14dbe8c24 body=147 status=ok
// SIG undefined FUN_14dbe8c24(void)

/* WARNING: Removing unreachable block (ram,0x00015b4b4bf9) */
/* WARNING: Removing unreachable block (ram,0x00014d9eef9e) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4b64) */
/* WARNING: Removing unreachable block (ram,0x00014dbe8cb6) */
/* WARNING: Removing unreachable block (ram,0x00014dbe8cbd) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4a63) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4b68) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4bae) */
/* WARNING: Removing unreachable block (ram,0x00014d9eef17) */
/* WARNING: Removing unreachable block (ram,0x000162769df5) */
/* WARNING: Removing unreachable block (ram,0x00014d9eef93) */
/* WARNING: Removing unreachable block (ram,0x00014d9eef99) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4bb4) */
/* WARNING: Removing unreachable block (ram,0x00015b4b4ba9) */

void FUN_14dbe8c24(void)

{
  FUN_15b4b4a63();
  return;
}



// FUNCTION 14dbe8cbd FUN_14dbe8cbd body=145 status=ok
// SIG undefined FUN_14dbe8cbd(void)

void FUN_14dbe8cbd(void)

{
  FUN_14de82e07();
  FUN_14dbe8d50();
  return;
}



// FUNCTION 14dbe8d50 FUN_14dbe8d50 body=144 status=ok
// SIG undefined FUN_14dbe8d50(void)

void FUN_14dbe8d50(void)

{
  FUN_14e101d78();
  return;
}



// FUNCTION 14dbe8f37 FUN_14dbe8f37 body=175 status=ok
// SIG undefined FUN_14dbe8f37(void)

void FUN_14dbe8f37(void)

{
  undefined4 unaff_EBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b76091a(unaff_EBX,FUN_15b76091a,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  return;
}



// FUNCTION 14dbe908c FUN_14dbe908c body=12 status=ok
// SIG undefined FUN_14dbe908c(void)

void FUN_14dbe908c(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dbe924e FUN_14dbe924e body=144 status=ok
// SIG undefined FUN_14dbe924e(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe92ca) */

void FUN_14dbe924e(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStackX_1c;
  undefined1 auStack_cee [3302];
  code *local_8;
  
  local_8 = FUN_14dbe92e0;
  FUN_16175c7a4(param_1);
  *(undefined4 *)(0xd09 - ~(ulonglong)auStack_cee) = 0;
  FUN_1614b3b8b(CONCAT44(uStackX_1c,param_2) ^ 0x43e1dd78,FUN_1614b3b8b);
  return;
}



// FUNCTION 14dbe92e0 FUN_14dbe92e0 body=130 status=ok
// SIG undefined FUN_14dbe92e0(void)

void FUN_14dbe92e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStackX_1c;
  undefined1 local_cee [3310];
  
  *(undefined4 *)(0xd09 - ~(ulonglong)local_cee) = 0;
  FUN_1614b3b8b(CONCAT44(uStackX_1c,param_2) ^ 0x43e1dd78,FUN_1614b3b8b);
  return;
}



// FUNCTION 14dbe9364 FUN_14dbe9364 body=143 status=ok
// SIG undefined FUN_14dbe9364(void)

void FUN_14dbe9364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  undefined1 local_res8 [8];
  ulonglong in_stack_00000010;
  
  FUN_161059339(param_1,FUN_161059339,param_3,local_res8,
                ~(in_stack_00000010 & unaff_R15) & (in_stack_00000010 | unaff_R15));
  return;
}



// FUNCTION 14dbe948d FUN_14dbe948d body=306 status=ok
// SIG undefined FUN_14dbe948d(void)

/* WARNING: Instruction at (ram,0x00014dbe9538) overlaps instruction at (ram,0x00014dbe9537)
    */
/* WARNING: Removing unreachable block (ram,0x00014dbe9579) */

void FUN_14dbe948d(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_15b19825b(param_1,param_2 ^ unaff_R15);
  return;
}



// FUNCTION 14dbe98b3 FUN_14dbe98b3 body=175 status=ok
// SIG undefined FUN_14dbe98b3(void)

void FUN_14dbe98b3(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 in_stack_00000008;
  ushort auStackX_10 [4];
  undefined8 uStackX_18;
  
  puVar1 = (ushort *)((longlong)auStackX_10 + param_3);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + (-0x101 - (uVar2 | 0xfeff)) + uVar3;
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = unaff_R13;
  *(undefined8 *)(param_5 + -0x18) = unaff_R13;
  *(undefined8 *)(param_5 + -0x20) = unaff_RSI;
  (*(code *)0x1649b0b35)(uStackX_18,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dbe9962 FUN_14dbe9962 body=468 status=ok
// SIG undefined FUN_14dbe9962(void)

/* WARNING: Removing unreachable block (ram,0x000156365522) */
/* WARNING: Removing unreachable block (ram,0x000156365528) */
/* WARNING: Removing unreachable block (ram,0x000161d36353) */
/* WARNING: Removing unreachable block (ram,0x0001617f8ef3) */
/* WARNING: Removing unreachable block (ram,0x0001563654a1) */
/* WARNING: Removing unreachable block (ram,0x0001617f8f74) */
/* WARNING: Removing unreachable block (ram,0x0001617f8f7f) */
/* WARNING: Removing unreachable block (ram,0x0001617f8f7a) */
/* WARNING: Removing unreachable block (ram,0x0001617f8e5c) */
/* WARNING: Removing unreachable block (ram,0x0001617f8eed) */
/* WARNING: Removing unreachable block (ram,0x00016592b46a) */
/* WARNING: Removing unreachable block (ram,0x00014dbe99fa) */

undefined8 FUN_14dbe9962(void)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ushort local_res10;
  longlong lStackX_18;
  
  uVar2 = ~(~local_res10 & 0xfeff) - 0x100;
  if ((short)uVar2 < 0) {
    uVar1 = FUN_1617f8dd3();
    return uVar1;
  }
  *(undefined8 *)(lStackX_18 + -8) = unaff_R12;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RSI;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RSI;
  if ((uVar2 & 0x80) == 0) {
    *(undefined8 *)(lStackX_18 + -0x20) = unaff_RDI;
    *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
    uVar1 = *(undefined8 *)(lStackX_18 + -0x18);
    *(undefined8 *)(lStackX_18 + -0x18) = in_R10;
    *(undefined8 *)(lStackX_18 + -0x20) = *(undefined8 *)(lStackX_18 + -0x20);
    *(undefined8 *)(lStackX_18 + -0x28) = uVar1;
    *(undefined8 *)(lStackX_18 + -8) = 0;
    *(longlong *)(lStackX_18 + -8) = (longlong)(&LAB_1611b5ce8 + *(longlong *)(lStackX_18 + -8));
    *(undefined8 *)(lStackX_18 + -0x18) = in_R11;
    uVar1 = thunk_FUN_15b642ca5();
    return uVar1;
  }
  uVar1 = FUN_1611b5c5e();
  return uVar1;
}



// FUNCTION 14dbe9b42 FUN_14dbe9b42 body=282 status=ok
// SIG undefined FUN_14dbe9b42(void)

/* WARNING: Removing unreachable block (ram,0x00014dbe9bca) */
/* WARNING: Removing unreachable block (ram,0x00014dbe9c59) */
/* WARNING: Removing unreachable block (ram,0x0001649a0608) */
/* WARNING: Removing unreachable block (ram,0x00014dbe9c5f) */

void FUN_14dbe9b42(void)

{
  longlong in_R9;
  
  if (in_R9 == 0x12ba1a) {
    FUN_165e93f27();
    return;
  }
  FUN_1649999cc();
  return;
}



// FUNCTION 14dbe9c5f FUN_14dbe9c5f body=155 status=ok
// SIG undefined FUN_14dbe9c5f(void)

void FUN_14dbe9c5f(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16107478c(*(undefined8 *)(unaff_R13 + -0x78),
                *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2,param_3 ^ unaff_R15);
  return;
}



// FUNCTION 14dbe9e1a FUN_14dbe9e1a body=192 status=ok
// SIG undefined FUN_14dbe9e1a(void)

void FUN_14dbe9e1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  uVar2 = ~(local_res18 & unaff_R15) & (local_res18 | unaff_R15);
  *(undefined8 *)(uVar2 - 8) = unaff_R14;
  *(undefined1 **)(uVar2 - 0x10) = &LAB_14e2350bd;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_14e2350bd;
  lVar3 = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = param_2;
  *(undefined4 *)(uVar2 - 0x28) = 0x2161b566;
  *(undefined4 *)(uVar2 - 0x24) = 0;
  uVar5 = *(longlong *)(uVar2 - 0x28) + 0x4f5d2ea5U ^ 0x70bee403;
  *(undefined8 *)((uVar2 - 0x18) + uVar5) = 0;
  plVar1 = (longlong *)((uVar2 - 0x18) + uVar5);
  *plVar1 = *plVar1 - lVar3;
  plVar1 = (longlong *)((uVar2 - 0x18) + uVar5);
  *plVar1 = -*plVar1;
  uVar4 = *(undefined8 *)(uVar2 - 0x20);
  *(undefined8 *)(uVar2 - 0x28) = in_RAX;
  FUN_14e23504e(param_1,uVar4,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dbe9edc FUN_14dbe9edc body=769 status=ok
// SIG undefined FUN_14dbe9edc(void)

/* WARNING: Removing unreachable block (ram,0x000156a43432) */
/* WARNING: Removing unreachable block (ram,0x00014dbe9f83) */

void FUN_14dbe9edc(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70);
  FUN_164f29ced(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                (param_1 - uVar1) + ~uVar1 * -2 + -2 + ~(~uVar1 | ~param_1) * -2,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dbea011 FUN_14dbea011 body=170 status=ok
// SIG undefined FUN_14dbea011(void)

void FUN_14dbea011(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_160f53471(param_1,param_2,
                (~*(ulonglong *)(unaff_R12 + -0x38) + in_RAX) -
                (~*(ulonglong *)(unaff_R12 + -0x38) & in_RAX),FUN_160f53471);
  return;
}



// FUNCTION 14dbea0bc FUN_14dbea0bc body=166 status=ok
// SIG undefined FUN_14dbea0bc(void)

/* WARNING: Removing unreachable block (ram,0x00014dbea157) */
/* WARNING: Removing unreachable block (ram,0x00014dbea162) */
/* WARNING: Removing unreachable block (ram,0x0001623c66cf) */
/* WARNING: Removing unreachable block (ram,0x0001623c66da) */
/* WARNING: Removing unreachable block (ram,0x0001623c66d5) */
/* WARNING: Removing unreachable block (ram,0x00014dbea15d) */

void FUN_14dbea0bc(void)

{
  return;
}



// FUNCTION 14dbea162 FUN_14dbea162 body=162 status=ok
// SIG undefined FUN_14dbea162(void)

void FUN_14dbea162(void)

{
  longlong unaff_R13;
  
  FUN_166aac76c(*(undefined8 *)(unaff_R13 + -0x78),FUN_166aac76c);
  return;
}



// FUNCTION 14dbea205 FUN_14dbea205 body=105 status=ok
// SIG undefined FUN_14dbea205(void)

void FUN_14dbea205(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong in_R10;
  undefined8 unaff_R15;
  ulonglong local_res20;
  
  lVar1 = (in_R10 - (~local_res20 | in_R10)) + ~local_res20;
  *(undefined8 *)(lVar1 + -8) = unaff_R15;
  *(undefined8 *)(lVar1 + -0x10) = param_3;
  *(undefined8 *)(lVar1 + -0x18) = 0x168695292;
  *(undefined8 *)(lVar1 + -0x20) = 0x168695292;
  *(undefined1 **)(lVar1 + -0x18) = &LAB_14dbea26f;
  return;
}



// FUNCTION 14dbea2ac FUN_14dbea2ac body=365 status=ok
// SIG undefined FUN_14dbea2ac(void)

/* WARNING: Removing unreachable block (ram,0x00014dbea352) */

undefined8 FUN_14dbea2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  
  uVar1 = FUN_1564a9ea4(in_stack_00000010,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dbea352 FUN_14dbea352 body=21 status=ok
// SIG undefined FUN_14dbea352(void)

undefined8 FUN_14dbea352(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbea4c7 FUN_14dbea4c7 body=38 status=ok
// SIG undefined FUN_14dbea4c7(void)

void FUN_14dbea4c7(void)

{
  return;
}



// FUNCTION 14dbea550 FUN_14dbea550 body=233 status=ok
// SIG undefined FUN_14dbea550(void)

/* WARNING: Removing unreachable block (ram,0x00014dbea5ea) */
/* WARNING: Removing unreachable block (ram,0x00014dbea5f0) */
/* WARNING: Removing unreachable block (ram,0x0001621e2541) */

void FUN_14dbea550(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 in_R11;
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
  undefined8 local_res8;
  ushort uStackX_10;
  uint6 uStackX_12;
  ulonglong local_res18;
  
  puVar2 = (undefined8 *)~((param_1 ^ 0xffffffffffffffff | local_res18) & (~local_res18 | param_1));
  bVar12 = (uStackX_10 & 0x4000) != 0;
  bVar11 = (uStackX_10 & 0x800) != 0;
  bVar10 = (uStackX_10 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uStackX_10 & 0x80) != 0;
  bVar7 = (uStackX_10 & 0x40) != 0;
  bVar6 = (uStackX_10 & 0x10) != 0;
  bVar5 = (uStackX_10 & 4) != 0;
  bVar4 = (uStackX_10 & 1) != 0;
  bVar16 = (uStackX_12 & 0x20) != 0;
  bVar13 = (uStackX_12 & 4) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)(local_res8,param_2,param_3);
  *puVar2 = in_R11;
  puVar2[-1] = in_R11;
  puVar2[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar2[-2];
  puVar2[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar2[-3] = uVar3;
  uVar17 = puVar2[-2];
  puVar2[-2] = puVar2[-3];
  puVar2[-3] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *puVar2 = 0x790a884;
  puVar2[-1] = param_4;
  puVar2[-2] = param_4;
  puVar2[-1] = FUN_165c7153c;
  return;
}



// FUNCTION 14dbea7f6 FUN_14dbea7f6 body=306 status=ok
// SIG undefined FUN_14dbea7f6(void)

void FUN_14dbea7f6(void)

{
  ulonglong in_RAX;
  undefined2 in_R11W;
  
  FUN_161149c29(in_R11W,0xffffffffffffffc0,FUN_161149c29,~in_RAX);
  (*(code *)0x15b45c320)();
  return;
}



// FUNCTION 14dbeaaef FUN_14dbeaaef body=106 status=ok
// SIG undefined FUN_14dbeaaef(void)

void FUN_14dbeaaef(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined8 unaff_R14;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  undefined8 *puStackX_18;
  
  bVar14 = (uStackX_10 & 0x4000) != 0;
  bVar13 = (uStackX_10 & 0x800) != 0;
  bVar12 = (uStackX_10 & 0x400) != 0;
  bVar11 = (uStackX_10 & 0x200) != 0;
  bVar10 = (uStackX_10 & 0x100) != 0;
  bVar9 = (uStackX_10 & 0x80) != 0;
  bVar8 = (uStackX_10 & 0x40) != 0;
  bVar7 = (uStackX_10 & 0x10) != 0;
  bVar6 = (uStackX_10 & 4) != 0;
  bVar5 = (uStackX_10 & 1) != 0;
  bVar18 = (uStackX_10 & 0x200000) != 0;
  bVar15 = (uStackX_10 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar2 = (code *)swi(0x2e);
  uVar3 = (*pcVar2)();
  *puStackX_18 = uVar3;
  puStackX_18[-1] = uVar3;
  puStackX_18[-2] =
       (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
       (ulonglong)bVar12 * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100
       | (ulonglong)(bVar9 & 1) * 0x80 | (ulonglong)(bVar8 & 1) * 0x40 |
       (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
       (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
       (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  puStackX_18[-4] = unaff_retaddr;
  puStackX_18[-3] = 0x141fa7fb;
  puStackX_18[-4] = unaff_R14;
  puStackX_18[-5] = unaff_RSI;
  uVar1 = puStackX_18[-3];
  uVar4 = uVar1 - 0xce2c98b;
  puStackX_18[-3] = uVar4;
  puStackX_18[-3] = puStackX_18[-5];
  puStackX_18[-4] =
       (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)SBORROW8(uVar1,0xce2c98b) * 0x800 |
       (ulonglong)bVar12 * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100
       | (ulonglong)((longlong)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar1 < 0xce2c98b) | (ulonglong)(bVar18 & 1) * 0x200000 |
       (ulonglong)(bVar17 & 1) * 0x100000 | (ulonglong)(bVar16 & 1) * 0x80000 |
       (ulonglong)(bVar15 & 1) * 0x40000;
  *puStackX_18 = 0x73cde70;
  FUN_1571bc2fe();
  return;
}



// FUNCTION 14dbeabee FUN_14dbeabee body=180 status=ok
// SIG undefined FUN_14dbeabee(void)

/* WARNING: Removing unreachable block (ram,0x00014dbeaca2) */

void FUN_14dbeabee(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15 & 0x7fffffffffffffff) == 0) {
    FUN_1668ffcae();
    return;
  }
  return;
}



// FUNCTION 14dbeaca2 FUN_14dbeaca2 body=174 status=ok
// SIG undefined FUN_14dbeaca2(void)

void FUN_14dbeaca2(void)

{
  return;
}



// FUNCTION 14dbead51 FUN_14dbead51 body=713 status=ok
// SIG undefined FUN_14dbead51(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbead51(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  FUN_1619f64e3(in_stack_00000008);
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_14db57775(0xffffffffabf55efd,0xffffffffa3c45cd2,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                ~(*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP));
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_15b290695();
  return;
}



// FUNCTION 14dbeaf02 FUN_14dbeaf02 body=493 status=ok
// SIG undefined FUN_14dbeaf02(void)

/* WARNING: Removing unreachable block (ram,0x00014dbeb024) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb02a) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb02f) */
/* WARNING: Removing unreachable block (ram,0x00014dbeaf95) */

undefined8
FUN_14dbeaf02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1571e8e04(FUN_1571e8e04,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dbeb2d0 FUN_14dbeb2d0 body=155 status=ok
// SIG undefined FUN_14dbeb2d0(void)

void FUN_14dbeb2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000010;
  
  FUN_160f6a031(param_1,FUN_160f6a031,in_stack_00000010,param_4);
  return;
}



// FUNCTION 14dbeb36d FUN_14dbeb36d body=164 status=ok
// SIG undefined FUN_14dbeb36d(void)

void FUN_14dbeb36d(void)

{
  return;
}



// FUNCTION 14dbeb6b9 FUN_14dbeb6b9 body=585 status=ok
// SIG undefined FUN_14dbeb6b9(void)

void FUN_14dbeb6b9(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x165cd66f6)
            (~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
             ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
              (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)));
  return;
}



// FUNCTION 14dbeb74b FUN_14dbeb74b body=448 status=ok
// SIG undefined FUN_14dbeb74b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015b07f54d) overlaps instruction at (ram,0x00015b07f54c)
    */
/* WARNING: Removing unreachable block (ram,0x0001567f6f57) */
/* WARNING: Removing unreachable block (ram,0x0001567f6f62) */
/* WARNING: Removing unreachable block (ram,0x0001567f6ff5) */
/* WARNING: Removing unreachable block (ram,0x0001567f6ffa) */
/* WARNING: Removing unreachable block (ram,0x0001567f7000) */
/* WARNING: Removing unreachable block (ram,0x0001567f70cf) */
/* WARNING: Removing unreachable block (ram,0x000161a14e8a) */
/* WARNING: Removing unreachable block (ram,0x000161a14f17) */
/* WARNING: Removing unreachable block (ram,0x000161a14f28) */
/* WARNING: Removing unreachable block (ram,0x000166466d90) */
/* WARNING: Removing unreachable block (ram,0x000161a14f2e) */
/* WARNING: Removing unreachable block (ram,0x000166adb0c0) */
/* WARNING: Removing unreachable block (ram,0x000161a15054) */
/* WARNING: Removing unreachable block (ram,0x000161a1505a) */
/* WARNING: Removing unreachable block (ram,0x000161a1505f) */
/* WARNING: Removing unreachable block (ram,0x000161a150cb) */
/* WARNING: Removing unreachable block (ram,0x000161a150d8) */
/* WARNING: Removing unreachable block (ram,0x000161a151b4) */
/* WARNING: Removing unreachable block (ram,0x000161a151ba) */
/* WARNING: Removing unreachable block (ram,0x000161a151bf) */
/* WARNING: Removing unreachable block (ram,0x0001665e221d) */
/* WARNING: Removing unreachable block (ram,0x0001665e22ac) */
/* WARNING: Removing unreachable block (ram,0x000161b2f6cd) */
/* WARNING: Removing unreachable block (ram,0x000161b2f782) */
/* WARNING: Removing unreachable block (ram,0x000161b2f78d) */
/* WARNING: Removing unreachable block (ram,0x000161b2f78e) */
/* WARNING: Removing unreachable block (ram,0x000161b2f7cf) */
/* WARNING: Removing unreachable block (ram,0x000161b2f7d4) */
/* WARNING: Removing unreachable block (ram,0x000161b2f7da) */
/* WARNING: Removing unreachable block (ram,0x0001612c1d56) */
/* WARNING: Removing unreachable block (ram,0x0001665e22b2) */
/* WARNING: Removing unreachable block (ram,0x00014ddb4b3e) */
/* WARNING: Removing unreachable block (ram,0x0001665e232b) */
/* WARNING: Removing unreachable block (ram,0x0001665e2331) */
/* WARNING: Removing unreachable block (ram,0x0001665e233c) */
/* WARNING: Removing unreachable block (ram,0x0001665e2346) */
/* WARNING: Removing unreachable block (ram,0x0001665e23b5) */
/* WARNING: Removing unreachable block (ram,0x0001665e23c7) */
/* WARNING: Removing unreachable block (ram,0x000164f9d6fe) */
/* WARNING: Removing unreachable block (ram,0x000164f9d739) */
/* WARNING: Removing unreachable block (ram,0x000164f9d77c) */
/* WARNING: Removing unreachable block (ram,0x00015b07f500) */
/* WARNING: Removing unreachable block (ram,0x00015b07f506) */
/* WARNING: Removing unreachable block (ram,0x00015b07f54a) */
/* WARNING: Removing unreachable block (ram,0x00015b07f54d) */
/* WARNING: Removing unreachable block (ram,0x0001665ab511) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb7d0) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb7d6) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb86b) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb870) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb876) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb89b) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb8b4) */
/* WARNING: Removing unreachable block (ram,0x00015b07f47e) */
/* WARNING: Removing unreachable block (ram,0x00015b07f4fb) */
/* WARNING: Removing unreachable block (ram,0x000166cb2e33) */
/* WARNING: Removing unreachable block (ram,0x000166cb2eb5) */
/* WARNING: Removing unreachable block (ram,0x000166cb2eba) */
/* WARNING: Removing unreachable block (ram,0x000162810d90) */
/* WARNING: Removing unreachable block (ram,0x000166cb2ec0) */
/* WARNING: Removing unreachable block (ram,0x000166cb306b) */
/* WARNING: Removing unreachable block (ram,0x000166cb3071) */
/* WARNING: Removing unreachable block (ram,0x000166cb3076) */
/* WARNING: Removing unreachable block (ram,0x000166cb3171) */
/* WARNING: Removing unreachable block (ram,0x000166cb317c) */
/* WARNING: Removing unreachable block (ram,0x000166030896) */
/* WARNING: Removing unreachable block (ram,0x000166cb3182) */
/* WARNING: Removing unreachable block (ram,0x000166cb31bd) */
/* WARNING: Removing unreachable block (ram,0x000166cb31c1) */
/* WARNING: Removing unreachable block (ram,0x000166cb322a) */
/* WARNING: Removing unreachable block (ram,0x000166cb322f) */
/* WARNING: Removing unreachable block (ram,0x000166cb3235) */
/* WARNING: Removing unreachable block (ram,0x000166cb323a) */
/* WARNING: Removing unreachable block (ram,0x000166cb329e) */
/* WARNING: Removing unreachable block (ram,0x000166cb32a4) */
/* WARNING: Removing unreachable block (ram,0x000166cb3356) */
/* WARNING: Removing unreachable block (ram,0x000166cb3361) */
/* WARNING: Removing unreachable block (ram,0x000166cb335c) */
/* WARNING: Removing unreachable block (ram,0x000166cb3351) */
/* WARNING: Removing unreachable block (ram,0x00015b04d746) */
/* WARNING: Removing unreachable block (ram,0x000160c64f57) */
/* WARNING: Removing unreachable block (ram,0x000165e8470e) */
/* WARNING: Removing unreachable block (ram,0x000165e847a7) */
/* WARNING: Removing unreachable block (ram,0x000165e847ad) */
/* WARNING: Removing unreachable block (ram,0x000160c64fc3) */
/* WARNING: Removing unreachable block (ram,0x000160c64fc9) */
/* WARNING: Removing unreachable block (ram,0x000160c64fce) */
/* WARNING: Removing unreachable block (ram,0x0001567f6edb) */
/* WARNING: Removing unreachable block (ram,0x000157879a04) */
/* WARNING: Removing unreachable block (ram,0x0001567f6f5d) */

undefined8 FUN_14dbeb74b(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_166cb2e39();
  return uVar1;
}



// FUNCTION 14dbeb90b FUN_14dbeb90b body=172 status=ok
// SIG undefined FUN_14dbeb90b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbeb9ad) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb9b8) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb9b3) */

void FUN_14dbeb90b(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_161459e39(*(longlong *)(unaff_RSI + -0x70) + unaff_RBP,FUN_161459e39,
                ~(~(unaff_RBP & (*(ulonglong *)(unaff_RSI + -0x60) ^ 0xffffffffffffffff)) &
                 (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP)),
                -1 - ((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x28)) &
                     (0xffffffffffffffff - *(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP)));
  return;
}



// FUNCTION 14dbeb9b8 FUN_14dbeb9b8 body=52 status=ok
// SIG undefined FUN_14dbeb9b8(void)

void FUN_14dbeb9b8(void)

{
  return;
}



// FUNCTION 14dbeba6e FUN_14dbeba6e body=132 status=ok
// SIG undefined FUN_14dbeba6e(void)

void FUN_14dbeba6e(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong *unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R14;
  undefined8 local_res10;
  
  *unaff_RSI = -*unaff_RSI;
  *unaff_RSI = *unaff_RSI - 1;
  *unaff_RSI = (~((in_RAX - (unaff_R14 | in_RAX)) + unaff_R14) + in_RAX) - *unaff_RSI;
  *unaff_RSI = ~(in_R10 & *unaff_RSI);
  FUN_14da4340a();
  (*(code *)0x1568cf7ee)(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14dbebaf2 FUN_14dbebaf2 body=280 status=ok
// SIG undefined FUN_14dbebaf2(void)

void FUN_14dbebaf2(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  (*(code *)0x1568cf7ee)(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dbebb87 FUN_14dbebb87 body=152 status=ok
// SIG undefined FUN_14dbebb87(void)

void FUN_14dbebb87(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15753c927(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (*(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff | unaff_R15)));
  return;
}



// FUNCTION 14dbebd70 FUN_14dbebd70 body=402 status=ok
// SIG undefined FUN_14dbebd70(void)

/* WARNING: Removing unreachable block (ram,0x00014dbebe1e) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe29) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe24) */

undefined8 FUN_14dbebd70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14d9e1681();
  return uVar1;
}



// FUNCTION 14dbebf04 FUN_14dbebf04 body=147 status=ok
// SIG undefined FUN_14dbebf04(void)

undefined8 FUN_14dbebf04(void)

{
  ulonglong in_RAX;
  longlong unaff_R14;
  
  *(ulonglong *)(unaff_R14 + 8) = (~in_RAX | *(ulonglong *)(unaff_R14 + 8)) + in_RAX + 1;
  return 0xffff;
}



// FUNCTION 14dbec029 FUN_14dbec029 body=797 status=ok
// SIG undefined FUN_14dbec029(void)

/* WARNING: Removing unreachable block (ram,0x000160b55e8a) */
/* WARNING: Removing unreachable block (ram,0x00014dbec0cd) */

void FUN_14dbec029(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14dc976c1(FUN_14dc976c1,
                ~(*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15) + 1 + unaff_R15 +
                *(ulonglong *)(unaff_R13 + -0x48),*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  FUN_161247298();
  return;
}



// FUNCTION 14dbec21d FUN_14dbec21d body=159 status=ok
// SIG undefined FUN_14dbec21d(void)

void FUN_14dbec21d(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_15698f565(0xffffffffffffffb8,param_2,
                ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1);
  FUN_14d937319();
  return;
}



// FUNCTION 14dbec2bc FUN_14dbec2bc body=171 status=ok
// SIG undefined FUN_14dbec2bc(void)

void FUN_14dbec2bc(void)

{
  FUN_14d937319();
  return;
}



// FUNCTION 14dbec368 FUN_14dbec368 body=714 status=ok
// SIG undefined FUN_14dbec368(void)

/* WARNING: Removing unreachable block (ram,0x00014dbec3e6) */
/* WARNING: Removing unreachable block (ram,0x00016643d4a3) */
/* WARNING: Removing unreachable block (ram,0x00016643d4a9) */
/* WARNING: Removing unreachable block (ram,0x00016643d4ae) */
/* WARNING: Removing unreachable block (ram,0x00014dbec484) */
/* WARNING: Removing unreachable block (ram,0x00016492e24b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x0001568533d9 */
/* WARNING: Removing unreachable block (ram,0x00014dbec3f8) */
/* WARNING: Removing unreachable block (ram,0x00014dbec460) */
/* WARNING: Removing unreachable block (ram,0x00014dbec47e) */
/* WARNING: Removing unreachable block (ram,0x00016643d416) */
/* WARNING: Removing unreachable block (ram,0x00016643d467) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dbec368(void)

{
  undefined8 uVar1;
  
  FUN_156530c73();
  uVar1 = (*(code *)0x1660747b4)();
  return uVar1;
}



// FUNCTION 14dbec6da FUN_14dbec6da body=128 status=ok
// SIG undefined FUN_14dbec6da(void)

void FUN_14dbec6da(void)

{
  FUN_14d7aa3b4();
  return;
}



// FUNCTION 14dbec777 FUN_14dbec777 body=40 status=ok
// SIG undefined FUN_14dbec777(void)

undefined8 FUN_14dbec777(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbeca35 FUN_14dbeca35 body=139 status=ok
// SIG undefined FUN_14dbeca35(void)

void FUN_14dbeca35(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x162e4abb3)(param_1,0x162e4abb3,param_3,param_4);
  return;
}



// FUNCTION 14dbeccdd FUN_14dbeccdd body=239 status=ok
// SIG undefined FUN_14dbeccdd(void)

void FUN_14dbeccdd(void)

{
  FUN_165dbe662();
  FUN_1663301d6();
  return;
}



// FUNCTION 14dbecdd2 FUN_14dbecdd2 body=15 status=ok
// SIG undefined FUN_14dbecdd2(void)

void FUN_14dbecdd2(void)

{
  ulonglong unaff_RBX;
  ulonglong *unaff_RDI;
  ulonglong unaff_retaddr;
  
  *unaff_RDI = unaff_RBX ^ unaff_retaddr;
  *(int *)unaff_RDI = (int)(unaff_RBX ^ unaff_retaddr);
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dbecde1 FUN_14dbecde1 body=75 status=ok
// SIG undefined FUN_14dbecde1(void)

void FUN_14dbecde1(void)

{
  ulonglong unaff_retaddr;
  undefined8 local_res8;
  
  if ((longlong)local_res8 < 0) {
    unaff_retaddr = unaff_retaddr & 0xffffffff ^ 0xab9f8da33fe72828;
    *(ulonglong *)(local_res8 & 0x7fffffffffffffff) = unaff_retaddr;
  }
  *(int *)(local_res8 & 0x7fffffffffffffff) = (int)unaff_retaddr;
  thunk_FUN_156b249bc();
  return;
}



// FUNCTION 14dbece2d FUN_14dbece2d body=10 status=ok
// SIG undefined FUN_14dbece2d(void)

void FUN_14dbece2d(void)

{
  FUN_156905b47();
  return;
}



// FUNCTION 14dbece37 FUN_14dbece37 body=78 status=ok
// SIG undefined FUN_14dbece37(void)

void FUN_14dbece37(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *unaff_RBX;
  ulonglong unaff_RBP;
  
  uVar1 = *unaff_RBX;
  uVar2 = *unaff_RBX;
  *unaff_RBX = ~*unaff_RBX;
  *unaff_RBX = *unaff_RBX | unaff_RBP;
  *unaff_RBX = ~((~(~unaff_RBP & uVar1) + uVar2) - (-1 - ~unaff_RBP) & *unaff_RBX);
  return;
}



// FUNCTION 14dbed0c3 FUN_14dbed0c3 body=132 status=ok
// SIG undefined FUN_14dbed0c3(void)

void FUN_14dbed0c3(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  FUN_15b33ffb9(~*(ulonglong *)(unaff_R13 + -0x60),param_2,FUN_15b33ffb9);
  return;
}



// FUNCTION 14dbed1e1 FUN_14dbed1e1 body=261 status=ok
// SIG undefined FUN_14dbed1e1(void)

void FUN_14dbed1e1(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong unaff_RBP;
  longlong in_R10;
  
  *(ulonglong *)(in_R10 + 0x10) =
       (unaff_RBP - (*(ulonglong *)(in_R10 + 0x10) | unaff_RBP)) + *(longlong *)(in_R10 + 0x10);
  UNRECOVERED_JUMPTABLE = (code *)FUN_14dc0e357(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dbed2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dbed46a FUN_14dbed46a body=173 status=ok
// SIG undefined FUN_14dbed46a(void)

void FUN_14dbed46a(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1648c4d8e(~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) |
                ~(~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15));
  return;
}



// FUNCTION 14dbed5b8 FUN_14dbed5b8 body=147 status=ok
// SIG undefined FUN_14dbed5b8(void)

void FUN_14dbed5b8(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) ^ 0xffffffffffffffff;
  thunk_FUN_1647ec4fd(param_1,uVar1 + param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x60),
                      uVar1 & param_1);
  return;
}



// FUNCTION 14dbed844 FUN_14dbed844 body=144 status=ok
// SIG undefined FUN_14dbed844(void)

void FUN_14dbed844(void)

{
  longlong lVar1;
  ulonglong *unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
  FUN_162686190(*(undefined8 *)(unaff_R13 + -0x48),
                CONCAT62((int6)((ulonglong)lVar1 >> 0x10),(short)lVar1 + 1),
                0xffffffffffffffff -
                ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) + unaff_R15 + 1) &
                (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),*unaff_RSI ^ unaff_R15);
  return;
}



// FUNCTION 14dbed8d4 FUN_14dbed8d4 body=159 status=ok
// SIG undefined FUN_14dbed8d4(void)

void FUN_14dbed8d4(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  short unaff_R14W;
  ushort unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
  *param_2 = (~(unaff_R14W - (-0x54a9 - ~unaff_retaddr)) | *param_2) - 0x100;
  *(undefined8 *)(param_5 + -8) = in_RAX;
  *(undefined8 *)(param_5 + -0x10) = param_1;
  *(undefined8 *)(param_5 + -0x18) = param_1;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = local_res8;
  *(undefined4 *)(param_5 + -0x30) = 0x334ac8c5;
  *(undefined4 *)(param_5 + -0x2c) = 0;
  *(undefined8 *)(param_5 + -0x30) = param_4;
  FUN_16478e16c(*(undefined8 *)(param_5 + -8),uStackX_10,param_3,FUN_16478e16c);
  return;
}



// FUNCTION 14dbeda2b FUN_14dbeda2b body=182 status=ok
// SIG undefined FUN_14dbeda2b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbedac7) */
/* WARNING: Removing unreachable block (ram,0x00014dbedad2) */
/* WARNING: Removing unreachable block (ram,0x00014dbedacd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x0001566de22a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbeda2b(undefined8 param_1)

{
  FUN_162199112(param_1,0x39e3c870);
  return;
}



// FUNCTION 14dbedae3 FUN_14dbedae3 body=278 status=ok
// SIG undefined FUN_14dbedae3(void)

/* WARNING: Removing unreachable block (ram,0x00014db991bf) */
/* WARNING: Removing unreachable block (ram,0x00014db991c5) */
/* WARNING: Removing unreachable block (ram,0x0001647df38a) */
/* WARNING: Removing unreachable block (ram,0x00014dbedb7a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dbedae3(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  longlong in_stack_00000018;
  
  uVar3 = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),(short)unaff_RBP + -1);
  if (*(longlong *)(unaff_RDI + -0x28) == 0) {
    FUN_14db990dc();
    return;
  }
  uVar2 = FUN_16484ed18();
  uVar2 = ~(~(0xffffffffffffffff - ~uVar2 & ~param_5) & (~param_5 | uVar2));
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0x3b30fbd5;
  *puVar1 = *puVar1 ^ 0x3b30fbd5;
  *puVar1 = *puVar1 + in_stack_00000018;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  *(ulonglong *)(uVar2 - 0x20) = uVar3 << (param_1 & 0x3f) | uVar3 >> 0x40 - (param_1 & 0x3f);
  if (uVar2 == 8) {
    _DAT_ffffffffffffffe8 = &LAB_156413d3d;
    _DAT_00000000 = &LAB_156413d3d;
    _DAT_ffffffffffffffe0 = unaff_R15;
    FUN_14d7c165a();
    return;
  }
  FUN_156413cee();
  return;
}



// FUNCTION 14dbedc0e FUN_14dbedc0e body=48 status=ok
// SIG undefined FUN_14dbedc0e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dbedc0e(longlong param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  uint in_EAX;
  char *pcVar3;
  byte *pbVar4;
  undefined4 unaff_EBX;
  ulonglong unaff_RBP;
  bool bVar5;
  
  uVar2 = in_EAX & 0xd0d82f73;
  pbVar4 = (byte *)(unaff_RBP & 0xffffffff);
  bVar1 = (byte)uVar2;
  if ((int)uVar2 < 1) {
    pcVar3 = (char *)(ulonglong)CONCAT22((short)(uVar2 >> 0x10),CONCAT11(0x34,bVar1));
    _DAT_14dbedc52 = uVar2;
    *(undefined4 *)
     ((ulonglong)CONCAT31((int3)(unaff_RBP >> 8),(byte)unaff_RBP ^ *(byte *)(param_1 + 0x4194002a))
     - 8) = unaff_EBX;
    *pcVar3 = *pcVar3 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar4 = *pbVar4 << 1 | bVar1 < 0xc5;
  pcVar3 = (char *)((ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1 + 0x3b) * 8 + -0x3a65c0c0);
  *pcVar3 = *pcVar3 + bVar1 + 0x3b;
  bVar5 = (char)DAT_65b8baef < '\0';
  DAT_65b8baef = DAT_65b8baef << 1 | bVar5;
  if (!bVar5) {
    pbVar4[0x44] = pbVar4[0x44] >> ((byte)param_1 & 0x1f);
    _DAT_65b8bb18 = CONCAT11(DAT_65b8bb18_1,DAT_65b8bb18 & (byte)((ulonglong)param_1 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbededa FUN_14dbededa body=150 status=ok
// SIG undefined FUN_14dbededa(void)

undefined8 FUN_14dbededa(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbedf74 FUN_14dbedf74 body=269 status=ok
// SIG undefined FUN_14dbedf74(void)

/* WARNING: Removing unreachable block (ram,0x00014dbedff1) */
/* WARNING: Removing unreachable block (ram,0x00014dbedff7) */
/* WARNING: Removing unreachable block (ram,0x00014dbedffc) */
/* WARNING: Removing unreachable block (ram,0x00014dbee049) */

void FUN_14dbedf74(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong in_RAX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R15;
  longlong alStack_28 [5];
  
  uVar6 = unaff_RSI & in_RAX ^ 0xffffffffffffffff;
  *(ulonglong *)((longlong)alStack_28 + unaff_RBP + 0x20) = in_RAX;
  plVar1 = (longlong *)((longlong)alStack_28 + unaff_RBP + 0x18);
  *plVar1 = ((unaff_RSI | in_RAX) - (uVar6 | unaff_RSI | in_RAX)) + uVar6;
  lVar3 = *plVar1;
  uVar4 = *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x20);
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x20) = in_R11;
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x18) = in_R10;
  lVar5 = *(longlong *)((longlong)alStack_28 + unaff_RBP + 0x18);
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x18) = uVar4;
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x20) = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x18) = *(undefined8 *)(unaff_R12 + -8);
  plVar1 = (longlong *)((longlong)alStack_28 + unaff_RBP + 0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar5;
  *(longlong *)((longlong)alStack_28 + unaff_RBP + 8) = *plVar1;
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP) = param_1;
  uVar6 = *(ulonglong *)(unaff_R12 + -0x98);
  uVar4 = *(undefined8 *)((longlong)alStack_28 + unaff_RBP);
  *(longlong *)((longlong)alStack_28 + unaff_RBP) = lVar3;
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 0x10) = 0;
  puVar2 = (ulonglong *)((longlong)alStack_28 + unaff_RBP + 0x10);
  *puVar2 = *puVar2 ^ uVar6;
  *(undefined8 *)((longlong)alStack_28 + unaff_RBP + 8) = unaff_R15;
  FUN_161e4ac94(uVar4);
  return;
}



// FUNCTION 14dbee084 FUN_14dbee084 body=451 status=ok
// SIG undefined FUN_14dbee084(void)

void FUN_14dbee084(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  
  uVar3 = ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
           (0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x70) | param_1));
  uVar2 = FUN_14e0fde85();
  uVar4 = (ulonglong)((int)&stack0x00000000 + 0x18);
  *(undefined8 *)(uVar4 + param_1) = unaff_R13;
  *(undefined8 *)(uVar4 + param_1 + -8) = 0;
  *(ulonglong *)(uVar4 + param_1 + -8) =
       *(longlong *)(uVar4 + param_1 + -8) + (uVar2 & 0xffffffffffffff48);
  uVar1 = *(undefined8 *)(uVar4 + param_1 + -8);
  *(undefined8 *)(uVar4 + param_1 + -0x10) = unaff_R12;
  *(undefined4 *)(uVar4 + param_1 + -8) = 0x4244c0a;
  *(undefined4 *)(uVar4 + param_1 + -0x10) = 0xdf58b70f;
  *(int *)(uVar4 + param_1 + -0x10) = *(int *)(uVar4 + param_1 + -0x10) + 0x20a748f1;
  *(ulonglong *)(uVar4 + param_1 + -0x18) = uVar3;
  *(undefined8 *)(uVar4 + param_1 + -0x20) = unaff_R13;
  *(undefined4 *)(uVar4 + param_1 + -0x28) = 0x570d78e6;
  *(undefined4 *)(uVar4 + param_1 + -0x24) = 0;
  *(undefined8 *)(uVar4 + param_1 + -0x28) = uVar1;
  FUN_166c43956(*(undefined4 *)(uVar4 + param_1 + -0x10),0x1c8b4858,0xfffffffffd6149f4);
  return;
}



// FUNCTION 14dbee240 FUN_14dbee240 body=553 status=ok
// SIG undefined FUN_14dbee240(void)

/* WARNING: Removing unreachable block (ram,0x0001648e08da) */
/* WARNING: Removing unreachable block (ram,0x0001648e08e0) */
/* WARNING: Removing unreachable block (ram,0x0001648e0995) */
/* WARNING: Removing unreachable block (ram,0x0001648e099b) */
/* WARNING: Removing unreachable block (ram,0x000156641775) */
/* WARNING: Removing unreachable block (ram,0x00014dbee4e4) */
/* WARNING: Removing unreachable block (ram,0x0001563cc676) */
/* WARNING: Removing unreachable block (ram,0x000156f4bff4) */
/* WARNING: Removing unreachable block (ram,0x00014dbee4f5) */
/* WARNING: Removing unreachable block (ram,0x000156f4bec4) */
/* WARNING: Removing unreachable block (ram,0x000156f4bfee) */
/* WARNING: Removing unreachable block (ram,0x0001610fc0c7) */
/* WARNING: Removing unreachable block (ram,0x00014dbee4fb) */
/* WARNING: Removing unreachable block (ram,0x00014dbee361) */

undefined8 FUN_14dbee240(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_retaddr;
  
  if (param_4 == 0x126187) {
    uVar1 = FUN_165e93f27();
    return uVar1;
  }
  if (param_4 != 0x126188) {
    if (param_4 == 0x126189) {
      uVar1 = FUN_1563cc676();
      return uVar1;
    }
    return in_RAX;
  }
  puVar2 = &DAT_14d7c1b5b;
  FUN_1648e0846();
  uVar1 = FUN_15af3ed58(param_1,param_2,unaff_retaddr,puVar2);
  return uVar1;
}



// FUNCTION 14dbee3f4 FUN_14dbee3f4 body=444 status=ok
// SIG undefined FUN_14dbee3f4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbee4e4) */
/* WARNING: Removing unreachable block (ram,0x000156f4bff4) */
/* WARNING: Removing unreachable block (ram,0x00014dbee4f5) */
/* WARNING: Removing unreachable block (ram,0x000156f4bec4) */
/* WARNING: Removing unreachable block (ram,0x000156f4bfee) */
/* WARNING: Removing unreachable block (ram,0x0001610fc0c7) */
/* WARNING: Removing unreachable block (ram,0x00014dbee4fb) */

undefined8 FUN_14dbee3f4(void)

{
  undefined8 uVar1;
  
  FUN_165936b70();
  uVar1 = FUN_156f4bec4();
  return uVar1;
}



// FUNCTION 14dbee5b8 FUN_14dbee5b8 body=17 status=ok
// SIG undefined FUN_14dbee5b8(void)

undefined8 FUN_14dbee5b8(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbee628 FUN_14dbee628 body=37 status=ok
// SIG undefined FUN_14dbee628(void)

void FUN_14dbee628(void)

{
  return;
}



// FUNCTION 14dbee6c3 FUN_14dbee6c3 body=133 status=ok
// SIG undefined FUN_14dbee6c3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbee788) */
/* WARNING: Removing unreachable block (ram,0x00014dbee7d2) */

void FUN_14dbee6c3(undefined8 param_1,ulonglong param_2)

{
  undefined8 unaff_RBP;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 + ~(~(param_2 & 0xffffffffc66e833f) & (param_2 | 0xffffffffc66e833f))) =
       unaff_RBP;
  FUN_156ac6253(param_1,in_stack_00000010);
  if ((longlong)((unaff_R15 - (DAT_156ac6223 | unaff_R15)) + DAT_156ac6223) < 0) {
    FUN_1649f9a0d(param_1);
    return;
  }
  thunk_FUN_165e4d80f();
  return;
}



// FUNCTION 14dbee748 FUN_14dbee748 body=179 status=ok
// SIG undefined FUN_14dbee748(void)

/* WARNING: Removing unreachable block (ram,0x00014dbee788) */
/* WARNING: Removing unreachable block (ram,0x00014dbee7d2) */

void FUN_14dbee748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)
      ((unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15)) +
      *(ulonglong *)(unaff_R13 + -0x30)) < 0) {
    FUN_1649f9a0d(param_1,param_2,param_3,param_4);
    return;
  }
  thunk_FUN_165e4d80f();
  return;
}



// FUNCTION 14dbee86f FUN_14dbee86f body=176 status=ok
// SIG undefined FUN_14dbee86f(void)

void FUN_14dbee86f(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  ushort uVar1;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ushort local_res8;
  uint6 uStackX_a;
  longlong lStackX_10;
  
  uVar1 = (~local_res8 & 0x100 | local_res8) - 0x100;
  syscall();
  *(undefined8 *)(lStackX_10 + -8) = unaff_R12;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R12;
  *(ulonglong *)(lStackX_10 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(lStackX_10 + -0x20) = param_2;
  *(undefined4 *)(lStackX_10 + -0x28) = 0x4bdaf83f;
  *(undefined4 *)(lStackX_10 + -0x24) = 0;
  *(undefined8 *)(lStackX_10 + -0x28) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x30) = unaff_R15;
  *(undefined8 *)(lStackX_10 + -0x38) = unaff_RDI;
  *(undefined8 *)(lStackX_10 + -0x40) = unaff_RDI;
  *(undefined **)(lStackX_10 + -0x38) = &DAT_14dbee920;
  return;
}



// FUNCTION 14dbeeb87 FUN_14dbeeb87 body=142 status=ok
// SIG undefined FUN_14dbeeb87(void)

void FUN_14dbeeb87(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  code *pcVar1;
  longlong lVar2;
  ushort *in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R11;
  longlong unaff_R13;
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
  ulonglong uStackX_20;
  
  *in_RAX = *in_RAX ^ 0xffff;
  *in_RAX = *in_RAX | 0x100;
  *in_RAX = ~*in_RAX;
  bVar12 = (uStackX_20 & 0x4000) != 0;
  bVar11 = (uStackX_20 & 0x800) != 0;
  bVar10 = (uStackX_20 & 0x200) != 0;
  bVar9 = (uStackX_20 & 0x100) != 0;
  bVar8 = (uStackX_20 & 0x80) != 0;
  bVar7 = (uStackX_20 & 0x40) != 0;
  bVar6 = (uStackX_20 & 0x10) != 0;
  bVar5 = (uStackX_20 & 4) != 0;
  bVar4 = (uStackX_20 & 1) != 0;
  bVar16 = (uStackX_20 & 0x200000) != 0;
  bVar13 = (uStackX_20 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)();
  *param_5 = unaff_RDI;
  param_5[-1] = unaff_RDI;
  param_5[-2] = uVar3;
  *(undefined4 *)(param_5 + -2) = 0xea51b85;
  *(undefined4 *)((longlong)param_5 + -0xc) = 0;
  lVar2 = param_5[-2];
  param_5[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
                (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
                (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
                (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
                (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
                (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
                (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  param_5[-3] = in_R11;
  param_5[-4] = param_2;
  param_5[-2] = unaff_RBP;
  *param_5 = lVar2 + -0xd11cceb;
  param_5[-2] = (longlong)FUN_14dbeec15;
  FUN_161be390d();
  param_5[-2] = *(undefined8 *)(unaff_R13 + -0x78);
  param_5[-3] = param_4;
  param_5[-4] = param_4;
  param_5[-5] = param_4;
  param_5[-3] = (longlong)&LAB_14dbeecb5;
  param_5[-4] = (longlong)&DAT_15b406acc;
  return;
}



// FUNCTION 14dbeec15 FUN_14dbeec15 body=157 status=ok
// SIG undefined FUN_14dbeec15(void)

void FUN_14dbeec15(void)

{
  return;
}



// FUNCTION 14dbeedd2 FUN_14dbeedd2 body=152 status=ok
// SIG undefined FUN_14dbeedd2(void)

void FUN_14dbeedd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong in_R11;
  ulonglong *unaff_R12;
  ulonglong unaff_R15;
  
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | unaff_R15;
  *unaff_R12 = ~(in_R11 & *unaff_R12);
  FUN_162d45fbd(~unaff_R15 | param_5,param_2,param_3,FUN_162d45fbd);
  return;
}



// FUNCTION 14dbeee6e FUN_14dbeee6e body=134 status=ok
// SIG undefined FUN_14dbeee6e(void)

void FUN_14dbeee6e(void)

{
  return;
}



// FUNCTION 14dbeeef5 FUN_14dbeeef5 body=160 status=ok
// SIG undefined FUN_14dbeeef5(void)

void FUN_14dbeeef5(ulonglong param_1)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_162e1bcdf(param_1,param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x80),
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + unaff_RBX) & param_1) &
                (*(ulonglong *)(unaff_RDI + unaff_RBX) | param_1));
  FUN_14dbeef96();
  return;
}



// FUNCTION 14dbeef96 FUN_14dbeef96 body=118 status=ok
// SIG undefined FUN_14dbeef96(void)

undefined8 FUN_14dbeef96(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbef050 FUN_14dbef050 body=64 status=ok
// SIG undefined FUN_14dbef050(void)

void FUN_14dbef050(undefined8 param_1,longlong param_2)

{
  FUN_1563c5cb4(param_1,param_2 + -0x654eb);
  return;
}



// FUNCTION 14dbef11e FUN_14dbef11e body=124 status=ok
// SIG undefined FUN_14dbef11e(void)

void FUN_14dbef11e(void)

{
  FUN_1667dc619();
  FUN_14dbef19b();
  return;
}



// FUNCTION 14dbef19b FUN_14dbef19b body=272 status=ok
// SIG undefined FUN_14dbef19b(void)

/* WARNING: Removing unreachable block (ram,0x000162268104) */
/* WARNING: Removing unreachable block (ram,0x0001622680f8) */
/* WARNING: Removing unreachable block (ram,0x000162268109) */
/* WARNING: Removing unreachable block (ram,0x0001668c0198) */
/* WARNING: Removing unreachable block (ram,0x000162267f0e) */
/* WARNING: Removing unreachable block (ram,0x00016226806b) */
/* WARNING: Removing unreachable block (ram,0x000162267fb6) */
/* WARNING: Removing unreachable block (ram,0x000162c3505e) */
/* WARNING: Removing unreachable block (ram,0x000162c35090) */
/* WARNING: Removing unreachable block (ram,0x000156ebd1db) */
/* WARNING: Removing unreachable block (ram,0x000162c350d5) */
/* WARNING: Removing unreachable block (ram,0x000162c350e0) */
/* WARNING: Removing unreachable block (ram,0x000162c350db) */
/* WARNING: Removing unreachable block (ram,0x000162267fc2) */
/* WARNING: Removing unreachable block (ram,0x000162268001) */
/* WARNING: Removing unreachable block (ram,0x000162267ffc) */
/* WARNING: Removing unreachable block (ram,0x00016226800e) */
/* WARNING: Removing unreachable block (ram,0x0001610bb1da) */
/* WARNING: Removing unreachable block (ram,0x000162268060) */
/* WARNING: Removing unreachable block (ram,0x000162268066) */
/* WARNING: Removing unreachable block (ram,0x00014dbef23f) */
/* WARNING: Removing unreachable block (ram,0x00015b20f965) */
/* WARNING: Removing unreachable block (ram,0x000162267e7c) */
/* WARNING: Removing unreachable block (ram,0x00015b20f924) */
/* WARNING: Removing unreachable block (ram,0x000162267efd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14dbef19b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  ulonglong uVar2;
  undefined8 unaff_R15;
  ulonglong in_stack_00000018;
  ulonglong local_res20;
  
  uVar2 = in_stack_00000018 ^ 0xffffffffffffffff | local_res20;
  if (((~local_res20 | in_stack_00000018) - ~(~uVar2 & ~(~local_res20 | in_stack_00000018))) + uVar2
      == 0) {
    param_6 = param_6 ^ in_stack_00000018;
    *(undefined8 *)(param_6 - 8) = unaff_R15;
    *(undefined8 *)(param_6 - 0x10) = unaff_R14;
    *(undefined8 *)(param_6 - 0x18) = unaff_R14;
    *(undefined8 *)(param_6 - 0x20) = unaff_RBP;
    *(undefined4 *)(param_6 - 0x28) = 0xf6ae5800;
    *(undefined4 *)(param_6 - 0x24) = 0xffffffff;
    *(undefined8 *)(param_6 - 0x30) = param_3;
    *(undefined8 *)(param_6 - 0x38) = param_3;
    *(undefined8 *)(param_6 - 0x40) = param_3;
    *(code **)(param_6 - 0x30) = FUN_161ca07c5;
    *(undefined1 **)(param_6 - 0x38) = &LAB_157602cd2;
    return in_RAX;
  }
  uVar1 = FUN_162267de5();
  return uVar1;
}



// FUNCTION 14dbef3c8 FUN_14dbef3c8 body=156 status=ok
// SIG undefined FUN_14dbef3c8(void)

void FUN_14dbef3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_16223eac5(local_res10,param_2,param_3,FUN_16223eac5);
  return;
}



// FUNCTION 14dbef46c FUN_14dbef46c body=323 status=ok
// SIG undefined FUN_14dbef46c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbef51d) */

void FUN_14dbef46c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong in_RAX;
  longlong lVar1;
  ulonglong unaff_RSI;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_stack_00000040;
  
  uVar3 = ~((~*(ulonglong *)(unaff_R13 + -0x88) | param_3) + *(longlong *)(unaff_R13 + -0x88) + 1) &
          (in_RAX + *(longlong *)(unaff_R13 + -0x88)) -
          (*(longlong *)(unaff_R13 + -0x88) - (unaff_RSI | *(ulonglong *)(unaff_R13 + -0x88)));
  uVar2 = 0;
  if (in_stack_00000040 < '\0') {
    uVar2 = 0xffff;
  }
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),in_stack_00000040);
  lVar1 = (~(uVar3 & unaff_R15) + unaff_R15) - ~uVar3;
  if (CARRY8(unaff_R15 - (uVar3 | unaff_R15),uVar3)) {
    FUN_15b3a4788(uVar2,lVar1);
    return;
  }
  FUN_15b3a4788(uVar2,lVar1);
  return;
}



// FUNCTION 14dbef5b0 FUN_14dbef5b0 body=273 status=ok
// SIG undefined FUN_14dbef5b0(void)

/* WARNING: Removing unreachable block (ram,0x0001654040e7) */
/* WARNING: Removing unreachable block (ram,0x00014dbef6c4) */

void FUN_14dbef5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong lVar1;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ushort local_res8;
  longlong lStackX_10;
  
  lVar1 = (*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
          (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2;
  FUN_166344a37();
  *(longlong *)(lStackX_10 + -8) = lVar1;
  if ((-~local_res8 - (~(((local_res8 | 0xfeff) ^ 0xffff) - 0x100) + 2) & 0x80) == 0) {
    *(ulonglong *)(lStackX_10 + -0x10) = unaff_RBP | unaff_R15;
    *(ulonglong *)(lStackX_10 + -0x18) = unaff_RBP | unaff_R15;
    *(undefined8 *)(lStackX_10 + -0x20) = 0;
    *(undefined8 *)(lStackX_10 + -0x10) = *(undefined8 *)(lStackX_10 + -8);
    *(undefined8 *)(lStackX_10 + -0x18) = *(undefined8 *)(lStackX_10 + -0x18);
    *(undefined8 *)(lStackX_10 + -8) = 0;
    *(undefined8 *)(lStackX_10 + -0x18) = in_R10;
    *(longlong *)(lStackX_10 + -8) = *(longlong *)(lStackX_10 + -8) + -0x16540411b;
    *(longlong *)(lStackX_10 + -8) = -*(longlong *)(lStackX_10 + -8);
    *(undefined8 *)(lStackX_10 + -0x10) = param_3;
    *(undefined8 *)(lStackX_10 + -0x18) = param_3;
    *(undefined **)(lStackX_10 + -0x10) = &DAT_14d7bc9ab;
    return;
  }
  FUN_1654040a3();
  return;
}



// FUNCTION 14dbef6c4 FUN_14dbef6c4 body=169 status=ok
// SIG undefined FUN_14dbef6c4(void)

void FUN_14dbef6c4(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong lStackX_10;
  
  FUN_1647e37d7(param_1,-~param_1 - (~*(ulonglong *)(unaff_RDI + -0x28) + 2));
  *(undefined8 *)(lStackX_10 + -8) = in_R10;
  *(undefined8 *)(lStackX_10 + -0x10) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x18) = unaff_R14;
  *(undefined8 *)(lStackX_10 + -0x20) = unaff_R15;
  *(undefined1 **)(lStackX_10 + -0x28) = &LAB_14dbef76e;
  return;
}



// FUNCTION 14dbef9df FUN_14dbef9df body=588 status=ok
// SIG undefined FUN_14dbef9df(void)

/* WARNING: Removing unreachable block (ram,0x00016507ede4) */
/* WARNING: Removing unreachable block (ram,0x00016507edea) */
/* WARNING: Removing unreachable block (ram,0x00016507edef) */
/* WARNING: Removing unreachable block (ram,0x00014dbefa77) */
/* WARNING: Removing unreachable block (ram,0x000161c80857) */
/* WARNING: Removing unreachable block (ram,0x00014dbefa7d) */
/* WARNING: Removing unreachable block (ram,0x00014dbefb02) */
/* WARNING: Removing unreachable block (ram,0x00015671c001) */
/* WARNING: Removing unreachable block (ram,0x00014dbefb08) */
/* WARNING: Removing unreachable block (ram,0x00014dbefb7f) */
/* WARNING: Removing unreachable block (ram,0x00014dbefb85) */
/* WARNING: Removing unreachable block (ram,0x00016507eca9) */
/* WARNING: Removing unreachable block (ram,0x00016507ed5b) */
/* WARNING: Removing unreachable block (ram,0x000160da4456) */
/* WARNING: Removing unreachable block (ram,0x00016507ed61) */
/* WARNING: Removing unreachable block (ram,0x00016507edd2) */
/* WARNING: Removing unreachable block (ram,0x000165e53805) */
/* WARNING: Removing unreachable block (ram,0x000165e53820) */
/* WARNING: Removing unreachable block (ram,0x000161c808a3) */
/* WARNING: Removing unreachable block (ram,0x000161c808a6) */

undefined8 FUN_14dbef9df(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161c80857();
  return uVar1;
}



// FUNCTION 14dbefcd9 FUN_14dbefcd9 body=153 status=ok
// SIG undefined FUN_14dbefcd9(void)

void FUN_14dbefcd9(void)

{
  return;
}



// FUNCTION 14dbefe13 FUN_14dbefe13 body=183 status=ok
// SIG undefined FUN_14dbefe13(void)

void FUN_14dbefe13(void)

{
  return;
}



// FUNCTION 14dbf0092 FUN_14dbf0092 body=156 status=ok
// SIG undefined FUN_14dbf0092(void)

void FUN_14dbf0092(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1662a6dad)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14dbf01d2 FUN_14dbf01d2 body=176 status=ok
// SIG undefined FUN_14dbf01d2(void)

ulonglong FUN_14dbf01d2(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  return (~unaff_R15 + uVar1) - (~unaff_R15 & uVar1) &
         (((0xffffffffffffffff - uVar1) - (~unaff_R15 | 0xffffffffffffffff - uVar1)) + ~unaff_R15 |
         unaff_R15) ^ 0xffffffffffffffff;
}



// FUNCTION 14dbf038b FUN_14dbf038b body=26 status=ok
// SIG undefined FUN_14dbf038b(void)

void FUN_14dbf038b(void)

{
  return;
}



// FUNCTION 14dbf0443 FUN_14dbf0443 body=135 status=ok
// SIG undefined FUN_14dbf0443(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf04c5) */
/* WARNING: Removing unreachable block (ram,0x00014dbf04cb) */

void FUN_14dbf0443(undefined8 param_1)

{
  longlong unaff_RBX;
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    FUN_165dc09fc(param_1,unaff_retaddr);
    return;
  }
  if (unaff_RBX != 0x101c39) {
    if (unaff_RBX == 0x101c3a) {
      return;
    }
    FUN_165e1e8e2(param_1);
    return;
  }
  return;
}



// FUNCTION 14dbf04cb FUN_14dbf04cb body=174 status=ok
// SIG undefined FUN_14dbf04cb(void)

void FUN_14dbf04cb(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar1 = (local_res8 ^ 0x3a31f4bf) + *(longlong *)(unaff_R13 + -0x78) +
          ((local_res8 ^ 0x3a31f4bf) & *(ulonglong *)(unaff_R13 + -0x78)) * -2;
  FUN_1575d3020(~(uVar1 & unaff_R15) & (uVar1 | unaff_R15),
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dbf057f FUN_14dbf057f body=146 status=ok
// SIG undefined FUN_14dbf057f(void)

void FUN_14dbf057f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_16176c975(unaff_retaddr,param_2,param_3,param_4);
  FUN_14dbf0614();
  return;
}



// FUNCTION 14dbf0614 FUN_14dbf0614 body=167 status=ok
// SIG undefined FUN_14dbf0614(void)

void FUN_14dbf0614(void)

{
  undefined8 local_res10;
  
  FUN_156c40cb9(local_res10);
  return;
}



// FUNCTION 14dbf0747 thunk_FUN_14dbf074d body=5 status=ok
// SIG undefined thunk_FUN_14dbf074d(void)

void thunk_FUN_14dbf074d(void)

{
  return;
}



// FUNCTION 14dbf074d FUN_14dbf074d body=131 status=ok
// SIG undefined FUN_14dbf074d(void)

void FUN_14dbf074d(void)

{
  return;
}



// FUNCTION 14dbf0a20 FUN_14dbf0a20 body=77 status=ok
// SIG undefined FUN_14dbf0a20(void)

void FUN_14dbf0a20(void)

{
  FUN_16291489b();
  return;
}



// FUNCTION 14dbf0ce2 FUN_14dbf0ce2 body=119 status=ok
// SIG undefined FUN_14dbf0ce2(void)

void FUN_14dbf0ce2(void)

{
  return;
}



// FUNCTION 14dbf0ea9 FUN_14dbf0ea9 body=470 status=ok
// SIG undefined FUN_14dbf0ea9(void)

/* WARNING: Removing unreachable block (ram,0x000160fe71c1) */
/* WARNING: Removing unreachable block (ram,0x00014dbf0f28) */
/* WARNING: Removing unreachable block (ram,0x00014dbf0f2e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf0ea9(undefined8 param_1,undefined8 param_2)

{
  FUN_161515c85(0x4034c76f,param_2,FUN_161515c85);
  return;
}



// FUNCTION 14dbf105a FUN_14dbf105a body=157 status=ok
// SIG undefined FUN_14dbf105a(void)

void FUN_14dbf105a(void)

{
  return;
}



// FUNCTION 14dbf132f FUN_14dbf132f body=144 status=ok
// SIG undefined FUN_14dbf132f(void)

void FUN_14dbf132f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (param_4 != 0xcc3b7) {
    if (param_4 != 0xcc3b8) {
      FUN_16101e85b(FUN_16101e85b,param_2,param_3,param_4 + -0xcc3b9);
      return;
    }
    FUN_165e93f27();
    return;
  }
  FUN_165e93f27();
  return;
}



// FUNCTION 14dbf13bf FUN_14dbf13bf body=9 status=ok
// SIG undefined FUN_14dbf13bf(void)

void FUN_14dbf13bf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  FUN_165e93f27(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14dbf144d FUN_14dbf144d body=70 status=ok
// SIG undefined FUN_14dbf144d(void)

void FUN_14dbf144d(undefined8 param_1,undefined8 param_2)

{
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined **)(local_res18 + -8) = &DAT_14dbf14a9;
  FUN_14d7a6993(param_1,*(undefined8 *)(local_res18 + -0x10));
  return;
}



// FUNCTION 14dbf158a thunk_FUN_14dbf1590 body=5 status=ok
// SIG undefined thunk_FUN_14dbf1590(void)

void thunk_FUN_14dbf1590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 in_stack_00000008;
  undefined8 uStackX_10;
  
  FUN_16493896d(uStackX_10,param_2,in_stack_00000008,param_4);
  return;
}



// FUNCTION 14dbf1590 FUN_14dbf1590 body=130 status=ok
// SIG undefined FUN_14dbf1590(void)

void FUN_14dbf1590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  
  FUN_16493896d(local_res10,param_2,in_stack_00000008,param_4);
  return;
}



// FUNCTION 14dbf1612 FUN_14dbf1612 body=189 status=ok
// SIG undefined FUN_14dbf1612(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf1612(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  FUN_1572b6d49(FUN_1572b6d49,*(undefined8 *)(unaff_R13 + -0x38),
                ~(unaff_retaddr & unaff_R15) & (unaff_retaddr | unaff_R15));
  return;
}



// FUNCTION 14dbf1aea FUN_14dbf1aea body=139 status=ok
// SIG undefined FUN_14dbf1aea(void)

undefined8 FUN_14dbf1aea(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbf1d64 FUN_14dbf1d64 body=153 status=ok
// SIG undefined FUN_14dbf1d64(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf1d64(ulonglong param_1)

{
  undefined8 local_res8;
  
  FUN_15b0fb938(local_res8 ^ param_1);
  return;
}



// FUNCTION 14dbf1dfd FUN_14dbf1dfd body=54 status=ok
// SIG undefined FUN_14dbf1dfd(void)

void FUN_14dbf1dfd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *local_res10;
  
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  local_res10[-1] = param_3;
  local_res10[-2] = 0x29403f0;
  *local_res10 = local_res10[-2];
  FUN_14d85d504(param_1,param_2,local_res10[-1]);
  return;
}



// FUNCTION 14dbf20c1 FUN_14dbf20c1 body=15 status=ok
// SIG undefined FUN_14dbf20c1(void)

void FUN_14dbf20c1(void)

{
  return;
}



// FUNCTION 14dbf229e FUN_14dbf229e body=91 status=ok
// SIG undefined FUN_14dbf229e(void)

undefined8 FUN_14dbf229e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbf23ed FUN_14dbf23ed body=250 status=ok
// SIG undefined FUN_14dbf23ed(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf2438) */
/* WARNING: Removing unreachable block (ram,0x00014dbf2479) */

undefined8 FUN_14dbf23ed(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  if (-1 < *(longlong *)(unaff_RDI + -0x88)) {
    uVar1 = FUN_156f2f2c5((char)param_1,uVar2);
    return uVar1;
  }
  uVar1 = FUN_156f2f2c5((char)param_1,uVar2);
  return uVar1;
}



// FUNCTION 14dbf2724 FUN_14dbf2724 body=495 status=ok
// SIG undefined FUN_14dbf2724(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf27cc) */
/* WARNING: Removing unreachable block (ram,0x00014dbf27d2) */

undefined8 FUN_14dbf2724(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dbf2865 FUN_14dbf2865 body=455 status=ok
// SIG undefined FUN_14dbf2865(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf2906) */
/* WARNING: Removing unreachable block (ram,0x00014dbf290c) */
/* WARNING: Removing unreachable block (ram,0x00014dbf28c1) */

longlong FUN_14dbf2865(longlong param_1)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong auStack_10 [2];
  
  param_1 = in_RAX - param_1;
  *(undefined8 *)(&stack0x00000008 + param_1) = *(undefined8 *)(unaff_R13 + -0x60);
  *(undefined8 *)(&stack0x00000008 + param_1) = *(undefined8 *)(unaff_R13 + -0x38);
  uVar1 = *(ulonglong *)(&stack0x00000008 + param_1);
  *(ulonglong *)(&stack0x00000008 + param_1) =
       (~*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15 ^ 0xffffffffffffffff) &
       (*(ulonglong *)(unaff_R13 + -0x48) | unaff_R15);
  *(undefined8 *)(&stack0x00000000 + param_1) = unaff_R14;
  *(undefined8 *)((longlong)auStack_10 + param_1 + 8) = unaff_R14;
  *(undefined8 *)((longlong)auStack_10 + param_1) = unaff_R14;
  *(code **)(&stack0x00000000 + param_1) = FUN_16549ce8c;
  *(undefined **)((longlong)auStack_10 + param_1 + 8) = &DAT_14d93b3a5;
  return (uVar1 - unaff_R15) + (~unaff_R15 | uVar1) * -2 + -2;
}



// FUNCTION 14dbf2b4c FUN_14dbf2b4c body=304 status=ok
// SIG undefined FUN_14dbf2b4c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf2c66) */
/* WARNING: Removing unreachable block (ram,0x00014dbf2be5) */
/* WARNING: Removing unreachable block (ram,0x00014dbf2c60) */
/* WARNING: Removing unreachable block (ram,0x0001574fe351) */

void FUN_14dbf2b4c(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ushort uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  uVar2 = (~(local_res8 | 0xfeff) - 0x100) + local_res8;
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0x5d4356a;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(longlong *)(local_res10 + -0x20) = lVar1;
  *(longlong *)(local_res10 + -0x20) = *(longlong *)(local_res10 + -0x20) + -0x16b2b6c;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x16b2b6c;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dbf2cfd FUN_14dbf2cfd body=33 status=ok
// SIG undefined FUN_14dbf2cfd(void)

void FUN_14dbf2cfd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c7153c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbf2e3f FUN_14dbf2e3f body=166 status=ok
// SIG undefined FUN_14dbf2e3f(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf2ee5) */

void FUN_14dbf2e3f(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  ulonglong local_res8;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ param_1;
  if (uVar1 == 0) {
    FUN_160f77f3d();
    return;
  }
  *(ulonglong *)(uVar1 - 8) = uVar1;
  lVar2 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(lVar2 + -8) = in_RAX;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RDI;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RDI;
  *(undefined8 *)(lVar2 + -0x20) = in_R10;
  *(undefined8 *)(lVar2 + -0x20) = param_2;
  *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
  *(undefined8 *)(lVar2 + -0x18) = unaff_RSI;
  *(undefined1 **)(lVar2 + -8) = &LAB_165d44787;
  FUN_165d44758(~((~param_1 | local_res8) & (~local_res8 | param_1)),*(undefined8 *)(lVar2 + -0x20))
  ;
  return;
}



// FUNCTION 14dbf2ee5 FUN_14dbf2ee5 body=52 status=ok
// SIG undefined FUN_14dbf2ee5(void)

void FUN_14dbf2ee5(void)

{
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dbf2f1c FUN_14dbf2f1c body=111 status=ok
// SIG undefined FUN_14dbf2f1c(void)

void FUN_14dbf2f1c(void)

{
  return;
}



// FUNCTION 14dbf2f8c FUN_14dbf2f8c body=71 status=ok
// SIG undefined FUN_14dbf2f8c(void)

void FUN_14dbf2f8c(void)

{
  return;
}



// FUNCTION 14dbf325b FUN_14dbf325b body=132 status=ok
// SIG undefined FUN_14dbf325b(void)

void FUN_14dbf325b(void)

{
  ulonglong unaff_RBP;
  undefined1 local_res8;
  undefined8 local_res20;
  
  LOCK();
  DAT_14d7c21a5 = local_res8;
  UNLOCK();
  *(undefined8 *)((~(local_res20 & unaff_RBP) & (local_res20 | unaff_RBP)) - 8) = 0x76c916;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dbf348f FUN_14dbf348f body=44 status=ok
// SIG undefined FUN_14dbf348f(void)

undefined8 FUN_14dbf348f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbf3520 FUN_14dbf3520 body=26 status=ok
// SIG undefined FUN_14dbf3520(void)

void FUN_14dbf3520(void)

{
  return;
}



// FUNCTION 14dbf3659 FUN_14dbf3659 body=92 status=ok
// SIG undefined FUN_14dbf3659(void)

void FUN_14dbf3659(void)

{
  longlong in_R10;
  ulonglong unaff_R12;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  *(ulonglong *)(in_R10 + 0x10) = ~(unaff_R12 & *(ulonglong *)(in_R10 + 0x10));
  *(undefined8 *)(local_res20 + -8) = 0x1671514;
  FUN_165c7153c(in_stack_00000010);
  return;
}



// FUNCTION 14dbf36f3 FUN_14dbf36f3 body=152 status=ok
// SIG undefined FUN_14dbf36f3(void)

void FUN_14dbf36f3(undefined8 param_1)

{
  (*(code *)&LAB_156995ba5)(param_1);
  return;
}



// FUNCTION 14dbf3abc FUN_14dbf3abc body=455 status=ok
// SIG undefined FUN_14dbf3abc(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf3c3f) */

void FUN_14dbf3abc(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 local_res18;
  
  *(undefined8 *)(&stack0x666f7996 + unaff_R12) = param_1;
  FUN_166bdc360(local_res18,param_2);
  if (unaff_RSI == 0xc7299) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI == 0xc729a) {
    FUN_165e9d166();
    FUN_15b2e8df3(CONCAT71((int7)((ulonglong)local_res18 >> 8),0xbc) ^ 0xce);
    FUN_14dbf3c88();
    return;
  }
  FUN_165e9d169();
  return;
}



// FUNCTION 14dbf3c88 FUN_14dbf3c88 body=278 status=ok
// SIG undefined FUN_14dbf3c88(void)

/* WARNING: Removing unreachable block (ram,0x0001623b34c3) */
/* WARNING: Removing unreachable block (ram,0x00014dbf3dd1) */
/* WARNING: Removing unreachable block (ram,0x00014dbf3d1b) */
/* WARNING: Removing unreachable block (ram,0x00014dbf3d95) */
/* WARNING: Removing unreachable block (ram,0x00014dbf3d9b) */
/* WARNING: Removing unreachable block (ram,0x0001623b34b3) */
/* WARNING: Removing unreachable block (ram,0x00014dbf3da0) */

void FUN_14dbf3c88(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x48) + param_1 < (*(ulonglong *)(unaff_RDI + -0x48) & param_1)) {
    FUN_1610f4e27(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,FUN_1610f4e27,param_4,
                  *(undefined8 *)(unaff_RDI + -0x90));
    return;
  }
  FUN_165723425();
  return;
}



// FUNCTION 14dbf3da0 FUN_14dbf3da0 body=153 status=ok
// SIG undefined FUN_14dbf3da0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf3dd1) */

void FUN_14dbf3da0(undefined8 param_1,undefined8 param_2)

{
  FUN_15649f82e(param_1,param_2,0x54717018);
  return;
}



// FUNCTION 14dbf3ece FUN_14dbf3ece body=289 status=ok
// SIG undefined FUN_14dbf3ece(void)

void FUN_14dbf3ece(void)

{
  FUN_164c7400a();
  FUN_160f79e77();
  FUN_16694f603();
  return;
}



// FUNCTION 14dbf3ff1 FUN_14dbf3ff1 body=140 status=ok
// SIG undefined FUN_14dbf3ff1(void)

void FUN_14dbf3ff1(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16694f603(param_1,param_2,param_3,FUN_16694f603);
  return;
}



// FUNCTION 14dbf424f FUN_14dbf424f body=121 status=ok
// SIG undefined FUN_14dbf424f(void)

ulonglong FUN_14dbf424f(longlong param_1)

{
  ulonglong unaff_RBX;
  
  return *(ulonglong *)(param_1 + -0x70) ^ unaff_RBX;
}



// FUNCTION 14dbf42c9 FUN_14dbf42c9 body=485 status=ok
// SIG undefined FUN_14dbf42c9(void)

/* WARNING: Removing unreachable block (ram,0x00016494c179) */
/* WARNING: Removing unreachable block (ram,0x00016494c205) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4377) */
/* WARNING: Removing unreachable block (ram,0x00014dbf438b) */
/* WARNING: Removing unreachable block (ram,0x00014dbf438e) */
/* WARNING: Removing unreachable block (ram,0x00014dbf43a1) */
/* WARNING: Removing unreachable block (ram,0x00014dbf439c) */
/* WARNING: Removing unreachable block (ram,0x00014dbf43a3) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4404) */
/* WARNING: Removing unreachable block (ram,0x00014d7a886b) */
/* WARNING: Removing unreachable block (ram,0x00014dbf440a) */

void FUN_14dbf42c9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x50) | param_1) < 0) {
    FUN_14da769b8(param_1,FUN_14da769b8,param_1,*(undefined8 *)(unaff_RDI + -0x60));
    return;
  }
  FUN_160f51ad0();
  return;
}



// FUNCTION 14dbf44b8 FUN_14dbf44b8 body=365 status=ok
// SIG undefined FUN_14dbf44b8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf45f2) */

undefined2 FUN_14dbf44b8(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  FUN_156dd93f6(param_1,0);
  return uVar1;
}



// FUNCTION 14dbf46ca FUN_14dbf46ca body=26 status=ok
// SIG undefined FUN_14dbf46ca(void)

void FUN_14dbf46ca(void)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(unaff_retaddr);
  return;
}



// FUNCTION 14dbf4740 FUN_14dbf4740 body=264 status=ok
// SIG undefined FUN_14dbf4740(void)

void FUN_14dbf4740(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R13;
  longlong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R15 + -0x80);
  lVar2 = *(longlong *)(unaff_R15 + -0x78) + unaff_R13;
  FUN_1610de8c1(~(param_1 & in_R10),lVar2,FUN_1610de8c1,
                ~((~unaff_R13 | uVar1) & (~(~uVar1 & unaff_R13) + unaff_R13) - uVar1));
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP;
  FUN_162bb34c3(~((~uVar1 | ~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x40)) + uVar1 + 1),0x5e7ad3d,
                ~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) &
                 (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP)),lVar2);
  return;
}



// FUNCTION 14dbf4aa8 FUN_14dbf4aa8 body=325 status=ok
// SIG undefined FUN_14dbf4aa8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf4b4d) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4b53) */

void FUN_14dbf4aa8(ulonglong param_1)

{
  longlong unaff_RDI;
  undefined1 local_res8 [32];
  
  FUN_16117f9b0(param_1,local_res8,
                *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dbf4c66 FUN_14dbf4c66 body=464 status=ok
// SIG undefined FUN_14dbf4c66(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf4d00) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4d11) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4d87) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4d8d) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4d92) */
/* WARNING: Removing unreachable block (ram,0x000166d0076f) */
/* WARNING: Removing unreachable block (ram,0x00014dbf4d0c) */
/* WARNING: Removing unreachable block (ram,0x000162cd8780) */
/* WARNING: Removing unreachable block (ram,0x000162cd87c2) */
/* WARNING: Removing unreachable block (ram,0x000162cd87c6) */
/* WARNING: Removing unreachable block (ram,0x00016225fa14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf4c66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res18 + -8) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  uVar3 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  *(undefined8 *)(local_res18 + -0x30) = param_4;
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(local_res18 + -0x28);
  uVar4 = *(undefined8 *)(local_res18 + -0x28);
  lVar2 = *(longlong *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x30);
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(local_res18 + -8);
  if (lVar2 < 0) {
    *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x28);
    *(undefined8 *)(local_res18 + -0x18) = uVar4;
    puVar1 = (ulonglong *)(local_res18 + -0x20);
    *(undefined4 *)puVar1 = 0x4d6293ed;
    *(undefined4 *)(local_res18 + -0x1c) = 0;
    uVar5 = *puVar1;
    *puVar1 = unaff_R12;
    *(undefined8 *)(local_res18 + -0x28) = uVar3;
    *(undefined8 *)(local_res18 + -0x10 + (uVar5 ^ 0x4d6293e5)) = 0x15691f5af;
    FUN_14d7c32fe(param_1,*(undefined8 *)(local_res18 + -0x10));
    return;
  }
  FUN_162cd86e5();
  return;
}



// FUNCTION 14dbf538e FUN_14dbf538e body=149 status=ok
// SIG undefined FUN_14dbf538e(void)

void FUN_14dbf538e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *in_RAX;
  undefined8 unaff_RSI;
  longlong local_res20;
  
  *in_RAX = ~(*in_RAX & 0x100) + *in_RAX + 1;
  *(undefined8 *)(local_res20 + -8) = param_3;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = param_2;
  FUN_16548e2a8(param_1,FUN_16548e2a8,&LAB_16548e333);
  return;
}



// FUNCTION 14dbf54ae FUN_14dbf54ae body=187 status=ok
// SIG undefined FUN_14dbf54ae(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf5524) */

undefined8 FUN_14dbf54ae(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dbf5702 FUN_14dbf5702 body=94 status=ok
// SIG undefined FUN_14dbf5702(void)

void FUN_14dbf5702(void)

{
  undefined8 unaff_R12;
  ushort *unaff_R14;
  longlong local_res20;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | 0x100;
  *unaff_R14 = ~*unaff_R14;
  *(undefined8 *)(local_res20 + -8) = 0x1d33f92;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(code **)(local_res20 + -0x10) = FUN_165c7153c;
  return;
}



// FUNCTION 14dbf58b7 FUN_14dbf58b7 body=131 status=ok
// SIG undefined FUN_14dbf58b7(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf593e) */

void FUN_14dbf58b7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_8;
  
  uVar1 = (-uStackX_8 - (~-(unaff_RBP ^ 0xffffffffffffffff | ~uStackX_8) + 2)) +
          (unaff_RBP ^ 0xffffffffffffffff);
  uVar1 = (~(uVar1 & unaff_RBP) + unaff_RBP) - ~uVar1;
  if (-1 < (longlong)uVar1) {
    FUN_161ace5f3();
    return;
  }
  uVar1 = 0xffffffffffffffff - (uVar1 & (0xffffffffffffffff - unaff_RBP | uStackX_8));
  FUN_16685a4be((uVar1 - (~(uVar1 >> 8) | uVar1)) + ~(uVar1 >> 8),param_2,param_3,param_4);
  FUN_16670e285(*(ulonglong *)(unaff_R13 + -0x90) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * -2,FUN_16670e285,4,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                 (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  FUN_161ace71e();
  return;
}



// FUNCTION 14dbf593e FUN_14dbf593e body=157 status=ok
// SIG undefined FUN_14dbf593e(void)

void FUN_14dbf593e(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x14dde5660)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dbf5c34 FUN_14dbf5c34 body=248 status=ok
// SIG undefined FUN_14dbf5c34(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf5cf2) */
/* WARNING: Removing unreachable block (ram,0x0001617516ed) */
/* WARNING: Removing unreachable block (ram,0x0001617517bd) */
/* WARNING: Removing unreachable block (ram,0x0001617517c8) */
/* WARNING: Removing unreachable block (ram,0x0001617517c3) */
/* WARNING: Removing unreachable block (ram,0x0001617517b8) */
/* WARNING: Removing unreachable block (ram,0x00016503abd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf5c34(ulonglong param_1)

{
  ulonglong unaff_retaddr;
  ulonglong local_res10;
  
  *(undefined8 *)((~(local_res10 & param_1) & (local_res10 | param_1)) - 8) = 0x15a401a;
  FUN_165c7153c(unaff_retaddr + param_1 + (unaff_retaddr & param_1) * -2);
  return;
}



// FUNCTION 14dbf5d84 FUN_14dbf5d84 body=159 status=ok
// SIG undefined FUN_14dbf5d84(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf5d84(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x1569ba795)(param_1,in_stack_00000010);
  return;
}



// FUNCTION 14dbf5e24 FUN_14dbf5e24 body=144 status=ok
// SIG undefined FUN_14dbf5e24(void)

void FUN_14dbf5e24(void)

{
  (*(code *)0x1657bfa93)();
  return;
}



// FUNCTION 14dbf5fbe FUN_14dbf5fbe body=152 status=ok
// SIG undefined FUN_14dbf5fbe(void)

void FUN_14dbf5fbe(void)

{
  return;
}



// FUNCTION 14dbf6056 FUN_14dbf6056 body=137 status=ok
// SIG undefined FUN_14dbf6056(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf6087) */
/* WARNING: Removing unreachable block (ram,0x00014dbf60a7) */

void FUN_14dbf6056(void)

{
  longlong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(undefined4 *)(&stack0x00000000 + in_RAX) = 0xffffffff;
  (*(code *)0x16691b2c6)
            (0xffffffffc92b7ccf,(char)unaff_R13,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
             *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dbf60e0 FUN_14dbf60e0 body=781 status=ok
// SIG undefined FUN_14dbf60e0(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf61bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbf62a6) */
/* WARNING: Removing unreachable block (ram,0x00014dbf633a) */
/* WARNING: Removing unreachable block (ram,0x000160f88bcb) */
/* WARNING: Removing unreachable block (ram,0x00014dbf6340) */
/* WARNING: Removing unreachable block (ram,0x00015669df2b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf60e0(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = (~((unaff_R15 ^ 0xffffffffffffffff) & uVar3) + uVar3) - ~(unaff_R15 ^ 0xffffffffffffffff);
  uVar3 = (~(~uVar3 & unaff_R15) + unaff_R15) - uVar3;
  FUN_14dd1bcc6(uVar2,~(uVar2 & uVar3),
                ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1,in_RAX);
  FUN_14df6d1b2();
  if ((longlong)(~-*(longlong *)(uVar3 - 0x40) + 1U) < 0) {
    FUN_15669de7c();
    return;
  }
  return;
}



// FUNCTION 14dbf6340 FUN_14dbf6340 body=276 status=ok
// SIG undefined FUN_14dbf6340(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf6340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1620ac176(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbf64e7 FUN_14dbf64e7 body=86 status=ok
// SIG undefined FUN_14dbf64e7(void)

void FUN_14dbf64e7(undefined8 param_1,undefined8 param_2)

{
  FUN_165c7153c(param_1,param_2);
  return;
}



// FUNCTION 14dbf65ff FUN_14dbf65ff body=73 status=ok
// SIG undefined FUN_14dbf65ff(void)

undefined8 FUN_14dbf65ff(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dbf6784 FUN_14dbf6784 body=12 status=ok
// SIG undefined FUN_14dbf6784(void)

ulonglong FUN_14dbf6784(void)

{
  ulonglong in_RAX;
  
  return ~in_RAX;
}



// FUNCTION 14dbf681b FUN_14dbf681b body=361 status=ok
// SIG undefined FUN_14dbf681b(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf68a9) */
/* WARNING: Removing unreachable block (ram,0x00014dbf68b4) */
/* WARNING: Removing unreachable block (ram,0x00014dbf6986) */
/* WARNING: Removing unreachable block (ram,0x00014dbf68af) */

void FUN_14dbf681b(undefined8 param_1,short param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  short *in_R10;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *in_R10 = *in_R10 + param_2;
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x18) = param_1;
  uVar1 = *(undefined8 *)(local_res20 + -0x18);
  uVar2 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = local_res8;
  *(undefined8 *)(local_res20 + -0x18) = local_res8;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x28) = uVar2;
  uVar2 = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x28) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -0x28);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x20) = 0xfffffffe9a377bdb;
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) =
       *(longlong *)(local_res20 + -8) - *(longlong *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x18) = uVar2;
  *(undefined4 *)(local_res20 + -0x20) = 0x9292ad96;
  *(undefined4 *)(local_res20 + -0x1c) = 0xffffffff;
  FUN_165c88407(uVar1,uStackX_10,unaff_retaddr,
                *(undefined8 *)(local_res20 + *(longlong *)(local_res20 + -0x20) + 0x6d6d5262));
  return;
}



// FUNCTION 14dbf69d7 FUN_14dbf69d7 body=135 status=ok
// SIG undefined FUN_14dbf69d7(void)

undefined8 FUN_14dbf69d7(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x90);
}



// FUNCTION 14dbf6a5f FUN_14dbf6a5f body=172 status=ok
// SIG undefined FUN_14dbf6a5f(void)

void FUN_14dbf6a5f(undefined8 param_1,uint param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)&LAB_165dabfcd)
            (param_1,param_2 & 0xffffff00,param_3,
             ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15 |
              ~(*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14dbf6b50 FUN_14dbf6b50 body=85 status=ok
// SIG undefined FUN_14dbf6b50(void)

void FUN_14dbf6b50(void)

{
  FUN_14e24b0c5();
  return;
}



// FUNCTION 14dbf6d61 thunk_FUN_14dbf6d67 body=5 status=ok
// SIG undefined thunk_FUN_14dbf6d67(void)

void thunk_FUN_14dbf6d67(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  param_1[-1] = 0xffffffffffc0f15c;
  lVar1 = param_1[-1];
  param_1[-1] = 0x3f0ecc;
  *param_1 = *(longlong *)(unaff_RSI + lVar1 + 0x3f0e34);
  lVar1 = *param_1;
  lVar2 = lVar1 + unaff_RBP;
  *param_1 = lVar2;
  FUN_156c35b03(CONCAT71((int7)((ulonglong)lVar2 >> 8),0xe6),
                CONCAT71((int7)((ulonglong)lVar1 >> 8),0xe6));
  return;
}



// FUNCTION 14dbf6d67 FUN_14dbf6d67 body=134 status=ok
// SIG undefined FUN_14dbf6d67(void)

void FUN_14dbf6d67(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  param_1[-1] = 0xffffffffffc0f15c;
  lVar1 = param_1[-1];
  param_1[-1] = 0x3f0ecc;
  *param_1 = *(longlong *)(unaff_RSI + lVar1 + 0x3f0e34);
  lVar1 = *param_1;
  lVar2 = lVar1 + unaff_RBP;
  *param_1 = lVar2;
  FUN_156c35b03(CONCAT71((int7)((ulonglong)lVar2 >> 8),0xe6),
                CONCAT71((int7)((ulonglong)lVar1 >> 8),0xe6));
  return;
}



// FUNCTION 14dbf6ded FUN_14dbf6ded body=379 status=ok
// SIG undefined FUN_14dbf6ded(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf6e85) */

undefined8 FUN_14dbf6ded(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_16122ac1c(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                         (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14dbf71e2 FUN_14dbf71e2 body=308 status=ok
// SIG undefined FUN_14dbf71e2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf72cb) */
/* WARNING: Removing unreachable block (ram,0x000161b35c71) */
/* WARNING: Removing unreachable block (ram,0x00014dbf7270) */

undefined8
FUN_14dbf71e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (&stack0xffffffffffffffe0 < &DAT_00000008) {
    uVar1 = (*(code *)0x162821289)(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  uVar1 = FUN_156cf1239();
  return uVar1;
}



// FUNCTION 14dbf73d3 FUN_14dbf73d3 body=161 status=ok
// SIG undefined FUN_14dbf73d3(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf746a) */
/* WARNING: Removing unreachable block (ram,0x00014dbf7476) */

undefined8
FUN_14dbf73d3(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  uVar1 = ~(param_6 & param_1) & (param_6 | param_1);
  param_5 = param_2 - *(longlong *)(&stack0xfffffffff3488800 + in_RAX) & 0xfffffffffffffeff;
  *(undefined8 *)(uVar1 - 8) = local_res20;
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  *(undefined8 *)(uVar1 - 0x18) = 0x174e35d91;
  lVar2 = *(longlong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = unaff_retaddr;
  lVar3 = *(longlong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(longlong *)(uVar1 - 0x10) = *(longlong *)(uVar1 - 0x10) - lVar3;
  *(longlong *)(uVar1 - 0x10) = -*(longlong *)(uVar1 - 0x10);
  uVar4 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = uStackX_18;
  *(longlong *)(uVar1 - 8) = lVar2 + -0xe6fab3c;
  uVar6 = *(undefined8 *)(uVar1 - 0x18);
  uVar5 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined8 *)(uVar1 - 0x10) = uVar4;
  *(undefined8 *)(uVar1 - 0x18) = uVar4;
  *(undefined8 *)(uVar1 - 0x20) = in_R10;
  *(undefined **)(uVar1 - 0x10) = &LAB_14d7be16d;
  *(undefined8 *)(uVar1 - 0x20) = 0x1612142fa;
  FUN_16673b233(uVar5,uVar6,param_3);
  uVar4 = *(undefined8 *)(uVar1 - 0x10);
  *(undefined1 **)(uVar1 - 0x18) = &LAB_161214309;
  return uVar4;
}



// FUNCTION 14dbf7476 FUN_14dbf7476 body=27 status=ok
// SIG undefined FUN_14dbf7476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dbf7476(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbf7527 FUN_14dbf7527 body=155 status=ok
// SIG undefined FUN_14dbf7527(void)

void FUN_14dbf7527(void)

{
  undefined8 in_R11;
  longlong in_stack_00000028;
  
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined **)(in_stack_00000028 + -0x10) = &DAT_1621e1242;
  return;
}



// FUNCTION 14dbf75c9 FUN_14dbf75c9 body=150 status=ok
// SIG undefined FUN_14dbf75c9(void)

/* WARNING: Removing unreachable block (ram,0x00015b341ee5) */
/* WARNING: Removing unreachable block (ram,0x00015b341eeb) */
/* WARNING: Removing unreachable block (ram,0x00015b341ef6) */
/* WARNING: Removing unreachable block (ram,0x00014dbf765f) */

void FUN_14dbf75c9(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  longlong lVar3;
  ulonglong unaff_RBP;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  ulonglong local_res18 [2];
  
  uVar2 = *(ulonglong *)((longlong)local_res18 + unaff_R12);
  *(ulonglong *)((longlong)local_res18 + unaff_R12) =
       ~*(ulonglong *)((longlong)local_res18 + unaff_R12);
  *(ulonglong *)((longlong)local_res18 + unaff_R12) =
       *(ulonglong *)((longlong)local_res18 + unaff_R12) | unaff_RBP;
  *(ulonglong *)((longlong)local_res18 + unaff_R12) =
       -1 - ((~unaff_RBP | uVar2) & *(ulonglong *)((longlong)local_res18 + unaff_R12));
  lVar3 = (-~unaff_RBP - (~param_6 + 2)) + ~(~param_6 | ~unaff_RBP) * -2;
  local_res18[0] = local_res18[1];
  puVar1 = (ulonglong *)(lVar3 + -8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ param_2;
  *(undefined8 *)(lVar3 + -0x10) = in_RAX;
  *(undefined8 *)(lVar3 + -0x18) = in_RAX;
  *(undefined8 *)(lVar3 + -0x20) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x28) = param_4;
  *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
  *(undefined8 *)(lVar3 + -0x18) = param_3;
  *(undefined1 **)(lVar3 + -8) = &LAB_1616d90db;
  local_res18[1] = param_4;
  thunk_FUN_15b642ca5(in_stack_00000008,*(undefined8 *)(lVar3 + -0x10),
                      *(undefined8 *)(lVar3 + -0x18),*(undefined8 *)(lVar3 + -0x28));
  return;
}



// FUNCTION 14dbf765f FUN_14dbf765f body=173 status=ok
// SIG undefined FUN_14dbf765f(void)

void FUN_14dbf765f(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  FUN_156cea85c(0x24,param_2,*(longlong *)(unaff_R13 + -0x90) + unaff_R15);
  return;
}



// FUNCTION 14dbf7996 FUN_14dbf7996 body=458 status=ok
// SIG undefined FUN_14dbf7996(void)

void FUN_14dbf7996(undefined8 param_1,byte param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 in_R11;
  ulonglong uVar8;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  byte bVar9;
  undefined8 unaff_retaddr;
  ulonglong local_res18;
  
  uVar1 = local_res18 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = unaff_retaddr;
  uVar4 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  bVar9 = 0;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & 0x1568f28f5;
  *(undefined8 *)(uVar1 - 0x20) = 0x14dbf7a22;
  uVar3 = FUN_1568f28a2();
  uVar6 = *(ulonglong *)(unaff_RDI + -0x50) | uVar4;
  uVar8 = 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x50) & uVar4) & uVar6;
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RSI;
  uVar7 = *(ulonglong *)(unaff_RDI + -0x30);
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) = uVar7;
  uVar7 = ~(uVar7 & uVar4) & (*(ulonglong *)(uVar1 - 0x18) | uVar4);
  uVar5 = CONCAT71(0x1568f28,param_2 & 0x51);
  *(undefined8 *)(uVar1 - 0x18) = uVar2;
  *(undefined8 *)(uVar1 - 0x20) = uVar3;
  *(undefined8 *)(uVar1 - 0x28) = 0x14dbf7ab5;
  FUN_160d15dab();
  uVar3 = *(undefined8 *)(uVar1 - 0x20);
  *(ulonglong *)(uVar1 - 0x20) = uVar6;
  *(undefined8 *)(uVar1 - 0x28) = uVar3;
  uVar2 = *(undefined8 *)(uVar1 - 0x28);
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(uVar1 - 0x28) = uVar5;
  *(undefined8 *)(uVar1 - 0x30) = uVar5;
  uVar3 = *(undefined8 *)(unaff_RDI + -8);
  *(ulonglong *)(uVar1 - 0x38) = (~param_3 | unaff_R12 - (ulonglong)bVar9) + param_3 + 1;
  *(undefined8 *)(uVar1 - 0x28) = uVar3;
  uVar3 = *(undefined8 *)(uVar1 - 0x30);
  *(undefined8 *)(uVar1 - 0x30) = *(undefined8 *)(unaff_RDI + -0x98);
  *(ulonglong *)(uVar1 - 0x38) = uVar8;
  *(undefined8 *)(uVar1 - 0x48) = uVar3;
  *(undefined4 *)(uVar1 - 0x50) = 0xa3e34ca4;
  *(undefined4 *)(uVar1 - 0x4c) = 0xffffffff;
  *(ulonglong *)(uVar1 - 0x48) = uVar7;
  *(ulonglong *)(uVar1 - 0x50) = uVar7;
  *(undefined **)(uVar1 - 0x48) = &DAT_14dbf7b65;
  FUN_161215903(uVar2);
  return;
}



// FUNCTION 14dbf7cad FUN_14dbf7cad body=237 status=ok
// SIG undefined FUN_14dbf7cad(void)

/* WARNING: Removing unreachable block (ram,0x0001610bb78e) */
/* WARNING: Removing unreachable block (ram,0x00014dbf7d44) */
/* WARNING: Removing unreachable block (ram,0x00014dbf7d4a) */

void FUN_14dbf7cad(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16493ffd0((char)param_1,
                (*(ulonglong *)(unaff_RDI + -0x50) - param_1) +
                (~param_1 | *(ulonglong *)(unaff_RDI + -0x50)) * -2 + -2 & 0xffffffffffffff00,
                FUN_16493ffd0,*(undefined8 *)(unaff_RDI + -0x60));
  if (unaff_RDI != -0x7c250db8) {
    FUN_1572d5ce2();
    return;
  }
  FUN_1565b234e(0,FUN_1565b234e,0,
                *(ulonglong *)
                 (((unaff_R13 & param_1 ^ 0xffffffffffffffff) & (unaff_R12 | param_1)) - 0x60) ^
                unaff_R15);
  return;
}



// FUNCTION 14dbf7d4a FUN_14dbf7d4a body=101 status=ok
// SIG undefined FUN_14dbf7d4a(void)

void FUN_14dbf7d4a(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong local_res8;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = param_2;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_R14;
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_R14;
  *(undefined8 *)(lStackX_18 + -0x10) = *(undefined8 *)(lStackX_18 + -8);
  puVar1 = (ulonglong *)(lStackX_18 + -0x18);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ local_res8;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_RDI;
  *(code **)(lStackX_18 + -0x20) = FUN_14dbf7dc5;
  *(undefined8 *)(lStackX_18 + -8) = *(undefined8 *)(lStackX_18 + -0x20);
  FUN_14d7c0241(param_1,*(undefined8 *)(lStackX_18 + -0x10));
  return;
}



// FUNCTION 14dbf7dc5 FUN_14dbf7dc5 body=65 status=ok
// SIG undefined FUN_14dbf7dc5(void)

void FUN_14dbf7dc5(void)

{
  FUN_1662a7e63();
  return;
}



// FUNCTION 14dbf8284 FUN_14dbf8284 body=434 status=ok
// SIG undefined FUN_14dbf8284(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf83c7) */

void FUN_14dbf8284(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16551612b(param_1,~(unaff_RSI - ((~unaff_RBP | ~param_2) ^ 0xffffffffffffffff) &
                         (0xffffffffffffffff - param_2 | param_1)),param_3);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  uVar2 = ~(~unaff_R15 & uVar1) + uVar1;
  if (unaff_R15 <= uVar2) {
    FUN_14dcbf0dc();
    return;
  }
  if (unaff_R15 < uVar2) {
    uVar2 = -~*(ulonglong *)(unaff_R13 + -0x78) - 1;
    FUN_15af61095(~(uVar2 & unaff_R15) & (uVar2 | unaff_R15),
                  *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                  *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                  ~((*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15) & unaff_R15) &
                  ((uVar1 + unaff_R15) - (uVar1 & unaff_R15)) - 0x5f);
    return;
  }
  FUN_14dcbf0dc();
  return;
}



// FUNCTION 14dbf84dd FUN_14dbf84dd body=148 status=ok
// SIG undefined FUN_14dbf84dd(void)

void FUN_14dbf84dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *in_RAX;
  
  *in_RAX = (~(~-(*in_RAX | 0xfeff) + 2) - 0xff) + *in_RAX;
  (*(code *)0x16597a00e)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbf8574 FUN_14dbf8574 body=56 status=ok
// SIG undefined FUN_14dbf8574(void)

void FUN_14dbf8574(void)

{
  return;
}



// FUNCTION 14dbf86ae FUN_14dbf86ae body=42 status=ok
// SIG undefined FUN_14dbf86ae(void)

void FUN_14dbf86ae(void)

{
  return;
}



// FUNCTION 14dbf87de FUN_14dbf87de body=165 status=ok
// SIG undefined FUN_14dbf87de(void)

void FUN_14dbf87de(void)

{
  return;
}



// FUNCTION 14dbf89d8 FUN_14dbf89d8 body=146 status=ok
// SIG undefined FUN_14dbf89d8(void)

undefined8 FUN_14dbf89d8(undefined8 param_1)

{
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined4 *)(local_res18 + -0x20) = 0x1c97;
  *(undefined4 *)(local_res18 + -0x1c) = 0;
  *(undefined8 *)(local_res18 + -0x18) = 0x156e5c7cc;
  return unaff_retaddr;
}



// FUNCTION 14dbf8c70 FUN_14dbf8c70 body=102 status=ok
// SIG undefined FUN_14dbf8c70(void)

void FUN_14dbf8c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_15b642ca5(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dbf8d93 FUN_14dbf8d93 body=182 status=ok
// SIG undefined FUN_14dbf8d93(void)

void FUN_14dbf8d93(undefined8 param_1,undefined8 param_2)

{
  FUN_1656ab516(1,param_2);
  FUN_165c7153c();
  return;
}



// FUNCTION 14dbf8f60 FUN_14dbf8f60 body=288 status=ok
// SIG undefined FUN_14dbf8f60(void)

void FUN_14dbf8f60(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_RBP;
  
  FUN_1574e273f();
  uVar1 = *unaff_RBP;
  uVar2 = *unaff_RBP;
  *unaff_RBP = 0;
  *unaff_RBP = *unaff_RBP + (-0x101 - (uVar1 & 0x100 | 0xfeff)) + uVar2;
  FUN_1665accfa();
  return;
}



// FUNCTION 14dbf9275 FUN_14dbf9275 body=178 status=ok
// SIG undefined FUN_14dbf9275(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dbf92a2) */

ulonglong FUN_14dbf9275(void)

{
  ulonglong uVar1;
  undefined4 local_res8;
  
  if ((local_res8 & 0x8000) == 0) {
    uVar1 = FUN_1656e894d();
    return uVar1;
  }
  return (ulonglong)(local_res8 | 0xffff0000);
}



// FUNCTION 14dbf93d0 FUN_14dbf93d0 body=30 status=ok
// SIG undefined FUN_14dbf93d0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dbf93d0(void)

{
  longlong unaff_RBP;
  ulonglong unaff_R14;
  
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(longlong *)(unaff_RBP + 8) = *(longlong *)(unaff_RBP + 8) + 2;
  *(longlong *)(unaff_RBP + 8) = -*(longlong *)(unaff_RBP + 8);
  *(longlong *)(unaff_RBP + 8) = *(longlong *)(unaff_RBP + 8) - ~unaff_R14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dbf945c FUN_14dbf945c body=277 status=ok
// SIG undefined FUN_14dbf945c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf948d) */
/* WARNING: Removing unreachable block (ram,0x00014dbf9504) */
/* WARNING: Removing unreachable block (ram,0x00014dbf9543) */
/* WARNING: Removing unreachable block (ram,0x00014dbf954a) */

longlong FUN_14dbf945c(void)

{
  ulonglong uVar1;
  undefined1 unaff_R13B;
  undefined7 unaff_000000a9;
  undefined1 unaff_R15B;
  undefined7 unaff_000000b9;
  
  uVar1 = *(ulonglong *)(CONCAT71(unaff_000000a9,unaff_R13B) + -0x38);
  return uVar1 + CONCAT71(unaff_000000b9,unaff_R15B) +
         (uVar1 & CONCAT71(unaff_000000b9,unaff_R15B)) * -2;
}



// FUNCTION 14dbf9603 FUN_14dbf9603 body=128 status=ok
// SIG undefined FUN_14dbf9603(void)

void FUN_14dbf9603(void)

{
  return;
}



// FUNCTION 14dbf9685 FUN_14dbf9685 body=325 status=ok
// SIG undefined FUN_14dbf9685(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbf9685(undefined8 param_1)

{
  FUN_15b0b3bd5(param_1);
  FUN_14ddead81();
  return;
}



// FUNCTION 14dbf9874 FUN_14dbf9874 body=165 status=ok
// SIG undefined FUN_14dbf9874(void)

void FUN_14dbf9874(void)

{
  return;
}



// FUNCTION 14dbf991e FUN_14dbf991e body=316 status=ok
// SIG undefined FUN_14dbf991e(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf99a6) */
/* WARNING: Removing unreachable block (ram,0x00014dbf99b2) */

void FUN_14dbf991e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_15b9e83fd(param_1,param_2,param_3,unaff_retaddr);
  *(undefined8 *)(&stack0x00000010 + param_3) = param_1;
  return;
}



// FUNCTION 14dbf9b8c FUN_14dbf9b8c body=607 status=ok
// SIG undefined FUN_14dbf9b8c(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf9c1e) */
/* WARNING: Removing unreachable block (ram,0x00014dbf9d3e) */
/* WARNING: Removing unreachable block (ram,0x00014dbf9d49) */
/* WARNING: Removing unreachable block (ram,0x00016228779e) */
/* WARNING: Removing unreachable block (ram,0x00014dbf9d4f) */

undefined8 FUN_14dbf9b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x160e371ef)(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dbf9d4f FUN_14dbf9d4f body=152 status=ok
// SIG undefined FUN_14dbf9d4f(void)

void FUN_14dbf9d4f(undefined8 param_1)

{
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined8 *)(&stack0xfffffffffe429db5 + unaff_R12) = *(undefined8 *)(unaff_R13 + -0x68);
  *(undefined8 *)(&stack0xfffffffffe429dbd + unaff_R12) =
       *(undefined8 *)(&stack0xfffffffffe429dbd + unaff_R12);
  *(undefined8 *)(&stack0xfffffffffe429dbd + unaff_R12) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffffe429db5 + unaff_R12) = unaff_R15;
  *(undefined2 *)(&stack0xfffffffffe429db5 + unaff_R12) = 0x822;
  *(undefined8 *)(&stack0xfffffffffe429db5 + unaff_R12) = param_1;
  FUN_1625a677b(*(undefined8 *)(&stack0xfffffffffe429db5 + unaff_R12));
  return;
}



// FUNCTION 14dbf9de8 FUN_14dbf9de8 body=132 status=ok
// SIG undefined FUN_14dbf9de8(void)

/* WARNING: Removing unreachable block (ram,0x00014dbf9e33) */

void FUN_14dbf9de8(undefined8 param_1)

{
  FUN_15647881a(param_1,FUN_15647881a);
  return;
}



// FUNCTION 14dbfa002 FUN_14dbfa002 body=152 status=ok
// SIG undefined FUN_14dbfa002(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfa0a7) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa0b4) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa0bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa0d9) */

void FUN_14dbfa002(longlong param_1)

{
  if (-1 < param_1) {
    FUN_160e4502e();
    return;
  }
  return;
}



// FUNCTION 14dbfa0a7 FUN_14dbfa0a7 body=49 status=ok
// SIG undefined FUN_14dbfa0a7(void)

void FUN_14dbfa0a7(ulonglong param_1)

{
  ulonglong unaff_RBP;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_14d84b02d(~(((~param_1 | unaff_RBP) - (~unaff_RBP | param_1 | ~param_1 | unaff_RBP)) +
                   (~unaff_RBP | param_1)),FUN_14d84b02d);
    return;
  }
  return;
}



// FUNCTION 14dbfa13b FUN_14dbfa13b body=334 status=ok
// SIG undefined FUN_14dbfa13b(void)

/* WARNING: Removing unreachable block (ram,0x0001650d512c) */
/* WARNING: Removing unreachable block (ram,0x0001650d5132) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa1d7) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa1e3) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa1ee) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa1f3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dbfa13b(undefined8 param_1)

{
  FUN_14e0d8fd8(param_1,0);
  return;
}



// FUNCTION 14dbfa330 FUN_14dbfa330 body=110 status=ok
// SIG undefined FUN_14dbfa330(void)

void FUN_14dbfa330(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78);
  FUN_162f0d71f(param_1 ^ unaff_retaddr,
                ~(uVar1 & unaff_retaddr) & (~(uVar1 & unaff_retaddr) + unaff_retaddr) - ~uVar1);
  return;
}



// FUNCTION 14dbfa3a0 thunk_FUN_14dbfa3a6 body=5 status=ok
// SIG undefined thunk_FUN_14dbfa3a6(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfa54d) */
/* WARNING: Removing unreachable block (ram,0x000161151d6a) */
/* WARNING: Removing unreachable block (ram,0x000161151d70) */
/* WARNING: Removing unreachable block (ram,0x000161151dd1) */
/* WARNING: Removing unreachable block (ram,0x000161151dec) */
/* WARNING: Removing unreachable block (ram,0x000161de4a7d) */
/* WARNING: Removing unreachable block (ram,0x00016532525d) */
/* WARNING: Removing unreachable block (ram,0x000165325263) */
/* WARNING: Removing unreachable block (ram,0x0001563b64ce) */
/* WARNING: Removing unreachable block (ram,0x0001563b64da) */
/* WARNING: Removing unreachable block (ram,0x0001563b6568) */
/* WARNING: Removing unreachable block (ram,0x0001563b6573) */
/* WARNING: Removing unreachable block (ram,0x0001563b6579) */
/* WARNING: Removing unreachable block (ram,0x00016596d551) */
/* WARNING: Removing unreachable block (ram,0x00016192b74c) */
/* WARNING: Removing unreachable block (ram,0x00016192b752) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa428) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa4b1) */
/* WARNING: Removing unreachable block (ram,0x0001563b643f) */
/* WARNING: Removing unreachable block (ram,0x00014e1b1116) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa4bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa646) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa64c) */
/* WARNING: Removing unreachable block (ram,0x000161151cda) */

undefined8 thunk_FUN_14dbfa3a6(void)

{
  byte bVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  bVar1 = ((byte)*(undefined8 *)(unaff_R13 + -0x78) ^ (byte)unaff_R15) & 0x3f;
  uVar3 = (ushort)(unaff_RDI >> bVar1) | (ushort)(unaff_RDI << 0x41 - bVar1) |
          (ushort)(0L << 0x40 - bVar1);
  if ((ushort)(~(uVar3 & 0x8c36) + uVar3) != -1) {
    uVar2 = FUN_156faf137(FUN_156faf137,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
    return uVar2;
  }
  uVar2 = FUN_16532513f();
  return uVar2;
}



// FUNCTION 14dbfa3a6 FUN_14dbfa3a6 body=277 status=ok
// SIG undefined FUN_14dbfa3a6(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfa54d) */
/* WARNING: Removing unreachable block (ram,0x000161151d6a) */
/* WARNING: Removing unreachable block (ram,0x000161151d70) */
/* WARNING: Removing unreachable block (ram,0x000161151dd1) */
/* WARNING: Removing unreachable block (ram,0x000161151dec) */
/* WARNING: Removing unreachable block (ram,0x000161de4a7d) */
/* WARNING: Removing unreachable block (ram,0x00016532525d) */
/* WARNING: Removing unreachable block (ram,0x000165325263) */
/* WARNING: Removing unreachable block (ram,0x0001563b64ce) */
/* WARNING: Removing unreachable block (ram,0x0001563b64da) */
/* WARNING: Removing unreachable block (ram,0x0001563b6568) */
/* WARNING: Removing unreachable block (ram,0x0001563b6573) */
/* WARNING: Removing unreachable block (ram,0x0001563b6579) */
/* WARNING: Removing unreachable block (ram,0x00016596d551) */
/* WARNING: Removing unreachable block (ram,0x00016192b74c) */
/* WARNING: Removing unreachable block (ram,0x00016192b752) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa428) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa4b1) */
/* WARNING: Removing unreachable block (ram,0x0001563b643f) */
/* WARNING: Removing unreachable block (ram,0x00014e1b1116) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa4bd) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa646) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa64c) */
/* WARNING: Removing unreachable block (ram,0x000161151cda) */

undefined8 FUN_14dbfa3a6(void)

{
  byte bVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  bVar1 = ((byte)*(undefined8 *)(unaff_R13 + -0x78) ^ (byte)unaff_R15) & 0x3f;
  uVar3 = (ushort)(unaff_RDI >> bVar1) | (ushort)(unaff_RDI << 0x41 - bVar1) |
          (ushort)(0L << 0x40 - bVar1);
  if ((ushort)(~(uVar3 & 0x8c36) + uVar3) != -1) {
    uVar2 = FUN_156faf137(FUN_156faf137,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
    return uVar2;
  }
  uVar2 = FUN_16532513f();
  return uVar2;
}



// FUNCTION 14dbfa4bd FUN_14dbfa4bd body=253 status=ok
// SIG undefined FUN_14dbfa4bd(void)

/* WARNING: Removing unreachable block (ram,0x000161151d6a) */
/* WARNING: Removing unreachable block (ram,0x000161151d70) */
/* WARNING: Removing unreachable block (ram,0x000161151dd1) */
/* WARNING: Removing unreachable block (ram,0x000161151dec) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa54d) */
/* WARNING: Removing unreachable block (ram,0x000161de4a7d) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa64c) */

undefined8
FUN_14dbfa4bd(short *param_1,undefined8 param_2,undefined8 param_3,short param_4,undefined8 param_5,
             longlong param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R13;
  ulonglong uVar3;
  undefined8 unaff_R15;
  short sStackX_8;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  *param_1 = (-0x101 - ~(0xffffU - param_4 & ~(sStackX_8 + 0x93bdU))) + *param_1;
  *(undefined8 *)(param_6 + -8) = in_R10;
  *(undefined8 *)(param_6 + -0x10) = unaff_R15;
  *(undefined8 *)(param_6 + -0x18) = unaff_R15;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined1 **)(param_6 + -8) = &LAB_160b862f7;
  *(undefined8 *)(param_6 + -0x18) = 0x14dbfa53a;
  uVar2 = FUN_160b862cc(uStackX_18,param_2,param_3,uStackX_20);
  *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(unaff_R13 + -0x58);
  uVar1 = *(ulonglong *)(param_6 + -0x18);
  uVar3 = ~uVar1 | 0xe02e7c626721c4c4;
  *(undefined8 *)(param_6 + -0x18) = uVar2;
  *(undefined4 *)(param_6 + -0x18) = 0x806b5380;
  *(undefined4 *)(param_6 + -0x14) = 0xffffffff;
  *(code **)(param_6 + -0x18) = FUN_14dbfa5bc;
  FUN_164fb883c();
  *(undefined8 *)(param_6 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_6 + -0x10) =
       *(undefined8 *)
        (((~uVar3 | uVar1 | 0x1fd1839d98de3b3b) + uVar3 + 1 ^ 0xffffffffffffffff) - 0x50);
  uVar2 = FUN_161de4a7d();
  return uVar2;
}



// FUNCTION 14dbfa5bc FUN_14dbfa5bc body=287 status=ok
// SIG undefined FUN_14dbfa5bc(void)

/* WARNING: Removing unreachable block (ram,0x000161151d6a) */
/* WARNING: Removing unreachable block (ram,0x000161151d70) */
/* WARNING: Removing unreachable block (ram,0x000161151dd1) */
/* WARNING: Removing unreachable block (ram,0x000161151dec) */
/* WARNING: Removing unreachable block (ram,0x000161de4a7d) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa64c) */

undefined8 FUN_14dbfa5bc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_161de4a7d();
  return uVar1;
}



// FUNCTION 14dbfa6df FUN_14dbfa6df body=155 status=ok
// SIG undefined FUN_14dbfa6df(void)

/* WARNING: Instruction at (ram,0x000164828628) overlaps instruction at (ram,0x000164828627)
    */
/* WARNING: Removing unreachable block (ram,0x000164828627) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa7ec) */
/* WARNING: Removing unreachable block (ram,0x000164828625) */
/* WARNING: Removing unreachable block (ram,0x0001648285ae) */
/* WARNING: Removing unreachable block (ram,0x0001648286bb) */
/* WARNING: Removing unreachable block (ram,0x0001648286c1) */
/* WARNING: Removing unreachable block (ram,0x0001648286c6) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa77b) */
/* WARNING: Removing unreachable block (ram,0x000164828608) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa7f9) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa804) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa7ff) */

void FUN_14dbfa6df(undefined8 param_1,undefined8 param_2)

{
  undefined2 local_res8;
  
  if ((ushort)((~(local_res8 | 0xfeff) - 0x100) + local_res8) != 0) {
    FUN_156c4e428(param_1,param_2);
    return;
  }
  FUN_156c4e428(param_1,param_2);
  return;
}



// FUNCTION 14dbfa77b FUN_14dbfa77b body=385 status=ok
// SIG undefined FUN_14dbfa77b(void)

/* WARNING: Instruction at (ram,0x000164828628) overlaps instruction at (ram,0x000164828627)
    */
/* WARNING: Removing unreachable block (ram,0x000164828627) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa7ec) */
/* WARNING: Removing unreachable block (ram,0x000164828625) */
/* WARNING: Removing unreachable block (ram,0x0001648285ae) */
/* WARNING: Removing unreachable block (ram,0x0001648286bb) */
/* WARNING: Removing unreachable block (ram,0x0001648286c1) */
/* WARNING: Removing unreachable block (ram,0x0001648286c6) */
/* WARNING: Removing unreachable block (ram,0x00014dbfa804) */

void FUN_14dbfa77b(void)

{
  ushort in_AX;
  ushort in_stack_00000028;
  
  if (CARRY2(in_AX,in_stack_00000028)) {
    FUN_164828608();
    return;
  }
  FUN_166b0823d();
  return;
}



// FUNCTION 14dbfa9b4 FUN_14dbfa9b4 body=445 status=ok
// SIG undefined FUN_14dbfa9b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfaa51) */

undefined8 FUN_14dbfa9b4(ulonglong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong lVar3;
  undefined8 in_R11;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  lVar3 = local_res20 + param_1 + (local_res20 & param_1) * -2;
  plVar1 = (longlong *)(lVar3 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RBP;
  *plVar1 = -*plVar1;
  *(longlong *)(lVar3 + -0x10) = *plVar1;
  *(undefined8 *)(lVar3 + -0x18) = in_R11;
  uVar2 = thunk_FUN_161444343(in_stack_00000010,param_2);
  return uVar2;
}



// FUNCTION 14dbfaae7 FUN_14dbfaae7 body=211 status=ok
// SIG undefined FUN_14dbfaae7(void)

undefined8 FUN_14dbfaae7(int param_1,undefined8 param_2,int param_3)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  
  uVar1 = FUN_160e3fb79(param_1 + param_3,in_EAX,0x93713fb2);
  return uVar1;
}



// FUNCTION 14dbfabfc FUN_14dbfabfc body=34 status=ok
// SIG undefined FUN_14dbfabfc(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfad2b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfad31) */
/* WARNING: Removing unreachable block (ram,0x00014dbfad9e) */
/* WARNING: Removing unreachable block (ram,0x00014dbfaca2) */

void FUN_14dbfabfc(void)

{
  return;
}



// FUNCTION 14dbfaca2 FUN_14dbfaca2 body=439 status=ok
// SIG undefined FUN_14dbfaca2(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfad2b) */
/* WARNING: Removing unreachable block (ram,0x00014dbfad31) */
/* WARNING: Removing unreachable block (ram,0x00014dbfad9e) */

void FUN_14dbfaca2(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98) ^ param_1;
  uVar2 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
  *(ulonglong *)(uVar2 - 8) = ~((~param_1 | unaff_RBP) & (unaff_RBP ^ 0xffffffffffffffff | param_1))
  ;
  *(ulonglong *)(uVar2 - 0x10) = uVar1;
  *(ulonglong *)(uVar2 - 0x18) = uVar1;
  *(undefined8 *)(uVar2 - 0x20) = in_R10;
  uVar3 = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_R14;
  *(undefined8 *)(uVar2 - 0x28) = unaff_R15;
  *(undefined8 *)(uVar2 - 0x10) = uVar3;
  uVar1 = *(ulonglong *)(uVar2 - 0x18);
  *(undefined1 **)(uVar2 - 8) = &LAB_166cfd2c4;
  FUN_166cfd2a8(uVar1,param_2);
  return;
}



// FUNCTION 14dbfade5 thunk_FUN_160e7b2c5 body=5 status=ok
// SIG undefined thunk_FUN_160e7b2c5(void)

void thunk_FUN_160e7b2c5(void)

{
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dbfb011 FUN_14dbfb011 body=25 status=ok
// SIG undefined FUN_14dbfb011(void)

void FUN_14dbfb011(void)

{
  thunk_FUN_161178fac();
  return;
}



// FUNCTION 14dbfb0cb FUN_14dbfb0cb body=445 status=ok
// SIG undefined FUN_14dbfb0cb(void)

/* WARNING: Removing unreachable block (ram,0x00014dbfb14a) */

void FUN_14dbfb0cb(void)

{
  return;
}



// FUNCTION 14dbfb358 FUN_14dbfb358 body=6 status=ok
// SIG undefined FUN_14dbfb358(void)

void FUN_14dbfb358(void)

{
  return;
}


