// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14da2423d FUN_14da2423d body=149 status=ok
// SIG undefined FUN_14da2423d(void)

void FUN_14da2423d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5)

{
  undefined8 in_stack_00000008;
  
  FUN_156734999(in_stack_00000008,param_2,CONCAT62(0x15673,~param_5 & 0xb648),param_4);
  return;
}



// FUNCTION 14da24401 FUN_14da24401 body=168 status=ok
// SIG undefined FUN_14da24401(void)

void FUN_14da24401(longlong param_1,undefined8 param_2)

{
  ulonglong unaff_RBX;
  undefined8 uStackX_8;
  
  FUN_1667feaf7((*(ulonglong *)(param_1 + -0xa0) ^ 0xffffffffffffffff | ~unaff_RBX) &
                (*(ulonglong *)(param_1 + -0xa0) | unaff_RBX),param_2,uStackX_8);
  FUN_165e93f27();
  return;
}



// FUNCTION 14da24518 FUN_14da24518 body=258 status=ok
// SIG undefined FUN_14da24518(void)

/* WARNING: Removing unreachable block (ram,0x00014da24541) */

void FUN_14da24518(undefined8 param_1,ulonglong param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined8 in_stack_00000008;
  
  FUN_1656e0a06();
  *param_3 = ~param_2;
  FUN_164a39519(param_1,in_stack_00000008,param_4);
  return;
}



// FUNCTION 14da246be FUN_14da246be body=17 status=ok
// SIG undefined FUN_14da246be(void)

undefined8 FUN_14da246be(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14da2479a FUN_14da2479a body=112 status=ok
// SIG undefined FUN_14da2479a(void)

void FUN_14da2479a(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  undefined8 in_R11;
  longlong lStackX_10;
  
  *(longlong *)(lStackX_10 + -0x10) = -unaff_RBX;
  *(undefined8 *)(lStackX_10 + -8) = 0;
  *(longlong *)(lStackX_10 + -8) =
       *(longlong *)(lStackX_10 + -8) - *(longlong *)(lStackX_10 + -0x10);
  *(undefined8 *)(lStackX_10 + -0x10) = param_2;
  *(undefined8 *)(lStackX_10 + -0x18) = in_R11;
  *(undefined8 *)(lStackX_10 + -0x20) = in_R11;
  *(undefined **)(lStackX_10 + -0x18) = &DAT_14da2480c;
  return;
}



// FUNCTION 14da24a75 FUN_14da24a75 body=154 status=ok
// SIG undefined FUN_14da24a75(void)

/* WARNING: Removing unreachable block (ram,0x00014da24b7c) */
/* WARNING: Removing unreachable block (ram,0x00014da24b10) */
/* WARNING: Removing unreachable block (ram,0x00014da24b98) */
/* WARNING: Removing unreachable block (ram,0x00015b2ba8c5) */
/* WARNING: Removing unreachable block (ram,0x00014da24b9e) */

void FUN_14da24a75(byte param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R13;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000008;
  ulonglong local_res10;
  longlong lStackX_18;
  
  if (((ushort)local_res10 | 0x100) != 0x100) {
    FUN_16287427c();
    return;
  }
  LOCK();
  bVar3 = (byte)in_RAX;
  bVar4 = bVar3 < FUN_14d7a5468;
  bVar5 = SBORROW1(bVar3,FUN_14d7a5468);
  cVar2 = bVar3 - FUN_14d7a5468;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),FUN_14d7a5468);
    bVar3 = FUN_14d7a5468;
  }
  FUN_14d7a5468 = bVar3;
  UNLOCK();
  *(undefined8 *)(lStackX_18 + -8) = param_3;
  *(undefined8 *)(lStackX_18 + -0x10) = param_3;
  *(undefined8 *)(lStackX_18 + -0x18) = in_RAX;
  *(undefined4 *)(lStackX_18 + -0x18) = 0x14451d9a;
  *(undefined8 *)(lStackX_18 + -0x20) = in_stack_00000008;
  *(ulonglong *)(lStackX_18 + -0x28) =
       (ulonglong)bVar5 * 0x800 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((local_res10 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res10 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lStackX_18 + -0x14) = 0;
  uVar6 = *(ulonglong *)(lStackX_18 + -0x28);
  lVar1 = *(longlong *)(lStackX_18 + -0x18);
  *(ulonglong *)(lStackX_18 + -0x18) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(lStackX_18 + -0x18);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RBX;
  *(ulonglong *)(lStackX_18 + -0x20) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(longlong *)(lStackX_18 + -8) = lVar1 + -0xfdecd8c;
  *(undefined8 *)(lStackX_18 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lStackX_18 + -0x28d7) = unaff_R13;
  *(undefined **)(lStackX_18 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14da24b10 FUN_14da24b10 body=426 status=ok
// SIG undefined FUN_14da24b10(void)

/* WARNING: Removing unreachable block (ram,0x00014da24b7c) */
/* WARNING: Removing unreachable block (ram,0x00014da24b9e) */

void FUN_14da24b10(void)

{
  return;
}



// FUNCTION 14da24ce9 FUN_14da24ce9 body=47 status=ok
// SIG undefined FUN_14da24ce9(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da24ce9(void)

{
  undefined4 *unaff_RSI;
  undefined4 unaff_retaddr;
  
  *unaff_RSI = 0xef1f14bb;
  if (CONCAT44(0xffffffff,unaff_retaddr) != 0xa94d061) {
    return;
  }
  out(0x42,(int)unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da24ea4 FUN_14da24ea4 body=15 status=ok
// SIG undefined FUN_14da24ea4(void)

void FUN_14da24ea4(void)

{
  return;
}



// FUNCTION 14da24fc1 FUN_14da24fc1 body=210 status=ok
// SIG undefined FUN_14da24fc1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da25088) */
/* WARNING: Removing unreachable block (ram,0x00014da25093) */
/* WARNING: Removing unreachable block (ram,0x00014da2508e) */
/* WARNING: Removing unreachable block (ram,0x00014d7bcf22) */
/* WARNING: Removing unreachable block (ram,0x00014d7bced7) */
/* WARNING: Removing unreachable block (ram,0x00014d7bcf26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14da24fc1(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_R12;
  ulonglong unaff_retaddr;
  undefined8 uStackX_18;
  
  if (-1 < (longlong)(uStackX_18 ^ unaff_retaddr)) {
    return ~((~unaff_retaddr | *(ulonglong *)(unaff_R12 + -0x98)) + unaff_retaddr + 1) &
           (*(ulonglong *)(unaff_R12 + -0x98) | unaff_retaddr);
  }
  uVar1 = FUN_16553398b(param_1,param_2);
  return uVar1;
}



// FUNCTION 14da25093 FUN_14da25093 body=76 status=ok
// SIG undefined FUN_14da25093(void)

void FUN_14da25093(void)

{
  return;
}



// FUNCTION 14da2512a FUN_14da2512a body=150 status=ok
// SIG undefined FUN_14da2512a(void)

void FUN_14da2512a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16107785a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da25221 FUN_14da25221 body=61 status=ok
// SIG undefined FUN_14da25221(void)

void FUN_14da25221(void)

{
  return;
}



// FUNCTION 14da25345 FUN_14da25345 body=312 status=ok
// SIG undefined FUN_14da25345(void)

/* WARNING: Removing unreachable block (ram,0x00014da253bb) */
/* WARNING: Removing unreachable block (ram,0x00014da253c1) */

undefined8 FUN_14da25345(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong unaff_R13;
  undefined8 unaff_R14;
  byte in_AF;
  byte in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_ID;
  ulonglong uVar6;
  
  uVar5 = *(undefined8 *)(&stack0xfffffffff44b843f + unaff_R13);
  if ((in_ZF & 1) == 0) {
    uVar5 = FUN_162290d53();
    return uVar5;
  }
  *(undefined8 *)(&stack0xfffffffff44b843f + unaff_R13) = param_1;
  *(undefined4 *)(&stack0xfffffffff44b8437 + unaff_R13) = 0xa5c8de;
  *(undefined8 *)(&stack0xfffffffff44b842f + unaff_R13) = uVar5;
  *(undefined8 *)(&stack0xfffffffff44b8427 + unaff_R13) = param_3;
  uVar5 = *(undefined8 *)(&stack0xfffffffff44b8427 + unaff_R13);
  *(undefined8 *)(&stack0xfffffffff44b8427 + unaff_R13) = unaff_R14;
  uVar4 = *(undefined8 *)(&stack0xfffffffff44b8427 + unaff_R13);
  *(undefined4 *)(&stack0xfffffffff44b843b + unaff_R13) = 0;
  *(undefined4 *)(&stack0xfffffffff44b843b + unaff_R13) =
       *(undefined4 *)(&stack0xfffffffff44b843b + unaff_R13);
  *(uint *)(&stack0xfffffffff44b843b + unaff_R13) = ~*(uint *)(&stack0xfffffffff44b843b + unaff_R13)
  ;
  *(int *)(&stack0xfffffffff44b843b + unaff_R13) =
       *(int *)(&stack0xfffffffff44b843b + unaff_R13) + 1;
  lVar3 = *(longlong *)(&stack0xfffffffff44b8437 + unaff_R13);
  puVar2 = &stack0xfffffffff44b843f + unaff_R13;
  uVar1 = lVar3 - 0xa5c8e6;
  *(ulonglong *)(puVar2 + lVar3 + -0xa5c8ee) =
       (ulonglong)((in_NT & 1) != 0) * 0x4000 | (ulonglong)SCARRY8((longlong)puVar2,uVar1) * 0x800 |
       (ulonglong)((in_IF & 1) != 0) * 0x200 | (ulonglong)((in_TF & 1) != 0) * 0x100 |
       (ulonglong)((longlong)(puVar2 + uVar1) < 0) * 0x80 |
       (ulonglong)(puVar2 + uVar1 == (undefined1 *)0x0) * 0x40 |
       (ulonglong)((in_AF & 1) != 0) * 0x10 |
       (ulonglong)((POPCOUNT((ulonglong)(puVar2 + uVar1) & 0xff) & 1U) == 0) * 4 |
       (ulonglong)CARRY8((ulonglong)puVar2,uVar1) | (ulonglong)((in_ID & 1) != 0) * 0x200000 |
       (ulonglong)((in_AC & 1) != 0) * 0x40000;
  *(undefined8 *)(puVar2 + lVar3 + -0xa5c8f6) = in_RAX;
  if ((*(ushort *)(puVar2 + lVar3 + -0xa5c8ee) & 0x80) == 0) {
    uVar6 = *(ulonglong *)(puVar2 + lVar3 + -0xa5c8ee);
    *(ulonglong *)(puVar2 + lVar3 + -0xa5c8ee) =
         (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
         (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(puVar2 + lVar3 + -0xa5c8f6) = uVar4;
    if ((*(ushort *)(puVar2 + lVar3 + -0xa5c8ee) & 0x80) != 0) {
      *(undefined8 *)(puVar2 + lVar3 + -0xa5c8ee) = unaff_RBP;
      *(undefined8 *)(puVar2 + lVar3 + -0xa5c8de) = 0;
      *(longlong *)(puVar2 + lVar3 + -0xa5c8de) =
           *(longlong *)(puVar2 + lVar3 + -0xa5c8de) + *(longlong *)(puVar2 + lVar3 + -0xa5c8d6);
      *(undefined8 *)(puVar2 + uVar1) = *(undefined8 *)(puVar2 + lVar3 + -0xa5c8f6);
      *(undefined8 *)(puVar2 + lVar3 + -0xa5c8d6) = unaff_RDI;
      uVar5 = thunk_FUN_15b0572f1(uVar1,param_2,uVar5);
      return uVar5;
    }
    uVar5 = FUN_14dbf0ea9();
    return uVar5;
  }
  uVar5 = FUN_14dbf0ea9();
  return uVar5;
}



// FUNCTION 14da25595 FUN_14da25595 body=42 status=ok
// SIG undefined FUN_14da25595(void)

void FUN_14da25595(void)

{
  return;
}



// FUNCTION 14da25abc FUN_14da25abc body=146 status=ok
// SIG undefined FUN_14da25abc(void)

longlong FUN_14da25abc(void)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_stack_00000008;
  
  uVar2 = *(ulonglong *)(in_stack_00000008 + -0x48) | in_RAX;
  uVar1 = ~(*(ulonglong *)(in_stack_00000008 + -0x48) & in_RAX);
  FUN_156bb3c6a();
  uVar1 = *(ulonglong *)((uVar2 - (uVar1 | uVar2)) + uVar1 + -0x60);
  return uVar1 + unaff_RBP + (uVar1 & unaff_RBP) * -2;
}



// FUNCTION 14da25b4e FUN_14da25b4e body=194 status=ok
// SIG undefined FUN_14da25b4e(void)

longlong FUN_14da25b4e(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP +
         (*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) * -2;
}



// FUNCTION 14da25cb5 FUN_14da25cb5 body=1161 status=ok
// SIG undefined FUN_14da25cb5(void)

/* WARNING: Removing unreachable block (ram,0x00014da25d61) */
/* WARNING: Removing unreachable block (ram,0x00014da25d67) */

void FUN_14da25cb5(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x58) + 1;
  (*(code *)0x15b7a1970)
            (uVar1 + in_RAX + (uVar1 & in_RAX) * -2,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX,
             ~((0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) &
              (0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x30) | in_RAX)));
  return;
}



// FUNCTION 14da25f63 FUN_14da25f63 body=141 status=ok
// SIG undefined FUN_14da25f63(void)

void FUN_14da25f63(byte param_1)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_R13;
  bool bVar3;
  bool bVar4;
  ushort local_res20;
  uint6 uStackX_22;
  longlong in_stack_00000028;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7ab240;
  bVar4 = SBORROW1(in_AL,DAT_14d7ab240);
  cVar1 = in_AL - DAT_14d7ab240;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7ab240;
  }
  DAT_14d7ab240 = bVar2;
  UNLOCK();
  *(undefined8 *)(in_stack_00000028 + -8) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_R13;
  *(ulonglong *)(in_stack_00000028 + -0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  FUN_162546fce();
  return;
}



// FUNCTION 14da25ff1 FUN_14da25ff1 body=115 status=ok
// SIG undefined FUN_14da25ff1(void)

void FUN_14da25ff1(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_15b8583ba(param_1,param_2,FUN_15b8583ba,-1 - param_4);
  return;
}



// FUNCTION 14da2624f FUN_14da2624f body=318 status=ok
// SIG undefined FUN_14da2624f(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2624f(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  short sVar3;
  longlong unaff_R12;
  
  uVar1 = *(undefined8 *)(unaff_R12 + -0x48);
  FUN_14da0c6c0(param_1 + *(longlong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x78) & in_RAX) * -2,param_3,FUN_14da0c6c0);
  uVar2 = 0;
  sVar3 = (short)uVar1;
  if (sVar3 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  FUN_1654dc168(CONCAT62((int6)((ulonglong)uVar2 >> 0x10),sVar3),FUN_1654dc168);
  return;
}



// FUNCTION 14da26390 FUN_14da26390 body=168 status=ok
// SIG undefined FUN_14da26390(void)

void FUN_14da26390(void)

{
  (*(code *)&LAB_165d8589e)();
  return;
}



// FUNCTION 14da26616 FUN_14da26616 body=168 status=ok
// SIG undefined FUN_14da26616(void)

void FUN_14da26616(void)

{
  FUN_15b8a3e47();
  return;
}



// FUNCTION 14da26766 FUN_14da26766 body=131 status=ok
// SIG undefined FUN_14da26766(void)

void FUN_14da26766(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  (*(code *)0x156c0a144)
            ((char)param_1,
             ~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x68) | param_1),param_3 & unaff_RSI);
  return;
}



// FUNCTION 14da2698d FUN_14da2698d body=182 status=ok
// SIG undefined FUN_14da2698d(void)

/* WARNING: Removing unreachable block (ram,0x00014da26ade) */
/* WARNING: Removing unreachable block (ram,0x00014da26ae4) */
/* WARNING: Removing unreachable block (ram,0x000162ba0b05) */
/* WARNING: Removing unreachable block (ram,0x00014da26a43) */
/* WARNING: Removing unreachable block (ram,0x000162ba0a02) */
/* WARNING: Removing unreachable block (ram,0x000162ba09fd) */
/* WARNING: Removing unreachable block (ram,0x000162ba0a09) */
/* WARNING: Removing unreachable block (ram,0x000162ba0aff) */
/* WARNING: Removing unreachable block (ram,0x000166aaf6f1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2698d(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  void *pvVar2;
  longlong in_RAX;
  undefined8 unaff_R13;
  undefined8 local_res10;
  ulonglong local_res18;
  
  pvVar2 = ProcessEnvironmentBlock;
  param_1 = in_RAX - param_1;
  *(void **)(param_1 + -8) = ProcessEnvironmentBlock;
  *(void **)(param_1 + -0x10) = pvVar2;
  *(undefined4 *)(param_1 + -0x18) = 0x10c35527;
  *(undefined4 *)(param_1 + -0x14) = 0;
  lVar1 = *(longlong *)(param_1 + -0x18);
  *(ulonglong *)(param_1 + -0x18) =
       (ulonglong)((local_res18 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res18 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res18 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res18 & 0x100) != 0) * 0x100 |
       (ulonglong)((local_res18 & 0x80) != 0) * 0x80 | (ulonglong)((local_res18 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res18 & 0x10) != 0) * 0x10 | (ulonglong)((local_res18 & 4) != 0) * 4 |
       (ulonglong)((local_res18 & 1) != 0) | (ulonglong)((local_res18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((local_res18 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 + -0x20) = unaff_R13;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(longlong *)(param_1 + -8) = lVar1 + -0xe67f73f;
  FUN_165c7153c(local_res10,param_2,*(undefined8 *)(param_1 + -0x28));
  return;
}



// FUNCTION 14da26a43 FUN_14da26a43 body=1144 status=ok
// SIG undefined FUN_14da26a43(void)

/* WARNING: Removing unreachable block (ram,0x00014da26ade) */
/* WARNING: Removing unreachable block (ram,0x00014da26ae4) */
/* WARNING: Removing unreachable block (ram,0x000162ba0b05) */

void FUN_14da26a43(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8 [4];
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x70) ^ param_1;
  FUN_165a98844(param_1,-1 - ((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                             (*(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1)),
                uVar1,(~-unaff_RBP + 1U) - param_3);
  uVar2 = (~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x80)) + ~*(ulonglong *)(unaff_R13 + -0x80)) -
          ~unaff_R15;
  FUN_16667bba8();
  *(undefined4 *)
   ((longlong)local_res8 + ~(~(uVar1 & 0xffffffffaae3ffa5) & (uVar2 | 0xffffffffaae3ffa5))) =
       0xe02e7c62;
  local_res8[0] = 0x166aaf782;
  FUN_1656ab830();
  return;
}



// FUNCTION 14da26c2a FUN_14da26c2a body=315 status=ok
// SIG undefined FUN_14da26c2a(void)

/* WARNING: Removing unreachable block (ram,0x00014da26cd4) */

void FUN_14da26c2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 unaff_R12;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_4;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined8 *)(local_res10 + -0x20) = 0;
  *(undefined8 *)(local_res10 + -8) = *(undefined8 *)(local_res10 + -0x20);
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x1659f13d0;
  plVar1 = (longlong *)(local_res10 + -8);
  lVar2 = *plVar1;
  *plVar1 = -*plVar1;
  if (lVar2 != 0) {
    FUN_1659f13a6();
    return;
  }
  FUN_14d7a4a44(param_1,param_2,param_3,*(undefined8 *)(local_res10 + -0x10));
  return;
}



// FUNCTION 14da26df6 FUN_14da26df6 body=164 status=ok
// SIG undefined FUN_14da26df6(void)

ulonglong FUN_14da26df6(ulonglong param_1)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  
  return ~((param_1 - (unaff_RSI | param_1)) + in_RAX) & unaff_RBX;
}



// FUNCTION 14da26f2a FUN_14da26f2a body=152 status=ok
// SIG undefined FUN_14da26f2a(void)

void FUN_14da26f2a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_1657bccc7(param_1,*(ulonglong *)(unaff_RDI + -0x60),
                *(ulonglong *)(unaff_RDI + -0x70) & param_1,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14da26fc4 FUN_14da26fc4 body=104 status=ok
// SIG undefined FUN_14da26fc4(void)

void FUN_14da26fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14d7c103a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14da27129 FUN_14da27129 body=53 status=ok
// SIG undefined FUN_14da27129(void)

undefined8 FUN_14da27129(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da271b0 FUN_14da271b0 body=300 status=ok
// SIG undefined FUN_14da271b0(void)

/* WARNING: Removing unreachable block (ram,0x00014da271c8) */
/* WARNING: Removing unreachable block (ram,0x00014da2723a) */
/* WARNING: Removing unreachable block (ram,0x00014da27240) */

void FUN_14da271b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  longlong in_stack_00000008;
  
  uVar1 = -(in_stack_00000008 - *(longlong *)(unaff_R12 + -0x78));
  FUN_156c0b546(param_1,~((~in_RAX | uVar1) & (~uVar1 | in_RAX)),param_3,param_4);
  return;
}



// FUNCTION 14da27240 FUN_14da27240 body=146 status=ok
// SIG undefined FUN_14da27240(void)

void FUN_14da27240(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_161c37f16(param_1,~param_1 | *(ulonglong *)(unaff_RDI + -0x50));
  return;
}



// FUNCTION 14da272d3 FUN_14da272d3 body=171 status=ok
// SIG undefined FUN_14da272d3(void)

/* WARNING: Removing unreachable block (ram,0x00014da27373) */
/* WARNING: Removing unreachable block (ram,0x00014da2737e) */
/* WARNING: Removing unreachable block (ram,0x00014da27379) */

void FUN_14da272d3(ulonglong param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  
  FUN_165d45b42(param_2 + (param_1 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14da2737e FUN_14da2737e body=142 status=ok
// SIG undefined FUN_14da2737e(void)

void FUN_14da2737e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 local_res8;
  undefined8 local_res18;
  
  puVar1 = (undefined8 *)(local_res18 + -8);
  *puVar1 = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 0x14da2741d;
  thunk_FUN_15b0572f1(local_res8,param_2,param_3,uVar2);
  return;
}



// FUNCTION 14da27634 FUN_14da27634 body=264 status=ok
// SIG undefined FUN_14da27634(void)

/* WARNING: Removing unreachable block (ram,0x00014da27738) */
/* WARNING: Removing unreachable block (ram,0x00014da2773e) */
/* WARNING: Removing unreachable block (ram,0x00014da27780) */
/* WARNING: Removing unreachable block (ram,0x00014da2777b) */
/* WARNING: Removing unreachable block (ram,0x00014da27798) */
/* WARNING: Removing unreachable block (ram,0x0001660440eb) */
/* WARNING: Removing unreachable block (ram,0x000166044161) */

undefined8 FUN_14da27634(void)

{
  undefined8 uVar1;
  undefined8 local_res18;
  
  FUN_165bf6d92(local_res18);
  uVar1 = FUN_1660440eb();
  return uVar1;
}



// FUNCTION 14da2773e FUN_14da2773e body=189 status=ok
// SIG undefined FUN_14da2773e(void)

void FUN_14da2773e(ulonglong param_1,byte param_2,undefined8 param_3,ulonglong param_4)

{
  byte in_AL;
  char unaff_BL;
  byte bVar1;
  
  bVar1 = ~(~(param_2 & 0x15) & (param_2 | 0x15));
  if ((char)(unaff_BL + (in_AL ^ bVar1 ^ 0xbf)) < '\0') {
    bVar1 = 0x11;
  }
  FUN_15b63c5cb(param_1,bVar1,param_4 + param_1 + (param_4 & param_1) * -2);
  return;
}



// FUNCTION 14da277ff FUN_14da277ff body=241 status=ok
// SIG undefined FUN_14da277ff(void)

/* WARNING: Removing unreachable block (ram,0x00014da278a3) */

void FUN_14da277ff(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong in_stack_00000038;
  
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(undefined8 *)(unaff_RDI + 8) = 0;
  *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + ~(lVar1 - ~(~unaff_R12 | in_R10));
  in_stack_00000038 = in_stack_00000038 ^ unaff_R15;
  *(undefined8 *)(in_stack_00000038 - 8) = local_res20;
  *(undefined8 *)(in_stack_00000038 - 0x10) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000038 - 0x18) = in_stack_00000010;
  uVar2 = *(undefined8 *)(in_stack_00000038 - 8);
  *(undefined8 *)(in_stack_00000038 - 0x20) = local_res18;
  *(undefined8 *)(in_stack_00000038 - 0x10) = uVar2;
  *(undefined8 *)(in_stack_00000038 - 0x18) = *(undefined8 *)(in_stack_00000038 - 0x18);
  *(undefined **)(in_stack_00000038 - 8) = &DAT_160fe0a34;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 14da278a9 FUN_14da278a9 body=295 status=ok
// SIG undefined FUN_14da278a9(void)

/* WARNING: Removing unreachable block (ram,0x00014da27948) */

void FUN_14da278a9(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  if (-1 < (longlong)((~uVar1 - ~(uVar1 & unaff_R15)) + uVar1)) {
    uVar1 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x88)) &
             (~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15));
    FUN_1620b88a9(FUN_1620b88a9,uVar1,uVar1,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
    return;
  }
  FUN_165821836();
  return;
}



// FUNCTION 14da279d8 FUN_14da279d8 body=244 status=ok
// SIG undefined FUN_14da279d8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000164c1ac88) overlaps instruction at (ram,0x000164c1ac87)
    */
/* WARNING: Removing unreachable block (ram,0x00014da27a63) */
/* WARNING: Removing unreachable block (ram,0x00014da27a69) */
/* WARNING: Removing unreachable block (ram,0x00014da27adf) */
/* WARNING: Removing unreachable block (ram,0x00014da27ae4) */
/* WARNING: Removing unreachable block (ram,0x00014da27aea) */
/* WARNING: Removing unreachable block (ram,0x0001655cf953) */
/* WARNING: Removing unreachable block (ram,0x000156d2c1ce) */
/* WARNING: Removing unreachable block (ram,0x0001655cf9cb) */
/* WARNING: Removing unreachable block (ram,0x0001655cf9d1) */
/* WARNING: Removing unreachable block (ram,0x0001655cf9d6) */
/* WARNING: Removing unreachable block (ram,0x00014da27a01) */
/* WARNING: Removing unreachable block (ram,0x000164c1ac87) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da279d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)0x165d0443f)(0x165d0443f,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da27a69 FUN_14da27a69 body=278 status=ok
// SIG undefined FUN_14da27a69(void)

/* WARNING: Removing unreachable block (ram,0x00014da27aea) */
/* WARNING: Removing unreachable block (ram,0x0001655cf9d6) */

void FUN_14da27a69(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = ~(~(0xffffffffffffffff - unaff_RBP) & ~*(ulonglong *)(unaff_RSI + -0x38));
  uVar1 = ~*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP;
  uVar2 = (uVar1 - (uVar2 | uVar1)) + uVar2;
  if ((longlong)uVar2 < 0) {
    FUN_1655cf953();
    return;
  }
  uVar1 = *(ulonglong *)(unaff_RSI + -0x80) | unaff_RBP;
  uVar3 = 0xffffffffffffffff - (*(ulonglong *)(unaff_RSI + -0x80) & unaff_RBP);
  if (!CARRY8(uVar1 - (uVar3 | uVar1),uVar3)) {
    (*(code *)0x1659be4dc)
              (~uVar2,(*(ulonglong *)(unaff_RSI + -0x58) - unaff_RBP) +
                      (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58)) * -2 + -2);
    return;
  }
  FUN_156d2c1ce();
  return;
}



// FUNCTION 14da27da1 FUN_14da27da1 body=311 status=ok
// SIG undefined FUN_14da27da1(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da27f4e) */
/* WARNING: Removing unreachable block (ram,0x00014da27edb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da27da1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_stack_00000010;
  uint uVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar4 = (uint)((ulonglong)in_stack_00000010 >> 0x20);
  *(undefined8 *)
   (&stack0x3ad14866 +
   CONCAT44(~(~(uVar4 & 0xd4e5e715) & (uVar4 | 0xd4e5e715)),(int)in_stack_00000010)) = param_2;
  uVar3 = FUN_164a99faa(param_1,in_stack_00000020,param_3,in_stack_00000018);
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = ~*(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = *(ulonglong *)(param_3 + 0x10) | uVar3;
  *(ulonglong *)(param_3 + 0x10) = ~((~uVar3 | uVar1) & *(ulonglong *)(param_3 + 0x10));
  *(undefined8 *)(param_7 + -8) = param_5;
  *(undefined8 *)(param_7 + -0x10) = *(undefined8 *)(param_7 + -8);
  *(undefined8 *)(param_7 + -0x18) = param_1;
  *(undefined8 *)(param_7 + -8) = 0;
  *(longlong *)(param_7 + -8) = (longlong)(&LAB_166bc275b + *(longlong *)(param_7 + -8));
  uVar2 = *(undefined8 *)(param_7 + -0x10);
  *(longlong *)(param_7 + -0x10) = param_7 + -8;
  _DAT_13ad03546 = _DAT_13ad03546 - ((int)uVar2 + 0x35af142a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da27edb FUN_14da27edb body=156 status=ok
// SIG undefined FUN_14da27edb(void)

/* WARNING: Removing unreachable block (ram,0x00014da27f4e) */

void FUN_14da27edb(void)

{
  undefined8 unaff_R12;
  longlong in_stack_00000008;
  
  *(undefined8 *)(&stack0x5e1c573a + in_stack_00000008) = unaff_R12;
  FUN_16293ea4a();
  return;
}



// FUNCTION 14da27f78 FUN_14da27f78 body=148 status=ok
// SIG undefined FUN_14da27f78(void)

void FUN_14da27f78(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164ff2d5e(~(unaff_RDI + unaff_R15 + 1 | ~unaff_RBP),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da28419 FUN_14da28419 body=42 status=ok
// SIG undefined FUN_14da28419(void)

void FUN_14da28419(void)

{
  return;
}



// FUNCTION 14da28548 FUN_14da28548 body=287 status=ok
// SIG undefined FUN_14da28548(void)

/* WARNING: Removing unreachable block (ram,0x00014da285dd) */

void FUN_14da28548(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  puVar1 = (ulonglong *)(0xf - ~(ulonglong)&stack0xfffffffffffffff8);
  uVar2 = *puVar1;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | unaff_R15;
  uVar2 = (unaff_R15 ^ 0xffffffffffffffff | uVar2) & *puVar1;
  *puVar1 = ~uVar2;
  if (uVar2 == 0) {
    FUN_16229de0b();
    return;
  }
  FUN_16229de0b();
  return;
}



// FUNCTION 14da2870f FUN_14da2870f body=268 status=ok
// SIG undefined FUN_14da2870f(void)

/* WARNING: Removing unreachable block (ram,0x000164a30420) */
/* WARNING: Removing unreachable block (ram,0x00014da2879f) */

void FUN_14da2870f(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong unaff_retaddr;
  ulonglong local_res20;
  
  *(ulonglong *)(unaff_RBP + 8) =
       param_1 - ~((~(unaff_R13 & *(ulonglong *)(unaff_RBP + 8)) + *(longlong *)(unaff_RBP + 8)) -
                  ~unaff_R13);
  FUN_14e128469(~(~local_res20 | unaff_retaddr) + 1 + unaff_retaddr + ~local_res20,param_2,param_3,
                FUN_14e128469);
  return;
}



// FUNCTION 14da28919 FUN_14da28919 body=176 status=ok
// SIG undefined FUN_14da28919(void)

ulonglong FUN_14da28919(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15)) {
    return *(ulonglong *)(unaff_R13 + -0x88);
  }
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14da289d2 FUN_14da289d2 body=139 status=ok
// SIG undefined FUN_14da289d2(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da289d2(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if ((in_stack_00000008 & 0x40) != 0) {
    (*(code *)0x157580f73)();
    return;
  }
  FUN_157580f67(param_1,param_2,in_stack_00000010);
  return;
}



// FUNCTION 14da28a5e FUN_14da28a5e body=51 status=ok
// SIG undefined FUN_14da28a5e(void)

void FUN_14da28a5e(void)

{
  return;
}



// FUNCTION 14da28d75 FUN_14da28d75 body=297 status=ok
// SIG undefined FUN_14da28d75(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c2f1e) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2f20) */
/* WARNING: Removing unreachable block (ram,0x00014d7c2f5a) */

void FUN_14da28d75(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = param_1;
  bVar5 = 0x1b;
  plVar2 = (longlong *)(local_res20 + -0x10);
  *plVar2 = 0;
  *plVar2 = *plVar2 - unaff_R14;
  *plVar2 = -*plVar2;
  *(longlong *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x28) = local_res8;
  *(longlong *)(local_res20 + -0x30) = -*(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x38) = 0x14da28e24;
  lVar4 = FUN_15648ae53();
  *(undefined8 *)(local_res20 + -0x38) = 0xffffffff9baee137;
  lVar3 = *(longlong *)(local_res20 + -0x18);
  plVar2 = (longlong *)(lVar3 + -8);
  *plVar2 = lVar4;
  *(longlong *)(lVar3 + -0x10) = *plVar2;
  *plVar2 = 0;
  *plVar2 = (longlong)(&LAB_14da28eaf + *plVar2);
  *(undefined8 *)(lVar3 + -0x18) = unaff_R13;
  piVar1 = (int *)(*(longlong *)(lVar3 + -0x10) + -0x65);
  *piVar1 = *piVar1 << (bVar5 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da28ee2 FUN_14da28ee2 body=277 status=ok
// SIG undefined FUN_14da28ee2(void)

/* WARNING: Removing unreachable block (ram,0x00015717ce2c) */
/* WARNING: Removing unreachable block (ram,0x00015717ce40) */
/* WARNING: Removing unreachable block (ram,0x00015717ce7c) */
/* WARNING: Removing unreachable block (ram,0x00015717ce82) */
/* WARNING: Removing unreachable block (ram,0x000166deb1bb) */
/* WARNING: Removing unreachable block (ram,0x00014da28f76) */

void FUN_14da28ee2(void)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (-1 < unaff_RBP + 0x54f7842) {
    uVar1 = ~(~-unaff_R15 + 1U);
    FUN_156ec885c(-*(longlong *)(unaff_R13 + -0x78),
                  (((uVar1 | *(ulonglong *)(unaff_R13 + -0x48)) - uVar1) + -1) - (~-unaff_R15 + 1U))
    ;
    return;
  }
  FUN_16598865e();
  return;
}



// FUNCTION 14da28f7c FUN_14da28f7c body=170 status=ok
// SIG undefined FUN_14da28f7c(void)

undefined8 FUN_14da28f7c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da290d8 FUN_14da290d8 body=138 status=ok
// SIG undefined FUN_14da290d8(void)

void FUN_14da290d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_1656ab5cb(in_stack_00000008,param_2,param_3);
  return;
}



// FUNCTION 14da29256 FUN_14da29256 body=318 status=ok
// SIG undefined FUN_14da29256(void)

/* WARNING: Removing unreachable block (ram,0x00014da292fe) */
/* WARNING: Removing unreachable block (ram,0x0001666e9271) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da29256(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~*(ulonglong *)(unaff_R12 + -0x50);
  uVar1 = (uVar1 + in_RAX) - (uVar1 & in_RAX);
  if (!CARRY8(~uVar1 | ~in_RAX | *(ulonglong *)(unaff_R12 + -0x50),uVar1)) {
    FUN_1666e9198();
    return;
  }
  uVar1 = ~-*(longlong *)(unaff_R12 + -0x90) + 1;
  FUN_157655ead(param_1,param_2,
                (~in_RAX + uVar1) - (~in_RAX & uVar1) & (0xffffffffffffffff - uVar1 | in_RAX));
  FUN_156fc5fe1();
  return;
}



// FUNCTION 14da29398 FUN_14da29398 body=143 status=ok
// SIG undefined FUN_14da29398(void)

void FUN_14da29398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_157520ceb(param_1,0,param_3,param_4);
  return;
}



// FUNCTION 14da29427 FUN_14da29427 body=283 status=ok
// SIG undefined FUN_14da29427(void)

void FUN_14da29427(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x166b5a11c)(0,0x166b5a11c,param_3);
  return;
}



// FUNCTION 14da29535 FUN_14da29535 body=426 status=ok
// SIG undefined FUN_14da29535(void)

/* WARNING: Removing unreachable block (ram,0x00014da29638) */
/* WARNING: Removing unreachable block (ram,0x00014da29643) */
/* WARNING: Removing unreachable block (ram,0x00014da295ac) */
/* WARNING: Removing unreachable block (ram,0x00014da295b2) */
/* WARNING: Removing unreachable block (ram,0x000157845956) */
/* WARNING: Removing unreachable block (ram,0x0001578459ee) */
/* WARNING: Removing unreachable block (ram,0x0001578459f3) */
/* WARNING: Removing unreachable block (ram,0x0001578459f9) */
/* WARNING: Removing unreachable block (ram,0x000160d6738f) */
/* WARNING: Removing unreachable block (ram,0x00014da2963e) */

undefined8 FUN_14da29535(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da296e2 FUN_14da296e2 body=119 status=ok
// SIG undefined FUN_14da296e2(void)

/* WARNING: Removing unreachable block (ram,0x00014da296fd) */

void FUN_14da296e2(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  FUN_156782e31(param_1,~(uVar1 & param_1) & (uVar1 + param_1) - (uVar1 & param_1));
  return;
}



// FUNCTION 14da29759 FUN_14da29759 body=168 status=ok
// SIG undefined FUN_14da29759(void)

void FUN_14da29759(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_16112d160(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14da29884 FUN_14da29884 body=140 status=ok
// SIG undefined FUN_14da29884(void)

void FUN_14da29884(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  
  puVar1 = (ulonglong *)(&stack0xfffffffff19df26c + unaff_retaddr);
  lVar2 = *(longlong *)(unaff_RDI + -0x70);
  *puVar1 = 0;
  *puVar1 = *puVar1 + lVar2;
  uVar3 = *puVar1;
  *(undefined8 *)(&stack0xfffffffff19df26c + unaff_retaddr) = *(undefined8 *)(unaff_RDI + -0x68);
  uVar4 = *(ulonglong *)(&stack0xfffffffff19df26c + unaff_retaddr);
  *(ulonglong *)(&stack0xfffffffff19df26c + unaff_retaddr) = uVar3 ^ param_1;
  *(undefined8 *)(&stack0xfffffffff19df264 + unaff_retaddr) = param_4;
  FUN_1618cddeb(param_1,uVar4,-(uVar4 | param_1),FUN_1618cddeb);
  return;
}



// FUNCTION 14da29912 FUN_14da29912 body=161 status=ok
// SIG undefined FUN_14da29912(void)

void FUN_14da29912(void)

{
  return;
}



// FUNCTION 14da299b3 FUN_14da299b3 body=87 status=ok
// SIG undefined FUN_14da299b3(void)

void FUN_14da299b3(void)

{
  return;
}



// FUNCTION 14da29a51 FUN_14da29a51 body=100 status=ok
// SIG undefined FUN_14da29a51(void)

void FUN_14da29a51(void)

{
  FUN_15b7f5439();
  return;
}



// FUNCTION 14da29ab6 FUN_14da29ab6 body=134 status=ok
// SIG undefined FUN_14da29ab6(void)

void FUN_14da29ab6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong in_R11;
  longlong local_res10 [3];
  
  local_res10[2] =
       (*(longlong *)((longlong)local_res10 + in_R11) - param_1) +
       (~param_1 | local_res10[2]) * -2 + -2;
  FUN_164a962a1(FUN_164a962a1,param_2,local_res10[0],param_4);
  return;
}



// FUNCTION 14da29c7c FUN_14da29c7c body=81 status=ok
// SIG undefined FUN_14da29c7c(void)

void FUN_14da29c7c(void)

{
  return;
}



// FUNCTION 14da29e2a FUN_14da29e2a body=148 status=ok
// SIG undefined FUN_14da29e2a(void)

void FUN_14da29e2a(void)

{
  longlong unaff_RSI;
  bool in_ZF;
  
  if (in_ZF) {
    FUN_16131bb16();
    return;
  }
  if (unaff_RSI != 1) {
    (*(code *)0x164c58773)();
    return;
  }
  return;
}



// FUNCTION 14da2a002 FUN_14da2a002 body=149 status=ok
// SIG undefined FUN_14da2a002(void)

/* WARNING: Removing unreachable block (ram,0x00014da2a093) */
/* WARNING: Removing unreachable block (ram,0x00015b48f8b4) */
/* WARNING: Removing unreachable block (ram,0x00014da2a099) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf76e) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf811) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf822) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf817) */
/* WARNING: Removing unreachable block (ram,0x000160dda15d) */
/* WARNING: Removing unreachable block (ram,0x00014da2a12f) */
/* WARNING: Removing unreachable block (ram,0x00014da2a135) */
/* WARNING: Removing unreachable block (ram,0x00014da2a13a) */
/* WARNING: Removing unreachable block (ram,0x00014da2a176) */
/* WARNING: Removing unreachable block (ram,0x00014da2a18a) */

void FUN_14da2a002(void)

{
  FUN_15b48f8b4();
  return;
}



// FUNCTION 14da2a099 FUN_14da2a099 body=161 status=ok
// SIG undefined FUN_14da2a099(void)

/* WARNING: Removing unreachable block (ram,0x00014da2a176) */
/* WARNING: Removing unreachable block (ram,0x00014da2a13a) */
/* WARNING: Removing unreachable block (ram,0x00015b5cf822) */

void FUN_14da2a099(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  undefined8 unaff_R12;
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
  undefined8 local_res8;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  uVar1 = ~(local_res20 & in_RAX) & (local_res20 | in_RAX);
  lVar4 = (in_RAX - (in_stack_00000028 | in_RAX)) + in_stack_00000028;
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(lVar4 * 2);
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
    puVar2[-1] = local_res8;
    puVar2[-2] = 0x2ff0962;
    *puVar2 = puVar2[-2];
    puVar2[-1] = unaff_RDI;
    puVar2[-2] = unaff_RDI;
    puVar2[-3] = in_R9;
    puVar2[-4] = unaff_R12;
    puVar2[-5] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                 (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                 (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
                 (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
                 (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                 (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                 (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
    puVar2[-1] = &LAB_160dda19d;
    return;
  }
  FUN_15b5cf76e();
  return;
}



// FUNCTION 14da2a13a FUN_14da2a13a body=153 status=ok
// SIG undefined FUN_14da2a13a(void)

/* WARNING: Removing unreachable block (ram,0x00014da2a176) */

void FUN_14da2a13a(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int unaff_EDI;
  
  uVar1 = param_1 + unaff_EDI + -1;
  FUN_1664e64d0(uVar1 * 0x200 ^ uVar1 >> 0x17,FUN_1664e64d0,param_3,param_4);
  return;
}



// FUNCTION 14da2a396 FUN_14da2a396 body=171 status=ok
// SIG undefined FUN_14da2a396(void)

void FUN_14da2a396(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 unaff_R13;
  longlong unaff_R14;
  longlong unaff_retaddr;
  
  *(undefined1 *)(unaff_retaddr + -0x10) = 0x87;
  *(char *)(unaff_retaddr + -0x10) = *(char *)(unaff_retaddr + -0x10) + 'y';
  *(undefined8 *)(unaff_retaddr + -0x18) = in_R10;
  plVar1 = (longlong *)(unaff_retaddr + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R14;
  puVar2 = (undefined8 *)(unaff_retaddr + -0x28);
  *puVar2 = in_RAX;
  *(undefined4 *)puVar2 = 0x2276e7a9;
  *(undefined4 *)(unaff_retaddr + -0x24) = 0;
  uVar3 = *puVar2;
  *(undefined8 *)(unaff_retaddr + -0x28) = unaff_R13;
  *(undefined8 *)(unaff_retaddr + -0x30) = uVar3;
  *(undefined8 *)(unaff_retaddr + -0x30) = unaff_RBP;
  (*(code *)0x160bb395f)();
  return;
}



// FUNCTION 14da2a442 FUN_14da2a442 body=141 status=ok
// SIG undefined FUN_14da2a442(void)

void FUN_14da2a442(undefined8 param_1,undefined8 param_2)

{
  FUN_16282d5f6(param_1,param_2);
  FUN_14df82ffc();
  return;
}



// FUNCTION 14da2a4cf FUN_14da2a4cf body=144 status=ok
// SIG undefined FUN_14da2a4cf(void)

void FUN_14da2a4cf(void)

{
  FUN_14df82ffc();
  return;
}



// FUNCTION 14da2a60d FUN_14da2a60d body=439 status=ok
// SIG undefined FUN_14da2a60d(void)

void FUN_14da2a60d(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = (unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x90);
  uVar2 = (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * 2;
  if ((uVar1 < uVar2) && (uVar2 < uVar1)) {
    FUN_14da2a6a1();
    return;
  }
  FUN_16102fde5(0x77d2636b,param_2,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~((unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x60)) &
                 (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)));
  return;
}



// FUNCTION 14da2a6a1 FUN_14da2a6a1 body=152 status=ok
// SIG undefined FUN_14da2a6a1(void)

void FUN_14da2a6a1(ulonglong param_1)

{
  int unaff_EBX;
  longlong unaff_RDI;
  
  FUN_1616b8fe3(param_1,-unaff_EBX,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14da2a7dc FUN_14da2a7dc body=263 status=ok
// SIG undefined FUN_14da2a7dc(void)

void FUN_14da2a7dc(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_stack_00000008;
  
  uVar1 = (0x632f1c96 - (in_stack_00000008 ^ 0x7b18a764)) +
          (0x632f1c96 - (in_stack_00000008 ^ 0x7b18a764 | 0x632f1c96)) * -2;
  if (unaff_RSI != uVar1) {
    if (unaff_RSI == 0xc325a) {
      FUN_16131bb16();
      return;
    }
    return;
  }
  if ((unaff_RSI < uVar1) && (uVar1 < unaff_RSI)) {
    (*(code *)&LAB_1665963aa)(param_1,0x33fb4ed6,*(ulonglong *)(unaff_RDI + -0x38) | param_1);
    return;
  }
  FUN_16131bb16();
  return;
}



// FUNCTION 14da2a9a7 FUN_14da2a9a7 body=146 status=ok
// SIG undefined FUN_14da2a9a7(void)

/* WARNING: Removing unreachable block (ram,0x00014da2a9c6) */

void FUN_14da2a9a7(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_retaddr;
  
  (*(code *)0x1624ca8c9)(param_1,unaff_retaddr ^ in_RAX);
  return;
}



// FUNCTION 14da2aa39 FUN_14da2aa39 body=132 status=ok
// SIG undefined FUN_14da2aa39(void)

void FUN_14da2aa39(byte param_1)

{
  byte unaff_BPL;
  longlong unaff_R15;
  undefined8 local_res20;
  
  FUN_15755daf0(unaff_R15 - (local_res20 << (~(unaff_BPL & param_1) & 0x3f)));
  return;
}



// FUNCTION 14da2aabe FUN_14da2aabe body=37 status=ok
// SIG undefined FUN_14da2aabe(void)

undefined8 FUN_14da2aabe(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da2abe2 FUN_14da2abe2 body=302 status=ok
// SIG undefined FUN_14da2abe2(void)

/* WARNING: Removing unreachable block (ram,0x00014da2ac7f) */
/* WARNING: Removing unreachable block (ram,0x00014da2ac74) */

undefined8
FUN_14da2abe2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_R13;
  
  uVar1 = FUN_166ace96f(param_1,FUN_166ace96f,param_3,param_4,*(undefined8 *)(unaff_R13 + -8));
  return uVar1;
}



// FUNCTION 14da2af8a FUN_14da2af8a body=134 status=ok
// SIG undefined FUN_14da2af8a(void)

/* WARNING: Removing unreachable block (ram,0x00014da2b00b) */

void FUN_14da2af8a(void)

{
  return;
}



// FUNCTION 14da2b011 FUN_14da2b011 body=92 status=ok
// SIG undefined FUN_14da2b011(void)

void FUN_14da2b011(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  
  uVar1 = *param_2;
  uVar2 = *param_2;
  *param_2 = ~*param_2;
  *param_2 = *param_2 | in_RAX;
  *param_2 = ~((~(param_1 & uVar1) + uVar2) - ~param_1 & *param_2);
  return;
}



// FUNCTION 14da2b096 FUN_14da2b096 body=138 status=ok
// SIG undefined FUN_14da2b096(void)

void FUN_14da2b096(void)

{
  (*(code *)0x160b61dbf)();
  return;
}



// FUNCTION 14da2b128 FUN_14da2b128 body=18 status=ok
// SIG undefined FUN_14da2b128(void)

void FUN_14da2b128(void)

{
  FUN_165dc09fc();
  return;
}



// FUNCTION 14da2b40c FUN_14da2b40c body=138 status=ok
// SIG undefined FUN_14da2b40c(void)

/* WARNING: Removing unreachable block (ram,0x00014da2b493) */

undefined8
FUN_14da2b40c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_R10;
  undefined8 unaff_R13;
  
  if ((longlong)(param_5 & param_1) < 0) {
    lVar2 = param_5 + param_1 + (param_5 & param_1) * -2;
    *(undefined8 *)(lVar2 + -8) = unaff_R13;
    *(undefined8 *)(lVar2 + -0x10) = in_R10;
    *(undefined8 *)(lVar2 + -0x10) = param_3;
    *(undefined8 *)(lVar2 + -0x18) = param_3;
    *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
    *(undefined1 **)(lVar2 + -8) = &LAB_15b039609;
    *(code **)(lVar2 + -0x10) = HeapFree_exref;
    return in_RAX;
  }
  uVar1 = FUN_15b03956c();
  return uVar1;
}



// FUNCTION 14da2b51f FUN_14da2b51f body=168 status=ok
// SIG undefined FUN_14da2b51f(void)

/* WARNING: Removing unreachable block (ram,0x000156552083) */
/* WARNING: Removing unreachable block (ram,0x000156552089) */
/* WARNING: Removing unreachable block (ram,0x0001657f5864) */
/* WARNING: Removing unreachable block (ram,0x00015b61eaa5) */
/* WARNING: Removing unreachable block (ram,0x00014da2b5b3) */

undefined8 FUN_14da2b51f(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (*(ulonglong *)(unaff_RDI + -0x88) != param_1) {
    uVar1 = FUN_15b61ea26();
    return uVar1;
  }
  if (*(longlong *)(unaff_RDI + -0x98) == -1) {
    uVar1 = FUN_156551ff9();
    return uVar1;
  }
  uVar1 = FUN_1657f5864(param_1,param_2,param_3,param_4,
                        (~(~*(ulonglong *)(unaff_RDI + -8) & param_1) + param_1) -
                        *(ulonglong *)(unaff_RDI + -8),*(undefined8 *)(unaff_RDI + -0x90));
  return uVar1;
}



// FUNCTION 14da2b6e6 FUN_14da2b6e6 body=152 status=ok
// SIG undefined FUN_14da2b6e6(void)

void FUN_14da2b6e6(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1658e395e(FUN_1658e395e,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  FUN_1578a7072(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_1578a7072);
  return;
}



// FUNCTION 14da2b77e FUN_14da2b77e body=129 status=ok
// SIG undefined FUN_14da2b77e(void)

void FUN_14da2b77e(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1578a7072(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,FUN_1578a7072);
  return;
}



// FUNCTION 14da2b8a8 FUN_14da2b8a8 body=135 status=ok
// SIG undefined FUN_14da2b8a8(void)

void FUN_14da2b8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_166df58d6(param_1,FUN_166df58d6,param_3);
  return;
}



// FUNCTION 14da2b937 FUN_14da2b937 body=571 status=ok
// SIG undefined FUN_14da2b937(void)

/* WARNING: Instruction at (ram,0x000165130eb7) overlaps instruction at (ram,0x000165130eb4)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc7a13f) */
/* WARNING: Removing unreachable block (ram,0x00014dc7a145) */
/* WARNING: Removing unreachable block (ram,0x00014da2ba65) */
/* WARNING: Removing unreachable block (ram,0x00014da2bade) */
/* WARNING: Removing unreachable block (ram,0x00014da2baea) */
/* WARNING: Removing unreachable block (ram,0x000165a60198) */
/* WARNING: Removing unreachable block (ram,0x000165a601e7) */
/* WARNING: Removing unreachable block (ram,0x000165130e7f) */
/* WARNING: Removing unreachable block (ram,0x000165130e91) */
/* WARNING: Removing unreachable block (ram,0x000165130e97) */
/* WARNING: Removing unreachable block (ram,0x000165130eaa) */
/* WARNING: Removing unreachable block (ram,0x000165130eb7) */
/* WARNING: Removing unreachable block (ram,0x000165130eb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da2b937(void)

{
  undefined8 uVar1;
  
  FUN_160bfe8f5();
  uVar1 = FUN_16130e58a();
  return uVar1;
}



// FUNCTION 14da2bc13 FUN_14da2bc13 body=147 status=ok
// SIG undefined FUN_14da2bc13(void)

void FUN_14da2bc13(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_15b3e8e3b(FUN_15b3e8e3b,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da2bdb0 FUN_14da2bdb0 body=135 status=ok
// SIG undefined FUN_14da2bdb0(void)

void FUN_14da2bdb0(short param_1)

{
  short unaff_BP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_156bb5827((param_1 - unaff_BP) + 1,~(*(ulonglong *)(unaff_R13 + -0x48) | ~unaff_R15));
  return;
}



// FUNCTION 14da2bedd FUN_14da2bedd body=11 status=ok
// SIG undefined FUN_14da2bedd(void)

void FUN_14da2bedd(void)

{
  FUN_14da2bee8();
  return;
}



// FUNCTION 14da2bee8 FUN_14da2bee8 body=141 status=ok
// SIG undefined FUN_14da2bee8(void)

void FUN_14da2bee8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  thunk_FUN_1629a4bf4(*(undefined8 *)(unaff_R13 + -0x78),thunk_FUN_1629a4bf4,param_3 ^ unaff_R15);
  return;
}



// FUNCTION 14da2bf75 FUN_14da2bf75 body=491 status=ok
// SIG undefined FUN_14da2bf75(void)

void FUN_14da2bf75(undefined8 param_1,undefined8 param_2)

{
  FUN_1613c6032(param_1,param_2);
  (*(code *)0x16157f37e)();
  return;
}



// FUNCTION 14da2c094 FUN_14da2c094 body=360 status=ok
// SIG undefined FUN_14da2c094(void)

/* WARNING: Removing unreachable block (ram,0x0001648e6b27) */
/* WARNING: Removing unreachable block (ram,0x0001648e6b2d) */
/* WARNING: Removing unreachable block (ram,0x0001648e6ad6) */
/* WARNING: Removing unreachable block (ram,0x000166334924) */
/* WARNING: Removing unreachable block (ram,0x00014da2c151) */
/* WARNING: Removing unreachable block (ram,0x00014da2c1e0) */
/* WARNING: Removing unreachable block (ram,0x00014da2c1e5) */
/* WARNING: Removing unreachable block (ram,0x00014da2c1eb) */
/* WARNING: Removing unreachable block (ram,0x00014da2c10e) */
/* WARNING: Removing unreachable block (ram,0x00014da2c145) */
/* WARNING: Removing unreachable block (ram,0x00014da2c1f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2c094(void)

{
  FUN_166334924();
  return;
}



// FUNCTION 14da2c371 FUN_14da2c371 body=155 status=ok
// SIG undefined FUN_14da2c371(void)

/* WARNING: Removing unreachable block (ram,0x00014da2c38f) */

void FUN_14da2c371(void)

{
  return;
}



// FUNCTION 14da2c4aa FUN_14da2c4aa body=586 status=ok
// SIG undefined FUN_14da2c4aa(void)

/* WARNING: Removing unreachable block (ram,0x00014da2c543) */
/* WARNING: Removing unreachable block (ram,0x00014da2c549) */
/* WARNING: Removing unreachable block (ram,0x00014da2c5ef) */
/* WARNING: Removing unreachable block (ram,0x00014d7bdca8) */
/* WARNING: Removing unreachable block (ram,0x00014d8f4b31) */
/* WARNING: Removing unreachable block (ram,0x00014d8f4ba4) */
/* WARNING: Removing unreachable block (ram,0x00014d8f4b9f) */
/* WARNING: Removing unreachable block (ram,0x00014d8f4bb5) */
/* WARNING: Removing unreachable block (ram,0x000165c599c5) */

void FUN_14da2c4aa(void)

{
  FUN_165c599c5();
  return;
}



// FUNCTION 14da2c7b4 FUN_14da2c7b4 body=161 status=ok
// SIG undefined FUN_14da2c7b4(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2c7b4(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_161d8bca9(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14da2c8db FUN_14da2c8db body=316 status=ok
// SIG undefined FUN_14da2c8db(void)

/* WARNING: Removing unreachable block (ram,0x00014da2c995) */

void FUN_14da2c8db(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  
  if (param_4 != param_2) {
    FUN_1629a9893(param_1,in_stack_00000008,unaff_retaddr);
    FUN_164ba7653(unaff_RSI ^ unaff_R15,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
    return;
  }
  return;
}



// FUNCTION 14da2cbf0 FUN_14da2cbf0 body=483 status=ok
// SIG undefined FUN_14da2cbf0(void)

void FUN_14da2cbf0(ulonglong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  
  lVar1 = -unaff_RSI;
  *(undefined4 *)(&stack0x00000000 + lVar1) = unaff_EBP;
  *(int *)(&stack0x00000000 + lVar1) = *(int *)(&stack0x00000000 + lVar1) + -0x3fa8068;
  *(ulonglong *)(&stack0x00000000 + lVar1) = in_RAX ^ param_1;
  FUN_156b491b6(param_1,FUN_156b491b6);
  return;
}



// FUNCTION 14da2cd2c thunk_FUN_14da2cd32 body=5 status=ok
// SIG undefined thunk_FUN_14da2cd32(void)

void thunk_FUN_14da2cd32(void)

{
  return;
}



// FUNCTION 14da2cd32 FUN_14da2cd32 body=178 status=ok
// SIG undefined FUN_14da2cd32(void)

void FUN_14da2cd32(void)

{
  return;
}



// FUNCTION 14da2ce5f FUN_14da2ce5f body=450 status=ok
// SIG undefined FUN_14da2ce5f(void)

/* WARNING: Removing unreachable block (ram,0x000165e08f00) */
/* WARNING: Removing unreachable block (ram,0x00014da2cf82) */

undefined8 FUN_14da2ce5f(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar2 = -~(~(~in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) |
            ~(0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  uVar1 = FUN_16169f48a();
  if (~uVar2 + *(ulonglong *)(unaff_RDI + -0xa0) < (~uVar2 & *(ulonglong *)(unaff_RDI + -0xa0))) {
    return uVar1;
  }
  uVar1 = FUN_165e08ea0();
  return uVar1;
}



// FUNCTION 14da2d0ae FUN_14da2d0ae body=293 status=ok
// SIG undefined FUN_14da2d0ae(void)

/* WARNING: Removing unreachable block (ram,0x00014da2d1ca) */
/* WARNING: Removing unreachable block (ram,0x00014da2d1d0) */
/* WARNING: Removing unreachable block (ram,0x00014da2d1d5) */
/* WARNING: Removing unreachable block (ram,0x00014da2d130) */
/* WARNING: Removing unreachable block (ram,0x00014da2d13e) */
/* WARNING: Removing unreachable block (ram,0x00015745fdc8) */
/* WARNING: Removing unreachable block (ram,0x00015745fe18) */

undefined8 FUN_14da2d0ae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15745fdc8();
  return uVar1;
}



// FUNCTION 14da2d1d5 FUN_14da2d1d5 body=86 status=ok
// SIG undefined FUN_14da2d1d5(void)

undefined8 FUN_14da2d1d5(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da2d245 FUN_14da2d245 body=291 status=ok
// SIG undefined FUN_14da2d245(void)

/* WARNING: Removing unreachable block (ram,0x00014da2d366) */
/* WARNING: Removing unreachable block (ram,0x00014da2d2c8) */
/* WARNING: Removing unreachable block (ram,0x000156ded41d) */
/* WARNING: Removing unreachable block (ram,0x000156ded418) */
/* WARNING: Removing unreachable block (ram,0x000156ded420) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2d245(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 unaff_R15;
  ulonglong uStackX_8;
  ulonglong uStackX_18;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x40) ^ param_1;
  uVar2 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x30);
  FUN_162dbd8dd(param_1,uVar2,FUN_162dbd8dd,
                (~*(ulonglong *)(unaff_RDI + -0x50) + param_1) -
                (~*(ulonglong *)(unaff_RDI + -0x50) & param_1));
  uVar1 = uStackX_18 ^ param_1;
  *(ulonglong *)(uVar1 - 8) = uVar3;
  *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  (*(code *)0x1650f559d)(uStackX_8 ^ param_1,uVar2);
  return;
}



// FUNCTION 14da2d36c FUN_14da2d36c body=137 status=ok
// SIG undefined FUN_14da2d36c(void)

void FUN_14da2d36c(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  
  if (param_3 < 0) {
    thunk_FUN_16151e5bb(param_1,thunk_FUN_16151e5bb);
    return;
  }
  uVar1 = ~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x60);
  uVar2 = ~*(ulonglong *)(unaff_RSI + -0x60) | unaff_RBP;
  uVar1 = (uVar2 - (uVar1 | uVar2)) + uVar1;
  FUN_164b1091f(uVar1,unaff_RSI + -0x40,~uVar1,
                (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RSI + -0x28) | unaff_RBP));
  return;
}



// FUNCTION 14da2d3f8 FUN_14da2d3f8 body=49 status=ok
// SIG undefined FUN_14da2d3f8(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da2d426) overlaps instruction at (ram,0x00014da2d425)
    */
/* WARNING: Removing unreachable block (ram,0x00014da2d425) */

undefined8 FUN_14da2d3f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  return param_2;
}



// FUNCTION 14da2d53c FUN_14da2d53c body=105 status=ok
// SIG undefined FUN_14da2d53c(void)

void FUN_14da2d53c(void)

{
  FUN_14d7c4df1();
  return;
}



// FUNCTION 14da2d67d FUN_14da2d67d body=141 status=ok
// SIG undefined FUN_14da2d67d(void)

/* WARNING: Removing unreachable block (ram,0x00014da2d6f7) */

void FUN_14da2d67d(void)

{
  ulonglong in_RAX;
  int unaff_EDI;
  longlong unaff_R12;
  
  FUN_160d46337(unaff_EDI,unaff_EDI * 2,unaff_EDI,*(ulonglong *)(unaff_R12 + -0x30) ^ in_RAX);
  return;
}



// FUNCTION 14da2d70c FUN_14da2d70c body=144 status=ok
// SIG undefined FUN_14da2d70c(void)

/* WARNING: Removing unreachable block (ram,0x000165941d6c) */
/* WARNING: Removing unreachable block (ram,0x00014da2d833) */

void FUN_14da2d70c(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  char in_stack_00000030;
  
  FUN_14e00e668(FUN_14e00e668,in_stack_00000030 + -1,
                *(ulonglong *)(unaff_RSI + -0x60) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x60) & unaff_RBP) * -2,
                *(ulonglong *)(unaff_RSI + -0x28) ^ unaff_RBP);
  FUN_165cb40cc((*(ulonglong *)(unaff_R12 + -0x28) & unaff_RBP) >> 0x3f,0x4cc17f8,
                *(undefined8 *)(unaff_R12 + -0x60));
  (*(code *)0x1667fdac2)();
  return;
}



// FUNCTION 14da2d833 FUN_14da2d833 body=122 status=ok
// SIG undefined FUN_14da2d833(void)

void FUN_14da2d833(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_15b05574d(FUN_15b05574d,param_2,param_3);
  return;
}



// FUNCTION 14da2d9de FUN_14da2d9de body=159 status=ok
// SIG undefined FUN_14da2d9de(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da2d9de(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  uVar3 = ~((0xffffffffffffffff - unaff_R15 | unaff_R13) & (~unaff_R13 | unaff_R15));
  FUN_1668f4879();
  uVar1 = *(ulonglong *)(uVar3 + (unaff_R15 ^ 0xffffffffffffffff | local_res10));
  uVar2 = (~unaff_R15 + uVar1) - (~unaff_R15 & uVar1) & (~uVar1 | unaff_R15) ^ 0xffffffffffffffff;
  uVar1 = *(ulonglong *)(uVar3 - 0x88);
  FUN_165ed8596(uVar2,1,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2,uVar2);
  return;
}



// FUNCTION 14da2da7f FUN_14da2da7f body=388 status=ok
// SIG undefined FUN_14da2da7f(void)

void FUN_14da2da7f(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RBX);
  uVar1 = (~unaff_R15 + uVar1) - (~unaff_R15 & uVar1) & (~uVar1 | unaff_R15) ^ 0xffffffffffffffff;
  FUN_165ed8596(uVar1,1,*(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 +
                        (*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) * -2,uVar1);
  return;
}



// FUNCTION 14da2dc8f FUN_14da2dc8f body=281 status=ok
// SIG undefined FUN_14da2dc8f(void)

void FUN_14da2dc8f(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b5ce7a5(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  FUN_14e13d345();
  return;
}



// FUNCTION 14da2de58 FUN_14da2de58 body=143 status=ok
// SIG undefined FUN_14da2de58(void)

void FUN_14da2de58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000018;
  
  FUN_15b2f079b(in_stack_00000018,param_2,param_3);
  FUN_14df1e233();
  return;
}



// FUNCTION 14da2dee8 thunk_FUN_14da2deee body=5 status=ok
// SIG undefined thunk_FUN_14da2deee(void)

void thunk_FUN_14da2deee(void)

{
  FUN_14df1e233();
  return;
}



// FUNCTION 14da2deee FUN_14da2deee body=107 status=ok
// SIG undefined FUN_14da2deee(void)

void FUN_14da2deee(void)

{
  FUN_14df1e233();
  return;
}



// FUNCTION 14da2e0a6 FUN_14da2e0a6 body=25 status=ok
// SIG undefined FUN_14da2e0a6(void)

void FUN_14da2e0a6(undefined8 param_1)

{
  FUN_15751fa1b(param_1,0x14d7a8d94);
  return;
}



// FUNCTION 14da2e0c0 FUN_14da2e0c0 body=240 status=ok
// SIG undefined FUN_14da2e0c0(void)

/* WARNING: Removing unreachable block (ram,0x00014da2e12b) */

undefined8 FUN_14da2e0c0(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 == 0x49770) {
    uVar1 = FUN_15751fa1b(param_1,0x14d7a60a6);
    return uVar1;
  }
  if (param_2 != 0x49771) {
    if (param_2 != 0x49dc1) {
      uVar1 = FUN_165895109(FUN_165895109);
      return uVar1;
    }
    return in_RAX;
  }
  uVar1 = FUN_15751fa1b(param_1,&DAT_14d7b7361);
  return uVar1;
}



// FUNCTION 14da2e12b FUN_14da2e12b body=147 status=ok
// SIG undefined FUN_14da2e12b(void)

undefined8 FUN_14da2e12b(void)

{
  undefined8 in_stack_00000010;
  
  return in_stack_00000010;
}



// FUNCTION 14da2e24c FUN_14da2e24c body=373 status=ok
// SIG undefined FUN_14da2e24c(void)

/* WARNING: Removing unreachable block (ram,0x00016622c3aa) */
/* WARNING: Removing unreachable block (ram,0x00016622c439) */
/* WARNING: Removing unreachable block (ram,0x00016622c43e) */
/* WARNING: Removing unreachable block (ram,0x00016622c444) */
/* WARNING: Removing unreachable block (ram,0x00016622c4f5) */
/* WARNING: Removing unreachable block (ram,0x00016622c4fb) */
/* WARNING: Removing unreachable block (ram,0x000161714786) */
/* WARNING: Removing unreachable block (ram,0x00016171481a) */
/* WARNING: Removing unreachable block (ram,0x00016171481e) */
/* WARNING: Removing unreachable block (ram,0x000156e412bf) */
/* WARNING: Removing unreachable block (ram,0x000156e41345) */
/* WARNING: Removing unreachable block (ram,0x0001666339ef) */
/* WARNING: Removing unreachable block (ram,0x000156e4134b) */
/* WARNING: Removing unreachable block (ram,0x000156e413d1) */
/* WARNING: Removing unreachable block (ram,0x000156e413d7) */
/* WARNING: Removing unreachable block (ram,0x00016678d19c) */
/* WARNING: Removing unreachable block (ram,0x00016678d220) */
/* WARNING: Removing unreachable block (ram,0x00016481e3ea) */
/* WARNING: Removing unreachable block (ram,0x00016481e3f0) */
/* WARNING: Removing unreachable block (ram,0x00016678d225) */
/* WARNING: Removing unreachable block (ram,0x00016678d22b) */
/* WARNING: Removing unreachable block (ram,0x0001661b2c9b) */
/* WARNING: Removing unreachable block (ram,0x00014da2e3a4) */
/* WARNING: Removing unreachable block (ram,0x00014da2e2ed) */
/* WARNING: Removing unreachable block (ram,0x00014da2e399) */
/* WARNING: Removing unreachable block (ram,0x00016481e35a) */

undefined8 FUN_14da2e24c(void)

{
  undefined8 unaff_RBX;
  ulonglong in_R9;
  undefined8 in_R10;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = 0;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ in_R9;
  *(undefined8 *)(local_res18 + -0x10) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + -0x166cbeb93;
  *(ulonglong *)(local_res18 + -8) = ~*(ulonglong *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = *(longlong *)(local_res18 + -8) + 1;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RBX;
  *(code **)(local_res18 + -0x10) = thunk_FUN_15b642ca5;
  return unaff_retaddr;
}



// FUNCTION 14da2e511 FUN_14da2e511 body=353 status=ok
// SIG undefined FUN_14da2e511(void)

/* WARNING: Instruction at (ram,0x0001651072f3) overlaps instruction at (ram,0x0001651072f2)
    */
/* WARNING: Removing unreachable block (ram,0x00014da2e5c4) */
/* WARNING: Removing unreachable block (ram,0x00015739e1b5) */
/* WARNING: Removing unreachable block (ram,0x00015739e337) */
/* WARNING: Removing unreachable block (ram,0x00015739e338) */
/* WARNING: Removing unreachable block (ram,0x00014da2e669) */
/* WARNING: Removing unreachable block (ram,0x00014da2e66f) */
/* WARNING: Removing unreachable block (ram,0x000164b505a4) */
/* WARNING: Removing unreachable block (ram,0x000164b50545) */
/* WARNING: Removing unreachable block (ram,0x00016165c7fc) */
/* WARNING: Removing unreachable block (ram,0x00014da2e674) */
/* WARNING: Removing unreachable block (ram,0x00014da2e716) */
/* WARNING: Removing unreachable block (ram,0x000156e46e2a) */
/* WARNING: Removing unreachable block (ram,0x000156e46e8a) */
/* WARNING: Removing unreachable block (ram,0x00014da2e71c) */
/* WARNING: Removing unreachable block (ram,0x00014da2e7a7) */
/* WARNING: Removing unreachable block (ram,0x00014da2e7ad) */
/* WARNING: Removing unreachable block (ram,0x00016156165d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe8 : 0x00016165c794 */
/* WARNING: Removing unreachable block (ram,0x0001651072f2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da2e511(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  
  if (&stack0xfffffffffffffff8 < &DAT_00000008) {
    uVar2 = FUN_164b504a4();
    return uVar2;
  }
  uVar1 = FUN_160d72e41();
  uVar1 = 0x8d0 - (~uVar1 + 2);
  if (~((~uVar1 | unaff_EBX) + uVar1 + 1) + uVar1 < ~unaff_EBX) {
    uVar2 = FUN_16165c75b();
    return uVar2;
  }
  return 0x15b7888e7;
}



// FUNCTION 14da2e674 FUN_14da2e674 body=341 status=ok
// SIG undefined FUN_14da2e674(void)

/* WARNING: Removing unreachable block (ram,0x00014da2e7ad) */
/* WARNING: Removing unreachable block (ram,0x00014da2e71c) */
/* WARNING: Removing unreachable block (ram,0x00014da2e7a7) */
/* WARNING: Removing unreachable block (ram,0x00016156165d) */

undefined8 FUN_14da2e674(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar3 = unaff_R15 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_R13 + -0x88);
  uVar1 = ~unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  FUN_1567d73d4(*(undefined8 *)(unaff_R13 + -0x78),0x156e46e8a,~((uVar1 - (uVar3 | uVar1)) + uVar3),
                *(ulonglong *)(unaff_R13 + -0x60) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) * -2);
  uVar2 = thunk_FUN_15b642ca5();
  return uVar2;
}



// FUNCTION 14da2e71c FUN_14da2e71c body=316 status=ok
// SIG undefined FUN_14da2e71c(void)

/* WARNING: Removing unreachable block (ram,0x00014da2e7ad) */

undefined8
FUN_14da2e71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong unaff_RDI;
  undefined8 in_R11;
  ulonglong unaff_R15;
  ulonglong uVar2;
  ulonglong local_res20;
  
  uVar2 = 0xffffffffffffffff - (local_res20 & unaff_R15) &
          (~(unaff_RDI & unaff_R15) + unaff_R15) - ~unaff_RDI;
  uVar1 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = in_R11;
  *(undefined8 *)(uVar1 - 0x10) = in_R11;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x80) != 0) * 0x80 | (ulonglong)((uVar2 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar2 & 0x10) != 0) * 0x10 | (ulonglong)((uVar2 & 4) != 0) * 4 |
       (ulonglong)((uVar2 & 1) != 0) | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  uVar2 = *(ulonglong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar2 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar2 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar2 & 0x400) != 0) * 0x400 | (ulonglong)((uVar2 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar2 & 0x100) != 0) * 0x100 | (ulonglong)((uVar2 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar2 & 0x40) != 0) * 0x40 | (ulonglong)((uVar2 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar2 & 4) != 0) * 4 | (ulonglong)((uVar2 & 1) != 0) |
       (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 0x28) = param_3;
  *(undefined8 *)(uVar1 - 0x30) = param_3;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_161561691;
  return in_RAX;
}



// FUNCTION 14da2e97c FUN_14da2e97c body=139 status=ok
// SIG undefined FUN_14da2e97c(void)

void FUN_14da2e97c(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_R15;
  
  FUN_15726f5d0(param_1,-1 - ((unaff_R15 ^ 0xffffffffffffffff | param_2) & (~param_2 | unaff_R15)));
  return;
}



// FUNCTION 14da2ea08 FUN_14da2ea08 body=311 status=ok
// SIG undefined FUN_14da2ea08(void)

void FUN_14da2ea08(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  undefined8 unaff_retaddr;
  
  FUN_166a5f319();
  FUN_16286dc63(param_1,unaff_retaddr,
                *(ulonglong *)(param_3 + -0xa0) + in_R10 +
                (*(ulonglong *)(param_3 + -0xa0) & in_R10) * -2,0xffffffff8f8fa36a);
  return;
}



// FUNCTION 14da2eb40 FUN_14da2eb40 body=174 status=ok
// SIG undefined FUN_14da2eb40(void)

/* WARNING: Removing unreachable block (ram,0x00014da2ebe3) */
/* WARNING: Removing unreachable block (ram,0x00014da2ebe9) */
/* WARNING: Removing unreachable block (ram,0x00014da2ebee) */

void FUN_14da2eb40(void)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  byte unaff_retaddr;
  
  bVar1 = (unaff_retaddr & 0x1f) % 9;
  FUN_157624ac0(unaff_retaddr >> bVar1 | unaff_retaddr << 9 - bVar1,0xffffffffffffffd0,
                *(ulonglong *)(unaff_R12 + -0x40) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x40) & in_RAX) * -2);
  return;
}



// FUNCTION 14da2ebee FUN_14da2ebee body=163 status=ok
// SIG undefined FUN_14da2ebee(void)

void FUN_14da2ebee(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x88) | unaff_R15;
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15);
  FUN_156b9126f(8,FUN_156b9126f,(uVar1 - (uVar2 | uVar1)) + uVar2,
                *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14da2ec92 FUN_14da2ec92 body=90 status=ok
// SIG undefined FUN_14da2ec92(void)

void FUN_14da2ec92(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14da2ed39 FUN_14da2ed39 body=161 status=ok
// SIG undefined FUN_14da2ed39(void)

void FUN_14da2ed39(void)

{
  return;
}



// FUNCTION 14da2ef16 FUN_14da2ef16 body=136 status=ok
// SIG undefined FUN_14da2ef16(void)

void FUN_14da2ef16(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  char unaff_BL;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48);
  (*(code *)&LAB_164b66bf0)
            ((~unaff_R15 + uVar1) - (~unaff_R15 & uVar1) &
             (~(~uVar1 & unaff_R15) + unaff_R15) - (-1 - ~uVar1) ^ 0xffffffffffffffff,
             (unaff_BL * 2 + unaff_BL * -2) - param_2);
  return;
}



// FUNCTION 14da2efbb FUN_14da2efbb body=212 status=ok
// SIG undefined FUN_14da2efbb(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014da2f018) overlaps instruction at (ram,0x00014da2f017)
    */

void FUN_14da2efbb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char unaff_BH;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar6;
  
  uVar2 = *param_3;
  *(undefined4 *)(param_3 + -2) = 0x7ddcd581;
  *(undefined4 *)(param_3 + -1) = *(undefined4 *)(param_3 + -2);
  puVar3 = (uint *)(param_3 + -1);
  uVar4 = *(uint *)(param_3 + -1) & 0x84705497;
  param_3[-2] = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
                (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
                (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                (ulonglong)((POPCOUNT(*(uint *)(param_3 + -1) & 0x97) & 1U) == 0) * 4 |
                (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
                (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  param_3[-2] = param_3[-2] | 4;
  uVar6 = param_3[-2];
  if ((uVar6 & 4) == 0) {
    puVar3 = (uint *)(param_3 + -2);
    param_3[-2] = param_3 + -1;
    if ((uVar6 & 0x800) != 0) {
      pcVar1 = (char *)((ulonglong)~uVar4 + 0xd8d4851);
      *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(uint *)(param_3 + -1) = *(uint *)(param_3 + -1) | 0x84705497;
  }
  *puVar3 = ~(~uVar4 & *puVar3);
  puVar3[-2] = 0xa32c215e;
  puVar3[-1] = 0xffffffff;
  puVar5 = (uint *)((longlong)puVar3 + *(longlong *)(puVar3 + -2) + 0x5cd3dea6);
  *puVar5 = 0;
  *puVar5 = *puVar5 ^ 0xf5a47af5;
  *(ulonglong *)(puVar3 + -2) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x400) != 0) * 0x400 |
       (ulonglong)((uVar6 & 0x200) != 0) * 0x200 | (ulonglong)((uVar6 & 0x100) != 0) * 0x100 |
       (ulonglong)((int)*puVar5 < 0) * 0x80 | (ulonglong)(*puVar5 == 0) * 0x40 |
       (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(*puVar5 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  uVar6 = *(ulonglong *)(puVar3 + -2);
  *(ulonglong *)(puVar3 + -2) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(puVar3 + -2) = param_4;
  *(undefined8 *)(puVar3 + -4) = param_4;
  *(undefined1 **)(puVar3 + -2) = &LAB_14da2f091;
  FUN_15ba07103(param_1,FUN_15ba07103,uVar2,*(undefined8 *)(puVar3 + -4));
  return;
}



// FUNCTION 14da2f145 FUN_14da2f145 body=15 status=ok
// SIG undefined FUN_14da2f145(void)

void FUN_14da2f145(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStackX_8;
  
                    /* WARNING: Could not recover jumptable at 0x00014da2f152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uStackX_8);
  return;
}



// FUNCTION 14da2f1e2 FUN_14da2f1e2 body=207 status=ok
// SIG undefined FUN_14da2f1e2(void)

/* WARNING: Removing unreachable block (ram,0x00014da2f281) */
/* WARNING: Removing unreachable block (ram,0x00014da2f287) */

void FUN_14da2f1e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_156cca80d();
  FUN_15b3a6d7c(FUN_15b3a6d7c,param_2,param_3);
  return;
}



// FUNCTION 14da2f319 FUN_14da2f319 body=9 status=ok
// SIG undefined FUN_14da2f319(void)

void FUN_14da2f319(void)

{
  FUN_1567b4b3f();
  return;
}



// FUNCTION 14da2f41d FUN_14da2f41d body=744 status=ok
// SIG undefined FUN_14da2f41d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000166db9100) */
/* WARNING: Removing unreachable block (ram,0x000166db9106) */
/* WARNING: Removing unreachable block (ram,0x00015b2668c9) */
/* WARNING: Removing unreachable block (ram,0x00015b26694e) */
/* WARNING: Removing unreachable block (ram,0x00015b266954) */
/* WARNING: Removing unreachable block (ram,0x0001618ae601) */
/* WARNING: Removing unreachable block (ram,0x0001618ae61d) */
/* WARNING: Removing unreachable block (ram,0x0001618ae622) */
/* WARNING: Removing unreachable block (ram,0x00015b26695b) */
/* WARNING: Removing unreachable block (ram,0x00015b266a94) */
/* WARNING: Removing unreachable block (ram,0x00015b266bc8) */
/* WARNING: Removing unreachable block (ram,0x00015b266bce) */
/* WARNING: Removing unreachable block (ram,0x00015b266bc3) */
/* WARNING: Removing unreachable block (ram,0x00015b266bd3) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac38c) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac38f) */
/* WARNING: Removing unreachable block (ram,0x00014d7ac366) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14da2f41d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong unaff_RSI;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *(undefined8 *)(unaff_R14 + -8) = unaff_R13;
  *(undefined8 *)(unaff_R14 + -0x10) = 0x15b340b68;
  *(undefined8 *)(unaff_R14 + -0x18) = 0x15b340b68;
  *(undefined8 *)(unaff_R14 + -0x20) = param_3;
  *(undefined8 *)(unaff_R14 + -0x28) = local_res18;
  *(undefined4 *)(unaff_R14 + -0x28) = 0x4bf09954;
  *(uint *)(unaff_R14 + -0x28) = *(uint *)(unaff_R14 + -0x28) ^ 0x3ed133e9;
  *(undefined4 *)(unaff_R14 + -0x24) = 0;
  *(undefined8 *)(unaff_R14 + -0x10) =
       *(undefined8 *)(unaff_R14 + ((*(ulonglong *)(unaff_R14 + -0x28) ^ 0x66b78a48) - 0x139620fd));
  *(undefined8 *)(unaff_R14 + -0x20) = 0x14da2f4bc;
  uVar9 = FUN_15b340b20();
  uVar11 = (~((unaff_RSI ^ 0xffffffffffffffff) & param_1) + param_1) -
           ~(unaff_RSI ^ 0xffffffffffffffff);
  uVar11 = ~((~(param_1 & ~unaff_R15) - (uVar11 | ~(param_1 & ~unaff_R15))) + uVar11);
  *(undefined4 *)(unaff_R14 + -0x20) = 0;
  *(undefined4 *)(unaff_R14 + -0x1c) = 0;
  *(ulonglong *)(unaff_R14 + -0x18) = *(ulonglong *)(unaff_R14 + -0x20) ^ DAT_15b340af8;
  uVar12 = DAT_15b340af0;
  uVar13 = DAT_15b340af0 + unaff_R15;
  *(undefined8 *)(unaff_R14 + -0x18) = local_res8;
  uVar3 = *(undefined8 *)(unaff_R14 + -0x18);
  *(ulonglong *)(unaff_R14 + -0x18) = uVar11;
  *(ulonglong *)(unaff_R14 + -0x20) = CONCAT71((int7)(uVar11 >> 8),0x31);
  bVar2 = *(byte *)(unaff_R14 + -0x20);
  *(ulonglong *)(unaff_R14 + -0x20) = unaff_R15;
  uVar11 = *(ulonglong *)(unaff_R14 + -0x20);
  uVar12 = ~(~uVar12 | ~unaff_R15) << (~(bVar2 & 0xcf ^ 0xff) & 0x3f);
  uVar10 = *(undefined8 *)(unaff_R14 + -0x18);
  *(undefined8 *)(unaff_R14 + -0x18) = uVar9;
  *(ulonglong *)(unaff_R14 + -0x20) = uVar13 - uVar12;
  lVar4 = *(longlong *)(unaff_R14 + -0x20);
  if (uVar12 <= uVar13) {
    uVar10 = FUN_166db905b();
    return uVar10;
  }
  uVar9 = *(undefined8 *)(unaff_R14 + -0x18);
  *(ulonglong *)(unaff_R14 + -0x18) = DAT_15b340ab8 ^ uVar11;
  *(undefined8 *)(unaff_R14 + -0x20) = uVar9;
  *(undefined4 *)(unaff_R14 + -0x20) = 0xe5d52e24;
  *(undefined4 *)(unaff_R14 + -0x1c) = 0xffffffff;
  uVar12 = *(ulonglong *)
            (FUN_15b340b20 +
            ~(~(*(ulonglong *)(unaff_R14 + -0x20) & 0xffffffffe5d52e6b) &
             (*(ulonglong *)(unaff_R14 + -0x20) | 0xffffffffe5d52e6b)));
  lVar6 = *(longlong *)(unaff_R14 + -0x18);
  *(ulonglong *)(unaff_R14 + -0x18) = uVar11;
  plVar1 = (longlong *)(unaff_R14 + -0x20);
  *plVar1 = 0;
  *plVar1 = *plVar1 + uVar11;
  *(undefined8 *)(unaff_R14 + -0x28) = uVar10;
  lVar5 = lRam000000015b340ab0;
  uVar7 = *(undefined8 *)(unaff_R14 + -0x28);
  *(undefined8 *)(unaff_R14 + -0x28) = param_4;
  *(undefined8 *)(unaff_R14 + -0x30) = in_R10;
  uVar10 = *(undefined8 *)(unaff_R14 + -0x30);
  *(undefined8 *)(unaff_R14 + -0x18) = 0;
  *(longlong *)(unaff_R14 + -0x18) = *(longlong *)(unaff_R14 + -0x18) - lVar5;
  *(longlong *)(unaff_R14 + -0x18) = -*(longlong *)(unaff_R14 + -0x18);
  *(undefined8 *)(unaff_R14 + -0x20) = uStackX_10;
  *(undefined8 *)(unaff_R14 + -0x28) = uStackX_10;
  uVar8 = uRam000000015b340b18;
  *(undefined8 *)(unaff_R14 + -0x30) = uVar9;
  *(undefined8 *)(unaff_R14 + -0x20) = uVar8;
  *(undefined8 *)(unaff_R14 + -0x28) = 0x77a804ae9000000;
  *(undefined8 *)(unaff_R14 + -0x30) = 0x5890f0000000004;
  lVar5 = *(longlong *)(unaff_R14 + -0x30);
  *(undefined8 *)(unaff_R14 + -0x30) = in_R11;
  *(longlong *)(unaff_R14 + -0x38) = lVar5;
  *(ulonglong *)(unaff_R14 + -0x38) = uVar12 ^ uVar11;
  *(undefined8 *)(unaff_R14 + -0x40) = 0x162d94563;
  uVar9 = FUN_15b7620cf(uVar7);
  *(undefined8 *)(unaff_R14 + -0x38) = uVar10;
  *(undefined8 *)(unaff_R14 + -0x38) = uVar3;
  *(undefined8 *)(unaff_R14 + -0x38) = uVar9;
  *(longlong *)(unaff_R14 + -0x40) = ~(lVar4 + -0x15b7620cf + lVar6);
  uVar10 = *(undefined8 *)(lVar5 + -0x50);
  *(undefined **)(unaff_R14 + -0x48) = &DAT_15b5d7700;
  return uVar10;
}



// FUNCTION 14da2f66e FUN_14da2f66e body=292 status=ok
// SIG undefined FUN_14da2f66e(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014da2f6bb) */
/* WARNING: Removing unreachable block (ram,0x00016579063b) */
/* WARNING: Removing unreachable block (ram,0x00014d7bf3e4) */

void FUN_14da2f66e(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 in_R10;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStack_10;
  
  uVar2 = (~in_RAX | *(ulonglong *)(unaff_R12 + -0x50)) &
          (~*(ulonglong *)(unaff_R12 + -0x50) | in_RAX);
  uStack_10 = -1 - uVar2;
  if ((uVar2 == 0) || (uVar2 != 0)) {
    (*(code *)0x16162210f)
              (param_1,(((int)param_2 + (int)in_RAX) - (int)((param_2 & in_RAX) << 1)) + param_5,
               param_3);
    return;
  }
  *(ulonglong *)(&stack0xfffffffffffffff8 + param_1) =
       ~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
       (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15);
  uVar1 = *(undefined8 *)(&stack0xfffffffffffffff8 + param_1);
  *(ulonglong *)(&stack0xfffffffffffffff8 + param_1) = in_RAX;
  *(undefined4 *)(&stack0xfffffffffffffff8 + param_1) = 0x4eb2f3f8;
  *(uint *)(&stack0xfffffffffffffff8 + param_1) =
       *(uint *)(&stack0xfffffffffffffff8 + param_1) ^ 0x129f9c58;
  *(undefined4 *)(&stack0xfffffffffffffffc + param_1) = 0;
  uVar2 = (*(ulonglong *)(&stack0xfffffffffffffff8 + param_1) ^ 0x5c2d6fa0) +
          *(longlong *)(unaff_R13 + -0x28);
  if (-1 < (longlong)(uVar2 + unaff_R15 + (uVar2 & unaff_R15) * -2)) {
    FUN_165790599();
    return;
  }
  *(undefined8 *)(&stack0xfffffffffffffff8 + param_1) = *(undefined8 *)(unaff_R13 + -0x50);
  *(undefined4 *)((longlong)&uStack_10 + param_1) = 0;
  *(undefined4 *)((longlong)&uStack_10 + param_1 + 4) = 0;
  uVar2 = *(ulonglong *)((longlong)&uStack_10 + param_1);
  *(undefined8 *)((longlong)&uStack_10 + param_1) = in_R10;
  *(undefined8 *)(&stack0xffffffffffffffe8 + param_1) = uVar1;
  if (-~*(ulonglong *)(&stack0xfffffffffffffff8 + param_1) != ~uVar2 + 2) {
    FUN_16133937f();
    return;
  }
  FUN_16133937f();
  return;
}



// FUNCTION 14da2f793 FUN_14da2f793 body=40 status=ok
// SIG undefined FUN_14da2f793(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14da2f793(void)

{
  longlong unaff_R12;
  undefined8 local_res8;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_R12) = local_res8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14da2f8da FUN_14da2f8da body=150 status=ok
// SIG undefined FUN_14da2f8da(void)

void FUN_14da2f8da(undefined8 param_1)

{
  FUN_1668583c2(param_1);
  return;
}



// FUNCTION 14da2fb16 FUN_14da2fb16 body=34 status=ok
// SIG undefined FUN_14da2fb16(void)

void FUN_14da2fb16(void)

{
  return;
}



// FUNCTION 14da2fba4 FUN_14da2fba4 body=137 status=ok
// SIG undefined FUN_14da2fba4(void)

void FUN_14da2fba4(undefined8 param_1)

{
  (*(code *)&LAB_166bb47e9)(param_1,&LAB_166bb47e9);
  return;
}



// FUNCTION 14da2fd46 FUN_14da2fd46 body=122 status=ok
// SIG undefined FUN_14da2fd46(void)

void FUN_14da2fd46(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  ushort *unaff_R13;
  undefined8 unaff_R14;
  longlong local_res20;
  
  *unaff_R13 = (*unaff_R13 | 0x100) - 0x100;
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined1 **)(local_res20 + -8) = &LAB_14dfea9c4;
  FUN_14dfea9af();
  return;
}



// FUNCTION 14da30251 FUN_14da30251 body=141 status=ok
// SIG undefined FUN_14da30251(void)

void FUN_14da30251(undefined8 param_1)

{
  undefined1 local_res8 [32];
  
  FUN_15785570c(param_1,local_res8);
  return;
}



// FUNCTION 14da302e6 FUN_14da302e6 body=180 status=ok
// SIG undefined FUN_14da302e6(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14da302e6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da30628 FUN_14da30628 body=46 status=ok
// SIG undefined FUN_14da30628(void)

void FUN_14da30628(void)

{
  undefined8 in_R10;
  undefined8 unaff_R15;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = in_R10;
  *(undefined8 *)(local_res20 + -0x10) = 0;
  *(longlong *)(local_res20 + -0x10) =
       *(longlong *)(local_res20 + -0x10) + *(longlong *)(local_res20 + -8);
  *(undefined1 **)(local_res20 + -8) = &LAB_14da306a4;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da3075a FUN_14da3075a body=10 status=ok
// SIG undefined FUN_14da3075a(void)

void FUN_14da3075a(void)

{
  FUN_14da30764();
  return;
}



// FUNCTION 14da30764 FUN_14da30764 body=155 status=ok
// SIG undefined FUN_14da30764(void)

void FUN_14da30764(void)

{
  return;
}



// FUNCTION 14da307ff FUN_14da307ff body=125 status=ok
// SIG undefined FUN_14da307ff(void)

void FUN_14da307ff(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  FUN_165adab58(param_1,param_2 + in_RAX + (param_2 & in_RAX) * -2);
  return;
}



// FUNCTION 14da3090d FUN_14da3090d body=155 status=ok
// SIG undefined FUN_14da3090d(void)

/* WARNING: Removing unreachable block (ram,0x00014da309a3) */

void FUN_14da3090d(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R10;
  undefined8 local_res8;
  ushort local_res20;
  uint6 uStackX_22;
  ulonglong in_stack_00000028;
  
  uVar2 = *(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = ~*(ulonglong *)(unaff_RSI + 8);
  *(ulonglong *)(unaff_RSI + 8) = *(ulonglong *)(unaff_RSI + 8) | unaff_RBP;
  *(ulonglong *)(unaff_RSI + 8) =
       (~unaff_RBP | uVar2) & *(ulonglong *)(unaff_RSI + 8) ^ 0xffffffffffffffff;
  in_stack_00000028 = in_stack_00000028 ^ unaff_RBP;
  puVar1 = (ulonglong *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x10) = local_res8;
  *(ulonglong *)(in_stack_00000028 - 0x18) =
       (ulonglong)((local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res20 & 0x80) != 0) * 0x80 | (ulonglong)((local_res20 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res20 & 0x10) != 0) * 0x10 | (ulonglong)((local_res20 & 4) != 0) * 4 |
       (ulonglong)((local_res20 & 1) != 0) | (ulonglong)((uStackX_22 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_22 & 4) != 0) * 0x40000;
  *puVar1 = 0x733b596a;
  *puVar1 = *puVar1 ^ 0x733cb9cc;
  *(undefined8 *)(in_stack_00000028 - 0x10) = in_R10;
  *(undefined8 *)(in_stack_00000028 - 0x18) = in_R10;
  *(code **)(in_stack_00000028 - 0x10) = FUN_15b3d5987;
  return;
}



// FUNCTION 14da309a3 FUN_14da309a3 body=149 status=ok
// SIG undefined FUN_14da309a3(void)

void FUN_14da309a3(void)

{
  ushort *unaff_RDI;
  undefined8 in_stack_00000008;
  
  FUN_162c06e85(in_stack_00000008);
  *unaff_RDI = (-0x101 - ((*unaff_RDI - 0x101) - (*unaff_RDI & 0xfeff))) + *unaff_RDI;
  (*(code *)0x1566202e6)();
  return;
}



// FUNCTION 14da30a3a FUN_14da30a3a body=103 status=ok
// SIG undefined FUN_14da30a3a(void)

void FUN_14da30a3a(void)

{
  ushort *unaff_RDI;
  
  *unaff_RDI = (-0x101 - ((*unaff_RDI - 0x101) - (*unaff_RDI & 0xfeff))) + *unaff_RDI;
  (*(code *)0x1566202e6)();
  return;
}



// FUNCTION 14da30aa5 FUN_14da30aa5 body=316 status=ok
// SIG undefined FUN_14da30aa5(void)

/* WARNING: Removing unreachable block (ram,0x00014da30b4b) */
/* WARNING: Removing unreachable block (ram,0x00014da30b51) */
/* WARNING: Removing unreachable block (ram,0x00014da30b9e) */
/* WARNING: Removing unreachable block (ram,0x00014da30ba1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da30aa5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_16189d2db(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14da30d7c FUN_14da30d7c body=110 status=ok
// SIG undefined FUN_14da30d7c(void)

void FUN_14da30d7c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(&stack0xfffffffffd94372d + param_3);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  return;
}



// FUNCTION 14da30e8f FUN_14da30e8f body=454 status=ok
// SIG undefined FUN_14da30e8f(void)

/* WARNING: Removing unreachable block (ram,0x00014da30f0f) */
/* WARNING: Removing unreachable block (ram,0x00014da30f15) */

undefined8 FUN_14da30e8f(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  undefined8 in_R10;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong local_res8;
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  
  uVar1 = ~(in_stack_00000010 & param_1) &
          (*(ulonglong *)
            ((longlong)&local_res8 +
            ~(~(in_RAX & 0xffffffffa4c0f14d) & (in_RAX | 0xffffffffa4c0f14d))) | param_1);
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_R13;
  *(undefined8 *)(param_1 - 0x10) = in_R10;
  *(undefined8 *)(param_1 - 0x18) = in_R10;
  *(undefined8 *)(param_1 - 0x20) = unaff_R14;
  uVar2 = *(ulonglong *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = unaff_R15;
  *(ulonglong *)(param_1 - 0x28) = local_res8;
  uVar3 = *(undefined8 *)(param_1 - 0x28);
  *(undefined8 *)(param_1 - 0x10) = 0;
  *(longlong *)(param_1 - 0x10) = *(longlong *)(param_1 - 0x10) - (~uVar2 + 1);
  local_res8 = uVar1;
  uVar3 = (*(code *)0x16298b572)(uVar1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 14da31054 FUN_14da31054 body=195 status=ok
// SIG undefined FUN_14da31054(void)

ulonglong FUN_14da31054(void)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStack_18;
  ulonglong uStack_10;
  int iStack_4;
  
  puVar1 = (undefined8 *)(&stack0x00000000 + unaff_RBX);
  *puVar1 = unaff_R13;
  puVar2 = puVar1 + -1;
  *puVar2 = in_RAX;
  *(int *)puVar2 = 0;
  *(int *)puVar2 = (int)*puVar2 + 0x7794657;
  *(undefined4 *)(puVar1 + -3) = 0x5f073ad6;
  *(undefined4 *)(puVar1 + -2) = *(undefined4 *)(puVar1 + -3);
  *(int *)(puVar1 + -2) = *(int *)(puVar1 + -2) + 0x32827591;
  *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)(puVar1 + -2);
  *(int *)((longlong)puVar1 + -4) = *(int *)((longlong)puVar1 + -4) + 0x6e764f99;
  uVar3 = *puVar2;
  *(int *)puVar2 = 0xb2f6640;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  uVar4 = *puVar2 ^ 0xc56200f;
  lVar5 = uVar3 - uVar4;
  *(ulonglong *)((longlong)puVar1 + lVar5 + -8) = uVar4;
  *(ulonglong *)((longlong)puVar1 + lVar5 + -0x10) = uVar4;
  *(ulonglong *)((longlong)puVar1 + lVar5 + -0x18) = uVar4;
  *(code **)((longlong)puVar1 + lVar5 + -8) = FUN_14da31118;
  *(undefined **)((longlong)puVar1 + lVar5 + -0x10) = &DAT_165cb0831;
  return in_RAX ^ unaff_R15;
}



// FUNCTION 14da31118 FUN_14da31118 body=256 status=ok
// SIG undefined FUN_14da31118(void)

/* WARNING: Removing unreachable block (ram,0x00014da3121b) */

undefined8 FUN_14da31118(ulonglong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
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
  undefined8 in_stack_00000008;
  undefined8 *local_res10;
  
  uVar16 = *unaff_RSI;
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | param_1;
  *unaff_RSI = (~param_1 | uVar16) & *unaff_RSI ^ 0xffffffffffffffff;
  FUN_161b2194b(param_1,in_stack_00000008);
  bVar11 = (unaff_RBP & 0x4000) != 0;
  bVar10 = (unaff_RBP & 0x800) != 0;
  bVar9 = (unaff_RBP & 0x200) != 0;
  bVar8 = (unaff_RBP & 0x100) != 0;
  bVar7 = (unaff_RBP & 0x80) != 0;
  bVar6 = (unaff_RBP & 0x40) != 0;
  bVar5 = (unaff_RBP & 0x10) != 0;
  bVar4 = (unaff_RBP & 4) != 0;
  bVar3 = (unaff_RBP & 1) != 0;
  bVar15 = (unaff_RBP & 0x200000) != 0;
  bVar12 = (unaff_RBP & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res10 = FUN_161b2194b;
  local_res10[-1] = FUN_161b2194b;
  local_res10[-2] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((unaff_RBP & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  local_res10[-3] = in_R10;
  local_res10[-4] = unaff_R13;
  uVar16 = local_res10[-2];
  local_res10[-2] = unaff_R12;
  *local_res10 = 0x851660;
  local_res10[-1] = param_1;
  local_res10[-2] = param_1;
  local_res10[-3] = unaff_RBX;
  local_res10[-4] = uVar2;
  if ((uVar16 & 0x40) != 0) {
    local_res10[-5] = unaff_RDI;
    local_res10[-1] = FUN_14d85d504;
    return local_res10[-4];
  }
  uVar2 = FUN_1629a8571();
  return uVar2;
}



// FUNCTION 14da3121b FUN_14da3121b body=161 status=ok
// SIG undefined FUN_14da3121b(void)

void FUN_14da3121b(undefined8 param_1)

{
  FUN_162221841(param_1);
  return;
}



// FUNCTION 14da312bc FUN_14da312bc body=467 status=ok
// SIG undefined FUN_14da312bc(void)

void FUN_14da312bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  longlong local_res18;
  
  puVar4 = (ushort *)(*(ulonglong *)(unaff_R13 + -0x28) + unaff_R15);
  uVar3 = *(ulonglong *)(unaff_R13 + -0x28) ^ 0xffffffffffffffff;
  FUN_162301a89(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
  *puVar4 = ~*puVar4;
  *(ulonglong *)(local_res18 + -0x10) = uVar3;
  *(ulonglong *)(local_res18 + -0x18) = unaff_R15;
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(code **)(local_res18 + -8) = FUN_162301a89;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x20) = uStackX_8;
  *(undefined1 **)(local_res18 + -8) = &LAB_1568b70dd;
  uVar5 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = 0x14da313e6;
  uVar2 = FUN_1568b70a6();
  *(undefined8 *)(local_res18 + -0x10) = uVar5;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x18) = uVar5;
  *(undefined8 *)(local_res18 + -0x20) = in_R10;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(unaff_R12 + -0x68);
  *(undefined8 *)(local_res18 + -0x18) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x20) = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x28) = param_3;
  *(undefined8 *)(local_res18 + -0x30) = uVar2;
  *(undefined4 *)(local_res18 + -0x30) = 0x2a5efe43;
  *(undefined4 *)(local_res18 + -0x2c) = 0;
  *(undefined8 *)(local_res18 + -0x30) = in_R11;
  FUN_1647b26f5();
  return;
}



// FUNCTION 14da31492 FUN_14da31492 body=402 status=ok
// SIG undefined FUN_14da31492(void)

void FUN_14da31492(uint param_1)

{
  uint unaff_R13D;
  
  FUN_14d8acde3(~(unaff_R13D & param_1));
  return;
}



// FUNCTION 14da317eb FUN_14da317eb body=174 status=ok
// SIG undefined FUN_14da317eb(void)

void FUN_14da317eb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  uVar1 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = local_res8;
  *(undefined8 *)(local_res18 + -0x18) = local_res8;
  *(undefined8 *)(local_res18 + -0x20) = uVar1;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = 0;
  *(longlong *)(local_res18 + -0x10) =
       *(longlong *)(local_res18 + -0x10) + *(longlong *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined1 **)(local_res18 + -8) = &LAB_15b6eb3d6;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  FUN_15b6eb3a8(uVar1,param_2,param_3,*(undefined8 *)(local_res18 + -0x18));
  return;
}



// FUNCTION 14da3194f FUN_14da3194f body=65 status=ok
// SIG undefined FUN_14da3194f(void)

undefined8 FUN_14da3194f(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da31a8e FUN_14da31a8e body=599 status=ok
// SIG undefined FUN_14da31a8e(void)

/* WARNING: Removing unreachable block (ram,0x000160cdf25b) */
/* WARNING: Removing unreachable block (ram,0x00014da31bb1) */
/* WARNING: Removing unreachable block (ram,0x00014da31bb7) */
/* WARNING: Removing unreachable block (ram,0x00014da31b12) */
/* WARNING: Removing unreachable block (ram,0x00014da31b18) */
/* WARNING: Removing unreachable block (ram,0x0001563e5133) */
/* WARNING: Removing unreachable block (ram,0x0001563e51b7) */
/* WARNING: Removing unreachable block (ram,0x0001563e51bd) */
/* WARNING: Removing unreachable block (ram,0x0001656031d5) */
/* WARNING: Removing unreachable block (ram,0x000160cdf2c0) */
/* WARNING: Removing unreachable block (ram,0x000160cdf2c4) */

void FUN_14da31a8e(void)

{
  FUN_160cdf25b();
  return;
}



// FUNCTION 14da31bf0 FUN_14da31bf0 body=8 status=ok
// SIG undefined FUN_14da31bf0(void)

void FUN_14da31bf0(void)

{
  undefined1 unaff_R12B;
  undefined1 *unaff_R15;
  
  *unaff_R15 = unaff_R12B;
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14da31c49 FUN_14da31c49 body=116 status=ok
// SIG undefined FUN_14da31c49(void)

/* WARNING: Removing unreachable block (ram,0x00014da31cc0) */

void FUN_14da31c49(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int in_EAX;
  int in_R10D;
  
  if (-1 < in_EAX - in_R10D) {
    return;
  }
  FUN_1575aa571(in_EAX,param_2,param_3);
  return;
}



// FUNCTION 14da31cc0 FUN_14da31cc0 body=153 status=ok
// SIG undefined FUN_14da31cc0(void)

void FUN_14da31cc0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + unaff_RSI);
  FUN_162830c70(FUN_162830c70,param_2,
                ~(((~unaff_R15 & uVar1 ^ 0xffffffffffffffff) + uVar1) - unaff_R15 &
                 (~uVar1 | unaff_R15)));
  return;
}



// FUNCTION 14da31fe1 FUN_14da31fe1 body=758 status=ok
// SIG undefined FUN_14da31fe1(void)

/* WARNING: Removing unreachable block (ram,0x00014da322e9) */
/* WARNING: Removing unreachable block (ram,0x00014da322f4) */
/* WARNING: Removing unreachable block (ram,0x00014da322ef) */
/* WARNING: Removing unreachable block (ram,0x000161d98aa9) */
/* WARNING: Removing unreachable block (ram,0x000161d98ab5) */
/* WARNING: Removing unreachable block (ram,0x00014da32262) */
/* WARNING: Removing unreachable block (ram,0x00014da32131) */
/* WARNING: Removing unreachable block (ram,0x00014da3225c) */
/* WARNING: Removing unreachable block (ram,0x00015733360f) */
/* WARNING: Removing unreachable block (ram,0x0001651f7605) */

undefined8 FUN_14da31fe1(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_164f3b23e();
  if (((param_1 ^ 0xffffffffffffffff | *(ulonglong *)(unaff_RDI + -0x88)) &
      (~*(ulonglong *)(unaff_RDI + -0x88) | param_1)) != 0xffffffffffffffff) {
    uVar1 = FUN_161d98a17();
    return uVar1;
  }
  uVar1 = FUN_166980199();
  return uVar1;
}



// FUNCTION 14da32262 FUN_14da32262 body=268 status=ok
// SIG undefined FUN_14da32262(void)

/* WARNING: Removing unreachable block (ram,0x00014da322e9) */
/* WARNING: Removing unreachable block (ram,0x00014da322f4) */
/* WARNING: Removing unreachable block (ram,0x00014da322ef) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da32262(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x161bd0464)(param_1,param_2 ^ *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da32435 FUN_14da32435 body=168 status=ok
// SIG undefined FUN_14da32435(void)

void FUN_14da32435(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBX;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x20) = local_res8;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar1 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(&LAB_165c057ad + *(longlong *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x20) = in_RAX;
  *(undefined4 *)(local_res18 + -0x20) = 0xa3c79040;
  *(undefined4 *)(local_res18 + -0x1c) = 0xffffffff;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R12;
  *(undefined8 *)(local_res18 + -0x28) = unaff_R12;
  *(undefined1 **)(local_res18 + -0x20) = &LAB_14da324df;
  FUN_15634810b(uVar1);
  return;
}



// FUNCTION 14da328bd FUN_14da328bd body=94 status=ok
// SIG undefined FUN_14da328bd(void)

void FUN_14da328bd(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 unaff_RBP;
  
  *(undefined8 *)
   (&stack0x00000018 + ~(param_1 & (~(param_3 & 0xfffffffff7a825a3) - 0x857da5d) - ~param_3)) =
       unaff_RBP;
  return;
}



// FUNCTION 14da32972 FUN_14da32972 body=281 status=ok
// SIG undefined FUN_14da32972(void)

void FUN_14da32972(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R12;
  
  uVar2 = param_3 + *(longlong *)(unaff_R12 + -0x80);
  uVar1 = ~((~(uVar2 & in_RAX) + in_RAX) - ~uVar2);
  FUN_157639b46(CONCAT62((int6)(uVar1 >> 0x10),0xd930),FUN_157639b46,
                ~(~((in_RAX - (uVar2 | in_RAX)) + uVar2 ^ 0xffffffffffffffff) | uVar1));
  return;
}



// FUNCTION 14da32aa1 FUN_14da32aa1 body=484 status=ok
// SIG undefined FUN_14da32aa1(void)

/* WARNING: Removing unreachable block (ram,0x0001575e1fb9) */
/* WARNING: Removing unreachable block (ram,0x0001575e1fbf) */
/* WARNING: Removing unreachable block (ram,0x000160be6571) */
/* WARNING: Removing unreachable block (ram,0x000160be6577) */
/* WARNING: Removing unreachable block (ram,0x00014da32b54) */
/* WARNING: Removing unreachable block (ram,0x00014da32bea) */
/* WARNING: Removing unreachable block (ram,0x000156be050b) */
/* WARNING: Removing unreachable block (ram,0x0001575e1f85) */
/* WARNING: Removing unreachable block (ram,0x0001575e1f86) */
/* WARNING: Removing unreachable block (ram,0x00014da32bf0) */

void FUN_14da32aa1(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffc0;
  FUN_161aa4f54();
  FUN_166268355(uVar1);
  FUN_160df4021();
  return;
}



// FUNCTION 14da33024 FUN_14da33024 body=213 status=ok
// SIG undefined FUN_14da33024(void)

void FUN_14da33024(void)

{
  FUN_15b9d8967();
  FUN_1575f1d33();
  return;
}



// FUNCTION 14da333f0 FUN_14da333f0 body=210 status=ok
// SIG undefined FUN_14da333f0(void)

undefined8 FUN_14da333f0(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R11;
  ulonglong local_res18;
  ulonglong in_stack_00000028;
  
  uVar1 = local_res18 ^ in_RAX;
  in_stack_00000028 = in_stack_00000028 ^ in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = unaff_RBP;
  *(undefined8 *)(in_stack_00000028 - 0x10) = *(undefined8 *)(in_stack_00000028 - 8);
  *(undefined8 *)(in_stack_00000028 - 0x18) = in_R11;
  *(undefined1 **)(in_stack_00000028 - 8) = &LAB_162804028;
  *(undefined8 *)(in_stack_00000028 - 0x10) = unaff_RSI;
  *(undefined8 *)(in_stack_00000028 - 0x18) = unaff_RSI;
  *(code **)(in_stack_00000028 - 0x10) = thunk_FUN_15b642ca5;
  *(ulonglong *)(in_stack_00000028 - 0x20) = uVar1;
  *(ulonglong *)(in_stack_00000028 - 0x28) = uVar1;
  *(ulonglong *)(in_stack_00000028 - 0x30) = uVar1;
  *(code **)(in_stack_00000028 - 0x20) = FUN_14da334c8;
  *(undefined8 *)(in_stack_00000028 - 0x28) = 0x162804003;
  return *(undefined8 *)(in_stack_00000028 - 0x30);
}



// FUNCTION 14da334c8 FUN_14da334c8 body=445 status=ok
// SIG undefined FUN_14da334c8(void)

/* WARNING: Removing unreachable block (ram,0x00014da3355f) */
/* WARNING: Removing unreachable block (ram,0x00014da335df) */
/* WARNING: Removing unreachable block (ram,0x00014da335ea) */
/* WARNING: Removing unreachable block (ram,0x00014da335f0) */
/* WARNING: Removing unreachable block (ram,0x0001621a663a) */

void FUN_14da334c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short unaff_BX;
  ushort unaff_DI;
  short in_R11W;
  ushort uVar1;
  
  uVar1 = in_R11W * 8 + unaff_BX;
  FUN_16270abe2(param_1,param_2,~(unaff_DI & uVar1) & (unaff_DI | uVar1),param_4);
  return;
}



// FUNCTION 14da33689 FUN_14da33689 body=418 status=ok
// SIG undefined FUN_14da33689(void)

void FUN_14da33689(void)

{
  (*(code *)0x161a6bfe7)();
  return;
}



// FUNCTION 14da337ab FUN_14da337ab body=480 status=ok
// SIG undefined FUN_14da337ab(void)

/* WARNING: Removing unreachable block (ram,0x00014da338c3) */

ulonglong FUN_14da337ab(void)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_AF;
  
  FUN_16295267e();
  uVar1 = ~(*(ulonglong *)(unaff_R13 + -0x60) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15);
  return CONCAT62((int6)(~unaff_R15 >> 0x10),
                  CONCAT11(((longlong)uVar1 < 0) << 7 | (uVar1 == 0) << 6 | in_AF << 4 |
                           ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) << 2,(char)~unaff_R15)) | 0x200;
}



// FUNCTION 14da338ec FUN_14da338ec body=97 status=ok
// SIG undefined FUN_14da338ec(void)

/* WARNING: Removing unreachable block (ram,0x00014da3394d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da338ec(void)

{
  FUN_161009ef1();
  return;
}



// FUNCTION 14da3394d FUN_14da3394d body=60 status=ok
// SIG undefined FUN_14da3394d(void)

void FUN_14da3394d(void)

{
  return;
}



// FUNCTION 14da33b12 FUN_14da33b12 body=169 status=ok
// SIG undefined FUN_14da33b12(void)

undefined8 FUN_14da33b12(void)

{
  undefined8 in_RAX;
  longlong local_res20;
  
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = in_RAX;
  *(undefined8 *)(local_res20 + -0x18) = in_RAX;
  *(code **)(local_res20 + -8) = FUN_14da33bbf;
  *(undefined **)(local_res20 + -0x10) = &DAT_1610dc743;
  return *(undefined8 *)(local_res20 + -0x18);
}



// FUNCTION 14da33bbf FUN_14da33bbf body=227 status=ok
// SIG undefined FUN_14da33bbf(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da33bbf(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  FUN_157670973(param_1,param_2);
  FUN_14d85d504(local_res10 + unaff_R15 + (local_res10 & unaff_R15) * -2);
  return;
}



// FUNCTION 14da33d9e FUN_14da33d9e body=455 status=ok
// SIG undefined FUN_14da33d9e(void)

/* WARNING: Removing unreachable block (ram,0x00014da33eb9) */
/* WARNING: Removing unreachable block (ram,0x00014da33ebf) */
/* WARNING: Removing unreachable block (ram,0x00014da33ede) */
/* WARNING: Removing unreachable block (ram,0x00014da33ef6) */
/* WARNING: Removing unreachable block (ram,0x00014da33e1d) */
/* WARNING: Removing unreachable block (ram,0x000161510d16) */
/* WARNING: Removing unreachable block (ram,0x000161510d1b) */
/* WARNING: Removing unreachable block (ram,0x000161510d2c) */
/* WARNING: Removing unreachable block (ram,0x000161510d27) */

void FUN_14da33d9e(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = *in_R10;
  *in_R10 = ~*in_R10;
  *in_R10 = *in_R10 | param_1;
  *in_R10 = ~((~param_1 | uVar1) & *in_R10);
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_retaddr;
  *(undefined8 *)(param_1 - 0x10) = unaff_R12;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 8) = 0;
  *(longlong *)(param_1 - 8) = *(longlong *)(param_1 - 8) + 0x161378861;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(*(longlong *)(param_1 - 0x10) + 0xe0);
  return;
}



// FUNCTION 14da33f6a FUN_14da33f6a body=151 status=ok
// SIG undefined FUN_14da33f6a(void)

void FUN_14da33f6a(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = 0xffffffffffffffff - (~param_4 | in_RAX);
  (*(code *)&LAB_15b63a86d)
            (0xffffffffffffff80,&LAB_15b63a86d,-1 - ~*(ulonglong *)(unaff_R12 + -0x80),
             ~uVar1 & 0xffffffffffffffffU - param_1 | uVar1);
  return;
}



// FUNCTION 14da340a3 FUN_14da340a3 body=143 status=ok
// SIG undefined FUN_14da340a3(void)

void FUN_14da340a3(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 in_R11;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
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
  ulonglong unaff_retaddr;
  ulonglong local_res20;
  ulonglong in_stack_00000028;
  
  uVar17 = *unaff_R13;
  *unaff_R13 = ~*unaff_R13;
  uVar2 = *unaff_R13;
  *unaff_R13 = *unaff_R13 & unaff_R15;
  *unaff_R13 = (uVar2 + unaff_R15) - *unaff_R13;
  *unaff_R13 = ~((~unaff_retaddr | uVar17) & *unaff_R13);
  uVar17 = local_res20 ^ unaff_R15;
  puVar1 = (undefined8 *)(in_stack_00000028 ^ unaff_R15);
  bVar12 = (uVar17 & 0x4000) != 0;
  bVar11 = (uVar17 & 0x800) != 0;
  bVar10 = (uVar17 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (uVar17 & 0x80) != 0;
  bVar7 = (uVar17 & 0x40) != 0;
  bVar6 = (uVar17 & 0x10) != 0;
  bVar5 = (uVar17 & 4) != 0;
  bVar4 = (uVar17 & 1) != 0;
  bVar16 = (uVar17 & 0x200000) != 0;
  bVar13 = (uVar17 & 0x40000) != 0;
  bVar15 = 0;
  bVar14 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)();
  *puVar1 = in_R11;
  puVar1[-1] = in_R11;
  puVar1[-2] = (ulonglong)(bVar12 & 1) * 0x4000 | (ulonglong)(bVar11 & 1) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 |
               (ulonglong)(bVar9 & 1) * 0x100 | (ulonglong)(bVar8 & 1) * 0x80 |
               (ulonglong)(bVar7 & 1) * 0x40 | (ulonglong)(bVar6 & 1) * 0x10 |
               (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
               (ulonglong)(bVar16 & 1) * 0x200000 | (ulonglong)(bVar15 & 1) * 0x100000 |
               (ulonglong)(bVar14 & 1) * 0x80000 | (ulonglong)(bVar13 & 1) * 0x40000;
  uVar17 = puVar1[-2];
  puVar1[-2] = (ulonglong)((uVar17 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar17 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar17 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar17 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar17 & 0x100) != 0) * 0x100 | (ulonglong)((uVar17 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar17 & 0x40) != 0) * 0x40 | (ulonglong)((uVar17 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar17 & 4) != 0) * 4 | (ulonglong)((uVar17 & 1) != 0) |
               (ulonglong)((uVar17 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar17 & 0x40000) != 0) * 0x40000;
  puVar1[-3] = param_1;
  FUN_1569471ef(FUN_1569471ef);
  return;
}



// FUNCTION 14da341bb FUN_14da341bb body=106 status=ok
// SIG undefined FUN_14da341bb(void)

void FUN_14da341bb(UINT param_1,DWORD param_2,LPCWSTR param_3,int param_4)

{
  uint unaff_retaddr;
  undefined8 local_res10 [3];
  LPSTR in_stack_00000048;
  int in_stack_00000050;
  LPCSTR in_stack_00000058;
  LPBOOL in_stack_00000060;
  
  local_res10[1] = *(undefined8 *)((longlong)local_res10 + ((ulonglong)unaff_retaddr ^ 0x2ce239a3));
                    /* WARNING: Could not recover jumptable at 0x00014da3421f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,param_2,param_3,param_4,in_stack_00000048,in_stack_00000050,
                      in_stack_00000058,in_stack_00000060);
  return;
}



// FUNCTION 14da34315 FUN_14da34315 body=154 status=ok
// SIG undefined FUN_14da34315(void)

void FUN_14da34315(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15711a8d7(0xffffffffef2684c1,0xffffffffef2684c1,0x10d97b41,
                ~(0xffffffffffffffff - in_RAX | *(ulonglong *)(unaff_R12 + -0x30)) |
                ~(~*(ulonglong *)(unaff_R12 + -0x30) | in_RAX));
  return;
}



// FUNCTION 14da34569 FUN_14da34569 body=184 status=ok
// SIG undefined FUN_14da34569(void)

/* WARNING: Removing unreachable block (ram,0x00014da3461b) */
/* WARNING: Removing unreachable block (ram,0x00014da34621) */

void FUN_14da34569(void)

{
  return;
}



// FUNCTION 14da34621 FUN_14da34621 body=303 status=ok
// SIG undefined FUN_14da34621(void)

void FUN_14da34621(undefined8 param_1,short param_2)

{
  FUN_1575caeba(param_1,param_2 + -1);
  FUN_166034543();
  FUN_14da34753();
  return;
}



// FUNCTION 14da34753 FUN_14da34753 body=164 status=ok
// SIG undefined FUN_14da34753(void)

undefined8 FUN_14da34753(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_R12;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (unaff_R12 ^ 0x21173ed5)) = param_2;
  return in_RAX;
}



// FUNCTION 14da3480b FUN_14da3480b body=233 status=ok
// SIG undefined FUN_14da3480b(void)

/* WARNING: Removing unreachable block (ram,0x00014da348a4) */

void FUN_14da3480b(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x90);
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(*(ulonglong *)(unaff_RDI + -0x98) + param_1 +
            (*(ulonglong *)(unaff_RDI + -0x98) & param_1) * -2,param_2,param_3);
  *(undefined8 *)(uVar1 ^ param_1) = 0x6acba06;
  FUN_165c7153c();
  return;
}



// FUNCTION 14da349e4 FUN_14da349e4 body=225 status=ok
// SIG undefined FUN_14da349e4(void)

void FUN_14da349e4(undefined8 param_1)

{
  longlong unaff_RDI;
  
  FUN_16667df01(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14da34aff FUN_14da34aff body=204 status=ok
// SIG undefined FUN_14da34aff(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14da34aff(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14da34e4d FUN_14da34e4d body=154 status=ok
// SIG undefined FUN_14da34e4d(void)

void FUN_14da34e4d(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 unaff_retaddr;
  ulonglong local_res8 [4];
  
  uVar1 = *(ulonglong *)
           ((longlong)local_res8 + ~(~(param_2 & 0xffffffffb30e1925) & ~(~param_2 & 0x4cf1e6da))) |
          param_1;
  local_res8[3] = ~(local_res8[3] & param_1);
  FUN_15b211619((-(-1 - uVar1) - (~(~uVar1 | local_res8[3]) + 2)) + 1,unaff_retaddr);
  FUN_156f80914();
  return;
}



// FUNCTION 14da34ee7 FUN_14da34ee7 body=133 status=ok
// SIG undefined FUN_14da34ee7(void)

void FUN_14da34ee7(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_156f80914(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14da34f74 FUN_14da34f74 body=150 status=ok
// SIG undefined FUN_14da34f74(void)

/* WARNING: Removing unreachable block (ram,0x00014da3500b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da34f74(void)

{
  ulonglong unaff_R15;
  undefined8 local_res10;
  
  if (local_res10 + unaff_R15 < (local_res10 & unaff_R15) << 1) {
    FUN_162591aa1();
    return;
  }
  FUN_162591aa1();
  return;
}



// FUNCTION 14da3500b FUN_14da3500b body=170 status=ok
// SIG undefined FUN_14da3500b(void)

void FUN_14da3500b(ulonglong param_1)

{
  (*(code *)0x156e076a2)(~param_1);
  return;
}



// FUNCTION 14da350b5 FUN_14da350b5 body=194 status=ok
// SIG undefined FUN_14da350b5(void)

void FUN_14da350b5(void)

{
  return;
}



// FUNCTION 14da3517b FUN_14da3517b body=273 status=ok
// SIG undefined FUN_14da3517b(void)

/* WARNING: Removing unreachable block (ram,0x00014da35212) */
/* WARNING: Removing unreachable block (ram,0x00014da3521d) */
/* WARNING: Removing unreachable block (ram,0x00014da35262) */
/* WARNING: Removing unreachable block (ram,0x00014da3525d) */
/* WARNING: Removing unreachable block (ram,0x00014da3526c) */
/* WARNING: Removing unreachable block (ram,0x00014da3528e) */
/* WARNING: Removing unreachable block (ram,0x00014da35218) */

void FUN_14da3517b(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong in_stack_00000008;
  
  uVar4 = in_stack_00000008 ^ 0x6c7648c8 ^ *(ulonglong *)(unaff_RDI + -0x60);
  uVar3 = ~param_1 | *(ulonglong *)(unaff_RDI + -0x80);
  uVar1 = ~(*(ulonglong *)(unaff_RDI + -0x80) ^ 0xffffffffffffffff) & ~param_1;
  uVar2 = ~uVar1;
  (*(code *)&LAB_15686b2fb)
            ((char)param_1,~((uVar2 - (uVar1 & uVar3 | uVar2)) + uVar3),
             ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
             (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
             ~(uVar4 & param_1) & ((-1 - ~(~uVar4 | ~param_1)) + param_1) - ~uVar4);
  return;
}



// FUNCTION 14da3534e FUN_14da3534e body=186 status=ok
// SIG undefined FUN_14da3534e(void)

void FUN_14da3534e(void)

{
  return;
}



// FUNCTION 14da3579c FUN_14da3579c body=17 status=ok
// SIG undefined FUN_14da3579c(void)

void FUN_14da3579c(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14da35992 FUN_14da35992 body=146 status=ok
// SIG undefined FUN_14da35992(void)

void FUN_14da35992(void)

{
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~(~(unaff_R15 & *(ulonglong *)(unaff_R12 + 8)) & unaff_R15);
  *(longlong *)(unaff_R12 + 8) = -*(longlong *)(unaff_R12 + 8);
  *(longlong *)(unaff_R12 + 8) = *(longlong *)(unaff_R12 + 8) + -1;
  return;
}



// FUNCTION 14da35bfc FUN_14da35bfc body=156 status=ok
// SIG undefined FUN_14da35bfc(void)

void FUN_14da35bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  (*(code *)0x14daf0f33)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14da35c99 FUN_14da35c99 body=441 status=ok
// SIG undefined FUN_14da35c99(void)

/* WARNING: Instruction at (ram,0x00014d7a7204) overlaps instruction at (ram,0x00014d7a7203)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014de3e809) */
/* WARNING: Removing unreachable block (ram,0x00014de3e899) */
/* WARNING: Removing unreachable block (ram,0x0001651c510e) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7203) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7285) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7211) */
/* WARNING: Removing unreachable block (ram,0x00014d7a721b) */
/* WARNING: Removing unreachable block (ram,0x00014d7a71e8) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7204) */
/* WARNING: Removing unreachable block (ram,0x00014d7a71f7) */
/* WARNING: Removing unreachable block (ram,0x00014da35d36) */
/* WARNING: Removing unreachable block (ram,0x00014da35d3c) */
/* WARNING: Removing unreachable block (ram,0x00014da35d44) */
/* WARNING: Removing unreachable block (ram,0x00014da35d57) */
/* WARNING: Removing unreachable block (ram,0x00014da35d72) */
/* WARNING: Removing unreachable block (ram,0x0001661c7238) */
/* WARNING: Removing unreachable block (ram,0x0001661c724c) */
/* WARNING: Removing unreachable block (ram,0x0001661c7251) */
/* WARNING: Removing unreachable block (ram,0x00014de3e89f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da35c99(void)

{
  FUN_14de3e809();
  return;
}



// FUNCTION 14da35f87 FUN_14da35f87 body=143 status=ok
// SIG undefined FUN_14da35f87(void)

void FUN_14da35f87(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong in_R10;
  undefined8 local_res8;
  
  uVar1 = *param_1;
  *param_1 = ~*param_1;
  *param_1 = *param_1 | in_R10;
  *param_1 = ~((~in_R10 | uVar1) & *param_1);
  FUN_1662c1386(local_res8);
  return;
}



// FUNCTION 14da360a8 FUN_14da360a8 body=251 status=ok
// SIG undefined FUN_14da360a8(void)

/* WARNING: Removing unreachable block (ram,0x00014da3613f) */

void FUN_14da360a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong in_R10;
  ulonglong in_stack_00000008;
  
  uVar1 = ~(param_5 & in_stack_00000008) & (in_R10 | in_stack_00000008);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined1 **)(uVar1 - 0x10) = &LAB_16105ff6b;
  *(undefined1 **)(uVar1 - 0x18) = &LAB_16105ff6b;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = param_3;
  *(undefined8 *)(uVar1 - 8) = uVar2;
  FUN_14d7c5398(param_1,param_2,*(undefined8 *)(uVar1 - 0x18));
  return;
}



// FUNCTION 14da36434 FUN_14da36434 body=421 status=ok
// SIG undefined FUN_14da36434(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7bd636) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd638) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd5c4) */
/* WARNING: Removing unreachable block (ram,0x00014da364ce) */
/* WARNING: Removing unreachable block (ram,0x00014d7bd5cf) */
/* WARNING: Removing unreachable block (ram,0x00014da3653b) */
/* WARNING: Removing unreachable block (ram,0x00014da36541) */
/* WARNING: Removing unreachable block (ram,0x00014da36546) */

void FUN_14da36434(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_164fb2642(FUN_164fb2642,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14da365df FUN_14da365df body=141 status=ok
// SIG undefined FUN_14da365df(void)

void FUN_14da365df(void)

{
  FUN_15b059e77();
  return;
}



// FUNCTION 14da368b5 FUN_14da368b5 body=8 status=ok
// SIG undefined FUN_14da368b5(void)

void FUN_14da368b5(void)

{
  return;
}



// FUNCTION 14da3692e FUN_14da3692e body=179 status=ok
// SIG undefined FUN_14da3692e(void)

undefined8 FUN_14da3692e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da36bb6 FUN_14da36bb6 body=209 status=ok
// SIG undefined FUN_14da36bb6(void)

undefined1 FUN_14da36bb6(void)

{
  undefined1 in_AL;
  int local_res8;
  undefined8 local_res10;
  
  local_res10 = CONCAT44(local_res10._4_4_ + local_res8 + 0x74fb4f2e,(undefined4)local_res10);
  if (local_res10 != -0x3a472a5a) {
    in_AL = in(0x70);
  }
  return in_AL;
}



// FUNCTION 14da36c9c FUN_14da36c9c body=163 status=ok
// SIG undefined FUN_14da36c9c(void)

/* WARNING: Removing unreachable block (ram,0x00014da36d30) */

void FUN_14da36c9c(short param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  short sVar2;
  ulonglong uVar3;
  short *in_RAX;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  sVar2 = *in_RAX;
  *in_RAX = 0;
  *in_RAX = *in_RAX + (-0x101 - param_1) + sVar2;
  puVar1 = (ulonglong *)(param_5 + -8);
  *puVar1 = param_2;
  *(undefined8 *)(param_5 + -0x10) = param_4;
  *(ulonglong *)(param_5 + -0x10) = *puVar1;
  *puVar1 = 0;
  *(undefined8 *)(param_5 + -0x18) = uStackX_10;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 & 0x156f70077;
  *(undefined8 *)(param_5 + -0x20) = uStackX_18;
  *puVar1 = *puVar1 << 1;
  *puVar1 = (ulonglong)(&LAB_156f70077 + (uVar3 - *puVar1));
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -0x18);
  return;
}



// FUNCTION 14da36d36 FUN_14da36d36 body=317 status=ok
// SIG undefined FUN_14da36d36(void)

ulonglong FUN_14da36d36(void)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  code *pcVar3;
  longlong in_R11;
  undefined1 unaff_R12B;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  ulonglong local_res20;
  
  *(ulonglong *)(in_R11 + 0x10) = ~*(ulonglong *)(in_R11 + 0x10);
  *(ulonglong *)(in_R11 + 0x10) = *(ulonglong *)(in_R11 + 0x10) | unaff_R15;
  *(ulonglong *)(in_R11 + 0x10) = ~(unaff_R13 & *(ulonglong *)(in_R11 + 0x10));
  pcVar3 = FUN_165322dd6;
  uVar2 = FUN_165322dd6();
  uVar2 = ~local_res20 | uVar2;
                    /* WARNING: Read-only address (ram,0x00014d7a9610) is written */
  LOCK();
  uVar1 = unaff_R12B;
  if ((char)in_R10 != '\0') {
    in_R10 = in_R10 & 0xffffffffffffff00;
    uVar1 = uRam000000014d7a9610;
  }
  uRam000000014d7a9610 = uVar1;
  UNLOCK();
  *(code **)(uVar2 - 8) = pcVar3;
  *(code **)(uVar2 - 0x10) = pcVar3;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x20) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x28) = unaff_RDI;
  *(undefined1 **)(uVar2 - 0x18) = &LAB_14da36e74;
  *(undefined1 **)(uVar2 - 0x20) = &LAB_166d84b8c;
  return in_R10;
}



// FUNCTION 14da3723f FUN_14da3723f body=530 status=ok
// SIG undefined FUN_14da3723f(void)

/* WARNING: Removing unreachable block (ram,0x000162170076) */
/* WARNING: Removing unreachable block (ram,0x000162170081) */
/* WARNING: Removing unreachable block (ram,0x00014da372fa) */
/* WARNING: Removing unreachable block (ram,0x00014da37300) */
/* WARNING: Removing unreachable block (ram,0x00014da3738c) */
/* WARNING: Removing unreachable block (ram,0x00014da37392) */
/* WARNING: Removing unreachable block (ram,0x00016216ffef) */
/* WARNING: Removing unreachable block (ram,0x000161cfd8dc) */
/* WARNING: Removing unreachable block (ram,0x000161cfd93f) */
/* WARNING: Removing unreachable block (ram,0x000161cfd943) */
/* WARNING: Removing unreachable block (ram,0x00016217007c) */

undefined8 FUN_14da3723f(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_R13;
  ulonglong uVar2;
  
  uVar2 = unaff_R13 ^ unaff_RBP ^ 0x66fd5c68;
  *(undefined8 *)(&stack0xfffffffff52d56cc + uVar2) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff52d56cc + uVar2) = 0x551a4649;
  *(undefined4 *)(&stack0xfffffffff52d56d0 + uVar2) = 0;
  *(undefined8 *)(&stack0xfffffffff52d56d4 + uVar2) = 0;
  *(undefined4 *)(&stack0xfffffffff52d56cc + uVar2) = 0xbcaa7bf7;
  *(undefined4 *)(&stack0xfffffffff52d56d0 + uVar2) = 0xffffffff;
  *(undefined8 *)(&stack0xfffffffff52d56cc + uVar2) = 0xffffffffec43668e;
  uVar1 = FUN_1662ee944();
  return uVar1;
}



// FUNCTION 14da37562 FUN_14da37562 body=129 status=ok
// SIG undefined FUN_14da37562(void)

void FUN_14da37562(void)

{
  FUN_14d869da2();
  return;
}



// FUNCTION 14da37986 FUN_14da37986 body=328 status=ok
// SIG undefined FUN_14da37986(void)

/* WARNING: Removing unreachable block (ram,0x00014da37a24) */
/* WARNING: Removing unreachable block (ram,0x00014da37a2f) */
/* WARNING: Removing unreachable block (ram,0x00014da37a2a) */

void FUN_14da37986(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 in_stack_00000010;
  
  uVar5 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
           (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x70) ^ unaff_R15;
  *(undefined8 *)(uVar2 - 8) = in_R11;
  plVar1 = (longlong *)(uVar2 - 0x10);
  *plVar1 = 0x167c21403;
  *plVar1 = *plVar1 + -0x1c3216b;
  lVar3 = *plVar1;
  *(ulonglong *)(uVar2 - 0x10) = uVar5;
  *(ulonglong *)(uVar2 - 0x18) = uVar5;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = param_4;
  *(longlong *)(uVar2 - 8) = lVar3;
  uVar4 = *(undefined8 *)(uVar2 - 0x18);
  *(undefined8 *)(uVar2 - 0x18) = in_stack_00000010;
  *(undefined8 *)(uVar2 - 0x20) = param_3;
  FUN_165fef26c(param_1,param_2,FUN_165fef26c,uVar4);
  return;
}



// FUNCTION 14da37d73 FUN_14da37d73 body=97 status=ok
// SIG undefined FUN_14da37d73(void)

void FUN_14da37d73(void)

{
  FUN_166019681();
  return;
}



// FUNCTION 14da37f00 FUN_14da37f00 body=132 status=ok
// SIG undefined FUN_14da37f00(void)

/* WARNING: Instruction at (ram,0x00014da37f80) overlaps instruction at (ram,0x00014da37f7f)
    */
/* WARNING: Removing unreachable block (ram,0x00014da38042) */
/* WARNING: Removing unreachable block (ram,0x00014da3804d) */
/* WARNING: Removing unreachable block (ram,0x00014da38048) */
/* WARNING: Removing unreachable block (ram,0x00014da37f7d) */

undefined8 FUN_14da37f00(ulonglong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  ulonglong uVar3;
  undefined8 in_stack_00000008;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x30) | param_1;
  bVar1 = (*(ulonglong *)(unaff_RDI + -0x30) & param_1) == 0xffffffffffffffff;
  if ((!bVar1 || uVar3 != 0) && (bVar1 && uVar3 == 0)) {
    uVar2 = thunk_FUN_15b642ca5(param_1,in_stack_00000008,0,uVar3);
    return uVar2;
  }
  uVar2 = (*(code *)&LAB_166de56f4)
                    (param_1,0x7173f9b1,
                     *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                     (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2,
                     *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar2;
}



// FUNCTION 14da37fb1 FUN_14da37fb1 body=156 status=ok
// SIG undefined FUN_14da37fb1(void)

/* WARNING: Removing unreachable block (ram,0x00014da38042) */
/* WARNING: Removing unreachable block (ram,0x00014da3804d) */
/* WARNING: Removing unreachable block (ram,0x00014da38048) */

void FUN_14da37fb1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,unaff_retaddr,param_3,param_4);
  return;
}



// FUNCTION 14da3804d FUN_14da3804d body=129 status=ok
// SIG undefined FUN_14da3804d(void)

void FUN_14da3804d(void)

{
  FUN_16267d539();
  return;
}



// FUNCTION 14da380cf FUN_14da380cf body=147 status=ok
// SIG undefined FUN_14da380cf(void)

/* WARNING: Removing unreachable block (ram,0x00014da38164) */

undefined8 FUN_14da380cf(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da3816a FUN_14da3816a body=19 status=ok
// SIG undefined FUN_14da3816a(void)

void FUN_14da3816a(void)

{
  return;
}



// FUNCTION 14da3832b FUN_14da3832b body=298 status=ok
// SIG undefined FUN_14da3832b(void)

/* WARNING: Removing unreachable block (ram,0x00014da383b0) */
/* WARNING: Removing unreachable block (ram,0x00014da383b6) */
/* WARNING: Removing unreachable block (ram,0x00014da38431) */
/* WARNING: Removing unreachable block (ram,0x00014da38437) */
/* WARNING: Removing unreachable block (ram,0x00014da38493) */
/* WARNING: Removing unreachable block (ram,0x00016480da14) */
/* WARNING: Removing unreachable block (ram,0x000157537d46) */

void FUN_14da3832b(void)

{
  FUN_157537d46();
  return;
}



// FUNCTION 14da38437 FUN_14da38437 body=181 status=ok
// SIG undefined FUN_14da38437(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da38437(void)

{
  return;
}



// FUNCTION 14da385f0 FUN_14da385f0 body=354 status=ok
// SIG undefined FUN_14da385f0(void)

/* WARNING: Removing unreachable block (ram,0x00014da386a0) */
/* WARNING: Removing unreachable block (ram,0x00014da386b2) */
/* WARNING: Removing unreachable block (ram,0x00014da386cb) */

void FUN_14da385f0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 in_R11;
  code *pcVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte in_stack_00000010;
  longlong local_res18;
  longlong local_res20;
  
  *(ulonglong *)(unaff_R12 + 8) = (~unaff_R15 | *(ulonglong *)(unaff_R12 + 8)) + unaff_R15 + 1;
  uVar3 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  if ((longlong)(param_6 + unaff_R15) < 0) {
    lVar5 = param_6 + unaff_R15 + ((unaff_R15 - (param_6 | unaff_R15)) + param_6) * -2;
    bVar14 = (uVar3 & 0x4000) != 0;
    bVar12 = (uVar3 & 0x400) != 0;
    bVar11 = (uVar3 & 0x200) != 0;
    bVar9 = (uVar3 & 0x10) != 0;
    bVar16 = (uVar3 & 0x200000) != 0;
    bVar15 = (uVar3 & 0x40000) != 0;
    LOCK();
    bVar7 = in_stack_00000010 < DAT_14d7c2bdc;
    bVar13 = SBORROW1(in_stack_00000010,DAT_14d7c2bdc);
    cVar1 = in_stack_00000010 - DAT_14d7c2bdc;
    bVar10 = cVar1 == '\0';
    bVar8 = (POPCOUNT(cVar1) & 1U) == 0;
    if (bVar10) {
      DAT_14d7c2bdc = (byte)param_1;
    }
    UNLOCK();
    *(undefined8 *)(lVar5 + -8) = unaff_RBX;
    *(undefined8 *)(lVar5 + -0x10) = unaff_RBX;
    *(ulonglong *)(lVar5 + -0x18) =
         (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)bVar12 * 0x400 |
         (ulonglong)bVar11 * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 | (ulonglong)bVar10 * 0x40 |
         (ulonglong)bVar9 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar7 |
         (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
    *(undefined8 *)(lVar5 + -0x20) = unaff_RBP;
    *(undefined8 *)(lVar5 + -0x28) = in_R11;
    *(ulonglong *)(lVar5 + -0x30) =
         (ulonglong)bVar14 * 0x4000 | (ulonglong)bVar13 * 0x800 | (ulonglong)bVar12 * 0x400 |
         (ulonglong)bVar11 * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 | (ulonglong)bVar10 * 0x40 |
         (ulonglong)bVar9 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)bVar7 |
         (ulonglong)bVar16 * 0x200000 | (ulonglong)bVar15 * 0x40000;
    pcVar6 = FUN_14df1f3e4;
    *(undefined8 *)(lVar5 + -0x38) = 0x1620e3eee;
    FUN_14df1f3e4(param_1,param_2);
    uVar3 = *(ulonglong *)(local_res18 + -0x78);
    uVar4 = ~(unaff_R13 + local_res20 * -2);
    *(undefined8 *)(lVar5 + -0x38) = 0x1620e3f89;
    uVar2 = FUN_14d815c29(uVar3,(~(uVar4 & uVar3) + uVar3) - (-1 - uVar4));
    *param_3 = ~*param_3;
    *param_3 = *param_3 & ~uVar3;
    *param_3 = ~*param_3;
    *(undefined8 *)(lVar5 + -0x28) = uVar2;
    *param_3 = (~*param_3 | unaff_R14) + *param_3 + 1 ^ 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + -0x18) = param_4;
    *(code **)(lVar5 + -0x20) = pcVar6;
    *(undefined8 *)(lVar5 + -0x28) = 0x28;
    FUN_15af3f680();
    return;
  }
  FUN_1620e3e52();
  return;
}



// FUNCTION 14da38753 FUN_14da38753 body=168 status=ok
// SIG undefined FUN_14da38753(void)

/* WARNING: Removing unreachable block (ram,0x00014da387f5) */
/* WARNING: Removing unreachable block (ram,0x00014da387fb) */
/* WARNING: Removing unreachable block (ram,0x00014da38805) */
/* WARNING: Removing unreachable block (ram,0x00014da38809) */
/* WARNING: Removing unreachable block (ram,0x00015b6d891d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_14da38753(void)

{
  undefined1 auStack_8 [8];
  
  return auStack_8;
}



// FUNCTION 14da387fb FUN_14da387fb body=437 status=ok
// SIG undefined FUN_14da387fb(void)

void FUN_14da387fb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_1625107bd();
  FUN_156465f21(param_1,local_res10,param_3,param_4);
  thunk_FUN_14da3892a();
  return;
}



// FUNCTION 14da38924 thunk_FUN_14da3892a body=5 status=ok
// SIG undefined thunk_FUN_14da3892a(void)

/* WARNING: Removing unreachable block (ram,0x00015b81a0aa) */
/* WARNING: Removing unreachable block (ram,0x00015b81a0b0) */
/* WARNING: Removing unreachable block (ram,0x00015b81a1c7) */
/* WARNING: Removing unreachable block (ram,0x00015b81a1cb) */
/* WARNING: Removing unreachable block (ram,0x00016282f559) */
/* WARNING: Removing unreachable block (ram,0x00016282f5af) */
/* WARNING: Removing unreachable block (ram,0x00016282f5d6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8acc4) */
/* WARNING: Removing unreachable block (ram,0x00016282f5f0) */
/* WARNING: Removing unreachable block (ram,0x00016282f5f6) */
/* WARNING: Removing unreachable block (ram,0x00016282f673) */
/* WARNING: Removing unreachable block (ram,0x00016282f678) */
/* WARNING: Removing unreachable block (ram,0x00015b81a057) */

undefined8 thunk_FUN_14da3892a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da3892a FUN_14da3892a body=724 status=ok
// SIG undefined FUN_14da3892a(void)

/* WARNING: Removing unreachable block (ram,0x00015b81a0aa) */
/* WARNING: Removing unreachable block (ram,0x00015b81a0b0) */
/* WARNING: Removing unreachable block (ram,0x00015b81a1c7) */
/* WARNING: Removing unreachable block (ram,0x00015b81a1cb) */
/* WARNING: Removing unreachable block (ram,0x00016282f559) */
/* WARNING: Removing unreachable block (ram,0x00016282f5af) */
/* WARNING: Removing unreachable block (ram,0x00016282f5d6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8acc4) */
/* WARNING: Removing unreachable block (ram,0x00016282f5f0) */
/* WARNING: Removing unreachable block (ram,0x00016282f5f6) */
/* WARNING: Removing unreachable block (ram,0x00016282f673) */
/* WARNING: Removing unreachable block (ram,0x00016282f678) */
/* WARNING: Removing unreachable block (ram,0x00015b81a057) */

undefined8 FUN_14da3892a(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da38a94 FUN_14da38a94 body=146 status=ok
// SIG undefined FUN_14da38a94(void)

undefined8 FUN_14da38a94(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14da38b27 FUN_14da38b27 body=150 status=ok
// SIG undefined FUN_14da38b27(void)

/* WARNING: Removing unreachable block (ram,0x00014da38b66) */

void FUN_14da38b27(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_1629b9d5a)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14da38bbd FUN_14da38bbd body=30 status=ok
// SIG undefined FUN_14da38bbd(void)

void FUN_14da38bbd(void)

{
  return;
}



// FUNCTION 14da38c4f FUN_14da38c4f body=239 status=ok
// SIG undefined FUN_14da38c4f(void)

void FUN_14da38c4f(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_1669d8f5a(param_1,param_2,
                -(*(ulonglong *)(unaff_RDI + -0x60) & param_1 ^ 0xffffffffffffffff |
                 *(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14da38ce9 FUN_14da38ce9 body=78 status=ok
// SIG undefined FUN_14da38ce9(void)

undefined8 FUN_14da38ce9(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ushort *unaff_RBP;
  undefined8 *local_res20;
  
  *unaff_RBP = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res20 = 0x573ac10;
  local_res20[-1] = uVar2;
  local_res20[-2] = uVar2;
  local_res20[-1] = &LAB_14da38d39;
  return local_res20[-2];
}



// FUNCTION 14da38d7e FUN_14da38d7e body=164 status=ok
// SIG undefined FUN_14da38d7e(void)

void FUN_14da38d7e(void)

{
  undefined8 unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_14df083b0(unaff_RDI,
                *(ulonglong *)(unaff_R13 + -0x28) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) * -2);
  return;
}



// FUNCTION 14da38fc1 FUN_14da38fc1 body=138 status=ok
// SIG undefined FUN_14da38fc1(void)

/* WARNING: Removing unreachable block (ram,0x00014da38ff1) */
/* WARNING: Removing unreachable block (ram,0x00014da390ea) */
/* WARNING: Removing unreachable block (ram,0x00014d8ed131) */
/* WARNING: Removing unreachable block (ram,0x00014da390f6) */

void FUN_14da38fc1(void)

{
  FUN_14ddb4e34();
  FUN_14d8ed131();
  return;
}



// FUNCTION 14da3904c FUN_14da3904c body=338 status=ok
// SIG undefined FUN_14da3904c(void)

/* WARNING: Removing unreachable block (ram,0x00014da390ea) */
/* WARNING: Removing unreachable block (ram,0x00014d8ed131) */
/* WARNING: Removing unreachable block (ram,0x00014da390f6) */

void FUN_14da3904c(void)

{
  FUN_14d8ed131();
  return;
}



// FUNCTION 14da393cd FUN_14da393cd body=156 status=ok
// SIG undefined FUN_14da393cd(void)

/* WARNING: Removing unreachable block (ram,0x00014da39442) */

void FUN_14da393cd(undefined8 param_1)

{
  FUN_1610a1316(param_1,FUN_1610a1316);
  return;
}



// FUNCTION 14da39633 FUN_14da39633 body=475 status=ok
// SIG undefined FUN_14da39633(void)

/* WARNING: Removing unreachable block (ram,0x00015705fbc7) */
/* WARNING: Removing unreachable block (ram,0x00015705fbd2) */
/* WARNING: Removing unreachable block (ram,0x00015705fc61) */
/* WARNING: Removing unreachable block (ram,0x00015705fc66) */
/* WARNING: Removing unreachable block (ram,0x00015705fc6c) */
/* WARNING: Removing unreachable block (ram,0x0001575d4159) */
/* WARNING: Removing unreachable block (ram,0x00014e19736e) */
/* WARNING: Removing unreachable block (ram,0x00014e197374) */
/* WARNING: Removing unreachable block (ram,0x00014e1973fa) */
/* WARNING: Removing unreachable block (ram,0x00014e197400) */
/* WARNING: Removing unreachable block (ram,0x00015705f9ee) */
/* WARNING: Removing unreachable block (ram,0x00015705fb19) */
/* WARNING: Removing unreachable block (ram,0x00015705fb1f) */
/* WARNING: Removing unreachable block (ram,0x0001611b3398) */
/* WARNING: Removing unreachable block (ram,0x0001611b343a) */
/* WARNING: Removing unreachable block (ram,0x0001611b3440) */
/* WARNING: Removing unreachable block (ram,0x000162a26ed9) */
/* WARNING: Removing unreachable block (ram,0x000162a26f06) */
/* WARNING: Removing unreachable block (ram,0x000162a26f10) */
/* WARNING: Removing unreachable block (ram,0x0001661a52c2) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001661a5346) */
/* WARNING: Removing unreachable block (ram,0x0001661a534c) */
/* WARNING: Removing unreachable block (ram,0x0001661a5357) */
/* WARNING: Removing unreachable block (ram,0x00015705fbcd) */
/* WARNING: Removing unreachable block (ram,0x00014da39810) */

undefined8 FUN_14da39633(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  ulonglong uVar6;
  
  puVar5 = (ulonglong *)(*(ulonglong *)(unaff_R13 + -0x68) ^ unaff_R15);
  FUN_14db89402();
  uVar6 = *puVar5;
  uVar1 = *puVar5;
  *puVar5 = 0;
  *puVar5 = *puVar5 ^ ~((uVar1 - (param_3 | uVar6)) + param_3);
  uVar6 = ~(in_stack_00000008 & 0xffffffffe38a4b42);
  FUN_156c0cbde();
  if (-1 < (longlong)
           (((unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 + -0x38)) +
           (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2)) {
    uVar2 = FUN_14e1972d9();
    return uVar2;
  }
  uVar1 = *(ulonglong *)(unaff_R13 + -0x78);
  uVar3 = ~unaff_R15 & ~uVar1 | unaff_R15;
  uVar4 = (0xffffffffffffffff - uVar3 & uVar3) + *(longlong *)(unaff_R13 + -0x28);
  uVar2 = (*(code *)0x1610f311e)
                    (~((~(0xffffffffffffffff - unaff_R15 & uVar1) + uVar1) -
                       ~(0xffffffffffffffff - unaff_R15) & uVar3),
                     ~((~unaff_R15 | uVar4) & (~uVar4 | unaff_R15)),
                     ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15) &
                     (*(ulonglong *)(unaff_R13 + -0x88) | unaff_R15),0x1610f311e,uVar6);
  return uVar2;
}



// FUNCTION 14da39810 thunk_FUN_14da39816 body=5 status=ok
// SIG undefined thunk_FUN_14da39816(void)

void thunk_FUN_14da39816(void)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  
  FUN_1619e4002();
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  pcVar3 = FUN_162c0f989;
  FUN_162c0f989();
  uVar4 = -((longlong)pcVar3 - *(longlong *)(lVar1 + -0x88));
  uVar2 = *(ulonglong *)(lVar1 + -0x38);
  FUN_1655be15c((uVar2 - 8) + ((uVar2 | 7) - 7) * -2,&stack0xffffffffffffffe0,
                ~(uVar4 & 0xfffffffffffffff8) & (uVar4 | 0xfffffffffffffff8));
  return;
}



// FUNCTION 14da39816 FUN_14da39816 body=464 status=ok
// SIG undefined FUN_14da39816(void)

void FUN_14da39816(void)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  
  FUN_1619e4002();
  lVar1 = *(longlong *)(unaff_R13 + -0xa0);
  pcVar3 = FUN_162c0f989;
  FUN_162c0f989();
  uVar4 = -((longlong)pcVar3 - *(longlong *)(lVar1 + -0x88));
  uVar2 = *(ulonglong *)(lVar1 + -0x38);
  FUN_1655be15c((uVar2 - 8) + ((uVar2 | 7) - 7) * -2,&stack0xffffffffffffffe0,
                ~(uVar4 & 0xfffffffffffffff8) & (uVar4 | 0xfffffffffffffff8));
  return;
}



// FUNCTION 14da39f20 FUN_14da39f20 body=35 status=ok
// SIG undefined FUN_14da39f20(void)

void FUN_14da39f20(void)

{
  (*(code *)0x15782b45c)();
  return;
}



// FUNCTION 14da39fa5 FUN_14da39fa5 body=22 status=ok
// SIG undefined FUN_14da39fa5(void)

void FUN_14da39fa5(void)

{
  return;
}



// FUNCTION 14da3a030 FUN_14da3a030 body=86 status=ok
// SIG undefined FUN_14da3a030(void)

void FUN_14da3a030(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  ushort *unaff_R13;
  longlong local_res20;
  
  *unaff_R13 = ~*unaff_R13;
  *(undefined8 *)(local_res20 + -8) = in_RAX;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBP;
  *(undefined1 **)(local_res20 + -8) = &LAB_14da3a0a5;
                    /* WARNING: Could not recover jumptable at 0x00014da3a084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_res20 + -0x10))();
  return;
}



// FUNCTION 14da3a280 FUN_14da3a280 body=226 status=ok
// SIG undefined FUN_14da3a280(void)

undefined8 FUN_14da3a280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(undefined8 *)(local_res18 + -0x18) = param_3;
  *(undefined8 *)(local_res18 + -0x20) = param_2;
  *(undefined8 *)(local_res18 + -0x28) = 0x14da3a328;
  uVar1 = FUN_1623966f3(local_res8,FUN_1623966f3,*(undefined8 *)(local_res18 + -8));
  *(undefined8 *)(local_res18 + -0x28) = uVar1;
  *(undefined8 *)(local_res18 + -0x30) = unaff_RSI;
  uVar1 = *(undefined8 *)(local_res18 + -0x28);
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(unaff_R12 + -0x58);
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(unaff_R12 + -0x78);
  *(undefined **)(local_res18 + -0x30) = &DAT_14da3a364;
  return uVar1;
}



// FUNCTION 14da3a432 FUN_14da3a432 body=167 status=ok
// SIG undefined FUN_14da3a432(void)

void FUN_14da3a432(void)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong unaff_R12;
  longlong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R12 + unaff_R15);
  *(ulonglong *)(unaff_R12 + unaff_R15) = *(ulonglong *)(unaff_R12 + unaff_R15) | 0xfffffffff4234790
  ;
  *(ulonglong *)(unaff_R12 + unaff_R15) =
       ~(~(uVar1 & 0xfffffffff4234790) & *(ulonglong *)(unaff_R12 + unaff_R15));
  *(longlong *)(unaff_R12 + unaff_R15) = *(longlong *)(unaff_R12 + unaff_R15) - in_RAX;
  *(longlong *)(unaff_R12 + unaff_R15) = -*(longlong *)(unaff_R12 + unaff_R15);
  (*(code *)&LAB_14d8188df)(&stack0x00000028);
  return;
}



// FUNCTION 14da3a4da FUN_14da3a4da body=288 status=ok
// SIG undefined FUN_14da3a4da(void)

/* WARNING: Removing unreachable block (ram,0x00014da3a5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14da3a4da(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong *unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined2 in_R10W;
  undefined6 in_register_00000092;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  ulonglong uVar5;
  ulonglong unaff_retaddr;
  longlong in_stack_00000008;
  ulonglong local_res18;
  
  *(undefined8 *)(unaff_R15 - 0x80) = 0;
  *(ulonglong *)(unaff_R15 - 0x80) = ~*(ulonglong *)(unaff_R15 - 0x80);
  *(longlong *)(unaff_R15 - 0x80) = *(longlong *)(unaff_R15 - 0x80) + 2;
  *(longlong *)(unaff_R15 - 0x80) = -*(longlong *)(unaff_R15 - 0x80);
  *(longlong *)(unaff_R15 - 0x80) =
       *(longlong *)(unaff_R15 - 0x80) - ~(~(param_4 & unaff_R13) & (param_4 | unaff_R13));
  param_3 = param_3 ^ unaff_R13;
  *(ulonglong *)(unaff_R15 - 0x78) = param_3;
  FUN_162582d87();
  uVar2 = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = *unaff_RBP | unaff_retaddr;
  *unaff_RBP = (~unaff_retaddr | uVar2) & *unaff_RBP ^ 0xffffffffffffffff;
  uVar2 = (~unaff_retaddr | local_res18) + unaff_retaddr + 1;
  if ((uVar2 & 0x7fffffffffffffff) == 0) {
    lVar3 = local_res18 + unaff_retaddr + uVar2 * -2;
    *(ulonglong *)(lVar3 + -8) = param_3;
    pcVar4 = FUN_156365a34;
    *(undefined8 *)(lVar3 + -0x10) = 0x160fc8088;
    uRam000000014d7bdeaf = FUN_156365a34(in_stack_00000008);
    uVar2 = *(ulonglong *)(lVar3 + -8);
    _FUN_162582d87 = (_FUN_162582d87 | 0x100) - 0x100;
    uVar5 = *(ulonglong *)(lVar3 + 0x10);
    lVar3 = *(longlong *)(lVar3 + 0x18);
                    /* WARNING (jumptable): Read-only address (ram,0x00014d7bdeaf) is written */
                    /* WARNING: Read-only address (ram,0x00014d7bdeaf) is written */
    LOCK();
    UNLOCK();
    *(undefined8 *)(lVar3 + -8) = unaff_RSI;
    *(undefined8 *)(lVar3 + -0x10) = unaff_RSI;
    *(ulonglong *)(lVar3 + -0x18) =
         (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
         (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(lVar3 + -0x20) = 0x11b21d63;
    *(longlong *)(lVar3 + -0x20) = *(longlong *)(lVar3 + -0x20) + -0xd67d85b;
    uVar5 = *(ulonglong *)(lVar3 + -0x18);
    *(undefined8 *)(lVar3 + -8) = 0x44a4508;
    *(ulonglong *)(lVar3 + -0x101f8) =
         (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
         (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
    *(ulonglong *)(lVar3 + -0x10200) = CONCAT62(in_register_00000092,in_R10W);
    *(undefined8 *)(lVar3 + -0x10208) = unaff_R14;
    *(undefined8 *)(lVar3 + -0x10210) = unaff_RBX;
    *(undefined8 *)(lVar3 + -0x10218) = *(undefined8 *)(lVar3 + -0x10);
    lVar1 = *(longlong *)(lVar3 + -0x10210);
    *(ulonglong *)(lVar3 + -0x10210) = uVar2;
    *(undefined8 *)(lVar3 + -0x10218) = 0x165c715a3;
    FUN_1651b2788();
    *(undefined8 *)(lVar3 + -0x10218) = DAT_1651b2750;
    FUN_156d5694c(DAT_1651b2710 + unaff_R15 + (DAT_1651b2710 & unaff_R15) * -2,DAT_1651b2760,
                  ~((ulonglong)pcVar4 & unaff_R15) & lVar1 - in_stack_00000008);
    return;
  }
  FUN_160fc800e();
  return;
}



// FUNCTION 14da3a5fc FUN_14da3a5fc body=106 status=ok
// SIG undefined FUN_14da3a5fc(void)

void FUN_14da3a5fc(undefined8 param_1)

{
  longlong unaff_RDI;
  
  (*(code *)&DAT_1613dd4b3)(param_1,*(undefined8 *)(unaff_RDI + -0x68));
  return;
}



// FUNCTION 14da3a688 FUN_14da3a688 body=96 status=ok
// SIG undefined FUN_14da3a688(void)

/* WARNING: Removing unreachable block (ram,0x00014da3a6e9) */

void FUN_14da3a688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *unaff_R13;
  
  thunk_FUN_1573f2e58(~(~(*unaff_R13 & 0x9b) & 0x9b - (-0x65 - (*unaff_R13 | 0x9b))),param_2,param_3
                     );
  return;
}



// FUNCTION 14da3a6e9 FUN_14da3a6e9 body=165 status=ok
// SIG undefined FUN_14da3a6e9(void)

void FUN_14da3a6e9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  undefined1 local_res18 [8];
  ulonglong in_stack_00000020;
  
  FUN_16600ff7c(param_1,local_res18,param_3,param_4,
                (~in_stack_00000020 | ~unaff_R15) & (in_stack_00000020 | unaff_R15));
  return;
}


