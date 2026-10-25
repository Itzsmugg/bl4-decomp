// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dd2c915 FUN_14dd2c915 body=339 status=ok
// SIG undefined FUN_14dd2c915(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2c9b0) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ca57) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ca5c) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ca68) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ca6d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd2c915(char param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_R14;
  int in_stack_00000010;
  longlong local_res18;
  
  bVar1 = param_1 - 0x34U & 0x1f;
  uVar3 = ~(param_2 << bVar1 | param_2 >> 0x20 - bVar1);
  uVar4 = (ulonglong)((in_stack_00000010 - 1U) - uVar3);
  if (in_stack_00000010 - 1U < uVar3) {
    FUN_1662b019a();
    *(undefined8 *)(local_res18 + -8) = unaff_R14;
    *(ulonglong *)(local_res18 + -0x10) = uVar4;
    *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
    *(undefined **)(local_res18 + -8) = &DAT_1655b9266;
    uVar2 = thunk_FUN_15b642ca5();
    return uVar2;
  }
  uVar2 = FUN_1655b915e();
  return uVar2;
}



// FUNCTION 14dd2ca6d FUN_14dd2ca6d body=36 status=ok
// SIG undefined FUN_14dd2ca6d(void)

undefined8 FUN_14dd2ca6d(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd2cb5d FUN_14dd2cb5d body=438 status=ok
// SIG undefined FUN_14dd2cb5d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2cc0b) */
/* WARNING: Removing unreachable block (ram,0x00014dd2cc8e) */
/* WARNING: Removing unreachable block (ram,0x00015b96fd6e) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00015b96fcfb) */
/* WARNING: Removing unreachable block (ram,0x00015b96fd69) */
/* WARNING: Removing unreachable block (ram,0x000166c37055) */
/* WARNING: Removing unreachable block (ram,0x000166c3705b) */
/* WARNING: Removing unreachable block (ram,0x00014dd46f48) */
/* WARNING: Removing unreachable block (ram,0x00014dd46f53) */
/* WARNING: Removing unreachable block (ram,0x00014dd46f4e) */
/* WARNING: Removing unreachable block (ram,0x00014dd46eab) */
/* WARNING: Removing unreachable block (ram,0x00016476c31f) */
/* WARNING: Removing unreachable block (ram,0x00016476c333) */
/* WARNING: Removing unreachable block (ram,0x00016476c371) */
/* WARNING: Removing unreachable block (ram,0x00016476c37e) */
/* WARNING: Removing unreachable block (ram,0x00014dd2cc93) */
/* WARNING: Removing unreachable block (ram,0x00014dd2cc99) */
/* WARNING: Removing unreachable block (ram,0x000166c36f11) */
/* WARNING: Removing unreachable block (ram,0x000166c36fa9) */
/* WARNING: Removing unreachable block (ram,0x000161d18920) */
/* WARNING: Removing unreachable block (ram,0x000166c36faf) */
/* WARNING: Removing unreachable block (ram,0x000166c37050) */
/* WARNING: Removing unreachable block (ram,0x00014dd2cc00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dd2cb5d(void)

{
  ulonglong unaff_RBP;
  longlong in_stack_00000008;
  
  return *(ulonglong *)(in_stack_00000008 + -0x40) ^ unaff_RBP;
}



// FUNCTION 14dd2cd1b FUN_14dd2cd1b body=290 status=ok
// SIG undefined FUN_14dd2cd1b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2cda7) */
/* WARNING: Removing unreachable block (ram,0x000160e100b9) */
/* WARNING: Removing unreachable block (ram,0x000160e10142) */
/* WARNING: Removing unreachable block (ram,0x000160e10147) */
/* WARNING: Removing unreachable block (ram,0x000160e1014d) */
/* WARNING: Removing unreachable block (ram,0x000160e10152) */
/* WARNING: Removing unreachable block (ram,0x000160e101f3) */
/* WARNING: Removing unreachable block (ram,0x000160e101f8) */
/* WARNING: Removing unreachable block (ram,0x000160e101fe) */
/* WARNING: Removing unreachable block (ram,0x000160f8c4cd) */

undefined8 FUN_14dd2cd1b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_160e100b9();
  return uVar1;
}



// FUNCTION 14dd2cecf FUN_14dd2cecf body=40 status=ok
// SIG undefined FUN_14dd2cecf(void)

void FUN_14dd2cecf(void)

{
  undefined8 local_res18;
  
  syscall();
  *(undefined8 *)(local_res18 + -8) = 0x6a51b3c;
  FUN_165c7153c(0x14dd2cedd);
  return;
}



// FUNCTION 14dd2cff7 FUN_14dd2cff7 body=132 status=ok
// SIG undefined FUN_14dd2cff7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2d12b) */
/* WARNING: Removing unreachable block (ram,0x00014dd2d170) */

void * FUN_14dd2cff7(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  code *pcVar5;
  int in_R11D;
  ulonglong *unaff_R15;
  bool bVar6;
  ushort uStack_10;
  
  pcVar5 = FUN_14dcf0601;
  uVar2 = FUN_14dcf0601(0xa3,param_2,param_3 + in_R11D + 0x264a0cd8);
  uStack_10 = (ushort)in_R10;
  uStack_10 = ((uVar2 ^ 0x665e) - (uStack_10 | uVar2 ^ 0x665e)) + uStack_10;
  bVar6 = (uStack_10 & 1) != 0;
  if (!bVar6) {
    pvVar3 = ProcessEnvironmentBlock;
    unaff_R15[-1] = (ulonglong)pcVar5;
    puVar1 = unaff_R15 + -2;
    *puVar1 = (ulonglong)pcVar5;
    unaff_R15[-3] =
         (ulonglong)((uStack_10 & 0x4000) != 0) * 0x4000 |
         (ulonglong)((uStack_10 & 0x800) != 0) * 0x800 |
         (ulonglong)((uStack_10 & 0x400) != 0) * 0x400 |
         (ulonglong)((uStack_10 & 0x200) != 0) * 0x200 |
         (ulonglong)((uStack_10 & 0x100) != 0) * 0x100 | (ulonglong)((uStack_10 & 0x80) != 0) * 0x80
         | (ulonglong)((uStack_10 & 0x40) != 0) * 0x40 | (ulonglong)((uStack_10 & 0x10) != 0) * 0x10
         | (ulonglong)((uStack_10 & 4) != 0) * 4 | (ulonglong)bVar6 |
         (ulonglong)((in_R10 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((in_R10 & 0x40000) != 0) * 0x40000;
    uVar4 = unaff_R15[-3];
    unaff_R15[-3] =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)((uVar4 & 1) != 0) |
         (ulonglong)((uVar4 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar4 & 0x40000) != 0) * 0x40000;
    unaff_R15[-3] = (ulonglong)unaff_R15;
    unaff_R15[-1] = 0x75c2e62;
    *puVar1 = unaff_RSI;
    unaff_R15[-3] = unaff_RSI;
    *puVar1 = (ulonglong)FUN_165c7153c;
    return pvVar3;
  }
  if (!bVar6) {
    *unaff_R15 = ~((~unaff_RBP | *(ulonglong *)(unaff_RSI - 0x90)) &
                  (~*(ulonglong *)(unaff_RSI - 0x90) | unaff_RBP));
    *unaff_R15 = *(ulonglong *)(unaff_RSI - 0x50);
    uVar4 = *unaff_R15 | unaff_RBP;
    pvVar3 = (void *)FUN_16110bfe5(uVar4,param_2,~(*unaff_R15 & unaff_RBP & ~uVar4),FUN_16110bfe5);
    return pvVar3;
  }
  pvVar3 = (void *)FUN_164b4abbe();
  return pvVar3;
}



// FUNCTION 14dd2d07b FUN_14dd2d07b body=290 status=ok
// SIG undefined FUN_14dd2d07b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2d12b) */
/* WARNING: Removing unreachable block (ram,0x00014dd2d170) */

void * FUN_14dd2d07b(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ushort in_AX;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong in_R10;
  ushort uVar4;
  undefined8 unaff_R15;
  bool bVar5;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  ulonglong *local_res10;
  
  uVar4 = ((in_AX ^ 0x665e) - (local_res8 | in_AX ^ 0x665e)) + local_res8;
  bVar5 = (uVar4 & 1) != 0;
  if (!bVar5) {
    pvVar2 = ProcessEnvironmentBlock;
    local_res10[-1] = in_R10;
    puVar1 = local_res10 + -2;
    *puVar1 = in_R10;
    local_res10[-3] =
         (ulonglong)((uVar4 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar4 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar4 & 0x400) != 0) * 0x400 | (ulonglong)((uVar4 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar4 & 0x100) != 0) * 0x100 | (ulonglong)((uVar4 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar4 & 0x40) != 0) * 0x40 | (ulonglong)((uVar4 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar4 & 4) != 0) * 4 | (ulonglong)bVar5 |
         (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 |
         (ulonglong)((uStackX_a & 4) != 0) * 0x40000;
    uVar3 = local_res10[-3];
    local_res10[-3] =
         (ulonglong)((uVar3 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar3 & 0x800) != 0) * 0x800 |
         (ulonglong)((uVar3 & 0x400) != 0) * 0x400 | (ulonglong)((uVar3 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar3 & 0x100) != 0) * 0x100 | (ulonglong)((uVar3 & 0x80) != 0) * 0x80 |
         (ulonglong)((uVar3 & 0x40) != 0) * 0x40 | (ulonglong)((uVar3 & 0x10) != 0) * 0x10 |
         (ulonglong)((uVar3 & 4) != 0) * 4 | (ulonglong)((uVar3 & 1) != 0) |
         (ulonglong)((uVar3 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar3 & 0x40000) != 0) * 0x40000;
    local_res10[-3] = unaff_R15;
    local_res10[-1] = 0x75c2e62;
    *puVar1 = unaff_RSI;
    local_res10[-3] = unaff_RSI;
    *puVar1 = (ulonglong)FUN_165c7153c;
    return pvVar2;
  }
  if (!bVar5) {
    *local_res10 = ~((~unaff_RBP | *(ulonglong *)(unaff_RSI - 0x90)) &
                    (~*(ulonglong *)(unaff_RSI - 0x90) | unaff_RBP));
    *local_res10 = *(ulonglong *)(unaff_RSI - 0x50);
    uVar3 = *local_res10 | unaff_RBP;
    pvVar2 = (void *)FUN_16110bfe5(uVar3,param_2,~(*local_res10 & unaff_RBP & ~uVar3),FUN_16110bfe5)
    ;
    return pvVar2;
  }
  pvVar2 = (void *)FUN_164b4abbe(param_1,param_2,unaff_retaddr);
  return pvVar2;
}



// FUNCTION 14dd2d19f FUN_14dd2d19f body=145 status=ok
// SIG undefined FUN_14dd2d19f(void)

void FUN_14dd2d19f(void)

{
  FUN_15b06b618(FUN_15b06b618);
  return;
}



// FUNCTION 14dd2d353 FUN_14dd2d353 body=197 status=ok
// SIG undefined FUN_14dd2d353(void)

void FUN_14dd2d353(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  undefined8 in_R11;
  longlong unaff_R13;
  ulonglong uVar3;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0xa0) ^ unaff_R15;
  uVar2 = local_res20 ^ unaff_R15;
  plVar1 = (longlong *)(uVar2 - 8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - (local_res10 ^ unaff_R15);
  *plVar1 = -*plVar1;
  *(undefined8 *)(uVar2 - 0x10) = in_R11;
  *(undefined8 *)(uVar2 - 0x18) = local_res8;
  *(undefined4 *)(uVar2 - 0x18) = 0x6abe2da2;
  *(undefined4 *)(uVar2 - 0x14) = 0;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RDI;
  *(ulonglong *)(uVar2 - 0x20) = uVar3;
  *(ulonglong *)(uVar2 - 0x28) = uVar3;
  *(ulonglong *)(uVar2 - 0x30) = uVar3;
  *(code **)(uVar2 - 0x20) = FUN_14dd2d419;
  *(undefined **)(uVar2 - 0x28) = &DAT_14dcfadec;
  return;
}



// FUNCTION 14dd2d419 FUN_14dd2d419 body=164 status=ok
// SIG undefined FUN_14dd2d419(void)

void FUN_14dd2d419(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_160b8188a((char)param_1,0xffffffffffffffd8,
                ~(*(ulonglong *)(unaff_RDI + -0x70) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1),
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  return;
}



// FUNCTION 14dd2d5e3 FUN_14dd2d5e3 body=137 status=ok
// SIG undefined FUN_14dd2d5e3(void)

void FUN_14dd2d5e3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)&LAB_14d905fe8)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd2d790 thunk_FUN_14dd2d796 body=5 status=ok
// SIG undefined thunk_FUN_14dd2d796(void)

void thunk_FUN_14dd2d796(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  FUN_15b29373f(*(ulonglong *)(in_R11 + -0x28) + in_R10 +
                (*(ulonglong *)(in_R11 + -0x28) & in_R10) * -2);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd2d796 FUN_14dd2d796 body=135 status=ok
// SIG undefined FUN_14dd2d796(void)

void FUN_14dd2d796(void)

{
  ulonglong in_R10;
  longlong in_R11;
  
  FUN_15b29373f(*(ulonglong *)(in_R11 + -0x28) + in_R10 +
                (*(ulonglong *)(in_R11 + -0x28) & in_R10) * -2);
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd2d81d FUN_14dd2d81d body=58 status=ok
// SIG undefined FUN_14dd2d81d(void)

void FUN_14dd2d81d(undefined1 param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  thunk_FUN_15b642ca5(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14dd2db4b FUN_14dd2db4b body=146 status=ok
// SIG undefined FUN_14dd2db4b(void)

void FUN_14dd2db4b(ulonglong param_1)

{
  ulonglong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_157123262(~((unaff_RDI | param_1) & (~param_1 | unaff_R15)),
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dd2dc75 FUN_14dd2dc75 body=738 status=ok
// SIG undefined FUN_14dd2dc75(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2dd0b) */
/* WARNING: Removing unreachable block (ram,0x00014dd2dd11) */
/* WARNING: Removing unreachable block (ram,0x00014dd2dce5) */
/* WARNING: Removing unreachable block (ram,0x000161268768) */
/* WARNING: Removing unreachable block (ram,0x000161268885) */
/* WARNING: Removing unreachable block (ram,0x0001612688dc) */
/* WARNING: Removing unreachable block (ram,0x0001612688df) */

undefined8 FUN_14dd2dc75(void)

{
  undefined8 uVar1;
  
  FUN_1626b7764();
  FUN_1655b83d1();
  uVar1 = FUN_1616bc36b();
  return uVar1;
}



// FUNCTION 14dd2dd11 FUN_14dd2dd11 body=192 status=ok
// SIG undefined FUN_14dd2dd11(void)

undefined8 FUN_14dd2dd11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16276e0cb(param_1,FUN_16276e0cb,param_3);
  return uVar1;
}



// FUNCTION 14dd2dea5 FUN_14dd2dea5 body=284 status=ok
// SIG undefined FUN_14dd2dea5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2df44) */

ulonglong FUN_14dd2dea5(void)

{
  code *pcVar1;
  ulonglong unaff_RBP;
  ulonglong unaff_RDI;
  
  FUN_15b786ee7();
  pcVar1 = FUN_15b98a7a3;
  FUN_15b98a7a3();
  return *(ulonglong *)((~(unaff_RDI & unaff_RBP) & (unaff_RDI | unaff_RBP)) - 0x80) ^
         (ulonglong)pcVar1;
}



// FUNCTION 14dd2e111 FUN_14dd2e111 body=146 status=ok
// SIG undefined FUN_14dd2e111(void)

/* WARNING: Removing unreachable block (ram,0x00016544b884) */
/* WARNING: Removing unreachable block (ram,0x00016544b88a) */
/* WARNING: Removing unreachable block (ram,0x00016544b88f) */
/* WARNING: Removing unreachable block (ram,0x00016544b74d) */
/* WARNING: Removing unreachable block (ram,0x00016544b7dc) */
/* WARNING: Removing unreachable block (ram,0x00016544b7e1) */
/* WARNING: Removing unreachable block (ram,0x0001629523ae) */
/* WARNING: Removing unreachable block (ram,0x00016544b7e7) */
/* WARNING: Removing unreachable block (ram,0x0001651c19dd) */
/* WARNING: Removing unreachable block (ram,0x00016544b73d) */

void FUN_14dd2e111(undefined8 param_1)

{
  short unaff_BP;
  
  if (-1 < unaff_BP) {
    FUN_156be1373();
    return;
  }
  FUN_16544b6a7(param_1);
  return;
}



// FUNCTION 14dd2e25b thunk_FUN_14dd2e261 body=5 status=ok
// SIG undefined thunk_FUN_14dd2e261(void)

void thunk_FUN_14dd2e261(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (param_3 ^ 0x1fbe3f5b));
  FUN_162e5d7a1(param_1,param_2,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd2e261 FUN_14dd2e261 body=263 status=ok
// SIG undefined FUN_14dd2e261(void)

void FUN_14dd2e261(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (param_3 ^ 0x1fbe3f5b));
  FUN_162e5d7a1(param_1,param_2,uVar1 + unaff_R15 + (uVar1 & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd2e3f5 FUN_14dd2e3f5 body=288 status=ok
// SIG undefined FUN_14dd2e3f5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2e490) */
/* WARNING: Removing unreachable block (ram,0x00014dd2e496) */

void FUN_14dd2e3f5(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x16662a42e)
            (*(longlong *)(unaff_R13 + -0x48) + -1,0x16662a42e,
             ~(*(ulonglong *)(unaff_R13 + -0x88) & unaff_R15 |
              ~*(ulonglong *)(unaff_R13 + -0x88) & ~unaff_R15),
             (unaff_RDI + param_2 ^ 0xffffffffffffffffU) & unaff_RSI);
  return;
}



// FUNCTION 14dd2e496 FUN_14dd2e496 body=12 status=ok
// SIG undefined FUN_14dd2e496(void)

void FUN_14dd2e496(void)

{
  FUN_165dc09fc();
  return;
}



// FUNCTION 14dd2e4a2 FUN_14dd2e4a2 body=169 status=ok
// SIG undefined FUN_14dd2e4a2(void)

void FUN_14dd2e4a2(void)

{
  longlong unaff_RBX;
  
  if (unaff_RBX == 0x113928) {
    return;
  }
  if (unaff_RBX != 0x113929) {
    FUN_1664a96e4();
    return;
  }
  FUN_1664a96d0();
  FUN_14d7c517c();
  return;
}



// FUNCTION 14dd2e59b FUN_14dd2e59b body=79 status=ok
// SIG undefined FUN_14dd2e59b(void)

void FUN_14dd2e59b(void)

{
  return;
}



// FUNCTION 14dd2e714 FUN_14dd2e714 body=232 status=ok
// SIG undefined FUN_14dd2e714(void)

void FUN_14dd2e714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong in_R11;
  undefined8 unaff_R12;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ushort local_res10;
  uint6 uStackX_12;
  longlong *local_res18;
  
  FUN_1654544b7(FUN_1654544b7,param_2,param_3);
  bVar13 = (local_res10 & 0x4000) != 0;
  bVar12 = (local_res10 & 0x800) != 0;
  bVar11 = (local_res10 & 0x400) != 0;
  bVar10 = (local_res10 & 0x200) != 0;
  bVar9 = 0;
  bVar8 = (local_res10 & 0x80) != 0;
  bVar7 = (local_res10 & 0x40) != 0;
  bVar6 = (local_res10 & 0x10) != 0;
  bVar5 = (local_res10 & 4) != 0;
  bVar4 = (local_res10 & 1) != 0;
  bVar17 = (uStackX_12 & 0x20) != 0;
  bVar14 = (uStackX_12 & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar1 = (code *)swi(0x2e);
  uVar3 = (*pcVar1)();
  *local_res18 = in_R11;
  local_res18[-1] = in_R11;
  *(undefined4 *)(local_res18 + -2) = 0x10ce5ba5;
  *(undefined4 *)((longlong)local_res18 + -0xc) = 0;
  lVar2 = local_res18[-2];
  local_res18[-2] =
       (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
       (ulonglong)bVar11 * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 | (ulonglong)(bVar9 & 1) * 0x100
       | (ulonglong)(bVar8 & 1) * 0x80 | (ulonglong)(bVar7 & 1) * 0x40 |
       (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
       (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
       (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  local_res18[-3] = uVar3;
  local_res18[-4] = unaff_R12;
  local_res18[-5] =
       (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
       (ulonglong)bVar11 * 0x400 | (ulonglong)(bVar10 & 1) * 0x200 | (ulonglong)(bVar9 & 1) * 0x100
       | (ulonglong)(bVar8 & 1) * 0x80 | (ulonglong)(bVar7 & 1) * 0x40 |
       (ulonglong)(bVar6 & 1) * 0x10 | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) |
       (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
       (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  *local_res18 = lVar2 + -0xdc37f25;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd2e813 FUN_14dd2e813 body=145 status=ok
// SIG undefined FUN_14dd2e813(void)

void FUN_14dd2e813(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18;
  
  FUN_165a1cdde((~(~local_res18 | param_1) | (~param_1 + local_res18) - (~param_1 & local_res18)) +
                (~local_res18 | param_1),param_2,param_3);
  return;
}



// FUNCTION 14dd2e8a5 FUN_14dd2e8a5 body=71 status=ok
// SIG undefined FUN_14dd2e8a5(void)

void FUN_14dd2e8a5(void)

{
  return;
}



// FUNCTION 14dd2ea30 FUN_14dd2ea30 body=144 status=ok
// SIG undefined FUN_14dd2ea30(void)

void FUN_14dd2ea30(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  undefined8 local_res10;
  undefined8 local_res20;
  
  uVar1 = local_res20 ^ param_1;
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RBX;
  *(undefined4 *)(uVar1 - 0x18) = 0xc703b74;
  *(undefined4 *)(uVar1 - 0x14) = 0;
  FUN_15643064f(local_res10 ^ param_1,param_2,0x15d3429ef);
  return;
}



// FUNCTION 14dd2ec0f FUN_14dd2ec0f body=185 status=ok
// SIG undefined FUN_14dd2ec0f(void)

/* WARNING: Instruction at (ram,0x00015754cca4) overlaps instruction at (ram,0x00015754cca3)
    */
/* WARNING: Removing unreachable block (ram,0x000166825ee2) */
/* WARNING: Removing unreachable block (ram,0x000166825ee8) */
/* WARNING: Removing unreachable block (ram,0x00015754cc49) */
/* WARNING: Removing unreachable block (ram,0x00015754cca4) */
/* WARNING: Removing unreachable block (ram,0x00015754cca3) */
/* WARNING: Removing unreachable block (ram,0x00015754cca9) */
/* WARNING: Removing unreachable block (ram,0x00015754cbbe) */
/* WARNING: Removing unreachable block (ram,0x000165a81935) */
/* WARNING: Removing unreachable block (ram,0x00015754cc3e) */
/* WARNING: Removing unreachable block (ram,0x00015754cc44) */
/* WARNING: Removing unreachable block (ram,0x00014dd2ecc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd2ec0f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  char in_stack_00000040;
  
  if (-1 < in_stack_00000040) {
    FUN_15754cafd();
    return;
  }
  if (*(longlong *)(unaff_R13 + -0x28) != -1 || unaff_R15 != 0) {
    FUN_166825e56(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15);
    return;
  }
  return;
}



// FUNCTION 14dd2ecc8 FUN_14dd2ecc8 body=65 status=ok
// SIG undefined FUN_14dd2ecc8(void)

void FUN_14dd2ecc8(void)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(unaff_retaddr);
  return;
}



// FUNCTION 14dd2f0bd FUN_14dd2f0bd body=623 status=ok
// SIG undefined FUN_14dd2f0bd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2f1fd) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f165) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f1f7) */
/* WARNING: Removing unreachable block (ram,0x00015b769e1e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd2f0bd(void)

{
  longlong unaff_R13;
  
  if (-1 < unaff_R13 + -0x40) {
    FUN_16608a37c();
    return;
  }
  FUN_16608a37c();
  return;
}



// FUNCTION 14dd2f377 FUN_14dd2f377 body=261 status=ok
// SIG undefined FUN_14dd2f377(void)

void FUN_14dd2f377(void)

{
  ulonglong uVar1;
  undefined1 in_AL;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 uStackX_10;
  
  uVar1 = CONCAT62(uStackX_a,~local_res8) ^ 0xffff;
  bVar10 = (uVar1 & 0x4000) != 0;
  bVar9 = (uVar1 & 0x800) != 0;
  bVar8 = (uVar1 & 0x400) != 0;
  bVar7 = (uVar1 & 0x200) != 0;
  bVar6 = (uVar1 & 0x80) != 0;
  bVar5 = (uVar1 & 0x40) != 0;
  bVar4 = (uVar1 & 0x10) != 0;
  bVar3 = (uVar1 & 4) != 0;
  bVar2 = (uVar1 & 1) != 0;
  bVar12 = (uVar1 & 0x200000) != 0;
  bVar11 = (uVar1 & 0x40000) != 0;
  LOCK();
  UNLOCK();
  DAT_14d7aa3af = in_AL;
  *(undefined8 *)(uStackX_10 + -8) = unaff_R13;
  *(undefined8 *)(uStackX_10 + -0x10) = unaff_R13;
  *(ulonglong *)(uStackX_10 + -0x18) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x80 | (ulonglong)bVar5 * 0x40 |
       (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(uStackX_10 + -0x20) = unaff_RBP;
  *(ulonglong *)(uStackX_10 + -0x28) =
       (ulonglong)bVar10 * 0x4000 | (ulonglong)bVar9 * 0x800 | (ulonglong)bVar8 * 0x400 |
       (ulonglong)bVar7 * 0x200 | (ulonglong)bVar6 * 0x80 | (ulonglong)bVar5 * 0x40 |
       (ulonglong)bVar4 * 0x10 | (ulonglong)bVar3 * 4 | (ulonglong)bVar2 |
       (ulonglong)bVar12 * 0x200000 | (ulonglong)bVar11 * 0x40000;
  *(undefined8 *)(uStackX_10 + -0x28) = 0x14dd2f3f8;
  FUN_14db5312d();
  *(undefined8 *)(uStackX_10 + -0x20) = unaff_RSI;
  *(undefined8 *)(uStackX_10 + -0x10) = *(undefined8 *)(uStackX_10 + -0x18);
  *(undefined8 *)(uStackX_10 + -0x10) = in_R10;
  *(undefined8 *)(uStackX_10 + -0x18) = 0x28beab0;
  *(undefined8 *)(uStackX_10 + -0x20) = unaff_RBX;
  *(undefined8 *)(uStackX_10 + -0x28) = 0x156df70d8;
  return;
}



// FUNCTION 14dd2f51b FUN_14dd2f51b body=727 status=ok
// SIG undefined FUN_14dd2f51b(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2f6ea) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f6e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f6f5) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f752) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f756) */
/* WARNING: Removing unreachable block (ram,0x00015b74e450) */
/* WARNING: Removing unreachable block (ram,0x00015b74e45c) */
/* WARNING: Removing unreachable block (ram,0x00015b74e504) */
/* WARNING: Removing unreachable block (ram,0x00015b74e50f) */
/* WARNING: Removing unreachable block (ram,0x00015b74e515) */
/* WARNING: Removing unreachable block (ram,0x0001665e35ec) */
/* WARNING: Removing unreachable block (ram,0x0001665e3693) */
/* WARNING: Removing unreachable block (ram,0x0001650d548a) */
/* WARNING: Removing unreachable block (ram,0x0001665e3699) */
/* WARNING: Removing unreachable block (ram,0x000160b9a446) */
/* WARNING: Removing unreachable block (ram,0x0001665e3716) */
/* WARNING: Removing unreachable block (ram,0x0001665e371c) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f64d) */
/* WARNING: Removing unreachable block (ram,0x00014e2496eb) */
/* WARNING: Removing unreachable block (ram,0x00014e2496f7) */
/* WARNING: Removing unreachable block (ram,0x00015b74e32d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000018 : 0x00015b74e38a */
/* WARNING: Removing unreachable block (ram,0x00014e249684) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f5aa) */
/* WARNING: Removing unreachable block (ram,0x00014dae1d84) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f642) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd2f51b(undefined8 param_1)

{
  undefined8 uVar1;
  short unaff_DI;
  short unaff_R13W;
  undefined8 unaff_R14;
  ushort unaff_R15W;
  undefined8 local_res20;
  longlong in_stack_00000038;
  
  if ((ushort)((-~unaff_R15W - unaff_R13W) + unaff_DI) != 0) {
    uVar1 = FUN_14e24963d();
    return uVar1;
  }
  FUN_1655c3d3b(param_1,FUN_1655c3d3b);
  *(undefined8 *)(in_stack_00000038 + -8) = local_res20;
  *(undefined8 *)(in_stack_00000038 + -0x10) = param_1;
  *(undefined8 *)(in_stack_00000038 + -0x10) = *(undefined8 *)(in_stack_00000038 + -8);
  *(undefined8 *)(in_stack_00000038 + -0x18) = unaff_R14;
  *(undefined1 **)(in_stack_00000038 + -8) = &LAB_166df0f13;
  uVar1 = thunk_FUN_15b0572f1();
  return uVar1;
}



// FUNCTION 14dd2f64d FUN_14dd2f64d body=161 status=ok
// SIG undefined FUN_14dd2f64d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2f752) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f6e4) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f6f5) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f756) */
/* WARNING: Removing unreachable block (ram,0x00014dd2f6ea) */

undefined8 FUN_14dd2f64d(void)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  ulonglong unaff_retaddr;
  
  uVar2 = ~(~(unaff_RBX & 0xffffffffe4301e0b) & (unaff_RBX | 0xffffffffe4301e0b));
  *(undefined8 *)(&stack0x00000010 + uVar2) = 0;
  *(ulonglong *)(&stack0x00000010 + uVar2) =
       *(ulonglong *)(&stack0x00000010 + uVar2) ^ unaff_retaddr;
  uVar1 = FUN_160b7fcfc();
  return uVar1;
}



// FUNCTION 14dd2f6f5 FUN_14dd2f6f5 body=148 status=ok
// SIG undefined FUN_14dd2f6f5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2f752) */

ulonglong FUN_14dd2f6f5(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  
  return ~(unaff_RBP & (~in_RAX | ~param_2));
}



// FUNCTION 14dd2fc01 FUN_14dd2fc01 body=34 status=ok
// SIG undefined FUN_14dd2fc01(void)

void FUN_14dd2fc01(void)

{
  return;
}



// FUNCTION 14dd2fca0 FUN_14dd2fca0 body=786 status=ok
// SIG undefined FUN_14dd2fca0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2fdd8) */
/* WARNING: Removing unreachable block (ram,0x00014dd2fde3) */
/* WARNING: Removing unreachable block (ram,0x00014db3282f) */
/* WARNING: Removing unreachable block (ram,0x00014db32835) */
/* WARNING: Removing unreachable block (ram,0x00014db3283a) */
/* WARNING: Removing unreachable block (ram,0x00014db32886) */
/* WARNING: Removing unreachable block (ram,0x00014db32891) */
/* WARNING: Removing unreachable block (ram,0x00014dd2fd4d) */
/* WARNING: Removing unreachable block (ram,0x00014dd2fd53) */
/* WARNING: Removing unreachable block (ram,0x00014dd2fd71) */
/* WARNING: Removing unreachable block (ram,0x00014dd2fd74) */

undefined8 FUN_14dd2fca0(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd2fe70 FUN_14dd2fe70 body=319 status=ok
// SIG undefined FUN_14dd2fe70(void)

/* WARNING: Removing unreachable block (ram,0x00014dd2ff16) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd2fe70(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  undefined8 in_stack_00000010;
  ulonglong local_res18;
  
  pcVar2 = FUN_162693b8f;
  FUN_162693b8f(local_res18 ^ param_1,FUN_162693b8f,param_3,in_stack_00000010);
  uVar1 = FUN_1568cb989((param_5 + param_1) -
                        (((param_5 & param_1) << 1 | (param_5 & param_1) >> 0x3f | 1) - 1));
  FUN_15b9a5f94(0,(-~unaff_RSI - (unaff_RBP + 2)) + ((ulonglong)pcVar2 & uVar1) * -2);
  return;
}



// FUNCTION 14dd2ff16 FUN_14dd2ff16 body=141 status=ok
// SIG undefined FUN_14dd2ff16(void)

void FUN_14dd2ff16(undefined8 param_1,undefined8 param_2)

{
  FUN_16618d615(param_1,param_2);
  return;
}



// FUNCTION 14dd302bc FUN_14dd302bc body=134 status=ok
// SIG undefined FUN_14dd302bc(void)

void FUN_14dd302bc(void)

{
  FUN_1627090f9();
  return;
}



// FUNCTION 14dd30349 FUN_14dd30349 body=46 status=ok
// SIG undefined FUN_14dd30349(void)

void FUN_14dd30349(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd3046d FUN_14dd3046d body=130 status=ok
// SIG undefined FUN_14dd3046d(void)

void FUN_14dd3046d(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  char unaff_SIL;
  bool bVar4;
  bool bVar5;
  char local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = local_res18 ^ param_1;
  param_1 = local_res20 ^ param_1;
  LOCK();
  bVar4 = in_AL < DAT_14d7ac28e;
  bVar5 = SBORROW1(in_AL,DAT_14d7ac28e);
  cVar2 = in_AL - DAT_14d7ac28e;
  bVar3 = unaff_SIL + local_res10 * -2;
  if (cVar2 != '\0') {
    in_AL = DAT_14d7ac28e;
    bVar3 = DAT_14d7ac28e;
  }
  DAT_14d7ac28e = bVar3;
  UNLOCK();
  *(undefined8 *)(param_1 - 8) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x10) = unaff_RBX;
  *(ulonglong *)(param_1 - 0x18) = CONCAT71(in_register_00000001,in_AL);
  *(undefined4 *)(param_1 - 0x18) = 0x98d87ac;
  *(undefined4 *)(param_1 - 0x14) = 0;
  *(ulonglong *)(param_1 - 0x18) =
       (ulonglong)((uVar1 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uVar1 & 0x400) != 0) * 0x400 | (ulonglong)((uVar1 & 0x200) != 0) * 0x200 |
       (ulonglong)(cVar2 < '\0') * 0x80 | (ulonglong)(cVar2 == '\0') * 0x40 |
       (ulonglong)((uVar1 & 0x10) != 0) * 0x10 | (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 |
       (ulonglong)bVar4 | (ulonglong)((uVar1 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar1 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(param_1 - 0x20) = unaff_RBP;
  *(undefined8 *)(param_1 - 0x28) = param_4;
  FUN_166deff88();
  return;
}



// FUNCTION 14dd30575 FUN_14dd30575 body=174 status=ok
// SIG undefined FUN_14dd30575(void)

void FUN_14dd30575(void)

{
  ulonglong uVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong in_R10;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  ushort uVar3;
  ulonglong unaff_retaddr;
  longlong local_res8 [4];
  
  plVar2 = (longlong *)((longlong)local_res8 + in_RAX);
  uVar1 = -*plVar2;
  uVar3 = (ushort)(in_NT & 1) * 0x4000 | (ushort)SBORROW8(0,*plVar2) * 0x800 |
          (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
          (ushort)((longlong)uVar1 < 0) * 0x80 | (ushort)(uVar1 == 0) * 0x40 |
          (ushort)(in_AF & 1) * 0x10 | (ushort)((POPCOUNT(uVar1 & 0xff) & 1U) == 0) * 4 |
          (ushort)(*plVar2 != 0);
  plVar2 = (longlong *)register0x00000020;
  if ((ushort)((0x100 - (uVar3 | 0x100)) + uVar3) == 0) {
    plVar2 = local_res8;
  }
  *(undefined4 *)(plVar2 + -1) = 0xffffffff;
  *(undefined4 *)((longlong)plVar2 + -4) = 0xffffffff;
  FUN_14e1db7b0(FUN_14e1db7b0,~-((unaff_retaddr & 0xffffffff00000000) - in_R10));
  return;
}



// FUNCTION 14dd3074b FUN_14dd3074b body=142 status=ok
// SIG undefined FUN_14dd3074b(void)

void FUN_14dd3074b(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  
  (*(code *)0x161de3856)(param_1,param_2 ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14dd30909 FUN_14dd30909 body=181 status=ok
// SIG undefined FUN_14dd30909(void)

void FUN_14dd30909(void)

{
  longlong unaff_RBX;
  undefined8 in_R9;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + unaff_RBX) = in_R9;
  return;
}



// FUNCTION 14dd30a25 FUN_14dd30a25 body=261 status=ok
// SIG undefined FUN_14dd30a25(void)

/* WARNING: Removing unreachable block (ram,0x00014dd30aa0) */
/* WARNING: Removing unreachable block (ram,0x00014dd30aac) */
/* WARNING: Removing unreachable block (ram,0x00014dd30b30) */
/* WARNING: Removing unreachable block (ram,0x00015b72f1e4) */
/* WARNING: Removing unreachable block (ram,0x00015b72f26a) */
/* WARNING: Removing unreachable block (ram,0x00015b72f335) */
/* WARNING: Removing unreachable block (ram,0x00015b72f26f) */
/* WARNING: Removing unreachable block (ram,0x0001574185f1) */
/* WARNING: Removing unreachable block (ram,0x000165bde4c2) */
/* WARNING: Removing unreachable block (ram,0x000157418682) */
/* WARNING: Removing unreachable block (ram,0x00015741868e) */
/* WARNING: Removing unreachable block (ram,0x000157418693) */
/* WARNING: Removing unreachable block (ram,0x00015b72f275) */
/* WARNING: Removing unreachable block (ram,0x00015b72f2f0) */
/* WARNING: Removing unreachable block (ram,0x0001654e9786) */
/* WARNING: Removing unreachable block (ram,0x00015b72f2f6) */
/* WARNING: Removing unreachable block (ram,0x00015b72f338) */
/* WARNING: Removing unreachable block (ram,0x00015b72f37e) */
/* WARNING: Removing unreachable block (ram,0x00015b72f384) */
/* WARNING: Removing unreachable block (ram,0x00015b72f389) */
/* WARNING: Removing unreachable block (ram,0x00015af286a6) */
/* WARNING: Removing unreachable block (ram,0x00014dd30b36) */

undefined8 FUN_14dd30a25(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)&LAB_14d935484)(param_1,&LAB_14d935484);
  return uVar1;
}



// FUNCTION 14dd30aac FUN_14dd30aac body=293 status=ok
// SIG undefined FUN_14dd30aac(void)

/* WARNING: Removing unreachable block (ram,0x00015b72f335) */
/* WARNING: Removing unreachable block (ram,0x00015b72f26f) */
/* WARNING: Removing unreachable block (ram,0x00015b72f275) */
/* WARNING: Removing unreachable block (ram,0x00015b72f2f0) */
/* WARNING: Removing unreachable block (ram,0x0001654e9786) */
/* WARNING: Removing unreachable block (ram,0x00015b72f2f6) */
/* WARNING: Removing unreachable block (ram,0x00015b72f338) */
/* WARNING: Removing unreachable block (ram,0x00015b72f37e) */
/* WARNING: Removing unreachable block (ram,0x00015b72f384) */
/* WARNING: Removing unreachable block (ram,0x00015b72f389) */
/* WARNING: Removing unreachable block (ram,0x00015af286a6) */
/* WARNING: Removing unreachable block (ram,0x0001574185f1) */
/* WARNING: Removing unreachable block (ram,0x000165bde4c2) */
/* WARNING: Removing unreachable block (ram,0x000157418682) */
/* WARNING: Removing unreachable block (ram,0x00015741868e) */
/* WARNING: Removing unreachable block (ram,0x000157418693) */
/* WARNING: Removing unreachable block (ram,0x00014dd30b36) */

undefined8 FUN_14dd30aac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1574185f1();
  return uVar1;
}



// FUNCTION 14dd30bd4 FUN_14dd30bd4 body=273 status=ok
// SIG undefined FUN_14dd30bd4(void)

void FUN_14dd30bd4(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong unaff_R13;
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
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  ushort local_res20;
  uint6 uStackX_22;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -0x90) ^ unaff_R15;
  FUN_166393d0f(param_1,~(ulonglong)((uint)param_3 & 0x7097983e),param_3,
                *(undefined8 *)(unaff_R13 + -0x60));
  uVar1 = *(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = ~*(ulonglong *)(uVar4 + 0x10);
  *(ulonglong *)(uVar4 + 0x10) = *(ulonglong *)(uVar4 + 0x10) | param_1;
  uVar2 = *(ulonglong *)(uVar4 + 0x10);
  *(undefined8 *)(uVar4 + 0x10) = 0;
  *(ulonglong *)(uVar4 + 0x10) = *(ulonglong *)(uVar4 + 0x10) ^ ~((~param_1 | uVar1) & uVar2);
  bVar13 = (local_res20 & 0x4000) != 0;
  bVar12 = (local_res20 & 0x800) != 0;
  bVar11 = (local_res20 & 0x200) != 0;
  bVar10 = 0;
  bVar9 = (local_res20 & 0x80) != 0;
  bVar8 = (local_res20 & 0x40) != 0;
  bVar7 = (local_res20 & 0x10) != 0;
  bVar6 = (local_res20 & 4) != 0;
  bVar5 = (local_res20 & 1) != 0;
  bVar17 = (uStackX_22 & 0x20) != 0;
  bVar14 = (uStackX_22 & 4) != 0;
  bVar16 = 0;
  bVar15 = 0;
  pcVar3 = (code *)swi(0x2e);
  (*pcVar3)(uStackX_18,uStackX_10);
  *param_5 = param_3;
  param_5[-1] = param_3;
  param_5[-2] = (ulonglong)(bVar13 & 1) * 0x4000 | (ulonglong)(bVar12 & 1) * 0x800 |
                (ulonglong)((local_res20 & 0x400) != 0) * 0x400 | (ulonglong)(bVar11 & 1) * 0x200 |
                (ulonglong)(bVar10 & 1) * 0x100 | (ulonglong)(bVar9 & 1) * 0x80 |
                (ulonglong)(bVar8 & 1) * 0x40 | (ulonglong)(bVar7 & 1) * 0x10 |
                (ulonglong)(bVar6 & 1) * 4 | (ulonglong)(bVar5 & 1) |
                (ulonglong)(bVar17 & 1) * 0x200000 | (ulonglong)(bVar16 & 1) * 0x100000 |
                (ulonglong)(bVar15 & 1) * 0x80000 | (ulonglong)(bVar14 & 1) * 0x40000;
  *(undefined4 *)(param_5 + -3) = 0x394b2d2b;
  *(undefined4 *)((longlong)param_5 + -0x14) = 0;
  FUN_1651d1bfb();
  return;
}



// FUNCTION 14dd30ce8 FUN_14dd30ce8 body=160 status=ok
// SIG undefined FUN_14dd30ce8(void)

void FUN_14dd30ce8(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  ulonglong uVar1;
  
  uVar1 = ~*(ulonglong *)(unaff_RDI + -0x50);
  (*(code *)&LAB_1647e574a)
            (param_1,param_2,~(param_1 & ~*(ulonglong *)(unaff_RDI + -0x50)),
             (uVar1 + param_1) - (uVar1 & param_1));
  return;
}



// FUNCTION 14dd30d89 FUN_14dd30d89 body=83 status=ok
// SIG undefined FUN_14dd30d89(void)

void FUN_14dd30d89(HANDLE param_1,DWORD param_2,SIZE_T param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd30dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dd30e3c FUN_14dd30e3c body=590 status=ok
// SIG undefined FUN_14dd30e3c(void)

void FUN_14dd30e3c(longlong param_1)

{
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  param_1 = param_1 - *(longlong *)(unaff_R13 + unaff_RDI);
  FUN_14db69f7d((param_1 - unaff_R15) + (-param_1 | unaff_R15) * 2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dd3106c FUN_14dd3106c body=276 status=ok
// SIG undefined FUN_14dd3106c(void)

void FUN_14dd3106c(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  FUN_164901193();
  FUN_161984210(param_1,param_2,*(undefined8 *)(unaff_RDI + -0x40),
                -(unaff_R13 - unaff_RBX) + param_1 + ~(~-(unaff_R13 - unaff_RBX) | ~param_1) * -2);
  return;
}



// FUNCTION 14dd3118a FUN_14dd3118a body=296 status=ok
// SIG undefined FUN_14dd3118a(void)

void FUN_14dd3118a(void)

{
  FUN_1616bb35b();
  FUN_162a3361c();
  return;
}



// FUNCTION 14dd31371 FUN_14dd31371 body=17 status=ok
// SIG undefined FUN_14dd31371(void)

void FUN_14dd31371(void)

{
  return;
}



// FUNCTION 14dd3151b FUN_14dd3151b body=153 status=ok
// SIG undefined FUN_14dd3151b(void)

/* WARNING: Removing unreachable block (ram,0x000165de892e) */
/* WARNING: Removing unreachable block (ram,0x000165de8784) */
/* WARNING: Removing unreachable block (ram,0x000165de878a) */
/* WARNING: Removing unreachable block (ram,0x000165de878f) */
/* WARNING: Removing unreachable block (ram,0x000165de888d) */
/* WARNING: Removing unreachable block (ram,0x000165de8888) */
/* WARNING: Removing unreachable block (ram,0x000165de8892) */
/* WARNING: Removing unreachable block (ram,0x000165de8933) */
/* WARNING: Removing unreachable block (ram,0x000165de8939) */
/* WARNING: Removing unreachable block (ram,0x000165de854e) */
/* WARNING: Removing unreachable block (ram,0x000165de8554) */
/* WARNING: Removing unreachable block (ram,0x000165de8559) */
/* WARNING: Removing unreachable block (ram,0x000165de86e3) */
/* WARNING: Removing unreachable block (ram,0x000165de86f4) */
/* WARNING: Removing unreachable block (ram,0x00015696509e) */
/* WARNING: Removing unreachable block (ram,0x0001569651dd) */
/* WARNING: Removing unreachable block (ram,0x0001569651e2) */
/* WARNING: Removing unreachable block (ram,0x0001569651e8) */
/* WARNING: Removing unreachable block (ram,0x000165231ee5) */
/* WARNING: Removing unreachable block (ram,0x000165de86ef) */
/* WARNING: Removing unreachable block (ram,0x000165de86de) */
/* WARNING: Removing unreachable block (ram,0x0001611cb8f8) */
/* WARNING: Removing unreachable block (ram,0x000165de893e) */
/* WARNING: Removing unreachable block (ram,0x000165de895d) */
/* WARNING: Removing unreachable block (ram,0x000165de8962) */
/* WARNING: Removing unreachable block (ram,0x000165de898d) */
/* WARNING: Removing unreachable block (ram,0x000165de89b3) */
/* WARNING: Removing unreachable block (ram,0x000165de89c0) */
/* WARNING: Removing unreachable block (ram,0x000165de89c5) */
/* WARNING: Removing unreachable block (ram,0x000164c309fa) */
/* WARNING: Removing unreachable block (ram,0x000165de89cb) */
/* WARNING: Removing unreachable block (ram,0x000165de89d1) */
/* WARNING: Removing unreachable block (ram,0x000165de89d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd315ab) */
/* WARNING: Removing unreachable block (ram,0x00014dd315b7) */
/* WARNING: Removing unreachable block (ram,0x00015b6b88ff) */
/* WARNING: Removing unreachable block (ram,0x00015b6b89aa) */
/* WARNING: Removing unreachable block (ram,0x00015b6b89b0) */
/* WARNING: Removing unreachable block (ram,0x000165df3f9f) */
/* WARNING: Removing unreachable block (ram,0x000165df4015) */
/* WARNING: Removing unreachable block (ram,0x000165df401b) */
/* WARNING: Removing unreachable block (ram,0x000165de84aa) */
/* WARNING: Removing unreachable block (ram,0x000162198839) */
/* WARNING: Removing unreachable block (ram,0x00014dd316cb) */
/* WARNING: Removing unreachable block (ram,0x00014dd316d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd31769) */
/* WARNING: Removing unreachable block (ram,0x00014dd3176f) */
/* WARNING: Removing unreachable block (ram,0x00014dd31774) */
/* WARNING: Removing unreachable block (ram,0x0001660f3c7a) */
/* WARNING: Removing unreachable block (ram,0x00014dd316d1) */
/* WARNING: Removing unreachable block (ram,0x00015b76714c) */
/* WARNING: Removing unreachable block (ram,0x00015b7671da) */
/* WARNING: Removing unreachable block (ram,0x00015b7671e0) */
/* WARNING: Removing unreachable block (ram,0x000164ffdf73) */

undefined8 FUN_14dd3151b(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_15b76714c();
  return uVar1;
}



// FUNCTION 14dd315b7 FUN_14dd315b7 body=438 status=ok
// SIG undefined FUN_14dd315b7(void)

/* WARNING: Removing unreachable block (ram,0x00014dd316cb) */
/* WARNING: Removing unreachable block (ram,0x00014dd316d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd31769) */
/* WARNING: Removing unreachable block (ram,0x00014dd3176f) */
/* WARNING: Removing unreachable block (ram,0x00014dd31774) */
/* WARNING: Removing unreachable block (ram,0x0001660f3c7a) */
/* WARNING: Removing unreachable block (ram,0x000165de854e) */
/* WARNING: Removing unreachable block (ram,0x000165de8554) */
/* WARNING: Removing unreachable block (ram,0x000165de8559) */
/* WARNING: Removing unreachable block (ram,0x000165de86e3) */
/* WARNING: Removing unreachable block (ram,0x000165de86f4) */
/* WARNING: Removing unreachable block (ram,0x00015696509e) */
/* WARNING: Removing unreachable block (ram,0x0001569651dd) */
/* WARNING: Removing unreachable block (ram,0x0001569651e2) */
/* WARNING: Removing unreachable block (ram,0x0001569651e8) */
/* WARNING: Removing unreachable block (ram,0x000165231ee5) */
/* WARNING: Removing unreachable block (ram,0x000165de86ef) */
/* WARNING: Removing unreachable block (ram,0x000165de86de) */
/* WARNING: Removing unreachable block (ram,0x0001611cb8f8) */
/* WARNING: Removing unreachable block (ram,0x000165de892e) */
/* WARNING: Removing unreachable block (ram,0x000165de8784) */
/* WARNING: Removing unreachable block (ram,0x000165de878a) */
/* WARNING: Removing unreachable block (ram,0x000165de878f) */
/* WARNING: Removing unreachable block (ram,0x000165de888d) */
/* WARNING: Removing unreachable block (ram,0x000165de8888) */
/* WARNING: Removing unreachable block (ram,0x000165de8892) */
/* WARNING: Removing unreachable block (ram,0x000165de8933) */
/* WARNING: Removing unreachable block (ram,0x000165de8939) */
/* WARNING: Removing unreachable block (ram,0x000165de893e) */
/* WARNING: Removing unreachable block (ram,0x000165de895d) */
/* WARNING: Removing unreachable block (ram,0x000165de8962) */
/* WARNING: Removing unreachable block (ram,0x000165de898d) */
/* WARNING: Removing unreachable block (ram,0x000165de89b3) */
/* WARNING: Removing unreachable block (ram,0x000165de89c0) */
/* WARNING: Removing unreachable block (ram,0x000165de89c5) */
/* WARNING: Removing unreachable block (ram,0x000164c309fa) */
/* WARNING: Removing unreachable block (ram,0x000165de89cb) */
/* WARNING: Removing unreachable block (ram,0x000165de89d1) */
/* WARNING: Removing unreachable block (ram,0x000165de89d6) */
/* WARNING: Removing unreachable block (ram,0x00014dd316d1) */
/* WARNING: Removing unreachable block (ram,0x000165df401b) */
/* WARNING: Removing unreachable block (ram,0x00015b6b89b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14dd315b7(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166d23c49(*(undefined8 *)(unaff_R12 + -0x58),0x2cf1);
  uVar1 = *(ulonglong *)(unaff_R13 + -0x38);
  return ~((~(~unaff_R15 & uVar1) + uVar1) - unaff_R15 & (~uVar1 | unaff_R15));
}



// FUNCTION 14dd31774 FUN_14dd31774 body=149 status=ok
// SIG undefined FUN_14dd31774(void)

void FUN_14dd31774(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  
  uVar1 = *(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = ~*(ulonglong *)(unaff_RBP + 8);
  *(ulonglong *)(unaff_RBP + 8) = *(ulonglong *)(unaff_RBP + 8) | param_1;
  *(ulonglong *)(unaff_RBP + 8) = ~((~param_1 | uVar1) & *(ulonglong *)(unaff_RBP + 8));
  return;
}



// FUNCTION 14dd3197a FUN_14dd3197a body=450 status=ok
// SIG undefined FUN_14dd3197a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd31b3c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd3197a(void)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1564c2f03(*(undefined8 *)(unaff_RSI + -0x70),FUN_1564c2f03,
                *(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,
                ~((~unaff_RBP | in_RAX) + unaff_RBP + 1) & (in_RAX | unaff_RBP));
  FUN_1611e3fe6();
  uVar2 = ~*(ulonglong *)(unaff_R13 + -0x78);
  uVar3 = ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
           (uVar2 + unaff_R15) - (uVar2 & unaff_R15));
  uVar2 = *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15;
  if (-1 < *(longlong *)(unaff_R13 + -0x68)) {
    uVar1 = FUN_1619a1c6d(uVar3,uVar2);
    return uVar1;
  }
  uVar1 = FUN_1619a1c6d(uVar3,uVar2);
  return uVar1;
}



// FUNCTION 14dd31bd9 FUN_14dd31bd9 body=153 status=ok
// SIG undefined FUN_14dd31bd9(void)

void FUN_14dd31bd9(void)

{
  return;
}



// FUNCTION 14dd31c74 FUN_14dd31c74 body=156 status=ok
// SIG undefined FUN_14dd31c74(void)

void FUN_14dd31c74(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&LAB_1567619fe)(&LAB_1567619fe,param_2);
  return;
}



// FUNCTION 14dd31ef0 FUN_14dd31ef0 body=288 status=ok
// SIG undefined FUN_14dd31ef0(void)

void FUN_14dd31ef0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x20) = param_4;
  *(undefined8 *)(local_res18 + -0x28) = *(undefined8 *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -0x28);
  uVar3 = *(undefined8 *)(local_res18 + -0x20);
  uVar4 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -8) = 0;
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RDI;
  lVar1 = *(longlong *)(local_res18 + -8);
  *(undefined8 *)(local_res18 + -0x28) = 0x14dd31f85;
  FUN_1649b9c7e(param_1,uVar4,param_3,uVar3);
  uVar2 = *(ulonglong *)(lVar1 + -0x68);
  *(longlong *)(local_res18 + -0x28) = lVar1;
  *(ulonglong *)(local_res18 + -0x30) = param_1;
  *(ulonglong *)(local_res18 + -0x38) = ~((~param_1 | uVar2) & (~uVar2 | param_1));
  FUN_14e072c22();
  return;
}



// FUNCTION 14dd32260 FUN_14dd32260 body=443 status=ok
// SIG undefined FUN_14dd32260(void)

/* WARNING: Removing unreachable block (ram,0x00014dd32306) */

void FUN_14dd32260(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong unaff_RSI;
  longlong lVar7;
  undefined8 unaff_RDI;
  ulonglong unaff_R14;
  undefined8 unaff_R15;
  byte in_TF;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong unaff_retaddr;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  uVar3 = local_res8;
  local_res10[0] =
       *(longlong *)
        ((longlong)local_res10 +
        (~(~(unaff_RSI & 0xffffffffceb20c41) & (unaff_RSI | 0xffffffffceb20c41)) - 0x10)) - param_2;
  local_res8 = (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
  puVar6 = &local_res8;
  if ((ulonglong)(in_TF & 1) == 0) {
    puVar6 = (ulonglong *)local_res10;
  }
  *puVar6 = ~*puVar6;
  *puVar6 = *puVar6 + 1;
  puVar1 = puVar6 + -1;
  *(int *)puVar1 = 0;
  *(int *)puVar1 = (int)*puVar1 + -0x7e046f95;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x80e06d3a;
  puVar6[-2] = param_4;
  uVar2 = *(uint *)((longlong)puVar6 + -4);
  *(uint *)((longlong)puVar6 + -4) = *(uint *)((longlong)puVar6 + -4) | 0x80e06d3a;
  *(uint *)((longlong)puVar6 + -4) = ~(~(uVar2 & 0x80e06d3a) & *(uint *)((longlong)puVar6 + -4));
  uVar4 = puVar6[-2];
  uVar5 = *puVar1;
  *puVar1 = unaff_R14;
  puVar6[-2] = unaff_R15;
  lVar7 = -(~uVar5 + 2);
  *(undefined8 *)((longlong)puVar6 + lVar7 + 0x7e046fae) = 0;
  *(longlong *)((longlong)puVar6 + lVar7 + 0x7e046fae) =
       *(longlong *)((longlong)puVar6 + lVar7 + 0x7e046fae) - uVar3;
  *(longlong *)((longlong)puVar6 + lVar7 + 0x7e046fae) =
       -*(longlong *)((longlong)puVar6 + lVar7 + 0x7e046fae);
  uVar3 = *puVar6;
  *puVar6 = 0;
  *puVar6 = *puVar6 + unaff_retaddr;
  *puVar1 = uVar3;
  *puVar6 = unaff_RDI;
  FUN_16566be39(param_1,LoadLibraryA_exref,param_3,uVar4);
  return;
}



// FUNCTION 14dd323a9 FUN_14dd323a9 body=168 status=ok
// SIG undefined FUN_14dd323a9(void)

void FUN_14dd323a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R13;
  undefined8 unaff_retaddr;
  
  FUN_157479306(param_1,param_2,param_3,unaff_retaddr,unaff_R13);
  FUN_14dd32453();
  return;
}



// FUNCTION 14dd32453 FUN_14dd32453 body=19 status=ok
// SIG undefined FUN_14dd32453(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd32453(longlong param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  byte in_AL;
  byte *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char *pcVar4;
  
  if (!in_ZF && in_OF == in_SF) {
    *param_2 = *param_2 ^ in_AL;
    puVar1 = (uint *)(unaff_RDI + -0x6cf5742f);
    bVar2 = (byte)param_1 & 0x1f;
    *puVar1 = *puVar1 >> bVar2 | *puVar1 << 0x20 - bVar2;
    *(char *)(param_1 + -0x370b691e) =
         *(char *)(param_1 + -0x370b691e) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)_DAT_136890e771f1425b + '\r';
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)((uint)_DAT_136890e771f1425b >> 8),cVar3);
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)param_2;
  if (!CARRY1(bVar2,(byte)param_2) && *unaff_RDI != 0) {
    *(int *)(unaff_RDI + -0x66d49e4b) = *(int *)(unaff_RDI + -0x66d49e4b) << ((byte)param_1 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 14dd324de FUN_14dd324de body=121 status=ok
// SIG undefined FUN_14dd324de(void)

/* WARNING: Removing unreachable block (ram,0x00014dbeb024) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb02a) */
/* WARNING: Removing unreachable block (ram,0x00014dbeb02f) */
/* WARNING: Removing unreachable block (ram,0x00014dd32559) */
/* WARNING: Removing unreachable block (ram,0x00014dd325de) */
/* WARNING: Removing unreachable block (ram,0x00014dd325e3) */

undefined8 FUN_14dd324de(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1568b802d();
  return uVar1;
}



// FUNCTION 14dd32559 FUN_14dd32559 body=155 status=ok
// SIG undefined FUN_14dd32559(void)

/* WARNING: Removing unreachable block (ram,0x00014dd325e3) */

undefined8 FUN_14dd32559(ulonglong param_1)

{
  ulonglong *in_RAX;
  undefined8 uVar1;
  ulonglong unaff_RBP;
  
  *in_RAX = ~*in_RAX;
  *in_RAX = *in_RAX | param_1;
  *in_RAX = ~(unaff_RBP & *in_RAX);
  uVar1 = FUN_164f80a1d();
  return uVar1;
}



// FUNCTION 14dd32602 FUN_14dd32602 body=439 status=ok
// SIG undefined FUN_14dd32602(void)

/* WARNING: Removing unreachable block (ram,0x00014dd326a6) */
/* WARNING: Removing unreachable block (ram,0x00014dd326ac) */
/* WARNING: Removing unreachable block (ram,0x00014dd32731) */
/* WARNING: Removing unreachable block (ram,0x00014dd32737) */
/* WARNING: Removing unreachable block (ram,0x0001654bb243) */
/* WARNING: Removing unreachable block (ram,0x000165c4dffb) */
/* WARNING: Removing unreachable block (ram,0x000165c4e026) */
/* WARNING: Removing unreachable block (ram,0x000165c4e046) */

void FUN_14dd32602(void)

{
  FUN_165c4dffb();
  return;
}



// FUNCTION 14dd3287d FUN_14dd3287d body=80 status=ok
// SIG undefined FUN_14dd3287d(void)

void FUN_14dd3287d(undefined8 param_1,undefined8 param_2)

{
  FUN_162eb8d71(param_1,param_2,0x6956);
  return;
}



// FUNCTION 14dd329fc FUN_14dd329fc body=160 status=ok
// SIG undefined FUN_14dd329fc(void)

void FUN_14dd329fc(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  FUN_15635f7d3(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                -~*(ulonglong *)(unaff_R13 + -0x28) - (~(unaff_retaddr & 0xffffffff00000000) + 2));
  return;
}



// FUNCTION 14dd32bc2 FUN_14dd32bc2 body=483 status=ok
// SIG undefined FUN_14dd32bc2(void)

void FUN_14dd32bc2(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong unaff_retaddr;
  
  uVar1 = (param_2 ^ 0x29f0aa97) + *(longlong *)(unaff_R13 + -0x28);
  uVar2 = ~(*(ulonglong *)(unaff_R13 + -0x30) & unaff_R15) &
          (*(ulonglong *)(unaff_R13 + -0x30) | unaff_R15);
  FUN_156bbdb85(param_1,~((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15)));
  uVar1 = *(ulonglong *)(uVar2 - 0x60);
  uVar1 = FUN_164ffcdf4(param_1,FUN_164ffcdf4,FUN_156bbdb85 + (uVar1 & 0x156bbdb85) * -2 + uVar1,
                        unaff_retaddr ^ *(ulonglong *)(uVar2 - 0x28) ^ 0x156bbdb85);
  if ((uVar1 >> 0x10 & 0x8000) != 0) {
    FUN_14dcb7ae8();
    return;
  }
  return;
}



// FUNCTION 14dd32da8 FUN_14dd32da8 body=105 status=ok
// SIG undefined FUN_14dd32da8(void)

void FUN_14dd32da8(void)

{
  FUN_15782f578();
  (*(code *)0x162cfac1c)();
  return;
}



// FUNCTION 14dd32e12 FUN_14dd32e12 body=117 status=ok
// SIG undefined FUN_14dd32e12(void)

void FUN_14dd32e12(void)

{
  (*(code *)0x162cfac1c)();
  return;
}



// FUNCTION 14dd32f2f FUN_14dd32f2f body=151 status=ok
// SIG undefined FUN_14dd32f2f(void)

void FUN_14dd32f2f(undefined8 param_1,undefined8 param_2)

{
  FUN_1563d5faf(param_1,param_2);
  return;
}



// FUNCTION 14dd32fc9 FUN_14dd32fc9 body=180 status=ok
// SIG undefined FUN_14dd32fc9(void)

void FUN_14dd32fc9(void)

{
  return;
}



// FUNCTION 14dd3307e FUN_14dd3307e body=482 status=ok
// SIG undefined FUN_14dd3307e(void)

/* WARNING: Removing unreachable block (ram,0x00016656748c) */
/* WARNING: Removing unreachable block (ram,0x00014dd33106) */

undefined8 FUN_14dd3307e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  longlong unaff_R13;
  
  if (unaff_RBP == 0x40bfd971) {
    uVar1 = in((short)param_2);
    *unaff_RDI = uVar1;
  }
  uVar2 = FUN_16216af97(*(undefined8 *)(unaff_R13 + -0x70),param_2,param_3,1);
  return uVar2;
}



// FUNCTION 14dd33791 FUN_14dd33791 body=142 status=ok
// SIG undefined FUN_14dd33791(void)

void FUN_14dd33791(void)

{
  FUN_165fed672(&stack0xfffffffffffffff8);
  return;
}



// FUNCTION 14dd33820 thunk_FUN_14dd33826 body=5 status=ok
// SIG undefined thunk_FUN_14dd33826(void)

void thunk_FUN_14dd33826(void)

{
  return;
}



// FUNCTION 14dd33826 FUN_14dd33826 body=160 status=ok
// SIG undefined FUN_14dd33826(void)

void FUN_14dd33826(void)

{
  return;
}



// FUNCTION 14dd33984 FUN_14dd33984 body=818 status=ok
// SIG undefined FUN_14dd33984(void)

/* WARNING: Removing unreachable block (ram,0x00015b8dd539) */
/* WARNING: Removing unreachable block (ram,0x00014dd33ac4) */
/* WARNING: Removing unreachable block (ram,0x00014dd33b17) */
/* WARNING: Removing unreachable block (ram,0x0001667f13cd) */
/* WARNING: Removing unreachable block (ram,0x0001667f146a) */
/* WARNING: Removing unreachable block (ram,0x0001667f1470) */
/* WARNING: Removing unreachable block (ram,0x00015b8dd416) */
/* WARNING: Removing unreachable block (ram,0x00015b8dd53c) */
/* WARNING: Removing unreachable block (ram,0x00014dd33b5d) */
/* WARNING: Removing unreachable block (ram,0x00014dd33b63) */
/* WARNING: Removing unreachable block (ram,0x00014dd33a23) */
/* WARNING: Removing unreachable block (ram,0x00014dd33abe) */
/* WARNING: Removing unreachable block (ram,0x00014dd33ab9) */

undefined8 FUN_14dd33984(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0xa0);
  if (-1 < (longlong)
           ((~(0xffffffffffffffff - unaff_RBP & uVar1) + uVar1) - ~(0xffffffffffffffff - unaff_RBP)
           & (uVar1 ^ 0xffffffffffffffff | unaff_RBP))) {
    uVar2 = (*(code *)0x15b6ec2ec)(local_res10);
    return uVar2;
  }
  uVar2 = FUN_160ff4093();
  return uVar2;
}



// FUNCTION 14dd33cc4 FUN_14dd33cc4 body=34 status=ok
// SIG undefined FUN_14dd33cc4(void)

void FUN_14dd33cc4(void)

{
  return;
}



// FUNCTION 14dd33fbe FUN_14dd33fbe body=200 status=ok
// SIG undefined FUN_14dd33fbe(void)

/* WARNING: Removing unreachable block (ram,0x00016111468d) */
/* WARNING: Removing unreachable block (ram,0x000161114698) */
/* WARNING: Removing unreachable block (ram,0x00016111472b) */
/* WARNING: Removing unreachable block (ram,0x000161114730) */
/* WARNING: Removing unreachable block (ram,0x00016111473c) */
/* WARNING: Removing unreachable block (ram,0x000161114741) */
/* WARNING: Removing unreachable block (ram,0x000161114768) */
/* WARNING: Removing unreachable block (ram,0x00016111476d) */
/* WARNING: Removing unreachable block (ram,0x00015b75f811) */
/* WARNING: Removing unreachable block (ram,0x000161114693) */
/* WARNING: Removing unreachable block (ram,0x00014ddd5767) */
/* WARNING: Removing unreachable block (ram,0x00014dd34082) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd33fbe(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  ulonglong unaff_R15;
  
  if ((~(*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
      (*(ulonglong *)(unaff_RDI + -0x80) | param_1)) == unaff_R15) {
    FUN_15b75f7c9();
    return;
  }
  uVar1 = FUN_16541be84(param_1,~(*(ulonglong *)(unaff_RDI + -0x68) & param_1) &
                                (*(ulonglong *)(unaff_RDI + -0x68) | param_1),FUN_16541be84,param_4)
  ;
  (*(code *)0x15677c222)
            (0x61bd8779,0x15677c222,4,
             ~(~(~(*(ulonglong *)(unaff_R12 + -0x30) ^ 0xffffffffffffffff | ~uVar1) ^
                0xffffffffffffffff) | ~(*(ulonglong *)(unaff_R12 + -0x30) | uVar1)));
  return;
}



// FUNCTION 14dd34088 FUN_14dd34088 body=125 status=ok
// SIG undefined FUN_14dd34088(void)

/* WARNING: Removing unreachable block (ram,0x00014dd34259) */
/* WARNING: Removing unreachable block (ram,0x00014dd3425f) */
/* WARNING: Removing unreachable block (ram,0x000156ea7bd0) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cf4) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cf9) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cff) */
/* WARNING: Removing unreachable block (ram,0x0001664b526e) */
/* WARNING: Removing unreachable block (ram,0x0001664b52a1) */
/* WARNING: Removing unreachable block (ram,0x000165794e53) */
/* WARNING: Removing unreachable block (ram,0x0001664b5304) */
/* WARNING: Removing unreachable block (ram,0x0001664b530a) */
/* WARNING: Removing unreachable block (ram,0x0001664b5391) */
/* WARNING: Removing unreachable block (ram,0x0001664b5396) */
/* WARNING: Removing unreachable block (ram,0x0001664b539c) */
/* WARNING: Removing unreachable block (ram,0x0001664b53a1) */
/* WARNING: Removing unreachable block (ram,0x0001664b542f) */
/* WARNING: Removing unreachable block (ram,0x0001664b5434) */
/* WARNING: Removing unreachable block (ram,0x0001664b543a) */
/* WARNING: Removing unreachable block (ram,0x0001664b543f) */
/* WARNING: Removing unreachable block (ram,0x00014dd34106) */

void FUN_14dd34088(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x88);
  lVar2 = (*(code *)0x162937c72)();
  *(ulonglong *)(&stack0x00000000 + lVar2) =
       ~((~param_1 | uVar1) & (uVar1 ^ 0xffffffffffffffff | param_1));
  (*(code *)0x16586db95)();
  return;
}



// FUNCTION 14dd34106 FUN_14dd34106 body=473 status=ok
// SIG undefined FUN_14dd34106(void)

/* WARNING: Removing unreachable block (ram,0x00014dd34259) */
/* WARNING: Removing unreachable block (ram,0x00014dd3425f) */
/* WARNING: Removing unreachable block (ram,0x000156ea7bd0) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cf4) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cf9) */
/* WARNING: Removing unreachable block (ram,0x000156ea7cff) */
/* WARNING: Removing unreachable block (ram,0x0001664b526e) */
/* WARNING: Removing unreachable block (ram,0x0001664b52a1) */
/* WARNING: Removing unreachable block (ram,0x000165794e53) */
/* WARNING: Removing unreachable block (ram,0x0001664b5304) */
/* WARNING: Removing unreachable block (ram,0x0001664b530a) */
/* WARNING: Removing unreachable block (ram,0x0001664b5391) */
/* WARNING: Removing unreachable block (ram,0x0001664b5396) */
/* WARNING: Removing unreachable block (ram,0x0001664b539c) */
/* WARNING: Removing unreachable block (ram,0x0001664b53a1) */
/* WARNING: Removing unreachable block (ram,0x0001664b542f) */
/* WARNING: Removing unreachable block (ram,0x0001664b5434) */
/* WARNING: Removing unreachable block (ram,0x0001664b543a) */
/* WARNING: Removing unreachable block (ram,0x0001664b543f) */

void FUN_14dd34106(void)

{
  FUN_16599e56c();
  FUN_156ea7bd0();
  return;
}



// FUNCTION 14dd34398 FUN_14dd34398 body=175 status=ok
// SIG undefined FUN_14dd34398(void)

void FUN_14dd34398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 8) = unaff_R14;
  *(undefined8 *)(uVar1 - 0x10) = local_res10;
  *(undefined8 *)(uVar1 - 0x18) = local_res8;
  *(undefined8 *)(uVar1 - 0x20) = local_res8;
  *(code **)(uVar1 - 0x18) = FUN_14dd34448;
  (*(code *)0x1565f8245)(unaff_retaddr,param_2,param_3);
  return;
}



// FUNCTION 14dd34448 FUN_14dd34448 body=197 status=ok
// SIG undefined FUN_14dd34448(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001666d92ba) overlaps instruction at (ram,0x0001666d92b8)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd34548) */
/* WARNING: Removing unreachable block (ram,0x00014dd34502) */
/* WARNING: Removing unreachable block (ram,0x00014dd3450d) */
/* WARNING: Removing unreachable block (ram,0x00014dd3454d) */
/* WARNING: Removing unreachable block (ram,0x00014dd34508) */
/* WARNING: Removing unreachable block (ram,0x0001666d92b5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd34448(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  (*(code *)&LAB_165568662)
            (param_1,(*(ulonglong *)(unaff_RDI + -0x68) & param_1 ^ 0xffffffffffffffff) &
                     (*(ulonglong *)(unaff_RDI + -0x68) | param_1),
             ~(param_3 & param_1) & (param_3 | param_1),
             (~(~param_1 & *(ulonglong *)(unaff_RDI + -0x48)) + *(ulonglong *)(unaff_RDI + -0x48)) -
             param_1);
  return;
}



// FUNCTION 14dd3450d FUN_14dd3450d body=74 status=ok
// SIG undefined FUN_14dd3450d(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14dd3450d(void)

{
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// FUNCTION 14dd346b5 FUN_14dd346b5 body=93 status=ok
// SIG undefined FUN_14dd346b5(void)

void FUN_14dd346b5(void)

{
  return;
}



// FUNCTION 14dd34810 FUN_14dd34810 body=157 status=ok
// SIG undefined FUN_14dd34810(void)

void FUN_14dd34810(undefined8 param_1,undefined8 param_2)

{
  FUN_156643c85(param_1,param_2,FUN_156643c85);
  return;
}



// FUNCTION 14dd34943 FUN_14dd34943 body=169 status=ok
// SIG undefined FUN_14dd34943(void)

void FUN_14dd34943(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  
  FUN_156c22268(FUN_156c22268,param_2,param_3,local_res10);
  return;
}



// FUNCTION 14dd349ed FUN_14dd349ed body=182 status=ok
// SIG undefined FUN_14dd349ed(void)

undefined8 FUN_14dd349ed(void)

{
  return 0;
}



// FUNCTION 14dd34aa7 FUN_14dd34aa7 body=295 status=ok
// SIG undefined FUN_14dd34aa7(void)

void FUN_14dd34aa7(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  ulonglong unaff_RSI;
  undefined8 in_R11;
  longlong unaff_R12;
  ulonglong unaff_R13;
  ulonglong auStackX_18 [2];
  
  *(undefined8 *)
   ((longlong)auStackX_18 +
   (unaff_R13 ^ ~(~(unaff_RSI & 0xffffffffa5f9b58b) & (unaff_RSI | 0xffffffffa5f9b58b)))) = in_R11;
  auStackX_18[0] = *(ulonglong *)(unaff_R12 + -0x98);
  bVar1 = (~in_RAX & (*(ulonglong *)(unaff_R12 + -0xa0) ^ 0xffffffffffffffff)) != 0;
  if ((!bVar1 && in_RAX == 0) && (bVar1 || in_RAX != 0)) {
    FUN_166e071b6(param_1,~in_RAX | *(ulonglong *)(unaff_R12 + -0xa0),0xfffffffffaf85182,8);
    return;
  }
  auStackX_18[0] = auStackX_18[0] ^ in_RAX;
  auStackX_18[1] = auStackX_18[1] ^ in_RAX;
  FUN_166a39c49(param_1,param_2);
  return;
}



// FUNCTION 14dd34bd1 FUN_14dd34bd1 body=138 status=ok
// SIG undefined FUN_14dd34bd1(void)

void FUN_14dd34bd1(undefined8 param_1)

{
  undefined8 in_stack_00000010;
  undefined8 local_res18;
  
  FUN_161d0c5c3(param_1,in_stack_00000010,local_res18);
  return;
}



// FUNCTION 14dd34e66 FUN_14dd34e66 body=329 status=ok
// SIG undefined FUN_14dd34e66(void)

/* WARNING: Removing unreachable block (ram,0x00014dd34f92) */
/* WARNING: Removing unreachable block (ram,0x00014dd34f9d) */
/* WARNING: Removing unreachable block (ram,0x00014dd34ef3) */
/* WARNING: Removing unreachable block (ram,0x00014dd34ef9) */
/* WARNING: Removing unreachable block (ram,0x00016124fb86) */
/* WARNING: Removing unreachable block (ram,0x00016124fbff) */
/* WARNING: Removing unreachable block (ram,0x00016124fc05) */
/* WARNING: Removing unreachable block (ram,0x00016124fc86) */
/* WARNING: Removing unreachable block (ram,0x00016124fc8c) */
/* WARNING: Removing unreachable block (ram,0x000156eaf7f7) */
/* WARNING: Removing unreachable block (ram,0x000156eaf820) */
/* WARNING: Removing unreachable block (ram,0x000156eaf849) */
/* WARNING: Removing unreachable block (ram,0x00014d836fb3) */
/* WARNING: Removing unreachable block (ram,0x00014dd34f98) */
/* WARNING: Removing unreachable block (ram,0x0001613cad3f) */

void FUN_14dd34e66(void)

{
  ulonglong uVar1;
  longlong unaff_R12;
  undefined8 local_res8;
  
  uVar1 = 1 - (~*(ulonglong *)(unaff_R12 + -0x58) + 2);
  FUN_164f2f8d6(~(uVar1 & local_res8) & (~(uVar1 & local_res8) + local_res8) - ~uVar1,
                *(ulonglong *)(unaff_R12 + -0x78) ^ local_res8);
  return;
}



// FUNCTION 14dd3502f FUN_14dd3502f body=283 status=ok
// SIG undefined FUN_14dd3502f(void)

void FUN_14dd3502f(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  byte in_TF;
  longlong unaff_retaddr;
  undefined1 local_res8 [32];
  
  if ((in_TF & 1) == 0) {
    register0x00000020 = (BADSPACEBASE *)local_res8;
  }
  puVar1 = (ulonglong *)((longlong)register0x00000020 + unaff_retaddr + -0xfacd51d);
  *puVar1 = 0x9e56048;
  puVar1[-1] = in_RAX;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 | 0xfffffffff61a9fb7;
  *puVar1 = ~(~(uVar2 & 0xfffffffff61a9fb7) & *puVar1);
  *puVar1 = *puVar1 ^ unaff_RBX;
  uVar2 = *puVar1;
  *puVar1 = unaff_R15;
  puVar1[-1] = 0x14dd350b7;
  FUN_161ba37c4(uVar2);
  *(undefined4 *)(puVar1 + -1) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = 0;
  *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)((longlong)puVar1 + -4);
  uVar2 = puVar1[-1] + *(longlong *)(unaff_R13 + -0x90);
  puVar1[-1] = (ulonglong)(FUN_161ba37c4 + uVar2);
  (*(code *)0x16475f14e)
            (puVar1[-1] + (uVar2 - (uVar2 & 0xfffffffe9e45c83b)) * -2,param_2,0x16475f14e,0);
  return;
}



// FUNCTION 14dd351ef FUN_14dd351ef body=2 status=ok
// SIG undefined FUN_14dd351ef(void)

void FUN_14dd351ef(void)

{
  return;
}



// FUNCTION 14dd35272 FUN_14dd35272 body=109 status=ok
// SIG undefined FUN_14dd35272(void)

void FUN_14dd35272(byte param_1)

{
  ulonglong *puVar1;
  char cVar2;
  byte bVar3;
  byte in_AL;
  undefined8 unaff_RBX;
  short unaff_BP;
  bool bVar4;
  bool bVar5;
  short *unaff_retaddr;
  undefined8 local_res8;
  ulonglong uStackX_18;
  longlong local_res20;
  
  *unaff_retaddr = 0x6ce1;
  *unaff_retaddr = *unaff_retaddr + -0x6ce1;
  *unaff_retaddr = *unaff_retaddr - (unaff_BP + 1);
  *unaff_retaddr = -*unaff_retaddr;
  LOCK();
  bVar4 = in_AL < DAT_14d7c2819;
  bVar5 = SBORROW1(in_AL,DAT_14d7c2819);
  cVar2 = in_AL - DAT_14d7c2819;
  bVar3 = param_1;
  if (cVar2 != '\0') {
    bVar3 = DAT_14d7c2819;
  }
  DAT_14d7c2819 = bVar3;
  UNLOCK();
  puVar1 = (ulonglong *)(local_res20 + -8);
  *(undefined8 *)(local_res20 + -0x10) = local_res8;
  *(ulonglong *)(local_res20 + -0x18) =
       (ulonglong)((uStackX_18 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar5 * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 |
       (ulonglong)((uStackX_18 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_18 & 0x100) != 0) * 0x100 | (ulonglong)(cVar2 < '\0') * 0x80 |
       (ulonglong)(cVar2 == '\0') * 0x40 | (ulonglong)((uStackX_18 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar2) & 1U) == 0) * 4 | (ulonglong)bVar4 |
       (ulonglong)((uStackX_18 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_18 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x4697a011;
  *puVar1 = *puVar1 ^ 0x47cf8f39;
  *(undefined8 *)(local_res20 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res20 + -0x18) = unaff_RBX;
  *(code **)(local_res20 + -0x10) = FUN_15b3d5987;
  return;
}



// FUNCTION 14dd3540c FUN_14dd3540c body=139 status=ok
// SIG undefined FUN_14dd3540c(void)

/* WARNING: Removing unreachable block (ram,0x000165244d92) */
/* WARNING: Removing unreachable block (ram,0x000165244d98) */
/* WARNING: Removing unreachable block (ram,0x0001655c96d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd35497) */
/* WARNING: Removing unreachable block (ram,0x00014dd355b5) */
/* WARNING: Removing unreachable block (ram,0x00014dd355bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd3564a) */
/* WARNING: Removing unreachable block (ram,0x00014dd35654) */
/* WARNING: Removing unreachable block (ram,0x000165244ce5) */

void FUN_14dd3540c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong in_RAX;
  ushort uVar6;
  undefined8 unaff_R12;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined8 in_stack_00000008;
  ushort auStackX_10 [4];
  undefined8 uStackX_18;
  
  puVar1 = (ushort *)((longlong)auStackX_10 + param_3);
  uVar7 = (*puVar1 & 0xfeff ^ 0xffff) - 0x101;
  uVar6 = ~*puVar1;
  if (uVar6 <= uVar7) {
    uVar2 = *puVar1;
    *puVar1 = 0;
    *puVar1 = *puVar1 + (~(uVar7 - uVar6) - 0x100) + uVar2;
    param_5[-1] = in_RAX;
    param_5[-2] = unaff_R12;
    param_5[-3] = unaff_R12;
    param_5[-4] = (longlong)&DAT_15b3c34e1;
    param_5[-5] = (longlong)&DAT_15b3c34e1;
    *(undefined4 *)(param_5 + -5) = 0xa49507a6;
    *(undefined4 *)((longlong)param_5 + -0x24) = 0xffffffff;
    param_5[-2] = *(longlong *)((longlong)param_5 + param_5[-5] + 0x5b6af852);
    param_5[-1] = 0;
    param_5[-1] = param_5[-1] - ((param_5[-4] ^ 0xffffffffffffffffU) + 1);
    param_5[-3] = (longlong)FUN_14dd39064;
    bVar5 = FUN_15b3c3493();
    *(ushort *)(param_5 + -1) = *(ushort *)(param_5 + -1) & 0xfeff;
    uVar10 = param_5[-1];
    lVar3 = *param_5;
    LOCK();
    bVar8 = bVar5 < DAT_14d7abddc;
    bVar9 = SBORROW1(bVar5,DAT_14d7abddc);
    cVar4 = bVar5 - DAT_14d7abddc;
    if (cVar4 == '\0') {
      DAT_14d7abddc = (byte)param_5[-2];
    }
    UNLOCK();
    *(undefined8 *)(lVar3 + -0x10) = in_stack_00000008;
    *(undefined8 *)(lVar3 + -0x18) = uStackX_18;
    *(ulonglong *)(lVar3 + -0x20) =
         (ulonglong)((uVar10 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar9 * 0x800 |
         (ulonglong)((uVar10 & 0x400) != 0) * 0x400 | (ulonglong)((uVar10 & 0x200) != 0) * 0x200 |
         (ulonglong)((uVar10 & 0x100) != 0) * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
         (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)((uVar10 & 0x10) != 0) * 0x10 |
         (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar8 |
         (ulonglong)((uVar10 & 0x200000) != 0) * 0x200000 |
         (ulonglong)((uVar10 & 0x40000) != 0) * 0x40000;
    *(undefined8 *)(lVar3 + -8) = 0x4390350;
    FUN_165c7153c();
    return;
  }
  FUN_14dd38fc8();
  return;
}



// FUNCTION 14dd35497 FUN_14dd35497 body=152 status=ok
// SIG undefined FUN_14dd35497(void)

/* WARNING: Removing unreachable block (ram,0x000165244d92) */
/* WARNING: Removing unreachable block (ram,0x000165244d98) */
/* WARNING: Removing unreachable block (ram,0x0001655c96d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd355bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd3564a) */
/* WARNING: Removing unreachable block (ram,0x00014dd35654) */

void FUN_14dd35497(void)

{
  FUN_156f6e6fe();
  FUN_1655c96d5();
  return;
}



// FUNCTION 14dd3552f FUN_14dd3552f body=320 status=ok
// SIG undefined FUN_14dd3552f(void)

/* WARNING: Removing unreachable block (ram,0x000165244d92) */
/* WARNING: Removing unreachable block (ram,0x000165244d98) */
/* WARNING: Removing unreachable block (ram,0x0001655c96d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd355bb) */
/* WARNING: Removing unreachable block (ram,0x00014dd3564a) */
/* WARNING: Removing unreachable block (ram,0x00014dd35654) */

void FUN_14dd3552f(void)

{
  FUN_1655c96d5();
  return;
}



// FUNCTION 14dd35678 FUN_14dd35678 body=314 status=ok
// SIG undefined FUN_14dd35678(void)

/* WARNING: Removing unreachable block (ram,0x00014dd357ae) */
/* WARNING: Removing unreachable block (ram,0x00016244d555) */
/* WARNING: Removing unreachable block (ram,0x00014dd357b4) */
/* WARNING: Removing unreachable block (ram,0x0001620932d0) */
/* WARNING: Removing unreachable block (ram,0x00014dd3584d) */
/* WARNING: Removing unreachable block (ram,0x00014dd35859) */
/* WARNING: Removing unreachable block (ram,0x00014dd3585e) */

void FUN_14dd35678(void)

{
  FUN_16512344f();
  FUN_16244d555();
  return;
}



// FUNCTION 14dd357b4 FUN_14dd357b4 body=168 status=ok
// SIG undefined FUN_14dd357b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3585e) */

void FUN_14dd357b4(void)

{
  longlong unaff_R13;
  longlong unaff_R15;
  
  if (*(longlong *)(unaff_R13 + -0x60) == 0 && unaff_R15 == 0) {
    FUN_1620932d0();
    return;
  }
  return;
}



// FUNCTION 14dd3585e FUN_14dd3585e body=170 status=ok
// SIG undefined FUN_14dd3585e(void)

void FUN_14dd3585e(void)

{
  FUN_156bf564c();
  return;
}



// FUNCTION 14dd35afe FUN_14dd35afe body=42 status=ok
// SIG undefined FUN_14dd35afe(void)

void FUN_14dd35afe(HMODULE param_1,LPCSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd35b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(param_1,param_2);
  return;
}



// FUNCTION 14dd35c6a FUN_14dd35c6a body=243 status=ok
// SIG undefined FUN_14dd35c6a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd35d09) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd35c6a(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char in_AL;
  ulonglong *unaff_RBP;
  ulonglong in_stack_00000008;
  undefined8 local_res20;
  
  uVar1 = *unaff_RBP;
  uVar2 = *unaff_RBP;
  *unaff_RBP = ~*unaff_RBP;
  *unaff_RBP = *unaff_RBP | param_1;
  uVar3 = *unaff_RBP;
  *unaff_RBP = 0;
  *unaff_RBP = *unaff_RBP + ~((~uVar1 & ~in_stack_00000008 | uVar2) & uVar3);
  param_5 = param_5 ^ (ushort)param_1;
  if ((short)(0xffff - param_5 | 0x100) < 0) {
    FUN_156ad4a75();
    return;
  }
  LOCK();
  if (in_AL == FUN_14d7be6cb) {
    FUN_14d7be6cb = (char)local_res20;
  }
  UNLOCK();
  *(undefined8 *)((param_6 ^ param_1) - 8) = 0x79099a0;
  FUN_165c7153c(local_res20,param_2,param_3);
  return;
}



// FUNCTION 14dd35d62 FUN_14dd35d62 body=162 status=ok
// SIG undefined FUN_14dd35d62(void)

void FUN_14dd35d62(void)

{
  FUN_15748f92e();
  return;
}



// FUNCTION 14dd35f41 FUN_14dd35f41 body=117 status=ok
// SIG undefined FUN_14dd35f41(void)

void FUN_14dd35f41(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)0x165d38f9a)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd36117 FUN_14dd36117 body=167 status=ok
// SIG undefined FUN_14dd36117(void)

/* WARNING: Removing unreachable block (ram,0x00014dd36250) */

undefined8 FUN_14dd36117(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_retaddr;
  ulonglong *local_res10;
  
  puVar1 = local_res10 + -1;
  *puVar1 = 0;
  *puVar1 = *puVar1;
  *puVar1 = *puVar1 - unaff_RSI;
  *puVar1 = -*puVar1;
  local_res10[-2] = *puVar1;
  local_res10[-3] = param_1;
  *(undefined4 *)(local_res10 + -4) = 0x9b0ac622;
  ((ushort *)((longlong)local_res10 + -0x1c))[0] = 0xffff;
  ((ushort *)((longlong)local_res10 + -0x1c))[1] = 0xffff;
  uVar3 = local_res10[-4];
  local_res10[-4] = param_2;
  puVar1 = (ulonglong *)((longlong)local_res10 + uVar3 + 0x64f539d6);
  *puVar1 = 0xd9e33ba;
  *puVar1 = *puVar1 ^ 0xd9e33ba;
  *puVar1 = *puVar1;
  uVar6 = local_res10[-4];
  uVar7 = local_res10[-3];
  local_res10[-3] = unaff_RBX;
  local_res10[-4] = unaff_R12;
  local_res10[-1] = ~local_res10[-1];
  local_res10[-1] = 0x1617afb3c - local_res10[-1];
  local_res10[-4] = (ulonglong)FUN_14dd361bf;
  uVar5 = FUN_1617afb0b(uVar7,uVar6);
  uVar6 = local_res10[-3];
  local_res10[-3] = unaff_R14;
  local_res10[-4] = param_3;
  local_res10[-5] = in_R10;
  local_res10[-5] = (0xffffffffffffffff - unaff_retaddr | *local_res10) + unaff_retaddr + 1;
  *local_res10 = 0;
  *local_res10 = *local_res10 + local_res10[-5];
  uVar4 = local_res10[-4];
  *local_res10 = ~*local_res10;
  local_res10[-3] = uVar7;
  local_res10[-4] = uVar6;
  *local_res10 = (~(unaff_retaddr | 8) | *local_res10) + (unaff_retaddr | 8) + 1;
  local_res10[1] = local_res10[1] ^ unaff_retaddr;
  if (unaff_retaddr != 0) {
    uVar6 = FUN_14e0fc53a(local_res10[-3],local_res10[-4],uVar4);
    return uVar6;
  }
  *(ushort *)local_res10 = (ushort)*local_res10 & 0xfeff;
  lVar2 = local_res10[1];
  *(undefined8 *)(lVar2 + -8) = 0x107083a;
  *(undefined8 *)(lVar2 + -0x28cf) = unaff_R13;
  *(undefined8 *)(lVar2 + -0x28d7) = unaff_R13;
  *(undefined **)(lVar2 + -0x28cf) = &DAT_156ef2e4a;
  return uVar5;
}



// FUNCTION 14dd361bf FUN_14dd361bf body=271 status=ok
// SIG undefined FUN_14dd361bf(void)

/* WARNING: Removing unreachable block (ram,0x00014dd36250) */

undefined8 FUN_14dd361bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  ulonglong local_res20;
  
  uVar1 = local_res20 ^ unaff_R15;
  if (unaff_R15 != 0) {
    uVar2 = FUN_14e0fc53a(param_1,unaff_retaddr,param_3);
    return uVar2;
  }
  *(undefined8 *)(uVar1 - 8) = 0x107083a;
  *(undefined8 *)(uVar1 - 0x28cf) = unaff_R13;
  *(undefined8 *)(uVar1 - 0x28d7) = unaff_R13;
  *(undefined **)(uVar1 - 0x28cf) = &DAT_156ef2e4a;
  return in_RAX;
}



// FUNCTION 14dd36425 FUN_14dd36425 body=139 status=ok
// SIG undefined FUN_14dd36425(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd364ff) overlaps instruction at (ram,0x00014dd364fc)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd364fc) */
/* WARNING: Removing unreachable block (ram,0x0001570c13d1) */
/* WARNING: Removing unreachable block (ram,0x0001570c1479) */
/* WARNING: Removing unreachable block (ram,0x0001570c147f) */
/* WARNING: Removing unreachable block (ram,0x0001565606b7) */
/* WARNING: Removing unreachable block (ram,0x0001610bac74) */
/* WARNING: Removing unreachable block (ram,0x0001610bac7a) */
/* WARNING: Removing unreachable block (ram,0x0001610babe4) */
/* WARNING: Removing unreachable block (ram,0x0001610babea) */
/* WARNING: Removing unreachable block (ram,0x0001610bac6f) */
/* WARNING: Removing unreachable block (ram,0x0001618f360e) */
/* WARNING: Removing unreachable block (ram,0x0001618f3614) */
/* WARNING: Removing unreachable block (ram,0x00014d8c58e2) */
/* WARNING: Removing unreachable block (ram,0x00014d8c5970) */
/* WARNING: Removing unreachable block (ram,0x00014da6a7a7) */
/* WARNING: Removing unreachable block (ram,0x00014dd3655c) */
/* WARNING: Removing unreachable block (ram,0x00014d8c5976) */
/* WARNING: Removing unreachable block (ram,0x00014dd364b2) */
/* WARNING: Removing unreachable block (ram,0x00014dd36551) */
/* WARNING: Removing unreachable block (ram,0x0001566606aa) */

undefined8 FUN_14dd36425(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong *unaff_R14;
  ulonglong unaff_R15;
  
  uVar4 = *(ulonglong *)(unaff_R13 + -0x68);
  if ((ulonglong *)(unaff_R13 + -0x68) == (ulonglong *)0x0) {
    uVar1 = FUN_1618f349e();
    return uVar1;
  }
  lVar3 = uVar4 + unaff_R15 + (uVar4 & unaff_R15) * -2;
  uVar2 = FUN_164f115ef();
  uVar4 = *unaff_R14;
  *unaff_R14 = ~*unaff_R14;
  *unaff_R14 = *unaff_R14 | uVar2;
  *unaff_R14 = ~(~uVar2 | uVar4) | *unaff_R14 ^ 0xffffffffffffffff;
  FUN_14d83f7b6();
  uVar4 = (~param_1 | *(ulonglong *)(lVar3 + -0x68)) & (~*(ulonglong *)(lVar3 + -0x68) | param_1);
  if (-1 < (longlong)uVar4) {
    uVar1 = (*(code *)0x16668f3a5)
                      (0x16668f3a5,~uVar4,*(ulonglong *)(lVar3 + -0x70) ^ param_1,
                       *(ulonglong *)(lVar3 + -0x60) ^ param_1);
    return uVar1;
  }
  uVar1 = FUN_166b3c365();
  return uVar1;
}



// FUNCTION 14dd364b2 FUN_14dd364b2 body=83 status=ok
// SIG undefined FUN_14dd364b2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dd364ff) overlaps instruction at (ram,0x00014dd364fc)
    */
/* WARNING: Removing unreachable block (ram,0x0001610bac74) */
/* WARNING: Removing unreachable block (ram,0x0001610bac7a) */
/* WARNING: Removing unreachable block (ram,0x0001570c13d1) */
/* WARNING: Removing unreachable block (ram,0x0001570c1479) */
/* WARNING: Removing unreachable block (ram,0x0001570c147f) */
/* WARNING: Removing unreachable block (ram,0x0001565606b7) */
/* WARNING: Removing unreachable block (ram,0x0001610babe4) */
/* WARNING: Removing unreachable block (ram,0x0001610babea) */
/* WARNING: Removing unreachable block (ram,0x0001610bac6f) */
/* WARNING: Removing unreachable block (ram,0x00014dd364fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd3655c) */

undefined8 FUN_14dd364b2(void)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)0x166cfaf1d)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  return uVar1;
}



// FUNCTION 14dd365d9 FUN_14dd365d9 body=468 status=ok
// SIG undefined FUN_14dd365d9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd36669) */

void FUN_14dd365d9(void)

{
  ulonglong unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined8 *)
   (&stack0x0000000f + -(~(unaff_R13 & 0xfffffffff62b2303) & (unaff_R13 | 0xfffffffff62b2303))) =
       unaff_R15;
  if (&DAT_ffffffffffffffef < &stack0xfffffffffffffff8) {
    FUN_1666d9755();
    return;
  }
  FUN_16604fdd5();
  return;
}



// FUNCTION 14dd36ac6 FUN_14dd36ac6 body=99 status=ok
// SIG undefined FUN_14dd36ac6(void)

void FUN_14dd36ac6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *unaff_R14;
  ulonglong unaff_retaddr;
  undefined1 uStackX_8;
  
  if (((ulonglong)unaff_R14 & (unaff_retaddr >> 1 | (ulonglong)((unaff_retaddr & 1) != 0) << 0x3f))
      == 0) {
    *unaff_R14 = uStackX_8;
    return;
  }
  FUN_1666b4961(FUN_1666b4961,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd36bb2 FUN_14dd36bb2 body=171 status=ok
// SIG undefined FUN_14dd36bb2(void)

void FUN_14dd36bb2(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_R15;
  
  FUN_161268ef7(param_1,param_2 ^ unaff_R15,param_3,param_4);
  return;
}



// FUNCTION 14dd36d18 FUN_14dd36d18 body=87 status=ok
// SIG undefined FUN_14dd36d18(void)

void FUN_14dd36d18(void)

{
  return;
}



// FUNCTION 14dd36e39 FUN_14dd36e39 body=20 status=ok
// SIG undefined FUN_14dd36e39(void)

undefined8 FUN_14dd36e39(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd370a3 FUN_14dd370a3 body=174 status=ok
// SIG undefined FUN_14dd370a3(void)

void FUN_14dd370a3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -0x10) = in_RAX;
  *(undefined8 *)(local_res10 + -0x18) = param_1;
  uVar2 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -8) = unaff_R12;
  *(undefined8 *)(local_res10 + -0x10) = in_R11;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x20) = in_R10;
  *(undefined8 *)(local_res10 + -0x10) = 0;
  *(longlong *)(local_res10 + -0x10) =
       *(longlong *)(local_res10 + -0x10) + *(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + -0x16180903a;
  *(longlong *)(local_res10 + -8) = -*(longlong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x18) = unaff_retaddr;
  uVar1 = *(undefined8 *)(local_res10 + -0x18);
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x18) = unaff_RBP;
  *(code **)(local_res10 + -0x10) = thunk_FUN_15b642ca5;
  *(undefined8 *)(local_res10 + -0x20) = 0x14dd3714c;
  FUN_161809019(uVar2,uVar1);
  FUN_14dd37152();
  return;
}



// FUNCTION 14dd37152 FUN_14dd37152 body=308 status=ok
// SIG undefined FUN_14dd37152(void)

/* WARNING: Removing unreachable block (ram,0x00014dd371d5) */
/* WARNING: Removing unreachable block (ram,0x00014dd371db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dd37152(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong unaff_R13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uVar6;
  
  lVar3 = -(0xffffffffffffffffU - unaff_RBX & (unaff_R13 | 0xffffffffa4a59dba));
  *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(in_AF & 1) * 0x10 | 4 |
       (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
       (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000;
  plVar1 = (longlong *)(&stack0xfffffffff7c24e76 + lVar3);
  *plVar1 = lVar3 + -0x83db182;
  *(undefined2 *)plVar1 = 0xd71e;
  lVar2 = *plVar1;
  *(undefined8 *)(&stack0xfffffffff7c24e76 + lVar3) = 0x363fd82f;
  iVar5 = (int)*(undefined8 *)(&stack0xfffffffff7c24e76 + lVar3);
  if ((*(ushort *)(&stack0xfffffffff7c24e7e + lVar3) &
      ~(~((ushort)lVar2 & 0x28e0) & ((ushort)lVar2 | 0x28e0))) == 0) {
    uVar6 = *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3);
  }
  else {
    uVar6 = *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3);
    iVar5 = iVar5 + 1;
  }
  uVar4 = iVar5 + 0x1353d639;
  *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)SCARRY4(iVar5,0x1353d639) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((int)uVar4 < 0) * 0x80 |
       (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(&stack0xfffffffff7c24e76 + lVar3) = 0x7ffe0008;
  *(undefined4 *)(&stack0xfffffffff7c24e7a + lVar3) = 0;
  *(undefined8 *)(&stack0xfffffffff7c24e6e + lVar3) = 0x16120f310;
  FUN_1618c1519(param_1,param_2,0xbbd6e5e1);
  uVar6 = *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3);
  *(ulonglong *)(&stack0xfffffffff7c24e7e + lVar3) =
       (ulonglong)((uVar6 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar6 & 0x800) != 0) * 0x800 |
       (ulonglong)((uVar6 & 0x400) != 0) * 0x400 | (ulonglong)((uVar6 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar6 & 0x100) != 0) * 0x100 | (ulonglong)((uVar6 & 0x80) != 0) * 0x80 |
       (ulonglong)((uVar6 & 0x40) != 0) * 0x40 | (ulonglong)((uVar6 & 0x10) != 0) * 0x10 |
       (ulonglong)((uVar6 & 4) != 0) * 4 | (ulonglong)((uVar6 & 1) != 0) |
       (ulonglong)((uVar6 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar6 & 0x40000) != 0) * 0x40000;
  *(ulonglong *)(&stack0xfffffffff7c24e8e + lVar3) =
       (*(ulonglong *)(&stack0xfffffffff7c24e76 + lVar3) ^ 0x38e9ffbe) - 0xfb50700;
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd371e1 FUN_14dd371e1 body=58 status=ok
// SIG undefined FUN_14dd371e1(void)

undefined8 FUN_14dd371e1(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dd3725b FUN_14dd3725b body=140 status=ok
// SIG undefined FUN_14dd3725b(void)

void FUN_14dd3725b(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_R15;
  undefined8 local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  plVar1 = (longlong *)(local_res18 + -0x10);
  *plVar1 = 0x16eb5e79a;
  *plVar1 = *plVar1 + -0xddf8563;
  lVar2 = *plVar1;
  *(undefined8 *)(local_res18 + -0x10) = param_1;
  *(undefined8 *)(local_res18 + -0x18) = param_1;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  *(longlong *)(local_res18 + -8) = lVar2;
  *(undefined8 *)(local_res18 + -0x18) = 0x160d6620b;
  return;
}



// FUNCTION 14dd37398 FUN_14dd37398 body=313 status=ok
// SIG undefined FUN_14dd37398(void)

void FUN_14dd37398(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int unaff_ESI;
  ulonglong in_R10;
  
  uVar2 = (ulonglong)(uint)(param_1 - unaff_ESI);
  uVar1 = FUN_1659210ce(uVar2,param_2,*(undefined8 *)(param_2 + -0x88),
                        *(ulonglong *)(param_2 + -0x60) + in_R10 +
                        (*(ulonglong *)(param_2 + -0x60) & in_R10) * -2);
  *(undefined8 *)(param_5 + -8) = uVar1;
  *(ulonglong *)(param_5 + -0x10) = uVar2;
  *(ulonglong *)(param_5 + -0x18) = uVar2;
  *(longlong *)(param_5 + -0x20) = param_2;
  (*(code *)0x16188d0bf)(0x16188d0bf,0x10);
  return;
}



// FUNCTION 14dd374df FUN_14dd374df body=267 status=ok
// SIG undefined FUN_14dd374df(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3756f) */

void FUN_14dd374df(undefined8 param_1,int param_2,undefined8 param_3)

{
  int unaff_EBX;
  undefined8 in_stack_00000008;
  uint local_res10;
  
  (*(code *)0x16188ec3d)
            (param_1,-(-1 - unaff_EBX) -
                     (param_2 +
                     ~(0xffffffff - (local_res10 & 0xf1e21a9d) & (local_res10 | 0xf1e21a9d))),
             param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dd37575 FUN_14dd37575 body=291 status=ok
// SIG undefined FUN_14dd37575(void)

/* WARNING: Removing unreachable block (ram,0x00014dd375fd) */

void FUN_14dd37575(void)

{
  undefined1 local_8 [8];
  
  if (&DAT_ffffffffffffffe7 < local_8) {
    FUN_165c95812();
    return;
  }
  FUN_165c95812();
  return;
}



// FUNCTION 14dd3771a FUN_14dd3771a body=174 status=ok
// SIG undefined FUN_14dd3771a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd377b6) */

void FUN_14dd3771a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_retaddr;
  undefined8 auStack_10 [2];
  
  *(undefined8 *)(&stack0x00000008 + param_3) = in_R10;
  *(undefined8 *)(&stack0x00000018 + param_3) = *(undefined8 *)(unaff_RDI + -8);
  uVar1 = *(undefined8 *)(&stack0x00000010 + param_3);
  *(undefined8 *)(&stack0x00000010 + param_3) = unaff_retaddr;
  *(undefined8 *)(&stack0x00000008 + param_3) = unaff_retaddr;
  *(undefined8 *)(&stack0x00000000 + param_3) = param_1;
  uVar2 = *(undefined8 *)(&stack0x00000000 + param_3);
  *(undefined8 *)(&stack0x00000000 + param_3) = unaff_R12;
  *(undefined8 *)((longlong)auStack_10 + param_3 + 8) = param_4;
  *(undefined8 *)((longlong)auStack_10 + param_3) = unaff_RBP;
  FUN_15b6da95c(uVar2,param_2,uVar1);
  return;
}



// FUNCTION 14dd37b7d FUN_14dd37b7d body=161 status=ok
// SIG undefined FUN_14dd37b7d(void)

void FUN_14dd37b7d(void)

{
  ushort *puVar1;
  code *pcVar2;
  undefined8 unaff_RDI;
  longlong in_R10;
  ulonglong in_stack_00000008;
  undefined8 uStackX_18;
  undefined8 *in_stack_00000030;
  
  *(undefined4 *)(&stack0x00000008 + in_R10) = 0;
  puVar1 = (ushort *)(&stack0xfffffffff7ffe9b6 + (in_stack_00000008 ^ 0x7be33bd6));
  *puVar1 = -*puVar1;
  *puVar1 = *puVar1 - 1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = ~*puVar1;
  pcVar2 = (code *)swi(0x2e);
  (*pcVar2)();
  *in_stack_00000030 = uStackX_18;
  in_stack_00000030[-1] = uStackX_18;
  in_stack_00000030[-2] = unaff_RDI;
  in_stack_00000030[-3] = unaff_RDI;
  in_stack_00000030[-2] = FUN_14dd37c21;
  (*(code *)0x14d823b1b)();
  return;
}



// FUNCTION 14dd37c21 FUN_14dd37c21 body=19 status=ok
// SIG undefined FUN_14dd37c21(void)

void FUN_14dd37c21(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd37cab FUN_14dd37cab body=298 status=ok
// SIG undefined FUN_14dd37cab(void)

/* WARNING: Removing unreachable block (ram,0x00014dd37d33) */
/* WARNING: Removing unreachable block (ram,0x00014dd37d39) */

void FUN_14dd37cab(void)

{
  FUN_160d4f08e(0x9b61537);
  FUN_15b597693();
  return;
}



// FUNCTION 14dd37d39 FUN_14dd37d39 body=136 status=ok
// SIG undefined FUN_14dd37d39(void)

void FUN_14dd37d39(undefined8 param_1)

{
  FUN_15b159f25(param_1);
  return;
}



// FUNCTION 14dd37dc1 FUN_14dd37dc1 body=72 status=ok
// SIG undefined FUN_14dd37dc1(void)

void FUN_14dd37dc1(void)

{
  return;
}



// FUNCTION 14dd37f17 FUN_14dd37f17 body=254 status=ok
// SIG undefined FUN_14dd37f17(void)

/* WARNING: Removing unreachable block (ram,0x00014dd37f8b) */
/* WARNING: Removing unreachable block (ram,0x00014dd37f96) */
/* WARNING: Removing unreachable block (ram,0x00014dd37f91) */

void FUN_14dd37f17(void)

{
  FUN_1625e5299();
  return;
}



// FUNCTION 14dd380b4 FUN_14dd380b4 body=144 status=ok
// SIG undefined FUN_14dd380b4(void)

void FUN_14dd380b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000008;
  
  FUN_15766840a(in_stack_00000008,param_2,&stack0x00000010);
  FUN_1571411c5();
  return;
}



// FUNCTION 14dd38146 FUN_14dd38146 body=162 status=ok
// SIG undefined FUN_14dd38146(void)

void FUN_14dd38146(void)

{
  FUN_1571411c5();
  return;
}



// FUNCTION 14dd381eb FUN_14dd381eb body=295 status=ok
// SIG undefined FUN_14dd381eb(void)

/* WARNING: Removing unreachable block (ram,0x00014dd38308) */
/* WARNING: Removing unreachable block (ram,0x00014dd3830e) */
/* WARNING: Removing unreachable block (ram,0x00014dd38313) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd381eb(void)

{
  ulonglong unaff_RBP;
  ulonglong in_R10;
  undefined8 local_res8;
  
  FUN_1617eb0c8();
  FUN_16602ebce(local_res8,in_R10 + unaff_RBP + (in_R10 & unaff_RBP) * -2);
  return;
}



// FUNCTION 14dd38313 FUN_14dd38313 body=91 status=ok
// SIG undefined FUN_14dd38313(void)

void FUN_14dd38313(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  undefined8 auStackX_8 [4];
  
  auStackX_8[1] = *(undefined8 *)((longlong)auStackX_8 + param_3);
  auStackX_8[0] = param_4;
  FUN_14d7a7131(param_1,param_2,unaff_retaddr,param_4);
  return;
}



// FUNCTION 14dd384dd FUN_14dd384dd body=334 status=ok
// SIG undefined FUN_14dd384dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dd38599) */
/* WARNING: Removing unreachable block (ram,0x00014dd3858e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd384dd(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15714c9e6(FUN_15714c9e6,param_2,
                *(ulonglong *)(unaff_R13 + -0x90) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x90) & unaff_R15) * -2);
  return;
}



// FUNCTION 14dd386f3 FUN_14dd386f3 body=180 status=ok
// SIG undefined FUN_14dd386f3(void)

/* WARNING: Removing unreachable block (ram,0x00014dd38779) */
/* WARNING: Removing unreachable block (ram,0x00014dd38784) */
/* WARNING: Removing unreachable block (ram,0x00014dd3877f) */

void FUN_14dd386f3(void)

{
  FUN_15712ca41();
  return;
}



// FUNCTION 14dd38826 FUN_14dd38826 body=124 status=ok
// SIG undefined FUN_14dd38826(void)

/* WARNING: Removing unreachable block (ram,0x00014dd38864) */
/* WARNING: Removing unreachable block (ram,0x0001668d2122) */
/* WARNING: Removing unreachable block (ram,0x0001668d21b0) */
/* WARNING: Removing unreachable block (ram,0x0001668d21c1) */
/* WARNING: Removing unreachable block (ram,0x0001668d21bc) */
/* WARNING: Removing unreachable block (ram,0x0001668d21ab) */
/* WARNING: Removing unreachable block (ram,0x00014dd3894a) */
/* WARNING: Removing unreachable block (ram,0x00014db9832e) */
/* WARNING: Removing unreachable block (ram,0x00014dd38950) */

undefined8
FUN_14dd38826(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  ulonglong uVar4;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 in_stack_00000008;
  undefined1 auStack_9869 [39009];
  
  uVar4 = ~(in_R10 | ~param_2);
  uVar1 = *(ulonglong *)(unaff_RBP + 0x110);
  *(ulonglong *)(unaff_RBP + 0x110) = uVar4 - uVar1;
  if (uVar4 >= uVar1) {
    lVar2 = -~(0x498f - (~(ulonglong)auStack_9869 + 2));
    *(undefined8 *)(lVar2 + 0x4eda) = unaff_RSI;
    *(undefined8 *)(lVar2 + 0x4ed2) = in_RAX;
    *(undefined8 *)(lVar2 + 0x4eca) = 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x4ed2);
    *(undefined1 **)(lVar2 + 0x4ed2) = &LAB_161824888;
    return uVar3;
  }
  if (uVar4 - uVar1 == 0 || uVar4 < uVar1) {
    uVar3 = FUN_1623e9ea4(param_1,in_stack_00000008);
    return uVar3;
  }
  uVar1 = ~(param_5 & unaff_R15) & (param_5 | unaff_R15);
  if (uVar1 == 0) {
    uVar3 = FUN_1668d2080();
    return uVar3;
  }
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + param_1;
  uVar4 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  if ((uVar4 & 4) == 0) {
    *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
    uVar3 = *(undefined8 *)(uVar1 - 0x18);
    *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
    *(undefined8 *)(uVar1 - 0x20) = 0;
    *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x20);
    *(undefined8 *)(uVar1 - 0x18) = uVar3;
    *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
    uVar4 = *(ulonglong *)(uVar1 - 8);
    *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & 0x14df89181;
    *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
    *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -1;
    *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & (uVar4 | 0x14df89181);
    uVar3 = thunk_FUN_15b642ca5(*(undefined8 *)(uVar1 - 0x10),in_stack_00000008,param_3,param_4);
    return uVar3;
  }
  uVar3 = FUN_14df890e9();
  return uVar3;
}



// FUNCTION 14dd388a4 FUN_14dd388a4 body=306 status=ok
// SIG undefined FUN_14dd388a4(void)

/* WARNING: Removing unreachable block (ram,0x0001668d2122) */
/* WARNING: Removing unreachable block (ram,0x0001668d21ab) */
/* WARNING: Removing unreachable block (ram,0x0001668d21b0) */
/* WARNING: Removing unreachable block (ram,0x0001668d21bc) */
/* WARNING: Removing unreachable block (ram,0x0001668d21c1) */
/* WARNING: Removing unreachable block (ram,0x00014dd3894a) */
/* WARNING: Removing unreachable block (ram,0x00014db9832e) */
/* WARNING: Removing unreachable block (ram,0x00014dd38950) */

void FUN_14dd388a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_18;
  
  uVar1 = ~(uStackX_18 & unaff_R15) & (uStackX_18 | unaff_R15);
  if (uVar1 == 0) {
    FUN_1668d2080();
    return;
  }
  *(undefined8 *)(uVar1 - 8) = 0;
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + param_1;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x10) = in_RAX;
  *(undefined8 *)(uVar1 - 0x18) = in_RAX;
  if ((uVar2 & 4) != 0) {
    FUN_14df890e9();
    return;
  }
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
  *(undefined8 *)(uVar1 - 0x20) = 0;
  *(undefined8 *)(uVar1 - 8) = *(undefined8 *)(uVar1 - 0x20);
  *(undefined8 *)(uVar1 - 0x18) = uVar3;
  *(undefined8 *)(uVar1 - 0x20) = unaff_R14;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & 0x14df89181;
  *(longlong *)(uVar1 - 8) = -*(longlong *)(uVar1 - 8);
  *(longlong *)(uVar1 - 8) = *(longlong *)(uVar1 - 8) + -1;
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) & (uVar2 | 0x14df89181);
  thunk_FUN_15b642ca5(*(undefined8 *)(uVar1 - 0x10),param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd38b06 FUN_14dd38b06 body=311 status=ok
// SIG undefined FUN_14dd38b06(void)

/* WARNING: Instruction at (ram,0x000164b1cbb1) overlaps instruction at (ram,0x000164b1cbb0)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd38c25) */
/* WARNING: Removing unreachable block (ram,0x00014dd38c37) */
/* WARNING: Removing unreachable block (ram,0x00014dd38c3d) */
/* WARNING: Removing unreachable block (ram,0x00014dd38cc3) */
/* WARNING: Removing unreachable block (ram,0x00014dd38cc6) */
/* WARNING: Removing unreachable block (ram,0x00016531ede7) */
/* WARNING: Removing unreachable block (ram,0x00016531ee32) */
/* WARNING: Removing unreachable block (ram,0x00016531ee36) */
/* WARNING: Removing unreachable block (ram,0x000164b1cbb0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x000164b1cbfc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_14dd38b06(void)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong unaff_R13;
  uint unaff_R15D;
  
  uVar1 = -~(uint)*(undefined8 *)(unaff_R13 + -0x68) - 1;
  FUN_1622fb626();
  if (-1 < (int)(~((~unaff_R15D | uVar1) & (~uVar1 | unaff_R15D)) - (-1 - unaff_R15D))) {
    puVar2 = (undefined1 *)FUN_164b1cb4c();
    return puVar2;
  }
  return &LAB_156748f53;
}



// FUNCTION 14dd38c3e FUN_14dd38c3e body=295 status=ok
// SIG undefined FUN_14dd38c3e(void)

/* WARNING: Removing unreachable block (ram,0x00014dd38cc3) */

void FUN_14dd38c3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_165708f08();
  FUN_164b78753(in_stack_00000008,param_2,param_3,FUN_164b78753);
  return;
}



// FUNCTION 14dd38d69 FUN_14dd38d69 body=163 status=ok
// SIG undefined FUN_14dd38d69(void)

void FUN_14dd38d69(undefined8 param_1,undefined8 param_2)

{
  FUN_15affbbfc(param_1,param_2);
  return;
}



// FUNCTION 14dd38fc8 FUN_14dd38fc8 body=155 status=ok
// SIG undefined FUN_14dd38fc8(void)

void FUN_14dd38fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong in_RAX;
  short *unaff_RBX;
  ushort unaff_DI;
  undefined8 unaff_R12;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 local_res10;
  longlong *local_res20;
  
  sVar1 = *unaff_RBX;
  *unaff_RBX = 0;
  *unaff_RBX = *unaff_RBX + (~unaff_DI - 0x100) + sVar1;
  local_res20[-1] = in_RAX;
  local_res20[-2] = unaff_R12;
  local_res20[-3] = unaff_R12;
  local_res20[-4] = (longlong)&DAT_15b3c34e1;
  local_res20[-5] = (longlong)&DAT_15b3c34e1;
  *(undefined4 *)(local_res20 + -5) = 0xa49507a6;
  *(undefined4 *)((longlong)local_res20 + -0x24) = 0xffffffff;
  local_res20[-2] = *(longlong *)((longlong)local_res20 + local_res20[-5] + 0x5b6af852);
  local_res20[-1] = 0;
  local_res20[-1] = local_res20[-1] - ((local_res20[-4] ^ 0xffffffffffffffffU) + 1);
  local_res20[-3] = (longlong)FUN_14dd39064;
  bVar5 = FUN_15b3c3493();
  lVar2 = local_res20[-2];
  *(ushort *)(local_res20 + -1) = *(ushort *)(local_res20 + -1) & 0xfeff;
  uVar8 = local_res20[-1];
  lVar3 = *local_res20;
  LOCK();
  bVar6 = bVar5 < DAT_14d7abddc;
  bVar7 = SBORROW1(bVar5,DAT_14d7abddc);
  cVar4 = bVar5 - DAT_14d7abddc;
  if (cVar4 == '\0') {
    DAT_14d7abddc = (byte)lVar2;
  }
  UNLOCK();
  *(undefined8 *)(lVar3 + -0x10) = param_3;
  *(undefined8 *)(lVar3 + -0x18) = local_res10;
  *(ulonglong *)(lVar3 + -0x20) =
       (ulonglong)((uVar8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar7 * 0x800 |
       (ulonglong)((uVar8 & 0x400) != 0) * 0x400 | (ulonglong)((uVar8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uVar8 & 0x100) != 0) * 0x100 | (ulonglong)(cVar4 < '\0') * 0x80 |
       (ulonglong)(cVar4 == '\0') * 0x40 | (ulonglong)((uVar8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar4) & 1U) == 0) * 4 | (ulonglong)bVar6 |
       (ulonglong)((uVar8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(lVar3 + -8) = 0x4390350;
  FUN_165c7153c(lVar2,param_2,*(undefined8 *)(lVar3 + -0x10));
  return;
}



// FUNCTION 14dd39064 FUN_14dd39064 body=67 status=ok
// SIG undefined FUN_14dd39064(void)

void FUN_14dd39064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte in_AL;
  undefined8 unaff_RDI;
  bool bVar2;
  bool bVar3;
  undefined8 unaff_retaddr;
  undefined2 local_res8;
  undefined6 uStackX_a;
  undefined8 uStackX_10;
  
  LOCK();
  bVar2 = in_AL < DAT_14d7abddc;
  bVar3 = SBORROW1(in_AL,DAT_14d7abddc);
  cVar1 = in_AL - DAT_14d7abddc;
  if (cVar1 == '\0') {
    DAT_14d7abddc = (byte)unaff_retaddr;
  }
  UNLOCK();
  *(undefined8 *)(uStackX_10 + -0x10) = param_3;
  *(undefined8 *)(uStackX_10 + -0x18) = unaff_RDI;
  *(ulonglong *)(uStackX_10 + -0x20) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar3 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar2 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined8 *)(uStackX_10 + -8) = 0x4390350;
  FUN_165c7153c(unaff_retaddr,param_2,*(undefined8 *)(uStackX_10 + -0x10));
  return;
}



// FUNCTION 14dd390fc FUN_14dd390fc body=631 status=ok
// SIG undefined FUN_14dd390fc(void)

/* WARNING: Removing unreachable block (ram,0x00014dd39235) */
/* WARNING: Removing unreachable block (ram,0x00014dd3923b) */
/* WARNING: Removing unreachable block (ram,0x00014dd39279) */
/* WARNING: Removing unreachable block (ram,0x00014dd3927d) */
/* WARNING: Removing unreachable block (ram,0x00014dd392cc) */
/* WARNING: Removing unreachable block (ram,0x00014dd392d7) */
/* WARNING: Removing unreachable block (ram,0x00014dd392dd) */
/* WARNING: Removing unreachable block (ram,0x000162b66799) */

void FUN_14dd390fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined *puVar3;
  undefined8 unaff_RBX;
  longlong unaff_R12;
  undefined8 uVar4;
  ulonglong unaff_R15;
  undefined8 local_res10;
  undefined8 local_res18;
  
  uVar1 = *(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = ~*(ulonglong *)(unaff_R12 + 8);
  *(ulonglong *)(unaff_R12 + 8) = *(ulonglong *)(unaff_R12 + 8) | unaff_R15;
  *(ulonglong *)(unaff_R12 + 8) = ~((~unaff_R15 | uVar1) & *(ulonglong *)(unaff_R12 + 8));
  param_5 = param_5 ^ unaff_R15;
  *(undefined8 *)(param_5 - 8) = param_1;
  puVar3 = &DAT_156cd7559;
  *(undefined8 *)(param_5 - 0x10) = in_RAX;
  *(undefined8 *)(param_5 - 0x18) = in_RAX;
  *(undefined8 *)(param_5 - 0x20) = local_res18;
  uVar4 = *(undefined8 *)(param_5 - 8);
  *(undefined8 *)(param_5 - 0x20) = unaff_RBX;
  *(undefined8 *)(param_5 - 0x10) = uVar4;
  *(undefined8 *)(param_5 - 0x20) = 0x14dd391a4;
  lVar2 = FUN_156cd74e8(&DAT_156cd7559,param_2,param_3,local_res10);
  uVar4 = 0;
  *(undefined **)(param_5 - 0x18) = puVar3;
  if (lVar2 < 0) {
    uVar4 = 0xffffffffffffffff;
  }
  FUN_162b051b5(*(undefined8 *)(param_5 - 0x18),uVar4);
  return;
}



// FUNCTION 14dd392dd FUN_14dd392dd body=298 status=ok
// SIG undefined FUN_14dd392dd(void)

void FUN_14dd392dd(undefined8 param_1,ulonglong param_2)

{
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  
  FUN_16104d1b4(param_1,~(unaff_RSI & unaff_RBP - ~param_2));
  FUN_15af53eee();
  return;
}



// FUNCTION 14dd39409 FUN_14dd39409 body=132 status=ok
// SIG undefined FUN_14dd39409(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3948d) */

void FUN_14dd39409(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int in_stack_00000040;
  
  uVar1 = ~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) &
          (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP);
  if (-1 < in_stack_00000040) {
    FUN_1566b757f(uVar1,*(ulonglong *)(unaff_RSI + -0x58) ^ 0xffffffffffffffff);
    return;
  }
  FUN_1664e49e2(uVar1,0x16febd02);
  FUN_165c7153c(CONCAT44(0xe90142fd,in_stack_00000040));
  return;
}



// FUNCTION 14dd3948d FUN_14dd3948d body=166 status=ok
// SIG undefined FUN_14dd3948d(void)

void FUN_14dd3948d(void)

{
  return;
}



// FUNCTION 14dd395d1 FUN_14dd395d1 body=18 status=ok
// SIG undefined FUN_14dd395d1(void)

undefined8 FUN_14dd395d1(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dd39714 FUN_14dd39714 body=72 status=ok
// SIG undefined FUN_14dd39714(void)

void FUN_14dd39714(void)

{
  return;
}



// FUNCTION 14dd397ae FUN_14dd397ae body=79 status=ok
// SIG undefined FUN_14dd397ae(void)

void FUN_14dd397ae(void)

{
  return;
}



// FUNCTION 14dd39857 FUN_14dd39857 body=92 status=ok
// SIG undefined FUN_14dd39857(void)

void FUN_14dd39857(void)

{
  return;
}



// FUNCTION 14dd39992 FUN_14dd39992 body=132 status=ok
// SIG undefined FUN_14dd39992(void)

/* WARNING: Removing unreachable block (ram,0x000161993b5f) */
/* WARNING: Removing unreachable block (ram,0x000156981f4c) */
/* WARNING: Removing unreachable block (ram,0x000162d6c56d) */
/* WARNING: Removing unreachable block (ram,0x000162d6c573) */
/* WARNING: Removing unreachable block (ram,0x00014dd39a10) */
/* WARNING: Removing unreachable block (ram,0x00014dd39a16) */
/* WARNING: Removing unreachable block (ram,0x000162d6c4d5) */

void FUN_14dd39992(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x48) + unaff_R15;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x48) & unaff_R15;
  if (uVar1 < uVar2 * 2) {
    return;
  }
  FUN_161993b3d(uVar1 + uVar2 * -2,param_2,param_3);
  return;
}



// FUNCTION 14dd39a16 FUN_14dd39a16 body=188 status=ok
// SIG undefined FUN_14dd39a16(void)

void FUN_14dd39a16(void)

{
  ulonglong uVar1;
  longlong local_res8;
  
  uVar1 = (local_res8 * -0x6c158a5880000000 ^ (ulonglong)(local_res8 * -0x3d4d51c2d82b14b1) >> 0x21)
          * -0x61c8864e7a143579;
  FUN_14db2d553(~(uVar1 & 0x27d4eb2f165667cd) & (uVar1 | 0x27d4eb2f165667cd),&DAT_9e3779b185ebca87,
                &DAT_c2b2ae3d27d4eb4f,FUN_14db2d553);
  return;
}



// FUNCTION 14dd39ad2 FUN_14dd39ad2 body=170 status=ok
// SIG undefined FUN_14dd39ad2(void)

void FUN_14dd39ad2(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x30) | param_1;
  uVar2 = 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x30) & param_1);
  FUN_165cf5bbe(param_1,param_2 + 1,(uVar1 - (uVar2 | uVar1)) + uVar2,0);
  return;
}



// FUNCTION 14dd39c98 FUN_14dd39c98 body=155 status=ok
// SIG undefined FUN_14dd39c98(void)

void FUN_14dd39c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  
  FUN_1661b3a88(8,param_2,param_3,param_4,*(undefined8 *)(unaff_R13 + -0x70));
  return;
}



// FUNCTION 14dd39d34 FUN_14dd39d34 body=409 status=ok
// SIG undefined FUN_14dd39d34(void)

/* WARNING: Removing unreachable block (ram,0x00014dd39db9) */

undefined8 FUN_14dd39d34(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dd39f83 FUN_14dd39f83 body=103 status=ok
// SIG undefined FUN_14dd39f83(void)

undefined8 FUN_14dd39f83(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 unaff_SIL;
  undefined8 in_R11;
  uint local_res8;
  
  uVar3 = (ulonglong)local_res8;
  (&stack0xfffffffffef81993)[uVar3] = unaff_SIL;
  plVar1 = (longlong *)(&stack0xfffffffffef8198b + uVar3);
  *(undefined4 *)plVar1 = 0x6ebfb2a;
  *(undefined4 *)(&stack0xfffffffffef8198f + uVar3) = 0;
  lVar2 = *plVar1;
  *(undefined8 *)((longlong)plVar1 + lVar2 + -0x6ebfb1a) = in_R11;
  *(undefined8 *)((longlong)plVar1 + lVar2 + -0x6ebfb22) = in_R11;
  *(undefined **)((longlong)plVar1 + lVar2 + -0x6ebfb1a) = &DAT_14dd39feb;
  return *(undefined8 *)((longlong)plVar1 + lVar2 + -0x6ebfb12);
}



// FUNCTION 14dd3a0d2 FUN_14dd3a0d2 body=121 status=ok
// SIG undefined FUN_14dd3a0d2(void)

void FUN_14dd3a0d2(undefined8 param_1)

{
  (*(code *)0x165dfdea8)(param_1);
  return;
}



// FUNCTION 14dd3a153 FUN_14dd3a153 body=114 status=ok
// SIG undefined FUN_14dd3a153(void)

void FUN_14dd3a153(void)

{
  longlong unaff_RBX;
  longlong unaff_R12;
  longlong unaff_R13;
  ushort in_stack_00000028;
  
  *(longlong *)(unaff_R13 + 0x18) = unaff_R12 + unaff_RBX + 1;
  FUN_16102bf09(~(in_stack_00000028 | 0xfeff) - 0x100);
  return;
}



// FUNCTION 14dd3a1c7 FUN_14dd3a1c7 body=205 status=ok
// SIG undefined FUN_14dd3a1c7(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd3a1c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000008;
  
  FUN_162554ae4(param_1,param_2,param_3,in_stack_00000008);
  return;
}



// FUNCTION 14dd3a327 FUN_14dd3a327 body=134 status=ok
// SIG undefined FUN_14dd3a327(void)

void FUN_14dd3a327(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong unaff_retaddr;
  undefined8 uStackX_8;
  
  lVar3 = unaff_RDI - (unaff_retaddr ^ 0x658456be);
  *(undefined8 *)((longlong)&uStackX_8 + lVar3) = param_3;
  uVar2 = *(undefined8 *)((longlong)&uStackX_8 + lVar3);
  *(ulonglong *)((longlong)&uStackX_8 + lVar3) = unaff_RBP >> 0xf | unaff_RBP << 0x31;
  *(undefined4 *)((longlong)&uStackX_8 + lVar3) = *(undefined4 *)((longlong)&uStackX_8 + lVar3);
  puVar1 = (uint *)((longlong)&uStackX_8 + lVar3 + 4);
  *puVar1 = *puVar1 & 0x1ffff;
  FUN_166b8b103(param_1,param_2,uVar2);
  return;
}



// FUNCTION 14dd3a468 FUN_14dd3a468 body=148 status=ok
// SIG undefined FUN_14dd3a468(void)

void FUN_14dd3a468(void)

{
  return;
}



// FUNCTION 14dd3a4fc thunk_FUN_14dd3a502 body=5 status=ok
// SIG undefined thunk_FUN_14dd3a502(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3a563) */

void thunk_FUN_14dd3a502(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  FUN_14dbf0ce2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd3a502 FUN_14dd3a502 body=152 status=ok
// SIG undefined FUN_14dd3a502(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3a563) */

void FUN_14dd3a502(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14dbf0ce2(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd3a644 FUN_14dd3a644 body=107 status=ok
// SIG undefined FUN_14dd3a644(void)

void FUN_14dd3a644(void)

{
  return;
}



// FUNCTION 14dd3a930 FUN_14dd3a930 body=8 status=ok
// SIG undefined FUN_14dd3a930(void)

void FUN_14dd3a930(void)

{
  undefined4 *unaff_RDI;
  undefined4 unaff_R14D;
  
  *unaff_RDI = unaff_R14D;
  thunk_FUN_15b752fb8();
  return;
}



// FUNCTION 14dd3aa4f FUN_14dd3aa4f body=145 status=ok
// SIG undefined FUN_14dd3aa4f(void)

void FUN_14dd3aa4f(undefined8 param_1,undefined8 param_2)

{
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  undefined8 local_res8;
  
  *(ulonglong *)(unaff_RDI + 8) =
       (unaff_RBP - (*(ulonglong *)(unaff_RDI + 8) | unaff_RBP)) + *(longlong *)(unaff_RDI + 8);
  FUN_161d07883(param_1,param_2,local_res8);
  return;
}



// FUNCTION 14dd3aae2 FUN_14dd3aae2 body=148 status=ok
// SIG undefined FUN_14dd3aae2(void)

/* WARNING: Removing unreachable block (ram,0x0001668fd5ff) */
/* WARNING: Removing unreachable block (ram,0x0001668fd605) */
/* WARNING: Removing unreachable block (ram,0x000162bc0a03) */
/* WARNING: Removing unreachable block (ram,0x000160d20b33) */
/* WARNING: Removing unreachable block (ram,0x000160d20b39) */
/* WARNING: Removing unreachable block (ram,0x00015762673f) */
/* WARNING: Removing unreachable block (ram,0x000160d20be5) */
/* WARNING: Removing unreachable block (ram,0x000160d20beb) */
/* WARNING: Removing unreachable block (ram,0x000160d20bf6) */
/* WARNING: Removing unreachable block (ram,0x000166067a76) */
/* WARNING: Removing unreachable block (ram,0x000166067a61) */
/* WARNING: Removing unreachable block (ram,0x000166067a35) */
/* WARNING: Removing unreachable block (ram,0x000166067a51) */
/* WARNING: Removing unreachable block (ram,0x000166067a55) */
/* WARNING: Removing unreachable block (ram,0x000166067a64) */
/* WARNING: Removing unreachable block (ram,0x000166067a78) */
/* WARNING: Removing unreachable block (ram,0x00014dd3ab29) */
/* WARNING: Removing unreachable block (ram,0x000166067a2a) */
/* WARNING: Removing unreachable block (ram,0x000166a2df3b) */
/* WARNING: Removing unreachable block (ram,0x000166a2df41) */
/* WARNING: Removing unreachable block (ram,0x000166a2df61) */
/* WARNING: Removing unreachable block (ram,0x000166a2df66) */
/* WARNING: Removing unreachable block (ram,0x000166a2df69) */
/* WARNING: Removing unreachable block (ram,0x000166a2dfa9) */
/* WARNING: Removing unreachable block (ram,0x000166a2dfaf) */
/* WARNING: Removing unreachable block (ram,0x00014e0e2bbb) */
/* WARNING: Removing unreachable block (ram,0x00014dd3adaa) */
/* WARNING: Removing unreachable block (ram,0x00014dd3adb0) */
/* WARNING: Removing unreachable block (ram,0x0001575b8eb4) */
/* WARNING: Removing unreachable block (ram,0x00014dd3acb0) */
/* WARNING: Removing unreachable block (ram,0x000165e9eaf6) */
/* WARNING: Removing unreachable block (ram,0x000165e9eafc) */
/* WARNING: Removing unreachable block (ram,0x000165e9eaf1) */
/* WARNING: Removing unreachable block (ram,0x000161b67eb1) */
/* WARNING: Removing unreachable block (ram,0x000166a2dca1) */
/* WARNING: Removing unreachable block (ram,0x000161b67db6) */
/* WARNING: Removing unreachable block (ram,0x000161b67ea6) */
/* WARNING: Removing unreachable block (ram,0x000161b67eab) */
/* WARNING: Removing unreachable block (ram,0x0001668fd575) */
/* WARNING: Removing unreachable block (ram,0x000160e25764) */
/* WARNING: Removing unreachable block (ram,0x000166a2dca7) */
/* WARNING: Removing unreachable block (ram,0x000166a2dd41) */
/* WARNING: Removing unreachable block (ram,0x000166a2dd4d) */
/* WARNING: Removing unreachable block (ram,0x000166a2de11) */
/* WARNING: Removing unreachable block (ram,0x000166a2de17) */
/* WARNING: Removing unreachable block (ram,0x000166a2de0c) */
/* WARNING: Removing unreachable block (ram,0x00014e02d99c) */
/* WARNING: Removing unreachable block (ram,0x000161372e3d) */
/* WARNING: Removing unreachable block (ram,0x000166037ac3) */
/* WARNING: Removing unreachable block (ram,0x000161372ec7) */
/* WARNING: Removing unreachable block (ram,0x000161372ecd) */
/* WARNING: Removing unreachable block (ram,0x000161372ed2) */
/* WARNING: Removing unreachable block (ram,0x000161372f4f) */
/* WARNING: Removing unreachable block (ram,0x000161372f55) */
/* WARNING: Removing unreachable block (ram,0x000156fe59bd) */
/* WARNING: Removing unreachable block (ram,0x00014dd3ab78) */
/* WARNING: Removing unreachable block (ram,0x00014dd3ac9f) */
/* WARNING: Removing unreachable block (ram,0x00014dd3aca4) */
/* WARNING: Removing unreachable block (ram,0x0001575b8e7e) */
/* WARNING: Removing unreachable block (ram,0x0001575b8ee4) */
/* WARNING: Removing unreachable block (ram,0x0001575b8ee9) */
/* WARNING: Removing unreachable block (ram,0x000165e9eb01) */

undefined8 FUN_14dd3aae2(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if ((longlong)(*(ulonglong *)(unaff_RDI + -0x28) & param_1) < 0) {
    uVar1 = FUN_161b67db6();
    return uVar1;
  }
  uVar1 = FUN_166a2dc03();
  return uVar1;
}



// FUNCTION 14dd3ab78 FUN_14dd3ab78 body=311 status=ok
// SIG undefined FUN_14dd3ab78(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3adaa) */
/* WARNING: Removing unreachable block (ram,0x00014dd3adb0) */
/* WARNING: Removing unreachable block (ram,0x0001575b8eb4) */
/* WARNING: Removing unreachable block (ram,0x00014dd3acb0) */
/* WARNING: Removing unreachable block (ram,0x000165e9eaf1) */
/* WARNING: Removing unreachable block (ram,0x000165e9eaf6) */
/* WARNING: Removing unreachable block (ram,0x000165e9eafc) */
/* WARNING: Removing unreachable block (ram,0x000165e9eb01) */

void FUN_14dd3ab78(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  
  lVar1 = *(longlong *)(unaff_RDI + -0xa0);
  FUN_156db53eb(param_1,unaff_retaddr);
  uVar2 = *(ulonglong *)(lVar1 + -0x60);
  if (-1 < (longlong)
           (~(~param_1 | uVar2) | ~(~(0xffffffffffffffff - uVar2) & ~param_1) ^ 0xffffffffffffffff))
  {
    FUN_165fc7845();
    return;
  }
  FUN_1575b8e7e();
  return;
}



// FUNCTION 14dd3acb0 FUN_14dd3acb0 body=420 status=ok
// SIG undefined FUN_14dd3acb0(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3adaa) */
/* WARNING: Removing unreachable block (ram,0x00014dd3adb0) */
/* WARNING: Removing unreachable block (ram,0x000165e9eb01) */

void FUN_14dd3acb0(void)

{
  longlong unaff_R12;
  
  FUN_161c9ecb6();
  if (*(longlong *)(unaff_R12 + -0x98) != 0) {
    thunk_FUN_1624ceed3();
    return;
  }
  thunk_FUN_1624ceed3();
  return;
}



// FUNCTION 14dd3af7d FUN_14dd3af7d body=300 status=ok
// SIG undefined FUN_14dd3af7d(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3b0ab) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dd3af7d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  undefined8 local_res8;
  ulonglong uStackX_18;
  
  FUN_1617e18a2(~unaff_RBX | uStackX_18,FUN_1617e18a2,param_3,local_res8);
  uVar1 = *(ulonglong *)(~unaff_RBX - 0x28);
  (*(code *)0x1614b0e16)
            (*(ulonglong *)(~unaff_RBX + unaff_RBP) ^ unaff_R15,
             ~(~((~((unaff_R15 ^ 0xffffffffffffffff) & uVar1) + uVar1) -
                ~(unaff_R15 ^ 0xffffffffffffffff)) | ~((~(~uVar1 & unaff_R15) + unaff_R15) - uVar1))
             ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dd3b0ab FUN_14dd3b0ab body=15 status=ok
// SIG undefined FUN_14dd3b0ab(void)

void FUN_14dd3b0ab(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd3b1e3 FUN_14dd3b1e3 body=122 status=ok
// SIG undefined FUN_14dd3b1e3(void)

void FUN_14dd3b1e3(undefined8 param_1)

{
  FUN_16479a21e(param_1);
  return;
}



// FUNCTION 14dd3b2ef FUN_14dd3b2ef body=157 status=ok
// SIG undefined FUN_14dd3b2ef(void)

void FUN_14dd3b2ef(void)

{
  thunk_FUN_1649594d5();
  return;
}



// FUNCTION 14dd3b38f FUN_14dd3b38f body=323 status=ok
// SIG undefined FUN_14dd3b38f(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3b42b) */

void FUN_14dd3b38f(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong unaff_RDI;
  
  FUN_16520fee7(param_1,~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                         (~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),
                ~((param_1 - (param_3 | param_1)) + param_3) & (param_3 | param_1));
  return;
}



// FUNCTION 14dd3b556 FUN_14dd3b556 body=730 status=ok
// SIG undefined FUN_14dd3b556(void)

/* WARNING: Removing unreachable block (ram,0x0001576148d3) */
/* WARNING: Removing unreachable block (ram,0x00014dd3b6a3) */
/* WARNING: Removing unreachable block (ram,0x00014dd3b67d) */
/* WARNING: Removing unreachable block (ram,0x00014dd3b683) */
/* WARNING: Removing unreachable block (ram,0x00014dd3b6a8) */
/* WARNING: Removing unreachable block (ram,0x00014df95828) */
/* WARNING: Removing unreachable block (ram,0x00014dd3b5eb) */
/* WARNING: Removing unreachable block (ram,0x0001626d4781) */
/* WARNING: Removing unreachable block (ram,0x00014df958a9) */
/* WARNING: Removing unreachable block (ram,0x0001626d4786) */

undefined8 FUN_14dd3b556(void)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  uVar3 = (~unaff_RBP | *(ulonglong *)(unaff_RSI + -0x68)) + unaff_RBP + 1;
  FUN_1567fd063(uVar3,2,-~unaff_RBP - (~*(ulonglong *)(unaff_RSI + -0x68) + 2));
  bVar1 = (byte)uVar3 & 0x3f;
  uVar2 = (*(code *)0x162f381a1)
                    (CONCAT71((uint7)((uVar3 >> bVar1) >> 8) | (uint7)((uVar3 << 0x40 - bVar1) >> 8)
                              ,0x79) & 0xffffffffffffff08,
                     CONCAT71((int7)((ulonglong)*(undefined8 *)(unaff_RSI + -0x50) >> 8),0x11),
                     *(longlong *)(unaff_RSI + -0x68) + unaff_RBP,0x162f381a1);
  return uVar2;
}



// FUNCTION 14dd3b7ab FUN_14dd3b7ab body=63 status=ok
// SIG undefined FUN_14dd3b7ab(void)

void FUN_14dd3b7ab(void)

{
  return;
}



// FUNCTION 14dd3b83b FUN_14dd3b83b body=167 status=ok
// SIG undefined FUN_14dd3b83b(void)

void FUN_14dd3b83b(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_156fadf91(param_1,0xfffffffffffffff8,
                (param_1 - (*(ulonglong *)(unaff_RDI + -0x40) | param_1)) +
                *(ulonglong *)(unaff_RDI + -0x40),
                0xffffffffffffffffU - *(longlong *)(unaff_RDI + -0x50) &
                (param_1 ^ 0xffffffffffffffff));
  FUN_14dd3b8e4();
  return;
}



// FUNCTION 14dd3b8e4 FUN_14dd3b8e4 body=96 status=ok
// SIG undefined FUN_14dd3b8e4(void)

void FUN_14dd3b8e4(void)

{
  undefined8 unaff_R15;
  uint in_stack_00000008;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + ((ulonglong)in_stack_00000008 ^ 0x38a328a3)) = unaff_R15;
  return;
}



// FUNCTION 14dd3b9c6 FUN_14dd3b9c6 body=130 status=ok
// SIG undefined FUN_14dd3b9c6(void)

void FUN_14dd3b9c6(void)

{
  ulonglong unaff_RSI;
  longlong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1627c8e5b((uint)((unaff_RSI & 0xffffffff) >> 0xf) | (uint)((unaff_RSI & 0xffffffff) << 0x12),
                FUN_1627c8e5b,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                in_R9 + *(longlong *)(unaff_R13 + -0x60) ^ unaff_R15);
  return;
}



// FUNCTION 14dd3ba5d FUN_14dd3ba5d body=992 status=ok
// SIG undefined FUN_14dd3ba5d(void)

/* WARNING: Instruction at (ram,0x00014dd3bc1b) overlaps instruction at (ram,0x00014dd3bc1a)
    */
/* WARNING: Removing unreachable block (ram,0x000164928607) */
/* WARNING: Removing unreachable block (ram,0x000164928601) */
/* WARNING: Removing unreachable block (ram,0x00016492860c) */
/* WARNING: Removing unreachable block (ram,0x0001650a5576) */
/* WARNING: Removing unreachable block (ram,0x0001650a557c) */
/* WARNING: Removing unreachable block (ram,0x0001650a5581) */
/* WARNING: Removing unreachable block (ram,0x0001650a568e) */
/* WARNING: Removing unreachable block (ram,0x00014dd641bb) */
/* WARNING: Removing unreachable block (ram,0x0001650a5694) */
/* WARNING: Removing unreachable block (ram,0x0001650a5717) */
/* WARNING: Removing unreachable block (ram,0x0001650a571d) */
/* WARNING: Removing unreachable block (ram,0x0001650a5773) */
/* WARNING: Removing unreachable block (ram,0x00015710189b) */
/* WARNING: Removing unreachable block (ram,0x00014df8e136) */
/* WARNING: Removing unreachable block (ram,0x00014df8e1a6) */
/* WARNING: Removing unreachable block (ram,0x00014df8e1ac) */
/* WARNING: Removing unreachable block (ram,0x00014e193c0b) */
/* WARNING: Removing unreachable block (ram,0x00014df8e229) */
/* WARNING: Removing unreachable block (ram,0x00014df8e22f) */
/* WARNING: Removing unreachable block (ram,0x00014df8e234) */
/* WARNING: Removing unreachable block (ram,0x000161096da8) */
/* WARNING: Removing unreachable block (ram,0x00014dd3bb75) */
/* WARNING: Removing unreachable block (ram,0x00014dd3bc1b) */
/* WARNING: Removing unreachable block (ram,0x00014dd3bc1a) */
/* WARNING: Removing unreachable block (ram,0x00014dd3bca8) */
/* WARNING: Removing unreachable block (ram,0x00014dd3bcab) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd3ba5d(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  undefined8 in_R9;
  longlong in_R10;
  ulonglong uVar2;
  ulonglong unaff_R15;
  ulonglong in_stack_00000008;
  ulonglong in_stack_00000028;
  
  *(undefined8 *)(&stack0x00000010 + in_R10) = unaff_RBP;
  uVar2 = (in_stack_00000028 & unaff_R15) << 1;
  uVar1 = FUN_161b9f3f0();
  uVar2 = ~(~(in_stack_00000008 & ~uVar2) &
           ((in_stack_00000008 ^ 0xffffffffffffffff) & ~uVar2 | in_stack_00000008));
  *(longlong *)(uVar2 - 8) = in_stack_00000028 + unaff_R15;
  *(longlong *)(uVar2 - 0x10) = *(longlong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x18) = in_R9;
  *(undefined8 *)(uVar2 - 8) = 0;
  *(longlong *)(uVar2 - 8) = (longlong)(&DAT_15766a59a + *(longlong *)(uVar2 - 8));
  *(undefined8 *)(uVar2 - 0x10) = uVar1;
  *(undefined8 *)(uVar2 - 0x18) = uVar1;
  *(undefined8 *)(uVar2 - 0x10) = 0x14d7ac9d8;
  return *(undefined8 *)(uVar2 - 0x18);
}



// FUNCTION 14dd3bd7e thunk_FUN_14dd3bd84 body=5 status=ok
// SIG undefined thunk_FUN_14dd3bd84(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3be0b) */

void thunk_FUN_14dd3bd84(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  short in_R10W;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar3 = *(undefined8 *)(unaff_R13 + -0x98);
  FUN_164b9cbe5(param_1,~((~(~unaff_R15 & param_2) + param_2) - unaff_R15 & ~(param_2 & ~unaff_R15))
               );
  *(short *)(-1 - ((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15))) = in_R10W + 1;
  *(longlong *)(unaff_retaddr + -8) = unaff_retaddr;
  lVar4 = *(longlong *)(unaff_retaddr + -8);
  *(undefined8 *)(lVar4 + -8) = uVar3;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(ulonglong *)(lVar4 + -0x18) = uVar2 ^ unaff_R15;
  *(undefined1 **)(lVar4 + -8) = &LAB_1624c638c;
                    /* WARNING: Could not recover jumptable at 0x0001624c636b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + -0x10))();
  return;
}



// FUNCTION 14dd3bd84 FUN_14dd3bd84 body=287 status=ok
// SIG undefined FUN_14dd3bd84(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3be0b) */

void FUN_14dd3bd84(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  short in_R10W;
  longlong unaff_R13;
  ulonglong unaff_R15;
  longlong unaff_retaddr;
  
  uVar1 = *(ulonglong *)(unaff_R13 + -0x30);
  uVar2 = *(ulonglong *)(unaff_R13 + -0x50);
  uVar3 = *(undefined8 *)(unaff_R13 + -0x98);
  FUN_164b9cbe5(param_1,~((~(~unaff_R15 & param_2) + param_2) - unaff_R15 & ~(param_2 & ~unaff_R15))
               );
  *(short *)(-1 - ((~unaff_R15 | uVar1) & (~uVar1 | unaff_R15))) = in_R10W + 1;
  *(longlong *)(unaff_retaddr + -8) = unaff_retaddr;
  lVar4 = *(longlong *)(unaff_retaddr + -8);
  *(undefined8 *)(lVar4 + -8) = uVar3;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar4 + -8);
  *(ulonglong *)(lVar4 + -0x18) = uVar2 ^ unaff_R15;
  *(undefined1 **)(lVar4 + -8) = &LAB_1624c638c;
                    /* WARNING: Could not recover jumptable at 0x0001624c636b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + -0x10))();
  return;
}



// FUNCTION 14dd3c05a FUN_14dd3c05a body=33 status=ok
// SIG undefined FUN_14dd3c05a(void)

void FUN_14dd3c05a(void)

{
  return;
}



// FUNCTION 14dd3c0df FUN_14dd3c0df body=51 status=ok
// SIG undefined FUN_14dd3c0df(void)

void FUN_14dd3c0df(ulonglong param_1)

{
  ulonglong *unaff_RSI;
  
  *unaff_RSI = ~*unaff_RSI;
  *unaff_RSI = *unaff_RSI | param_1;
  return;
}



// FUNCTION 14dd3c2b9 FUN_14dd3c2b9 body=150 status=ok
// SIG undefined FUN_14dd3c2b9(void)

void FUN_14dd3c2b9(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  longlong local_res18;
  
  plVar1 = (longlong *)(local_res18 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 - unaff_R13;
  *plVar1 = -*plVar1;
  *(undefined8 *)(local_res18 + -0x10) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x18) = unaff_RSI;
  *(undefined8 *)(local_res18 + -0x20) = unaff_retaddr;
  uVar2 = *(undefined8 *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  uVar3 = *(undefined8 *)(local_res18 + -0x18);
  *(undefined8 *)(local_res18 + -0x18) = in_RAX;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBX;
  *(undefined1 **)(local_res18 + -8) = &LAB_1567975cf;
  *(undefined8 *)(local_res18 + -0x18) = uVar3;
  *(undefined8 *)(local_res18 + -0x20) = uVar3;
  *(code **)(local_res18 + -0x18) = FUN_14dd3c34f;
  FUN_1567975a3(uVar2);
  return;
}



// FUNCTION 14dd3c34f FUN_14dd3c34f body=169 status=ok
// SIG undefined FUN_14dd3c34f(void)

void FUN_14dd3c34f(void)

{
  return;
}



// FUNCTION 14dd3c3fa FUN_14dd3c3fa body=143 status=ok
// SIG undefined FUN_14dd3c3fa(void)

void FUN_14dd3c3fa(void)

{
  return;
}



// FUNCTION 14dd3c6d0 FUN_14dd3c6d0 body=16 status=ok
// SIG undefined FUN_14dd3c6d0(void)

void FUN_14dd3c6d0(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd3c8ce FUN_14dd3c8ce body=161 status=ok
// SIG undefined FUN_14dd3c8ce(void)

void FUN_14dd3c8ce(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  (*(code *)0x15656414d)(param_1,param_2,*(ulonglong *)(unaff_RDI + -0x40) | param_1);
  return;
}



// FUNCTION 14dd3cbe9 FUN_14dd3cbe9 body=299 status=ok
// SIG undefined FUN_14dd3cbe9(void)

longlong FUN_14dd3cbe9(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  
  uVar1 = ~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x40)) &
           ~(*(ulonglong *)(unaff_R12 + -0x40) & ~in_RAX));
  FUN_166c5a47a(uVar1,FUN_166c5a47a,param_3,*(undefined8 *)(unaff_R12 + -0x30));
  return (~uVar1 | ~param_3 + param_3 + 1 + *(longlong *)(unaff_RDI + -0x70)) + uVar1;
}



// FUNCTION 14dd3cd9a FUN_14dd3cd9a body=147 status=ok
// SIG undefined FUN_14dd3cd9a(void)

void FUN_14dd3cd9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15afd13a8)(param_1,param_2,param_3,0x15afd13a8);
  return;
}



// FUNCTION 14dd3cedf FUN_14dd3cedf body=14 status=ok
// SIG undefined FUN_14dd3cedf(void)

void FUN_14dd3cedf(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dd3d031 FUN_14dd3d031 body=143 status=ok
// SIG undefined FUN_14dd3d031(void)

undefined8 FUN_14dd3d031(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  undefined8 unaff_R13;
  ulonglong unaff_R15;
  undefined1 unaff_retaddr;
  ulonglong in_stack_00000028;
  
  in_stack_00000028 = in_stack_00000028 ^ unaff_R15;
                    /* WARNING: Read-only address (ram,0x00014d7aa29f) is written */
  LOCK();
  uVar2 = unaff_retaddr;
  if ((char)in_RAX != '\0') {
    in_RAX = in_RAX & 0xffffffffffffff00;
    uVar2 = uRam000000014d7aa29f;
  }
  uRam000000014d7aa29f = uVar2;
  UNLOCK();
  *(ulonglong *)(in_stack_00000028 - 0x10) = in_RAX;
  *(undefined8 *)(in_stack_00000028 - 8) = 0x29ad8ec;
  uVar1 = *(undefined8 *)(in_stack_00000028 - 0x10);
  *(undefined8 *)(in_stack_00000028 - 0x28cf) = unaff_R13;
  *(undefined8 *)(in_stack_00000028 - 0x28d7) = unaff_R13;
  *(undefined **)(in_stack_00000028 - 0x28cf) = &DAT_156ef2e4a;
  return uVar1;
}



// FUNCTION 14dd3d216 FUN_14dd3d216 body=51 status=ok
// SIG undefined FUN_14dd3d216(void)

void FUN_14dd3d216(void)

{
  return;
}



// FUNCTION 14dd3d36a FUN_14dd3d36a body=156 status=ok
// SIG undefined FUN_14dd3d36a(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3d401) */
/* WARNING: Removing unreachable block (ram,0x00014dd3d407) */
/* WARNING: Removing unreachable block (ram,0x0001629498a1) */

void FUN_14dd3d36a(void)

{
  longlong unaff_RBP;
  undefined8 uStackX_18;
  
  if (uStackX_18 == unaff_RBP) {
    FUN_165e2f5b0();
    return;
  }
  FUN_165e2f5b0();
  return;
}



// FUNCTION 14dd3d407 FUN_14dd3d407 body=159 status=ok
// SIG undefined FUN_14dd3d407(void)

void FUN_14dd3d407(void)

{
  int unaff_R15D;
  int unaff_retaddr;
  
  (*(code *)0x1577fd776)(unaff_R15D - unaff_retaddr);
  return;
}



// FUNCTION 14dd3d4a6 FUN_14dd3d4a6 body=140 status=ok
// SIG undefined FUN_14dd3d4a6(void)

/* WARNING: Removing unreachable block (ram,0x00015667350c) */
/* WARNING: Removing unreachable block (ram,0x000156673579) */
/* WARNING: Removing unreachable block (ram,0x00015667357e) */
/* WARNING: Removing unreachable block (ram,0x000156673584) */
/* WARNING: Removing unreachable block (ram,0x000156673589) */
/* WARNING: Removing unreachable block (ram,0x00015667362d) */
/* WARNING: Removing unreachable block (ram,0x000156673632) */
/* WARNING: Removing unreachable block (ram,0x000156673638) */
/* WARNING: Removing unreachable block (ram,0x00015667363d) */
/* WARNING: Removing unreachable block (ram,0x0001566733e5) */
/* WARNING: Removing unreachable block (ram,0x0001566733f1) */
/* WARNING: Removing unreachable block (ram,0x000156673468) */
/* WARNING: Removing unreachable block (ram,0x0001658808a9) */
/* WARNING: Removing unreachable block (ram,0x000165880936) */
/* WARNING: Removing unreachable block (ram,0x00016588093b) */
/* WARNING: Removing unreachable block (ram,0x000165880941) */
/* WARNING: Removing unreachable block (ram,0x000164c5db5e) */
/* WARNING: Removing unreachable block (ram,0x00015667346e) */
/* WARNING: Removing unreachable block (ram,0x000156673486) */
/* WARNING: Removing unreachable block (ram,0x0001566734ab) */
/* WARNING: Removing unreachable block (ram,0x000156673501) */
/* WARNING: Removing unreachable block (ram,0x000156673507) */
/* WARNING: Removing unreachable block (ram,0x00016613cb8b) */
/* WARNING: Removing unreachable block (ram,0x00015b3886f9) */
/* WARNING: Removing unreachable block (ram,0x00015667335e) */
/* WARNING: Removing unreachable block (ram,0x00014dd3d538) */

ulonglong FUN_14dd3d4a6(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x58);
  if ((longlong)-(0xffffffffffffffff - ((in_RAX - (uVar1 | in_RAX)) + uVar1) | uVar1 | in_RAX) < 0)
  {
    uVar1 = FUN_1656ee867();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dd3d538 FUN_14dd3d538 body=15 status=ok
// SIG undefined FUN_14dd3d538(void)

void FUN_14dd3d538(void)

{
  FUN_165c7153c();
  return;
}



// FUNCTION 14dd3d6b1 FUN_14dd3d6b1 body=129 status=ok
// SIG undefined FUN_14dd3d6b1(void)

void FUN_14dd3d6b1(void)

{
  longlong unaff_RSI;
  
  if (unaff_RSI != 0xc2b6d) {
    return;
  }
  FUN_1573d5ece();
  return;
}



// FUNCTION 14dd3d90c FUN_14dd3d90c body=278 status=ok
// SIG undefined FUN_14dd3d90c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3d9a2) */
/* WARNING: Removing unreachable block (ram,0x00014dd3d9a8) */
/* WARNING: Removing unreachable block (ram,0x00016293abc3) */
/* WARNING: Removing unreachable block (ram,0x00016293ac5e) */
/* WARNING: Removing unreachable block (ram,0x00016293ac64) */
/* WARNING: Removing unreachable block (ram,0x00015af9bee4) */

undefined8 FUN_14dd3d90c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16293abc3();
  return uVar1;
}



// FUNCTION 14dd3d9a8 FUN_14dd3d9a8 body=140 status=ok
// SIG undefined FUN_14dd3d9a8(void)

void FUN_14dd3d9a8(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  
  FUN_14da27634(local_res10 + param_1 + ~(~local_res10 | ~param_1) * -2,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dd3dba1 FUN_14dd3dba1 body=14 status=ok
// SIG undefined FUN_14dd3dba1(void)

void FUN_14dd3dba1(void)

{
  return;
}



// FUNCTION 14dd3dc44 FUN_14dd3dc44 body=145 status=ok
// SIG undefined FUN_14dd3dc44(void)

void FUN_14dd3dc44(byte param_1,byte param_2,longlong param_3)

{
  longlong unaff_RBX;
  byte unaff_BPL;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  FUN_1663e880c(unaff_BPL - ~(~param_2 & ~unaff_BPL),param_2,
                (unaff_RBX - (unaff_RDI << (param_1 & 0x3f))) - param_3 ^ unaff_R15);
  return;
}



// FUNCTION 14dd3dd7b FUN_14dd3dd7b body=18 status=ok
// SIG undefined FUN_14dd3dd7b(void)

void FUN_14dd3dd7b(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd3dea7 FUN_14dd3dea7 body=160 status=ok
// SIG undefined FUN_14dd3dea7(void)

void FUN_14dd3dea7(void)

{
  return;
}



// FUNCTION 14dd3df49 FUN_14dd3df49 body=8 status=ok
// SIG undefined FUN_14dd3df49(void)

void FUN_14dd3df49(void)

{
  return;
}



// FUNCTION 14dd3dff7 FUN_14dd3dff7 body=167 status=ok
// SIG undefined FUN_14dd3dff7(void)

void FUN_14dd3dff7(void)

{
  return;
}



// FUNCTION 14dd3e125 FUN_14dd3e125 body=502 status=ok
// SIG undefined FUN_14dd3e125(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3e24c) */
/* WARNING: Removing unreachable block (ram,0x00014dd3e258) */
/* WARNING: Removing unreachable block (ram,0x000165b043d2) */
/* WARNING: Removing unreachable block (ram,0x000161bd81c0) */
/* WARNING: Removing unreachable block (ram,0x00014dd3e1b2) */

undefined8 FUN_14dd3e125(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ushort unaff_SI;
  ushort uVar5;
  code *pcVar6;
  ushort in_R11W;
  longlong lVar7;
  longlong unaff_R15;
  undefined6 uStackX_8;
  undefined2 local_rese;
  undefined4 local_res18;
  undefined2 uStackX_1c;
  undefined2 uStackX_1e;
  ulonglong in_stack_00000038;
  undefined8 in_stack_00000040;
  longlong in_stack_00000048;
  ulonglong in_stack_00000050;
  
  uVar5 = ~((param_3 ^ 0xffff) & (in_R11W & 0xa6a1 | 0x595e));
  lVar7 = CONCAT26(uStackX_1e,CONCAT24(uStackX_1c,local_res18));
  if (-1 < (int)((uint)((ushort)(unaff_SI + (uVar5 - (unaff_SI | uVar5))) == 0) << 0x1f)) {
    return in_RAX;
  }
  pcVar6 = FUN_156d3913d;
  uVar1 = FUN_156d3913d();
  uVar4 = *(ulonglong *)(CONCAT26(local_rese,uStackX_8) + -0x58) ^ uVar1;
  uVar1 = *(ulonglong *)(CONCAT26(local_rese,uStackX_8) + -0x78) ^ uVar1;
  uVar2 = (*(code *)0x166d2654f)();
  in_stack_00000048 = lVar7 - *(longlong *)((longlong)&stack0x00000038 + unaff_R15);
  in_stack_00000050 = in_stack_00000050 + uVar2 + (in_stack_00000050 & uVar2) * -2;
  in_stack_00000038 = uVar1;
  uVar3 = FUN_162b789b3(uVar4,FUN_162b789b3,pcVar6);
  return uVar3;
}



// FUNCTION 14dd3e269 FUN_14dd3e269 body=307 status=ok
// SIG undefined FUN_14dd3e269(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3e30f) */
/* WARNING: Removing unreachable block (ram,0x00014dd3e31a) */
/* WARNING: Removing unreachable block (ram,0x00014dd3e315) */

void FUN_14dd3e269(undefined8 param_1)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_165b6805e(param_1,(~(~unaff_R15 & *(ulonglong *)(unaff_R13 + -0x50)) +
                        *(ulonglong *)(unaff_R13 + -0x50)) - unaff_R15);
  return;
}



// FUNCTION 14dd3e452 FUN_14dd3e452 body=134 status=ok
// SIG undefined FUN_14dd3e452(void)

void FUN_14dd3e452(undefined8 param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  short unaff_BP;
  undefined8 unaff_RSI;
  undefined8 in_R10;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  *param_3 = (-0x101 - unaff_BP) + *param_3;
  *(undefined8 *)(param_5 + -8) = param_1;
  *(undefined8 *)(param_5 + -0x10) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x18) = unaff_RSI;
  *(undefined8 *)(param_5 + -0x20) = uStackX_10;
  *(undefined4 *)(param_5 + -0x28) = 0x856b5710;
  *(undefined4 *)(param_5 + -0x24) = 0xffffffff;
  uVar1 = *(undefined8 *)(param_5 + -0x28);
  *(undefined8 *)(param_5 + -0x28) = in_R10;
  *(undefined8 *)(param_5 + -0x30) = uStackX_18;
  *(undefined4 *)(param_5 + -0x30) = 0x7a94a8f8;
  *(undefined4 *)(param_5 + -0x2c) = 0;
  (*(code *)0x165913e5a)(&DAT_165913ebb,param_2,uVar1);
  return;
}



// FUNCTION 14dd3e4da FUN_14dd3e4da body=131 status=ok
// SIG undefined FUN_14dd3e4da(void)

void FUN_14dd3e4da(void)

{
  return;
}



// FUNCTION 14dd3e55d thunk_FUN_14dd3e563 body=5 status=ok
// SIG undefined thunk_FUN_14dd3e563(void)

void thunk_FUN_14dd3e563(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_R12;
  
  (*(code *)0x164b0add1)
            (param_1,param_2 - (unaff_R12 ^ 0xffffffffffffffff),0xffffffffffffffc0,0x164b0add1);
  return;
}



// FUNCTION 14dd3e563 FUN_14dd3e563 body=133 status=ok
// SIG undefined FUN_14dd3e563(void)

void FUN_14dd3e563(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_R12;
  
  (*(code *)0x164b0add1)
            (param_1,param_2 - (unaff_R12 ^ 0xffffffffffffffff),0xffffffffffffffc0,0x164b0add1);
  return;
}



// FUNCTION 14dd3e5ea FUN_14dd3e5ea body=315 status=ok
// SIG undefined FUN_14dd3e5ea(void)

void FUN_14dd3e5ea(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  uint auStackX_8 [8];
  undefined8 uStack_8;
  
  param_2 = param_2 - param_1;
  puVar2 = (uint *)((longlong)auStackX_8 + param_2);
  *puVar2 = 0xfa7214dc;
  *puVar2 = *puVar2 ^ 0x17801278;
  *(undefined4 *)((longlong)auStackX_8 + param_2 + 4) = 0x9ab80afb;
  *(undefined8 *)((longlong)auStackX_8 + param_2 + -8) = unaff_RBX;
  puVar1 = (uint *)((longlong)auStackX_8 + param_2 + 4);
  *puVar1 = ~*puVar1;
  *(int *)((longlong)auStackX_8 + param_2 + 4) =
       0x6547f503 - *(int *)((longlong)auStackX_8 + param_2 + 4);
  lVar5 = *(longlong *)puVar2;
  if (lVar5 == 0x61071ca2) {
    FUN_1622133a0();
    return;
  }
  *(undefined8 *)((longlong)auStackX_8 + param_2) = in_RAX;
  *(undefined8 *)((longlong)auStackX_8 + param_2 + -8) = unaff_RSI;
  uVar3 = *(undefined8 *)((longlong)auStackX_8 + param_2 + -8);
  *(undefined8 *)((longlong)auStackX_8 + param_2 + -8) = 0x14dd3e682;
  uVar4 = FUN_15b004f7f();
  *(undefined8 *)((longlong)auStackX_8 + param_2 + -8) = uVar4;
  *(undefined8 *)((longlong)&uStack_8 + param_2) = uVar3;
  *(undefined4 *)((longlong)&uStack_8 + param_2) = 0x453b13db;
  *(undefined4 *)((longlong)&uStack_8 + param_2 + 4) = 0;
  *(undefined8 *)((longlong)auStackX_8 + param_2 + -8) =
       *(undefined8 *)
        (lVar5 + ((*(ulonglong *)((longlong)&uStack_8 + param_2) ^ 0x7d59078e) - 0x386214e5));
  (*(code *)0x14dc74b83)();
  return;
}



// FUNCTION 14dd3ed35 FUN_14dd3ed35 body=51 status=ok
// SIG undefined FUN_14dd3ed35(void)

void FUN_14dd3ed35(ulonglong param_1)

{
  FUN_156e7a0e9(~(~param_1 + 2) + 3);
  return;
}



// FUNCTION 14dd3edd5 FUN_14dd3edd5 body=343 status=ok
// SIG undefined FUN_14dd3edd5(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3ee9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dd3edd5(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 in_stack_00000008;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  lVar3 = (~(local_res20 | param_1) | ~(local_res20 & param_1)) + (local_res20 | param_1);
  *(undefined8 *)(lVar3 + -7) = in_R11;
  *(undefined8 *)(lVar3 + -0xf) = unaff_R14;
  *(undefined8 *)(lVar3 + -0x17) = unaff_R14;
  *(undefined8 *)(lVar3 + -0xf) = *(undefined8 *)(lVar3 + -7);
  *(undefined8 *)(lVar3 + -0x17) = in_RAX;
  *(code **)(lVar3 + -7) = FUN_1657c4180;
  uVar2 = FUN_1657c4135(~(uVar1 & param_1) & (uVar1 | param_1),in_stack_00000008,param_3,param_4);
  return uVar2;
}



// FUNCTION 14dd3ee9c FUN_14dd3ee9c body=159 status=ok
// SIG undefined FUN_14dd3ee9c(void)

ulonglong FUN_14dd3ee9c(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return *(ulonglong *)(unaff_RDI + -0x80) ^ param_1;
}



// FUNCTION 14dd3f1f2 FUN_14dd3f1f2 body=184 status=ok
// SIG undefined FUN_14dd3f1f2(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014d7c1bd0) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1c52) */
/* WARNING: Removing unreachable block (ram,0x00014d7c1bdb) */

void FUN_14dd3f1f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  longlong unaff_R12;
  ulonglong uVar2;
  undefined8 local_res10;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0xa0) + in_RAX;
  uVar2 = *(ulonglong *)(unaff_R12 + -0xa0) & in_RAX;
  if (uVar1 < uVar2 * 2) {
    FUN_16550b7cf(uVar1 + uVar2 * -2,param_2,local_res10,param_4);
    return;
  }
  return;
}



// FUNCTION 14dd3f4d1 FUN_14dd3f4d1 body=149 status=ok
// SIG undefined FUN_14dd3f4d1(void)

void FUN_14dd3f4d1(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_R13;
  
  (*(code *)0x14db80749)(0x14db80749,param_2,0x2587e6c1,*(undefined8 *)(unaff_R13 + -0x60));
  return;
}



// FUNCTION 14dd3f609 FUN_14dd3f609 body=130 status=ok
// SIG undefined FUN_14dd3f609(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3f654) */

void FUN_14dd3f609(undefined8 param_1,undefined8 param_2)

{
  FUN_1623c9389(param_1,param_2,FUN_1623c9389);
  return;
}



// FUNCTION 14dd3f68c FUN_14dd3f68c body=135 status=ok
// SIG undefined FUN_14dd3f68c(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3f744) */
/* WARNING: Removing unreachable block (ram,0x00014dd3f6d4) */
/* WARNING: Removing unreachable block (ram,0x00014dd3f756) */

undefined8 FUN_14dd3f68c(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 unaff_BL;
  undefined8 unaff_RSI;
  longlong in_R10;
  ulonglong uVar5;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  longlong local_res8 [4];
  
  *(undefined8 *)((longlong)local_res8 + in_R10) = in_RAX;
  *(undefined8 *)((longlong)local_res8 + in_R10 + -8) = unaff_RSI;
  uVar5 = *(ulonglong *)(unaff_R13 + -0x90) ^ unaff_R15;
  *(undefined8 *)((longlong)local_res8 + in_R10) = *(undefined8 *)(unaff_R13 + -0x60);
  lVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),unaff_BL);
  *(code **)((longlong)local_res8 + in_R10) = FUN_14dd3f714;
  FUN_1662c5270();
  *(undefined8 *)((longlong)local_res8 + in_R10 + 0x10) = *(undefined8 *)(lVar4 + -0x48);
  uVar3 = *(ulonglong *)((longlong)local_res8 + in_R10 + 0x10) ^ uVar5;
  uVar2 = *(ulonglong *)(lVar4 + -0x58);
  puVar1 = (ulonglong *)((longlong)local_res8 + in_R10 + 0x10);
  *(code **)((longlong)local_res8 + in_R10 + 8) = FUN_14dd3f796;
  FUN_16663f916();
  *(ulonglong *)((longlong)local_res8 + in_R10 + 8) = uVar2 + uVar5 + (uVar2 & uVar5) * -2;
  *puVar1 = DAT_16663f8b6;
  *puVar1 = DAT_16663f896 ^ uVar3;
  *(undefined8 *)((longlong)local_res8 + in_R10 + 8) =
       *(undefined8 *)((longlong)local_res8 + in_R10 + 8);
  *(undefined8 *)((longlong)local_res8 + in_R10 + 8) = unaff_R14;
  *(undefined8 *)((longlong)local_res8 + in_R10) = unaff_R14;
  *(undefined8 *)((longlong)local_res8 + in_R10 + -8) = unaff_R14;
  *(undefined1 **)((longlong)local_res8 + in_R10 + 8) = &LAB_14dd3f845;
  *(undefined1 **)((longlong)local_res8 + in_R10) = &LAB_15b2db9da;
  return DAT_16663f8ee;
}



// FUNCTION 14dd3f714 FUN_14dd3f714 body=128 status=ok
// SIG undefined FUN_14dd3f714(void)

/* WARNING: Removing unreachable block (ram,0x00014dd3f744) */
/* WARNING: Removing unreachable block (ram,0x00014dd3f756) */

undefined8 FUN_14dd3f714(void)

{
  FUN_16663f916();
  return DAT_16663f8ee;
}



// FUNCTION 14dd3f796 FUN_14dd3f796 body=173 status=ok
// SIG undefined FUN_14dd3f796(void)

undefined8 FUN_14dd3f796(void)

{
  longlong unaff_RDI;
  
  return *(undefined8 *)(unaff_RDI + -0x28);
}



// FUNCTION 14dd3fa13 FUN_14dd3fa13 body=74 status=ok
// SIG undefined FUN_14dd3fa13(void)

void FUN_14dd3fa13(undefined8 param_1,undefined8 param_2)

{
  FUN_14d85d504(param_1,param_2);
  return;
}



// FUNCTION 14dd3fbcd FUN_14dd3fbcd body=161 status=ok
// SIG undefined FUN_14dd3fbcd(void)

void FUN_14dd3fbcd(void)

{
  return;
}



// FUNCTION 14dd3fd91 FUN_14dd3fd91 body=136 status=ok
// SIG undefined FUN_14dd3fd91(void)

void FUN_14dd3fd91(undefined8 param_1,undefined8 param_2)

{
  FUN_1572b7f80(param_1,param_2);
  return;
}



// FUNCTION 14dd3ff5a FUN_14dd3ff5a body=184 status=ok
// SIG undefined FUN_14dd3ff5a(void)

void FUN_14dd3ff5a(void)

{
  FUN_1622787ee();
  return;
}



// FUNCTION 14dd401ee FUN_14dd401ee body=145 status=ok
// SIG undefined FUN_14dd401ee(void)

void FUN_14dd401ee(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166cbdc4d(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15,~(unaff_RDI + param_3) & in_RAX);
  return;
}



// FUNCTION 14dd40280 FUN_14dd40280 body=147 status=ok
// SIG undefined FUN_14dd40280(void)

void FUN_14dd40280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  
  FUN_166ad0d59(param_1,unaff_retaddr,param_3);
  return;
}



// FUNCTION 14dd403be FUN_14dd403be body=151 status=ok
// SIG undefined FUN_14dd403be(void)

void FUN_14dd403be(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  FUN_1619d203d(FUN_1619d203d,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dd40455 FUN_14dd40455 body=132 status=ok
// SIG undefined FUN_14dd40455(void)

/* WARNING: Removing unreachable block (ram,0x00015b378742) */
/* WARNING: Removing unreachable block (ram,0x00015b378753) */
/* WARNING: Removing unreachable block (ram,0x00015b378748) */
/* WARNING: Removing unreachable block (ram,0x00014dd404d5) */
/* WARNING: Removing unreachable block (ram,0x00015b37863b) */
/* WARNING: Removing unreachable block (ram,0x00015b37865e) */
/* WARNING: Removing unreachable block (ram,0x00015b378662) */

undefined8 FUN_14dd40455(longlong param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  int unaff_EBX;
  int unaff_ESI;
  int *piVar2;
  int unaff_R15D;
  
  piVar2 = (int *)(param_1 + 0x7c);
  *piVar2 = -0x6cce26c4;
  *piVar2 = *piVar2 + 0x6cce26c4;
  *piVar2 = *piVar2 + unaff_ESI;
  if (*piVar2 != 0) {
    uVar1 = FUN_15b3785be();
    return uVar1;
  }
  uVar1 = FUN_166c52f1c(param_1,param_2,(unaff_R15D - (unaff_EBX - ~param_4)) + param_3);
  return uVar1;
}



// FUNCTION 14dd404db FUN_14dd404db body=638 status=ok
// SIG undefined FUN_14dd404db(void)

/* WARNING: Removing unreachable block (ram,0x00014dd40577) */
/* WARNING: Removing unreachable block (ram,0x00014dd4057d) */
/* WARNING: Removing unreachable block (ram,0x00014dd40609) */
/* WARNING: Removing unreachable block (ram,0x00014dd40614) */
/* WARNING: Removing unreachable block (ram,0x00014dd4060f) */
/* WARNING: Removing unreachable block (ram,0x00015b02f731) */
/* WARNING: Removing unreachable block (ram,0x00015b02f76b) */
/* WARNING: Removing unreachable block (ram,0x00015b02f766) */
/* WARNING: Removing unreachable block (ram,0x00015b02f779) */
/* WARNING: Removing unreachable block (ram,0x000164a9f332) */

void FUN_14dd404db(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RDI;
  
  (*(code *)0x16618aa62)(param_1,*(ulonglong *)(unaff_RDI + -0x68) ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14dd407e6 FUN_14dd407e6 body=346 status=ok
// SIG undefined FUN_14dd407e6(void)

/* WARNING: Removing unreachable block (ram,0x00014dd40922) */
/* WARNING: Removing unreachable block (ram,0x00014dd40933) */
/* WARNING: Removing unreachable block (ram,0x00014dd4092e) */
/* WARNING: Removing unreachable block (ram,0x00014dd4088e) */

int FUN_14dd407e6(UINT param_1,DWORD param_2,LPCWSTR param_3)

{
  ulonglong uVar1;
  char in_AL;
  int iVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  longlong *plVar3;
  undefined8 unaff_R14;
  
  uVar1 = *(ulonglong *)(unaff_RSI + -0x98);
  plVar3 = (longlong *)
           ~((0xffffffffffffffff - unaff_RBP | *(ulonglong *)(unaff_RSI + -0x88)) &
            (~*(ulonglong *)(unaff_RSI + -0x88) | unaff_RBP));
  LOCK();
  if (in_AL == DAT_14d7c1fcd) {
    DAT_14d7c1fcd = (char)param_1;
  }
  UNLOCK();
  plVar3[-2] = unaff_R14;
  plVar3[-3] = 0x16185f929;
  FUN_16125323b();
  plVar3[-3] = uVar1 ^ unaff_RBP;
  plVar3[-4] = 0;
  *plVar3 = plVar3[-4];
  *plVar3 = *plVar3 + unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00016185f975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = WideCharToMultiByte(param_1,param_2,param_3,(int)plVar3[-2],(LPSTR)plVar3[5],
                              (int)plVar3[6],(LPCSTR)plVar3[7],(LPBOOL)plVar3[8]);
  return iVar2;
}



// FUNCTION 14dd40944 FUN_14dd40944 body=49 status=ok
// SIG undefined FUN_14dd40944(void)

void FUN_14dd40944(void)

{
  ulonglong *puVar1;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res10;
  
  puVar1 = (ulonglong *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *puVar1 = 0x23fae30a;
  *puVar1 = *puVar1 ^ 0x20999040;
  FUN_14d85d504();
  return;
}



// FUNCTION 14dd409f1 FUN_14dd409f1 body=112 status=ok
// SIG undefined FUN_14dd409f1(void)

void FUN_14dd409f1(ulonglong param_1)

{
  ulonglong in_RAX;
  undefined1 unaff_BL;
  longlong unaff_RDI;
  
  FUN_14dbd65db(FUN_14dbd65db,unaff_BL,*(ulonglong *)(unaff_RDI + -0x70) ^ param_1,~in_RAX);
  return;
}



// FUNCTION 14dd40a64 FUN_14dd40a64 body=123 status=ok
// SIG undefined FUN_14dd40a64(void)

void FUN_14dd40a64(void)

{
  undefined1 uVar1;
  longlong unaff_RSI;
  bool in_CF;
  
  uVar1 = 0xd0;
  if (in_CF) {
    uVar1 = 0xd1;
  }
  FUN_1620f2d8c(*(undefined8 *)(unaff_RSI + -0x68),uVar1,*(undefined8 *)(unaff_RSI + -0x68),
                FUN_1620f2d8c);
  return;
}



// FUNCTION 14dd40ae2 FUN_14dd40ae2 body=154 status=ok
// SIG undefined FUN_14dd40ae2(void)

void FUN_14dd40ae2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_R14;
  longlong unaff_retaddr;
  
  puVar1 = (undefined8 *)(&stack0xfffffffffd2e3b3b + unaff_retaddr);
  *(undefined8 *)(&stack0xfffffffffd2e3b33 + unaff_retaddr) = param_2;
  *puVar1 = 0;
  *(undefined8 *)(&stack0xfffffffffd2e3b33 + unaff_retaddr) = param_1;
  *(undefined8 *)(&stack0xfffffffffd2e3b2b + unaff_retaddr) = unaff_R14;
  *(undefined8 **)(&stack0xfffffffffd2e3b23 + unaff_retaddr) = puVar1;
  *(undefined8 **)(&stack0xfffffffffd2e3b1b + unaff_retaddr) = puVar1;
  *(undefined8 **)(&stack0xfffffffffd2e3b13 + unaff_retaddr) = puVar1;
  *(undefined **)(&stack0xfffffffffd2e3b23 + unaff_retaddr) = &DAT_14dd40b84;
  *(undefined **)(&stack0xfffffffffd2e3b1b + unaff_retaddr) = &DAT_1613fec72;
  return;
}



// FUNCTION 14dd40de9 FUN_14dd40de9 body=125 status=ok
// SIG undefined FUN_14dd40de9(void)

/* WARNING: Removing unreachable block (ram,0x00014dd40efd) */
/* WARNING: Removing unreachable block (ram,0x00014dd40f03) */
/* WARNING: Removing unreachable block (ram,0x000164b3b0ad) */
/* WARNING: Removing unreachable block (ram,0x00014dd40e68) */

void FUN_14dd40de9(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong in_stack_00000008;
  undefined8 uStackX_10;
  ulonglong local_res20;
  
  uVar2 = ~(local_res20 & param_1) & (local_res20 | param_1);
  puVar1 = (ulonglong *)(uVar2 - 8);
  *(undefined8 *)(uVar2 - 0x10) = uStackX_10;
  *puVar1 = in_stack_00000008;
  uVar3 = *(undefined8 *)(uVar2 - 0x10);
  *(undefined8 *)(uVar2 - 0x10) = unaff_RDI;
  *(undefined8 *)(uVar2 - 0x18) = unaff_RDI;
  *(ulonglong *)(uVar2 - 0x10) = *puVar1;
  *(undefined8 *)(uVar2 - 0x18) = unaff_R14;
  *puVar1 = 0;
  *puVar1 = *puVar1 ^ 0x16668343c;
  thunk_FUN_15b642ca5(uVar3,param_2,param_3);
  return;
}



// FUNCTION 14dd40e68 FUN_14dd40e68 body=153 status=ok
// SIG undefined FUN_14dd40e68(void)

/* WARNING: Removing unreachable block (ram,0x00014dd40efd) */
/* WARNING: Removing unreachable block (ram,0x00014dd40f03) */
/* WARNING: Removing unreachable block (ram,0x000164b3b0ad) */

void FUN_14dd40e68(void)

{
  ushort *puVar1;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong in_R10;
  undefined8 unaff_R14;
  ushort local_res18 [8];
  longlong in_stack_00000030;
  
  puVar1 = (ushort *)((longlong)local_res18 + in_R10);
  *puVar1 = ~*puVar1;
  *puVar1 = *puVar1 | 0x100;
  *puVar1 = *puVar1 ^ 0xffff;
  *(undefined8 *)(in_stack_00000030 + -8) = in_R9;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_R14;
  *(undefined8 *)(in_stack_00000030 + -0x20) = unaff_RDI;
  *(undefined8 *)(in_stack_00000030 + -0x20) = *(undefined8 *)(in_stack_00000030 + -0x20);
  FUN_164b3b0ad();
  return;
}



// FUNCTION 14dd40f03 FUN_14dd40f03 body=145 status=ok
// SIG undefined FUN_14dd40f03(void)

void FUN_14dd40f03(void)

{
  FUN_162ce2529();
  return;
}



// FUNCTION 14dd41046 FUN_14dd41046 body=28 status=ok
// SIG undefined FUN_14dd41046(void)

void FUN_14dd41046(void)

{
  return;
}



// FUNCTION 14dd41379 FUN_14dd41379 body=197 status=ok
// SIG undefined FUN_14dd41379(void)

undefined8 FUN_14dd41379(void)

{
  undefined8 unaff_retaddr;
  
  return unaff_retaddr;
}



// FUNCTION 14dd4143f FUN_14dd4143f body=66 status=ok
// SIG undefined FUN_14dd4143f(void)

void FUN_14dd4143f(void)

{
  undefined8 local_res8;
  
  thunk_FUN_15b642ca5(local_res8);
  return;
}



// FUNCTION 14dd414d3 FUN_14dd414d3 body=28 status=ok
// SIG undefined FUN_14dd414d3(void)

void FUN_14dd414d3(void)

{
  FUN_16131bb16();
  return;
}



// FUNCTION 14dd41698 FUN_14dd41698 body=98 status=ok
// SIG undefined FUN_14dd41698(void)

/* WARNING: Instruction at (ram,0x00014dd416b3) overlaps instruction at (ram,0x00014dd416b2)
    */
/* WARNING: Removing unreachable block (ram,0x00014dd416b2) */

void FUN_14dd41698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_retaddr;
  
  FUN_15667592a(unaff_retaddr,param_2,FUN_15667592a,param_4);
  thunk_FUN_14dd41706();
  return;
}



// FUNCTION 14dd41700 thunk_FUN_14dd41706 body=5 status=ok
// SIG undefined thunk_FUN_14dd41706(void)

void thunk_FUN_14dd41706(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161cfb366(FUN_161cfb366,param_2,
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2,
                unaff_RDI + ((param_4 | param_3) ^ 0xffffffffffffffff) * -2);
  FUN_165c7aadf(((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 + 1 |
                ~(*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dd41706 FUN_14dd41706 body=266 status=ok
// SIG undefined FUN_14dd41706(void)

void FUN_14dd41706(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong in_RAX;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161cfb366(FUN_161cfb366,param_2,
                *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2,
                unaff_RDI + ((param_4 | param_3) ^ 0xffffffffffffffff) * -2);
  FUN_165c7aadf(((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) + unaff_R15 + 1 |
                ~(*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)) ^ 0xffffffffffffffff);
  return;
}



// FUNCTION 14dd41bc7 FUN_14dd41bc7 body=144 status=ok
// SIG undefined FUN_14dd41bc7(void)

void FUN_14dd41bc7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  (*(code *)&LAB_165e5ebed)(param_1,local_res8,param_3);
  return;
}



// FUNCTION 14dd41d89 FUN_14dd41d89 body=126 status=ok
// SIG undefined FUN_14dd41d89(void)

void FUN_14dd41d89(void)

{
  FUN_1619510ba(FUN_1619510ba);
  return;
}


