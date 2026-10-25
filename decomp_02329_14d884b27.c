// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d884b27 FUN_14d884b27 body=157 status=ok
// SIG undefined FUN_14d884b27(void)

void FUN_14d884b27(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  longlong in_stack_00000018;
  
  FUN_16292563d();
  FUN_1654acd5e();
  FUN_1623ad8af(*(ulonglong *)(unaff_RSI + -0x38) & param_2 - in_stack_00000018,
                (param_2 - in_stack_00000018) + *(ulonglong *)(unaff_RSI + -0x38));
  return;
}



// FUNCTION 14d884bc5 FUN_14d884bc5 body=191 status=ok
// SIG undefined FUN_14d884bc5(void)

void FUN_14d884bc5(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_stack_00000008;
  
  FUN_1654acd5e(param_1,in_stack_00000008,FUN_1654acd5e,0xffffffff80200a23);
  FUN_1623ad8af(*(ulonglong *)(unaff_RSI + -0x38) & param_2 - unaff_RBP,
                (param_2 - unaff_RBP) + *(ulonglong *)(unaff_RSI + -0x38));
  return;
}



// FUNCTION 14d885065 FUN_14d885065 body=128 status=ok
// SIG undefined FUN_14d885065(void)

void FUN_14d885065(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_164989b55(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14d8855fa FUN_14d8855fa body=178 status=ok
// SIG undefined FUN_14d8855fa(void)

void FUN_14d8855fa(undefined8 param_1)

{
  FUN_15b77fe85(param_1);
  return;
}



// FUNCTION 14d885920 FUN_14d885920 body=153 status=ok
// SIG undefined FUN_14d885920(void)

void FUN_14d885920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte unaff_retaddr;
  
  (*(code *)0x15b7b6e05)(~(1 - (unaff_retaddr ^ 0x1a)) + 2,param_2,0xff,param_4);
  return;
}



// FUNCTION 14d8859c0 FUN_14d8859c0 body=45 status=ok
// SIG undefined FUN_14d8859c0(void)

void FUN_14d8859c0(void)

{
  return;
}



// FUNCTION 14d885a61 FUN_14d885a61 body=162 status=ok
// SIG undefined FUN_14d885a61(void)

/* WARNING: Removing unreachable block (ram,0x00014d885aed) */
/* WARNING: Removing unreachable block (ram,0x00014d885af3) */
/* WARNING: Removing unreachable block (ram,0x0001567d92ae) */
/* WARNING: Removing unreachable block (ram,0x0001567d93e1) */
/* WARNING: Removing unreachable block (ram,0x0001567d93e6) */
/* WARNING: Removing unreachable block (ram,0x0001567d93ec) */
/* WARNING: Removing unreachable block (ram,0x0001567d920f) */
/* WARNING: Removing unreachable block (ram,0x000165d86aec) */
/* WARNING: Removing unreachable block (ram,0x0001567d92a3) */
/* WARNING: Removing unreachable block (ram,0x0001567d92a9) */
/* WARNING: Removing unreachable block (ram,0x0001567d93f7) */
/* WARNING: Removing unreachable block (ram,0x0001567d9469) */
/* WARNING: Removing unreachable block (ram,0x0001567d9464) */

undefined8 FUN_14d885a61(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_R11;
  ushort uVar6;
  undefined8 unaff_R15;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar5 = ~((0xffffffffffffffff - in_RAX | local_res10) & (~local_res10 | in_RAX));
  uVar1 = ~(local_res18 & in_RAX) & (local_res18 | in_RAX);
  local_res10._0_2_ = (ushort)uVar5;
  uVar6 = ((ushort)local_res10 | 0x100) - 0x100;
  LOCK();
  bVar3 = (byte)in_stack_00000008;
  bVar8 = bVar3 < DAT_14d7c02db;
  bVar9 = SBORROW1(bVar3,DAT_14d7c02db);
  cVar2 = bVar3 - DAT_14d7c02db;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    in_stack_00000008 = CONCAT71((int7)((ulonglong)in_stack_00000008 >> 8),DAT_14d7c02db);
    bVar3 = DAT_14d7c02db;
  }
  DAT_14d7c02db = bVar3;
  UNLOCK();
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000008;
  *(undefined4 *)(uVar1 - 0x18) = 0xec889b9;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  lVar7 = *(longlong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar9 * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar8 |
       (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R15;
  lVar7 = lVar7 + -0xc199759;
  if (lVar7 < 0) {
    uVar4 = FUN_15b9473ad();
    return uVar4;
  }
  *(longlong *)(uVar1 - 8) = lVar7;
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = param_2;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_15b9473c6;
  return in_stack_00000008;
}



// FUNCTION 14d885c31 FUN_14d885c31 body=317 status=ok
// SIG undefined FUN_14d885c31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d885c31(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  ushort unaff_BX;
  undefined8 uVar3;
  longlong in_R9;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffcf53730 + in_R9);
  uVar5 = *(ulonglong *)(unaff_R13 + -0x40) ^ unaff_R15;
  uVar3 = 0xffffffffd87a1360;
  *puVar1 = *(undefined8 *)(unaff_R13 + -0x90);
  uVar4 = *puVar1;
  pcVar2 = FUN_157140432;
  puVar1[-1] = 0x14d885cda;
  FUN_157140432(FUN_157140432,unaff_BX & 0xaf8f,0xffffffffd87a1360,0xe241a34);
  *puVar1 = _DAT_fffffffffffffee0;
  puVar1[-1] = ~uVar5;
  puVar1[-2] = ~uVar5;
  puVar1[-3] = uVar3;
  puVar1[-3] = unaff_R14;
  puVar1[-1] = 0;
  puVar1[-1] = puVar1[-1] + _DAT_ffffffffffffff68;
  puVar1[-2] = unaff_R13;
  puVar1[-3] = unaff_R13;
  puVar1[-2] = _DAT_fffffffffffffed8;
  puVar1[-3] = pcVar2;
  puVar1[-4] = pcVar2;
  puVar1[-3] = _DAT_fffffffffffffed0;
  puVar1[-3] = uVar4;
  FUN_166d89100(puVar1[-4]);
  return;
}



// FUNCTION 14d885dfd FUN_14d885dfd body=260 status=ok
// SIG undefined FUN_14d885dfd(void)

/* WARNING: Removing unreachable block (ram,0x00014d885fcf) */
/* WARNING: Removing unreachable block (ram,0x000156ecc536) */
/* WARNING: Removing unreachable block (ram,0x00014d885f2a) */
/* WARNING: Removing unreachable block (ram,0x0001647d8e7d) */
/* WARNING: Removing unreachable block (ram,0x00014d885fc4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000164b35498 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d885dfd(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong uVar2;
  undefined8 in_stack_00000010;
  
  uVar1 = 0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x68);
  uVar2 = (~(uVar1 & param_1) + param_1) - ~uVar1;
  uVar1 = (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) & uVar2;
  if ((uVar1 == 0) || (uVar1 != 0)) {
    (*(code *)0x16474e70d)(param_1,-1 - uVar1);
    return;
  }
  if ((short)param_1 != 0) {
    FUN_156ecc485();
    return;
  }
  if (*(longlong *)(unaff_R13 + -8) != 0) {
    (*(code *)0x1574df80c)(param_1,uVar2,param_3,in_stack_00000010);
    return;
  }
  FUN_164b35493();
  return;
}



// FUNCTION 14d885e81 FUN_14d885e81 body=333 status=ok
// SIG undefined FUN_14d885e81(void)

/* WARNING: Removing unreachable block (ram,0x00014d885fcf) */
/* WARNING: Removing unreachable block (ram,0x00014d885f2a) */
/* WARNING: Removing unreachable block (ram,0x00014d885fc4) */
/* WARNING: Removing unreachable block (ram,0x00014d885fca) */
/* WARNING: Removing unreachable block (ram,0x0001647d8e7d) */
/* WARNING: Removing unreachable block (ram,0x000156ecc536) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x000156ecc4c8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d885e81(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  undefined8 in_stack_00000010;
  
  if ((short)param_1 != 0) {
    FUN_156ecc485();
    return;
  }
  if (*(longlong *)(unaff_R13 + -8) == 0) {
    FUN_164b35493();
    return;
  }
  (*(code *)0x1574df80c)(param_1,param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14d885fcf FUN_14d885fcf body=142 status=ok
// SIG undefined FUN_14d885fcf(void)

void FUN_14d885fcf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x165110bea)(0xfffffffffffffff8,param_2,param_3);
  return;
}



// FUNCTION 14d88605d FUN_14d88605d body=103 status=ok
// SIG undefined FUN_14d88605d(void)

void FUN_14d88605d(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int unaff_EBX;
  undefined8 local_res18;
  
  FUN_1665ffaf1(param_1,unaff_EBX - ~param_2,param_3,local_res18);
  return;
}



// FUNCTION 14d8861f4 FUN_14d8861f4 body=150 status=ok
// SIG undefined FUN_14d8861f4(void)

void FUN_14d8861f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16259be24(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d886367 FUN_14d886367 body=186 status=ok
// SIG undefined FUN_14d886367(void)

void FUN_14d886367(void)

{
  return;
}



// FUNCTION 14d8864e1 FUN_14d8864e1 body=133 status=ok
// SIG undefined FUN_14d8864e1(void)

/* WARNING: Removing unreachable block (ram,0x0001616060da) */
/* WARNING: Removing unreachable block (ram,0x00014d886569) */

void FUN_14d8864e1(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = unaff_R15 & 0xffffffffffffffff - param_1;
  if (-1 < (longlong)
           (0xffffffffffffffff - ~((~(uVar1 & ~unaff_R15) + ~unaff_R15) - ~uVar1) |
           param_1 | unaff_R15)) {
    FUN_16160602e();
    return;
  }
  if (*(longlong *)(unaff_R13 + -0x30) != 0) {
    FUN_14d86c756();
    return;
  }
  FUN_14d86c756();
  return;
}



// FUNCTION 14d886569 FUN_14d886569 body=71 status=ok
// SIG undefined FUN_14d886569(void)

void FUN_14d886569(void)

{
  return;
}



// FUNCTION 14d8865b1 FUN_14d8865b1 body=242 status=ok
// SIG undefined FUN_14d8865b1(void)

/* WARNING: Removing unreachable block (ram,0x00014d8865f8) */
/* WARNING: Removing unreachable block (ram,0x00014d886603) */
/* WARNING: Removing unreachable block (ram,0x00014d8866d5) */
/* WARNING: Removing unreachable block (ram,0x00014d8865fe) */

void FUN_14d8865b1(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x1021b4) {
    FUN_165dc09fc();
    return;
  }
  FUN_1615d6d9a();
  return;
}



// FUNCTION 14d8866a3 FUN_14d8866a3 body=49 status=ok
// SIG undefined FUN_14d8866a3(void)

void FUN_14d8866a3(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffffffffffff - (param_2 & param_1);
  FUN_15634d16d(param_1,((param_2 | param_1) - (uVar1 | param_2 | param_1)) + uVar1);
  return;
}



// FUNCTION 14d886731 FUN_14d886731 body=395 status=ok
// SIG undefined FUN_14d886731(void)

/* WARNING: Removing unreachable block (ram,0x00014d8867dd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d886731(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  undefined8 local_res8;
  
  if ((local_res8 & 0x40) == 0) {
    FUN_14dd67a73(param_1 + *(int *)(unaff_RBP + 0xb0),param_2,param_3);
    FUN_162a7be33();
    return;
  }
  FUN_1620de0e3(0);
  return;
}



// FUNCTION 14d8869ae FUN_14d8869ae body=18 status=ok
// SIG undefined FUN_14d8869ae(void)

void FUN_14d8869ae(void)

{
  return;
}



// FUNCTION 14d886a5f thunk_FUN_14d886a65 body=5 status=ok
// SIG undefined thunk_FUN_14d886a65(void)

/* WARNING: Removing unreachable block (ram,0x00014d886b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d886b16) */
/* WARNING: Removing unreachable block (ram,0x000162a5c311) */
/* WARNING: Removing unreachable block (ram,0x000162a5c358) */
/* WARNING: Removing unreachable block (ram,0x000162a5c35f) */
/* WARNING: Removing unreachable block (ram,0x00014d886b7b) */
/* WARNING: Removing unreachable block (ram,0x00014d886b81) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 thunk_FUN_14d886a65(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160dc426f(FUN_160dc426f);
  return uVar1;
}



// FUNCTION 14d886a65 FUN_14d886a65 body=659 status=ok
// SIG undefined FUN_14d886a65(void)

/* WARNING: Removing unreachable block (ram,0x00014d886b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d886b16) */
/* WARNING: Removing unreachable block (ram,0x000162a5c311) */
/* WARNING: Removing unreachable block (ram,0x000162a5c358) */
/* WARNING: Removing unreachable block (ram,0x000162a5c35f) */
/* WARNING: Removing unreachable block (ram,0x00014d886b7b) */
/* WARNING: Removing unreachable block (ram,0x00014d886b81) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d886a65(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160dc426f(FUN_160dc426f);
  return uVar1;
}



// FUNCTION 14d886cfe FUN_14d886cfe body=150 status=ok
// SIG undefined FUN_14d886cfe(void)

void FUN_14d886cfe(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x30);
  (*(code *)&LAB_14dacb32a)(&LAB_14dacb32a,uVar1,0,uVar1 + in_RAX + (uVar1 & in_RAX) * -2);
  return;
}



// FUNCTION 14d886d95 FUN_14d886d95 body=149 status=ok
// SIG undefined FUN_14d886d95(void)

undefined8 FUN_14d886d95(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  
  lVar3 = *(longlong *)(unaff_RDI + -0x98);
  FUN_1567897bb(param_1,param_2);
  uVar1 = FUN_165b74824();
  lVar3 = unaff_RSI - lVar3;
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),DAT_14d7a7c78);
  UNLOCK();
  DAT_14d7a7c78 = (char)uVar1;
  *(undefined8 *)(lVar3 + -8) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x10) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x18) = 0x244855;
  *(undefined4 *)(lVar3 + -0x20) = 0x519c8d07;
  *(undefined8 *)(lVar3 + -0x28) = uVar2;
  *(undefined8 *)(lVar3 + -0x30) = uVar2;
  *(undefined8 *)(lVar3 + -0x38) = uVar2;
  *(undefined1 **)(lVar3 + -0x28) = &LAB_14d886f96;
  *(undefined8 *)(lVar3 + -0x30) = 0x1617e3db5;
  return *(undefined8 *)(lVar3 + -0x38);
}



// FUNCTION 14d886e2b FUN_14d886e2b body=359 status=ok
// SIG undefined FUN_14d886e2b(void)

undefined8 FUN_14d886e2b(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RSI;
  longlong lVar3;
  undefined8 unaff_R15;
  longlong local_res10;
  
  uVar1 = FUN_165b74824();
  lVar3 = unaff_RSI - local_res10;
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),DAT_14d7a7c78);
  UNLOCK();
  DAT_14d7a7c78 = (char)uVar1;
  *(undefined8 *)(lVar3 + -8) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x10) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x18) = 0x244855;
  *(undefined4 *)(lVar3 + -0x20) = 0x519c8d07;
  *(undefined8 *)(lVar3 + -0x28) = uVar2;
  *(undefined8 *)(lVar3 + -0x30) = uVar2;
  *(undefined8 *)(lVar3 + -0x38) = uVar2;
  *(undefined1 **)(lVar3 + -0x28) = &LAB_14d886f96;
  *(undefined8 *)(lVar3 + -0x30) = 0x1617e3db5;
  return *(undefined8 *)(lVar3 + -0x38);
}



// FUNCTION 14d8874d6 FUN_14d8874d6 body=237 status=ok
// SIG undefined FUN_14d8874d6(void)

void FUN_14d8874d6(void)

{
  int unaff_R15D;
  bool bVar1;
  int in_stack_00000008;
  
  bVar1 = (int)((uint)(unaff_R15D == in_stack_00000008 + 0x7c6eddd3) << 0x1f) < 0;
  if (bVar1) {
    FUN_1666290ac();
    return;
  }
  FUN_162b29363();
  if (!bVar1) {
    return;
  }
  FUN_1574ba9da();
  return;
}



// FUNCTION 14d88769c FUN_14d88769c body=142 status=ok
// SIG undefined FUN_14d88769c(void)

void FUN_14d88769c(void)

{
  return;
}



// FUNCTION 14d88786d FUN_14d88786d body=74 status=ok
// SIG undefined FUN_14d88786d(void)

void FUN_14d88786d(void)

{
  byte unaff_BPL;
  ulonglong unaff_retaddr;
  
  if ((longlong)unaff_retaddr < 0) {
    unaff_BPL = ~(~(unaff_BPL & 0x42) & (unaff_BPL | 0x42));
  }
  *(byte *)(unaff_retaddr & 0x7fffffffffffffff) = unaff_BPL;
  thunk_FUN_157842fff();
  return;
}



// FUNCTION 14d8878b8 thunk_FUN_157842fff body=5 status=ok
// SIG undefined thunk_FUN_157842fff(void)

void thunk_FUN_157842fff(void)

{
  FUN_157842fff();
  return;
}



// FUNCTION 14d8878e9 FUN_14d8878e9 body=5 status=ok
// SIG undefined FUN_14d8878e9(void)

void FUN_14d8878e9(void)

{
  return;
}



// FUNCTION 14d887aa5 FUN_14d887aa5 body=150 status=ok
// SIG undefined FUN_14d887aa5(void)

void FUN_14d887aa5(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)((longlong)&local_res10 + ~((param_1 - (param_3 | param_1)) + param_3)) = param_4;
  uVar1 = local_res10;
  local_res10 = param_2;
  *(ulonglong *)(param_5 + -8) = CONCAT44(unaff_retaddr_00,unaff_retaddr);
  (*(code *)0x160f4cb6f)(in_stack_00000018,param_2,in_stack_00000008,uVar1);
  return;
}



// FUNCTION 14d887ca0 FUN_14d887ca0 body=114 status=ok
// SIG undefined FUN_14d887ca0(void)

void FUN_14d887ca0(void)

{
  return;
}



// FUNCTION 14d887d14 FUN_14d887d14 body=15 status=ok
// SIG undefined FUN_14d887d14(void)

void FUN_14d887d14(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -2) = *(char *)(in_RAX + -2) + '\x01';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14d887db1 FUN_14d887db1 body=122 status=ok
// SIG undefined FUN_14d887db1(void)

/* WARNING: Removing unreachable block (ram,0x00014d887e4d) */

void FUN_14d887db1(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  undefined8 *puVar3;
  undefined8 unaff_RBP;
  undefined8 unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  if ((ushort)((ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 |
               (ushort)(in_TF & 1) * 0x100 | (ushort)(in_AF & 1) * 0x10 | 0xfeff) == 0xfeff) {
    puVar3 = (undefined8 *)register0x00000020;
  }
  *puVar3 = unaff_R13;
  uVar2 = *puVar3;
  puVar1 = puVar3 + 2;
  *puVar1 = *puVar1 & unaff_RBX;
  *puVar3 = param_1;
  puVar3[-1] = param_1;
  *(undefined1 *)(puVar3 + -1) = 0x89;
  puVar3[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
               (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)*puVar1 < 0) * 0x80 |
               (ulonglong)(*puVar1 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
               (ulonglong)((POPCOUNT(*puVar1 & 0xff) & 1U) == 0) * 4 |
               (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
               (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  puVar3[-3] = unaff_RBP;
  puVar3[-4] = uVar2;
  puVar3[-5] = 0x16f020539;
  puVar3[-6] = 0x16f020539;
  puVar3[-5] = &LAB_165527ac0;
  return;
}



// FUNCTION 14d88804e thunk_FUN_14d888054 body=5 status=ok
// SIG undefined thunk_FUN_14d888054(void)

void thunk_FUN_14d888054(ulonglong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b6bd790(*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP,param_2,
                (*(ulonglong *)(unaff_RSI + -0x60) - unaff_RBP) +
                (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) * -2 + -2,
                ~((param_3 + param_4) - (param_1 & param_4) & (~param_4 | unaff_RBP)));
  return;
}



// FUNCTION 14d888054 FUN_14d888054 body=135 status=ok
// SIG undefined FUN_14d888054(void)

void FUN_14d888054(ulonglong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_15b6bd790(*(ulonglong *)(unaff_RSI + -0x40) | unaff_RBP,param_2,
                (*(ulonglong *)(unaff_RSI + -0x60) - unaff_RBP) +
                (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60)) * -2 + -2,
                ~((param_3 + param_4) - (param_1 & param_4) & (~param_4 | unaff_RBP)));
  return;
}



// FUNCTION 14d8880de FUN_14d8880de body=172 status=ok
// SIG undefined FUN_14d8880de(void)

void FUN_14d8880de(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = in_R10;
  *(undefined **)(local_res10 + -0x18) = &DAT_15d5d4dcd;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = in_R11;
  *(undefined1 **)(local_res10 + -0x18) = &LAB_14d88818b;
  (*(code *)0x15786860f)(lVar1 + -0x5d6d025,param_2);
  return;
}



// FUNCTION 14d888240 FUN_14d888240 body=136 status=ok
// SIG undefined FUN_14d888240(void)

void FUN_14d888240(undefined8 param_1)

{
  undefined8 in_stack_00000018;
  
  FUN_1649fe3c8(param_1,in_stack_00000018);
  return;
}



// FUNCTION 14d888381 FUN_14d888381 body=75 status=ok
// SIG undefined FUN_14d888381(void)

void FUN_14d888381(undefined8 param_1,short param_2,undefined8 param_3,short *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 in_EAX;
  short unaff_R15W;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  *param_4 = unaff_R15W + param_2 + 1;
  SegmentLimit(in_EAX);
  *(undefined8 *)(param_6 + -0x10) = param_3;
  *(undefined8 *)(param_6 + -8) = 0x92c9c0;
  FUN_14d85d504(local_res8,local_res10,*(undefined8 *)(param_6 + -0x10),local_res18);
  return;
}



// FUNCTION 14d88861b FUN_14d88861b body=159 status=ok
// SIG undefined FUN_14d88861b(void)

void FUN_14d88861b(void)

{
  return;
}



// FUNCTION 14d8886bc FUN_14d8886bc body=439 status=ok
// SIG undefined FUN_14d8886bc(void)

/* WARNING: Removing unreachable block (ram,0x00014d888755) */

void FUN_14d8886bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  ushort *in_RAX;
  undefined8 in_R10;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  
  *in_RAX = ~(*in_RAX & 0x100) + *in_RAX + 1;
  *(undefined8 *)(param_5 + -8) = param_2;
  *(undefined8 *)(param_5 + -0x10) = unaff_R15;
  *(undefined8 *)(param_5 + -0x18) = unaff_R15;
  *(undefined8 *)(param_5 + -0x20) = param_3;
  *(undefined8 *)(param_5 + -0x28) = uStackX_10;
  *(undefined4 *)(param_5 + -0x28) = 0x1f5a2837;
  *(undefined4 *)(param_5 + -0x24) = 0;
  lVar1 = *(longlong *)
           (param_5 + -0x18 +
           ~(~(*(ulonglong *)(param_5 + -0x28) & 0xffffffffe0a5d7d8) &
            (*(ulonglong *)(param_5 + -0x28) | 0xffffffffe0a5d7d8)));
  *(undefined8 *)(param_5 + -0x10) = 0;
  *(longlong *)(param_5 + -0x10) = *(longlong *)(param_5 + -0x10) - lVar1;
  *(longlong *)(param_5 + -0x10) = -*(longlong *)(param_5 + -0x10);
  *(undefined **)(param_5 + -8) = &DAT_160b59eb8;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(undefined8 *)(param_5 + -0x18) = in_R10;
  *(code **)(param_5 + -0x10) = LoadLibraryA_exref;
  return;
}



// FUNCTION 14d8887fb FUN_14d8887fb body=144 status=ok
// SIG undefined FUN_14d8887fb(void)

void FUN_14d8887fb(undefined8 param_1)

{
  FUN_156befb99(param_1);
  return;
}



// FUNCTION 14d88888c FUN_14d88888c body=83 status=ok
// SIG undefined FUN_14d88888c(void)

void FUN_14d88888c(void)

{
  return;
}



// FUNCTION 14d888ace FUN_14d888ace body=490 status=ok
// SIG undefined FUN_14d888ace(void)

undefined8 FUN_14d888ace(void)

{
  undefined8 uVar1;
  
  FUN_165ec3f0b();
  uVar1 = 0xcbbac97;
  FUN_14dc9b93b();
  return uVar1;
}



// FUNCTION 14d888d6d FUN_14d888d6d body=171 status=ok
// SIG undefined FUN_14d888d6d(void)

/* WARNING: Removing unreachable block (ram,0x00014d888e0e) */
/* WARNING: Removing unreachable block (ram,0x00014d888e14) */
/* WARNING: Removing unreachable block (ram,0x00014d888e19) */

void FUN_14d888d6d(void)

{
  FUN_15b9c9ac2();
  return;
}



// FUNCTION 14d888e19 FUN_14d888e19 body=158 status=ok
// SIG undefined FUN_14d888e19(void)

void FUN_14d888e19(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  
  param_1 = param_1 ^ 0xffffffffffffffff;
  *(undefined8 *)(&stack0xfffffffff87ed434 + param_1) = unaff_R15;
  lVar1 = *(longlong *)((longlong)ProcessEnvironmentBlock + 0x18);
  *(ulonglong *)(&stack0xfffffffff87ed434 + param_1) = param_1 - 0x7812bc4;
  *(undefined8 *)(&stack0xfffffffff87ed42c + param_1) = unaff_RSI;
  uVar2 = **(undefined8 **)**(undefined8 **)(lVar1 + 0x20);
  *(undefined4 *)(&stack0xfffffffff87ed434 + param_1) = 0x113cb284;
  *(undefined4 *)(&stack0xfffffffff87ed438 + param_1) = 0;
  *(undefined4 *)(&stack0xfffffffff87ed438 + param_1) =
       *(undefined4 *)(&stack0xfffffffff87ed438 + param_1);
  *(undefined8 *)(&stack0xfffffffff87ed434 + param_1) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffff87ed434 + param_1) = uVar2;
  (*(code *)0x164acd283)(0x164acd283);
  return;
}



// FUNCTION 14d889095 FUN_14d889095 body=163 status=ok
// SIG undefined FUN_14d889095(void)

void FUN_14d889095(byte param_1,undefined8 param_2)

{
  byte unaff_BPL;
  
  (*(code *)0x1625b2997)
            (~(((~(~-(unaff_BPL | param_1) + 2) + 1) - (param_1 ^ 0xff)) + unaff_BPL),param_2,
             0x1625b2997);
  return;
}



// FUNCTION 14d8891eb FUN_14d8891eb body=136 status=ok
// SIG undefined FUN_14d8891eb(void)

void FUN_14d8891eb(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_162300309(~param_2,~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15);
  return;
}



// FUNCTION 14d88954e FUN_14d88954e body=490 status=ok
// SIG undefined FUN_14d88954e(void)

/* WARNING: Removing unreachable block (ram,0x00014d8895fa) */
/* WARNING: Removing unreachable block (ram,0x00014d88967c) */
/* WARNING: Removing unreachable block (ram,0x00014d889681) */
/* WARNING: Removing unreachable block (ram,0x0001627ca2e0) */
/* WARNING: Removing unreachable block (ram,0x00014d889687) */

undefined8 FUN_14d88954e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d88973d FUN_14d88973d body=154 status=ok
// SIG undefined FUN_14d88973d(void)

/* WARNING: Removing unreachable block (ram,0x00014d889920) */
/* WARNING: Removing unreachable block (ram,0x0001618eead0) */
/* WARNING: Removing unreachable block (ram,0x00014d889864) */

undefined8 FUN_14d88973d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1652de776(param_1,param_2,0xffffffff8d43abbc);
  uVar1 = FUN_15b62104f();
  return uVar1;
}



// FUNCTION 14d8897d7 FUN_14d8897d7 body=471 status=ok
// SIG undefined FUN_14d8897d7(void)

/* WARNING: Removing unreachable block (ram,0x00014d889920) */
/* WARNING: Removing unreachable block (ram,0x0001618eead0) */
/* WARNING: Removing unreachable block (ram,0x00014d889864) */

undefined8 FUN_14d8897d7(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b62104f();
  return uVar1;
}



// FUNCTION 14d889a38 FUN_14d889a38 body=5 status=ok
// SIG undefined FUN_14d889a38(void)

void FUN_14d889a38(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156388e45(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,FUN_156388e45);
  return;
}



// FUNCTION 14d889a3d FUN_14d889a3d body=132 status=ok
// SIG undefined FUN_14d889a3d(void)

void FUN_14d889a3d(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_CF;
  
  *(int *)(unaff_RBP + 0xbb8a) =
       (*(int *)(unaff_RBP + 0xbb8a) - (int)&stack0x00000000) - (uint)in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  FUN_156388e45(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,FUN_156388e45);
  return;
}



// FUNCTION 14d889b4c FUN_14d889b4c body=275 status=ok
// SIG undefined FUN_14d889b4c(void)

/* WARNING: Removing unreachable block (ram,0x00014d889be8) */

void FUN_14d889b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RDI;
  ulonglong in_R11;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(&stack0x35e7c6e1 + -~in_R11) = unaff_RDI;
  FUN_162dd2c81(param_1,param_2,in_stack_00000008,param_4);
  return;
}



// FUNCTION 14d889d07 FUN_14d889d07 body=144 status=ok
// SIG undefined FUN_14d889d07(void)

void FUN_14d889d07(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar3;
  longlong lVar4;
  longlong unaff_RBX;
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
  ushort local_res8;
  uint6 uStackX_a;
  longlong *local_res10;
  longlong lVar2;
  
  bVar14 = (local_res8 & 0x4000) != 0;
  bVar13 = (local_res8 & 0x800) != 0;
  bVar12 = (local_res8 & 0x400) != 0;
  bVar11 = (local_res8 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (local_res8 & 0x80) != 0;
  bVar8 = (local_res8 & 0x40) != 0;
  bVar7 = (local_res8 & 0x10) != 0;
  bVar6 = (local_res8 & 4) != 0;
  bVar5 = (local_res8 & 1) != 0;
  bVar18 = (uStackX_a & 0x20) != 0;
  bVar15 = (uStackX_a & 4) != 0;
  bVar17 = 0;
  bVar16 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *local_res10 = unaff_RBX;
  local_res10[-1] = unaff_RBX;
  *(undefined4 *)(local_res10 + -2) = 0x1169cf26;
  *(undefined4 *)((longlong)local_res10 + -0xc) = 0;
  lVar4 = local_res10[-2];
  local_res10[-2] =
       (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)(bVar13 & 1) * 0x800 |
       (ulonglong)bVar12 * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100
       | (ulonglong)(bVar9 & 1) * 0x80 | (ulonglong)(bVar8 & 1) * 0x40 |
       (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
       (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
       (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  local_res10[-3] = lVar4;
  uVar1 = local_res10[-3];
  lVar2 = local_res10[-3];
  local_res10[-3] = local_res10[-3] + -0xe72f88e;
  local_res10[-3] =
       (ulonglong)(bVar14 & 1) * 0x4000 | (ulonglong)SBORROW8(lVar2,0xe72f88e) * 0x800 |
       (ulonglong)bVar12 * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 | (ulonglong)(bVar10 & 1) * 0x100
       | (ulonglong)(local_res10[-3] < 0) * 0x80 | (ulonglong)(local_res10[-3] == 0) * 0x40 |
       (ulonglong)(bVar7 & 1) * 0x10 | (ulonglong)((POPCOUNT(local_res10[-3] & 0xff) & 1U) == 0) * 4
       | (ulonglong)(uVar1 < 0xe72f88e) | (ulonglong)(bVar18 & 1) * 0x200000 |
       (ulonglong)(bVar17 & 1) * 0x100000 | (ulonglong)(bVar16 & 1) * 0x80000 |
       (ulonglong)(bVar15 & 1) * 0x40000;
  *local_res10 = lVar4 + -0xe72f88e;
  local_res10[-1] = param_3;
  local_res10[-2] = param_3;
  local_res10[-1] = (longlong)FUN_14d85d504;
  (*(code *)0x156a1de19)(param_1,param_2,0x156a1de19);
  return;
}



// FUNCTION 14d889f65 FUN_14d889f65 body=169 status=ok
// SIG undefined FUN_14d889f65(void)

void FUN_14d889f65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_R11;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + in_R11);
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | unaff_R15;
  *puVar1 = ~((~*puVar1 | unaff_R15 ^ 0xffffffffffffffff | uVar2) + *puVar1 + 1);
  uVar2 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x18) = unaff_retaddr;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x20) = unaff_RBX;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RBX;
  *(undefined **)(uVar2 - 0x20) = &DAT_14d88a00e;
  FUN_161bd7e42(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d88a134 FUN_14d88a134 body=163 status=ok
// SIG undefined FUN_14d88a134(void)

void FUN_14d88a134(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 unaff_retaddr;
  
  FUN_156fa1ead(param_1,param_2,unaff_retaddr,
                *(ulonglong *)(unaff_R12 + -0x38) ^ 0xffffffffffffffff | in_RAX);
  return;
}



// FUNCTION 14d88a4fe FUN_14d88a4fe body=162 status=ok
// SIG undefined FUN_14d88a4fe(void)

void FUN_14d88a4fe(void)

{
  return;
}



// FUNCTION 14d88a5b5 thunk_FUN_164b5acb8 body=5 status=ok
// SIG undefined thunk_FUN_164b5acb8(void)

void thunk_FUN_164b5acb8(void)

{
  FUN_164b5acb8();
  return;
}



// FUNCTION 14d88a5ba FUN_14d88a5ba body=255 status=ok
// SIG undefined FUN_14d88a5ba(void)

/* WARNING: Instruction at (ram,0x00014d88a66e) overlaps instruction at (ram,0x00014d88a66b)
    */
/* WARNING: Removing unreachable block (ram,0x00014d88a661) */

void FUN_14d88a5ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_retaddr;
  
  if (unaff_retaddr < 0) {
    FUN_1663411c9(param_1,param_2,
                  ~CONCAT71((int7)((ulonglong)param_3 >> 8),(char)param_3 << ((byte)param_1 & 0x1f))
                 );
    FUN_161c9fc37();
    return;
  }
  FUN_166341235(param_1,param_2,FUN_166341235);
  return;
}



// FUNCTION 14d88a6c0 FUN_14d88a6c0 body=145 status=ok
// SIG undefined FUN_14d88a6c0(void)

void FUN_14d88a6c0(undefined8 param_1)

{
  FUN_162945c71(param_1);
  return;
}



// FUNCTION 14d88a751 FUN_14d88a751 body=75 status=ok
// SIG undefined FUN_14d88a751(void)

void FUN_14d88a751(void)

{
  return;
}



// FUNCTION 14d88a915 FUN_14d88a915 body=291 status=ok
// SIG undefined FUN_14d88a915(void)

void FUN_14d88a915(ulonglong param_1)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong unaff_R14;
  
  uVar1 = (~*(ulonglong *)(unaff_RDI + -0x38) | ~param_1) + *(ulonglong *)(unaff_RDI + -0x38) + 1 |
          param_1;
  FUN_15b47996c(param_1,uVar1,uVar1,
                ~((~param_1 | unaff_R14) & (~unaff_R14 + param_1) - (~unaff_R14 & param_1)));
  FUN_1653a2217();
  return;
}



// FUNCTION 14d88aa3a FUN_14d88aa3a body=272 status=ok
// SIG undefined FUN_14d88aa3a(void)

/* WARNING: Removing unreachable block (ram,0x00014d88aae5) */

undefined1
FUN_14d88aa3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 in_AL;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar1 = local_res10 ^ unaff_R15;
  uVar2 = (~local_res18 | ~unaff_R15) & (local_res18 | unaff_R15);
                    /* WARNING: Read-only address (ram,0x00014d7aac3b) is written */
  LOCK();
  UNLOCK();
  uRam000000014d7aac3b = in_AL;
  *(undefined8 *)(uVar2 - 8) = in_R10;
  *(undefined8 *)(uVar2 - 0x10) = in_R10;
  *(undefined4 *)(uVar2 - 0x18) = 0x298fa0a;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  lVar3 = *(longlong *)(uVar2 - 0x18);
  *(ulonglong *)(uVar2 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x80) != 0) * 0x80 | (ulonglong)((uVar1 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((uVar1 & 4) != 0) * 4 |
       (ulonglong)((uVar1 & 1) != 0) | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar2 - 0x20) = param_4;
  *(undefined8 *)(uVar2 - 0x28) = in_R11;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *(longlong *)(uVar2 - 8) = lVar3 + -0x853466;
  *(undefined8 *)(uVar2 - 0x10) = param_1;
  *(undefined8 *)(uVar2 - 0x18) = param_1;
  *(undefined8 *)(uVar2 - 0x10) = 0x156ef2e25;
  return 0;
}



// FUNCTION 14d88acb1 FUN_14d88acb1 body=575 status=ok
// SIG undefined FUN_14d88acb1(void)

/* WARNING: Removing unreachable block (ram,0x00014d88ad41) */

longlong FUN_14d88acb1(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = ~(param_2 & param_1);
  uVar2 = -~*(ulonglong *)(unaff_R13 + -0x28) - 1;
  uVar2 = FUN_14ded67cd(uVar1,~((~unaff_R15 | uVar2) & (~uVar2 | unaff_R15)),FUN_14ded67cd,
                        *(undefined8 *)(unaff_R13 + -0x70));
  return uVar2 + uVar1 + (uVar2 & uVar1) * -2;
}



// FUNCTION 14d88af69 FUN_14d88af69 body=132 status=ok
// SIG undefined FUN_14d88af69(void)

undefined8 FUN_14d88af69(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d88afee FUN_14d88afee body=137 status=ok
// SIG undefined FUN_14d88afee(void)

void FUN_14d88afee(void)

{
  return;
}



// FUNCTION 14d88b0fd FUN_14d88b0fd body=276 status=ok
// SIG undefined FUN_14d88b0fd(void)

void FUN_14d88b0fd(ulonglong param_1,ulonglong param_2)

{
  ulonglong unaff_RSI;
  
  FUN_160fc4d67(param_1,((param_1 - 1) - ~unaff_RSI) + ~(~param_2 | ~param_1) * -2);
  FUN_15b9a4fa2();
  return;
}



// FUNCTION 14d88b38d FUN_14d88b38d body=148 status=ok
// SIG undefined FUN_14d88b38d(void)

/* WARNING: Removing unreachable block (ram,0x00015b672079) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d1) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d7) */
/* WARNING: Removing unreachable block (ram,0x0001646f11dc) */
/* WARNING: Removing unreachable block (ram,0x0001663bb941) */
/* WARNING: Removing unreachable block (ram,0x0001646f1394) */
/* WARNING: Removing unreachable block (ram,0x0001646f139a) */
/* WARNING: Removing unreachable block (ram,0x0001646f139f) */
/* WARNING: Removing unreachable block (ram,0x0001646f1419) */
/* WARNING: Removing unreachable block (ram,0x0001646f141e) */
/* WARNING: Removing unreachable block (ram,0x00014e13b421) */
/* WARNING: Removing unreachable block (ram,0x0001646f1424) */
/* WARNING: Removing unreachable block (ram,0x0001646f14ca) */
/* WARNING: Removing unreachable block (ram,0x0001646f14d0) */
/* WARNING: Removing unreachable block (ram,0x0001646f1558) */
/* WARNING: Removing unreachable block (ram,0x0001646f155e) */
/* WARNING: Removing unreachable block (ram,0x00014e0416c9) */
/* WARNING: Removing unreachable block (ram,0x0001622b1c66) */
/* WARNING: Removing unreachable block (ram,0x0001622b1ced) */
/* WARNING: Removing unreachable block (ram,0x0001622b1cf3) */
/* WARNING: Removing unreachable block (ram,0x0001657c54e0) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f4) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f9) */
/* WARNING: Removing unreachable block (ram,0x0001657c55ff) */
/* WARNING: Removing unreachable block (ram,0x00015b671f88) */
/* WARNING: Removing unreachable block (ram,0x00015b67207d) */
/* WARNING: Removing unreachable block (ram,0x00015b6720ad) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b8) */
/* WARNING: Removing unreachable block (ram,0x0001629a2449) */
/* WARNING: Removing unreachable block (ram,0x0001629a24e7) */
/* WARNING: Removing unreachable block (ram,0x0001629a24ec) */
/* WARNING: Removing unreachable block (ram,0x0001629a24f2) */
/* WARNING: Removing unreachable block (ram,0x000166d19674) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e2) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e8) */
/* WARNING: Removing unreachable block (ram,0x000166d958aa) */
/* WARNING: Removing unreachable block (ram,0x000166d9594e) */
/* WARNING: Removing unreachable block (ram,0x00014dff93ba) */
/* WARNING: Removing unreachable block (ram,0x000166d95954) */
/* WARNING: Removing unreachable block (ram,0x000166d95a1d) */
/* WARNING: Removing unreachable block (ram,0x000166d95a7e) */
/* WARNING: Removing unreachable block (ram,0x000166d95a8a) */
/* WARNING: Removing unreachable block (ram,0x0001650bec6e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c768d) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7699) */
/* WARNING: Removing unreachable block (ram,0x00014e0c769e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7729) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7735) */
/* WARNING: Removing unreachable block (ram,0x00014dd51de6) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e77) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e7c) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e82) */
/* WARNING: Removing unreachable block (ram,0x00014d9a200b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a209d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a212d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2138) */
/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */
/* WARNING: Removing unreachable block (ram,0x00015b2d2b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2092) */
/* WARNING: Removing unreachable block (ram,0x000165c9f060) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0da) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0e0) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0eb) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16a) */
/* WARNING: Removing unreachable block (ram,0x0001646f113c) */
/* WARNING: Removing unreachable block (ram,0x000161480d4d) */
/* WARNING: Removing unreachable block (ram,0x000161480dd3) */
/* WARNING: Removing unreachable block (ram,0x000161480dd8) */
/* WARNING: Removing unreachable block (ram,0x000161480dde) */
/* WARNING: Removing unreachable block (ram,0x000161480de3) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16f) */
/* WARNING: Removing unreachable block (ram,0x000165c9f175) */
/* WARNING: Removing unreachable block (ram,0x000165c9f26d) */
/* WARNING: Removing unreachable block (ram,0x000165c9f278) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2f8) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2fe) */
/* WARNING: Removing unreachable block (ram,0x0001625670be) */
/* WARNING: Removing unreachable block (ram,0x000162567190) */
/* WARNING: Removing unreachable block (ram,0x000165c9f273) */
/* WARNING: Removing unreachable block (ram,0x000165c9f268) */
/* WARNING: Removing unreachable block (ram,0x000162f1a0ad) */
/* WARNING: Removing unreachable block (ram,0x00014ddeb533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6ae) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6b4) */
/* WARNING: Removing unreachable block (ram,0x00016538e7ad) */
/* WARNING: Removing unreachable block (ram,0x000162d9eeaa) */
/* WARNING: Removing unreachable block (ram,0x00014d88b564) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5ef) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5f4) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5fa) */

ulonglong FUN_14d88b38d(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 in_R9;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar7;
  bool bVar8;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  ulonglong in_stack_00000028;
  ulonglong in_stack_00000030;
  
  lVar5 = *(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2;
  uVar6 = ~*(ulonglong *)(unaff_R13 + -0x28);
  uVar4 = uVar6;
  uVar3 = (*(code *)0x166475580)();
                    /* WARNING (jumptable): Read-only address (ram,0x000166475588) is written */
                    /* WARNING: Read-only address (ram,0x000166475588) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000166475588) is written */
                    /* WARNING: Read-only address (ram,0x000166475588) is written */
  uRam0000000166475588 =
       ~((~(uVar4 & 0x2b48d72349ef0349) + 0x2b48d72349ef0349) - ~uVar4 & 0x2b48d72349ef0349);
                    /* WARNING (jumptable): Read-only address (ram,0x000166475588) is written */
                    /* WARNING: Read-only address (ram,0x000166475588) is written */
  puVar2 = (ulonglong *)(in_stack_00000030 ^ unaff_R15);
  bVar8 = (in_stack_00000028 & 0x40) != 0;
  bVar7 = (in_stack_00000028 & 1) != 0;
  puVar2[-1] = uVar6;
  puVar2[-2] = uVar6;
  puVar2[-3] = (ulonglong)((in_stack_00000028 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((in_stack_00000028 & 0x800) != 0) * 0x800 |
               (ulonglong)((in_stack_00000028 & 0x400) != 0) * 0x400 |
               (ulonglong)((in_stack_00000028 & 0x200) != 0) * 0x200 |
               (ulonglong)((in_stack_00000028 & 0x80) != 0) * 0x80 | (ulonglong)bVar8 * 0x40 |
               (ulonglong)((in_stack_00000028 & 0x10) != 0) * 0x10 |
               (ulonglong)((in_stack_00000028 & 4) != 0) * 4 | (ulonglong)bVar7 |
               (ulonglong)((in_stack_00000028 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((in_stack_00000028 & 0x40000) != 0) * 0x40000;
  if (!bVar7) {
    puVar2[-3] = in_R9;
    puVar2[-4] = in_R9;
    puVar2[-3] = (ulonglong)&LAB_165f4dbc6;
    return uVar3;
  }
  if (!bVar7 && !bVar8) {
    *puVar2 = *puVar2 ^ uVar3;
    puVar2[-2] = in_R9;
    puVar2[-1] = uStackX_20;
    uVar4 = puVar2[1];
    puVar2[1] = puVar2[1] & uVar3;
    puVar2[-2] = lVar5;
    puVar1 = puVar2 + 1;
    *puVar1 = *puVar1 << 1 | *puVar1 >> 0x3f;
    puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
    puVar2[-2] = uStackX_18;
    uVar6 = puVar2[1];
    puVar2[1] = (uVar4 + uVar3) - puVar2[1];
    puVar2[-1] = uStackX_10;
    puVar2[-2] = unaff_R14;
    if (uVar4 + uVar3 < uVar6) {
      uVar4 = FUN_1611f8144();
      return uVar4;
    }
    uVar4 = FUN_1611f8144();
    return uVar4;
  }
  uVar4 = FUN_165f4dba5();
  return uVar4;
}



// FUNCTION 14d88b423 FUN_14d88b423 body=157 status=ok
// SIG undefined FUN_14d88b423(void)

/* WARNING: Removing unreachable block (ram,0x00015b672079) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d1) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d7) */
/* WARNING: Removing unreachable block (ram,0x0001646f11dc) */
/* WARNING: Removing unreachable block (ram,0x0001663bb941) */
/* WARNING: Removing unreachable block (ram,0x0001646f1394) */
/* WARNING: Removing unreachable block (ram,0x0001646f139a) */
/* WARNING: Removing unreachable block (ram,0x0001646f139f) */
/* WARNING: Removing unreachable block (ram,0x0001646f1419) */
/* WARNING: Removing unreachable block (ram,0x0001646f141e) */
/* WARNING: Removing unreachable block (ram,0x00014e13b421) */
/* WARNING: Removing unreachable block (ram,0x0001646f1424) */
/* WARNING: Removing unreachable block (ram,0x0001646f14ca) */
/* WARNING: Removing unreachable block (ram,0x0001646f14d0) */
/* WARNING: Removing unreachable block (ram,0x0001646f1558) */
/* WARNING: Removing unreachable block (ram,0x0001646f155e) */
/* WARNING: Removing unreachable block (ram,0x00014e0416c9) */
/* WARNING: Removing unreachable block (ram,0x0001622b1c66) */
/* WARNING: Removing unreachable block (ram,0x0001622b1ced) */
/* WARNING: Removing unreachable block (ram,0x0001622b1cf3) */
/* WARNING: Removing unreachable block (ram,0x0001657c54e0) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f4) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f9) */
/* WARNING: Removing unreachable block (ram,0x0001657c55ff) */
/* WARNING: Removing unreachable block (ram,0x00015b671f88) */
/* WARNING: Removing unreachable block (ram,0x00015b67207d) */
/* WARNING: Removing unreachable block (ram,0x00015b6720ad) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b8) */
/* WARNING: Removing unreachable block (ram,0x0001629a2449) */
/* WARNING: Removing unreachable block (ram,0x0001629a24e7) */
/* WARNING: Removing unreachable block (ram,0x0001629a24ec) */
/* WARNING: Removing unreachable block (ram,0x0001629a24f2) */
/* WARNING: Removing unreachable block (ram,0x000166d19674) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e2) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e8) */
/* WARNING: Removing unreachable block (ram,0x000166d958aa) */
/* WARNING: Removing unreachable block (ram,0x000166d9594e) */
/* WARNING: Removing unreachable block (ram,0x00014dff93ba) */
/* WARNING: Removing unreachable block (ram,0x000166d95954) */
/* WARNING: Removing unreachable block (ram,0x000166d95a1d) */
/* WARNING: Removing unreachable block (ram,0x000166d95a7e) */
/* WARNING: Removing unreachable block (ram,0x000166d95a8a) */
/* WARNING: Removing unreachable block (ram,0x0001650bec6e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c768d) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7699) */
/* WARNING: Removing unreachable block (ram,0x00014e0c769e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7729) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7735) */
/* WARNING: Removing unreachable block (ram,0x00014dd51de6) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e77) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e7c) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e82) */
/* WARNING: Removing unreachable block (ram,0x00014d9a200b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a209d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a212d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2138) */
/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */
/* WARNING: Removing unreachable block (ram,0x00015b2d2b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2092) */
/* WARNING: Removing unreachable block (ram,0x000165c9f060) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0da) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0e0) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0eb) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16a) */
/* WARNING: Removing unreachable block (ram,0x0001646f113c) */
/* WARNING: Removing unreachable block (ram,0x000161480d4d) */
/* WARNING: Removing unreachable block (ram,0x000161480dd3) */
/* WARNING: Removing unreachable block (ram,0x000161480dd8) */
/* WARNING: Removing unreachable block (ram,0x000161480dde) */
/* WARNING: Removing unreachable block (ram,0x000161480de3) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16f) */
/* WARNING: Removing unreachable block (ram,0x000165c9f175) */
/* WARNING: Removing unreachable block (ram,0x000165c9f26d) */
/* WARNING: Removing unreachable block (ram,0x000165c9f278) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2f8) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2fe) */
/* WARNING: Removing unreachable block (ram,0x0001625670be) */
/* WARNING: Removing unreachable block (ram,0x000162567190) */
/* WARNING: Removing unreachable block (ram,0x000165c9f273) */
/* WARNING: Removing unreachable block (ram,0x000165c9f268) */
/* WARNING: Removing unreachable block (ram,0x000162f1a0ad) */
/* WARNING: Removing unreachable block (ram,0x00014ddeb533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6ae) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6b4) */
/* WARNING: Removing unreachable block (ram,0x00016538e7ad) */
/* WARNING: Removing unreachable block (ram,0x000162d9eeaa) */
/* WARNING: Removing unreachable block (ram,0x00014d88b564) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5ef) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5f4) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5fa) */

ulonglong FUN_14d88b423(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  bool bVar6;
  bool bVar7;
  ulonglong local_res8;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar5 = *(ulonglong *)(unaff_RDI + 8);
  lVar3 = *(longlong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = ~*(ulonglong *)(unaff_RDI + 8);
  *(ulonglong *)(unaff_RDI + 8) = *(ulonglong *)(unaff_RDI + 8) | unaff_R15;
  *(ulonglong *)(unaff_RDI + 8) =
       ~((~(param_2 & uVar5) + lVar3) - ~param_2 & *(ulonglong *)(unaff_RDI + 8));
  puVar2 = (ulonglong *)(param_5 ^ unaff_R15);
  bVar7 = (local_res20 & 0x40) != 0;
  bVar6 = (local_res20 & 1) != 0;
  puVar2[-1] = unaff_RBP;
  puVar2[-2] = unaff_RBP;
  puVar2[-3] = (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
               (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
               (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
               (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)bVar7 * 0x40 |
               (ulonglong)((local_res20 & 0x10) != 0) * 0x10 |
               (ulonglong)((local_res20 & 4) != 0) * 4 | (ulonglong)bVar6 |
               (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
               (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  if (!bVar6) {
    puVar2[-3] = param_4;
    puVar2[-4] = param_4;
    puVar2[-3] = (ulonglong)&LAB_165f4dbc6;
    return in_RAX;
  }
  if (!bVar6 && !bVar7) {
    *puVar2 = *puVar2 ^ in_RAX;
    puVar2[-2] = param_4;
    puVar2[-1] = uStackX_18;
    uVar5 = puVar2[1];
    puVar2[1] = puVar2[1] & in_RAX;
    puVar2[-2] = param_1;
    puVar1 = puVar2 + 1;
    *puVar1 = *puVar1 << 1 | *puVar1 >> 0x3f;
    puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
    puVar2[-2] = uStackX_10;
    uVar4 = puVar2[1];
    puVar2[1] = (uVar5 + in_RAX) - puVar2[1];
    puVar2[-1] = local_res8;
    puVar2[-2] = unaff_R14;
    if (uVar5 + in_RAX < uVar4) {
      uVar5 = FUN_1611f8144();
      return uVar5;
    }
    uVar5 = FUN_1611f8144();
    return uVar5;
  }
  uVar5 = FUN_165f4dba5();
  return uVar5;
}



// FUNCTION 14d88b4c1 FUN_14d88b4c1 body=161 status=ok
// SIG undefined FUN_14d88b4c1(void)

/* WARNING: Removing unreachable block (ram,0x00015b672079) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d1) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d7) */
/* WARNING: Removing unreachable block (ram,0x0001646f11dc) */
/* WARNING: Removing unreachable block (ram,0x0001663bb941) */
/* WARNING: Removing unreachable block (ram,0x0001646f1394) */
/* WARNING: Removing unreachable block (ram,0x0001646f139a) */
/* WARNING: Removing unreachable block (ram,0x0001646f139f) */
/* WARNING: Removing unreachable block (ram,0x0001646f1419) */
/* WARNING: Removing unreachable block (ram,0x0001646f141e) */
/* WARNING: Removing unreachable block (ram,0x00014e13b421) */
/* WARNING: Removing unreachable block (ram,0x0001646f1424) */
/* WARNING: Removing unreachable block (ram,0x0001646f14ca) */
/* WARNING: Removing unreachable block (ram,0x0001646f14d0) */
/* WARNING: Removing unreachable block (ram,0x0001646f1558) */
/* WARNING: Removing unreachable block (ram,0x0001646f155e) */
/* WARNING: Removing unreachable block (ram,0x00014e0416c9) */
/* WARNING: Removing unreachable block (ram,0x0001622b1c66) */
/* WARNING: Removing unreachable block (ram,0x0001622b1ced) */
/* WARNING: Removing unreachable block (ram,0x0001622b1cf3) */
/* WARNING: Removing unreachable block (ram,0x0001657c54e0) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f4) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f9) */
/* WARNING: Removing unreachable block (ram,0x0001657c55ff) */
/* WARNING: Removing unreachable block (ram,0x00015b671f88) */
/* WARNING: Removing unreachable block (ram,0x00015b67207d) */
/* WARNING: Removing unreachable block (ram,0x00015b6720ad) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b8) */
/* WARNING: Removing unreachable block (ram,0x0001629a2449) */
/* WARNING: Removing unreachable block (ram,0x0001629a24e7) */
/* WARNING: Removing unreachable block (ram,0x0001629a24ec) */
/* WARNING: Removing unreachable block (ram,0x0001629a24f2) */
/* WARNING: Removing unreachable block (ram,0x000166d19674) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e2) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e8) */
/* WARNING: Removing unreachable block (ram,0x000166d958aa) */
/* WARNING: Removing unreachable block (ram,0x000166d9594e) */
/* WARNING: Removing unreachable block (ram,0x00014dff93ba) */
/* WARNING: Removing unreachable block (ram,0x000166d95954) */
/* WARNING: Removing unreachable block (ram,0x000166d95a1d) */
/* WARNING: Removing unreachable block (ram,0x000166d95a7e) */
/* WARNING: Removing unreachable block (ram,0x000166d95a8a) */
/* WARNING: Removing unreachable block (ram,0x0001650bec6e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c768d) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7699) */
/* WARNING: Removing unreachable block (ram,0x00014e0c769e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7729) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7735) */
/* WARNING: Removing unreachable block (ram,0x00014dd51de6) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e77) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e7c) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e82) */
/* WARNING: Removing unreachable block (ram,0x00014d9a200b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a209d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a212d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2138) */
/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */
/* WARNING: Removing unreachable block (ram,0x00015b2d2b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2092) */
/* WARNING: Removing unreachable block (ram,0x000165c9f060) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0da) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0e0) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0eb) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16a) */
/* WARNING: Removing unreachable block (ram,0x0001646f113c) */
/* WARNING: Removing unreachable block (ram,0x000161480d4d) */
/* WARNING: Removing unreachable block (ram,0x000161480dd3) */
/* WARNING: Removing unreachable block (ram,0x000161480dd8) */
/* WARNING: Removing unreachable block (ram,0x000161480dde) */
/* WARNING: Removing unreachable block (ram,0x000161480de3) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16f) */
/* WARNING: Removing unreachable block (ram,0x000165c9f175) */
/* WARNING: Removing unreachable block (ram,0x000165c9f26d) */
/* WARNING: Removing unreachable block (ram,0x000165c9f278) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2f8) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2fe) */
/* WARNING: Removing unreachable block (ram,0x0001625670be) */
/* WARNING: Removing unreachable block (ram,0x000162567190) */
/* WARNING: Removing unreachable block (ram,0x000165c9f273) */
/* WARNING: Removing unreachable block (ram,0x000165c9f268) */
/* WARNING: Removing unreachable block (ram,0x000162f1a0ad) */
/* WARNING: Removing unreachable block (ram,0x00014ddeb533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6ae) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6b4) */
/* WARNING: Removing unreachable block (ram,0x00016538e7ad) */
/* WARNING: Removing unreachable block (ram,0x000162d9eeaa) */
/* WARNING: Removing unreachable block (ram,0x00014d88b564) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5ef) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5f4) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5fa) */

undefined8 FUN_14d88b4c1(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong in_stack_00000020;
  
  if (in_stack_00000020 + in_RAX < (in_stack_00000020 & in_RAX) * 2) {
    uVar1 = FUN_1611f8144();
    return uVar1;
  }
  uVar1 = FUN_1611f8144();
  return uVar1;
}



// FUNCTION 14d88b564 FUN_14d88b564 body=492 status=ok
// SIG undefined FUN_14d88b564(void)

/* WARNING: Removing unreachable block (ram,0x00015b672079) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d1) */
/* WARNING: Removing unreachable block (ram,0x0001646f11d7) */
/* WARNING: Removing unreachable block (ram,0x0001646f11dc) */
/* WARNING: Removing unreachable block (ram,0x0001663bb941) */
/* WARNING: Removing unreachable block (ram,0x0001646f1394) */
/* WARNING: Removing unreachable block (ram,0x0001646f139a) */
/* WARNING: Removing unreachable block (ram,0x0001646f139f) */
/* WARNING: Removing unreachable block (ram,0x0001646f1419) */
/* WARNING: Removing unreachable block (ram,0x0001646f141e) */
/* WARNING: Removing unreachable block (ram,0x00014e13b421) */
/* WARNING: Removing unreachable block (ram,0x0001646f1424) */
/* WARNING: Removing unreachable block (ram,0x0001646f14ca) */
/* WARNING: Removing unreachable block (ram,0x0001646f14d0) */
/* WARNING: Removing unreachable block (ram,0x0001646f1558) */
/* WARNING: Removing unreachable block (ram,0x0001646f155e) */
/* WARNING: Removing unreachable block (ram,0x00014e0416c9) */
/* WARNING: Removing unreachable block (ram,0x0001622b1c66) */
/* WARNING: Removing unreachable block (ram,0x0001622b1ced) */
/* WARNING: Removing unreachable block (ram,0x0001622b1cf3) */
/* WARNING: Removing unreachable block (ram,0x0001657c54e0) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f4) */
/* WARNING: Removing unreachable block (ram,0x0001657c55f9) */
/* WARNING: Removing unreachable block (ram,0x0001657c55ff) */
/* WARNING: Removing unreachable block (ram,0x00015b671f88) */
/* WARNING: Removing unreachable block (ram,0x00015b67207d) */
/* WARNING: Removing unreachable block (ram,0x00015b6720ad) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b3) */
/* WARNING: Removing unreachable block (ram,0x00015b6720b8) */
/* WARNING: Removing unreachable block (ram,0x0001629a2449) */
/* WARNING: Removing unreachable block (ram,0x0001629a24e7) */
/* WARNING: Removing unreachable block (ram,0x0001629a24ec) */
/* WARNING: Removing unreachable block (ram,0x0001629a24f2) */
/* WARNING: Removing unreachable block (ram,0x000166d19674) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e2) */
/* WARNING: Removing unreachable block (ram,0x00014e0c75e8) */
/* WARNING: Removing unreachable block (ram,0x000166d958aa) */
/* WARNING: Removing unreachable block (ram,0x000166d9594e) */
/* WARNING: Removing unreachable block (ram,0x00014dff93ba) */
/* WARNING: Removing unreachable block (ram,0x000166d95954) */
/* WARNING: Removing unreachable block (ram,0x000166d95a1d) */
/* WARNING: Removing unreachable block (ram,0x000166d95a7e) */
/* WARNING: Removing unreachable block (ram,0x000166d95a8a) */
/* WARNING: Removing unreachable block (ram,0x0001650bec6e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c768d) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7699) */
/* WARNING: Removing unreachable block (ram,0x00014e0c769e) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7729) */
/* WARNING: Removing unreachable block (ram,0x00014e0c7735) */
/* WARNING: Removing unreachable block (ram,0x00014dd51de6) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e77) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e7c) */
/* WARNING: Removing unreachable block (ram,0x00014dd51e82) */
/* WARNING: Removing unreachable block (ram,0x00014d9a200b) */
/* WARNING: Removing unreachable block (ram,0x00014d9a209d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a8) */
/* WARNING: Removing unreachable block (ram,0x00014d9a212d) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2138) */
/* WARNING: Removing unreachable block (ram,0x00014d9a213e) */
/* WARNING: Removing unreachable block (ram,0x00015b2d2b0a) */
/* WARNING: Removing unreachable block (ram,0x00014d9a20a3) */
/* WARNING: Removing unreachable block (ram,0x00014d9a2092) */
/* WARNING: Removing unreachable block (ram,0x000165c9f060) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0da) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0e0) */
/* WARNING: Removing unreachable block (ram,0x000165c9f0eb) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16a) */
/* WARNING: Removing unreachable block (ram,0x0001646f113c) */
/* WARNING: Removing unreachable block (ram,0x000161480d4d) */
/* WARNING: Removing unreachable block (ram,0x000161480dd3) */
/* WARNING: Removing unreachable block (ram,0x000161480dd8) */
/* WARNING: Removing unreachable block (ram,0x000161480dde) */
/* WARNING: Removing unreachable block (ram,0x000161480de3) */
/* WARNING: Removing unreachable block (ram,0x000165c9f16f) */
/* WARNING: Removing unreachable block (ram,0x000165c9f175) */
/* WARNING: Removing unreachable block (ram,0x000165c9f26d) */
/* WARNING: Removing unreachable block (ram,0x000165c9f278) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2f8) */
/* WARNING: Removing unreachable block (ram,0x000165c9f2fe) */
/* WARNING: Removing unreachable block (ram,0x0001625670be) */
/* WARNING: Removing unreachable block (ram,0x000162567190) */
/* WARNING: Removing unreachable block (ram,0x000165c9f273) */
/* WARNING: Removing unreachable block (ram,0x000165c9f268) */
/* WARNING: Removing unreachable block (ram,0x000162f1a0ad) */
/* WARNING: Removing unreachable block (ram,0x00014ddeb533) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6ae) */
/* WARNING: Removing unreachable block (ram,0x00014d88b6b4) */
/* WARNING: Removing unreachable block (ram,0x00016538e7ad) */
/* WARNING: Removing unreachable block (ram,0x000162d9eeaa) */
/* WARNING: Removing unreachable block (ram,0x00014d88b5fa) */

undefined8
FUN_14d88b564(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *unaff_RSI = ~(param_3 & *unaff_RSI);
  uVar1 = ~(param_6 & param_1);
  uVar3 = (param_6 | param_1) - (uVar1 | param_6 | param_1);
  lVar4 = uVar3 + uVar1;
  if (CARRY8(uVar3,uVar1)) {
    *(undefined8 *)(lVar4 + -0x10) = in_R10;
    *(undefined8 *)(lVar4 + -8) = unaff_RBX;
    *(undefined8 *)(lVar4 + -0x10) = unaff_RDI;
    *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -0x18) = unaff_R13;
    *(undefined1 **)(lVar4 + -0x20) = &LAB_162d9eee9;
    *(undefined8 *)(lVar4 + -0x28) = in_stack_00000018;
    uVar2 = FUN_162d9eeaa(in_stack_00000020,param_2,in_stack_00000018,param_4);
    return uVar2;
  }
  uVar2 = FUN_14e0c7533();
  return uVar2;
}



// FUNCTION 14d88b754 FUN_14d88b754 body=359 status=ok
// SIG undefined FUN_14d88b754(void)

/* WARNING: Removing unreachable block (ram,0x00014d88b805) */
/* WARNING: Removing unreachable block (ram,0x00014d88b7f5) */

void FUN_14d88b754(void)

{
  FUN_156b90ab9();
  return;
}



// FUNCTION 14d88b9c5 FUN_14d88b9c5 body=158 status=ok
// SIG undefined FUN_14d88b9c5(void)

/* WARNING: Removing unreachable block (ram,0x00014d88ba64) */

void FUN_14d88b9c5(void)

{
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  if (((unaff_R14 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RSI + -0x60)) &
      (~*(ulonglong *)(unaff_RSI + -0x60) | unaff_R14)) != 0) {
    FUN_15758feff();
    return;
  }
  FUN_15758feff();
  return;
}



// FUNCTION 14d88ba64 FUN_14d88ba64 body=284 status=ok
// SIG undefined FUN_14d88ba64(void)

void FUN_14d88ba64(void)

{
  FUN_162cc88c4();
  return;
}



// FUNCTION 14d88bcf5 FUN_14d88bcf5 body=152 status=ok
// SIG undefined FUN_14d88bcf5(void)

void FUN_14d88bcf5(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  bool in_CF;
  undefined8 in_stack_00000008;
  ushort auStackX_10 [12];
  
  lVar2 = 0x962b04e;
  if (in_CF) {
    lVar2 = 0x962b04f;
  }
  uVar1 = *(ushort *)((longlong)auStackX_10 + (param_1 - lVar2));
  FUN_14e1d3057(in_stack_00000008,-((~(uVar1 & 0xfeff) - 0x101) - ~uVar1));
  return;
}



// FUNCTION 14d88bd8d FUN_14d88bd8d body=137 status=ok
// SIG undefined FUN_14d88bd8d(void)

void FUN_14d88bd8d(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RSI;
  
  FUN_162c68002(param_1,param_2 + unaff_RSI ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14d88becc FUN_14d88becc body=298 status=ok
// SIG undefined FUN_14d88becc(void)

/* WARNING: Removing unreachable block (ram,0x000164a3b434) */
/* WARNING: Removing unreachable block (ram,0x000164a3b43a) */
/* WARNING: Removing unreachable block (ram,0x000164a3b491) */
/* WARNING: Removing unreachable block (ram,0x000164a3b496) */
/* WARNING: Removing unreachable block (ram,0x0001624654ee) */
/* WARNING: Removing unreachable block (ram,0x00016246560f) */
/* WARNING: Removing unreachable block (ram,0x000162465614) */
/* WARNING: Removing unreachable block (ram,0x00016246561a) */
/* WARNING: Removing unreachable block (ram,0x000161520868) */
/* WARNING: Removing unreachable block (ram,0x000161520978) */
/* WARNING: Removing unreachable block (ram,0x00016152097d) */
/* WARNING: Removing unreachable block (ram,0x000161520983) */
/* WARNING: Removing unreachable block (ram,0x000165949776) */
/* WARNING: Removing unreachable block (ram,0x000164a3b261) */
/* WARNING: Removing unreachable block (ram,0x000164a3b3be) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d88becc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  longlong unaff_R12;
  
  uVar5 = ((in_RAX - 1) - ~*(ulonglong *)(unaff_R12 + -0x58)) +
          (*(ulonglong *)(unaff_R12 + -0x58) & in_RAX) * -2;
  uVar4 = *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX;
  bVar3 = (byte)uVar5 & 0x3f;
  bVar1 = (uVar5 & 0x3f) != 0;
  bVar2 = ((~(~unaff_RBX | in_RAX) << bVar3 | ~(~unaff_RBX | in_RAX) >> 0x40 - bVar3) & 1) != 0;
  if ((bVar1 && bVar2) && ((!bVar1 || !bVar2) && uVar4 != 0)) {
    return;
  }
  (*(code *)&LAB_1629b3124)(uVar5,uVar4,param_3);
  return;
}



// FUNCTION 14d88c14e FUN_14d88c14e body=315 status=ok
// SIG undefined FUN_14d88c14e(void)

undefined8
FUN_14d88c14e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16189f0ce(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14d88c2a4 FUN_14d88c2a4 body=141 status=ok
// SIG undefined FUN_14d88c2a4(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d88c2a4(void)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164f35d1f(unaff_RDI + unaff_R15 + (unaff_RDI & unaff_R15) * -2,
                (*(ulonglong *)(unaff_R13 + -0x28) - unaff_R15) +
                (~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) * -2 + -2);
  return;
}



// FUNCTION 14d88c333 FUN_14d88c333 body=151 status=ok
// SIG undefined FUN_14d88c333(void)

void FUN_14d88c333(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  
  FUN_164b7800d(param_1,uStackX_18,FUN_164b7800d,param_4);
  return;
}



// FUNCTION 14d88c56a FUN_14d88c56a body=35 status=ok
// SIG undefined FUN_14d88c56a(void)

void FUN_14d88c56a(void)

{
  return;
}



// FUNCTION 14d88c757 FUN_14d88c757 body=12 status=ok
// SIG undefined FUN_14d88c757(void)

void FUN_14d88c757(void)

{
  return;
}



// FUNCTION 14d88c7a4 FUN_14d88c7a4 body=76 status=ok
// SIG undefined FUN_14d88c7a4(void)

undefined8 FUN_14d88c7a4(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d88c82c FUN_14d88c82c body=40 status=ok
// SIG undefined FUN_14d88c82c(void)

undefined8 FUN_14d88c82c(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d88cd52 FUN_14d88cd52 body=137 status=ok
// SIG undefined FUN_14d88cd52(void)

void FUN_14d88cd52(undefined8 param_1,undefined8 param_2)

{
  FUN_1619295b8(param_1,param_2,FUN_1619295b8);
  return;
}



// FUNCTION 14d88d010 FUN_14d88d010 body=18 status=ok
// SIG undefined FUN_14d88d010(void)

void FUN_14d88d010(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 unaff_retaddr;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + ~param_3) = unaff_retaddr;
  return;
}



// FUNCTION 14d88d1e1 FUN_14d88d1e1 body=915 status=ok
// SIG undefined FUN_14d88d1e1(void)

/* WARNING: Removing unreachable block (ram,0x0001652c9b59) */
/* WARNING: Removing unreachable block (ram,0x00015b7d0476) */
/* WARNING: Removing unreachable block (ram,0x0001567ff9ea) */
/* WARNING: Removing unreachable block (ram,0x0001567ff9f0) */
/* WARNING: Removing unreachable block (ram,0x0001571c837a) */
/* WARNING: Removing unreachable block (ram,0x0001571c8410) */
/* WARNING: Removing unreachable block (ram,0x0001571c8416) */
/* WARNING: Removing unreachable block (ram,0x0001568de54d) */
/* WARNING: Removing unreachable block (ram,0x000156a19fb3) */
/* WARNING: Removing unreachable block (ram,0x000156a19fb9) */
/* WARNING: Removing unreachable block (ram,0x000156a1a05a) */
/* WARNING: Removing unreachable block (ram,0x000156a1a060) */
/* WARNING: Removing unreachable block (ram,0x0001567ff955) */
/* WARNING: Removing unreachable block (ram,0x0001567ff9e5) */
/* WARNING: Removing unreachable block (ram,0x0001568de5f1) */
/* WARNING: Removing unreachable block (ram,0x0001568de5f7) */
/* WARNING: Removing unreachable block (ram,0x00015b7d03c4) */
/* WARNING: Removing unreachable block (ram,0x00015b7d0470) */
/* WARNING: Removing unreachable block (ram,0x000166115b34) */
/* WARNING: Removing unreachable block (ram,0x00015b7d046b) */
/* WARNING: Removing unreachable block (ram,0x00015b8bce75) */
/* WARNING: Removing unreachable block (ram,0x00015b8bce7b) */
/* WARNING: Removing unreachable block (ram,0x00014d88d465) */
/* WARNING: Removing unreachable block (ram,0x00014d88d455) */
/* WARNING: Removing unreachable block (ram,0x000156a19f34) */
/* WARNING: Removing unreachable block (ram,0x000156a19fa8) */
/* WARNING: Removing unreachable block (ram,0x0001652c9b3d) */
/* WARNING: Removing unreachable block (ram,0x0001652c9b54) */
/* WARNING: Removing unreachable block (ram,0x0001652c9b5c) */
/* WARNING: Removing unreachable block (ram,0x0001652c9bdd) */
/* WARNING: Removing unreachable block (ram,0x0001652c9be2) */
/* WARNING: Removing unreachable block (ram,0x0001652c9be8) */
/* WARNING: Removing unreachable block (ram,0x0001652c9bed) */
/* WARNING: Removing unreachable block (ram,0x000165fc5e6b) */
/* WARNING: Removing unreachable block (ram,0x0001652c9cfd) */
/* WARNING: Removing unreachable block (ram,0x0001652c9d03) */
/* WARNING: Removing unreachable block (ram,0x0001620a3372) */
/* WARNING: Removing unreachable block (ram,0x0001652c9d84) */
/* WARNING: Removing unreachable block (ram,0x0001652c9d8a) */
/* WARNING: Removing unreachable block (ram,0x0001652c9d8f) */
/* WARNING: Removing unreachable block (ram,0x00014d88d316) */
/* WARNING: Removing unreachable block (ram,0x00014d88d279) */
/* WARNING: Removing unreachable block (ram,0x00014d88d310) */
/* WARNING: Removing unreachable block (ram,0x000165f294c6) */
/* WARNING: Removing unreachable block (ram,0x000165f294db) */
/* WARNING: Removing unreachable block (ram,0x000165f294e8) */
/* WARNING: Removing unreachable block (ram,0x00014d88d30b) */

undefined8 FUN_14d88d1e1(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156a19f34();
  return uVar1;
}



// FUNCTION 14d88d507 FUN_14d88d507 body=6 status=ok
// SIG undefined FUN_14d88d507(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d7a8488) overlaps instruction at (ram,0x00014d7a8486)
    */

void FUN_14d88d507(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  byte in_AL;
  undefined4 uVar4;
  byte bVar5;
  undefined7 uVar6;
  undefined8 *unaff_RBP;
  uint *unaff_RSI;
  char *unaff_RDI;
  byte bVar7;
  
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  bVar7 = 0xa7 < in_AL;
  pcVar2 = *(code **)((longlong)unaff_RSI + 10);
  *unaff_RBP = 0x14d7a846f;
  uVar4 = (*pcVar2)();
  *unaff_RDI = *unaff_RDI;
  cVar3 = ((char)uVar4 + '\x7f') - (bVar7 & 1);
  bVar7 = bVar5 & 0x1f;
  *unaff_RSI = *unaff_RSI << bVar7;
  if ((bVar7 != 0 || (POPCOUNT(cVar3) & 1U) != 0) &&
      (bVar7 == 0 || (POPCOUNT(*unaff_RSI & 0xff) & 1U) != 0)) {
    pcVar1 = (char *)(CONCAT71(uVar6,bVar5) + -0x29ff7256);
    *pcVar1 = *pcVar1 + (char)((int)uVar4 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d88d5c2 FUN_14d88d5c2 body=119 status=ok
// SIG undefined FUN_14d88d5c2(void)

/* WARNING: Removing unreachable block (ram,0x00014d88d631) */
/* WARNING: Removing unreachable block (ram,0x00014d88d637) */

undefined8 FUN_14d88d5c2(void)

{
  longlong unaff_R12;
  
  return *(undefined8 *)(unaff_R12 + -0x68);
}



// FUNCTION 14d88d63d FUN_14d88d63d body=153 status=ok
// SIG undefined FUN_14d88d63d(void)

void FUN_14d88d63d(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_164f5424a(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d88d785 FUN_14d88d785 body=439 status=ok
// SIG undefined FUN_14d88d785(void)

void FUN_14d88d785(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RDI;
  
  FUN_166df0578(param_1,~(unaff_RDI & (~param_2 | in_RAX)));
  return;
}



// FUNCTION 14d88daed FUN_14d88daed body=155 status=ok
// SIG undefined FUN_14d88daed(void)

void FUN_14d88daed(undefined8 param_1)

{
  FUN_15724d8e2(param_1,&stack0x00000000,FUN_15724d8e2);
  return;
}



// FUNCTION 14d88de72 FUN_14d88de72 body=112 status=ok
// SIG undefined FUN_14d88de72(void)

void FUN_14d88de72(void)

{
  return;
}



// FUNCTION 14d88df97 FUN_14d88df97 body=188 status=ok
// SIG undefined FUN_14d88df97(void)

/* WARNING: Instruction at (ram,0x00014d88e005) overlaps instruction at (ram,0x00014d88e003)
    */
/* WARNING: Removing unreachable block (ram,0x00014d88e031) */
/* WARNING: Removing unreachable block (ram,0x00014d88e005) */

void FUN_14d88df97(void)

{
  FUN_1621b0a16(0xffffffffffffffff,FUN_1621b0a16);
  return;
}



// FUNCTION 14d88e059 FUN_14d88e059 body=150 status=ok
// SIG undefined FUN_14d88e059(void)

void FUN_14d88e059(undefined8 param_1)

{
  longlong unaff_RDI;
  
  *(undefined4 *)(&stack0x00000000 + unaff_RDI) = 0;
  FUN_161a5ae04(param_1);
  return;
}



// FUNCTION 14d88e220 FUN_14d88e220 body=331 status=ok
// SIG undefined FUN_14d88e220(void)

/* WARNING: Removing unreachable block (ram,0x00014d88e2c1) */

void FUN_14d88e220(ulonglong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong *unaff_R14;
  
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | param_1;
  *unaff_R14 = ~(in_RAX & *unaff_R14);
  FUN_1650e5ac7(FUN_1650e5ac7,param_2);
  return;
}



// FUNCTION 14d88e353 FUN_14d88e353 body=327 status=ok
// SIG undefined FUN_14d88e353(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014d88e497) overlaps instruction at (ram,0x00014d88e494)
    */
/* WARNING: Removing unreachable block (ram,0x00014d88e427) */
/* WARNING: Removing unreachable block (ram,0x00014d88e3fe) */
/* WARNING: Removing unreachable block (ram,0x00014d88e409) */
/* WARNING: Removing unreachable block (ram,0x00014d88e42b) */
/* WARNING: Removing unreachable block (ram,0xc7482943) */
/* WARNING: Removing unreachable block (ram,0x00014d88e497) */
/* WARNING: Removing unreachable block (ram,0x00014d88e404) */

void FUN_14d88e353(void)

{
  FUN_164874a6c();
  return;
}



// FUNCTION 14d88e54c FUN_14d88e54c body=131 status=ok
// SIG undefined FUN_14d88e54c(void)

void FUN_14d88e54c(undefined8 param_1,undefined8 param_2,char param_3)

{
  FUN_162296b00(param_1,~(0xffU - param_3));
  return;
}



// FUNCTION 14d88e5db FUN_14d88e5db body=160 status=ok
// SIG undefined FUN_14d88e5db(void)

void FUN_14d88e5db(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = 0xffffffffffffffff - unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78);
  uVar1 = ~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15;
  (*(code *)0x15ba21499)(~((uVar1 - (uVar2 | uVar1)) + uVar2),0x15ba21499);
  return;
}



// FUNCTION 14d88e67d thunk_FUN_15691f249 body=5 status=ok
// SIG undefined thunk_FUN_15691f249(void)

void thunk_FUN_15691f249(void)

{
  FUN_166b343f1(FUN_166b343f1);
  return;
}



// FUNCTION 14d88e682 FUN_14d88e682 body=430 status=ok
// SIG undefined FUN_14d88e682(void)

/* WARNING: Removing unreachable block (ram,0x00014d88e6c5) */

void FUN_14d88e682(void)

{
  longlong in_R11;
  bool in_CF;
  
  if (in_CF) {
    FUN_16275a03a();
    return;
  }
  if (in_R11 != 0) {
    FUN_16275a02c();
    return;
  }
  FUN_16275a02c();
  return;
}



// FUNCTION 14d88e815 FUN_14d88e815 body=151 status=ok
// SIG undefined FUN_14d88e815(void)

void FUN_14d88e815(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b382078(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d88e9fc thunk_FUN_14d88ea02 body=5 status=ok
// SIG undefined thunk_FUN_14d88ea02(void)

/* WARNING: Removing unreachable block (ram,0x00014de76279) */
/* WARNING: Removing unreachable block (ram,0x00014de76289) */
/* WARNING: Removing unreachable block (ram,0x0001564da552) */
/* WARNING: Removing unreachable block (ram,0x0001564da55e) */
/* WARNING: Removing unreachable block (ram,0x000162429f69) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea84) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea8f) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb0) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb6) */
/* WARNING: Removing unreachable block (ram,0x0001564da4b9) */
/* WARNING: Removing unreachable block (ram,0x0001564da54d) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea8a) */

void thunk_FUN_14d88ea02(void)

{
  longlong unaff_RSI;
  
  FUN_161376f80();
  if (unaff_RSI == 0x10bf3) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x10d1c) {
    FUN_1568ba035();
    return;
  }
  FUN_1568b9ff4();
  return;
}



// FUNCTION 14d88ea02 FUN_14d88ea02 body=141 status=ok
// SIG undefined FUN_14d88ea02(void)

/* WARNING: Removing unreachable block (ram,0x00014de76279) */
/* WARNING: Removing unreachable block (ram,0x00014de76289) */
/* WARNING: Removing unreachable block (ram,0x0001564da552) */
/* WARNING: Removing unreachable block (ram,0x0001564da55e) */
/* WARNING: Removing unreachable block (ram,0x000162429f69) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea84) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea8f) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb0) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb6) */
/* WARNING: Removing unreachable block (ram,0x0001564da4b9) */
/* WARNING: Removing unreachable block (ram,0x0001564da54d) */
/* WARNING: Removing unreachable block (ram,0x00014d88ea8a) */

void FUN_14d88ea02(void)

{
  longlong unaff_RSI;
  
  FUN_161376f80();
  if (unaff_RSI == 0x10bf3) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 0x10d1c) {
    FUN_1568ba035();
    return;
  }
  FUN_1568b9ff4();
  return;
}



// FUNCTION 14d88ea8f thunk_FUN_14d88ea95 body=5 status=ok
// SIG undefined thunk_FUN_14d88ea95(void)

/* WARNING: Removing unreachable block (ram,0x0001564da552) */
/* WARNING: Removing unreachable block (ram,0x0001564da55e) */
/* WARNING: Removing unreachable block (ram,0x000162429f69) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_14d88ea95(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong lStackX_8;
  
  uVar2 = *(undefined8 *)(unaff_R13 + -8);
  uVar3 = *(undefined8 *)(unaff_R13 + -0xa0);
  FUN_165adc4d6(unaff_retaddr);
  uVar4 = *(ulonglong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = -*(longlong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = *(longlong *)(in_R10 + 0x10) + -1;
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | unaff_R15;
  *(ulonglong *)(in_R10 + 0x10) =
       ~((~*(ulonglong *)(in_R10 + 0x10) | ~unaff_R15 | uVar4) + *(longlong *)(in_R10 + 0x10) + 1);
  puVar1 = (undefined8 *)(lStackX_8 + -8);
  *puVar1 = unaff_RSI;
  *(undefined8 *)(lStackX_8 + -0x10) = *puVar1;
  *puVar1 = &DAT_162429fae;
  *(undefined8 *)(lStackX_8 + -0x10) = in_R9;
  *(undefined8 *)(lStackX_8 + -0x18) = in_R9;
  *(undefined8 *)(lStackX_8 + -0x20) = uVar2;
  *(undefined8 *)(lStackX_8 + -0x28) = uVar3;
  *(undefined8 *)(lStackX_8 + -0x30) = unaff_RDI;
  FUN_162429f69();
  return;
}



// FUNCTION 14d88ea95 FUN_14d88ea95 body=453 status=ok
// SIG undefined FUN_14d88ea95(void)

/* WARNING: Removing unreachable block (ram,0x0001564da552) */
/* WARNING: Removing unreachable block (ram,0x0001564da55e) */
/* WARNING: Removing unreachable block (ram,0x000162429f69) */
/* WARNING: Removing unreachable block (ram,0x00014d88ebb6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d88ea95(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong in_R10;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  longlong lStackX_8;
  
  uVar2 = *(undefined8 *)(unaff_R13 + -8);
  uVar3 = *(undefined8 *)(unaff_R13 + -0xa0);
  FUN_165adc4d6(unaff_retaddr);
  uVar4 = *(ulonglong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = -*(longlong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = *(longlong *)(in_R10 + 0x10) + -1;
  *(ulonglong *)(in_R10 + 0x10) = *(ulonglong *)(in_R10 + 0x10) | unaff_R15;
  *(ulonglong *)(in_R10 + 0x10) =
       ~((~*(ulonglong *)(in_R10 + 0x10) | ~unaff_R15 | uVar4) + *(longlong *)(in_R10 + 0x10) + 1);
  puVar1 = (undefined8 *)(lStackX_8 + -8);
  *puVar1 = unaff_RSI;
  *(undefined8 *)(lStackX_8 + -0x10) = *puVar1;
  *puVar1 = &DAT_162429fae;
  *(undefined8 *)(lStackX_8 + -0x10) = in_R9;
  *(undefined8 *)(lStackX_8 + -0x18) = in_R9;
  *(undefined8 *)(lStackX_8 + -0x20) = uVar2;
  *(undefined8 *)(lStackX_8 + -0x28) = uVar3;
  *(undefined8 *)(lStackX_8 + -0x30) = unaff_RDI;
  FUN_162429f69();
  return;
}



// FUNCTION 14d88ec5e FUN_14d88ec5e body=164 status=ok
// SIG undefined FUN_14d88ec5e(void)

void FUN_14d88ec5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  
  FUN_162aef9f3(param_1,FUN_162aef9f3,local_res8,param_4);
  return;
}



// FUNCTION 14d88eeef FUN_14d88eeef body=420 status=ok
// SIG undefined FUN_14d88eeef(void)

/* WARNING: Removing unreachable block (ram,0x000156f908e8) */
/* WARNING: Removing unreachable block (ram,0x000162477ee6) */
/* WARNING: Removing unreachable block (ram,0x000156f90a0a) */
/* WARNING: Removing unreachable block (ram,0x000156f90a10) */
/* WARNING: Removing unreachable block (ram,0x000156f90a15) */
/* WARNING: Removing unreachable block (ram,0x00014e1ed179) */
/* WARNING: Removing unreachable block (ram,0x00014d88ef97) */

void FUN_14d88eeef(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uStackX_18;
  
  uVar2 = (~param_1 | uStackX_18) &
          ((uStackX_18 ^ 0xffffffffffffffff) + param_1) -
          ((uStackX_18 ^ 0xffffffffffffffff) & param_1);
  uVar3 = ~uVar2;
  if (-1 < (longlong)uVar2) {
    *(undefined8 *)(uVar3 - 8) = param_4;
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 - 8);
    *(undefined8 *)(uVar3 - 0x18) = param_2;
    *(undefined8 *)(uVar3 - 0x20) = 0;
    uVar1 = *(undefined8 *)(uVar3 - 0x20);
    *(undefined8 *)(uVar3 - 0x28) = in_RAX;
    *(undefined8 *)(uVar3 - 0x30) = unaff_RBX;
    *(undefined8 *)(uVar3 - 8) = uVar1;
    *(undefined8 *)(uVar3 - 0x30) = unaff_R13;
    *(undefined8 *)(uVar3 - 0x38) = unaff_RSI;
    FUN_14e1ed179();
    return;
  }
  FUN_156f9083f();
  return;
}



// FUNCTION 14d88f1cd FUN_14d88f1cd body=688 status=ok
// SIG undefined FUN_14d88f1cd(void)

/* WARNING: Removing unreachable block (ram,0x00016130870e) */
/* WARNING: Removing unreachable block (ram,0x000161308714) */
/* WARNING: Removing unreachable block (ram,0x00014e16634e) */
/* WARNING: Removing unreachable block (ram,0x00014e166354) */
/* WARNING: Removing unreachable block (ram,0x00014e16635f) */
/* WARNING: Removing unreachable block (ram,0x000156a2f57b) */
/* WARNING: Removing unreachable block (ram,0x000156a2f570) */
/* WARNING: Removing unreachable block (ram,0x000156a2f500) */
/* WARNING: Removing unreachable block (ram,0x000162b249be) */
/* WARNING: Removing unreachable block (ram,0x00014e1661aa) */
/* WARNING: Removing unreachable block (ram,0x00014e16622d) */
/* WARNING: Removing unreachable block (ram,0x0001626ee487) */
/* WARNING: Removing unreachable block (ram,0x00014e166233) */
/* WARNING: Removing unreachable block (ram,0x00014e1662c9) */
/* WARNING: Removing unreachable block (ram,0x00014e1662cf) */
/* WARNING: Removing unreachable block (ram,0x00014d7f828a) */
/* WARNING: Removing unreachable block (ram,0x00014e1662dc) */
/* WARNING: Removing unreachable block (ram,0x00014d88f240) */

undefined8 FUN_14d88f1cd(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if ((longlong)((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x98)) + unaff_R15 + 1) < 0) {
    return in_RAX;
  }
  uVar1 = FUN_1565346f9();
  return uVar1;
}



// FUNCTION 14d88f2cb FUN_14d88f2cb body=55 status=ok
// SIG undefined FUN_14d88f2cb(void)

/* WARNING: Instruction at (ram,0x00014d88f2fc) overlaps instruction at (ram,0x00014d88f2fb)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x49f18b48) */

void FUN_14d88f2cb(void)

{
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x161d0a467)
            (*(ulonglong *)(unaff_R13 + unaff_RSI) + unaff_R15 +
             (*(ulonglong *)(unaff_R13 + unaff_RSI) & unaff_R15) * -2);
  FUN_1569b711b();
  return;
}



// FUNCTION 14d88f4a0 FUN_14d88f4a0 body=635 status=ok
// SIG undefined FUN_14d88f4a0(void)

/* WARNING: Instruction at (ram,0x000165c1516b) overlaps instruction at (ram,0x000165c1516a)
    */
/* WARNING: Removing unreachable block (ram,0x00015b5799c8) */
/* WARNING: Removing unreachable block (ram,0x0001626304f1) */
/* WARNING: Removing unreachable block (ram,0x0001626304fd) */
/* WARNING: Removing unreachable block (ram,0x0001626305b1) */
/* WARNING: Removing unreachable block (ram,0x0001626305bd) */
/* WARNING: Removing unreachable block (ram,0x000162c29567) */
/* WARNING: Removing unreachable block (ram,0x000162c2960c) */
/* WARNING: Removing unreachable block (ram,0x000162c2961e) */
/* WARNING: Removing unreachable block (ram,0x000162c29601) */
/* WARNING: Removing unreachable block (ram,0x000165c1514f) */
/* WARNING: Removing unreachable block (ram,0x000165c1516b) */
/* WARNING: Removing unreachable block (ram,0x000165c1516a) */
/* WARNING: Removing unreachable block (ram,0x00014d88f722) */
/* WARNING: Removing unreachable block (ram,0x00015b579923) */
/* WARNING: Removing unreachable block (ram,0x00014d88f5ea) */
/* WARNING: Removing unreachable block (ram,0x00014d88f711) */
/* WARNING: Removing unreachable block (ram,0x00015b473c32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14d88f4a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong in_R10;
  
  uVar4 = FUN_15b67c487(param_1);
  uVar2 = *(ulonglong *)(param_3 + -0x58);
  uVar3 = *(ulonglong *)(param_3 + -0x48);
  lVar5 = (-in_R10 - *(ulonglong *)(param_3 + -0x28)) +
          (*(ulonglong *)(param_3 + -0x28) | in_R10) * 2;
  uVar1 = *(ulonglong *)(param_3 + -0x88) ^ in_R10;
  *(undefined8 *)(uVar1 - 8) = 8;
  *(longlong *)(uVar1 - 0x10) = lVar5;
  *(longlong *)(uVar1 - 0x18) = lVar5;
  *(ulonglong *)(uVar1 - 0x20) = uVar3 ^ in_R10;
  *(undefined8 *)(uVar1 - 0x28) = uVar4;
  *(undefined4 *)(uVar1 - 0x28) = 0x2fdf11e;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  uVar4 = FUN_166221550(uVar2 ^ in_R10,FUN_166221550);
  return uVar4;
}



// FUNCTION 14d88f722 FUN_14d88f722 body=133 status=ok
// SIG undefined FUN_14d88f722(void)

void FUN_14d88f722(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_15b277d30(param_1,(~((param_1 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_RDI + -0x70)) +
                        *(ulonglong *)(unaff_RDI + -0x70)) - ~(param_1 ^ 0xffffffffffffffff),
                *(longlong *)(unaff_RDI + -0x80) + param_1);
  return;
}



// FUNCTION 14d88f843 FUN_14d88f843 body=350 status=ok
// SIG undefined FUN_14d88f843(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014d88fa67 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d88f843(void)

{
  code *pcVar1;
  ulonglong local_res8;
  
  pcVar1 = FUN_166843155;
  FUN_166843155();
  FUN_16283556a();
  FUN_165fe4d00();
  FUN_14df9e335((-(longlong)pcVar1 - (0x57b371e1 - local_res8)) +
                (~(ulonglong)pcVar1 | local_res8) * -2 + -2);
  return;
}



// FUNCTION 14d88f9a2 FUN_14d88f9a2 body=182 status=ok
// SIG undefined FUN_14d88f9a2(void)

void FUN_14d88f9a2(ulonglong param_1,undefined8 param_2)

{
  ulonglong uStackX_8;
  
  FUN_165fe4d00();
  FUN_14df9e335((-param_1 - (0x57b371e1 - uStackX_8)) + (~param_1 | uStackX_8) * -2 + -2,param_2,
                FUN_14df9e335);
  return;
}



// FUNCTION 14d88fa59 FUN_14d88fa59 body=140 status=ok
// SIG undefined FUN_14d88fa59(void)

void FUN_14d88fa59(ulonglong param_1,undefined8 param_2)

{
  ulonglong local_res8;
  ulonglong local_res18;
  
  FUN_14df9e335((-param_1 - ((local_res8 ^ 0x3553ccd3) - local_res18)) +
                (~param_1 | local_res18) * -2 + -2,param_2,FUN_14df9e335);
  return;
}



// FUNCTION 14d88fae5 thunk_FUN_14d88faeb body=5 status=ok
// SIG undefined thunk_FUN_14d88faeb(void)

void thunk_FUN_14d88faeb(void)

{
  return;
}



// FUNCTION 14d88faeb FUN_14d88faeb body=106 status=ok
// SIG undefined FUN_14d88faeb(void)

void FUN_14d88faeb(void)

{
  return;
}



// FUNCTION 14d88fb55 FUN_14d88fb55 body=132 status=ok
// SIG undefined FUN_14d88fb55(void)

void FUN_14d88fb55(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + (0x272344d - (~param_2 + 2)));
  FUN_166285364(param_1,~((~param_1 | uVar1) & (uVar1 ^ 0xffffffffffffffff | param_1)));
  FUN_14d81436a();
  return;
}



// FUNCTION 14d88fbd9 FUN_14d88fbd9 body=162 status=ok
// SIG undefined FUN_14d88fbd9(void)

void FUN_14d88fbd9(void)

{
  FUN_14d81436a();
  return;
}



// FUNCTION 14d88fe62 FUN_14d88fe62 body=173 status=ok
// SIG undefined FUN_14d88fe62(void)

void FUN_14d88fe62(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_16564b79e(param_1,param_2,local_res10);
  FUN_14d88ff11();
  return;
}



// FUNCTION 14d88ff11 FUN_14d88ff11 body=155 status=ok
// SIG undefined FUN_14d88ff11(void)

void FUN_14d88ff11(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_162b1d2b5(param_1,FUN_162b1d2b5,*(ulonglong *)(unaff_RDI + -0x30) | param_1,
                (byte)((ulonglong)param_4 >> 8) >> 3);
  return;
}



// FUNCTION 14d88ffb3 FUN_14d88ffb3 body=51 status=ok
// SIG undefined FUN_14d88ffb3(void)

void FUN_14d88ffb3(undefined8 param_1)

{
  FUN_14d85d504(param_1);
  return;
}



// FUNCTION 14d890060 FUN_14d890060 body=159 status=ok
// SIG undefined FUN_14d890060(void)

void FUN_14d890060(void)

{
  ulonglong unaff_RDI;
  longlong in_R11;
  
  *(undefined4 *)(&stack0x00000000 + in_R11 + (unaff_RDI ^ 0x5a1f581f)) = 0xe02e7c62;
  FUN_1621187ff();
  return;
}



// FUNCTION 14d890274 FUN_14d890274 body=277 status=ok
// SIG undefined FUN_14d890274(void)

/* WARNING: Removing unreachable block (ram,0x000165a742bc) */
/* WARNING: Removing unreachable block (ram,0x000165a742c8) */
/* WARNING: Removing unreachable block (ram,0x000165a743eb) */
/* WARNING: Removing unreachable block (ram,0x000165a743f4) */
/* WARNING: Removing unreachable block (ram,0x000165a74400) */
/* WARNING: Removing unreachable block (ram,0x000165a74467) */
/* WARNING: Removing unreachable block (ram,0x000164f89d52) */
/* WARNING: Removing unreachable block (ram,0x000164f89e08) */
/* WARNING: Removing unreachable block (ram,0x000164f89e0f) */
/* WARNING: Removing unreachable block (ram,0x000164f89e7a) */
/* WARNING: Removing unreachable block (ram,0x000164f89e7f) */
/* WARNING: Removing unreachable block (ram,0x000162f32dbe) */
/* WARNING: Removing unreachable block (ram,0x000165a7446c) */
/* WARNING: Removing unreachable block (ram,0x000165a744a0) */
/* WARNING: Removing unreachable block (ram,0x000165a74498) */
/* WARNING: Removing unreachable block (ram,0x0001563b779b) */
/* WARNING: Removing unreachable block (ram,0x0001563b77e6) */
/* WARNING: Removing unreachable block (ram,0x0001563b77dc) */
/* WARNING: Removing unreachable block (ram,0x0001563b77ef) */
/* WARNING: Removing unreachable block (ram,0x000165a741c7) */
/* WARNING: Removing unreachable block (ram,0x0001668c5fed) */
/* WARNING: Removing unreachable block (ram,0x0001668c5fe8) */
/* WARNING: Removing unreachable block (ram,0x0001668c5ff6) */
/* WARNING: Removing unreachable block (ram,0x00014d8902ff) */

undefined8 FUN_14d890274(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 <
      (*(ulonglong *)(unaff_RDI + -0x88) & param_1) * 2) {
    uVar1 = FUN_1668e5a7f();
    return uVar1;
  }
  uVar1 = FUN_1668e5a7f();
  return uVar1;
}



// FUNCTION 14d89038a FUN_14d89038a body=116 status=ok
// SIG undefined FUN_14d89038a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d89038a(void)

{
  FUN_14d7aa68c();
  return;
}



// FUNCTION 14d8906cb FUN_14d8906cb body=148 status=ok
// SIG undefined FUN_14d8906cb(void)

void FUN_14d8906cb(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164c1a321((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x48)) + unaff_R15,unaff_RBP | unaff_R15,
                0xffffffffffffffff - (param_3 & unaff_R15) & (unaff_RBP | unaff_R15));
  return;
}



// FUNCTION 14d890760 FUN_14d890760 body=125 status=ok
// SIG undefined FUN_14d890760(void)

void FUN_14d890760(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_R11;
  longlong lStackX_8;
  
  (*(code *)&LAB_165bf9564)
            (&LAB_165bf9564,param_2,param_3,
             *(undefined2 *)
              (&stack0x00000028 +
              (-~in_R11 -
              (lStackX_8 + ~(~(param_4 & 0xffffffff9cdb2a40) & (param_4 | 0xffffffff9cdb2a40))))));
  return;
}



// FUNCTION 14d89087b FUN_14d89087b body=284 status=ok
// SIG undefined FUN_14d89087b(void)

/* WARNING: Removing unreachable block (ram,0x00014d89091b) */

void FUN_14d89087b(undefined8 param_1)

{
  ulonglong in_RAX;
  undefined8 local_res8;
  
  if (-1 < (longlong)
           (0xffffffffffffffff - (local_res8 & in_RAX) &
           (~(local_res8 & in_RAX) + in_RAX) - ~local_res8)) {
    return;
  }
  FUN_156aa3ebd(param_1);
  return;
}



// FUNCTION 14d89099d FUN_14d89099d body=135 status=ok
// SIG undefined FUN_14d89099d(void)

void FUN_14d89099d(longlong param_1)

{
  ushort *unaff_R13;
  longlong unaff_R15;
  undefined8 local_res8;
  longlong in_stack_00000038;
  
  DAT_14d7a7eb1 = FUN_160d3baa7(-param_1,local_res8 + unaff_R15);
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | 0x100;
  *unaff_R13 = ~*unaff_R13;
  LOCK();
  UNLOCK();
  *(undefined8 *)(in_stack_00000038 + -8) = 0x249b66;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d890a25 FUN_14d890a25 body=82 status=ok
// SIG undefined FUN_14d890a25(void)

void FUN_14d890a25(void)

{
  undefined1 in_AL;
  ushort *unaff_R13;
  longlong in_stack_00000028;
  
  *unaff_R13 = ~*unaff_R13;
  *unaff_R13 = *unaff_R13 | 0x100;
  *unaff_R13 = ~*unaff_R13;
  LOCK();
  UNLOCK();
  DAT_14d7a7eb1 = in_AL;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x249b66;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14d890b98 FUN_14d890b98 body=144 status=ok
// SIG undefined FUN_14d890b98(void)

/* WARNING: Removing unreachable block (ram,0x00014d890c28) */

void FUN_14d890b98(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80) ^ 0xffffffffffffffff;
  if ((uVar1 & param_1) <= uVar1 + param_1) {
    FUN_166b800c3(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,
                  (~(~param_2 & ~in_RAX) + ~in_RAX) - param_2);
    return;
  }
  FUN_162c1c5d7();
  return;
}



// FUNCTION 14d890c28 FUN_14d890c28 body=18 status=ok
// SIG undefined FUN_14d890c28(void)

void FUN_14d890c28(void)

{
  return;
}



// FUNCTION 14d890e66 FUN_14d890e66 body=167 status=ok
// SIG undefined FUN_14d890e66(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d890e66(void)

{
  undefined8 in_stack_00000008;
  
  FUN_164b8c73b(in_stack_00000008);
  return;
}



// FUNCTION 14d8910ce FUN_14d8910ce body=159 status=ok
// SIG undefined FUN_14d8910ce(void)

void FUN_14d8910ce(undefined8 param_1)

{
  longlong unaff_R13;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  local_res20 = unaff_R13 + local_res20 * -2;
  FUN_160bdd10c(param_1,local_res18);
  return;
}



// FUNCTION 14d891174 FUN_14d891174 body=57 status=ok
// SIG undefined FUN_14d891174(void)

void FUN_14d891174(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d89122e FUN_14d89122e body=99 status=ok
// SIG undefined FUN_14d89122e(void)

void FUN_14d89122e(void)

{
  return;
}



// FUNCTION 14d891429 FUN_14d891429 body=142 status=ok
// SIG undefined FUN_14d891429(void)

void FUN_14d891429(ulonglong param_1)

{
  ulonglong unaff_RSI;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (~(unaff_RSI & unaff_R15) + unaff_R15) - ~unaff_RSI;
  (*(code *)0x14daca880)
            ((~uVar1 | ~((unaff_R15 - (param_1 | unaff_R15)) + param_1)) + uVar1 + 1,
             ~(*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
             (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14d891780 FUN_14d891780 body=150 status=ok
// SIG undefined FUN_14d891780(void)

void FUN_14d891780(void)

{
  FUN_16640fdc2();
  return;
}



// FUNCTION 14d891816 FUN_14d891816 body=625 status=ok
// SIG undefined FUN_14d891816(void)

/* WARNING: Removing unreachable block (ram,0x00016217b52d) */
/* WARNING: Removing unreachable block (ram,0x00014d8919be) */
/* WARNING: Removing unreachable block (ram,0x00014d8919c4) */
/* WARNING: Removing unreachable block (ram,0x00014d8919c9) */
/* WARNING: Removing unreachable block (ram,0x00014d891a70) */
/* WARNING: Removing unreachable block (ram,0x00014d891a75) */
/* WARNING: Removing unreachable block (ram,0x00014d891a7b) */
/* WARNING: Removing unreachable block (ram,0x00016217b497) */
/* WARNING: Removing unreachable block (ram,0x00016217b522) */
/* WARNING: Removing unreachable block (ram,0x00016217b528) */
/* WARNING: Removing unreachable block (ram,0x00016217b51d) */
/* WARNING: Removing unreachable block (ram,0x00014d891933) */
/* WARNING: Removing unreachable block (ram,0x0001568fa870) */
/* WARNING: Removing unreachable block (ram,0x00014d891928) */
/* WARNING: Removing unreachable block (ram,0x00014d89189f) */

void FUN_14d891816(undefined8 param_1)

{
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  if (-1 < (longlong)
           ((~unaff_retaddr | local_res18) & (0xffffffffffffffff - local_res18 | unaff_retaddr))) {
    FUN_162a997a1(param_1,FUN_162a997a1);
    return;
  }
  FUN_1615ae038();
  return;
}



// FUNCTION 14d891c64 FUN_14d891c64 body=142 status=ok
// SIG undefined FUN_14d891c64(void)

void FUN_14d891c64(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 unaff_RBX;
  ushort *unaff_RSI;
  short unaff_R13W;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 local_res20;
  
  *unaff_RSI = *unaff_RSI - 1;
  uVar1 = *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = (~(uVar1 & 0xffffU - unaff_R13W) + (0xffffU - unaff_R13W)) - *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  *(undefined8 *)(param_3 + 0x30) = unaff_XMM6_Qa;
  *(undefined8 *)(param_3 + 0x38) = unaff_XMM6_Qb;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x18) = 0xa1f0;
  *(undefined8 *)(local_res20 + -8) = *(undefined8 *)(local_res20 + -0x18);
  thunk_FUN_156ec1eaa(param_1);
  return;
}



// FUNCTION 14d891e5c FUN_14d891e5c body=176 status=ok
// SIG undefined FUN_14d891e5c(void)

void FUN_14d891e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166c145c5(param_1,FUN_166c145c5,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d8920d0 FUN_14d8920d0 body=134 status=ok
// SIG undefined FUN_14d8920d0(void)

void FUN_14d8920d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  ulonglong in_stack_00000018;
  
  FUN_14debec14(param_1,param_2,unaff_R15 ^ 0xffffffffffffffff | in_stack_00000018,param_4,
                in_stack_00000018 ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14d892293 FUN_14d892293 body=743 status=ok
// SIG undefined FUN_14d892293(void)

void FUN_14d892293(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x16574c8db)(param_1,0x16574c8db,param_3,param_4);
  return;
}



// FUNCTION 14d892441 FUN_14d892441 body=129 status=ok
// SIG undefined FUN_14d892441(void)

void FUN_14d892441(void)

{
  (*(code *)0x15b72ae7a)();
  return;
}



// FUNCTION 14d892701 FUN_14d892701 body=159 status=ok
// SIG undefined FUN_14d892701(void)

void FUN_14d892701(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  puVar1 = (undefined4 *)(&stack0xfffffffffafe066e + unaff_retaddr);
  *puVar1 = 0xffffffff;
  puVar1[3] = *puVar1;
  uVar2 = *(ulonglong *)
           (&stack0x06d3eb32 +
           *(longlong *)(&stack0xfffffffffafe0676 + unaff_retaddr) + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffffafe067e + unaff_retaddr) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffffafe067e + unaff_retaddr) = unaff_RDI;
  *(undefined8 *)(&stack0xfffffffffafe0676 + unaff_retaddr) = in_R11;
  *(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr) =
       (unaff_R15 - (*(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr) | unaff_R15)) +
       *(longlong *)(&stack0xfffffffffafe069e + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr) =
       ~*(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr) =
       *(ulonglong *)(&stack0xfffffffffafe069e + unaff_retaddr) & (~unaff_R15 & uVar2 | unaff_R15);
  *(undefined1 **)(&stack0xfffffffffafe067e + unaff_retaddr) = &LAB_1569ad360;
  return;
}



// FUNCTION 14d8927a1 FUN_14d8927a1 body=301 status=ok
// SIG undefined FUN_14d8927a1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015b23e0a2) */
/* WARNING: Removing unreachable block (ram,0x00015b23e0c2) */
/* WARNING: Removing unreachable block (ram,0x00015b035378) */
/* WARNING: Removing unreachable block (ram,0x00015b03537e) */
/* WARNING: Removing unreachable block (ram,0x00014d892855) */
/* WARNING: Removing unreachable block (ram,0x00014d89285b) */
/* WARNING: Removing unreachable block (ram,0x00015b035236) */
/* WARNING: Removing unreachable block (ram,0x00015b0352e0) */
/* WARNING: Removing unreachable block (ram,0x00015b0352e5) */
/* WARNING: Removing unreachable block (ram,0x000162b033d2) */
/* WARNING: Removing unreachable block (ram,0x00015b0352eb) */
/* WARNING: Removing unreachable block (ram,0x00014d7a864d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00015b035101 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8927a1(void)

{
  ulonglong in_RAX;
  longlong lVar1;
  code *pcVar2;
  ushort *puVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_retaddr;
  longlong in_stack_00000028;
  
  uVar4 = ~(unaff_retaddr & in_RAX) & (unaff_retaddr + in_RAX) - (unaff_retaddr & in_RAX);
  pcVar2 = FUN_165a04fd0;
  lVar1 = FUN_165a04fd0();
  puVar3 = (ushort *)(&stack0x00000000 + (lVar1 - unaff_RBP));
  *puVar3 = ~*puVar3;
  *puVar3 = *puVar3 | 0x100;
  *puVar3 = ~*puVar3;
  FUN_1566a3734();
  pcVar2 = pcVar2 + in_stack_00000028;
  FUN_1652ba912();
  uVar5 = CONCAT62((int6)(uVar4 >> 0x10),0xfeff);
  FUN_162d31bd4();
  uVar4 = *(ulonglong *)(pcVar2 + -0x70);
  if ((~uVar4 & ~uVar5 | uVar4) != 0xffffffffffffffff ||
      ((uVar4 | ~uVar5) + ~uVar4 + 1 | uVar5) != 0xffffffffffffffff) {
    FUN_165087bdc();
    return;
  }
  FUN_160bbcf07();
  return;
}



// FUNCTION 14d89285b FUN_14d89285b body=131 status=ok
// SIG undefined FUN_14d89285b(void)

void FUN_14d89285b(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1658d99df(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,0xffffffffffffffff,
                ~((~unaff_R15 | param_3) + unaff_R15 + 1) & (param_3 | unaff_R15));
  return;
}



// FUNCTION 14d892bd5 FUN_14d892bd5 body=129 status=ok
// SIG undefined FUN_14d892bd5(void)

void FUN_14d892bd5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong in_RAX;
  longlong unaff_R12;
  undefined4 unaff_retaddr;
  
  (*(code *)0x15b24c978)
            (*(longlong *)(unaff_R12 + CONCAT44(0xffffffff,unaff_retaddr) + 0x45cd7c07) + in_RAX,
             param_2,param_3);
  return;
}



// FUNCTION 14d892c56 FUN_14d892c56 body=138 status=ok
// SIG undefined FUN_14d892c56(void)

void FUN_14d892c56(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = param_2;
  FUN_162e0c285(param_1,0x16bc738e2);
  return;
}



// FUNCTION 14d892ce9 FUN_14d892ce9 body=166 status=ok
// SIG undefined FUN_14d892ce9(void)

/* WARNING: Removing unreachable block (ram,0x00014d892d8f) */
/* WARNING: Removing unreachable block (ram,0x000161d011f2) */

void FUN_14d892ce9(void)

{
  longlong unaff_R13;
  bool in_ZF;
  undefined8 in_stack_00000008;
  
  if (in_ZF) {
    FUN_162dc6f43(in_stack_00000008);
    return;
  }
  if (unaff_R13 == 1) {
    FUN_161d011f2();
    return;
  }
  return;
}



// FUNCTION 14d892d8f FUN_14d892d8f body=171 status=ok
// SIG undefined FUN_14d892d8f(void)

void FUN_14d892d8f(void)

{
  return;
}



// FUNCTION 14d892e3b FUN_14d892e3b body=151 status=ok
// SIG undefined FUN_14d892e3b(void)

void FUN_14d892e3b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_162d42791(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14d892ed2 FUN_14d892ed2 body=138 status=ok
// SIG undefined FUN_14d892ed2(void)

void FUN_14d892ed2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16610ae1c(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                (unaff_R15 - (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)) +
                *(ulonglong *)(unaff_R13 + -0x28),param_3,param_4);
  return;
}



// FUNCTION 14d892f5e FUN_14d892f5e body=412 status=ok
// SIG undefined FUN_14d892f5e(void)

/* WARNING: Removing unreachable block (ram,0x000162a33d9c) */
/* WARNING: Removing unreachable block (ram,0x000162a33da2) */
/* WARNING: Removing unreachable block (ram,0x000162a33dbe) */
/* WARNING: Removing unreachable block (ram,0x000162a33c9c) */
/* WARNING: Removing unreachable block (ram,0x000162a33ca2) */
/* WARNING: Removing unreachable block (ram,0x000162a33d97) */
/* WARNING: Removing unreachable block (ram,0x000161c1a0be) */
/* WARNING: Removing unreachable block (ram,0x000161c1a0c4) */
/* WARNING: Removing unreachable block (ram,0x000161c1a0c9) */
/* WARNING: Removing unreachable block (ram,0x000161c1a15b) */
/* WARNING: Removing unreachable block (ram,0x000161c1a160) */
/* WARNING: Removing unreachable block (ram,0x000161c1a166) */
/* WARNING: Removing unreachable block (ram,0x000161c1a16b) */
/* WARNING: Removing unreachable block (ram,0x0001570f2805) */
/* WARNING: Removing unreachable block (ram,0x00015746aa4e) */
/* WARNING: Removing unreachable block (ram,0x00015746ab30) */
/* WARNING: Removing unreachable block (ram,0x000162a33ae5) */
/* WARNING: Removing unreachable block (ram,0x000161503e70) */
/* WARNING: Removing unreachable block (ram,0x000162a33b5f) */
/* WARNING: Removing unreachable block (ram,0x000162a33b6a) */
/* WARNING: Removing unreachable block (ram,0x000162a33b8e) */
/* WARNING: Removing unreachable block (ram,0x000162a33b89) */
/* WARNING: Removing unreachable block (ram,0x000162a33bb0) */
/* WARNING: Removing unreachable block (ram,0x000162a33c17) */
/* WARNING: Removing unreachable block (ram,0x000161313c5f) */
/* WARNING: Removing unreachable block (ram,0x000161313c81) */
/* WARNING: Removing unreachable block (ram,0x000161313c85) */
/* WARNING: Removing unreachable block (ram,0x000162a33c12) */
/* WARNING: Removing unreachable block (ram,0x000162a33b65) */
/* WARNING: Removing unreachable block (ram,0x00014d893010) */

undefined8 FUN_14d892f5e(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong in_R10;
  
  if (-1 < (longlong)(~in_R10 | *(ulonglong *)(param_2 + -0x80))) {
    uVar1 = FUN_1572b02a6(*(ulonglong *)(param_2 + -0x48) + in_R10 +
                          ~(~*(ulonglong *)(param_2 + -0x48) | ~in_R10) * -2,param_2,
                          ~(in_RAX & param_3),FUN_1572b02a6);
    return uVar1;
  }
  uVar1 = FUN_1613e56e6();
  return uVar1;
}



// FUNCTION 14d89308d FUN_14d89308d body=177 status=ok
// SIG undefined FUN_14d89308d(void)

/* WARNING: Removing unreachable block (ram,0x00014d893125) */

void FUN_14d89308d(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res8;
  
  if (-1 < (int)((local_res8 | 0x92c6f0e0) & (~local_res8 | 0x6d390f1f))) {
    (*(code *)0x164b17324)(param_1,param_2);
    return;
  }
  thunk_FUN_14e120c8a();
  return;
}



// FUNCTION 14d8931c4 FUN_14d8931c4 body=175 status=ok
// SIG undefined FUN_14d8931c4(void)

void FUN_14d8931c4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16218cf79(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                0xffffffffffffffff - (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) &
                (*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  return;
}



// FUNCTION 14d893273 FUN_14d893273 body=154 status=ok
// SIG undefined FUN_14d893273(void)

void FUN_14d893273(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  FUN_1667a2168(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4,
                *(undefined8 *)(unaff_RDI + -0x90));
  return;
}



// FUNCTION 14d89341d FUN_14d89341d body=171 status=ok
// SIG undefined FUN_14d89341d(void)

void FUN_14d89341d(undefined8 param_1)

{
  undefined2 unaff_R15W;
  undefined6 unaff_000000ba;
  ulonglong unaff_retaddr;
  
  FUN_1664fd9b5(param_1,unaff_retaddr ^ CONCAT62(unaff_000000ba,unaff_R15W));
  return;
}



// FUNCTION 14d89357a FUN_14d89357a body=277 status=ok
// SIG undefined FUN_14d89357a(void)

void FUN_14d89357a(undefined8 param_1,undefined8 param_2)

{
  FUN_161348a08(param_1,param_2);
  (*(code *)0x16543edeb)();
  return;
}



// FUNCTION 14d8937d5 FUN_14d8937d5 body=122 status=ok
// SIG undefined FUN_14d8937d5(void)

void FUN_14d8937d5(undefined8 param_1)

{
  (*(code *)0x15b084372)(param_1);
  return;
}



// FUNCTION 14d893851 FUN_14d893851 body=161 status=ok
// SIG undefined FUN_14d893851(void)

void FUN_14d893851(void)

{
  return;
}



// FUNCTION 14d8939b1 FUN_14d8939b1 body=694 status=ok
// SIG undefined FUN_14d8939b1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001616992ab) */
/* WARNING: Removing unreachable block (ram,0x0001616992b1) */
/* WARNING: Removing unreachable block (ram,0x000161699357) */
/* WARNING: Removing unreachable block (ram,0x00016169935d) */
/* WARNING: Removing unreachable block (ram,0x00016129eea9) */
/* WARNING: Removing unreachable block (ram,0x00014d893a48) */
/* WARNING: Removing unreachable block (ram,0x00014d893a54) */
/* WARNING: Removing unreachable block (ram,0x00014d893a5f) */
/* WARNING: Removing unreachable block (ram,0x00014d893ae8) */
/* WARNING: Removing unreachable block (ram,0x00014d893b14) */
/* WARNING: Removing unreachable block (ram,0x00014d7abee7) */
/* WARNING: Removing unreachable block (ram,0x00014d893b0f) */
/* WARNING: Removing unreachable block (ram,0x00016169921f) */
/* WARNING: Removing unreachable block (ram,0x00015b03450f) */
/* WARNING: Removing unreachable block (ram,0x00015b034594) */
/* WARNING: Removing unreachable block (ram,0x00015b03459a) */
/* WARNING: Removing unreachable block (ram,0x00016605c942) */
/* WARNING: Removing unreachable block (ram,0x00014d893a64) */
/* WARNING: Removing unreachable block (ram,0x00014deaa8f6) */

void FUN_14d8939b1(void)

{
  return;
}



// FUNCTION 14d893b1a FUN_14d893b1a body=23 status=ok
// SIG undefined FUN_14d893b1a(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d893b1a(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  longlong in_RAX;
  undefined2 uVar3;
  uint uVar4;
  undefined1 *unaff_RSI;
  longlong in_FS_OFFSET;
  longlong unaff_retaddr;
  undefined8 uStackX_8;
  ulonglong in_stack_00000010;
  
  uVar3 = CONCAT11(-(unaff_retaddr != uStackX_8),(char)param_2);
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar3) + 0x6ef25ecf0);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar4 = *(uint *)(in_RAX * 2 + -0x1a11a8c0) & 0xdde4bd9e;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX + (char)((ulonglong)param_1 >> 8) + '\\');
  *puVar2 = *puVar2 & (uint)puVar2;
  out(*unaff_RSI,uVar3);
  out(0xb3f8,*(char *)((ulonglong)CONCAT22((short)(uVar4 >> 0x10),CONCAT11(0xdf,(char)uVar4)) +
                      (in_stack_00000010 & 0xff)) + -0x33);
  *(char *)(in_FS_OFFSET + 0x2900597f) = *(char *)(in_FS_OFFSET + 0x2900597f) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d893b90 FUN_14d893b90 body=170 status=ok
// SIG undefined FUN_14d893b90(void)

void FUN_14d893b90(undefined8 param_1,longlong param_2)

{
  (*(code *)&LAB_160fdc7cc)(param_1,param_2 + -0x6a0292d);
  return;
}



// FUNCTION 14d893c3c FUN_14d893c3c body=171 status=ok
// SIG undefined FUN_14d893c3c(void)

void FUN_14d893c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_1573e5f7e(FUN_1573e5f7e,unaff_retaddr,param_3);
  FUN_14d893ce9();
  return;
}



// FUNCTION 14d893ce9 FUN_14d893ce9 body=293 status=ok
// SIG undefined FUN_14d893ce9(void)

/* WARNING: Removing unreachable block (ram,0x00014d893d79) */
/* WARNING: Removing unreachable block (ram,0x00014d893d84) */
/* WARNING: Removing unreachable block (ram,0x00014d893d7f) */

void FUN_14d893ce9(void)

{
  FUN_14db0b897();
  return;
}



// FUNCTION 14d893eaf FUN_14d893eaf body=140 status=ok
// SIG undefined FUN_14d893eaf(void)

void FUN_14d893eaf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1570f5e29(param_1,param_2,param_3,FUN_1570f5e29);
  return;
}



// FUNCTION 14d894084 FUN_14d894084 body=95 status=ok
// SIG undefined FUN_14d894084(void)

void FUN_14d894084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_18;
  
  (*(code *)&LAB_16676f10a)(uStackX_18,param_2,param_3,2);
  return;
}



// FUNCTION 14d89428d FUN_14d89428d body=937 status=ok
// SIG undefined FUN_14d89428d(void)

/* WARNING: Removing unreachable block (ram,0x00014d894352) */
/* WARNING: Removing unreachable block (ram,0x000161b185d8) */
/* WARNING: Removing unreachable block (ram,0x00014d894317) */
/* WARNING: Removing unreachable block (ram,0x00014d894356) */
/* WARNING: Removing unreachable block (ram,0x00014d894441) */
/* WARNING: Removing unreachable block (ram,0x00016189db57) */
/* WARNING: Removing unreachable block (ram,0x00014d894447) */

undefined8 FUN_14d89428d(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_157407b5e(0x62,*(ulonglong *)(unaff_RDI + -0x60) + param_1,0x355bccd3,
                *(ulonglong *)(unaff_RDI + -0x60) & param_1);
  uVar1 = FUN_161dfcb81();
  return uVar1;
}



// FUNCTION 14d894577 FUN_14d894577 body=144 status=ok
// SIG undefined FUN_14d894577(void)

void FUN_14d894577(void)

{
  return;
}



// FUNCTION 14d894858 FUN_14d894858 body=151 status=ok
// SIG undefined FUN_14d894858(void)

void FUN_14d894858(void)

{
  return;
}



// FUNCTION 14d894ad1 FUN_14d894ad1 body=177 status=ok
// SIG undefined FUN_14d894ad1(void)

void FUN_14d894ad1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  short sVar1;
  ushort *puVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 local_235a [9026];
  undefined8 uStack_18;
  ushort local_10;
  uint6 uStack_e;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0xb71e4a94;
  local_10 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SCARRY8((longlong)local_235a,0x2352) * 0x800 |
             (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
             (ushort)((longlong)&local_8 < 0) * 0x80 |
             (ushort)(&local_8 == (undefined4 *)0x0) * 0x40 | (ushort)(in_AF & 1) * 0x10 |
             (ushort)((POPCOUNT((ulonglong)&local_8 & 0xff) & 1U) == 0) * 4 |
             (ushort)((undefined1 *)0xffffffffffffdcad < local_235a);
  puVar2 = &local_10;
  uStack_18 = param_3;
  sVar1 = (0x100 - (local_10 | 0x100)) + local_10;
  _local_10 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                       (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                       (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                       (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),sVar1);
  if (sVar1 == 0) {
    puVar2 = (ushort *)&local_8;
  }
  *(uint *)((longlong)puVar2 + -8) = 0x49d30356;
  local_4 = (*(uint *)((longlong)puVar2 + -8) ^ 0xca93727e) + 0x7cbf8ed7;
  *(undefined8 *)puVar2 = in_RAX;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)((longlong)puVar2 + 4) = 0;
  (*(code *)0x1570fe231)(0x1570fe231,param_2,param_3);
  return;
}



// FUNCTION 14d894bfa FUN_14d894bfa body=118 status=ok
// SIG undefined FUN_14d894bfa(void)

void FUN_14d894bfa(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_165874748(param_1,~(param_2 & unaff_R15) & (param_2 | unaff_R15),FUN_165874748);
  return;
}



// FUNCTION 14d894c70 FUN_14d894c70 body=118 status=ok
// SIG undefined FUN_14d894c70(void)

void FUN_14d894c70(void)

{
  short unaff_BX;
  ulonglong uStackX_10;
  undefined1 auStackX_18 [16];
  ulonglong in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (unaff_BX == 0) {
    (*(code *)0x1666e9350)();
    return;
  }
  in_stack_00000060 =
       (ulonglong)((uStackX_10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)SCARRY8((longlong)auStackX_18,0x48) * 0x800 |
       (ulonglong)((uStackX_10 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_10 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_10 & 0x100) != 0) * 0x100 |
       (ulonglong)((longlong)&stack0x00000060 < 0) * 0x80 |
       (ulonglong)(&stack0x00000000 == &DAT_ffffffffffffffa0) * 0x40 |
       (ulonglong)((uStackX_10 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)&stack0x00000060 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(&DAT_ffffffffffffffb7 < auStackX_18) |
       (ulonglong)((uStackX_10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_10 & 0x40000) != 0) * 0x40000;
  (*(code *)0x1629f6f93)();
  return;
}



// FUNCTION 14d894f2c FUN_14d894f2c body=128 status=ok
// SIG undefined FUN_14d894f2c(void)

void FUN_14d894f2c(undefined8 param_1)

{
  FUN_15b2af49b(param_1);
  return;
}



// FUNCTION 14d894fae FUN_14d894fae body=106 status=ok
// SIG undefined FUN_14d894fae(void)

void FUN_14d894fae(void)

{
  return;
}



// FUNCTION 14d895019 FUN_14d895019 body=517 status=ok
// SIG undefined FUN_14d895019(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d89508e) */
/* WARNING: Removing unreachable block (ram,0x00014d89509a) */
/* WARNING: Removing unreachable block (ram,0x00014d895104) */
/* WARNING: Removing unreachable block (ram,0x00014d895107) */
/* WARNING: Removing unreachable block (ram,0x00014d895174) */
/* WARNING: Removing unreachable block (ram,0x00014d895168) */
/* WARNING: Removing unreachable block (ram,0x00014d895178) */
/* WARNING: Removing unreachable block (ram,0x00014d895198) */
/* WARNING: Removing unreachable block (ram,0x00014d89519e) */
/* WARNING: Removing unreachable block (ram,0x000162293f18) */
/* WARNING: Removing unreachable block (ram,0x00014d8951b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8951b5) */

void FUN_14d895019(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164ae585b(FUN_164ae585b,param_2,param_3);
  FUN_1618402d6(0x30);
  return;
}



// FUNCTION 14d895228 FUN_14d895228 body=128 status=ok
// SIG undefined FUN_14d895228(void)

/* WARNING: Removing unreachable block (ram,0x00014d895343) */
/* WARNING: Removing unreachable block (ram,0x00014d89534f) */
/* WARNING: Removing unreachable block (ram,0x00014d89536f) */
/* WARNING: Removing unreachable block (ram,0x00014d895391) */
/* WARNING: Removing unreachable block (ram,0x00014d895369) */
/* WARNING: Removing unreachable block (ram,0x00014d895395) */
/* WARNING: Removing unreachable block (ram,0x00014d8953a8) */
/* WARNING: Removing unreachable block (ram,0x00014d8953b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8953b6) */
/* WARNING: Removing unreachable block (ram,0x000160cd43d9) */
/* WARNING: Removing unreachable block (ram,0x00014d8952ab) */

void FUN_14d895228(undefined8 param_1)

{
  ulonglong uVar1;
  byte in_AL;
  ulonglong uVar2;
  byte in_R11B;
  longlong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  if ((byte)(~(in_AL & in_R11B) + in_R11B) < (byte)~in_AL) {
    FUN_15b73487e();
    return;
  }
  uVar3 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar2 = FUN_1663a29ad();
  uVar1 = *(ulonglong *)(uVar3 - 0x60);
  (*(code *)0x15b11eb78)
            (CONCAT71((int7)((ulonglong)param_1 >> 8),0x14) ^ 0x15,uVar2 | unaff_R15,
             *(ulonglong *)(uVar3 - 0x88) & unaff_R15,(~uVar1 | ~unaff_R15) & (uVar1 | unaff_R15));
  return;
}



// FUNCTION 14d8952ab FUN_14d8952ab body=340 status=ok
// SIG undefined FUN_14d8952ab(void)

/* WARNING: Removing unreachable block (ram,0x00014d895343) */
/* WARNING: Removing unreachable block (ram,0x00014d89534f) */
/* WARNING: Removing unreachable block (ram,0x00014d89536f) */
/* WARNING: Removing unreachable block (ram,0x00014d895391) */
/* WARNING: Removing unreachable block (ram,0x00014d895369) */
/* WARNING: Removing unreachable block (ram,0x00014d895395) */
/* WARNING: Removing unreachable block (ram,0x00014d8953a8) */
/* WARNING: Removing unreachable block (ram,0x00014d8953b3) */
/* WARNING: Removing unreachable block (ram,0x00014d8953b6) */
/* WARNING: Removing unreachable block (ram,0x000160cd43d9) */

void FUN_14d8952ab(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint in_EAX;
  longlong *unaff_R15;
  
  *unaff_R15 = *param_2;
  lVar1 = *(longlong *)(*unaff_R15 + 0xbb);
  *unaff_R15 = 0;
  *unaff_R15 = *unaff_R15 + lVar1;
  unaff_R15[-1] = (longlong)unaff_R15;
  puVar2 = (ulonglong *)unaff_R15[-1];
  *puVar2 = (ulonglong)(~in_EAX + 1);
  puVar2 = puVar2 + -1;
  *(uint *)puVar2 = 0x1ce16272;
  *(uint *)puVar2 = (uint)*puVar2 + 0x2fb49bb0;
  *(uint *)puVar2 = (uint)*puVar2 ^ 0x319f3f9e;
  thunk_FUN_15b1e9f53();
  return;
}



// FUNCTION 14d8953cd FUN_14d8953cd body=17 status=ok
// SIG undefined FUN_14d8953cd(void)

undefined8 FUN_14d8953cd(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d8954f2 FUN_14d8954f2 body=134 status=ok
// SIG undefined FUN_14d8954f2(void)

void FUN_14d8954f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_RBP + 8) = param_3;
  FUN_14d82791b(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14d8955e6 FUN_14d8955e6 body=173 status=ok
// SIG undefined FUN_14d8955e6(void)

void FUN_14d8955e6(undefined8 param_1)

{
  longlong unaff_RBP;
  undefined8 local_res18;
  undefined8 uStack0000000000000028;
  
  local_res18 = CONCAT44(0xffffffff,
                         ~(~((uint)local_res18 & 0x97a7bab7) & ((uint)local_res18 | 0x97a7bab7)) +
                         0x404730d4);
  *(undefined8 *)(&stack0x47898d5c + local_res18) = 0x7cf46194;
  *(ulonglong *)(&stack0x47898d5c + local_res18) =
       *(ulonglong *)(&stack0x47898d5c + local_res18) ^ 0x7cf46194;
  *(longlong *)(&stack0x47898d5c + local_res18) =
       *(longlong *)(&stack0x47898d5c + local_res18) - unaff_RBP;
  *(longlong *)(&stack0x47898d5c + local_res18) = -*(longlong *)(&stack0x47898d5c + local_res18);
  uStack0000000000000028 = param_1;
  FUN_15698b0f5();
  return;
}



// FUNCTION 14d895903 FUN_14d895903 body=173 status=ok
// SIG undefined FUN_14d895903(void)

undefined8 FUN_14d895903(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d895a45 thunk_FUN_14d895a4b body=5 status=ok
// SIG undefined thunk_FUN_14d895a4b(void)

void thunk_FUN_14d895a4b(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~in_RAX & *(ulonglong *)(unaff_R12 + -0x28);
  (*(code *)&LAB_1668a95f3)
            ((uVar1 + in_RAX) - (uVar1 & in_RAX),&LAB_1668a95f3,param_2 + param_3 * -2);
  return;
}



// FUNCTION 14d895a4b FUN_14d895a4b body=68 status=ok
// SIG undefined FUN_14d895a4b(void)

void FUN_14d895a4b(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~in_RAX & *(ulonglong *)(unaff_R12 + -0x28);
  (*(code *)&LAB_1668a95f3)
            ((uVar1 + in_RAX) - (uVar1 & in_RAX),&LAB_1668a95f3,param_2 + param_3 * -2);
  return;
}



// FUNCTION 14d895c50 FUN_14d895c50 body=186 status=ok
// SIG undefined FUN_14d895c50(void)

/* WARNING: Removing unreachable block (ram,0x00014d895cfe) */
/* WARNING: Removing unreachable block (ram,0x00014e03f016) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d895cd4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d895c50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14e03f016();
  return uVar1;
}



// FUNCTION 14d895e3d FUN_14d895e3d body=47 status=ok
// SIG undefined FUN_14d895e3d(void)

undefined8 FUN_14d895e3d(void)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 uStackX_8;
  
  *(undefined8 *)(&stack0xfffffffff968e06b + in_RAX) = unaff_RBX;
  return uStackX_8;
}



// FUNCTION 14d896111 FUN_14d896111 body=151 status=ok
// SIG undefined FUN_14d896111(void)

/* WARNING: Removing unreachable block (ram,0x00014d8961a8) */

void FUN_14d896111(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x28);
  uVar1 = (~(~uVar1 | param_1) | 0xffffffffffffffff - uVar1 & 0xffffffffffffffff - param_1 | uVar1)
          + (~uVar1 | param_1) + 1;
  if (-1 < (longlong)uVar1) {
    (*(code *)0x16549f90e)
              (param_1,*(ulonglong *)(unaff_RDI + -0x68) + param_1 +
                       (*(ulonglong *)(unaff_RDI + -0x68) & param_1) * -2);
    return;
  }
  FUN_1572bda64(param_1,~uVar1);
  return;
}



// FUNCTION 14d8961a8 FUN_14d8961a8 body=153 status=ok
// SIG undefined FUN_14d8961a8(void)

void FUN_14d8961a8(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 >> 0x21 ^ param_1) * param_3;
  uVar1 = ~-uVar1 + 1 >> 0x1d ^ uVar1;
  uVar2 = uVar1 * 0x165667b19e3779f9;
  FUN_15b0b4771(uVar2,uVar1 * 0x165667b19e3779f9 >> 0x20 ^ uVar2,0);
  return;
}



// FUNCTION 14d896241 FUN_14d896241 body=131 status=ok
// SIG undefined FUN_14d896241(void)

void FUN_14d896241(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1627d16c9(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14d8962c5 FUN_14d8962c5 body=153 status=ok
// SIG undefined FUN_14d8962c5(void)

void FUN_14d8962c5(undefined8 param_1)

{
  FUN_165278745(param_1);
  return;
}



// FUNCTION 14d89643f FUN_14d89643f body=721 status=ok
// SIG undefined FUN_14d89643f(void)

/* WARNING: Removing unreachable block (ram,0x00014d8964eb) */
/* WARNING: Removing unreachable block (ram,0x00014d8964f6) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d89656b) */
/* WARNING: Removing unreachable block (ram,0x00014d896571) */
/* WARNING: Removing unreachable block (ram,0x00014d89657c) */
/* WARNING: Removing unreachable block (ram,0x00014d8965d3) */
/* WARNING: Removing unreachable block (ram,0x00014d896603) */
/* WARNING: Removing unreachable block (ram,0x00014d8964f1) */

undefined8
FUN_14d89643f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  puVar1 = (undefined8 *)(local_res18 + -0x18);
  *puVar1 = local_res8;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_161257978;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar2 = *puVar1;
  *puVar1 = param_4;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *puVar1 = in_R10;
  *(code **)(local_res18 + -0x10) = thunk_FUN_15b642ca5;
  return uVar2;
}



// FUNCTION 14d896732 FUN_14d896732 body=230 status=ok
// SIG undefined FUN_14d896732(void)

/* WARNING: Removing unreachable block (ram,0x00014d8967fb) */
/* WARNING: Removing unreachable block (ram,0x00014d89682b) */

undefined8 FUN_14d896732(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (*(code *)0x166280c70)
                    (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                     *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,
                     *(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                     *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14d89689a FUN_14d89689a body=168 status=ok
// SIG undefined FUN_14d89689a(void)

void FUN_14d89689a(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong in_R10;
  
  *(ulonglong *)(in_R10 + 0x10) =
       (*(longlong *)(in_R10 + 0x10) + -1) - ~(param_1 - (unaff_RDI | param_1));
  FUN_161bf944d();
  return;
}



// FUNCTION 14d8969fd FUN_14d8969fd body=67 status=ok
// SIG undefined FUN_14d8969fd(void)

void FUN_14d8969fd(void)

{
  return;
}



// FUNCTION 14d896a74 FUN_14d896a74 body=28 status=ok
// SIG undefined FUN_14d896a74(void)

void FUN_14d896a74(void)

{
  return;
}



// FUNCTION 14d896b1f FUN_14d896b1f body=80 status=ok
// SIG undefined FUN_14d896b1f(void)

void FUN_14d896b1f(void)

{
  return;
}



// FUNCTION 14d896b70 thunk_FUN_160e7b2c5 body=5 status=ok
// SIG undefined thunk_FUN_160e7b2c5(void)

void thunk_FUN_160e7b2c5(void)

{
  FUN_160e7b2c5();
  return;
}



// FUNCTION 14d896ba0 FUN_14d896ba0 body=161 status=ok
// SIG undefined FUN_14d896ba0(void)

void FUN_14d896ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1571dd71a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d896e18 FUN_14d896e18 body=269 status=ok
// SIG undefined FUN_14d896e18(void)

/* WARNING: Removing unreachable block (ram,0x00014d896eb4) */
/* WARNING: Removing unreachable block (ram,0x00014d896eba) */
/* WARNING: Removing unreachable block (ram,0x0001649047d3) */

void FUN_14d896e18(void)

{
  thunk_FUN_1649047d9();
  return;
}



// FUNCTION 14d896fbf FUN_14d896fbf body=154 status=ok
// SIG undefined FUN_14d896fbf(void)

void FUN_14d896fbf(void)

{
  return;
}



// FUNCTION 14d89705c FUN_14d89705c body=142 status=ok
// SIG undefined FUN_14d89705c(void)

void FUN_14d89705c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x50) | unaff_R15;
  FUN_166334593((~uVar1 | ~(*(ulonglong *)(unaff_R13 + -0x50) & unaff_R15)) + uVar1 + 1,param_2,
                param_3,param_4);
  return;
}



// FUNCTION 14d8970ea FUN_14d8970ea body=42 status=ok
// SIG undefined FUN_14d8970ea(void)

void FUN_14d8970ea(void)

{
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_RDI + 8) = ~(unaff_R15 & *(ulonglong *)(unaff_RDI + 8));
  return;
}



// FUNCTION 14d8971a1 FUN_14d8971a1 body=313 status=ok
// SIG undefined FUN_14d8971a1(void)

void FUN_14d8971a1(void)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  ulonglong in_R9;
  longlong unaff_R12;
  
  uVar1 = FUN_15af257d0();
  FUN_161affe4e(*(ulonglong *)(unaff_R12 + -0x58) + uVar1 +
                (*(ulonglong *)(unaff_R12 + -0x58) & uVar1) * -2,
                *(ulonglong *)(unaff_R12 + -0x78) ^ uVar1,*(ulonglong *)(unaff_R12 + -0x80) ^ uVar1,
                ~(in_R9 & uVar1) & unaff_RSI - 0x15af257d0U);
  return;
}



// FUNCTION 14d8972dc FUN_14d8972dc body=591 status=ok
// SIG undefined FUN_14d8972dc(void)

/* WARNING: Removing unreachable block (ram,0x00014de7ab21) */
/* WARNING: Removing unreachable block (ram,0x00014de7ab27) */
/* WARNING: Removing unreachable block (ram,0x00014d89737a) */
/* WARNING: Removing unreachable block (ram,0x00014d897374) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d8972dc(void)

{
  return;
}



// FUNCTION 14d8974b8 FUN_14d8974b8 body=283 status=ok
// SIG undefined FUN_14d8974b8(void)

/* WARNING: Removing unreachable block (ram,0x00014d897558) */
/* WARNING: Removing unreachable block (ram,0x00014d89755e) */

void FUN_14d8974b8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong in_R10;
  ulonglong unaff_R13;
  undefined8 uStackX_18;
  
  uVar1 = *(ulonglong *)(in_R10 + 0x10);
  lVar2 = *(longlong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) = ~*(ulonglong *)(in_R10 + 0x10);
  uVar3 = *(ulonglong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = -*(longlong *)(in_R10 + 0x10);
  *(longlong *)(in_R10 + 0x10) = *(longlong *)(in_R10 + 0x10) + -1;
  *(ulonglong *)(in_R10 + 0x10) = (~(uVar3 & param_1) + param_1) - *(longlong *)(in_R10 + 0x10);
  *(ulonglong *)(in_R10 + 0x10) =
       ~((~(unaff_R13 & uVar1) + lVar2) - ~unaff_R13) | ~*(ulonglong *)(in_R10 + 0x10);
  (*(code *)0x161dd18fa)(uStackX_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d89755e FUN_14d89755e body=67 status=ok
// SIG undefined FUN_14d89755e(void)

void FUN_14d89755e(void)

{
  return;
}



// FUNCTION 14d89792a FUN_14d89792a body=422 status=ok
// SIG undefined FUN_14d89792a(void)

/* WARNING: Removing unreachable block (ram,0x00014d8979cf) */
/* WARNING: Removing unreachable block (ram,0x00014d8979d5) */
/* WARNING: Removing unreachable block (ram,0x000160c36124) */
/* WARNING: Removing unreachable block (ram,0x000160c361bf) */
/* WARNING: Removing unreachable block (ram,0x000160c361c5) */
/* WARNING: Removing unreachable block (ram,0x000160c2d2f5) */
/* WARNING: Removing unreachable block (ram,0x000164f06212) */

void FUN_14d89792a(void)

{
  FUN_160c36124();
  return;
}



// FUNCTION 14d897b28 FUN_14d897b28 body=14 status=ok
// SIG undefined FUN_14d897b28(void)

void FUN_14d897b28(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d897c56 FUN_14d897c56 body=181 status=ok
// SIG undefined FUN_14d897c56(void)

/* WARNING: Instruction at (ram,0x00014d897cb9) overlaps instruction at (ram,0x00014d897cb6)
    */
/* WARNING: Removing unreachable block (ram,0x00014d897cac) */

ulonglong FUN_14d897c56(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + ~unaff_RBP) ^ param_1;
}



// FUNCTION 14d897e1f FUN_14d897e1f body=861 status=ok
// SIG undefined FUN_14d897e1f(void)

/* WARNING: Removing unreachable block (ram,0x00016113b4de) */
/* WARNING: Removing unreachable block (ram,0x00016113b4e4) */
/* WARNING: Removing unreachable block (ram,0x00016113b529) */
/* WARNING: Removing unreachable block (ram,0x00016113b56e) */
/* WARNING: Removing unreachable block (ram,0x00016113b579) */
/* WARNING: Removing unreachable block (ram,0x00016113b57f) */
/* WARNING: Removing unreachable block (ram,0x000164a37640) */
/* WARNING: Removing unreachable block (ram,0x000164a376b4) */
/* WARNING: Removing unreachable block (ram,0x000164a376d4) */
/* WARNING: Removing unreachable block (ram,0x0001619bb855) */
/* WARNING: Removing unreachable block (ram,0x0001619bb8df) */
/* WARNING: Removing unreachable block (ram,0x0001619bb8e1) */
/* WARNING: Removing unreachable block (ram,0x00015b6ecb03) */
/* WARNING: Removing unreachable block (ram,0x00015b6ecb09) */
/* WARNING: Removing unreachable block (ram,0x000156ed87e1) */
/* WARNING: Removing unreachable block (ram,0x000156ed8879) */
/* WARNING: Removing unreachable block (ram,0x000156ed887b) */
/* WARNING: Removing unreachable block (ram,0x000156ed88de) */
/* WARNING: Removing unreachable block (ram,0x00015b6ecb9d) */
/* WARNING: Removing unreachable block (ram,0x00015b6ecba3) */
/* WARNING: Removing unreachable block (ram,0x00015b6ecba8) */
/* WARNING: Removing unreachable block (ram,0x000156ed88e3) */
/* WARNING: Removing unreachable block (ram,0x000156ed88e9) */
/* WARNING: Removing unreachable block (ram,0x00016504654e) */
/* WARNING: Removing unreachable block (ram,0x000165046609) */
/* WARNING: Removing unreachable block (ram,0x00016504660f) */
/* WARNING: Removing unreachable block (ram,0x000165046604) */
/* WARNING: Removing unreachable block (ram,0x0001568c07fd) */
/* WARNING: Removing unreachable block (ram,0x00014d897f8f) */
/* WARNING: Removing unreachable block (ram,0x00014d897f95) */
/* WARNING: Removing unreachable block (ram,0x00014d89802e) */
/* WARNING: Removing unreachable block (ram,0x00014d898034) */
/* WARNING: Removing unreachable block (ram,0x00016113b3b1) */
/* WARNING: Removing unreachable block (ram,0x00015b81cfb5) */
/* WARNING: Removing unreachable block (ram,0x00016113b5d6) */
/* WARNING: Removing unreachable block (ram,0x00016113b5d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d897e1f(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong unaff_RSI;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R12;
  undefined8 uVar8;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar6 = ~(~(param_3 & 0xfffffffff804269c) & (unaff_RSI | 0xfffffffff804269c));
  uVar4 = ~(uVar6 & 0xfffffffff7404f19) & (uVar6 | 0xfffffffff7404f19) ^ 0xffffffffffffffff;
  puVar5 = *(undefined8 **)(param_4 + uVar4);
  uVar8 = 0xfffffffffffffff8;
  uVar6 = FUN_156af0344(0xfffffffffffffff8,puVar5,0xffed0a8,*(undefined8 *)*puVar5);
  uVar3 = (ushort)uVar8;
  local_10 = CONCAT62((int6)((ulonglong)uVar8 >> 0x10),
                      ~(~(uVar3 & 0xfa4c) & (~(uVar3 & 0xfa4c) - 0x5b4) - (uVar3 ^ 0xffff)));
  uVar7 = ~(*(ulonglong *)(unaff_R12 + -0x60) & uVar6) & (*(ulonglong *)(unaff_R12 + -0x60) | uVar6)
  ;
  FUN_15b2d1e98(local_10,(longlong)puVar5 + 1,*(ulonglong *)(unaff_R12 + -0x80) & uVar6,
                ~(*(ulonglong *)(unaff_R12 + -0x30) & uVar6) &
                (*(ulonglong *)(unaff_R12 + -0x30) | uVar6));
  local_10 = local_10 & 0xffffffff;
  lVar2 = uVar7 - local_10;
  puVar1 = (ulonglong *)((longlong)&local_8 + lVar2);
  *(undefined4 *)puVar1 = 0xb85a4d9b;
  *(int *)(&stack0x00000004 + lVar2) = (int)*puVar1;
  uVar8 = *(undefined8 *)(&stack0x00000000 + lVar2);
  *(undefined8 *)(&stack0x00000000 + lVar2) = *(undefined8 *)(unaff_R12 + -0x70);
  *(undefined8 *)(&stack0x00000000 + lVar2) = uVar8;
  *puVar1 = uVar4;
  FUN_1619bb855();
  return;
}



// FUNCTION 14d897f95 FUN_14d897f95 body=796 status=ok
// SIG undefined FUN_14d897f95(void)

/* WARNING: Removing unreachable block (ram,0x00016113b4de) */
/* WARNING: Removing unreachable block (ram,0x00016113b4e4) */
/* WARNING: Removing unreachable block (ram,0x00016113b529) */
/* WARNING: Removing unreachable block (ram,0x00016113b56e) */
/* WARNING: Removing unreachable block (ram,0x00016113b579) */
/* WARNING: Removing unreachable block (ram,0x00016113b57f) */
/* WARNING: Removing unreachable block (ram,0x000164a37640) */
/* WARNING: Removing unreachable block (ram,0x000164a376b4) */
/* WARNING: Removing unreachable block (ram,0x000164a376d4) */
/* WARNING: Removing unreachable block (ram,0x00016113b5d6) */
/* WARNING: Removing unreachable block (ram,0x00016113b5d9) */
/* WARNING: Removing unreachable block (ram,0x00014d898034) */

void FUN_14d897f95(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong unaff_R12;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar3 = *(ulonglong *)(unaff_R12 + -0x90) ^ in_RAX;
  uVar1 = *(ulonglong *)(unaff_R12 + -8);
  uVar4 = *(ulonglong *)(unaff_R12 + -0x68) | in_RAX;
  FUN_1563f7cd7(param_1,param_2,param_3);
  uVar2 = *(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = ~*(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = ~*(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = *(ulonglong *)(uVar4 + 8) & ~param_1;
  *(ulonglong *)(uVar4 + 8) = ~*(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = ~((~param_1 | uVar2) & *(ulonglong *)(uVar4 + 8));
  *(ulonglong *)((local_res8 ^ param_1) - 8) = uVar3;
  *(ulonglong *)((local_res8 ^ param_1) - 0x10) = uVar3;
  FUN_166c18a10(uVar1 ^ in_RAX);
  return;
}



// FUNCTION 14d89814c FUN_14d89814c body=10 status=ok
// SIG undefined FUN_14d89814c(void)

void FUN_14d89814c(void)

{
  return;
}



// FUNCTION 14d8982e7 FUN_14d8982e7 body=127 status=ok
// SIG undefined FUN_14d8982e7(void)

/* WARNING: Removing unreachable block (ram,0x00014d898337) */

void FUN_14d8982e7(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161401d52(param_2,*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d898369 FUN_14d898369 body=154 status=ok
// SIG undefined FUN_14d898369(void)

void FUN_14d898369(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b1d8346(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d8985d8 FUN_14d8985d8 body=605 status=ok
// SIG undefined FUN_14d8985d8(void)

/* WARNING: Removing unreachable block (ram,0x00014d898675) */
/* WARNING: Removing unreachable block (ram,0x00014d89867b) */
/* WARNING: Removing unreachable block (ram,0x00014d8987a7) */
/* WARNING: Removing unreachable block (ram,0x00014d8987b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8987ad) */
/* WARNING: Removing unreachable block (ram,0x00014d8987a2) */
/* WARNING: Removing unreachable block (ram,0x000161a478b2) */
/* WARNING: Removing unreachable block (ram,0x00014d8987f1) */
/* WARNING: Removing unreachable block (ram,0x00014d8987f5) */

undefined8 FUN_14d8985d8(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d89891a FUN_14d89891a body=157 status=ok
// SIG undefined FUN_14d89891a(void)

void FUN_14d89891a(void)

{
  (*(code *)&LAB_165f747b9)();
  return;
}



// FUNCTION 14d898acf FUN_14d898acf body=22 status=ok
// SIG undefined FUN_14d898acf(void)

void FUN_14d898acf(void)

{
  return;
}



// FUNCTION 14d898ae5 FUN_14d898ae5 body=580 status=ok
// SIG undefined FUN_14d898ae5(void)

/* WARNING: Instruction at (ram,0x00014d998e8f) overlaps instruction at (ram,0x00014d998e8d)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d898ae5(void)

{
  longlong lVar1;
  longlong in_R9;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  if (in_R9 == 0x120ee2) {
    return;
  }
  if (in_R9 == 0x120ee3) {
    FUN_14d998d01();
    return;
  }
  if (in_R9 != 0x120ee4) {
    FUN_14d8fe32b();
    *(ulonglong *)(&stack0xfffffffffffffff8 + unaff_R12) =
         unaff_R14 + unaff_R15 + (unaff_R14 & unaff_R15) * -2;
    *(undefined8 *)(&stack0xfffffffffffffff8 + unaff_R12) = 0x14d998e23;
    FUN_160d3519f();
    *(undefined8 *)(&stack0xfffffffffffffff8 + unaff_R12) = 0x21e139ba;
    *(longlong *)(&stack0xfffffffffffffff8 + unaff_R12) =
         *(longlong *)(&stack0xfffffffffffffff8 + unaff_R12) + 0x49d77a41;
    *(undefined4 *)(&stack0xfffffffffffffff0 + unaff_R12) = 0xc1791e72;
    *(undefined4 *)(&stack0xfffffffffffffff4 + unaff_R12) = 0xffffffff;
    lVar1 = *(longlong *)
             (unaff_R13 + *(longlong *)(&stack0xfffffffffffffff0 + unaff_R12) + 0x3e86e116);
    *(undefined8 *)(&stack0xfffffffffffffff8 + unaff_R12) = 0;
    *(longlong *)(&stack0xfffffffffffffff8 + unaff_R12) =
         *(longlong *)(&stack0xfffffffffffffff8 + unaff_R12) + lVar1;
    (*(code *)0x15b3c0ec8)
              (*(ulonglong *)(&stack0xfffffffffffffff8 + unaff_R12) ^ unaff_R15,
               *(undefined8 *)(&stack0xfffffffffffffff8 + unaff_R12));
    return;
  }
  return;
}



// FUNCTION 14d898b6b FUN_14d898b6b body=95 status=ok
// SIG undefined FUN_14d898b6b(void)

undefined8 FUN_14d898b6b(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d898c31 FUN_14d898c31 body=127 status=ok
// SIG undefined FUN_14d898c31(void)

void FUN_14d898c31(byte param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  short *unaff_RBP;
  short in_R10W;
  undefined8 in_R11;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  ulonglong uStackX_20;
  longlong in_stack_00000028;
  
  *unaff_RBP = in_R10W + -0x100;
  LOCK();
  bVar4 = in_AL < DAT_14d7c01f3;
  bVar5 = SBORROW1(in_AL,DAT_14d7c01f3);
  cVar2 = in_AL - DAT_14d7c01f3;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7c01f3;
  }
  DAT_14d7c01f3 = bVar3;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = in_R11;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_R11;
  *(undefined4 *)(in_stack_00000028 + -0x18) = 0x120b03f1;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uStackX_10;
  *(ulonglong *)(in_stack_00000028 + -0x28) =
       (ulonglong)((uStackX_20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_20 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_20 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_20 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_20 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(in_stack_00000028 + -0x14) = 0;
  uVar6 = *(ulonglong *)(in_stack_00000028 + -0x28);
  lVar1 = *(longlong *)(in_stack_00000028 + -0x18);
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(in_stack_00000028 + -0x20) = uStackX_8;
  *(longlong *)(in_stack_00000028 + -8) = lVar1 + -0xf78fd55;
  FUN_14d85d504();
  return;
}



// FUNCTION 14d898cc9 FUN_14d898cc9 body=161 status=ok
// SIG undefined FUN_14d898cc9(void)

/* WARNING: Removing unreachable block (ram,0x00014d898e03) */
/* WARNING: Removing unreachable block (ram,0x00014d898e09) */
/* WARNING: Removing unreachable block (ram,0x00014d898e14) */
/* WARNING: Removing unreachable block (ram,0x00014d898ead) */
/* WARNING: Removing unreachable block (ram,0x00014d898eb2) */
/* WARNING: Removing unreachable block (ram,0x00014d898eb8) */
/* WARNING: Removing unreachable block (ram,0x00014d898ebd) */
/* WARNING: Removing unreachable block (ram,0x0001657919a4) */
/* WARNING: Removing unreachable block (ram,0x00014d898f3d) */
/* WARNING: Removing unreachable block (ram,0x00014d898f43) */
/* WARNING: Removing unreachable block (ram,0x00014d898d70) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d898cc9(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  char in_stack_00000028;
  
  uVar1 = -(unaff_retaddr - *(longlong *)(unaff_RDI + -0x68));
  uVar1 = ~(uVar1 & param_1) & (uVar1 | param_1);
  if (-1 < in_stack_00000028) {
    FUN_14d83d0dc(param_1,uVar1);
    return;
  }
  FUN_14d83d0dc(param_1,uVar1);
  return;
}



// FUNCTION 14d898d70 FUN_14d898d70 body=158 status=ok
// SIG undefined FUN_14d898d70(void)

/* WARNING: Removing unreachable block (ram,0x00014d898e03) */
/* WARNING: Removing unreachable block (ram,0x00014d898e09) */
/* WARNING: Removing unreachable block (ram,0x00014d898e14) */
/* WARNING: Removing unreachable block (ram,0x00014d898ead) */
/* WARNING: Removing unreachable block (ram,0x00014d898eb2) */
/* WARNING: Removing unreachable block (ram,0x00014d898eb8) */
/* WARNING: Removing unreachable block (ram,0x00014d898ebd) */
/* WARNING: Removing unreachable block (ram,0x0001657919a4) */
/* WARNING: Removing unreachable block (ram,0x00014d898f3d) */
/* WARNING: Removing unreachable block (ram,0x00014d898f43) */

void FUN_14d898d70(void)

{
  FUN_162607491();
  return;
}



// FUNCTION 14d898e14 FUN_14d898e14 body=435 status=ok
// SIG undefined FUN_14d898e14(void)

/* WARNING: Removing unreachable block (ram,0x00014d898f3d) */
/* WARNING: Removing unreachable block (ram,0x00014d898f43) */
/* WARNING: Removing unreachable block (ram,0x00014d898ebd) */

void FUN_14d898e14(void)

{
  ulonglong in_RAX;
  ulonglong in_stack_00000028;
  
  if (-1 < (longlong)(in_stack_00000028 ^ in_RAX)) {
    FUN_16475eef7();
    return;
  }
  FUN_16475eef7();
  return;
}



// FUNCTION 14d899111 FUN_14d899111 body=25 status=ok
// SIG undefined FUN_14d899111(void)

void FUN_14d899111(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d899124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14d89925d FUN_14d89925d body=164 status=ok
// SIG undefined FUN_14d89925d(void)

void FUN_14d89925d(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  undefined8 local_res8;
  
  uVar1 = ~in_RAX | *(ulonglong *)(unaff_R12 + -0x80);
  uVar2 = ~*(ulonglong *)(unaff_R12 + -0x80) | in_RAX;
  FUN_156a39b4c(local_res8,0xffffffffffffffd8,~((uVar2 - (uVar1 | uVar2)) + uVar1),
                *(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14d899301 FUN_14d899301 body=128 status=ok
// SIG undefined FUN_14d899301(void)

/* WARNING: Removing unreachable block (ram,0x00014d899418) */
/* WARNING: Removing unreachable block (ram,0x00014d899424) */
/* WARNING: Removing unreachable block (ram,0x00014d89937c) */
/* WARNING: Removing unreachable block (ram,0x0001646fe5f5) */
/* WARNING: Removing unreachable block (ram,0x00014d899382) */

void FUN_14d899301(void)

{
  FUN_1646fe5f5();
  return;
}



// FUNCTION 14d899382 FUN_14d899382 body=411 status=ok
// SIG undefined FUN_14d899382(void)

/* WARNING: Removing unreachable block (ram,0x00014d899418) */
/* WARNING: Removing unreachable block (ram,0x00014d899424) */

void FUN_14d899382(void)

{
  return;
}



// FUNCTION 14d8994ae FUN_14d8994ae body=183 status=ok
// SIG undefined FUN_14d8994ae(void)

/* WARNING: Removing unreachable block (ram,0x00014d89969f) */
/* WARNING: Removing unreachable block (ram,0x00014d899699) */
/* WARNING: Removing unreachable block (ram,0x00014d8996a4) */
/* WARNING: Removing unreachable block (ram,0x00014d899707) */
/* WARNING: Removing unreachable block (ram,0x00014d89970f) */
/* WARNING: Removing unreachable block (ram,0x00014d899730) */
/* WARNING: Removing unreachable block (ram,0x00014d899736) */
/* WARNING: Removing unreachable block (ram,0x00014d89973b) */
/* WARNING: Removing unreachable block (ram,0x00015b69a129) */
/* WARNING: Removing unreachable block (ram,0x00015b69a19c) */
/* WARNING: Removing unreachable block (ram,0x00015b69a1a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8995fb) */
/* WARNING: Removing unreachable block (ram,0x00014d899601) */
/* WARNING: Removing unreachable block (ram,0x000166991c5e) */
/* WARNING: Removing unreachable block (ram,0x000166991cfa) */
/* WARNING: Removing unreachable block (ram,0x000166991d06) */
/* WARNING: Removing unreachable block (ram,0x000166954f95) */
/* WARNING: Removing unreachable block (ram,0x000166954fa2) */
/* WARNING: Removing unreachable block (ram,0x000166954faf) */
/* WARNING: Removing unreachable block (ram,0x000166991d9a) */
/* WARNING: Removing unreachable block (ram,0x000166991da0) */
/* WARNING: Removing unreachable block (ram,0x000166991da5) */
/* WARNING: Removing unreachable block (ram,0x000166991cf5) */
/* WARNING: Removing unreachable block (ram,0x000165e5e04a) */
/* WARNING: Removing unreachable block (ram,0x000165e5e115) */
/* WARNING: Removing unreachable block (ram,0x000165e5e110) */
/* WARNING: Removing unreachable block (ram,0x000165e5e162) */
/* WARNING: Removing unreachable block (ram,0x000165e5e1ac) */
/* WARNING: Removing unreachable block (ram,0x000165e5e167) */
/* WARNING: Removing unreachable block (ram,0x000162ee2f08) */
/* WARNING: Removing unreachable block (ram,0x00014d899566) */

undefined8 FUN_14d8994ae(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15;
  if (-1 < (longlong)(unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x28))) {
    uVar1 = FUN_1616260bc(uVar2);
    return uVar1;
  }
  uVar1 = FUN_1616260bc(uVar2);
  return uVar1;
}



// FUNCTION 14d899566 FUN_14d899566 body=464 status=ok
// SIG undefined FUN_14d899566(void)

/* WARNING: Removing unreachable block (ram,0x00014d89969f) */
/* WARNING: Removing unreachable block (ram,0x00014d899699) */
/* WARNING: Removing unreachable block (ram,0x00014d8996a4) */
/* WARNING: Removing unreachable block (ram,0x00014d899707) */
/* WARNING: Removing unreachable block (ram,0x00014d89970f) */
/* WARNING: Removing unreachable block (ram,0x00014d899730) */
/* WARNING: Removing unreachable block (ram,0x00014d899736) */
/* WARNING: Removing unreachable block (ram,0x00014d89973b) */
/* WARNING: Removing unreachable block (ram,0x00015b69a129) */
/* WARNING: Removing unreachable block (ram,0x00015b69a19c) */
/* WARNING: Removing unreachable block (ram,0x00015b69a1a0) */
/* WARNING: Removing unreachable block (ram,0x00014d8995fb) */
/* WARNING: Removing unreachable block (ram,0x00014d899601) */
/* WARNING: Removing unreachable block (ram,0x000166991c5e) */
/* WARNING: Removing unreachable block (ram,0x000166991cfa) */
/* WARNING: Removing unreachable block (ram,0x000166991d06) */
/* WARNING: Removing unreachable block (ram,0x000166954f95) */
/* WARNING: Removing unreachable block (ram,0x000166954fa2) */
/* WARNING: Removing unreachable block (ram,0x000166954faf) */
/* WARNING: Removing unreachable block (ram,0x000166991d9a) */
/* WARNING: Removing unreachable block (ram,0x000166991da0) */
/* WARNING: Removing unreachable block (ram,0x000166991da5) */
/* WARNING: Removing unreachable block (ram,0x000166991cf5) */
/* WARNING: Removing unreachable block (ram,0x000165e5e04a) */
/* WARNING: Removing unreachable block (ram,0x000165e5e115) */
/* WARNING: Removing unreachable block (ram,0x000165e5e110) */
/* WARNING: Removing unreachable block (ram,0x000165e5e162) */
/* WARNING: Removing unreachable block (ram,0x000165e5e1ac) */
/* WARNING: Removing unreachable block (ram,0x000165e5e167) */
/* WARNING: Removing unreachable block (ram,0x000162ee2f08) */

undefined8 FUN_14d899566(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  longlong local_res10;
  
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = unaff_R14;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R15;
  *puVar1 = &LAB_162ee2f1d;
  uVar2 = FUN_162ee2f08();
  return uVar2;
}



// FUNCTION 14d89973b FUN_14d89973b body=22 status=ok
// SIG undefined FUN_14d89973b(void)

void FUN_14d89973b(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d89974f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d8997d9 FUN_14d8997d9 body=160 status=ok
// SIG undefined FUN_14d8997d9(void)

undefined8 FUN_14d8997d9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d899930 FUN_14d899930 body=254 status=ok
// SIG undefined FUN_14d899930(void)

/* WARNING: Removing unreachable block (ram,0x00014d899a2a) */
/* WARNING: Removing unreachable block (ram,0x00014d899a30) */
/* WARNING: Removing unreachable block (ram,0x00014d899ac3) */
/* WARNING: Removing unreachable block (ram,0x00014d899ac8) */
/* WARNING: Removing unreachable block (ram,0x00014d899ad4) */
/* WARNING: Removing unreachable block (ram,0x00015b4bb6e9) */
/* WARNING: Removing unreachable block (ram,0x000166c13fab) */
/* WARNING: Removing unreachable block (ram,0x000166c13fe5) */
/* WARNING: Removing unreachable block (ram,0x000166c13fff) */
/* WARNING: Removing unreachable block (ram,0x000166c13ff8) */

undefined8 FUN_14d899930(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_14d90ff3d(param_1,param_2,*(longlong *)(unaff_RDI + -0x30) + param_1);
  uVar1 = FUN_16668b44f();
  return uVar1;
}



// FUNCTION 14d899a30 FUN_14d899a30 body=293 status=ok
// SIG undefined FUN_14d899a30(void)

/* WARNING: Removing unreachable block (ram,0x00014d899ad4) */
/* WARNING: Removing unreachable block (ram,0x00014d899ac3) */

void FUN_14d899a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  
  FUN_1573e6635(param_1,param_2,param_3,local_res8);
  return;
}



// FUNCTION 14d89a079 FUN_14d89a079 body=134 status=ok
// SIG undefined FUN_14d89a079(void)

/* WARNING: Instruction at (ram,0x00015b0602eb) overlaps instruction at (ram,0x00015b0602ea)
    */
/* WARNING: Removing unreachable block (ram,0x00015720e51e) */
/* WARNING: Removing unreachable block (ram,0x00015720e529) */
/* WARNING: Removing unreachable block (ram,0x00014d89a1a0) */
/* WARNING: Removing unreachable block (ram,0x00014d89a1a6) */
/* WARNING: Removing unreachable block (ram,0x00015b06007f) */
/* WARNING: Removing unreachable block (ram,0x00015b06011f) */
/* WARNING: Removing unreachable block (ram,0x00015b060125) */
/* WARNING: Removing unreachable block (ram,0x00015b06012a) */
/* WARNING: Removing unreachable block (ram,0x00014dc79aad) */
/* WARNING: Removing unreachable block (ram,0x00015b0601be) */
/* WARNING: Removing unreachable block (ram,0x00015b0601c4) */
/* WARNING: Removing unreachable block (ram,0x00015b0601cf) */
/* WARNING: Removing unreachable block (ram,0x00015b0602eb) */
/* WARNING: Removing unreachable block (ram,0x00015b0602ea) */
/* WARNING: Removing unreachable block (ram,0x00015b0602f2) */
/* WARNING: Removing unreachable block (ram,0x00015b0602f8) */
/* WARNING: Removing unreachable block (ram,0x00015b0602fe) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1ee6) */
/* WARNING: Removing unreachable block (ram,0x00015650feba) */
/* WARNING: Removing unreachable block (ram,0x00015720e3e2) */
/* WARNING: Removing unreachable block (ram,0x00015720e3e8) */
/* WARNING: Removing unreachable block (ram,0x00016297512b) */
/* WARNING: Removing unreachable block (ram,0x00015720e524) */
/* WARNING: Removing unreachable block (ram,0x00015720e35d) */
/* WARNING: Removing unreachable block (ram,0x0001619e122b) */
/* WARNING: Removing unreachable block (ram,0x0001619e12b2) */
/* WARNING: Removing unreachable block (ram,0x0001619e12ad) */
/* WARNING: Removing unreachable block (ram,0x000160b63e2f) */
/* WARNING: Removing unreachable block (ram,0x000160b63e35) */
/* WARNING: Removing unreachable block (ram,0x00014d89a100) */
/* WARNING: Removing unreachable block (ram,0x00014d89a165) */
/* WARNING: Removing unreachable block (ram,0x00014d89a160) */
/* WARNING: Removing unreachable block (ram,0x00014d89a172) */

undefined8 FUN_14d89a079(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = ~(~*(ulonglong *)(unaff_RSI + -0x50) | unaff_RBP);
  uVar3 = *(ulonglong *)(unaff_RSI + -0x30) ^ 0xffffffffffffffff;
  uVar3 = (0xffffffffffffffff - unaff_RBP | *(ulonglong *)(unaff_RSI + -0x30)) &
          (~(uVar3 & unaff_RBP) + unaff_RBP) - ~uVar3;
  if (-1 < (longlong)uVar3) {
    uVar1 = FUN_15720e2c4();
    return uVar1;
  }
  uVar3 = ~uVar3;
  if (unaff_RSI - 0x1269U < 0xffffffffffffedbf) {
    uVar1 = FUN_1654fc400(0x44ec0afa,uVar3,uVar2,*(undefined8 *)(unaff_RSI + -0x28));
    return uVar1;
  }
  uVar1 = FUN_1654fc400(0x44ec0afa,uVar3,uVar2,*(undefined8 *)(unaff_RSI + -0x28));
  return uVar1;
}



// FUNCTION 14d89a100 FUN_14d89a100 body=168 status=ok
// SIG undefined FUN_14d89a100(void)

/* WARNING: Instruction at (ram,0x00015b0602eb) overlaps instruction at (ram,0x00015b0602ea)
    */
/* WARNING: Removing unreachable block (ram,0x00014d89a1a0) */
/* WARNING: Removing unreachable block (ram,0x00014d89a1a6) */
/* WARNING: Removing unreachable block (ram,0x00015b06007f) */
/* WARNING: Removing unreachable block (ram,0x00015650feba) */
/* WARNING: Removing unreachable block (ram,0x00015b06011f) */
/* WARNING: Removing unreachable block (ram,0x00015b060125) */
/* WARNING: Removing unreachable block (ram,0x00015b06012a) */
/* WARNING: Removing unreachable block (ram,0x00014dc79aad) */
/* WARNING: Removing unreachable block (ram,0x00015b0601be) */
/* WARNING: Removing unreachable block (ram,0x00015b0601c4) */
/* WARNING: Removing unreachable block (ram,0x00015b0601cf) */
/* WARNING: Removing unreachable block (ram,0x00015b0602eb) */
/* WARNING: Removing unreachable block (ram,0x00015b0602ea) */
/* WARNING: Removing unreachable block (ram,0x00015b0602f2) */
/* WARNING: Removing unreachable block (ram,0x00015b0602f8) */
/* WARNING: Removing unreachable block (ram,0x00015b0602fe) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1ee6) */

undefined8 FUN_14d89a100(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  
  *(ulonglong *)(unaff_RBP + 0x10) =
       ~((~*(ulonglong *)(unaff_RBP + 0x10) | param_2) + *(longlong *)(unaff_RBP + 0x10) + 1);
  uVar1 = FUN_15b06007f();
  return uVar1;
}



// FUNCTION 14d89a1ac FUN_14d89a1ac body=193 status=ok
// SIG undefined FUN_14d89a1ac(void)

/* WARNING: Removing unreachable block (ram,0x00014d89a245) */

void FUN_14d89a1ac(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  
  uVar1 = (~(~unaff_R15 & *(ulonglong *)(param_2 + 8)) + *(longlong *)(param_2 + 8)) - unaff_R15;
  *(ulonglong *)(param_2 + 8) = ~*(ulonglong *)(param_2 + 8);
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | unaff_R15;
  *(ulonglong *)(param_2 + 8) =
       (*(longlong *)(param_2 + 8) - (uVar1 | *(ulonglong *)(param_2 + 8))) + uVar1 ^
       0xffffffffffffffff;
  if (-1 < (longlong)((~unaff_R15 | local_res20) & (~local_res20 | unaff_R15))) {
    FUN_15b1a7c42(param_1,in_stack_00000008);
    return;
  }
  FUN_15b1a7c42(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14d89a2d1 FUN_14d89a2d1 body=716 status=ok
// SIG undefined FUN_14d89a2d1(void)

/* WARNING: Removing unreachable block (ram,0x00014d89a369) */
/* WARNING: Removing unreachable block (ram,0x00014d89a3f1) */
/* WARNING: Removing unreachable block (ram,0x00014d89a3f6) */
/* WARNING: Removing unreachable block (ram,0x00014d89a3fc) */
/* WARNING: Removing unreachable block (ram,0x00014d89a485) */
/* WARNING: Removing unreachable block (ram,0x00014d89a48b) */
/* WARNING: Removing unreachable block (ram,0x0001659b9782) */
/* WARNING: Removing unreachable block (ram,0x0001659b9795) */
/* WARNING: Removing unreachable block (ram,0x00015b9d23dc) */
/* WARNING: Removing unreachable block (ram,0x00015b9d24f3) */
/* WARNING: Removing unreachable block (ram,0x00015b9d24f8) */
/* WARNING: Removing unreachable block (ram,0x00015b9d24fe) */
/* WARNING: Removing unreachable block (ram,0x00014dc2e4d6) */

undefined8 FUN_14d89a2d1(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int unaff_ESI;
  ulonglong uVar2;
  char local_res8;
  
  uVar2 = (ulonglong)(unaff_ESI + 0x3fcd10);
  if (local_res8 < '\0') {
    uVar2 = 0xffffffff;
  }
  uVar1 = FUN_14d9059cf(param_1,param_2,CONCAT71((int7)(uVar2 >> 8),local_res8),FUN_14d9059cf);
  return uVar1;
}



// FUNCTION 14d89a59a FUN_14d89a59a body=127 status=ok
// SIG undefined FUN_14d89a59a(void)

void FUN_14d89a59a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x164a8bf2f)(param_1,*(ulonglong *)(unaff_RDI + -0x68) & param_1);
  return;
}



// FUNCTION 14d89a735 FUN_14d89a735 body=121 status=ok
// SIG undefined FUN_14d89a735(void)

void FUN_14d89a735(undefined1 param_1)

{
  undefined1 uVar1;
  char in_AL;
  short unaff_R12W;
  ushort uVar2;
  ushort unaff_retaddr;
  ushort *local_res8;
  
  uVar2 = unaff_R12W - (unaff_retaddr ^ 0x30d9) ^ 0xb508;
  *local_res8 = ~*local_res8;
  *local_res8 = ~(~uVar2 | ~*local_res8) | ~uVar2;
  *local_res8 = ~*local_res8;
                    /* WARNING: Read-only address (ram,0x00014d7ab8a8) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7ab8a8;
  }
  uRam000000014d7ab8a8 = uVar1;
  UNLOCK();
  FUN_162f327fb();
  return;
}



// FUNCTION 14d89a7be FUN_14d89a7be body=136 status=ok
// SIG undefined FUN_14d89a7be(void)

/* WARNING: Removing unreachable block (ram,0x00014d89a800) */
/* WARNING: Removing unreachable block (ram,0x00014d89a81f) */

void FUN_14d89a7be(void)

{
  FUN_166b5c362();
  return;
}



// FUNCTION 14d89a846 FUN_14d89a846 body=186 status=ok
// SIG undefined FUN_14d89a846(void)

void FUN_14d89a846(void)

{
  return;
}



// FUNCTION 14d89aa3a FUN_14d89aa3a body=180 status=ok
// SIG undefined FUN_14d89aa3a(void)

void FUN_14d89aa3a(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  bool in_ZF;
  
  if (!in_ZF) {
    FUN_160e2f5c9();
    FUN_14dabbd97();
    return;
  }
  if (in_ZF) {
    FUN_14dabbd0b();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RBP + 0x42f0a9c4);
  FUN_16170116c(uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_16531fc0c();
  (*(code *)0x160c44367)();
  return;
}



// FUNCTION 14d89aaee FUN_14d89aaee body=320 status=ok
// SIG undefined FUN_14d89aaee(void)

void FUN_14d89aaee(void)

{
  FUN_16531fc0c();
  (*(code *)0x160c44367)();
  return;
}



// FUNCTION 14d89ad3a FUN_14d89ad3a body=153 status=ok
// SIG undefined FUN_14d89ad3a(void)

void FUN_14d89ad3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong local_res20;
  
  *(ushort *)(&stack0xfffffffff265781d + in_R11) =
       (*(ushort *)(&stack0xfffffffff265781d + in_R11) | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = in_R10;
  *(undefined8 *)(local_res20 + -0x20) = param_2;
  FUN_157490fe1(param_1,FUN_157490fe1);
  return;
}



// FUNCTION 14d89add5 FUN_14d89add5 body=93 status=ok
// SIG undefined FUN_14d89add5(void)

void FUN_14d89add5(void)

{
  FUN_14d7ad0bc();
  return;
}



// FUNCTION 14d89ae82 FUN_14d89ae82 body=124 status=ok
// SIG undefined FUN_14d89ae82(void)

void FUN_14d89ae82(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_166b658df(param_1,param_2,(~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1,
                ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x60)) &
                 (~*(ulonglong *)(unaff_RDI + -0x60) | param_1)));
  return;
}



// FUNCTION 14d89af82 FUN_14d89af82 body=330 status=ok
// SIG undefined FUN_14d89af82(void)

/* WARNING: Removing unreachable block (ram,0x00014d89afdf) */
/* WARNING: Removing unreachable block (ram,0x00014d89b03c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000028 : 0x00014d89b02c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d89af82(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  FUN_162d7e5ba(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14d89b0cd FUN_14d89b0cd body=131 status=ok
// SIG undefined FUN_14d89b0cd(void)

void FUN_14d89b0cd(void)

{
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *(undefined8 *)(in_stack_00000028 + -8) = in_R10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res18;
  FUN_161b29be4();
  return;
}


