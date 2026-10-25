// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14dc25684 FUN_14dc25684 body=162 status=ok
// SIG undefined FUN_14dc25684(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2569f) */

undefined8 FUN_14dc25684(void)

{
  return 0xfdd39af3;
}



// FUNCTION 14dc25a28 FUN_14dc25a28 body=513 status=ok
// SIG undefined FUN_14dc25a28(void)

/* WARNING: Removing unreachable block (ram,0x00014dc25adb) */
/* WARNING: Removing unreachable block (ram,0x00014dc25ae1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc25a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  undefined8 unaff_R13;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 local_res20;
  
  uVar2 = ~((~in_RAX | local_res20) & (~local_res20 | in_RAX));
  lVar3 = param_5 + in_RAX + (param_5 & in_RAX) * -2;
  local_res20._0_2_ = (ushort)uVar2;
  local_res20._0_2_ = (-0x101 - ((ushort)local_res20 | 0xfeff)) + (ushort)local_res20;
  uVar1 = rdtsc();
  *(undefined8 *)(lVar3 + -8) = unaff_R15;
  *(undefined8 *)(lVar3 + -0x10) = unaff_R15;
  *(undefined4 *)(lVar3 + -0x18) = 0x73cb647;
  *(undefined8 *)(lVar3 + -0x20) = unaff_R13;
  *(ulonglong *)(lVar3 + -0x28) =
       (ulonglong)(((ushort)local_res20 & 0x4000) != 0) * 0x4000 |
       (ulonglong)(((ushort)local_res20 & 0x800) != 0) * 0x800 |
       (ulonglong)(((ushort)local_res20 & 0x400) != 0) * 0x400 |
       (ulonglong)(((ushort)local_res20 & 0x200) != 0) * 0x200 |
       (ulonglong)(((ushort)local_res20 & 0x100) != 0) * 0x100 |
       (ulonglong)(((ushort)local_res20 & 0x80) != 0) * 0x80 |
       (ulonglong)(((ushort)local_res20 & 0x40) != 0) * 0x40 |
       (ulonglong)(((ushort)local_res20 & 0x10) != 0) * 0x10 |
       (ulonglong)(((ushort)local_res20 & 4) != 0) * 4 | (ulonglong)(((ushort)local_res20 & 1) != 0)
       | (ulonglong)((uVar2 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uVar2 & 0x40000) != 0) * 0x40000;
  *(undefined4 *)(lVar3 + -0x14) = 0;
  FUN_160c74b02(in_stack_00000008,uVar1 >> 0x20,param_3,param_4);
  return;
}



// FUNCTION 14dc25b8d FUN_14dc25b8d body=349 status=ok
// SIG undefined FUN_14dc25b8d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc25c2b) */
/* WARNING: Removing unreachable block (ram,0x00014dc25c1a) */

undefined8 FUN_14dc25b8d(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc25e96 FUN_14dc25e96 body=136 status=ok
// SIG undefined FUN_14dc25e96(void)

void FUN_14dc25e96(ulonglong param_1)

{
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_14da10def(~(*(ulonglong *)(unaff_RSI + -0x38) & unaff_RBP) &
                (*(ulonglong *)(unaff_RSI + -0x38) | unaff_RBP),
                -(unaff_RBX + ~(~(param_1 & 0xffffffff9100e577) & (param_1 | 0xffffffff9100e577))));
  return;
}



// FUNCTION 14dc26045 FUN_14dc26045 body=136 status=ok
// SIG undefined FUN_14dc26045(void)

void FUN_14dc26045(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_165be5047(0xffffffffffffff90,FUN_165be5047,param_3,param_4);
  return;
}



// FUNCTION 14dc260cf FUN_14dc260cf body=297 status=ok
// SIG undefined FUN_14dc260cf(void)

void FUN_14dc260cf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong in_RAX;
  undefined8 local_res8;
  longlong lStackX_10;
  
  uVar1 = local_res8;
  local_res8 = param_2;
  FUN_165a366db(uVar1,lStackX_10 + in_RAX,&local_res8);
  FUN_1566db01f();
  return;
}



// FUNCTION 14dc261f9 FUN_14dc261f9 body=643 status=ok
// SIG undefined FUN_14dc261f9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2628b) */
/* WARNING: Removing unreachable block (ram,0x00014dc262ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc262cc) */
/* WARNING: Removing unreachable block (ram,0x00014dc26447) */
/* WARNING: Removing unreachable block (ram,0x00014dc2644c) */

undefined8 FUN_14dc261f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 in_R10;
  longlong unaff_R12;
  
  FUN_165a20071(param_1,*(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX,param_3);
  return in_R10;
}



// FUNCTION 14dc26523 FUN_14dc26523 body=371 status=ok
// SIG undefined FUN_14dc26523(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014dc265b7) */
/* WARNING: Removing unreachable block (ram,0x00014da24d16) */
/* WARNING: Removing unreachable block (ram,0x00014dc265d7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc26523(ushort param_1,ushort param_2)

{
  longlong unaff_RDI;
  
  if (!CARRY2(param_2,-~(ushort)*(undefined8 *)(unaff_RDI + -0x60) - 1 ^ param_1)) {
    return;
  }
  FUN_14da24ce9();
  return;
}



// FUNCTION 14dc26699 FUN_14dc26699 body=159 status=ok
// SIG undefined FUN_14dc26699(void)

void FUN_14dc26699(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  undefined8 local_res8;
  undefined8 uStackX_20;
  
  thunk_FUN_164c21bd8((~in_RAX | uStackX_20) + in_RAX + 1,param_2,local_res8);
  return;
}



// FUNCTION 14dc26739 FUN_14dc26739 body=287 status=ok
// SIG undefined FUN_14dc26739(void)

/* WARNING: Removing unreachable block (ram,0x000161d52119) */
/* WARNING: Removing unreachable block (ram,0x000161d5211f) */
/* WARNING: Removing unreachable block (ram,0x000165e5e433) */
/* WARNING: Removing unreachable block (ram,0x00014dc267c2) */

void FUN_14dc26739(undefined8 param_1)

{
  longlong unaff_R15;
  
  if (unaff_R15 < 0) {
    FUN_161d51ffb();
    return;
  }
  FUN_15b8cc8e9(param_1);
  FUN_165e5e433();
  return;
}



// FUNCTION 14dc2685a FUN_14dc2685a body=58 status=ok
// SIG undefined FUN_14dc2685a(void)

void FUN_14dc2685a(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc26998 FUN_14dc26998 body=108 status=ok
// SIG undefined FUN_14dc26998(void)

void FUN_14dc26998(undefined8 param_1,undefined8 param_2)

{
  FUN_164a95add(param_1,param_2,0x1f5e45ce);
  return;
}



// FUNCTION 14dc26a0e FUN_14dc26a0e body=207 status=ok
// SIG undefined FUN_14dc26a0e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc26a0e(void)

{
  longlong unaff_R13;
  
  return *(undefined8 *)(unaff_R13 + -0x38);
}



// FUNCTION 14dc26ca1 FUN_14dc26ca1 body=99 status=ok
// SIG undefined FUN_14dc26ca1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc26d3d) */

void FUN_14dc26ca1(void)

{
  FUN_165b400e3(FUN_165b400e3);
  return;
}



// FUNCTION 14dc26ea0 FUN_14dc26ea0 body=120 status=ok
// SIG undefined FUN_14dc26ea0(void)

void FUN_14dc26ea0(void)

{
  return;
}



// FUNCTION 14dc26f57 FUN_14dc26f57 body=450 status=ok
// SIG undefined FUN_14dc26f57(void)

/* WARNING: Removing unreachable block (ram,0x00014dc26faa) */

void FUN_14dc26f57(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  code *pcVar4;
  ulonglong in_R11;
  longlong unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar5;
  longlong unaff_retaddr;
  ulonglong local_res8 [4];
  undefined4 uStack0000000000000118;
  ulonglong auStack_28 [4];
  undefined8 uStack_8;
  
  uStack0000000000000118 = 0x5f617461;
  uStack_8 = 0x14dc26fe6;
  uVar2 = FUN_1650fcfbf(FUN_1650fcfbf,0x938151e,param_3);
  param_4 = param_4 - (unaff_retaddr + 1);
  puVar1 = (ulonglong *)((longlong)local_res8 + param_4 + -8);
  *puVar1 = 0x200514;
  *(undefined8 *)((longlong)&uStack_8 + param_4) = uVar2;
  *(undefined4 *)((longlong)&uStack_8 + param_4) = 0x503ad783;
  *(undefined4 *)((longlong)&uStack_8 + param_4 + 4) = 0;
  uVar5 = *puVar1;
  *puVar1 = (ulonglong)((uVar5 & 0x4000) != 0) * 0x4000 | (ulonglong)((uVar5 & 0x800) != 0) * 0x800
            | (ulonglong)((uVar5 & 0x400) != 0) * 0x400 | (ulonglong)((uVar5 & 0x200) != 0) * 0x200
            | (ulonglong)((uVar5 & 0x100) != 0) * 0x100 | (ulonglong)((uVar5 & 0x80) != 0) * 0x80 |
            (ulonglong)((uVar5 & 0x40) != 0) * 0x40 | (ulonglong)((uVar5 & 0x10) != 0) * 0x10 |
            (ulonglong)((uVar5 & 4) != 0) * 4 | (ulonglong)((uVar5 & 1) != 0) |
            (ulonglong)((uVar5 & 0x200000) != 0) * 0x200000 |
            (ulonglong)((uVar5 & 0x40000) != 0) * 0x40000;
  puVar1[-1] = uVar2;
  *(undefined4 *)(puVar1 + -1) = 0;
  *(int *)(puVar1 + -1) = (int)puVar1[-1] + -0xa26452e;
  *(int *)(puVar1 + -1) = (int)puVar1[-1] + 0xd50bc2a;
  *(undefined4 *)((longlong)puVar1 + -4) = 0xc2f9de82;
  pcVar4 = FUN_162601f74;
  puVar1[-2] = 0x14dc27074;
  uVar3 = FUN_162601f74();
  puVar1[-2] = unaff_R14;
  puVar1[1] = unaff_RBP;
  uVar5 = *puVar1;
  *puVar1 = uVar5;
  puVar1[-1] = uVar5;
  *puVar1 = *(ulonglong *)(unaff_R12 + -0xa0);
  *puVar1 = in_R11;
  puVar1[-1] = unaff_R15;
  uVar5 = puVar1[1];
  puVar1[1] = ~puVar1[1];
  puVar1[1] = puVar1[1] | uVar3;
  puVar1[1] = ~((~uVar3 | uVar5) & puVar1[1]);
  puVar1[-2] = (ulonglong)pcVar4;
  puVar1[-3] = unaff_RBX;
  puVar1[-4] = 0xa04278;
  puVar1[-5] = 0xa04278;
  puVar1[-4] = (ulonglong)FUN_14dc2711d;
  (*(code *)0x156e2cc4a)();
  return;
}



// FUNCTION 14dc2711d FUN_14dc2711d body=273 status=ok
// SIG undefined FUN_14dc2711d(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016115879c) overlaps instruction at (ram,0x00016115879b)
    */
/* WARNING: Removing unreachable block (ram,0x00016570a868) */
/* WARNING: Removing unreachable block (ram,0x00016570a862) */
/* WARNING: Removing unreachable block (ram,0x00016570a86d) */
/* WARNING: Removing unreachable block (ram,0x00016570a8aa) */
/* WARNING: Removing unreachable block (ram,0x00016570a8ac) */
/* WARNING: Removing unreachable block (ram,0x000162b71e42) */
/* WARNING: Removing unreachable block (ram,0x000161d6a10c) */
/* WARNING: Removing unreachable block (ram,0x00016570a7d1) */
/* WARNING: Removing unreachable block (ram,0x00016570a7d7) */
/* WARNING: Removing unreachable block (ram,0x000162b71dcd) */
/* WARNING: Removing unreachable block (ram,0x000161d6a101) */
/* WARNING: Removing unreachable block (ram,0x000161d6a10f) */
/* WARNING: Removing unreachable block (ram,0x000161d6a17b) */
/* WARNING: Removing unreachable block (ram,0x000164896630) */
/* WARNING: Removing unreachable block (ram,0x000161d6a187) */
/* WARNING: Removing unreachable block (ram,0x000161d6a287) */
/* WARNING: Removing unreachable block (ram,0x0001611586b3) */
/* WARNING: Removing unreachable block (ram,0x00016584f131) */
/* WARNING: Removing unreachable block (ram,0x0001611586ea) */
/* WARNING: Removing unreachable block (ram,0x00016115874e) */
/* WARNING: Removing unreachable block (ram,0x000161158753) */
/* WARNING: Removing unreachable block (ram,0x000157545a71) */
/* WARNING: Removing unreachable block (ram,0x000161158759) */
/* WARNING: Removing unreachable block (ram,0x00016115879b) */
/* WARNING: Removing unreachable block (ram,0x00016115879c) */
/* WARNING: Removing unreachable block (ram,0x0001611587be) */
/* WARNING: Removing unreachable block (ram,0x0001611587d7) */
/* WARNING: Removing unreachable block (ram,0x000161d6a293) */
/* WARNING: Removing unreachable block (ram,0x00016472aaf4) */
/* WARNING: Removing unreachable block (ram,0x00015694ff58) */
/* WARNING: Removing unreachable block (ram,0x00016472ac3e) */
/* WARNING: Removing unreachable block (ram,0x00016472ac44) */
/* WARNING: Removing unreachable block (ram,0x00016472ac49) */
/* WARNING: Removing unreachable block (ram,0x00016472acc4) */
/* WARNING: Removing unreachable block (ram,0x00016472acc9) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014db12c49) */
/* WARNING: Removing unreachable block (ram,0x000161d6a2ee) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9e1) */
/* WARNING: Removing unreachable block (ram,0x000162b71e3c) */
/* WARNING: Removing unreachable block (ram,0x000162b71e47) */
/* WARNING: Removing unreachable block (ram,0x000162b71ec4) */
/* WARNING: Removing unreachable block (ram,0x000162b71eca) */
/* WARNING: Removing unreachable block (ram,0x0001657a6586) */
/* WARNING: Removing unreachable block (ram,0x0001657a66b5) */
/* WARNING: Removing unreachable block (ram,0x0001657a66bb) */
/* WARNING: Removing unreachable block (ram,0x0001657a66c0) */
/* WARNING: Removing unreachable block (ram,0x0001570bf956) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9d6) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9dc) */
/* WARNING: Removing unreachable block (ram,0x000166cb2901) */
/* WARNING: Removing unreachable block (ram,0x000166cb2937) */
/* WARNING: Removing unreachable block (ram,0x000166cb2a0f) */
/* WARNING: Removing unreachable block (ram,0x000166cb2a15) */
/* WARNING: Removing unreachable block (ram,0x000166cb2aa0) */
/* WARNING: Removing unreachable block (ram,0x000165b3fa09) */
/* WARNING: Removing unreachable block (ram,0x000166cb2aa6) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b4a) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b4f) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b55) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b5a) */
/* WARNING: Removing unreachable block (ram,0x000166cb2bf6) */
/* WARNING: Removing unreachable block (ram,0x000166cb2bfb) */
/* WARNING: Removing unreachable block (ram,0x000166cb2c01) */
/* WARNING: Removing unreachable block (ram,0x000165619888) */
/* WARNING: Removing unreachable block (ram,0x00015b36023e) */
/* WARNING: Removing unreachable block (ram,0x000161224ac3) */
/* WARNING: Removing unreachable block (ram,0x00014dc272b3) */
/* WARNING: Removing unreachable block (ram,0x00014dc27348) */
/* WARNING: Removing unreachable block (ram,0x00014dc2734b) */

undefined8 FUN_14dc2711d(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float10 in_ST0;
  ulonglong local_res10;
  
  uVar3 = ~param_1;
  uVar1 = local_res10 & param_1;
  FUN_15784f961();
  FUN_15b196b91();
  if ((0xffffffffffffffff - uVar1 & local_res10 + (-1 - (uVar3 | local_res10))) !=
      0xffffffffc4d64925) {
    *(float *)(param_1 - 0x4f) = (float)in_ST0;
  }
  uVar2 = FUN_161224ac3();
  return uVar2;
}



// FUNCTION 14dc27230 FUN_14dc27230 body=441 status=ok
// SIG undefined FUN_14dc27230(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00016115879c) overlaps instruction at (ram,0x00016115879b)
    */
/* WARNING: Removing unreachable block (ram,0x00016570a868) */
/* WARNING: Removing unreachable block (ram,0x00016570a862) */
/* WARNING: Removing unreachable block (ram,0x00016570a86d) */
/* WARNING: Removing unreachable block (ram,0x00016570a8aa) */
/* WARNING: Removing unreachable block (ram,0x00016570a8ac) */
/* WARNING: Removing unreachable block (ram,0x000162b71e42) */
/* WARNING: Removing unreachable block (ram,0x000161d6a10c) */
/* WARNING: Removing unreachable block (ram,0x00016570a7d1) */
/* WARNING: Removing unreachable block (ram,0x00016570a7d7) */
/* WARNING: Removing unreachable block (ram,0x000162b71dcd) */
/* WARNING: Removing unreachable block (ram,0x000161d6a101) */
/* WARNING: Removing unreachable block (ram,0x000161d6a10f) */
/* WARNING: Removing unreachable block (ram,0x000161d6a17b) */
/* WARNING: Removing unreachable block (ram,0x000164896630) */
/* WARNING: Removing unreachable block (ram,0x000161d6a187) */
/* WARNING: Removing unreachable block (ram,0x000161d6a287) */
/* WARNING: Removing unreachable block (ram,0x0001611586b3) */
/* WARNING: Removing unreachable block (ram,0x00016584f131) */
/* WARNING: Removing unreachable block (ram,0x0001611586ea) */
/* WARNING: Removing unreachable block (ram,0x00016115874e) */
/* WARNING: Removing unreachable block (ram,0x000161158753) */
/* WARNING: Removing unreachable block (ram,0x000157545a71) */
/* WARNING: Removing unreachable block (ram,0x000161158759) */
/* WARNING: Removing unreachable block (ram,0x00016115879b) */
/* WARNING: Removing unreachable block (ram,0x00016115879c) */
/* WARNING: Removing unreachable block (ram,0x0001611587be) */
/* WARNING: Removing unreachable block (ram,0x0001611587d7) */
/* WARNING: Removing unreachable block (ram,0x000161d6a293) */
/* WARNING: Removing unreachable block (ram,0x00016472aaf4) */
/* WARNING: Removing unreachable block (ram,0x00015694ff58) */
/* WARNING: Removing unreachable block (ram,0x00016472ac3e) */
/* WARNING: Removing unreachable block (ram,0x00016472ac44) */
/* WARNING: Removing unreachable block (ram,0x00016472ac49) */
/* WARNING: Removing unreachable block (ram,0x00016472acc4) */
/* WARNING: Removing unreachable block (ram,0x00016472acc9) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x00014db12c49) */
/* WARNING: Removing unreachable block (ram,0x000161d6a2ee) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9e1) */
/* WARNING: Removing unreachable block (ram,0x000162b71e3c) */
/* WARNING: Removing unreachable block (ram,0x000162b71e47) */
/* WARNING: Removing unreachable block (ram,0x000162b71ec4) */
/* WARNING: Removing unreachable block (ram,0x000162b71eca) */
/* WARNING: Removing unreachable block (ram,0x0001657a6586) */
/* WARNING: Removing unreachable block (ram,0x0001657a66b5) */
/* WARNING: Removing unreachable block (ram,0x0001657a66bb) */
/* WARNING: Removing unreachable block (ram,0x0001657a66c0) */
/* WARNING: Removing unreachable block (ram,0x0001570bf956) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9d6) */
/* WARNING: Removing unreachable block (ram,0x0001570bf9dc) */
/* WARNING: Removing unreachable block (ram,0x000166cb2901) */
/* WARNING: Removing unreachable block (ram,0x000166cb2937) */
/* WARNING: Removing unreachable block (ram,0x000166cb2a0f) */
/* WARNING: Removing unreachable block (ram,0x000166cb2a15) */
/* WARNING: Removing unreachable block (ram,0x000166cb2aa0) */
/* WARNING: Removing unreachable block (ram,0x000165b3fa09) */
/* WARNING: Removing unreachable block (ram,0x000166cb2aa6) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b4a) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b4f) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b55) */
/* WARNING: Removing unreachable block (ram,0x000166cb2b5a) */
/* WARNING: Removing unreachable block (ram,0x000166cb2bf6) */
/* WARNING: Removing unreachable block (ram,0x000166cb2bfb) */
/* WARNING: Removing unreachable block (ram,0x000166cb2c01) */
/* WARNING: Removing unreachable block (ram,0x000165619888) */
/* WARNING: Removing unreachable block (ram,0x00015b36023e) */
/* WARNING: Removing unreachable block (ram,0x000161224ac3) */
/* WARNING: Removing unreachable block (ram,0x00014dc272b3) */
/* WARNING: Removing unreachable block (ram,0x00014dc27348) */
/* WARNING: Removing unreachable block (ram,0x00014dc2734b) */

undefined8 FUN_14dc27230(longlong param_1)

{
  undefined8 uVar1;
  float10 in_ST0;
  longlong lStackX_8;
  
  if (lStackX_8 != -0x3b29b6db) {
    *(float *)(param_1 + -0x4f) = (float)in_ST0;
  }
  uVar1 = FUN_161224ac3();
  return uVar1;
}



// FUNCTION 14dc27355 FUN_14dc27355 body=42 status=ok
// SIG undefined FUN_14dc27355(void)

void FUN_14dc27355(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  undefined8 local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + unaff_RDI) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00014dc2737f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc273ef FUN_14dc273ef body=137 status=ok
// SIG undefined FUN_14dc273ef(void)

undefined8 FUN_14dc273ef(void)

{
  undefined8 unaff_R14;
  
  FUN_15711d47c();
  return unaff_R14;
}



// FUNCTION 14dc27478 FUN_14dc27478 body=170 status=ok
// SIG undefined FUN_14dc27478(void)

undefined8 FUN_14dc27478(void)

{
  undefined8 local_res8;
  
  return local_res8;
}



// FUNCTION 14dc275b5 FUN_14dc275b5 body=656 status=ok
// SIG undefined FUN_14dc275b5(void)

/* WARNING: Instruction at (ram,0x00014dc27751) overlaps instruction at (ram,0x00014dc27750)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc27667) */
/* WARNING: Removing unreachable block (ram,0x00014dc27751) */
/* WARNING: Removing unreachable block (ram,0x00014dc27750) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc275b5(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  FUN_160bfb2ec(param_1,param_2 ^ in_RAX,FUN_160bfb2ec);
  return;
}



// FUNCTION 14dc277a0 FUN_14dc277a0 body=123 status=ok
// SIG undefined FUN_14dc277a0(void)

ulonglong FUN_14dc277a0(ulonglong param_1)

{
  longlong unaff_RDI;
  
  return 0xffffffffffffffff - (*(ulonglong *)(unaff_RDI + -0x80) & param_1) &
         ~(~*(ulonglong *)(unaff_RDI + -0x80) & ~param_1);
}



// FUNCTION 14dc27a40 FUN_14dc27a40 body=150 status=ok
// SIG undefined FUN_14dc27a40(void)

void FUN_14dc27a40(undefined8 param_1)

{
  undefined8 local_res10;
  
  FUN_15726da87(CONCAT62((uint6)((ulonglong)local_res10 >> 0x10) ^
                         (uint6)((ulonglong)param_1 >> 0x10),0xfeff));
  return;
}



// FUNCTION 14dc27db3 FUN_14dc27db3 body=165 status=ok
// SIG undefined FUN_14dc27db3(void)

/* WARNING: Removing unreachable block (ram,0x00015757d70a) */
/* WARNING: Removing unreachable block (ram,0x00015757d710) */
/* WARNING: Removing unreachable block (ram,0x00015709ab88) */
/* WARNING: Removing unreachable block (ram,0x00015709ab8e) */
/* WARNING: Removing unreachable block (ram,0x00014dc27e49) */
/* WARNING: Removing unreachable block (ram,0x00014dc27e4f) */
/* WARNING: Removing unreachable block (ram,0x00015709aa58) */
/* WARNING: Removing unreachable block (ram,0x00015709aaea) */
/* WARNING: Removing unreachable block (ram,0x000156f79400) */
/* WARNING: Removing unreachable block (ram,0x00015709aaf0) */
/* WARNING: Removing unreachable block (ram,0x00015709ab83) */
/* WARNING: Removing unreachable block (ram,0x00015757d68b) */
/* WARNING: Removing unreachable block (ram,0x000156b21e81) */
/* WARNING: Removing unreachable block (ram,0x000156b21f17) */
/* WARNING: Removing unreachable block (ram,0x000156b21f19) */
/* WARNING: Removing unreachable block (ram,0x00015757d715) */
/* WARNING: Removing unreachable block (ram,0x00015757d7b4) */
/* WARNING: Removing unreachable block (ram,0x00015757d7ba) */
/* WARNING: Removing unreachable block (ram,0x000165fa8aec) */

void FUN_14dc27db3(undefined8 param_1)

{
  undefined8 unaff_RBP;
  longlong unaff_R14;
  undefined8 auStackX_18 [2];
  longlong in_stack_00000030;
  
  *(ushort *)((longlong)auStackX_18 + unaff_R14) =
       (*(ushort *)((longlong)auStackX_18 + unaff_R14) | 0x100) - 0x100;
  *(undefined8 *)(in_stack_00000030 + -8) = param_1;
  *(undefined8 *)(in_stack_00000030 + -0x10) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -0x18) = unaff_RBP;
  *(undefined8 *)(in_stack_00000030 + -0x20) = auStackX_18[0];
  *(undefined1 **)(in_stack_00000030 + -0x20) = &LAB_156f79423;
  *(undefined8 *)(in_stack_00000030 + -0x10) = *(undefined8 *)(in_stack_00000030 + -8);
  FUN_15709aa58();
  return;
}



// FUNCTION 14dc27f76 FUN_14dc27f76 body=150 status=ok
// SIG undefined FUN_14dc27f76(void)

void FUN_14dc27f76(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  undefined8 in_R11;
  undefined8 unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_10;
  
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) = *(ulonglong *)(param_3 + 0x10) & unaff_R15;
  *(ulonglong *)(param_3 + 0x10) = ((unaff_R15 - 1) - ~uVar1) - *(longlong *)(param_3 + 0x10);
  *(ulonglong *)(param_3 + 0x10) =
       ~((*(longlong *)(param_3 + 0x10) - (unaff_R14 | *(ulonglong *)(param_3 + 0x10))) + unaff_R14)
  ;
  *(undefined8 *)(param_6 + -8) = param_4;
  *(undefined8 *)(param_6 + -0x10) = unaff_R13;
  *(undefined8 *)(param_6 + -0x18) = unaff_R13;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -8);
  *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x20) = in_R11;
  FUN_16149a87e(param_1,param_2,uStackX_10,&LAB_15b1a726e);
  return;
}



// FUNCTION 14dc2800c FUN_14dc2800c body=122 status=ok
// SIG undefined FUN_14dc2800c(void)

/* WARNING: Removing unreachable block (ram,0x00014dc28088) */
/* WARNING: Removing unreachable block (ram,0x0001662069ba) */
/* WARNING: Removing unreachable block (ram,0x00014dc280f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc28104) */
/* WARNING: Removing unreachable block (ram,0x00014dc2810f) */

void FUN_14dc2800c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_RBX;
  
  FUN_15b7b7f05(param_1,~(*(ulonglong *)(param_1 + -0x78) & unaff_RBX |
                         ~(~unaff_RBX & ~unaff_RBX & *(ulonglong *)(param_1 + -0x78) | unaff_RBX)),
                param_3);
  return;
}



// FUNCTION 14dc28088 thunk_FUN_14dc2808e body=5 status=ok
// SIG undefined thunk_FUN_14dc2808e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc280f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc28104) */
/* WARNING: Removing unreachable block (ram,0x00014dc2810f) */

void thunk_FUN_14dc2808e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  
  FUN_15646f6aa((char)param_1,unaff_RBP ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14dc2808e FUN_14dc2808e body=150 status=ok
// SIG undefined FUN_14dc2808e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc280f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc28104) */
/* WARNING: Removing unreachable block (ram,0x00014dc2810f) */

void FUN_14dc2808e(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong unaff_RBP;
  
  FUN_15646f6aa((char)param_1,unaff_RBP ^ param_1,param_3,param_4);
  return;
}



// FUNCTION 14dc281b1 FUN_14dc281b1 body=95 status=ok
// SIG undefined FUN_14dc281b1(void)

undefined8 FUN_14dc281b1(void)

{
  undefined3 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_R13;
  ushort local_res10;
  uint6 uStackX_12;
  longlong local_res18;
  
  uVar1 = SegmentLimit((int)in_RAX);
  uVar2 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),(uint)(ushort)uVar1);
  *(undefined8 *)(local_res18 + -8) = uVar2;
  *(undefined8 *)(local_res18 + -0x10) = uVar2;
  *(ulonglong *)(local_res18 + -0x18) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 |
       (ulonglong)((byte)((uint3)uVar1 >> 0x10) & 1) * 0x40 |
       (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined8 *)(local_res18 + -8) = 0x20eba0;
  uVar2 = *(undefined8 *)(local_res18 + -0x10);
  *(undefined8 *)(local_res18 + -0x10) = unaff_R13;
  *(undefined8 *)(local_res18 + -0x18) = unaff_R13;
  *(code **)(local_res18 + -0x10) = FUN_1629c9909;
  return uVar2;
}



// FUNCTION 14dc2823a FUN_14dc2823a body=328 status=ok
// SIG undefined FUN_14dc2823a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc282d0) */

ulonglong FUN_14dc2823a(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong in_R9;
  longlong unaff_R13;
  ulonglong unaff_R15;
  ulonglong uStack_8;
  
  puVar1 = (ulonglong *)(&stack0x00000000 + in_R9);
  puVar1[-1] = *(ulonglong *)(unaff_R13 + -0x60);
  *puVar1 = puVar1[-1];
  *puVar1 = 0x6c9de6c8;
  uVar2 = *(ulonglong *)(unaff_R13 + -0x38);
  *puVar1 = ~unaff_R15;
  puVar1[-1] = ~unaff_R15;
  *puVar1 = (ulonglong)&DAT_162f57ec1;
  return uVar2 ^ unaff_R15;
}



// FUNCTION 14dc2842a FUN_14dc2842a body=147 status=ok
// SIG undefined FUN_14dc2842a(void)

void FUN_14dc2842a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_RBP;
  longlong unaff_R15;
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
  ulonglong uStackX_18;
  undefined8 *local_res20;
  
  *(ushort *)(&stack0xffffffffffcf3a77 + unaff_R15) =
       (*(ushort *)(&stack0xffffffffffcf3a77 + unaff_R15) | 0x100) - 0x100;
  bVar10 = (uStackX_18 & 0x4000) != 0;
  bVar9 = (uStackX_18 & 0x800) != 0;
  bVar8 = (uStackX_18 & 0x200) != 0;
  bVar7 = (uStackX_18 & 0x100) != 0;
  bVar6 = (uStackX_18 & 0x80) != 0;
  bVar5 = (uStackX_18 & 0x40) != 0;
  bVar4 = (uStackX_18 & 0x10) != 0;
  bVar3 = (uStackX_18 & 4) != 0;
  bVar2 = (uStackX_18 & 1) != 0;
  bVar14 = (uStackX_18 & 0x200000) != 0;
  bVar11 = (uStackX_18 & 0x40000) != 0;
  bVar13 = 0;
  bVar12 = 0;
  pcVar1 = (code *)swi(0x2e);
  (*pcVar1)();
  *local_res20 = unaff_RBP;
  local_res20[-1] = unaff_RBP;
  local_res20[-2] =
       (ulonglong)(bVar10 & 1) * 0x4000 | (ulonglong)(bVar9 & 1) * 0x800 |
       (ulonglong)((uStackX_18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar8 & 1) * 0x200 |
       (ulonglong)(bVar7 & 1) * 0x100 | (ulonglong)(bVar6 & 1) * 0x80 |
       (ulonglong)(bVar5 & 1) * 0x40 | (ulonglong)(bVar4 & 1) * 0x10 | (ulonglong)(bVar3 & 1) * 4 |
       (ulonglong)(bVar2 & 1) | (ulonglong)(bVar14 & 1) * 0x200000 |
       (ulonglong)(bVar13 & 1) * 0x100000 | (ulonglong)(bVar12 & 1) * 0x80000 |
       (ulonglong)(bVar11 & 1) * 0x40000;
  local_res20[-3] = param_3;
  local_res20[-4] = param_3;
  local_res20[-5] = param_3;
  local_res20[-3] = &DAT_14dc284bf;
  local_res20[-4] = 0x16192b884;
  return;
}



// FUNCTION 14dc28578 FUN_14dc28578 body=80 status=ok
// SIG undefined FUN_14dc28578(void)

void FUN_14dc28578(void)

{
  undefined8 unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x10) = unaff_R14;
  *(undefined8 *)(local_res10 + -0x18) = in_R11;
  *(undefined8 *)(local_res10 + -0x10) = *(undefined8 *)(local_res10 + -8);
  *(undefined8 *)(local_res10 + -8) = 0;
  *(longlong *)(local_res10 + -8) = *(longlong *)(local_res10 + -8) + 0x14dc285db;
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc28621 FUN_14dc28621 body=146 status=ok
// SIG undefined FUN_14dc28621(void)

void FUN_14dc28621(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong in_RAX;
  longlong lVar5;
  ulonglong unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 uStackX_8;
  undefined8 auStackX_10 [3];
  
  lVar5 = in_RAX - (-1 - (param_4 & unaff_RBX));
  *(undefined8 *)((longlong)auStackX_10 + lVar5) = param_1;
  plVar1 = (longlong *)((longlong)auStackX_10 + lVar5 + -8);
  *(undefined4 *)plVar1 = 0xbb0a136d;
  *(undefined4 *)((longlong)auStackX_10 + lVar5 + -4) = 0xffffffff;
  lVar2 = *plVar1;
  *(undefined8 *)((longlong)auStackX_10 + lVar5 + -8) = unaff_RDI;
  lVar3 = *(longlong *)((longlong)auStackX_10 + lVar5 + -8);
  uVar4 = *(undefined8 *)((longlong)auStackX_10 + lVar5);
  *(undefined8 *)((longlong)auStackX_10 + lVar5 + 8) = *(undefined8 *)(lVar3 + lVar2 + 0x44f5ec8b);
  *(undefined8 *)((longlong)auStackX_10 + lVar5) = *(undefined8 *)(lVar3 + -0x98);
  *(undefined8 *)((longlong)auStackX_10 + lVar5 + -8) = *(undefined8 *)(lVar3 + -0xa0);
  FUN_165df8528(uVar4,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14dc28756 FUN_14dc28756 body=172 status=ok
// SIG undefined FUN_14dc28756(void)

void FUN_14dc28756(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x165ab1ae1)(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc28920 FUN_14dc28920 body=121 status=ok
// SIG undefined FUN_14dc28920(void)

void FUN_14dc28920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 unaff_R13;
  undefined8 uStackX_8;
  undefined2 local_res10;
  undefined6 uStackX_12;
  undefined8 local_res18;
  
  pvVar1 = ClientId.UniqueProcess;
  *(undefined8 *)(local_res18 + -8) = param_3;
  *(undefined8 *)(local_res18 + -0x10) = param_3;
  *(void **)(local_res18 + -0x18) = pvVar1;
  *(undefined4 *)(local_res18 + -0x18) = 0x3937e23;
  *(undefined8 *)(local_res18 + -0x20) = unaff_R13;
  *(ulonglong *)(local_res18 + -0x28) =
       (ulonglong)((local_res10 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((local_res10 & 0x800) != 0) * 0x800 |
       (ulonglong)((local_res10 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res10 & 0x200) != 0) * 0x200 |
       (ulonglong)((local_res10 & 0x80) != 0) * 0x80 | (ulonglong)((local_res10 & 0x40) != 0) * 0x40
       | (ulonglong)((local_res10 & 0x10) != 0) * 0x10 | (ulonglong)((local_res10 & 4) != 0) * 4 |
       (ulonglong)((local_res10 & 1) != 0) | (ulonglong)((uStackX_12 & 0x20) != 0) * 0x200000 |
       (ulonglong)((uStackX_12 & 4) != 0) * 0x40000;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  (*(code *)0x15b23a3ec)(param_1,uStackX_8,0x15b23a3ec);
  return;
}



// FUNCTION 14dc28b58 FUN_14dc28b58 body=303 status=ok
// SIG undefined FUN_14dc28b58(void)

/* WARNING: Removing unreachable block (ram,0x00014dc28bf3) */

void FUN_14dc28b58(char param_1)

{
  FUN_1669ecacc(param_1 + '\x01');
  return;
}



// FUNCTION 14dc28f34 FUN_14dc28f34 body=14 status=ok
// SIG undefined FUN_14dc28f34(void)

void FUN_14dc28f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_retaddr;
  
  thunk_FUN_15b642ca5(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc2912b FUN_14dc2912b body=40 status=ok
// SIG undefined FUN_14dc2912b(void)

void FUN_14dc2912b(void)

{
  return;
}



// FUNCTION 14dc291d5 FUN_14dc291d5 body=880 status=ok
// SIG undefined FUN_14dc291d5(void)

/* WARNING: Removing unreachable block (ram,0x00014ddb5c57) */
/* WARNING: Removing unreachable block (ram,0x00014dc2926e) */
/* WARNING: Removing unreachable block (ram,0x00014dc29274) */
/* WARNING: Removing unreachable block (ram,0x00014dc29395) */
/* WARNING: Removing unreachable block (ram,0x00014dc2939b) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5bcc) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5c26) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5c29) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5c4c) */
/* WARNING: Removing unreachable block (ram,0x00014ddb5c52) */
/* WARNING: Removing unreachable block (ram,0x000156e7ba85) */

void FUN_14dc291d5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort *puVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_R13;
  ushort auStackX_10 [4];
  undefined8 local_res18;
  
  puVar1 = (ushort *)((longlong)auStackX_10 + unaff_R13);
  *puVar1 = (-0x101 - (*puVar1 | 0xfeff)) + *puVar1;
  *(undefined8 *)(param_5 + -8) = unaff_RBP;
  *(undefined8 *)(param_5 + -0x10) = param_3;
  *(undefined8 *)(param_5 + -0x18) = local_res18;
  *(undefined8 *)(param_5 + -0x10) = *(undefined8 *)(param_5 + -8);
  *(undefined1 **)(param_5 + -8) = &LAB_166368218;
  *(undefined8 *)(param_5 + -0x10) = in_RAX;
  return;
}



// FUNCTION 14dc29444 FUN_14dc29444 body=180 status=ok
// SIG undefined FUN_14dc29444(void)

void FUN_14dc29444(void)

{
  return;
}



// FUNCTION 14dc29769 FUN_14dc29769 body=144 status=ok
// SIG undefined FUN_14dc29769(void)

void FUN_14dc29769(void)

{
  ulonglong in_R9;
  ulonglong unaff_retaddr;
  
  if (in_R9 != (unaff_retaddr ^ 0x30d148a9)) {
    FUN_162127bd8();
    return;
  }
  return;
}



// FUNCTION 14dc297f9 FUN_14dc297f9 body=118 status=ok
// SIG undefined FUN_14dc297f9(void)

void FUN_14dc297f9(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  undefined8 unaff_RDI;
  bool bVar3;
  bool bVar4;
  undefined8 unaff_retaddr;
  ushort local_res8;
  uint6 uStackX_a;
  longlong local_res10;
  
  LOCK();
  bVar3 = in_AL < DAT_14d7aa8bc._4_1_;
  bVar4 = SBORROW1(in_AL,DAT_14d7aa8bc._4_1_);
  cVar1 = in_AL - DAT_14d7aa8bc._4_1_;
  bVar2 = param_1;
  if (cVar1 != '\0') {
    bVar2 = DAT_14d7aa8bc._4_1_;
  }
  DAT_14d7aa8bc._4_1_ = bVar2;
  UNLOCK();
  *(undefined8 *)(local_res10 + -8) = unaff_retaddr;
  *(undefined8 *)(local_res10 + -0x10) = unaff_retaddr;
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((local_res8 & 0x4000) != 0) * 0x4000 | (ulonglong)bVar4 * 0x800 |
       (ulonglong)((local_res8 & 0x400) != 0) * 0x400 |
       (ulonglong)((local_res8 & 0x200) != 0) * 0x200 | (ulonglong)(cVar1 < '\0') * 0x80 |
       (ulonglong)(cVar1 == '\0') * 0x40 | (ulonglong)((local_res8 & 0x10) != 0) * 0x10 |
       (ulonglong)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (ulonglong)bVar3 |
       (ulonglong)((uStackX_a & 0x20) != 0) * 0x200000 | (ulonglong)((uStackX_a & 4) != 0) * 0x40000
  ;
  *(undefined4 *)(local_res10 + -0x20) = 0x49334d78;
  *(undefined4 *)(local_res10 + -0x1c) = 0;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x18) = param_4;
  *(undefined8 *)(local_res10 + -0x20) = param_4;
  *(undefined **)(local_res10 + -0x18) = &DAT_1568ecb1f;
  FUN_1568ecb1b();
  return;
}



// FUNCTION 14dc29871 FUN_14dc29871 body=585 status=ok
// SIG undefined FUN_14dc29871(void)

/* WARNING: Removing unreachable block (ram,0x000160b9c255) */
/* WARNING: Removing unreachable block (ram,0x000160b9c25b) */
/* WARNING: Removing unreachable block (ram,0x0001614b185b) */
/* WARNING: Removing unreachable block (ram,0x000160b9c2f4) */
/* WARNING: Removing unreachable block (ram,0x000160b9c2fa) */
/* WARNING: Removing unreachable block (ram,0x000160b9c2ff) */
/* WARNING: Removing unreachable block (ram,0x00015b8dfa74) */
/* WARNING: Removing unreachable block (ram,0x00015b8dfa7f) */
/* WARNING: Removing unreachable block (ram,0x00015b8dfa7a) */
/* WARNING: Removing unreachable block (ram,0x00014dc298f8) */
/* WARNING: Removing unreachable block (ram,0x00014dc2997f) */
/* WARNING: Removing unreachable block (ram,0x00014dc29984) */
/* WARNING: Removing unreachable block (ram,0x00014dc2998f) */
/* WARNING: Removing unreachable block (ram,0x00014dc299f5) */
/* WARNING: Removing unreachable block (ram,0x00014dc299a7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2998a) */

undefined8
FUN_14dc29871(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_16117cebc(param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14dc2998f FUN_14dc2998f body=200 status=ok
// SIG undefined FUN_14dc2998f(void)

longlong FUN_14dc2998f(void)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x2b2ae) {
    return in_RAX;
  }
  return unaff_RSI + -0x2b2af;
}



// FUNCTION 14dc29a5b FUN_14dc29a5b body=182 status=ok
// SIG undefined FUN_14dc29a5b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc29a96) */

void FUN_14dc29a5b(undefined8 param_1,ulonglong *param_2)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  *param_2 = 0x39d8e43a;
  *param_2 = *param_2 + 0x12f5131e;
  *param_2 = *param_2 ^ 0x4ccdf758;
  FUN_1612dfc03(*(ulonglong *)(unaff_R13 + -0x90) | unaff_R15,
                ~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x60)) &
                 (~*(ulonglong *)(unaff_R13 + -0x60) | unaff_R15)),FUN_1612dfc03);
  return;
}



// FUNCTION 14dc29b11 FUN_14dc29b11 body=124 status=ok
// SIG undefined FUN_14dc29b11(void)

void FUN_14dc29b11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_162b31669(0x72,param_2,param_3,FUN_162b31669);
  return;
}



// FUNCTION 14dc29b93 FUN_14dc29b93 body=142 status=ok
// SIG undefined FUN_14dc29b93(void)

/* WARNING: Removing unreachable block (ram,0x00014dc29c22) */

void FUN_14dc29b93(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  
  lVar1 = *(longlong *)(unaff_RSI + -0x38);
  *(ulonglong *)(&stack0xfffffffff18ec127 + param_1) =
       (ulonglong)(uint)(unaff_EDI - *(int *)(&stack0xfffffffff18ec147 + param_1));
  if (lVar1 == 0 && unaff_RBP == 0) {
    uVar2 = *(ulonglong *)(unaff_RSI + -0x58);
    *(undefined8 *)(&stack0xfffffffff18ec127 + param_1) = unaff_R15;
    uVar3 = *(ulonglong *)(unaff_RSI + -0x80);
    *(longlong *)(&stack0xfffffffff18ec127 + param_1) = unaff_RSI;
    *(undefined8 *)(&stack0xfffffffff18ec11f + param_1) = unaff_R13;
    *(ulonglong *)(&stack0xfffffffff18ec11f + param_1) = (~unaff_RBP + uVar3) - (~unaff_RBP & uVar3)
    ;
    FUN_160f6bf5d(0,~(uVar2 & unaff_RBP) & (uVar2 | unaff_RBP));
    return;
  }
  FUN_14e057e09();
  return;
}



// FUNCTION 14dc29c22 FUN_14dc29c22 body=107 status=ok
// SIG undefined FUN_14dc29c22(void)

void FUN_14dc29c22(undefined8 param_1,undefined8 param_2)

{
  FUN_14dae14b2(param_1,param_2,FUN_14dae14b2);
  return;
}



// FUNCTION 14dc29c8e FUN_14dc29c8e body=277 status=ok
// SIG undefined FUN_14dc29c8e(void)

void FUN_14dc29c8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong in_R10;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lStackX_8;
  undefined1 auStackX_10 [24];
  
  plVar1 = (longlong *)(auStackX_10 + (unaff_RSI - in_R10) + -8);
  *plVar1 = (longlong)(auStackX_10 + (unaff_RSI - in_R10));
  *plVar1 = *plVar1 + -8;
  lVar3 = *plVar1;
  plVar1 = (longlong *)(lVar3 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + unaff_RBP;
  puVar2 = (uint *)(lVar3 + -0x10);
  *puVar2 = 0x1c0922c7;
  bVar4 = 0xb64ab53e < *puVar2;
  bVar8 = SCARRY4(*puVar2,0x49b54ac1);
  *puVar2 = *puVar2 + 0x49b54ac1;
  bVar7 = (int)*puVar2 < 0;
  bVar6 = *puVar2 == 0;
  bVar5 = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
  *(undefined4 *)(lVar3 + -0xc) = 0;
  *(undefined8 *)(lVar3 + -0x18) = 0x14dc29d3a;
  FUN_1568418cf(param_1,param_2);
  *(ulonglong *)(lVar3 + -0x18) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(bVar8 & 1) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)(bVar7 & 1) * 0x80 | (ulonglong)(bVar6 & 1) * 0x40 | (ulonglong)(in_AF & 1) * 0x10
       | (ulonglong)(bVar5 & 1) * 4 | (ulonglong)(bVar4 & 1) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(lVar3 + -0x20) = 0xa24138e;
  *(longlong *)(lVar3 + -0x20) = *(longlong *)(lVar3 + -0x20) + -0x222538a;
  *(longlong *)(lVar3 + -0x18) = lStackX_8;
  *(undefined8 *)(lVar3 + -8) = 0x801c004;
  *(undefined8 *)puVar2 = param_3;
  *(undefined8 *)(lVar3 + -0x18) = param_3;
  *(code **)puVar2 = FUN_165c7153c;
  FUN_1648b1a0b();
  return;
}



// FUNCTION 14dc29ebe FUN_14dc29ebe body=649 status=ok
// SIG undefined FUN_14dc29ebe(void)

/* WARNING: Removing unreachable block (ram,0x00015b3cf577) */
/* WARNING: Removing unreachable block (ram,0x00014dc29f53) */

undefined8 FUN_14dc29ebe(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar1 = ~((~param_3 & ~param_1 | param_3) & (~param_3 | param_1));
  uVar3 = (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
          (~*(ulonglong *)(unaff_RDI + -0x68) | param_1) ^ 0xffffffffffffffff;
  if (*(ulonglong *)(unaff_RDI + -0x88) + param_1 ==
      (*(ulonglong *)(unaff_RDI + -0x88) & param_1) * 2) {
    uVar2 = FUN_1651c27d9(param_1,uVar3,uVar1);
    return uVar2;
  }
  uVar2 = FUN_1651c27d9(param_1,uVar3,uVar1);
  return uVar2;
}



// FUNCTION 14dc2a1c8 FUN_14dc2a1c8 body=173 status=ok
// SIG undefined FUN_14dc2a1c8(void)

undefined8
FUN_14dc2a1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R15;
  longlong local_res18;
  
  *(undefined8 *)(local_res18 + -8) = unaff_R15;
  *(undefined8 *)(local_res18 + -0x10) = param_4;
  *(undefined8 *)(local_res18 + -0x18) = param_4;
  *(undefined8 *)(local_res18 + -0x20) = unaff_RBP;
  *(undefined8 *)(local_res18 + -0x10) = *(undefined8 *)(local_res18 + -8);
  lVar1 = *(longlong *)(local_res18 + -0x20);
  *(undefined8 *)(local_res18 + -0x18) = unaff_RDI;
  *(undefined8 *)(local_res18 + -8) = 0;
  *(longlong *)(local_res18 + -8) = (longlong)(FUN_156f81be3 + *(longlong *)(local_res18 + -8));
  *(undefined4 *)(local_res18 + -0x18) = 0;
  *(undefined4 *)(local_res18 + -0x14) = 0;
  *(undefined8 *)(local_res18 + -0x10) = param_2;
  *(undefined8 *)(local_res18 + -0x18) = param_2;
  *(undefined8 *)(local_res18 + -0x10) = 0x14d7bd2ed;
  *(code **)(local_res18 + -0x20) = FUN_14dc2a275;
  uVar2 = FUN_156f81bb7();
  lVar1 = local_res18 + -0x18 + lVar1;
  *(undefined8 *)(lVar1 + -0xe976fa1) = uVar2;
  *(undefined8 *)(lVar1 + -0xe976fa9) = unaff_RSI;
  *(undefined8 *)(lVar1 + -0xe976fa1) = param_1;
  *(undefined8 *)(lVar1 + -0xe976fa1) = *(undefined8 *)(lVar1 + -0xe976fa9);
  *(undefined1 **)(lVar1 + -0xe976fa1) = &LAB_162882ad2;
  return 0x29960c1;
}



// FUNCTION 14dc2a275 FUN_14dc2a275 body=126 status=ok
// SIG undefined FUN_14dc2a275(void)

undefined8 FUN_14dc2a275(undefined8 param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  
  *(undefined8 *)(&stack0xfffffffff168905f + unaff_RBP) = in_RAX;
  *(undefined8 *)(&stack0xfffffffff1689057 + unaff_RBP) = unaff_RSI;
  *(undefined8 *)(&stack0xfffffffff168905f + unaff_RBP) = param_1;
  *(undefined8 *)(&stack0xfffffffff168905f + unaff_RBP) =
       *(undefined8 *)(&stack0xfffffffff1689057 + unaff_RBP);
  *(undefined1 **)(&stack0xfffffffff168905f + unaff_RBP) = &LAB_162882ad2;
  return 0x29960c1;
}



// FUNCTION 14dc2a2f4 FUN_14dc2a2f4 body=78 status=ok
// SIG undefined FUN_14dc2a2f4(void)

void FUN_14dc2a2f4(void)

{
  return;
}



// FUNCTION 14dc2a399 FUN_14dc2a399 body=138 status=ok
// SIG undefined FUN_14dc2a399(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2a54e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a559) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a59c) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a619) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a61d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a554) */

void FUN_14dc2a399(void)

{
  longlong in_RAX;
  bool bVar1;
  longlong in_stack_00000010;
  longlong in_stack_00000028;
  
  bVar1 = in_stack_00000028 == -1 && in_RAX == -1;
  FUN_162c3cd28();
  if (bVar1) {
    return;
  }
  if (in_stack_00000010 == 0x1301cc) {
    FUN_156df28c9();
    FUN_160e476f9();
    return;
  }
  FUN_156df28dd();
  return;
}



// FUNCTION 14dc2a425 FUN_14dc2a425 body=572 status=ok
// SIG undefined FUN_14dc2a425(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2a54e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a559) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a59c) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a619) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a61d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a554) */

void FUN_14dc2a425(void)

{
  longlong in_R9;
  bool in_ZF;
  
  if (in_ZF) {
    return;
  }
  if (in_R9 == 0x1301cc) {
    FUN_156df28c9();
    FUN_160e476f9();
    return;
  }
  FUN_156df28dd();
  return;
}



// FUNCTION 14dc2a668 FUN_14dc2a668 body=142 status=ok
// SIG undefined FUN_14dc2a668(void)

void FUN_14dc2a668(undefined8 param_1,undefined8 param_2)

{
  FUN_165f192a6(param_1,param_2,0xffffffffef98bd18);
  return;
}



// FUNCTION 14dc2a6f6 FUN_14dc2a6f6 body=145 status=ok
// SIG undefined FUN_14dc2a6f6(void)

void FUN_14dc2a6f6(void)

{
  return;
}



// FUNCTION 14dc2a789 FUN_14dc2a789 body=141 status=ok
// SIG undefined FUN_14dc2a789(void)

void FUN_14dc2a789(void)

{
  FUN_160c34c66();
  return;
}



// FUNCTION 14dc2a816 FUN_14dc2a816 body=152 status=ok
// SIG undefined FUN_14dc2a816(void)

void FUN_14dc2a816(void)

{
  return;
}



// FUNCTION 14dc2a8b1 FUN_14dc2a8b1 body=3 status=ok
// SIG undefined FUN_14dc2a8b1(void)

void FUN_14dc2a8b1(void)

{
  return;
}



// FUNCTION 14dc2a924 FUN_14dc2a924 body=284 status=ok
// SIG undefined FUN_14dc2a924(void)

/* WARNING: Removing unreachable block (ram,0x000156eb5440) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a9a1) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a9d3) */
/* WARNING: Removing unreachable block (ram,0x00014dc2a9d6) */

void FUN_14dc2a924(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  
  uVar3 = *(ulonglong *)(unaff_RDI + -0x68) ^ 0xffffffffffffffff | param_1;
  uVar4 = ~((~uVar3 | ~(0xffffffffffffffff - (param_1 ^ 0xffffffffffffffff) &
                       0xffffffffffffffff - *(ulonglong *)(unaff_RDI + -0x68))) + uVar3 + 1);
  FUN_15642f340(param_1,uVar4,param_3);
  uVar3 = *(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = ~*(ulonglong *)(uVar4 + 8);
  *(ulonglong *)(uVar4 + 8) = *(ulonglong *)(uVar4 + 8) | param_1;
  lVar1 = *(longlong *)(uVar4 + 8);
  lVar2 = *(longlong *)(uVar4 + 8);
  *(undefined8 *)(uVar4 + 8) = 0;
  *(ulonglong *)(uVar4 + 8) =
       *(ulonglong *)(uVar4 + 8) ^ ~((0xffffffffffffffffU - lVar1 | ~param_1 | uVar3) + lVar2 + 1);
  return;
}



// FUNCTION 14dc2a9a1 FUN_14dc2a9a1 body=116 status=ok
// SIG undefined FUN_14dc2a9a1(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2a9d3) */

void FUN_14dc2a9a1(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *unaff_R14;
  
  *unaff_R14 = ~param_4 | ~*unaff_R14;
  FUN_165cf7537(param_1,param_2,param_3,FUN_165cf7537);
  return;
}



// FUNCTION 14dc2aa16 FUN_14dc2aa16 body=176 status=ok
// SIG undefined FUN_14dc2aa16(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2aab6) */
/* WARNING: Removing unreachable block (ram,0x00014dc2aac7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2aac2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2aa16(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong in_stack_00000020;
  
  local_res10 = local_res10 ^ param_1;
  local_res18 = ~(local_res18 & param_1) & (local_res18 | param_1);
  (*(code *)0x16293af33)(0x16293af33,param_2,&local_res10,param_4,~in_stack_00000020 | param_1);
  return;
}



// FUNCTION 14dc2aac7 FUN_14dc2aac7 body=164 status=ok
// SIG undefined FUN_14dc2aac7(void)

void FUN_14dc2aac7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStackX_8;
  
  FUN_157511568(param_1,param_2,param_3,uStackX_8);
  return;
}



// FUNCTION 14dc2ab6b FUN_14dc2ab6b body=298 status=ok
// SIG undefined FUN_14dc2ab6b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2abf0) */
/* WARNING: Removing unreachable block (ram,0x00014dc2abfb) */
/* WARNING: Removing unreachable block (ram,0x000162c33d94) */
/* WARNING: Removing unreachable block (ram,0x000162c33d9a) */
/* WARNING: Removing unreachable block (ram,0x00014dc2abf6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2ab6b(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_156bfa912(param_1,(~(~*(ulonglong *)(unaff_RDI + -0x68) | ~param_1) ^ 0xffffffffffffffff) &
                        (~-*(ulonglong *)(unaff_RDI + -0x68) + 1 | param_1),
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                unaff_RBP + param_4 + param_1 + (param_4 & param_1) * -2);
  return;
}



// FUNCTION 14dc2ac97 FUN_14dc2ac97 body=174 status=ok
// SIG undefined FUN_14dc2ac97(void)

undefined8 FUN_14dc2ac97(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc2adbb FUN_14dc2adbb body=737 status=ok
// SIG undefined FUN_14dc2adbb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2ae55) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ae60) */
/* WARNING: Removing unreachable block (ram,0x00014dc2af00) */
/* WARNING: Removing unreachable block (ram,0x00014dc2af04) */
/* WARNING: Removing unreachable block (ram,0x00014dc2af78) */
/* WARNING: Removing unreachable block (ram,0x00014dc2af7d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2af83) */
/* WARNING: Removing unreachable block (ram,0x00015b11c67e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ae5b) */

void FUN_14dc2adbb(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res18;
  
  thunk_FUN_14df69024(local_res18,param_2);
  return;
}



// FUNCTION 14dc2b0d6 FUN_14dc2b0d6 body=54 status=ok
// SIG undefined FUN_14dc2b0d6(void)

void FUN_14dc2b0d6(LPCSTR param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc2b106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LoadLibraryA(param_1);
  return;
}



// FUNCTION 14dc2b18b FUN_14dc2b18b body=187 status=ok
// SIG undefined FUN_14dc2b18b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2b210) */

void FUN_14dc2b18b(void)

{
  (*(code *)0x1662a79f4)(0,0x1662a79f4,0xffffffffffffffa0,0xffffffff95d2e8f4);
  return;
}



// FUNCTION 14dc2b3f4 FUN_14dc2b3f4 body=7 status=ok
// SIG undefined FUN_14dc2b3f4(void)

void FUN_14dc2b3f4(void)

{
  FUN_14d85d504();
  return;
}



// FUNCTION 14dc2b522 FUN_14dc2b522 body=314 status=ok
// SIG undefined FUN_14dc2b522(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2b63c) */
/* WARNING: Removing unreachable block (ram,0x00014dc2b5ba) */
/* WARNING: Removing unreachable block (ram,0x00014dc2b631) */
/* WARNING: Removing unreachable block (ram,0x00014dc2b62c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc2b522(void)

{
  undefined8 in_RAX;
  ulonglong unaff_RDI;
  undefined8 unaff_R14;
  
  *(undefined8 *)(&stack0x374eee1e + -(~unaff_RDI + 2)) = unaff_R14;
  return in_RAX;
}



// FUNCTION 14dc2b5ba thunk_FUN_14dc2b5c0 body=5 status=ok
// SIG undefined thunk_FUN_14dc2b5c0(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2b63c) */

void thunk_FUN_14dc2b5c0(void)

{
  ulonglong unaff_R15;
  undefined8 uStackX_18;
  
  if (-1 < (longlong)(~(uStackX_18 & unaff_R15) & (uStackX_18 | unaff_R15))) {
    FUN_162d4875b();
    return;
  }
  FUN_162d4875b();
  return;
}



// FUNCTION 14dc2b5c0 FUN_14dc2b5c0 body=124 status=ok
// SIG undefined FUN_14dc2b5c0(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2b63c) */

void FUN_14dc2b5c0(void)

{
  ulonglong unaff_R15;
  undefined8 local_res18;
  
  if (-1 < (longlong)(~(local_res18 & unaff_R15) & (local_res18 | unaff_R15))) {
    FUN_162d4875b();
    return;
  }
  FUN_162d4875b();
  return;
}



// FUNCTION 14dc2b63c thunk_FUN_14dc2b642 body=5 status=ok
// SIG undefined thunk_FUN_14dc2b642(void)

void thunk_FUN_14dc2b642(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  FUN_16164165a(param_1,0xffffffffffffffff - (in_RAX & unaff_R15) & (in_RAX | unaff_R15));
  return;
}



// FUNCTION 14dc2b642 FUN_14dc2b642 body=340 status=ok
// SIG undefined FUN_14dc2b642(void)

void FUN_14dc2b642(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong unaff_R15;
  
  FUN_16164165a(param_1,0xffffffffffffffff - (in_RAX & unaff_R15) & (in_RAX | unaff_R15));
  return;
}



// FUNCTION 14dc2b8c8 FUN_14dc2b8c8 body=27 status=ok
// SIG undefined FUN_14dc2b8c8(void)

void FUN_14dc2b8c8(void)

{
  return;
}



// FUNCTION 14dc2b96e FUN_14dc2b96e body=134 status=ok
// SIG undefined FUN_14dc2b96e(void)

void FUN_14dc2b96e(undefined8 param_1,undefined8 param_2)

{
  FUN_161d18a6f(param_1,param_2,FUN_161d18a6f);
  return;
}



// FUNCTION 14dc2b9f5 FUN_14dc2b9f5 body=169 status=ok
// SIG undefined FUN_14dc2b9f5(void)

void FUN_14dc2b9f5(longlong param_1,ushort param_2)

{
  bool bVar1;
  ushort unaff_SI;
  longlong unaff_RDI;
  
  bVar1 = *(longlong *)(unaff_RDI + -0x30) != 0;
  if (param_1 != -1 || bVar1) {
    FUN_16269727f();
    return;
  }
  if (param_1 == -1 && !bVar1) {
    FUN_16269727f();
    return;
  }
  (*(code *)0x15657666e)(param_1,param_2 + unaff_SI + (param_2 & unaff_SI) * -2);
  return;
}



// FUNCTION 14dc2ba9e FUN_14dc2ba9e body=133 status=ok
// SIG undefined FUN_14dc2ba9e(void)

void FUN_14dc2ba9e(void)

{
  (*(code *)0x15657666e)();
  return;
}



// FUNCTION 14dc2bc53 FUN_14dc2bc53 body=127 status=ok
// SIG undefined FUN_14dc2bc53(void)

void FUN_14dc2bc53(void)

{
  FUN_156ee7568();
  return;
}



// FUNCTION 14dc2bcd3 FUN_14dc2bcd3 body=156 status=ok
// SIG undefined FUN_14dc2bcd3(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2bde7) */
/* WARNING: Removing unreachable block (ram,0x0001656c25f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2bded) */
/* WARNING: Removing unreachable block (ram,0x00014dc2bdf3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2bcd3(ulonglong param_1)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar2;
  ulonglong in_stack_00000030;
  
  *(ulonglong *)(unaff_R14 + 0x10) =
       (unaff_RBP - (*(ulonglong *)(unaff_R14 + 0x10) | unaff_RBP)) +
       *(longlong *)(unaff_R14 + 0x10);
  bVar2 = in_stack_00000030 + param_1 < (in_stack_00000030 & param_1) * 2;
  lVar1 = FUN_1647093e8();
  (*(code *)&LAB_166651ec3)
            (*(undefined8 *)(unaff_R13 + -0x78),&LAB_166651ec3,
             param_1 + (lVar1 + unaff_R15 + (ulonglong)bVar2 + 1) * -2);
  return;
}



// FUNCTION 14dc2bd70 FUN_14dc2bd70 body=477 status=ok
// SIG undefined FUN_14dc2bd70(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2bde7) */
/* WARNING: Removing unreachable block (ram,0x0001656c25f7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2bded) */
/* WARNING: Removing unreachable block (ram,0x00014dc2bdf3) */

void FUN_14dc2bd70(longlong param_1)

{
  longlong in_RAX;
  longlong unaff_R13;
  longlong unaff_R15;
  byte in_CF;
  
  (*(code *)&LAB_166651ec3)
            (*(undefined8 *)(unaff_R13 + -0x78),&LAB_166651ec3,
             param_1 + (in_RAX + unaff_R15 + (ulonglong)in_CF + 1) * -2);
  return;
}



// FUNCTION 14dc2c183 FUN_14dc2c183 body=139 status=ok
// SIG undefined FUN_14dc2c183(void)

void FUN_14dc2c183(void)

{
  return;
}



// FUNCTION 14dc2c481 FUN_14dc2c481 body=836 status=ok
// SIG undefined FUN_14dc2c481(void)

/* WARNING: Instruction at (ram,0x00014dc2c701) overlaps instruction at (ram,0x00014dc2c700)
    */
/* WARNING: Removing unreachable block (ram,0x000162e94667) */
/* WARNING: Removing unreachable block (ram,0x000166aefeb6) */
/* WARNING: Removing unreachable block (ram,0x000162e9467d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c642) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c64e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c701) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c700) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c76a) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c776) */
/* WARNING: Removing unreachable block (ram,0x000166aefe06) */
/* WARNING: Removing unreachable block (ram,0x00016180ac4f) */
/* WARNING: Removing unreachable block (ram,0x00014dc2c513) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc2c481(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  longlong local_res8;
  
  FUN_1663afd86(param_1,*(undefined8 *)(unaff_RDI + -0x68),
                (-param_1 - *(ulonglong *)(unaff_RDI + -0x70)) +
                (*(ulonglong *)(unaff_RDI + -0x70) | param_1) * 2,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  uVar1 = FUN_15737c2ed(&DAT_15737c357,-local_res8);
  return uVar1;
}



// FUNCTION 14dc2c890 FUN_14dc2c890 body=915 status=ok
// SIG undefined FUN_14dc2c890(void)

/* WARNING: Removing unreachable block (ram,0x000166dd6a1d) */
/* WARNING: Removing unreachable block (ram,0x000166dd6a28) */
/* WARNING: Removing unreachable block (ram,0x0001572eba59) */
/* WARNING: Removing unreachable block (ram,0x0001572eba5f) */
/* WARNING: Removing unreachable block (ram,0x0001572eba64) */
/* WARNING: Removing unreachable block (ram,0x0001572ebac3) */
/* WARNING: Removing unreachable block (ram,0x000166dd6a23) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ca2e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2cab6) */
/* WARNING: Removing unreachable block (ram,0x00014dc2cabc) */
/* WARNING: Removing unreachable block (ram,0x0001572eb955) */
/* WARNING: Removing unreachable block (ram,0x000156ef2e25) */
/* WARNING: Removing unreachable block (ram,0x0001616d7fcc) */
/* WARNING: Removing unreachable block (ram,0x0001616d7fd7) */
/* WARNING: Removing unreachable block (ram,0x0001616d7fd2) */

undefined8 FUN_14dc2c890(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_15665a47c(param_1);
  uVar1 = 0x26f3f940;
  FUN_15b3d031f();
  uVar1 = FUN_162aaee96(uVar1);
  return uVar1;
}



// FUNCTION 14dc2cbe8 FUN_14dc2cbe8 body=162 status=ok
// SIG undefined FUN_14dc2cbe8(void)

void FUN_14dc2cbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1623990ed(FUN_1623990ed,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc2cc8b FUN_14dc2cc8b body=140 status=ok
// SIG undefined FUN_14dc2cc8b(void)

void FUN_14dc2cc8b(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_157527b1e(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                *(ulonglong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dc2ce3b FUN_14dc2ce3b body=175 status=ok
// SIG undefined FUN_14dc2ce3b(void)

void FUN_14dc2ce3b(void)

{
  FUN_1664e940c();
  return;
}



// FUNCTION 14dc2ceeb FUN_14dc2ceeb body=77 status=ok
// SIG undefined FUN_14dc2ceeb(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2cf09) */

void FUN_14dc2ceeb(void)

{
  return;
}



// FUNCTION 14dc2cf8c FUN_14dc2cf8c body=133 status=ok
// SIG undefined FUN_14dc2cf8c(void)

void FUN_14dc2cf8c(longlong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  undefined8 local_res10;
  
  FUN_14dfe90e6(local_res10,param_2,~in_RAX | *(ulonglong *)(unaff_R12 + param_1));
  return;
}



// FUNCTION 14dc2d125 FUN_14dc2d125 body=9 status=ok
// SIG undefined FUN_14dc2d125(void)

void FUN_14dc2d125(void)

{
  undefined8 in_RAX;
  undefined8 *unaff_RBP;
  
  *unaff_RBP = in_RAX;
  thunk_FUN_164846ef8();
  return;
}



// FUNCTION 14dc2d17e FUN_14dc2d17e body=160 status=ok
// SIG undefined FUN_14dc2d17e(void)

undefined8 FUN_14dc2d17e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc2d221 FUN_14dc2d221 body=158 status=ok
// SIG undefined FUN_14dc2d221(void)

ulonglong FUN_14dc2d221(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  return ~(*(ulonglong *)(unaff_R13 + -0x38) & unaff_R15) &
         ~(~*(ulonglong *)(unaff_R13 + -0x38) & ~unaff_R15);
}



// FUNCTION 14dc2d2dd FUN_14dc2d2dd body=481 status=ok
// SIG undefined FUN_14dc2d2dd(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2d36f) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d375) */

void FUN_14dc2d2dd(void)

{
  return;
}



// FUNCTION 14dc2d41e FUN_14dc2d41e body=315 status=ok
// SIG undefined FUN_14dc2d41e(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2d5f5) */

undefined8 FUN_14dc2d41e(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  FUN_164b69a0c(param_1,*(undefined8 *)(unaff_RDI + -0x70),FUN_164b69a0c,
                *(ulonglong *)(unaff_RDI + -0x60) ^ param_1);
  FUN_1626a2755();
  if (-1 < (longlong)
           ((~(~DAT_1626a26ed | ~param_1) ^ 0xffffffffffffffff) & (DAT_1626a26ed | param_1))) {
    uVar1 = FUN_157878be2();
    return uVar1;
  }
  uVar1 = FUN_157878be2();
  return uVar1;
}



// FUNCTION 14dc2d55a FUN_14dc2d55a body=154 status=ok
// SIG undefined FUN_14dc2d55a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2d5f5) */

undefined8 FUN_14dc2d55a(ulonglong param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < (longlong)
           ((~(~*(ulonglong *)(unaff_RDI + -0x68) | ~param_1) ^ 0xffffffffffffffff) &
           (*(ulonglong *)(unaff_RDI + -0x68) | param_1))) {
    uVar1 = FUN_157878be2();
    return uVar1;
  }
  uVar1 = FUN_157878be2();
  return uVar1;
}



// FUNCTION 14dc2d5f5 FUN_14dc2d5f5 body=10 status=ok
// SIG undefined FUN_14dc2d5f5(void)

void FUN_14dc2d5f5(void)

{
  return;
}



// FUNCTION 14dc2d862 FUN_14dc2d862 body=278 status=ok
// SIG undefined FUN_14dc2d862(void)

/* WARNING: Removing unreachable block (ram,0x000156376c8d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2d8f7) */

void FUN_14dc2d862(longlong param_1,byte param_2,longlong param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  
  pcVar1 = (char *)(param_1 + 1 + param_3);
  *pcVar1 = *pcVar1 + ',';
  cVar4 = *(char *)(param_1 + 1 + param_3);
  pbVar2 = (byte *)(param_1 + 1 + param_3);
  *pbVar2 = *pbVar2 & param_2;
  pcVar1 = (char *)(param_1 + 1 + param_3);
  *pcVar1 = *pcVar1 << 1;
  *(byte *)(param_1 + 1 + param_3) = (cVar4 + param_2) - *(char *)(param_1 + 1 + param_3);
  *(undefined1 *)(param_1 + 2 + param_3) = 0x21;
  pcVar1 = (char *)(param_1 + 2 + param_3);
  *pcVar1 = *pcVar1 + -0x21;
  if (*pcVar1 == '\0') {
    puVar3 = (undefined1 *)(param_1 + 2 + param_3);
    *puVar3 = *puVar3;
    (*(code *)0x1663cdf68)();
    return;
  }
  FUN_156376c43();
  return;
}



// FUNCTION 14dc2dada FUN_14dc2dada body=143 status=ok
// SIG undefined FUN_14dc2dada(void)

void FUN_14dc2dada(ushort *param_1,undefined8 param_2,undefined8 param_3,short param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  short in_AX;
  undefined8 unaff_RBX;
  undefined8 in_R11;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  *param_1 = -~*param_1 - (~(in_AX + param_4) + 2U);
  *(undefined8 *)(param_7 + -8) = unaff_RBX;
  *(undefined8 *)(param_7 + -0x10) = in_R11;
  (*(code *)&LAB_164c06e81)(local_res20,param_2,local_res8,uStackX_10);
  return;
}



// FUNCTION 14dc2dbf8 FUN_14dc2dbf8 body=377 status=ok
// SIG undefined FUN_14dc2dbf8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2dcb1) */
/* WARNING: Removing unreachable block (ram,0x00014dc2dd08) */
/* WARNING: Removing unreachable block (ram,0x00014dc2dd3d) */
/* WARNING: Removing unreachable block (ram,0x000161c4d4c5) */
/* WARNING: Removing unreachable block (ram,0x00014dc2dd43) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2dbf8(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = *(ulonglong *)(unaff_R12 + -0x78) & in_RAX;
  if (-1 < (longlong)(uVar1 * 2)) {
    FUN_164c28c41(*(ulonglong *)(unaff_R12 + -0x58) ^ in_RAX,
                  *(ulonglong *)(unaff_R12 + -0x78) + in_RAX + uVar1 * -2,
                  *(ulonglong *)(unaff_R12 + -0x80) + in_RAX +
                  (*(ulonglong *)(unaff_R12 + -0x80) & in_RAX) * -2);
    return;
  }
  FUN_161dc1e32();
  return;
}



// FUNCTION 14dc2dde9 FUN_14dc2dde9 body=139 status=ok
// SIG undefined FUN_14dc2dde9(void)

void FUN_14dc2dde9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  (*(code *)0x1618be541)
            (*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,*(undefined8 *)(unaff_R13 + -0x28),
             param_3);
  return;
}



// FUNCTION 14dc2df34 FUN_14dc2df34 body=290 status=ok
// SIG undefined FUN_14dc2df34(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2dfbb) */
/* WARNING: Removing unreachable block (ram,0x00014dc2dfc1) */
/* WARNING: Removing unreachable block (ram,0x000162ea65d5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2df34(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uStackX_18;
  
  (*(code *)0x14e127a52)
            (param_1,param_2,(-uStackX_18 - in_RAX) + (uStackX_18 | in_RAX) * 2,0x14e127a52);
  return;
}



// FUNCTION 14dc2e05a FUN_14dc2e05a body=167 status=ok
// SIG undefined FUN_14dc2e05a(void)

void FUN_14dc2e05a(void)

{
  FUN_161485e04();
  return;
}



// FUNCTION 14dc2e39b FUN_14dc2e39b body=311 status=ok
// SIG undefined FUN_14dc2e39b(void)

/* WARNING: Removing unreachable block (ram,0x00014e0baa69) */
/* WARNING: Removing unreachable block (ram,0x00014dc2e423) */
/* WARNING: Removing unreachable block (ram,0x00014dc2e429) */
/* WARNING: Removing unreachable block (ram,0x00014dc2e433) */
/* WARNING: Removing unreachable block (ram,0x00014e0bab09) */
/* WARNING: Removing unreachable block (ram,0x00014e0bab0f) */
/* WARNING: Removing unreachable block (ram,0x000161b927ad) */

void FUN_14dc2e39b(void)

{
  FUN_14e0baa69();
  return;
}



// FUNCTION 14dc2e4d6 FUN_14dc2e4d6 body=150 status=ok
// SIG undefined FUN_14dc2e4d6(void)

void FUN_14dc2e4d6(void)

{
  longlong unaff_RDI;
  
  (*(code *)&LAB_161d12c25)(*(undefined8 *)(unaff_RDI + -0x98));
  return;
}



// FUNCTION 14dc2e606 FUN_14dc2e606 body=156 status=ok
// SIG undefined FUN_14dc2e606(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc2e606(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  ulonglong unaff_RBX;
  longlong unaff_R13;
  undefined8 unaff_retaddr;
  undefined8 local_res10 [3];
  
  *(undefined8 *)((longlong)local_res10 + (unaff_RBX ^ 0x41197a23)) = in_RAX;
  local_res10[0] = *(undefined8 *)(unaff_R13 + -8);
  FUN_162c4a474(param_1,param_2,unaff_retaddr);
  return;
}



// FUNCTION 14dc2e7c9 FUN_14dc2e7c9 body=150 status=ok
// SIG undefined FUN_14dc2e7c9(void)

void FUN_14dc2e7c9(undefined8 param_1)

{
  FUN_1615b4b45(param_1,FUN_1615b4b45);
  return;
}



// FUNCTION 14dc2e8a7 FUN_14dc2e8a7 body=230 status=ok
// SIG undefined FUN_14dc2e8a7(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2e988) */
/* WARNING: Removing unreachable block (ram,0x00014dc2e98e) */
/* WARNING: Removing unreachable block (ram,0x00014dbebd70) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe19) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe1e) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe24) */
/* WARNING: Removing unreachable block (ram,0x00014dbebe29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14dc2e8a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI == 0x2b7b8) {
    FUN_1574c4b11(param_1,param_2,&DAT_155ae144);
    uVar1 = FUN_14dbebd70();
    return uVar1;
  }
  if (unaff_RSI == 0x2b7b9) {
    return in_RAX;
  }
  uVar1 = FUN_165d2a03c(param_1,param_2,param_3);
  return uVar1;
}



// FUNCTION 14dc2e98e FUN_14dc2e98e body=162 status=ok
// SIG undefined FUN_14dc2e98e(void)

undefined8 FUN_14dc2e98e(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc2ea32 FUN_14dc2ea32 body=57 status=ok
// SIG undefined FUN_14dc2ea32(void)

void FUN_14dc2ea32(void)

{
  return;
}



// FUNCTION 14dc2eb77 FUN_14dc2eb77 body=62 status=ok
// SIG undefined FUN_14dc2eb77(void)

void FUN_14dc2eb77(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_res8;
  undefined8 uStackX_10;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc2ebb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uStackX_10,param_3,local_res8);
  return;
}



// FUNCTION 14dc2ed60 FUN_14dc2ed60 body=335 status=ok
// SIG undefined FUN_14dc2ed60(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2ee08) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ee0e) */
/* WARNING: Removing unreachable block (ram,0x00015659b80e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ee5e) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ee62) */
/* WARNING: Removing unreachable block (ram,0x00015659b808) */
/* WARNING: Removing unreachable block (ram,0x00015659b839) */

undefined8 FUN_14dc2ed60(void)

{
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = FUN_15b0babda(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                        *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return uVar1;
}



// FUNCTION 14dc2eeb1 FUN_14dc2eeb1 body=693 status=ok
// SIG undefined FUN_14dc2eeb1(void)

/* WARNING: Removing unreachable block (ram,0x000157270678) */
/* WARNING: Removing unreachable block (ram,0x000166b62e25) */
/* WARNING: Removing unreachable block (ram,0x000166b62e2b) */
/* WARNING: Removing unreachable block (ram,0x00014dc2f013) */
/* WARNING: Removing unreachable block (ram,0x000157270662) */
/* WARNING: Removing unreachable block (ram,0x0001572705d1) */
/* WARNING: Removing unreachable block (ram,0x00015727066d) */
/* WARNING: Removing unreachable block (ram,0x00014dc2ef53) */
/* WARNING: Removing unreachable block (ram,0x0001628dec07) */
/* WARNING: Removing unreachable block (ram,0x00014dc2efe1) */
/* WARNING: Removing unreachable block (ram,0x00014dc2efed) */
/* WARNING: Removing unreachable block (ram,0x00014dc2f015) */
/* WARNING: Removing unreachable block (ram,0x00014dc2f0d0) */
/* WARNING: Removing unreachable block (ram,0x000157286ddd) */
/* WARNING: Removing unreachable block (ram,0x00014dc2f0d6) */

undefined8 FUN_14dc2eeb1(ulonglong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong unaff_RDI;
  
  uVar1 = *(ulonglong *)(unaff_RDI + -0x98);
  *(undefined8 *)((*(ulonglong *)(unaff_RDI + -0x90) ^ param_1) - 8) = 0x762f350;
  uVar2 = FUN_165c7153c(uVar1 ^ param_1);
  return uVar2;
}



// FUNCTION 14dc2f628 thunk_FUN_14dc2f62e body=5 status=ok
// SIG undefined thunk_FUN_14dc2f62e(void)

void thunk_FUN_14dc2f62e(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong *in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  
  *in_R11 = *(ulonglong *)(unaff_R13 + -0x70);
  uVar1 = *in_R11;
  in_R11[3] = 0x7dbd428d;
  in_R11[1] = param_1;
  *in_R11 = unaff_R12;
  uVar2 = in_R11[3];
  in_R11[3] = in_R11[3] | 0xffffffff8242bd72;
  in_R11[3] = ~(~(uVar2 & 0xffffffff8242bd72) & in_R11[3]);
  in_R11[3] = in_R11[3] - (~uVar1 + 1);
  in_R11[1] = in_R11[1];
  uVar1 = in_R11[1];
  in_R11[2] = unaff_RDI;
  in_R11[1] = unaff_RDI;
  *in_R11 = uVar1;
  in_R11[-1] = (ulonglong)&DAT_161e16b6d;
  return;
}



// FUNCTION 14dc2f62e FUN_14dc2f62e body=156 status=ok
// SIG undefined FUN_14dc2f62e(void)

void FUN_14dc2f62e(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong *in_R11;
  ulonglong unaff_R12;
  longlong unaff_R13;
  
  *in_R11 = *(ulonglong *)(unaff_R13 + -0x70);
  uVar1 = *in_R11;
  in_R11[3] = 0x7dbd428d;
  in_R11[1] = param_1;
  *in_R11 = unaff_R12;
  uVar2 = in_R11[3];
  in_R11[3] = in_R11[3] | 0xffffffff8242bd72;
  in_R11[3] = ~(~(uVar2 & 0xffffffff8242bd72) & in_R11[3]);
  in_R11[3] = in_R11[3] - (~uVar1 + 1);
  in_R11[1] = in_R11[1];
  uVar1 = in_R11[1];
  in_R11[2] = unaff_RDI;
  in_R11[1] = unaff_RDI;
  *in_R11 = uVar1;
  in_R11[-1] = (ulonglong)&DAT_161e16b6d;
  return;
}



// FUNCTION 14dc2f8a0 FUN_14dc2f8a0 body=138 status=ok
// SIG undefined FUN_14dc2f8a0(void)

void FUN_14dc2f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *in_RAX;
  undefined8 local_res10;
  undefined8 local_res20;
  
  FUN_156a31a34(local_res20,*(undefined8 *)(*(longlong *)*in_RAX + 0x5f),param_3,local_res10);
  return;
}



// FUNCTION 14dc2f92c FUN_14dc2f92c body=211 status=ok
// SIG undefined FUN_14dc2f92c(void)

void FUN_14dc2f92c(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  short unaff_BX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar2;
  short *psVar3;
  longlong local_res10;
  
  uVar2 = 0xffffffffffffffff - *(longlong *)(unaff_RDI + -0xa0);
  psVar3 = (short *)((~param_1 - (uVar2 | ~param_1)) + uVar2);
  UNRECOVERED_JUMPTABLE = (code *)FUN_156a87553(param_1,param_2);
  *psVar3 = unaff_BX + 1;
  puVar1 = (undefined8 *)(local_res10 + -8);
  *puVar1 = unaff_RBP;
  *(undefined8 *)(local_res10 + -0x10) = *puVar1;
  *puVar1 = &LAB_14dc2fa19;
                    /* WARNING: Could not recover jumptable at 0x00014dc2f9ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc2fb89 FUN_14dc2fb89 body=31 status=ok
// SIG undefined FUN_14dc2fb89(void)

void FUN_14dc2fb89(void)

{
  return;
}



// FUNCTION 14dc2fba8 FUN_14dc2fba8 body=96 status=ok
// SIG undefined FUN_14dc2fba8(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2fd36) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fd30) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fd3b) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fddc) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fde2) */
/* WARNING: Removing unreachable block (ram,0x0001628ea32c) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3d6) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3db) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3e1) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3e6) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fdd7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fc94) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fc9a) */
/* WARNING: Removing unreachable block (ram,0x000165277998) */
/* WARNING: Removing unreachable block (ram,0x000161c8896f) */
/* WARNING: Removing unreachable block (ram,0x00014dd23e79) */
/* WARNING: Removing unreachable block (ram,0x000161c8878f) */
/* WARNING: Removing unreachable block (ram,0x000161c8880d) */
/* WARNING: Removing unreachable block (ram,0x000161c88938) */
/* WARNING: Removing unreachable block (ram,0x000161c8893d) */
/* WARNING: Removing unreachable block (ram,0x00014dd23e0a) */
/* WARNING: Removing unreachable block (ram,0x00014dd23e6d) */
/* WARNING: Removing unreachable block (ram,0x000161083df9) */
/* WARNING: Removing unreachable block (ram,0x000161c88943) */
/* WARNING: Removing unreachable block (ram,0x000161c88808) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fc09) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14dc2fba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  longlong unaff_retaddr;
  
  if (unaff_retaddr < 0) {
    FUN_161c88706(param_1,param_2,param_3);
    uVar1 = FUN_14de862b0(unaff_RBP);
    return uVar1;
  }
  if (unaff_retaddr != 0) {
    uVar1 = FUN_164846ef8();
    return uVar1;
  }
  uVar1 = FUN_166288aab();
  return uVar1;
}



// FUNCTION 14dc2fc09 FUN_14dc2fc09 body=622 status=ok
// SIG undefined FUN_14dc2fc09(void)

/* WARNING: Removing unreachable block (ram,0x00014dc2fd30) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fd3b) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fdd7) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fddc) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fde2) */
/* WARNING: Removing unreachable block (ram,0x0001628ea32c) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3d6) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3db) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3e1) */
/* WARNING: Removing unreachable block (ram,0x0001628ea3e6) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fc94) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fc9a) */
/* WARNING: Removing unreachable block (ram,0x000165277998) */
/* WARNING: Removing unreachable block (ram,0x00014dc2fd36) */

void FUN_14dc2fc09(void)

{
  longlong lVar1;
  ulonglong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar2 = *(ulonglong *)(unaff_R13 + -0x78);
  *unaff_RSI = (~(~unaff_R15 & uVar2) + uVar2) - unaff_R15 & (~uVar2 | unaff_R15) ^
               0xffffffffffffffff;
  lVar1 = *(longlong *)(unaff_R13 + -0x30);
  *unaff_RSI = 0x67b87d5f;
  *unaff_RSI = *unaff_RSI ^ 0x67b87d5f;
  *unaff_RSI = *unaff_RSI + lVar1;
  uVar2 = *unaff_RSI;
  *unaff_RSI = unaff_R15;
  uVar3 = ~*unaff_RSI | uVar2;
  uVar2 = ~uVar2 | unaff_R15;
  *unaff_RSI = uVar2;
  uVar2 = ((~(~uVar2 & uVar3) + uVar3) - uVar2) + *unaff_RSI + 1;
  *unaff_RSI = uVar2;
  unaff_RSI[-1] = uVar2;
  unaff_RSI[-2] = uVar2;
  *unaff_RSI = (ulonglong)FUN_156f31ca9;
  unaff_RSI[-1] = (ulonglong)&DAT_166829376;
  return;
}



// FUNCTION 14dc2fde2 FUN_14dc2fde2 body=7 status=ok
// SIG undefined FUN_14dc2fde2(void)

void FUN_14dc2fde2(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc3010a FUN_14dc3010a body=150 status=ok
// SIG undefined FUN_14dc3010a(void)

void FUN_14dc3010a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166af2400(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc3022a FUN_14dc3022a body=286 status=ok
// SIG undefined FUN_14dc3022a(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3033d) */
/* WARNING: Removing unreachable block (ram,0x00014dc30348) */
/* WARNING: Removing unreachable block (ram,0x00014dc302b9) */
/* WARNING: Removing unreachable block (ram,0x00014dc302bf) */
/* WARNING: Removing unreachable block (ram,0x000156a82302) */
/* WARNING: Removing unreachable block (ram,0x00014dc30343) */

void FUN_14dc3022a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,short param_6)

{
  ushort uVar1;
  longlong in_RAX;
  undefined8 unaff_RBX;
  short unaff_R15W;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(param_4 + in_RAX) = unaff_RBX;
  uVar1 = unaff_R15W + param_6 * -2;
  param_5 = param_1;
  FUN_160d808c4(-(((~uVar1 | 0x100) - 0x101) - ~uVar1),param_2,param_3,in_stack_00000010);
  return;
}



// FUNCTION 14dc30348 FUN_14dc30348 body=154 status=ok
// SIG undefined FUN_14dc30348(void)

void FUN_14dc30348(void)

{
  FUN_1615c3d53(FUN_1615c3d53);
  return;
}



// FUNCTION 14dc303e4 thunk_FUN_14dc303f0 body=5 status=ok
// SIG undefined thunk_FUN_14dc303f0(void)

void thunk_FUN_14dc303f0(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16177e6f0(param_1 ^ unaff_RBP,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14dc303ea thunk_FUN_14dc303f0 body=5 status=ok
// SIG undefined thunk_FUN_14dc303f0(void)

void thunk_FUN_14dc303f0(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16177e6f0(param_1 ^ unaff_RBP,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14dc303f0 FUN_14dc303f0 body=122 status=ok
// SIG undefined FUN_14dc303f0(void)

void FUN_14dc303f0(ulonglong param_1)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  FUN_16177e6f0(param_1 ^ unaff_RBP,*(ulonglong *)(unaff_RSI + -0x58) ^ unaff_RBP);
  return;
}



// FUNCTION 14dc3050d FUN_14dc3050d body=299 status=ok
// SIG undefined FUN_14dc3050d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc30529) */

void FUN_14dc3050d(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  lVar1 = ~((unaff_R15 ^ 0xffffffffffffffff) & *(ulonglong *)(unaff_R13 + -0x90)) +
          *(ulonglong *)(unaff_R13 + -0x90);
  FUN_165c443cc(param_1,param_2,lVar1,lVar1);
  return;
}



// FUNCTION 14dc305a9 FUN_14dc305a9 body=128 status=ok
// SIG undefined FUN_14dc305a9(void)

void FUN_14dc305a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool in_CF;
  
  if (!in_CF) {
    thunk_FUN_166485e23();
    return;
  }
  FUN_16546e0e8(FUN_16546e0e8,param_2,param_3);
  return;
}



// FUNCTION 14dc306b6 FUN_14dc306b6 body=238 status=ok
// SIG undefined FUN_14dc306b6(void)

void FUN_14dc306b6(void)

{
  undefined8 unaff_RSI;
  longlong local_res8;
  
  *(undefined8 *)(&stack0x62fba2bc + local_res8) = unaff_RSI;
  FUN_14dad61f6();
  return;
}



// FUNCTION 14dc30a46 FUN_14dc30a46 body=179 status=ok
// SIG undefined FUN_14dc30a46(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc30a46(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong unaff_R15;
  ulonglong local_res8;
  undefined8 in_stack_00000010;
  longlong local_res18 [2];
  
  *(undefined8 *)((longlong)local_res18 + (local_res8 ^ 0x7d73726b)) = 0;
  plVar1 = (longlong *)((longlong)local_res18 + (local_res8 ^ 0x7d73726b));
  *plVar1 = *plVar1 + unaff_R15;
  local_res18[0] = param_3;
  (*(code *)&LAB_15af2dd7c)(in_stack_00000010,param_2,param_3);
  return;
}



// FUNCTION 14dc30aff FUN_14dc30aff body=31 status=ok
// SIG undefined FUN_14dc30aff(void)

void FUN_14dc30aff(void)

{
  thunk_FUN_15b642ca5();
  return;
}



// FUNCTION 14dc30ca6 FUN_14dc30ca6 body=57 status=ok
// SIG undefined FUN_14dc30ca6(void)

void FUN_14dc30ca6(void)

{
  return;
}



// FUNCTION 14dc30d5d FUN_14dc30d5d body=700 status=ok
// SIG undefined FUN_14dc30d5d(void)

/* WARNING: Removing unreachable block (ram,0x00014dc30e7a) */
/* WARNING: Removing unreachable block (ram,0x00014dc30e80) */
/* WARNING: Removing unreachable block (ram,0x0001566fc76e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc30d5d(void)

{
  FUN_166d0d66a();
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  FUN_1566fc76e();
  return;
}



// FUNCTION 14dc30fb6 FUN_14dc30fb6 body=129 status=ok
// SIG undefined FUN_14dc30fb6(void)

void FUN_14dc30fb6(ulonglong param_1)

{
  longlong unaff_RDI;
  
  FUN_14e1e1a3c(param_1,(*(ulonglong *)(unaff_RDI + -0x68) - param_1) +
                        (~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) * -2 + -2);
  return;
}



// FUNCTION 14dc31039 FUN_14dc31039 body=38 status=ok
// SIG undefined FUN_14dc31039(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014dc3105d) overlaps instruction at (ram,0x00014dc3105a)
    */
/* WARNING: Removing unreachable block (ram,0xd90c9a29) */

void FUN_14dc31039(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong in_RAX;
  ulonglong unaff_RBP;
  
  (*(code *)0x1667e4ef1)
            (param_1,in_RAX + param_2 + unaff_RBP + (in_RAX + param_2 & unaff_RBP) * -2,param_3,
             0x1667e4ef1);
  return;
}



// FUNCTION 14dc31180 FUN_14dc31180 body=348 status=ok
// SIG undefined FUN_14dc31180(void)

void FUN_14dc31180(void)

{
  (*(code *)0x156644e49)(0x156644e49);
  return;
}



// FUNCTION 14dc312f2 FUN_14dc312f2 body=286 status=ok
// SIG undefined FUN_14dc312f2(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3137b) */

void FUN_14dc312f2(void)

{
  undefined8 in_R9;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = in_R9;
  local_8 = in_R9;
  if (-1 < (longlong)&local_10) {
    FUN_1622f41bd();
    return;
  }
  FUN_1622f41bd();
  return;
}



// FUNCTION 14dc3153f FUN_14dc3153f body=373 status=ok
// SIG undefined FUN_14dc3153f(void)

/* WARNING: Removing unreachable block (ram,0x000156f440b5) */
/* WARNING: Removing unreachable block (ram,0x00014dc315d1) */

void FUN_14dc3153f(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_161605dfa(*(ulonglong *)(unaff_R13 + -0x78) + unaff_R15 +
                (*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) * -2,
                *(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  return;
}



// FUNCTION 14dc31672 FUN_14dc31672 body=294 status=ok
// SIG undefined FUN_14dc31672(void)

/* WARNING: Removing unreachable block (ram,0x00014dc316dc) */
/* WARNING: Removing unreachable block (ram,0x00014dc316e7) */
/* WARNING: Removing unreachable block (ram,0x00014dc316e2) */

void FUN_14dc31672(undefined8 param_1,undefined8 param_2)

{
  FUN_162425b86(param_1,param_2);
  return;
}



// FUNCTION 14dc318d7 FUN_14dc318d7 body=146 status=ok
// SIG undefined FUN_14dc318d7(void)

void FUN_14dc318d7(void)

{
  FUN_14da841b7(FUN_14da841b7);
  return;
}



// FUNCTION 14dc319fb FUN_14dc319fb body=329 status=ok
// SIG undefined FUN_14dc319fb(void)

void FUN_14dc319fb(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 in_R11;
  undefined8 unaff_R13;
  longlong unaff_R15;
  undefined8 local_res8;
  undefined8 uStackX_10;
  undefined8 local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 0x10) = unaff_R13;
  *(undefined8 *)(param_1 - 8) = in_RAX;
  uVar2 = *(undefined8 *)(param_1 - 0x10);
  *(undefined8 *)(param_1 - 0x10) = in_R10;
  *(undefined8 *)(param_1 - 0x18) = in_R10;
  *(undefined8 *)(param_1 - 0x20) = in_R11;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = 0x14dc31ab9;
  FUN_162b5bd39(uStackX_10,param_2,param_3,local_res8);
  *(undefined8 *)(param_1 - 0x20) = unaff_RBP;
  *(undefined8 *)(param_1 - 0x28) = uVar2;
  puVar1 = (ushort *)(param_1 + unaff_R15 + -0x9a9de04);
  *(undefined8 *)(param_1 - 0x18) = *(undefined8 *)(param_1 - 0x28);
  *(undefined8 *)(param_1 - 0x20) = unaff_RSI;
  *puVar1 = (*puVar1 | 0x100) - 0x100;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + -8) = unaff_RDI;
  FUN_162cd4a17();
  return;
}



// FUNCTION 14dc31caa FUN_14dc31caa body=297 status=ok
// SIG undefined FUN_14dc31caa(void)

/* WARNING: Removing unreachable block (ram,0x00014dc31d33) */
/* WARNING: Removing unreachable block (ram,0x00014dc31d39) */
/* WARNING: Removing unreachable block (ram,0x0001664f46bd) */

void FUN_14dc31caa(longlong param_1)

{
  ulonglong unaff_RBX;
  
  (*(code *)0x165765eff)
            (param_1,*(undefined8 *)(param_1 + -0x78),
             ~((~unaff_RBX | *(ulonglong *)(param_1 + -0x88)) &
              (*(ulonglong *)(param_1 + -0x88) ^ 0xffffffffffffffff | unaff_RBX)),
             -1 - ((~unaff_RBX | *(ulonglong *)(param_1 + -0x58)) &
                  (~*(ulonglong *)(param_1 + -0x58) | unaff_RBX)));
  return;
}



// FUNCTION 14dc31d39 FUN_14dc31d39 body=9 status=ok
// SIG undefined FUN_14dc31d39(void)

void FUN_14dc31d39(void)

{
  return;
}



// FUNCTION 14dc31dc0 FUN_14dc31dc0 body=3 status=ok
// SIG undefined FUN_14dc31dc0(void)

void FUN_14dc31dc0(void)

{
  return;
}



// FUNCTION 14dc31e48 FUN_14dc31e48 body=3 status=ok
// SIG undefined FUN_14dc31e48(void)

undefined8 FUN_14dc31e48(void)

{
  undefined8 uStackX_8;
  
  return uStackX_8;
}



// FUNCTION 14dc31f7b FUN_14dc31f7b body=149 status=ok
// SIG undefined FUN_14dc31f7b(void)

void FUN_14dc31f7b(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1610397e7(*(ulonglong *)(unaff_R13 + -0x78) ^ unaff_R15,
                0xffffffffffffffff - (*(ulonglong *)(unaff_R13 + -0x28) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x28) | unaff_R15));
  return;
}



// FUNCTION 14dc3217a FUN_14dc3217a body=142 status=ok
// SIG undefined FUN_14dc3217a(void)

void FUN_14dc3217a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_157656e2b(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc3228b FUN_14dc3228b body=174 status=ok
// SIG undefined FUN_14dc3228b(void)

void FUN_14dc3228b(void)

{
  return;
}



// FUNCTION 14dc3233b FUN_14dc3233b body=189 status=ok
// SIG undefined FUN_14dc3233b(void)

/* WARNING: Removing unreachable block (ram,0x000161a7edc1) */
/* WARNING: Removing unreachable block (ram,0x00014dc323d7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc3233b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ulonglong unaff_RBP;
  ulonglong uStackX_10;
  ulonglong in_stack_00000018;
  
  uVar1 = (ushort)unaff_RBP;
  if (!CARRY8(~unaff_RBP | uStackX_10,unaff_RBP)) {
    FUN_1625cebf3();
    return;
  }
  uStackX_10._0_2_ =
       ~((short)(~unaff_RBP | uStackX_10) + uVar1 + 1) &
       ((ushort)uStackX_10 + uVar1) - ((ushort)uStackX_10 & uVar1);
  thunk_FUN_14d8b294f(param_1,param_2,param_3,(ushort)uStackX_10 & 0xfeff,
                      in_stack_00000018 ^ unaff_RBP);
  return;
}



// FUNCTION 14dc325bc FUN_14dc325bc body=175 status=ok
// SIG undefined FUN_14dc325bc(void)

/* WARNING: Removing unreachable block (ram,0x00016290e5ac) */
/* WARNING: Removing unreachable block (ram,0x00016290e5b2) */
/* WARNING: Removing unreachable block (ram,0x000166d32f46) */
/* WARNING: Removing unreachable block (ram,0x000166d32f4c) */
/* WARNING: Removing unreachable block (ram,0x000166d32fca) */
/* WARNING: Removing unreachable block (ram,0x000166d32fd0) */
/* WARNING: Removing unreachable block (ram,0x0001665c5656) */
/* WARNING: Removing unreachable block (ram,0x00016290e503) */
/* WARNING: Removing unreachable block (ram,0x00016290e578) */
/* WARNING: Removing unreachable block (ram,0x00016290e573) */
/* WARNING: Removing unreachable block (ram,0x00016290e57e) */
/* WARNING: Removing unreachable block (ram,0x0001660d7667) */
/* WARNING: Removing unreachable block (ram,0x000165f67b1f) */
/* WARNING: Removing unreachable block (ram,0x000165f67b25) */
/* WARNING: Removing unreachable block (ram,0x00016290e4f8) */
/* WARNING: Removing unreachable block (ram,0x00016290e4fe) */
/* WARNING: Removing unreachable block (ram,0x000165f67b2a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc325bc(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  uVar1 = ~(0xffffffffffffffffU - param_1 & *(ulonglong *)(unaff_RDI + -0x48)) +
          *(ulonglong *)(unaff_RDI + -0x48);
  uVar2 = ~(0xffffffffffffffffU - param_1);
  if (uVar2 <= uVar1) {
    FUN_16290e47c();
    return;
  }
  if (uVar1 <= uVar2) {
    return;
  }
  return;
}



// FUNCTION 14dc326e5 FUN_14dc326e5 body=25 status=ok
// SIG undefined FUN_14dc326e5(void)

void FUN_14dc326e5(void)

{
  return;
}



// FUNCTION 14dc327ac FUN_14dc327ac body=165 status=ok
// SIG undefined FUN_14dc327ac(void)

void FUN_14dc327ac(ulonglong param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  FUN_15b7c6cc3((char)param_1,param_2,~(*(ulonglong *)(unaff_RDI + -0x40) | param_1),FUN_15b7c6cc3);
  return;
}



// FUNCTION 14dc32851 FUN_14dc32851 body=19 status=ok
// SIG undefined FUN_14dc32851(void)

void FUN_14dc32851(undefined8 param_1,undefined1 param_2)

{
  undefined1 *unaff_R12;
  
  *unaff_R12 = param_2;
  thunk_FUN_160e7b2c5();
  return;
}



// FUNCTION 14dc328c7 FUN_14dc328c7 body=317 status=ok
// SIG undefined FUN_14dc328c7(void)

void FUN_14dc328c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  ulonglong in_stack_00000018;
  
  FUN_14dbb59f5(param_1,in_stack_00000008,param_3,unaff_retaddr,~in_stack_00000018 | unaff_R15);
  FUN_166ded3a9();
  return;
}



// FUNCTION 14dc32a05 FUN_14dc32a05 body=103 status=ok
// SIG undefined FUN_14dc32a05(void)

void FUN_14dc32a05(void)

{
  return;
}



// FUNCTION 14dc32aa7 FUN_14dc32aa7 body=137 status=ok
// SIG undefined FUN_14dc32aa7(void)

void FUN_14dc32aa7(void)

{
  (*(code *)&LAB_16214a622)(0xa9);
  return;
}



// FUNCTION 14dc32b31 FUN_14dc32b31 body=144 status=ok
// SIG undefined FUN_14dc32b31(void)

void FUN_14dc32b31(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_R10;
  longlong in_R11;
  ulonglong unaff_R12;
  longlong unaff_R14;
  
  FUN_165325675((~(~in_R10 & ~unaff_R12) + ~unaff_R12) - in_R10,FUN_165325675,
                param_3 + (unaff_R14 + in_R11) * -2);
  return;
}



// FUNCTION 14dc32d9f FUN_14dc32d9f body=113 status=ok
// SIG undefined FUN_14dc32d9f(void)

void FUN_14dc32d9f(void)

{
  return;
}



// FUNCTION 14dc32e31 FUN_14dc32e31 body=310 status=ok
// SIG undefined FUN_14dc32e31(void)

/* WARNING: Removing unreachable block (ram,0x00014dc32ebb) */
/* WARNING: Removing unreachable block (ram,0x00014dc32ec1) */
/* WARNING: Removing unreachable block (ram,0x00014dc32ec6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc32e31(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x1572bceb0)(param_1,param_2,0x1572bceb0);
  return;
}



// FUNCTION 14dc32f6a FUN_14dc32f6a body=467 status=ok
// SIG undefined FUN_14dc32f6a(void)

void FUN_14dc32f6a(void)

{
  ulonglong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_166497e38(in_RAX ^ unaff_R15,*(ulonglong *)(unaff_R13 + -0x28) ^ unaff_R15);
  (*(code *)0x165f40e62)();
  return;
}



// FUNCTION 14dc330ac FUN_14dc330ac body=159 status=ok
// SIG undefined FUN_14dc330ac(void)

void FUN_14dc330ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14e04a46b(FUN_14e04a46b,param_2,param_3);
  return;
}



// FUNCTION 14dc331db FUN_14dc331db body=302 status=ok
// SIG undefined FUN_14dc331db(void)

/* WARNING: Removing unreachable block (ram,0x00014dc33264) */
/* WARNING: Removing unreachable block (ram,0x00014dc3326f) */
/* WARNING: Removing unreachable block (ram,0x00014dc3326a) */

void FUN_14dc331db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong unaff_RBP;
  
  *(undefined8 *)((param_5 ^ unaff_RBP) - 8) = 0x14362c;
  FUN_15b3d5987(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc333c6 FUN_14dc333c6 body=40 status=ok
// SIG undefined FUN_14dc333c6(void)

undefined8 FUN_14dc333c6(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14dc334fa FUN_14dc334fa body=179 status=ok
// SIG undefined FUN_14dc334fa(void)

/* WARNING: Removing unreachable block (ram,0x00014dc335af) */

void FUN_14dc334fa(void)

{
  longlong unaff_R13;
  
  if (*(longlong *)(unaff_R13 + -0x98) != 0) {
    FUN_1650e9c92();
    return;
  }
  FUN_1650e9c92();
  return;
}



// FUNCTION 14dc335af FUN_14dc335af body=165 status=ok
// SIG undefined FUN_14dc335af(void)

void FUN_14dc335af(void)

{
  longlong unaff_R12;
  
  FUN_15ba2d386();
  *(code **)(&stack0x6bc6b09e + unaff_R12) = FUN_15ba2d386;
  return;
}



// FUNCTION 14dc338a1 FUN_14dc338a1 body=142 status=ok
// SIG undefined FUN_14dc338a1(void)

void FUN_14dc338a1(void)

{
  return;
}



// FUNCTION 14dc33930 FUN_14dc33930 body=321 status=ok
// SIG undefined FUN_14dc33930(void)

/* WARNING: Removing unreachable block (ram,0x00014dc33a21) */

longlong FUN_14dc33930(longlong param_1)

{
  FUN_156c49e43();
  return param_1 + -0x28;
}



// FUNCTION 14dc33a72 FUN_14dc33a72 body=114 status=ok
// SIG undefined FUN_14dc33a72(void)

void FUN_14dc33a72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1617e1331(FUN_1617e1331,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc33ae9 FUN_14dc33ae9 body=37 status=ok
// SIG undefined FUN_14dc33ae9(void)

void FUN_14dc33ae9(void)

{
  return;
}



// FUNCTION 14dc33b6a FUN_14dc33b6a body=154 status=ok
// SIG undefined FUN_14dc33b6a(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_14dc33b6a(void)

{
  return &LAB_1669097f3;
}



// FUNCTION 14dc33d29 FUN_14dc33d29 body=511 status=ok
// SIG undefined FUN_14dc33d29(void)

/* WARNING: Removing unreachable block (ram,0x0001629571a2) */
/* WARNING: Removing unreachable block (ram,0x0001629571a8) */
/* WARNING: Removing unreachable block (ram,0x000156d8d6b7) */
/* WARNING: Removing unreachable block (ram,0x000156d8d6bd) */
/* WARNING: Removing unreachable block (ram,0x000156d8d6ef) */
/* WARNING: Removing unreachable block (ram,0x000156d8d6fc) */
/* WARNING: Removing unreachable block (ram,0x000156d8d75a) */
/* WARNING: Removing unreachable block (ram,0x000156d8d776) */
/* WARNING: Removing unreachable block (ram,0x000156d8d76b) */
/* WARNING: Removing unreachable block (ram,0x000156d8d754) */
/* WARNING: Removing unreachable block (ram,0x00014dc5605b) */
/* WARNING: Removing unreachable block (ram,0x00014dc33dbc) */
/* WARNING: Removing unreachable block (ram,0x00014dc33dc2) */
/* WARNING: Removing unreachable block (ram,0x000162956e70) */
/* WARNING: Removing unreachable block (ram,0x000162956ea9) */
/* WARNING: Removing unreachable block (ram,0x00016295705b) */
/* WARNING: Removing unreachable block (ram,0x000162957060) */
/* WARNING: Removing unreachable block (ram,0x00015af8cadc) */
/* WARNING: Removing unreachable block (ram,0x000162956e8d) */
/* WARNING: Removing unreachable block (ram,0x000162957066) */
/* WARNING: Removing unreachable block (ram,0x00016295708f) */
/* WARNING: Removing unreachable block (ram,0x000156d8d61c) */
/* WARNING: Removing unreachable block (ram,0x000156d8d6a0) */
/* WARNING: Removing unreachable block (ram,0x0001623a26a4) */
/* WARNING: Removing unreachable block (ram,0x0001623a271e) */
/* WARNING: Removing unreachable block (ram,0x0001623a2724) */
/* WARNING: Removing unreachable block (ram,0x0001623a274d) */
/* WARNING: Removing unreachable block (ram,0x0001623a273a) */
/* WARNING: Removing unreachable block (ram,0x00016135c0d4) */

undefined8 FUN_14dc33d29(undefined8 param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000010;
  
  if (in_stack_00000010 == 0) {
    uVar1 = FUN_16490e2e4(param_1,0xffffffffffffffff);
    return uVar1;
  }
  uVar1 = FUN_16490e2e4(param_1,-1 - in_stack_00000010);
  return uVar1;
}



// FUNCTION 14dc33dc2 FUN_14dc33dc2 body=162 status=ok
// SIG undefined FUN_14dc33dc2(void)

void FUN_14dc33dc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_15734aaed(param_1,param_2,FUN_15734aaed,param_4,
                -1 - ~(~(~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x50)) |
                      ~(~*(ulonglong *)(unaff_R13 + -0x50) | unaff_R15)));
  return;
}



// FUNCTION 14dc33e65 FUN_14dc33e65 body=87 status=ok
// SIG undefined FUN_14dc33e65(void)

void FUN_14dc33e65(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014dc33eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14dc33f20 FUN_14dc33f20 body=128 status=ok
// SIG undefined FUN_14dc33f20(void)

void FUN_14dc33f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 in_R11;
  longlong unaff_R14;
  int aiStack_8 [2];
  
  piVar1 = (int *)(&stack0x00000000 + unaff_R14);
  piVar2 = piVar1 + -2;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)piVar1 = *(undefined8 *)piVar2;
  *piVar1 = 0;
  *piVar1 = *piVar1 + -0x1000000;
  *(undefined8 *)piVar1 = in_R11;
  *(undefined8 *)(piVar1 + -2) = param_3;
  *(undefined8 *)(piVar1 + -2) = *(undefined8 *)(piVar1 + -2);
  FUN_161d141f9(param_1,param_2,*(undefined8 *)(piVar1 + -2));
  return;
}



// FUNCTION 14dc33fa0 FUN_14dc33fa0 body=139 status=ok
// SIG undefined FUN_14dc33fa0(void)

void FUN_14dc33fa0(undefined1 param_1)

{
  ulonglong uVar1;
  ulonglong unaff_RBP;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_R13 + (unaff_RBP ^ 0x231aa7af));
  FUN_16224a995(param_1,(~(uVar1 | unaff_R15) |
                        0xffffffffffffffff - ((unaff_R15 - (uVar1 | unaff_R15)) + uVar1)) +
                        (uVar1 | unaff_R15) + 1);
  return;
}



// FUNCTION 14dc341f1 FUN_14dc341f1 body=132 status=ok
// SIG undefined FUN_14dc341f1(void)

void FUN_14dc341f1(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RBP;
  ulonglong in_R11;
  
  if (in_R11 == (unaff_RBP ^ 0x2b860f7f)) {
    return;
  }
  FUN_1618122e0(param_1,param_2 + -0x8f344);
  return;
}



// FUNCTION 14dc3432a FUN_14dc3432a body=30 status=ok
// SIG undefined FUN_14dc3432a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14dc3432a(undefined8 param_1,longlong param_2)

{
  undefined4 local_res8;
  
  do {
  } while ((local_res8 & *(uint *)(param_2 + -0x45)) != 0);
  return;
}



// FUNCTION 14dc34479 FUN_14dc34479 body=125 status=ok
// SIG undefined FUN_14dc34479(void)

void FUN_14dc34479(ulonglong param_1,ulonglong param_2)

{
  FUN_16135b3dc(FUN_16135b3dc,-0x793e238 - (param_2 & param_1));
  return;
}



// FUNCTION 14dc344f7 FUN_14dc344f7 body=12 status=ok
// SIG undefined FUN_14dc344f7(void)

void FUN_14dc344f7(void)

{
  FUN_165e93f27();
  return;
}



// FUNCTION 14dc34503 FUN_14dc34503 body=289 status=ok
// SIG undefined FUN_14dc34503(void)

void FUN_14dc34503(void)

{
  code *pcVar1;
  longlong unaff_RDI;
  longlong in_R9;
  
  if (in_R9 == 0x125cd2) {
    FUN_165e93f27();
    return;
  }
  pcVar1 = FUN_15b7fcd83;
  FUN_15b7fcd83();
  FUN_14de6536c(pcVar1,pcVar1 + (*(ulonglong *)(unaff_RDI + -0x40) & (ulonglong)pcVar1) * -2 +
                                *(ulonglong *)(unaff_RDI + -0x40),FUN_14de6536c);
  return;
}



// FUNCTION 14dc3469b FUN_14dc3469b body=141 status=ok
// SIG undefined FUN_14dc3469b(void)

undefined8 FUN_14dc3469b(void)

{
  return 0xffffffffbc5f0f7d;
}



// FUNCTION 14dc34729 FUN_14dc34729 body=50 status=ok
// SIG undefined FUN_14dc34729(void)

void FUN_14dc34729(void)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16221471a(~((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0x78)) &
                 (~*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15)),
                *(undefined8 *)(unaff_R13 + -0x28));
  return;
}



// FUNCTION 14dc347b9 FUN_14dc347b9 body=160 status=ok
// SIG undefined FUN_14dc347b9(void)

/* WARNING: Removing unreachable block (ram,0x00014dc34855) */

void FUN_14dc347b9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)
           ((~unaff_R15 | *(ulonglong *)(unaff_R13 + -0xa0)) &
           (~*(ulonglong *)(unaff_R13 + -0xa0) | unaff_R15))) {
    FUN_14e1cc29e();
    return;
  }
  (*(code *)&LAB_156a48157)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc3485b FUN_14dc3485b body=275 status=ok
// SIG undefined FUN_14dc3485b(void)

/* WARNING: Removing unreachable block (ram,0x00014dc348ff) */

void FUN_14dc3485b(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined8 unaff_retaddr;
  longlong in_stack_00000010;
  ushort local_res18;
  ulonglong in_stack_00000020;
  
  local_res18 = ~((~(ushort)param_1 | local_res18) & (local_res18 ^ 0xffff | (ushort)param_1));
  param_1 = in_stack_00000020 ^ param_1;
  if ((local_res18 | 0x100) == 0x100) {
    thunk_FUN_14db8cf32();
    return;
  }
  *(undefined8 *)(param_1 - 8) = in_RAX;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x18) = param_4;
  *(undefined8 *)(param_1 - 0x20) = unaff_RBX;
  *(undefined1 **)(param_1 - 0x28) = &LAB_166d32a63;
  *(undefined4 *)(param_1 - 0x28) = 0x53289931;
  *(undefined4 *)(param_1 - 0x24) = 0;
  uVar3 = *(ulonglong *)(param_1 - 0x28) ^ 0x778435f7;
  *(ulonglong *)(param_1 - 0x28) = in_stack_00000010 - 1U & unaff_RBP;
  uVar3 = ~((~uVar3 | 0x24acacce) & (uVar3 | 0xffffffffdb535331));
  uVar2 = *(undefined8 *)(param_1 - 0x28);
  *(undefined8 *)((param_1 - 0x10) + uVar3) = 0;
  plVar1 = (longlong *)((param_1 - 0x10) + uVar3);
  *plVar1 = *plVar1 + -0x166d32a63;
  plVar1 = (longlong *)((param_1 - 0x10) + uVar3);
  *plVar1 = -*plVar1;
  FUN_166d32a09(uVar2,param_2,unaff_retaddr,*(undefined8 *)(param_1 - 0x18));
  return;
}



// FUNCTION 14dc349c2 FUN_14dc349c2 body=87 status=ok
// SIG undefined FUN_14dc349c2(void)

void FUN_14dc349c2(void)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 unaff_R13;
  ulonglong uStackX_8;
  longlong local_res10;
  
  *(undefined8 *)(local_res10 + -8) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x10) = unaff_RBX;
  *(undefined8 *)(local_res10 + -0x18) = in_RAX;
  *(undefined4 *)(local_res10 + -0x18) = 0x8b0bf1a;
  *(undefined4 *)(local_res10 + -0x14) = 0;
  lVar1 = *(longlong *)(local_res10 + -0x18);
  *(ulonglong *)(local_res10 + -0x18) =
       (ulonglong)((uStackX_8 & 0x4000) != 0) * 0x4000 |
       (ulonglong)((uStackX_8 & 0x800) != 0) * 0x800 | (ulonglong)((uStackX_8 & 0x400) != 0) * 0x400
       | (ulonglong)((uStackX_8 & 0x200) != 0) * 0x200 |
       (ulonglong)((uStackX_8 & 0x100) != 0) * 0x100 | (ulonglong)((uStackX_8 & 0x80) != 0) * 0x80 |
       (ulonglong)((uStackX_8 & 0x40) != 0) * 0x40 | (ulonglong)((uStackX_8 & 0x10) != 0) * 0x10 |
       (ulonglong)((uStackX_8 & 4) != 0) * 4 | (ulonglong)((uStackX_8 & 1) != 0) |
       (ulonglong)((uStackX_8 & 0x200000) != 0) * 0x200000 |
       (ulonglong)((uStackX_8 & 0x40000) != 0) * 0x40000;
  *(undefined8 *)(local_res10 + -0x20) = unaff_RDI;
  *(undefined8 *)(local_res10 + -0x28) = in_R10;
  *(undefined8 *)(local_res10 + -0x18) = *(undefined8 *)(local_res10 + -0x20);
  *(longlong *)(local_res10 + -8) = lVar1 + -0x415e1f4;
  *(undefined8 *)(local_res10 + -0x28cf) = unaff_R13;
  *(undefined8 *)(local_res10 + -0x28d7) = unaff_R13;
  *(undefined **)(local_res10 + -0x28cf) = &DAT_156ef2e4a;
  return;
}



// FUNCTION 14dc34a4b FUN_14dc34a4b body=218 status=ok
// SIG undefined FUN_14dc34a4b(void)

void FUN_14dc34a4b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  byte in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  lVar3 = (unaff_RDI + -0xad286f8) - (ulonglong)in_CF;
  *(undefined8 *)(&stack0xfffffffff52d7900 + lVar3 + 0xad286f8) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff52d7900 + lVar3 + 0xad286f8) = 0xe16d2ab0;
  *(undefined4 *)(&stack0xfffffffff52d7904 + lVar3 + 0xad286f8) = 0xffffffff;
  cVar1 = *(char *)(param_3 +
                   *(longlong *)(&stack0xfffffffff52d7900 + lVar3 + 0xad286f8) + 0x1e92d56c);
  (&stack0xfffffffff52d7908)[lVar3 + 0xad286f8] = 0;
  (&stack0xfffffffff52d7908)[lVar3 + 0xad286f8] =
       (&stack0xfffffffff52d7908)[lVar3 + 0xad286f8] + cVar1;
  *(undefined8 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = 0xf37fdd36;
  *(undefined4 *)(&stack0xfffffffff52d790c + lVar3 + 0xad286f8) = 0xffffffff;
  *(undefined4 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = 0x562e28e;
  *(undefined4 *)(&stack0xfffffffff52d790c + lVar3 + 0xad286f8) = 0;
  uVar2 = *(ulonglong *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8);
  *(undefined8 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = in_RAX;
  *(undefined4 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = 0x5263474f;
  *(undefined4 *)(&stack0xfffffffff52d790c + lVar3 + 0xad286f8) = 0;
  uVar4 = ~(*(ulonglong *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) & 0xffffffffad9cb8b2) &
          (*(ulonglong *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) | 0xffffffffad9cb8b2);
  *(ulonglong *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar4 < 0) * 0x80 |
       (ulonglong)(uVar4 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(uVar4 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *(undefined8 *)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = param_1;
  *(undefined8 *)(&stack0xfffffffff52d7900 + lVar3 + 0xad286f8) = param_1;
  *(code **)(&stack0xfffffffff52d7908 + lVar3 + 0xad286f8) = FUN_14dc34b27;
  FUN_166c3515a(*(undefined8 *)(&stack0xfffffffff52d7900 + lVar3 + 0xad286f8),uVar2 ^ 0x9e2c4dc,
                ProcessEnvironmentBlock);
  return;
}



// FUNCTION 14dc34b27 FUN_14dc34b27 body=111 status=ok
// SIG undefined FUN_14dc34b27(void)

undefined8 FUN_14dc34b27(void)

{
  undefined8 uStackX_10;
  
  return uStackX_10;
}



// FUNCTION 14dc34b98 FUN_14dc34b98 body=272 status=ok
// SIG undefined FUN_14dc34b98(void)

/* WARNING: Removing unreachable block (ram,0x000166478031) */
/* WARNING: Removing unreachable block (ram,0x000166478065) */
/* WARNING: Removing unreachable block (ram,0x000166478069) */
/* WARNING: Removing unreachable block (ram,0x000166478089) */
/* WARNING: Removing unreachable block (ram,0x00016647808d) */
/* WARNING: Removing unreachable block (ram,0x0001664780ac) */
/* WARNING: Removing unreachable block (ram,0x0001664780b2) */
/* WARNING: Removing unreachable block (ram,0x000166a3286e) */
/* WARNING: Removing unreachable block (ram,0x00014dc34c0d) */
/* WARNING: Removing unreachable block (ram,0x00014dc34c13) */
/* WARNING: Removing unreachable block (ram,0x00014dee34ca) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc34b98(void)

{
  ulonglong unaff_RBX;
  ulonglong local_res18;
  
  if (local_res18 + unaff_RBX == (local_res18 & unaff_RBX) * 2) {
    FUN_161b40a75();
    return;
  }
  FUN_161b40a75();
  return;
}



// FUNCTION 14dc34c13 FUN_14dc34c13 body=69 status=ok
// SIG undefined FUN_14dc34c13(void)

void FUN_14dc34c13(void)

{
  return;
}



// FUNCTION 14dc34e32 FUN_14dc34e32 body=283 status=ok
// SIG undefined FUN_14dc34e32(void)

/* WARNING: Removing unreachable block (ram,0x000165c32809) */
/* WARNING: Removing unreachable block (ram,0x000165c32889) */
/* WARNING: Removing unreachable block (ram,0x00014dc34eae) */
/* WARNING: Removing unreachable block (ram,0x00014dc34eba) */
/* WARNING: Removing unreachable block (ram,0x000165c3288e) */
/* WARNING: Removing unreachable block (ram,0x000165c32894) */
/* WARNING: Removing unreachable block (ram,0x000165c3289f) */

undefined8 FUN_14dc34e32(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_165c32809();
  return uVar1;
}



// FUNCTION 14dc35083 FUN_14dc35083 body=405 status=ok
// SIG undefined FUN_14dc35083(void)

/* WARNING: Instruction at (ram,0x00014dc3515c) overlaps instruction at (ram,0x00014dc3515b)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc35125) */
/* WARNING: Removing unreachable block (ram,0x00014dc3515c) */
/* WARNING: Removing unreachable block (ram,0x00014dc3515b) */
/* WARNING: Removing unreachable block (ram,0x00014dc3516a) */
/* WARNING: Removing unreachable block (ram,0x000160f716e2) */

void FUN_14dc35083(void)

{
  FUN_160f716e2();
  return;
}



// FUNCTION 14dc3532e FUN_14dc3532e body=166 status=ok
// SIG undefined FUN_14dc3532e(void)

/* WARNING: Removing unreachable block (ram,0x000164ff31a6) */
/* WARNING: Removing unreachable block (ram,0x000164ff3201) */
/* WARNING: Removing unreachable block (ram,0x000164ff3206) */
/* WARNING: Removing unreachable block (ram,0x000166db046d) */
/* WARNING: Removing unreachable block (ram,0x000166db0473) */
/* WARNING: Removing unreachable block (ram,0x000166db050d) */
/* WARNING: Removing unreachable block (ram,0x000156f159fb) */
/* WARNING: Removing unreachable block (ram,0x000166db0513) */
/* WARNING: Removing unreachable block (ram,0x000166db062d) */
/* WARNING: Removing unreachable block (ram,0x000166db0632) */
/* WARNING: Removing unreachable block (ram,0x000166db0638) */
/* WARNING: Removing unreachable block (ram,0x000164ff30fc) */
/* WARNING: Removing unreachable block (ram,0x000164ff319b) */
/* WARNING: Removing unreachable block (ram,0x000164ff31a1) */
/* WARNING: Removing unreachable block (ram,0x00015ba48165) */
/* WARNING: Removing unreachable block (ram,0x00014dc353d5) */

undefined8 FUN_14dc3532e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_157260be9(FUN_157260be9);
  return uVar1;
}



// FUNCTION 14dc353d5 FUN_14dc353d5 body=167 status=ok
// SIG undefined FUN_14dc353d5(void)

void FUN_14dc353d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined8 local_res20;
  
  *(undefined8 *)((local_res20 ^ in_RAX) - 8) = unaff_RBX;
  *(undefined8 *)((local_res20 ^ in_RAX) - 0x10) = unaff_RDI;
  FUN_166498011(param_1,param_2,param_3);
  return;
}



// FUNCTION 14dc357be FUN_14dc357be body=327 status=ok
// SIG undefined FUN_14dc357be(void)

/* WARNING: Instruction at (ram,0x00014dc358fe) overlaps instruction at (ram,0x00014dc358fd)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc35860) */
/* WARNING: Removing unreachable block (ram,0x00014dc35871) */
/* WARNING: Removing unreachable block (ram,0x00014dc358fe) */
/* WARNING: Removing unreachable block (ram,0x000164f8e1b9) */
/* WARNING: Removing unreachable block (ram,0x000164f8e264) */
/* WARNING: Removing unreachable block (ram,0x000164f8e272) */
/* WARNING: Removing unreachable block (ram,0x000164f8e27b) */
/* WARNING: Removing unreachable block (ram,0x00016228f9f9) */
/* WARNING: Removing unreachable block (ram,0x00014dc35904) */
/* WARNING: Removing unreachable block (ram,0x00014dc35915) */
/* WARNING: Removing unreachable block (ram,0x00014dc358fd) */
/* WARNING: Removing unreachable block (ram,0x00014dc3590a) */
/* WARNING: Removing unreachable block (ram,0x00014dc35866) */

void FUN_14dc357be(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 in_R10;
  ulonglong in_R11;
  
  *(undefined8 *)(&stack0x00000020 + (in_R11 ^ ~param_3)) = in_R10;
  return;
}



// FUNCTION 14dc3598e FUN_14dc3598e body=152 status=ok
// SIG undefined FUN_14dc3598e(void)

/* WARNING: Instruction at (ram,0x00014dc35a6c) overlaps instruction at (ram,0x00014dc35a6b)
    */
/* WARNING: Removing unreachable block (ram,0x000162b91f7c) */
/* WARNING: Removing unreachable block (ram,0x000162a81f2c) */
/* WARNING: Removing unreachable block (ram,0x000162a81f32) */
/* WARNING: Removing unreachable block (ram,0x00014dc35a27) */
/* WARNING: Removing unreachable block (ram,0x00014dc35a6c) */
/* WARNING: Removing unreachable block (ram,0x00014dc35a6b) */
/* WARNING: Removing unreachable block (ram,0x00014dc35ace) */
/* WARNING: Removing unreachable block (ram,0x00014dc35ad5) */
/* WARNING: Removing unreachable block (ram,0x00014dc35add) */
/* WARNING: Removing unreachable block (ram,0x000164bec8d9) */
/* WARNING: Removing unreachable block (ram,0x000164bec97d) */
/* WARNING: Removing unreachable block (ram,0x000164bec983) */

undefined8 FUN_14dc3598e(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  if (-1 < (longlong)(*(ulonglong *)(unaff_R13 + -0x50) ^ unaff_R15)) {
    uVar1 = FUN_162a81e8b();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc35a27 FUN_14dc35a27 body=375 status=ok
// SIG undefined FUN_14dc35a27(void)

/* WARNING: Instruction at (ram,0x00014dc35a6c) overlaps instruction at (ram,0x00014dc35a6b)
    */
/* WARNING: Removing unreachable block (ram,0x000162b91f7c) */
/* WARNING: Removing unreachable block (ram,0x000164bec983) */
/* WARNING: Removing unreachable block (ram,0x00014dc35add) */

undefined8 FUN_14dc35a27(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  undefined8 local_10;
  
  if (-1 < (longlong)&local_10) {
    local_10 = 0;
    uVar1 = FUN_162b91f7c(0xfffffffe9d46e03f,param_2,param_3,in_stack_00000010);
    return uVar1;
  }
  uVar1 = FUN_164bec8d9(&LAB_162b91fc1,0x4c3ce6ac);
  return uVar1;
}



// FUNCTION 14dc35b9f FUN_14dc35b9f body=112 status=ok
// SIG undefined FUN_14dc35b9f(void)

undefined8 FUN_14dc35b9f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uStack_8;
  
  *(undefined8 *)((longlong)&uStack_8 + unaff_RSI) = param_1;
  *(undefined8 *)((longlong)&uStack_8 + unaff_RSI) = *(undefined8 *)(unaff_RDI + -0x80);
  uVar1 = *(undefined8 *)((longlong)&uStack_8 + unaff_RSI);
  *(undefined1 **)((longlong)&uStack_8 + unaff_RSI) = &LAB_14dc35c10;
  return uVar1;
}



// FUNCTION 14dc35c1f FUN_14dc35c1f body=156 status=ok
// SIG undefined FUN_14dc35c1f(void)

void FUN_14dc35c1f(undefined8 param_1)

{
  FUN_166b8c845(CONCAT71((int7)((ulonglong)param_1 >> 8),0xb9) ^ 0xb8,FUN_166b8c845);
  return;
}



// FUNCTION 14dc35d70 FUN_14dc35d70 body=152 status=ok
// SIG undefined FUN_14dc35d70(void)

void FUN_14dc35d70(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 uStackX_8;
  undefined8 local_res18;
  
  param_1 = local_res18 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_R12;
  *(undefined8 *)(param_1 - 0x10) = in_RAX;
  *(undefined8 *)(param_1 - 0x18) = unaff_RBX;
  *(undefined8 *)(param_1 - 0x10) = in_R10;
  *(undefined8 *)(param_1 - 0x18) = in_R10;
  uVar1 = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = unaff_R15;
  *(undefined8 *)(param_1 - 0x28) = unaff_retaddr;
  uVar2 = *(undefined8 *)(param_1 - 0x28);
  *(undefined8 *)(param_1 - 0x10) = uVar1;
  FUN_1666f0ed9(uStackX_8,uVar2);
  return;
}



// FUNCTION 14dc35eaf FUN_14dc35eaf body=179 status=ok
// SIG undefined FUN_14dc35eaf(void)

undefined8 FUN_14dc35eaf(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ushort *in_R11;
  undefined8 unaff_R15;
  undefined8 local_res10;
  longlong local_res20;
  
  *in_R11 = (*in_R11 | 0x100) - 0x100;
  plVar1 = (longlong *)(local_res20 + -8);
  *plVar1 = 0;
  *plVar1 = *plVar1 + param_3;
  *(longlong *)(local_res20 + -0x10) = *plVar1;
  *plVar1 = (longlong)&LAB_162aab16b;
  *(undefined8 *)(local_res20 + -0x18) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x20) = unaff_R15;
  *(undefined8 *)(local_res20 + -0x28) = unaff_R15;
  *(undefined1 **)(local_res20 + -0x18) = &LAB_14dc35f63;
  *(undefined1 **)(local_res20 + -0x20) = &LAB_162aab130;
  return local_res10;
}



// FUNCTION 14dc3626f FUN_14dc3626f body=289 status=ok
// SIG undefined FUN_14dc3626f(void)

/* WARNING: Removing unreachable block (ram,0x00014dc36390) */

undefined8 FUN_14dc3626f(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  ulonglong *puVar9;
  longlong unaff_RDI;
  undefined8 in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  ushort local_res18;
  uint6 uStackX_1a;
  ulonglong local_res20;
  
  param_2 = param_2 | param_1;
  puVar9 = (ulonglong *)
           ((param_2 - (~param_2 & ~(local_res20 & param_1) | param_2)) + ~(local_res20 & param_1));
  bVar18 = (local_res18 & 0x4000) != 0;
  bVar17 = (local_res18 & 0x800) != 0;
  bVar16 = (local_res18 & 0x200) != 0;
  bVar15 = 0;
  bVar14 = (local_res18 & 0x80) != 0;
  bVar13 = (local_res18 & 0x40) != 0;
  bVar12 = (local_res18 & 0x10) != 0;
  bVar11 = (local_res18 & 4) != 0;
  bVar10 = (local_res18 & 1) != 0;
  bVar22 = (uStackX_1a & 0x20) != 0;
  bVar19 = (uStackX_1a & 4) != 0;
  bVar21 = 0;
  bVar20 = 0;
  pcVar4 = (code *)swi(0x2e);
  uVar8 = (*pcVar4)();
  *puVar9 = uStackX_10;
  puVar9[-1] = uStackX_10;
  puVar9[-2] = uVar8;
  if (!bVar10) {
    *(undefined4 *)(puVar9 + -2) = 0x259a33e;
    *(undefined4 *)((longlong)puVar9 + -0xc) = 0;
    uVar8 = puVar9[-2];
    puVar9[-2] = (ulonglong)(bVar18 & 1) * 0x4000 | (ulonglong)(bVar17 & 1) * 0x800 |
                 (ulonglong)((local_res18 & 0x400) != 0) * 0x400 | (ulonglong)(bVar16 & 1) * 0x200 |
                 (ulonglong)(bVar15 & 1) * 0x100 | (ulonglong)(bVar14 & 1) * 0x80 |
                 (ulonglong)(bVar13 & 1) * 0x40 | (ulonglong)(bVar12 & 1) * 0x10 |
                 (ulonglong)(bVar11 & 1) * 4 | (ulonglong)(bVar10 & 1) |
                 (ulonglong)(bVar22 & 1) * 0x200000 | (ulonglong)(bVar21 & 1) * 0x100000 |
                 (ulonglong)(bVar20 & 1) * 0x80000 | (ulonglong)(bVar19 & 1) * 0x40000;
    puVar9[-3] = unaff_R15;
    puVar9[-4] = uVar8;
    puVar9[-4] = puVar9[-4] + -0x984cda;
    uVar7 = puVar9[-4];
    uVar23 = puVar9[-2];
    puVar9[-2] = param_4;
    puVar9[-3] = (ulonglong)((uVar23 & 0x4000) != 0) * 0x4000 |
                 (ulonglong)((uVar23 & 0x800) != 0) * 0x800 |
                 (ulonglong)((uVar23 & 0x400) != 0) * 0x400 |
                 (ulonglong)((uVar23 & 0x200) != 0) * 0x200 |
                 (ulonglong)((uVar23 & 0x100) != 0) * 0x100 |
                 (ulonglong)((uVar23 & 0x80) != 0) * 0x80 | (ulonglong)((uVar23 & 0x40) != 0) * 0x40
                 | (ulonglong)((uVar23 & 0x10) != 0) * 0x10 | (ulonglong)((uVar23 & 4) != 0) * 4 |
                 (ulonglong)((uVar23 & 1) != 0) | (ulonglong)((uVar23 & 0x200000) != 0) * 0x200000 |
                 (ulonglong)((uVar23 & 0x40000) != 0) * 0x40000;
    puVar9[-4] = in_R11;
    *puVar9 = uVar7;
    uVar8 = FUN_165c7153c(puVar9[-1]);
    return uVar8;
  }
  if (!bVar10) {
    puVar9[-3] = unaff_R14;
    puVar9[-4] = unaff_R14;
    puVar9[-5] = unaff_R15;
    uVar5 = puVar9[-5];
    puVar9[-3] = *(ulonglong *)(unaff_RDI + -0x90);
    puVar9[-4] = *(undefined8 *)(unaff_RDI + -8);
    puVar9[-5] = unaff_RBX;
    puVar9[-6] = unaff_RBX;
    puVar9[-5] = *(ulonglong *)(unaff_RDI + -0x98);
    puVar9[-6] = uVar8;
    puVar9[-7] = unaff_RSI;
    uVar8 = puVar9[-7];
    uVar6 = puVar9[-6];
    puVar9[-5] = puVar9[-5] ^ uStackX_10;
    puVar9[-4] = puVar9[-4] ^ uStackX_10;
    puVar1 = puVar9 + -3;
    *puVar1 = *puVar1 ^ uStackX_10;
    if (-1 < (longlong)*puVar1) {
      uVar8 = FUN_161586004();
      return uVar8;
    }
    *(ushort *)(puVar9 + -4) = (ushort)puVar9[-4] & 0xfeff;
    lVar2 = puVar9[-3];
    *(undefined8 *)(lVar2 + -8) = uVar5;
    *(undefined1 **)(lVar2 + -0x10) = &LAB_1648b423b_4;
    lVar3 = *(longlong *)(lVar2 + -0x10);
    *(undefined8 *)(lVar2 + -0x10) = uVar8;
    *(undefined8 *)(lVar2 + -0x18) = uVar8;
    *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar2 + -8);
    *(undefined8 *)(lVar2 + -0x18) = unaff_retaddr;
    *(longlong *)(lVar2 + -8) = lVar3 + -0x332e1a8;
    *(undefined8 *)(lVar2 + -0x10) = uVar6;
    return uVar6;
  }
  uVar8 = FUN_1657ce8d0();
  return uVar8;
}



// FUNCTION 14dc36390 FUN_14dc36390 body=164 status=ok
// SIG undefined FUN_14dc36390(void)

undefined8 FUN_14dc36390(ulonglong param_1,undefined8 param_2)

{
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 local_res8;
  ulonglong local_res20;
  
  param_1 = local_res20 ^ param_1;
  *(undefined8 *)(param_1 - 8) = unaff_R13;
  *(undefined8 *)(param_1 - 0x10) = unaff_R15;
  *(undefined8 *)(param_1 - 0x10) = param_2;
  *(undefined8 *)(param_1 - 0x18) = param_2;
  *(undefined8 *)(param_1 - 0x10) = *(undefined8 *)(param_1 - 8);
  *(undefined8 *)(param_1 - 0x20) = unaff_RSI;
  *(undefined8 *)(param_1 - 0x28) = unaff_RSI;
  *(undefined **)(param_1 - 0x20) = &DAT_14dc36438;
  return local_res8;
}



// FUNCTION 14dc36582 FUN_14dc36582 body=289 status=ok
// SIG undefined FUN_14dc36582(void)

/* WARNING: Removing unreachable block (ram,0x0001660c388d) */
/* WARNING: Removing unreachable block (ram,0x00014dc36613) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14dc36582(longlong param_1)

{
  longlong unaff_RDI;
  
  if (param_1 != -1 || *(longlong *)(unaff_RDI + -0xa0) != 0) {
    FUN_1660c37fc();
    return;
  }
  if (-1 < (longlong)(~(~*(ulonglong *)(unaff_RDI + -0x98) | 0xffffffffffffffffU - param_1) * 2)) {
    return;
  }
  FUN_14d84d4b1();
  return;
}



// FUNCTION 14dc36728 FUN_14dc36728 body=438 status=ok
// SIG undefined FUN_14dc36728(void)

/* WARNING: Removing unreachable block (ram,0x00014dc367bf) */
/* WARNING: Removing unreachable block (ram,0x00014dc367ca) */
/* WARNING: Removing unreachable block (ram,0x00014dc367c5) */

void FUN_14dc36728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  ulonglong in_R10;
  undefined8 in_R11;
  longlong local_res8;
  undefined8 uStackX_18;
  undefined8 local_res20;
  
  uVar2 = *(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = ~*(ulonglong *)(unaff_RBX + 0x10);
  *(ulonglong *)(unaff_RBX + 0x10) = *(ulonglong *)(unaff_RBX + 0x10) | in_R10;
  *(ulonglong *)(unaff_RBX + 0x10) =
       ~((0xffffffffffffffffU - local_res8 | uVar2) & *(ulonglong *)(unaff_RBX + 0x10));
  *(undefined8 *)(param_6 + -8) = local_res20;
  *(undefined8 *)(param_6 + -0x10) = in_R11;
  *(undefined8 *)(param_6 + -0x18) = param_3;
  *(undefined8 *)(param_6 + -0x10) = *(undefined8 *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x20) = in_RAX;
  *(undefined8 *)(param_6 + -0x10) = 0;
  *(longlong *)(param_6 + -0x10) = *(longlong *)(param_6 + -0x10) - *(longlong *)(param_6 + -8);
  *(longlong *)(param_6 + -0x10) = -*(longlong *)(param_6 + -0x10);
  uVar3 = *(undefined8 *)(param_6 + -0x18);
  *(undefined8 *)(param_6 + -0x18) = unaff_RDI;
  *(undefined8 *)(param_6 + -0x20) = *(undefined8 *)(param_6 + -0x20);
  plVar1 = (longlong *)(param_6 + -0x28);
  *plVar1 = param_6 + -0x20;
  *plVar1 = *plVar1 + 0x18;
  *(undefined1 **)(param_6 + -0x20) = &LAB_16198f83e;
  *(undefined8 *)*plVar1 = *(undefined8 *)(param_6 + -0x20);
  thunk_FUN_15b642ca5(uStackX_18,param_2,uVar3);
  return;
}



// FUNCTION 14dc36a1e FUN_14dc36a1e body=140 status=ok
// SIG undefined FUN_14dc36a1e(void)

void FUN_14dc36a1e(void)

{
  return;
}



// FUNCTION 14dc36aac FUN_14dc36aac body=106 status=ok
// SIG undefined FUN_14dc36aac(void)

void FUN_14dc36aac(void)

{
  return;
}



// FUNCTION 14dc36b2c FUN_14dc36b2c body=175 status=ok
// SIG undefined FUN_14dc36b2c(void)

void FUN_14dc36b2c(undefined8 param_1)

{
  FUN_164c782e8(param_1);
  return;
}



// FUNCTION 14dc36d12 FUN_14dc36d12 body=312 status=ok
// SIG undefined FUN_14dc36d12(void)

/* WARNING: Removing unreachable block (ram,0x0001575bcb94) */
/* WARNING: Removing unreachable block (ram,0x0001575bcb9a) */
/* WARNING: Removing unreachable block (ram,0x0001575bcb9f) */
/* WARNING: Removing unreachable block (ram,0x000165c52212) */
/* WARNING: Removing unreachable block (ram,0x000165c52218) */
/* WARNING: Removing unreachable block (ram,0x000165c522b2) */
/* WARNING: Removing unreachable block (ram,0x000165c522b8) */
/* WARNING: Removing unreachable block (ram,0x0001575bca4a) */
/* WARNING: Removing unreachable block (ram,0x000157357c41) */
/* WARNING: Removing unreachable block (ram,0x0001648888b7) */
/* WARNING: Removing unreachable block (ram,0x000165c520fd) */
/* WARNING: Removing unreachable block (ram,0x000165c52174) */
/* WARNING: Removing unreachable block (ram,0x000165c5217a) */
/* WARNING: Removing unreachable block (ram,0x000162afa6fb) */
/* WARNING: Removing unreachable block (ram,0x00015634c028) */
/* WARNING: Removing unreachable block (ram,0x00014dc36de1) */
/* WARNING: Removing unreachable block (ram,0x00014dc36da6) */

undefined8 FUN_14dc36d12(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = ~unaff_RBP | *(ulonglong *)(unaff_RSI + -0xa0);
  uVar2 = ~*(ulonglong *)(unaff_RSI + -0xa0) | unaff_RBP;
  if (CARRY8(uVar2 - (uVar3 | uVar2),uVar3)) {
    uVar1 = FUN_165c51ff9();
    return uVar1;
  }
  FUN_165fb469d();
  if (&stack0x00000000 != &DAT_00000008) {
    uVar1 = FUN_1668a3495(param_1);
    return uVar1;
  }
  uVar1 = FUN_1668a3495(param_1);
  return uVar1;
}



// FUNCTION 14dc36fd5 FUN_14dc36fd5 body=166 status=ok
// SIG undefined FUN_14dc36fd5(void)

void FUN_14dc36fd5(short param_1)

{
  short local_res10;
  
  thunk_FUN_1611c055e(param_1 - local_res10,thunk_FUN_1611c055e);
  return;
}



// FUNCTION 14dc37414 FUN_14dc37414 body=151 status=ok
// SIG undefined FUN_14dc37414(void)

void FUN_14dc37414(void)

{
  ulonglong unaff_retaddr;
  
  FUN_161130cda(unaff_retaddr,unaff_retaddr & 0xff,unaff_retaddr & 0xff,0xffffffffdd8464d0);
  return;
}



// FUNCTION 14dc3768c FUN_14dc3768c body=161 status=ok
// SIG undefined FUN_14dc3768c(void)

void FUN_14dc3768c(undefined8 param_1)

{
  FUN_1620f74a5(param_1);
  return;
}



// FUNCTION 14dc377c9 FUN_14dc377c9 body=124 status=ok
// SIG undefined FUN_14dc377c9(void)

ulonglong FUN_14dc377c9(void)

{
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  return *(ulonglong *)(unaff_RSI + -0x40) ^ unaff_RBP;
}



// FUNCTION 14dc37bc6 thunk_FUN_14dc37bcc body=5 status=ok
// SIG undefined thunk_FUN_14dc37bcc(void)

/* WARNING: Removing unreachable block (ram,0x00014dc37c5e) */
/* WARNING: Removing unreachable block (ram,0x00014dc37c64) */

void thunk_FUN_14dc37bcc(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_R10;
  undefined8 unaff_retaddr;
  ulonglong uStackX_10;
  ushort uStackX_18;
  
  uVar1 = *(ulonglong *)((longlong)&uStackX_10 + in_R10);
  *(ulonglong *)((longlong)&uStackX_10 + in_R10) = ~*(ulonglong *)((longlong)&uStackX_10 + in_R10);
  *(ulonglong *)((longlong)&uStackX_10 + in_R10) =
       *(ulonglong *)((longlong)&uStackX_10 + in_R10) | param_1;
  uVar2 = *(ulonglong *)((longlong)&uStackX_10 + in_R10);
  *(undefined8 *)((longlong)&uStackX_10 + in_R10) = 0;
  *(longlong *)((longlong)&uStackX_10 + in_R10) =
       *(longlong *)((longlong)&uStackX_10 + in_R10) +
       ~((0xffffffffffffffff - param_1 | uVar1) & uVar2);
  uVar1 = uStackX_10;
  uStackX_18 = ~(~uStackX_18 | 0x100);
  uStackX_10 = param_2;
  (*(code *)0x14dae33f2)(uVar1,0x14dae33f2,unaff_retaddr);
  return;
}



// FUNCTION 14dc37bcc FUN_14dc37bcc body=447 status=ok
// SIG undefined FUN_14dc37bcc(void)

/* WARNING: Removing unreachable block (ram,0x00014dc37c5e) */
/* WARNING: Removing unreachable block (ram,0x00014dc37c64) */

void FUN_14dc37bcc(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong in_R10;
  undefined8 unaff_retaddr;
  ulonglong local_res10;
  ushort uStackX_18;
  
  uVar1 = *(ulonglong *)((longlong)&local_res10 + in_R10);
  *(ulonglong *)((longlong)&local_res10 + in_R10) = ~*(ulonglong *)((longlong)&local_res10 + in_R10)
  ;
  *(ulonglong *)((longlong)&local_res10 + in_R10) =
       *(ulonglong *)((longlong)&local_res10 + in_R10) | param_1;
  uVar2 = *(ulonglong *)((longlong)&local_res10 + in_R10);
  *(undefined8 *)((longlong)&local_res10 + in_R10) = 0;
  *(longlong *)((longlong)&local_res10 + in_R10) =
       *(longlong *)((longlong)&local_res10 + in_R10) +
       ~((0xffffffffffffffff - param_1 | uVar1) & uVar2);
  uVar1 = local_res10;
  uStackX_18 = ~(~uStackX_18 | 0x100);
  local_res10 = param_2;
  (*(code *)0x14dae33f2)(uVar1,0x14dae33f2,unaff_retaddr);
  return;
}



// FUNCTION 14dc37ecb thunk_FUN_14dc37ed1 body=5 status=ok
// SIG undefined thunk_FUN_14dc37ed1(void)

void thunk_FUN_14dc37ed1(void)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2;
  FUN_14dcb03fe(lVar1,FUN_14dcb03fe,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,lVar1);
  return;
}



// FUNCTION 14dc37ed1 FUN_14dc37ed1 body=131 status=ok
// SIG undefined FUN_14dc37ed1(void)

void FUN_14dc37ed1(void)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = *(ulonglong *)(unaff_RSI + -0x28) + unaff_RBP +
          (*(ulonglong *)(unaff_RSI + -0x28) & unaff_RBP) * -2;
  FUN_14dcb03fe(lVar1,FUN_14dcb03fe,*(ulonglong *)(unaff_RSI + -0x60) ^ unaff_RBP,lVar1);
  return;
}



// FUNCTION 14dc37f54 FUN_14dc37f54 body=483 status=ok
// SIG undefined FUN_14dc37f54(void)

/* WARNING: Removing unreachable block (ram,0x00014dc37fe5) */
/* WARNING: Removing unreachable block (ram,0x00014dc37feb) */

void FUN_14dc37f54(void)

{
  return;
}



// FUNCTION 14dc38320 FUN_14dc38320 body=155 status=ok
// SIG undefined FUN_14dc38320(void)

void FUN_14dc38320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 in_R10;
  ulonglong local_res20;
  
  uVar1 = 0xffffffffffffffff - (local_res20 & in_RAX) & (local_res20 | in_RAX);
  *(undefined8 *)(uVar1 - 8) = param_3;
  *(undefined8 *)(uVar1 - 0x10) = in_R10;
  *(undefined8 *)(uVar1 - 0x18) = in_R10;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar1 - 8);
  *(undefined8 *)(uVar1 - 0x18) = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 8) = 0;
  uVar3 = *(undefined8 *)(uVar1 - 0x18);
  *(undefined8 *)(uVar1 - 0x18) = param_2;
  *(undefined8 *)(uVar1 - 0x20) = uVar3;
  uVar2 = *(ulonglong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = ~*(ulonglong *)(uVar1 - 8);
  *(ulonglong *)(uVar1 - 8) = *(ulonglong *)(uVar1 - 8) | 0x161b54d3d;
  FUN_161b54cea(param_1,uVar2 | 0xfffffffe9e4ab2c2,FUN_161b54cea);
  return;
}



// FUNCTION 14dc384fa FUN_14dc384fa body=151 status=ok
// SIG undefined FUN_14dc384fa(void)

/* WARNING: Removing unreachable block (ram,0x00014dc38592) */

void FUN_14dc384fa(ulonglong param_1)

{
  ulonglong uVar1;
  longlong unaff_RDI;
  int in_stack_00000028;
  undefined8 uStack_10;
  
  if (*(ulonglong *)(unaff_RDI + -0x28) == param_1) {
    FUN_1569895c6();
    return;
  }
  if (-1 < in_stack_00000028) {
    uStack_10 = *(undefined8 *)(unaff_RDI + -8);
    FUN_161b16f7d(&uStack_10,
                  ~((~param_1 | *(ulonglong *)(unaff_RDI + -0x68)) &
                   (~param_1 & ~*(ulonglong *)(unaff_RDI + -0x68) | param_1)),
                  *(ulonglong *)(unaff_RDI + -0x70) + param_1 +
                  (*(ulonglong *)(unaff_RDI + -0x70) & param_1) * -2);
    return;
  }
  uStack_10 = 0x15698965c;
  uVar1 = FUN_166967c00();
  FUN_16124ac72(~uVar1);
  return;
}



// FUNCTION 14dc38592 FUN_14dc38592 body=132 status=ok
// SIG undefined FUN_14dc38592(void)

void FUN_14dc38592(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RSI;
  longlong unaff_R12;
  ulonglong in_stack_00000008;
  undefined8 uStackX_10;
  undefined8 local_res18;
  
  *(undefined8 *)(unaff_R12 + (-~(in_stack_00000008 ^ 0xf0eebcf) - (~param_1 + 2))) = unaff_RSI;
  FUN_1627ae926(local_res18,param_2,param_3,uStackX_10);
  return;
}



// FUNCTION 14dc38a0f FUN_14dc38a0f body=150 status=ok
// SIG undefined FUN_14dc38a0f(void)

void FUN_14dc38a0f(void)

{
  return;
}



// FUNCTION 14dc38aa5 FUN_14dc38aa5 body=175 status=ok
// SIG undefined FUN_14dc38aa5(void)

void FUN_14dc38aa5(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong unaff_R12;
  ulonglong unaff_R14;
  
  FUN_1614c33a6(param_1,0xffffffffffffffa0,FUN_1614c33a6,(param_4 | unaff_R14) + unaff_R12 + 1);
  return;
}



// FUNCTION 14dc38c5a FUN_14dc38c5a body=282 status=ok
// SIG undefined FUN_14dc38c5a(void)

/* WARNING: Removing unreachable block (ram,0x000162206e43) */
/* WARNING: Removing unreachable block (ram,0x000162206ed4) */
/* WARNING: Removing unreachable block (ram,0x000162206ed9) */
/* WARNING: Removing unreachable block (ram,0x000162206edf) */
/* WARNING: Removing unreachable block (ram,0x000162206f30) */
/* WARNING: Removing unreachable block (ram,0x000162206f34) */
/* WARNING: Removing unreachable block (ram,0x000156a82bef) */
/* WARNING: Removing unreachable block (ram,0x00014dc38d78) */

undefined8 FUN_14dc38c5a(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R10;
  longlong in_R11;
  code *pcVar4;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uStackX_10;
  
  uVar3 = *(undefined8 *)(unaff_RDI + -8);
  pcVar4 = FUN_15652a026;
  FUN_15652a026();
  *(code **)(&stack0x67eb9cdb + in_R11) = pcVar4;
  uVar2 = *(ulonglong *)(unaff_RSI + -0x98);
  if ((unaff_RBP - (uVar2 | unaff_RBP)) + uVar2 == 0) {
    uVar1 = ~(uStackX_10 & unaff_RBP) & (uStackX_10 | unaff_RBP);
    *(undefined8 *)(uVar1 - 8) = in_R10;
    *(undefined8 *)(uVar1 - 0x10) = unaff_R15;
    *(undefined8 *)(uVar1 - 0x18) = unaff_R15;
    *(undefined8 *)(uVar1 - 0x20) = unaff_R13;
    *(undefined8 *)(uVar1 - 0x28) = param_1;
    *(undefined8 *)(uVar1 - 0x30) = uVar3;
    pcVar4 = FUN_15b1cdb93;
    *(undefined8 *)(uVar1 - 0x38) = 0x1655c9b03;
    FUN_15b1cdb93(0xffffffffffffffff,param_2);
    *(code **)(uVar1 - 0x30) = pcVar4;
    *(undefined4 *)(uVar1 - 0x38) = 0xbc98803e;
    *(undefined4 *)(uVar1 - 0x34) = 0xffffffff;
    uVar3 = *(undefined8 *)(uVar1 + *(longlong *)(uVar1 - 0x38) + 0x43677faa);
    *(undefined8 *)(uVar1 - 0x30) = 0x163af832;
    *(undefined8 *)(uVar1 - 0x38) = unaff_R14;
    *(undefined8 *)(uVar1 - 0x20) = uVar3;
    *(ulonglong *)(uVar1 - 0x18) = uVar2 + unaff_RBP;
    uVar3 = FUN_14d7c2e6a();
    return uVar3;
  }
  uVar3 = FUN_162206dac();
  return uVar3;
}



// FUNCTION 14dc38d78 FUN_14dc38d78 body=145 status=ok
// SIG undefined FUN_14dc38d78(void)

void FUN_14dc38d78(undefined8 param_1)

{
  FUN_156cff625(param_1);
  return;
}



// FUNCTION 14dc38eba FUN_14dc38eba body=171 status=ok
// SIG undefined FUN_14dc38eba(void)

void FUN_14dc38eba(void)

{
  return;
}



// FUNCTION 14dc38f67 FUN_14dc38f67 body=281 status=ok
// SIG undefined FUN_14dc38f67(void)

/* WARNING: Removing unreachable block (ram,0x000165b47faf) */
/* WARNING: Removing unreachable block (ram,0x000165b4801e) */
/* WARNING: Removing unreachable block (ram,0x000165b48029) */
/* WARNING: Removing unreachable block (ram,0x000165b48024) */
/* WARNING: Removing unreachable block (ram,0x000165b47f9f) */
/* WARNING: Removing unreachable block (ram,0x00014dc38feb) */
/* WARNING: Removing unreachable block (ram,0x00014dc3901a) */
/* WARNING: Removing unreachable block (ram,0x00014dc3901d) */

void FUN_14dc38f67(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong unaff_R12;
  
  uVar1 = ~((~in_RAX | param_2) &
           (((in_RAX - (~param_2 | in_RAX)) + ~param_2 ^ 0xffffffffffffffff) + in_RAX) - param_2);
  if (*(longlong *)(unaff_R12 + -0x90) != 0 || in_RAX != 0) {
    FUN_14de50b71(param_1,uVar1);
    return;
  }
  FUN_14de50b71(param_1,uVar1);
  return;
}



// FUNCTION 14dc38feb FUN_14dc38feb body=514 status=ok
// SIG undefined FUN_14dc38feb(void)

void FUN_14dc38feb(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong in_R11;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong unaff_R15;
  undefined8 uStackX_8;
  ushort in_stack_00000028;
  
  uVar3 = *(ulonglong *)(unaff_R13 + -0x88) & unaff_R15;
  lVar4 = uVar3 * 2;
  lVar2 = *(ulonglong *)(unaff_R13 + -0x88) + unaff_R15 + uVar3 * -2;
  uVar3 = *(ulonglong *)(unaff_R13 + -0x38);
  FUN_15aff8a5e(param_1,uVar3,lVar2,*(ulonglong *)(unaff_R13 + -0x60) ^ unaff_R15);
  lVar1 = *(longlong *)(lVar4 + in_R11 + 0x4ea79c40);
  *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & unaff_R15;
  *(ulonglong *)(lVar4 + 0x10) = (lVar1 + unaff_R15) - *(longlong *)(lVar4 + 0x10);
  *(ulonglong *)(lVar4 + 0x10) = ~(uVar3 & *(ulonglong *)(lVar4 + 0x10));
  FUN_1628ba690(uStackX_8,FUN_1628ba690,-(in_stack_00000028 | 0xfeff));
  *(ulonglong *)(lVar2 + 0x10) = unaff_R14 - 1U ^ 0xffffffffffffffff;
  FUN_1568ff7c0();
  FUN_165e8e88a();
  uVar3 = *(ulonglong *)(CONCAT62((int6)((ulonglong)unaff_R13 >> 0x10),0xfeff) + -0x78);
  FUN_1627ea3c2(~(uVar3 & (ulonglong)&stack0x00000028) & (uVar3 | (ulonglong)&stack0x00000028));
  return;
}



// FUNCTION 14dc391f2 FUN_14dc391f2 body=181 status=ok
// SIG undefined FUN_14dc391f2(void)

void FUN_14dc391f2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_1627ea3c2(~(*(ulonglong *)(unaff_R13 + -0x78) & unaff_R15) &
                (*(ulonglong *)(unaff_R13 + -0x78) | unaff_R15),param_2,in_RAX - param_3);
  return;
}



// FUNCTION 14dc3944d FUN_14dc3944d body=178 status=ok
// SIG undefined FUN_14dc3944d(void)

/* WARNING: Removing unreachable block (ram,0x000162350962) */
/* WARNING: Removing unreachable block (ram,0x000162350a8c) */
/* WARNING: Removing unreachable block (ram,0x00016163602f) */
/* WARNING: Removing unreachable block (ram,0x0001616360b2) */
/* WARNING: Removing unreachable block (ram,0x0001616360b8) */
/* WARNING: Removing unreachable block (ram,0x00014dfb2a1f) */
/* WARNING: Removing unreachable block (ram,0x000162350a92) */

undefined8 FUN_14dc3944d(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == param_3 + param_1) {
    return 0xdf3e75f7;
  }
  uVar1 = FUN_156a4ba4b();
  return uVar1;
}



// FUNCTION 14dc394c3 FUN_14dc394c3 body=285 status=ok
// SIG undefined FUN_14dc394c3(void)

/* WARNING: Removing unreachable block (ram,0x00014dc39567) */

undefined8 FUN_14dc394c3(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (-1 < *(longlong *)(unaff_RDI + -0xa0) + param_1) {
    uVar1 = FUN_16656a7f7();
    return uVar1;
  }
  return in_RAX;
}



// FUNCTION 14dc395e2 FUN_14dc395e2 body=346 status=ok
// SIG undefined FUN_14dc395e2(void)

/* WARNING: Instruction at (ram,0x00014dc24ac1) overlaps instruction at (ram,0x00014dc24ac0)
    */
/* WARNING: Removing unreachable block (ram,0x00014dc24ac0) */
/* WARNING: Removing unreachable block (ram,0x00014dc3967c) */
/* WARNING: Removing unreachable block (ram,0x00014dc24a99) */

void FUN_14dc395e2(void)

{
  FUN_14dc24a99();
  return;
}



// FUNCTION 14dc3973d FUN_14dc3973d body=106 status=ok
// SIG undefined FUN_14dc3973d(void)

void FUN_14dc3973d(void)

{
  return;
}



// FUNCTION 14dc397a9 FUN_14dc397a9 body=136 status=ok
// SIG undefined FUN_14dc397a9(void)

void FUN_14dc397a9(ulonglong param_1)

{
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  FUN_15651890f(param_1,(~unaff_RBX | unaff_RSI) + unaff_RBX + 1,
                *(ulonglong *)(unaff_RDI + -0x70) ^ param_1,
                ~(*(ulonglong *)(unaff_RDI + -0x60) & param_1) &
                (*(ulonglong *)(unaff_RDI + -0x60) | param_1));
  return;
}



// FUNCTION 14dc39bb5 FUN_14dc39bb5 body=920 status=ok
// SIG undefined FUN_14dc39bb5(void)

/* WARNING: Removing unreachable block (ram,0x00014dc39ce2) */
/* WARNING: Removing unreachable block (ram,0x00014dc39eae) */

void FUN_14dc39bb5(void)

{
  longlong lVar1;
  short sVar2;
  longlong unaff_R12;
  
  sVar2 = (short)FUN_14deeb6a0;
  lVar1 = FUN_14deeb6a0();
  FUN_160fb3480(sVar2 + 0x2e9,*(longlong *)(unaff_R12 + -0x40) + lVar1);
  return;
}



// FUNCTION 14dc39f51 FUN_14dc39f51 body=26 status=ok
// SIG undefined FUN_14dc39f51(void)

void FUN_14dc39f51(void)

{
  return;
}



// FUNCTION 14dc39fd6 FUN_14dc39fd6 body=156 status=ok
// SIG undefined FUN_14dc39fd6(void)

void FUN_14dc39fd6(void)

{
  return;
}



// FUNCTION 14dc3a25b FUN_14dc3a25b body=143 status=ok
// SIG undefined FUN_14dc3a25b(void)

/* WARNING: Removing unreachable block (ram,0x0001668aa763) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a2e4) */
/* WARNING: Removing unreachable block (ram,0x00014d7a7058) */
/* WARNING: Removing unreachable block (ram,0x00014d7a705a) */

undefined *
FUN_14dc3a25b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong in_RAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined8 in_R10;
  undefined8 uStackX_8;
  longlong lStackX_18;
  
  puVar1 = (ulonglong *)(lStackX_18 + -8);
  *puVar1 = 0x33329af5;
  *puVar1 = *puVar1 ^ 0x33329af5;
  *puVar1 = *puVar1 + in_RAX;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RDI;
  *(undefined8 *)(lStackX_18 + -0x18) = in_R10;
  *(undefined8 *)(lStackX_18 + -0x10) = unaff_RBP;
  *(undefined8 *)(lStackX_18 + -0x10) = uStackX_8;
  *(undefined8 *)(lStackX_18 + -0x18) = uStackX_8;
  *(undefined8 *)(lStackX_18 + -0x20) = param_4;
  *(undefined8 *)(lStackX_18 + -0x28) = param_1;
  *(undefined8 *)(lStackX_18 + -0x30) = param_1;
  *(undefined **)(lStackX_18 + -0x28) = &DAT_165010ef0;
  return &DAT_1575720bb;
}



// FUNCTION 14dc3a2ea FUN_14dc3a2ea body=141 status=ok
// SIG undefined FUN_14dc3a2ea(void)

uint FUN_14dc3a2ea(void)

{
  uint in_EAX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 in_R9;
  longlong lStackX_18;
  
  *(undefined8 *)(lStackX_18 + -8) = unaff_RBP;
  *(undefined8 *)(lStackX_18 + -0x10) = in_R9;
  *(undefined8 *)(lStackX_18 + -0x18) = in_R9;
  *(undefined8 *)(lStackX_18 + -0x10) = 0;
  *(longlong *)(lStackX_18 + -0x10) =
       *(longlong *)(lStackX_18 + -0x10) - *(longlong *)(lStackX_18 + -8);
  *(longlong *)(lStackX_18 + -0x10) = -*(longlong *)(lStackX_18 + -0x10);
  *(undefined8 *)(lStackX_18 + -0x18) = unaff_RDI;
  *(undefined8 *)(lStackX_18 + -0x20) = unaff_RSI;
  *(undefined1 **)(lStackX_18 + -8) = &LAB_14dc3a391;
  *(longlong *)(lStackX_18 + -0x10) = lStackX_18 + -8;
  out(0x2f,in_EAX);
  return in_EAX ^ 0x73;
}



// FUNCTION 14dc3a3b4 FUN_14dc3a3b4 body=593 status=ok
// SIG undefined FUN_14dc3a3b4(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3a40a) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a453) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a459) */
/* WARNING: Removing unreachable block (ram,0x000156a65b6e) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a4d1) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a4d7) */
/* WARNING: Removing unreachable block (ram,0x00014dc3a4dc) */

void FUN_14dc3a3b4(void)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_165f9b4d4(~((~in_RAX | *(ulonglong *)(unaff_R12 + -0x58)) &
                 (~*(ulonglong *)(unaff_R12 + -0x58) | in_RAX)));
  return;
}



// FUNCTION 14dc3a60c FUN_14dc3a60c body=154 status=ok
// SIG undefined FUN_14dc3a60c(void)

void FUN_14dc3a60c(undefined8 param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  longlong unaff_R12;
  
  FUN_16674ab27(param_1,(param_2 ^ 0x14e1a474) + *(longlong *)(unaff_R12 + -0x78) ^ in_RAX);
  return;
}



// FUNCTION 14dc3a6ae FUN_14dc3a6ae body=189 status=ok
// SIG undefined FUN_14dc3a6ae(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3a741) */

void FUN_14dc3a6ae(ulonglong param_1)

{
  undefined8 local_res18;
  
  if (-1 < (longlong)((~local_res18 | ~param_1) & (local_res18 | param_1))) {
    FUN_16224227c();
    return;
  }
  FUN_16224227c();
  return;
}



// FUNCTION 14dc3a76b FUN_14dc3a76b body=14 status=ok
// SIG undefined FUN_14dc3a76b(void)

void FUN_14dc3a76b(void)

{
  thunk_FUN_165306916();
  return;
}



// FUNCTION 14dc3a779 FUN_14dc3a779 body=76 status=ok
// SIG undefined FUN_14dc3a779(void)

void FUN_14dc3a779(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x15b7cd92b)(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14dc3a7c5 FUN_14dc3a7c5 body=171 status=ok
// SIG undefined FUN_14dc3a7c5(void)

void FUN_14dc3a7c5(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong unaff_R13;
  ulonglong unaff_R15;
  
  FUN_16169107c(0x49,0xffffffffffffff5a,*(ulonglong *)(unaff_R13 + -0x88) ^ unaff_R15,
                ~param_4 & param_3);
  return;
}



// FUNCTION 14dc3aa42 FUN_14dc3aa42 body=129 status=ok
// SIG undefined FUN_14dc3aa42(void)

void FUN_14dc3aa42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_166b27080(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14dc3acb6 FUN_14dc3acb6 body=172 status=ok
// SIG undefined FUN_14dc3acb6(void)

undefined8 FUN_14dc3acb6(void)

{
  longlong unaff_RSI;
  
  return *(undefined8 *)(unaff_RSI + -0x50);
}



// FUNCTION 14dc3ae0c FUN_14dc3ae0c body=133 status=ok
// SIG undefined FUN_14dc3ae0c(void)

void FUN_14dc3ae0c(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  FUN_14dbf6784(param_1,FUN_14dbf6784,(-~param_1 - (~param_3 + 2)) + (param_3 & param_1) * -2);
  return;
}



// FUNCTION 14dc3ae93 FUN_14dc3ae93 body=321 status=ok
// SIG undefined FUN_14dc3ae93(void)

/* WARNING: Removing unreachable block (ram,0x00014dc3af2f) */

void FUN_14dc3ae93(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong unaff_RSI;
  longlong unaff_R12;
  
  uVar1 = ~in_RAX & 0xffffffffffffffff - *(ulonglong *)(unaff_R12 + -0x78) | in_RAX;
  if (*(longlong *)(unaff_R12 + -0x50) == 0) {
    FUN_1657b8e58();
    return;
  }
  FUN_166233b14((unaff_RSI | param_1) & (~param_1 | in_RAX) ^ 0xffffffffffffffff,
                ~((~uVar1 | ~in_RAX | *(ulonglong *)(unaff_R12 + -0x78)) + uVar1 + 1),param_3);
  return;
}


