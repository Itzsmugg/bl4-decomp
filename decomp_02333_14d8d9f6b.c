// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d8d9f6b FUN_14d8d9f6b body=1095 status=ok
// SIG undefined FUN_14d8d9f6b(void)

/* WARNING: Removing unreachable block (ram,0x00014d8da09d) */
/* WARNING: Removing unreachable block (ram,0x000156958d51) */

void FUN_14d8d9f6b(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  longlong lVar7;
  uint unaff_EBP;
  undefined8 in_R11;
  uint unaff_R12D;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0xa0);
  lVar7 = -1 - ((~uVar2 & ~unaff_R15 | uVar2) & (~uVar2 | unaff_R15));
  FUN_165986413(param_1,param_2);
  uVar2 = (local_res18 & param_1 ^ 0xffffffffffffffff) & (local_res18 | param_1);
  puVar1 = (ulonglong *)(local_res20 ^ param_1);
  local_res18._0_2_ = (ushort)uVar2;
  local_res18._0_2_ = (-0x101 - ((ushort)local_res18 | 0xfeff)) + (ushort)local_res18;
  bVar11 = ((ushort)local_res18 & 0x4000) != 0;
  bVar10 = ((ushort)local_res18 & 0x200) != 0;
  bVar9 = ((ushort)local_res18 & 0x100) != 0;
  bVar15 = (uVar2 & 0x200000) != 0;
  bVar12 = (uVar2 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  puVar1[-1] = (ulonglong)FUN_165986413;
  puVar1[-2] = lVar7;
  puVar1[-3] = lVar7;
  puVar1[-4] = param_4;
  puVar1[-2] = puVar1[-1];
  lVar7 = puVar1[-3];
  puVar1[-3] = unaff_RBX;
  puVar1[-1] = (ulonglong)&LAB_15b2d2121;
  puVar1[-3] = 0x156958c08;
  uVar5 = FUN_15b2d2101();
  puVar1[-2] = puVar1[-2] - param_3;
  uVar3 = puVar1[-2];
  uVar2 = puVar1[-1];
  puVar1[-1] = *puVar1;
  *puVar1 = uVar5;
  uVar5 = puVar1[-1];
  uVar4 = uVar5 & 0x400;
  bVar8 = (uVar5 & 0x800) != 0;
  if (bVar8) {
    puVar1[-1] = uVar5;
    uVar5 = puVar1[-1];
  }
  uVar5 = (uVar5 & 0xff) << 8;
  *puVar1 = (ulonglong)FUN_15b2d2101;
  puVar1[-1] = (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)bVar8 * 0x800 |
               (ulonglong)(uVar4 != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)((uVar5 & 0x8000) != 0) * 0x80 |
               (ulonglong)((uVar5 & 0x4000) != 0) * 0x40 | (ulonglong)((uVar5 & 0x1000) != 0) * 0x10
               | (ulonglong)((uVar5 & 0x400) != 0) * 4 | (ulonglong)((uVar5 & 0x100) != 0) |
               (ulonglong)(bVar15 & 1) * 0x200000 | (ulonglong)(bVar14 & 1) * 0x100000 |
               (ulonglong)(bVar13 & 1) * 0x80000 | (ulonglong)(bVar12 & 1) * 0x40000;
  *(uint *)(puVar1 + -2) = 0xf263c7e5;
  *(uint *)((longlong)puVar1 + -0xc) = 0xffffffff;
  uVar5 = puVar1[-2];
  puVar1[-2] = in_R11;
  *(undefined8 *)((longlong)puVar1 + uVar5 + 0xd9c382b) = uVar3;
  uVar5 = *puVar1;
  puVar1[1] = uVar2;
  *puVar1 = uVar2;
  puVar1[-1] = 0x156958c96;
  FUN_164f339a9();
  *(uint *)puVar1 = (uint)*puVar1 | 0x9490985b;
  uVar2 = *puVar1;
  *(uint *)puVar1 = 0xdac1a2b3;
  *(uint *)puVar1 = (uint)*puVar1 + 0x253e5d4d;
  *(uint *)puVar1 =
       (uint)*puVar1 ^
       ~(~(unaff_R12D & ~(~(unaff_EBP & 0xd0153236) & ((uint)uVar5 | 0xd0153236))) & (uint)uVar2);
  *(undefined4 *)(puVar1 + -1) = 0xf448e890;
  *(uint *)((longlong)puVar1 + -4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + puVar1[-1] + 0xbb71774) = 0xe02e7c62;
  uVar5 = *puVar1;
  uVar2 = *(ulonglong *)(lVar7 + -0x58);
  if (uVar2 + uVar5 != 0) {
    FUN_164822880();
    return;
  }
  *puVar1 = in_RAX;
  puVar1[-1] = in_RAX;
  *(undefined1 *)(puVar1 + -1) = 0xb9;
  *puVar1 = 0;
  *puVar1 = *puVar1 - ((uVar2 & uVar5) <<
                      (~(~((byte)puVar1[-1] & 0x47) & ((byte)puVar1[-1] | 0x47)) & 0x3f));
  uVar3 = *(undefined8 *)(lVar7 + -0x80);
  uVar6 = 0;
  if ((*puVar1 & 0x80000000) != 0) {
    uVar6 = 0xffffffff;
  }
  *puVar1 = 0x16482290d;
  FUN_14d9c12d2(uVar3,uVar6);
  *puVar1 = (ulonglong)&LAB_164822918;
  return;
}



// FUNCTION 14d8da0b7 FUN_14d8da0b7 body=256 status=ok
// SIG undefined FUN_14d8da0b7(void)

/* WARNING: Removing unreachable block (ram,0x00014d8da13c) */

void FUN_14d8da0b7(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  *(ulonglong *)(unaff_RBP + 0x10) = *(ulonglong *)(unaff_RBP + 0x10) | ~unaff_RDI;
  *(ulonglong *)(unaff_RBP + 0x10) = ~*(ulonglong *)(unaff_RBP + 0x10);
  FUN_156410868(param_1,param_2,param_3,param_4);
  (*(code *)0x1669e6edd)(0x1669e6edd,*(undefined8 *)(unaff_R13 + -0x48),param_3 ^ unaff_R15);
  return;
}



// FUNCTION 14d8da142 FUN_14d8da142 body=138 status=ok
// SIG undefined FUN_14d8da142(void)

/* WARNING: Removing unreachable block (ram,0x00014d8da224) */

void FUN_14d8da142(longlong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(undefined8 *)(unaff_RSI + -0x70);
  FUN_161534919(uVar1,FUN_161534919,
                0xffffffffffffffff - ((param_1 - ~in_RAX) + unaff_RBP + 1) & unaff_RBX);
  FUN_161b8dba3(CONCAT71((int7)((ulonglong)uVar1 >> 8),0xe4) ^ 0xe5);
  return;
}



// FUNCTION 14d8da1cd FUN_14d8da1cd body=129 status=ok
// SIG undefined FUN_14d8da1cd(void)

/* WARNING: Removing unreachable block (ram,0x00014d8da224) */

void FUN_14d8da1cd(undefined8 param_1,undefined8 param_2)

{
  FUN_161b8dba3(1,param_2,FUN_161b8dba3);
  return;
}



// FUNCTION 14d8da252 FUN_14d8da252 body=204 status=ok
// SIG undefined FUN_14d8da252(void)

void * FUN_14d8da252(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  bool bVar4;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar5;
  longlong local_res8;
  
  pvVar3 = ProcessEnvironmentBlock;
  *(undefined8 *)(local_res8 + -8) = in_R10;
  *(undefined8 *)(local_res8 + -0x10) = in_R10;
  *(ulonglong *)(local_res8 + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined4 *)(local_res8 + -0x20) = 0x42517677;
  *(undefined4 *)(local_res8 + -0x1c) = 0;
  uVar2 = *(ulonglong *)(local_res8 + -0x20);
  uVar5 = *(ulonglong *)(local_res8 + -0x18);
  *(ulonglong *)(local_res8 + -0x18) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  uVar5 = *(ulonglong *)(local_res8 + -0x18);
  *(undefined8 *)(local_res8 + -0x18) = param_3;
  *(ulonglong *)(local_res8 + -0x20) =
       (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(local_res8 + -0x28) = 0x41b3eef1;
  *(undefined4 *)(local_res8 + -0x24) = 0;
  uVar5 = *(ulonglong *)(local_res8 + -0x28);
  *(undefined8 *)(local_res8 + -0x28) = unaff_R13;
  *(ulonglong *)(local_res8 + -0x10 + (uVar5 ^ 0x41b3eef9)) = (uVar2 ^ 0x543c825c) - 0xf18d7cd;
  bVar4 = (*(ulonglong *)(local_res8 + -0x20) & 0x80) != 0;
  uVar1 = *(undefined8 *)(local_res8 + -0x10);
  *(undefined8 *)(local_res8 + -0x10) = unaff_RDI;
  *(undefined8 *)(local_res8 + -0x18) = unaff_RDI;
  *(code **)(local_res8 + -0x10) = FUN_165c7153c;
  if ((!bVar4) && (bVar4)) {
    *(undefined8 *)(local_res8 + -0x20) = uVar1;
    *(undefined8 *)(local_res8 + -0x28) = uVar1;
    *(undefined1 **)(local_res8 + -0x20) = &LAB_14d8da31f;
    return pvVar3;
  }
  return pvVar3;
}



// FUNCTION 14d8da3c3 FUN_14d8da3c3 body=175 status=ok
// SIG undefined FUN_14d8da3c3(void)

void FUN_14d8da3c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x162c8352c)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8da653 FUN_14d8da653 body=246 status=ok
// SIG undefined FUN_14d8da653(void)

/* WARNING: Removing unreachable block (ram,0x00014d8da700) */
/* WARNING: Removing unreachable block (ram,0x00014d8da6d5) */

void FUN_14d8da653(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_15b18d1ab(unaff_retaddr,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8da74a FUN_14d8da74a body=292 status=ok
// SIG undefined FUN_14d8da74a(void)

/* WARNING: Removing unreachable block (ram,0x000165d88884) */
/* WARNING: Removing unreachable block (ram,0x000165d8888a) */
/* WARNING: Removing unreachable block (ram,0x00015764819a) */
/* WARNING: Removing unreachable block (ram,0x00014df3ede5) */
/* WARNING: Removing unreachable block (ram,0x00014df3edeb) */
/* WARNING: Removing unreachable block (ram,0x00014d8da86e) */
/* WARNING: Removing unreachable block (ram,0x000165d88855) */

void FUN_14d8da74a(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x68);
  if ((unaff_R15 - 1 < ~*(ulonglong *)(unaff_R13 + -0xa0)) &&
     (~*(ulonglong *)(unaff_R13 + -0xa0) < unaff_R15 - 1)) {
    uVar1 = *(ulonglong *)
             (~((~unaff_R15 | uVar1) & (~(~uVar1 & unaff_R15) + unaff_R15) - uVar1) - 0x80);
    if ((-param_1 - uVar1) + (uVar1 | param_1) * 2 != 0) {
      FUN_15764819a();
      return;
    }
    FUN_14df3ed47();
    return;
  }
  FUN_16149976b(param_1);
  return;
}



// FUNCTION 14d8da86e FUN_14d8da86e body=147 status=ok
// SIG undefined FUN_14d8da86e(void)

void FUN_14d8da86e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_165c8a4f4((char)param_1,FUN_165c8a4f4,param_3,*(ulonglong *)(unaff_RDI + -0x30) | param_1);
  return;
}



// FUNCTION 14d8daa34 FUN_14d8daa34 body=147 status=ok
// SIG undefined FUN_14d8daa34(void)

/* WARNING: Removing unreachable block (ram,0x000156d978b2) */
/* WARNING: Removing unreachable block (ram,0x000156d978b8) */
/* WARNING: Removing unreachable block (ram,0x00014d8daac8) */
/* WARNING: Removing unreachable block (ram,0x00014d8daafd) */
/* WARNING: Removing unreachable block (ram,0x000156500023) */
/* WARNING: Removing unreachable block (ram,0x00014d8dab02) */
/* WARNING: Removing unreachable block (ram,0x00014d8dab05) */
/* WARNING: Removing unreachable block (ram,0x00014d8dab55) */
/* WARNING: Removing unreachable block (ram,0x00014d8dab5b) */
/* WARNING: Removing unreachable block (ram,0x000160da0944) */
/* WARNING: Removing unreachable block (ram,0x0001564fff91) */

undefined8 FUN_14d8daa34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_R14;
  bool in_ZF;
  
  if (in_ZF) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_R14 == 0xfd6c9) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_R14 == 0xfd75b) {
    uVar1 = FUN_1564fff91();
    return uVar1;
  }
  if (unaff_R14 == 0xfd75c) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (0xfd75b < unaff_R14) {
    uVar1 = FUN_156d97826();
    return uVar1;
  }
  if (unaff_R14 == 0xfd75d) {
    return in_RAX;
  }
  if (unaff_R14 == 0xfd75e) {
    return in_RAX;
  }
  if (unaff_R14 != 0xfd7d9) {
    return in_RAX;
  }
  uVar1 = FUN_1574ba9da(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d8daac8 FUN_14d8daac8 body=289 status=ok
// SIG undefined FUN_14d8daac8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dab02) */
/* WARNING: Removing unreachable block (ram,0x00014d8dab5b) */

void FUN_14d8daac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong local_res8;
  
  FUN_16250e2c4(in_RAX ^ local_res8,*(ulonglong *)(unaff_R12 + -0x78) ^ local_res8,param_3);
  return;
}



// FUNCTION 14d8dab61 FUN_14d8dab61 body=143 status=ok
// SIG undefined FUN_14d8dab61(void)

void FUN_14d8dab61(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14e0131a6(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x28)) &
                        (~*(ulonglong *)(unaff_RDI + -0x28) | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d8dae86 FUN_14d8dae86 body=389 status=ok
// SIG undefined FUN_14d8dae86(void)

/* WARNING: Removing unreachable block (ram,0x00014d8daf2d) */
/* WARNING: Removing unreachable block (ram,0x00014d8daf38) */
/* WARNING: Removing unreachable block (ram,0x00014d8daf33) */

void FUN_14d8dae86(void)

{
  FUN_165514713();
  return;
}



// FUNCTION 14d8db2c1 FUN_14d8db2c1 body=130 status=ok
// SIG undefined FUN_14d8db2c1(void)

void FUN_14d8db2c1(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ((-1 - (~param_1 & in_R10)) + in_R10) - (-1 - ~param_1);
  FUN_1571bd9af(~(uVar1 & (~in_R10 | unaff_R15)),FUN_1571bd9af,uVar1,
                ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15));
  return;
}



// FUNCTION 14d8db346 FUN_14d8db346 body=166 status=ok
// SIG undefined FUN_14d8db346(void)

void FUN_14d8db346(void)

{
  return;
}



// FUNCTION 14d8db47f FUN_14d8db47f body=1081 status=ok
// SIG undefined FUN_14d8db47f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8db519) */
/* WARNING: Removing unreachable block (ram,0x00014d8db51f) */

undefined8 FUN_14d8db47f(void)

{
  uint in_EAX;
  undefined8 uVar1;
  
  if ((in_EAX & 0x80000000) == 0) {
    uVar1 = FUN_162d631d7();
    return uVar1;
  }
  return CONCAT44(0xffffffff,in_EAX);
}



// FUNCTION 14d8db5bc FUN_14d8db5bc body=285 status=ok
// SIG undefined FUN_14d8db5bc(void)

void FUN_14d8db5bc(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined1 local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88);
  FUN_15b30b481(~local_res20,0xffffffffffffff88,
                ~(uVar1 & unaff_R15) & (~(uVar1 & unaff_R15) + unaff_R15) - ~uVar1,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d8db707 FUN_14d8db707 body=627 status=ok
// SIG undefined FUN_14d8db707(void)

/* WARNING: Removing unreachable block (ram,0x00014d8db828) */
/* WARNING: Removing unreachable block (ram,0x00014d8db82e) */

longlong FUN_14d8db707(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  FUN_165e304c2(param_1,param_2,param_3);
  uVar1 = ~-*(longlong *)(unaff_RDI + -0x50) + 1;
  return uVar1 + param_1 + (uVar1 & param_1) * -2;
}



// FUNCTION 14d8db949 FUN_14d8db949 body=153 status=ok
// SIG undefined FUN_14d8db949(void)

/* WARNING: Removing unreachable block (ram,0x00014d8db9e4) */
/* WARNING: Removing unreachable block (ram,0x000156807071) */

void FUN_14d8db949(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong unaff_R14;
  
  *(ulonglong *)(unaff_R14 + 8) = ~*(ulonglong *)(unaff_R14 + 8);
  lVar1 = *(longlong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = *(ulonglong *)(unaff_R14 + 8) & in_RAX;
  *(ulonglong *)(unaff_R14 + 8) = (lVar1 + in_RAX) - *(longlong *)(unaff_R14 + 8);
  *(ulonglong *)(unaff_R14 + 8) = ~(param_2 & *(ulonglong *)(unaff_R14 + 8));
  FUN_156807071();
  return;
}



// FUNCTION 14d8db9e4 FUN_14d8db9e4 body=143 status=ok
// SIG undefined FUN_14d8db9e4(void)

void FUN_14d8db9e4(void)

{
  ulonglong in_RAX;
  ulonglong in_R10;
  undefined8 in_stack_00000008;
  
  *(ulonglong *)(in_R10 >> 1) =
       ~((in_RAX | 0xe4c395124b23636) + 0xf1b3c6aedb4dc9ca) & (in_RAX | 0xf1b3c6aedb4dc9c9);
  thunk_FUN_1627529c3(in_stack_00000008);
  return;
}



// FUNCTION 14d8dbd15 FUN_14d8dbd15 body=398 status=ok
// SIG undefined FUN_14d8dbd15(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dbe1a) */

void FUN_14d8dbd15(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  FUN_15b6c97fd(param_1,param_2,*(undefined8 *)(unaff_retaddr + -0x98));
  uVar1 = ~*(ulonglong *)(unaff_retaddr + -0xa0);
  if (~((unaff_R15 - ~(*(ulonglong *)(unaff_retaddr + -0xa0) & ~unaff_R15)) + uVar1) + unaff_R15 <
      (uVar1 ^ 0xffffffffffffffff)) {
    FUN_15b44cf8d();
    return;
  }
  FUN_15b44cf8d();
  return;
}



// FUNCTION 14d8dbfda FUN_14d8dbfda body=337 status=ok
// SIG undefined FUN_14d8dbfda(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7bf32b) overlaps instruction at (ram,0x00014d7bf329)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8dc078) */
/* WARNING: Removing unreachable block (ram,0x00014d8dc06d) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf319) */

void FUN_14d8dbfda(int param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte *pbVar6;
  byte *in_RAX;
  byte bVar7;
  byte bVar10;
  undefined2 uVar9;
  uint uVar11;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined1 *unaff_retaddr;
  char cVar8;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  in_RAX[param_2] = bVar10;
  *(char *)(unaff_RSI + 0x2f) = *(char *)(unaff_RSI + 0x2f) + bVar10;
  do {
    bVar10 = DAT_94e34dd641d149b4;
    pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_94e34dd641d149b4);
    if (param_1 != *(int *)(unaff_RSI + -0x44)) {
      DAT_46cccb3fd92d4889 = DAT_94e34dd641d149b4 ^ 0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)(unaff_RBP + 0x5c) = (float)in_ST0;
    puVar1 = (uint *)(unaff_RSI + 0x21);
    uVar2 = *puVar1;
    uVar11 = (uint)unaff_RBX;
    *puVar1 = *puVar1 + uVar11;
    cVar8 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
    cVar5 = cVar8 - bVar10;
    bVar7 = cVar5 - CARRY4(uVar2,uVar11);
    if (bVar7 != 0 &&
        (SBORROW1(cVar8,bVar10) != SBORROW1(cVar5,CARRY4(uVar2,uVar11))) == (char)bVar7 < '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((char)bVar7 >= '\0') {
      uVar9 = (undefined2)CONCAT31((int3)((ulonglong)in_RAX >> 8) >> 0x17,bVar7);
      uVar3 = in(uVar9);
      *unaff_retaddr = uVar3;
      uVar4 = in(uVar9);
      *(undefined4 *)(unaff_retaddr + 1) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_retaddr = &DAT_7d23a164;
    unaff_RBX = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),(ushort)(byte)unaff_RBX);
    bVar10 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar7;
    param_1 = 0;
    in_RAX = pbVar6;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  } while (!CARRY1(bVar10,bVar7) && *pbVar6 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8dc2e3 FUN_14d8dc2e3 body=129 status=ok
// SIG undefined FUN_14d8dc2e3(void)

void FUN_14d8dc2e3(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong auStackX_10 [3];
  
  *(ulonglong *)((longlong)auStackX_10 + unaff_R15) =
       (param_1 - (*(ulonglong *)((longlong)auStackX_10 + unaff_R15) | param_1)) +
       *(longlong *)((longlong)auStackX_10 + unaff_R15);
  auStackX_10[2] = auStackX_10[2] << 1;
  FUN_164a3e080(FUN_164a3e080,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14d8dc4bd FUN_14d8dc4bd body=249 status=ok
// SIG undefined FUN_14d8dc4bd(void)

void FUN_14d8dc4bd(undefined8 param_1)

{
  longlong lVar1;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res8;
  
  FUN_16150c826(param_1);
  lVar1 = local_res8 + unaff_R15 + (local_res8 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = 0x2e5c226;
  *(undefined8 *)(lVar1 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar1 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar1 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d8dc72b FUN_14d8dc72b body=139 status=ok
// SIG undefined FUN_14d8dc72b(void)

void FUN_14d8dc72b(void)

{
  FUN_166d38ff5(0x335d608f,0x335d6087);
  return;
}



// FUNCTION 14d8dc843 FUN_14d8dc843 body=305 status=ok
// SIG undefined FUN_14d8dc843(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8dc8c2) */
/* WARNING: Removing unreachable block (ram,0x00014d8dc8c8) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3b4e) */

void FUN_14d8dc843(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(undefined **)(local_res18 + -8) = &DAT_1613a066f;
  FUN_1613a0643();
  return;
}



// FUNCTION 14d8dca35 FUN_14d8dca35 body=654 status=ok
// SIG undefined FUN_14d8dca35(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dcb42) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcc26) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcc37) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcc53) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcc58) */
/* WARNING: Removing unreachable block (ram,0x000165e37780) */
/* WARNING: Removing unreachable block (ram,0x000160da988d) */
/* WARNING: Removing unreachable block (ram,0x000160da9812) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcad0) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcb3c) */
/* WARNING: Removing unreachable block (ram,0x00015670e5de) */
/* WARNING: Removing unreachable block (ram,0x00015670e61a) */
/* WARNING: Removing unreachable block (ram,0x00015670e615) */
/* WARNING: Removing unreachable block (ram,0x00015670e651) */
/* WARNING: Removing unreachable block (ram,0x00014d8dcc5e) */

void FUN_14d8dca35(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_156da27fd(param_1,uVar1 + unaff_R15 +
                        (-~uVar1 - (~(unaff_R15 - (uVar1 | unaff_R15)) + 2)) * -2);
  (*(code *)0x161ddda2c)();
  return;
}



// FUNCTION 14d8dccca thunk_FUN_157842fff body=5 status=ok
// SIG undefined thunk_FUN_157842fff(void)

void thunk_FUN_157842fff(void)

{
  FUN_157842fff();
  return;
}



// FUNCTION 14d8dced1 FUN_14d8dced1 body=301 status=ok
// SIG undefined FUN_14d8dced1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dcf72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d8dced1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8dd000 FUN_14d8dd000 body=140 status=ok
// SIG undefined FUN_14d8dd000(void)

void FUN_14d8dd000(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_15b002fbe(local_res10,param_2,param_3,param_4,*(undefined8 *)(param_2 + -0x40));
  FUN_14d8dd091();
  return;
}



// FUNCTION 14d8dd091 FUN_14d8dd091 body=166 status=ok
// SIG undefined FUN_14d8dd091(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8dd091(undefined1 param_1)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  FUN_1616a0174(param_1,uVar1,uVar1 + in_RAX,uVar1 & in_RAX);
  return;
}



// FUNCTION 14d8dd386 FUN_14d8dd386 body=353 status=ok
// SIG undefined FUN_14d8dd386(void)

void FUN_14d8dd386(void)

{
  FUN_162e26353();
  FUN_166009377();
  return;
}



// FUNCTION 14d8dd58f FUN_14d8dd58f body=136 status=ok
// SIG undefined FUN_14d8dd58f(void)

void FUN_14d8dd58f(void)

{
  FUN_157859a8e();
  return;
}



// FUNCTION 14d8dd744 FUN_14d8dd744 body=121 status=ok
// SIG undefined FUN_14d8dd744(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dd7a4) */
/* WARNING: Removing unreachable block (ram,0x00014d8dd786) */

undefined8 FUN_14d8dd744(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8ddb3c FUN_14d8ddb3c body=184 status=ok
// SIG undefined FUN_14d8ddb3c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ddbf5) */

void FUN_14d8ddb3c(longlong param_1,char param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  longlong unaff_RBP;
  undefined8 uVar2;
  
  lVar1 = unaff_RBX + ((in_RAX - unaff_RBP) + param_1 + 1) * -2;
  uVar2 = 0;
  if (param_2 < '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  if (-1 < (short)CONCAT71((int7)((ulonglong)uVar2 >> 8),param_2)) {
    FUN_15730a9a7(param_1,0xdbbc98d,lVar1);
    return;
  }
  FUN_15730a9a7(param_1,0xdbbc98d,lVar1);
  return;
}



// FUNCTION 14d8ddbf5 FUN_14d8ddbf5 body=176 status=ok
// SIG undefined FUN_14d8ddbf5(void)

void FUN_14d8ddbf5(void)

{
  return;
}



// FUNCTION 14d8ddd36 FUN_14d8ddd36 body=334 status=ok
// SIG undefined FUN_14d8ddd36(void)

void FUN_14d8ddd36(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_R13;
  
  FUN_164bab530(FUN_164bab530,~param_2,
                ~-*(longlong *)(unaff_R13 + -0x58) + 0xe02e7c626721c4c5U +
                (~-*(longlong *)(unaff_R13 + -0x58) + 1U & 0xe02e7c626721c4c4) * -2,
                0xffffffff8afe6021);
  return;
}



// FUNCTION 14d8de100 FUN_14d8de100 body=125 status=ok
// SIG undefined FUN_14d8de100(void)

void FUN_14d8de100(void)

{
  ushort *in_R9;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *in_R9 = (-0x101 - ~(~*in_R9 & 0x100)) + *in_R9;
  *(undefined8 *)(local_res20 + -8) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(longlong *)(local_res20 + -8) = *(longlong *)(local_res20 + -8) + -0x161263e22;
  *(longlong *)(local_res20 + -8) = -*(longlong *)(local_res20 + -8);
  *(undefined **)(local_res20 + -0x18) = &DAT_161263dfe;
  return;
}



// FUNCTION 14d8de214 FUN_14d8de214 body=159 status=ok
// SIG undefined FUN_14d8de214(void)

undefined8 FUN_14d8de214(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14d8de418 FUN_14d8de418 body=174 status=ok
// SIG undefined FUN_14d8de418(void)

/* WARNING: Removing unreachable block (ram,0x00014d8de4af) */
/* WARNING: Removing unreachable block (ram,0x00014d8de4c0) */
/* WARNING: Removing unreachable block (ram,0x00014d8de4b5) */

undefined8 FUN_14d8de418(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164ba0bc1();
  return uVar1;
}



// FUNCTION 14d8de90d FUN_14d8de90d body=127 status=ok
// SIG undefined FUN_14d8de90d(void)

void FUN_14d8de90d(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  (*(code *)&LAB_164a36509)(param_1,param_2 + in_RAX + (param_2 & in_RAX) * -2);
  return;
}



// FUNCTION 14d8dea57 FUN_14d8dea57 body=136 status=ok
// SIG undefined FUN_14d8dea57(void)

void FUN_14d8dea57(void)

{
  FUN_16674a489();
  return;
}



// FUNCTION 14d8deadf FUN_14d8deadf body=303 status=ok
// SIG undefined FUN_14d8deadf(void)

/* WARNING: Instruction at (ram,0x00014d8debdb) overlaps instruction at (ram,0x00014d8debda)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8deca9) */
/* WARNING: Removing unreachable block (ram,0x00014d8decaf) */
/* WARNING: Removing unreachable block (ram,0x00014d8deb80) */
/* WARNING: Removing unreachable block (ram,0x00014d8debd7) */
/* WARNING: Removing unreachable block (ram,0x00014d8debd2) */
/* WARNING: Removing unreachable block (ram,0x00014d8debda) */
/* WARNING: Removing unreachable block (ram,0x000166390759) */
/* WARNING: Removing unreachable block (ram,0x00014d8deb70) */

void FUN_14d8deadf(undefined8 param_1,undefined8 param_2)

{
  FUN_162babc92(param_1,param_2,0xffffffffffffffff);
  return;
}



// FUNCTION 14d8dec17 FUN_14d8dec17 body=468 status=ok
// SIG undefined FUN_14d8dec17(void)

/* WARNING: Removing unreachable block (ram,0x00014d8deca9) */
/* WARNING: Removing unreachable block (ram,0x00014d8decaf) */

void FUN_14d8dec17(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  FUN_15b67b6fb(~((uVar1 - (uVar2 | uVar1)) + uVar2),*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                0x24f505b0);
  return;
}



// FUNCTION 14d8dee0b FUN_14d8dee0b body=138 status=ok
// SIG undefined FUN_14d8dee0b(void)

void FUN_14d8dee0b(void)

{
  return;
}



// FUNCTION 14d8def2c FUN_14d8def2c body=592 status=ok
// SIG undefined FUN_14d8def2c(void)

void FUN_14d8def2c(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte in_AL;
  ushort uVar8;
  ulonglong uVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong unaff_RSI;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 in_R10D;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar15;
  bool bVar16;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  longlong local_res20;
  
  uVar8 = 0xff01 - (1 - (local_res18 | 0x100));
  LOCK();
  bVar15 = in_AL < DAT_14d7ac4c5;
  bVar16 = SBORROW1(in_AL,DAT_14d7ac4c5);
  cVar7 = in_AL - DAT_14d7ac4c5;
  if (cVar7 == '\0') {
    DAT_14d7ac4c5 = (byte)uStackX_10;
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar16 * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar7 < '\0') * 0x80 |
       (ulonglong)(cVar7 == '\0') * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar7) & 1U) == 0) * 4 | (ulonglong)bVar15 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = 0x14d8defad;
  FUN_161718d9c(uStackX_10,uStackX_8);
  *(undefined4 *)(local_res20 + -0x18) = in_R10D;
  *(undefined4 *)(local_res20 + -0x14) = 0xf1b3c6ae;
  uVar4 = *(ulonglong *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(unaff_RSI + -0x48);
  uVar2 = *(ulonglong *)(local_res20 + -0x18);
  puVar1 = (ulonglong *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x18) = *(undefined8 *)(unaff_RSI + -0x78);
  uVar9 = 0xffffffffffffffff - uVar4 | *(ulonglong *)(local_res20 + -0x18);
  uVar13 = ~uVar4 & ~*(ulonglong *)(local_res20 + -0x18) | uVar4;
  bVar15 = uVar13 == 0;
  pcVar10 = FUN_162d4527a;
  *(undefined8 *)(local_res20 + -0x18) = 0x14d8df050;
  uVar11 = uVar9;
  uVar14 = uVar13;
  FUN_162d4527a();
  uVar3 = *puVar1;
  if (bVar15) {
    FUN_164998deb();
    return;
  }
  *puVar1 = uVar2 ^ uVar4;
  *(undefined4 *)(local_res20 + -0x18) = 0x5588ba74;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  lVar12 = uVar4 - (*(ulonglong *)(local_res20 + -0x18) ^ 0x558acc33);
  if (lVar12 == 0) {
    FUN_164998deb();
    return;
  }
  *puVar1 = uVar9;
  *(ulonglong *)(local_res20 + -0x18) = uVar11;
  *(undefined8 *)(local_res20 + -0x20) = 0x14d8df0ed;
  FUN_14e0f0b59();
  uVar5 = *(undefined8 *)(local_res20 + -0x18);
  *(code **)(local_res20 + -0x18) = pcVar10;
  uVar6 = *(undefined8 *)(local_res20 + -0x18);
  uVar2 = *puVar1;
  *puVar1 = uVar14;
  *(ulonglong *)(local_res20 + -0x18) = uVar2;
  *(ulonglong *)(local_res20 + -0x20) = uVar3;
  *(longlong *)(local_res20 + -0x28) = lVar12 + 0x27647;
  *(ulonglong *)(local_res20 + -0x18) = uVar13;
  *(undefined8 *)(local_res20 + -0x20) = uVar5;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x20) = in_R11;
  *(undefined8 *)(local_res20 + -0x28) = in_R11;
  *(code **)(local_res20 + -0x20) = FUN_14d8df191;
  FUN_160bd1780(uVar6);
  return;
}



// FUNCTION 14d8df191 FUN_14d8df191 body=329 status=ok
// SIG undefined FUN_14d8df191(void)

/* WARNING: Removing unreachable block (ram,0x00014d8df22c) */

undefined8 FUN_14d8df191(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined4 local_res10;
  
  uVar1 = FUN_156eda00c(param_1,local_res10,*(undefined8 *)(unaff_R13 + -0x88),
                        ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
                        (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15));
  return uVar1;
}



// FUNCTION 14d8df2e1 FUN_14d8df2e1 body=120 status=ok
// SIG undefined FUN_14d8df2e1(void)

void FUN_14d8df2e1(void)

{
  return;
}



// FUNCTION 14d8df42f FUN_14d8df42f body=47 status=ok
// SIG undefined FUN_14d8df42f(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8df42f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8df4e5 FUN_14d8df4e5 body=178 status=ok
// SIG undefined FUN_14d8df4e5(void)

/* WARNING: Removing unreachable block (ram,0x0001650f0b5a) */
/* WARNING: Removing unreachable block (ram,0x0001650f0b65) */
/* WARNING: Removing unreachable block (ram,0x0001650f0bc8) */
/* WARNING: Removing unreachable block (ram,0x0001650f0bcc) */
/* WARNING: Removing unreachable block (ram,0x0001650f0b60) */
/* WARNING: Removing unreachable block (ram,0x00014d8df64b) */
/* WARNING: Removing unreachable block (ram,0x00014d8df61c) */
/* WARNING: Removing unreachable block (ram,0x00014d8df597) */
/* WARNING: Removing unreachable block (ram,0x00014d8df640) */
/* WARNING: Removing unreachable block (ram,0x00014d8df645) */
/* WARNING: Removing unreachable block (ram,0x00014df54735) */

void FUN_14d8df4e5(void)

{
  ulonglong unaff_R12;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  undefined6 local_res20;
  undefined2 uStackX_26;
  
  *unaff_R13 = *unaff_R13 ^ 0xffffffffffffffff;
  *unaff_R13 = *unaff_R13 | unaff_R15;
  *unaff_R13 = ~(unaff_R12 & *unaff_R13);
  if (-1 < (longlong)
           (CONCAT26(uStackX_26,local_res20) + unaff_R15 +
           (CONCAT26(uStackX_26,local_res20) & unaff_R15) * -2)) {
    FUN_16269e8b1();
    return;
  }
  FUN_16269e8b1();
  return;
}



// FUNCTION 14d8df597 FUN_14d8df597 body=278 status=FAIL
// SIG undefined FUN_14d8df597(void)
/* DECOMPILE FAILED */

// FUNCTION 14d8df709 FUN_14d8df709 body=187 status=ok
// SIG undefined FUN_14d8df709(void)

/* WARNING: Removing unreachable block (ram,0x000161c83631) */
/* WARNING: Removing unreachable block (ram,0x000161d8bdf6) */
/* WARNING: Removing unreachable block (ram,0x000161d8bdfc) */
/* WARNING: Removing unreachable block (ram,0x000161d8bfc7) */
/* WARNING: Removing unreachable block (ram,0x000161d8bfcd) */
/* WARNING: Removing unreachable block (ram,0x00016574cec0) */
/* WARNING: Removing unreachable block (ram,0x00015649dd84) */
/* WARNING: Removing unreachable block (ram,0x00014d8df7c7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d8df709(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = CONCAT44(0xffffffff,(int)local_res8 + -0xb0c8427);
  *(undefined8 *)(unaff_RBP + local_res8 + 0xb0c84f7) = 0x275dc00e;
  uVar1 = *(ulonglong *)(unaff_RBP + 0xd0);
  if (&stack0x00000000 == (undefined1 *)0x0) {
    *(ulonglong *)(unaff_RBP + 0xd0) = *(ulonglong *)(unaff_RBP + 0xd0) | 0xffffffffd8a23ff1;
    *(ulonglong *)(unaff_RBP + 0xd0) =
         ~(~(uVar1 & 0xffffffffd8a23ff1) & *(ulonglong *)(unaff_RBP + 0xd0));
    FUN_165781580(param_1,param_2,local_res10);
    return 0x75c1;
  }
  uVar2 = FUN_15649dc05(param_1,param_2,local_res10);
  return uVar2;
}



// FUNCTION 14d8df7c7 FUN_14d8df7c7 body=146 status=ok
// SIG undefined FUN_14d8df7c7(void)

void FUN_14d8df7c7(void)

{
  undefined8 in_RAX;
  ulonglong unaff_R15;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 ^ unaff_R15) - 8) = in_RAX;
  FUN_156748df9();
  return;
}



// FUNCTION 14d8df98f FUN_14d8df98f body=338 status=ok
// SIG undefined FUN_14d8df98f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dfadc) */
/* WARNING: Removing unreachable block (ram,0x00014d94828f) */
/* WARNING: Removing unreachable block (ram,0x00014d9482db) */
/* WARNING: Removing unreachable block (ram,0x00014d9482e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfae2) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfb6e) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfb73) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfb79) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfb7e) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfa29) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfa34) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfad7) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfa2f) */
/* WARNING: Removing unreachable block (ram,0x000156fe7ee0) */

void FUN_14d8df98f(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (((~param_1 | *(ulonglong *)(unaff_RDI + -0xa0)) &
      (*(ulonglong *)(unaff_RDI + -0xa0) ^ 0xffffffffffffffff | param_1)) == 0xffffffffffffffff) {
    (*(code *)0x165f00e4f)
              (*(ulonglong *)(unaff_RDI + -0x98) + param_1 +
               (*(ulonglong *)(unaff_RDI + -0x98) & param_1) * -2,param_2,param_3);
    return;
  }
  FUN_16240813a();
  return;
}



// FUNCTION 14d8dfae2 FUN_14d8dfae2 body=156 status=ok
// SIG undefined FUN_14d8dfae2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8dfb7e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8dfae2(void)

{
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  undefined2 local_res20;
  
  *(ulonglong *)(unaff_R13 + 0x18) = ~*(ulonglong *)(unaff_R13 + 0x18);
  *(ulonglong *)(unaff_R13 + 0x18) = *(ulonglong *)(unaff_R13 + 0x18) | ~unaff_retaddr;
  *(ulonglong *)(unaff_R13 + 0x18) = ~*(ulonglong *)(unaff_R13 + 0x18);
  if (CARRY2(0xfeff - (local_res20 | 0xfeff),local_res20)) {
    FUN_162256bdf();
    return;
  }
  FUN_162256bdf();
  return;
}



// FUNCTION 14d8dfb7e FUN_14d8dfb7e body=304 status=ok
// SIG undefined FUN_14d8dfb7e(void)

void FUN_14d8dfb7e(undefined8 param_1,undefined8 param_2)

{
  FUN_1657aceef(param_1,param_2);
  FUN_161735348();
  return;
}



// FUNCTION 14d8dfdd2 FUN_14d8dfdd2 body=166 status=ok
// SIG undefined FUN_14d8dfdd2(void)

void FUN_14d8dfdd2(void)

{
  return;
}



// FUNCTION 14d8dff15 FUN_14d8dff15 body=22 status=ok
// SIG undefined FUN_14d8dff15(void)

void FUN_14d8dff15(void)

{
  return;
}



// FUNCTION 14d8dff2b FUN_14d8dff2b body=287 status=ok
// SIG undefined FUN_14d8dff2b(void)

/* WARNING: Instruction at (ram,0x00014d8dffd3) overlaps instruction at (ram,0x00014d8dffd2)
    */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe0 : 0x00014d8dfff0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8dff2b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong unaff_R14;
  
  if (unaff_R14 != 0xce194) {
    pcVar1 = FUN_16678eac8;
    FUN_16678eac8(FUN_16678eac8,0xce195,param_3);
    DAT_0000803d = DAT_0000803d + (char)pcVar1;
    *(int *)(pcVar1 + 0x56) = *(int *)(pcVar1 + 0x56) + 1;
    FUN_161af111d();
    return;
  }
  FUN_1574ba9da();
  return;
}



// FUNCTION 14d8e00f4 FUN_14d8e00f4 body=295 status=ok
// SIG undefined FUN_14d8e00f4(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e03ba) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0408) */
/* WARNING: Removing unreachable block (ram,0x000162c835d6) */
/* WARNING: Removing unreachable block (ram,0x000162c8369a) */
/* WARNING: Removing unreachable block (ram,0x000162c8369e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e00f4(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  longlong unaff_retaddr;
  ulonglong in_stack_00000048;
  
  uVar2 = FUN_15b2ef5d4(param_1,0x72367d1);
  param_1 = param_1 ^ uVar2;
  uVar3 = *(ulonglong *)(unaff_retaddr + -0x78) | uVar2;
  FUN_166d1e417(param_1,(~uVar3 | 0xffffffffffffffff -
                                  (*(ulonglong *)(unaff_retaddr + -0x78) & uVar2)) + uVar3 + 1);
  uVar2 = FUN_164ab3f63(param_1,FUN_164ab3f63);
  FUN_164ff00c5(*(ulonglong *)(unaff_retaddr + -0x58) ^ uVar2,0x6be1ba99);
  uVar2 = FUN_156eb09bc(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_retaddr + 0x2e451b28U);
  plVar1 = (longlong *)((in_stack_00000048 ^ uVar2) - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_3;
  *plVar1 = -*plVar1;
  *(longlong *)((in_stack_00000048 ^ uVar2) - 0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_16127ebcf;
  FUN_14d7a96da();
  return;
}



// FUNCTION 14d8e021d FUN_14d8e021d body=321 status=ok
// SIG undefined FUN_14d8e021d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e03ba) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0408) */
/* WARNING: Removing unreachable block (ram,0x000162c835d6) */
/* WARNING: Removing unreachable block (ram,0x000162c8369a) */
/* WARNING: Removing unreachable block (ram,0x000162c8369e) */

void FUN_14d8e021d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong local_res8;
  ulonglong in_stack_00000050;
  
  uVar2 = FUN_164ab3f63(param_1);
  FUN_164ff00c5(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar2,0x6be1ba99);
  uVar2 = FUN_156eb09bc(*(ulonglong *)(unaff_R13 + -0x78) ^ local_res8);
  plVar1 = (longlong *)((in_stack_00000050 ^ uVar2) - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_3;
  *plVar1 = -*plVar1;
  *(longlong *)((in_stack_00000050 ^ uVar2) - 0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_16127ebcf;
  FUN_14d7a96da();
  return;
}



// FUNCTION 14d8e0360 FUN_14d8e0360 body=519 status=ok
// SIG undefined FUN_14d8e0360(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e03ba) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0408) */
/* WARNING: Removing unreachable block (ram,0x000162c835d6) */
/* WARNING: Removing unreachable block (ram,0x000162c8369a) */
/* WARNING: Removing unreachable block (ram,0x000162c8369e) */

void FUN_14d8e0360(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = FUN_156eb09bc(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2,param_3,param_4);
  plVar1 = (longlong *)((param_7 ^ uVar2) - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - param_3;
  *plVar1 = -*plVar1;
  *(longlong *)((param_7 ^ uVar2) - 0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_16127ebcf;
  FUN_14d7a96da();
  return;
}



// FUNCTION 14d8e04a8 FUN_14d8e04a8 body=282 status=ok
// SIG undefined FUN_14d8e04a8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e04a8(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x15b4c0016)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14d8e0654 FUN_14d8e0654 body=142 status=ok
// SIG undefined FUN_14d8e0654(void)

void FUN_14d8e0654(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 *unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  
  *unaff_RBP = unaff_RSI;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  unaff_RBP[1] = unaff_R13;
  *unaff_RBP = unaff_R14;
  FUN_1660ec3ca(param_1,uVar1 ^ param_1);
  return;
}



// FUNCTION 14d8e06e3 FUN_14d8e06e3 body=68 status=ok
// SIG undefined FUN_14d8e06e3(void)

void FUN_14d8e06e3(void)

{
  return;
}



// FUNCTION 14d8e0775 FUN_14d8e0775 body=155 status=ok
// SIG undefined FUN_14d8e0775(void)

void FUN_14d8e0775(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&LAB_16507a71d)(param_1,param_2,&LAB_16507a71d);
  return;
}



// FUNCTION 14d8e0965 FUN_14d8e0965 body=104 status=ok
// SIG undefined FUN_14d8e0965(void)

undefined8 FUN_14d8e0965(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined **)(local_res10 + -8) = &DAT_14d8e09e5;
  uVar1 = *(undefined8 *)(local_res10 + -0x10);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = 0x14d7a7f3b;
  return uVar1;
}



// FUNCTION 14d8e0aad FUN_14d8e0aad body=10 status=ok
// SIG undefined FUN_14d8e0aad(void)

void FUN_14d8e0aad(void)

{
  return;
}



// FUNCTION 14d8e0ab7 FUN_14d8e0ab7 body=172 status=ok
// SIG undefined FUN_14d8e0ab7(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d8e0bb6) overlaps instruction at (ram,0x00014d8e0bb5)
    */
/* WARNING: Removing unreachable block (ram,0x0001572b11c6) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b90b8b7) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0cfc) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0df0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0df4) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e28) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e33) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e2e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e23) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0be2) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c5d) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c68) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0cf0) */
/* WARNING: Removing unreachable block (ram,0x0001655ad641) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c63) */
/* WARNING: Removing unreachable block (ram,0x00016194bef6) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0bb5) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0b63) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0bc7) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0bc2) */
/* WARNING: Removing unreachable block (ram,0x0001572b10a5) */

void FUN_14d8e0ab7(void)

{
  longlong unaff_R13;
  
  if (-1 < (short)(((ushort)*(undefined8 *)(unaff_R13 + -0x58) | 0xc4c4) << 3)) {
    FUN_15b7f6467();
    return;
  }
  FUN_15b7f6467();
  return;
}



// FUNCTION 14d8e0b63 FUN_14d8e0b63 body=86 status=ok
// SIG undefined FUN_14d8e0b63(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d8e0bb6) overlaps instruction at (ram,0x00014d8e0bb5)
    */
/* WARNING: Removing unreachable block (ram,0x0001572b11c6) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b90b8b7) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0cfc) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0df0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0df4) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e28) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e33) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e2e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e23) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0be2) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c5d) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c68) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0cf0) */
/* WARNING: Removing unreachable block (ram,0x0001655ad641) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0c63) */
/* WARNING: Removing unreachable block (ram,0x00016194bef6) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0bb5) */

void FUN_14d8e0b63(ulonglong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  uint in_R10D;
  uint in_R11D;
  ulonglong local_8;
  
  local_8 = (ulonglong)(unaff_EBP ^ in_R11D | in_R10D);
  uVar1 = FUN_165776fba();
  param_2 = param_2 - ~(~(param_1 & 0xffffffff9de2309c) & (param_1 | 0xffffffff9de2309c));
  *(undefined8 *)(&stack0x00000000 + param_2) = unaff_RBX;
  *(undefined8 *)(&stack0x00000000 + param_2) = uVar1;
  *(undefined8 *)((longlong)&local_8 + param_2) = unaff_RSI;
  FUN_15b90b8b7();
  return;
}



// FUNCTION 14d8e0c68 FUN_14d8e0c68 body=144 status=ok
// SIG undefined FUN_14d8e0c68(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e0df0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0cfc) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0df4) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e23) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e28) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e2e) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e33) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e0c68(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined3 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong lVar2;
  undefined8 unaff_R12;
  undefined8 local_res8;
  ulonglong uStackX_10;
  ulonglong local_res18;
  
  lVar2 = local_res18 + param_1 + (local_res18 & param_1) * -2;
  uVar1 = SegmentLimit((int)in_RAX);
  *(undefined8 *)(lVar2 + -8) = unaff_RBP;
  *(undefined8 *)(lVar2 + -0x10) = unaff_RBP;
  *(ulonglong *)(lVar2 + -0x18) =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_10 & 0x800) != 0) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 | (ulonglong)((uStackX_10 & 0x80) != 0) * 0x80
       | (ulonglong)((byte)((uint3)uVar1 >> 0x10) & 1) * 0x40 |
       (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10 | (ulonglong)((uStackX_10 & 4) != 0) * 4 |
       (ulonglong)((uStackX_10 & 1) != 0) | (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(lVar2 + -0x20) = CONCAT44((int)((ulonglong)in_RAX >> 0x20),(uint)(ushort)uVar1);
  *(undefined8 *)(lVar2 + -0x28) = param_3;
  *(undefined8 *)(lVar2 + -0x30) = unaff_R12;
  FUN_1651c6c3d(local_res8,param_2,0x632e045);
  return;
}



// FUNCTION 14d8e0cfc FUN_14d8e0cfc body=309 status=ok
// SIG undefined FUN_14d8e0cfc(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e0df0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e0e33) */

void FUN_14d8e0cfc(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RSI;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(unaff_RSI + -0x80);
  FUN_166448ebc(param_1,param_2);
  uVar2 = *(ulonglong *)((-(local_res8 - lVar1) ^ unaff_RBP) - 0x68);
  uVar3 = uVar2 | param_1;
  if ((~uVar3 | ~(uVar2 & param_1)) + uVar3 == -1) {
    FUN_15717fbf9();
    return;
  }
  FUN_15717fbf9();
  return;
}



// FUNCTION 14d8e0e33 FUN_14d8e0e33 body=295 status=ok
// SIG undefined FUN_14d8e0e33(void)

void FUN_14d8e0e33(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uStackX_10;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_R12;
  *(undefined8 *)(param_1 - 0x10) = 0x14d8e0ece;
  FUN_165d41dab(uStackX_10,param_2);
  *(ulonglong *)(param_1 - 8) = uStackX_10;
  uVar2 = *(ulonglong *)(param_1 - 8);
  *(undefined8 *)(param_1 - 8) = *(undefined8 *)(unaff_RDI + -0x80);
  uVar3 = ~((~uVar2 | *(ulonglong *)(param_1 - 8)) & (~*(ulonglong *)(param_1 - 8) | uVar2));
  *(undefined8 *)(param_1 - 8) = *(undefined8 *)(unaff_RDI + -0x28);
  uVar1 = *(undefined8 *)(unaff_RDI + -0x68);
  *(ulonglong *)(param_1 - 8) = uVar3;
  *(ulonglong *)(param_1 - 0x10) = uVar3;
  *(undefined1 **)(param_1 - 8) = &LAB_14d8e0f5c;
  FUN_1650a0665(uVar2,uVar1,unaff_RSI + (param_3 & uStackX_10) * -2);
  return;
}



// FUNCTION 14d8e0f6d FUN_14d8e0f6d body=167 status=ok
// SIG undefined FUN_14d8e0f6d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e1009) */
/* WARNING: Removing unreachable block (ram,0x00014d8e100f) */
/* WARNING: Removing unreachable block (ram,0x00016146a3c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8e1014) */

void FUN_14d8e0f6d(void)

{
  return;
}



// FUNCTION 14d8e1014 FUN_14d8e1014 body=166 status=ok
// SIG undefined FUN_14d8e1014(void)

void FUN_14d8e1014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b5fbdd0(FUN_15b5fbdd0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8e113a FUN_14d8e113a body=301 status=ok
// SIG undefined FUN_14d8e113a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e125f) */
/* WARNING: Removing unreachable block (ram,0x00014d8e1265) */
/* WARNING: Removing unreachable block (ram,0x00014d8e126a) */
/* WARNING: Removing unreachable block (ram,0x00014d8e11d7) */

void FUN_14d8e113a(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong unaff_RDI;
  uint uVar3;
  ulonglong unaff_R15;
  
  bVar1 = (byte)param_1 & 0x1f;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)param_3 >> 8),0xd);
  lVar2 = *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  FUN_1653f0cfa(param_1,lVar2,uVar3 << bVar1 | uVar3 >> 0x20 - bVar1,lVar2);
  FUN_164951153(-2 - ~param_1,*(undefined8 *)(param_4 + -0x37),
                ~(*(ulonglong *)(param_4 + -0x87) & unaff_R15) &
                (~unaff_R15 & *(ulonglong *)(param_4 + -0x87) | unaff_R15),
                *(ulonglong *)(param_4 + -0x5f) ^ unaff_R15);
  return;
}



// FUNCTION 14d8e126a thunk_FUN_14d8e1270 body=5 status=ok
// SIG undefined thunk_FUN_14d8e1270(void)

void thunk_FUN_14d8e1270(ulonglong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  *param_2 = param_3;
  uVar2 = *param_2;
  *param_2 = *(ulonglong *)(unaff_RDI + -0x88);
  *param_2 = ((param_1 - (uVar1 | param_1)) + uVar1 ^ 0xffffffffffffffff) & (uVar1 | param_1);
  param_2[-1] = unaff_RDI;
  param_2[-2] = unaff_R14;
  param_2[-3] = unaff_R14;
  param_2[-2] = (ulonglong)FUN_14d8e12fd;
  FUN_161dab2ba(param_1,unaff_RBP ^ param_1,uVar2);
  return;
}



// FUNCTION 14d8e1270 FUN_14d8e1270 body=139 status=ok
// SIG undefined FUN_14d8e1270(void)

void FUN_14d8e1270(ulonglong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  *param_2 = param_3;
  uVar2 = *param_2;
  *param_2 = *(ulonglong *)(unaff_RDI + -0x88);
  *param_2 = ((param_1 - (uVar1 | param_1)) + uVar1 ^ 0xffffffffffffffff) & (uVar1 | param_1);
  param_2[-1] = unaff_RDI;
  param_2[-2] = unaff_R14;
  param_2[-3] = unaff_R14;
  param_2[-2] = (ulonglong)FUN_14d8e12fd;
  FUN_161dab2ba(param_1,unaff_RBP ^ param_1,uVar2);
  return;
}



// FUNCTION 14d8e12fd FUN_14d8e12fd body=150 status=ok
// SIG undefined FUN_14d8e12fd(void)

void FUN_14d8e12fd(undefined8 param_1,longlong param_2)

{
  longlong in_R11;
  undefined8 uStackX_8;
  undefined8 in_stack_00000010;
  longlong alStackX_18 [2];
  
  alStackX_18[1] = in_R11 - *(longlong *)((longlong)alStackX_18 + param_2);
  FUN_14dd40de9(param_1,in_stack_00000010,uStackX_8);
  return;
}



// FUNCTION 14d8e1393 FUN_14d8e1393 body=159 status=ok
// SIG undefined FUN_14d8e1393(void)

void FUN_14d8e1393(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x30);
  FUN_164a74613(param_1,param_2,(param_1 - (uVar1 | param_1)) + uVar1,uVar1 + param_1);
  return;
}



// FUNCTION 14d8e1729 FUN_14d8e1729 body=172 status=ok
// SIG undefined FUN_14d8e1729(void)

void FUN_14d8e1729(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1620b9c47(param_1,param_2,FUN_1620b9c47,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d8e1a61 FUN_14d8e1a61 body=110 status=ok
// SIG undefined FUN_14d8e1a61(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8e1ac4) */

void FUN_14d8e1a61(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = (char)((ulonglong)param_1 >> 8);
  piVar1 = (int *)FUN_1567af561();
  *piVar1 = *piVar1 + -0x7ae1eea2;
  in(0x3e);
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + cVar2);
  *pcVar3 = *pcVar3 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8e1ad1 FUN_14d8e1ad1 body=35 status=ok
// SIG undefined FUN_14d8e1ad1(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d8e1ad1(undefined8 param_1,undefined8 param_2)

{
  int *in_RAX;
  char cVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + -0x7ae1eea2;
  in(0x3e);
  cVar1 = (char)param_2 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(uVar2,cVar1) = *(char *)CONCAT71(uVar2,cVar1) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d8e1d30 FUN_14d8e1d30 body=61 status=ok
// SIG undefined FUN_14d8e1d30(void)

void FUN_14d8e1d30(ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res20;
  
  *param_1 = ~*param_1;
  *param_1 = *param_1 | 0x100;
  *param_1 = ~*param_1;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(uStackX_8,param_2,param_3,unaff_retaddr);
  *local_res20 = 0x78144aa;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8e1e5d FUN_14d8e1e5d body=116 status=ok
// SIG undefined FUN_14d8e1e5d(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e1e8d) */

void FUN_14d8e1e5d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 unaff_R15D;
  
  FUN_1574ba221(param_1,param_2,param_3,unaff_R15D);
  return;
}



// FUNCTION 14d8e1ed2 FUN_14d8e1ed2 body=229 status=ok
// SIG undefined FUN_14d8e1ed2(void)

void FUN_14d8e1ed2(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R15;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ulonglong unaff_retaddr;
  uint uStackX_8;
  undefined8 local_res20;
  
  *(undefined8 *)(unaff_RDI + (0x2a333926 - (~unaff_RSI + 2))) = param_4;
  uVar2 = ~(param_6 & unaff_retaddr) & (param_6 | unaff_retaddr);
  bVar8 = (param_5 & 0x4000) != 0;
  bVar7 = (param_5 & 0x200) != 0;
  bVar6 = 0;
  bVar5 = (param_5 & 0x10) != 0;
  bVar12 = (param_5 & 0x200000) != 0;
  bVar9 = (param_5 & 0x40000) != 0;
  bVar11 = 0;
  bVar10 = 0;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  plVar1 = (longlong *)(uVar2 - 0x10);
  *plVar1 = unaff_R15;
  *(longlong *)(uVar2 - 0x18) = unaff_R15;
  lVar3 = *(longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + lVar3;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x20) = in_R10;
  uVar4 = 0x62127db9;
  *(undefined8 *)(uVar2 - 0x28) = 0x14d8e1f6f;
  FUN_162127db9();
  *(undefined8 *)(uVar2 - 0x18) = local_res20;
  uVar4 = (~param_2 | ~uVar4) & uStackX_8;
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)(bVar8 & 1) * 0x4000 | (ulonglong)((param_5 & 0x400) != 0) * 0x400 |
       (ulonglong)(bVar7 & 1) * 0x200 | (ulonglong)(bVar6 & 1) * 0x100 |
       (ulonglong)((int)uVar4 < 0) * 0x80 | (ulonglong)(uVar4 == 0) * 0x40 |
       (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(bVar12 & 1) * 0x200000 | (ulonglong)(bVar11 & 1) * 0x100000 |
       (ulonglong)(bVar10 & 1) * 0x80000 | (ulonglong)(bVar9 & 1) * 0x40000;
  (*(code *)0x14d825cec)();
  return;
}



// FUNCTION 14d8e1fba FUN_14d8e1fba body=160 status=ok
// SIG undefined FUN_14d8e1fba(void)

void FUN_14d8e1fba(void)

{
  FUN_15af5ecee();
  return;
}



// FUNCTION 14d8e22bf FUN_14d8e22bf body=187 status=ok
// SIG undefined FUN_14d8e22bf(void)

void FUN_14d8e22bf(void)

{
  return;
}



// FUNCTION 14d8e2409 thunk_FUN_14d8e240f body=5 status=ok
// SIG undefined thunk_FUN_14d8e240f(void)

undefined8 thunk_FUN_14d8e240f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = uStackX_10;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R15;
  *(undefined1 **)(in_stack_00000028 - 0x20) = &LAB_156f67f7d;
  *(undefined8 *)(in_stack_00000028 - 0x28) = unaff_R13;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 - 0x10) = 0;
  *(undefined8 *)(in_stack_00000028 - 0x28) = 0x14d8e24a5;
  uVar4 = FUN_156f67f46();
  *(undefined8 *)(in_stack_00000028 - 0x20) = param_1;
  *(undefined8 *)(in_stack_00000028 - 0x28) = param_1;
  *(undefined1 *)(in_stack_00000028 - 0x28) = 0xe;
  uVar2 = *(undefined8 *)(in_stack_00000028 - 0x20);
  uVar3 = *(undefined8 *)(in_stack_00000028 - 0x18);
  *(undefined8 *)(in_stack_00000028 - 0x18) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(in_stack_00000028 - 0x20) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x28) = uVar1;
  uVar1 = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(in_stack_00000028 - 0x30) = uVar2;
  *(undefined8 *)(in_stack_00000028 - 0x20) = uVar1;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 0x30);
  *(undefined8 *)(in_stack_00000028 - 0x28) = *(undefined8 *)(unaff_RDI + -0x98);
  *(undefined8 *)(in_stack_00000028 - 0x30) = uVar4;
  *(undefined8 *)(in_stack_00000028 - 0x38) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x40) = uVar4;
  *(undefined4 *)(in_stack_00000028 - 0x40) = 0x8243b429;
  *(undefined4 *)(in_stack_00000028 - 0x3c) = 0xffffffff;
  uVar1 = *(undefined8 *)(in_stack_00000028 + *(longlong *)(in_stack_00000028 - 0x40) + 0x7dbc4baf);
  *(undefined8 *)(in_stack_00000028 - 0x40) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 0x48) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 0x50) = uVar3;
  *(undefined1 **)(in_stack_00000028 - 0x40) = &LAB_14d8e2555;
  *(undefined1 **)(in_stack_00000028 - 0x48) = &LAB_15647ad2b;
  return uVar1;
}



// FUNCTION 14d8e240f FUN_14d8e240f body=326 status=ok
// SIG undefined FUN_14d8e240f(void)

undefined8 FUN_14d8e240f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res10;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = local_res10;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_R15;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_R15;
  *(undefined1 **)(in_stack_00000028 - 0x20) = &LAB_156f67f7d;
  *(undefined8 *)(in_stack_00000028 - 0x28) = unaff_R13;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x20) = unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 - 0x10) = 0;
  *(undefined8 *)(in_stack_00000028 - 0x28) = 0x14d8e24a5;
  uVar4 = FUN_156f67f46();
  *(undefined8 *)(in_stack_00000028 - 0x20) = param_1;
  *(undefined8 *)(in_stack_00000028 - 0x28) = param_1;
  *(undefined1 *)(in_stack_00000028 - 0x28) = 0xe;
  uVar2 = *(undefined8 *)(in_stack_00000028 - 0x20);
  uVar3 = *(undefined8 *)(in_stack_00000028 - 0x18);
  *(undefined8 *)(in_stack_00000028 - 0x18) = *(undefined8 *)(unaff_RDI + -0x90);
  *(undefined8 *)(in_stack_00000028 - 0x20) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x28) = uVar1;
  uVar1 = *(undefined8 *)(unaff_RDI + -8);
  *(undefined8 *)(in_stack_00000028 - 0x30) = uVar2;
  *(undefined8 *)(in_stack_00000028 - 0x20) = uVar1;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 0x30);
  *(undefined8 *)(in_stack_00000028 - 0x28) = *(undefined8 *)(unaff_RDI + -0x98);
  *(undefined8 *)(in_stack_00000028 - 0x30) = uVar4;
  *(undefined8 *)(in_stack_00000028 - 0x38) = uVar1;
  *(undefined8 *)(in_stack_00000028 - 0x40) = uVar4;
  *(undefined4 *)(in_stack_00000028 - 0x40) = 0x8243b429;
  *(undefined4 *)(in_stack_00000028 - 0x3c) = 0xffffffff;
  uVar1 = *(undefined8 *)(in_stack_00000028 + *(longlong *)(in_stack_00000028 - 0x40) + 0x7dbc4baf);
  *(undefined8 *)(in_stack_00000028 - 0x40) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 0x48) = uVar3;
  *(undefined8 *)(in_stack_00000028 - 0x50) = uVar3;
  *(undefined1 **)(in_stack_00000028 - 0x40) = &LAB_14d8e2555;
  *(undefined1 **)(in_stack_00000028 - 0x48) = &LAB_15647ad2b;
  return uVar1;
}



// FUNCTION 14d8e266b FUN_14d8e266b body=165 status=ok
// SIG undefined FUN_14d8e266b(void)

void FUN_14d8e266b(void)

{
  FUN_164c425da();
  FUN_164f76e2d();
  return;
}



// FUNCTION 14d8e2710 FUN_14d8e2710 body=131 status=ok
// SIG undefined FUN_14d8e2710(void)

void FUN_14d8e2710(void)

{
  FUN_164f76e2d();
  return;
}



// FUNCTION 14d8e2794 FUN_14d8e2794 body=323 status=ok
// SIG undefined FUN_14d8e2794(void)

undefined8 FUN_14d8e2794(void)

{
  longlong unaff_R13;
  
  FUN_1628f57d5();
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d8e2973 FUN_14d8e2973 body=21 status=ok
// SIG undefined FUN_14d8e2973(void)

void FUN_14d8e2973(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d8e2b90 FUN_14d8e2b90 body=210 status=ok
// SIG undefined FUN_14d8e2b90(void)

void FUN_14d8e2b90(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) | param_1;
  FUN_165d51321(param_1,uVar1,~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) & uVar1);
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8e2dd9 FUN_14d8e2dd9 body=165 status=ok
// SIG undefined FUN_14d8e2dd9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e2f93) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f13) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f24) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f96) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f1f) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2e7e) */

void FUN_14d8e2dd9(void)

{
  undefined8 unaff_RDI;
  ushort *in_R10;
  short in_R11W;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *in_R10 = -~*in_R10 - (~(0xfeffU - in_R11W) + 2);
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined1 **)(local_res20 + -8) = &LAB_14d881194;
  if (-1 < local_res20 + -8) {
    FUN_14d881172();
    return;
  }
  FUN_14d881172();
  return;
}



// FUNCTION 14d8e2e7e FUN_14d8e2e7e body=165 status=ok
// SIG undefined FUN_14d8e2e7e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e2f93) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f13) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f24) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f96) */
/* WARNING: Removing unreachable block (ram,0x00014d8e2f1f) */

void FUN_14d8e2e7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 **)(local_res18 + -8) = &DAT_15b883792;
                    /* WARNING: Could not recover jumptable at 0x00015b883776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_res18 + -0x20))();
  return;
}



// FUNCTION 14d8e2f24 FUN_14d8e2f24 body=132 status=ok
// SIG undefined FUN_14d8e2f24(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e2f93) */

void FUN_14d8e2f24(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  undefined1 in_R10B;
  undefined7 in_register_00000091;
  
  uVar2 = (unaff_RBX - (unaff_RSI | unaff_RBX)) + unaff_RSI;
  lVar1 = ~(uVar2 | CONCAT71(in_register_00000091,in_R10B)) + 1 +
          CONCAT71(in_register_00000091,in_R10B) + uVar2;
  FUN_160c04bff(lVar1 * 2,param_2,uVar2 + CONCAT71(in_register_00000091,in_R10B) + lVar1 * -2);
  return;
}



// FUNCTION 14d8e2fa9 FUN_14d8e2fa9 body=278 status=ok
// SIG undefined FUN_14d8e2fa9(void)

void FUN_14d8e2fa9(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = FUN_15b3227e6();
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  FUN_162451b6e(~((~uVar2 | uVar1) + uVar2 + 1) & ((-1 - (uVar1 & uVar2)) + uVar2) - ~uVar1,
                *(undefined8 *)(unaff_R12 + -0x78),FUN_162451b6e);
  return;
}



// FUNCTION 14d8e30c3 FUN_14d8e30c3 body=139 status=ok
// SIG undefined FUN_14d8e30c3(void)

void FUN_14d8e30c3(undefined8 param_1)

{
  FUN_166d21777(param_1);
  return;
}



// FUNCTION 14d8e314f FUN_14d8e314f body=155 status=ok
// SIG undefined FUN_14d8e314f(void)

void FUN_14d8e314f(ulonglong param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  FUN_1614ae006(param_1,param_2,local_res18 + param_1 + (local_res18 & param_1) * -2);
  FUN_14d8e31ec();
  return;
}



// FUNCTION 14d8e31ec FUN_14d8e31ec body=177 status=ok
// SIG undefined FUN_14d8e31ec(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e3291) */
/* WARNING: Removing unreachable block (ram,0x000162a5a9eb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d8e31ec(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_162a5a9eb();
  return uVar1;
}



// FUNCTION 14d8e3337 FUN_14d8e3337 body=106 status=ok
// SIG undefined FUN_14d8e3337(void)

void FUN_14d8e3337(void)

{
  return;
}



// FUNCTION 14d8e37c2 FUN_14d8e37c2 body=154 status=ok
// SIG undefined FUN_14d8e37c2(void)

undefined8 FUN_14d8e37c2(byte param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined8 in_RAX;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lStackX_8;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff28aade6 + lStackX_8);
  *(ushort *)puVar1 = (ushort)*puVar1 & 0xfeff;
  uVar8 = *puVar1;
  lVar2 = *(longlong *)(&stack0xfffffffff28aadee + lStackX_8);
  LOCK();
  bVar5 = (byte)in_RAX;
  bVar6 = bVar5 < DAT_14d7c21ea;
  bVar7 = SBORROW1(bVar5,DAT_14d7c21ea);
  cVar4 = bVar5 - DAT_14d7c21ea;
  bVar5 = param_1;
  if (cVar4 != '\0') {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7c21ea);
    bVar5 = DAT_14d7c21ea;
  }
  DAT_14d7c21ea = bVar5;
  UNLOCK();
  *(undefined8 *)(lVar2 + -0x10) = in_RAX;
  *(undefined8 *)(lVar2 + -0x18) = 0x83cbfc;
  *(undefined8 *)(lVar2 + -0x20) = unaff_R14;
  *(ulonglong *)(lVar2 + -0x28) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
       (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar6 |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar2 + -0x18);
  uVar3 = *(undefined8 *)(lVar2 + -0x10);
  *(undefined8 *)(lVar2 + -0x10) = param_3;
  *(undefined8 *)(lVar2 + -0x18) = param_3;
  *(code **)(lVar2 + -0x10) = FUN_15b3d5987;
  *(undefined8 *)(lVar2 + -0x20) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x28) = unaff_R13;
  *(undefined **)(lVar2 + -0x20) = &DAT_14d8e385f;
  return uVar3;
}



// FUNCTION 14d8e3868 FUN_14d8e3868 body=128 status=ok
// SIG undefined FUN_14d8e3868(void)

ulonglong FUN_14d8e3868(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~((~param_1 | uVar1) & (~(~uVar1 & param_1) + param_1) - uVar1);
}



// FUNCTION 14d8e38e9 FUN_14d8e38e9 body=165 status=ok
// SIG undefined FUN_14d8e38e9(void)

void FUN_14d8e38e9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165fbf11f(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14d8e398e FUN_14d8e398e body=459 status=ok
// SIG undefined FUN_14d8e398e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e3a24) */
/* WARNING: Removing unreachable block (ram,0x00014d8e3a2a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e398e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -8);
  uVar3 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x98);
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x98) | param_1;
  uVar3 = FUN_157152f38(param_1,FUN_157152f38,param_3,(uVar1 - (uVar3 | uVar1)) + uVar3);
  uVar1 = *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12);
  *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12) =
       ~*(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12);
  *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12) =
       *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12) | uVar3;
  *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12) =
       ~((uVar3 ^ 0xffffffffffffffff | uVar1) & *(ulonglong *)(&stack0xfffffffffa3b7e22 + unaff_R12)
        );
  FUN_14df7f64e(param_1,param_4,uVar2 + uVar3 + (uVar2 & uVar3) * -2);
  (*(code *)0x160d150f3)();
  FUN_162e41369(0x8418c85);
  return;
}



// FUNCTION 14d8e3b5c FUN_14d8e3b5c body=121 status=ok
// SIG undefined FUN_14d8e3b5c(void)

void FUN_14d8e3b5c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  lVar1 = *(longlong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) & ~unaff_R15;
  *(ulonglong *)(unaff_RBP + 8) = (lVar1 + ~unaff_R15) - *(longlong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  FUN_16282ec7c(param_1,param_2);
  return;
}



// FUNCTION 14d8e3bdc FUN_14d8e3bdc body=350 status=ok
// SIG undefined FUN_14d8e3bdc(void)

/* WARNING: Removing unreachable block (ram,0x0001659f7d6b) */
/* WARNING: Removing unreachable block (ram,0x00014d8e3c5e) */

undefined8 FUN_14d8e3bdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  
  *(undefined8 *)(unaff_RSI + 0x10) = unaff_RBX;
  uVar1 = FUN_16147be87(param_1,param_2);
  return uVar1;
}



// FUNCTION 14d8e3e12 FUN_14d8e3e12 body=323 status=ok
// SIG undefined FUN_14d8e3e12(void)

void FUN_14d8e3e12(void)

{
  FUN_166ce0352();
  FUN_16626ea2d();
  return;
}



// FUNCTION 14d8e3f58 FUN_14d8e3f58 body=16 status=ok
// SIG undefined FUN_14d8e3f58(void)

void FUN_14d8e3f58(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8e3f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d8e3ffd FUN_14d8e3ffd body=115 status=ok
// SIG undefined FUN_14d8e3ffd(void)

void FUN_14d8e3ffd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14dc4186f(param_1,param_2,param_3,FUN_14dc4186f);
  return;
}



// FUNCTION 14d8e407b FUN_14d8e407b body=447 status=ok
// SIG undefined FUN_14d8e407b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000162334a5b) */
/* WARNING: Removing unreachable block (ram,0x000162334aa3) */
/* WARNING: Removing unreachable block (ram,0x000162334b6c) */
/* WARNING: Removing unreachable block (ram,0x00014d8e40f3) */

undefined8 FUN_14d8e407b(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < *(longlong *)(unaff_R13 + -8)) {
    uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x98) & unaff_R15) &
            (*(ulonglong *)(unaff_R13 + -0x98) | unaff_R15);
    FUN_1656487cd();
    param_1 = *(ulonglong *)(unaff_RDI + -0x90) ^ param_1;
    LOCK();
    uVar2 = CONCAT71((int7)(uVar1 >> 8),DAT_14d7be6da);
    UNLOCK();
    DAT_14d7be6da = (char)uVar1;
    *(undefined8 *)(param_1 - 8) = unaff_R12;
    *(undefined8 *)(param_1 - 0x10) = unaff_R12;
    *(undefined4 *)(param_1 - 0x18) = 0xd807e01;
    *(undefined4 *)(param_1 - 0x14) = 0;
    *(undefined8 *)(param_1 - 0x20) = param_3;
    *(undefined8 *)(param_1 - 0x28) = param_3;
    *(undefined8 *)(param_1 - 0x30) = param_3;
    *(code **)(param_1 - 0x20) = FUN_1613a663f;
    *(undefined1 **)(param_1 - 0x28) = &LAB_166715c50;
    return uVar2;
  }
  uVar2 = FUN_162334a3e();
  return uVar2;
}



// FUNCTION 14d8e42b6 FUN_14d8e42b6 body=299 status=ok
// SIG undefined FUN_14d8e42b6(void)

/* WARNING: Removing unreachable block (ram,0x0001571f5897) */
/* WARNING: Removing unreachable block (ram,0x0001571f591d) */
/* WARNING: Removing unreachable block (ram,0x0001571f5923) */
/* WARNING: Removing unreachable block (ram,0x00014d8c8380) */
/* WARNING: Removing unreachable block (ram,0x00014d8e4346) */
/* WARNING: Removing unreachable block (ram,0x00014d8c83c8) */
/* WARNING: Removing unreachable block (ram,0x00014d8c83cb) */

void FUN_14d8e42b6(void)

{
  FUN_1571f5897();
  return;
}



// FUNCTION 14d8e43e2 FUN_14d8e43e2 body=198 status=ok
// SIG undefined FUN_14d8e43e2(void)

undefined8 FUN_14d8e43e2(void)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R13;
  undefined8 in_stack_00000008;
  
  uVar1 = *(undefined8 *)
           (unaff_RDI +
           (~unaff_R13 | ~((unaff_RSI - 0x65974715) - (unaff_RSI & 0xffffffff9a68b8eb))));
  FUN_14daac901(in_stack_00000008);
  return uVar1;
}



// FUNCTION 14d8e4533 FUN_14d8e4533 body=75 status=ok
// SIG undefined FUN_14d8e4533(void)

void FUN_14d8e4533(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x11ed36) {
    FUN_16131bb16();
    return;
  }
  return;
}



// FUNCTION 14d8e45ce FUN_14d8e45ce body=10 status=ok
// SIG undefined FUN_14d8e45ce(void)

void FUN_14d8e45ce(void)

{
  return;
}



// FUNCTION 14d8e4a55 FUN_14d8e4a55 body=169 status=ok
// SIG undefined FUN_14d8e4a55(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d8e4afe) */
/* WARNING: Removing unreachable block (ram,0x0001567438aa) */
/* WARNING: Removing unreachable block (ram,0x000156743962) */
/* WARNING: Removing unreachable block (ram,0x00015674396e) */
/* WARNING: Removing unreachable block (ram,0x00014d7a59cd) */

void FUN_14d8e4a55(void)

{
  FUN_1567438aa();
  return;
}



// FUNCTION 14d8e4afe FUN_14d8e4afe body=256 status=ok
// SIG undefined FUN_14d8e4afe(void)

void FUN_14d8e4afe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_16174f444(param_1,param_2,param_3,param_4);
  FUN_16533d772();
  return;
}



// FUNCTION 14d8e4c01 FUN_14d8e4c01 body=122 status=ok
// SIG undefined FUN_14d8e4c01(void)

void FUN_14d8e4c01(void)

{
  FUN_166707600();
  return;
}



// FUNCTION 14d8e4c7d FUN_14d8e4c7d body=6 status=ok
// SIG undefined FUN_14d8e4c7d(void)

void FUN_14d8e4c7d(void)

{
  undefined8 unaff_retaddr;
  
  FUN_1400020a8(unaff_retaddr);
  return;
}



// FUNCTION 14d8e4dc0 FUN_14d8e4dc0 body=147 status=ok
// SIG undefined FUN_14d8e4dc0(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e4e2e) */

undefined8 FUN_14d8e4dc0(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  uint in_EAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((in_EAX & 0x80000000) == 0) {
    uVar1 = FUN_162e57d81(param_1,~-*(longlong *)(unaff_RDI + -0x28) + 1U | param_1,
                          param_3 ^ param_1);
    return uVar1;
  }
  return CONCAT44(0xffffffff,in_EAX);
}



// FUNCTION 14d8e4e59 FUN_14d8e4e59 body=132 status=ok
// SIG undefined FUN_14d8e4e59(void)

void FUN_14d8e4e59(undefined1 param_1)

{
  ulonglong unaff_RSI;
  
  FUN_165ec4688(param_1,~(0xffffffffffffffff - unaff_RSI),
                ~unaff_RSI + (0xffffffffffffffff - unaff_RSI));
  return;
}



// FUNCTION 14d8e4f66 FUN_14d8e4f66 body=94 status=ok
// SIG undefined FUN_14d8e4f66(void)

void FUN_14d8e4f66(HANDLE param_1,DWORD param_2,LPVOID param_3)

{
  undefined8 in_RAX;
  undefined8 in_R11;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = in_RAX;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0x363946f1;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 0x102fcbf3;
  *(ulonglong *)(local_res10 + -8) = *(ulonglong *)(local_res10 + -8) ^ 0x466912e4;
  *(undefined **)(local_res10 + -8) = &DAT_14d8e4fdd + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
                    /* WARNING: Could not recover jumptable at 0x00014d8e4fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8e50c4 FUN_14d8e50c4 body=164 status=ok
// SIG undefined FUN_14d8e50c4(void)

void FUN_14d8e50c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong in_R11;
  longlong local_res18;
  
  puVar1 = (ulonglong *)(local_res18 + -8);
  *puVar1 = in_R11;
  *(ulonglong *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = 0x6645f75e;
  *puVar1 = *puVar1 ^ 0x6645f75e;
  *puVar1 = *puVar1;
  *puVar1 = (ulonglong)(&DAT_156e43dfd + *puVar1);
  FUN_156e43ddc(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8e5492 FUN_14d8e5492 body=126 status=ok
// SIG undefined FUN_14d8e5492(void)

void FUN_14d8e5492(void)

{
  (*(code *)&LAB_162a6a17e)();
  return;
}



// FUNCTION 14d8e5510 FUN_14d8e5510 body=108 status=ok
// SIG undefined FUN_14d8e5510(void)

void FUN_14d8e5510(uint param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_14df0a689(param_1,FUN_14df0a689,param_3,(~param_1 | param_4) + param_1 + 1);
  return;
}



// FUNCTION 14d8e578e FUN_14d8e578e body=357 status=ok
// SIG undefined FUN_14d8e578e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e58b5) */
/* WARNING: Removing unreachable block (ram,0x00014d8e58c0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e58bb) */

void FUN_14d8e578e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  ulonglong in_R11;
  
  FUN_1615ed77e(param_1,param_2,param_3,-*(longlong *)(unaff_RDI + -0x90));
  FUN_156c2168e(in_R11,~in_R11 | *(ulonglong *)(unaff_RDI + -0x50));
  return;
}



// FUNCTION 14d8e5948 FUN_14d8e5948 body=147 status=ok
// SIG undefined FUN_14d8e5948(void)

void FUN_14d8e5948(void)

{
  return;
}



// FUNCTION 14d8e59dd FUN_14d8e59dd body=163 status=ok
// SIG undefined FUN_14d8e59dd(void)

undefined8 FUN_14d8e59dd(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8e5b92 FUN_14d8e5b92 body=938 status=ok
// SIG undefined FUN_14d8e5b92(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016576075d) overlaps instruction at (ram,0x00016576075c)
    */
/* WARNING: Removing unreachable block (ram,0x000161c029be) */
/* WARNING: Removing unreachable block (ram,0x00015b7c95d4) */
/* WARNING: Removing unreachable block (ram,0x00015b7c95da) */
/* WARNING: Removing unreachable block (ram,0x00015b7c95df) */
/* WARNING: Removing unreachable block (ram,0x0001657606ac) */
/* WARNING: Removing unreachable block (ram,0x00014dcc3e63) */
/* WARNING: Removing unreachable block (ram,0x0001657606a6) */
/* WARNING: Removing unreachable block (ram,0x0001657606b1) */
/* WARNING: Removing unreachable block (ram,0x00013ba1d994) */
/* WARNING: Removing unreachable block (ram,0x00014d7bec35) */
/* WARNING: Removing unreachable block (ram,0x00014d7bec39) */
/* WARNING: Removing unreachable block (ram,0x00014d7bec63) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5d5c) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5d62) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5dcf) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5dd4) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5dda) */
/* WARNING: Removing unreachable block (ram,0x0001668dce0e) */
/* WARNING: Removing unreachable block (ram,0x000161c029d5) */
/* WARNING: Removing unreachable block (ram,0x00014d8e5c3b) */
/* WARNING: Removing unreachable block (ram,0x000165760607) */
/* WARNING: Removing unreachable block (ram,0x00015713058e) */
/* WARNING: Removing unreachable block (ram,0x000157130650) */
/* WARNING: Removing unreachable block (ram,0x00015b7c951f) */
/* WARNING: Removing unreachable block (ram,0x00015b7c953f) */
/* WARNING: Removing unreachable block (ram,0x00015b97ff41) */
/* WARNING: Removing unreachable block (ram,0x0001610cdadf) */
/* WARNING: Removing unreachable block (ram,0x0001610cdb82) */
/* WARNING: Removing unreachable block (ram,0x000161c0293f) */
/* WARNING: Removing unreachable block (ram,0x000161c0298c) */
/* WARNING: Removing unreachable block (ram,0x000161c02993) */
/* WARNING: Removing unreachable block (ram,0x000161c029cf) */
/* WARNING: Removing unreachable block (ram,0x000165959d6d) */
/* WARNING: Removing unreachable block (ram,0x000165959d77) */
/* WARNING: Removing unreachable block (ram,0x000161c029ca) */
/* WARNING: Removing unreachable block (ram,0x0001610cdb88) */
/* WARNING: Removing unreachable block (ram,0x00015b7c9545) */

undefined8
FUN_14d8e5b92(ulonglong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  ulonglong uVar2;
  undefined8 in_stack_00000010;
  longlong in_stack_00000018;
  
  uVar2 = ~((~param_5 & (param_1 ^ 0xffffffffffffffff) | param_5) & (~param_5 | param_1));
  *(undefined8 *)(uVar2 - 8) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = unaff_RBP;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RBP;
  *(code **)(uVar2 - 0x10) = FUN_1617d55e3;
  uVar1 = FUN_1663f6d5e(param_3 - in_stack_00000018,param_2,in_stack_00000010,param_4);
  return uVar1;
}



// FUNCTION 14d8e5f0f FUN_14d8e5f0f body=331 status=ok
// SIG undefined FUN_14d8e5f0f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e5fb0) */

void FUN_14d8e5f0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_retaddr;
  ulonglong in_stack_00000008;
  
  FUN_15753f5d3(param_1,param_2,
                CONCAT62((int6)((ulonglong)param_3 >> 0x10),
                         (ushort)*(undefined8 *)(unaff_R13 + -8) ^ (ushort)unaff_retaddr) | 0x100,
                param_4,(~unaff_retaddr | in_stack_00000008) &
                        (0xffffffffffffffff - in_stack_00000008 | unaff_retaddr) ^
                        0xffffffffffffffff);
  return;
}



// FUNCTION 14d8e605b FUN_14d8e605b body=280 status=ok
// SIG undefined FUN_14d8e605b(void)

void FUN_14d8e605b(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  short unaff_BP;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  
  sVar1 = *param_2;
  *param_2 = 0;
  *param_2 = *param_2 + unaff_BP + sVar1;
  *(undefined8 *)(param_5 + -8) = param_4;
  *(undefined8 *)(param_5 + -0x10) = unaff_R14;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  uVar4 = *(undefined8 *)(param_5 + -0x20);
  *(undefined8 *)(param_5 + -0x20) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x28) = 0x14d8e60ed;
  FUN_15b1e1e0a(param_1,0xffffffffffffeff3,uVar4,0x15b1de566);
  uVar2 = *(ulonglong *)(unaff_R12 + unaff_RSI);
  uVar3 = *(ulonglong *)(unaff_R12 + -0x30);
  *(ulonglong *)(param_5 + -0x28) = uStackX_18;
  *(code **)(param_5 + -0x28) = FUN_15b1e1e0a;
  *(ulonglong *)(param_5 + -0x28) = uVar3;
  thunk_FUN_14e2210b0(uVar2 ^ uStackX_18,(~(~uVar3 & uStackX_18) + uStackX_18) - uVar3);
  return;
}



// FUNCTION 14d8e6210 FUN_14d8e6210 body=123 status=ok
// SIG undefined FUN_14d8e6210(void)

void FUN_14d8e6210(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b598278(-1 - (~(0xffffffffffffffff - ~(~param_1 | ~unaff_R15)) |
                     ~(unaff_RDI ^ param_1 | unaff_R15)),
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                 (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  return;
}



// FUNCTION 14d8e632c FUN_14d8e632c body=70 status=ok
// SIG undefined FUN_14d8e632c(void)

void FUN_14d8e632c(void)

{
  return;
}



// FUNCTION 14d8e6481 FUN_14d8e6481 body=164 status=ok
// SIG undefined FUN_14d8e6481(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e6527) */

void FUN_14d8e6481(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)&stack0x00000000) {
    FUN_161bc8a7a(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                  (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15 ^ 0xffffffffffffffff) &
                  (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
    return;
  }
  return;
}



// FUNCTION 14d8e6527 FUN_14d8e6527 body=149 status=ok
// SIG undefined FUN_14d8e6527(void)

void FUN_14d8e6527(void)

{
  return;
}



// FUNCTION 14d8e6690 FUN_14d8e6690 body=120 status=ok
// SIG undefined FUN_14d8e6690(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e670a) */

void FUN_14d8e6690(void)

{
  return;
}



// FUNCTION 14d8e670a FUN_14d8e670a body=138 status=ok
// SIG undefined FUN_14d8e670a(void)

void FUN_14d8e670a(undefined8 param_1,undefined8 param_2)

{
  int in_R11D;
  
  thunk_FUN_164bd13c5(param_1,param_2,-1 - in_R11D);
  return;
}



// FUNCTION 14d8e6a3f FUN_14d8e6a3f body=164 status=ok
// SIG undefined FUN_14d8e6a3f(void)

void FUN_14d8e6a3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  ushort unaff_DI;
  
  FUN_162197c3c(0x9c17,param_2,param_3,~(param_4 & unaff_DI));
  return;
}



// FUNCTION 14d8e6b9c FUN_14d8e6b9c body=12 status=ok
// SIG undefined FUN_14d8e6b9c(void)

void FUN_14d8e6b9c(void)

{
  return;
}



// FUNCTION 14d8e6d93 FUN_14d8e6d93 body=311 status=ok
// SIG undefined FUN_14d8e6d93(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e6da3) */

void FUN_14d8e6d93(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong *unaff_R12;
  ulonglong unaff_R15;
  
  FUN_1619dada1(unaff_R12[-8] | in_RAX,param_2 + 1);
  uVar1 = *unaff_R12;
  *unaff_R12 = *unaff_R12 ^ 0xffffffffffffffff;
  *unaff_R12 = *unaff_R12 | unaff_R15;
  uVar2 = *unaff_R12;
  *unaff_R12 = 0;
  *unaff_R12 = *unaff_R12 + ~(~(unaff_R15 & ~uVar1) & uVar2);
  FUN_166877375();
  return;
}



// FUNCTION 14d8e70eb FUN_14d8e70eb body=168 status=ok
// SIG undefined FUN_14d8e70eb(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e7185) */

void FUN_14d8e70eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong unaff_RDI;
  undefined8 in_stack_00000008;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(unaff_RDI + -0x90);
  local_10 = CONCAT44((int)((ulonglong)in_stack_00000008 >> 0x20),0xbb8a4cca);
  *(undefined8 *)(&stack0x4475b33e + local_10) = 0;
  *(longlong *)(&stack0x4475b33e + local_10) = *(longlong *)(&stack0x4475b33e + local_10) + lVar1;
  FUN_161de4bc3(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8e7196 FUN_14d8e7196 body=132 status=ok
// SIG undefined FUN_14d8e7196(void)

void FUN_14d8e7196(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_retaddr;
  
  FUN_165aad251(unaff_retaddr,*(undefined8 *)(unaff_RSI + -0x50),param_3,
                *(ulonglong *)(unaff_RSI + -0x90) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x90) & unaff_RBP) * -2);
  return;
}



// FUNCTION 14d8e721a thunk_FUN_14d8e7220 body=5 status=ok
// SIG undefined thunk_FUN_14d8e7220(void)

void thunk_FUN_14d8e7220(void)

{
  ushort *puVar1;
  longlong in_R11;
  
  puVar1 = (ushort *)(&stack0xfffffffffcb565cf + in_R11);
  *puVar1 = (-0x101 - (*puVar1 | 0xfeff)) + *puVar1;
  return;
}



// FUNCTION 14d8e7220 FUN_14d8e7220 body=122 status=ok
// SIG undefined FUN_14d8e7220(void)

void FUN_14d8e7220(void)

{
  ushort *puVar1;
  longlong in_R11;
  
  puVar1 = (ushort *)(&stack0xfffffffffcb565cf + in_R11);
  *puVar1 = (-0x101 - (*puVar1 | 0xfeff)) + *puVar1;
  return;
}



// FUNCTION 14d8e7540 thunk_FUN_14d8e7546 body=5 status=ok
// SIG undefined thunk_FUN_14d8e7546(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e757e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d8e7546(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined7 uVar12;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ushort uVar13;
  longlong in_R10;
  longlong in_R11;
  code *pcVar14;
  ulonglong *unaff_R12;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uStackX_8;
  code *pcStackX_18;
  ushort uStack0000000000000028;
  longlong in_stack_00000030;
  
  uVar12 = (undefined7)((ulonglong)param_1 >> 8);
  bVar11 = (byte)param_1;
  *unaff_R12 = *unaff_R12 ^ 0x658aee6c;
  *(longlong *)((longlong)&pcStackX_18 + in_R11) =
       *(longlong *)((longlong)&pcStackX_18 + in_R11) - in_R10;
  pcVar14 = FUN_14dfad078;
  FUN_14dfad078();
  uVar1 = *unaff_RSI;
  lVar5 = CONCAT71(uVar12,bVar11);
  uVar6 = CONCAT71(uVar12,bVar11);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar7 = CONCAT71(uVar12,bVar11);
  pcStackX_18 = (code *)0x14d8e766e;
  uVar9 = FUN_164f89169();
  pcStackX_18 = FUN_164f89169;
  uStack0000000000000028 = (ushort)uStackX_8;
  uVar13 = (uStack0000000000000028 | 0x100) - 0x100;
  LOCK();
  bVar8 = (byte)uVar9;
  bVar15 = bVar8 < DAT_14d7c318d;
  bVar16 = SBORROW1(bVar8,DAT_14d7c318d);
  cVar4 = bVar8 - DAT_14d7c318d;
  if (cVar4 != '\0') {
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),DAT_14d7c318d);
    bVar11 = DAT_14d7c318d;
  }
  DAT_14d7c318d = bVar11;
  UNLOCK();
  *(code **)(in_stack_00000030 + -8) = pcVar14;
  *(code **)(in_stack_00000030 + -0x10) = pcVar14;
  *(undefined8 *)(in_stack_00000030 + -0x18) = uVar9;
  *(undefined4 *)(in_stack_00000030 + -0x18) = 0x11393cbc;
  *(undefined4 *)(in_stack_00000030 + -0x14) = 0;
  lVar3 = *(longlong *)(in_stack_00000030 + -0x18);
  *(ulonglong *)(in_stack_00000030 + -0x18) =
       (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar16 * 0x800 |
       (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
       (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar15 |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(code **)(in_stack_00000030 + -0x20) = FUN_164f89169;
  uVar17 = *(ulonglong *)(in_stack_00000030 + -0x18);
  *(ulonglong *)(in_stack_00000030 + -0x18) = uVar2 ^ uVar7;
  *(undefined8 *)(in_stack_00000030 + -0x20) = uVar9;
  *(ulonglong *)(in_stack_00000030 + -0x28) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000030 + -8) = lVar3 + -0xdf1971a;
  uVar9 = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x18) = 0x14d8e76f6;
  uVar10 = FUN_1625315d2();
  *(ulonglong *)(in_stack_00000030 + -0x10) = uVar1 + lVar5 + ~(~uVar1 | ~uVar6) * -2;
  *(undefined8 *)(in_stack_00000030 + -0x10) = uVar10;
  *(undefined8 *)(in_stack_00000030 + -0x18) = uVar9;
  *(undefined1 **)(in_stack_00000030 + -0x20) = &LAB_14d8e7755;
  return;
}



// FUNCTION 14d8e7546 FUN_14d8e7546 body=147 status=ok
// SIG undefined FUN_14d8e7546(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e757e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e7546(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined7 uVar12;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ushort uVar13;
  longlong in_R10;
  longlong in_R11;
  code *pcVar14;
  ulonglong *unaff_R12;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong local_res8;
  code *pcStackX_18;
  ushort uStack0000000000000028;
  longlong in_stack_00000030;
  
  uVar12 = (undefined7)((ulonglong)param_1 >> 8);
  bVar11 = (byte)param_1;
  *unaff_R12 = *unaff_R12 ^ 0x658aee6c;
  *(longlong *)((longlong)&pcStackX_18 + in_R11) =
       *(longlong *)((longlong)&pcStackX_18 + in_R11) - in_R10;
  pcVar14 = FUN_14dfad078;
  FUN_14dfad078();
  uVar1 = *unaff_RSI;
  lVar5 = CONCAT71(uVar12,bVar11);
  uVar6 = CONCAT71(uVar12,bVar11);
  uVar2 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar7 = CONCAT71(uVar12,bVar11);
  pcStackX_18 = (code *)0x14d8e766e;
  uVar9 = FUN_164f89169();
  pcStackX_18 = FUN_164f89169;
  uStack0000000000000028 = (ushort)local_res8;
  uVar13 = (uStack0000000000000028 | 0x100) - 0x100;
  LOCK();
  bVar8 = (byte)uVar9;
  bVar15 = bVar8 < DAT_14d7c318d;
  bVar16 = SBORROW1(bVar8,DAT_14d7c318d);
  cVar4 = bVar8 - DAT_14d7c318d;
  if (cVar4 != '\0') {
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),DAT_14d7c318d);
    bVar11 = DAT_14d7c318d;
  }
  DAT_14d7c318d = bVar11;
  UNLOCK();
  *(code **)(in_stack_00000030 + -8) = pcVar14;
  *(code **)(in_stack_00000030 + -0x10) = pcVar14;
  *(undefined8 *)(in_stack_00000030 + -0x18) = uVar9;
  *(undefined4 *)(in_stack_00000030 + -0x18) = 0x11393cbc;
  *(undefined4 *)(in_stack_00000030 + -0x14) = 0;
  lVar3 = *(longlong *)(in_stack_00000030 + -0x18);
  *(ulonglong *)(in_stack_00000030 + -0x18) =
       (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar16 * 0x800 |
       (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
       (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar15 |
       (ulonglong)((local_res8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res8 & 0x40000) != 0) * 0x40000;
  *(code **)(in_stack_00000030 + -0x20) = FUN_164f89169;
  uVar17 = *(ulonglong *)(in_stack_00000030 + -0x18);
  *(ulonglong *)(in_stack_00000030 + -0x18) = uVar2 ^ uVar7;
  *(undefined8 *)(in_stack_00000030 + -0x20) = uVar9;
  *(ulonglong *)(in_stack_00000030 + -0x28) =
       (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
       (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000030 + -8) = lVar3 + -0xdf1971a;
  uVar9 = *(undefined8 *)(in_stack_00000030 + -0x18);
  *(undefined8 *)(in_stack_00000030 + -0x18) = 0x14d8e76f6;
  uVar10 = FUN_1625315d2();
  *(ulonglong *)(in_stack_00000030 + -0x10) = uVar1 + lVar5 + ~(~uVar1 | ~uVar6) * -2;
  *(undefined8 *)(in_stack_00000030 + -0x10) = uVar10;
  *(undefined8 *)(in_stack_00000030 + -0x18) = uVar9;
  *(undefined1 **)(in_stack_00000030 + -0x20) = &LAB_14d8e7755;
  return;
}



// FUNCTION 14d8e75db FUN_14d8e75db body=377 status=ok
// SIG undefined FUN_14d8e75db(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e75db(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ushort uVar9;
  undefined8 in_R11;
  ulonglong unaff_R12;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong local_res20;
  
  bVar7 = (byte)param_1;
  lVar8 = *unaff_RSI + param_1 + ~(~*unaff_RSI | ~param_1) * -2;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x48);
  uVar5 = FUN_164f89169(bVar7,lVar8);
  uVar9 = ((ushort)unaff_R12 | 0x100) - 0x100;
  LOCK();
  bVar4 = (byte)uVar5;
  bVar10 = bVar4 < DAT_14d7c318d;
  bVar11 = SBORROW1(bVar4,DAT_14d7c318d);
  cVar3 = bVar4 - DAT_14d7c318d;
  if (cVar3 != '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14d7c318d);
    bVar7 = DAT_14d7c318d;
  }
  DAT_14d7c318d = bVar7;
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = in_R11;
  *(undefined8 *)(local_res20 + -0x10) = in_R11;
  *(undefined8 *)(local_res20 + -0x18) = uVar5;
  *(undefined4 *)(local_res20 + -0x18) = 0x11393cbc;
  *(undefined4 *)(local_res20 + -0x14) = 0;
  lVar2 = *(longlong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar9 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar11 * 0x800 |
       (ulonglong)((uVar9 & 0x400) != 0) * 0x400 | (ulonglong)((uVar9 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar9 & 0x100) != 0) * 0x100 | (ulonglong)(cVar3 < '\0') * 0x80 |
       (ulonglong)(cVar3 == '\0') * 0x40 | (ulonglong)((uVar9 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar3) & 1U) == 0) * 4 | (ulonglong)bVar10 |
       (ulonglong)((unaff_R12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((unaff_R12 & 0x40000) != 0) * 0x40000;
  *(code **)(local_res20 + -0x20) = FUN_164f89169;
  uVar12 = *(ulonglong *)(local_res20 + -0x18);
  *(ulonglong *)(local_res20 + -0x18) = uVar1 ^ param_1;
  *(undefined8 *)(local_res20 + -0x20) = uVar5;
  *(ulonglong *)(local_res20 + -0x28) =
       (ulonglong)((uVar12 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar12 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar12 & 0x400) != 0) * 0x400 | (ulonglong)((uVar12 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar12 & 0x100) != 0) * 0x100 | (ulonglong)((uVar12 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar12 & 0x40) != 0) * 0x40 | (ulonglong)((uVar12 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar12 & 4) != 0) * 4 | (ulonglong)((uVar12 & 1) != 0) |
       (ulonglong)((uVar12 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar12 & 0x40000) != 0) * 0x40000;
  *(longlong *)(local_res20 + -8) = lVar2 + -0xdf1971a;
  uVar5 = *(undefined8 *)(local_res20 + -0x18);
  *(undefined8 *)(local_res20 + -0x18) = 0x14d8e76f6;
  uVar6 = FUN_1625315d2();
  *(longlong *)(local_res20 + -0x10) = lVar8;
  *(undefined8 *)(local_res20 + -0x10) = uVar6;
  *(undefined8 *)(local_res20 + -0x18) = uVar5;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_14d8e7755;
  return;
}



// FUNCTION 14d8e777e FUN_14d8e777e body=175 status=ok
// SIG undefined FUN_14d8e777e(void)

void FUN_14d8e777e(byte param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)
           (unaff_R12 +
           ~((unaff_RBP & 0xffffffff901b6c04 ^ 0xffffffffffffffff) &
            (unaff_RSI | 0xffffffff901b6c04)));
  uVar2 = *(undefined8 *)(unaff_R12 + -0x80);
  FUN_166c8b406(param_1,CONCAT71((int7)((ulonglong)uVar2 >> 8),
                                 (byte)uVar2 >> (param_1 & 7) | (byte)uVar2 << 8 - (param_1 & 7)),
                uVar2,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  return;
}



// FUNCTION 14d8e78d2 FUN_14d8e78d2 body=92 status=ok
// SIG undefined FUN_14d8e78d2(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e794a) */
/* WARNING: Removing unreachable block (ram,0x00014d8e7950) */

void FUN_14d8e78d2(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong *in_R10;
  
  uVar1 = *in_R10;
  uVar2 = *in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = *in_R10 | param_1;
  *in_R10 = ~((~(in_RAX & uVar1) + uVar2) - ~in_RAX & *in_R10);
  return;
}



// FUNCTION 14d8e7a1a FUN_14d8e7a1a body=161 status=ok
// SIG undefined FUN_14d8e7a1a(void)

void FUN_14d8e7a1a(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0) {
    return;
  }
  return;
}



// FUNCTION 14d8e7ac7 FUN_14d8e7ac7 body=32 status=ok
// SIG undefined FUN_14d8e7ac7(void)

void FUN_14d8e7ac7(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d8e7bf7 FUN_14d8e7bf7 body=20 status=ok
// SIG undefined FUN_14d8e7bf7(void)

void FUN_14d8e7bf7(void)

{
  return;
}



// FUNCTION 14d8e7db2 FUN_14d8e7db2 body=307 status=ok
// SIG undefined FUN_14d8e7db2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e7db2(void)

{
  return;
}



// FUNCTION 14d8e8047 FUN_14d8e8047 body=128 status=ok
// SIG undefined FUN_14d8e8047(void)

void FUN_14d8e8047(void)

{
  ulonglong uVar1;
  longlong in_R10;
  
  uVar1 = *(ulonglong *)(in_R10 + 8);
  *(ulonglong *)(in_R10 + 8) = *(ulonglong *)(in_R10 + 8) | 0xffffffffbe9ab4bf;
  *(ulonglong *)(in_R10 + 8) = ~(~(uVar1 & 0xffffffffbe9ab4bf) & *(ulonglong *)(in_R10 + 8));
  (*(code *)0x15b20ee72)();
  return;
}



// FUNCTION 14d8e828e FUN_14d8e828e body=106 status=ok
// SIG undefined FUN_14d8e828e(void)

longlong FUN_14d8e828e(longlong param_1)

{
  longlong unaff_RDI;
  
  return *(longlong *)(unaff_RDI + -0xa0) + param_1;
}



// FUNCTION 14d8e8310 FUN_14d8e8310 body=148 status=ok
// SIG undefined FUN_14d8e8310(void)

void FUN_14d8e8310(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong unaff_RBX;
  byte unaff_BPL;
  
  bVar1 = (unaff_BPL - 9) + (unaff_BPL & 0xf7) * -2;
  param_3 = param_3 << (bVar1 & 0x3f);
  (*(code *)0x1653b7cf1)(param_3,CONCAT71(0xffffffffffffff,bVar1),unaff_RBX - param_3);
  return;
}



// FUNCTION 14d8e83a4 FUN_14d8e83a4 body=126 status=ok
// SIG undefined FUN_14d8e83a4(void)

void FUN_14d8e83a4(undefined8 param_1,undefined8 param_2)

{
  FUN_166c46ebd(param_1,param_2);
  return;
}



// FUNCTION 14d8e852b FUN_14d8e852b body=274 status=ok
// SIG undefined FUN_14d8e852b(void)

void FUN_14d8e852b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1627fd2aa(8,FUN_1627fd2aa,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
                 (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15)));
  return;
}



// FUNCTION 14d8e87bb FUN_14d8e87bb body=449 status=ok
// SIG undefined FUN_14d8e87bb(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e885e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8e87bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong in_RAX;
  undefined8 in_R11;
  longlong unaff_R13;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = (~in_RAX | param_5) + in_RAX + 1;
  puVar1 = (undefined8 *)(lVar3 * 2);
  if (unaff_R13 + lVar3 * -2 == 0) {
    pcVar2 = (code *)swi(0x2e);
    (*pcVar2)(param_1,param_2);
    *puVar1 = local_res8;
    puVar1[-1] = local_res8;
    *(undefined4 *)(puVar1 + -2) = 0x4d32904;
    *(undefined4 *)((longlong)puVar1 + -0xc) = 0;
    puVar1[-2] = in_R11;
    puVar1[-3] = in_R11;
    puVar1[-2] = &LAB_1574ef175;
    return;
  }
  FUN_1574ef12b();
  return;
}



// FUNCTION 14d8e8a10 FUN_14d8e8a10 body=444 status=ok
// SIG undefined FUN_14d8e8a10(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e8a98) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8aa3) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8b01) */
/* WARNING: Removing unreachable block (ram,0x00014e1ba649) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8b07) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8bb0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8bb6) */
/* WARNING: Removing unreachable block (ram,0x000156474f25) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8a9e) */

void FUN_14d8e8a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_156ce6729)(param_1,param_2,0xffffffffffffff60,param_4);
  return;
}



// FUNCTION 14d8e8bbc FUN_14d8e8bbc body=172 status=ok
// SIG undefined FUN_14d8e8bbc(void)

void FUN_14d8e8bbc(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong in_R11;
  longlong unaff_R12;
  longlong local_res10 [2];
  longlong local_res20;
  
  local_res20 = in_R11 - *(longlong *)((longlong)local_res10 + unaff_R12);
  local_res10[0] = param_3;
  local_res10[1] = param_4;
  FUN_156fadd0b(param_1,FUN_156fadd0b,&local_res20,(undefined2)local_res20);
  return;
}



// FUNCTION 14d8e8c69 FUN_14d8e8c69 body=126 status=ok
// SIG undefined FUN_14d8e8c69(void)

void FUN_14d8e8c69(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
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
  undefined8 unaff_retaddr;
  ushort local_res10;
  uint6 uStackX_12;
  undefined8 *local_res18;
  
  uVar3 = (-0x101 - (local_res10 & 0x100 | 0xfeff)) + local_res10;
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
  uVar2 = (*pcVar1)(param_1,param_2,unaff_retaddr);
  *local_res18 = uVar2;
  local_res18[-1] = uVar2;
  local_res18[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  (*(code *)0x161709679)();
  return;
}



// FUNCTION 14d8e8ce8 FUN_14d8e8ce8 body=153 status=ok
// SIG undefined FUN_14d8e8ce8(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e8d77) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8d82) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8e0b) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8e18) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8e26) */
/* WARNING: Removing unreachable block (ram,0x000156b06ae8) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8d7d) */

undefined8 FUN_14d8e8ce8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1624bf57f();
  return uVar1;
}



// FUNCTION 14d8e8d82 FUN_14d8e8d82 body=316 status=ok
// SIG undefined FUN_14d8e8d82(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e8e18) */
/* WARNING: Removing unreachable block (ram,0x00014d8e8e26) */
/* WARNING: Removing unreachable block (ram,0x000156b06ae8) */

undefined8 FUN_14d8e8d82(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156b06ae8();
  return uVar1;
}



// FUNCTION 14d8e8ec6 FUN_14d8e8ec6 body=206 status=ok
// SIG undefined FUN_14d8e8ec6(void)

void FUN_14d8e8ec6(void)

{
  return;
}



// FUNCTION 14d8e903a FUN_14d8e903a body=128 status=ok
// SIG undefined FUN_14d8e903a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e90bb) */

void FUN_14d8e903a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_R10;
  
  FUN_1656f0560(param_1,*(ulonglong *)(param_2 + -0xa0) ^ in_R10,param_3,param_4);
  return;
}



// FUNCTION 14d8e90bb FUN_14d8e90bb body=168 status=ok
// SIG undefined FUN_14d8e90bb(void)

void FUN_14d8e90bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  (*(code *)0x1611f7594)(local_res8,param_2,param_3,0x1611f7594);
  return;
}



// FUNCTION 14d8e9269 FUN_14d8e9269 body=119 status=ok
// SIG undefined FUN_14d8e9269(void)

void FUN_14d8e9269(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  short *unaff_RDI;
  ushort in_R10W;
  short in_R11W;
  undefined8 unaff_R12;
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
  byte bVar15;
  ulonglong uVar16;
  ulonglong in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  *unaff_RDI = in_R11W - ~in_R10W;
  bVar11 = (in_stack_00000028 & 0x4000) != 0;
  bVar10 = (in_stack_00000028 & 0x800) != 0;
  bVar9 = (in_stack_00000028 & 0x200) != 0;
  bVar8 = (in_stack_00000028 & 0x100) != 0;
  bVar7 = (in_stack_00000028 & 0x80) != 0;
  bVar6 = (in_stack_00000028 & 0x40) != 0;
  bVar5 = (in_stack_00000028 & 0x10) != 0;
  bVar4 = (in_stack_00000028 & 4) != 0;
  bVar3 = (in_stack_00000028 & 1) != 0;
  bVar15 = (in_stack_00000028 & 0x200000) != 0;
  bVar12 = (in_stack_00000028 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *in_stack_00000030 = unaff_R12;
  in_stack_00000030[-1] = unaff_R12;
  in_stack_00000030[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((in_stack_00000028 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  uVar16 = in_stack_00000030[-2];
  in_stack_00000030[-2] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  in_stack_00000030[-3] = param_1;
  uVar2 = in_stack_00000030[-3];
  uVar16 = in_stack_00000030[-2];
  in_stack_00000030[-2] = unaff_RSI;
  in_stack_00000030[-3] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  *in_stack_00000030 = 0x62461f8;
  FUN_165c7153c(uVar2);
  return;
}



// FUNCTION 14d8e9304 FUN_14d8e9304 body=221 status=ok
// SIG undefined FUN_14d8e9304(void)

/* WARNING: Removing unreachable block (ram,0x00014d8e9391) */
/* WARNING: Removing unreachable block (ram,0x00014d8e9397) */
/* WARNING: Removing unreachable block (ram,0x00016614fbee) */

void FUN_14d8e9304(void)

{
  FUN_16614fbee();
  return;
}



// FUNCTION 14d8e955b FUN_14d8e955b body=43 status=ok
// SIG undefined FUN_14d8e955b(void)

void FUN_14d8e955b(void)

{
  return;
}



// FUNCTION 14d8e95fb FUN_14d8e95fb body=13 status=ok
// SIG undefined FUN_14d8e95fb(void)

void FUN_14d8e95fb(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
                    /* WARNING: Could not recover jumptable at 0x00014d8e9606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d8e983c FUN_14d8e983c body=176 status=ok
// SIG undefined FUN_14d8e983c(void)

/* WARNING: Instruction at (ram,0x00014d8e9860) overlaps instruction at (ram,0x00014d8e985f)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8e98a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8e985f) */

void FUN_14d8e983c(void)

{
  return;
}



// FUNCTION 14d8e99a3 FUN_14d8e99a3 body=148 status=ok
// SIG undefined FUN_14d8e99a3(void)

void FUN_14d8e99a3(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_162df5d7f(param_1,param_2,FUN_162df5d7f,
                (-~param_1 - (1 - ~(0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x60)))) +
                (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2);
  return;
}



// FUNCTION 14d8e9f19 FUN_14d8e9f19 body=43 status=ok
// SIG undefined FUN_14d8e9f19(void)

void FUN_14d8e9f19(void)

{
  return;
}



// FUNCTION 14d8ea195 FUN_14d8ea195 body=108 status=ok
// SIG undefined FUN_14d8ea195(void)

void FUN_14d8ea195(void)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 unaff_R12;
  undefined8 uStackX_8;
  ulonglong local_res18;
  
  lVar1 = (~unaff_RDI | local_res18 ^ 0xffffffffffffffff) + unaff_RDI;
  *(undefined8 *)(lVar1 + -7) = unaff_R12;
  *(undefined8 *)(lVar1 + -0xf) = *(undefined8 *)(lVar1 + -7);
  *(undefined8 *)(lVar1 + -0x17) = unaff_RSI;
  *(undefined **)(lVar1 + -7) = &DAT_14d8ea21c;
  thunk_FUN_15b0572f1(uStackX_8);
  return;
}



// FUNCTION 14d8ea37c FUN_14d8ea37c body=175 status=ok
// SIG undefined FUN_14d8ea37c(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ea421) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea427) */
/* WARNING: Removing unreachable block (ram,0x00014e0a904b) */

undefined8 FUN_14d8ea37c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e0a904b();
  return uVar1;
}



// FUNCTION 14d8ea42d FUN_14d8ea42d body=418 status=ok
// SIG undefined FUN_14d8ea42d(void)

/* WARNING: Removing unreachable block (ram,0x000166600e1e) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea5d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d8ea42d(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 unaff_R15;
  
  FUN_156a2fea9();
  uVar4 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),0xce68);
  uVar5 = 0x40;
  uVar7 = *(ulonglong *)(unaff_RSI - 0x90) ^ unaff_RBP;
  pcVar6 = FUN_160d75971;
  FUN_160d75971();
  if ((_DAT_fffffffffffffee8 & uVar4) * 2 <= _DAT_fffffffffffffee8 + uVar4) {
    uVar3 = FUN_166600c3f();
    return uVar3;
  }
  uVar1 = (ushort)_DAT_fffffffffffffee0;
  uVar2 = FUN_162d0434f(uVar4,~(unaff_RSI & ~(~uVar5 & ~uVar4)),pcVar6);
  FUN_166d7c840();
  if (*(longlong *)(uVar7 - 0x60) == 0 &&
      CONCAT62((int6)((ulonglong)unaff_R15 >> 0x10),-0x101 - (uVar1 ^ uVar2 | 0xfeff)) == 0) {
    uVar3 = thunk_FUN_1660a1e01();
    return uVar3;
  }
  return *(undefined8 *)(uVar7 - 0x38);
}



// FUNCTION 14d8ea5d3 FUN_14d8ea5d3 body=166 status=ok
// SIG undefined FUN_14d8ea5d3(void)

void FUN_14d8ea5d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  
  FUN_14d93a1f7(unaff_RDI + in_RAX + (unaff_RDI & in_RAX) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3,FUN_14d93a1f7);
  return;
}



// FUNCTION 14d8ea67a FUN_14d8ea67a body=341 status=ok
// SIG undefined FUN_14d8ea67a(void)

/* WARNING: Removing unreachable block (ram,0x000166d10ff3) */
/* WARNING: Removing unreachable block (ram,0x000166d10ffe) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea714) */
/* WARNING: Removing unreachable block (ram,0x00014d8ea71a) */
/* WARNING: Removing unreachable block (ram,0x000166d10ff9) */

ulonglong FUN_14d8ea67a(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (-1 < param_2) {
    uVar1 = (*(code *)0x1617e5bba)
                      (*(undefined8 *)(unaff_RSI + -0x38),0x1617e5bba,
                       *(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP +
                       (*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) * -2,
                       ~((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x28)) &
                        (~unaff_RBP & ~*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP)));
    return uVar1;
  }
  return (*(ulonglong *)(unaff_RSI + -0x40) & unaff_RBP ^ 0xffffffffffffffff) &
         (*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP);
}



// FUNCTION 14d8ea7cf FUN_14d8ea7cf body=156 status=ok
// SIG undefined FUN_14d8ea7cf(void)

void FUN_14d8ea7cf(void)

{
  return;
}



// FUNCTION 14d8ea86c FUN_14d8ea86c body=116 status=ok
// SIG undefined FUN_14d8ea86c(void)

undefined8 FUN_14d8ea86c(void)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
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
  
  pvVar2 = ClientId.UniqueProcess;
  *(void **)(unaff_retaddr + -8) = ClientId.UniqueProcess;
  *(void **)(unaff_retaddr + -0x10) = pvVar2;
  *(ulonglong *)(unaff_retaddr + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)(unaff_retaddr + -0x20) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(unaff_retaddr + -0x20) = unaff_R13;
  uVar3 = *(ulonglong *)(unaff_retaddr + -0x18);
  *(ulonglong *)(unaff_retaddr + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(unaff_retaddr + -8) = 0x169cf08;
  uVar1 = *(undefined8 *)(unaff_retaddr + -0x10);
  *(undefined8 *)(unaff_retaddr + -0x10) = unaff_R15;
  *(undefined8 *)(unaff_retaddr + -0x18) = unaff_R15;
  *(code **)(unaff_retaddr + -0x10) = FUN_15b3d5987;
  return uVar1;
}



// FUNCTION 14d8ea909 FUN_14d8ea909 body=161 status=ok
// SIG undefined FUN_14d8ea909(void)

void FUN_14d8ea909(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 local_res8;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ local_res8;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = param_3;
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  uVar2 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  FUN_16176b601(param_1,param_2,uVar2);
  return;
}



// FUNCTION 14d8eab5f FUN_14d8eab5f body=135 status=ok
// SIG undefined FUN_14d8eab5f(void)

void FUN_14d8eab5f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  (*(code *)&LAB_15780af1c)(in_stack_00000008,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8eabe6 FUN_14d8eabe6 body=138 status=ok
// SIG undefined FUN_14d8eabe6(void)

/* WARNING: Removing unreachable block (ram,0x00014da27373) */
/* WARNING: Removing unreachable block (ram,0x00014da2737e) */
/* WARNING: Removing unreachable block (ram,0x00014da27379) */
/* WARNING: Removing unreachable block (ram,0x00014d8eac70) */

void FUN_14d8eabe6(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x38);
  if (CARRY8(uVar1,unaff_RBP)) {
    FUN_165d45b42(uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2);
    return;
  }
  FUN_14da272d3();
  return;
}



// FUNCTION 14d8eac70 FUN_14d8eac70 body=104 status=ok
// SIG undefined FUN_14d8eac70(void)

void FUN_14d8eac70(undefined8 param_1,undefined8 param_2)

{
  FUN_162ebff68(param_1,param_2,FUN_162ebff68);
  return;
}



// FUNCTION 14d8eb0ef FUN_14d8eb0ef body=309 status=ok
// SIG undefined FUN_14d8eb0ef(void)

void FUN_14d8eb0ef(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool in_ZF;
  undefined8 local_res8;
  
  if (in_ZF) {
    FUN_165e93f27(param_1,param_2,local_res8,0x14d7c5cce);
    return;
  }
  if (param_4 != 0x128ecb) {
    FUN_1650815b6();
    return;
  }
  FUN_165081561(param_1,param_2,local_res8,4);
  (*(code *)&LAB_15729b1f4)();
  return;
}



// FUNCTION 14d8eb2ac FUN_14d8eb2ac body=179 status=ok
// SIG undefined FUN_14d8eb2ac(void)

void FUN_14d8eb2ac(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong in_R10;
  
  FUN_14d81f341(FUN_14d81f341,
                0xffffffffffffffff - (*(ulonglong *)(param_2 + -0xa0) & in_R10) &
                (*(ulonglong *)(param_2 + -0xa0) | in_R10),param_3);
  return;
}



// FUNCTION 14d8eb47f FUN_14d8eb47f body=662 status=ok
// SIG undefined FUN_14d8eb47f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8eb513) */
/* WARNING: Removing unreachable block (ram,0x00014d8eb519) */
/* WARNING: Removing unreachable block (ram,0x00016148b8ae) */
/* WARNING: Removing unreachable block (ram,0x00014d8eb5bb) */
/* WARNING: Removing unreachable block (ram,0x00014d8eb5c1) */
/* WARNING: Removing unreachable block (ram,0x00014d8eb5c6) */
/* WARNING: Removing unreachable block (ram,0x000156ec90bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8eb47f(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar1 = (unaff_RSI - param_2) + *(longlong *)(unaff_RDI + -0x68);
  FUN_1657f77d9(in_stack_00000008,
                ~(~in_stack_00000008 | uVar1) | (~uVar1 | in_stack_00000008) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d8eb5c6 FUN_14d8eb5c6 body=58 status=ok
// SIG undefined FUN_14d8eb5c6(void)

void FUN_14d8eb5c6(void)

{
  return;
}



// FUNCTION 14d8eb656 FUN_14d8eb656 body=116 status=ok
// SIG undefined FUN_14d8eb656(void)

/* WARNING: Removing unreachable block (ram,0x00014d8eb6d8) */

void FUN_14d8eb656(void)

{
  byte in_SF;
  
  if ((in_SF & 1) == 0) {
    FUN_15b61d9d8();
    return;
  }
  FUN_15b61d9d8();
  return;
}



// FUNCTION 14d8eb6d8 FUN_14d8eb6d8 body=188 status=ok
// SIG undefined FUN_14d8eb6d8(void)

void FUN_14d8eb6d8(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  longlong *unaff_R13;
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined4 *)unaff_R13 = 0xa52bdaf5;
  *(undefined4 *)((longlong)unaff_R13 + 4) = 0x81c5da10;
  *(int *)((longlong)unaff_R13 + 4) = *(int *)((longlong)unaff_R13 + 4) + 0x7e3a25ef;
  lVar2 = *unaff_R13;
  *unaff_R13 = unaff_R14;
  uVar1 = *(ulonglong *)((longlong)unaff_R13 + lVar2 + 0x5ad4252b);
  unaff_R13[4] = unaff_R13[4] & in_RAX;
  unaff_R13[4] = ~unaff_R13[4];
  unaff_R13[4] = unaff_R13[4] & (uVar1 | in_RAX);
  unaff_R13[2] = unaff_RDI;
  unaff_R13[1] = unaff_R15;
  uVar1 = unaff_R13[5];
  unaff_R13[5] = ~unaff_R13[5];
  unaff_R13[5] = unaff_R13[5] | in_RAX;
  unaff_R13[5] = ~((~in_RAX | uVar1) & unaff_R13[5]);
  *unaff_R13 = unaff_RBX;
  unaff_R13[-1] = unaff_RBX;
  *unaff_R13 = (longlong)FUN_14d8eb796;
  FUN_161be8448();
  return;
}



// FUNCTION 14d8eb796 FUN_14d8eb796 body=259 status=ok
// SIG undefined FUN_14d8eb796(void)

void FUN_14d8eb796(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_20;
  ulonglong in_stack_00000050;
  
  uVar3 = param_3 + unaff_R15 + (param_3 & unaff_R15) * -2;
  lVar2 = *(longlong *)(unaff_R13 + -0x38);
  FUN_14defd7b2(param_1,param_2,uVar3);
  uVar4 = *(ulonglong *)(lVar2 + -0x30) ^ uVar3;
  lVar2 = FUN_14d8bab23();
  *(longlong *)(lVar2 + 0x10) = param_4 + *(longlong *)(lVar2 + 0x10);
  puVar1 = (undefined8 *)(in_stack_00000050 ^ uVar3);
  puVar1[-1] = uVar4;
  puVar1[-2] = 0x14d8eb91a;
  FUN_15b588184(uStackX_20);
  puVar1[-2] = unaff_R14;
  *puVar1 = FUN_1629c9909;
  return;
}



// FUNCTION 14d8eb89c FUN_14d8eb89c body=148 status=ok
// SIG undefined FUN_14d8eb89c(void)

void FUN_14d8eb89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong in_RAX;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 local_res10;
  undefined8 local_res20;
  ulonglong in_stack_00000040;
  
  *(longlong *)(in_RAX + 0x10) = param_4 + *(longlong *)(in_RAX + 0x10);
  puVar1 = (undefined8 *)(in_stack_00000040 ^ unaff_RBP);
  puVar1[-1] = in_R11;
  puVar1[-2] = 0x14d8eb91a;
  FUN_15b588184(local_res10,param_2,param_3,local_res20);
  puVar1[-2] = unaff_R14;
  *puVar1 = FUN_1629c9909;
  return;
}



// FUNCTION 14d8eb9d1 FUN_14d8eb9d1 body=80 status=ok
// SIG undefined FUN_14d8eb9d1(void)

void FUN_14d8eb9d1(void)

{
  return;
}



// FUNCTION 14d8ebb8d FUN_14d8ebb8d body=182 status=ok
// SIG undefined FUN_14d8ebb8d(void)

void FUN_14d8ebb8d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  (*(code *)&LAB_16221453d)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -8),
             *(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14d8ebc45 FUN_14d8ebc45 body=182 status=ok
// SIG undefined FUN_14d8ebc45(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ebcc4) */

undefined8 FUN_14d8ebc45(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x28);
  if (!CARRY8(~(uVar1 | param_1) + 1 + param_1,uVar1)) {
    uVar2 = thunk_FUN_1666b8e81(param_1,uVar1 + param_1);
    return uVar2;
  }
  return in_RAX;
}



// FUNCTION 14d8ebd51 FUN_14d8ebd51 body=203 status=ok
// SIG undefined FUN_14d8ebd51(void)

void FUN_14d8ebd51(void)

{
  return;
}



// FUNCTION 14d8ebe1f FUN_14d8ebe1f body=133 status=ok
// SIG undefined FUN_14d8ebe1f(void)

void FUN_14d8ebe1f(undefined8 param_1,undefined8 param_2,short param_3,undefined8 param_4)

{
  FUN_1567706e5(0x19,param_3 + 0x41,FUN_1567706e5,param_4);
  return;
}



// FUNCTION 14d8ebea7 FUN_14d8ebea7 body=211 status=ok
// SIG undefined FUN_14d8ebea7(void)

void FUN_14d8ebea7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 in_R10;
  uint uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar4;
  longlong unaff_retaddr;
  uint auStackX_8 [8];
  ulonglong uStack_8;
  
  puVar1 = (ulonglong *)((longlong)auStackX_8 + unaff_retaddr + -8);
  *(undefined4 *)(puVar1 + -1) = 0xea0976a;
  *(int *)puVar1 = (int)puVar1[-1];
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  uVar4 = *puVar1;
  *(undefined4 *)puVar1 = 0x172c29a5;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  puVar2 = (uint *)((longlong)puVar1 + (uVar4 - (*puVar1 ^ 0x198cbed7)) + 8);
  *puVar2 = 0x4a751ded;
  uVar3 = *puVar2;
  *puVar2 = *puVar2 | 0xb58ae212;
  uVar3 = ~(uVar3 & 0xb58ae212) & *puVar2;
  *puVar2 = ~uVar3;
  *(ulonglong *)(puVar2 + -2) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar3 < 0) * 0x80 |
       (ulonglong)(uVar3 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar3 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  uVar4 = *(ulonglong *)(puVar2 + -2);
  *(ulonglong *)(puVar2 + -2) =
       (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
       (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(puVar2 + -2) = in_R10;
  *(undefined8 *)(puVar2 + -4) = in_R10;
  *(code **)(puVar2 + -2) = FUN_14d8ebf7c;
  FUN_16573fde3(param_1,0x5f5b12bb,param_3,0xffffffffa0a4ed49);
  return;
}



// FUNCTION 14d8ebf7c FUN_14d8ebf7c body=126 status=ok
// SIG undefined FUN_14d8ebf7c(void)

void FUN_14d8ebf7c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *unaff_RBX;
  ulonglong unaff_R15;
  
  uVar1 = *unaff_RBX;
  uVar2 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX ^ 0xffffffffffffffff;
  *unaff_RBX = *unaff_RBX | param_1;
  uVar3 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX + ~((~(unaff_R15 & uVar1) + uVar2) - ~unaff_R15 & uVar3);
  FUN_1572b66aa(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8ebffb FUN_14d8ebffb body=158 status=ok
// SIG undefined FUN_14d8ebffb(void)

void FUN_14d8ebffb(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 local_res10 [3];
  
  local_res10[0] = *(undefined8 *)(unaff_R13 + (param_4 ^ 0x26e92cf1));
  FUN_15717a76e(in_stack_00000008,local_res10,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d8ec107 FUN_14d8ec107 body=157 status=ok
// SIG undefined FUN_14d8ec107(void)

void FUN_14d8ec107(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16593607f(*(ulonglong *)(unaff_RSI + -0x38) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14d8ec1a6 FUN_14d8ec1a6 body=312 status=ok
// SIG undefined FUN_14d8ec1a6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ec237) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec248) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec2c7) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec2cc) */

undefined8 FUN_14d8ec1a6(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8ec2eb FUN_14d8ec2eb body=204 status=ok
// SIG undefined FUN_14d8ec2eb(void)

undefined8 FUN_14d8ec2eb(void)

{
  undefined8 unaff_RBX;
  
  FUN_1655b0fd9();
  return unaff_RBX;
}



// FUNCTION 14d8ec4c6 FUN_14d8ec4c6 body=296 status=ok
// SIG undefined FUN_14d8ec4c6(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ec53b) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec576) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec57a) */

void FUN_14d8ec4c6(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 unaff_R15;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res18 ^ param_1;
  plVar2 = (longlong *)(local_res20 ^ param_1);
  bVar13 = (uVar1 & 0x4000) != 0;
  bVar12 = (uVar1 & 0x800) != 0;
  bVar11 = (uVar1 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (uVar1 & 0x80) != 0;
  bVar8 = (uVar1 & 0x40) != 0;
  bVar7 = (uVar1 & 0x10) != 0;
  bVar6 = (uVar1 & 4) != 0;
  bVar5 = (uVar1 & 1) != 0;
  bVar17 = (uVar1 & 0x200000) != 0;
  bVar14 = (uVar1 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *plVar2 = param_4;
  plVar2[-1] = param_4;
  *(undefined4 *)(plVar2 + -2) = 0x64eb16d;
  *(undefined4 *)((longlong)plVar2 - 0xc) = 0;
  if (!bVar9) {
    lVar4 = plVar2[-2];
    plVar2[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                 (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                 (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x40 |
                 (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1)
                 | (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                 (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
    plVar2[-2] = local_res10;
    *plVar2 = lVar4 + -0x33d3ca9;
    plVar2[-1] = unaff_R15;
    plVar2[-2] = unaff_R15;
    plVar2[-1] = (longlong)FUN_165c7153c;
    return;
  }
  FUN_15ba60f6f();
  return;
}



// FUNCTION 14d8ec676 FUN_14d8ec676 body=135 status=ok
// SIG undefined FUN_14d8ec676(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ec788) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec6fe) */
/* WARNING: Removing unreachable block (ram,0x00014d8ec77d) */
/* WARNING: Removing unreachable block (ram,0x000160fcb0fb) */

void FUN_14d8ec676(undefined8 param_1)

{
  FUN_15b881a2d(param_1,0);
  return;
}



// FUNCTION 14d8ec6fe FUN_14d8ec6fe body=136 status=ok
// SIG undefined FUN_14d8ec6fe(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ec788) */

void FUN_14d8ec6fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  uVar5 = (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x50)) &
          (~*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15);
  uVar6 = ~uVar5;
  if (uVar5 == 0) {
    FUN_160fcb0fb();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_R13 + -8);
  uVar2 = *(undefined8 *)(unaff_R13 + -0x98);
  lVar3 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_156931ecc(param_1,param_2);
  lVar3 = *(longlong *)(lVar3 + -0x98);
  FUN_1661b1669(uVar1,uVar2);
  uVar1 = rdtsc();
  *(ulonglong *)(lVar3 + -8) = uVar6;
  *(ulonglong *)(lVar3 + -0x10) = uVar6;
  *(ulonglong *)(lVar3 + -0x18) = CONCAT44(extraout_var,(int)uVar1);
  *(undefined4 *)(lVar3 + -0x18) = 0x3405e36;
  *(undefined4 *)(lVar3 + -0x14) = 0;
  lVar4 = *(longlong *)(lVar3 + -0x18);
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)((unaff_R14 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((unaff_R14 & 0x800) != 0) * 0x800 | (ulonglong)((unaff_R14 & 0x400) != 0) * 0x400
       | (ulonglong)((unaff_R14 & 0x200) != 0) * 0x200 |
       (ulonglong)((unaff_R14 & 0x100) != 0) * 0x100 | (ulonglong)((unaff_R14 & 0x80) != 0) * 0x80 |
       (ulonglong)((unaff_R14 & 0x40) != 0) * 0x40 | (ulonglong)((unaff_R14 & 0x10) != 0) * 0x10 |
       (ulonglong)((unaff_R14 & 4) != 0) * 4 | (ulonglong)((unaff_R14 & 1) != 0) |
       (ulonglong)((unaff_R14 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((unaff_R14 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar3 + -0x20) = param_3;
  *(undefined8 *)(lVar3 + -0x28) = in_R11;
  *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar3 + -0x28);
  *(longlong *)(lVar3 + -8) = lVar4 + -0x78e8e4;
  *(undefined8 *)(lVar3 + -0x10) = unaff_RSI;
  *(undefined8 *)(lVar3 + -0x18) = unaff_RSI;
  *(undefined8 *)(lVar3 + -0x10) = 0x156ef2e25;
  return;
}



// FUNCTION 14d8ec788 FUN_14d8ec788 body=17 status=ok
// SIG undefined FUN_14d8ec788(void)

void FUN_14d8ec788(void)

{
  return;
}



// FUNCTION 14d8ec80e FUN_14d8ec80e body=381 status=ok
// SIG undefined FUN_14d8ec80e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ec8b2) */

void FUN_14d8ec80e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 in_R10;
  undefined8 unaff_R15;
  bool bVar3;
  bool bVar4;
  byte unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  LOCK();
  bVar3 = unaff_retaddr < DAT_14d7a9bdc;
  bVar4 = SBORROW1(unaff_retaddr,DAT_14d7a9bdc);
  cVar2 = unaff_retaddr - DAT_14d7a9bdc;
  if (cVar2 == '\0') {
    DAT_14d7a9bdc = (byte)param_1;
  }
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_R15;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R15;
  *(undefined4 *)(local_res10 + -0x18) = 0xb44f3f8;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = param_3;
  *(longlong *)(local_res10 + -8) = lVar1 + -0x8b63330;
  FUN_14d85d504(param_1,param_2,*(undefined8 *)(local_res10 + -0x18));
  return;
}



// FUNCTION 14d8ec976 FUN_14d8ec976 body=278 status=ok
// SIG undefined FUN_14d8ec976(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ecc77) */
/* WARNING: Removing unreachable block (ram,0x00014d8ecc7d) */
/* WARNING: Removing unreachable block (ram,0x00014d8ecb2c) */
/* WARNING: Removing unreachable block (ram,0x0001623f6998) */
/* WARNING: Removing unreachable block (ram,0x0001623f699e) */
/* WARNING: Removing unreachable block (ram,0x00016119d1a8) */

undefined8 FUN_14d8ec976(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char in_AL;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_R10;
  longlong lVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar10;
  ulonglong unaff_R15;
  char local_res8;
  ulonglong local_res18;
  
  lVar9 = local_res18 + param_1 + (local_res18 & param_1) * -2;
  LOCK();
  if (in_AL == DAT_14d7bd62e) {
    DAT_14d7bd62e = local_res8;
  }
  UNLOCK();
  *(undefined8 *)(lVar9 + -8) = in_R10;
  *(undefined8 *)(lVar9 + -0x10) = in_R10;
  *(undefined4 *)(lVar9 + -0x18) = 0x32889a3;
  *(undefined4 *)(lVar9 + -0x14) = 0;
  *(undefined8 *)(lVar9 + -0x20) = 0x14d8eca1e;
  FUN_166140823();
  uVar8 = *(ulonglong *)(unaff_R13 + -0x30) | unaff_R15;
  uVar7 = 0xfffffffffffffffe - ~-(*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15);
  lVar9 = (uVar8 - (uVar7 | uVar8)) + uVar7;
  uVar7 = *(ulonglong *)(unaff_R13 + -0x68);
  *(undefined8 *)(unaff_RBP + -8) = unaff_R14;
  uVar10 = (uVar7 + unaff_R15) - (uVar7 & unaff_R15);
  uVar5 = *(undefined8 *)(unaff_RBP + -8);
  *(undefined8 *)(unaff_RBP + -8) = param_2;
  *(code **)(unaff_RBP + -0x10) = FUN_14d8eca90;
  uVar4 = FUN_1663bb5b7();
  uVar7 = *(ulonglong *)(lVar9 + -0x58);
  *(undefined8 *)(unaff_RBP + -8) = uVar5;
  uVar5 = *(undefined8 *)(unaff_RBP + -8);
  uVar8 = *(ulonglong *)(lVar9 + -0x80);
  *(ulonglong *)(unaff_RBP + -8) = (~uVar7 | ~uVar10) & (uVar7 | uVar10);
  *(undefined8 *)(unaff_RBP + -0x10) = param_4;
  if ((longlong)(uVar8 & uVar10) < 0) {
    uVar6 = *(undefined8 *)(unaff_RBP + -8);
    *(undefined8 *)(unaff_RBP + -8) = uVar4;
    *(undefined8 *)(unaff_RBP + -0x10) = uVar4;
    *(longlong *)(unaff_RBP + -0x18) = unaff_R13;
    uVar2 = *(undefined8 *)(unaff_RBP + -0x18);
    *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(lVar9 + -0x88);
    uVar3 = *(undefined8 *)(unaff_RBP + -0x10);
    *(undefined8 *)(unaff_RBP + -0x10) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x18) = uVar5;
    lVar1 = *(longlong *)(lVar9 + -8);
    *(undefined8 *)(unaff_RBP + -0x10) = 0;
    *(longlong *)(unaff_RBP + -0x10) = *(longlong *)(unaff_RBP + -0x10) - lVar1;
    *(longlong *)(unaff_RBP + -0x10) = -*(longlong *)(unaff_RBP + -0x10);
    uVar5 = *(undefined8 *)(unaff_RBP + -0x18);
    *(undefined8 *)(unaff_RBP + -0x18) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x20) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x18) = *(undefined8 *)(lVar9 + -0x98);
    uVar4 = *(undefined8 *)(unaff_RBP + -0x20);
    *(undefined8 *)(unaff_RBP + -0x20) = uVar3;
    *(longlong *)(unaff_RBP + -0x28) = lVar9;
    uVar5 = *(undefined8 *)(lVar9 + -0xa0);
    *(undefined8 *)(unaff_RBP + -0x28) = 0x165afab51;
    lVar9 = FUN_1618000f0();
    uVar3 = *(undefined8 *)(unaff_RBP + -0x20);
    *(longlong *)(unaff_RBP + -0x18) = lVar9 - *(longlong *)(unaff_RBP + -0x18);
    *(ulonglong *)(unaff_RBP + -0x10) = *(ulonglong *)(unaff_RBP + -0x10) ^ unaff_R15;
    *(undefined8 *)(unaff_RBP + -0x20) = uVar4;
    *(undefined4 *)(unaff_RBP + -0x28) = 0x2d9abab8;
    *(undefined4 *)(unaff_RBP + -0x24) = 0;
    *(undefined8 *)(unaff_RBP + -0x28) = param_3;
    uVar4 = *(undefined8 *)(unaff_RBP + -0x28);
    *(undefined8 *)(unaff_RBP + -0x28) = uVar2;
    *(undefined8 *)(unaff_RBP + -0x20) = unaff_R12;
    *(undefined8 *)(unaff_RBP + -0x28) = uVar6;
    *(undefined8 *)(unaff_RBP + -0x30) = uVar4;
    *(undefined8 *)(unaff_RBP + -0x38) = uVar5;
    *(undefined8 *)(unaff_RBP + -0x40) = uVar5;
    *(undefined **)(unaff_RBP + -0x38) = &DAT_165afabf0;
    uVar5 = FUN_1567a97d5(uVar3,unaff_RBP + -0x18,FUN_1567a97d5);
    return uVar5;
  }
  uVar5 = FUN_165afaabf();
  return uVar5;
}



// FUNCTION 14d8eca90 FUN_14d8eca90 body=517 status=ok
// SIG undefined FUN_14d8eca90(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ecc77) */
/* WARNING: Removing unreachable block (ram,0x00014d8ecc7d) */
/* WARNING: Removing unreachable block (ram,0x00014d8ecb2c) */
/* WARNING: Removing unreachable block (ram,0x0001623f6998) */
/* WARNING: Removing unreachable block (ram,0x0001623f699e) */
/* WARNING: Removing unreachable block (ram,0x00016119d1a8) */

undefined8 FUN_14d8eca90(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RSI + -0x80) & unaff_RBP)) {
    uVar1 = FUN_165afaabf();
    return uVar1;
  }
  FUN_1618000f0();
  uVar1 = FUN_1567a97d5(in_RAX,&stack0xfffffffffffffff0,FUN_1567a97d5);
  return uVar1;
}



// FUNCTION 14d8ece3f FUN_14d8ece3f body=163 status=ok
// SIG undefined FUN_14d8ece3f(void)

void FUN_14d8ece3f(void)

{
  FUN_16534b65b();
  return;
}



// FUNCTION 14d8ecee2 FUN_14d8ecee2 body=165 status=ok
// SIG undefined FUN_14d8ecee2(void)

void FUN_14d8ecee2(void)

{
  return;
}



// FUNCTION 14d8ed131 FUN_14d8ed131 body=115 status=ok
// SIG undefined FUN_14d8ed131(void)

void FUN_14d8ed131(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  (*(code *)0x160f7d319)(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d8ed307 FUN_14d8ed307 body=8 status=ok
// SIG undefined FUN_14d8ed307(void)

void FUN_14d8ed307(void)

{
  return;
}



// FUNCTION 14d8ed3c5 FUN_14d8ed3c5 body=155 status=ok
// SIG undefined FUN_14d8ed3c5(void)

void FUN_14d8ed3c5(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1627ff5b5(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8ed505 FUN_14d8ed505 body=151 status=ok
// SIG undefined FUN_14d8ed505(void)

ulonglong FUN_14d8ed505(void)

{
  longlong unaff_R15;
  
  return ~(0xffffffffffffffffU - unaff_R15);
}



// FUNCTION 14d8ed6da FUN_14d8ed6da body=134 status=ok
// SIG undefined FUN_14d8ed6da(void)

undefined8 FUN_14d8ed6da(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d8ed993 FUN_14d8ed993 body=151 status=ok
// SIG undefined FUN_14d8ed993(void)

/* WARNING: Removing unreachable block (ram,0x00014d8eda2b) */

void FUN_14d8ed993(undefined8 param_1,char param_2)

{
  longlong unaff_R13;
  
  if (0xffffffffffffc19d < unaff_R13 - 0x3e9aU) {
    FUN_1611a070d(param_1,param_2 + -0x46);
    return;
  }
  FUN_1611a070d(param_1,param_2 + -0x46);
  return;
}



// FUNCTION 14d8eda2b FUN_14d8eda2b body=146 status=ok
// SIG undefined FUN_14d8eda2b(void)

void FUN_14d8eda2b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong unaff_retaddr;
  
  lVar1 = unaff_retaddr + param_3 * -2;
  FUN_160dea393(lVar1,FUN_160dea393,lVar1);
  return;
}



// FUNCTION 14d8edadf FUN_14d8edadf body=115 status=ok
// SIG undefined FUN_14d8edadf(void)

void FUN_14d8edadf(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  byte unaff_BL;
  int iVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  iVar1 = FUN_161476bd8(~(~*(ulonglong *)(unaff_R13 + -0x38) & ~unaff_R15),param_2,
                        param_3 ^ unaff_R15);
  iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),-(~unaff_BL + 1)) + (int)unaff_R13 + 1
  ;
  FUN_15721c4c9((iVar1 - ~(~(iVar2 * 2 | (uint)(iVar2 < 0)) | 1)) + param_4,param_2);
  return;
}



// FUNCTION 14d8edb53 FUN_14d8edb53 body=128 status=ok
// SIG undefined FUN_14d8edb53(void)

void FUN_14d8edb53(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int in_EAX;
  int unaff_EBP;
  int iVar1;
  int unaff_R13D;
  
  iVar1 = unaff_EBP + unaff_R13D + 1;
  FUN_15721c4c9((in_EAX - ~(~(iVar1 * 2 | (uint)(iVar1 < 0)) | 1)) + param_4,param_2);
  return;
}



// FUNCTION 14d8edc68 FUN_14d8edc68 body=365 status=ok
// SIG undefined FUN_14d8edc68(void)

/* WARNING: Removing unreachable block (ram,0x00016297f969) */
/* WARNING: Removing unreachable block (ram,0x000165183bc5) */
/* WARNING: Removing unreachable block (ram,0x00014d8edcfd) */

uint FUN_14d8edc68(void)

{
  uint uVar1;
  
  FUN_16143c33f();
  uVar1 = FUN_15655545b();
  return uVar1 << 0x15 | uVar1 >> 0xb;
}



// FUNCTION 14d8edd6b FUN_14d8edd6b body=105 status=ok
// SIG undefined FUN_14d8edd6b(void)

/* WARNING: Instruction at (ram,0x00014d8eddaf) overlaps instruction at (ram,0x00014d8eddae)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8eddac) */

undefined8 FUN_14d8edd6b(void)

{
  return 0x5d19d8da;
}



// FUNCTION 14d8ede16 FUN_14d8ede16 body=139 status=ok
// SIG undefined FUN_14d8ede16(void)

void FUN_14d8ede16(void)

{
  (*(code *)&LAB_16696cfc9)();
  return;
}



// FUNCTION 14d8edf1d FUN_14d8edf1d body=138 status=ok
// SIG undefined FUN_14d8edf1d(void)

void FUN_14d8edf1d(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1574a88ec(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15,FUN_1574a88ec);
  return;
}



// FUNCTION 14d8edfa8 FUN_14d8edfa8 body=131 status=ok
// SIG undefined FUN_14d8edfa8(void)

void FUN_14d8edfa8(void)

{
  FUN_162d46dda();
  return;
}



// FUNCTION 14d8ee02d FUN_14d8ee02d body=163 status=ok
// SIG undefined FUN_14d8ee02d(void)

undefined8 FUN_14d8ee02d(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_retaddr;
  
  if (param_3 == 0xfb4f3) {
    uVar1 = FUN_1574ba9da();
    return uVar1;
  }
  if (unaff_retaddr == 0xfb4f4) {
    uVar1 = FUN_1611aa743();
    return uVar1;
  }
  if (unaff_retaddr != 0xfb586) {
    return in_RAX;
  }
  uVar1 = FUN_1563d7c53(param_1,param_2,FUN_1563d7c53,param_4);
  return uVar1;
}



// FUNCTION 14d8ee2a7 FUN_14d8ee2a7 body=157 status=ok
// SIG undefined FUN_14d8ee2a7(void)

void FUN_14d8ee2a7(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong uVar1;
  
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x70) + 1;
  FUN_156e444cd(param_1,param_2,~(~in_RAX | uVar1) | ~(~uVar1 | in_RAX));
  return;
}



// FUNCTION 14d8ee520 FUN_14d8ee520 body=510 status=ok
// SIG undefined FUN_14d8ee520(void)

/* WARNING: Removing unreachable block (ram,0x00016297274c) */
/* WARNING: Removing unreachable block (ram,0x00014d8ee5c3) */
/* WARNING: Removing unreachable block (ram,0x00014d8ee5c9) */
/* WARNING: Removing unreachable block (ram,0x000156cee137) */
/* WARNING: Removing unreachable block (ram,0x000156cee143) */
/* WARNING: Removing unreachable block (ram,0x000156cee149) */
/* WARNING: Removing unreachable block (ram,0x000156cee267) */
/* WARNING: Removing unreachable block (ram,0x000156cee272) */
/* WARNING: Removing unreachable block (ram,0x000156cee27e) */
/* WARNING: Removing unreachable block (ram,0x00016532421f) */
/* WARNING: Removing unreachable block (ram,0x000165324280) */
/* WARNING: Removing unreachable block (ram,0x000165324286) */
/* WARNING: Removing unreachable block (ram,0x000162972709) */
/* WARNING: Removing unreachable block (ram,0x00016297274e) */
/* WARNING: Removing unreachable block (ram,0x000162972769) */
/* WARNING: Removing unreachable block (ram,0x00016297276f) */
/* WARNING: Removing unreachable block (ram,0x00014da4c2ad) */

undefined8 FUN_14d8ee520(void)

{
  undefined8 in_RAX;
  uint *in_R9;
  
  *in_R9 = *in_R9 ^ 0x2e83c8c3;
  return in_RAX;
}



// FUNCTION 14d8ee681 FUN_14d8ee681 body=166 status=ok
// SIG undefined FUN_14d8ee681(void)

void FUN_14d8ee681(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161ca30ff(param_1 >> ((byte)param_1 & 0x3f),param_2,
                *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,param_4 ^ unaff_R15);
  FUN_14d8ee729();
  return;
}



// FUNCTION 14d8ee729 FUN_14d8ee729 body=151 status=ok
// SIG undefined FUN_14d8ee729(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ee7ac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x0001656c502b */
/* WARNING: Removing unreachable block (ram,0x00014d8ee7b9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8ee729(void)

{
  FUN_160c1113b();
  return;
}



// FUNCTION 14d8ee7cb FUN_14d8ee7cb body=112 status=ok
// SIG undefined FUN_14d8ee7cb(void)

void FUN_14d8ee7cb(undefined8 param_1,undefined8 param_2)

{
  FUN_15ba54a33(param_1,param_2);
  return;
}



// FUNCTION 14d8ee83c FUN_14d8ee83c body=37 status=ok
// SIG undefined FUN_14d8ee83c(void)

void FUN_14d8ee83c(void)

{
  return;
}



// FUNCTION 14d8ee8f9 FUN_14d8ee8f9 body=157 status=ok
// SIG undefined FUN_14d8ee8f9(void)

/* WARNING: Removing unreachable block (ram,0x00014d8ee935) */

void FUN_14d8ee8f9(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x68);
  FUN_165f07132(param_1,-1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                             (uVar1 + param_1) - (uVar1 & param_1)));
  return;
}



// FUNCTION 14d8ee998 FUN_14d8ee998 body=63 status=ok
// SIG undefined FUN_14d8ee998(void)

void FUN_14d8ee998(void)

{
  return;
}



// FUNCTION 14d8eea23 FUN_14d8eea23 body=146 status=ok
// SIG undefined FUN_14d8eea23(void)

void FUN_14d8eea23(undefined8 param_1)

{
  ulonglong unaff_RBP;
  undefined8 local_res20;
  
  FUN_16114331e();
  FUN_165c7153c(param_1,~local_res20 | ~unaff_RBP);
  return;
}



// FUNCTION 14d8eeab6 FUN_14d8eeab6 body=49 status=ok
// SIG undefined FUN_14d8eeab6(void)

void FUN_14d8eeab6(undefined8 param_1)

{
  undefined8 local_res18;
  
  FUN_165c7153c(param_1,local_res18);
  return;
}



// FUNCTION 14d8eec91 FUN_14d8eec91 body=78 status=ok
// SIG undefined FUN_14d8eec91(void)

void FUN_14d8eec91(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14d85d504(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d8eed20 FUN_14d8eed20 body=159 status=ok
// SIG undefined FUN_14d8eed20(void)

void FUN_14d8eed20(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_R10;
  longlong in_R11;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff6486c82 + in_R11);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 ^ 0xffffffffffffffff;
  *puVar1 = *puVar1 | in_R10;
  uVar3 = *puVar1;
  *puVar1 = 0x8f94e3b;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 0xfffffffff706b1c4;
  *puVar1 = ~(~(uVar4 & 0xfffffffff706b1c4) & *puVar1);
  *puVar1 = *puVar1 + ~((~in_R10 | uVar2) & uVar3);
  (*(code *)&LAB_16260c252)();
  return;
}



// FUNCTION 14d8eee5c FUN_14d8eee5c body=407 status=ok
// SIG undefined FUN_14d8eee5c(void)

void FUN_14d8eee5c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  ulonglong in_stack_00000008;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar3 = FUN_15786c63e(param_1,param_2,param_3,param_4);
  uVar1 = local_res18 ^ uVar3;
  uVar3 = ~(local_res20 & uVar3) & (local_res20 | uVar3);
  *(undefined8 *)(uVar3 - 8) = 0x1cd0680;
  *(undefined8 *)(uVar3 - 0x10) = unaff_R13;
  *(undefined8 *)(uVar3 - 0x18) = unaff_R13;
  *(undefined8 *)(uVar3 - 0x20) = unaff_R12;
  *(ulonglong *)(uVar3 - 0x28) = ~(param_1 - ~(~param_1 | in_stack_00000008));
  *(ulonglong *)(uVar3 - 0x30) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined1 **)(uVar3 - 0x10) = &LAB_16569fb23;
  uVar2 = *(undefined8 *)(uVar3 - 0x20);
  *(undefined8 *)(uVar3 - 0x20) = 0x14d8eef6d;
  FUN_16569fb1a();
  *(undefined8 *)(uVar3 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar3 - 0x18) = in_R10;
  *(undefined8 *)(uVar3 - 0x20) = in_R10;
  *(undefined8 *)(uVar3 - 0x18) = DAT_15786c5ae;
  *(undefined8 *)(uVar3 - 0x20) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x28) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x20) = DAT_15786c636;
  *(undefined8 *)(uVar3 - 0x28) = uVar2;
  *(undefined8 *)(uVar3 - 0x30) = uVar2;
  *(undefined8 *)(uVar3 - 0x28) = DAT_15786c5a6;
  uVar2 = *(undefined8 *)(uVar3 - 0x30);
  *(undefined8 *)(uVar3 - 0x30) = uVar2;
  *(undefined8 *)(uVar3 - 0x38) = uVar2;
  FUN_1566f7b43();
  return;
}



// FUNCTION 14d8eeff6 FUN_14d8eeff6 body=144 status=ok
// SIG undefined FUN_14d8eeff6(void)

void FUN_14d8eeff6(undefined8 param_1)

{
  (*(code *)0x166cb6957)(param_1,0xffffffffdac10bfb);
  return;
}



// FUNCTION 14d8ef087 FUN_14d8ef087 body=148 status=ok
// SIG undefined FUN_14d8ef087(void)

void FUN_14d8ef087(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1659c7557)
            (param_1,0x1659c7557,
             *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
             (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
             *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d8ef252 FUN_14d8ef252 body=121 status=ok
// SIG undefined FUN_14d8ef252(void)

void FUN_14d8ef252(undefined8 param_1)

{
  ulonglong unaff_RBX;
  longlong in_R10;
  longlong in_R11;
  
  *(longlong *)(in_R10 + 0x10) = in_R11 - *(longlong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) =
       -1 - ((*(longlong *)(in_R10 + 0x10) - (unaff_RBX | *(ulonglong *)(in_R10 + 0x10))) +
            unaff_RBX);
  FUN_160f31763(param_1,FUN_160f31763);
  return;
}



// FUNCTION 14d8ef403 FUN_14d8ef403 body=50 status=ok
// SIG undefined FUN_14d8ef403(void)

void FUN_14d8ef403(void)

{
  return;
}



// FUNCTION 14d8ef4ac FUN_14d8ef4ac body=126 status=ok
// SIG undefined FUN_14d8ef4ac(void)

/* WARNING: Instruction at (ram,0x00014d8ef56c) overlaps instruction at (ram,0x00014d8ef56b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8ef56b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d8ef5a6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8ef4ac(ulonglong param_1)

{
  FUN_14dff9bc7();
  FUN_161805441();
  (*(code *)0x165820b58)(param_1,DAT_1618053d9 ^ param_1);
  return;
}



// FUNCTION 14d8ef52b FUN_14d8ef52b body=288 status=ok
// SIG undefined FUN_14d8ef52b(void)

/* WARNING: Instruction at (ram,0x00014d8ef56c) overlaps instruction at (ram,0x00014d8ef56b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d8ef56b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00014d8ef593 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8ef52b(ulonglong param_1)

{
  uint unaff_EDI;
  uint in_stack_00000008;
  
  FUN_161805441(param_1,in_stack_00000008 ^ unaff_EDI);
  (*(code *)0x165820b58)(param_1,DAT_1618053d9 ^ param_1);
  return;
}



// FUNCTION 14d8ef727 FUN_14d8ef727 body=151 status=ok
// SIG undefined FUN_14d8ef727(void)

undefined8 FUN_14d8ef727(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}


