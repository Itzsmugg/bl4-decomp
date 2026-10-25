// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14d9309f8 FUN_14d9309f8 body=60 status=ok
// SIG undefined FUN_14d9309f8(void)

void FUN_14d9309f8(undefined8 param_1)

{
  FUN_16566d4b8(param_1,0xffffffff9f7ffff7);
  return;
}



// FUNCTION 14d930ae2 FUN_14d930ae2 body=329 status=ok
// SIG undefined FUN_14d930ae2(void)

/* WARNING: Removing unreachable block (ram,0x00014d930b8e) */

void FUN_14d930ae2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_stack_00000008;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (((0xffffffffffffffff - in_stack_00000008 | local_res20) &
      (local_res20 ^ 0xffffffffffffffff | in_stack_00000008)) != 0) {
    FUN_15b8bea99();
    return;
  }
  FUN_161df828a(param_3 - local_res18,param_2);
  return;
}



// FUNCTION 14d930c2e FUN_14d930c2e body=590 status=ok
// SIG undefined FUN_14d930c2e(void)

/* WARNING: Removing unreachable block (ram,0x00014d930c9b) */
/* WARNING: Removing unreachable block (ram,0x00014d930ca1) */
/* WARNING: Removing unreachable block (ram,0x000162b320b9) */

void FUN_14d930c2e(char param_1)

{
  char unaff_R13B;
  byte in_stack_00000010;
  
  if (-1 < (char)(-(-1 - (unaff_R13B - param_1)) - ('\x01' - (-1 - ~in_stack_00000010)))) {
    FUN_166af9d53();
    return;
  }
  FUN_166af9d53();
  return;
}



// FUNCTION 14d930fa0 FUN_14d930fa0 body=126 status=ok
// SIG undefined FUN_14d930fa0(void)

undefined8 FUN_14d930fa0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d931025 FUN_14d931025 body=132 status=ok
// SIG undefined FUN_14d931025(void)

void FUN_14d931025(undefined8 param_1)

{
  FUN_1615f35db(param_1);
  return;
}



// FUNCTION 14d9310ba FUN_14d9310ba body=101 status=ok
// SIG undefined FUN_14d9310ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d9310ba(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong in_R10;
  longlong unaff_R13;
  
  uVar5 = 0x6f3d;
  uVar1 = *(ulonglong *)(unaff_R13 + -0x58);
  uVar4 = FUN_160b58c9a();
  lVar3 = _DAT_1fd1839d98de3af3;
  FUN_15b9a9a10(uVar5,(uVar1 & 0x1fd1839d98de3b3b) + (param_2 & uVar4) * -2);
  uVar1 = *(ulonglong *)(lVar3 + 8);
  lVar2 = *(longlong *)(lVar3 + 8);
  *(ulonglong *)(lVar3 + 8) = ~*(ulonglong *)(lVar3 + 8);
  *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | uVar5;
  *(ulonglong *)(lVar3 + 8) =
       ~(((-1 - (in_R10 & uVar1)) + lVar2) - ~in_R10 & *(ulonglong *)(lVar3 + 8));
  pcVar6 = FUN_15655e7c1;
  FUN_15655e7c1();
  FUN_161dc6529(pcVar6);
  return;
}



// FUNCTION 14d931120 FUN_14d931120 body=395 status=ok
// SIG undefined FUN_14d931120(void)

void FUN_14d931120(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  code *pcVar4;
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong unaff_R12;
  
  lVar1 = *(longlong *)(unaff_R12 + -0x48);
  FUN_15b9a9a10(param_1,unaff_RDI + (param_2 & in_RAX) * -2);
  uVar2 = *(ulonglong *)(lVar1 + 8);
  lVar3 = *(longlong *)(lVar1 + 8);
  *(ulonglong *)(lVar1 + 8) = ~*(ulonglong *)(lVar1 + 8);
  *(ulonglong *)(lVar1 + 8) = *(ulonglong *)(lVar1 + 8) | param_1;
  *(ulonglong *)(lVar1 + 8) =
       ~(((-1 - (in_R10 & uVar2)) + lVar3) - ~in_R10 & *(ulonglong *)(lVar1 + 8));
  pcVar4 = FUN_15655e7c1;
  FUN_15655e7c1();
  FUN_161dc6529(pcVar4);
  return;
}



// FUNCTION 14d9314a9 FUN_14d9314a9 body=144 status=ok
// SIG undefined FUN_14d9314a9(void)

void FUN_14d9314a9(undefined8 param_1)

{
  FUN_1627ad6a8(param_1);
  return;
}



// FUNCTION 14d93153a FUN_14d93153a body=174 status=ok
// SIG undefined FUN_14d93153a(void)

void FUN_14d93153a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 unaff_RBP;
  longlong in_R10;
  ulonglong unaff_R15;
  bool bVar4;
  bool bVar5;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined2 local_res18;
  undefined6 uStackX_1a;
  undefined8 local_res20;
  
  *(ulonglong *)(in_R10 + 0x10) = ~(unaff_R15 & *(ulonglong *)(in_R10 + 0x10));
  uVar3 = (local_res18 | 0x100) - 0x100;
  LOCK();
  bVar2 = (byte)local_res10;
  bVar4 = bVar2 < DAT_14d7a90c2;
  bVar5 = SBORROW1(bVar2,DAT_14d7a90c2);
  cVar1 = bVar2 - DAT_14d7a90c2;
  if (cVar1 == '\0') {
    DAT_14d7a90c2 = (byte)param_1;
  }
  else {
    local_res10 = CONCAT71((int7)((ulonglong)local_res10 >> 8),DAT_14d7a90c2);
  }
  UNLOCK();
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = param_4;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_1a & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_1a & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res20 + -0x20) = local_res10;
  *(undefined4 *)(local_res20 + -0x20) = 0x55ba8914;
  *(undefined4 *)(local_res20 + -0x1c) = 0;
  *(undefined8 *)(local_res20 + -0x28) = 0x14d9315c4;
  FUN_160d5bc44(param_1,param_2,param_3);
  *(undefined8 *)
   (local_res20 + -0x10 + ~(~(uStackX_8 & 0xffffffff81e93bd8) & (uStackX_8 | 0xffffffff81e93bd8))) =
       unaff_RBP;
  return;
}



// FUNCTION 14d93166c FUN_14d93166c body=5 status=ok
// SIG undefined FUN_14d93166c(void)

void FUN_14d93166c(void)

{
  return;
}



// FUNCTION 14d9318ee FUN_14d9318ee body=1021 status=ok
// SIG undefined FUN_14d9318ee(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d931a96) */
/* WARNING: Removing unreachable block (ram,0x00014d931a9c) */
/* WARNING: Removing unreachable block (ram,0x00014d931adb) */
/* WARNING: Removing unreachable block (ram,0x00014d931ae4) */
/* WARNING: Removing unreachable block (ram,0x00014d931981) */
/* WARNING: Removing unreachable block (ram,0x00014d931987) */
/* WARNING: Removing unreachable block (ram,0x00014d931a04) */
/* WARNING: Removing unreachable block (ram,0x00014d931a0a) */
/* WARNING: Removing unreachable block (ram,0x00014d931a91) */
/* WARNING: Removing unreachable block (ram,0x000157219eae) */
/* WARNING: Removing unreachable block (ram,0x000157219f4c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ab74c) */
/* WARNING: Removing unreachable block (ram,0x000157219f52) */
/* WARNING: Removing unreachable block (ram,0x000161ce8a3e) */

undefined8
FUN_14d9318ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  uVar1 = FUN_166a9661c(FUN_166a9661c,*(undefined8 *)(unaff_R13 + -8),param_3,param_4);
  return uVar1;
}



// FUNCTION 14d931bd2 FUN_14d931bd2 body=152 status=ok
// SIG undefined FUN_14d931bd2(void)

/* WARNING: Removing unreachable block (ram,0x00014d931c6c) */

undefined8 FUN_14d931bd2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  plVar1 = (longlong *)(local_res18 + -8);
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_2;
  plVar1 = (longlong *)(local_res18 + -8);
  *(longlong *)(local_res18 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = (longlong)(&LAB_166e04441 + *plVar1);
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
                    /* WARNING: Could not recover jumptable at 0x000166e04423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(local_res18 + -0x18))
                    (local_res8,*(undefined8 *)(local_res18 + -0x10),uVar2,unaff_retaddr);
  return uVar2;
}



// FUNCTION 14d931c6c FUN_14d931c6c body=100 status=ok
// SIG undefined FUN_14d931c6c(void)

undefined8 FUN_14d931c6c(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x80);
}



// FUNCTION 14d931eca FUN_14d931eca body=150 status=ok
// SIG undefined FUN_14d931eca(void)

void FUN_14d931eca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_161132814(param_1,FUN_161132814,param_3,local_res10);
  return;
}



// FUNCTION 14d932328 FUN_14d932328 body=130 status=ok
// SIG undefined FUN_14d932328(void)

void FUN_14d932328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b035851(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d9323aa FUN_14d9323aa body=54 status=ok
// SIG undefined FUN_14d9323aa(void)

void FUN_14d9323aa(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *(ulonglong *)(param_3 + 8) = ~*(ulonglong *)(param_3 + 8);
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) | param_1;
  *(ulonglong *)(param_3 + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014d9323df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(local_res18,param_2,local_res8);
  return;
}



// FUNCTION 14d93245e FUN_14d93245e body=166 status=ok
// SIG undefined FUN_14d93245e(void)

longlong FUN_14d93245e(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  *(undefined4 *)(&stack0x00000000 + param_1) = 0x4a85e4d8;
  *(uint *)(&stack0x00000000 + param_1) = *(uint *)(&stack0x00000000 + param_1) ^ 0x4a85e4d8;
  puVar1 = (ulonglong *)(&stack0xfffffffff58671cb + unaff_retaddr);
  *puVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  uVar2 = *puVar1;
  *(longlong *)(&stack0xfffffffff58671cb + unaff_retaddr) = param_1;
  *(ulonglong *)(&stack0xfffffffff58671cb + unaff_retaddr) = unaff_R15;
  *(ulonglong **)(&stack0xfffffffff58671cb + unaff_retaddr) = puVar1;
  *(ulonglong **)(&stack0xfffffffff58671c3 + unaff_retaddr) = puVar1;
  *(ulonglong **)(&stack0xfffffffff58671bb + unaff_retaddr) = puVar1;
  *(code **)(&stack0xfffffffff58671cb + unaff_retaddr) = FUN_14d932505;
  *(undefined8 *)(&stack0xfffffffff58671c3 + unaff_retaddr) = 0x165c55ae9;
  return uVar2 + unaff_R15 + ~(~uVar2 | ~unaff_R15) * -2;
}



// FUNCTION 14d932505 FUN_14d932505 body=143 status=ok
// SIG undefined FUN_14d932505(void)

void FUN_14d932505(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 in_R11;
  longlong unaff_retaddr;
  
  lVar3 = (~param_2 | ~(unaff_RBP + param_1 + 1)) + param_2 + 1;
  FUN_16161f3b9(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
  *(longlong *)(unaff_retaddr + -8) = lVar3;
  psVar1 = (short *)(unaff_retaddr + -0x10);
  psVar1[0] = 0;
  psVar1[1] = 0;
  psVar1[2] = 0;
  psVar1[3] = 0;
  sVar2 = (short)lVar3;
  if (sVar2 < 0) {
    psVar1[0] = -1;
    psVar1[1] = -1;
    psVar1[2] = -1;
    psVar1[3] = -1;
  }
  *psVar1 = sVar2;
  *(undefined8 *)(unaff_retaddr + -0x10) = in_R11;
  *(undefined8 *)(unaff_retaddr + -0x10) = *(undefined8 *)(unaff_retaddr + -8);
  *(undefined8 *)(unaff_retaddr + -8) = &LAB_14d932614;
  FUN_14d7c2c24();
  return;
}



// FUNCTION 14d932595 FUN_14d932595 body=96 status=ok
// SIG undefined FUN_14d932595(void)

void FUN_14d932595(undefined8 param_1)

{
  short *psVar1;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  psVar1 = (short *)(local_res10 + -0x10);
  psVar1[0] = 0;
  psVar1[1] = 0;
  psVar1[2] = 0;
  psVar1[3] = 0;
  if ((short)unaff_RBX < 0) {
    psVar1[0] = -1;
    psVar1[1] = -1;
    psVar1[2] = -1;
    psVar1[3] = -1;
  }
  *psVar1 = (short)unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = &LAB_14d932614;
  FUN_14d7c2c24(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14d932667 FUN_14d932667 body=604 status=ok
// SIG undefined FUN_14d932667(void)

/* WARNING: Removing unreachable block (ram,0x00014d93277c) */
/* WARNING: Removing unreachable block (ram,0x00014d932782) */
/* WARNING: Removing unreachable block (ram,0x000164a7051d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d932667(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar2 = ~(unaff_RSI & (-~unaff_RBX - (param_3 + unaff_RBX + 3)) - (-1 - param_2));
  FUN_166c85b94();
  uVar1 = (*(code *)&LAB_161c7fd3b)(in_stack_00000010,uVar2,in_stack_00000008);
  return uVar1;
}



// FUNCTION 14d9328ba FUN_14d9328ba body=80 status=ok
// SIG undefined FUN_14d9328ba(void)

void FUN_14d9328ba(ulonglong param_1)

{
  ulonglong *unaff_RBX;
  ulonglong unaff_R15;
  
  *unaff_RBX = *unaff_RBX ^ 0xffffffffffffffff;
  *unaff_RBX = *unaff_RBX | unaff_R15;
  *unaff_RBX = param_1 & *unaff_RBX ^ 0xffffffffffffffff;
  return;
}



// FUNCTION 14d932923 FUN_14d932923 body=355 status=ok
// SIG undefined FUN_14d932923(void)

/* WARNING: Removing unreachable block (ram,0x00014d9329ee) */
/* WARNING: Removing unreachable block (ram,0x00014d9329bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14d932923(void)

{
  int *unaff_RDI;
  int in_R9D;
  uint unaff_R12D;
  int unaff_retaddr;
  ulonglong in_stack_00000008;
  
  if ((in_stack_00000008 & 0x40) != 0) {
    LOCK();
    *unaff_RDI = in_R9D + (unaff_R12D ^ unaff_retaddr + 0x3bcec8cfU);
    UNLOCK();
    FUN_15683ee2e();
    return;
  }
  return;
}



// FUNCTION 14d932b13 FUN_14d932b13 body=147 status=ok
// SIG undefined FUN_14d932b13(void)

void FUN_14d932b13(void)

{
  undefined8 in_stack_00000010;
  
  FUN_161620b39(in_stack_00000010);
  return;
}



// FUNCTION 14d932d0b FUN_14d932d0b body=159 status=ok
// SIG undefined FUN_14d932d0b(void)

/* WARNING: Removing unreachable block (ram,0x00014d932da5) */
/* WARNING: Removing unreachable block (ram,0x00014d932dab) */
/* WARNING: Removing unreachable block (ram,0x000156ec6a28) */

void FUN_14d932d0b(void)

{
  FUN_156ec6a28();
  return;
}



// FUNCTION 14d932dab FUN_14d932dab body=174 status=ok
// SIG undefined FUN_14d932dab(void)

void FUN_14d932dab(undefined8 param_1,undefined8 param_2)

{
  FUN_160f72076(param_1,param_2);
  return;
}



// FUNCTION 14d932edb FUN_14d932edb body=144 status=ok
// SIG undefined FUN_14d932edb(void)

void FUN_14d932edb(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161d32e93((char)param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14d932fff FUN_14d932fff body=595 status=ok
// SIG undefined FUN_14d932fff(void)

/* WARNING: Removing unreachable block (ram,0x00014d933120) */
/* WARNING: Removing unreachable block (ram,0x00014d933126) */

void FUN_14d932fff(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 in_R11;
  longlong unaff_R13;
  
  FUN_160c6c1c8(param_1,~(param_2 & param_1) & (param_2 | param_1));
  FUN_1575ab0c6(FUN_1575ab0c6,in_R11);
  FUN_165a4d2bb(*(undefined8 *)(unaff_R13 + -0x78),*(undefined8 *)(unaff_R13 + -0x78),param_3);
  return;
}



// FUNCTION 14d933126 FUN_14d933126 body=149 status=ok
// SIG undefined FUN_14d933126(void)

void FUN_14d933126(void)

{
  return;
}



// FUNCTION 14d9331bb FUN_14d9331bb body=137 status=ok
// SIG undefined FUN_14d9331bb(void)

/* WARNING: Removing unreachable block (ram,0x00014d9332d5) */
/* WARNING: Removing unreachable block (ram,0x00014d933354) */
/* WARNING: Removing unreachable block (ram,0x000166442189) */
/* WARNING: Removing unreachable block (ram,0x00014d93335a) */

void FUN_14d9331bb(void)

{
  ushort *puVar1;
  code *pcVar2;
  undefined8 unaff_RBP;
  longlong unaff_retaddr;
  ushort local_res20 [4];
  undefined8 *in_stack_00000038;
  
  FUN_1565051bc();
  puVar1 = (ushort *)((longlong)local_res20 + unaff_retaddr);
  if ((ushort)-(*puVar1 | 0xfeff) == 0) {
    FUN_166242e05();
    return;
  }
  *puVar1 = -(*puVar1 | 0xfeff) + -0x101 + *puVar1;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *in_stack_00000038 = unaff_RBP;
  in_stack_00000038[-1] = unaff_RBP;
  *(undefined4 *)(in_stack_00000038 + -2) = 0x1166e867;
  *(undefined4 *)((longlong)in_stack_00000038 + -0xc) = 0;
  FUN_15659db99();
  return;
}



// FUNCTION 14d933244 FUN_14d933244 body=145 status=ok
// SIG undefined FUN_14d933244(void)

/* WARNING: Removing unreachable block (ram,0x00014d9332d5) */
/* WARNING: Removing unreachable block (ram,0x00014d933354) */
/* WARNING: Removing unreachable block (ram,0x000166442189) */
/* WARNING: Removing unreachable block (ram,0x00014d93335a) */

void FUN_14d933244(void)

{
  ushort *puVar1;
  code *pcVar2;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  ushort auStackX_10 [12];
  undefined8 *in_stack_00000028;
  
  puVar1 = (ushort *)((longlong)auStackX_10 + unaff_RSI);
  if ((ushort)-(*puVar1 | 0xfeff) == 0) {
    FUN_166242e05();
    return;
  }
  *puVar1 = -(*puVar1 | 0xfeff) + -0x101 + *puVar1;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *in_stack_00000028 = unaff_RBP;
  in_stack_00000028[-1] = unaff_RBP;
  *(undefined4 *)(in_stack_00000028 + -2) = 0x1166e867;
  *(undefined4 *)((longlong)in_stack_00000028 + -0xc) = 0;
  FUN_15659db99();
  return;
}



// FUNCTION 14d9332d5 FUN_14d9332d5 body=179 status=ok
// SIG undefined FUN_14d9332d5(void)

/* WARNING: Removing unreachable block (ram,0x00014d93335a) */

void FUN_14d9332d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162e6c3d0(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d9334a1 FUN_14d9334a1 body=125 status=ok
// SIG undefined FUN_14d9334a1(void)

/* WARNING: Removing unreachable block (ram,0x00014d9334fa) */

void FUN_14d9334a1(void)

{
  undefined8 local_res8;
  
  (*(code *)&LAB_166854db7)(&LAB_166854db7,local_res8);
  return;
}



// FUNCTION 14d933857 FUN_14d933857 body=14 status=ok
// SIG undefined FUN_14d933857(void)

void FUN_14d933857(void)

{
  return;
}



// FUNCTION 14d933904 FUN_14d933904 body=157 status=ok
// SIG undefined FUN_14d933904(void)

void FUN_14d933904(void)

{
  FUN_14daa5579();
  return;
}



// FUNCTION 14d9339a3 FUN_14d9339a3 body=160 status=ok
// SIG undefined FUN_14d9339a3(void)

undefined8 FUN_14d9339a3(void)

{
  return 0xffffffffffffff01;
}



// FUNCTION 14d933a43 FUN_14d933a43 body=140 status=ok
// SIG undefined FUN_14d933a43(void)

void FUN_14d933a43(void)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 in_R9;
  longlong unaff_R14;
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
  undefined8 local_res10;
  ulonglong uStackX_20;
  undefined8 *in_stack_00000028;
  
  puVar1 = (ushort *)(&stack0xfffffffff2d5ba44 + unaff_R14);
  uVar2 = *puVar1;
  *puVar1 = 0;
  *puVar1 = *puVar1 + ((uVar2 | 0x100) - 0x100);
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
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *in_stack_00000028 = in_R9;
  in_stack_00000028[-1] = in_R9;
  in_stack_00000028[-2] =
       (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
       (ulonglong)((uStackX_20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
       (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
       (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 |
       (ulonglong)(bVar4 & 1) | (ulonglong)(bVar16 & 1) * 0x200000 |
       (ulonglong)(bVar15 & 1) * 0x100000 | (ulonglong)(bVar14 & 1) * 0x80000 |
       (ulonglong)(bVar13 & 1) * 0x40000;
  *in_stack_00000028 = 0x3bb9d5c;
  *(undefined8 *)((longlong)in_stack_00000028 + -0x28c7) = local_res10;
  *(undefined8 *)((longlong)in_stack_00000028 + -0x28cf) = local_res10;
  *(undefined **)((longlong)in_stack_00000028 + -0x28c7) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14d933b95 FUN_14d933b95 body=155 status=ok
// SIG undefined FUN_14d933b95(void)

/* WARNING: Removing unreachable block (ram,0x00014d933c11) */
/* WARNING: Removing unreachable block (ram,0x00014d933c1c) */
/* WARNING: Removing unreachable block (ram,0x00014d933c17) */
/* WARNING: Removing unreachable block (ram,0x000160c2342c) */
/* WARNING: Removing unreachable block (ram,0x000160c23302) */
/* WARNING: Removing unreachable block (ram,0x000160c23421) */
/* WARNING: Removing unreachable block (ram,0x000160c23426) */
/* WARNING: Removing unreachable block (ram,0x00015b965361) */
/* WARNING: Removing unreachable block (ram,0x00015b96538c) */
/* WARNING: Removing unreachable block (ram,0x00015b965393) */
/* WARNING: Removing unreachable block (ram,0x00015b9653dd) */
/* WARNING: Removing unreachable block (ram,0x00015b9653e1) */
/* WARNING: Removing unreachable block (ram,0x0001612c82f8) */
/* WARNING: Removing unreachable block (ram,0x0001612c8321) */
/* WARNING: Removing unreachable block (ram,0x0001612c831c) */
/* WARNING: Removing unreachable block (ram,0x0001612c834c) */
/* WARNING: Removing unreachable block (ram,0x0001612c83b9) */
/* WARNING: Removing unreachable block (ram,0x0001612c83b3) */
/* WARNING: Removing unreachable block (ram,0x0001612c846e) */
/* WARNING: Removing unreachable block (ram,0x0001612c8460) */

undefined8 FUN_14d933b95(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  char unaff_DIL;
  char unaff_R12B;
  ulonglong uVar7;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar8;
  undefined1 uStack000000000000012b;
  
  *(byte *)(unaff_RBP + 0x10a) = *(byte *)(unaff_RBP + 0x10a) | 0xcf;
  bVar1 = *(byte *)(unaff_RBP + 0x10a);
  *(undefined1 *)(unaff_RBP + 0x10a) = 0;
  *(char *)(unaff_RBP + 0x10a) = *(char *)(unaff_RBP + 0x10a) - ~(~(unaff_DIL + unaff_R12B) & bVar1)
  ;
  *(char *)(unaff_RBP + 0x10a) = -*(char *)(unaff_RBP + 0x10a);
  uStack000000000000012b = 0;
  if (!CARRY8(param_1,(ulonglong)&stack0x00000120)) {
    uVar2 = FUN_156626bf0();
    return uVar2;
  }
  puVar6 = (ulonglong *)register0x00000020;
  if ((in_TF & 1) == 0) {
    puVar6 = (ulonglong *)&stack0x00000008;
  }
  uVar7 = ~(ulonglong)&stack0x00000120;
  puVar6[-1] = param_3;
  uVar2 = *puVar6;
  *puVar6 = unaff_RSI;
  uVar7 = (param_1 & (ulonglong)&stack0x00000120 ^ 0xffffffffffffffff) &
          (ulonglong)(&stack0x00000120 + (((uVar7 & param_1) - uVar7) - (longlong)&stack0x00000121))
  ;
  puVar6[1] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
              (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar7 < 0) * 0x80 |
              (ulonglong)(uVar7 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
              (ulonglong)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
              (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
              (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  if ((puVar6[1] & 1) == 0) {
    uVar2 = FUN_166cb6f41();
    return uVar2;
  }
  uVar8 = puVar6[1];
  if ((uVar8 & 1) == 0 && (uVar8 & 0x40) == 0) {
    uVar2 = FUN_156626c84();
    return uVar2;
  }
  uVar3 = (~uVar7 | (ulonglong)&stack0x00000120) & (~(ulonglong)&stack0x00000120 | uVar7);
  puVar6[1] = uVar2;
  uVar4 = ~uVar7 | uVar3;
  uVar5 = ~uVar4;
  *puVar6 = (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar8 & 0x400) != 0) * 0x400
            | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 | (ulonglong)((uVar8 & 0x100) != 0) * 0x100
            | (ulonglong)(-1 < (longlong)uVar4) * 0x80 | (ulonglong)(uVar5 == 0) * 0x40 |
            (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
            (ulonglong)((POPCOUNT(uVar5 & 0xff) & 1U) == 0) * 4 |
            (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  uVar2 = FUN_1667e71d9(uVar7 + ~uVar3,uVar5,puVar6[-1]);
  return uVar2;
}



// FUNCTION 14d933df3 FUN_14d933df3 body=144 status=ok
// SIG undefined FUN_14d933df3(void)

void FUN_14d933df3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBP;
  undefined8 *in_R10;
  
  *in_R10 = unaff_RBP;
  (*(code *)0x14d8f8762)(0x14d8f8762,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d933f4a FUN_14d933f4a body=323 status=ok
// SIG undefined FUN_14d933f4a(void)

/* WARNING: Removing unreachable block (ram,0x00014d933fdc) */
/* WARNING: Removing unreachable block (ram,0x00014d934067) */
/* WARNING: Removing unreachable block (ram,0x00014d93406c) */
/* WARNING: Removing unreachable block (ram,0x00014d934072) */
/* WARNING: Removing unreachable block (ram,0x00014d934077) */

undefined8 FUN_14d933f4a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_R10;
  undefined8 in_stack_00000008;
  longlong local_res18;
  
  *(longlong *)(local_res18 + -8) = local_res18;
  lVar1 = *(longlong *)(local_res18 + -8);
  *(undefined8 *)(lVar1 + -8) = param_2;
  *(undefined8 *)(lVar1 + -0x10) = in_R10;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined1 **)(lVar1 + -8) = &LAB_14deb54b5;
  uVar2 = thunk_FUN_15b642ca5(in_stack_00000008,*(undefined8 *)(lVar1 + -0x10));
  return uVar2;
}



// FUNCTION 14d934077 FUN_14d934077 body=265 status=ok
// SIG undefined FUN_14d934077(void)

longlong FUN_14d934077(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong *plVar4;
  undefined8 unaff_R14;
  uint in_stack_00000008;
  longlong lStackX_10;
  ulonglong in_stack_00000018;
  longlong *plStack0000000000000028;
  
  plVar4 = (longlong *)(unaff_RDI - *(longlong *)(&stack0xfffffffff062d207 + in_stack_00000008));
  plVar4[-1] = unaff_RBP;
  plVar4[-2] = 0x14d934113;
  plStack0000000000000028 = plVar4;
  uVar3 = FUN_1628c5fa9(in_stack_00000018,param_2);
  *(undefined4 *)(plVar4 + -2) = 0x949f2410;
  *(undefined4 *)((longlong)plVar4 + -0xc) = 0xffffffff;
  uVar1 = *(ulonglong *)(lStackX_10 + (plVar4[-2] ^ 0x6b60db70U));
  uVar2 = plVar4[-1];
  plVar4[-1] = param_4;
  plVar4[-2] = uVar2;
  plVar4[-2] = (-~in_stack_00000018 - (~uVar1 + 2)) + (uVar1 & in_stack_00000018) * -2;
  plVar4[-1] = uVar3;
  plVar4[-2] = unaff_R14;
  plVar4[-3] = param_3;
  plVar4[-4] = (longlong)&LAB_14d934183;
  return *plVar4 + in_stack_00000018;
}



// FUNCTION 14d93418d FUN_14d93418d body=213 status=ok
// SIG undefined FUN_14d93418d(void)

void FUN_14d93418d(void)

{
  FUN_15656c1e6();
  return;
}



// FUNCTION 14d93433d FUN_14d93433d body=330 status=ok
// SIG undefined FUN_14d93433d(void)

/* WARNING: Removing unreachable block (ram,0x00014d934522) */
/* WARNING: Removing unreachable block (ram,0x00014d934528) */
/* WARNING: Removing unreachable block (ram,0x00014d9343c6) */
/* WARNING: Removing unreachable block (ram,0x00014d934484) */
/* WARNING: Removing unreachable block (ram,0x000165ffc6ae) */
/* WARNING: Removing unreachable block (ram,0x00014d93448a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d93433d(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(&stack0x1b60ca5f + unaff_RDI + unaff_RBP) = in_R9;
  return unaff_retaddr;
}



// FUNCTION 14d93448a FUN_14d93448a body=486 status=ok
// SIG undefined FUN_14d93448a(void)

/* WARNING: Removing unreachable block (ram,0x00014d934522) */
/* WARNING: Removing unreachable block (ram,0x00014d934528) */

void FUN_14d93448a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x28);
  FUN_15b7a5b61(FUN_15b7a5b61,
                ~((~((unaff_R15 ^ 0xffffffffffffffff) & uVar1) + uVar1) -
                  ~(unaff_R15 ^ 0xffffffffffffffff) & (~uVar1 | unaff_R15)),param_3,param_4);
  return;
}



// FUNCTION 14d9346f8 FUN_14d9346f8 body=886 status=ok
// SIG undefined FUN_14d9346f8(void)

/* WARNING: Removing unreachable block (ram,0x00014d93477d) */
/* WARNING: Removing unreachable block (ram,0x00014d934783) */
/* WARNING: Removing unreachable block (ram,0x00014d9347f8) */
/* WARNING: Removing unreachable block (ram,0x00014d9347fe) */
/* WARNING: Removing unreachable block (ram,0x000165a881e1) */

void FUN_14d9346f8(void)

{
  FUN_1648d6cd1();
  return;
}



// FUNCTION 14d934a6a FUN_14d934a6a body=91 status=ok
// SIG undefined FUN_14d934a6a(void)

void FUN_14d934a6a(undefined8 param_1,undefined8 param_2,short param_3)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RDI;
  short *in_R11;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong local_res20;
  
  *in_R11 = param_3 + 1;
  *(undefined8 *)(local_res20 + -8) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = (longlong)(&DAT_14d934adb + *plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014d934ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uStackX_10);
  return;
}



// FUNCTION 14d934bb6 FUN_14d934bb6 body=170 status=ok
// SIG undefined FUN_14d934bb6(void)

void FUN_14d934bb6(void)

{
  longlong unaff_RDI;
  uint local_res10;
  
  (*(code *)0x1570a042b)
            (&DAT_ac91427a73ca2b2b,~local_res10,
             ~*(ulonglong *)(unaff_RDI + -0x78) & 0x536ebd858c35d4d4);
  return;
}



// FUNCTION 14d934d81 FUN_14d934d81 body=306 status=ok
// SIG undefined FUN_14d934d81(void)

undefined8 FUN_14d934d81(void)

{
  longlong unaff_R13;
  
  FUN_15b970a35();
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14d934ebb FUN_14d934ebb body=115 status=ok
// SIG undefined FUN_14d934ebb(void)

void FUN_14d934ebb(void)

{
  FUN_166d444a2();
  return;
}



// FUNCTION 14d93534e FUN_14d93534e body=59 status=ok
// SIG undefined FUN_14d93534e(void)

void FUN_14d93534e(void)

{
  return;
}



// FUNCTION 14d9353ff FUN_14d9353ff body=131 status=ok
// SIG undefined FUN_14d9353ff(void)

void FUN_14d9353ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15af5bec1(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d93551e FUN_14d93551e body=314 status=ok
// SIG undefined FUN_14d93551e(void)

undefined8 FUN_14d93551e(void)

{
  undefined8 unaff_R15;
  
  FUN_15b266435();
  return unaff_R15;
}



// FUNCTION 14d935659 FUN_14d935659 body=161 status=ok
// SIG undefined FUN_14d935659(void)

/* WARNING: Removing unreachable block (ram,0x00014d935835) */
/* WARNING: Removing unreachable block (ram,0x00014d9356fa) */
/* WARNING: Removing unreachable block (ram,0x00014d935733) */
/* WARNING: Removing unreachable block (ram,0x00014d935737) */
/* WARNING: Removing unreachable block (ram,0x00014d93584c) */
/* WARNING: Removing unreachable block (ram,0x00014d935852) */
/* WARNING: Removing unreachable block (ram,0x00014d935847) */
/* WARNING: Removing unreachable block (ram,0x00014d935857) */

void FUN_14d935659(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  *(undefined8 *)(&stack0xfffffffff9dc357f + (unaff_retaddr ^ 0x5671f729)) =
       *(undefined8 *)(unaff_R13 + -0x60);
  uVar4 = ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  uVar2 = ~(~uVar1 & unaff_R15) + unaff_R15;
  lVar3 = uVar2 - uVar1;
  if (uVar2 < uVar1) {
    thunk_FUN_16495d5b6(lVar3,~unaff_R15 | uVar1,uVar4);
    return;
  }
  thunk_FUN_16495d5b6(lVar3,~unaff_R15 | uVar1,uVar4);
  return;
}



// FUNCTION 14d9356fa FUN_14d9356fa body=162 status=ok
// SIG undefined FUN_14d9356fa(void)

/* WARNING: Removing unreachable block (ram,0x00014d935835) */
/* WARNING: Removing unreachable block (ram,0x00014d935857) */

void FUN_14d9356fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,short param_4)

{
  uint unaff_EDI;
  int unaff_retaddr;
  
  FUN_1654069c5(param_1,unaff_retaddr + -0x214ee7af,0xffffffffffffffb0,param_4 + -1);
  if (unaff_EDI < 0x78513fdb) {
    FUN_1653f8bf9();
    return;
  }
  FUN_1653f8bf9();
  return;
}



// FUNCTION 14d93579c FUN_14d93579c body=329 status=ok
// SIG undefined FUN_14d93579c(void)

/* WARNING: Removing unreachable block (ram,0x00014d935835) */
/* WARNING: Removing unreachable block (ram,0x00014d935857) */

void FUN_14d93579c(void)

{
  uint unaff_EDI;
  
  if (0x78513fda < unaff_EDI) {
    FUN_1653f8bf9();
    return;
  }
  FUN_1653f8bf9();
  return;
}



// FUNCTION 14d935b86 FUN_14d935b86 body=439 status=ok
// SIG undefined FUN_14d935b86(void)

/* WARNING: Instruction at (ram,0x0001564f9d82) overlaps instruction at (ram,0x0001564f9d81)
    */
/* WARNING: Removing unreachable block (ram,0x000166909c8c) */
/* WARNING: Removing unreachable block (ram,0x000166909c92) */
/* WARNING: Removing unreachable block (ram,0x000166909b5b) */
/* WARNING: Removing unreachable block (ram,0x00014e0c15bb) */
/* WARNING: Removing unreachable block (ram,0x00014d935c22) */
/* WARNING: Removing unreachable block (ram,0x00014d935c8e) */
/* WARNING: Removing unreachable block (ram,0x00014d935c93) */
/* WARNING: Removing unreachable block (ram,0x00014e0c1620) */

void FUN_14d935b86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 in_RAX;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 in_R10;
  undefined8 uVar19;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar20;
  bool bVar21;
  byte in_AF;
  bool bVar22;
  bool bVar23;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong uVar24;
  uint unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  bVar20 = (in_NT & 1) != 0;
  bVar21 = (in_IF & 1) != 0;
  bVar22 = (in_TF & 1) != 0;
  bVar23 = (in_AF & 1) != 0;
  bVar11 = (in_ID & 1) != 0;
  bVar12 = (in_AC & 1) != 0;
  uVar10 = (ulonglong)unaff_retaddr;
  lVar13 = uVar10 - 0xa76c6ef;
  *(undefined8 *)(&stack0xfffffffff5893919 + uVar10) = 0;
  *(undefined8 *)(&stack0xfffffffff5893911 + uVar10) = unaff_R14;
  *(longlong *)(&stack0xfffffffff5893919 + uVar10) =
       *(longlong *)(&stack0xfffffffff5893919 + uVar10) + unaff_R13;
  uVar5 = *(undefined8 *)(&stack0xfffffffff5893911 + uVar10);
  *(undefined8 *)(&stack0xfffffffff5893911 + uVar10) = unaff_R15;
  *(undefined8 *)(&stack0xfffffffff5893909 + uVar10) = uVar5;
  *(undefined8 *)(&stack0xfffffffff5893901 + uVar10) = param_3;
  uVar5 = *(undefined8 *)(&stack0xfffffffff5893909 + uVar10);
  uVar14 = *(undefined8 *)(&stack0xfffffffff5893911 + uVar10);
  *(ulonglong *)(&stack0xfffffffff5893911 + uVar10) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar21 * 0x200 | (ulonglong)bVar22 * 0x100 | 0x80 |
       (ulonglong)bVar23 * 0x10 | (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  *(ushort *)(&stack0xfffffffff5893911 + uVar10) =
       *(ushort *)(&stack0xfffffffff5893911 + uVar10) & 0x100;
  puVar16 = (undefined1 *)register0x00000020;
  if (*(short *)(&stack0xfffffffff5893911 + uVar10) == 0) {
    puVar16 = auStackX_8;
  }
  *(longlong *)(puVar16 + (uVar10 - 0xa76c6f7)) = lVar13;
  *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6ff)) = in_R10;
  uVar6 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6ff));
  *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6ff)) =
       (ulonglong)bVar20 * 0x4000 | (ulonglong)bVar21 * 0x200 | (ulonglong)bVar22 * 0x100 |
       (ulonglong)bVar23 * 0x10 | 1 | (ulonglong)bVar11 * 0x200000 | (ulonglong)bVar12 * 0x40000;
  if ((*(uint *)(puVar16 + (uVar10 - 0xa76c6ff)) >> 7 & 1) == 0) {
    uVar24 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6ff));
    if ((uVar24 & 0x80) != 0) {
      uVar7 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7)) = uVar14;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6e7)) = 4;
      uVar14 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7));
      uVar3 = *(undefined8 *)(puVar16 + lVar13);
      *(undefined8 *)(puVar16 + lVar13) = 0x6eb0bf75;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7)) = 0x6eb0bf75;
      uVar19 = *(undefined8 *)(unaff_R13 + -8);
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6ff)) = uVar14;
      *(undefined8 *)(puVar16 + lVar13) = uVar19;
      uVar4 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6ff));
      uVar17 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7)) = 0xffffffff;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6ff)) = 0xffffffff;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = param_2;
      uVar14 = *(undefined8 *)(unaff_R13 + -0x98);
      uVar8 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = uVar7;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f)) = in_RAX;
      *(undefined4 *)(puVar16 + (uVar10 - 0xa76c70f)) = 0xd73af168;
      *(uint *)(puVar16 + (uVar10 - 0xa76c70f)) =
           *(uint *)(puVar16 + (uVar10 - 0xa76c70f)) ^ 0x7699a247;
      *(undefined4 *)(puVar16 + (uVar10 - 0xa76c70b)) = 0xffffffff;
      lVar9 = *(longlong *)(puVar16 + (uVar10 - 0xa76c70f));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f)) = uVar6;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c717)) = 0x914f4089;
      uVar6 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c717));
      uVar19 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f));
      *(undefined8 *)(puVar16 + (0x5e5cacc8 - (-1 - lVar9)) + lVar13) = uVar14;
      uVar14 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707));
      puVar1 = (undefined8 *)(puVar16 + (uVar10 - 0xa76c6ff));
      uVar7 = *puVar1;
      *puVar1 = in_RAX;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = uVar14;
      uVar24 = *(ulonglong *)(unaff_R13 + -0xa0);
      *puVar1 = uVar19;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = uVar7;
      uVar14 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707));
      uVar19 = *puVar1;
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) =
           *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) ^ uVar4;
      *(ulonglong *)(puVar16 + lVar13) = *(ulonglong *)(puVar16 + lVar13) ^ uVar4;
      *puVar1 = uVar8;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = uVar5;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f)) = uVar5;
      uVar2 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7));
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7)) =
           ~*(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7));
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7)) =
           *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7)) | uVar4;
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c70f)) =
           ~(uVar4 ^ 0xffffffffffffffff | uVar2) | ~*(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6e7)) =
           *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f));
      uVar7 = *puVar1;
      uVar5 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7));
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7)) = uVar14;
      *puVar1 = uVar5;
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c707)) = uVar24 + uVar4 + (uVar24 & uVar4) * -2;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c70f)) = 0x16106cc24;
      FUN_166046324(uVar14,uVar7,uVar17,uVar6);
      *(ulonglong *)(puVar16 + lVar13) = *(ulonglong *)(puVar16 + lVar13) & 0x166046324;
      *(longlong *)(puVar16 + lVar13) = *(longlong *)(puVar16 + lVar13) << 1;
      *puVar1 = in_R11;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c707)) = uVar19;
      *(ulonglong *)(puVar16 + lVar13) = (0x166046323 - ~uVar17) - *(longlong *)(puVar16 + lVar13);
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7)) =
           *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6e7)) ^ 0x166046324;
      *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7)) = uVar3;
      lVar13 = *(longlong *)(puVar16 + (uVar10 - 0xa76c6df));
      *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6df)) =
           *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6df)) & 0x166046324;
      *puVar1 = uVar14;
      *(longlong *)(puVar16 + (uVar10 - 0xa76c6df)) =
           *(longlong *)(puVar16 + (uVar10 - 0xa76c6df)) << 1;
      *(code **)(puVar16 + (uVar10 - 0xa76c6df)) =
           FUN_166046324 + (lVar13 - *(longlong *)(puVar16 + (uVar10 - 0xa76c6df)));
      *(undefined1 **)(puVar16 + (uVar10 - 0xa76c6f7)) = &LAB_161347a27;
      return;
    }
  }
  else {
    uVar24 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6ff));
  }
  uVar14 = *(undefined8 *)(puVar16 + (uVar10 - 0xa76c6f7));
  *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) =
       (ulonglong)((uVar24 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar24 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar24 & 0x200) != 0) * 0x200 | (ulonglong)((uVar24 & 0x100) != 0) * 0x100 |
       0x80 | (ulonglong)((uVar24 & 0x10) != 0) * 0x10 | 5 |
       (ulonglong)((uVar24 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar24 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) =
       *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) | 1;
  uVar24 = *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7));
  bVar23 = (uVar24 & 0x80) != 0;
  bVar22 = (uVar24 & 0x40) != 0;
  bVar21 = (uVar24 & 4) != 0;
  bVar20 = (uVar24 & 1) != 0;
  if (bVar20) {
    uVar18 = (uint)uVar6;
    bVar23 = (int)uVar18 < 0;
    bVar22 = uVar18 == 0;
    bVar21 = (POPCOUNT(uVar18 & 0xff) & 1U) == 0;
  }
  DAT_d2f741fa0b41d7f7 = (undefined1)in_RAX;
  *(ulonglong *)(puVar16 + (uVar10 - 0xa76c6f7)) =
       (ulonglong)((uVar24 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(!bVar20 && (uVar24 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar24 & 0x400) != 0) * 0x400 | (ulonglong)((uVar24 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar24 & 0x100) != 0) * 0x100 | (ulonglong)bVar23 * 0x80 |
       (ulonglong)bVar22 * 0x40 | (ulonglong)((uVar24 & 0x10) != 0) * 0x10 | (ulonglong)bVar21 * 4 |
       (ulonglong)((uVar24 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar24 & 0x40000) != 0) * 0x40000;
  *(ushort *)(puVar16 + (uVar10 - 0xa76c6f7)) = *(ushort *)(puVar16 + (uVar10 - 0xa76c6f7)) & 0x100;
  puVar15 = puVar16 + (uVar10 - 0xa76c6f7);
  if (*(short *)(puVar16 + (uVar10 - 0xa76c6f7)) == 0) {
    puVar15 = puVar16 + lVar13;
  }
  *(undefined8 *)(puVar15 + -0x18) = uVar5;
  *(undefined8 *)(puVar15 + -0x20) = uVar5;
  *(code **)(puVar15 + -0x18) = FUN_1564f9df3;
  FUN_16133ff4e(uVar14,param_2,0xffffffff,puVar15 + -8);
  return;
}



// FUNCTION 14d935e66 FUN_14d935e66 body=76 status=ok
// SIG undefined FUN_14d935e66(void)

void FUN_14d935e66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  
  FUN_15b3d5987(param_1,uStackX_8,param_3,param_4);
  return;
}



// FUNCTION 14d935ebb FUN_14d935ebb body=75 status=ok
// SIG undefined FUN_14d935ebb(void)

longlong FUN_14d935ebb(void)

{
  ulonglong unaff_RBP;
  
  return 1 - ~unaff_RBP;
}



// FUNCTION 14d935f07 FUN_14d935f07 body=139 status=ok
// SIG undefined FUN_14d935f07(void)

void FUN_14d935f07(undefined8 param_1,undefined8 param_2)

{
  FUN_15719e59d(param_1,param_2,FUN_15719e59d);
  return;
}



// FUNCTION 14d935f93 FUN_14d935f93 body=153 status=ok
// SIG undefined FUN_14d935f93(void)

void FUN_14d935f93(undefined8 param_1)

{
  (*(code *)0x15b86db70)(param_1);
  return;
}



// FUNCTION 14d9365e4 FUN_14d9365e4 body=188 status=ok
// SIG undefined FUN_14d9365e4(void)

void FUN_14d9365e4(void)

{
  uint *puVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  uint unaff_retaddr;
  
  uVar2 = unaff_retaddr ^ 0x9e92430;
  puVar1 = (uint *)(&stack0xfffffffffdcfdbdf + uVar2);
  *(undefined8 *)puVar1 = in_R10;
  *(undefined4 *)(&stack0xfffffffffdcfdbe3 + uVar2) = 0;
  *puVar1 = *puVar1;
  if (-1 < (int)*puVar1) {
    *puVar1 = 0xa5747d7;
    *puVar1 = *puVar1 ^ 0xa5747d7;
    puVar1[1] = 0;
    *(undefined8 *)puVar1 = unaff_RBP;
    *(undefined8 *)(puVar1 + -2) = unaff_RBP;
    *(undefined **)puVar1 = &DAT_14d9366a0;
    (*(code *)0x162bb2242)();
    return;
  }
  *(undefined4 *)(&stack0xfffffffffdcfdbe3 + uVar2) = 0xffffffff;
  puVar1[-2] = 0x4d936642;
  puVar1[-1] = 1;
  return;
}



// FUNCTION 14d9367c8 FUN_14d9367c8 body=445 status=ok
// SIG undefined FUN_14d9367c8(void)

/* WARNING: Removing unreachable block (ram,0x000165913e5a) */
/* WARNING: Removing unreachable block (ram,0x000164c2673d) */
/* WARNING: Removing unreachable block (ram,0x000164c26749) */
/* WARNING: Removing unreachable block (ram,0x000165913e4f) */
/* WARNING: Removing unreachable block (ram,0x0001563ee327) */
/* WARNING: Removing unreachable block (ram,0x0001563ee32d) */
/* WARNING: Removing unreachable block (ram,0x0001628bee4b) */
/* WARNING: Removing unreachable block (ram,0x0001563ee203) */
/* WARNING: Removing unreachable block (ram,0x0001563ee286) */
/* WARNING: Removing unreachable block (ram,0x0001563ee28b) */
/* WARNING: Removing unreachable block (ram,0x0001563ee291) */
/* WARNING: Removing unreachable block (ram,0x00015742cba2) */
/* WARNING: Removing unreachable block (ram,0x00014e1c3af1) */
/* WARNING: Removing unreachable block (ram,0x0001628bee51) */
/* WARNING: Removing unreachable block (ram,0x0001628beda2) */
/* WARNING: Removing unreachable block (ram,0x0001628beda8) */
/* WARNING: Removing unreachable block (ram,0x0001628bee3a) */
/* WARNING: Removing unreachable block (ram,0x00015786ff94) */
/* WARNING: Removing unreachable block (ram,0x00015724faf6) */
/* WARNING: Removing unreachable block (ram,0x00015786ffad) */
/* WARNING: Removing unreachable block (ram,0x00014d93687e) */
/* WARNING: Removing unreachable block (ram,0x00014d9368d7) */
/* WARNING: Removing unreachable block (ram,0x00014d936909) */
/* WARNING: Removing unreachable block (ram,0x000165913dc7) */
/* WARNING: Removing unreachable block (ram,0x00015786fed4) */
/* WARNING: Removing unreachable block (ram,0x0001652aa4c7) */
/* WARNING: Removing unreachable block (ram,0x00015786fee9) */
/* WARNING: Removing unreachable block (ram,0x00015786ffa2) */
/* WARNING: Removing unreachable block (ram,0x00015786ffa7) */
/* WARNING: Removing unreachable block (ram,0x000165913dd2) */
/* WARNING: Removing unreachable block (ram,0x0001652aa4f0) */
/* WARNING: Removing unreachable block (ram,0x0001652aa503) */
/* WARNING: Removing unreachable block (ram,0x000164c266d7) */
/* WARNING: Removing unreachable block (ram,0x000165913de6) */
/* WARNING: Removing unreachable block (ram,0x000164c266df) */
/* WARNING: Removing unreachable block (ram,0x000161db33f0) */
/* WARNING: Removing unreachable block (ram,0x000161db3404) */
/* WARNING: Removing unreachable block (ram,0x000165913df6) */
/* WARNING: Removing unreachable block (ram,0x000165913e09) */
/* WARNING: Removing unreachable block (ram,0x000165913e13) */
/* WARNING: Removing unreachable block (ram,0x0001669d6b7e) */
/* WARNING: Removing unreachable block (ram,0x00014dbc72cf) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7309) */
/* WARNING: Removing unreachable block (ram,0x00014dbc730e) */
/* WARNING: Removing unreachable block (ram,0x00015724fa00) */
/* WARNING: Removing unreachable block (ram,0x00015724fa3d) */
/* WARNING: Removing unreachable block (ram,0x00015724faf0) */
/* WARNING: Removing unreachable block (ram,0x000157332729) */
/* WARNING: Removing unreachable block (ram,0x00015786fecb) */
/* WARNING: Removing unreachable block (ram,0x00014dbc7342) */

void FUN_14d9367c8(ulonglong param_1)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_RDI + -0x40) ^ param_1)) {
    FUN_1622f774c();
    return;
  }
  FUN_1622f774c();
  return;
}



// FUNCTION 14d936d16 FUN_14d936d16 body=705 status=ok
// SIG undefined FUN_14d936d16(void)

/* WARNING: Removing unreachable block (ram,0x00014d936da2) */
/* WARNING: Removing unreachable block (ram,0x00014d936da8) */
/* WARNING: Removing unreachable block (ram,0x00014d936ebb) */
/* WARNING: Removing unreachable block (ram,0x00014d936ec0) */
/* WARNING: Removing unreachable block (ram,0x00014d936ec6) */
/* WARNING: Removing unreachable block (ram,0x00014d936ef3) */
/* WARNING: Removing unreachable block (ram,0x00015b8fe925) */

undefined8 FUN_14d936d16(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d936f47 FUN_14d936f47 body=165 status=ok
// SIG undefined FUN_14d936f47(void)

void FUN_14d936f47(void)

{
  FUN_14dec6180(FUN_14dec6180);
  return;
}



// FUNCTION 14d936fee FUN_14d936fee body=34 status=ok
// SIG undefined FUN_14d936fee(void)

void FUN_14d936fee(void)

{
  char cVar1;
  char in_AL;
  char unaff_retaddr;
  longlong local_res10;
  
  LOCK();
  cVar1 = unaff_retaddr;
  if (in_AL != DAT_14d7be290) {
    cVar1 = DAT_14d7be290;
  }
  DAT_14d7be290 = cVar1;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = 0x604c8b2;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d937115 FUN_14d937115 body=121 status=ok
// SIG undefined FUN_14d937115(void)

void FUN_14d937115(void)

{
  return;
}



// FUNCTION 14d937278 FUN_14d937278 body=160 status=ok
// SIG undefined FUN_14d937278(void)

void FUN_14d937278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(in_RAX + 0x10) = param_2;
  *(undefined8 *)(param_5 + -8) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x10) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = param_3;
  *(undefined8 *)(param_5 + -0x20) = local_res10;
  *(undefined8 *)(param_5 + -0x28) = unaff_RBX;
  *(undefined8 *)(param_5 + -0x30) = unaff_R14;
  (*(code *)&LAB_161ad475a)(param_1,&LAB_161ad475a,*(undefined8 *)(param_5 + -8));
  return;
}



// FUNCTION 14d937319 FUN_14d937319 body=142 status=ok
// SIG undefined FUN_14d937319(void)

void FUN_14d937319(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000010;
  
  (*(code *)0x160b6cece)(in_stack_00000010,param_2,0x160b6cece);
  return;
}



// FUNCTION 14d93758a FUN_14d93758a body=133 status=ok
// SIG undefined FUN_14d93758a(void)

/* WARNING: Removing unreachable block (ram,0x00014d937605) */
/* WARNING: Removing unreachable block (ram,0x00014d937610) */
/* WARNING: Removing unreachable block (ram,0x00014d937625) */
/* WARNING: Removing unreachable block (ram,0x00014d93760b) */

undefined8 FUN_14d93758a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_164825f36();
  return uVar1;
}



// FUNCTION 14d937610 FUN_14d937610 body=93 status=ok
// SIG undefined FUN_14d937610(void)

undefined8 FUN_14d937610(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 in_RAX;
  ushort *in_R10;
  longlong local_res18;
  
  *in_R10 = *in_R10 ^ 0xffff;
  LOCK();
  cVar2 = param_1;
  if ((char)in_RAX != DAT_14d7ad288) {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14d7ad288);
    cVar2 = DAT_14d7ad288;
  }
  DAT_14d7ad288 = cVar2;
  UNLOCK();
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = 0x1e942;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -0x18);
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(code **)(local_res18 + -0x10) = FUN_1629c9909;
  return uVar1;
}



// FUNCTION 14d937735 FUN_14d937735 body=445 status=ok
// SIG undefined FUN_14d937735(void)

void FUN_14d937735(void)

{
  (*(code *)0x1654bac19)();
  return;
}



// FUNCTION 14d9377c8 FUN_14d9377c8 body=21 status=ok
// SIG undefined FUN_14d9377c8(void)

void FUN_14d9377c8(void)

{
  longlong unaff_RBX;
  
                    /* WARNING: Could not recover jumptable at 0x00014d9377d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_RBX + 0xe0))();
  return;
}



// FUNCTION 14d937877 FUN_14d937877 body=790 status=ok
// SIG undefined FUN_14d937877(void)

/* WARNING: Removing unreachable block (ram,0x00014d9379a4) */
/* WARNING: Removing unreachable block (ram,0x00014d9379af) */
/* WARNING: Removing unreachable block (ram,0x00014d9379aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9378d5) */
/* WARNING: Removing unreachable block (ram,0x00014d93790e) */

void FUN_14d937877(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15749df17((*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14d937cd2 FUN_14d937cd2 body=282 status=ok
// SIG undefined FUN_14d937cd2(void)

void FUN_14d937cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x5597f903;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RSI;
  uVar1 = *(ulonglong *)(local_res18 + -8);
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) | 0xffffffffaa6806fc;
  *(ulonglong *)(local_res18 + -8) =
       ~(~(uVar1 & 0xffffffffaa6806fc) & *(ulonglong *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  uVar1 = *(ulonglong *)(local_res18 + -8);
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) & 0x15b75f9a1;
  *(ulonglong *)(local_res18 + -8) = ~*(ulonglong *)(local_res18 + -8);
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) & (uVar1 | 0x15b75f9a1);
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = 0x14d937d78;
  FUN_15b75f972(param_1,param_2,uVar2);
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  uVar2 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(unaff_RDI + -0x28);
  FUN_16129781a(uVar2);
  return;
}



// FUNCTION 14d937df0 FUN_14d937df0 body=254 status=ok
// SIG undefined FUN_14d937df0(void)

/* WARNING: Removing unreachable block (ram,0x00014d937e98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d937df0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  longlong unaff_R12;
  undefined8 local_res10;
  undefined8 in_stack_00000018;
  longlong in_stack_00000028;
  
  lVar1 = *(longlong *)(unaff_R12 + 0x18);
  *(ulonglong *)(unaff_R12 + 0x18) = *(ulonglong *)(unaff_R12 + 0x18) & ~in_RAX;
  *(ulonglong *)(unaff_R12 + 0x18) = (lVar1 + ~in_RAX) - *(longlong *)(unaff_R12 + 0x18);
  *(longlong *)(unaff_R12 + 0x18) = -*(longlong *)(unaff_R12 + 0x18);
  *(longlong *)(unaff_R12 + 0x18) = *(longlong *)(unaff_R12 + 0x18) + -1;
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBX;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -0x18) = unaff_RSI;
  *(undefined1 **)(in_stack_00000028 + -8) = &LAB_1573d659d;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R10;
  uVar2 = *(undefined8 *)(in_stack_00000028 + -0x18);
  *(undefined **)(in_stack_00000028 + -0x18) = &DAT_162beb140;
  return uVar2;
}



// FUNCTION 14d937f31 FUN_14d937f31 body=272 status=ok
// SIG undefined FUN_14d937f31(void)

void FUN_14d937f31(undefined8 param_1)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong uStackX_20;
  
  lVar1 = unaff_RBP - unaff_R13;
  *(undefined8 *)((longlong)&uStackX_20 + lVar1) = 0x4aedaaaa;
  *(ulonglong *)((longlong)&uStackX_20 + lVar1) =
       *(ulonglong *)((longlong)&uStackX_20 + lVar1) ^ 0x4aedaaaa;
  *(longlong *)((longlong)&uStackX_20 + lVar1) =
       *(longlong *)((longlong)&uStackX_20 + lVar1) - unaff_RSI;
  *(longlong *)((longlong)&uStackX_20 + lVar1) = -*(longlong *)((longlong)&uStackX_20 + lVar1);
  *(undefined8 *)(&stack0x00000028 + lVar1) = unaff_R15;
  *(undefined8 *)((longlong)&uStackX_20 + lVar1) = 0x14d937fbc;
  FUN_15728548d(param_1,local_res8);
  *(undefined1 **)((longlong)&uStackX_20 + lVar1) = &LAB_15b70bc10;
  return;
}



// FUNCTION 14d9383ca FUN_14d9383ca body=1129 status=ok
// SIG undefined FUN_14d9383ca(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001627f0095) */
/* WARNING: Removing unreachable block (ram,0x0001627f00a0) */
/* WARNING: Removing unreachable block (ram,0x00014d93854b) */
/* WARNING: Removing unreachable block (ram,0x0001627f009b) */
/* WARNING: Removing unreachable block (ram,0x00014d9384db) */
/* WARNING: Removing unreachable block (ram,0x00014d93856f) */
/* WARNING: Removing unreachable block (ram,0x00014d93857a) */
/* WARNING: Removing unreachable block (ram,0x00014d938580) */
/* WARNING: Removing unreachable block (ram,0x00014d938445) */
/* WARNING: Removing unreachable block (ram,0x00014d9384d5) */
/* WARNING: Removing unreachable block (ram,0x0001627efee2) */
/* WARNING: Removing unreachable block (ram,0x00014d938585) */
/* WARNING: Removing unreachable block (ram,0x00014d9385d0) */
/* WARNING: Removing unreachable block (ram,0x00014d9385cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14d9383ca(void)

{
  return &DAT_1623b9520;
}



// FUNCTION 14d938798 FUN_14d938798 body=135 status=ok
// SIG undefined FUN_14d938798(void)

ushort FUN_14d938798(void)

{
  ushort unaff_SI;
  undefined2 local_res18;
  
  return 0xffffU - local_res18 & unaff_SI & 0x100 | 0xfeff;
}



// FUNCTION 14d93893a FUN_14d93893a body=166 status=ok
// SIG undefined FUN_14d93893a(void)

void FUN_14d93893a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  (*(code *)&LAB_16608ff86)(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14d9389e2 FUN_14d9389e2 body=154 status=ok
// SIG undefined FUN_14d9389e2(void)

/* WARNING: Removing unreachable block (ram,0x000164b049b6) */
/* WARNING: Removing unreachable block (ram,0x000164b049c7) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000164b04a57) */
/* WARNING: Removing unreachable block (ram,0x000164b04a5d) */
/* WARNING: Removing unreachable block (ram,0x000164b04a62) */
/* WARNING: Removing unreachable block (ram,0x00014d938a7c) */
/* WARNING: Removing unreachable block (ram,0x00014d938afa) */
/* WARNING: Removing unreachable block (ram,0x00014d938b00) */
/* WARNING: Removing unreachable block (ram,0x000164b048a2) */
/* WARNING: Removing unreachable block (ram,0x000164b0491e) */
/* WARNING: Removing unreachable block (ram,0x000164b04923) */
/* WARNING: Removing unreachable block (ram,0x00014d935e66) */
/* WARNING: Removing unreachable block (ram,0x000164b04929) */
/* WARNING: Removing unreachable block (ram,0x000164b049b1) */
/* WARNING: Removing unreachable block (ram,0x000164b049bc) */
/* WARNING: Removing unreachable block (ram,0x000165d89eb3) */
/* WARNING: Removing unreachable block (ram,0x000165d89f1d) */
/* WARNING: Removing unreachable block (ram,0x000165d89f70) */
/* WARNING: Removing unreachable block (ram,0x0001574c4452) */
/* WARNING: Removing unreachable block (ram,0x0001574c44b5) */
/* WARNING: Removing unreachable block (ram,0x0001574c44bb) */
/* WARNING: Removing unreachable block (ram,0x00015b473067) */
/* WARNING: Removing unreachable block (ram,0x00015b4730b5) */
/* WARNING: Removing unreachable block (ram,0x00015b4730b0) */
/* WARNING: Removing unreachable block (ram,0x00015b4730c3) */
/* WARNING: Removing unreachable block (ram,0x00015b47310c) */
/* WARNING: Removing unreachable block (ram,0x00015b47311d) */
/* WARNING: Removing unreachable block (ram,0x00015b473112) */
/* WARNING: Removing unreachable block (ram,0x00015b473101) */

void FUN_14d9389e2(void)

{
  return;
}



// FUNCTION 14d938a7c FUN_14d938a7c body=130 status=ok
// SIG undefined FUN_14d938a7c(void)

/* WARNING: Removing unreachable block (ram,0x000164b049b6) */
/* WARNING: Removing unreachable block (ram,0x000164b049c7) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x000164b04a57) */
/* WARNING: Removing unreachable block (ram,0x000164b04a5d) */
/* WARNING: Removing unreachable block (ram,0x000164b04a62) */
/* WARNING: Removing unreachable block (ram,0x000164b049bc) */
/* WARNING: Removing unreachable block (ram,0x000164b04929) */
/* WARNING: Removing unreachable block (ram,0x00014d938b00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d938a7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong unaff_RBP;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000020;
  
  lVar2 = -~-(0xffffffffffffffff - (unaff_RBP & ~in_stack_00000020) &
             (~in_stack_00000020 | unaff_RBP));
  bVar11 = (in_stack_00000018 & 0x4000) != 0;
  bVar10 = (in_stack_00000018 & 0x800) != 0;
  bVar9 = (in_stack_00000018 & 0x200) != 0;
  bVar8 = (in_stack_00000018 & 0x100) != 0;
  bVar7 = (in_stack_00000018 & 0x80) != 0;
  bVar6 = (in_stack_00000018 & 0x40) != 0;
  bVar5 = (in_stack_00000018 & 0x10) != 0;
  bVar4 = (in_stack_00000018 & 4) != 0;
  bVar3 = (in_stack_00000018 & 1) != 0;
  bVar15 = (in_stack_00000018 & 0x200000) != 0;
  bVar12 = (in_stack_00000018 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *(undefined8 *)(lVar2 + -2) = param_2;
  *(undefined8 *)(lVar2 + -10) = param_2;
  *(ulonglong *)(lVar2 + -0x12) =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((in_stack_00000018 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  if (!bVar7) {
    uVar16 = *(ulonglong *)(lVar2 + -0x12);
    *(ulonglong *)(lVar2 + -0x12) =
         (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
         (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
    uVar16 = *(ulonglong *)(lVar2 + -0x12);
    *(undefined8 *)(lVar2 + -0x12) = in_stack_00000008;
    *(ulonglong *)(lVar2 + -0x1a) =
         (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
         (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(lVar2 + -2) = 0x1177672;
    FUN_15b3d5987();
    return;
  }
  FUN_14d935e66();
  return;
}



// FUNCTION 14d938b00 FUN_14d938b00 body=162 status=ok
// SIG undefined FUN_14d938b00(void)

void FUN_14d938b00(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  ulonglong *unaff_R12;
  undefined8 local_res8;
  
  uVar1 = *unaff_R12;
  uVar2 = *unaff_R12;
  *unaff_R12 = ~*unaff_R12;
  *unaff_R12 = *unaff_R12 | local_res8;
  *unaff_R12 = ~((~uVar1 & unaff_RBP | uVar2) & *unaff_R12);
  FUN_14ded5cb9();
  return;
}



// FUNCTION 14d938c9e FUN_14d938c9e body=1 status=ok
// SIG undefined FUN_14d938c9e(void)

void FUN_14d938c9e(void)

{
  return;
}



// FUNCTION 14d938e11 FUN_14d938e11 body=348 status=ok
// SIG undefined FUN_14d938e11(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0x0000000c : 0x00014d938ec7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d938e11(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165a6aa7b();
  FUN_157542201(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),*(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14d938f6e FUN_14d938f6e body=699 status=ok
// SIG undefined FUN_14d938f6e(void)

/* WARNING: Removing unreachable block (ram,0x000156b0e93c) */
/* WARNING: Removing unreachable block (ram,0x00014d939092) */
/* WARNING: Removing unreachable block (ram,0x00014d93909e) */
/* WARNING: Removing unreachable block (ram,0x00014d9390aa) */
/* WARNING: Removing unreachable block (ram,0x00014d9390b7) */
/* WARNING: Removing unreachable block (ram,0x00014dc81093) */
/* WARNING: Removing unreachable block (ram,0x00014d9391f1) */
/* WARNING: Removing unreachable block (ram,0x00014d9391f7) */
/* WARNING: Removing unreachable block (ram,0x00014d93914b) */
/* WARNING: Removing unreachable block (ram,0x00014d939151) */
/* WARNING: Removing unreachable block (ram,0x00014d939156) */
/* WARNING: Removing unreachable block (ram,0x000157409cb8) */
/* WARNING: Removing unreachable block (ram,0x00014d938ffc) */
/* WARNING: Removing unreachable block (ram,0x00014d939002) */
/* WARNING: Removing unreachable block (ram,0x00014d93908d) */
/* WARNING: Removing unreachable block (ram,0x0001618732c0) */

undefined8 FUN_14d938f6e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1618732c0();
  return uVar1;
}



// FUNCTION 14d939315 FUN_14d939315 body=308 status=ok
// SIG undefined FUN_14d939315(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001610b031a) */
/* WARNING: Removing unreachable block (ram,0x0001610b0320) */
/* WARNING: Removing unreachable block (ram,0x000156763257) */
/* WARNING: Removing unreachable block (ram,0x0001567632d2) */
/* WARNING: Removing unreachable block (ram,0x0001567632d8) */
/* WARNING: Removing unreachable block (ram,0x0001567633b0) */
/* WARNING: Removing unreachable block (ram,0x0001567633ab) */
/* WARNING: Removing unreachable block (ram,0x0001567633d6) */
/* WARNING: Removing unreachable block (ram,0x0001621c0855) */
/* WARNING: Removing unreachable block (ram,0x0001621c08ea) */
/* WARNING: Removing unreachable block (ram,0x0001621c0981) */
/* WARNING: Removing unreachable block (ram,0x000164931662) */
/* WARNING: Removing unreachable block (ram,0x0001621d2c5c) */
/* WARNING: Removing unreachable block (ram,0x0001621d2c62) */
/* WARNING: Removing unreachable block (ram,0x00016579f698) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cee) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cf4) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cf9) */
/* WARNING: Removing unreachable block (ram,0x0001621c08ef) */
/* WARNING: Removing unreachable block (ram,0x0001621c08f5) */
/* WARNING: Removing unreachable block (ram,0x0001621c0911) */
/* WARNING: Removing unreachable block (ram,0x0001621c0915) */
/* WARNING: Removing unreachable block (ram,0x0001621c097c) */
/* WARNING: Removing unreachable block (ram,0x0001621c0983) */
/* WARNING: Removing unreachable block (ram,0x0001621c0989) */
/* WARNING: Removing unreachable block (ram,0x0001649314e2) */
/* WARNING: Removing unreachable block (ram,0x00016493160c) */
/* WARNING: Removing unreachable block (ram,0x000164931611) */
/* WARNING: Removing unreachable block (ram,0x000164931617) */
/* WARNING: Removing unreachable block (ram,0x000164931667) */
/* WARNING: Removing unreachable block (ram,0x0001622f325f) */
/* WARNING: Removing unreachable block (ram,0x0001621d2be0) */
/* WARNING: Removing unreachable block (ram,0x000156ab7f1e) */
/* WARNING: Removing unreachable block (ram,0x0001622f32f2) */
/* WARNING: Removing unreachable block (ram,0x0001622f32f8) */
/* WARNING: Removing unreachable block (ram,0x0001622f32fd) */
/* WARNING: Removing unreachable block (ram,0x0001622f336e) */
/* WARNING: Removing unreachable block (ram,0x000162f2c4cf) */
/* WARNING: Removing unreachable block (ram,0x0001651d5d93) */
/* WARNING: Removing unreachable block (ram,0x000162f2c554) */
/* WARNING: Removing unreachable block (ram,0x000162f2c55a) */
/* WARNING: Removing unreachable block (ram,0x000162f2c55f) */
/* WARNING: Removing unreachable block (ram,0x0001622f3374) */
/* WARNING: Removing unreachable block (ram,0x0001622f341a) */
/* WARNING: Removing unreachable block (ram,0x0001622f3420) */
/* WARNING: Removing unreachable block (ram,0x0001622f3425) */
/* WARNING: Removing unreachable block (ram,0x000161c26cf3) */
/* WARNING: Removing unreachable block (ram,0x000161c26d6a) */
/* WARNING: Removing unreachable block (ram,0x000161c26d6f) */
/* WARNING: Removing unreachable block (ram,0x000161c26d75) */
/* WARNING: Removing unreachable block (ram,0x000161c26de8) */
/* WARNING: Removing unreachable block (ram,0x000161c26df6) */
/* WARNING: Removing unreachable block (ram,0x00014e179d11) */
/* WARNING: Removing unreachable block (ram,0x00014e179eed) */
/* WARNING: Removing unreachable block (ram,0x00014e179ef3) */
/* WARNING: Removing unreachable block (ram,0x000161bd11f9) */
/* WARNING: Removing unreachable block (ram,0x0001621c098e) */
/* WARNING: Removing unreachable block (ram,0x0001621c0994) */
/* WARNING: Removing unreachable block (ram,0x00014dd03eb7) */
/* WARNING: Removing unreachable block (ram,0x00014d9394d4) */
/* WARNING: Removing unreachable block (ram,0x00014d9394da) */
/* WARNING: Removing unreachable block (ram,0x000164f6de21) */
/* WARNING: Removing unreachable block (ram,0x000164f6deb8) */
/* WARNING: Removing unreachable block (ram,0x000164f6deca) */
/* WARNING: Removing unreachable block (ram,0x000164f6dec4) */
/* WARNING: Removing unreachable block (ram,0x00015764ad57) */
/* WARNING: Removing unreachable block (ram,0x00014d93944b) */
/* WARNING: Removing unreachable block (ram,0x0001610b0288) */
/* WARNING: Removing unreachable block (ram,0x0001610b028d) */
/* WARNING: Removing unreachable block (ram,0x0001623659e2) */
/* WARNING: Removing unreachable block (ram,0x00016646020e) */
/* WARNING: Removing unreachable block (ram,0x0001610b0293) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d939315(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong local_res8;
  undefined8 local_res10;
  ulonglong in_stack_00000018;
  ulonglong in_stack_00000030;
  
  uVar11 = ~((~unaff_R15 | in_stack_00000018) & (0xffffffffffffffff - in_stack_00000018 | unaff_R15)
            );
  uVar7 = FUN_1615af50a();
  puVar2 = (ulonglong *)
           (0xffffffffffffffff - (in_stack_00000030 & uVar7) & (in_stack_00000030 | uVar7));
  puVar1 = puVar2 + -1;
  *puVar1 = *(ulonglong *)(unaff_R12 + -0xa0) ^ uVar7;
  puVar2[-2] = 0x164f6dcdf;
  uVar8 = FUN_14da91337();
  puVar2[-2] = in_R11;
  puVar2[-2] = puVar2[-2] + ((-~uVar11 - (~(~uVar11 | 0x14da91337) + 2)) + 1) * -2;
  uVar7 = puVar2[-2];
  puVar2[-2] = uVar8;
  *(undefined4 *)(puVar2 + -2) = 0xc8193fb7;
  *(undefined4 *)((longlong)puVar2 - 0xc) = 0xffffffff;
  lVar4 = puVar2[-2];
  uVar10 = *(ulonglong *)(local_res8 + -0x70) ^ uVar11;
  puVar2[-2] = *(undefined8 *)(local_res8 + -0x80);
  pcVar9 = FUN_1629e8f4c;
  puVar2[-2] = (ulonglong)&LAB_164f6dd7f;
  FUN_1629e8f4c();
  uVar3 = puVar2[1];
  puVar2[1] = puVar2[1] & unaff_R15;
  puVar2[1] = puVar2[1] << 1;
  puVar2[-2] = unaff_R14;
  puVar2[-3] = ~uVar11;
  uVar11 = puVar2[-3];
  puVar2[-2] = puVar2[-2];
  puVar2[1] = (uVar3 + unaff_R15) - puVar2[1];
  uVar12 = *puVar1;
  *puVar1 = uVar10;
  uVar3 = puVar2[2];
  puVar2[2] = puVar2[2] & unaff_R15;
  puVar2[2] = puVar2[2] << 1;
  puVar2[2] = (uVar3 + unaff_R15) - puVar2[2];
  uVar3 = *puVar2;
  *puVar2 = uVar11;
  *puVar1 = uVar7;
  puVar2[-2] = uVar11;
  puVar2[-2] = (ulonglong)pcVar9;
  puVar2[-3] = uVar3;
  uVar7 = puVar2[-3];
  *(ushort *)(puVar2 + 1) = ((ushort)puVar2[1] | 0x100) - 0x100;
  uVar3 = *puVar1;
  uVar10 = *puVar2;
  plVar5 = (longlong *)puVar2[2];
  plVar5[-2] = local_res8;
  plVar5[-3] = 0x166460177;
  FUN_14e0ce468();
  uVar11 = *(ulonglong *)(lVar4 + 0x37e6c001);
  *(ulonglong *)(lVar4 + 0x37e6c001) = ~*(ulonglong *)(lVar4 + 0x37e6c001);
  *(ulonglong *)(lVar4 + 0x37e6c001) = *(ulonglong *)(lVar4 + 0x37e6c001) | uVar7;
  *(ulonglong *)(lVar4 + 0x37e6c001) =
       ~((0xffffffffffffffff - uVar7 | uVar11) & *(ulonglong *)(lVar4 + 0x37e6c001));
  lVar6 = plVar5[-1];
  lVar4 = *plVar5;
  plVar5[3] = plVar5[3] ^ uVar7;
  plVar5[1] = uVar3;
  *plVar5 = 0;
  *plVar5 = *plVar5 - lVar4;
  *plVar5 = -*plVar5;
  puVar1 = (ulonglong *)(plVar5 + -1);
  *puVar1 = uVar10;
  plVar5[-2] = local_res10;
  plVar5[-2] = -~unaff_RBP - unaff_RDI;
  *puVar1 = *puVar1;
  plVar5[-2] = CONCAT62((int6)(uVar3 >> 0x10),(short)plVar5[2]) | 0x100;
  *(short *)(plVar5 + 2) = (short)plVar5[-2] + -0x100;
  lVar4 = plVar5[3];
  *(ulonglong *)(lVar4 + -8) = uVar12;
  *(longlong *)(lVar4 + -0x10) = lVar6;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -8) = 0;
  *(undefined1 **)(lVar4 + -8) = &LAB_165f5469f + *(longlong *)(lVar4 + -8);
  *(undefined8 *)(lVar4 + -0x18) = 0x165f54659;
  return;
}



// FUNCTION 14d93944b FUN_14d93944b body=849 status=ok
// SIG undefined FUN_14d93944b(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001621c098e) */
/* WARNING: Removing unreachable block (ram,0x0001621c0994) */
/* WARNING: Removing unreachable block (ram,0x00014dd03eb7) */
/* WARNING: Removing unreachable block (ram,0x0001621c0981) */
/* WARNING: Removing unreachable block (ram,0x0001622f32f8) */
/* WARNING: Removing unreachable block (ram,0x0001622f32f2) */
/* WARNING: Removing unreachable block (ram,0x0001622f32fd) */
/* WARNING: Removing unreachable block (ram,0x0001622f336e) */
/* WARNING: Removing unreachable block (ram,0x000162f2c4cf) */
/* WARNING: Removing unreachable block (ram,0x0001651d5d93) */
/* WARNING: Removing unreachable block (ram,0x000162f2c554) */
/* WARNING: Removing unreachable block (ram,0x000162f2c55a) */
/* WARNING: Removing unreachable block (ram,0x000162f2c55f) */
/* WARNING: Removing unreachable block (ram,0x0001622f3374) */
/* WARNING: Removing unreachable block (ram,0x0001622f341a) */
/* WARNING: Removing unreachable block (ram,0x0001622f3420) */
/* WARNING: Removing unreachable block (ram,0x0001622f3425) */
/* WARNING: Removing unreachable block (ram,0x000161c26cf3) */
/* WARNING: Removing unreachable block (ram,0x000161c26d6a) */
/* WARNING: Removing unreachable block (ram,0x000161c26d6f) */
/* WARNING: Removing unreachable block (ram,0x000161c26d75) */
/* WARNING: Removing unreachable block (ram,0x000161c26de8) */
/* WARNING: Removing unreachable block (ram,0x000161c26df6) */
/* WARNING: Removing unreachable block (ram,0x00014e179d11) */
/* WARNING: Removing unreachable block (ram,0x00014e179eed) */
/* WARNING: Removing unreachable block (ram,0x00014e179ef3) */
/* WARNING: Removing unreachable block (ram,0x000161bd11f9) */
/* WARNING: Removing unreachable block (ram,0x000156763257) */
/* WARNING: Removing unreachable block (ram,0x0001621c0855) */
/* WARNING: Removing unreachable block (ram,0x0001621c08ea) */
/* WARNING: Removing unreachable block (ram,0x0001621c08ef) */
/* WARNING: Removing unreachable block (ram,0x0001621c08f5) */
/* WARNING: Removing unreachable block (ram,0x0001621c0911) */
/* WARNING: Removing unreachable block (ram,0x0001621c0915) */
/* WARNING: Removing unreachable block (ram,0x0001621c097c) */
/* WARNING: Removing unreachable block (ram,0x0001621c0983) */
/* WARNING: Removing unreachable block (ram,0x0001621c0989) */
/* WARNING: Removing unreachable block (ram,0x0001649314e2) */
/* WARNING: Removing unreachable block (ram,0x00016493160c) */
/* WARNING: Removing unreachable block (ram,0x000164931611) */
/* WARNING: Removing unreachable block (ram,0x000164931617) */
/* WARNING: Removing unreachable block (ram,0x000164931667) */
/* WARNING: Removing unreachable block (ram,0x0001622f325f) */
/* WARNING: Removing unreachable block (ram,0x0001621d2be0) */
/* WARNING: Removing unreachable block (ram,0x0001621d2c5c) */
/* WARNING: Removing unreachable block (ram,0x000156ab7f1e) */
/* WARNING: Removing unreachable block (ram,0x0001621d2c62) */
/* WARNING: Removing unreachable block (ram,0x00016579f698) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cee) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cf4) */
/* WARNING: Removing unreachable block (ram,0x0001621d2cf9) */
/* WARNING: Removing unreachable block (ram,0x000164931662) */
/* WARNING: Removing unreachable block (ram,0x00014d9394d4) */
/* WARNING: Removing unreachable block (ram,0x00014d9394da) */
/* WARNING: Removing unreachable block (ram,0x0001610b031a) */
/* WARNING: Removing unreachable block (ram,0x0001610b0320) */
/* WARNING: Removing unreachable block (ram,0x0001567632d2) */
/* WARNING: Removing unreachable block (ram,0x0001567632d8) */
/* WARNING: Removing unreachable block (ram,0x0001567633b0) */
/* WARNING: Removing unreachable block (ram,0x0001567633ab) */
/* WARNING: Removing unreachable block (ram,0x0001567633d6) */
/* WARNING: Removing unreachable block (ram,0x0001610b0293) */

void FUN_14d93944b(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  if (-1 < (longlong)&stack0xfffffffffffffff8) {
    FUN_160fe8aab(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                          ~(~*(ulonglong *)(unaff_RDI + -0x68) & ~param_1),param_3);
    return;
  }
  FUN_1623659e2();
  return;
}



// FUNCTION 14d93954b FUN_14d93954b body=226 status=ok
// SIG undefined FUN_14d93954b(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d93954b(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined1 *unaff_RDI;
  undefined2 in_CS;
  undefined8 unaff_retaddr;
  ulonglong uStackX_8;
  longlong local_res10;
  
  uVar9 = *(ulonglong *)(unaff_RDI + -0x80) | param_1;
  uVar7 = FUN_1622cfec1(param_1,uVar9,
                        *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                        (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                        ~((~*(ulonglong *)(unaff_RDI + -0x60) | param_4) +
                          *(longlong *)(unaff_RDI + -0x60) + 1) & unaff_RBP ^ param_1);
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  puVar3 = (ulonglong *)(local_res10 + -0x10);
  *puVar3 = uVar9;
  *(ulonglong *)(local_res10 + -0x18) = uVar9;
  *puVar3 = *(ulonglong *)(local_res10 + -8);
  *(undefined **)(local_res10 + -8) = &DAT_14d939645;
  puVar6 = (undefined1 *)*puVar3;
  uVar10 = (ulonglong)
           (uint)((int)puVar3 + 8 + (int)CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)uVar7 + -0x70)
                 );
  LOCK();
  puVar1 = (undefined4 *)((ulonglong)(uint)((int)uVar7 >> 0x1f) - 0x22);
  uVar4 = *puVar1;
  *puVar1 = (int)param_1;
  lVar8 = CONCAT44((int)(param_1 >> 0x20),uVar4);
  UNLOCK();
  pcVar2 = (char *)(lVar8 + 0x535f90e2);
  *pcVar2 = *pcVar2 + (char)uVar4;
  *unaff_RDI = *puVar6;
  iVar5 = *(int *)(puVar6 + (ulonglong)((uStackX_8 & 0x400) != 0) * -2 + 1);
  *(ulonglong *)(uVar10 - 8) = uVar10;
  *(undefined2 *)(uVar10 - 0xc) = in_CS;
  *(undefined4 *)(uVar10 - 0x10) = 0x4d7a52ea;
  (*(code *)(CONCAT44((int)((ulonglong)uVar7 >> 0x20),iVar5) + -0xb))(lVar8,iVar5 >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d939733 FUN_14d939733 body=165 status=ok
// SIG undefined FUN_14d939733(void)

void FUN_14d939733(void)

{
  uint unaff_R12D;
  longlong unaff_R15;
  
  *(undefined4 *)(unaff_R15 + 0x104) = 0xffffffff;
  *(uint *)(unaff_R15 + 0x104) = ~((unaff_R12D ^ 0xffffffff) & *(uint *)(unaff_R15 + 0x104));
  return;
}



// FUNCTION 14d9397d8 FUN_14d9397d8 body=92 status=ok
// SIG undefined FUN_14d9397d8(void)

void FUN_14d9397d8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014d939832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14d939a50 FUN_14d939a50 body=162 status=ok
// SIG undefined FUN_14d939a50(void)

void FUN_14d939a50(void)

{
  return;
}



// FUNCTION 14d939b8a FUN_14d939b8a body=131 status=ok
// SIG undefined FUN_14d939b8a(void)

/* WARNING: Removing unreachable block (ram,0x00014d939bac) */

undefined8 FUN_14d939b8a(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x48);
}



// FUNCTION 14d939c0e FUN_14d939c0e body=169 status=ok
// SIG undefined FUN_14d939c0e(void)

/* WARNING: Removing unreachable block (ram,0x0001666c62d4) */
/* WARNING: Removing unreachable block (ram,0x000164bf2bc4) */
/* WARNING: Removing unreachable block (ram,0x000164bf2bca) */
/* WARNING: Removing unreachable block (ram,0x000164bf2bcf) */
/* WARNING: Removing unreachable block (ram,0x00014d939cad) */
/* WARNING: Removing unreachable block (ram,0x00014d939cb8) */
/* WARNING: Removing unreachable block (ram,0x00014d939d4d) */
/* WARNING: Removing unreachable block (ram,0x00014d939d53) */
/* WARNING: Removing unreachable block (ram,0x000165defd7f) */
/* WARNING: Removing unreachable block (ram,0x00016135ecc6) */
/* WARNING: Removing unreachable block (ram,0x000165defe08) */
/* WARNING: Removing unreachable block (ram,0x000165defe0e) */
/* WARNING: Removing unreachable block (ram,0x000165defe13) */
/* WARNING: Removing unreachable block (ram,0x000165defe8f) */
/* WARNING: Removing unreachable block (ram,0x000165defe95) */
/* WARNING: Removing unreachable block (ram,0x000164bf296c) */
/* WARNING: Removing unreachable block (ram,0x000164bf29fc) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a01) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a07) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a0c) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a9f) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a9a) */
/* WARNING: Removing unreachable block (ram,0x000164bf2ab7) */
/* WARNING: Removing unreachable block (ram,0x000164bf2ad6) */
/* WARNING: Removing unreachable block (ram,0x000164be2500) */
/* WARNING: Removing unreachable block (ram,0x000164bf2b2b) */
/* WARNING: Removing unreachable block (ram,0x000164bf2b31) */
/* WARNING: Removing unreachable block (ram,0x000164bf2b36) */
/* WARNING: Removing unreachable block (ram,0x00014d93cf6d) */
/* WARNING: Removing unreachable block (ram,0x00014d939cb3) */

ulonglong FUN_14d939c0e(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14d939cb8 FUN_14d939cb8 body=290 status=ok
// SIG undefined FUN_14d939cb8(void)

/* WARNING: Removing unreachable block (ram,0x000164bf2bc4) */
/* WARNING: Removing unreachable block (ram,0x000164bf2bca) */
/* WARNING: Removing unreachable block (ram,0x000164bf2bcf) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a0c) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a9f) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a9a) */
/* WARNING: Removing unreachable block (ram,0x000164bf2ab7) */
/* WARNING: Removing unreachable block (ram,0x000164bf2ad6) */
/* WARNING: Removing unreachable block (ram,0x000164bf2b2b) */
/* WARNING: Removing unreachable block (ram,0x000164bf2b31) */
/* WARNING: Removing unreachable block (ram,0x000164be2500) */
/* WARNING: Removing unreachable block (ram,0x000165defe13) */
/* WARNING: Removing unreachable block (ram,0x000165defe8f) */
/* WARNING: Removing unreachable block (ram,0x000165defe95) */
/* WARNING: Removing unreachable block (ram,0x000164bf296c) */
/* WARNING: Removing unreachable block (ram,0x000164bf29fc) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a01) */
/* WARNING: Removing unreachable block (ram,0x000164bf2a07) */
/* WARNING: Removing unreachable block (ram,0x00014d93cf6d) */
/* WARNING: Removing unreachable block (ram,0x00014d939d53) */

void FUN_14d939cb8(void)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  ushort local_res10;
  uint6 uStackX_12;
  longlong lStackX_18;
  
  uVar2 = (~local_res10 & 0x100 | local_res10) - 0x100;
  *(undefined8 *)(lStackX_18 + -8) = unaff_RBX;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RBX;
  *(ulonglong *)(lStackX_18 + -0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  uVar10 = *(ulonglong *)(lStackX_18 + -0x18);
  bVar7 = (uVar10 & 0x4000) != 0;
  bVar6 = (uVar10 & 0x400) != 0;
  bVar5 = (uVar10 & 0x200) != 0;
  bVar4 = (uVar10 & 0x100) != 0;
  bVar3 = (uVar10 & 0x10) != 0;
  bVar9 = (uVar10 & 0x200000) != 0;
  bVar8 = (uVar10 & 0x40000) != 0;
  *(ulonglong *)(lStackX_18 + -0x18) =
       (ulonglong)bVar7 * 0x4000 | (ulonglong)((uVar10 & 0x800) != 0) * 0x800 |
       (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar4 * 0x100 |
       (ulonglong)((uVar10 & 0x80) != 0) * 0x80 | (ulonglong)((uVar10 & 0x40) != 0) * 0x40 |
       (ulonglong)bVar3 * 0x10 | (ulonglong)((uVar10 & 4) != 0) * 4 | (ulonglong)((uVar10 & 1) != 0)
       | (ulonglong)bVar9 * 0x200000 | (ulonglong)bVar8 * 0x40000;
  *(undefined8 *)(lStackX_18 + -0x20) = 0x72823dc;
  uVar10 = *(ulonglong *)(lStackX_18 + -0x20);
  lVar1 = *(longlong *)(lStackX_18 + -0x20);
  *(longlong *)(lStackX_18 + -0x20) = *(longlong *)(lStackX_18 + -0x20) + -0x46d3262;
  *(ulonglong *)(lStackX_18 + -0x20) =
       (ulonglong)bVar7 * 0x4000 | (ulonglong)SBORROW8(lVar1,0x46d3262) * 0x800 |
       (ulonglong)bVar6 * 0x400 | (ulonglong)bVar5 * 0x200 | (ulonglong)bVar4 * 0x100 |
       (ulonglong)(*(longlong *)(lStackX_18 + -0x20) < 0) * 0x80 |
       (ulonglong)(*(longlong *)(lStackX_18 + -0x20) == 0) * 0x40 | (ulonglong)bVar3 * 0x10 |
       (ulonglong)((POPCOUNT(*(ulonglong *)(lStackX_18 + -0x20) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(uVar10 < 0x46d3262) | (ulonglong)bVar9 * 0x200000 | (ulonglong)bVar8 * 0x40000;
  *(undefined8 *)(lStackX_18 + -8) = 0x2baf17a;
  if ((*(ulonglong *)(lStackX_18 + -0x18) & 0x40) == 0) {
    *(undefined8 *)(lStackX_18 + -0x10) = unaff_R13;
    *(undefined8 *)(lStackX_18 + -0x18) = unaff_R13;
    *(undefined8 *)(lStackX_18 + -0x10) = 0x156ef2e25;
    return;
  }
  FUN_16135ecc6();
  return;
}



// FUNCTION 14d939dde FUN_14d939dde body=19 status=ok
// SIG undefined FUN_14d939dde(void)

void FUN_14d939dde(void)

{
  FUN_14d7aac6a();
  return;
}



// FUNCTION 14d939f79 FUN_14d939f79 body=195 status=ok
// SIG undefined FUN_14d939f79(void)

/* WARNING: Removing unreachable block (ram,0x000156ab59e6) */

void FUN_14d939f79(longlong param_1)

{
  ulonglong unaff_RBX;
  
  FUN_161440d1b((char)param_1,0xffffffffd6a9f16e,*(ulonglong *)(param_1 + -0x88) ^ unaff_RBX);
  return;
}



// FUNCTION 14d93a15e FUN_14d93a15e body=152 status=ok
// SIG undefined FUN_14d93a15e(void)

/* WARNING: Removing unreachable block (ram,0x00014d93a319) */
/* WARNING: Removing unreachable block (ram,0x00014d93a31f) */
/* WARNING: Removing unreachable block (ram,0x00014d93a3a0) */
/* WARNING: Removing unreachable block (ram,0x00014d93a3a6) */
/* WARNING: Removing unreachable block (ram,0x00014d93a3ab) */
/* WARNING: Removing unreachable block (ram,0x00014d93a1f1) */
/* WARNING: Removing unreachable block (ram,0x00014d93a1f7) */
/* WARNING: Removing unreachable block (ram,0x00014d93a230) */
/* WARNING: Removing unreachable block (ram,0x00014d93a22b) */
/* WARNING: Removing unreachable block (ram,0x00014d93a238) */
/* WARNING: Removing unreachable block (ram,0x0001572cd2f1) */
/* WARNING: Removing unreachable block (ram,0x0001572cd3d2) */
/* WARNING: Removing unreachable block (ram,0x0001572cd3eb) */
/* WARNING: Removing unreachable block (ram,0x00014d93a28e) */
/* WARNING: Removing unreachable block (ram,0x00014d93a294) */
/* WARNING: Removing unreachable block (ram,0x00014d93a299) */
/* WARNING: Removing unreachable block (ram,0x000161121a9f) */
/* WARNING: Removing unreachable block (ram,0x00014de70d7a) */
/* WARNING: Removing unreachable block (ram,0x00014de70dda) */

undefined8 FUN_14d93a15e(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort *puVar2;
  ulonglong in_stack_00000008;
  undefined8 uStack_8;
  
  puVar2 = (ushort *)(0x19 - (~(ulonglong)&uStack_8 + 2));
  *puVar2 = (-0x101 - (((*puVar2 & 0xfeff ^ 0xffff) - 0x101) - ~*puVar2)) + *puVar2;
  uStack_8 = 0x15726351f;
  uVar1 = FUN_14db33950(in_stack_00000008 ^ param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d93a1f7 FUN_14d93a1f7 body=579 status=ok
// SIG undefined FUN_14d93a1f7(void)

/* WARNING: Removing unreachable block (ram,0x00014d93a3ab) */
/* WARNING: Removing unreachable block (ram,0x00014d93a319) */
/* WARNING: Removing unreachable block (ram,0x00014d93a31f) */
/* WARNING: Removing unreachable block (ram,0x00014d93a3a0) */
/* WARNING: Removing unreachable block (ram,0x00014d93a3a6) */
/* WARNING: Removing unreachable block (ram,0x00014de70d7a) */
/* WARNING: Removing unreachable block (ram,0x00014de70dda) */
/* WARNING: Removing unreachable block (ram,0x00014d93a299) */

undefined8 FUN_14d93a1f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_R12;
  undefined8 local_res8;
  
  if (&stack0x00000000 != &DAT_fffffffffffffff8) {
    uVar2 = *(undefined8 *)(unaff_R12 + -0x68);
    uVar1 = *(undefined8 *)(unaff_R12 + -0x98);
    FUN_14db46ad1(param_1,param_2,param_3,local_res8);
    FUN_156eb379f();
    uVar2 = FUN_165c7153c(uVar1,uVar2);
    return uVar2;
  }
  uVar2 = FUN_1572cd2f1();
  return uVar2;
}



// FUNCTION 14d93a3ab FUN_14d93a3ab body=181 status=ok
// SIG undefined FUN_14d93a3ab(void)

void FUN_14d93a3ab(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  longlong unaff_RDI;
  longlong in_R9;
  
  puVar1 = (undefined8 *)(&stack0x00000000 + in_R9);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x38);
  *(undefined4 *)puVar1 = 0x84b31737;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  *puVar1 = in_RAX;
  *(undefined4 *)puVar1 = 0x41d5507d;
  *(undefined4 *)((longlong)puVar1 + 4) = 0;
  *puVar1 = &DAT_15b863a6c;
  return;
}



// FUNCTION 14d93a4ef FUN_14d93a4ef body=139 status=ok
// SIG undefined FUN_14d93a4ef(void)

void FUN_14d93a4ef(longlong param_1)

{
  char local_res8;
  char local_res18 [16];
  
  local_res18[param_1] = local_res18[param_1] - local_res8;
  local_res18[param_1] = -local_res18[param_1];
  return;
}



// FUNCTION 14d93a767 FUN_14d93a767 body=607 status=ok
// SIG undefined FUN_14d93a767(void)

/* WARNING: Removing unreachable block (ram,0x00014d93a87b) */
/* WARNING: Removing unreachable block (ram,0x00014d93a886) */
/* WARNING: Removing unreachable block (ram,0x000161a7d65b) */
/* WARNING: Removing unreachable block (ram,0x000161a7d661) */
/* WARNING: Removing unreachable block (ram,0x000161a7d666) */
/* WARNING: Removing unreachable block (ram,0x000161a7d70e) */
/* WARNING: Removing unreachable block (ram,0x000161a7d713) */
/* WARNING: Removing unreachable block (ram,0x000161a7d719) */
/* WARNING: Removing unreachable block (ram,0x000165927481) */
/* WARNING: Removing unreachable block (ram,0x000166c1820d) */
/* WARNING: Removing unreachable block (ram,0x000166c18207) */
/* WARNING: Removing unreachable block (ram,0x000166c18212) */
/* WARNING: Removing unreachable block (ram,0x000166c182a4) */
/* WARNING: Removing unreachable block (ram,0x000166c182aa) */
/* WARNING: Removing unreachable block (ram,0x000157857aea) */
/* WARNING: Removing unreachable block (ram,0x00014d93a7e9) */
/* WARNING: Removing unreachable block (ram,0x00014d93a7ef) */
/* WARNING: Removing unreachable block (ram,0x000162dc4d46) */
/* WARNING: Removing unreachable block (ram,0x00014d93a881) */
/* WARNING: Removing unreachable block (ram,0x000161a7d5c9) */
/* WARNING: Removing unreachable block (ram,0x00015b191cf3) */
/* WARNING: Removing unreachable block (ram,0x000165536d55) */

void FUN_14d93a767(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 in_R10;
  undefined8 unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x68);
  lVar5 = *(ulonglong *)(unaff_R13 + -0x70) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x70) & unaff_R15) * -2;
  *(undefined8 *)(lVar5 + -8) = in_R10;
  *(undefined8 *)(lVar5 + -0x10) = param_2;
  *(undefined8 *)(lVar5 + -0x18) = unaff_retaddr;
  *(undefined4 *)(lVar5 + -0x18) = 0x27fb0a34;
  *(undefined4 *)(lVar5 + -0x14) = 0;
  uVar4 = *(ulonglong *)(lVar5 + -0x18);
  *(undefined8 *)(lVar5 + -0x18) = unaff_retaddr;
  *(undefined4 *)(lVar5 + -0x18) = 0xb29aef4;
  *(undefined4 *)(lVar5 + -0x14) = 0;
  if ((*(ulonglong *)(lVar5 + -0x18) ^ 0xb29aef4) != (uVar4 ^ 0x27fb0b1c) + 0x16866afb7) {
    FUN_15b191c6e();
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + -0x10);
  *(undefined8 *)(lVar5 + -0x10) = *(undefined8 *)(lVar5 + -8);
  *(ulonglong *)(lVar5 + -0x18) =
       ~((unaff_R15 - (uVar2 | unaff_R15)) + uVar2 | ~(uVar2 | unaff_R15));
  puVar1 = (ulonglong *)(lVar5 + -0x20);
  *(int *)puVar1 = 0x2fe5e20a;
  *(int *)puVar1 = *(int *)puVar1 + 0x76ca535a;
  *(undefined4 *)(lVar5 + -0x1c) = 0xffffffff;
  uVar2 = *puVar1;
  *(undefined8 *)(lVar5 + -0x20) = unaff_R12;
  *(undefined8 *)(lVar5 + (0x594fca93 - ~uVar2)) = 0xfffffffffcf22ec7;
  if (0x594fcaa3 < ~uVar2) {
    FUN_16558df8d(param_1,uVar3,param_3);
    return;
  }
  FUN_16558df8d(param_1,uVar3,param_3);
  return;
}



// FUNCTION 14d93a937 FUN_14d93a937 body=77 status=ok
// SIG undefined FUN_14d93a937(void)

void FUN_14d93a937(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -8) = 0x31db662;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined **)(local_res18 + -0x10) = &DAT_14d93a987;
  return;
}



// FUNCTION 14d93a9d2 FUN_14d93a9d2 body=142 status=ok
// SIG undefined FUN_14d93a9d2(void)

void FUN_14d93a9d2(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156c39ec8(FUN_156c39ec8,param_2,
                (*(ulonglong *)(unaff_R12 + -0xa0) ^ 0xffffffffffffffff) & ~in_RAX |
                *(ulonglong *)(unaff_R12 + -0xa0));
  return;
}



// FUNCTION 14d93aa60 thunk_FUN_14d93aa66 body=5 status=ok
// SIG undefined thunk_FUN_14d93aa66(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d93ab0f) */

void thunk_FUN_14d93aa66(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  ulonglong in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  uint uVar4;
  longlong unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint unaff_retaddr;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)unaff_retaddr;
  plVar1 = (longlong *)(&stack0xfffffffff995ccf7 + uVar5);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  *(undefined4 *)(&stack0xfffffffff995ccef + uVar5) = 0x1663c2d1;
  *(undefined4 *)(&stack0xfffffffff995ccf3 + uVar5) = 0;
  lVar2 = *(longlong *)(&stack0xfffffffff995ccef + uVar5);
  *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = in_R11;
  if (lVar2 == 0x1663c2d1) {
    *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = 0;
    *(ulonglong *)(&stack0xfffffffff995ccef + uVar5) =
         *(ulonglong *)(&stack0xfffffffff995ccef + uVar5) ^ in_R10;
    *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5) = param_2;
    *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = 0;
    *(longlong *)(&stack0xfffffffff995ccef + uVar5) =
         *(longlong *)(&stack0xfffffffff995ccef + uVar5) + unaff_R14;
    uVar3 = *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5);
    *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5) = in_RAX;
    *(undefined4 *)(&stack0xfffffffff995cce7 + uVar5) = 0x72a2aafa;
    *(undefined4 *)(&stack0xfffffffff995cceb + uVar5) = 0x2d361e95;
    *(undefined8 *)(&stack0xfffffffff995ccdf + uVar5) = uVar3;
    uVar4 = *(uint *)(&stack0xfffffffff995cceb + uVar5);
    *(uint *)(&stack0xfffffffff995cceb + uVar5) =
         *(uint *)(&stack0xfffffffff995cceb + uVar5) | 0xd2c9e16a;
    uVar4 = ~(uVar4 & 0xd2c9e16a) & *(uint *)(&stack0xfffffffff995cceb + uVar5);
    *(uint *)(&stack0xfffffffff995cceb + uVar5) = ~uVar4;
    uVar3 = *(undefined8 *)(&stack0xfffffffff995ccdf + uVar5);
    *(ulonglong *)(&stack0xfffffffff995ccdf + uVar5) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
         (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    thunk_FUN_162846641(uVar5 - 0x66a3311,uVar3);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d93aa66 FUN_14d93aa66 body=186 status=ok
// SIG undefined FUN_14d93aa66(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d93ab0f) */

void FUN_14d93aa66(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  ulonglong in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  uint uVar4;
  longlong unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint unaff_retaddr;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)unaff_retaddr;
  plVar1 = (longlong *)(&stack0xfffffffff995ccf7 + uVar5);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  *(undefined4 *)(&stack0xfffffffff995ccef + uVar5) = 0x1663c2d1;
  *(undefined4 *)(&stack0xfffffffff995ccf3 + uVar5) = 0;
  lVar2 = *(longlong *)(&stack0xfffffffff995ccef + uVar5);
  *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = in_R11;
  if (lVar2 == 0x1663c2d1) {
    *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = 0;
    *(ulonglong *)(&stack0xfffffffff995ccef + uVar5) =
         *(ulonglong *)(&stack0xfffffffff995ccef + uVar5) ^ in_R10;
    *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5) = param_2;
    *(undefined8 *)(&stack0xfffffffff995ccef + uVar5) = 0;
    *(longlong *)(&stack0xfffffffff995ccef + uVar5) =
         *(longlong *)(&stack0xfffffffff995ccef + uVar5) + unaff_R14;
    uVar3 = *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5);
    *(undefined8 *)(&stack0xfffffffff995cce7 + uVar5) = in_RAX;
    *(undefined4 *)(&stack0xfffffffff995cce7 + uVar5) = 0x72a2aafa;
    *(undefined4 *)(&stack0xfffffffff995cceb + uVar5) = 0x2d361e95;
    *(undefined8 *)(&stack0xfffffffff995ccdf + uVar5) = uVar3;
    uVar4 = *(uint *)(&stack0xfffffffff995cceb + uVar5);
    *(uint *)(&stack0xfffffffff995cceb + uVar5) =
         *(uint *)(&stack0xfffffffff995cceb + uVar5) | 0xd2c9e16a;
    uVar4 = ~(uVar4 & 0xd2c9e16a) & *(uint *)(&stack0xfffffffff995cceb + uVar5);
    *(uint *)(&stack0xfffffffff995cceb + uVar5) = ~uVar4;
    uVar3 = *(undefined8 *)(&stack0xfffffffff995ccdf + uVar5);
    *(ulonglong *)(&stack0xfffffffff995ccdf + uVar5) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
         (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
         (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
         (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    thunk_FUN_162846641(uVar5 - 0x66a3311,uVar3);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d93abaa FUN_14d93abaa body=87 status=ok
// SIG undefined FUN_14d93abaa(void)

void FUN_14d93abaa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong unaff_R14;
  longlong unaff_R15;
  ulonglong uVar3;
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
  ulonglong unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  uVar3 = unaff_R15 - unaff_R14;
  puVar1 = (undefined8 *)(param_6 ^ unaff_retaddr);
  param_5 = uVar3 & 0xfffffffffffffeff;
  bVar12 = (uVar3 & 0x4000) != 0;
  bVar11 = (uVar3 & 0x800) != 0;
  bVar10 = (uVar3 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar3 & 0x80) != 0;
  bVar7 = (uVar3 & 0x40) != 0;
  bVar6 = (uVar3 & 0x10) != 0;
  bVar5 = (uVar3 & 4) != 0;
  bVar4 = (uVar3 & 1) != 0;
  bVar16 = (uVar3 & 0x200000) != 0;
  bVar13 = (uVar3 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(param_1,uStackX_18,param_3,uStackX_10);
  *puVar1 = uStackX_8;
  puVar1[-1] = uStackX_8;
  puVar1[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  puVar1[-3] = param_3;
  puVar1[-4] = param_3;
  puVar1[-3] = &DAT_14d93ac03;
  return;
}



// FUNCTION 14d93ac2f FUN_14d93ac2f body=101 status=ok
// SIG undefined FUN_14d93ac2f(void)

void FUN_14d93ac2f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 uStackX_20;
  
  *param_4 = -*param_4;
  *param_4 = *param_4 + -1;
  if ((param_6 & 0x80) == 0) {
    return;
  }
  FUN_156b4cd74(param_1,FUN_156b4cd74,param_5,uStackX_20);
  return;
}



// FUNCTION 14d93ac94 FUN_14d93ac94 body=60 status=ok
// SIG undefined FUN_14d93ac94(void)

void FUN_14d93ac94(void)

{
  return;
}



// FUNCTION 14d93acd0 FUN_14d93acd0 body=189 status=ok
// SIG undefined FUN_14d93acd0(void)

void FUN_14d93acd0(void)

{
  return;
}



// FUNCTION 14d93ae13 FUN_14d93ae13 body=138 status=ok
// SIG undefined FUN_14d93ae13(void)

void FUN_14d93ae13(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R10;
  ulonglong in_R11;
  longlong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R15 + 8);
  uVar2 = *(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = ~*(ulonglong *)(unaff_R15 + 8);
  *(ulonglong *)(unaff_R15 + 8) = *(ulonglong *)(unaff_R15 + 8) | in_R10;
  uVar3 = *(ulonglong *)(unaff_R15 + 8);
  *(undefined8 *)(unaff_R15 + 8) = 0;
  *(longlong *)(unaff_R15 + 8) =
       *(longlong *)(unaff_R15 + 8) - (((in_R11 + lVar1) - (in_R11 & uVar2) & uVar3) + 1);
  return;
}



// FUNCTION 14d93ae9d thunk_FUN_14d93aea3 body=5 status=ok
// SIG undefined thunk_FUN_14d93aea3(void)

/* WARNING: Removing unreachable block (ram,0x000156708a78) */
/* WARNING: Removing unreachable block (ram,0x000156708a7e) */
/* WARNING: Removing unreachable block (ram,0x000156708af3) */
/* WARNING: Removing unreachable block (ram,0x000156708af9) */
/* WARNING: Removing unreachable block (ram,0x000156708afe) */
/* WARNING: Removing unreachable block (ram,0x000156708b85) */
/* WARNING: Removing unreachable block (ram,0x000156708b8a) */
/* WARNING: Removing unreachable block (ram,0x000156708b90) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae09) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae62) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae66) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae85) */
/* WARNING: Removing unreachable block (ram,0x000156f94034) */
/* WARNING: Removing unreachable block (ram,0x000162d55170) */
/* WARNING: Removing unreachable block (ram,0x000156f940bc) */
/* WARNING: Removing unreachable block (ram,0x000156f940c2) */
/* WARNING: Removing unreachable block (ram,0x000156f940c7) */
/* WARNING: Removing unreachable block (ram,0x00014d93af37) */
/* WARNING: Removing unreachable block (ram,0x00014d93af7f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b4c) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b52) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b9b) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e77) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e7d) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e82) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e98) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f02) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f0e) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f19) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0ac8) */
/* WARNING: Removing unreachable block (ram,0x000157570393) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc1) */
/* WARNING: Removing unreachable block (ram,0x000161481058) */
/* WARNING: Removing unreachable block (ram,0x000165bd72bc) */
/* WARNING: Removing unreachable block (ram,0x0001614810d0) */
/* WARNING: Removing unreachable block (ram,0x0001614810dc) */
/* WARNING: Removing unreachable block (ram,0x0001614810e2) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc7) */
/* WARNING: Removing unreachable block (ram,0x00014d93b04c) */
/* WARNING: Removing unreachable block (ram,0x00014d93b052) */
/* WARNING: Removing unreachable block (ram,0x00014d93b057) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0c5) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0ca) */
/* WARNING: Removing unreachable block (ram,0x000165fe6d65) */
/* WARNING: Removing unreachable block (ram,0x000165fe6ddf) */
/* WARNING: Removing unreachable block (ram,0x000165fe6dea) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df0) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df5) */
/* WARNING: Removing unreachable block (ram,0x0001572a3611) */
/* WARNING: Removing unreachable block (ram,0x0001572a3722) */
/* WARNING: Removing unreachable block (ram,0x0001572a3727) */
/* WARNING: Removing unreachable block (ram,0x0001572a372d) */
/* WARNING: Removing unreachable block (ram,0x000157119494) */
/* WARNING: Removing unreachable block (ram,0x00016148111a) */
/* WARNING: Removing unreachable block (ram,0x000161481129) */
/* WARNING: Removing unreachable block (ram,0x0001567089f7) */
/* WARNING: Removing unreachable block (ram,0x000156708a73) */
/* WARNING: Removing unreachable block (ram,0x0001615d6f69) */

undefined8 thunk_FUN_14d93aea3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1567089f7();
  return uVar1;
}



// FUNCTION 14d93aea3 FUN_14d93aea3 body=147 status=ok
// SIG undefined FUN_14d93aea3(void)

/* WARNING: Removing unreachable block (ram,0x000156708a78) */
/* WARNING: Removing unreachable block (ram,0x000156708a7e) */
/* WARNING: Removing unreachable block (ram,0x000156708af3) */
/* WARNING: Removing unreachable block (ram,0x000156708af9) */
/* WARNING: Removing unreachable block (ram,0x000156708afe) */
/* WARNING: Removing unreachable block (ram,0x000156708b85) */
/* WARNING: Removing unreachable block (ram,0x000156708b8a) */
/* WARNING: Removing unreachable block (ram,0x000156708b90) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae09) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae62) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae66) */
/* WARNING: Removing unreachable block (ram,0x00015b2dae85) */
/* WARNING: Removing unreachable block (ram,0x000156f94034) */
/* WARNING: Removing unreachable block (ram,0x000162d55170) */
/* WARNING: Removing unreachable block (ram,0x000156f940bc) */
/* WARNING: Removing unreachable block (ram,0x000156f940c2) */
/* WARNING: Removing unreachable block (ram,0x000156f940c7) */
/* WARNING: Removing unreachable block (ram,0x00014d93af37) */
/* WARNING: Removing unreachable block (ram,0x00014d93af7f) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b4c) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b52) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b9b) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e77) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e7d) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e82) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e98) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f02) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f0e) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f19) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0ac8) */
/* WARNING: Removing unreachable block (ram,0x000157570393) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc1) */
/* WARNING: Removing unreachable block (ram,0x000161481058) */
/* WARNING: Removing unreachable block (ram,0x000165bd72bc) */
/* WARNING: Removing unreachable block (ram,0x0001614810d0) */
/* WARNING: Removing unreachable block (ram,0x0001614810dc) */
/* WARNING: Removing unreachable block (ram,0x0001614810e2) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc7) */
/* WARNING: Removing unreachable block (ram,0x00014d93b04c) */
/* WARNING: Removing unreachable block (ram,0x00014d93b052) */
/* WARNING: Removing unreachable block (ram,0x00014d93b057) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0c5) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0ca) */
/* WARNING: Removing unreachable block (ram,0x000165fe6d65) */
/* WARNING: Removing unreachable block (ram,0x000165fe6ddf) */
/* WARNING: Removing unreachable block (ram,0x000165fe6dea) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df0) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df5) */
/* WARNING: Removing unreachable block (ram,0x0001572a3611) */
/* WARNING: Removing unreachable block (ram,0x0001572a3722) */
/* WARNING: Removing unreachable block (ram,0x0001572a3727) */
/* WARNING: Removing unreachable block (ram,0x0001572a372d) */
/* WARNING: Removing unreachable block (ram,0x000157119494) */
/* WARNING: Removing unreachable block (ram,0x00016148111a) */
/* WARNING: Removing unreachable block (ram,0x000161481129) */
/* WARNING: Removing unreachable block (ram,0x0001567089f7) */
/* WARNING: Removing unreachable block (ram,0x000156708a73) */
/* WARNING: Removing unreachable block (ram,0x0001615d6f69) */

undefined8 FUN_14d93aea3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1567089f7();
  return uVar1;
}



// FUNCTION 14d93af37 FUN_14d93af37 body=364 status=ok
// SIG undefined FUN_14d93af37(void)

/* WARNING: Removing unreachable block (ram,0x000165fe6e77) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e7d) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e82) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e98) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f02) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f0e) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f19) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0ac8) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b4c) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b52) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b9b) */
/* WARNING: Removing unreachable block (ram,0x000157570393) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc1) */
/* WARNING: Removing unreachable block (ram,0x00014d93afc7) */
/* WARNING: Removing unreachable block (ram,0x00014d93b04c) */
/* WARNING: Removing unreachable block (ram,0x00014d93b052) */
/* WARNING: Removing unreachable block (ram,0x00014d93b057) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0c5) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0ca) */
/* WARNING: Removing unreachable block (ram,0x000165fe6d65) */
/* WARNING: Removing unreachable block (ram,0x000165fe6ddf) */
/* WARNING: Removing unreachable block (ram,0x000165fe6dea) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df0) */
/* WARNING: Removing unreachable block (ram,0x000165fe6df5) */
/* WARNING: Removing unreachable block (ram,0x0001572a3611) */
/* WARNING: Removing unreachable block (ram,0x0001572a3722) */
/* WARNING: Removing unreachable block (ram,0x0001572a3727) */
/* WARNING: Removing unreachable block (ram,0x0001572a372d) */
/* WARNING: Removing unreachable block (ram,0x000157119494) */
/* WARNING: Removing unreachable block (ram,0x00016148111a) */
/* WARNING: Removing unreachable block (ram,0x0001614810e2) */

undefined8 FUN_14d93af37(undefined8 param_1)

{
  undefined8 uVar1;
  uint unaff_EBP;
  
  if ((unaff_EBP - 1) - ~unaff_EBP < unaff_EBP * 2) {
    uVar1 = FUN_165bd72bc();
    return uVar1;
  }
  uVar1 = FUN_1612eeef4(param_1);
  return uVar1;
}



// FUNCTION 14d93afc7 FUN_14d93afc7 body=144 status=ok
// SIG undefined FUN_14d93afc7(void)

/* WARNING: Removing unreachable block (ram,0x00014d7f0b4c) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b52) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0b9b) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e77) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e82) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e98) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f02) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f0e) */
/* WARNING: Removing unreachable block (ram,0x000165fe6f19) */
/* WARNING: Removing unreachable block (ram,0x00014d7f0ac8) */
/* WARNING: Removing unreachable block (ram,0x000157570393) */
/* WARNING: Removing unreachable block (ram,0x000165fe6e7d) */
/* WARNING: Removing unreachable block (ram,0x0001572a3611) */
/* WARNING: Removing unreachable block (ram,0x0001572a3722) */
/* WARNING: Removing unreachable block (ram,0x0001572a3727) */
/* WARNING: Removing unreachable block (ram,0x000157119494) */
/* WARNING: Removing unreachable block (ram,0x0001572a372d) */
/* WARNING: Removing unreachable block (ram,0x00014d93b057) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0ca) */
/* WARNING: Removing unreachable block (ram,0x00014d93b0c5) */

undefined8 FUN_14d93afc7(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  int iVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong unaff_R14;
  ulonglong unaff_R15;
  ulonglong local_res8 [2];
  ushort local_res18;
  ulonglong local_res20;
  
  local_res20 = ~(local_res20 & unaff_R15) &
                (~unaff_R15 & *(ulonglong *)((longlong)local_res8 + unaff_R14) | unaff_R15);
  local_res18 = local_res18 & 0xfeff;
  *(ulonglong *)(local_res20 - 8) = unaff_RBP;
  *(undefined8 *)(local_res20 - 0x10) = param_1;
  *(undefined8 *)(local_res20 - 0x18) = param_2;
  uVar2 = *(undefined8 *)(local_res20 - 0x18);
  uVar4 = unaff_RBP >> 2 | unaff_RBP << 0x3e;
  if ((longlong)uVar4 < 0) {
    uVar2 = FUN_165fe6d65();
    return uVar2;
  }
  *(ulonglong *)(local_res20 - 0x10) = uVar4;
  *(ulonglong *)(local_res20 - 0x18) = local_res8[1];
  *(undefined8 *)(local_res20 - 0x20) = in_R11;
  *(undefined4 *)(local_res20 - 0x10) = *(undefined4 *)(local_res20 - 0x10);
  *(undefined8 *)(local_res20 - 0x18) = unaff_RBX;
  *(undefined8 *)(local_res20 - 0x20) = uVar2;
  *(undefined8 *)(local_res20 - 0x28) = in_RAX;
  *(undefined4 *)(local_res20 - 0x28) = 0x78538f8;
  *(undefined4 *)(local_res20 - 0x24) = 0;
  lVar1 = local_res20 + *(longlong *)(local_res20 - 0x28) + -0x7853908;
  iVar3 = (*(uint *)(lVar1 + 4) | 0xc0000000) + 0x40000000;
  *(undefined8 *)(local_res20 - 0x20) = in_RAX;
  *(undefined8 *)(local_res20 - 0x28) = unaff_RDI;
  *(int *)(lVar1 + 4) = iVar3;
  if (iVar3 == 0) {
    uVar2 = FUN_15b3ab86d();
    return uVar2;
  }
  uVar2 = FUN_15b3ab86d();
  return uVar2;
}



// FUNCTION 14d93b057 FUN_14d93b057 body=367 status=ok
// SIG undefined FUN_14d93b057(void)

/* WARNING: Removing unreachable block (ram,0x00014d93b0c5) */

void FUN_14d93b057(undefined1 param_1)

{
  longlong unaff_RDI;
  
  FUN_161b99cf2(param_1,0xffffffffffffffa0,0x1448c73e,*(undefined8 *)(unaff_RDI + -0x60));
  FUN_16517a142();
  return;
}



// FUNCTION 14d93b1c9 FUN_14d93b1c9 body=122 status=ok
// SIG undefined FUN_14d93b1c9(void)

void FUN_14d93b1c9(void)

{
  return;
}



// FUNCTION 14d93b41a FUN_14d93b41a body=606 status=ok
// SIG undefined FUN_14d93b41a(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d93b4a8) */
/* WARNING: Removing unreachable block (ram,0x00014d93b528) */
/* WARNING: Removing unreachable block (ram,0x00014d93b52e) */
/* WARNING: Removing unreachable block (ram,0x00016186ef04) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d93b41a(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R15;
  char *in_stack_00000018;
  ulonglong in_stack_00000028;
  
  *(ulonglong *)(unaff_R15 + 0x18) = (~param_1 | *(ulonglong *)(unaff_R15 + 0x18)) + param_1 + 1;
  uVar2 = ~in_stack_00000028 & unaff_RBX;
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 8) = 0x37671997;
  *(ulonglong *)(uVar2 - 8) = *(ulonglong *)(uVar2 - 8) ^ 0x37671997;
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(uVar2 - 8);
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + -0x14ddbae31;
  plVar1 = (longlong *)(uVar2 - 8);
  lVar3 = *plVar1;
  *plVar1 = -*plVar1;
  do {
  } while (SBORROW8(0,lVar3));
  *in_stack_00000018 = *in_stack_00000018 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14d93b6e6 FUN_14d93b6e6 body=122 status=ok
// SIG undefined FUN_14d93b6e6(void)

void FUN_14d93b6e6(void)

{
  FUN_15b5ae22e();
  return;
}



// FUNCTION 14d93b8fb FUN_14d93b8fb body=330 status=ok
// SIG undefined FUN_14d93b8fb(void)

void FUN_14d93b8fb(undefined8 param_1)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156a58e66(param_1,~(*(ulonglong *)(unaff_R12 + -0x60) ^ 0xffffffffffffffff | in_RAX),
                0x65fb9214,*(undefined8 *)(unaff_R12 + -0x30));
  return;
}



// FUNCTION 14d93ba45 FUN_14d93ba45 body=457 status=ok
// SIG undefined FUN_14d93ba45(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d93bace) */
/* WARNING: Removing unreachable block (ram,0x00014d93bb71) */
/* WARNING: Removing unreachable block (ram,0x00014d93bb77) */
/* WARNING: Removing unreachable block (ram,0x00014d93bb7e) */
/* WARNING: Removing unreachable block (ram,0x00014d93bcac) */
/* WARNING: Removing unreachable block (ram,0x00014d93bcb7) */
/* WARNING: Removing unreachable block (ram,0x00014d93bcbd) */
/* WARNING: Removing unreachable block (ram,0x000156382776) */
/* WARNING: Removing unreachable block (ram,0x000160d8baee) */
/* WARNING: Removing unreachable block (ram,0x0001650507ea) */
/* WARNING: Removing unreachable block (ram,0x000165050804) */
/* WARNING: Removing unreachable block (ram,0x00016505080f) */
/* WARNING: Removing unreachable block (ram,0x000161115e53) */
/* WARNING: Removing unreachable block (ram,0x00014d93bd46) */
/* WARNING: Removing unreachable block (ram,0x00014d93bd4c) */

void FUN_14d93ba45(undefined8 param_1)

{
  (*(code *)0x1647324e8)(param_1,0xbece65ae,0x1542);
  return;
}



// FUNCTION 14d93bc16 FUN_14d93bc16 body=342 status=ok
// SIG undefined FUN_14d93bc16(void)

/* WARNING: Removing unreachable block (ram,0x00014d93bd46) */
/* WARNING: Removing unreachable block (ram,0x00014d93bd4c) */
/* WARNING: Removing unreachable block (ram,0x00014d93bcbd) */

void FUN_14d93bc16(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong in_R10;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R12 - 0x48);
  *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI) = unaff_R14;
  uVar9 = *(ulonglong *)(unaff_R12 - 0x50);
  uVar3 = *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI);
  *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI) = param_4;
  uVar10 = *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI);
  *(ulonglong *)(&stack0xfffffffff90c3b3e + unaff_RSI) = in_RAX;
  uVar8 = in_RAX & ~uVar9;
  if (-1 < (longlong)uVar8) {
    uVar4 = *(ulonglong *)(&stack0xfffffffff90c3b3e + unaff_RSI);
    *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI) = param_1;
    uVar6 = *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI);
    uVar9 = 0xffffffffffffffff - uVar9;
    *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI) = uVar3;
    *(ulonglong *)(&stack0xfffffffff90c3b36 + unaff_RSI) =
         ~((~in_RAX | param_2) & (~param_2 | in_RAX));
    uVar7 = *(ulonglong *)(&stack0xfffffffff90c3b36 + unaff_RSI);
    *(ulonglong *)(&stack0xfffffffff90c3b36 + unaff_RSI) = uVar2 ^ in_RAX;
    lVar5 = *(longlong *)(&stack0xfffffffff90c3b36 + unaff_RSI);
    uVar2 = *(ulonglong *)(&stack0xfffffffff90c3b3e + unaff_RSI);
    uVar9 = ~uVar8 & ((uVar4 - 1) - (-1 - ~(uVar9 & uVar4))) - ~uVar9 ^ 0xffffffffffffffff;
    *(undefined8 *)(&stack0xfffffffff90c3b3e + unaff_RSI) = 0x160d8bb48;
    uVar6 = FUN_1619dea08(uVar6);
    uVar3 = *(undefined8 *)(&stack0xfffffffff90c3b4e + unaff_RSI);
    *(undefined8 *)(&stack0xfffffffff90c3b6e + (unaff_R12 ^ ~(uVar2 & in_R10)) + unaff_RSI) =
         unaff_RBX;
    *(undefined8 *)(&stack0xfffffffff90c3b6e + unaff_RSI) = *(undefined8 *)(lVar5 + -0x98);
    *(undefined8 *)(&stack0xfffffffff90c3b66 + unaff_RSI) = uVar6;
    *(undefined8 *)(&stack0xfffffffff90c3b5e + unaff_RSI) = uVar10;
    *(undefined8 *)(&stack0xfffffffff90c3b5e + unaff_RSI) = unaff_R15;
    *(undefined8 *)(&stack0xfffffffff90c3b56 + unaff_RSI) = unaff_R13;
    *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI) =
         (~uVar9 | *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI)) + uVar9 + 1;
    puVar1 = (ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI);
    *puVar1 = *puVar1 << 1 | (ulonglong)((longlong)*puVar1 < 0);
    *(ulonglong *)(&stack0xfffffffff90c3b5e + unaff_RSI) = uVar7;
    *(undefined8 *)(&stack0xfffffffff90c3b56 + unaff_RSI) =
         *(undefined8 *)(&stack0xfffffffff90c3b56 + unaff_RSI);
    *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI) =
         ~*(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI);
    *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI) =
         *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI) | 1;
    *(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI) =
         ~*(ulonglong *)(&stack0xfffffffff90c3b6e + unaff_RSI);
    (*(code *)0x15b97e3e6)(uVar3,0x15b97e3e6);
    return;
  }
  FUN_160d8baee();
  return;
}



// FUNCTION 14d93bd60 thunk_FUN_14d93bd66 body=5 status=ok
// SIG undefined thunk_FUN_14d93bd66(void)

void thunk_FUN_14d93bd66(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  uint unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffa4193a4 + unaff_retaddr);
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  *puVar1 = puVar1[-1] ^ *(ulonglong *)(unaff_RBP + 0x20);
  *(undefined4 *)(puVar1 + -1) = 0xe8ca94;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar2 = puVar1[-1];
  *(undefined8 *)((longlong)puVar1 + lVar2 + -0xe8ca94) = *(undefined8 *)*puVar1;
  *(undefined **)((longlong)puVar1 + lVar2 + -0xe8ca9c) = &DAT_14d93bdd6;
  return;
}



// FUNCTION 14d93bd66 FUN_14d93bd66 body=111 status=ok
// SIG undefined FUN_14d93bd66(void)

void FUN_14d93bd66(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 in_RAX;
  longlong unaff_RBP;
  uint unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffffa4193a4 + unaff_retaddr);
  puVar1[-1] = in_RAX;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  *puVar1 = puVar1[-1] ^ *(ulonglong *)(unaff_RBP + 0x20);
  *(undefined4 *)(puVar1 + -1) = 0xe8ca94;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  lVar2 = puVar1[-1];
  *(undefined8 *)((longlong)puVar1 + lVar2 + -0xe8ca94) = *(undefined8 *)*puVar1;
  *(undefined **)((longlong)puVar1 + lVar2 + -0xe8ca9c) = &DAT_14d93bdd6;
  return;
}



// FUNCTION 14d93be49 FUN_14d93be49 body=85 status=ok
// SIG undefined FUN_14d93be49(void)

void FUN_14d93be49(void)

{
  (*(code *)0x15b2cd0ef)(0x15b2cd0ef);
  return;
}



// FUNCTION 14d93be9f FUN_14d93be9f body=17 status=ok
// SIG undefined FUN_14d93be9f(void)

void FUN_14d93be9f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// FUNCTION 14d93c09f FUN_14d93c09f body=118 status=ok
// SIG undefined FUN_14d93c09f(void)

undefined4 FUN_14d93c09f(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



// FUNCTION 14d93c1ad FUN_14d93c1ad body=337 status=ok
// SIG undefined FUN_14d93c1ad(void)

/* WARNING: Removing unreachable block (ram,0x00014d93c250) */

undefined8 FUN_14d93c1ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  ulonglong local_10;
  ulonglong uStack_8;
  
  uStack_8 = *(ulonglong *)(unaff_R12 + -8);
  local_10 = *(ulonglong *)(unaff_R12 + -0x98) ^ in_RAX;
  uVar1 = FUN_16543c21e(param_1,param_2,param_3);
  uStack_8 = ~((uVar1 - (uStack_8 | uVar1)) + uStack_8) & unaff_RSI;
  uVar2 = FUN_156e7f635(&local_10,param_1);
  return uVar2;
}



// FUNCTION 14d93c300 FUN_14d93c300 body=152 status=ok
// SIG undefined FUN_14d93c300(void)

/* WARNING: Removing unreachable block (ram,0x00014d93c42a) */
/* WARNING: Removing unreachable block (ram,0x00014d93c436) */

void FUN_14d93c300(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  *(longlong *)(unaff_RSI + 8) = -*(longlong *)(unaff_RSI + 8);
  *(longlong *)(unaff_RSI + 8) = *(longlong *)(unaff_RSI + 8) + -1;
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | unaff_RBP;
  FUN_160c4557d();
  return;
}



// FUNCTION 14d93c399 FUN_14d93c399 body=154 status=ok
// SIG undefined FUN_14d93c399(void)

/* WARNING: Removing unreachable block (ram,0x00014d93c42a) */
/* WARNING: Removing unreachable block (ram,0x00014d93c436) */

void FUN_14d93c399(void)

{
  return;
}



// FUNCTION 14d93c436 FUN_14d93c436 body=116 status=ok
// SIG undefined FUN_14d93c436(void)

void FUN_14d93c436(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_161d75fa0(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d93c4aa FUN_14d93c4aa body=38 status=ok
// SIG undefined FUN_14d93c4aa(void)

/* WARNING: Removing unreachable block (ram,0x00014d93c579) */
/* WARNING: Removing unreachable block (ram,0x00014d93c57f) */
/* WARNING: Removing unreachable block (ram,0x00014d93c607) */
/* WARNING: Removing unreachable block (ram,0x00014d93c60c) */
/* WARNING: Removing unreachable block (ram,0x00014d93c612) */
/* WARNING: Removing unreachable block (ram,0x000156b57576) */
/* WARNING: Removing unreachable block (ram,0x00014d93c4d6) */

void FUN_14d93c4aa(void)

{
  bool in_ZF;
  
  if (in_ZF) {
    FUN_1653e9b16();
    return;
  }
  FUN_1653e9b16();
  return;
}



// FUNCTION 14d93c4d6 FUN_14d93c4d6 body=468 status=ok
// SIG undefined FUN_14d93c4d6(void)

/* WARNING: Removing unreachable block (ram,0x00014d93c579) */
/* WARNING: Removing unreachable block (ram,0x00014d93c57f) */
/* WARNING: Removing unreachable block (ram,0x00014d93c607) */
/* WARNING: Removing unreachable block (ram,0x00014d93c60c) */
/* WARNING: Removing unreachable block (ram,0x00014d93c612) */
/* WARNING: Removing unreachable block (ram,0x000156b57576) */

void FUN_14d93c4d6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1622c3359(CONCAT71((int7)(param_1 >> 8),0x73) ^ 0x72,
                *(ulonglong *)(unaff_RDI + -0x68) & param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14d93c739 FUN_14d93c739 body=178 status=ok
// SIG undefined FUN_14d93c739(void)

void FUN_14d93c739(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(unaff_RSI + (param_2 ^ param_1));
  uVar2 = ~uVar1 | unaff_RBP;
  FUN_161c05e57(FUN_161c05e57,*(ulonglong *)(unaff_RSI + -0x60),
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                ~((~uVar2 | ~unaff_RBP | uVar1) + uVar2 + 1));
  return;
}



// FUNCTION 14d93c9da FUN_14d93c9da body=138 status=ok
// SIG undefined FUN_14d93c9da(void)

void FUN_14d93c9da(ulonglong param_1)

{
  ulonglong in_R11;
  ulonglong uVar1;
  
  uVar1 = in_R11 ^ 0x63c588be;
  *(ulonglong *)(&stack0xfffffffff1a0c087 + uVar1) =
       ~*(ulonglong *)(&stack0xfffffffff1a0c087 + uVar1);
  *(ulonglong *)(&stack0xfffffffff1a0c087 + uVar1) =
       ~(~(param_1 ^ 0xffffffffffffffff) | ~*(ulonglong *)(&stack0xfffffffff1a0c087 + uVar1)) |
       param_1;
  return;
}



// FUNCTION 14d93cae0 FUN_14d93cae0 body=182 status=ok
// SIG undefined FUN_14d93cae0(void)

void FUN_14d93cae0(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar2 = ~(local_res20 & param_1) & (local_res20 | param_1);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ unaff_R14;
  *(undefined8 *)(uVar2 - 0x10) = unaff_R12;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = in_R11;
  *(undefined8 *)(uVar2 - 0x20) = in_stack_00000008;
  *(undefined4 *)(uVar2 - 0x20) = 0xe89ee18a;
  FUN_15755cb9f(local_res10);
  return;
}



// FUNCTION 14d93cb96 FUN_14d93cb96 body=971 status=ok
// SIG undefined FUN_14d93cb96(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016570565e) overlaps instruction at (ram,0x00016570565d)
    */
/* WARNING: Removing unreachable block (ram,0x0001657056ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14d93cb96(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  code *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 in_R10;
  undefined1 *puVar16;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar17;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  bool bVar18;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte bVar23;
  bool bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  ulonglong unaff_retaddr;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  puVar3 = (ulonglong *)(~(local_res20 & unaff_RBP) & (unaff_RDI | unaff_RBP));
  bVar25 = (local_res18 & 0x4000) != 0;
  bVar24 = (local_res18 & 0x400) != 0;
  bVar23 = (local_res18 & 0x200) != 0;
  bVar22 = 0;
  bVar19 = (local_res18 & 0x10) != 0;
  bVar29 = (uStackX_1a & 0x20) != 0;
  bVar26 = (uStackX_1a & 4) != 0;
  bVar28 = 0;
  bVar27 = 0;
  puVar2 = puVar3 + -1;
  *puVar2 = 0;
  *puVar2 = *puVar2 + unaff_R12;
  puVar3[-2] = unaff_retaddr;
  uVar13 = puVar3[-2];
  puVar3[-2] = puVar3[-1];
  puVar3[-1] = (ulonglong)&LAB_162307f26;
  puVar3[-3] = 0x14d93cc26;
  uVar8 = FUN_162307eec();
  uVar4 = *(ulonglong *)(param_1 + -0x80);
  puVar3[-3] = uVar8;
  *(undefined4 *)(puVar3 + -3) = 0;
  *(undefined4 *)((longlong)puVar3 - 0x14) = 0;
  uVar14 = puVar3[-3] ^ *(ulonglong *)(param_1 + -0x48);
  puVar3[-3] = uVar14 + unaff_RBX;
  if ((!CARRY8(uVar14,unaff_RBX)) || (CARRY8(uVar14,unaff_RBX))) {
    lVar12 = puVar3[-3];
    puVar3[-3] = param_1;
    puVar3[-4] = unaff_R14;
    puVar3[-5] = uVar4 ^ unaff_RBX;
    uVar8 = puVar3[-3];
    puVar3[-3] = uVar13;
    puVar3[-4] = lVar12 + ((unaff_RBX - (uVar14 | unaff_RBX)) + uVar14) * -2;
    lVar12 = (*(code *)0x1612b4b36)
                       (uVar8,~((unaff_RBX ^ 0xffffffffffffffff | param_2) & (~param_2 | unaff_RBX))
                       );
    return lVar12;
  }
  *(undefined4 *)(puVar3 + -4) = 0;
  *(int *)(puVar3 + -3) = (int)puVar3[-4];
  *(undefined4 *)((longlong)puVar3 - 0x14) = 0;
  lVar12 = -(puVar3[-3] - *(longlong *)(unaff_R13 + -0x28));
  puVar3[-3] = param_3;
  uVar15 = puVar3[-3];
  if ((short)puVar3[5] < 0) {
    puVar3[-3] = uVar8;
    *(undefined4 *)(puVar3 + -3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 - 0x14) = 0xffffffff;
  }
  *(undefined4 *)(puVar3 + -3) = 0xbaa39e5e;
  *(undefined4 *)((longlong)puVar3 - 0x14) = 0xffffffff;
  puVar3[-3] = 0x14d93cd6b;
  FUN_15b84f9fc();
  uVar4 = *puVar3;
  *puVar3 = unaff_RBX;
  puVar3[-1] = unaff_RBX;
  *puVar3 = *(ulonglong *)(unaff_R13 + -0x70);
  uVar14 = puVar3[-1];
  puVar3[-1] = *(undefined8 *)(unaff_R13 + -8);
  puVar3[-2] = *(undefined8 *)(unaff_R13 + -0x98);
  puVar3[-3] = (ulonglong)FUN_15b84f9fc;
  puVar3[-4] = (ulonglong)FUN_15b84f9fc;
  puVar3[-3] = *(undefined8 *)(unaff_R13 + -0xa0);
  uVar5 = puVar3[-4];
  uVar17 = puVar3[-3] ^ unaff_R15;
  puVar3[-2] = puVar3[-2] ^ unaff_R15;
  puVar3[-3] = in_R10;
  puVar3[-4] = uVar14;
  uVar14 = puVar3[-1];
  puVar3[-1] = -puVar3[-1];
  puVar3[-1] = puVar3[-1] - 1;
  puVar3[-1] = puVar3[-1] | unaff_R15;
  puVar3[-5] = param_1;
  uVar10 = (puVar3[-1] - (~unaff_R15 | uVar14 | puVar3[-1])) + (~unaff_R15 | uVar14);
  pcVar11 = FUN_156443504;
  puVar3[-6] = 0x14d93cdfc;
  lVar9 = FUN_156443504();
  puVar2 = puVar3 + -4;
  uVar14 = *puVar2;
  uVar4 = (~(ulonglong)(puVar3 + -2) - 0x5823b3e6) + uVar4;
  *(undefined4 *)puVar2 = 0x422e986c;
  *(undefined4 *)((longlong)puVar3 - 0x1c) = 0;
  uVar6 = *puVar2;
  puVar3[-4] = uVar13;
  puVar3[-4] = lVar9;
  *(undefined4 *)(puVar3 + -4) = 0xcf52ccc;
  *(undefined4 *)((longlong)puVar3 - 0x1c) = 0;
  lVar7 = puVar3[-4];
  puVar3[-4] = lVar12;
  uVar13 = lVar7 - 0xcf52cd4;
  bVar21 = (longlong)puVar3 + lVar7 + -0xcf52cec < 0;
  bVar20 = (undefined1 *)((longlong)puVar3 + lVar7 + -0xcf52cec) == (undefined1 *)0x0;
  bVar18 = (POPCOUNT((longlong)puVar3 + lVar7 + -0xcf52cec & 0xff) & 1U) == 0;
  *(undefined4 *)((longlong)puVar3 + lVar7 + -0xcf52cec) = 0x6014209c;
  *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cf4) =
       (ulonglong)(bVar25 & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)(puVar3 + -3),uVar13) * 0x800
       | (ulonglong)bVar24 * 0x400 | (ulonglong)(bVar23 & 1) * 0x200 |
       (ulonglong)(bVar22 & 1) * 0x100 | (ulonglong)bVar21 * 0x80 | (ulonglong)bVar20 * 0x40 |
       (ulonglong)(bVar19 & 1) * 0x10 | (ulonglong)bVar18 * 4 |
       (ulonglong)CARRY8((ulonglong)(puVar3 + -3),uVar13) | (ulonglong)(bVar29 & 1) * 0x200000 |
       (ulonglong)(bVar28 & 1) * 0x100000 | (ulonglong)(bVar27 & 1) * 0x80000 |
       (ulonglong)(bVar26 & 1) * 0x40000;
  *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cfc) =
       (ulonglong)(bVar25 & 1) * 0x4000 | (ulonglong)SCARRY8((longlong)(puVar3 + -3),uVar13) * 0x800
       | (ulonglong)bVar24 * 0x400 | (ulonglong)(bVar23 & 1) * 0x200 |
       (ulonglong)(bVar22 & 1) * 0x100 | (ulonglong)bVar21 * 0x80 | (ulonglong)bVar20 * 0x40 |
       (ulonglong)(bVar19 & 1) * 0x10 | (ulonglong)bVar18 * 4 |
       (ulonglong)CARRY8((ulonglong)(puVar3 + -3),uVar13) | (ulonglong)(bVar29 & 1) * 0x200000 |
       (ulonglong)(bVar28 & 1) * 0x100000 | (ulonglong)(bVar27 & 1) * 0x80000 |
       (ulonglong)(bVar26 & 1) * 0x40000;
  *(int *)((longlong)puVar3 + lVar7 + -0xcf52cfc) =
       *(int *)((longlong)puVar3 + lVar7 + -0xcf52cfc) << 0x18;
  *(uint *)((longlong)puVar3 + lVar7 + -0xcf52cfc) =
       *(uint *)((longlong)puVar3 + lVar7 + -0xcf52cfc) >> 0x1f;
  if (*(int *)((longlong)puVar3 + lVar7 + -0xcf52cfc) == 0) {
    uVar13 = *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cf4);
    if ((uVar13 & 0x80) != 0) {
      *(longlong *)((longlong)puVar3 + lVar7 + -0xcf52cec) = lVar9;
      *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cf4) = uVar14;
      uVar13 = *(ulonglong *)(*(longlong *)((longlong)puVar3 + lVar7 + -0xcf52cf4) + -0x28);
      *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec) = uVar13;
      *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec) = uVar17;
      *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cf4) = uVar17;
      *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cfc) = uVar17;
      *(undefined1 **)((longlong)puVar3 + lVar7 + -0xcf52cec) = &LAB_14d93cf67;
      *(undefined8 *)((longlong)puVar3 + lVar7 + -0xcf52cf4) = 0x162ac9ee8;
      return (uVar13 & uVar5) << 1;
    }
    *(undefined4 *)((longlong)puVar3 + lVar7 + -0xcf52ce8) = 0;
    uVar14 = *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec);
    *(code **)((longlong)puVar3 + lVar7 + -0xcf52cec) = pcVar11;
    uVar8 = *(undefined8 *)((longlong)puVar3 + lVar7 + -0xcf52cec);
    *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec) =
         (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar13 & 0x400) != 0) * 0x400 |
         (ulonglong)((uVar13 & 0x200) != 0) * 0x200 | (ulonglong)((uVar13 & 0x100) != 0) * 0x100 |
         0x80 | (ulonglong)((uVar13 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec) =
         *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec) & 0xffffffffffffffbf;
    uVar13 = *(ulonglong *)((longlong)puVar3 + lVar7 + -0xcf52cec);
    if ((uVar13 & 0x40) == 0) {
      lVar12 = (uVar14 ^ 0x6014209c) -
               ((~uVar4 | uVar6 ^ 0x422e986c) & (~(uVar6 ^ 0x422e986c) | uVar4) &
                (uVar10 | 0xffffffffa7dc4c19) ^ 0xffffffffffffffff);
      puVar16 = (undefined1 *)-lVar12;
      lVar12 = (longlong)puVar3 + lVar12 + lVar7 + -0xcf52ce4;
      *(longlong *)(lVar12 + -8) = lVar9;
      *(undefined4 *)(lVar12 + -8) = 0xbf71865b;
      *(undefined4 *)(lVar12 + -0x10) = 0x4ca79b9d;
      *(undefined4 *)(lVar12 + -0xc) = 0;
      if (lVar12 == 0) {
        _DAT_ffffffffffffffe8 =
             (ulonglong)((uVar13 & 0x4000) != 0) * 0x4000 |
             (ulonglong)SBORROW8((longlong)puVar3 + lVar7 + -0xcf52ce4,(longlong)puVar16) * 0x800 |
             (ulonglong)((uVar13 & 0x400) != 0) * 0x400 | (ulonglong)((uVar13 & 0x200) != 0) * 0x200
             | (ulonglong)((uVar13 & 0x100) != 0) * 0x100 | 0x40 |
             (ulonglong)((uVar13 & 0x10) != 0) * 0x10 | 4 |
             (ulonglong)((undefined1 *)((longlong)puVar3 + lVar7 + -0xcf52ce4) < puVar16) |
             (ulonglong)((uVar13 & 0x200000) != 0) * 0x200000 |
             (ulonglong)((uVar13 & 0x40000) != 0) * 0x40000;
        _DAT_ffffffffffffffe0 = uVar8;
      }
      uVar13 = *(ulonglong *)(lVar12 + -0x10) ^ 0x4ca79b99;
      *(undefined4 *)(lVar12 + -8 + uVar13) = 0x886f7f15;
      puVar1 = (uint *)(lVar12 + -8 + uVar13);
      *puVar1 = *puVar1 ^ 0x1a7f1ecb;
      *(int *)(lVar12 + -8 + uVar13) = *(int *)(lVar12 + -8 + uVar13) + 0x6def9e22;
      *(uint *)(lVar12 + -4) = *(uint *)(lVar12 + -4) ^ 0xffffffff;
      uVar8 = *(undefined8 *)(lVar12 + -8);
      *(undefined4 *)(lVar12 + -8) = 0x408e79c5;
      *(undefined4 *)(lVar12 + -4) = 0x97d6530;
      *(uint *)(lVar12 + -4) = *(uint *)(lVar12 + -4) ^ 0x97d6530;
      *(undefined8 *)(lVar12 + -8) = uVar8;
      *(undefined8 *)(lVar12 + -8) = uVar15;
      *(undefined8 *)(lVar12 + -0x10) = uVar15;
      *(undefined8 *)(lVar12 + -8) = 0x166b1e1c0;
      return lVar9;
    }
    DAT_f749d42b4dd3334c = (char)lVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar12 = FUN_165705615();
  return lVar12;
}



// FUNCTION 14d93cf6d FUN_14d93cf6d body=172 status=ok
// SIG undefined FUN_14d93cf6d(void)

void FUN_14d93cf6d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  plVar1 = (longlong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x20);
  *(longlong *)(local_res18 + -0x28) = 0;
  *plVar1 = *(longlong *)(local_res18 + -0x28);
  *plVar1 = (longlong)(&LAB_15b3a28e3 + *plVar1);
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x20) = in_R11;
  *(undefined8 *)(local_res18 + -0x28) = in_R11;
  *(undefined1 **)(local_res18 + -0x18) = &LAB_14d93d01d;
  *(undefined **)(local_res18 + -0x20) = &DAT_15b3a28b9;
  return;
}



// FUNCTION 14d93d290 FUN_14d93d290 body=122 status=ok
// SIG undefined FUN_14d93d290(void)

void FUN_14d93d290(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  longlong unaff_R15;
  
  *(undefined8 *)(&stack0x00000010 + unaff_R15) = in_RAX;
  FUN_15b743d95(param_1,param_2);
  return;
}



// FUNCTION 14d93d30b FUN_14d93d30b body=169 status=ok
// SIG undefined FUN_14d93d30b(void)

/* WARNING: Removing unreachable block (ram,0x00014d93d35e) */
/* WARNING: Removing unreachable block (ram,0x0001564a9bbc) */
/* WARNING: Removing unreachable block (ram,0x0001658d723a) */
/* WARNING: Removing unreachable block (ram,0x0001564a9bf9) */

void FUN_14d93d30b(void)

{
  FUN_16631e76a();
  return;
}



// FUNCTION 14d93d3b6 FUN_14d93d3b6 body=142 status=ok
// SIG undefined FUN_14d93d3b6(void)

void FUN_14d93d3b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_14df6a8e4(FUN_14df6a8e4,in_stack_00000008,param_3,param_4);
  return;
}



// FUNCTION 14d93d5cf FUN_14d93d5cf body=3 status=ok
// SIG undefined FUN_14d93d5cf(void)

void FUN_14d93d5cf(void)

{
  return;
}



// FUNCTION 14d93d937 FUN_14d93d937 body=146 status=ok
// SIG undefined FUN_14d93d937(void)

undefined8 FUN_14d93d937(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d93da52 FUN_14d93da52 body=282 status=ok
// SIG undefined FUN_14d93da52(void)

/* WARNING: Removing unreachable block (ram,0x00014d93dad9) */

void FUN_14d93da52(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  ushort unaff_SI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_8;
  
  uVar1 = ~(~(unaff_R15 ^ 0xffffffffffffffff) & ~param_3);
  uVar2 = ~unaff_R15 & ~param_3 | unaff_R15;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RBX) = *(undefined8 *)(unaff_R13 + -0x38);
  if ((unaff_SI & 0x4d0b) == 0) {
    *(undefined8 *)((longlong)&uStack_8 + unaff_RBX) = *(undefined8 *)(unaff_R13 + -0x48);
    *(undefined8 *)((longlong)&uStack_8 + unaff_RBX) = 0xffffffffffffffb8;
    FUN_16100fa74(0xffffffffffffffffU - *(longlong *)(unaff_R13 + -0x78) | ~unaff_R15,FUN_16100fa74,
                  ~(uVar1 | uVar2) + 1 + uVar2 + uVar1 ^ 0xffffffffffffffff);
    return;
  }
  thunk_FUN_156f83407();
  return;
}



// FUNCTION 14d93dbfd FUN_14d93dbfd body=597 status=ok
// SIG undefined FUN_14d93dbfd(void)

/* WARNING: Removing unreachable block (ram,0x00014d93de56) */

void FUN_14d93dbfd(ulonglong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined8 uVar5;
  char unaff_R12B;
  ushort *puVar6;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar2 = *(ulonglong *)(unaff_RDI + -0x88);
  uVar3 = FUN_14d82c3bc();
  uVar4 = *(ulonglong *)(unaff_R13 + -0x40) ^ unaff_R15;
  FUN_162721b54();
  if ((char)(unaff_R12B - (~(param_4 + 2U) + 0x6c)) < '\0') {
    uVar4 = 0xffffffff;
  }
  uVar5 = CONCAT71((int7)(uVar4 >> 8),unaff_R12B);
  puVar6 = (ushort *)(ulonglong)~(uint)uVar5;
  FUN_156b56a56();
  *puVar6 = (~(*puVar6 & 0x100 | 0xfeff) - 0x100) + *puVar6;
  puVar1 = (ulonglong *)(unaff_retaddr + -8);
  *puVar1 = ~(uVar2 & param_1) & (uVar2 | param_1);
  *(ulonglong *)(unaff_retaddr + -0x10) = *puVar1;
  *puVar1 = 0;
  *(longlong *)(unaff_retaddr + -0x18) = unaff_RDI;
  *(undefined8 *)(unaff_retaddr + -0x20) = uVar3;
  puVar1 = (ulonglong *)(unaff_retaddr + -8);
  *puVar1 = *puVar1 ^ 0xffffffffffffffff;
  *(undefined8 *)(unaff_retaddr + -0x28) = uVar5;
  if (*puVar1 == 0) {
    FUN_14e1d279a();
    return;
  }
  FUN_14e1d279a();
  return;
}



// FUNCTION 14d93de56 FUN_14d93de56 body=340 status=ok
// SIG undefined FUN_14d93de56(void)

void FUN_14d93de56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156ec4f7e(0x1d255e6,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d93dfac FUN_14d93dfac body=118 status=ok
// SIG undefined FUN_14d93dfac(void)

undefined8 FUN_14d93dfac(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d93e049 FUN_14d93e049 body=183 status=ok
// SIG undefined FUN_14d93e049(void)

/* WARNING: Removing unreachable block (ram,0x00014d93e0eb) */
/* WARNING: Removing unreachable block (ram,0x00014d93e0f1) */

uint FUN_14d93e049(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return (uint)(*(ulonglong *)(unaff_RDI + -0x30) + param_1 <
               (*(ulonglong *)(unaff_RDI + -0x30) & param_1) << 1) << 6 | 0x400;
}



// FUNCTION 14d93e194 FUN_14d93e194 body=138 status=ok
// SIG undefined FUN_14d93e194(void)

/* WARNING: Removing unreachable block (ram,0x000156a2e348) */
/* WARNING: Removing unreachable block (ram,0x000156a2e34e) */
/* WARNING: Removing unreachable block (ram,0x000156a2e42f) */
/* WARNING: Removing unreachable block (ram,0x00014d93e221) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d93e194(ulonglong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_R12;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uStack_18 = param_1 ^ in_RAX;
  uVar2 = ~(*(ulonglong *)(unaff_R12 + -0x78) & in_RAX |
           ~(*(ulonglong *)(unaff_R12 + -0x78) | in_RAX));
  if (-1 < (longlong)
           (*(ulonglong *)(unaff_R12 + -0x48) + in_RAX +
           (*(ulonglong *)(unaff_R12 + -0x48) & in_RAX) * -2)) {
    FUN_156a2e28c();
    return;
  }
  uStack_10 = uStack_18;
  (*(code *)0x15b347485)(*(undefined8 *)(unaff_R12 + -0x98));
  *(undefined4 *)((longlong)&uStack_18 + unaff_RBX) = 0;
  *(uint *)((longlong)&uStack_18 + unaff_RBX) =
       *(uint *)((longlong)&uStack_18 + unaff_RBX) ^ 0x47f57109;
  uVar1 = *(uint *)((longlong)&uStack_18 + unaff_RBX);
  *(uint *)((longlong)&uStack_18 + unaff_RBX) =
       *(uint *)((longlong)&uStack_18 + unaff_RBX) | 0xb80a8ef6;
  *(uint *)((longlong)&uStack_18 + unaff_RBX) =
       ~(uVar1 & 0xb80a8ef6) & *(uint *)((longlong)&uStack_18 + unaff_RBX) ^ 0xffffffff;
  FUN_166b6c1e7(0,uVar2 - uStack_18);
  return;
}



// FUNCTION 14d93e221 FUN_14d93e221 body=31 status=ok
// SIG undefined FUN_14d93e221(void)

void FUN_14d93e221(void)

{
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RBP) = unaff_RBX;
  return;
}



// FUNCTION 14d93e734 FUN_14d93e734 body=140 status=ok
// SIG undefined FUN_14d93e734(void)

/* WARNING: Removing unreachable block (ram,0x00014d93e76e) */

void FUN_14d93e734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  
  lVar1 = *(longlong *)(unaff_R12 + -8);
  uVar2 = FUN_1654e67f8(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_R12 + -0x68));
  *(undefined8 *)(lVar1 + -8) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x10) = uVar2;
  *(undefined8 *)(lVar1 + -0x18) = uVar2;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = param_3;
  *(undefined1 **)(lVar1 + -8) = &LAB_162ddf4a7;
  FUN_162ddf47b();
  return;
}



// FUNCTION 14d93e7c0 FUN_14d93e7c0 body=132 status=ok
// SIG undefined FUN_14d93e7c0(void)

void FUN_14d93e7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 uStackX_8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = in_RAX;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined1 **)(local_res18 + -8) = &LAB_162ddf4a7;
  FUN_162ddf47b(param_1,uStackX_8,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14d93e9f9 FUN_14d93e9f9 body=152 status=ok
// SIG undefined FUN_14d93e9f9(void)

void FUN_14d93e9f9(void)

{
  return;
}



// FUNCTION 14d93ea91 FUN_14d93ea91 body=118 status=ok
// SIG undefined FUN_14d93ea91(void)

void FUN_14d93ea91(void)

{
  undefined8 local_res8;
  
  FUN_16153131b(CONCAT71((int7)((ulonglong)local_res8 >> 8),0x1f) ^ 0x85);
  return;
}



// FUNCTION 14d93eb07 FUN_14d93eb07 body=149 status=ok
// SIG undefined FUN_14d93eb07(void)

void FUN_14d93eb07(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
          (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2;
  (*(code *)0x15b67e64e)(lVar1,0x15b67e64e,param_3,lVar1);
  return;
}



// FUNCTION 14d93eb9d FUN_14d93eb9d body=120 status=ok
// SIG undefined FUN_14d93eb9d(void)

void FUN_14d93eb9d(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_R12;
  undefined8 local_res18;
  longlong lStack0000000000000030;
  
  lStack0000000000000030 = unaff_R12 - in_RAX;
  FUN_16173a593(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14d93ec17 FUN_14d93ec17 body=172 status=ok
// SIG undefined FUN_14d93ec17(void)

void FUN_14d93ec17(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined1 local_res8 [32];
  
  FUN_14d8a8531(*(undefined8 *)(unaff_R12 + -0x58),local_res8,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
                (~(~*(ulonglong *)(unaff_R12 + -0x30) | ~in_RAX) ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14d93ee5c FUN_14d93ee5c body=14 status=ok
// SIG undefined FUN_14d93ee5c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d93eeb5) */
/* WARNING: Removing unreachable block (ram,0x0001563a529c) */
/* WARNING: Removing unreachable block (ram,0x0001563a52a2) */
/* WARNING: Removing unreachable block (ram,0x00015767bea8) */
/* WARNING: Removing unreachable block (ram,0x00015767bf46) */
/* WARNING: Removing unreachable block (ram,0x00015767bf51) */
/* WARNING: Removing unreachable block (ram,0x00015767bf57) */
/* WARNING: Removing unreachable block (ram,0x00015767bf5c) */
/* WARNING: Removing unreachable block (ram,0x0001568909c4) */
/* WARNING: Removing unreachable block (ram,0x000156890a40) */
/* WARNING: Removing unreachable block (ram,0x000156890a46) */
/* WARNING: Removing unreachable block (ram,0x0001570d02f9) */
/* WARNING: Removing unreachable block (ram,0x00015767c075) */
/* WARNING: Removing unreachable block (ram,0x00015767c07b) */
/* WARNING: Removing unreachable block (ram,0x00015767c080) */
/* WARNING: Removing unreachable block (ram,0x00015767c10a) */
/* WARNING: Removing unreachable block (ram,0x00015767c110) */
/* WARNING: Removing unreachable block (ram,0x00016632f885) */
/* WARNING: Removing unreachable block (ram,0x00014d93eee3) */
/* WARNING: Removing unreachable block (ram,0x00014d7be5e2) */
/* WARNING: Removing unreachable block (ram,0x00016632f8e1) */
/* WARNING: Removing unreachable block (ram,0x00016632f8e5) */

undefined8 FUN_14d93ee5c(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_1661d81f6(~((in_RAX ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R12 + -0x58)) &
                         (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)),
                        ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
                         (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  return uVar1;
}



// FUNCTION 14d93efb9 FUN_14d93efb9 body=146 status=ok
// SIG undefined FUN_14d93efb9(void)

void FUN_14d93efb9(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_162f5fde4(param_1,~((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1)));
  return;
}



// FUNCTION 14d93f04c FUN_14d93f04c body=861 status=ok
// SIG undefined FUN_14d93f04c(void)

/* WARNING: Removing unreachable block (ram,0x000162e4d71d) */
/* WARNING: Removing unreachable block (ram,0x000162e4d728) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7bd) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7c2) */
/* WARNING: Removing unreachable block (ram,0x000162e4d7c8) */
/* WARNING: Removing unreachable block (ram,0x00014db16165) */
/* WARNING: Removing unreachable block (ram,0x00014db161f6) */
/* WARNING: Removing unreachable block (ram,0x00014db161fb) */
/* WARNING: Removing unreachable block (ram,0x00014db16201) */
/* WARNING: Removing unreachable block (ram,0x00014db16206) */
/* WARNING: Removing unreachable block (ram,0x00014d93f0d2) */
/* WARNING: Removing unreachable block (ram,0x00014d93f179) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014d93f185) */
/* WARNING: Removing unreachable block (ram,0x0001654fb64e) */
/* WARNING: Removing unreachable block (ram,0x00014d93f216) */
/* WARNING: Removing unreachable block (ram,0x00014d93f21c) */
/* WARNING: Removing unreachable block (ram,0x00014d93f221) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2e3) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2ee) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2e9) */
/* WARNING: Removing unreachable block (ram,0x00014d93f2de) */
/* WARNING: Removing unreachable block (ram,0x000162e4d68c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf739c) */
/* WARNING: Removing unreachable block (ram,0x00014dcf73f4) */
/* WARNING: Removing unreachable block (ram,0x00014dcf73f8) */
/* WARNING: Removing unreachable block (ram,0x000162e4d723) */

void FUN_14d93f04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_16214da60(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14d93f2ee FUN_14d93f2ee body=69 status=ok
// SIG undefined FUN_14d93f2ee(void)

void FUN_14d93f2ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_165c7153c(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d93f37b FUN_14d93f37b body=147 status=ok
// SIG undefined FUN_14d93f37b(void)

void FUN_14d93f37b(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  *(undefined4 *)(&stack0x3a94d6ad + param_3) = 0xffffffff;
  uVar1 = *(ulonglong *)(unaff_RDI + (unaff_retaddr ^ 0x1d481f7a));
  (*(code *)&LAB_164811598)(param_1,uVar1 + param_1,(uVar1 & param_1) << 1);
  return;
}



// FUNCTION 14d93f65f FUN_14d93f65f body=212 status=ok
// SIG undefined FUN_14d93f65f(void)

undefined8 FUN_14d93f65f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16641ca90(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14d93f82a FUN_14d93f82a body=2 status=ok
// SIG undefined FUN_14d93f82a(void)

void FUN_14d93f82a(void)

{
  return;
}



// FUNCTION 14d93f966 FUN_14d93f966 body=124 status=ok
// SIG undefined FUN_14d93f966(void)

void FUN_14d93f966(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  longlong local_res8;
  
  *(undefined8 *)(&stack0xfffffffffcd3f332 + local_res8) = unaff_R15;
  *(ulonglong *)(&stack0xfffffffffcd3f32a + local_res8) =
       CONCAT71((int7)((ulonglong)unaff_R15 >> 8),0xef);
  *(undefined8 *)(&stack0xfffffffffcd3f322 + local_res8) = in_R10;
  *(undefined8 *)(&stack0xfffffffffcd3f32a + local_res8) = unaff_R13;
  *(undefined8 *)(&stack0xfffffffffcd3f322 + local_res8) = 0x14d93f9dd;
  FUN_15af3448d(param_1,param_2,CONCAT71((int7)((ulonglong)(local_res8 + -0x32c0cde) >> 8),0xef));
  FUN_14d93f9e3();
  return;
}



// FUNCTION 14d93f9e3 FUN_14d93f9e3 body=19 status=ok
// SIG undefined FUN_14d93f9e3(void)

void FUN_14d93f9e3(void)

{
  return;
}



// FUNCTION 14d93fd36 FUN_14d93fd36 body=326 status=ok
// SIG undefined FUN_14d93fd36(void)

/* WARNING: Removing unreachable block (ram,0x00014d93fdd7) */
/* WARNING: Removing unreachable block (ram,0x00014d93fddd) */
/* WARNING: Removing unreachable block (ram,0x00014d93fde1) */

void FUN_14d93fd36(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 unaff_R13D;
  undefined4 unaff_000000ac;
  ulonglong unaff_R15;
  
  uVar4 = *(ulonglong *)(CONCAT44(unaff_000000ac,unaff_R13D) + -0x88);
  uVar3 = uVar4 + unaff_R15;
  uVar4 = uVar4 & unaff_R15;
  uVar1 = uVar4 * 2;
  lVar2 = uVar3 + uVar4 * -2;
  if (uVar3 < uVar1) {
    FUN_165e52312(uVar1,0xffffffffffffff78,lVar2);
    return;
  }
  FUN_165e52312(uVar1,0xffffffffffffff78,lVar2);
  return;
}



// FUNCTION 14d93fe89 FUN_14d93fe89 body=159 status=ok
// SIG undefined FUN_14d93fe89(void)

void FUN_14d93fe89(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x1574d5b11)(0x1574d5b11,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d93ff28 FUN_14d93ff28 body=302 status=ok
// SIG undefined FUN_14d93ff28(void)

/* WARNING: Removing unreachable block (ram,0x00014d93ffbf) */

undefined8 FUN_14d93ff28(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d93ffbf FUN_14d93ffbf body=157 status=ok
// SIG undefined FUN_14d93ffbf(void)

void FUN_14d93ffbf(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  longlong in_stack_00000018;
  
  FUN_1665ac048(param_1,param_2,in_stack_00000008,param_4,
                0xffffffffffffffffU - in_stack_00000018 | param_1);
  return;
}



// FUNCTION 14d940230 FUN_14d940230 body=157 status=ok
// SIG undefined FUN_14d940230(void)

void FUN_14d940230(undefined8 param_1,undefined8 param_2)

{
  FUN_162256e50(&GetProcAddress_exref,param_2);
  return;
}



// FUNCTION 14d940423 thunk_FUN_14d940429 body=5 status=ok
// SIG undefined thunk_FUN_14d940429(void)

void thunk_FUN_14d940429(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c58f04(0xffffffffd05b5468,param_2,param_3,FUN_165c58f04);
  return;
}



// FUNCTION 14d940429 FUN_14d940429 body=150 status=ok
// SIG undefined FUN_14d940429(void)

void FUN_14d940429(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c58f04(0xffffffffd05b5468,param_2,param_3,FUN_165c58f04);
  return;
}



// FUNCTION 14d9404bf FUN_14d9404bf body=175 status=ok
// SIG undefined FUN_14d9404bf(void)

/* WARNING: Removing unreachable block (ram,0x00014d9404d4) */

void FUN_14d9404bf(void)

{
  return;
}



// FUNCTION 14d94056e thunk_FUN_14d940574 body=5 status=ok
// SIG undefined thunk_FUN_14d940574(void)

void thunk_FUN_14d940574(void)

{
  return;
}



// FUNCTION 14d940574 FUN_14d940574 body=148 status=ok
// SIG undefined FUN_14d940574(void)

void FUN_14d940574(void)

{
  return;
}



// FUNCTION 14d940723 FUN_14d940723 body=174 status=ok
// SIG undefined FUN_14d940723(void)

void FUN_14d940723(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_16560034a(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14d9409f3 FUN_14d9409f3 body=127 status=ok
// SIG undefined FUN_14d9409f3(void)

void FUN_14d9409f3(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong unaff_RDI;
  undefined8 unaff_R15;
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
  undefined8 local_res8;
  undefined8 uStackX_10;
  ulonglong uStackX_18;
  undefined8 *local_res20;
  
  bVar11 = (uStackX_18 & 0x4000) != 0;
  bVar10 = (uStackX_18 & 0x800) != 0;
  bVar9 = (uStackX_18 & 0x200) != 0;
  bVar8 = (uStackX_18 & 0x100) != 0;
  bVar7 = (uStackX_18 & 0x80) != 0;
  bVar6 = (uStackX_18 & 0x40) != 0;
  bVar5 = (uStackX_18 & 0x10) != 0;
  bVar4 = (uStackX_18 & 4) != 0;
  bVar3 = (uStackX_18 & 1) != 0;
  bVar15 = (uStackX_18 & 0x200000) != 0;
  bVar12 = (uStackX_18 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res20 = unaff_R15;
  local_res20[-1] = unaff_R15;
  local_res20[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res20[-3] = local_res8;
  uVar16 = local_res20[-2];
  local_res20[-2] = unaff_RDI;
  local_res20[-3] =
       (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar16 & 0x400) != 0) * 0x400 | (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar16 & 0x40) != 0) * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)((uVar16 & 1) != 0) |
       (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
  local_res20[-4] = uVar2;
  *(undefined4 *)(local_res20 + -4) = 0x5149c34f;
  *(undefined4 *)((longlong)local_res20 + -0x1c) = 0;
  uVar16 = local_res20[-4];
  local_res20[-4] = uStackX_10;
  *(undefined8 *)((longlong)local_res20 + ((uVar16 ^ 0x5149c347) - 8)) = 0x521e902;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d940d07 FUN_14d940d07 body=121 status=ok
// SIG undefined FUN_14d940d07(void)

/* WARNING: Removing unreachable block (ram,0x00014d940d2f) */
/* WARNING: Removing unreachable block (ram,0x00014d940d81) */

void FUN_14d940d07(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x1624b1dba)
            (0x1624b1dba,
             ~(~(~(0xffffffffffffffff - in_RAX) & ~*(ulonglong *)(unaff_R12 + -0x78)) &
              (~in_RAX & ~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  return;
}



// FUNCTION 14d940d81 FUN_14d940d81 body=143 status=ok
// SIG undefined FUN_14d940d81(void)

void FUN_14d940d81(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_RAX;
  ulonglong unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong in_R10;
  undefined8 in_R11;
  longlong unaff_R15;
  undefined8 local_res20;
  longlong in_stack_00000030;
  
  uVar2 = *(ulonglong *)(unaff_R15 + 0x18);
  lVar3 = *(longlong *)(unaff_R15 + 0x18);
  *(undefined8 *)(unaff_R15 + 0x18) = 0;
  *(longlong *)(unaff_R15 + 0x18) =
       *(longlong *)(unaff_R15 + 0x18) + (unaff_RBP - (uVar2 | unaff_RBP)) + lVar3;
  *(undefined8 *)(in_stack_00000030 + -0x10) = in_R11;
  *(undefined8 *)(in_stack_00000030 + -8) = unaff_RSI;
  *(undefined8 *)(in_stack_00000030 + -0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000030 + -0x18) = in_RAX;
  puVar1 = (ulonglong *)(in_stack_00000030 + -0x20);
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ in_R10;
  FUN_162a066f2(local_res20);
  return;
}



// FUNCTION 14d940e12 FUN_14d940e12 body=165 status=ok
// SIG undefined FUN_14d940e12(void)

void FUN_14d940e12(undefined8 param_1,undefined8 param_2)

{
  FUN_14d987bc9(param_1,param_2);
  return;
}



// FUNCTION 14d9411f3 FUN_14d9411f3 body=151 status=ok
// SIG undefined FUN_14d9411f3(void)

void FUN_14d9411f3(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x164b8f761)(param_1,param_2);
  return;
}



// FUNCTION 14d94133f FUN_14d94133f body=664 status=ok
// SIG undefined FUN_14d94133f(void)

void FUN_14d94133f(undefined8 param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong unaff_R12;
  ulonglong uVar3;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_0000000a;
  undefined8 uVar4;
  undefined8 uStack000000000000002a;
  undefined1 in_stack_00000022 [22];
  ulonglong uStack0000000000000032;
  longlong lStack000000000000003a;
  
  lVar1 = ((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 - 0x88)) +
          (*(ulonglong *)(unaff_R13 - 0x88) & unaff_R15) * -2;
  FUN_162da6d5b(param_1,lVar1,lVar1);
  pvVar2 = ProcessEnvironmentBlock;
  FUN_14dc79e37();
  uVar3 = DAT_162da6d1b ^ in_stack_0000000a;
  lVar1 = -0x30;
  FUN_165e989de();
  *(ulonglong *)(in_stack_0000000a + 8) = ~(lVar1 + *(longlong *)(in_stack_0000000a + 8) + 1U);
  uStack0000000000000032 = uVar3;
  lStack000000000000003a = unaff_R12 + ~(unaff_R13 | ~(ulonglong)pvVar2) * -2;
  FUN_166884a33(uStack000000000000002a,uVar4);
  return;
}



// FUNCTION 14d9415e4 FUN_14d9415e4 body=651 status=ok
// SIG undefined FUN_14d9415e4(void)

/* WARNING: Removing unreachable block (ram,0x00014d94171b) */
/* WARNING: Removing unreachable block (ram,0x00014d9417af) */
/* WARNING: Removing unreachable block (ram,0x00014d9417ba) */
/* WARNING: Removing unreachable block (ram,0x000166c5a01c) */
/* WARNING: Removing unreachable block (ram,0x000165e4406a) */
/* WARNING: Removing unreachable block (ram,0x000165e44106) */
/* WARNING: Removing unreachable block (ram,0x000165e44111) */
/* WARNING: Removing unreachable block (ram,0x000165e4411d) */
/* WARNING: Removing unreachable block (ram,0x000165e44122) */
/* WARNING: Removing unreachable block (ram,0x00014d9417c0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9415e4(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  FUN_15b3391d0();
  uVar2 = *(ulonglong *)(lVar1 + -0x50);
  uVar3 = uVar2 + unaff_R15;
  uVar2 = ~(~uVar2 | ~unaff_R15);
  uVar4 = uVar3 + uVar2 * -2;
  if (uVar2 * 2 <= uVar3) {
    FUN_165e43f4a();
    return;
  }
  FUN_16168477e();
  if (-1 < (longlong)
           (-1 - ((~uVar4 | *(ulonglong *)(unaff_R14 + -0x78)) &
                 (~*(ulonglong *)(unaff_R14 + -0x78) | uVar4)))) {
    FUN_14dd8f2a3();
    return;
  }
  FUN_16246a2fe(1,(uVar4 - 1) - ~*(ulonglong *)(unaff_R14 + -0x90));
  return;
}



// FUNCTION 14d941d3c FUN_14d941d3c body=127 status=ok
// SIG undefined FUN_14d941d3c(void)

void FUN_14d941d3c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_16519d817(param_1,FUN_16519d817,
                (*(ulonglong *)(unaff_RDI + -0x70) & param_1 ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14d941dbe FUN_14d941dbe body=238 status=ok
// SIG undefined FUN_14d941dbe(void)

/* WARNING: Removing unreachable block (ram,0x00014d941e48) */
/* WARNING: Removing unreachable block (ram,0x00014d941e4e) */
/* WARNING: Removing unreachable block (ram,0x00015758e794) */

void FUN_14d941dbe(void)

{
  FUN_15758e794();
  return;
}



// FUNCTION 14d941f03 FUN_14d941f03 body=29 status=ok
// SIG undefined FUN_14d941f03(void)

undefined8 FUN_14d941f03(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14d941f81 FUN_14d941f81 body=156 status=ok
// SIG undefined FUN_14d941f81(void)

/* WARNING: Removing unreachable block (ram,0x00014d941fbb) */

void FUN_14d941f81(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14d8741d5(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14d94202e FUN_14d94202e body=501 status=ok
// SIG undefined FUN_14d94202e(void)

/* WARNING: Instruction at (ram,0x000166a2f115) overlaps instruction at (ram,0x000166a2f114)
    */
/* WARNING: Removing unreachable block (ram,0x00014d9420f7) */
/* WARNING: Removing unreachable block (ram,0x00016221096c) */
/* WARNING: Removing unreachable block (ram,0x000162210972) */
/* WARNING: Removing unreachable block (ram,0x00014d9420ae) */
/* WARNING: Removing unreachable block (ram,0x00014d9420b4) */
/* WARNING: Removing unreachable block (ram,0x00014d9420c3) */
/* WARNING: Removing unreachable block (ram,0x00014d9420d8) */
/* WARNING: Removing unreachable block (ram,0x00014d9420d9) */
/* WARNING: Removing unreachable block (ram,0x00014d9420e4) */
/* WARNING: Removing unreachable block (ram,0x00014d9420ed) */
/* WARNING: Removing unreachable block (ram,0x00014d9420f9) */
/* WARNING: Removing unreachable block (ram,0x00014d9420ff) */
/* WARNING: Removing unreachable block (ram,0x0001659517f9) */
/* WARNING: Removing unreachable block (ram,0x000165951805) */
/* WARNING: Removing unreachable block (ram,0x000165951810) */
/* WARNING: Removing unreachable block (ram,0x00016595189c) */
/* WARNING: Removing unreachable block (ram,0x0001659518a2) */
/* WARNING: Removing unreachable block (ram,0x0001626a205c) */
/* WARNING: Removing unreachable block (ram,0x000165951815) */
/* WARNING: Removing unreachable block (ram,0x00014d942105) */
/* WARNING: Removing unreachable block (ram,0x00014d942121) */
/* WARNING: Removing unreachable block (ram,0x00014d942126) */
/* WARNING: Removing unreachable block (ram,0x00014d94214c) */
/* WARNING: Removing unreachable block (ram,0x00014d942154) */
/* WARNING: Removing unreachable block (ram,0x0001659517f4) */
/* WARNING: Removing unreachable block (ram,0x0001647d8f8a) */
/* WARNING: Removing unreachable block (ram,0x0001622108c2) */
/* WARNING: Removing unreachable block (ram,0x0001647d8f8e) */
/* WARNING: Removing unreachable block (ram,0x0001622108ab) */

undefined8 FUN_14d94202e(void)

{
  longlong in_RAX;
  undefined8 uVar1;
  
  *(uint *)(in_RAX + -9) = *(uint *)(in_RAX + -9) | 0xeb8b48d3;
  uVar1 = FUN_166319732(FUN_166319732);
  return uVar1;
}



// FUNCTION 14d942157 FUN_14d942157 body=18 status=ok
// SIG undefined FUN_14d942157(void)

void FUN_14d942157(void)

{
  return;
}



// FUNCTION 14d9421f4 FUN_14d9421f4 body=152 status=ok
// SIG undefined FUN_14d9421f4(void)

undefined1 FUN_14d9421f4(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  undefined8 in_R9;
  longlong lVar2;
  ulonglong uStackX_8;
  ulonglong in_stack_00000028;
  
  lVar2 = in_stack_00000028 + uStackX_8 + (in_stack_00000028 & uStackX_8) * -2;
  LOCK();
  uVar1 = DAT_14d7ac6cc;
  UNLOCK();
  DAT_14d7ac6cc = in_AL;
  *(undefined8 *)(lVar2 + -0x10) = in_R9;
  *(undefined8 *)(lVar2 + -0x18) = in_R9;
  *(undefined1 **)(lVar2 + -0x10) = &LAB_162dd0c4d;
  *(undefined1 **)(lVar2 + -0x20) = &LAB_162dd0c49;
  return uVar1;
}



// FUNCTION 14d942322 FUN_14d942322 body=9 status=ok
// SIG undefined FUN_14d942322(void)

void FUN_14d942322(void)

{
  return;
}



// FUNCTION 14d942478 FUN_14d942478 body=126 status=ok
// SIG undefined FUN_14d942478(void)

void FUN_14d942478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_156db6e87(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d942639 FUN_14d942639 body=155 status=ok
// SIG undefined FUN_14d942639(void)

void FUN_14d942639(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  ulonglong in_stack_00000020;
  
  FUN_156e791a8(FUN_156e791a8,0,param_3,param_4,
                (in_stack_00000020 ^
                ~(~(param_1 & 0xffffffffb5ca6e13) & (param_1 | 0xffffffffb5ca6e13))) & unaff_RBP);
  return;
}



// FUNCTION 14d94280b FUN_14d94280b body=126 status=ok
// SIG undefined FUN_14d94280b(void)

void FUN_14d94280b(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong unaff_retaddr;
  ulonglong local_res18;
  
  puVar1 = (undefined8 *)
           (0xffffffffffffffff - (local_res18 & unaff_retaddr) & (local_res18 | unaff_retaddr));
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *puVar1 = 0x212d976;
  puVar1[-1] = param_2;
  puVar1[-2] = param_2;
  puVar1[-1] = FUN_14d85d504;
  return;
}



// FUNCTION 14d9428ad FUN_14d9428ad body=308 status=ok
// SIG undefined FUN_14d9428ad(void)

/* WARNING: Removing unreachable block (ram,0x00014d942958) */
/* WARNING: Removing unreachable block (ram,0x00014d94294d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9428ad(longlong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  (*(code *)0x165c825e1)(0xe2,param_2,0x165c825e1,*(longlong *)(unaff_RDI + -0x40) + param_1);
  return;
}



// FUNCTION 14d9429e5 thunk_FUN_14d9429eb body=5 status=ok
// SIG undefined thunk_FUN_14d9429eb(void)

void thunk_FUN_14d9429eb(void)

{
  FUN_156c79161();
  return;
}



// FUNCTION 14d9429eb FUN_14d9429eb body=29 status=ok
// SIG undefined FUN_14d9429eb(void)

void FUN_14d9429eb(void)

{
  FUN_156c79161();
  return;
}



// FUNCTION 14d942bd9 thunk_FUN_14d942bdf body=5 status=ok
// SIG undefined thunk_FUN_14d942bdf(void)

/* WARNING: Removing unreachable block (ram,0x0001612ee312) */
/* WARNING: Removing unreachable block (ram,0x0001612ee318) */
/* WARNING: Removing unreachable block (ram,0x00014d942c4d) */
/* WARNING: Removing unreachable block (ram,0x00014d942c58) */
/* WARNING: Removing unreachable block (ram,0x00014d942cf6) */
/* WARNING: Removing unreachable block (ram,0x00016693984b) */
/* WARNING: Removing unreachable block (ram,0x000166939966) */
/* WARNING: Removing unreachable block (ram,0x00016693996c) */
/* WARNING: Removing unreachable block (ram,0x000162afeb03) */
/* WARNING: Removing unreachable block (ram,0x00014d942cfc) */
/* WARNING: Removing unreachable block (ram,0x00014d942d98) */
/* WARNING: Removing unreachable block (ram,0x00014d942da3) */
/* WARNING: Removing unreachable block (ram,0x00014d942d9e) */
/* WARNING: Removing unreachable block (ram,0x00014d942d93) */
/* WARNING: Removing unreachable block (ram,0x0001612ee1f0) */
/* WARNING: Removing unreachable block (ram,0x000166089f04) */
/* WARNING: Removing unreachable block (ram,0x00014d942c53) */

undefined8 thunk_FUN_14d942bdf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d942bdf FUN_14d942bdf body=884 status=ok
// SIG undefined FUN_14d942bdf(void)

/* WARNING: Removing unreachable block (ram,0x0001612ee312) */
/* WARNING: Removing unreachable block (ram,0x0001612ee318) */
/* WARNING: Removing unreachable block (ram,0x00014d942c4d) */
/* WARNING: Removing unreachable block (ram,0x00014d942c58) */
/* WARNING: Removing unreachable block (ram,0x00014d942cf6) */
/* WARNING: Removing unreachable block (ram,0x00016693984b) */
/* WARNING: Removing unreachable block (ram,0x000166939966) */
/* WARNING: Removing unreachable block (ram,0x00016693996c) */
/* WARNING: Removing unreachable block (ram,0x000162afeb03) */
/* WARNING: Removing unreachable block (ram,0x00014d942cfc) */
/* WARNING: Removing unreachable block (ram,0x00014d942d98) */
/* WARNING: Removing unreachable block (ram,0x00014d942da3) */
/* WARNING: Removing unreachable block (ram,0x00014d942d9e) */
/* WARNING: Removing unreachable block (ram,0x00014d942d93) */
/* WARNING: Removing unreachable block (ram,0x0001612ee1f0) */
/* WARNING: Removing unreachable block (ram,0x000166089f04) */
/* WARNING: Removing unreachable block (ram,0x00014d942c53) */

undefined8 FUN_14d942bdf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d942e39 FUN_14d942e39 body=153 status=ok
// SIG undefined FUN_14d942e39(void)

/* WARNING: Removing unreachable block (ram,0x00014d942e95) */

void FUN_14d942e39(ulonglong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong unaff_RDI;
  
  FUN_16592b60d(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,param_3 - param_4);
  return;
}



// FUNCTION 14d942ed4 FUN_14d942ed4 body=129 status=ok
// SIG undefined FUN_14d942ed4(void)

undefined8 FUN_14d942ed4(void)

{
  return 0x1fda;
}



// FUNCTION 14d943193 FUN_14d943193 body=31 status=ok
// SIG undefined FUN_14d943193(void)

void FUN_14d943193(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d943361 FUN_14d943361 body=667 status=ok
// SIG undefined FUN_14d943361(void)

/* WARNING: Removing unreachable block (ram,0x00014d94346d) */
/* WARNING: Removing unreachable block (ram,0x00014d943479) */
/* WARNING: Removing unreachable block (ram,0x00014d9434f6) */
/* WARNING: Removing unreachable block (ram,0x00014d9434fc) */
/* WARNING: Removing unreachable block (ram,0x00014d943629) */
/* WARNING: Removing unreachable block (ram,0x00014d94362f) */
/* WARNING: Removing unreachable block (ram,0x0001623547c7) */
/* WARNING: Removing unreachable block (ram,0x00015b64aaec) */

void FUN_14d943361(void)

{
  FUN_1616baab0();
  return;
}



// FUNCTION 14d9435ac FUN_14d9435ac body=282 status=ok
// SIG undefined FUN_14d9435ac(void)

/* WARNING: Removing unreachable block (ram,0x00014d94362f) */

void FUN_14d9435ac(void)

{
  ushort *unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  undefined8 uStackX_8;
  ulonglong uStackX_18;
  longlong local_res20;
  
  *unaff_RBP = -*unaff_RBP;
  *unaff_RBP = *unaff_RBP - 1;
  *unaff_RBP = *unaff_RBP | 0x100;
  *unaff_RBP = ~*unaff_RBP;
  *(undefined8 *)(local_res20 + -8) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R15;
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
  *(undefined8 *)(local_res20 + -0x20) = 0x11025aa2;
  *(undefined8 *)(local_res20 + -0x28) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x30) = uStackX_8;
  *(undefined1 **)(local_res20 + -0x28) = &LAB_1623547ca;
  return;
}



// FUNCTION 14d9436db FUN_14d9436db body=136 status=ok
// SIG undefined FUN_14d9436db(void)

void FUN_14d9436db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x161b7d4ea)(0x161b7d4ea,param_2,param_3,param_4);
  return;
}



// FUNCTION 14d943764 FUN_14d943764 body=86 status=ok
// SIG undefined FUN_14d943764(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14d943764(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong in_RAX;
  undefined1 uVar3;
  char cVar4;
  undefined6 uVar5;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined2 in_DS;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  out(*unaff_RSI,(short)param_2);
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x56fcb49);
  *pbVar1 = *pbVar1 ^ (byte)param_2;
  if ((char)*pbVar1 < '\0') {
    *(char *)((longlong)unaff_RSI + 0x25) = *(char *)((longlong)unaff_RSI + 0x25) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(in_RAX - 0x53) = in_DS;
  func_0xfb20becc(uVar3,param_2,unaff_R14);
  pcVar2 = (char *)(CONCAT62(uVar5,CONCAT11(cVar4,uVar3)) + (in_RAX & 0xffffffff) * 2);
  *pcVar2 = *pcVar2 + cVar4;
  *(char *)((longlong)&LastErrorValue + unaff_R13 + 3) = (char)((ulonglong)param_2 >> 0x18) >> 7;
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + cVar4;
  FUN_14d7c172b();
  return;
}



// FUNCTION 14d943a73 FUN_14d943a73 body=91 status=ok
// SIG undefined FUN_14d943a73(void)

void FUN_14d943a73(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_165c7153c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14d943e14 FUN_14d943e14 body=140 status=ok
// SIG undefined FUN_14d943e14(void)

undefined8 FUN_14d943e14(void)

{
  undefined8 in_R10;
  
  FUN_166402b8b();
  return in_R10;
}



// FUNCTION 14d943ea3 FUN_14d943ea3 body=145 status=ok
// SIG undefined FUN_14d943ea3(void)

undefined8 FUN_14d943ea3(void)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008;
}



// FUNCTION 14d9441c7 FUN_14d9441c7 body=139 status=ok
// SIG undefined FUN_14d9441c7(void)

undefined8 FUN_14d9441c7(void)

{
  undefined8 in_RAX;
  longlong in_R11;
  longlong in_stack_00000008;
  
  *(undefined8 *)(&stack0x08bc7d05 + in_stack_00000008) = 0;
  *(longlong *)(&stack0x08bc7d05 + in_stack_00000008) =
       *(longlong *)(&stack0x08bc7d05 + in_stack_00000008) + in_R11;
  return in_RAX;
}



// FUNCTION 14d94429b FUN_14d94429b body=89 status=ok
// SIG undefined FUN_14d94429b(void)

void FUN_14d94429b(undefined1 param_1,longlong param_2)

{
  if (param_2 != 0x79795) {
    FUN_156a65094(param_1,param_2);
    return;
  }
  FUN_156a6506b(param_1,0x14d7ac9c6);
  return;
}



// FUNCTION 14d944395 FUN_14d944395 body=145 status=ok
// SIG undefined FUN_14d944395(void)

ulonglong FUN_14d944395(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) & unaff_R15;
}



// FUNCTION 14d944426 FUN_14d944426 body=14 status=ok
// SIG undefined FUN_14d944426(void)

void FUN_14d944426(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14d9444c0 FUN_14d9444c0 body=810 status=ok
// SIG undefined FUN_14d9444c0(void)

/* WARNING: Removing unreachable block (ram,0x000164fc6092) */
/* WARNING: Removing unreachable block (ram,0x000164fc611a) */
/* WARNING: Removing unreachable block (ram,0x000164fc611f) */
/* WARNING: Removing unreachable block (ram,0x000164fc6125) */
/* WARNING: Removing unreachable block (ram,0x000164fc61c1) */
/* WARNING: Removing unreachable block (ram,0x000164fc61c7) */
/* WARNING: Removing unreachable block (ram,0x000164fc6310) */
/* WARNING: Removing unreachable block (ram,0x000164fc6315) */
/* WARNING: Removing unreachable block (ram,0x00014dd997fb) */
/* WARNING: Removing unreachable block (ram,0x0001659376ef) */
/* WARNING: Removing unreachable block (ram,0x00014d9445f5) */
/* WARNING: Removing unreachable block (ram,0x000166ddc4d5) */

void FUN_14d9444c0(void)

{
  FUN_14dc475a6();
  return;
}



// FUNCTION 14d9445f5 FUN_14d9445f5 body=184 status=ok
// SIG undefined FUN_14d9445f5(void)

void FUN_14d9445f5(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_R10;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 8) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = in_stack_00000010;
  *(undefined8 *)(uVar1 - 0x18) = in_stack_00000010;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = 0;
  *(ulonglong *)(uVar1 - 0x10) = *(ulonglong *)(uVar1 - 0x10) ^ uVar2;
  *(undefined8 *)(uVar1 - 0x18) = 0xfffffffe9d9c7a81;
  *(undefined8 *)(uVar1 - 8) = 0;
  lVar3 = *(longlong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) - lVar3;
  *(undefined4 *)(uVar1 - 0x18) = 0x50f8cb31;
  *(uint *)(uVar1 - 0x18) = *(uint *)(uVar1 - 0x18) ^ 0x50f8cb31;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  (*(code *)0x162638552)(in_stack_00000008);
  return;
}



// FUNCTION 14d944736 FUN_14d944736 body=128 status=ok
// SIG undefined FUN_14d944736(void)

/* WARNING: Instruction at (ram,0x00014d944744) overlaps instruction at (ram,0x00014d944743)
    */
/* WARNING: Removing unreachable block (ram,0x00014d944851) */
/* WARNING: Removing unreachable block (ram,0x00014d9448d3) */
/* WARNING: Removing unreachable block (ram,0x00014d9448df) */
/* WARNING: Removing unreachable block (ram,0x00014d944980) */
/* WARNING: Removing unreachable block (ram,0x00014d94497b) */
/* WARNING: Removing unreachable block (ram,0x0001563dacac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x00014d944837 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14d944736(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  uint in_R11D;
  longlong unaff_retaddr;
  
  *(int *)(unaff_retaddr + 0x45) =
       (*(int *)(unaff_retaddr + 0x45) + 0x277426fd) - (uint)CARRY4(in_R11D,param_4);
  FUN_166c0c07f(param_1,0xec0);
  if (-1 < (longlong)((*(ulonglong *)(unaff_retaddr + -0x80) & unaff_RBP) << 1)) {
    uVar1 = FUN_161a35730();
    return uVar1;
  }
  uVar1 = FUN_161a35730();
  return uVar1;
}



// FUNCTION 14d9447b7 FUN_14d9447b7 body=601 status=ok
// SIG undefined FUN_14d9447b7(void)

/* WARNING: Removing unreachable block (ram,0x00014d944851) */
/* WARNING: Removing unreachable block (ram,0x00014d9448d3) */
/* WARNING: Removing unreachable block (ram,0x00014d9448df) */
/* WARNING: Removing unreachable block (ram,0x00014d94497b) */
/* WARNING: Removing unreachable block (ram,0x00014d944980) */
/* WARNING: Removing unreachable block (ram,0x0001563dacac) */

undefined8 FUN_14d9447b7(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong in_stack_00000008;
  
  if (-1 < (longlong)((*(ulonglong *)(in_stack_00000008 + -0x80) & unaff_RBP) << 1)) {
    uVar1 = FUN_161a35730();
    return uVar1;
  }
  uVar1 = FUN_161a35730();
  return uVar1;
}



// FUNCTION 14d944a4f FUN_14d944a4f body=163 status=ok
// SIG undefined FUN_14d944a4f(void)

void FUN_14d944a4f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1652b06e6(0xffffffffffffffb5,FUN_1652b06e6,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14d944af4 FUN_14d944af4 body=617 status=ok
// SIG undefined FUN_14d944af4(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e66) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e68) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2e71) */
/* WARNING: Removing unreachable block (ram,0x000166494dda) */
/* WARNING: Removing unreachable block (ram,0x000166494de0) */
/* WARNING: Removing unreachable block (ram,0x000157405b15) */
/* WARNING: Removing unreachable block (ram,0x000157405c25) */
/* WARNING: Removing unreachable block (ram,0x00014d944b91) */
/* WARNING: Removing unreachable block (ram,0x00014d944b97) */
/* WARNING: Removing unreachable block (ram,0x00014d944ca3) */
/* WARNING: Removing unreachable block (ram,0x00014d944ca9) */
/* WARNING: Removing unreachable block (ram,0x0001656a1889) */
/* WARNING: Removing unreachable block (ram,0x000165118c9d) */
/* WARNING: Removing unreachable block (ram,0x0001656a1921) */
/* WARNING: Removing unreachable block (ram,0x0001656a192d) */
/* WARNING: Removing unreachable block (ram,0x0001656a1932) */
/* WARNING: Removing unreachable block (ram,0x000157405ab2) */

void FUN_14d944af4(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RDI;
  longlong in_R9;
  undefined8 in_R11;
  longlong lVar2;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  ulonglong in_stack_00000030;
  
  lVar2 = *(longlong *)(in_R9 + 8);
  uVar1 = *(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = *(ulonglong *)(in_R9 + 8) ^ 0xffffffffffffffff;
  *(ulonglong *)(in_R9 + 8) = ~*(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = *(ulonglong *)(in_R9 + 8) & ~unaff_R15;
  *(ulonglong *)(in_R9 + 8) = ~*(ulonglong *)(in_R9 + 8);
  *(ulonglong *)(in_R9 + 8) = ~((in_RAX + lVar2) - (in_RAX & uVar1) & *(ulonglong *)(in_R9 + 8));
  lVar2 = in_stack_00000030 + unaff_R15 + (in_stack_00000030 & unaff_R15) * -2;
  *(undefined8 *)(lVar2 + -8) = unaff_R12;
  *(undefined8 *)(lVar2 + -0x10) = in_R11;
  *(undefined8 *)(lVar2 + -0x18) = unaff_RDI;
  FUN_16153bb60();
  return;
}



// FUNCTION 14d944f3b FUN_14d944f3b body=147 status=ok
// SIG undefined FUN_14d944f3b(void)

void FUN_14d944f3b(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R15;
  undefined8 auStackX_8 [4];
  
  *(undefined8 *)((longlong)auStackX_8 + unaff_RBP) = in_R11;
  *(undefined8 *)((longlong)auStackX_8 + unaff_RBP + -8) = unaff_R15;
  *(undefined8 *)((longlong)auStackX_8 + unaff_RBP) =
       *(undefined8 *)((longlong)auStackX_8 + unaff_RBP);
  *(undefined8 *)((longlong)auStackX_8 + unaff_RBP) = in_R10;
  plVar1 = (longlong *)((longlong)auStackX_8 + unaff_RBP + -8);
  lVar2 = *(longlong *)(unaff_R12 + -0x90);
  *plVar1 = 0;
  *plVar1 = *plVar1 - lVar2;
  (*(code *)0x1563ca727)();
  return;
}



// FUNCTION 14d945047 FUN_14d945047 body=49 status=ok
// SIG undefined FUN_14d945047(void)

undefined8 FUN_14d945047(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d94516d FUN_14d94516d body=614 status=ok
// SIG undefined FUN_14d94516d(void)

/* WARNING: Removing unreachable block (ram,0x00014d9451f2) */
/* WARNING: Removing unreachable block (ram,0x00014d9451f8) */

void FUN_14d94516d(undefined8 param_1,undefined8 param_2)

{
  FUN_166a66807(param_1,param_2);
  return;
}



// FUNCTION 14d9453d8 FUN_14d9453d8 body=160 status=ok
// SIG undefined FUN_14d9453d8(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d9453d8(byte param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  char unaff_SIL;
  longlong lVar2;
  ushort *in_R11;
  longlong unaff_R12;
  longlong local_res8;
  
  lVar2 = *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
          (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2;
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x28) + 1;
  FUN_162555ead((in_RAX - (uVar1 | in_RAX)) + uVar1,lVar2,lVar2,
                local_res8 - (param_4 << ((param_1 ^ unaff_SIL - 0x15U) - 0x19 & 0x3f)));
  *in_R11 = ~*in_R11;
  *(code **)(param_5 + -8) = FUN_162555ead;
  *(longlong *)(param_5 + -0x10) = unaff_R12;
  *(longlong *)(param_5 + -0x18) = unaff_R12;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined8 *)(param_5 + -8) = 0;
  *(undefined8 *)(param_5 + -8) = *(undefined8 *)(param_5 + -8);
  *(ulonglong *)(param_5 + -8) = *(ulonglong *)(param_5 + -8) ^ 0x14d9454f6;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d945478 FUN_14d945478 body=94 status=ok
// SIG undefined FUN_14d945478(void)

void FUN_14d945478(void)

{
  undefined8 unaff_RSI;
  ushort *in_R11;
  undefined8 unaff_R12;
  undefined8 local_res18;
  
  *in_R11 = ~*in_R11;
  *(undefined8 *)(local_res18 + -8) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -8);
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x14d9454f6;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14d94566f FUN_14d94566f body=184 status=ok
// SIG undefined FUN_14d94566f(void)

void FUN_14d94566f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short in_AX;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  short *unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res18;
  undefined8 local_res20;
  
  sVar1 = *unaff_retaddr;
  *unaff_retaddr = 0;
  *unaff_retaddr = *unaff_retaddr + (-0x101 - in_AX) + sVar1;
  syscall();
  *(ulonglong *)(local_res20 + -8) = local_res18;
  *(ulonglong *)(local_res20 + -0x10) = local_res18;
  *(undefined4 *)(local_res20 + -0x18) = 0x9d642ef;
  *(undefined4 *)(local_res20 + -0x14) = 0;
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
  *(undefined8 *)(local_res20 + -0x20) = 0x14d9456af;
  *(undefined4 *)(local_res20 + -0x28) = 0x1b9fc3a8;
  *(undefined4 *)(local_res20 + -0x24) = 0;
  uVar2 = *(undefined8 *)(local_res20 + -0x20);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = 0x14d945706;
  uVar2 = FUN_15b0bf88c(uVar2,param_2,param_3,uStackX_8);
  *(undefined8 *)(local_res20 + 8) = uVar2;
  FUN_165c7153c();
  return;
}



// FUNCTION 14d945a15 FUN_14d945a15 body=141 status=ok
// SIG undefined FUN_14d945a15(void)

undefined8 FUN_14d945a15(void)

{
  undefined8 unaff_retaddr;
  
  FUN_161498116();
  return unaff_retaddr;
}



// FUNCTION 14d945c13 FUN_14d945c13 body=151 status=ok
// SIG undefined FUN_14d945c13(void)

void FUN_14d945c13(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  short unaff_SI;
  short *unaff_R15;
  ushort unaff_retaddr;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *unaff_R15 = unaff_SI - ~unaff_retaddr;
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 + -0x10) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x18) = local_res10;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_RAX;
  *(undefined4 *)(in_stack_00000028 + -0x20) = 0;
  *(undefined4 *)(in_stack_00000028 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(in_stack_00000028 + -0x20);
  *(undefined8 *)(in_stack_00000028 + -0x20) = local_res18;
  *(ulonglong *)(in_stack_00000028 + -0x10) = uVar1 ^ *(ulonglong *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) =
       (longlong)(&LAB_1665a0c58 + *(longlong *)(in_stack_00000028 + -8));
  FUN_1665a0c36(*(undefined8 *)(in_stack_00000028 + -0x20));
  return;
}



// FUNCTION 14d945caa FUN_14d945caa body=114 status=ok
// SIG undefined FUN_14d945caa(void)

void FUN_14d945caa(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_164a6f51f)
            (param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                      (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)));
  return;
}



// FUNCTION 14d946073 FUN_14d946073 body=343 status=ok
// SIG undefined FUN_14d946073(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000157486408) */
/* WARNING: Removing unreachable block (ram,0x000157486438) */
/* WARNING: Removing unreachable block (ram,0x00014d9460fa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d946073(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b5b4455(FUN_15b5b4455,0xffffffff71e60f01,
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2);
  return;
}



// FUNCTION 14d9460fa FUN_14d9460fa body=134 status=ok
// SIG undefined FUN_14d9460fa(void)

void FUN_14d9460fa(void)

{
  FUN_1667ee44d();
  return;
}



// FUNCTION 14d946184 FUN_14d946184 body=165 status=ok
// SIG undefined FUN_14d946184(void)

void FUN_14d946184(void)

{
  char in_AL;
  longlong unaff_RSI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong in_stack_00000038;
  
  *(ulonglong *)(unaff_R12 + 8) =
       ~((*(longlong *)(unaff_R12 + 8) - (local_res8 | *(ulonglong *)(unaff_R12 + 8))) + unaff_RSI);
  in_stack_00000038 = in_stack_00000038 ^ unaff_R15;
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7c2dec) is written */
                    /* WARNING: Read-only address (ram,0x00014d7c2dec) is written */
  LOCK();
  if (in_AL == '\0') {
    uRam000000014d7c2dec = (undefined1)local_res10;
  }
  UNLOCK();
  *(undefined8 *)(in_stack_00000038 - 8) = local_res10;
  *(undefined8 *)(in_stack_00000038 - 0x10) = local_res10;
  *(undefined8 *)(in_stack_00000038 - 0x18) = local_res18;
  *(undefined8 *)(in_stack_00000038 - 0x20) = local_res18;
  *(undefined1 **)(in_stack_00000038 - 0x18) = &LAB_14d946229;
  (*(code *)0x166badcb8)(0x166badcb8);
  return;
}



// FUNCTION 14d9463da FUN_14d9463da body=182 status=ok
// SIG undefined FUN_14d9463da(void)

void FUN_14d9463da(ulonglong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 in_R11;
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
  ushort local_res10;
  uint6 uStackX_12;
  ulonglong local_res18;
  
  puVar3 = (undefined8 *)(local_res18 + param_1 + (local_res18 & param_1) * -2);
  uVar4 = (-0x101 - (local_res10 | 0xfeff)) + local_res10;
  bVar13 = (uVar4 & 0x4000) != 0;
  bVar12 = (uVar4 & 0x800) != 0;
  bVar11 = (uVar4 & 0x200) != 0;
  bVar10 = (uVar4 & 0x100) != 0;
  bVar9 = (uVar4 & 0x80) != 0;
  bVar8 = (uVar4 & 0x40) != 0;
  bVar7 = (uVar4 & 0x10) != 0;
  bVar6 = (uVar4 & 4) != 0;
  bVar5 = (uVar4 & 1) != 0;
  bVar17 = (uStackX_12 & 0x20) != 0;
  bVar14 = (uStackX_12 & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)(in_stack_00000008);
  *puVar3 = in_R11;
  puVar3[-1] = in_R11;
  puVar3[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  puVar3[-3] = 0xa34f029;
  puVar3[-3] = puVar3[-3] + -0x5e039f1;
  puVar3[-2] = uVar2;
  puVar3[-3] = unaff_RBX;
  puVar3[-4] = unaff_RBX;
  puVar3[-5] = unaff_RBX;
  puVar3[-3] = &DAT_14d946496;
  puVar3[-4] = 0x16484dcd2;
  return;
}



// FUNCTION 14d9465bf FUN_14d9465bf body=173 status=ok
// SIG undefined FUN_14d9465bf(void)

void FUN_14d9465bf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  
  *(ulonglong *)(in_RAX + 0x10) = ~*(ulonglong *)(in_RAX + 0x10);
  *(ulonglong *)(in_RAX + 0x10) = *(ulonglong *)(in_RAX + 0x10) | unaff_R15;
  *(ulonglong *)(in_RAX + 0x10) = -1 - (unaff_RBX & *(ulonglong *)(in_RAX + 0x10));
  *(undefined8 *)(param_6 + -8) = unaff_R12;
  *(undefined8 *)(param_6 + -0x10) = in_R11;
  *(undefined8 *)(param_6 + -0x10) = 0x14d94665a;
  FUN_165704ff6(param_1,param_2);
  *(undefined8 *)(param_6 + -0x10) = param_4;
  *(undefined8 *)(param_6 + -0x18) = param_4;
  *(code **)(param_6 + -0x10) = FUN_14d94666e;
  return;
}



// FUNCTION 14d94666e FUN_14d94666e body=15 status=ok
// SIG undefined FUN_14d94666e(void)

void FUN_14d94666e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  FUN_165c7153c(param_1,param_2,uStackX_8);
  return;
}



// FUNCTION 14d94671a FUN_14d94671a body=68 status=ok
// SIG undefined FUN_14d94671a(void)

undefined8 FUN_14d94671a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d946b3f FUN_14d946b3f body=301 status=ok
// SIG undefined FUN_14d946b3f(void)

void FUN_14d946b3f(void)

{
  FUN_162d6551d();
  FUN_162363747();
  return;
}



// FUNCTION 14d946d88 FUN_14d946d88 body=279 status=ok
// SIG undefined FUN_14d946d88(void)

/* WARNING: Removing unreachable block (ram,0x000162cd63ef) */
/* WARNING: Removing unreachable block (ram,0x000162cd6406) */
/* WARNING: Removing unreachable block (ram,0x000162cd6410) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14d946d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int unaff_R12D;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong local_res18 [2];
  
  *(undefined4 *)((longlong)local_res18 + param_4) = 0;
  *(int *)((longlong)local_res18 + param_4) = *(int *)((longlong)local_res18 + param_4) + unaff_R12D
  ;
  iVar1 = -((int)(((uint)(local_res18[0] + 0x1b5c3353 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                   (uint)((POPCOUNT(local_res18[0] + 0x1b5c3353 & 0xff) & 1U) == 0) * 4 |
                  (uint)(local_res18[0] < 0xffffffffe4a3ccad)) << 0x19) >> 0x1f);
  if (iVar1 != 0) {
    local_res18[0] =
         (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)((in_IF & 1) != 0) * 0x200 |
         (ulonglong)((in_TF & 1) != 0) * 0x100 | (ulonglong)(iVar1 == 0) * 0x40 |
         (ulonglong)((in_AF & 1) != 0) * 0x10 | (ulonglong)(POPCOUNT(iVar1) == '\0') * 4 |
         (ulonglong)((in_ID & 1) != 0) * 0x200000 | (ulonglong)((in_AC & 1) != 0) * 0x40000;
    FUN_1575e04a0(FUN_1575e04a0,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14d946e30 FUN_14d946e30 body=98 status=ok
// SIG undefined FUN_14d946e30(void)

undefined8 FUN_14d946e30(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14d946eab FUN_14d946eab body=21 status=ok
// SIG undefined FUN_14d946eab(void)

void FUN_14d946eab(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14d946fe1 FUN_14d946fe1 body=328 status=ok
// SIG undefined FUN_14d946fe1(void)

/* WARNING: Removing unreachable block (ram,0x00014d947081) */
/* WARNING: Removing unreachable block (ram,0x00014d947087) */

undefined8 FUN_14d946fe1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14d94712c FUN_14d94712c body=133 status=ok
// SIG undefined FUN_14d94712c(void)

ulonglong FUN_14d94712c(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong alStackX_8 [4];
  
  *(ulonglong *)((longlong)alStackX_8 + unaff_RDI) =
       ~(0xffffffffffffffff - unaff_RBP & in_RAX) + in_RAX;
  *(ulonglong *)((longlong)alStackX_8 + unaff_RDI) =
       *(longlong *)((longlong)alStackX_8 + unaff_RDI) - ~(0xffffffffffffffff - unaff_RBP);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x60);
  *(undefined1 **)((longlong)alStackX_8 + unaff_RDI) = &LAB_1619b4157;
  return uVar1 | unaff_RBP;
}



// FUNCTION 14d94726d FUN_14d94726d body=180 status=ok
// SIG undefined FUN_14d94726d(void)

void FUN_14d94726d(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  ulonglong uVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 local_res20;
  undefined6 uStackX_22;
  
  uVar1 = *(ulonglong *)(param_4 + 0x10);
  *(longlong *)(param_4 + 0x10) = -*(longlong *)(param_4 + 0x10);
  *(longlong *)(param_4 + 0x10) = *(longlong *)(param_4 + 0x10) + -1;
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) | param_1;
  *(ulonglong *)(param_4 + 0x10) =
       (0xffffffffffffffff - param_1 | uVar1) & *(ulonglong *)(param_4 + 0x10) ^ 0xffffffffffffffff;
  syscall();
  *(undefined8 *)(param_5 + -8) = in_R10;
  *(undefined8 *)(param_5 + -0x10) = in_R10;
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = in_RAX;
  *(undefined4 *)(param_5 + -0x20) = 0xddad799;
  *(undefined4 *)(param_5 + -0x1c) = 0;
  uVar1 = *(ulonglong *)(param_5 + -0x18);
  *(ulonglong *)(param_5 + -0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar1 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar1 & 0x100) != 0) * 0x100 | (ulonglong)((uVar1 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar1 & 0x40) != 0) * 0x40 | (ulonglong)((uVar1 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar1 & 4) != 0) * 4 | (ulonglong)((uVar1 & 1) != 0) |
       (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_5 + -0x20) = unaff_RBP;
  *(undefined4 *)(param_5 + -0x28) = 0x4048274b;
  *(undefined4 *)(param_5 + -0x24) = 0;
  (*(code *)0x14dc4e411)(0x14d9472d4,local_res10,param_3,local_res8);
  return;
}



// FUNCTION 14d947327 FUN_14d947327 body=136 status=ok
// SIG undefined FUN_14d947327(void)

void FUN_14d947327(void)

{
  ulonglong unaff_R15;
  
  (*(code *)&LAB_156e8db23)(~unaff_R15);
  return;
}



// FUNCTION 14d9474db FUN_14d9474db body=148 status=ok
// SIG undefined FUN_14d9474db(void)

void FUN_14d9474db(void)

{
  ulonglong *in_R9;
  ulonglong unaff_R13;
  
  *in_R9 = ~((*in_R9 - (unaff_R13 | *in_R9)) + unaff_R13);
  (*(code *)0x1652e279c)();
  return;
}



// FUNCTION 14d947771 FUN_14d947771 body=381 status=ok
// SIG undefined FUN_14d947771(void)

/* WARNING: Removing unreachable block (ram,0x00014d94783e) */
/* WARNING: Removing unreachable block (ram,0x0001575251ac) */
/* WARNING: Removing unreachable block (ram,0x0001575251b8) */
/* WARNING: Removing unreachable block (ram,0x00014d947818) */
/* WARNING: Removing unreachable block (ram,0x00014dfa5f9e) */

undefined8
FUN_14d947771(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RDI;
  ushort *puVar4;
  ulonglong uVar5;
  longlong in_R10;
  undefined8 in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar5 = *(ulonglong *)(unaff_R13 + (unaff_RDI ^ 0x7021f288));
  puVar4 = (ushort *)((uVar5 - unaff_R15) + (~unaff_R15 | uVar5) * -2 + -2);
  uVar5 = *(ulonglong *)(unaff_R13 + -0x30) | unaff_R15;
  if (CARRY8(~uVar5 | 0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15),uVar5)) {
    FUN_16228f1de();
    uVar5 = *(ulonglong *)(unaff_R13 + -0x68);
    uVar3 = FUN_15afccf53(param_1);
    *puVar4 = (-0x101 - (*puVar4 | 0xfeff)) + *puVar4;
    plVar1 = (longlong *)(unaff_retaddr + -8);
    *plVar1 = in_R10;
    *(undefined8 *)(unaff_retaddr + -0x10) = unaff_R14;
    *(undefined4 *)(unaff_retaddr + -0x18) = 0x596e112b;
    *(undefined4 *)(unaff_retaddr + -0x14) = 0;
    uVar2 = *(ulonglong *)(unaff_retaddr + -0x18);
    *(ulonglong *)(unaff_retaddr + -0x10) = unaff_R15;
    *(undefined8 *)(unaff_retaddr + -0x10) = in_R11;
    *(longlong *)(unaff_retaddr + -0x10) = *plVar1;
    *(ulonglong *)(unaff_retaddr + -0x18) =
         ~(0xffffffffffffffff - unaff_R15 | uVar5) | ~(~uVar5 | unaff_R15);
    *(undefined8 *)(unaff_retaddr + -8) = 0;
    *plVar1 = *plVar1 + (uVar2 ^ 0x596e53ec) + 0x1667fd089;
    *(undefined8 *)(unaff_retaddr + -0x10) = param_4;
    *(undefined8 *)(unaff_retaddr + -0x18) = param_4;
    *(undefined8 *)(unaff_retaddr + -0x10) = 0x14d7c1791;
    return uVar3;
  }
  uVar3 = FUN_15752507e();
  return uVar3;
}



// FUNCTION 14d9478f4 FUN_14d9478f4 body=224 status=ok
// SIG undefined FUN_14d9478f4(void)

void FUN_14d9478f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStackX_10;
  
  FUN_1663cc7b0();
  FUN_165c7153c(param_1,param_2,uStackX_10);
  return;
}



// FUNCTION 14d947a83 FUN_14d947a83 body=53 status=ok
// SIG undefined FUN_14d947a83(void)

void FUN_14d947a83(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14d947b4e FUN_14d947b4e body=469 status=ok
// SIG undefined FUN_14d947b4e(void)

/* WARNING: Removing unreachable block (ram,0x00014d947c09) */

void FUN_14d947b4e(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16198adc0(*(undefined8 *)(unaff_RSI + -0x40),*(longlong *)(unaff_RSI + -0x70) + unaff_RBP);
  FUN_1619dbf86();
  return;
}



// FUNCTION 14d947c09 FUN_14d947c09 body=47 status=ok
// SIG undefined FUN_14d947c09(void)

void FUN_14d947c09(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RDI;
  uint unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + param_4 + ((ulonglong)unaff_retaddr ^ 0x2b223e0e)) =
       unaff_RDI;
                    /* WARNING: Could not recover jumptable at 0x00014d947c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStackX_8,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14d947cb9 FUN_14d947cb9 body=139 status=ok
// SIG undefined FUN_14d947cb9(void)

/* WARNING: Removing unreachable block (ram,0x00014d947d3f) */
/* WARNING: Removing unreachable block (ram,0x00014d947d45) */

void FUN_14d947cb9(void)

{
  return;
}



// FUNCTION 14d947d45 FUN_14d947d45 body=164 status=ok
// SIG undefined FUN_14d947d45(void)

void FUN_14d947d45(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_160b8d1f0(param_1,FUN_160b8d1f0,param_3,unaff_retaddr);
  return;
}


