// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dca9545 FUN_14dca9545 body=590 status=ok
// SIG undefined FUN_14dca9545(void)

/* WARNING: Removing unreachable block (ram,0x00015b9bbae2) */
/* WARNING: Removing unreachable block (ram,0x00015b9bbae8) */
/* WARNING: Removing unreachable block (ram,0x00015b9bbaed) */
/* WARNING: Removing unreachable block (ram,0x00014dca95b3) */
/* WARNING: Removing unreachable block (ram,0x00014dca96f7) */
/* WARNING: Removing unreachable block (ram,0x00014dca9831) */

void FUN_14dca9545(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_R12;
  undefined4 unaff_R15D;
  undefined8 local_20;
  
  uVar2 = *(ulonglong *)(param_1 + -0x78) ^ unaff_RBX;
  FUN_164bfedc3();
  FUN_16508d0b1(FUN_16508d0b1,uVar2);
  uVar1 = 4;
  local_20 = CONCAT44(0xb85a4d9b,unaff_R15D);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x88);
  FUN_165880a6a(4,0xfffffffffd19fa50);
  FUN_162d8bb79();
  if (*(longlong *)(((~(~uVar2 & local_20) + local_20) - uVar2) + -0x98) != 0) {
    FUN_1647ec852(uVar1);
    thunk_FUN_15b642ca5(param_1);
    return;
  }
  FUN_15b9bba51();
  return;
}



// FUNCTION 14dca9798 FUN_14dca9798 body=344 status=ok
// SIG undefined FUN_14dca9798(void)

/* WARNING: Removing unreachable block (ram,0x00015b9bbae8) */
/* WARNING: Removing unreachable block (ram,0x00015b9bbae2) */
/* WARNING: Removing unreachable block (ram,0x00015b9bbaed) */
/* WARNING: Removing unreachable block (ram,0x00014dca9831) */

void FUN_14dca9798(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x98) != 0) {
    FUN_1647ec852(param_1,param_2,param_3,param_4);
    thunk_FUN_15b642ca5(unaff_RSI);
    return;
  }
  FUN_15b9bba51();
  return;
}



// FUNCTION 14dca9986 FUN_14dca9986 body=170 status=ok
// SIG undefined FUN_14dca9986(void)

void FUN_14dca9986(void)

{
  FUN_161ba8440();
  return;
}



// FUNCTION 14dca9b59 FUN_14dca9b59 body=27 status=ok
// SIG undefined FUN_14dca9b59(void)

void FUN_14dca9b59(void)

{
  return;
}



// FUNCTION 14dca9c08 FUN_14dca9c08 body=19 status=ok
// SIG undefined FUN_14dca9c08(void)

void FUN_14dca9c08(void)

{
  return;
}



// FUNCTION 14dca9fce FUN_14dca9fce body=70 status=ok
// SIG undefined FUN_14dca9fce(void)

void FUN_14dca9fce(void)

{
  ulonglong in_RAX;
  ulonglong uStackX_20;
  
  FUN_161de96dd((~in_RAX + uStackX_20) - (~in_RAX & uStackX_20));
  return;
}



// FUNCTION 14dcaa1bc FUN_14dcaa1bc body=101 status=ok
// SIG undefined FUN_14dcaa1bc(void)

void FUN_14dcaa1bc(void)

{
  longlong unaff_retaddr;
  
  if (-1 < unaff_retaddr) {
    FUN_16673056f();
    return;
  }
  return;
}



// FUNCTION 14dcaa229 thunk_FUN_14dcaa22f body=5 status=ok
// SIG undefined thunk_FUN_14dcaa22f(void)

void thunk_FUN_14dcaa22f(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x14e16fe83)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,0x694ec055,
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14dcaa22f FUN_14dcaa22f body=158 status=ok
// SIG undefined FUN_14dcaa22f(void)

void FUN_14dcaa22f(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  (*(code *)0x14e16fe83)
            (*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,0x694ec055,
             *(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  return;
}



// FUNCTION 14dcaa57e FUN_14dcaa57e body=147 status=ok
// SIG undefined FUN_14dcaa57e(void)

undefined8
FUN_14dcaa57e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong unaff_R15;
  ulonglong local_res8;
  
  uVar1 = (uint)local_res8;
  local_res8 = (ulonglong)(uint)local_res8;
  if ((unaff_R15 & ((ulonglong)(uVar1 >> 1) | local_res8 << 0x3f)) == 0) {
    return in_RAX;
  }
  FUN_1651432ca(param_1,param_2,FUN_1651432ca,param_4);
  uVar2 = FUN_14d7a9a62();
  return uVar2;
}



// FUNCTION 14dcaa865 FUN_14dcaa865 body=21 status=ok
// SIG undefined FUN_14dcaa865(void)

void FUN_14dcaa865(void)

{
  return;
}



// FUNCTION 14dcaa914 FUN_14dcaa914 body=125 status=ok
// SIG undefined FUN_14dcaa914(void)

void FUN_14dcaa914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1669f68e8(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcaad41 FUN_14dcaad41 body=265 status=ok
// SIG undefined FUN_14dcaad41(void)

void FUN_14dcaad41(ulonglong param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15b98997d((~(param_1 | unaff_R15) | 0xffffffffffffffff - (param_1 & unaff_R15)) +
                (param_1 | unaff_R15) + 1,
                -1 - ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x28)) &
                     (~*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15)));
  FUN_161af8510();
  return;
}



// FUNCTION 14dcaaef0 FUN_14dcaaef0 body=139 status=ok
// SIG undefined FUN_14dcaaef0(void)

void FUN_14dcaaef0(void)

{
  FUN_14df1b249();
  return;
}



// FUNCTION 14dcaaf7d FUN_14dcaaf7d body=152 status=ok
// SIG undefined FUN_14dcaaf7d(void)

void FUN_14dcaaf7d(void)

{
  return;
}



// FUNCTION 14dcab221 FUN_14dcab221 body=146 status=ok
// SIG undefined FUN_14dcab221(void)

void FUN_14dcab221(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&LAB_1625b65ca)(&LAB_1625b65ca,param_2,param_3);
  return;
}



// FUNCTION 14dcab40b FUN_14dcab40b body=113 status=ok
// SIG undefined FUN_14dcab40b(void)

void FUN_14dcab40b(void)

{
  return;
}



// FUNCTION 14dcab47c FUN_14dcab47c body=162 status=ok
// SIG undefined FUN_14dcab47c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcab4fd) */
/* WARNING: Removing unreachable block (ram,0x00014dcab508) */
/* WARNING: Removing unreachable block (ram,0x00014dcab514) */

void FUN_14dcab47c(void)

{
  return;
}



// FUNCTION 14dcab6ad thunk_FUN_14dcab6b3 body=5 status=ok
// SIG undefined thunk_FUN_14dcab6b3(void)

void thunk_FUN_14dcab6b3(void)

{
  FUN_166b056e7();
  return;
}



// FUNCTION 14dcab6b3 FUN_14dcab6b3 body=132 status=ok
// SIG undefined FUN_14dcab6b3(void)

void FUN_14dcab6b3(void)

{
  FUN_166b056e7();
  return;
}



// FUNCTION 14dcab93d FUN_14dcab93d body=46 status=ok
// SIG undefined FUN_14dcab93d(void)

void FUN_14dcab93d(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcaba6c FUN_14dcaba6c body=172 status=ok
// SIG undefined FUN_14dcaba6c(void)

void FUN_14dcaba6c(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  
  (*(code *)0x1658c3181)(param_1,(unaff_RSI - (unaff_RBP | unaff_RSI)) + param_2);
  return;
}



// FUNCTION 14dcabc7c FUN_14dcabc7c body=184 status=ok
// SIG undefined FUN_14dcabc7c(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcabc7c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1620a6327)(0xfffffffffffffff8,param_2,0x1620a6327);
  return;
}



// FUNCTION 14dcabd34 FUN_14dcabd34 body=148 status=ok
// SIG undefined FUN_14dcabd34(void)

void FUN_14dcabd34(void)

{
  FUN_14de94d36(FUN_14de94d36);
  return;
}



// FUNCTION 14dcabdc9 FUN_14dcabdc9 body=483 status=ok
// SIG undefined FUN_14dcabdc9(void)

/* WARNING: Removing unreachable block (ram,0x0001665ba82a) */
/* WARNING: Removing unreachable block (ram,0x0001665ba830) */
/* WARNING: Removing unreachable block (ram,0x00014dcabe64) */
/* WARNING: Removing unreachable block (ram,0x00014dcabefc) */
/* WARNING: Removing unreachable block (ram,0x00014dcabf01) */
/* WARNING: Removing unreachable block (ram,0x00014dcabf07) */
/* WARNING: Removing unreachable block (ram,0x00014e1debfd) */
/* WARNING: Removing unreachable block (ram,0x00014e1dec78) */
/* WARNING: Removing unreachable block (ram,0x00014e1dec7d) */
/* WARNING: Removing unreachable block (ram,0x0001615b8664) */
/* WARNING: Removing unreachable block (ram,0x00014e1dec83) */
/* WARNING: Removing unreachable block (ram,0x0001611360f5) */
/* WARNING: Removing unreachable block (ram,0x00016113605e) */
/* WARNING: Removing unreachable block (ram,0x0001611360ef) */
/* WARNING: Removing unreachable block (ram,0x0001567b35ef) */
/* WARNING: Removing unreachable block (ram,0x00014dcabf12) */
/* WARNING: Removing unreachable block (ram,0x000156775af2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcabdc9(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 in_AL;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R15;
  longlong unaff_retaddr;
  ushort local_8;
  
  uVar5 = -(unaff_retaddr - param_2) ^ unaff_RBP;
  if (((~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x58)) &
      (0xffffffffffffffff - *(ulonglong *)(unaff_RSI + -0x58) | unaff_RBP)) != 0xffffffffffffffff) {
    uVar4 = FUN_161135fb7();
    return uVar4;
  }
  if ((longlong)(~*(ulonglong *)(unaff_RSI + -0xa0) | ~unaff_RBP) < 0) {
    uVar4 = FUN_156775a70();
    return uVar4;
  }
  uVar3 = (ushort)*(undefined8 *)(unaff_RSI + -8);
  uVar2 = uVar3 | (ushort)unaff_RBP;
  local_8 = (~uVar2 | ~(uVar3 & (ushort)unaff_RBP)) + uVar2 + 1;
  uVar1 = ~(*(ulonglong *)(unaff_RSI + -0x88) & unaff_RBP) &
          (*(ulonglong *)(unaff_RSI + -0x88) | unaff_RBP);
  LOCK();
  UNLOCK();
  DAT_14d7c2457 = in_AL;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x18) = 0x10224ba;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  if (((~(local_8 | 0xfeff) - 0x100) + local_8 & 0x40) == 0) {
    uVar4 = FUN_165d9c6a6(uVar5,0,param_3);
    return uVar4;
  }
  uVar4 = FUN_165d9c6a6(uVar5,0,param_3);
  return uVar4;
}



// FUNCTION 14dcabfaf FUN_14dcabfaf body=99 status=ok
// SIG undefined FUN_14dcabfaf(void)

void FUN_14dcabfaf(void)

{
  FUN_1565036e1();
  return;
}



// FUNCTION 14dcac013 FUN_14dcac013 body=175 status=ok
// SIG undefined FUN_14dcac013(void)

void FUN_14dcac013(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(in_RAX + -8) = unaff_RBX;
  *(longlong *)(in_RAX + -0x10) = param_3;
  *(undefined8 *)(in_RAX + -0x18) = 0;
  *(longlong *)(in_RAX + -0x18) = *(longlong *)(in_RAX + -0x18) + param_3;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  *(undefined **)(in_RAX + -0x20) = &DAT_164be3d8c;
  *(undefined8 *)(in_RAX + -0x28) = unaff_retaddr;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R12;
  FUN_164be3d10(param_1,param_2,*(undefined8 *)(in_RAX + -8));
  return;
}



// FUNCTION 14dcac213 FUN_14dcac213 body=130 status=ok
// SIG undefined FUN_14dcac213(void)

void FUN_14dcac213(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_R12;
  
  (*(code *)&LAB_1621654fe)
            (~(-unaff_RBP & in_RAX) & (~in_RAX & -unaff_RBP | in_RAX),
             ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) &
              (~*(ulonglong *)(unaff_R12 + -0x78) | in_RAX)));
  return;
}



// FUNCTION 14dcac31c FUN_14dcac31c body=137 status=ok
// SIG undefined FUN_14dcac31c(void)

void FUN_14dcac31c(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res10 [24];
  
  FUN_165c490e2(param_1,param_2,local_res10);
  return;
}



// FUNCTION 14dcac444 FUN_14dcac444 body=55 status=ok
// SIG undefined FUN_14dcac444(void)

void FUN_14dcac444(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_15b3d5987(param_1,param_2,uStackX_8,unaff_retaddr);
  return;
}



// FUNCTION 14dcac58e FUN_14dcac58e body=574 status=ok
// SIG undefined FUN_14dcac58e(void)

/* WARNING: Removing unreachable block (ram,0x00014dcac688) */
/* WARNING: Removing unreachable block (ram,0x00014dcac693) */
/* WARNING: Removing unreachable block (ram,0x00014dcac712) */
/* WARNING: Removing unreachable block (ram,0x00014dcac71d) */
/* WARNING: Removing unreachable block (ram,0x00014dcac723) */
/* WARNING: Removing unreachable block (ram,0x00014dbc5aac) */
/* WARNING: Removing unreachable block (ram,0x00014dcac68e) */
/* WARNING: Removing unreachable block (ram,0x00014dcac619) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcac58e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  param_2 = param_2 + local_res20 * -2;
  puVar1 = (undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -0x10) = unaff_retaddr;
  *puVar1 = 0x53942df0;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_165055583();
    return;
  }
  FUN_165055583();
  return;
}



// FUNCTION 14dcac907 FUN_14dcac907 body=149 status=ok
// SIG undefined FUN_14dcac907(void)

void FUN_14dcac907(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1570cfada)
            (param_1,0x1570cfada,
             ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) &
              (~*(ulonglong *)(unaff_RDI + -0x70) | param_1)));
  return;
}



// FUNCTION 14dcaca37 FUN_14dcaca37 body=133 status=ok
// SIG undefined FUN_14dcaca37(void)

void FUN_14dcaca37(ulonglong param_1)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RDI;
  
  *(ulonglong *)(&stack0x00000000 + in_RAX) = param_1;
  lVar1 = *(ulonglong *)(unaff_RDI + -0x60) + param_1 +
          (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  (*(code *)0x14da7d423)
            ((char)param_1,lVar1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x70)) + param_1 + 1),
             lVar1);
  return;
}



// FUNCTION 14dcacabe FUN_14dcacabe body=104 status=ok
// SIG undefined FUN_14dcacabe(void)

void FUN_14dcacabe(LPVOID param_1)

{
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RDI;
  *(undefined8 *)(local_res18 + -0x10) = in_R11;
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -8) = 0x137b606a;
  *(ulonglong *)(local_res18 + -8) = *(ulonglong *)(local_res18 + -8) ^ 0x137b606a;
  *(undefined8 *)(local_res18 + -8) = *(undefined8 *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = (longlong)(&LAB_14dcacb42 + *(longlong *)(local_res18 + -8));
                    /* WARNING: Could not recover jumptable at 0x00014dcacb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoTaskMemFree(param_1);
  return;
}



// FUNCTION 14dcacb8c FUN_14dcacb8c body=120 status=ok
// SIG undefined FUN_14dcacb8c(void)

void FUN_14dcacb8c(ulonglong param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  FUN_1660478f6(param_1,FUN_1660478f6,param_2 + *(longlong *)(unaff_RDI + -0x70) ^ param_1);
  FUN_165b808ec();
  return;
}



// FUNCTION 14dcacc04 FUN_14dcacc04 body=152 status=ok
// SIG undefined FUN_14dcacc04(void)

void FUN_14dcacc04(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_165b808ec(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1);
  return;
}



// FUNCTION 14dcacd4c FUN_14dcacd4c body=123 status=ok
// SIG undefined FUN_14dcacd4c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcacd5e) */
/* WARNING: Removing unreachable block (ram,0x00014dcacdb7) */

ulonglong FUN_14dcacd4c(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80);
  return ~((param_1 - (uVar1 | param_1)) + uVar1) & (uVar1 | param_1);
}



// FUNCTION 14dcacdc7 FUN_14dcacdc7 body=11 status=ok
// SIG undefined FUN_14dcacdc7(void)

void FUN_14dcacdc7(void)

{
  return;
}



// FUNCTION 14dcacdd3 FUN_14dcacdd3 body=598 status=ok
// SIG undefined FUN_14dcacdd3(void)

/* WARNING: Removing unreachable block (ram,0x00016679071c) */
/* WARNING: Removing unreachable block (ram,0x00014dcace77) */
/* WARNING: Removing unreachable block (ram,0x00014dcaceba) */
/* WARNING: Removing unreachable block (ram,0x00014dcacec2) */
/* WARNING: Removing unreachable block (ram,0x00014dcacf16) */
/* WARNING: Removing unreachable block (ram,0x00014dcacf1c) */
/* WARNING: Removing unreachable block (ram,0x00016624836d) */

void FUN_14dcacdd3(undefined8 param_1)

{
  longlong unaff_R13;
  
  FUN_160f2f5cb(param_1,*(undefined8 *)(unaff_R13 + -0x40),0xb8f46137,FUN_160f2f5cb);
  return;
}



// FUNCTION 14dcacfa2 FUN_14dcacfa2 body=282 status=ok
// SIG undefined FUN_14dcacfa2(void)

void FUN_14dcacfa2(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  byte in_TF;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong local_8;
  
  local_8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
            (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
            (ulonglong)(in_AC & 1) * 0x40000;
  puVar2 = &local_8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar2 = (ulonglong *)register0x00000020;
  }
  *(undefined8 *)((longlong)puVar2 + -8) = unaff_R12;
  *(undefined8 *)((longlong)puVar2 + -8) = param_2;
  uVar1 = *(undefined8 *)((longlong)puVar2 + -8);
  *(undefined8 *)((longlong)puVar2 + -8) = 0x14dcad02e;
  FUN_14d85b338(param_1,uVar1);
  uVar3 = unaff_RBX + *(longlong *)(unaff_RDI + -0x30);
  *(undefined4 *)((longlong)puVar2 + -8) = 0x37dcfb3f;
  *(undefined4 *)((longlong)puVar2 + -4) = 0;
  *(ulonglong *)((longlong)puVar2 + -8) = ~((~param_1 | uVar3) & (~uVar3 | param_1));
  *(undefined8 *)((longlong)puVar2 + -0x10) = unaff_RSI;
  FUN_15afb3eca();
  return;
}



// FUNCTION 14dcad156 thunk_FUN_14dcad15c body=5 status=ok
// SIG undefined thunk_FUN_14dcad15c(void)

void thunk_FUN_14dcad15c(undefined8 param_1)

{
  FUN_15b271e72(param_1);
  return;
}



// FUNCTION 14dcad15c FUN_14dcad15c body=558 status=ok
// SIG undefined FUN_14dcad15c(void)

void FUN_14dcad15c(undefined8 param_1)

{
  FUN_15b271e72(param_1);
  return;
}



// FUNCTION 14dcad3cd FUN_14dcad3cd body=283 status=ok
// SIG undefined FUN_14dcad3cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcad45e) */

void FUN_14dcad3cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  
  *(undefined8 *)(in_RAX + -8) = param_2;
  *(undefined8 *)(in_RAX + -0x10) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x20) = unaff_retaddr;
  *(undefined4 *)(in_RAX + -0x20) = 0xbed2378;
  *(undefined4 *)(in_RAX + -0x1c) = 0;
  *(undefined8 *)(in_RAX + -0x20) = param_4;
  uVar1 = *(undefined8 *)(in_RAX + -0x20);
  *(undefined8 *)(in_RAX + -0x18) = param_1;
  uVar2 = *(undefined8 *)(in_RAX + -0x18);
  *(undefined8 *)(in_RAX + -0x18) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x20) = uVar2;
  *(undefined8 *)(in_RAX + -0x20) = *(undefined8 *)(in_RAX + -0x20);
  *(undefined8 *)(in_RAX + -0x18) = unaff_R12;
  (*(code *)0x16668b2e2)(*(undefined8 *)(in_RAX + -0x20),0x16668b2e2,param_3,uVar1);
  return;
}



// FUNCTION 14dcad45e FUN_14dcad45e body=163 status=ok
// SIG undefined FUN_14dcad45e(void)

void FUN_14dcad45e(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_15b261ca9(param_1,FUN_15b261ca9,-~*(ulonglong *)(unaff_RDI + -0x70) - 1 ^ param_1,
                (~in_RAX + param_4) - ~unaff_RBP & (~param_4 | param_1) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dcad502 FUN_14dcad502 body=10 status=ok
// SIG undefined FUN_14dcad502(void)

void FUN_14dcad502(void)

{
  return;
}



// FUNCTION 14dcad784 FUN_14dcad784 body=145 status=ok
// SIG undefined FUN_14dcad784(void)

/* WARNING: Removing unreachable block (ram,0x00014dcad810) */
/* WARNING: Removing unreachable block (ram,0x00014dcad816) */
/* WARNING: Removing unreachable block (ram,0x000165232d5a) */
/* WARNING: Removing unreachable block (ram,0x000165232d8c) */

undefined8 FUN_14dcad784(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165232d5a();
  return uVar1;
}



// FUNCTION 14dcad816 FUN_14dcad816 body=70 status=ok
// SIG undefined FUN_14dcad816(void)

undefined8 FUN_14dcad816(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *local_res18;
  
  pcVar1 = (code *)swi(0x2e);
  uVar2 = (*pcVar1)();
  *local_res18 = 0x188a158;
  local_res18[-1] = uVar2;
  local_res18[-2] = uVar2;
  local_res18[-1] = FUN_14d85d504;
  return local_res18[-2];
}



// FUNCTION 14dcad8bc FUN_14dcad8bc body=337 status=ok
// SIG undefined FUN_14dcad8bc(void)

/* WARNING: Removing unreachable block (ram,0x00014dcad942) */
/* WARNING: Removing unreachable block (ram,0x00014dcad965) */

void FUN_14dcad8bc(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68);
  thunk_FUN_1628a100a(param_1,~((~(~uVar1 | param_1) | ~uVar1 & 0xffffffffffffffff - param_1 | uVar1
                                ) + (~uVar1 | param_1) + 1),param_3);
  return;
}



// FUNCTION 14dcadb1c FUN_14dcadb1c body=28 status=ok
// SIG undefined FUN_14dcadb1c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcadb1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcade2c FUN_14dcade2c body=128 status=ok
// SIG undefined FUN_14dcade2c(void)

void FUN_14dcade2c(void)

{
  (*(code *)0x1567277bd)();
  return;
}



// FUNCTION 14dcadeae FUN_14dcadeae body=118 status=ok
// SIG undefined FUN_14dcadeae(void)

void FUN_14dcadeae(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R12;
  
  (*(code *)&LAB_1651a2ac1)
            (param_1,~(((~unaff_RBP + param_2) - (~unaff_RBP & param_2)) + unaff_RBP + 1) &
                     (unaff_R12 | unaff_RBP));
  return;
}



// FUNCTION 14dcadf2b FUN_14dcadf2b body=318 status=ok
// SIG undefined FUN_14dcadf2b(void)

/* WARNING: Instruction at (ram,0x000161d8b36f) overlaps instruction at (ram,0x000161d8b36e)
    */
/* WARNING: Removing unreachable block (ram,0x0001627b11f8) */
/* WARNING: Removing unreachable block (ram,0x000165dbe04a) */
/* WARNING: Removing unreachable block (ram,0x000165dbe050) */
/* WARNING: Removing unreachable block (ram,0x000164c31249) */
/* WARNING: Removing unreachable block (ram,0x000161d8b36e) */
/* WARNING: Removing unreachable block (ram,0x00014dcadfc1) */
/* WARNING: Removing unreachable block (ram,0x000161d8b3ae) */
/* WARNING: Removing unreachable block (ram,0x0001627b1299) */

longlong FUN_14dcadf2b(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  byte unaff_BPL;
  longlong unaff_RDI;
  byte in_R9B;
  code *pcVar5;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStackX_20;
  
  uVar4 = -~*(ulonglong *)(unaff_R13 + -0x78) - 1;
  if (-1 < (longlong)(*(longlong *)(unaff_R13 + -0x28) + unaff_R15)) {
    lVar3 = FUN_1627b11ac();
    return lVar3;
  }
  if ((unaff_BPL < in_R9B) && (in_R9B < unaff_BPL)) {
    uVar1 = uStackX_20 ^ unaff_R15;
    puVar2 = (ulonglong *)(uVar1 - 8);
    *puVar2 = ~(uVar4 & unaff_R15) & (uVar4 | unaff_R15);
    *(ulonglong *)(uVar1 - 0x10) = *puVar2;
    *puVar2 = (ulonglong)&DAT_165bbf51d;
    *(code **)(uVar1 - 0x10) = LoadLibraryA_exref;
    return unaff_RDI - in_RAX;
  }
  uVar4 = *(ulonglong *)(unaff_R13 + -8);
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  pcVar5 = FUN_166476c84;
  lVar3 = FUN_166476c84();
  *(ulonglong *)(lVar3 + 8) = (uVar1 ^ unaff_R15) + *(longlong *)(lVar3 + 8);
  FUN_14e05591b(uVar4 | (ulonglong)pcVar5);
  lVar3 = thunk_FUN_1647711d6();
  return lVar3;
}



// FUNCTION 14dcae06e FUN_14dcae06e body=164 status=ok
// SIG undefined FUN_14dcae06e(void)

/* WARNING: Removing unreachable block (ram,0x000161263b3e) */
/* WARNING: Removing unreachable block (ram,0x000161263bc0) */
/* WARNING: Removing unreachable block (ram,0x000161263bc6) */
/* WARNING: Removing unreachable block (ram,0x0001629e85ec) */
/* WARNING: Removing unreachable block (ram,0x000161263b38) */
/* WARNING: Removing unreachable block (ram,0x00014dcae10c) */
/* WARNING: Removing unreachable block (ram,0x00014dcae112) */

void FUN_14dcae06e(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RDI;
  ulonglong in_stack_00000010;
  longlong lStackX_18;
  
  FUN_1625a89af(in_stack_00000010,param_2);
  FUN_165f178a6();
  if (lStackX_18 != 0) {
    FUN_165c77102(0x3d,*(undefined8 *)((unaff_RDI ^ in_stack_00000010) + 0x28));
    return;
  }
  FUN_15b2c2953();
  return;
}



// FUNCTION 14dcae112 FUN_14dcae112 body=172 status=ok
// SIG undefined FUN_14dcae112(void)

void FUN_14dcae112(undefined8 param_1)

{
  FUN_156c69d0c(param_1);
  return;
}



// FUNCTION 14dcae6a2 FUN_14dcae6a2 body=149 status=ok
// SIG undefined FUN_14dcae6a2(void)

/* WARNING: Removing unreachable block (ram,0x00014dcae6fa) */

void FUN_14dcae6a2(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  local_res8 = (ulonglong)(0x363ff1c - ~(uint)local_res8);
  (*(code *)0x156527959)(0x156527959,local_res8 + *(longlong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dcae8d9 FUN_14dcae8d9 body=59 status=ok
// SIG undefined FUN_14dcae8d9(void)

void FUN_14dcae8d9(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dcae985 thunk_FUN_14dcae98b body=5 status=ok
// SIG undefined thunk_FUN_14dcae98b(void)

void thunk_FUN_14dcae98b(void)

{
  FUN_1663a9796();
  return;
}



// FUNCTION 14dcae98b FUN_14dcae98b body=116 status=ok
// SIG undefined FUN_14dcae98b(void)

void FUN_14dcae98b(void)

{
  FUN_1663a9796();
  return;
}



// FUNCTION 14dcaeab2 FUN_14dcaeab2 body=107 status=ok
// SIG undefined FUN_14dcaeab2(void)

void FUN_14dcaeab2(void)

{
  return;
}



// FUNCTION 14dcaeb29 FUN_14dcaeb29 body=10 status=ok
// SIG undefined FUN_14dcaeb29(void)

void FUN_14dcaeb29(void)

{
  return;
}



// FUNCTION 14dcaed73 FUN_14dcaed73 body=125 status=ok
// SIG undefined FUN_14dcaed73(void)

void FUN_14dcaed73(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_16662e463(param_1,param_2,param_3,FUN_16662e463);
  return;
}



// FUNCTION 14dcaf499 FUN_14dcaf499 body=174 status=ok
// SIG undefined FUN_14dcaf499(void)

void FUN_14dcaf499(void)

{
  undefined8 in_RAX;
  undefined8 in_R9;
  longlong unaff_R14;
  ushort local_res10 [4];
  undefined8 local_res18;
  longlong in_stack_00000028;
  
  *(ushort *)((longlong)local_res10 + unaff_R14) =
       (*(ushort *)((longlong)local_res10 + unaff_R14) | 0x100) - 0x100;
  *(undefined8 *)(in_stack_00000028 + -8) = local_res18;
  *(undefined8 *)(in_stack_00000028 + -0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000028 + -0x18) = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x20) = in_R9;
  *(undefined8 *)(in_stack_00000028 + -0x28) = in_R9;
  *(undefined1 **)(in_stack_00000028 + -0x18) = &LAB_14dcaf54a;
  *(undefined8 *)(in_stack_00000028 + -0x20) = 0x160c0c4c9;
  return;
}



// FUNCTION 14dcaf5cd FUN_14dcaf5cd body=562 status=ok
// SIG undefined FUN_14dcaf5cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcaf63f) */

undefined8
FUN_14dcaf5cd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1657d6404(param_1,FUN_1657d6404,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dcaf772 FUN_14dcaf772 body=291 status=ok
// SIG undefined FUN_14dcaf772(void)

/* WARNING: Instruction at (ram,0x00015b167169) overlaps instruction at (ram,0x00015b167168)
    */
/* WARNING: Removing unreachable block (ram,0x00015b167168) */
/* WARNING: Removing unreachable block (ram,0x00015b167170) */
/* WARNING: Removing unreachable block (ram,0x00014dcaf818) */
/* WARNING: Removing unreachable block (ram,0x00015b167138) */

void FUN_14dcaf772(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  char unaff_DIL;
  int unaff_R13D;
  
  lVar2 = *(ulonglong *)(unaff_RSI + -0x70) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x70) & unaff_RBP) * -2;
  if (lVar2 != 0) {
    FUN_15b166fa6(lVar2,lVar2);
    return;
  }
  lVar2 = *(longlong *)(unaff_RSI + -0x58);
  FUN_1573fc061();
  *(undefined8 *)(&stack0x00000008 + unaff_RBP) = 0;
  *(longlong *)(&stack0x00000008 + unaff_RBP) = *(longlong *)(&stack0x00000008 + unaff_RBP) + lVar2;
  iVar1 = FUN_162599824();
  if ((iVar1 + unaff_R13D + (uint)((unaff_DIL + 1U & 1) != 0) >> 0xb & 1) != 0) {
    FUN_16278a09c();
    return;
  }
  FUN_16278a09c();
  return;
}



// FUNCTION 14dcaf8a7 FUN_14dcaf8a7 body=280 status=ok
// SIG undefined FUN_14dcaf8a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dcaf93a) */

void FUN_14dcaf8a7(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_20;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = ~*(ulonglong *)(unaff_RDI + 0x10);
  *(ulonglong *)(unaff_RDI + 0x10) = *(ulonglong *)(unaff_RDI + 0x10) | unaff_R15;
  *(ulonglong *)(unaff_RDI + 0x10) =
       ~((~(param_4 & uVar1) + lVar2) - ~param_4 & *(ulonglong *)(unaff_RDI + 0x10));
  *(undefined8 *)(param_6 + -8) = unaff_R13;
  *(undefined8 *)(param_6 + -0x10) = in_R11;
  *(undefined8 *)(param_6 + -0x18) = uStackX_20;
  *(undefined8 *)(param_6 + -0x20) = unaff_R14;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x18) = param_1;
  *(undefined8 *)(param_6 + -8) = 0;
  *(longlong *)(param_6 + -8) = (longlong)(&LAB_15af37f66 + *(longlong *)(param_6 + -8));
  *(undefined8 *)(param_6 + -0x18) = unaff_RBX;
  return;
}



// FUNCTION 14dcafa4f FUN_14dcafa4f body=190 status=ok
// SIG undefined FUN_14dcafa4f(void)

void FUN_14dcafa4f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  int unaff_retaddr;
  
  if (unaff_retaddr == 0x64c891d0) {
    FUN_15b3e21ee(0x5ec1fe88,FUN_15b3e21ee,*(undefined8 *)(unaff_R13 + -0x88),
                  *(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
    return;
  }
  return;
}



// FUNCTION 14dcafaf5 FUN_14dcafaf5 body=121 status=ok
// SIG undefined FUN_14dcafaf5(void)

void FUN_14dcafaf5(undefined8 param_1,ulonglong param_2)

{
  ulonglong unaff_RBP;
  ulonglong unaff_R15;
  
  FUN_165b0f5f6(param_1,~((~unaff_RBP | param_2) & (~param_2 | unaff_R15)));
  return;
}



// FUNCTION 14dcafd42 FUN_14dcafd42 body=14 status=ok
// SIG undefined FUN_14dcafd42(void)

void FUN_14dcafd42(void)

{
  return;
}



// FUNCTION 14dcafdce FUN_14dcafdce body=132 status=ok
// SIG undefined FUN_14dcafdce(void)

/* WARNING: Removing unreachable block (ram,0x00014dcafdfb) */

void FUN_14dcafdce(void)

{
  uint unaff_EDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161060ccc(~(~(0xffffffffffffffffU - *(longlong *)(unaff_R13 + -0x78)) & ~unaff_R15),
                unaff_EDI >> 0xc);
  return;
}



// FUNCTION 14dcb002b FUN_14dcb002b body=189 status=ok
// SIG undefined FUN_14dcb002b(void)

void FUN_14dcb002b(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_R14;
  
  FUN_166d7e188(param_1,0xffffffffffffffb0,
                ~((0xffffffffffffffffU - param_3 | unaff_R14) &
                 (~(~unaff_R14 & param_1) + param_1) - unaff_R14));
  return;
}



// FUNCTION 14dcb00e9 FUN_14dcb00e9 body=37 status=ok
// SIG undefined FUN_14dcb00e9(void)

undefined8 FUN_14dcb00e9(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dcb01a1 FUN_14dcb01a1 body=141 status=ok
// SIG undefined FUN_14dcb01a1(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb021a) */
/* WARNING: Removing unreachable block (ram,0x00014dcb0225) */
/* WARNING: Removing unreachable block (ram,0x00014dcb0220) */

undefined8 FUN_14dcb01a1(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb03fe FUN_14dcb03fe body=85 status=ok
// SIG undefined FUN_14dcb03fe(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb0487) */

void FUN_14dcb03fe(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_166ce8049((*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP ^ 0xffffffffffffffff) &
                (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),-*(longlong *)(unaff_RSI + -0x58));
  return;
}



// FUNCTION 14dcb04a5 FUN_14dcb04a5 body=484 status=ok
// SIG undefined FUN_14dcb04a5(void)

/* WARNING: Removing unreachable block (ram,0x0001628f84b2) */
/* WARNING: Removing unreachable block (ram,0x0001628f84b8) */
/* WARNING: Removing unreachable block (ram,0x00014dcb052c) */
/* WARNING: Removing unreachable block (ram,0x00014dcb0538) */
/* WARNING: Removing unreachable block (ram,0x00014dcb05d2) */
/* WARNING: Removing unreachable block (ram,0x00014dcb05d7) */
/* WARNING: Removing unreachable block (ram,0x00014dcb05dd) */
/* WARNING: Removing unreachable block (ram,0x00014dcb05e2) */
/* WARNING: Removing unreachable block (ram,0x000156c10e90) */

void FUN_14dcb04a5(void)

{
  FUN_156c10e90();
  return;
}



// FUNCTION 14dcb07bb FUN_14dcb07bb body=149 status=ok
// SIG undefined FUN_14dcb07bb(void)

void FUN_14dcb07bb(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = param_2;
  FUN_16282a06a(param_1,FUN_16282a06a,param_3,param_4);
  return;
}



// FUNCTION 14dcb08c6 FUN_14dcb08c6 body=99 status=ok
// SIG undefined FUN_14dcb08c6(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb0923) */
/* WARNING: Removing unreachable block (ram,0x00014dcb0929) */
/* WARNING: Removing unreachable block (ram,0x000161946717) */
/* WARNING: Removing unreachable block (ram,0x000161946841) */
/* WARNING: Removing unreachable block (ram,0x000161946846) */
/* WARNING: Removing unreachable block (ram,0x00016194684c) */
/* WARNING: Removing unreachable block (ram,0x000161946851) */
/* WARNING: Removing unreachable block (ram,0x0001619468af) */
/* WARNING: Removing unreachable block (ram,0x00015709adc9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb08c6(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong in_stack_00000010;
  undefined8 uStackX_20;
  
  uVar1 = (~in_stack_00000010 + param_1) - (~in_stack_00000010 & param_1);
  if ((longlong)
      ((~uVar1 | (~param_1 + in_stack_00000010) - (~param_1 & in_stack_00000010)) + uVar1 + 1) < 0)
  {
    FUN_165d57bfe();
    return;
  }
  FUN_16490fe1c(FUN_16490fe1c,param_2,param_3);
  (*(code *)&LAB_1663f0ac6)(uStackX_20,param_2);
  return;
}



// FUNCTION 14dcb0929 FUN_14dcb0929 body=130 status=ok
// SIG undefined FUN_14dcb0929(void)

void FUN_14dcb0929(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  
  FUN_1658a0b33(param_1,*(undefined8 *)(unaff_RDI + -0x68),param_3);
  return;
}



// FUNCTION 14dcb09ad FUN_14dcb09ad body=47 status=ok
// SIG undefined FUN_14dcb09ad(void)

void FUN_14dcb09ad(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  longlong in_R11;
  undefined8 auStackX_10 [3];
  
  *(undefined8 *)((longlong)auStackX_10 + in_R11) = unaff_RBX;
  FUN_14d7a5002(param_1,param_2,auStackX_10[0]);
  return;
}



// FUNCTION 14dcb0b14 FUN_14dcb0b14 body=157 status=ok
// SIG undefined FUN_14dcb0b14(void)

void FUN_14dcb0b14(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong unaff_retaddr;
  
  FUN_14db257de(unaff_retaddr & 0xffffffffffffffcb,FUN_14db257de,param_2 + param_3 * -2);
  return;
}



// FUNCTION 14dcb0f56 FUN_14dcb0f56 body=431 status=ok
// SIG undefined FUN_14dcb0f56(void)

/* WARNING: Removing unreachable block (ram,0x0001629c1d75) */
/* WARNING: Removing unreachable block (ram,0x0001629c1d7b) */
/* WARNING: Removing unreachable block (ram,0x0001629c1cc4) */
/* WARNING: Removing unreachable block (ram,0x0001629c1cd4) */
/* WARNING: Removing unreachable block (ram,0x0001629c1cdf) */
/* WARNING: Removing unreachable block (ram,0x0001665fa693) */
/* WARNING: Removing unreachable block (ram,0x0001665fa6ab) */
/* WARNING: Removing unreachable block (ram,0x0001665fa6af) */
/* WARNING: Removing unreachable block (ram,0x000156d39d5d) */
/* WARNING: Removing unreachable block (ram,0x000166620c9e) */
/* WARNING: Removing unreachable block (ram,0x000166620caa) */
/* WARNING: Removing unreachable block (ram,0x000166620d31) */
/* WARNING: Removing unreachable block (ram,0x000166620d36) */
/* WARNING: Removing unreachable block (ram,0x000166620d3c) */
/* WARNING: Removing unreachable block (ram,0x000166620db5) */
/* WARNING: Removing unreachable block (ram,0x000166620dba) */
/* WARNING: Removing unreachable block (ram,0x000166620dc0) */
/* WARNING: Removing unreachable block (ram,0x0001617f21dc) */
/* WARNING: Removing unreachable block (ram,0x000165325bf8) */
/* WARNING: Removing unreachable block (ram,0x000162df480a) */
/* WARNING: Removing unreachable block (ram,0x000162df478e) */
/* WARNING: Removing unreachable block (ram,0x000162df4804) */
/* WARNING: Removing unreachable block (ram,0x000156d39cc2) */
/* WARNING: Removing unreachable block (ram,0x000156d39d2a) */
/* WARNING: Removing unreachable block (ram,0x000156d39d2e) */
/* WARNING: Removing unreachable block (ram,0x000162df46e6) */
/* WARNING: Removing unreachable block (ram,0x000162df46ea) */
/* WARNING: Removing unreachable block (ram,0x000162df4788) */
/* WARNING: Removing unreachable block (ram,0x0001629c1b8f) */
/* WARNING: Removing unreachable block (ram,0x0001629c1c15) */
/* WARNING: Removing unreachable block (ram,0x0001629c1c1b) */
/* WARNING: Removing unreachable block (ram,0x000166620adf) */
/* WARNING: Removing unreachable block (ram,0x000166620b0e) */
/* WARNING: Removing unreachable block (ram,0x000166620c13) */
/* WARNING: Removing unreachable block (ram,0x00015655eb4e) */
/* WARNING: Removing unreachable block (ram,0x00015655eba4) */
/* WARNING: Removing unreachable block (ram,0x00015655eba8) */
/* WARNING: Removing unreachable block (ram,0x000166992c2e) */
/* WARNING: Removing unreachable block (ram,0x000160e30b46) */
/* WARNING: Removing unreachable block (ram,0x00014dcb108f) */

undefined8 FUN_14dcb0f56(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  code *pcVar8;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000008;
  longlong in_stack_00000010;
  ulonglong local_res20;
  
  *(undefined8 *)(&stack0x2088a69b + in_stack_00000008) = unaff_R13;
  uVar6 = *(ulonglong *)(in_stack_00000010 + -0xa0);
  uVar7 = ~(*(ulonglong *)(in_stack_00000010 + -0x98) & param_1) &
          (*(ulonglong *)(in_stack_00000010 + -0x98) | param_1);
  puVar2 = (undefined8 *)(local_res20 ^ param_1);
  FUN_156448bec(uVar7,param_2,param_3);
  if ((ushort)((ushort)param_4 - 1) < (ushort)((ushort)unaff_RSI & (ushort)param_4)) {
    uVar6 = *(ulonglong *)((uVar6 ^ param_1) - 0x68);
    uVar7 = uVar6 | uVar7;
    FUN_165743aac();
    pcVar8 = FUN_156655f6e;
    puVar2[-1] = FUN_162df465f;
    FUN_156655f6e(unaff_RSI,uVar6);
    uVar5 = puVar2[2];
    puVar2[2] = uVar7;
    lVar3 = puVar2[3];
    puVar2[3] = puVar2[3] & unaff_R15;
    puVar2[1] = unaff_RSI;
    *puVar2 = unaff_RSI;
    *(undefined1 *)puVar2 = 0x9b;
    puVar2[3] = puVar2[3] << (((byte)*puVar2 ^ 0x9a) & 0x3f);
    puVar2[3] = (lVar3 + unaff_R15) - puVar2[3];
    uVar4 = puVar2[2];
    puVar2[2] = in_R10;
    lVar3 = puVar2[4];
    puVar2[1] = pcVar8;
    *puVar2 = uVar4;
    puVar2[-1] = uVar5;
    puVar2[4] = (~unaff_R15 | puVar2[4]) + unaff_R15 + 1;
    puVar1 = puVar2 + 4;
    *puVar1 = *puVar1 << 1 | (ulonglong)((longlong)*puVar1 < 0);
    puVar2[4] = puVar2[4] & 0xfffffffffffffffe;
    puVar2[4] = (lVar3 + unaff_R15) - puVar2[4];
    puVar2[2] = puVar2[2];
    uVar7 = puVar2[5];
    puVar2[5] = puVar2[5] & unaff_R15;
    puVar2[5] = ~puVar2[5];
    puVar2[5] = puVar2[5] & (uVar7 | unaff_R15);
    uVar5 = puVar2[3];
    puVar2[3] = param_4;
    puVar2[2] = uVar5;
    uVar5 = FUN_162a24b9e();
    return uVar5;
  }
  uVar5 = FUN_162df4558();
  return uVar5;
}



// FUNCTION 14dcb118f FUN_14dcb118f body=32 status=ok
// SIG undefined FUN_14dcb118f(void)

void FUN_14dcb118f(void)

{
  return;
}



// FUNCTION 14dcb12b0 FUN_14dcb12b0 body=275 status=ok
// SIG undefined FUN_14dcb12b0(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb1340) */

void FUN_14dcb12b0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_retaddr;
  ulonglong local_res8;
  ulonglong local_res18;
  
  uVar1 = 0xffffffffffffffff - (local_res18 & in_RAX) & (local_res18 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = unaff_retaddr;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined **)(uVar1 - 8) = &DAT_1616dad50;
                    /* WARNING: Could not recover jumptable at 0x0001616dad3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(local_res8 ^ in_RAX))(param_1,param_2);
  return;
}



// FUNCTION 14dcb13c7 FUN_14dcb13c7 body=117 status=ok
// SIG undefined FUN_14dcb13c7(void)

undefined8 FUN_14dcb13c7(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb1487 FUN_14dcb1487 body=152 status=ok
// SIG undefined FUN_14dcb1487(void)

void FUN_14dcb1487(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_164894c9a(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcb15af FUN_14dcb15af body=339 status=ok
// SIG undefined FUN_14dcb15af(void)

/* WARNING: Instruction at (ram,0x00014dcb1654) overlaps instruction at (ram,0x00014dcb1653)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcb1641) */
/* WARNING: Removing unreachable block (ram,0x00014dcb164d) */
/* WARNING: Removing unreachable block (ram,0x00014dcb1653) */
/* WARNING: Removing unreachable block (ram,0x00014dcb1654) */
/* WARNING: Removing unreachable block (ram,0x00014e1d0986) */
/* WARNING: Removing unreachable block (ram,0x00014e1d0a01) */
/* WARNING: Removing unreachable block (ram,0x00014e1d0a19) */
/* WARNING: Removing unreachable block (ram,0x00014e1d0a13) */
/* WARNING: Removing unreachable block (ram,0x0001616a69bf) */
/* WARNING: Removing unreachable block (ram,0x00014dcb16a6) */
/* WARNING: Removing unreachable block (ram,0x00014dcb16b2) */

longlong FUN_14dcb15af(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x80) | param_1;
  return (~uVar1 | ~(*(ulonglong *)(unaff_RDI + -0x80) & param_1)) + uVar1 + 1;
}



// FUNCTION 14dcb16b2 FUN_14dcb16b2 body=15 status=ok
// SIG undefined FUN_14dcb16b2(void)

void FUN_14dcb16b2(void)

{
  return;
}



// FUNCTION 14dcb17c2 FUN_14dcb17c2 body=417 status=ok
// SIG undefined FUN_14dcb17c2(void)

void FUN_14dcb17c2(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ushort *in_RAX;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 uVar4;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  undefined8 local_res10;
  longlong local_res20;
  
  *in_RAX = (-0x101 - (*in_RAX | 0xfeff)) + *in_RAX;
  puVar1 = (ulonglong *)(local_res20 + -8);
  *puVar1 = unaff_R14;
  *(ulonglong *)(local_res20 + -0x10) = *puVar1;
  *puVar1 = 0x68a1f700;
  *puVar1 = *puVar1 ^ 0x68a1f700;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 - 0x16593c591;
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 + 1;
  *(undefined8 *)(local_res20 + -0x18) = 0x14dcb185b;
  uVar3 = FUN_16593c55f(param_1,param_2,local_res10);
  uVar2 = *(undefined8 *)(unaff_RDI + -0x88);
  *(undefined8 *)(local_res20 + -0x10) = in_R10;
  *(undefined8 *)(local_res20 + -0x18) = uVar2;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R13;
  *(code **)(local_res20 + -0x20) = FUN_16593c55f;
  uVar2 = *(undefined8 *)(local_res20 + -0x20);
  uVar4 = *(undefined8 *)(local_res20 + -0x10);
  *(undefined8 *)(local_res20 + -0x10) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R12;
  *(undefined8 *)(local_res20 + -0x20) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x28) = uVar3;
  *(undefined4 *)(local_res20 + -0x28) = 0xd809f07c;
  *(undefined8 *)(local_res20 + -0x30) = 0x14dcb18f2;
  FUN_156a53dfa();
  *(undefined8 *)(local_res20 + -0x28) = param_1;
  *(undefined8 *)(local_res20 + -0x30) = param_1;
  *(undefined8 *)(local_res20 + -0x38) = uVar2;
  *(undefined8 *)(local_res20 + -0x38) = uVar4;
  *(undefined4 *)(local_res20 + -0x40) = 0x67e14d2b;
  *(undefined1 **)(local_res20 + -0x48) = &LAB_14dcb1967;
  return;
}



// FUNCTION 14dcb2031 FUN_14dcb2031 body=320 status=ok
// SIG undefined FUN_14dcb2031(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb208c) */

void FUN_14dcb2031(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong local_res8 [4];
  undefined1 in_stack_00000040;
  
  uVar3 = FUN_162953ccf(param_1,CONCAT31(0x369f4f,in_stack_00000040) ^ 0x369f4f00);
  *(undefined8 *)((longlong)local_res8 + unaff_RDI) = *(undefined8 *)(unaff_R12 + -0x28);
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  uVar2 = *(ulonglong *)(unaff_R12 + -0x78);
  *(code **)((longlong)local_res8 + unaff_RDI) = FUN_14dcb2174;
  uVar4 = FUN_165955da9(uVar1 + uVar3 +
                        ~(uVar1 ^ 0xffffffffffffffff | 0xffffffffffffffff - uVar3) * -2);
  *(undefined8 *)((longlong)local_res8 + unaff_RDI + 8) = uVar4;
  *(ulonglong *)((longlong)local_res8 + unaff_RDI) = ~uVar3 | uVar2;
  thunk_FUN_1659379be();
  return;
}



// FUNCTION 14dcb2174 FUN_14dcb2174 body=152 status=ok
// SIG undefined FUN_14dcb2174(void)

void FUN_14dcb2174(undefined8 param_1)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x90);
  thunk_FUN_1659379be(param_1,uVar1 + unaff_R15,~((~(~unaff_R15 & uVar1) + uVar1) - unaff_R15),
                      thunk_FUN_1659379be);
  return;
}



// FUNCTION 14dcb25bf FUN_14dcb25bf body=514 status=ok
// SIG undefined FUN_14dcb25bf(void)

/* WARNING: Instruction at (ram,0x000160e4abbb) overlaps instruction at (ram,0x000160e4abba)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcb262c) */
/* WARNING: Removing unreachable block (ram,0x00014dcb2665) */

void FUN_14dcb25bf(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar4;
  ulonglong in_RAX;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R14;
  ulonglong uVar7;
  bool bVar8;
  byte in_AF;
  bool bVar9;
  byte in_TF;
  bool bVar10;
  byte in_IF;
  bool bVar11;
  bool bVar12;
  byte in_NT;
  bool bVar13;
  byte in_AC;
  bool bVar14;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  bool bVar15;
  ulonglong uVar16;
  ulonglong auStack_28 [2];
  ushort local_10;
  uint6 uStack_e;
  ulonglong local_8;
  int iVar3;
  
  local_8._0_4_ = 0;
  local_10 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(in_IF & 1) * 0x200 |
             (ushort)(in_TF & 1) * 0x100 | 0x40 | (ushort)(in_AF & 1) * 0x10 | 4;
  uVar1 = ~local_10;
  _local_10 = CONCAT62((uint6)((ulonglong)(in_ID & 1) * 0x200000 >> 0x10) |
                       (uint6)((ulonglong)(in_VIP & 1) * 0x100000 >> 0x10) |
                       (uint6)((ulonglong)(in_VIF & 1) * 0x80000 >> 0x10) |
                       (uint6)((ulonglong)(in_AC & 1) * 0x40000 >> 0x10),~(uVar1 | 0xfeff));
  puVar5 = (ulonglong *)&local_10;
  if ((ushort)~(uVar1 | 0xfeff) == 0) {
    in_NT = (in_NT & 1) != 0;
    in_IF = (in_IF & 1) != 0;
    in_TF = (in_TF & 1) != 0;
    in_AF = (in_AF & 1) != 0;
    in_ID = (in_ID & 1) != 0;
    in_AC = (in_AC & 1) != 0;
    in_VIP = 0;
    in_VIF = 0;
    puVar5 = &local_8;
  }
  uVar2 = *(uint *)puVar5;
  iVar3 = *(int *)puVar5;
  *(int *)puVar5 = *(int *)puVar5 + 0x18c40b05;
  *(ulonglong *)((longlong)puVar5 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SBORROW4(iVar3,-0x18c40b05) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(*(int *)puVar5 < 0) * 0x80 | (ulonglong)(*(int *)puVar5 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*(uint *)puVar5 & 0xff) & 1U) == 0) * 4
       | (ulonglong)(uVar2 < 0xe73bf4fb) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(ulonglong *)((longlong)puVar5 + -8) = *(ulonglong *)((longlong)puVar5 + -8) | 0x80;
  uVar16 = *(ulonglong *)((longlong)puVar5 + -8);
  bVar13 = (uVar16 & 0x4000) != 0;
  bVar12 = (uVar16 & 0x400) != 0;
  bVar11 = (uVar16 & 0x200) != 0;
  bVar10 = (uVar16 & 0x100) != 0;
  bVar9 = (uVar16 & 0x10) != 0;
  bVar15 = (uVar16 & 0x200000) != 0;
  bVar14 = (uVar16 & 0x40000) != 0;
  if ((uVar16 & 0x80) != 0) {
    puVar6 = (ulonglong *)((longlong)puVar5 + -8);
    puVar5 = (ulonglong *)((longlong)puVar5 + -8);
    *puVar6 = in_RAX;
    in_RAX = 0x1e8f7336;
  }
  uVar16 = ~(~(in_RAX & 0xffffffffef0f4746) & 0xffffffffff8f7776);
  *puVar5 = 0xc18b4950;
  puVar5[-1] = in_R10;
  puVar5[-1] = in_R11;
  puVar5[-2] = unaff_R14;
  uVar7 = uVar16 - 0xe7fcb97;
  bVar8 = (POPCOUNT(uVar7 & 0xff) & 1U) == 0;
  puVar5[-1] = (ulonglong)bVar13 * 0x4000 | (ulonglong)SBORROW8(uVar16,0xe7fcb97) * 0x800 |
               (ulonglong)bVar12 * 0x400 | (ulonglong)bVar11 * 0x200 | (ulonglong)bVar10 * 0x100 |
               (ulonglong)((longlong)uVar7 < 0) * 0x80 | (ulonglong)(uVar7 == 0) * 0x40 |
               (ulonglong)bVar9 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)(uVar16 < 0xe7fcb97) |
               (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
  puVar5[-2] = (ulonglong)bVar13 * 0x4000 | (ulonglong)SBORROW8(uVar16,0xe7fcb97) * 0x800 |
               (ulonglong)bVar12 * 0x400 | (ulonglong)bVar11 * 0x200 | (ulonglong)bVar10 * 0x100 |
               (ulonglong)((longlong)uVar7 < 0) * 0x80 | (ulonglong)(uVar7 == 0) * 0x40 |
               (ulonglong)bVar9 * 0x10 | (ulonglong)bVar8 * 4 | (ulonglong)(uVar16 < 0xe7fcb97) |
               (ulonglong)bVar15 * 0x200000 | (ulonglong)bVar14 * 0x40000;
  *(int *)(puVar5 + -2) = (int)puVar5[-2] << 0x1f;
  *(uint *)(puVar5 + -2) = (uint)puVar5[-2] >> 0x1f;
  if ((int)puVar5[-2] != 0) {
    uVar16 = puVar5[-1];
    bVar10 = (uVar16 & 0x40) != 0;
    bVar9 = (uVar16 & 1) != 0;
    if (bVar9 || bVar10) {
      FUN_156860b48();
      return;
    }
    lVar4 = *puVar5;
    *puVar5 = (ulonglong)((uVar16 & 0x4000) != 0) * 0x4000 |
              (ulonglong)((uVar16 & 0x800) != 0) * 0x800 |
              (ulonglong)((uVar16 & 0x400) != 0) * 0x400 |
              (ulonglong)((uVar16 & 0x200) != 0) * 0x200 |
              (ulonglong)((uVar16 & 0x100) != 0) * 0x100 | (ulonglong)((uVar16 & 0x80) != 0) * 0x80
              | (ulonglong)bVar10 * 0x40 | (ulonglong)((uVar16 & 0x10) != 0) * 0x10 |
              (ulonglong)((uVar16 & 4) != 0) * 4 | (ulonglong)bVar9 |
              (ulonglong)((uVar16 & 0x200000) != 0) * 0x200000 |
              (ulonglong)((uVar16 & 0x40000) != 0) * 0x40000;
    puVar5[-1] = lVar4;
    puVar5[-1] = puVar5[-1] + -0xea29e40;
    puVar5[2] = lVar4 - 0xea29e40;
    FUN_165c7153c(0xe7fcb97,~param_2,param_3,uVar7);
    return;
  }
  FUN_156860b48();
  return;
}



// FUNCTION 14dcb27a7 FUN_14dcb27a7 body=277 status=ok
// SIG undefined FUN_14dcb27a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb282d) */
/* WARNING: Removing unreachable block (ram,0x00014dcb2833) */

void FUN_14dcb27a7(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  short *unaff_RDI;
  ushort unaff_R14W;
  undefined8 unaff_R15;
  undefined8 uStackX_10;
  longlong lStackX_20;
  
  *unaff_RDI = (-0x102 - ~unaff_R14W) + *unaff_RDI;
  *(undefined8 *)(lStackX_20 + -8) = unaff_R15;
  *(undefined8 *)(lStackX_20 + -0x10) = uStackX_10;
  *(undefined8 *)(lStackX_20 + -0x18) = uStackX_10;
  *(undefined8 *)(lStackX_20 + -0x10) = *(undefined8 *)(lStackX_20 + -8);
  *(undefined8 *)(lStackX_20 + -0x18) = unaff_RBP;
  *(undefined8 *)(lStackX_20 + -0x20) = in_RAX;
  *(undefined4 *)(lStackX_20 + -0x28) = 0x579b280;
  *(undefined4 *)(lStackX_20 + -0x24) = 0;
  *(undefined1 **)(lStackX_20 + -0x10 + (*(ulonglong *)(lStackX_20 + -0x28) ^ 0x579b288)) =
       &LAB_14deb4ee4;
  thunk_FUN_15b642ca5(param_1);
  return;
}



// FUNCTION 14dcb2b6b FUN_14dcb2b6b body=120 status=ok
// SIG undefined FUN_14dcb2b6b(void)

void FUN_14dcb2b6b(void)

{
  ulonglong in_R10;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  
  FUN_1662e0c3a(FUN_1662e0c3a,unaff_retaddr,local_res10 | in_R10);
  return;
}



// FUNCTION 14dcb2d30 FUN_14dcb2d30 body=427 status=ok
// SIG undefined FUN_14dcb2d30(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb2e92) */

void FUN_14dcb2d30(undefined8 param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined8 *unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 unaff_retaddr;
  undefined8 uStackX_10;
  
  unaff_RDI[-1] = unaff_retaddr;
  *unaff_RDI = param_1;
  unaff_RDI[-1] = in_R10;
  unaff_RDI[-1] =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 5 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  unaff_RDI[-1] = 0x14dcb2dd7;
  uVar4 = FUN_1616eee33(param_1,FUN_1616eee33,uStackX_10);
  uVar3 = *unaff_RDI;
  *unaff_RDI = unaff_RBP;
  unaff_RDI[2] = unaff_RDI[2] ^ uVar4;
  unaff_RDI[3] = unaff_RDI[3] ^ uVar4;
  unaff_RDI[4] = unaff_RDI[4] ^ uVar4;
  uVar2 = unaff_RDI[2];
  unaff_RDI[2] = unaff_R14;
  unaff_RDI[1] = unaff_RDI[1];
  puVar1 = (ushort *)(unaff_RDI + 3);
  unaff_RDI[1] = uVar2;
  *(undefined2 *)(unaff_RDI + 1) = 0x4554;
  uVar2 = unaff_RDI[1];
  unaff_RDI[1] = param_1;
  uVar5 = unaff_RDI[1];
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | ~((short)uVar2 + 0xb9abU);
  *puVar1 = ~*puVar1;
  unaff_RDI[1] = 0x14dcb2e60;
  FUN_1575e68bf(uVar5,uVar3);
  unaff_RDI[1] = uVar5;
  uVar2 = unaff_RDI[1];
  unaff_RDI[1] = puVar1;
  FUN_156357b8e(uVar2,FUN_156357b8e);
  return;
}



// FUNCTION 14dcb30c5 FUN_14dcb30c5 body=190 status=ok
// SIG undefined FUN_14dcb30c5(void)

/* WARNING: Instruction at (ram,0x000161a9073b) overlaps instruction at (ram,0x000161a9073a)
    */
/* WARNING: Removing unreachable block (ram,0x00015755482f) */
/* WARNING: Removing unreachable block (ram,0x000157554829) */
/* WARNING: Removing unreachable block (ram,0x000157554834) */
/* WARNING: Removing unreachable block (ram,0x000157554876) */
/* WARNING: Removing unreachable block (ram,0x000157554873) */
/* WARNING: Removing unreachable block (ram,0x000157554879) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3166) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3172) */
/* WARNING: Removing unreachable block (ram,0x000161b6b182) */
/* WARNING: Removing unreachable block (ram,0x000161a906f4) */
/* WARNING: Removing unreachable block (ram,0x000161a9073b) */
/* WARNING: Removing unreachable block (ram,0x000161a9073a) */
/* WARNING: Removing unreachable block (ram,0x0001651f5e42) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x000161b6b128 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcb30c5(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint unaff_ESI;
  longlong unaff_RDI;
  uint uVar4;
  uint unaff_R15D;
  undefined8 local_res8;
  longlong lStackX_10;
  ulonglong in_stack_fffffffffffffff8;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0xa0);
  uVar3 = ((param_1 - (*(ulonglong *)(unaff_RDI + -0x98) | param_1)) +
           *(ulonglong *)(unaff_RDI + -0x98) ^ 0xffffffffffffffff) &
          (((~param_1 | in_stack_fffffffffffffff8) + param_1 + 1 ^ 0xffffffffffffffff) + param_1) -
          ~in_stack_fffffffffffffff8;
  FUN_1566261e8(uVar3,param_2);
  uVar4 = (unaff_R15D + unaff_ESI) - (unaff_R15D & unaff_ESI);
  if (!CARRY4(uVar4 - (~(unaff_R15D & unaff_ESI) | uVar4),~(unaff_R15D & unaff_ESI))) {
    *(undefined8 *)(lStackX_10 + -8) = local_res8;
    *(undefined8 *)(lStackX_10 + -0x10) = param_3;
    *(undefined8 *)(lStackX_10 + -0x18) = param_3;
    *(undefined8 *)(lStackX_10 + -0x10) = 0x9ad6eb2;
    *(ulonglong *)(lStackX_10 + -0x10) = *(ulonglong *)(lStackX_10 + -0x10) ^ 0x9ad6eb2;
    *(longlong *)(lStackX_10 + -0x10) =
         *(longlong *)(lStackX_10 + -0x10) + *(longlong *)(lStackX_10 + -8);
    uVar2 = *(undefined8 *)(lStackX_10 + -0x18);
    *(ulonglong *)(lStackX_10 + -0x18) =
         ~((0xffffffffffffffff - param_1 | uVar1) + param_1 + 1) & (uVar1 | param_1);
    *(undefined8 *)(lStackX_10 + -0x20) = uVar2;
    *(undefined1 **)(lStackX_10 + -8) = &LAB_14e08d83e;
    uVar2 = FUN_14e08d7f5(uVar3);
    return uVar2;
  }
  uVar2 = FUN_157554770();
  return uVar2;
}



// FUNCTION 14dcb3205 FUN_14dcb3205 body=154 status=ok
// SIG undefined FUN_14dcb3205(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb3205(undefined8 param_1)

{
  FUN_166b66c83(param_1);
  return;
}



// FUNCTION 14dcb32a1 FUN_14dcb32a1 body=62 status=ok
// SIG undefined FUN_14dcb32a1(void)

void FUN_14dcb32a1(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dcb33cb FUN_14dcb33cb body=108 status=ok
// SIG undefined FUN_14dcb33cb(void)

undefined8 FUN_14dcb33cb(void)

{
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 local_res8;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x18) = in_R11;
  *(undefined **)(local_res18 + -8) = &DAT_14dcb3450;
  *(undefined8 *)(local_res18 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R14;
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7ac7e9;
  return local_res8;
}



// FUNCTION 14dcb3526 FUN_14dcb3526 body=293 status=ok
// SIG undefined FUN_14dcb3526(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb3647) */
/* WARNING: Removing unreachable block (ram,0x00014dcb364d) */
/* WARNING: Removing unreachable block (ram,0x000161b20b6f) */
/* WARNING: Removing unreachable block (ram,0x000161b20b64) */

void FUN_14dcb3526(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong unaff_R12;
  undefined8 unaff_R13;
  longlong local_res18;
  
  uVar2 = *(ulonglong *)(unaff_R12 + -0x90);
  uVar4 = in_RAX - (uVar2 | in_RAX);
  if (!CARRY8(uVar4,uVar2)) {
    FUN_162b6fa18();
    (*(code *)0x15b4b684f)();
    return;
  }
  if (!CARRY8(uVar4,uVar2)) {
    *(longlong *)(local_res18 + -8) = unaff_R12;
    *(undefined8 *)(local_res18 + -0x10) = param_3;
    uVar3 = *(undefined8 *)(local_res18 + -0x10);
    *(undefined8 *)(local_res18 + -0x10) = uVar3;
    *(undefined8 *)(local_res18 + -0x18) = uVar3;
    plVar1 = (longlong *)(local_res18 + -0x20);
    *plVar1 = 0;
    *plVar1 = *plVar1 + param_1;
    *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
    *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
    *(undefined **)(local_res18 + -8) = &DAT_164b0e0f4;
                    /* WARNING: Could not recover jumptable at 0x000164b0e0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LoadLibraryA((LPCSTR)(uVar4 + uVar2));
    return;
  }
  FUN_161b20a56();
  return;
}



// FUNCTION 14dcb364d FUN_14dcb364d body=14 status=ok
// SIG undefined FUN_14dcb364d(void)

void FUN_14dcb364d(void)

{
  thunk_FUN_15b0572f1();
  return;
}



// FUNCTION 14dcb36ff FUN_14dcb36ff body=109 status=ok
// SIG undefined FUN_14dcb36ff(void)

undefined8 FUN_14dcb36ff(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb387c FUN_14dcb387c body=171 status=ok
// SIG undefined FUN_14dcb387c(void)

void FUN_14dcb387c(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_14db5c34e(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x70),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dcb3927 FUN_14dcb3927 body=117 status=ok
// SIG undefined FUN_14dcb3927(void)

void FUN_14dcb3927(void)

{
  return;
}



// FUNCTION 14dcb3a28 FUN_14dcb3a28 body=309 status=ok
// SIG undefined FUN_14dcb3a28(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb3abc) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3ac2) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3b54) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3b5a) */
/* WARNING: Removing unreachable block (ram,0x0001619ed6dd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb3a28(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res18;
  
  uVar1 = (local_res18 & unaff_R15 ^ 0xffffffffffffffff) & (local_res18 | unaff_R15);
  *(undefined8 *)(uVar1 - 8) = local_res8;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = unaff_R12;
  uVar2 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = 0xfffffffe994eafd1;
  *(undefined8 *)(uVar1 - 0x20) = uVar2;
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) - *(longlong *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x20) = in_R11;
  *(undefined8 *)(uVar1 - 0x28) = in_R11;
  *(undefined8 *)(uVar1 - 0x30) = in_R11;
  *(undefined1 **)(uVar1 - 0x20) = &LAB_162642e00;
  *(undefined1 **)(uVar1 - 0x28) = &LAB_166b14ff0;
  return;
}



// FUNCTION 14dcb3b60 FUN_14dcb3b60 body=95 status=ok
// SIG undefined FUN_14dcb3b60(void)

undefined8 FUN_14dcb3b60(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb3e54 FUN_14dcb3e54 body=147 status=ok
// SIG undefined FUN_14dcb3e54(void)

undefined8 FUN_14dcb3e54(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb3f64 FUN_14dcb3f64 body=131 status=ok
// SIG undefined FUN_14dcb3f64(void)

/* WARNING: Removing unreachable block (ram,0x000165909425) */
/* WARNING: Removing unreachable block (ram,0x00016590941a) */
/* WARNING: Removing unreachable block (ram,0x000165909420) */
/* WARNING: Removing unreachable block (ram,0x00014dcb3fe8) */

void FUN_14dcb3f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 unaff_EBP;
  longlong unaff_RDI;
  longlong in_R11;
  undefined8 local_res10 [3];
  
  *(undefined4 *)((longlong)local_res10 + in_R11) = unaff_EBP;
  local_res10[0] = *(undefined8 *)(unaff_RDI + -0x90);
  FUN_14ded7862(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcb3fe8 FUN_14dcb3fe8 body=92 status=ok
// SIG undefined FUN_14dcb3fe8(void)

void FUN_14dcb3fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  code *pcVar1;
  undefined8 uStackX_8;
  undefined8 local_res10;
  undefined8 local_res20;
  
  *param_4 = (*param_4 | 0x100) - 0x100;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(param_1,param_2,local_res10,uStackX_8);
  *local_res20 = 0x154f4d0;
  FUN_15b3d5987();
  return;
}



// FUNCTION 14dcb40cb FUN_14dcb40cb body=70 status=ok
// SIG undefined FUN_14dcb40cb(void)

void FUN_14dcb40cb(void)

{
  FUN_164f00142();
  return;
}



// FUNCTION 14dcb4306 FUN_14dcb4306 body=154 status=ok
// SIG undefined FUN_14dcb4306(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb4385) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4396) */
/* WARNING: Removing unreachable block (ram,0x00014dcb438b) */

void FUN_14dcb4306(void)

{
  FUN_16515e27a();
  return;
}



// FUNCTION 14dcb45e2 FUN_14dcb45e2 body=93 status=ok
// SIG undefined FUN_14dcb45e2(void)

void FUN_14dcb45e2(undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  short unaff_R13W;
  undefined8 uStackX_8;
  longlong local_res20;
  
  *param_2 = unaff_R13W + *param_2;
  *(undefined8 *)(local_res20 + -8) = param_4;
  *(undefined8 *)(local_res20 + -0x10) = *(undefined8 *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -8) = 0;
  *(undefined1 **)(local_res20 + -8) = &LAB_14dcb4651 + *(longlong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x18) = uStackX_8;
  *(undefined8 *)(local_res20 + -0x10) = 0x14d7c3341;
  return;
}



// FUNCTION 14dcb467a FUN_14dcb467a body=166 status=ok
// SIG undefined FUN_14dcb467a(void)

void FUN_14dcb467a(ulonglong param_1)

{
  longlong unaff_RDI;
  
  (*(code *)0x1610a75d5)
            (param_1,*(undefined8 *)(unaff_RDI + -0x28),*(ulonglong *)(unaff_RDI + -0x70) ^ param_1)
  ;
  return;
}



// FUNCTION 14dcb4721 FUN_14dcb4721 body=405 status=ok
// SIG undefined FUN_14dcb4721(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb47dc) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4863) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4868) */

undefined8 FUN_14dcb4721(void)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ulonglong local_res18;
  
  lVar1 = local_res18 + unaff_R15 + (local_res18 & unaff_R15) * -2;
  *(undefined8 *)(lVar1 + -8) = unaff_R12;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -0x18) = unaff_RBX;
  *(undefined8 *)(lVar1 + -0x20) = uStackX_8;
  *(undefined1 **)(lVar1 + -8) = &LAB_1572b9058;
                    /* WARNING: Could not recover jumptable at 0x0001572b903c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}



// FUNCTION 14dcb4a03 FUN_14dcb4a03 body=164 status=ok
// SIG undefined FUN_14dcb4a03(void)

void FUN_14dcb4a03(void)

{
  return;
}



// FUNCTION 14dcb4b35 FUN_14dcb4b35 body=1241 status=ok
// SIG undefined FUN_14dcb4b35(void)

/* WARNING: Instruction at (ram,0x00014dcb4b9a) overlaps instruction at (ram,0x00014dcb4b99)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcb4c60) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4c66) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4e39) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4e45) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4e5a) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4e5f) */
/* WARNING: Removing unreachable block (ram,0x00014dc80050) */
/* WARNING: Removing unreachable block (ram,0x00014dcb4bc0) */

void FUN_14dcb4b35(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_RBX;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 local_res8;
  undefined8 auStackX_10 [3];
  
  lVar2 = unaff_RBX - in_R11;
  puVar1 = (undefined8 *)((longlong)auStackX_10 + lVar2);
  *puVar1 = local_res8;
  *(undefined4 *)((longlong)auStackX_10 + lVar2 + -8) = 0x53a3f76e;
  *(undefined4 *)((longlong)auStackX_10 + lVar2 + -4) = 0;
  *(undefined8 *)((longlong)auStackX_10 + lVar2 + -8) = unaff_R12;
  *puVar1 = param_2;
  uVar3 = *puVar1;
  *(undefined8 *)((longlong)auStackX_10 + lVar2) = param_3;
  uVar4 = *(undefined8 *)((longlong)auStackX_10 + lVar2);
  *(undefined8 *)((longlong)auStackX_10 + lVar2) = param_1;
  *(undefined8 *)((longlong)auStackX_10 + lVar2 + -8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)auStackX_10 + lVar2 + -8);
  *(undefined8 *)((longlong)auStackX_10 + lVar2 + -8) = in_R10;
  FUN_164918ffd(FUN_164918ffd,uVar3,uVar4);
  return;
}



// FUNCTION 14dcb4f69 thunk_FUN_14dcb4f6f body=5 status=ok
// SIG undefined thunk_FUN_14dcb4f6f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb50af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_14dcb4f6f(void)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0x3152 - ~(unaff_R13 * 8 + (~(unaff_RBX & unaff_R15) & (unaff_RBX | unaff_R15)) +
                    0xe63b604);
  FUN_15afde797(uVar1,*(undefined8 *)(unaff_R13 + -0x28));
  if (-1 < (longlong)(~(_DAT_026860c7 & uVar1) & (_DAT_026860c7 | uVar1))) {
    FUN_156889dec();
    return;
  }
  FUN_156889dec();
  return;
}



// FUNCTION 14dcb4f6f FUN_14dcb4f6f body=156 status=ok
// SIG undefined FUN_14dcb4f6f(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb50af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dcb4f6f(void)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = 0x3152 - ~(unaff_R13 * 8 + (~(unaff_RBX & unaff_R15) & (unaff_RBX | unaff_R15)) +
                    0xe63b604);
  FUN_15afde797(uVar1,*(undefined8 *)(unaff_R13 + -0x28));
  if (-1 < (longlong)(~(_DAT_026860c7 & uVar1) & (_DAT_026860c7 | uVar1))) {
    FUN_156889dec();
    return;
  }
  FUN_156889dec();
  return;
}



// FUNCTION 14dcb500b FUN_14dcb500b body=317 status=ok
// SIG undefined FUN_14dcb500b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb50af) */

void FUN_14dcb500b(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x68) ^ param_1;
  if (-1 < (longlong)
           (~(*(ulonglong *)(unaff_RDI + -0x48) & param_1) &
           (*(ulonglong *)(unaff_RDI + -0x48) | param_1))) {
    FUN_156889dec((char)param_1,uVar1,param_3 ^ param_1);
    return;
  }
  FUN_156889dec((char)param_1,uVar1,param_3 ^ param_1);
  return;
}



// FUNCTION 14dcb514a FUN_14dcb514a body=154 status=ok
// SIG undefined FUN_14dcb514a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb514a(undefined8 param_1)

{
  undefined8 *in_RAX;
  undefined8 unaff_R13;
  
  *in_RAX = unaff_R13;
  FUN_156a62514(param_1,FUN_156a62514);
  return;
}



// FUNCTION 14dcb53c2 FUN_14dcb53c2 body=592 status=ok
// SIG undefined FUN_14dcb53c2(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb547a) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5486) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb53c2(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x60) | param_1;
  FUN_15b9bd22c(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                (~uVar1 | ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1)) + uVar1 + 1);
  return;
}



// FUNCTION 14dcb55a7 FUN_14dcb55a7 body=45 status=ok
// SIG undefined FUN_14dcb55a7(void)

void FUN_14dcb55a7(void)

{
  return;
}



// FUNCTION 14dcb562b FUN_14dcb562b body=161 status=ok
// SIG undefined FUN_14dcb562b(void)

void FUN_14dcb562b(void)

{
  return;
}



// FUNCTION 14dcb58aa FUN_14dcb58aa body=113 status=ok
// SIG undefined FUN_14dcb58aa(void)

void FUN_14dcb58aa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBP;
  undefined8 in_R10;
  undefined4 local_res8;
  undefined8 local_res18;
  ulonglong in_stack_00000038;
  
  *(undefined8 *)(param_3 + CONCAT44(0xffffffff,local_res8) + 0xeda219f) = in_R10;
  *(undefined8 *)((in_stack_00000038 ^ unaff_RBP) - 8) = 0x169133e;
  FUN_15b3d5987(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14dcb5a6c FUN_14dcb5a6c body=178 status=ok
// SIG undefined FUN_14dcb5a6c(void)

void FUN_14dcb5a6c(undefined8 param_1)

{
  FUN_160d1fb1c(param_1,0x620dfe3d,FUN_160d1fb1c);
  return;
}



// FUNCTION 14dcb5bc2 FUN_14dcb5bc2 body=55 status=ok
// SIG undefined FUN_14dcb5bc2(void)

undefined8 FUN_14dcb5bc2(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dcb5bf9 FUN_14dcb5bf9 body=240 status=ok
// SIG undefined FUN_14dcb5bf9(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000161354f68) overlaps instruction at (ram,0x000161354f67)
    */
/* WARNING: Removing unreachable block (ram,0x00014df7b690) */
/* WARNING: Removing unreachable block (ram,0x00014df7b696) */
/* WARNING: Removing unreachable block (ram,0x000161354fed) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5cec) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5cf2) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5d86) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5d8c) */
/* WARNING: Removing unreachable block (ram,0x00014df7b60d) */
/* WARNING: Removing unreachable block (ram,0x0001563bce32) */
/* WARNING: Removing unreachable block (ram,0x000161354ed1) */
/* WARNING: Removing unreachable block (ram,0x000161354f67) */
/* WARNING: Removing unreachable block (ram,0x000161354f68) */
/* WARNING: Removing unreachable block (ram,0x000161354fe7) */
/* WARNING: Removing unreachable block (ram,0x000166074a3a) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5c44) */
/* WARNING: Removing unreachable block (ram,0x00015afab9d0) */
/* WARNING: Removing unreachable block (ram,0x00015afab9d5) */
/* WARNING: Removing unreachable block (ram,0x00015afab9d9) */
/* WARNING: Removing unreachable block (ram,0x00015afaba04) */
/* WARNING: Removing unreachable block (ram,0x00015afaba2e) */
/* WARNING: Removing unreachable block (ram,0x00015afaba6e) */
/* WARNING: Removing unreachable block (ram,0x0001563bce38) */
/* WARNING: Removing unreachable block (ram,0x0001563bcee7) */
/* WARNING: Removing unreachable block (ram,0x0001563bcee2) */
/* WARNING: Removing unreachable block (ram,0x0001563bcef0) */
/* WARNING: Removing unreachable block (ram,0x0001563bcf1d) */
/* WARNING: Removing unreachable block (ram,0x0001563bcf00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcb5bf9(undefined8 param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong unaff_retaddr;
  
  lVar2 = -1 - (in_RAX | ~((~in_RAX + in_RAX) - ~in_RAX));
  if (lVar2 < 0) {
    uVar3 = FUN_156b3156d(param_1);
    return uVar3;
  }
  bVar1 = *(byte *)(unaff_retaddr & 0x7fffffffffffffff);
  if ((longlong)unaff_retaddr < 0) {
    bVar1 = bVar1 ^ 0x28;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1);
}



// FUNCTION 14dcb5cf2 FUN_14dcb5cf2 body=569 status=ok
// SIG undefined FUN_14dcb5cf2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000161354f68) overlaps instruction at (ram,0x000161354f67)
    */
/* WARNING: Removing unreachable block (ram,0x00014df7b690) */
/* WARNING: Removing unreachable block (ram,0x00014df7b696) */
/* WARNING: Removing unreachable block (ram,0x000161354f67) */
/* WARNING: Removing unreachable block (ram,0x000161354fed) */
/* WARNING: Removing unreachable block (ram,0x0001563bce38) */
/* WARNING: Removing unreachable block (ram,0x0001563bcee7) */
/* WARNING: Removing unreachable block (ram,0x0001563bcee2) */
/* WARNING: Removing unreachable block (ram,0x0001563bcef0) */
/* WARNING: Removing unreachable block (ram,0x0001563bcf1d) */
/* WARNING: Removing unreachable block (ram,0x0001563bcf00) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5d8c) */

undefined8 FUN_14dcb5cf2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_166b27acb();
                    /* WARNING: Bad instruction - Truncating control flow here */
  return uVar1;
}



// FUNCTION 14dcb5e55 FUN_14dcb5e55 body=123 status=ok
// SIG undefined FUN_14dcb5e55(void)

void FUN_14dcb5e55(void)

{
  uint unaff_retaddr;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(local_res8._4_4_ - (0x2dfb823f - (~unaff_retaddr + 2)),
                        (undefined4)local_res8);
  FUN_160c0a57b(~(~(local_res8 & 0xffffffffe40e2c72) & (local_res8 | 0xffffffffe40e2c72)));
  return;
}



// FUNCTION 14dcb5f73 FUN_14dcb5f73 body=143 status=ok
// SIG undefined FUN_14dcb5f73(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb6002) */
/* WARNING: Removing unreachable block (ram,0x00014dcb5ff7) */
/* WARNING: Removing unreachable block (ram,0x000165800687) */

void FUN_14dcb5f73(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = ~(unaff_R15 & ~*(ulonglong *)(unaff_R13 + -0x88));
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88) ^ 0xffffffffffffffff | unaff_R15;
  uVar1 = 0xe5be274c;
  uVar2 = FUN_1621e81cc(0xe5be274c,*(longlong *)(unaff_R13 + -0x48) + unaff_R15,
                        ~((uVar3 - (uVar2 | uVar3)) + uVar2),
                        ~((unaff_RDI | in_R9) & (~in_R9 | unaff_R15)));
  FUN_166375c3f(FUN_1621e81cc + (uVar1 & uVar2) * -2 + uVar2);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38) ^ 0xffffffffffffffff;
  FUN_1652beec9(~((~uVar2 | unaff_R15) + uVar2 + 1));
  return;
}



// FUNCTION 14dcb6002 FUN_14dcb6002 body=19 status=ok
// SIG undefined FUN_14dcb6002(void)

void FUN_14dcb6002(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
                    /* WARNING: Could not recover jumptable at 0x00014dcb6013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dcb6094 FUN_14dcb6094 body=101 status=ok
// SIG undefined FUN_14dcb6094(void)

void FUN_14dcb6094(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_1649a6271(param_1,*(ulonglong *)(unaff_RDI + -0x28) | param_1,
                ~((~param_1 | param_3) & (~param_3 | param_1)));
  return;
}



// FUNCTION 14dcb6269 FUN_14dcb6269 body=160 status=ok
// SIG undefined FUN_14dcb6269(void)

/* WARNING: Removing unreachable block (ram,0x00015b6b41a1) */

void FUN_14dcb6269(void)

{
  return;
}



// FUNCTION 14dcb6310 FUN_14dcb6310 body=151 status=ok
// SIG undefined FUN_14dcb6310(void)

void FUN_14dcb6310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBX;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res8 = *(ulonglong *)(param_1 + -0x98) ^ unaff_RBX;
  local_res10 = local_res10 ^ unaff_RBX;
  local_res18 = ~local_res18 | unaff_RBX;
  FUN_16575bd6c(*(ulonglong *)(param_1 + -0xa0) ^ unaff_RBX,&local_res8,param_3);
  return;
}



// FUNCTION 14dcb6469 FUN_14dcb6469 body=949 status=ok
// SIG undefined FUN_14dcb6469(void)

/* WARNING: Instruction at (ram,0x00016531f7f2) overlaps instruction at (ram,0x00016531f7f1)
    */
/* WARNING: Removing unreachable block (ram,0x00015b2c7d5f) */
/* WARNING: Removing unreachable block (ram,0x00015b2c7d65) */
/* WARNING: Removing unreachable block (ram,0x00015b2c7df5) */
/* WARNING: Removing unreachable block (ram,0x00015b2c7dfb) */
/* WARNING: Removing unreachable block (ram,0x00014d916fd8) */
/* WARNING: Removing unreachable block (ram,0x0001663c8210) */
/* WARNING: Removing unreachable block (ram,0x00014d917059) */
/* WARNING: Removing unreachable block (ram,0x00014d91705f) */
/* WARNING: Removing unreachable block (ram,0x00014d917064) */
/* WARNING: Removing unreachable block (ram,0x00014d9170e7) */
/* WARNING: Removing unreachable block (ram,0x00014d9170ed) */
/* WARNING: Removing unreachable block (ram,0x000164a75bc6) */
/* WARNING: Removing unreachable block (ram,0x000164a75c3f) */
/* WARNING: Removing unreachable block (ram,0x00014db3e9cb) */
/* WARNING: Removing unreachable block (ram,0x00016531f887) */
/* WARNING: Removing unreachable block (ram,0x00016531f88d) */
/* WARNING: Removing unreachable block (ram,0x00016531f892) */
/* WARNING: Removing unreachable block (ram,0x00014dcb64fa) */
/* WARNING: Removing unreachable block (ram,0x00014dcb6500) */
/* WARNING: Removing unreachable block (ram,0x00014dcb6582) */
/* WARNING: Removing unreachable block (ram,0x00014dcb6588) */
/* WARNING: Removing unreachable block (ram,0x00014dcb658d) */
/* WARNING: Removing unreachable block (ram,0x000165c95a73) */
/* WARNING: Removing unreachable block (ram,0x000165c95b56) */
/* WARNING: Removing unreachable block (ram,0x000165c95b5a) */
/* WARNING: Removing unreachable block (ram,0x000165c95bab) */
/* WARNING: Removing unreachable block (ram,0x000165c95bb7) */
/* WARNING: Removing unreachable block (ram,0x000165c95bbc) */
/* WARNING: Removing unreachable block (ram,0x000164810def) */
/* WARNING: Removing unreachable block (ram,0x00016531f7f1) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b2c7d1f) */
/* WARNING: Removing unreachable block (ram,0x000161d2ca22) */
/* WARNING: Removing unreachable block (ram,0x000161d2ca94) */
/* WARNING: Removing unreachable block (ram,0x000161d2caac) */
/* WARNING: Removing unreachable block (ram,0x000161d2caa6) */
/* WARNING: Removing unreachable block (ram,0x00016531f794) */
/* WARNING: Removing unreachable block (ram,0x00016531f79c) */
/* WARNING: Removing unreachable block (ram,0x00016531f7a0) */
/* WARNING: Removing unreachable block (ram,0x00016531f7f2) */
/* WARNING: Removing unreachable block (ram,0x000161dc0c6c) */

undefined8 FUN_14dcb6469(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_162063624(param_1);
  uVar1 = FUN_15b88224f(0x173ca2b2b,0x1e0bc14b);
  return uVar1;
}



// FUNCTION 14dcb658d FUN_14dcb658d body=54 status=ok
// SIG undefined FUN_14dcb658d(void)

undefined8 FUN_14dcb658d(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dcb6646 FUN_14dcb6646 body=48 status=ok
// SIG undefined FUN_14dcb6646(void)

void FUN_14dcb6646(undefined8 param_1)

{
  thunk_FUN_15b642ca5(param_1);
  return;
}



// FUNCTION 14dcb6971 FUN_14dcb6971 body=134 status=ok
// SIG undefined FUN_14dcb6971(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb69f1) */
/* WARNING: Removing unreachable block (ram,0x00014dcb69f7) */
/* WARNING: Removing unreachable block (ram,0x00016249067a) */
/* WARNING: Removing unreachable block (ram,0x000162490680) */
/* WARNING: Removing unreachable block (ram,0x0001624906bf) */
/* WARNING: Removing unreachable block (ram,0x0001624906a6) */

undefined8 FUN_14dcb6971(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  lVar2 = ((param_1 - 1) - ~*(ulonglong *)(unaff_RDI + -0x60)) +
          (*(ulonglong *)(unaff_RDI + -0x60) & param_1) * -2;
  uVar1 = FUN_162a5082d(param_1,lVar2,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,lVar2);
  return uVar1;
}



// FUNCTION 14dcb69f7 FUN_14dcb69f7 body=26 status=ok
// SIG undefined FUN_14dcb69f7(void)

undefined8 FUN_14dcb69f7(void)

{
  longlong unaff_R12;
  
  return *(undefined8 *)(unaff_R12 + -0x58);
}



// FUNCTION 14dcb6a81 FUN_14dcb6a81 body=185 status=ok
// SIG undefined FUN_14dcb6a81(void)

void FUN_14dcb6a81(void)

{
  return;
}



// FUNCTION 14dcb6b3d thunk_FUN_14dcb6b43 body=5 status=ok
// SIG undefined thunk_FUN_14dcb6b43(void)

void thunk_FUN_14dcb6b43(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_14e06d98f(unaff_retaddr,param_2,uStackX_8);
  return;
}



// FUNCTION 14dcb6b43 FUN_14dcb6b43 body=132 status=ok
// SIG undefined FUN_14dcb6b43(void)

void FUN_14dcb6b43(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  
  FUN_14e06d98f(unaff_retaddr,param_2,uStackX_8);
  return;
}



// FUNCTION 14dcb6e26 FUN_14dcb6e26 body=300 status=ok
// SIG undefined FUN_14dcb6e26(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb6ecc) */
/* WARNING: Removing unreachable block (ram,0x00014dcb6ed2) */

void FUN_14dcb6e26(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong in_stack_00000010;
  ulonglong local_res20;
  
  puVar2 = (undefined8 *)(local_res20 + param_1 + (local_res20 & param_1) * -2);
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)(in_stack_00000010 + param_1 + (in_stack_00000010 & param_1) * -2);
  *puVar2 = param_3;
  puVar2[-1] = param_3;
  puVar2[-2] = &LAB_161892962;
  return;
}



// FUNCTION 14dcb71a6 FUN_14dcb71a6 body=135 status=ok
// SIG undefined FUN_14dcb71a6(void)

void FUN_14dcb71a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBX;
  ulonglong unaff_R14;
  undefined8 local_res8;
  
  if ((unaff_RBX & unaff_R14) == 0) {
    FUN_160e7834c();
    return;
  }
  DAT_14d7ab1eb = FUN_166ddbbfb(param_1,param_2,param_3,param_4);
  LOCK();
  UNLOCK();
  *(undefined8 *)(local_res8 + -8) = 0x139408;
  FUN_156c79161();
  return;
}



// FUNCTION 14dcb773a FUN_14dcb773a body=143 status=ok
// SIG undefined FUN_14dcb773a(void)

void FUN_14dcb773a(void)

{
  return;
}



// FUNCTION 14dcb7ae8 FUN_14dcb7ae8 body=126 status=ok
// SIG undefined FUN_14dcb7ae8(void)

longlong FUN_14dcb7ae8(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return *(ulonglong *)(unaff_R13 + -0x38) + unaff_R15 +
         (*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) * -2;
}



// FUNCTION 14dcb7b66 FUN_14dcb7b66 body=334 status=ok
// SIG undefined FUN_14dcb7b66(void)

void FUN_14dcb7b66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  undefined8 in_R11;
  ulonglong *unaff_R15;
  undefined8 uStackX_18;
  
  FUN_1623912ec(param_1,param_2,8,param_4);
  uVar1 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  uVar2 = *unaff_R15;
  *unaff_R15 = *unaff_R15 & unaff_RBP;
  *unaff_R15 = (uVar2 + unaff_RBP) - *unaff_R15;
  *unaff_R15 = ~((~unaff_RBP | uVar1) & *unaff_R15);
  param_6 = param_6 ^ unaff_RBP;
  *(undefined8 *)(param_6 - 8) = in_R11;
  *(undefined8 *)(param_6 - 0x10) = uStackX_18;
  *(undefined8 *)(param_6 - 0x18) = uStackX_18;
  uVar1 = *(ulonglong *)(param_6 - 8);
  *(undefined8 *)(param_6 - 0x10) = 0;
  *(ulonglong *)(param_6 - 0x10) = *(ulonglong *)(param_6 - 0x10) ^ uVar1;
  uVar3 = *(undefined8 *)(param_6 - 0x18);
  *(undefined8 *)(param_6 - 0x18) = param_2;
  *(undefined1 **)(param_6 - 8) = &LAB_14d878882;
  *(undefined8 *)(param_6 - 0x18) = uVar3;
  *(undefined8 *)(param_6 - 0x20) = uVar3;
  *(undefined8 *)(param_6 - 0x28) = uVar3;
  *(code **)(param_6 - 0x18) = FUN_14dcb7cb5;
  *(undefined8 *)(param_6 - 0x20) = 0x14d878857;
  return;
}



// FUNCTION 14dcb7cb5 FUN_14dcb7cb5 body=165 status=ok
// SIG undefined FUN_14dcb7cb5(void)

void FUN_14dcb7cb5(void)

{
  return;
}



// FUNCTION 14dcb7df0 FUN_14dcb7df0 body=128 status=ok
// SIG undefined FUN_14dcb7df0(void)

void FUN_14dcb7df0(void)

{
  return;
}



// FUNCTION 14dcb7f22 FUN_14dcb7f22 body=146 status=ok
// SIG undefined FUN_14dcb7f22(void)

void FUN_14dcb7f22(void)

{
  return;
}



// FUNCTION 14dcb80b8 FUN_14dcb80b8 body=150 status=ok
// SIG undefined FUN_14dcb80b8(void)

void FUN_14dcb80b8(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_15b75cb51(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                (*(ulonglong *)(unaff_R12 + -0x78) - in_RAX) +
                (~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) * -2 + -2);
  return;
}



// FUNCTION 14dcb845a FUN_14dcb845a body=403 status=ok
// SIG undefined FUN_14dcb845a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb84f1) */
/* WARNING: Removing unreachable block (ram,0x0001624d85c5) */
/* WARNING: Removing unreachable block (ram,0x00014dcb84f7) */
/* WARNING: Removing unreachable block (ram,0x00014dcb859e) */
/* WARNING: Removing unreachable block (ram,0x00014dcb85a4) */
/* WARNING: Removing unreachable block (ram,0x00014dcb8599) */
/* WARNING: Removing unreachable block (ram,0x000166cfc26b) */
/* WARNING: Removing unreachable block (ram,0x000166cfc2a8) */
/* WARNING: Removing unreachable block (ram,0x000161237456) */
/* WARNING: Removing unreachable block (ram,0x0001612374ae) */
/* WARNING: Removing unreachable block (ram,0x0001612374b4) */
/* WARNING: Removing unreachable block (ram,0x0001665b8b33) */

void FUN_14dcb845a(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  short *unaff_RDI;
  undefined8 local_res20;
  
  *unaff_RDI = -0x2f61;
  *unaff_RDI = *unaff_RDI + 0x2f61;
  *unaff_RDI = *unaff_RDI + (-0xff - (~param_3 + 2));
  *(undefined8 *)(local_res20 + -8) = unaff_RBP;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res20 + -0x20) = in_RAX;
  *(undefined8 *)(local_res20 + -0x20) = *(undefined8 *)(local_res20 + -0x20);
  *(undefined4 *)(local_res20 + -0x28) = 0xaa811caf;
  *(undefined4 *)(local_res20 + -0x24) = 0xffffffff;
  FUN_1624d85c5();
  return;
}



// FUNCTION 14dcb8628 FUN_14dcb8628 body=62 status=ok
// SIG undefined FUN_14dcb8628(void)

void FUN_14dcb8628(undefined1 param_1)

{
  undefined1 uVar1;
  char in_AL;
  longlong unaff_R14;
  
                    /* WARNING: Read-only address (ram,0x00014d7a8e9f) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a8e9f;
  }
  uRam000000014d7a8e9f = uVar1;
  UNLOCK();
  *(undefined8 *)(*(longlong *)(&stack0xfffffffffaad4ad1 + unaff_R14) + -8) = 0x208dc86;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dcb86d9 FUN_14dcb86d9 body=143 status=ok
// SIG undefined FUN_14dcb86d9(void)

/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */

undefined8 FUN_14dcb86d9(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ushort uVar4;
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
  longlong lStackX_8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  uVar18 = local_res10 ^ param_1;
  plVar1 = (longlong *)(~(local_res18 & param_1) & (local_res18 | param_1));
  if (&DAT_ffffffffffffffe7 < &stack0xfffffffffffffff8) {
    return in_RAX;
  }
  local_res10._0_2_ = (ushort)uVar18;
  uVar4 = ((ushort)local_res10 | 0x100) - 0x100;
  bVar13 = (uVar4 & 0x4000) != 0;
  bVar12 = (uVar4 & 0x800) != 0;
  bVar11 = (uVar4 & 0x200) != 0;
  bVar10 = (uVar4 & 0x100) != 0;
  bVar9 = (uVar4 & 0x80) != 0;
  bVar8 = (uVar4 & 0x40) != 0;
  bVar7 = (uVar4 & 0x10) != 0;
  bVar6 = (uVar4 & 4) != 0;
  bVar5 = (uVar4 & 1) != 0;
  bVar17 = (uVar18 & 0x200000) != 0;
  bVar14 = (uVar18 & 0x40000) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(lStackX_8,param_2);
  *plVar1 = param_4;
  plVar1[-1] = param_4;
  plVar1[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
               (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
               (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
               (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
               (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
               (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
               (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  uVar18 = plVar1[-2];
  plVar1[-2] = (ulonglong)((uVar18 & 0x4000) != 0) * 0x4000 |
               (ulonglong)((uVar18 & 0x800) != 0) * 0x800 |
               (ulonglong)((uVar18 & 0x400) != 0) * 0x400 |
               (ulonglong)((uVar18 & 0x200) != 0) * 0x200 |
               (ulonglong)((uVar18 & 0x100) != 0) * 0x100 | (ulonglong)((uVar18 & 0x80) != 0) * 0x80
               | (ulonglong)((uVar18 & 0x40) != 0) * 0x40 | (ulonglong)((uVar18 & 0x10) != 0) * 0x10
               | (ulonglong)((uVar18 & 4) != 0) * 4 | (ulonglong)((uVar18 & 1) != 0) |
               (ulonglong)((uVar18 & 0x200000) != 0) * 0x200000 |
               (ulonglong)((uVar18 & 0x40000) != 0) * 0x40000;
  plVar1[-3] = lStackX_8;
  *(undefined4 *)(plVar1 + -4) = 0x315b6baa;
  *(undefined4 *)((longlong)plVar1 - 0x1c) = 0;
  *plVar1 = 0xc100a4e - (plVar1[-4] ^ 0x39c26a64U);
  if ((plVar1[-2] & 0x40U) == 0) {
    uVar3 = FUN_165c7153c(plVar1[-3]);
    return uVar3;
  }
  uVar3 = FUN_15b5c6457();
  return uVar3;
}



// FUNCTION 14dcb894e FUN_14dcb894e body=130 status=ok
// SIG undefined FUN_14dcb894e(void)

void FUN_14dcb894e(undefined8 param_1)

{
  (*(code *)0x161857d67)(param_1);
  return;
}



// FUNCTION 14dcb8a53 FUN_14dcb8a53 body=291 status=ok
// SIG undefined FUN_14dcb8a53(void)

/* WARNING: Removing unreachable block (ram,0x00016493e475) */
/* WARNING: Removing unreachable block (ram,0x00016493e481) */
/* WARNING: Removing unreachable block (ram,0x00016493e486) */
/* WARNING: Removing unreachable block (ram,0x00015b2c76c0) */
/* WARNING: Removing unreachable block (ram,0x00014dcb8aed) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb8a53(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong in_R10;
  ulonglong unaff_retaddr;
  ulonglong uStackX_8;
  
  uVar1 = uStackX_8 ^ unaff_retaddr;
  uStackX_8._0_4_ = (uint)uVar1;
  iVar2 = ~((uint)unaff_retaddr | (uint)uStackX_8) + 1 + (uint)uStackX_8 + (uint)unaff_retaddr;
  if (iVar2 == 0) {
    *(undefined8 *)(uVar1 - 8) = 0x68e7a88;
    FUN_165c7153c(in_R10 ^ unaff_retaddr,param_2,param_3,param_4);
    return;
  }
  FUN_1614208a6(iVar2);
  return;
}



// FUNCTION 14dcb8b7a FUN_14dcb8b7a body=268 status=ok
// SIG undefined FUN_14dcb8b7a(void)

undefined8 FUN_14dcb8b7a(undefined1 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong unaff_R13;
  longlong unaff_R14;
  
  uVar1 = FUN_164ab93ac(param_1,~-*(longlong *)(unaff_R13 + -0x90) + 1,param_3 - unaff_R14);
  return uVar1;
}



// FUNCTION 14dcb8c88 FUN_14dcb8c88 body=74 status=ok
// SIG undefined FUN_14dcb8c88(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dcb8c88(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  undefined8 local_res10;
  
  plVar1 = (longlong *)(local_res10 + -8);
  *plVar1 = unaff_RDI;
  *(longlong *)(local_res10 + -0x10) = *plVar1;
  *plVar1 = 0;
  *plVar1 = *plVar1 + 0x14dcb8ce2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dcb8e69 FUN_14dcb8e69 body=174 status=ok
// SIG undefined FUN_14dcb8e69(void)

void FUN_14dcb8e69(void)

{
  return;
}



// FUNCTION 14dcb915b FUN_14dcb915b body=295 status=ok
// SIG undefined FUN_14dcb915b(void)

void FUN_14dcb915b(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  longlong unaff_R15;
  undefined1 local_res8;
  undefined8 local_res10;
  
  uVar2 = param_2 + unaff_R15 + param_3;
  FUN_164774cb2(param_1,uVar2,~uVar2 & unaff_RBX);
  bVar1 = 0x98 - ~(local_res8 + 0x8eU) & 0x1f;
  FUN_1614b5879(local_res10,(uint)uVar2 << bVar1 | (uint)uVar2 >> 0x20 - bVar1);
  return;
}



// FUNCTION 14dcb9286 FUN_14dcb9286 body=59 status=ok
// SIG undefined FUN_14dcb9286(void)

void FUN_14dcb9286(undefined1 param_1,undefined8 param_2,short param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 uVar1;
  char in_AL;
  short unaff_SI;
  short *unaff_R12;
  undefined8 unaff_R13;
  
  *unaff_R12 = unaff_SI + param_3 + 1;
                    /* WARNING: Read-only address (ram,0x00014d7a52a3) is written */
  LOCK();
  uVar1 = param_1;
  if (in_AL != '\0') {
    uVar1 = uRam000000014d7a52a3;
  }
  uRam000000014d7a52a3 = uVar1;
  UNLOCK();
  *(undefined8 *)(param_5 + -8) = 0x47c2aaa;
  *(undefined8 *)(param_5 + -0x28cf) = unaff_R13;
  *(undefined8 *)(param_5 + -0x28d7) = unaff_R13;
  *(undefined **)(param_5 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dcb93f2 FUN_14dcb93f2 body=163 status=ok
// SIG undefined FUN_14dcb93f2(void)

void FUN_14dcb93f2(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156ed2c30(1,FUN_156ed2c30,
                -1 - (~(in_RAX & ~*(ulonglong *)(unaff_R12 + -0x80)) &
                     (*(ulonglong *)(unaff_R12 + -0x80) ^ 0xffffffffffffffff | in_RAX)));
  FUN_14dcb9497();
  return;
}



// FUNCTION 14dcb9497 FUN_14dcb9497 body=111 status=ok
// SIG undefined FUN_14dcb9497(void)

void FUN_14dcb9497(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_14d7bf0a6(local_res10,param_2,param_3);
  return;
}



// FUNCTION 14dcb9535 FUN_14dcb9535 body=3 status=ok
// SIG undefined FUN_14dcb9535(void)

void FUN_14dcb9535(void)

{
  return;
}



// FUNCTION 14dcb9742 FUN_14dcb9742 body=129 status=ok
// SIG undefined FUN_14dcb9742(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb9857) */

void FUN_14dcb9742(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  longlong in_R9;
  longlong unaff_R12;
  undefined8 uStackX_18;
  undefined8 in_stack_00000028;
  ulonglong in_stack_00000030;
  longlong in_stack_00000038;
  
  uVar4 = ~in_RAX & *(ulonglong *)(unaff_R12 + -0x58) | in_RAX;
  uVar3 = ~(*(ulonglong *)(unaff_R12 + -0x58) & in_RAX);
  uVar3 = FUN_14dc6ec55(uVar3,uVar3 | uVar4,*(ulonglong *)(unaff_R12 + -0x80) ^ in_RAX);
  lVar1 = *(longlong *)(in_R9 + 0x10);
  *(ulonglong *)(in_R9 + 0x10) = *(ulonglong *)(in_R9 + 0x10) & uVar3;
  *(ulonglong *)(in_R9 + 0x10) = (lVar1 + uVar3) - *(longlong *)(in_R9 + 0x10);
  *(ulonglong *)(in_R9 + 0x10) = ~(uVar4 & *(ulonglong *)(in_R9 + 0x10));
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_stack_00000028 >> 8),DAT_14d7c03f9);
  UNLOCK();
  DAT_14d7c03f9 = (char)in_stack_00000028;
  *(undefined8 *)(in_stack_00000038 + -8) = uStackX_18;
  *(undefined8 *)(in_stack_00000038 + -0x10) = uStackX_18;
  if ((in_stack_00000030 & 0x80) == 0) {
    thunk_FUN_165db2c5d();
    return;
  }
  *(undefined4 *)(in_stack_00000038 + -0x18) = 0xb2ca641;
  *(undefined8 *)(in_stack_00000038 + -0x20) = uVar2;
  *(ulonglong *)(in_stack_00000038 + -0x28) =
       (ulonglong)((in_stack_00000030 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((in_stack_00000030 & 0x800) != 0) * 0x800 |
       (ulonglong)((in_stack_00000030 & 0x400) != 0) * 0x400 |
       (ulonglong)((in_stack_00000030 & 0x200) != 0) * 0x200 | 0x80 |
       (ulonglong)((in_stack_00000030 & 0x40) != 0) * 0x40 |
       (ulonglong)((in_stack_00000030 & 0x10) != 0) * 0x10 |
       (ulonglong)((in_stack_00000030 & 4) != 0) * 4 | (ulonglong)((in_stack_00000030 & 1) != 0) |
       (ulonglong)((in_stack_00000030 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((in_stack_00000030 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(in_stack_00000038 + -0x14) = 0;
  uVar3 = *(ulonglong *)(in_stack_00000038 + -0x28);
  lVar1 = *(longlong *)(in_stack_00000038 + -0x18);
  *(ulonglong *)(in_stack_00000038 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(in_stack_00000038 + -0x18);
  *(undefined8 *)(in_stack_00000038 + -0x18) = unaff_RDI;
  *(ulonglong *)(in_stack_00000038 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(longlong *)(in_stack_00000038 + -8) = lVar1 + -0x865f2ef;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dcb97c6 FUN_14dcb97c6 body=282 status=ok
// SIG undefined FUN_14dcb97c6(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb9857) */

void FUN_14dcb97c6(undefined1 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 in_stack_00000020;
  
  lVar1 = *(longlong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = *(ulonglong *)(param_4 + 0x10) & in_RAX;
  *(ulonglong *)(param_4 + 0x10) = (lVar1 + in_RAX) - *(longlong *)(param_4 + 0x10);
  *(ulonglong *)(param_4 + 0x10) = ~(unaff_RSI & *(ulonglong *)(param_4 + 0x10));
  LOCK();
  uVar2 = CONCAT71((int7)((ulonglong)in_stack_00000020 >> 8),DAT_14d7c03f9);
  UNLOCK();
  DAT_14d7c03f9 = (char)in_stack_00000020;
  *(undefined8 *)(param_6 + -8) = uStackX_10;
  *(undefined8 *)(param_6 + -0x10) = uStackX_10;
  if ((param_5 & 0x80) == 0) {
    thunk_FUN_165db2c5d();
    return;
  }
  *(undefined4 *)(param_6 + -0x18) = 0xb2ca641;
  *(undefined8 *)(param_6 + -0x20) = uVar2;
  *(ulonglong *)(param_6 + -0x28) =
       (ulonglong)((param_5 & 0x4000) != 0) * 0x4000 | (ulonglong)((param_5 & 0x800) != 0) * 0x800 |
       (ulonglong)((param_5 & 0x400) != 0) * 0x400 | (ulonglong)((param_5 & 0x200) != 0) * 0x200 |
       0x80 | (ulonglong)((param_5 & 0x40) != 0) * 0x40 | (ulonglong)((param_5 & 0x10) != 0) * 0x10
       | (ulonglong)((param_5 & 4) != 0) * 4 | (ulonglong)((param_5 & 1) != 0) |
       (ulonglong)((param_5 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((param_5 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(param_6 + -0x14) = 0;
  uVar3 = *(ulonglong *)(param_6 + -0x28);
  lVar1 = *(longlong *)(param_6 + -0x18);
  *(ulonglong *)(param_6 + -0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = unaff_RDI;
  *(ulonglong *)(param_6 + -0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(longlong *)(param_6 + -8) = lVar1 + -0x865f2ef;
  FUN_14d85d504(param_1,uStackX_8,param_3,*(undefined8 *)(param_6 + -0x10));
  return;
}



// FUNCTION 14dcb9cf5 FUN_14dcb9cf5 body=85 status=ok
// SIG undefined FUN_14dcb9cf5(void)

void FUN_14dcb9cf5(undefined8 param_1)

{
  undefined2 *unaff_RDI;
  undefined2 in_R10W;
  ulonglong unaff_R12;
  undefined8 uStackX_10;
  longlong in_stack_00000028;
  
  *unaff_RDI = in_R10W;
  *(undefined8 *)(in_stack_00000028 + -8) = 0x61d5fb9f;
  *(ulonglong *)(in_stack_00000028 + -8) = *(ulonglong *)(in_stack_00000028 + -8) ^ 0x61d5fb9f;
  *(ulonglong *)(in_stack_00000028 + -8) = *(ulonglong *)(in_stack_00000028 + -8) ^ unaff_R12;
  *(undefined8 *)(in_stack_00000028 + -0x10) = *(undefined8 *)(in_stack_00000028 + -8);
  *(undefined8 *)(in_stack_00000028 + -8) = 0;
  *(longlong *)(in_stack_00000028 + -8) = *(longlong *)(in_stack_00000028 + -8) + -0x14dcb9d62;
  *(longlong *)(in_stack_00000028 + -8) = -*(longlong *)(in_stack_00000028 + -8);
  FUN_14d7a6884(param_1,uStackX_10);
  return;
}



// FUNCTION 14dcb9e26 FUN_14dcb9e26 body=173 status=ok
// SIG undefined FUN_14dcb9e26(void)

void FUN_14dcb9e26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  
  FUN_166423d92(param_1,0,param_3,*(undefined8 *)(unaff_R13 + -0x40));
  FUN_14dcb9ed5();
  return;
}



// FUNCTION 14dcb9ed5 FUN_14dcb9ed5 body=941 status=ok
// SIG undefined FUN_14dcb9ed5(void)

/* WARNING: Removing unreachable block (ram,0x00014dcb9fea) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcb9ed5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_RAX;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  code *pcVar10;
  ulonglong unaff_RDI;
  longlong in_R11;
  ulonglong unaff_R15;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong *local_res18;
  
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = ~(ushort)local_res10;
  local_res10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = uVar1 | 0x100;
  local_res10._0_2_ = uVar1;
                    /* WARNING (jumptable): Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  local_res10._0_2_ = ~uVar1;
  bVar14 = (local_res10 & 0x4000) != 0;
  bVar13 = (local_res10 & 0x200) != 0;
  bVar12 = (local_res10 & 0x100) != 0;
  bVar11 = (local_res10 & 0x10) != 0;
  bVar18 = (local_res10 & 0x200000) != 0;
  bVar15 = (local_res10 & 0x40000) != 0;
  bVar17 = 0;
  bVar16 = 0;
  local_res18[-1] = param_1;
  puVar8 = &LAB_156ece54d;
  local_res18[-2] = local_res18[-1];
  local_res18[-3] = in_RAX;
  local_res18[-4] = param_2;
  pcVar10 = FUN_156ece503;
  local_res18[-5] = 0x14dcb9f62;
  lVar7 = FUN_156ece503();
  uVar3 = local_res18[-4];
  uVar4 = local_res18[-3];
  local_res18[-3] = unaff_RDI;
  uVar5 = local_res18[-3];
  local_res18[-3] = param_3;
  *(undefined1 **)
   ((longlong)local_res18 +
   ~(~((longlong)pcVar10 - in_R11 ^ 0xffffffffffffffffU) &
    ((unaff_R15 & 0xffffffffd886af83 ^ 0xffffffffffffffff) - 0x2779507d) - ~unaff_R15)) = puVar8;
  uVar6 = *local_res18;
  *local_res18 = (ulonglong)(bVar14 & 1) * 0x4000 |
                 (ulonglong)SCARRY8((longlong)(local_res18 + -1),8) * 0x800 |
                 (ulonglong)((local_res10 & 0x400) != 0) * 0x400 | (ulonglong)(bVar13 & 1) * 0x200 |
                 (ulonglong)(bVar12 & 1) * 0x100 | (ulonglong)((longlong)local_res18 < 0) * 0x80 |
                 (ulonglong)(local_res18 == (ulonglong *)0x0) * 0x40 |
                 (ulonglong)(bVar11 & 1) * 0x10 |
                 (ulonglong)((POPCOUNT((ulonglong)local_res18 & 0xff) & 1U) == 0) * 4 |
                 (ulonglong)(&DAT_fffffffffffffff7 < local_res18 + -1) |
                 (ulonglong)(bVar18 & 1) * 0x200000 | (ulonglong)(bVar17 & 1) * 0x100000 |
                 (ulonglong)(bVar16 & 1) * 0x80000 | (ulonglong)(bVar15 & 1) * 0x40000;
  *local_res18 = *local_res18 | 4;
  if ((*local_res18 & 4) == 0) {
    *(undefined2 *)((longlong)local_res18 + -2) = ActivationContextStackPointer._4_2_;
    *local_res18 = 0;
    *local_res18 = *local_res18;
    *local_res18 = *local_res18 + lVar7;
    *(uint *)local_res18 = 0x9d4869c0;
    *(uint *)local_res18 = (uint)*local_res18 ^ 0x416827a0;
    puVar9 = (uint *)((longlong)local_res18 + 4);
    *puVar9 = 0;
    *puVar9 = *puVar9 + 0x6f8faaea;
    local_res18[-1] = unaff_retaddr;
    uVar2 = *puVar9;
    *puVar9 = *puVar9 | 0xf7046dad;
    *puVar9 = ~(~(uVar2 & 0xf7046dad) & *puVar9);
    local_res18[-2] = 0x166b0389c;
    FUN_1612fb85c();
    uVar4 = *local_res18;
    *local_res18 = (ulonglong)FUN_1612fb85c;
    local_res18[-1] = local_res8;
    local_res18[-1] = (ulonglong)puVar9;
    local_res18[-2] = uVar5;
    local_res18[-3] = uVar4;
    FUN_14d7f8189(FUN_14d7f8189);
    return;
  }
  *local_res18 = uVar4;
  if (uVar6 == 0) {
    return;
  }
  if (DAT_14c872d28 == (longlong *)0x0) {
    local_res18[-5] = 0x1400020df;
    FUN_1460d69fa(0,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,uVar6);
  return;
}



// FUNCTION 14dcba128 FUN_14dcba128 body=133 status=ok
// SIG undefined FUN_14dcba128(void)

void FUN_14dcba128(void)

{
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R13;
  undefined8 auStackX_18 [2];
  
  *(undefined8 *)((longlong)auStackX_18 + unaff_RSI) = unaff_RBP;
  auStackX_18[0] = *(undefined8 *)(unaff_R13 + -0x98);
  (*(code *)&LAB_1620633f5)();
  return;
}



// FUNCTION 14dcba1c2 FUN_14dcba1c2 body=138 status=ok
// SIG undefined FUN_14dcba1c2(void)

void FUN_14dcba1c2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  FUN_16685967e(FUN_16685967e,*(longlong *)(param_3 + -0x90) + in_R10,param_3,
                *(ulonglong *)(param_3 + -0x78) ^ in_R10);
  return;
}



// FUNCTION 14dcba54d FUN_14dcba54d body=21 status=ok
// SIG undefined FUN_14dcba54d(void)

void FUN_14dcba54d(void)

{
  FUN_1574ba9da();
  return;
}



// FUNCTION 14dcba562 FUN_14dcba562 body=141 status=ok
// SIG undefined FUN_14dcba562(void)

void FUN_14dcba562(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0xf45b5) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xf45b6) {
    FUN_1574ba9da();
    return;
  }
  if (unaff_R14 == 0xf45b7) {
    return;
  }
  FUN_1663179d7();
  return;
}



// FUNCTION 14dcba5f0 FUN_14dcba5f0 body=555 status=ok
// SIG undefined FUN_14dcba5f0(void)

/* WARNING: Removing unreachable block (ram,0x00014dcba727) */
/* WARNING: Removing unreachable block (ram,0x00014dcba738) */
/* WARNING: Removing unreachable block (ram,0x00014dcba7d4) */
/* WARNING: Removing unreachable block (ram,0x00014dcba7da) */
/* WARNING: Removing unreachable block (ram,0x00016146fd5d) */
/* WARNING: Removing unreachable block (ram,0x00016146fd8b) */
/* WARNING: Removing unreachable block (ram,0x00016146fd95) */
/* WARNING: Removing unreachable block (ram,0x00014dd03a5c) */
/* WARNING: Removing unreachable block (ram,0x00014dcba733) */
/* WARNING: Removing unreachable block (ram,0x00014dd039dd) */

undefined8
FUN_14dcba5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 in_R10;
  ulonglong unaff_R13;
  bool in_ZF;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (in_ZF) {
    uVar1 = FUN_16131bb16();
    return uVar1;
  }
  if (unaff_RSI != 0xc8b93) {
    FUN_14da4407f();
    *(ushort *)(unaff_R13 ^ unaff_RBP) = 0xfeff - ~(*(ushort *)(unaff_R13 ^ unaff_RBP) | 0x100);
    *(undefined8 *)(param_6 + -0x10) = local_res10;
    *(undefined8 *)(param_6 + -8) = in_R10;
    uVar1 = *(undefined8 *)(param_6 + -0x10);
    *(undefined8 *)(param_6 + -0x10) = local_res20;
    *(undefined8 *)(param_6 + -0x18) = local_res20;
    *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
    *(undefined8 *)(param_6 + -0x18) = param_4;
    *(undefined8 *)(param_6 + -0x20) = 0;
    *(undefined8 *)(param_6 + -8) = *(undefined8 *)(param_6 + -0x20);
    *(longlong *)(param_6 + -8) = (longlong)(&LAB_1615dfb82 + *(longlong *)(param_6 + -8));
    *(undefined8 *)(param_6 + -0x18) = param_3;
    *(undefined8 *)(param_6 + -0x10) = uVar1;
    *(undefined8 *)(param_6 + -0x18) = uVar1;
    *(undefined8 *)(param_6 + -0x10) = 0x14d7c215a;
    if (~(*(ulonglong *)(param_6 + -8) & unaff_RSI) + unaff_RSI == ~*(ulonglong *)(param_6 + -8)) {
      uVar1 = FUN_1615dfb5a();
      return uVar1;
    }
    return local_res18;
  }
  uVar1 = FUN_16131bb16();
  return uVar1;
}



// FUNCTION 14dcba867 FUN_14dcba867 body=653 status=ok
// SIG undefined FUN_14dcba867(void)

/* WARNING: Removing unreachable block (ram,0x00014dcba8f4) */
/* WARNING: Removing unreachable block (ram,0x00014dcba981) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcba867(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 unaff_RSI;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  longlong local_res18;
  byte local_8;
  
  param_3 = param_3 - local_res18;
  if ((&DAT_ffffffffffffffef < &stack0x00000000) && (&stack0x00000000 < &DAT_fffffffffffffff0)) {
    local_8 = (byte)param_2;
    FUN_164ad5281(param_1,~(local_8 & 0x10) + local_8 + '\x11',unaff_retaddr,FUN_164ad5281);
    FUN_164c670a0();
    return;
  }
  plVar1 = (longlong *)(param_3 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1;
  *plVar1 = *plVar1 - unaff_R12;
  *plVar1 = -*plVar1;
  *(undefined8 *)(param_3 + -0x10) = 0x156a4b75e;
  FUN_166229e91(param_1,param_2,unaff_retaddr);
  *(undefined8 *)(param_3 + -8) = unaff_RSI;
  puVar2 = (undefined8 *)(param_3 + -0x10);
  *puVar2 = unaff_R14;
  *puVar2 = *puVar2;
  *(undefined8 *)(param_3 + -0x10) = param_2;
  *(code **)(param_3 + -0x18) = FUN_166229e91;
  FUN_1625451e0();
  return;
}



// FUNCTION 14dcbaa85 FUN_14dcbaa85 body=480 status=ok
// SIG undefined FUN_14dcbaa85(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbac62) */
/* WARNING: Removing unreachable block (ram,0x00014dcbac6d) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad36) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad39) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad65) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad6a) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad70) */
/* WARNING: Removing unreachable block (ram,0x00014dd00be5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbab0c) */
/* WARNING: Removing unreachable block (ram,0x00014dcbab12) */
/* WARNING: Removing unreachable block (ram,0x00014dcbab17) */
/* WARNING: Removing unreachable block (ram,0x00014dcbabbc) */
/* WARNING: Removing unreachable block (ram,0x00014dcbabc7) */
/* WARNING: Removing unreachable block (ram,0x00014dcbabcd) */
/* WARNING: Removing unreachable block (ram,0x00014dcbac5d) */
/* WARNING: Removing unreachable block (ram,0x0001574ee110) */
/* WARNING: Removing unreachable block (ram,0x00014dcbac68) */

void FUN_14dcbaa85(undefined8 param_1,undefined8 param_2)

{
  FUN_16511c802(param_1,param_2);
  return;
}



// FUNCTION 14dcbac6d FUN_14dcbac6d body=296 status=ok
// SIG undefined FUN_14dcbac6d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbad36) */
/* WARNING: Removing unreachable block (ram,0x00014dcbad70) */

void FUN_14dcbac6d(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_165bf604c();
  if (0xffffffff80d38a58 < (0x165bf604b - ~(uVar1 - (uVar1 | 0x165bf604c))) * 2) {
    return;
  }
  FUN_14dd00be5();
  return;
}



// FUNCTION 14dcbaf15 FUN_14dcbaf15 body=635 status=ok
// SIG undefined FUN_14dcbaf15(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbb0f9) */

void FUN_14dcbaf15(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
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
  longlong local_res8;
  ulonglong local_res10 [2];
  undefined8 local_res20;
  undefined4 uStackX_24;
  
  param_1 = in_RAX ^ param_1;
  lVar5 = -0x68;
  local_res8 = 0x14dcbafa1;
  uVar4 = FUN_161e06ff7();
  uVar2 = local_res10[0];
  uVar6 = -lVar5;
  local_res10[0] = uVar6;
  *(undefined8 *)(&stack0x00000028 + uVar6) = local_res20;
  puVar1 = (ulonglong *)((longlong)&stack0x00000020 + uVar6);
  *puVar1 = uVar4;
  *(undefined4 *)puVar1 = 0x39f01c3f;
  *(undefined4 *)((longlong)&uStackX_24 + uVar6) = 0;
  uVar4 = *puVar1;
  *(undefined8 *)((longlong)&stack0x00000020 + uVar6) = in_R10;
  *(undefined8 *)((longlong)local_res10 + uVar6 + 8) = in_R11;
  *(ulonglong *)((longlong)local_res10 + uVar6) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | 0x80 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)((longlong)&local_res8 + uVar6) = unaff_RDI;
  if ((*(ushort *)((longlong)local_res10 + uVar6) & 1) == 0) {
    FUN_161d7c507();
    return;
  }
  lVar5 = *(longlong *)((longlong)&local_res8 + uVar6);
  if ((*(ulonglong *)((longlong)local_res10 + uVar6) & 1) == 0 &&
      (*(ulonglong *)((longlong)local_res10 + uVar6) & 0x40) == 0) {
    *(undefined8 *)((longlong)local_res10 + uVar6 + 8) = *(undefined8 *)(lVar5 + -0x40);
    uVar2 = *(ulonglong *)(lVar5 + -0x50);
    lVar5 = uVar2 + uVar4;
    if (!CARRY8(uVar2,uVar4)) {
      FUN_1564969de(uVar4,lVar5);
      return;
    }
    FUN_1564969de(uVar4,lVar5);
    return;
  }
  *(ulonglong *)((longlong)local_res10 + uVar6 + 8) = param_1;
  *(ulonglong *)((longlong)local_res10 + uVar6) = local_res10[1];
  *(ulonglong *)((longlong)local_res10 + uVar6) = uVar2;
  uVar3 = *(undefined8 *)((longlong)&stack0x00000020 + uVar6);
  *(undefined8 *)((longlong)&stack0x00000020 + uVar6) =
       *(undefined8 *)((longlong)local_res10 + uVar6 + 8);
  *(undefined8 *)((longlong)local_res10 + uVar6 + 8) = uVar3;
  *(undefined8 *)((longlong)local_res10 + uVar6 + 8) =
       *(undefined8 *)((longlong)local_res10 + uVar6);
  *(undefined1 **)((longlong)local_res10 + uVar6) = &LAB_164b0de81;
  return;
}



// FUNCTION 14dcbb233 FUN_14dcbb233 body=155 status=ok
// SIG undefined FUN_14dcbb233(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbb2c4) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb2cf) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb2ca) */

void FUN_14dcbb233(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x12a18d) {
    FUN_16131bb16(param_1,param_2,param_3);
    return;
  }
  if (unaff_RSI == 0x12a18e) {
    FUN_16131bb16();
    return;
  }
  FUN_1613f8ad0();
  return;
}



// FUNCTION 14dcbb2cf FUN_14dcbb2cf body=123 status=ok
// SIG undefined FUN_14dcbb2cf(void)

void FUN_14dcbb2cf(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  
  uVar8 = *(ulonglong *)(unaff_R13 - 0x30) ^ unaff_R15;
  lVar6 = (unaff_R15 - 1) - ~*(ulonglong *)(unaff_R13 - 0x50);
  uVar4 = FUN_165714546(param_1,param_2 ^ unaff_R15);
  puVar1 = (undefined8 *)(&stack0xfffffffff67a8a3b + param_3);
  *puVar1 = unaff_R12;
  puVar1[-1] = FUN_165714546;
  puVar1[-2] = uVar4;
  *(undefined4 *)(puVar1 + -2) = 0xe9d92db;
  *(undefined4 *)((longlong)puVar1 + -0xc) = 0;
  uVar3 = puVar1[-2];
  puVar1[-2] = unaff_R14;
  puVar1[-1] = puVar1[-1];
  lVar7 = (~(~unaff_R13 | unaff_R15) |
          ~((~(~(uVar3 & 0xffffffffcd6ba1b6) & (uVar3 | 0xffffffffcd6ba1b6)) ^ 0x3c09cc92) +
           unaff_R15) | unaff_R13) + (~unaff_R13 | unaff_R15);
  uVar3 = puVar1[-1];
  puVar1[-2] = FUN_14dcbb3de;
  uVar5 = FUN_161b66fd5();
  *puVar1 = param_1;
  uVar4 = *puVar1;
  uVar2 = *(ulonglong *)(uVar8 - 0x58);
  *puVar1 = *(undefined8 *)(uVar8 - 0x88);
  puVar1[-1] = lVar6;
  puVar1[-2] = lVar6;
  puVar1[-3] = uVar5;
  puVar1[-4] = uVar8;
  puVar1[-6] = FUN_14dcbb467;
  FUN_161489ec6(uVar4,uVar2 ^ uVar3);
  uVar5 = puVar1[-4];
  uVar4 = *(undefined8 *)(lVar7 + -0x8f);
  puVar1[-4] = lVar6;
  puVar1[-5] = uVar4;
  puVar1[-4] = *(undefined8 *)(lVar7 + -0x67);
  puVar1[-5] = *(undefined8 *)(lVar7 + -7);
  puVar1[-6] = *(undefined8 *)(lVar7 + -0x97);
  puVar1[-7] = *(undefined8 *)(lVar7 + -0x9f);
  puVar1[-7] = FUN_161b66fd5;
  puVar1[-8] = unaff_R15;
  FUN_14e039229(uVar5);
  return;
}



// FUNCTION 14dcbb34b FUN_14dcbb34b body=146 status=ok
// SIG undefined FUN_14dcbb34b(void)

void FUN_14dcbb34b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  ulonglong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 local_res8;
  
  uVar2 = *(undefined8 *)(&stack0xfffffffff67a8a43 + param_3);
  *(undefined8 *)(&stack0xfffffffff67a8a43 + param_3) = unaff_R12;
  *(undefined8 *)(&stack0xfffffffff67a8a3b + param_3) = unaff_RBP;
  *(undefined8 *)(&stack0xfffffffff67a8a33 + param_3) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff67a8a33 + param_3) = 0xe9d92db;
  *(undefined4 *)(&stack0xfffffffff67a8a37 + param_3) = 0;
  uVar3 = *(ulonglong *)(&stack0xfffffffff67a8a33 + param_3);
  *(undefined8 *)(&stack0xfffffffff67a8a33 + param_3) = unaff_R14;
  *(undefined8 *)(&stack0xfffffffff67a8a3b + param_3) =
       *(undefined8 *)(&stack0xfffffffff67a8a3b + param_3);
  lVar5 = (~(~unaff_R13 | unaff_R15) |
          ~((~(~(uVar3 & 0xffffffffcd6ba1b6) & (uVar3 | 0xffffffffcd6ba1b6)) ^ 0x3c09cc92) +
           unaff_R15) | unaff_R13) + (~unaff_R13 | unaff_R15);
  uVar3 = *(ulonglong *)(&stack0xfffffffff67a8a3b + param_3);
  *(code **)(&stack0xfffffffff67a8a33 + param_3) = FUN_14dcbb3de;
  uVar4 = FUN_161b66fd5(param_1,param_2,uVar2,local_res8);
  *(undefined8 *)(&stack0xfffffffff67a8a43 + param_3) = param_1;
  uVar2 = *(undefined8 *)(&stack0xfffffffff67a8a43 + param_3);
  uVar1 = *(ulonglong *)(unaff_RSI + -0x58);
  *(undefined8 *)(&stack0xfffffffff67a8a43 + param_3) = *(undefined8 *)(unaff_RSI + -0x88);
  *(undefined8 *)(&stack0xfffffffff67a8a3b + param_3) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff67a8a33 + param_3) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff67a8a2b + param_3) = uVar4;
  *(longlong *)(&stack0xfffffffff67a8a23 + param_3) = unaff_RSI;
  *(code **)(&stack0xfffffffff67a8a13 + param_3) = FUN_14dcbb467;
  FUN_161489ec6(uVar2,uVar1 ^ uVar3);
  uVar4 = *(undefined8 *)(&stack0xfffffffff67a8a23 + param_3);
  uVar2 = *(undefined8 *)(lVar5 + -0x8f);
  *(undefined8 *)(&stack0xfffffffff67a8a23 + param_3) = unaff_RBX;
  *(undefined8 *)(&stack0xfffffffff67a8a1b + param_3) = uVar2;
  *(undefined8 *)(&stack0xfffffffff67a8a23 + param_3) = *(undefined8 *)(lVar5 + -0x67);
  *(undefined8 *)(&stack0xfffffffff67a8a1b + param_3) = *(undefined8 *)(lVar5 + -7);
  *(undefined8 *)(&stack0xfffffffff67a8a13 + param_3) = *(undefined8 *)(lVar5 + -0x97);
  *(undefined8 *)(&stack0xfffffffff67a8a0b + param_3) = *(undefined8 *)(lVar5 + -0x9f);
  *(code **)(&stack0xfffffffff67a8a0b + param_3) = FUN_161b66fd5;
  *(ulonglong *)(&stack0xfffffffff67a8a03 + param_3) = unaff_R15;
  FUN_14e039229(uVar4);
  return;
}



// FUNCTION 14dcbb3de FUN_14dcbb3de body=133 status=ok
// SIG undefined FUN_14dcbb3de(void)

void FUN_14dcbb3de(undefined8 param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_161489ec6(param_1,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  FUN_14e039229(unaff_RSI);
  return;
}



// FUNCTION 14dcbb467 FUN_14dcbb467 body=134 status=ok
// SIG undefined FUN_14dcbb467(void)

void FUN_14dcbb467(void)

{
  undefined8 in_stack_00000008;
  
  FUN_14e039229(in_stack_00000008);
  return;
}



// FUNCTION 14dcbb4ee FUN_14dcbb4ee body=22 status=ok
// SIG undefined FUN_14dcbb4ee(void)

void FUN_14dcbb4ee(void)

{
  return;
}



// FUNCTION 14dcbb56f FUN_14dcbb56f body=183 status=ok
// SIG undefined FUN_14dcbb56f(void)

/* WARNING: Instruction at (ram,0x000162d930ca) overlaps instruction at (ram,0x000162d930c9)
    */
/* WARNING: Removing unreachable block (ram,0x000162d930c9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000020 : 0x00014dcbb5e4 */
/* WARNING: Removing unreachable block (ram,0x00014dcbb60d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcbb56f(undefined8 param_1,undefined8 param_2)

{
  ushort in_R11W;
  undefined8 uStackX_20;
  
  if ((ushort)(~in_R11W | 0xfffe) == 0xffff) {
    FUN_162a7c3b5(param_1,param_2);
    return;
  }
  if ((uStackX_20 & 0x80) != 0) {
    thunk_FUN_14dd88ef9();
    return;
  }
  FUN_14dd88ef9();
  return;
}



// FUNCTION 14dcbb90c FUN_14dcbb90c body=269 status=ok
// SIG undefined FUN_14dcbb90c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbb9b5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbbab4) */
/* WARNING: Removing unreachable block (ram,0x000160c49ef5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbbaba) */
/* WARNING: Removing unreachable block (ram,0x00014dcbbac0) */
/* WARNING: Removing unreachable block (ram,0x00014dcbb99e) */
/* WARNING: Removing unreachable block (ram,0x00014dcbba51) */
/* WARNING: Removing unreachable block (ram,0x000160c49f76) */
/* WARNING: Removing unreachable block (ram,0x00016643e26d) */

void FUN_14dcbb90c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (((uint)param_4 - 1) - ~-(param_3 | (uint)param_4)) + param_3;
  if (iVar1 == 0) {
    FUN_160d619e2();
    return;
  }
  FUN_161bcc020(FUN_161bcc020,param_2,iVar1 * 2,param_4);
  return;
}



// FUNCTION 14dcbba1a FUN_14dcbba1a body=384 status=ok
// SIG undefined FUN_14dcbba1a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbbab4) */
/* WARNING: Removing unreachable block (ram,0x000160c49ef5) */
/* WARNING: Removing unreachable block (ram,0x00014dcbbaba) */
/* WARNING: Removing unreachable block (ram,0x00014dcbbac0) */

void FUN_14dcbba1a(longlong param_1,longlong param_2)

{
  int local_res10;
  
  if (local_res10 < 0) {
    (*(code *)0x16643e267)(param_2 - param_1);
    return;
  }
  return;
}



// FUNCTION 14dcbbcbc FUN_14dcbbcbc body=171 status=ok
// SIG undefined FUN_14dcbbcbc(void)

void FUN_14dcbbcbc(undefined8 param_1,undefined8 param_2)

{
  FUN_165e44d20(param_1,param_2,FUN_165e44d20);
  return;
}



// FUNCTION 14dcbbdb4 FUN_14dcbbdb4 body=59 status=ok
// SIG undefined FUN_14dcbbdb4(void)

void FUN_14dcbbdb4(void)

{
  return;
}



// FUNCTION 14dcbbdf9 FUN_14dcbbdf9 body=312 status=ok
// SIG undefined FUN_14dcbbdf9(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbbe82) */

undefined8 FUN_14dcbbdf9(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulonglong in_R10;
  
  if (-1 < (longlong)(*(ulonglong *)(param_3 + -0x28) ^ in_R10)) {
    return in_RAX;
  }
  uVar1 = FUN_166c5d003();
  return uVar1;
}



// FUNCTION 14dcbbf33 FUN_14dcbbf33 body=1207 status=ok
// SIG undefined FUN_14dcbbf33(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbc04c) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc052) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc06f) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc06a) */
/* WARNING: Removing unreachable block (ram,0x0001612dd061) */
/* WARNING: Removing unreachable block (ram,0x0001612dd086) */
/* WARNING: Removing unreachable block (ram,0x0001612dd099) */
/* WARNING: Removing unreachable block (ram,0x0001612dd0b1) */
/* WARNING: Removing unreachable block (ram,0x0001612dd0b6) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc0b6) */
/* WARNING: Removing unreachable block (ram,0x0001612dd016) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc0d4) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc0da) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc0df) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc0fe) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc101) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc171) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc176) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc17c) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc181) */
/* WARNING: Removing unreachable block (ram,0x000165785a07) */
/* WARNING: Removing unreachable block (ram,0x000161dd0652) */

undefined8 FUN_14dcbbf33(void)

{
  ulonglong uVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined8 in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uVar4;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0xa0);
  FUN_1572f809e();
  uVar4 = *(ulonglong *)(uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2 + -0xa0);
  uVar3 = ~((unaff_R15 & ~local_res18 | ~(~local_res18 | unaff_R15)) ^ 0xffffffffffffffff);
  uVar1 = local_res20 ^ unaff_R15;
  uVar2 = rdtsc();
  *(undefined8 *)(uVar1 - 8) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x80) != 0) * 0x80 | (ulonglong)((uVar3 & 0x40) != 0) * 0x40 |
       (ulonglong)((uVar3 & 0x10) != 0) * 0x10 | (ulonglong)((uVar3 & 4) != 0) * 4 |
       (ulonglong)((uVar3 & 1) != 0) | (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(uVar1 - 0x20) = CONCAT44(extraout_var,(int)uVar2);
  uVar2 = *(undefined8 *)(uVar1 - 0x20);
  uVar3 = *(ulonglong *)(uVar1 - 0x18);
  *(ulonglong *)(uVar1 - 0x18) = ~(uVar4 & unaff_R15) & (uVar4 | unaff_R15);
  *(ulonglong *)(uVar1 - 0x20) =
       (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
       (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(uVar1 - 8) = 0x2b02634;
  uVar4 = *(ulonglong *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x10) = in_R9;
  *(undefined8 *)(uVar1 - 0x18) = in_R9;
  *(undefined8 *)(uVar1 - 0x20) = unaff_RBP;
  if ((uVar4 & 0x80) == 0) {
    uVar2 = FUN_1669f96c7();
    return uVar2;
  }
  *(undefined8 *)(uVar1 - 0x10) = 0x156ef2e25;
  return uVar2;
}



// FUNCTION 14dcbc206 FUN_14dcbc206 body=116 status=ok
// SIG undefined FUN_14dcbc206(void)

void FUN_14dcbc206(undefined8 param_1)

{
  FUN_1570b0810(param_1,FUN_1570b0810);
  return;
}



// FUNCTION 14dcbc5bd FUN_14dcbc5bd body=160 status=ok
// SIG undefined FUN_14dcbc5bd(void)

void FUN_14dcbc5bd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5)

{
  (*(code *)&LAB_156950070)(~(~param_5 | 0x100),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dcbc65d FUN_14dcbc65d body=92 status=ok
// SIG undefined FUN_14dcbc65d(void)

void FUN_14dcbc65d(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar3;
  bool bVar4;
  ulonglong uStackX_8;
  longlong local_res10;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7a76cf;
  bVar4 = SBORROW1(in_AL,DAT_14d7a76cf);
  cVar1 = in_AL - DAT_14d7a76cf;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7a76cf;
  }
  DAT_14d7a76cf = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RDI;
  *(ulonglong *)(local_res10 + -0x20) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400 | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200
       | (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -8) = 0x14f0c96;
  *(undefined8 *)(local_res10 + -0x10) = param_4;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = unaff_R14;
  *(code **)(local_res10 + -0x10) = FUN_15b3d5987;
  return;
}



// FUNCTION 14dcbc6e6 FUN_14dcbc6e6 body=263 status=ok
// SIG undefined FUN_14dcbc6e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbc705) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc78f) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc795) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc79a) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc826) */
/* WARNING: Removing unreachable block (ram,0x00014dcbc82c) */
/* WARNING: Removing unreachable block (ram,0x00014d90efeb) */

undefined8 FUN_14dcbc6e6(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = FUN_16272a65d(in_RAX);
  return uVar1;
}



// FUNCTION 14dcbc79a FUN_14dcbc79a body=277 status=ok
// SIG undefined FUN_14dcbc79a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbc82c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dcbc79a(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  longlong in_stack_00000028;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ 0xffffffffffffffff;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | unaff_R15;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + ~((~unaff_R15 | uVar1) & uVar2);
  *(undefined8 *)(in_stack_00000028 + -0x10) = unaff_RDI;
  *(undefined8 *)(in_stack_00000028 + -0x18) = 0x2d5d998;
  *(undefined8 *)(in_stack_00000028 + -8) = *(undefined8 *)(in_stack_00000028 + -0x18);
  *(undefined8 *)(in_stack_00000028 + -0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 + -0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000028 + -0x28cf) = &DAT_156ef2e4a;
  return in_RAX;
}



// FUNCTION 14dcbca7d FUN_14dcbca7d body=291 status=ok
// SIG undefined FUN_14dcbca7d(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbcb06) */
/* WARNING: Removing unreachable block (ram,0x00014dcbcb0c) */
/* WARNING: Removing unreachable block (ram,0x0001620af9a3) */

void FUN_14dcbca7d(void)

{
  FUN_1620af9a3();
  return;
}



// FUNCTION 14dcbcba4 FUN_14dcbcba4 body=617 status=ok
// SIG undefined FUN_14dcbcba4(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbcd9b) */
/* WARNING: Removing unreachable block (ram,0x00014dcbcda7) */
/* WARNING: Removing unreachable block (ram,0x00014dcbccde) */
/* WARNING: Removing unreachable block (ram,0x00016287a6ea) */
/* WARNING: Removing unreachable block (ram,0x00014dbb5e14) */
/* WARNING: Removing unreachable block (ram,0x00016287a6f0) */
/* WARNING: Removing unreachable block (ram,0x000162c60d7d) */
/* WARNING: Removing unreachable block (ram,0x00016287a77c) */
/* WARNING: Removing unreachable block (ram,0x00016287a787) */
/* WARNING: Removing unreachable block (ram,0x00016287a7cd) */
/* WARNING: Removing unreachable block (ram,0x00016287a7d1) */
/* WARNING: Removing unreachable block (ram,0x00016287a782) */

void FUN_14dcbcba4(void)

{
  longlong lVar1;
  longlong unaff_R12;
  
  lVar1 = FUN_162b1136d();
  if (*(longlong *)(unaff_R12 + -0x98) == lVar1) {
    FUN_15705a8aa();
    return;
  }
  (*(code *)0x16245f378)();
  return;
}



// FUNCTION 14dcbcef2 FUN_14dcbcef2 body=138 status=ok
// SIG undefined FUN_14dcbcef2(void)

void FUN_14dcbcef2(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_165fcc374(unaff_retaddr,param_2,0xffffffffaeff4b80,0xffffffffefffdafb);
  return;
}



// FUNCTION 14dcbcf7f FUN_14dcbcf7f body=140 status=ok
// SIG undefined FUN_14dcbcf7f(void)

void FUN_14dcbcf7f(void)

{
  return;
}



// FUNCTION 14dcbd0a7 FUN_14dcbd0a7 body=178 status=ok
// SIG undefined FUN_14dcbd0a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd1ec) */

undefined8 FUN_14dcbd0a7(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  bool in_ZF;
  undefined8 unaff_retaddr;
  
  if (in_ZF) {
    return unaff_retaddr;
  }
  if (param_2 != 0x6f28f) {
    FUN_1572c4d19(param_1,param_2,param_3,param_4);
    uVar1 = FUN_157367537(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x50)) + param_1 + 1,
                          FUN_157367537,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
    return uVar1;
  }
  uVar1 = FUN_166a62797(param_1,&DAT_14d7aeb4f);
  return uVar1;
}



// FUNCTION 14dcbd15a FUN_14dcbd15a body=340 status=ok
// SIG undefined FUN_14dcbd15a(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd1ec) */

undefined8 FUN_14dcbd15a(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  uVar1 = FUN_157367537(param_1,(~param_1 | *(ulonglong *)(unaff_RDI + -0x50)) + param_1 + 1,
                        FUN_157367537,*(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return uVar1;
}



// FUNCTION 14dcbd393 FUN_14dcbd393 body=456 status=ok
// SIG undefined FUN_14dcbd393(void)

void FUN_14dcbd393(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  code *pcVar7;
  
  puVar1 = (undefined8 *)(&stack0xfffffffff157cc79 + unaff_RBX);
  *puVar1 = *(undefined8 *)(unaff_RDI + -0x58);
  *puVar1 = 0x14dcbd42b;
  uVar6 = FUN_156be9646(param_1,param_2,param_1);
  *(int *)((longlong)puVar1 + (~param_1 ^ 0x50cd4e5e) + 8) =
       (int)CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),(short)unaff_RSI >> ((byte)param_1 & 0x1f)
                    );
  uVar2 = puVar1[1];
  uVar3 = *(ulonglong *)(unaff_RDI + -0x58);
  puVar1[1] = uVar6;
  *(undefined4 *)(puVar1 + 1) = 0x3029448d;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  pcVar7 = FUN_1574da2c6;
  puVar1[1] = 0x14dcbd4cd;
  uVar6 = FUN_1574da2c6();
  uVar5 = puVar1[2];
  puVar1[2] = unaff_RDI;
  puVar1[2] = pcVar7;
  uVar4 = puVar1[3];
  puVar1[3] = puVar1[3] & uVar5;
  puVar1[3] = -puVar1[3];
  puVar1[3] = puVar1[3] + -1;
  puVar1[3] = puVar1[3] & (uVar4 | uVar5);
  puVar1[2] = uVar3 ^ uVar2;
  puVar1[1] = uVar5;
  *puVar1 = uVar6;
  *(undefined4 *)puVar1 = 0xc398bc0e;
  *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
  FUN_14d8f29ac();
  return;
}



// FUNCTION 14dcbd55c FUN_14dcbd55c body=279 status=ok
// SIG undefined FUN_14dcbd55c(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd5eb) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd5f7) */

void FUN_14dcbd55c(void)

{
  ulonglong uVar1;
  ulonglong *unaff_RBP;
  
  uVar1 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP | 0xffffffffcdfa0c9a;
  *unaff_RBP = ~(~(uVar1 & 0xffffffffcdfa0c9a) & *unaff_RBP);
  return;
}



// FUNCTION 14dcbd71e thunk_FUN_14dcbd724 body=5 status=ok
// SIG undefined thunk_FUN_14dcbd724(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd752) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7ad) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7b3) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7dd) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7e1) */

void thunk_FUN_14dcbd724(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156ae8fed(-param_1 ^ in_RAX,~-*(longlong *)(unaff_R12 + -0x78) + 1U ^ in_RAX,param_3,param_4);
  return;
}



// FUNCTION 14dcbd724 FUN_14dcbd724 body=325 status=ok
// SIG undefined FUN_14dcbd724(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd752) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7ad) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7b3) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7dd) */
/* WARNING: Removing unreachable block (ram,0x00014dcbd7e1) */

void FUN_14dcbd724(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_156ae8fed(-param_1 ^ in_RAX,~-*(longlong *)(unaff_R12 + -0x78) + 1U ^ in_RAX,param_3,param_4);
  return;
}



// FUNCTION 14dcbd8f2 FUN_14dcbd8f2 body=195 status=ok
// SIG undefined FUN_14dcbd8f2(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbd97d) */

void FUN_14dcbd8f2(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RDI;
  longlong lVar1;
  
  lVar1 = *(ulonglong *)(unaff_RDI + -0xa0) + param_1;
  if (CARRY8(*(ulonglong *)(unaff_RDI + -0xa0),param_1)) {
    FUN_1615600e6(param_1,lVar1,param_3);
    return;
  }
  FUN_1615600e6(param_1,lVar1,param_3);
  return;
}



// FUNCTION 14dcbdb31 FUN_14dcbdb31 body=127 status=ok
// SIG undefined FUN_14dcbdb31(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbdba0) */
/* WARNING: Removing unreachable block (ram,0x00014dcbdbb1) */
/* WARNING: Removing unreachable block (ram,0x00014dcbdbac) */
/* WARNING: Removing unreachable block (ram,0x00015b0ec727) */

undefined8 FUN_14dcbdb31(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong *unaff_R15;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar2 = *unaff_R15;
  *unaff_R15 = ~*unaff_R15;
  *unaff_R15 = *unaff_R15 | in_RAX;
  uVar3 = *unaff_R15;
  *unaff_R15 = 0x2cc6b635;
  *unaff_R15 = *unaff_R15 ^ 0x2cc6b635;
  *unaff_R15 = *unaff_R15 + ~((0xffffffffffffffff - in_RAX | uVar2) & uVar3);
  uVar2 = local_res20 ^ in_RAX;
  *(undefined8 *)(uVar2 - 8) = 0xb2f7425;
  *(undefined8 *)(uVar2 - 0x10) = param_2;
  *(undefined8 *)(uVar2 - 0x18) = in_stack_00000008;
  puVar1 = (ulonglong *)(uVar2 - 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 0xfffffffff4d08bda;
  *puVar1 = ~(~(uVar3 & 0xfffffffff4d08bda) & *puVar1);
  uVar5 = *(undefined8 *)(uVar2 - 0x18);
  uVar4 = *(undefined8 *)(uVar2 - 0x10);
  *(longlong *)(uVar2 - 8) = *(longlong *)(uVar2 - 8) + unaff_R12;
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 0x10) + unaff_RDI;
  *(longlong *)(uVar2 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = uVar5;
  *(undefined4 *)(uVar2 - 0x20) = 0x2322c7e9;
  *(undefined4 *)(uVar2 - 0x1c) = 0;
  *(undefined4 *)(uVar2 - 0x1c) = *(undefined4 *)(uVar2 - 0x1c);
  *(undefined8 *)(uVar2 - 0x20) = 0x1611f6620;
  uVar5 = FUN_14daae7c3(param_1,uVar4);
  return uVar5;
}



// FUNCTION 14dcbdbb1 FUN_14dcbdbb1 body=188 status=ok
// SIG undefined FUN_14dcbdbb1(void)

undefined8 FUN_14dcbdbb1(void)

{
  return 0xffffffffffffffd8;
}



// FUNCTION 14dcbdc6e FUN_14dcbdc6e body=156 status=ok
// SIG undefined FUN_14dcbdc6e(void)

void FUN_14dcbdc6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_14e1dfd39(param_1,param_2,unaff_retaddr,thunk_FUN_14e1dfd39);
  return;
}



// FUNCTION 14dcbdd0b FUN_14dcbdd0b body=12 status=ok
// SIG undefined FUN_14dcbdd0b(void)

void FUN_14dcbdd0b(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dcbdd17 FUN_14dcbdd17 body=145 status=ok
// SIG undefined FUN_14dcbdd17(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbdda8) */
/* WARNING: Removing unreachable block (ram,0x00014dcbdd9d) */

void FUN_14dcbdd17(void)

{
  longlong in_R9;
  
  if (in_R9 == 0x11f6c0) {
    return;
  }
  return;
}



// FUNCTION 14dcbdda8 FUN_14dcbdda8 body=156 status=ok
// SIG undefined FUN_14dcbdda8(void)

void FUN_14dcbdda8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong in_R11;
  
  FUN_16620b08a(0xffffffffffffff98,0xfffffffffffffff8,(unaff_RBP - param_3) + in_R11,
                *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
                (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2);
  return;
}



// FUNCTION 14dcbde45 thunk_FUN_14dcbde4f body=5 status=ok
// SIG undefined thunk_FUN_14dcbde4f(void)

void thunk_FUN_14dcbde4f(void)

{
  return;
}



// FUNCTION 14dcbde4f FUN_14dcbde4f body=60 status=ok
// SIG undefined FUN_14dcbde4f(void)

void FUN_14dcbde4f(void)

{
  return;
}



// FUNCTION 14dcbde8c FUN_14dcbde8c body=76 status=ok
// SIG undefined FUN_14dcbde8c(void)

void FUN_14dcbde8c(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 != 0xcff1c) {
    FUN_1618e7ffe();
    return;
  }
  (*(code *)0x1618e7ffb)();
  return;
}



// FUNCTION 14dcbe28d FUN_14dcbe28d body=77 status=ok
// SIG undefined FUN_14dcbe28d(void)

void FUN_14dcbe28d(void)

{
  undefined8 in_R11;
  longlong unaff_retaddr;
  
  *(undefined8 *)(&stack0x6e0c08f3 + unaff_retaddr) = in_R11;
  return;
}



// FUNCTION 14dcbe3fc FUN_14dcbe3fc body=124 status=ok
// SIG undefined FUN_14dcbe3fc(void)

void FUN_14dcbe3fc(ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  undefined8 in_R10;
  code *pcVar2;
  undefined8 in_R11;
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
  undefined8 uStackX_8;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined8 *local_res20;
  
  *param_1 = ~*param_1;
  *param_1 = (*param_1 - (*param_1 | 0xfeff)) - 0x101 | 0x100;
  *param_1 = -*param_1;
  *param_1 = *param_1 - 1;
  bVar11 = (local_res18 & 0x4000) != 0;
  bVar10 = (local_res18 & 0x800) != 0;
  bVar9 = (local_res18 & 0x200) != 0;
  bVar8 = (local_res18 & 0x100) != 0;
  bVar7 = (local_res18 & 0x80) != 0;
  bVar6 = (local_res18 & 0x40) != 0;
  bVar5 = (local_res18 & 0x10) != 0;
  bVar4 = (local_res18 & 4) != 0;
  bVar3 = (local_res18 & 1) != 0;
  bVar15 = (local_res18 & 0x200000) != 0;
  bVar12 = (local_res18 & 0x40000) != 0;
  bVar14 = 0;
  bVar13 = 0;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)(uStackX_8);
  local_res20[-1] = in_R10;
  local_res20[-2] = local_res10;
  local_res20[-3] =
       (ulonglong)(bVar11 & 1) * 0x4000 | (ulonglong)(bVar10 & 1) * 0x800 |
       (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar9 & 1) * 0x200 |
       (ulonglong)(bVar8 & 1) * 0x100 | (ulonglong)(bVar7 & 1) * 0x80 |
       (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(bVar5 & 1) * 0x10 | (ulonglong)(bVar4 & 1) * 4 |
       (ulonglong)(bVar3 & 1) | (ulonglong)(bVar15 & 1) * 0x200000 |
       (ulonglong)(bVar14 & 1) * 0x100000 | (ulonglong)(bVar13 & 1) * 0x80000 |
       (ulonglong)(bVar12 & 1) * 0x40000;
  *local_res20 = 0x2186a5a;
  pcVar2 = FUN_1566a280c;
  local_res20[-2] = FUN_14dcbe478;
  FUN_1566a280c();
  local_res20[-1] = ~unaff_RBP;
  uVar1 = local_res20[-1];
  local_res20[-1] = *(undefined8 *)(param_2 + -0x80);
  local_res20[-1] = uVar1;
  local_res20[-2] = param_4;
  local_res20[-1] = *(undefined8 *)(param_2 + -0x40);
  local_res20[-2] = in_R11;
  local_res20[-3] = in_R11;
  local_res20[-4] = pcVar2;
  local_res20[-5] = pcVar2;
  local_res20[-4] = &DAT_14dcbe507;
  return;
}



// FUNCTION 14dcbe478 FUN_14dcbe478 body=141 status=ok
// SIG undefined FUN_14dcbe478(void)

void FUN_14dcbe478(void)

{
  return;
}



// FUNCTION 14dcbe747 FUN_14dcbe747 body=133 status=ok
// SIG undefined FUN_14dcbe747(void)

void FUN_14dcbe747(void)

{
  (*(code *)0x1667c511a)();
  return;
}



// FUNCTION 14dcbe7cd FUN_14dcbe7cd body=654 status=ok
// SIG undefined FUN_14dcbe7cd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbe8f1) */
/* WARNING: Removing unreachable block (ram,0x00014dcbe856) */
/* WARNING: Removing unreachable block (ram,0x00014dcbe85c) */
/* WARNING: Removing unreachable block (ram,0x00014dcbe8eb) */
/* WARNING: Removing unreachable block (ram,0x00016565ca52) */
/* WARNING: Removing unreachable block (ram,0x00014dcbe930) */
/* WARNING: Removing unreachable block (ram,0x00014dcbe934) */

void FUN_14dcbe7cd(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = -~*(ulonglong *)(unaff_R12 + -0x78) - 1;
  FUN_165a3e8a1(unaff_RDI + in_RAX + ~(~param_1 | ~in_RAX) * -2,
                ~(~in_RAX | uVar1) | ~(~uVar1 | in_RAX),param_3);
  return;
}



// FUNCTION 14dcbeaf6 FUN_14dcbeaf6 body=764 status=ok
// SIG undefined FUN_14dcbeaf6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd07309) */
/* WARNING: Removing unreachable block (ram,0x00014dd0730f) */
/* WARNING: Removing unreachable block (ram,0x00014dd0734d) */
/* WARNING: Removing unreachable block (ram,0x00014dd07347) */
/* WARNING: Removing unreachable block (ram,0x00014dd07352) */
/* WARNING: Removing unreachable block (ram,0x00014dcbeb81) */
/* WARNING: Removing unreachable block (ram,0x00014dcbeb87) */
/* WARNING: Removing unreachable block (ram,0x00014dcbec09) */
/* WARNING: Removing unreachable block (ram,0x000157276fcf) */

void FUN_14dcbeaf6(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  undefined8 in_R10;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res20;
  
  uVar4 = (*(ulonglong *)(unaff_RDI + -0x68) & param_1 |
          ~(*(ulonglong *)(unaff_RDI + -0x68) | param_1)) ^ 0xffffffffffffffff;
  lVar2 = *(longlong *)(unaff_RDI + -0x48);
  FUN_165e191ae(param_1);
  uVar1 = 0xffffffffffffffffU - local_res20 & unaff_R12;
  *(undefined8 *)(uVar1 - 8) = local_res8;
  *(ulonglong *)(uVar1 - 0x10) = uVar4;
  *(ulonglong *)(uVar1 - 0x18) = uVar4;
  uVar5 = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x20) = local_res10;
  *(longlong *)(uVar1 - 0x28) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x10) = uVar5;
  uVar5 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined1 **)(uVar1 - 0x18) = &LAB_161c65224;
  *(undefined8 *)(uVar1 - 0x20) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x20) = 0x14dd07266;
  FUN_161c651f6();
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(lVar2 + -8);
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = param_4;
  *(undefined8 *)(uVar1 - 0x20) = param_4;
  *(undefined8 *)(uVar1 - 0x28) = unaff_R13;
  lVar2 = *(longlong *)(lVar2 + -0x98);
  *(undefined8 *)(uVar1 - 0x18) = 0;
  *(longlong *)(uVar1 - 0x18) = *(longlong *)(uVar1 - 0x18) + lVar2;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R15;
  *(undefined8 *)(uVar1 - 0x20) = uVar5;
  *(undefined4 *)(uVar1 - 0x28) = 0x17c27566;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  *(undefined8 *)(uVar1 - 0x28) = in_R10;
  *(undefined8 *)(uVar1 - 0x28) = uVar3;
  FUN_157276fcf();
  return;
}



// FUNCTION 14dcbec17 FUN_14dcbec17 body=146 status=ok
// SIG undefined FUN_14dcbec17(void)

void FUN_14dcbec17(void)

{
  return;
}



// FUNCTION 14dcbedde FUN_14dcbedde body=142 status=ok
// SIG undefined FUN_14dcbedde(void)

void FUN_14dcbedde(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_16199033f(param_1,param_2,param_3,unaff_retaddr);
  return;
}



// FUNCTION 14dcbee74 FUN_14dcbee74 body=149 status=ok
// SIG undefined FUN_14dcbee74(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbef84) */
/* WARNING: Removing unreachable block (ram,0x00014dcbef8e) */
/* WARNING: Removing unreachable block (ram,0x00014dcbef94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcbee74(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = FUN_165f29242();
  FUN_161360d4d(*(ulonglong *)(unaff_R12 + -0x58) ^ uVar1,*(ulonglong *)(unaff_R12 + -0x78) ^ uVar1)
  ;
  return;
}



// FUNCTION 14dcbef0b FUN_14dcbef0b body=283 status=ok
// SIG undefined FUN_14dcbef0b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbef84) */
/* WARNING: Removing unreachable block (ram,0x00014dcbef8e) */
/* WARNING: Removing unreachable block (ram,0x00014dcbef94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dcbef0b(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_161360d4d(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dcbf02a FUN_14dcbf02a body=67 status=ok
// SIG undefined FUN_14dcbf02a(void)

void FUN_14dcbf02a(HANDLE param_1,DWORD param_2,SIZE_T param_3)

{
  longlong local_res8;
  
  *(undefined8 *)(&stack0x38af1a1d + local_res8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014dcbf067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcbf0dc FUN_14dcbf0dc body=588 status=ok
// SIG undefined FUN_14dcbf0dc(void)

/* WARNING: Removing unreachable block (ram,0x0001626e08e0) */
/* WARNING: Removing unreachable block (ram,0x0001626e08e6) */
/* WARNING: Removing unreachable block (ram,0x0001626e0997) */
/* WARNING: Removing unreachable block (ram,0x0001626e099c) */
/* WARNING: Removing unreachable block (ram,0x0001626e09a2) */
/* WARNING: Removing unreachable block (ram,0x0001626e09a7) */
/* WARNING: Removing unreachable block (ram,0x00014dcbf16b) */
/* WARNING: Removing unreachable block (ram,0x00014dcbf177) */
/* WARNING: Removing unreachable block (ram,0x000162ad08b7) */
/* WARNING: Removing unreachable block (ram,0x000162ad09dd) */
/* WARNING: Removing unreachable block (ram,0x000162ad09e2) */
/* WARNING: Removing unreachable block (ram,0x00015703c81e) */
/* WARNING: Removing unreachable block (ram,0x000162ad09e8) */

undefined8 FUN_14dcbf0dc(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  if ((longlong)uVar2 < 0) {
    uVar1 = FUN_14e0fa97d(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,uVar2,
                          ~(unaff_RBP + unaff_R15 + 1) & param_1);
    return uVar1;
  }
  uVar1 = FUN_1626b90bb();
  return uVar1;
}



// FUNCTION 14dcbf330 FUN_14dcbf330 body=463 status=ok
// SIG undefined FUN_14dcbf330(void)

/* WARNING: Instruction at (ram,0x00014dcbf420) overlaps instruction at (ram,0x00014dcbf41f)
    */
/* WARNING: Removing unreachable block (ram,0x00014dcbf41f) */
/* WARNING: Removing unreachable block (ram,0x00014dcbf3bc) */

void FUN_14dcbf330(void)

{
  return;
}



// FUNCTION 14dcbf51a FUN_14dcbf51a body=154 status=ok
// SIG undefined FUN_14dcbf51a(void)

void FUN_14dcbf51a(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_1564e7487(param_1,param_2,in_stack_00000008);
  return;
}



// FUNCTION 14dcbf5b4 FUN_14dcbf5b4 body=163 status=ok
// SIG undefined FUN_14dcbf5b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbf658) */
/* WARNING: Removing unreachable block (ram,0x000156c50238) */

undefined8 FUN_14dcbf5b4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_156c50238();
  return uVar1;
}



// FUNCTION 14dcbf658 FUN_14dcbf658 body=135 status=ok
// SIG undefined FUN_14dcbf658(void)

void FUN_14dcbf658(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong unaff_retaddr;
  
  FUN_15736c42e(unaff_retaddr,param_2,0xfc,(*(ulonglong *)(unaff_RDI + -0x60) & unaff_retaddr) << 1)
  ;
  return;
}



// FUNCTION 14dcbf7f5 FUN_14dcbf7f5 body=115 status=ok
// SIG undefined FUN_14dcbf7f5(void)

void FUN_14dcbf7f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R15;
  undefined8 local_res18;
  
  if ((local_res18 == -1 && unaff_R15 == 0) && (local_res18 != -1 || unaff_R15 != 0)) {
    FUN_14dcbf86b();
    return;
  }
  FUN_162dceb20(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dcbf86b FUN_14dcbf86b body=38 status=ok
// SIG undefined FUN_14dcbf86b(void)

void FUN_14dcbf86b(void)

{
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  
  FUN_165c7153c(uStackX_8,uStackX_18);
  return;
}



// FUNCTION 14dcbfb14 FUN_14dcbfb14 body=94 status=ok
// SIG undefined FUN_14dcbfb14(void)

void FUN_14dcbfb14(void)

{
  FUN_1619e76f0();
  return;
}



// FUNCTION 14dcbfb81 FUN_14dcbfb81 body=180 status=ok
// SIG undefined FUN_14dcbfb81(void)

/* WARNING: Removing unreachable block (ram,0x00014dcbfc23) */

void FUN_14dcbfb81(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R13;
  undefined8 in_stack_00000018;
  
  uVar1 = *(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = ~*(ulonglong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) =
       ((uVar1 & in_RAX ^ 0xffffffffffffffff) + in_RAX) - *(longlong *)(unaff_R13 + 8);
  *(ulonglong *)(unaff_R13 + 8) = ~(param_2 & *(ulonglong *)(unaff_R13 + 8));
  FUN_164ee9b06(param_1,in_stack_00000018,0x7880129);
  return;
}



// FUNCTION 14dcbfc3d FUN_14dcbfc3d body=312 status=ok
// SIG undefined FUN_14dcbfc3d(void)

void FUN_14dcbfc3d(undefined8 param_1)

{
  FUN_1618fe26a(param_1);
  (*(code *)0x165a600ec)();
  return;
}



// FUNCTION 14dcbfe0a FUN_14dcbfe0a body=47 status=ok
// SIG undefined FUN_14dcbfe0a(void)

void FUN_14dcbfe0a(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dcbfe95 FUN_14dcbfe95 body=155 status=ok
// SIG undefined FUN_14dcbfe95(void)

void FUN_14dcbfe95(byte param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  longlong in_R11;
  longlong lVar2;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res20;
  
  lVar2 = in_R11 - (local_res20 << (param_1 & 0x3f));
  plVar1 = (longlong *)(lVar2 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_RDI;
  *plVar1 = -*plVar1;
  plVar1 = (longlong *)(lVar2 + -0x10);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_R13;
  *(longlong *)(lVar2 + -0x18) = *plVar1;
  *(undefined8 *)(lVar2 + -0x20) = unaff_RBX;
  *(undefined8 *)(lVar2 + -0x20) = in_RAX;
  FUN_156a4112a(unaff_retaddr);
  return;
}



// FUNCTION 14dcbffbd FUN_14dcbffbd body=320 status=ok
// SIG undefined FUN_14dcbffbd(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc0045) */

void FUN_14dcbffbd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R14;
  ulonglong unaff_retaddr;
  
  if (-1 < (longlong)unaff_retaddr) {
    return;
  }
  if (&DAT_e02e7c626721c4c4 + (unaff_R14 & 0xe02e7c626721c4c4) * -2 + unaff_R14 == (undefined1 *)0x0
     ) {
    *(undefined8 *)(unaff_retaddr & 0x7fffffffffffffff) = 0;
    FUN_162aac29a(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_16274d7ff();
  return;
}



// FUNCTION 14dcc0105 FUN_14dcc0105 body=580 status=ok
// SIG undefined FUN_14dcc0105(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc018b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0197) */

void FUN_14dcc0105(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_15b8b0fa5(unaff_retaddr,param_2);
  return;
}



// FUNCTION 14dcc0344 FUN_14dcc0344 body=161 status=ok
// SIG undefined FUN_14dcc0344(void)

void FUN_14dcc0344(void)

{
  return;
}



// FUNCTION 14dcc03eb FUN_14dcc03eb body=800 status=ok
// SIG undefined FUN_14dcc03eb(void)

/* WARNING: Removing unreachable block (ram,0x000156b1e8dd) */
/* WARNING: Removing unreachable block (ram,0x000156b1e8cd) */
/* WARNING: Removing unreachable block (ram,0x0001662a51f8) */
/* WARNING: Removing unreachable block (ram,0x0001662a52ff) */
/* WARNING: Removing unreachable block (ram,0x000156c2b7d2) */
/* WARNING: Removing unreachable block (ram,0x0001662a5185) */
/* WARNING: Removing unreachable block (ram,0x0001662a518f) */
/* WARNING: Removing unreachable block (ram,0x0001662a51ed) */
/* WARNING: Removing unreachable block (ram,0x0001662a51f2) */
/* WARNING: Removing unreachable block (ram,0x00015b494021) */
/* WARNING: Removing unreachable block (ram,0x00015b494099) */
/* WARNING: Removing unreachable block (ram,0x00015b49409e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b4940a4) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0511) */
/* WARNING: Removing unreachable block (ram,0x00014dcc055c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0562) */
/* WARNING: Removing unreachable block (ram,0x00014dcc05b0) */
/* WARNING: Removing unreachable block (ram,0x00014dcc05d6) */
/* WARNING: Removing unreachable block (ram,0x00014dcc05dd) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0674) */
/* WARNING: Removing unreachable block (ram,0x0001625696e8) */
/* WARNING: Removing unreachable block (ram,0x00014dcc05a2) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0680) */
/* WARNING: Removing unreachable block (ram,0x0001662a5305) */
/* WARNING: Removing unreachable block (ram,0x00014dcc047b) */
/* WARNING: Removing unreachable block (ram,0x00014dcc050b) */
/* WARNING: Removing unreachable block (ram,0x000166dcfcb6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dcc03eb(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong in_RAX;
  undefined8 unaff_RSI;
  ulonglong unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  longlong unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  
  uVar2 = param_2[1];
  param_2[1] = in_RAX;
  *param_2 = unaff_RSI;
  uVar1 = param_2[1];
  param_2[1] = *param_2;
  *param_2 = *param_2;
  param_2[-1] = unaff_RDI ^ in_RAX;
  param_2[-2] = uVar1;
  *(undefined4 *)(param_2 + -2) = 0x23dc1cde;
  *(undefined4 *)((longlong)param_2 + -0xc) = 0;
  uVar3 = param_2[-2];
  uVar4 = param_2[-1];
  param_2[1] = *(undefined8 *)(unaff_R12 + ((uVar3 ^ 0x7479442a) - 0x57a5595c));
  *param_2 = param_3;
  param_2[-1] = param_3;
  param_2[-2] = unaff_R13;
  if (0x57a5595b < (uVar3 ^ 0x7479442a)) {
    FUN_1662a50e0();
    return;
  }
  uVar5 = param_2[-2];
  *param_2 = *(undefined8 *)(unaff_R12 + -8);
  param_2[-1] = unaff_R14;
  param_2[-2] = unaff_R14;
  param_2[-3] = in_R11;
  uVar6 = param_2[-3];
  param_2[-1] = *(undefined8 *)(unaff_R12 + -0x98);
  param_2[-2] = uVar2;
  param_2[-4] = in_R10;
  param_2[-5] = uVar1;
  *(undefined4 *)(param_2 + -5) = 0xbccd66ac;
  *(undefined4 *)((longlong)param_2 + -0x24) = 0xffffffff;
  param_2[-3] = *(ulonglong *)(unaff_R12 + (param_2[-5] ^ 0x433299cc));
  param_2[-2] = param_2[-3] ^ uVar1;
  param_2[-3] = uVar4;
  param_2[-4] = uVar1;
  *(undefined4 *)(param_2 + -4) = 0x787d608d;
  *(undefined4 *)((longlong)param_2 + -0x1c) = 0;
  uVar2 = param_2[-3];
  param_2[-1] = param_2[-1] & uVar1;
  param_2[-1] = ~param_2[-1];
  param_2[-3] = uVar5;
  param_2[-4] = uVar2;
  param_2[-5] = uVar1;
  *(undefined4 *)(param_2 + -5) = 0xa884224;
  *(undefined4 *)((longlong)param_2 + -0x24) = 0;
  param_2[-5] = uVar6;
  param_2[-6] = param_1;
  FUN_15af7f7c1();
  return;
}



// FUNCTION 14dcc07b3 FUN_14dcc07b3 body=184 status=ok
// SIG undefined FUN_14dcc07b3(void)

void FUN_14dcc07b3(undefined8 param_1)

{
  FUN_165b1ebd4(param_1,0xffffffffebfa0f81,0x7ffe0000);
  return;
}



// FUNCTION 14dcc0c12 FUN_14dcc0c12 body=112 status=ok
// SIG undefined FUN_14dcc0c12(void)

void FUN_14dcc0c12(undefined8 param_1)

{
  undefined8 unaff_retaddr;
  
  FUN_165657616(param_1,unaff_retaddr);
  return;
}



// FUNCTION 14dcc0c8d FUN_14dcc0c8d body=519 status=ok
// SIG undefined FUN_14dcc0c8d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001668c9597) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3356) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3359) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3361) */
/* WARNING: Removing unreachable block (ram,0x00014d7c332f) */
/* WARNING: Removing unreachable block (ram,0x00014d7c3334) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0df0) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0d37) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0d7c) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0dcf) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0de5) */
/* WARNING: Removing unreachable block (ram,0x00014dcc0dca) */
/* WARNING: Removing unreachable block (ram,0x00015662b8e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dcc0c8d(void)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x80);
  uVar2 = FUN_16601dac0(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                        *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,
                        (~(uVar1 | in_RAX) | ~((in_RAX - (uVar1 | in_RAX)) + uVar1)) +
                        (uVar1 | in_RAX) + 1);
  return uVar2;
}



// FUNCTION 14dcc1084 FUN_14dcc1084 body=76 status=ok
// SIG undefined FUN_14dcc1084(void)

void FUN_14dcc1084(undefined8 param_1,undefined8 param_2)

{
  ushort *in_R11;
  ushort unaff_retaddr;
  longlong local_res20;
  
  *in_R11 = (~unaff_retaddr | *in_R11) - 0x100;
  *(undefined8 *)(local_res20 + -8) = param_2;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_16124c2bf;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_16124c2bf;
  *(undefined1 **)(local_res20 + -0x10) = &LAB_14dcc10d1;
  return;
}



// FUNCTION 14dcc110b FUN_14dcc110b body=141 status=ok
// SIG undefined FUN_14dcc110b(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc1209) */
/* WARNING: Removing unreachable block (ram,0x00014dcc122d) */

void FUN_14dcc110b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong local_res8;
  
  FUN_162df78e1();
  if ((longlong)(*(ulonglong *)(param_3 + -0x40) & local_res8) < 0) {
    FUN_1646e8ca2(*(undefined8 *)(param_3 + -0x90),FUN_1646e8ca2);
    return;
  }
  FUN_1569bad96();
  return;
}



// FUNCTION 14dcc1199 FUN_14dcc1199 body=297 status=ok
// SIG undefined FUN_14dcc1199(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc1209) */
/* WARNING: Removing unreachable block (ram,0x00014dcc122d) */

void FUN_14dcc1199(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  
  if ((longlong)(*(ulonglong *)(param_3 + -0x40) & in_R10) < 0) {
    FUN_1646e8ca2(*(undefined8 *)(param_3 + -0x90),FUN_1646e8ca2,param_3,
                  ~((~in_R10 | *(ulonglong *)(param_3 + -0x78)) &
                   (~*(ulonglong *)(param_3 + -0x78) | in_R10)));
    return;
  }
  FUN_1569bad96();
  return;
}



// FUNCTION 14dcc133e FUN_14dcc133e body=153 status=ok
// SIG undefined FUN_14dcc133e(void)

void FUN_14dcc133e(undefined8 param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_16507dc14(param_1,in_stack_00000008);
  return;
}



// FUNCTION 14dcc13d9 FUN_14dcc13d9 body=161 status=ok
// SIG undefined FUN_14dcc13d9(void)

void FUN_14dcc13d9(void)

{
  return;
}



// FUNCTION 14dcc1482 FUN_14dcc1482 body=189 status=ok
// SIG undefined FUN_14dcc1482(void)

/* WARNING: Removing unreachable block (ram,0x00014dcc14e7) */

void FUN_14dcc1482(void)

{
  return;
}


