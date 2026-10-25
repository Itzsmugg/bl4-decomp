// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14256a4b0 FUN_14256a4b0 body=329 status=ok
// SIG undefined FUN_14256a4b0(void)

undefined8 * FUN_14256a4b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  FUN_142568fb0(param_2,param_1);
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  FUN_14256d6e0(param_2 + 2,param_3 + 2);
  FUN_14256d6e0(param_2 + 5,param_3 + 5);
  param_2[0x10] = param_3[0x10];
  uVar3 = *(undefined4 *)(param_3 + 8);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar5 = *(undefined4 *)(param_3 + 9);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar7 = *(undefined4 *)(param_3 + 10);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar9 = *(undefined4 *)(param_3 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uVar11 = *(undefined4 *)(param_3 + 0xc);
  uVar12 = *(undefined4 *)((longlong)param_3 + 100);
  uVar13 = *(undefined4 *)(param_3 + 0xd);
  uVar14 = *(undefined4 *)((longlong)param_3 + 0x6c);
  uVar15 = *(undefined4 *)((longlong)param_3 + 0x74);
  uVar16 = *(undefined4 *)(param_3 + 0xf);
  uVar17 = *(undefined4 *)((longlong)param_3 + 0x7c);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar15;
  *(undefined4 *)(param_2 + 0xf) = uVar16;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar17;
  *(undefined4 *)(param_2 + 0xc) = uVar11;
  *(undefined4 *)((longlong)param_2 + 100) = uVar12;
  *(undefined4 *)(param_2 + 0xd) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar14;
  *(undefined4 *)(param_2 + 10) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar8;
  *(undefined4 *)(param_2 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar10;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  *(undefined4 *)(param_2 + 9) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar6;
  if (param_2 != param_3) {
    if (((*(int *)(param_2 + 0x11) == 2) || (*(int *)(param_2 + 0x11) == 1)) &&
       (puVar2 = (undefined8 *)param_2[0x12], puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    iVar1 = *(int *)(param_3 + 0x11);
    *(int *)(param_2 + 0x11) = iVar1;
    if (iVar1 - 1U < 2) {
      param_2[0x12] = param_3[0x12];
      param_3[0x12] = 0;
    }
  }
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  param_2[0x13] = param_3[0x13];
  FUN_14256d110(param_2 + 0x15,param_3 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc4);
  uVar4 = *(undefined4 *)(param_3 + 0x19);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xcc);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xcc);
  uVar7 = *(undefined4 *)(param_3 + 0x1a);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0xd4);
  uVar9 = *(undefined4 *)(param_3 + 0x1b);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar3;
  *(undefined4 *)(param_2 + 0x19) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xcc) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xcc) = uVar6;
  *(undefined4 *)(param_2 + 0x1a) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar8;
  *(undefined4 *)(param_2 + 0x1b) = uVar9;
  FUN_1424a3e60(param_2 + 0x1c,param_3 + 0x1c);
  return param_2;
}



// FUNCTION 14256a600 Unwind@14256a600 body=34 status=ok
// SIG undefined Unwind@14256a600(void)

void Unwind_14256a600(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256a630 FUN_14256a630 body=59 status=ok
// SIG undefined FUN_14256a630(void)

longlong FUN_14256a630(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  FUN_14256a900(param_2,param_1);
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  *(undefined8 *)(param_2 + 0x7c) = *param_3;
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_3 + 1);
  return param_2;
}



// FUNCTION 14256a670 FUN_14256a670 body=196 status=ok
// SIG undefined FUN_14256a670(void)

undefined8 * FUN_14256a670(int *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  
  if (*param_3 < 1) {
    if (*param_1 == 3) {
      iVar1 = param_1[1];
    }
    else if (param_1[0x10] == 9) {
      iVar1 = param_1[0x12];
    }
    else if (param_1[0x1c] == -3) {
      iVar1 = param_1[0x1d];
    }
    else if ((char)param_1[0x21] == '\0') {
      if (((1 < param_1[0x22] - 1U) || (iVar1 = 7, *(longlong *)(param_1 + 0x24) != 0)) &&
         (iVar1 = param_1[0x2e], iVar1 == 0)) {
        FUN_142624170(param_2);
        return param_2;
      }
    }
    else {
      iVar1 = param_1[0x1f];
    }
    *param_3 = iVar1;
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  else {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  return param_2;
}



// FUNCTION 14256a740 Unwind@14256a740 body=32 status=ok
// SIG undefined Unwind@14256a740(void)

void Unwind_14256a740(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256a760 Unwind@14256a760 body=32 status=ok
// SIG undefined Unwind@14256a760(void)

void Unwind_14256a760(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256a780 FUN_14256a780 body=250 status=ok
// SIG undefined FUN_14256a780(void)

undefined4 * FUN_14256a780(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 1) = 0;
  FUN_14256d680();
  FUN_14256d680();
  param_1[0x10] = 0;
  param_1[0x18] = 4;
  *(undefined2 *)(param_1 + 0x19) = 0xfffd;
  param_1[0x1c] = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x700000005;
  param_1[0x28] = 2;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 3;
  FUN_1424a3c00(param_1 + 0x38);
  return param_1;
}



// FUNCTION 14256a880 Unwind@14256a880 body=86 status=ok
// SIG undefined Unwind@14256a880(void)

void Unwind_14256a880(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_14256d170(*(undefined8 *)(param_2 + 0x30));
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x88);
  if (((iVar1 == 2) || (iVar1 == 1)) &&
     (puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x38) + 0x90), puVar2 != (undefined8 *)0x0))
  {
    (**(code **)*puVar2)(puVar2,1);
  }
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256a8e0 Unwind@14256a8e0 body=32 status=ok
// SIG undefined Unwind@14256a8e0(void)

void Unwind_14256a8e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256a900 FUN_14256a900 body=251 status=ok
// SIG undefined FUN_14256a900(void)

undefined8 * FUN_14256a900(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14256d6a0(param_1 + 2,param_2 + 2);
  FUN_14256d6a0(param_1 + 5,param_2 + 5);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 9);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar5 = *(undefined4 *)(param_2 + 10);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0xb);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar9 = *(undefined4 *)(param_2 + 0xc);
  uVar10 = *(undefined4 *)((longlong)param_2 + 100);
  uVar11 = *(undefined4 *)(param_2 + 0xd);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar14 = *(undefined4 *)(param_2 + 0xf);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar13;
  *(undefined4 *)(param_1 + 0xf) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar15;
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  *(undefined4 *)((longlong)param_1 + 100) = uVar10;
  *(undefined4 *)(param_1 + 0xd) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar12;
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  FUN_1425696f0(param_1 + 0x11,param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  FUN_14256cf90(param_1 + 0x15,param_2 + 0x15);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar3 = *(undefined4 *)(param_2 + 0x19);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0x1a);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar7 = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  FUN_1424a3ce0(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 14256aa00 Unwind@14256aa00 body=34 status=ok
// SIG undefined Unwind@14256aa00(void)

void Unwind_14256aa00(undefined8 param_1,longlong param_2)

{
  FUN_14256d170(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14256aa30 Unwind@14256aa30 body=34 status=ok
// SIG undefined Unwind@14256aa30(void)

void Unwind_14256aa30(undefined8 param_1,longlong param_2)

{
  FUN_1425697e0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14256aa60 Unwind@14256aa60 body=34 status=ok
// SIG undefined Unwind@14256aa60(void)

void Unwind_14256aa60(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14256aa90 Unwind@14256aa90 body=34 status=ok
// SIG undefined Unwind@14256aa90(void)

void Unwind_14256aa90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256aac0 FUN_14256aac0 body=137 status=ok
// SIG undefined FUN_14256aac0(void)

undefined8 * FUN_14256aac0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::MicroProps::vftable;
  param_1[0x18] = icu_64::number::impl::MultiplierFormatHandler::vftable;
  FUN_14256d170(param_1 + 0x19);
  FUN_1426276d0(param_1 + 0x18);
  FUN_142629780(param_1 + 0x16);
  FUN_142629780(param_1 + 0x14);
  FUN_142629780(param_1 + 0x11);
  FUN_1426276d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14256ab50 FUN_14256ab50 body=182 status=ok
// SIG undefined FUN_14256ab50(void)

void FUN_14256ab50(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  
  if (param_1 == param_3) {
    uVar14 = 1;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_3 + 0x80) = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_3 + 0x70) = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_3 + 0x60) = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_3 + 0x50) = uVar12;
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    uVar7 = *(undefined4 *)(param_1 + 0x30);
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    uVar9 = *(undefined4 *)(param_1 + 0x3c);
    uVar10 = *(undefined4 *)(param_1 + 0x40);
    uVar11 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_3 + 0x3c) = uVar9;
    *(undefined4 *)(param_3 + 0x40) = uVar10;
    *(undefined4 *)(param_3 + 0x44) = uVar11;
    *(undefined4 *)(param_3 + 0x28) = uVar5;
    *(undefined4 *)(param_3 + 0x2c) = uVar6;
    *(undefined4 *)(param_3 + 0x30) = uVar7;
    *(undefined4 *)(param_3 + 0x34) = uVar8;
    *(undefined4 *)(param_3 + 0x18) = uVar1;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined4 *)(param_3 + 0x24) = uVar4;
    *(undefined8 *)(param_3 + 8) = uVar12;
    *(undefined8 *)(param_3 + 0x10) = uVar13;
    uVar1 = *(undefined4 *)(param_1 + 0x94);
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_3 + 0x94) = uVar1;
    *(undefined4 *)(param_3 + 0x98) = uVar2;
    *(undefined4 *)(param_3 + 0x9c) = uVar3;
    *(undefined1 *)(param_3 + 0xa8) = *(undefined1 *)(param_1 + 0xa8);
    *(undefined1 *)(param_3 + 0xb8) = *(undefined1 *)(param_1 + 0xb8);
    FUN_14256d040(param_3 + 200,param_1 + 200);
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    uVar14 = *(undefined1 *)(param_1 + 0xe8);
  }
  *(undefined1 *)(param_3 + 0xe8) = uVar14;
  return;
}



// FUNCTION 14256ac10 FUN_14256ac10 body=60 status=ok
// SIG undefined FUN_14256ac10(void)

undefined8 * FUN_14256ac10(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::MultiplierFormatHandler::vftable;
  FUN_14256d170(param_1 + 1);
  FUN_1426276d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256ac50 FUN_14256ac50 body=357 status=ok
// SIG undefined FUN_14256ac50(void)

undefined1 * FUN_14256ac50(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[8] = 1;
  FUN_14256de50();
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x38] = 1;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x88) = 2;
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 200) = 2;
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x108) = 2;
  *(undefined ***)(param_1 + 0x140) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x148) = 2;
  param_1[0x180] = 1;
  *(undefined ***)(param_1 + 0x188) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 400) = 2;
  param_1[0x1cc] = 1;
  *(undefined ***)(param_1 + 0x1e0) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1e8) = 2;
  *(undefined ***)(param_1 + 0x220) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x228) = 2;
  *(undefined ***)(param_1 + 0x260) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x268) = 2;
  *(undefined ***)(param_1 + 0x2a0) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  param_1[0x2e8] = 1;
  FUN_14256ae50(param_1);
  return param_1;
}



// FUNCTION 14256adc0 Unwind@14256adc0 body=142 status=ok
// SIG undefined Unwind@14256adc0(void)

void Unwind_14256adc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x68));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x58));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x50));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x78) + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  thunk_FUN_1424b70d0(uVar1);
  return;
}



// FUNCTION 14256ae50 FUN_14256ae50 body=291 status=ok
// SIG undefined FUN_14256ae50(void)

void FUN_14256ae50(undefined1 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 1;
  param_1[8] = 1;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x38] = 1;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  param_1[0x4c] = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x74) = 1;
  FUN_1424a7130(param_1 + 0x80);
  FUN_1424a7130(param_1 + 0xc0);
  FUN_1424a7130(param_1 + 0x100);
  FUN_1424a7130(param_1 + 0x140);
  param_1[0x180] = 1;
  FUN_1424a7130(param_1 + 0x188);
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  param_1[0x1cc] = 1;
  *(undefined2 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 2;
  FUN_1424a7130(param_1 + 0x1e0);
  FUN_1424a7130(param_1 + 0x220);
  FUN_1424a7130(param_1 + 0x260);
  FUN_1424a7130(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  param_1[0x2e8] = 1;
  *(undefined4 *)(param_1 + 0x2f0) = 0xffffffff;
  param_1[0x2f4] = 0;
  return;
}



// FUNCTION 14256af80 FUN_14256af80 body=943 status=ok
// SIG undefined FUN_14256af80(void)

uint FUN_14256af80(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  
  if (*param_1 == '\0') {
    if ((*param_2 == '\0') && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) goto LAB_14256afa4;
  }
  else if (*param_2 != '\0') {
LAB_14256afa4:
    cVar1 = param_2[8];
    if (param_1[8] == '\0') {
      if (cVar1 != '\0') goto LAB_14256b166;
      cVar1 = FUN_14256d7b0(param_1 + 0x10,param_2 + 0x10);
    }
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_2 + 0x30))) {
      if (param_1[0x38] == '\0') {
        if ((param_2[0x38] == '\0') && (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c)))
        goto LAB_14256afde;
      }
      else if (param_2[0x38] != '\0') {
LAB_14256afde:
        if (((((param_1[0x41] == param_2[0x41]) && (param_1[0x42] == param_2[0x42])) &&
             (param_1[0x43] == param_2[0x43])) &&
            (((*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44) &&
              (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))) &&
             ((*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c) &&
              ((*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60) &&
               (*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68))))))))) &&
           ((*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70) &&
            ((((*(int *)(param_1 + 0x74) == *(int *)(param_2 + 0x74) &&
               (*(int *)(param_1 + 0x78) == *(int *)(param_2 + 0x78))) &&
              (cVar1 = FUN_14626a19a(param_1 + 0x80,param_2 + 0x80), cVar1 != '\0')) &&
             (cVar1 = FUN_14626a19a(param_1 + 0x100,param_2 + 0x100), cVar1 != '\0')))))) {
          if (param_1[0x180] == '\0') {
            if ((param_2[0x180] == '\0') && (*(int *)(param_1 + 0x184) == *(int *)(param_2 + 0x184))
               ) goto LAB_14256b0b7;
          }
          else if (param_2[0x180] != '\0') {
LAB_14256b0b7:
            cVar1 = FUN_14626a19a(param_1 + 0x188,param_2 + 0x188);
            if (((cVar1 != '\0') &&
                (cVar1 = FUN_14626a19a(param_1 + 0x1e0,param_2 + 0x1e0), cVar1 != '\0')) &&
               (cVar1 = FUN_14626a19a(param_1 + 0x260,param_2 + 0x260), cVar1 != '\0')) {
              if ((*(double *)(param_1 + 0x2e0) == *(double *)(param_2 + 0x2e0)) &&
                 (!NAN(*(double *)(param_1 + 0x2e0)) && !NAN(*(double *)(param_2 + 0x2e0)))) {
                if (param_1[0x2e8] == '\0') {
                  if ((param_2[0x2e8] == '\0') &&
                     (*(int *)(param_1 + 0x2ec) == *(int *)(param_2 + 0x2ec))) goto LAB_14256b12c;
                }
                else if (param_2[0x2e8] != '\0') {
LAB_14256b12c:
                  if (*(int *)(param_1 + 0x2f0) == *(int *)(param_2 + 0x2f0)) {
                    uVar2 = (uint)(param_1[0x2f4] == param_2[0x2f4]);
                    goto LAB_14256b168;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14256b166:
  uVar2 = 0;
LAB_14256b168:
  if (param_3 != '\0') {
    return uVar2;
  }
  if ((((((byte)uVar2 & *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) == 1) &&
       (param_1[0x4c] == param_2[0x4c])) && (*(int *)(param_1 + 100) == *(int *)(param_2 + 100))) &&
     (((((*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54) &&
         (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))) &&
        ((*(int *)(param_1 + 0x6c) == *(int *)(param_2 + 0x6c) &&
         ((cVar1 = FUN_14626a19a(param_1 + 0xc0,param_2 + 0xc0), cVar1 != '\0' &&
          (cVar1 = FUN_14626a19a(param_1 + 0x140,param_2 + 0x140), cVar1 != '\0')))))) &&
       (cVar1 = FUN_14626a19a(param_1 + 0x220,param_2 + 0x220), cVar1 != '\0')) &&
      ((((cVar1 = FUN_14626a19a(param_1 + 0x2a0,param_2 + 0x2a0), cVar1 != '\0' &&
         (param_1[0x40] == param_2[0x40])) && (param_1[0x1c8] == param_2[0x1c8])) &&
       (param_1[0x1c9] == param_2[0x1c9])))))) {
    if (param_1[0x1cc] == '\0') {
      if (param_2[0x1cc] != '\0') {
        return 0;
      }
      if (*(int *)(param_1 + 0x1d0) != *(int *)(param_2 + 0x1d0)) {
        return 0;
      }
    }
    else if (param_2[0x1cc] == '\0') {
      return 0;
    }
    if ((param_1[0x1d4] == param_2[0x1d4]) && (param_1[0x1d5] == param_2[0x1d5])) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1d8) >> 8),
                      *(int *)(param_1 + 0x1d8) == *(int *)(param_2 + 0x1d8));
    }
  }
  return 0;
}



// FUNCTION 14256b330 FUN_14256b330 body=92 status=ok
// SIG undefined FUN_14256b330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14256b330(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_14c7936b0 != 2) {
    cVar1 = FUN_142501800(&DAT_14c7936b0);
    if (cVar1 != '\0') {
      FUN_14256ac50(&DAT_14c7933b8);
      _DAT_14c7936b4 = 0;
      FUN_1425019c0(&DAT_14c7936b0);
    }
  }
  FUN_14256af80(param_1,&DAT_14c7933b8,1);
  return;
}



// FUNCTION 14256b390 FUN_14256b390 body=77 status=ok
// SIG undefined FUN_14256b390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14256b390(void)

{
  char cVar1;
  
  if (DAT_14c7936b0 != 2) {
    cVar1 = FUN_142501800(&DAT_14c7936b0);
    if (cVar1 != '\0') {
      FUN_14256ac50(&DAT_14c7933b8);
      _DAT_14c7936b4 = 0;
      FUN_1425019c0(&DAT_14c7936b0);
    }
  }
  return &DAT_14c7933b8;
}



// FUNCTION 14256b3e0 FUN_14256b3e0 body=2774 status=ok
// SIG undefined FUN_14256b3e0(void)

undefined8 *
FUN_14256b3e0(undefined8 *param_1,char *param_2,longlong param_3,longlong *param_4,longlong param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  char cVar24;
  undefined4 uVar25;
  undefined1 local_2e8 [224];
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  char local_1bc;
  undefined1 local_188 [64];
  undefined1 local_148 [72];
  undefined1 local_100 [32];
  longlong *local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  short local_80;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  uint local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *(undefined4 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  local_a0 = param_1 + 2;
  FUN_14256d680();
  local_98 = param_1 + 5;
  FUN_14256d680();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined2 *)((longlong)param_1 + 100) = 0xfffd;
  *(undefined4 *)(param_1 + 0xe) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0xffff;
  local_a8 = param_1 + 0x11;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x700000005;
  *(undefined4 *)(param_1 + 0x14) = 2;
  local_b8 = param_1 + 0x15;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 3;
  local_68 = param_1;
  FUN_1424a3c00(param_1 + 0x1c);
  FUN_1424a3ce0(local_2e8,param_3 + 0x750);
  FUN_142569810(local_a8,param_3);
  if (*(longlong *)(param_2 + 0x30) == 0) {
LAB_14256b576:
    *(undefined1 *)(param_4 + 0xef) = 1;
    FUN_14256c280(param_4,param_2,param_6);
    plVar18 = param_4;
  }
  else {
    uVar13 = FUN_14256e6e0();
    local_68[0x19] = uVar13;
    if (*(longlong *)(param_2 + 0x30) == 0) goto LAB_14256b576;
    FUN_14256c720(param_4 + 0x22,*(longlong *)(param_2 + 0x30),param_2,param_6);
    *(undefined1 *)((longlong)param_4 + 0x109) = 1;
    plVar18 = param_4 + 0x22;
  }
  local_e0 = local_68 + 0x18;
  *local_e0 = (longlong)plVar18;
  cVar7 = '\x01';
  if (((param_2[8] != '\0') && (*(longlong *)(param_2 + 0x30) == 0)) && (param_2[0x38] != '\0')) {
    cVar7 = (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  FUN_14262bc50(local_d8,param_2,local_2e8,param_6);
  uVar16 = 0;
  if (param_2[0x38] == '\0') {
    uVar16 = *(undefined4 *)(param_2 + 0x3c);
  }
  if (cVar7 != '\0') {
    FUN_14256d6e0(local_a0,local_d8);
  }
  FUN_14256dd50(local_208,local_d8);
  uVar13 = param_6;
  FUN_14262b900(&local_1e8,local_208,local_2e8,param_3,param_6);
  uVar25 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_ac = uVar16;
  FUN_14256def0(param_4 + 0xf0,&local_1e8);
  FUN_142503340(param_4 + 0xf4,&local_1c8);
  FUN_1424a7ca0(param_4 + 0xfc,local_188);
  FUN_1424a7ca0(param_4 + 0x104,local_148);
  FUN_140859a90(local_148);
  FUN_140859a90(local_188);
  if (local_1bc != '\0') {
    FUN_1424da110(local_1c8);
  }
  thunk_FUN_1424b70d0(&local_1e8);
  local_68[0x1a] = param_4 + 0xf0;
  uVar12 = *(uint *)(param_2 + 0x54);
  uVar23 = *(uint *)(param_2 + 100);
  uVar11 = *(uint *)(param_2 + 0x70);
  uVar22 = (ulonglong)uVar11;
  uVar3 = *(uint *)(param_2 + 0x5c);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,4);
  if (param_2[0x2e8] == '\0') {
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 0x2ec));
  }
  uVar4 = *(uint *)(param_2 + 0x58);
  uVar21 = *(uint *)(param_2 + 0x6c);
  dVar2 = *(double *)(param_2 + 0x2e0);
  cVar24 = (uVar23 & uVar12) != 0xffffffff;
  uVar9 = uVar23;
  uVar14 = uVar12;
  local_a0._0_4_ = uVar3;
  if ((cVar7 != '\0') && ((uVar23 == 0xffffffff || (uVar12 == 0xffffffff)))) {
    local_98 = (undefined8 *)CONCAT71(local_98._1_7_,cVar7);
    local_6c = CONCAT31(local_6c._1_3_,cVar24);
    uVar10 = FUN_14253d8b0(local_c0,local_ac,param_6);
    cVar24 = (char)local_6c;
    uVar9 = uVar10;
    cVar7 = (char)local_98;
    uVar14 = uVar10;
    if ((uVar23 != 0xffffffff) || (uVar12 != 0xffffffff)) {
      if (uVar23 == 0xffffffff) {
        uVar14 = uVar12;
        if ((int)uVar12 <= (int)uVar10) {
          uVar9 = uVar12;
        }
      }
      else {
        uVar9 = uVar23;
        if ((int)uVar10 < (int)uVar23) {
          uVar14 = uVar23;
        }
      }
    }
  }
  if ((uVar21 == 0) && (uVar14 != 0)) {
    local_6c = 1;
    if (1 < (int)uVar9) {
      local_6c = uVar9;
    }
    uVar12 = local_6c;
    if ((int)local_6c < (int)uVar14) {
      uVar12 = uVar14;
    }
    if ((int)uVar14 < 0) {
      uVar12 = 0xffffffff;
    }
    uVar21 = uVar4;
    if (999 < (int)uVar4) {
      uVar21 = 0xffffffff;
    }
    if ((int)uVar4 < 0) {
      uVar21 = 0xffffffff;
    }
    uVar23 = 0;
  }
  else {
    local_6c = 0;
    if (0 < (int)uVar9) {
      local_6c = uVar9;
    }
    uVar12 = local_6c;
    if ((int)local_6c < (int)uVar14) {
      uVar12 = uVar14;
    }
    if ((int)uVar14 < 0) {
      uVar12 = 0xffffffff;
    }
    uVar23 = 1;
    if (0xfffffc18 < uVar21 - 1000) {
      uVar23 = uVar21;
    }
    uVar21 = 0xffffffff;
    if (((-1 < (int)uVar4) && (uVar21 = uVar23, (int)uVar23 <= (int)uVar4)) &&
       (uVar21 = 0xffffffff, uVar4 < 1000)) {
      uVar21 = uVar4;
    }
  }
  local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
  local_98 = (undefined8 *)uVar22;
  if (param_2[0x38] == '\0') {
    FUN_142621330(local_100,local_ac);
    FUN_142621540(local_100,&local_90,local_d8);
  }
  else {
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      if ((uVar11 & uVar3) == 0xffffffff) {
        if (cVar24 == '\0') {
          local_a0._0_4_ = 0xffffffff;
          if (cVar7 != '\0') {
            FUN_142621330(&local_90,local_ac);
            local_1e8 = CONCAT44(uStack_8c,local_90);
            uStack_1e0 = CONCAT44(uStack_84,uStack_88);
            local_1d8 = CONCAT62(uStack_7e,local_80);
            uStack_1d0 = uStack_78;
          }
        }
        else {
          FUN_142620f90(&local_90,local_6c,uVar12);
          local_1e8 = CONCAT44(uStack_8c,local_90);
          uStack_1e0 = CONCAT44(uStack_84,uStack_88);
          local_1d8 = CONCAT62(uStack_7e,local_80);
          uStack_1d0 = uStack_78;
          local_a0._0_4_ = 0xffffffff;
        }
        local_98 = (undefined8 *)0xffffffff;
      }
      else {
        if (0x3e6 < (int)uVar11) {
          uVar11 = 999;
        }
        local_98 = (undefined8 *)0x1;
        if (1 < (int)uVar11) {
          local_98 = (undefined8 *)(ulonglong)uVar11;
        }
        uVar11 = 999;
        if (((-1 < (int)(uint)local_a0) &&
            (uVar11 = (uint)local_98, (uint)local_98 <= (uint)local_a0)) &&
           (uVar11 = 999, (int)(uint)local_a0 < 999)) {
          uVar11 = (uint)local_a0;
        }
        FUN_142621090(&local_90,local_98,uVar11);
        local_1e8 = CONCAT44(uStack_8c,local_90);
        uStack_1e0 = CONCAT44(uStack_84,uStack_88);
        local_1d8 = CONCAT62(uStack_7e,local_80);
        uStack_1d0 = uStack_78;
        local_a0._0_4_ = uVar11;
      }
      goto LAB_14256b99c;
    }
    cVar7 = FUN_142566810(dVar2,uVar12);
    if (cVar7 == '\0') {
      FUN_142621240(&local_90,SUB84(dVar2,0),local_6c);
    }
    else {
      FUN_142620f90(&local_90,local_6c,uVar12);
    }
  }
  local_1e8 = CONCAT44(uStack_8c,local_90);
  uStack_1e0 = CONCAT44(uStack_84,uStack_88);
  local_1d8 = CONCAT62(uStack_7e,local_80);
  uStack_1d0 = uStack_78;
LAB_14256b99c:
  puVar5 = local_68;
  plVar18 = local_68 + 8;
  iVar17 = (int)local_1e8;
  if ((int)local_1e8 != 0) {
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_a8._0_4_);
    *plVar18 = local_1e8;
    local_68[9] = uStack_1e0;
    local_68[10] = local_1d8;
    *(undefined4 *)(local_68 + 0xb) = local_a8._0_4_;
    *(undefined4 *)((longlong)local_68 + 0x5c) = uStack_1d0._4_4_;
  }
  FUN_142607c80(&local_90,uVar23,uVar21,param_2[0x43]);
  puVar6 = local_68;
  puVar1 = (undefined8 *)((longlong)local_68 + 0x7c);
  *(undefined4 *)((longlong)local_68 + 0x84) = uStack_88;
  *puVar1 = CONCAT44(uStack_8c,local_90);
  FUN_14262b510(&local_90,param_2);
  *(undefined4 *)((longlong)local_68 + 0x6c) = uStack_88;
  *(ulonglong *)((longlong)local_68 + 100) = CONCAT44(uStack_8c,local_90);
  if (0 < *(int *)(param_2 + 0x44)) {
    FUN_14262bd00(&local_90,param_2);
    *(undefined4 *)(local_68 + 0xf) = uStack_88;
    local_68[0xe] = CONCAT44(uStack_8c,local_90);
  }
  *(uint *)(local_68 + 0x14) = (uint)(byte)param_2[0x41];
  *(uint *)((longlong)local_68 + 0x9c) = (uint)(byte)param_2[0x2f4];
  if (*(int *)(param_2 + 0x60) != -1) {
    if ((int)uVar21 < 9) {
      if ((1 < (int)uVar23) && ((int)uVar23 < (int)uVar21)) {
        FUN_142607ca0(local_100,1);
        FUN_142607cd0(local_100,&local_90,uVar21);
        *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_88;
        *puVar1 = CONCAT44(uStack_8c,local_90);
        uVar23 = 1;
      }
    }
    else {
      FUN_142607ca0(local_100,uVar23);
      FUN_142607cd0(local_100,&local_90,uVar23);
      *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_88;
      *puVar1 = CONCAT44(uStack_8c,local_90);
      uVar21 = uVar23;
    }
    uVar11 = 0xffffffff;
    if (-1 < (int)uVar21) {
      uVar11 = uVar21;
    }
    FUN_14262bfd0(&local_90,uVar11,uVar11 == uVar23,*(undefined2 *)(param_2 + 0x60),
                  CONCAT44(uVar25,(uint)(byte)param_2[0x42]));
    *(undefined4 *)(local_68 + 1) = uStack_88;
    *local_68 = CONCAT44(uStack_8c,local_90);
    if (*(int *)(local_68 + 8) == 2) {
      iVar20 = *(int *)(param_2 + 0x54);
      iVar19 = *(int *)(param_2 + 0x6c);
      if (iVar19 == 0 && iVar20 == 0) {
        FUN_142620f50(&local_90);
      }
      else if (iVar19 == 0 && *(int *)(param_2 + 100) == 0) {
        FUN_142621090(&local_90,1,iVar20 + 1);
      }
      else {
        iVar15 = 1;
        if (iVar19 < 2) {
          iVar15 = iVar19;
        }
        if (*(int *)(param_2 + 0x58) <= iVar19) {
          iVar15 = iVar19;
        }
        FUN_142621090(&local_90,iVar15 + *(int *)(param_2 + 100),iVar20 + iVar19);
      }
      puVar5[10] = CONCAT62(uStack_7e,local_80);
      puVar5[0xb] = uStack_78;
      *plVar18 = CONCAT44(uStack_8c,local_90);
      puVar5[9] = CONCAT44(uStack_84,uStack_88);
      *(undefined4 *)(local_68 + 0xb) = local_a8._0_4_;
    }
  }
  if (*param_2 == '\0') {
    if (*(int *)(param_2 + 4) == 1) {
      FUN_14262c030(&local_90);
    }
    else {
      FUN_14262c010(&local_90);
    }
    *(undefined4 *)(local_68 + 1) = uStack_88;
    *local_68 = CONCAT44(uStack_8c,local_90);
    *local_e0 = 0;
  }
  iVar20 = *(int *)(param_2 + 0x74);
  iVar19 = *(int *)(param_2 + 0x78) + *(int *)(param_2 + 0x50);
  if ((iVar19 == 0) || (iVar20 == 1)) {
    if (iVar19 == 0) {
      if (iVar20 == 1) {
        FUN_14256d1a0(&local_90);
      }
      else {
        FUN_14256d210(&local_90,SUB84((double)iVar20,0));
      }
    }
    else {
      FUN_14256d1c0(&local_90,iVar19);
    }
  }
  else {
    FUN_14256d380(&local_90,SUB84((double)iVar20,0));
  }
  FUN_14256d110(local_b8,&local_90);
  FUN_14256d170(&local_90);
  if (param_5 != 0) {
    FUN_14256def0(param_5 + 0x10,local_d8);
    *(undefined1 *)(param_5 + 8) = 0;
    *(undefined4 *)(param_5 + 0x2ec) = local_a8._0_4_;
    *(undefined1 *)(param_5 + 0x2e8) = 0;
    *(uint *)(param_5 + 0x6c) = uVar23;
    uVar23 = 0x7fffffff;
    if (uVar21 != 0xffffffff) {
      uVar23 = uVar21;
    }
    *(uint *)(param_5 + 0x58) = uVar23;
    if (iVar17 == 8) {
      FUN_1426213f0(&local_1e8,&local_90,local_d8,param_6);
      uStack_1e0 = CONCAT44(uStack_84,uStack_88);
      iVar17 = local_90;
      local_1d8._0_2_ = local_80;
    }
    iVar20 = (int)local_98;
    if (iVar17 == 2) {
      sVar8 = (short)uStack_1e0;
      uVar12 = (int)uStack_1e0 >> 0x10;
      uStack_1e0 = 0;
      uVar23 = (int)sVar8;
    }
    else if (iVar17 - 5U < 3) {
      uVar12 = (uint)(short)local_1d8;
      uVar23 = uVar12;
    }
    else {
      if (iVar17 == 3) {
        iVar20 = (int)((ulonglong)uStack_1e0 >> 0x10) >> 0x10;
        local_a0._0_4_ = (uint)(short)((ulonglong)uStack_1e0 >> 0x30);
      }
      uStack_1e0 = 0;
      uVar23 = local_6c;
    }
    *(uint *)(param_5 + 100) = uVar23;
    *(uint *)(param_5 + 0x54) = uVar12;
    *(int *)(param_5 + 0x70) = iVar20;
    *(uint *)(param_5 + 0x5c) = (uint)local_a0;
    *(undefined8 *)(param_5 + 0x2e0) = uStack_1e0;
  }
  thunk_FUN_1424b70d0(local_d8);
  FUN_1414b3f60(local_2e8);
  return local_68;
}



// FUNCTION 14256bec0 Unwind@14256bec0 body=69 status=ok
// SIG undefined Unwind@14256bec0(void)

void Unwind_14256bec0(undefined8 param_1,longlong param_2)

{
  FUN_14256c8f0(param_2 + 0x130);
  return;
}



// FUNCTION 14256bf10 Unwind@14256bf10 body=93 status=ok
// SIG undefined Unwind@14256bf10(void)

void Unwind_14256bf10(undefined8 param_1,longlong param_2)

{
  FUN_14256d170(*(undefined8 *)(param_2 + 0x260));
  FUN_1425697e0(*(undefined8 *)(param_2 + 0x270));
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x280));
  return;
}



// FUNCTION 14256bf70 Unwind@14256bf70 body=68 status=ok
// SIG undefined Unwind@14256bf70(void)

void Unwind_14256bf70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x278));
  return;
}



// FUNCTION 14256bfc0 Unwind@14256bfc0 body=69 status=ok
// SIG undefined Unwind@14256bfc0(void)

void Unwind_14256bfc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x240);
  return;
}



// FUNCTION 14256c010 Unwind@14256c010 body=66 status=ok
// SIG undefined Unwind@14256c010(void)

void Unwind_14256c010(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 14256c060 Unwind@14256c060 body=68 status=ok
// SIG undefined Unwind@14256c060(void)

void Unwind_14256c060(undefined8 param_1,longlong param_2)

{
  FUN_14256c0b0(*(undefined8 *)(param_2 + 0x2b0));
  return;
}



// FUNCTION 14256c0b0 FUN_14256c0b0 body=70 status=ok
// SIG undefined FUN_14256c0b0(void)

void FUN_14256c0b0(longlong param_1)

{
  FUN_1414b3f60(param_1 + 0xe0);
  FUN_14256d170(param_1 + 0xa8);
  FUN_1425697e0(param_1 + 0x88);
  thunk_FUN_1424b70d0(param_1 + 0x28);
  thunk_FUN_1424b70d0(param_1 + 0x10);
  return;
}



// FUNCTION 14256c100 FUN_14256c100 body=244 status=ok
// SIG undefined FUN_14256c100(void)

undefined8
FUN_14256c100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [96];
  undefined1 local_340 [32];
  undefined1 local_320 [56];
  undefined1 local_2e8 [232];
  undefined1 local_200 [16];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [96];
  undefined1 local_178 [32];
  undefined1 local_158 [56];
  undefined1 local_120 [224];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_142568f50(local_3c8);
  FUN_14256b3e0(local_200,param_2,param_3,param_4,param_5,param_6);
  FUN_14256a4b0(local_3c8,param_1,local_200);
  FUN_1414b3f60(local_120);
  FUN_14256d170(local_158);
  FUN_1425697e0(local_178);
  thunk_FUN_1424b70d0(local_1d8);
  thunk_FUN_1424b70d0(local_1f0);
  FUN_1414b3f60(local_2e8);
  FUN_14256d170(local_320);
  FUN_1425697e0(local_340);
  thunk_FUN_1424b70d0(local_3a0);
  thunk_FUN_1424b70d0(local_3b8);
  return param_1;
}



// FUNCTION 14256c200 Unwind@14256c200 body=55 status=ok
// SIG undefined Unwind@14256c200(void)

void Unwind_14256c200(undefined8 param_1,longlong param_2)

{
  FUN_14256c0b0(param_2 + 0x1f8);
  return;
}



// FUNCTION 14256c240 Unwind@14256c240 body=52 status=ok
// SIG undefined Unwind@14256c240(void)

void Unwind_14256c240(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(param_2 + 0x30);
  return;
}



// FUNCTION 14256c280 FUN_14256c280 body=788 status=ok
// SIG undefined FUN_14256c280(void)

void FUN_14256c280(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 local_1d0 [64];
  undefined1 local_190 [64];
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x109) = 0;
  FUN_142572cf0(local_1d0,param_2 + 0x1e0);
  FUN_142572cf0(local_190,param_2 + 0x260);
  FUN_142572cf0(local_150,param_2 + 0x80);
  FUN_142572cf0(local_110,param_2 + 0x100);
  lVar1 = param_2 + 0x220;
  if ((*(byte *)(param_2 + 0x1e8) & 1) == 0) {
    FUN_1424a7c80(param_1 + 8,local_1d0);
  }
  else if ((*(byte *)(param_2 + 0x228) & 1) == 0) {
    FUN_1424a7c80(param_1 + 8,lVar1);
  }
  else {
    FUN_1424a6c90(local_90,&DAT_14a1778fd);
    FUN_1424a7ca0(param_1 + 8,local_90);
    FUN_140859a90(local_90);
  }
  lVar2 = param_2 + 0x2a0;
  if ((*(byte *)(param_2 + 0x268) & 1) == 0) {
    FUN_1424a7c80(param_1 + 0x48,local_190);
  }
  else if ((*(byte *)(param_2 + 0x2a8) & 1) == 0) {
    FUN_1424a7c80(param_1 + 0x48,lVar2);
  }
  else {
    FUN_1424a6c90(local_90,&DAT_14a1778fd);
    FUN_1424a7ca0(param_1 + 0x48,local_90);
    FUN_140859a90(local_90);
  }
  local_50 = param_2 + 0xc0;
  if ((*(byte *)(param_2 + 0x88) & 1) == 0) {
    FUN_1424a7c80(param_1 + 0x88,local_150);
  }
  else if ((*(byte *)(param_2 + 200) & 1) == 0) {
    FUN_1424a7c80(param_1 + 0x88,local_50);
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x228);
    if ((uVar3 & 1) == 0) {
      FUN_1424a6c90(local_d0,&DAT_1499ecf56);
      FUN_1424a66c0(local_90,local_d0,lVar1);
    }
    else {
      FUN_1424a6c90(local_90,&DAT_1499ecf56);
    }
    FUN_1424a7ca0(param_1 + 0x88,local_90);
    FUN_140859a90(local_90);
    if ((uVar3 & 1) == 0) {
      FUN_140859a90(local_d0);
    }
  }
  if ((*(byte *)(param_2 + 0x108) & 1) == 0) {
    FUN_1424a7c80(param_1 + 200,local_110);
  }
  else if ((*(byte *)(param_2 + 0x148) & 1) == 0) {
    FUN_1424a7c80(param_1 + 200,param_2 + 0x140);
  }
  else {
    if ((*(byte *)(param_2 + 0x2a8) & 1) == 0) {
      FUN_1424a6be0(local_90,lVar2);
    }
    else {
      FUN_1424a6c90(local_90,&DAT_14a1778fd);
    }
    FUN_1424a7c80(param_1 + 200,local_90);
    FUN_140859a90(local_90);
  }
  cVar4 = FUN_142573770(lVar1,param_3);
  uVar5 = 1;
  if (cVar4 == '\0') {
    cVar4 = FUN_142573770(lVar2,param_3);
    if (cVar4 == '\0') {
      cVar4 = FUN_142573770(local_50,param_3);
      if (cVar4 == '\0') {
        uVar5 = FUN_142573770(param_2 + 0x140,param_3);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x108) = uVar5;
  FUN_140859a90(local_110);
  FUN_140859a90(local_150);
  FUN_140859a90(local_190);
  FUN_140859a90(local_1d0);
  return;
}



// FUNCTION 14256c5a0 Unwind@14256c5a0 body=55 status=ok
// SIG undefined Unwind@14256c5a0(void)

void Unwind_14256c5a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xe8);
  return;
}



// FUNCTION 14256c5e0 Unwind@14256c5e0 body=55 status=ok
// SIG undefined Unwind@14256c5e0(void)

void Unwind_14256c5e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 14256c620 Unwind@14256c620 body=55 status=ok
// SIG undefined Unwind@14256c620(void)

void Unwind_14256c620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14256c660 Unwind@14256c660 body=55 status=ok
// SIG undefined Unwind@14256c660(void)

void Unwind_14256c660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14256c6a0 Unwind@14256c6a0 body=58 status=ok
// SIG undefined Unwind@14256c6a0(void)

void Unwind_14256c6a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x128);
  return;
}



// FUNCTION 14256c6e0 Unwind@14256c6e0 body=58 status=ok
// SIG undefined Unwind@14256c6e0(void)

void Unwind_14256c6e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x168);
  return;
}



// FUNCTION 14256c720 FUN_14256c720 body=268 status=ok
// SIG undefined FUN_14256c720(void)

void FUN_14256c720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 local_3c0 [760];
  undefined1 local_c8 [64];
  undefined **local_88;
  undefined2 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x668) = 0;
  FUN_1424c6d70(local_3c0,param_3);
  uVar2 = 0;
  do {
    uVar1 = FUN_14262c0d0(uVar2);
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    FUN_1412ae0d0(local_c8,uVar1);
    uVar1 = FUN_14256e6f0(param_2,local_c8,&local_88);
    FUN_1424a7c80(&local_88,uVar1);
    FUN_140859a90(local_c8);
    thunk_FUN_1425651b0(&local_88,local_3c0,0,param_4);
    FUN_14256c280(param_1 + (ulonglong)uVar2 * 0x110 + 8,local_3c0,param_4);
    FUN_140859a90(&local_88);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  FUN_1424c9bb0(local_3c0);
  return;
}



// FUNCTION 14256c830 Unwind@14256c830 body=58 status=ok
// SIG undefined Unwind@14256c830(void)

void Unwind_14256c830(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 800);
  return;
}



// FUNCTION 14256c870 Unwind@14256c870 body=58 status=ok
// SIG undefined Unwind@14256c870(void)

void Unwind_14256c870(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x360);
  return;
}



// FUNCTION 14256c8b0 Unwind@14256c8b0 body=55 status=ok
// SIG undefined Unwind@14256c8b0(void)

void Unwind_14256c8b0(undefined8 param_1,longlong param_2)

{
  FUN_1424c9bb0(param_2 + 0x28);
  return;
}



// FUNCTION 14256c8f0 FUN_14256c8f0 body=57 status=ok
// SIG undefined FUN_14256c8f0(void)

void FUN_14256c8f0(longlong param_1)

{
  FUN_140859a90(param_1 + 0xa0);
  FUN_140859a90(param_1 + 0x60);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14256c930 FUN_14256c930 body=109 status=ok
// SIG undefined FUN_14256c930(void)

ulonglong FUN_14256c930(longlong param_1,uint param_2,uint param_3)

{
  short sVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if ((~param_2 & 0x300) == 0) {
    param_1 = param_1 + 0x88;
  }
  else if ((param_2 & 0x100) == 0) {
    if ((param_2 & 0x200) == 0) {
      param_1 = param_1 + 0x48;
    }
    else {
      param_1 = param_1 + 200;
    }
  }
  else {
    param_1 = param_1 + 8;
  }
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = (int)sVar1 >> 5;
  }
  uVar2 = CONCAT62((uint6)(ushort)(~param_2 >> 0x10),0xffff);
  if (param_3 < uVar3) {
    if (((int)sVar1 & 2U) == 0) {
      param_1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      param_1 = param_1 + 10;
    }
    uVar2 = (ulonglong)*(ushort *)(param_1 + (longlong)(int)param_3 * 2);
  }
  return uVar2;
}



// FUNCTION 14256c9a0 FUN_14256c9a0 body=72 status=ok
// SIG undefined FUN_14256c9a0(void)

int FUN_14256c9a0(longlong param_1,uint param_2)

{
  if ((~param_2 & 0x300) == 0) {
    param_1 = param_1 + 0x88;
  }
  else if ((param_2 & 0x100) == 0) {
    if ((param_2 & 0x200) == 0) {
      param_1 = param_1 + 0x48;
    }
    else {
      param_1 = param_1 + 200;
    }
  }
  else {
    param_1 = param_1 + 8;
  }
  if (*(short *)(param_1 + 8) < 0) {
    return *(int *)(param_1 + 0xc);
  }
  return (int)*(short *)(param_1 + 8) >> 5;
}



// FUNCTION 14256c9f0 FUN_14256c9f0 body=86 status=ok
// SIG undefined FUN_14256c9f0(void)

undefined8 FUN_14256c9f0(longlong param_1,undefined8 param_2,uint param_3)

{
  if ((~param_3 & 0x300) == 0) {
    param_1 = param_1 + 0x88;
  }
  else if ((param_3 & 0x100) == 0) {
    if ((param_3 & 0x200) == 0) {
      param_1 = param_1 + 0x48;
    }
    else {
      param_1 = param_1 + 200;
    }
  }
  else {
    param_1 = param_1 + 8;
  }
  FUN_1424a6be0(param_2,param_1);
  return param_2;
}



// FUNCTION 14256ca50 FUN_14256ca50 body=111 status=ok
// SIG undefined FUN_14256ca50(void)

ulonglong FUN_14256ca50(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined **local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = icu_64::ErrorCode::vftable;
  local_30[0] = 0;
  cVar1 = FUN_142573610(param_1 + 8,0xfffffffe,local_30);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar1 == '\0') {
    uVar2 = FUN_142573610(param_1 + 0x48,0xfffffffe,local_30);
    uVar3 = (ulonglong)uVar2;
  }
  FUN_142572ba0(&local_38);
  return uVar3 & 0xffffffff;
}



// FUNCTION 14256cac0 Unwind@14256cac0 body=36 status=ok
// SIG undefined Unwind@14256cac0(void)

void Unwind_14256cac0(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x20);
  return;
}



// FUNCTION 14256caf0 FUN_14256caf0 body=332 status=ok
// SIG undefined FUN_14256caf0(void)

ulonglong FUN_14256caf0(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong unaff_RBX;
  undefined7 uVar7;
  short *psVar8;
  bool bVar9;
  undefined1 local_60 [8];
  ushort local_58;
  int local_54;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = *(ushort *)(param_1 + 0xd0);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar6 = *(int *)(param_1 + 0xd4);
    }
    else {
      iVar6 = (int)(short)uVar1 >> 5;
    }
    sVar2 = *(short *)(param_1 + 0x50);
    if (sVar2 < 0) {
      iVar5 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar5 = (int)sVar2 >> 5;
    }
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((((int)sVar2 & 1U) != 0) || (iVar6 != iVar5)) goto LAB_14256cc32;
    bVar3 = FUN_1412ae090(param_1 + 200,param_1 + 0x48);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x50) & 1;
  }
  uVar7 = (undefined7)(unaff_RBX >> 8);
  if (bVar3 == 0) {
    unaff_RBX = CONCAT71(uVar7,1);
    goto LAB_14256cc32;
  }
  FUN_1424a84d0(param_1 + 0x88,local_60,1,0x7fffffff);
  if ((local_58 & 1) == 0) {
    if (-1 < (short)local_58) {
      local_54 = (int)(short)local_58 >> 5;
    }
    sVar2 = *(short *)(param_1 + 0x10);
    if (sVar2 < 0) {
      iVar6 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar6 = (int)sVar2 >> 5;
    }
    unaff_RBX = CONCAT71(uVar7,1);
    if ((((int)sVar2 & 1U) == 0) && (local_54 == iVar6)) {
      cVar4 = FUN_1412ae090(local_60,param_1 + 8);
      bVar9 = cVar4 != '\0';
      goto LAB_14256cbe7;
    }
  }
  else {
    bVar9 = (bool)(*(byte *)(param_1 + 0x10) & 1);
LAB_14256cbe7:
    uVar7 = (undefined7)(unaff_RBX >> 8);
    unaff_RBX = CONCAT71(uVar7,1);
    if (bVar9 != false) {
      uVar1 = *(ushort *)(param_1 + 0x90);
      if ((short)uVar1 < 0) {
        if (*(int *)(param_1 + 0x94) != 0) {
LAB_14256cc0e:
          if ((uVar1 & 2) == 0) {
            psVar8 = *(short **)(param_1 + 0xa0);
          }
          else {
            psVar8 = (short *)(param_1 + 0x92);
          }
          unaff_RBX = CONCAT71(uVar7,*psVar8 != 0x2d);
        }
      }
      else if ((short)uVar1 >> 5 != 0) goto LAB_14256cc0e;
    }
  }
  FUN_140859a90(local_60);
LAB_14256cc32:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14256cc40 Unwind@14256cc40 body=34 status=ok
// SIG undefined Unwind@14256cc40(void)

void Unwind_14256cc40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14256cc70 FUN_14256cc70 body=117 status=ok
// SIG undefined FUN_14256cc70(void)

ulonglong FUN_14256cc70(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined **local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = icu_64::ErrorCode::vftable;
  local_30[0] = 0;
  cVar1 = FUN_142573610(param_1 + 0x88,0xffffffff,local_30);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar1 == '\0') {
    uVar2 = FUN_142573610(param_1 + 200,0xffffffff,local_30);
    uVar3 = (ulonglong)uVar2;
  }
  FUN_142572ba0(&local_38);
  return uVar3 & 0xffffffff;
}



// FUNCTION 14256ccf0 Unwind@14256ccf0 body=36 status=ok
// SIG undefined Unwind@14256ccf0(void)

void Unwind_14256ccf0(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x20);
  return;
}



// FUNCTION 14256cd20 FUN_14256cd20 body=8 status=ok
// SIG undefined FUN_14256cd20(void)

undefined1 FUN_14256cd20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x108);
}



// FUNCTION 14256cd30 FUN_14256cd30 body=104 status=ok
// SIG undefined FUN_14256cd30(void)

undefined1 FUN_14256cd30(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_142573610(param_1 + 8);
  if (cVar1 == '\0') {
    cVar1 = FUN_142573610(param_1 + 0x48,param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_142573610(param_1 + 0x88,param_2,param_3);
      if (cVar1 == '\0') {
        uVar2 = FUN_142573610(param_1 + 200,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 14256cda0 FUN_14256cda0 body=3 status=ok
// SIG undefined FUN_14256cda0(void)

undefined1 FUN_14256cda0(void)

{
  return 1;
}



// FUNCTION 14256cdb0 FUN_14256cdb0 body=33 status=ok
// SIG undefined FUN_14256cdb0(void)

void FUN_14256cdb0(longlong param_1,byte param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8 + (ulonglong)param_2 * 0x110) + 8);
                    /* WARNING: Could not recover jumptable at 0x00014256cdce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1 + (ulonglong)param_2 * 0x110 + 8,param_2,param_3,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 14256cde0 FUN_14256cde0 body=33 status=ok
// SIG undefined FUN_14256cde0(void)

void FUN_14256cde0(longlong param_1,byte param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8 + (ulonglong)param_2 * 0x110) + 0x10)
  ;
                    /* WARNING: Could not recover jumptable at 0x00014256cdfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + (ulonglong)param_2 * 0x110 + 8,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 14256ce10 FUN_14256ce10 body=51 status=ok
// SIG undefined FUN_14256ce10(void)

undefined8 FUN_14256ce10(longlong param_1,undefined8 param_2,byte param_3)

{
  (**(code **)(*(longlong *)(param_1 + 8 + (ulonglong)param_3 * 0x110) + 0x18))
            (param_1 + (ulonglong)param_3 * 0x110 + 8,param_2);
  return param_2;
}



// FUNCTION 14256ce50 FUN_14256ce50 body=18 status=ok
// SIG undefined FUN_14256ce50(void)

void FUN_14256ce50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256ce5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x28))(param_1 + 0x558);
  return;
}



// FUNCTION 14256ce70 FUN_14256ce70 body=18 status=ok
// SIG undefined FUN_14256ce70(void)

void FUN_14256ce70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256ce7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x30))(param_1 + 0x558);
  return;
}



// FUNCTION 14256ce90 FUN_14256ce90 body=18 status=ok
// SIG undefined FUN_14256ce90(void)

void FUN_14256ce90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256ce9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x38))(param_1 + 0x558);
  return;
}



// FUNCTION 14256ceb0 FUN_14256ceb0 body=18 status=ok
// SIG undefined FUN_14256ceb0(void)

void FUN_14256ceb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256cebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x20))(param_1 + 0x558);
  return;
}



// FUNCTION 14256ced0 FUN_14256ced0 body=21 status=ok
// SIG undefined FUN_14256ced0(void)

void FUN_14256ced0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256cee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x40))(param_1 + 0x558);
  return;
}



// FUNCTION 14256cef0 FUN_14256cef0 body=18 status=ok
// SIG undefined FUN_14256cef0(void)

void FUN_14256cef0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014256cefe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x558) + 0x48))(param_1 + 0x558);
  return;
}



// FUNCTION 14256cf10 FUN_14256cf10 body=114 status=ok
// SIG undefined FUN_14256cf10(void)

int * FUN_14256cf10(int *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  
  *param_1 = param_2;
  *(longlong *)(param_1 + 2) = param_3;
  param_1[4] = 0;
  if (param_3 != 0) {
    FUN_142544e90(param_3);
    if ((*(int *)**(undefined8 **)(param_1 + 2) == 1) &&
       (*(char *)((longlong)**(undefined8 **)(param_1 + 2) + 9) == '\x01')) {
      cVar2 = FUN_142544f20();
      if (cVar2 == '\0') {
        plVar1 = *(longlong **)(param_1 + 2);
        *param_1 = *param_1 + *(int *)(*plVar1 + 4);
        if (*(char *)((longlong)plVar1 + 0xc) != '\0') {
          FUN_1424da110(*plVar1);
        }
        FUN_1401773f0(plVar1);
        param_1[2] = 0;
        param_1[3] = 0;
      }
    }
  }
  return param_1;
}



// FUNCTION 14256cf90 FUN_14256cf90 body=113 status=ok
// SIG undefined FUN_14256cf90(void)

undefined4 * FUN_14256cf90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = param_2[4];
  if (*(longlong *)(param_2 + 2) != 0) {
    local_2c = 0;
    local_28 = thunk_FUN_1424da030(0x60);
    if (local_28 != 0) {
      FUN_142544980(local_28,*(undefined8 *)(param_2 + 2),&local_2c);
    }
    *(longlong *)(param_1 + 2) = local_28;
  }
  return param_1;
}



// FUNCTION 14256d010 Unwind@14256d010 body=34 status=ok
// SIG undefined Unwind@14256d010(void)

void Unwind_14256d010(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14256d040 FUN_14256d040 body=115 status=ok
// SIG undefined FUN_14256d040(void)

undefined4 * FUN_14256d040(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  if (*(longlong *)(param_2 + 2) == 0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    local_2c = 0;
    local_28 = thunk_FUN_1424da030(0x60);
    if (local_28 != 0) {
      FUN_142544980(local_28,*(undefined8 *)(param_2 + 2),&local_2c);
    }
    *(longlong *)(param_1 + 2) = local_28;
  }
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 14256d0c0 Unwind@14256d0c0 body=34 status=ok
// SIG undefined Unwind@14256d0c0(void)

void Unwind_14256d0c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14256d0f0 FUN_14256d0f0 body=30 status=ok
// SIG undefined FUN_14256d0f0(void)

void FUN_14256d0f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 14256d110 FUN_14256d110 body=81 status=ok
// SIG undefined FUN_14256d110(void)

undefined4 * FUN_14256d110(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((longlong)puVar1 + 0xc) != '\0') {
      FUN_1424da110(*puVar1);
    }
    FUN_1401773f0(puVar1);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_2 + 2) = 0;
  return param_1;
}



// FUNCTION 14256d170 FUN_14256d170 body=48 status=ok
// SIG undefined FUN_14256d170(void)

void FUN_14256d170(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((longlong)puVar1 + 0xc) != '\0') {
      FUN_1424da110(*puVar1);
    }
    FUN_1401773f0(puVar1);
    return;
  }
  return;
}



// FUNCTION 14256d1a0 FUN_14256d1a0 body=25 status=ok
// SIG undefined FUN_14256d1a0(void)

undefined4 * FUN_14256d1a0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14256d1c0 FUN_14256d1c0 body=21 status=ok
// SIG undefined FUN_14256d1c0(void)

undefined4 * FUN_14256d1c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14256d1e0 FUN_14256d1e0 body=47 status=ok
// SIG undefined FUN_14256d1e0(void)

void FUN_14256d1e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((longlong)puVar1 + 0xc) != '\0') {
      FUN_1424da110(*puVar1);
    }
    FUN_1401773f0(puVar1);
    return;
  }
  return;
}



// FUNCTION 14256d210 FUN_14256d210 body=267 status=ok
// SIG undefined FUN_14256d210(void)

undefined4 *
FUN_14256d210(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  int local_34 [7];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  plVar2 = (longlong *)thunk_FUN_1424da030(0x60);
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = 7;
  }
  else {
    FUN_142544930(plVar2);
    FUN_142544c50(plVar2,param_2,local_34,param_4,plVar2);
    if (local_34[0] < 1) {
      *param_1 = 0;
      *(longlong **)(param_1 + 2) = plVar2;
      param_1[4] = 0;
      FUN_142544e90(plVar2);
      if ((*(int *)*plVar2 == 1) && (*(char *)(*plVar2 + 9) == '\x01')) {
        cVar1 = FUN_142544f20(plVar2);
        if (cVar1 == '\0') {
          *param_1 = *(undefined4 *)(*plVar2 + 4);
          if (*(char *)((longlong)plVar2 + 0xc) != '\0') {
            FUN_1424da110();
          }
          FUN_1401773f0(plVar2);
          *(undefined8 *)(param_1 + 2) = 0;
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      param_1[4] = local_34[0];
      if (*(char *)((longlong)plVar2 + 0xc) != '\0') {
        FUN_1424da110(*plVar2);
      }
      FUN_1401773f0(plVar2);
    }
  }
  return param_1;
}



// FUNCTION 14256d320 Unwind@14256d320 body=43 status=ok
// SIG undefined Unwind@14256d320(void)

void Unwind_14256d320(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256d350 Unwind@14256d350 body=43 status=ok
// SIG undefined Unwind@14256d350(void)

void Unwind_14256d350(undefined8 param_1,longlong param_2)

{
  FUN_14256d1e0(param_2 + 0x20);
  return;
}



// FUNCTION 14256d380 FUN_14256d380 body=268 status=ok
// SIG undefined FUN_14256d380(void)

int * FUN_14256d380(int *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  int local_44 [9];
  
  local_44[1] = -2;
  local_44[2] = -1;
  local_44[0] = 0;
  plVar2 = (longlong *)thunk_FUN_1424da030(0x60);
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 7;
  }
  else {
    FUN_142544930(plVar2);
    FUN_142544c50(plVar2,param_2,local_44,param_4,plVar2);
    if (local_44[0] < 1) {
      *param_1 = param_3;
      *(longlong **)(param_1 + 2) = plVar2;
      param_1[4] = 0;
      FUN_142544e90(plVar2);
      if ((*(int *)*plVar2 == 1) && (*(char *)(*plVar2 + 9) == '\x01')) {
        cVar1 = FUN_142544f20(plVar2);
        if (cVar1 == '\0') {
          *param_1 = param_3 + *(int *)(*plVar2 + 4);
          if (*(char *)((longlong)plVar2 + 0xc) != '\0') {
            FUN_1424da110();
          }
          FUN_1401773f0(plVar2);
          param_1[2] = 0;
          param_1[3] = 0;
        }
      }
    }
    else {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = local_44[0];
      if (*(char *)((longlong)plVar2 + 0xc) != '\0') {
        FUN_1424da110(*plVar2);
      }
      FUN_1401773f0(plVar2);
    }
  }
  return param_1;
}



// FUNCTION 14256d490 Unwind@14256d490 body=45 status=ok
// SIG undefined Unwind@14256d490(void)

void Unwind_14256d490(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256d4c0 Unwind@14256d4c0 body=45 status=ok
// SIG undefined Unwind@14256d4c0(void)

void Unwind_14256d4c0(undefined8 param_1,longlong param_2)

{
  FUN_14256d1e0(param_2 + 0x20);
  return;
}



// FUNCTION 14256d4f0 FUN_14256d4f0 body=82 status=ok
// SIG undefined FUN_14256d4f0(void)

void FUN_14256d4f0(int *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142538840(param_2,-*param_1);
  if (*(longlong *)(param_1 + 2) != 0) {
    local_1c = 0;
    FUN_142538420(param_2,*(longlong *)(param_1 + 2),&local_1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14256d550 FUN_14256d550 body=122 status=ok
// SIG undefined FUN_14256d550(void)

void FUN_14256d550(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 8) = *param_2;
  if (*(longlong *)(param_2 + 2) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    local_34 = 0;
    local_30 = thunk_FUN_1424da030(0x60);
    if (local_30 != 0) {
      FUN_142544980(local_30,*(undefined8 *)(param_2 + 2),&local_34);
    }
    *(longlong *)(param_1 + 0x10) = local_30;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



// FUNCTION 14256d5d0 Unwind@14256d5d0 body=36 status=ok
// SIG undefined Unwind@14256d5d0(void)

void Unwind_14256d5d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256d600 FUN_14256d600 body=91 status=ok
// SIG undefined FUN_14256d600(void)

void FUN_14256d600(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
  FUN_142538840(param_2,*(undefined4 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_1c = 0;
    FUN_142538530(param_2,*(longlong *)(param_1 + 0x10),&local_1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14256d670 FUN_14256d670 body=8 status=ok
// SIG undefined FUN_14256d670(void)

undefined * FUN_14256d670(void)

{
  return &DAT_14c7936b8;
}



// FUNCTION 14256d680 FUN_14256d680 body=26 status=ok
// SIG undefined FUN_14256d680(void)

void FUN_14256d680(undefined8 *param_1)

{
  *param_1 = icu_64::MeasureUnit::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0xf;
  return;
}



// FUNCTION 14256d6a0 FUN_14256d6a0 body=52 status=ok
// SIG undefined FUN_14256d6a0(void)

undefined8 * FUN_14256d6a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = icu_64::MeasureUnit::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  strcpy((char *)(param_1 + 2),(char *)(param_2 + 0x10));
  return param_1;
}



// FUNCTION 14256d6e0 FUN_14256d6e0 body=47 status=ok
// SIG undefined FUN_14256d6e0(void)

longlong FUN_14256d6e0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    strcpy((char *)(param_1 + 0x10),(char *)(param_2 + 0x10));
  }
  return param_1;
}



// FUNCTION 14256d710 FUN_14256d710 body=78 status=ok
// SIG undefined FUN_14256d710(void)

undefined8 * FUN_14256d710(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::MeasureUnit::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    strcpy((char *)(puVar1 + 2),(char *)(param_1 + 0x10));
  }
  return puVar1;
}



// FUNCTION 14256d760 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14256d770 FUN_14256d770 body=16 status=ok
// SIG undefined FUN_14256d770(void)

undefined * FUN_14256d770(longlong param_1)

{
  return (&PTR_s_acceleration_1499ed440)[*(int *)(param_1 + 8)];
}



// FUNCTION 14256d780 FUN_14256d780 body=48 status=ok
// SIG undefined FUN_14256d780(void)

undefined * FUN_14256d780(longlong param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    return (undefined *)(param_1 + 0x10);
  }
  return (&PTR_s_g_force_1499ed4f0)
         [(longlong)*(int *)(param_1 + 0xc) + (longlong)(int)(&DAT_1499ee3d0)[*(int *)(param_1 + 8)]
         ];
}



// FUNCTION 14256d7b0 FUN_14256d7b0 body=110 status=ok
// SIG undefined FUN_14256d7b0(void)

bool FUN_14256d7b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
       (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
      iVar1 = strcmp((char *)(param_1 + 0x10),(char *)(param_2 + 0x10));
      bVar4 = iVar1 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 14256d820 FUN_14256d820 body=299 status=ok
// SIG undefined FUN_14256d820(void)

uint FUN_14256d820(char *param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar5 = 0;
  if (*param_4 < 1) {
    iVar9 = 0;
    uVar5 = 0;
    iVar7 = 0x16;
    do {
      while( true ) {
        if (iVar7 <= iVar9) {
          return 0;
        }
        iVar1 = iVar7 + iVar9;
        iVar8 = iVar1 / 2;
        lVar4 = (longlong)iVar8;
        iVar2 = strcmp((&PTR_s_acceleration_1499ed440)[lVar4],param_1);
        if (-1 < iVar2) break;
        iVar9 = iVar8 + 1;
      }
      iVar7 = iVar8;
    } while (iVar2 != 0);
    if (1 < iVar1 + 3U) {
      uVar5 = *(int *)(&DAT_1499ee3d4 + lVar4 * 4) - (&DAT_1499ee3d0)[lVar4];
      if (param_3 < (int)uVar5) {
        *param_4 = 0xf;
      }
      else if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar3 = 0;
        }
        else {
          puVar6 = (undefined1 *)(param_2 + 0x28);
          uVar3 = 0;
          do {
            *(int *)(puVar6 + -0x20) = iVar8;
            *(int *)(puVar6 + -0x1c) = (int)uVar3;
            puVar6[-0x18] = 0;
            *(int *)(puVar6 + -8) = iVar8;
            *(int *)(puVar6 + -4) = (int)uVar3 + 1;
            *puVar6 = 0;
            uVar3 = uVar3 + 2;
            puVar6 = puVar6 + 0x30;
          } while (uVar3 != (uVar5 & 0xfffffffe));
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_2 + 8 + uVar3 * 0x18) = iVar8;
          *(int *)(param_2 + 0xc + uVar3 * 0x18) = (int)uVar3;
          *(undefined1 *)(param_2 + 0x10 + uVar3 * 0x18) = 0;
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 14256d950 FUN_14256d950 body=169 status=ok
// SIG undefined FUN_14256d950(void)

void FUN_14256d950(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 0xc) + (&DAT_1499ee3d0)[*(int *)(param_2 + 8)];
  iVar5 = *(int *)(param_3 + 0xc) + (&DAT_1499ee3d0)[*(int *)(param_3 + 8)];
  iVar4 = 0;
  iVar6 = 8;
  do {
    while( true ) {
      iVar3 = (iVar4 + iVar6) / 2;
      lVar2 = (longlong)iVar3 * 0x10;
      if (iVar1 < *(int *)(&DAT_1499ee430 + lVar2)) break;
      if (iVar1 <= *(int *)(&DAT_1499ee430 + lVar2)) {
        if (iVar5 < *(int *)(&DAT_1499ee434 + lVar2)) break;
        if (iVar5 <= *(int *)(&DAT_1499ee434 + lVar2)) {
          *param_4 = 1;
          *param_1 = icu_64::MeasureUnit::vftable;
          param_1[1] = *(undefined8 *)(&DAT_1499ee438 + lVar2);
          *(undefined1 *)(param_1 + 2) = 0;
          return;
        }
      }
      iVar4 = iVar3 + 1;
      if (iVar6 <= iVar4) goto LAB_14256d9c9;
    }
    iVar6 = iVar3;
  } while (iVar4 < iVar3);
LAB_14256d9c9:
  *param_4 = 0;
  *param_1 = icu_64::MeasureUnit::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0xf;
  return;
}



// FUNCTION 14256da10 FUN_14256da10 body=254 status=ok
// SIG undefined FUN_14256da10(void)

void FUN_14256da10(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = 0x16;
  do {
    while( true ) {
      if (iVar6 <= iVar4) {
        iVar3 = -1;
        goto LAB_14256da78;
      }
      iVar3 = (iVar6 + iVar4) / 2;
      iVar1 = strcmp((&PTR_s_acceleration_1499ed440)[iVar3],"currency");
      if (-1 < iVar1) break;
      iVar4 = iVar3 + 1;
    }
    iVar6 = iVar3;
  } while (iVar1 != 0);
LAB_14256da78:
  *(int *)(param_1 + 8) = iVar3;
  iVar6 = (&DAT_1499ee3d0)[iVar3];
  iVar4 = *(int *)(&DAT_1499ee3d4 + (longlong)iVar3 * 4);
  iVar3 = iVar6;
  do {
    while( true ) {
      if (iVar4 <= iVar3) goto LAB_14256dadf;
      iVar1 = iVar4 + iVar3;
      iVar5 = iVar1 / 2;
      iVar2 = strcmp((&PTR_s_g_force_1499ed4f0)[iVar5],param_2);
      if (-1 < iVar2) break;
      iVar3 = iVar5 + 1;
    }
    iVar4 = iVar5;
  } while (iVar2 != 0);
  if (iVar1 + 3U < 2) {
LAB_14256dadf:
    strncpy((char *)(param_1 + 0x10),param_2,4);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  else {
    *(int *)(param_1 + 0xc) = iVar5 - iVar6;
  }
  return;
}



// FUNCTION 14256db10 FUN_14256db10 body=220 status=ok
// SIG undefined FUN_14256db10(void)

void FUN_14256db10(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0x16;
  do {
    while( true ) {
      if (iVar5 <= iVar4) {
        iVar3 = -1;
        goto LAB_14256db78;
      }
      iVar3 = (iVar5 + iVar4) / 2;
      iVar1 = strcmp((&PTR_s_acceleration_1499ed440)[iVar3],"none");
      if (-1 < iVar1) break;
      iVar4 = iVar3 + 1;
    }
    iVar5 = iVar3;
  } while (iVar1 != 0);
LAB_14256db78:
  *(int *)(param_1 + 8) = iVar3;
  iVar5 = (&DAT_1499ee3d0)[iVar3];
  iVar4 = *(int *)(&DAT_1499ee3d4 + (longlong)iVar3 * 4);
  iVar3 = iVar5;
  do {
    while( true ) {
      if (iVar4 <= iVar3) {
        iVar1 = -1;
        goto LAB_14256dbd8;
      }
      iVar1 = (iVar4 + iVar3) / 2;
      iVar2 = strcmp((&PTR_s_g_force_1499ed4f0)[iVar1],param_2);
      if (-1 < iVar2) break;
      iVar3 = iVar1 + 1;
    }
    iVar4 = iVar1;
  } while (iVar2 != 0);
LAB_14256dbd8:
  *(int *)(param_1 + 0xc) = iVar1 - iVar5;
  return;
}



// FUNCTION 14256dbf0 FUN_14256dbf0 body=38 status=ok
// SIG undefined FUN_14256dbf0(void)

undefined8 FUN_14256dbf0(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256dc20 FUN_14256dc20 body=203 status=ok
// SIG undefined FUN_14256dc20(void)

undefined8 * FUN_14256dc20(undefined8 *param_1,short *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  undefined1 local_54 [20];
  undefined8 *local_40;
  short *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_2;
  FUN_14256d680();
  psVar3 = local_38;
  *param_1 = icu_64::CurrencyUnit::vftable;
  if (((*param_3 < 1) && (local_38 != (short *)0x0)) && (*local_38 != 0)) {
    iVar2 = 1;
    if ((local_38[1] != 0) && (local_38[2] != 0)) {
      cVar1 = FUN_14250aed0(local_38,3);
      if (cVar1 != '\0') goto LAB_14256dc99;
      iVar2 = 0x1a;
    }
    *param_3 = iVar2;
  }
  psVar3 = (short *)&DAT_1499eec2a;
LAB_14256dc99:
  *(short *)((longlong)param_1 + 0x1c) = psVar3[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)psVar3;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  FUN_14250ae10(param_1 + 3,local_54,4);
  local_40 = param_1;
  FUN_14256da10(param_1,local_54);
  return local_40;
}



// FUNCTION 14256dcf0 Unwind@14256dcf0 body=40 status=ok
// SIG undefined Unwind@14256dcf0(void)

void Unwind_14256dcf0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14256dd20 Unwind@14256dd20 body=38 status=ok
// SIG undefined Unwind@14256dd20(void)

void Unwind_14256dd20(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}



// FUNCTION 14256dd50 FUN_14256dd50 body=53 status=ok
// SIG undefined FUN_14256dd50(void)

undefined8 * FUN_14256dd50(undefined8 *param_1,longlong param_2)

{
  FUN_14256d6a0();
  *param_1 = icu_64::CurrencyUnit::vftable;
  FUN_1425046f0(param_1 + 3,param_2 + 0x18);
  return param_1;
}



// FUNCTION 14256dd90 FUN_14256dd90 body=138 status=ok
// SIG undefined FUN_14256dd90(void)

undefined8 *
FUN_14256dd90(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  char *_Str2;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_14256d6a0();
  *param_1 = icu_64::CurrencyUnit::vftable;
  _Str2 = (char *)FUN_14256d770(param_1);
  iVar1 = strcmp("currency",_Str2);
  if (iVar1 == 0) {
    uVar2 = FUN_14256d780(param_1);
    FUN_14250ad70(uVar2,param_1 + 3,4,param_4,param_1,uVar3);
    *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  }
  else {
    *param_3 = 1;
    *(undefined2 *)(param_1 + 3) = 0;
  }
  return param_1;
}



// FUNCTION 14256de20 Unwind@14256de20 body=34 status=ok
// SIG undefined Unwind@14256de20(void)

void Unwind_14256de20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256de50 FUN_14256de50 body=107 status=ok
// SIG undefined FUN_14256de50(void)

undefined8 * FUN_14256de50(undefined8 *param_1)

{
  undefined1 local_34 [4];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14256d680();
  *param_1 = icu_64::CurrencyUnit::vftable;
  FUN_1425046f0(param_1 + 3,&DAT_1499eec2a);
  FUN_14250ae10(param_1 + 3,local_34,4);
  local_30 = param_1;
  FUN_14256da10(param_1,local_34);
  return local_30;
}



// FUNCTION 14256dec0 Unwind@14256dec0 body=36 status=ok
// SIG undefined Unwind@14256dec0(void)

void Unwind_14256dec0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256def0 FUN_14256def0 body=51 status=ok
// SIG undefined FUN_14256def0(void)

longlong FUN_14256def0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14256d6e0(param_1);
    FUN_1425046f0(param_1 + 0x18,param_2 + 0x18);
  }
  return param_1;
}



// FUNCTION 14256df30 FUN_14256df30 body=100 status=ok
// SIG undefined FUN_14256df30(void)

undefined8 * FUN_14256df30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14256d6a0(puVar1,param_1);
    *puVar1 = icu_64::CurrencyUnit::vftable;
    FUN_1425046f0(puVar1 + 3,param_1 + 0x18);
  }
  return puVar1;
}



// FUNCTION 14256dfa0 Unwind@14256dfa0 body=34 status=ok
// SIG undefined Unwind@14256dfa0(void)

void Unwind_14256dfa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256dfd0 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14256dfe0 FUN_14256dfe0 body=8 status=ok
// SIG undefined FUN_14256dfe0(void)

undefined * FUN_14256dfe0(void)

{
  return &DAT_14c7936bc;
}



// FUNCTION 14256dff0 FUN_14256dff0 body=38 status=ok
// SIG undefined FUN_14256dff0(void)

undefined8 FUN_14256dff0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256e020 FUN_14256e020 body=8 status=ok
// SIG undefined FUN_14256e020(void)

undefined * FUN_14256e020(void)

{
  return &DAT_14c7936c0;
}



// FUNCTION 14256e030 FUN_14256e030 body=165 status=ok
// SIG undefined FUN_14256e030(void)

void FUN_14256e030(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*param_3 < 1) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar2 = FUN_1424a3f20(param_2);
    *(longlong *)(param_1 + 0x18) = lVar2;
    if ((lVar2 != 0) && ((*(char *)(param_2 + 0xd8) != '\0' || (*(char *)(lVar2 + 0xd8) == '\0'))))
    {
      uVar3 = FUN_1424c0d30(param_2,param_3);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      FUN_14256e830(param_1,param_2,param_3);
      return;
    }
    *param_3 = 7;
  }
  return;
}



// FUNCTION 14256e0e0 FUN_14256e0e0 body=58 status=ok
// SIG undefined FUN_14256e0e0(void)

undefined8 * FUN_14256e0e0(undefined8 *param_1)

{
  *param_1 = icu_64::CurrencyPluralInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_14256e030();
  return param_1;
}



// FUNCTION 14256e120 Unwind@14256e120 body=30 status=ok
// SIG undefined Unwind@14256e120(void)

void Unwind_14256e120(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256e140 FUN_14256e140 body=58 status=ok
// SIG undefined FUN_14256e140(void)

undefined8 * FUN_14256e140(undefined8 *param_1)

{
  *param_1 = icu_64::CurrencyPluralInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_14256e1a0();
  return param_1;
}



// FUNCTION 14256e180 Unwind@14256e180 body=30 status=ok
// SIG undefined Unwind@14256e180(void)

void Unwind_14256e180(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14256e1a0 FUN_14256e1a0 body=337 status=ok
// SIG undefined FUN_14256e1a0(void)

void FUN_14256e1a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 == param_2) ||
     (iVar1 = *(int *)(param_2 + 0x20), *(int *)(param_1 + 0x20) = iVar1, 0 < iVar1))
  goto LAB_14256e2ef;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    local_34 = 0xffffffff;
    lVar4 = FUN_1425022e0(*plVar2,&local_34);
    if (lVar4 != 0) {
      do {
        puVar3 = *(undefined8 **)(lVar4 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        lVar4 = FUN_1425022e0(*plVar2,&local_34);
      } while (lVar4 != 0);
    }
    if (*plVar2 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar2);
  }
  uVar5 = FUN_14256e310();
  *(undefined8 *)(param_1 + 8) = uVar5;
  FUN_14256e3d0();
  if (0 < *(int *)(param_1 + 0x20)) goto LAB_14256e2ef;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_2 + 0x10) == 0) {
LAB_14256e2bc:
    if (*(longlong *)(param_2 + 0x18) == 0) goto LAB_14256e2ef;
    lVar4 = FUN_1424a3f20();
    *(longlong *)(param_1 + 0x18) = lVar4;
    if ((lVar4 != 0) &&
       ((*(char *)(*(longlong *)(param_2 + 0x18) + 0xd8) != '\0' ||
        (*(char *)(lVar4 + 0xd8) == '\0')))) goto LAB_14256e2ef;
  }
  else {
    lVar4 = FUN_1424bfb70();
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) goto LAB_14256e2bc;
  }
  *(undefined4 *)(param_1 + 0x20) = 7;
LAB_14256e2ef:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14256e310 FUN_14256e310 body=178 status=ok
// SIG undefined FUN_14256e310(void)

longlong * FUN_14256e310(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*param_2 < 1) {
    plVar1 = (longlong *)thunk_FUN_1424da030(0x58);
    if (plVar1 == (longlong *)0x0) {
      if (*param_2 < 1) {
        *param_2 = 7;
      }
    }
    else {
      *plVar1 = 0;
      if (*param_2 < 1) {
        plVar2 = plVar1 + 1;
        FUN_142502140(plVar2,FUN_14257f4c0,FUN_14257f540,0,param_2);
        if (*param_2 < 1) {
          *plVar1 = (longlong)plVar2;
          FUN_142502340(plVar2,&LAB_1424b70f0);
          if (*param_2 < 1) {
            FUN_142502330(*plVar1,FUN_14256f2f0);
            return plVar1;
          }
        }
        if (*plVar1 != 0) {
          FUN_142502220();
        }
      }
      FUN_1401773f0(plVar1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14256e3d0 FUN_14256e3d0 body=269 status=ok
// SIG undefined FUN_14256e3d0(void)

void FUN_14256e3d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_a0 [68];
  undefined4 local_5c;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*param_4 < 1) && (local_5c = 0xffffffff, param_2 != (undefined8 *)0x0)) {
    while (lVar3 = FUN_1425022e0(*param_2,&local_5c), lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
      local_50 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (local_50 == (undefined8 *)0x0) {
        if (0 < *param_4) {
          return;
        }
        *param_4 = 7;
        return;
      }
      FUN_1424a6be0(local_50,uVar1);
      if (0 < *param_4) {
        (**(code **)*local_50)(local_50,1);
        return;
      }
      FUN_1424a6be0(local_a0,uVar2);
      local_58 = thunk_FUN_1424da030(0x40);
      if (local_58 != 0) {
        FUN_1424a6be0(local_58,local_a0);
      }
      FUN_142502aa0(*param_3,local_58,local_50,param_4);
      FUN_140859a90(local_a0);
      if (0 < *param_4) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 14256e4f0 Unwind@14256e4f0 body=55 status=ok
// SIG undefined Unwind@14256e4f0(void)

void Unwind_14256e4f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 14256e530 Unwind@14256e530 body=64 status=ok
// SIG undefined Unwind@14256e530(void)

void Unwind_14256e530(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x70));
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14256e570 FUN_14256e570 body=193 status=ok
// SIG undefined FUN_14256e570(void)

void FUN_14256e570(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 local_1c;
  
  *param_1 = icu_64::CurrencyPluralInfo::vftable;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    local_1c = 0xffffffff;
    lVar3 = FUN_1425022e0(*plVar1,&local_1c);
    if (lVar3 != 0) {
      do {
        puVar2 = *(undefined8 **)(lVar3 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        lVar3 = FUN_1425022e0(*plVar1,&local_1c);
      } while (lVar3 != 0);
    }
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  param_1[1] = 0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14256e640 FUN_14256e640 body=105 status=ok
// SIG undefined FUN_14256e640(void)

undefined8 * FUN_14256e640(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CurrencyPluralInfo::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    FUN_14256e1a0(puVar1,param_1);
    if (*(int *)(puVar1 + 4) < 1) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14256e6b0 Unwind@14256e6b0 body=43 status=ok
// SIG undefined Unwind@14256e6b0(void)

void Unwind_14256e6b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 14256e6e0 FUN_14256e6e0 body=5 status=ok
// SIG undefined FUN_14256e6e0(void)

undefined8 FUN_14256e6e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14256e6f0 FUN_14256e6f0 body=260 status=ok
// SIG undefined FUN_14256e6f0(void)

undefined8 FUN_14256e6f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_80 [72];
  wchar_t *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = FUN_142502620(**(undefined8 **)(param_1 + 8));
  if (lVar3 == 0) {
    if (*(short *)(param_2 + 8) < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_2 + 8) >> 5;
    }
    cVar2 = FUN_1424a7e30(param_2,0,iVar4,L"other",0,5);
    local_38 = L"other";
    if (cVar2 != '\0') {
      puVar1 = *(undefined8 **)(param_1 + 8);
      FUN_1424a7060(local_80,1,L"other",5);
      lVar3 = FUN_142502620(*puVar1,local_80);
      FUN_140859a90(local_80);
      if (lVar3 != 0) goto LAB_14256e72a;
    }
    FUN_1424a6c90(local_80,&DAT_1499eecf0);
    FUN_1424a7ca0(param_3,local_80);
    FUN_140859a90(local_80);
  }
  else {
LAB_14256e72a:
    FUN_1424a7c80(param_3,lVar3);
  }
  return param_3;
}



// FUNCTION 14256e800 Unwind@14256e800 body=44 status=ok
// SIG undefined Unwind@14256e800(void)

void Unwind_14256e800(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x78) = L"other";
  return;
}



// FUNCTION 14256e830 FUN_14256e830 body=1756 status=ok
// SIG undefined FUN_14256e830(void)

void FUN_14256e830(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *_Str1;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_178 [64];
  undefined2 local_138 [32];
  undefined4 local_f8 [2];
  short local_f0;
  int local_ec;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  uint local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  int local_5c;
  short *local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  if (0 < *param_3) {
    return;
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
    local_f8[0] = 0xffffffff;
    lVar2 = FUN_1425022e0(*plVar5,local_f8);
    if (lVar2 != 0) {
      do {
        puVar4 = *(undefined8 **)(lVar2 + 8);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        lVar2 = FUN_1425022e0(*plVar5,local_f8);
      } while (lVar2 != 0);
    }
    if (*plVar5 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar5);
  }
  uVar3 = FUN_14256e310();
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (0 < *param_3) {
    return;
  }
  puVar4 = (undefined8 *)FUN_142540ae0(param_2,param_3);
  if ((puVar4 == (undefined8 *)0x0) && (*param_3 < 1)) {
    *param_3 = 7;
    return;
  }
  if (0 < *param_3) goto LAB_14256eef1;
  local_4c[0] = 0;
  local_88 = FUN_1424ebfe0(0,*(undefined8 *)(param_2 + 0x28),local_4c);
  local_80 = FUN_1424ec1c0(local_88,"NumberElements",0,local_4c);
  local_78 = puVar4;
  uVar3 = FUN_1425410c0(puVar4);
  lVar2 = local_88;
  FUN_1424ec1c0(local_80,uVar3,local_88,local_4c);
  FUN_1424ec1c0(lVar2,"patterns",lVar2,local_4c);
  local_70 = FUN_1424ec010(lVar2,"decimalFormat",&local_90,local_4c);
  if (local_4c[0] == 2) {
    _Str1 = (char *)FUN_1425410c0(local_78);
    iVar1 = strcmp(_Str1,"latn");
    lVar2 = local_88;
    if (iVar1 != 0) {
      local_4c[0] = 0;
      FUN_1424ec1c0(local_80,&DAT_1499eed28,local_88,local_4c);
      FUN_1424ec1c0(lVar2,"patterns",lVar2,local_4c);
      local_70 = FUN_1424ec010(lVar2,"decimalFormat",&local_90,local_4c);
    }
  }
  iVar1 = 0;
  uVar11 = local_90;
  if ((local_4c[0] < 1) && (0 < (int)local_90)) {
    if (local_90 == 1) {
      uVar8 = 0;
      local_58 = (short *)0x0;
      uVar7 = 0;
      uVar3 = 0;
      iVar1 = 0;
    }
    else {
      psVar9 = (short *)(local_70 + 2);
      iVar10 = local_90 - 1;
      uVar8 = 0;
      local_58 = (short *)0x0;
      uVar3 = 0;
      iVar1 = 0;
      do {
        uVar7 = (uint)uVar8;
        if (psVar9[-1] == 0x3b) {
          uVar3 = CONCAT71((int7)((ulonglong)psVar9 >> 8),1);
          uVar11 = uVar7;
          local_58 = psVar9;
          iVar1 = iVar10;
        }
        if (*psVar9 == 0x3b) {
          local_58 = psVar9 + 1;
          iVar1 = (uVar7 ^ 0xfffffffe) + local_90;
          uVar11 = uVar7 + 1;
          uVar3 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        }
        uVar8 = uVar8 + 2;
        psVar9 = psVar9 + 2;
        iVar10 = iVar10 + -2;
      } while ((local_90 & 0xfffffffe) != uVar8);
      uVar7 = (uint)uVar8;
    }
    if (((local_90 & 1) != 0) && (*(short *)(local_70 + uVar8 * 2) == 0x3b)) {
      local_58 = (short *)(local_70 + uVar8 * 2 + 2);
      iVar1 = local_90 + ~uVar7;
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      uVar11 = (uint)uVar8;
    }
  }
  else {
    uVar3 = 0;
    local_58 = (short *)0x0;
  }
  if (local_4c[0] < 1) {
    local_b8 = uVar3;
    local_a8 = FUN_1424ebfe0("icudt64l-curr",*(undefined8 *)(param_2 + 0x28),local_4c);
    local_a0 = FUN_1424ec1c0(local_a8,"CurrencyUnitPatterns",0,local_4c);
    plVar5 = (longlong *)FUN_1412ad930(*(undefined8 *)(param_1 + 0x10),local_4c);
    if ((plVar5 == (longlong *)0x0) && (local_4c[0] < 1)) {
      local_4c[0] = 7;
LAB_14256ee97:
      *param_3 = 7;
    }
    else {
      local_98 = plVar5;
      iVar10 = local_4c[0];
      if (local_4c[0] < 1) {
        while( true ) {
          do {
            local_b0 = (**(code **)(*local_98 + 0x20))(local_98,0,local_4c);
            iVar10 = local_4c[0];
            if ((local_b0 == 0) || (0 < local_4c[0])) goto LAB_14256ee8b;
            local_8c = 0;
            lVar2 = FUN_1424ec010(local_a0,local_b0,&local_5c,&local_8c);
            iVar10 = local_8c;
            if ((local_8c == 7) || (iVar10 = local_8c, lVar2 == 0)) goto LAB_14256ee8b;
          } while ((0 < local_8c) || (local_5c < 1));
          lVar6 = thunk_FUN_1424da030(0x40);
          if (lVar6 == 0) break;
          local_68 = lVar6;
          FUN_1424a7000(lVar6,lVar2,local_5c);
          FUN_1424a7000(local_f8,local_70,uVar11);
          FUN_1424a7060(local_138,1,&DAT_1499eed46,3);
          FUN_1424bcf60(local_68,local_138,local_f8);
          FUN_140859a90(local_138);
          FUN_140859a90(local_f8);
          FUN_1424a7060(local_f8,1,&DAT_1499eed4e,3);
          FUN_1424a7060(local_138,1,&DAT_1499eed56,3);
          FUN_1424bcf60(local_68,local_138,local_f8);
          FUN_140859a90(local_138);
          FUN_140859a90(local_f8);
          if ((char)local_b8 != '\0') {
            FUN_1424a7000(local_f8,lVar2,local_5c);
            FUN_1424a7000(local_138,local_58,iVar1);
            FUN_1424a7060(local_178,1,&DAT_1499eed46,3);
            FUN_1424bcf60(local_f8,local_178,local_138);
            FUN_140859a90(local_178);
            FUN_140859a90(local_138);
            FUN_1424a7060(local_138,1,&DAT_1499eed4e,3);
            FUN_1424a7060(local_178,1,&DAT_1499eed56,3);
            FUN_1424bcf60(local_f8,local_178,local_138);
            FUN_140859a90(local_178);
            FUN_140859a90(local_138);
            local_138[0] = 0x3b;
            FUN_1424a6cf0(local_68,local_138,0,1);
            iVar10 = local_ec;
            if (-1 < local_f0) {
              iVar10 = (int)local_f0 >> 5;
            }
            FUN_1424a9690(local_68,local_f8,0,iVar10);
            FUN_140859a90(local_f8);
          }
          uVar3 = *(undefined8 *)(param_1 + 8);
          FUN_1424a7220(local_f8,local_b0,0xffffffff,0);
          FUN_142534fd0(uVar3,local_f8,local_68,param_3);
          FUN_140859a90(local_f8);
        }
        iVar10 = 7;
      }
LAB_14256ee8b:
      local_4c[0] = iVar10;
      plVar5 = local_98;
      if (local_4c[0] == 7) goto LAB_14256ee97;
    }
    puVar4 = local_78;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
    if (local_a0 != 0) {
      FUN_1424ea9f0();
    }
    if (local_a8 != 0) {
      FUN_1424ea9f0();
    }
  }
  else {
    puVar4 = local_78;
    if (local_4c[0] == 7) {
      *param_3 = 7;
    }
  }
  if (local_80 != 0) {
    FUN_1424ea9f0();
  }
  if (local_88 != 0) {
    FUN_1424ea9f0();
  }
LAB_14256eef1:
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}



// FUNCTION 14256ef20 Unwind@14256ef20 body=58 status=ok
// SIG undefined Unwind@14256ef20(void)

void Unwind_14256ef20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x130));
  return;
}



// FUNCTION 14256ef60 Unwind@14256ef60 body=55 status=ok
// SIG undefined Unwind@14256ef60(void)

void Unwind_14256ef60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 14256efa0 Unwind@14256efa0 body=55 status=ok
// SIG undefined Unwind@14256efa0(void)

void Unwind_14256efa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14256efe0 Unwind@14256efe0 body=55 status=ok
// SIG undefined Unwind@14256efe0(void)

void Unwind_14256efe0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 14256f020 Unwind@14256f020 body=55 status=ok
// SIG undefined Unwind@14256f020(void)

void Unwind_14256f020(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14256f060 Unwind@14256f060 body=55 status=ok
// SIG undefined Unwind@14256f060(void)

void Unwind_14256f060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14256f0a0 Unwind@14256f0a0 body=55 status=ok
// SIG undefined Unwind@14256f0a0(void)

void Unwind_14256f0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 14256f0e0 Unwind@14256f0e0 body=55 status=ok
// SIG undefined Unwind@14256f0e0(void)

void Unwind_14256f0e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14256f120 Unwind@14256f120 body=55 status=ok
// SIG undefined Unwind@14256f120(void)

void Unwind_14256f120(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 14256f160 Unwind@14256f160 body=55 status=ok
// SIG undefined Unwind@14256f160(void)

void Unwind_14256f160(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14256f1a0 Unwind@14256f1a0 body=55 status=ok
// SIG undefined Unwind@14256f1a0(void)

void Unwind_14256f1a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14256f1e0 Unwind@14256f1e0 body=63 status=ok
// SIG undefined Unwind@14256f1e0(void)

void Unwind_14256f1e0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x100))(*(undefined8 **)(param_2 + 0x100),1);
  return;
}



// FUNCTION 14256f220 Unwind@14256f220 body=78 status=ok
// SIG undefined Unwind@14256f220(void)

void Unwind_14256f220(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xf8));
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}



// FUNCTION 14256f270 Unwind@14256f270 body=117 status=ok
// SIG undefined Unwind@14256f270(void)

void Unwind_14256f270(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x118) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x118));
  }
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x110));
  }
  if (*(longlong *)(param_2 + 0x120) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x120))(*(undefined8 **)(param_2 + 0x120),1);
  }
  return;
}



// FUNCTION 14256f2f0 FUN_14256f2f0 body=91 status=ok
// SIG undefined FUN_14256f2f0(void)

bool FUN_14256f2f0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    sVar2 = *(short *)(param_2 + 8);
    if (sVar2 < 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = (int)sVar2 >> 5;
    }
    bVar6 = false;
    if ((((int)sVar2 & 1U) == 0) && (iVar4 == iVar5)) {
      cVar3 = FUN_1412ae090();
      bVar6 = cVar3 != '\0';
    }
  }
  else {
    bVar6 = (bool)(*(byte *)(param_2 + 8) & 1);
  }
  return bVar6;
}



// FUNCTION 14256f350 FUN_14256f350 body=38 status=ok
// SIG undefined FUN_14256f350(void)

undefined8 FUN_14256f350(undefined8 param_1,int param_2)

{
  FUN_14256e570();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256f380 FUN_14256f380 body=1 status=ok
// SIG undefined FUN_14256f380(void)

void FUN_14256f380(void)

{
  return;
}



// FUNCTION 14256f390 FUN_14256f390 body=4 status=ok
// SIG undefined FUN_14256f390(void)

void FUN_14256f390(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14256f3a0 FUN_14256f3a0 body=31 status=ok
// SIG undefined FUN_14256f3a0(void)

void FUN_14256f3a0(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = icu_64::FieldPositionOnlyHandler::vftable;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 14256f3c0 FUN_14256f3c0 body=47 status=ok
// SIG undefined FUN_14256f3c0(void)

void FUN_14256f3c0(longlong param_1,int param_2,int param_3,int param_4)

{
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 8) == param_2) &&
     ((*(char *)(param_1 + 0x18) == '\0' || (*(char *)(param_1 + 0x19) == '\0')))) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    *(int *)(*(longlong *)(param_1 + 0x10) + 0xc) = param_3 + *(int *)(param_1 + 8);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4 + *(int *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 14256f3f0 FUN_14256f3f0 body=39 status=ok
// SIG undefined FUN_14256f3f0(void)

void FUN_14256f3f0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), *(int *)(lVar2 + 8) != -1)) &&
     (*(int *)(lVar2 + 0xc) != -1)) {
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + param_2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *piVar1 = *piVar1 + param_2;
  }
  return;
}



// FUNCTION 14256f420 FUN_14256f420 body=12 status=ok
// SIG undefined FUN_14256f420(void)

undefined8 FUN_14256f420(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x10) + 8) != -1);
}



// FUNCTION 14256f430 FUN_14256f430 body=123 status=ok
// SIG undefined FUN_14256f430(void)

undefined8 * FUN_14256f430(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = icu_64::FieldPositionIteratorHandler::vftable;
  param_1[2] = param_2;
  param_1[3] = 0;
  iVar1 = *param_3;
  *(int *)(param_1 + 4) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if ((param_2 != 0) && (iVar1 < 1)) {
    lVar2 = thunk_FUN_1424da030(0x20);
    if (lVar2 != 0) {
      FUN_142517d10(lVar2,param_1 + 4);
    }
    param_1[3] = lVar2;
  }
  return param_1;
}



// FUNCTION 14256f4b0 Unwind@14256f4b0 body=32 status=ok
// SIG undefined Unwind@14256f4b0(void)

void Unwind_14256f4b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256f4d0 FUN_14256f4d0 body=69 status=ok
// SIG undefined FUN_14256f4d0(void)

void FUN_14256f4d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_64::FieldPositionIteratorHandler::vftable;
  if (param_1[2] != 0) {
    FUN_14262c510(param_1[2],param_1[3],param_1 + 4,param_4,0xfffffffffffffffe);
  }
  param_1[3] = 0;
  return;
}



// FUNCTION 14256f520 Unwind@14256f520 body=20 status=ok
// SIG undefined Unwind@14256f520(void)

void Unwind_14256f520(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14256f540 FUN_14256f540 body=351 status=ok
// SIG undefined FUN_14256f540(void)

void FUN_14256f540(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    return;
  }
  if (param_4 <= param_3) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar4 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if ((iVar2 < -1) || (iVar6 = iVar2, *(int *)(lVar4 + 0xc) <= iVar2)) {
    cVar5 = FUN_1425182c0(lVar4,iVar2 + 1,piVar1);
    if (cVar5 != '\0') {
      iVar6 = *(int *)(lVar4 + 8);
      goto LAB_14256f5ae;
    }
  }
  else {
LAB_14256f5ae:
    *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar6 * 4) = uVar3;
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar6 = *(int *)(lVar4 + 8);
  if ((iVar6 < -1) || (*(int *)(lVar4 + 0xc) <= iVar6)) {
    cVar5 = FUN_1425182c0(lVar4,iVar6 + 1,piVar1);
    if (cVar5 != '\0') {
      iVar6 = *(int *)(lVar4 + 8);
      goto LAB_14256f5e9;
    }
  }
  else {
LAB_14256f5e9:
    *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar6 * 4) = param_2;
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(lVar4 + 8);
  if ((iVar7 < -1) || (*(int *)(lVar4 + 0xc) <= iVar7)) {
    cVar5 = FUN_1425182c0(lVar4,iVar7 + 1,piVar1);
    if (cVar5 != '\0') {
      iVar7 = *(int *)(lVar4 + 8);
      goto LAB_14256f625;
    }
  }
  else {
LAB_14256f625:
    *(int *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar7 * 4) = param_3 + iVar6;
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(lVar4 + 8);
  if ((iVar7 < -1) || (*(int *)(lVar4 + 0xc) <= iVar7)) {
    cVar5 = FUN_1425182c0(lVar4,iVar7 + 1,piVar1);
    if (cVar5 == '\0') goto LAB_14256f66c;
    iVar7 = *(int *)(lVar4 + 8);
  }
  *(int *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar7 * 4) = param_4 + iVar6;
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
LAB_14256f66c:
  if (*piVar1 < 1) {
    return;
  }
  FUN_142518020(*(undefined8 *)(param_1 + 0x18),iVar2);
  return;
}



// FUNCTION 14256f6a0 FUN_14256f6a0 body=112 status=ok
// SIG undefined FUN_14256f6a0(void)

void FUN_14256f6a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x20) < 1)) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(lVar2 + 8);
    if (0 < iVar1) {
      FUN_142518140(lVar2,*(int *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(iVar1 - 1) * 4) +
                          param_2);
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar3 = 0;
      if (((iVar1 != 1) && (iVar3 = 0, 0 < *(int *)(lVar2 + 8))) &&
         ((int)(iVar1 - 2U) < *(int *)(lVar2 + 8))) {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(iVar1 - 2U) * 4);
      }
      FUN_142518140(lVar2,iVar3 + param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14256f710 FUN_14256f710 body=8 status=ok
// SIG undefined FUN_14256f710(void)

bool FUN_14256f710(longlong param_1)

{
  return *(int *)(param_1 + 0x20) < 1;
}



// FUNCTION 14256f720 FUN_14256f720 body=29 status=ok
// SIG undefined FUN_14256f720(void)

undefined8 FUN_14256f720(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256f740 FUN_14256f740 body=88 status=ok
// SIG undefined FUN_14256f740(void)

undefined8 * FUN_14256f740(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::FieldPositionIteratorHandler::vftable;
  if (param_1[2] != 0) {
    FUN_14262c510(param_1[2],param_1[3],param_1 + 4);
  }
  param_1[3] = 0;
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14256f7a0 Unwind@14256f7a0 body=21 status=ok
// SIG undefined Unwind@14256f7a0(void)

void Unwind_14256f7a0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14256f7c0 FUN_14256f7c0 body=129 status=ok
// SIG undefined FUN_14256f7c0(void)

void FUN_14256f7c0(longlong param_1)

{
  FUN_142537d10();
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x58) = 2;
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x98) = 2;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1424a7130();
  FUN_1424a7130(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 14256f850 Unwind@14256f850 body=50 status=ok
// SIG undefined Unwind@14256f850(void)

void Unwind_14256f850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_142537d50(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14256f890 FUN_14256f890 body=25 status=ok
// SIG undefined FUN_14256f890(void)

void FUN_14256f890(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14262c610(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 14256f8b0 FUN_14256f8b0 body=22 status=ok
// SIG undefined FUN_14256f8b0(void)

void FUN_14256f8b0(longlong param_1)

{
  if ((*(char *)(param_1 + 8) == '\0') && ((*(byte *)(param_1 + 0x4c) & 1) != 0)) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) ^ 1;
    return;
  }
  return;
}



// FUNCTION 14256f8d0 FUN_14256f8d0 body=17 status=ok
// SIG undefined FUN_14256f8d0(void)

bool FUN_14256f8d0(longlong param_1)

{
  return (*(byte *)(param_1 + 0x4d) & 1) == 0 && 0 < *(int *)(param_1 + 0x48);
}



// FUNCTION 14256f8f0 FUN_14256f8f0 body=22 status=ok
// SIG undefined FUN_14256f8f0(void)

uint FUN_14256f8f0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(uint *)(param_1 + 0x4c) & 0x40) == 0) {
      uVar1 = *(uint *)(param_1 + 0x4c) >> 7 & 1;
    }
  }
  return uVar1;
}



// FUNCTION 14256f910 FUN_14256f910 body=179 status=ok
// SIG undefined FUN_14256f910(void)

void FUN_14256f910(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 & 0x40) == 0) {
    if ((char)uVar1 < '\0') {
      if ((uVar1 & 1) == 0) {
        uVar4 = 0x7ff0000000000000;
      }
      else {
        uVar4 = 0xfff0000000000000;
      }
    }
    else {
      cVar2 = FUN_142538620();
      if (((cVar2 == '\0') || (cVar2 = FUN_142538cb0(param_1), (param_3 & 0x10) != 0)) ||
         (cVar2 == '\0')) {
        lVar3 = thunk_FUN_1424da030(0x48);
        if (lVar3 != 0) {
          FUN_142537d90(lVar3,param_1);
        }
        FUN_14252d570(param_2,lVar3);
        return;
      }
      uVar4 = 0x8000000000000000;
    }
  }
  else {
    uVar4 = FUN_1424d9790();
  }
  FUN_14252d340(param_2,uVar4);
  return;
}



// FUNCTION 14256f9d0 Unwind@14256f9d0 body=36 status=ok
// SIG undefined Unwind@14256f9d0(void)

void Unwind_14256f9d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14256fa00 FUN_14256fa00 body=10 status=ok
// SIG undefined FUN_14256fa00(void)

undefined4 FUN_14256fa00(longlong param_1,longlong param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                  *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48));
}



// FUNCTION 14256fa10 FUN_14256fa10 body=548 status=ok
// SIG undefined FUN_14256fa10(void)

undefined8 * FUN_14256fa10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *_Src;
  
  *param_1 = *param_2;
  FUN_1424a7ca0(param_1 + 2,param_2 + 2);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  FUN_1424a7ca0(param_1 + 0xd,param_2 + 0xd);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  FUN_1424a7ca0(param_1 + 0x18,param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  FUN_1424a7ca0(param_1 + 0x22,param_2 + 0x22);
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2c] = param_2[0x2c];
  FUN_1424a7ca0(param_1 + 0x2d,param_2 + 0x2d);
  FUN_1424a7ca0(param_1 + 0x35,param_2 + 0x35);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  FUN_1424a7ca0(param_1 + 0x3e,param_2 + 0x3e);
  FUN_1424a7ca0(param_1 + 0x46,param_2 + 0x46);
  FUN_1424a7ca0(param_1 + 0x4e,param_2 + 0x4e);
  FUN_1424a7ca0(param_1 + 0x56,param_2 + 0x56);
  FUN_1424a7ca0(param_1 + 0x5e,param_2 + 0x5e);
  FUN_1424a7ca0(param_1 + 0x66,param_2 + 0x66);
  FUN_1424a7ca0(param_1 + 0x6e,param_2 + 0x6e);
  FUN_1424a7ca0(param_1 + 0x76,param_2 + 0x76);
  FUN_142503340(param_1 + 0x7e,param_2 + 0x7e);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 0x86);
  if (*(char *)((longlong)param_1 + 0x444) != '\0') {
    FUN_1424da110(param_1[0x87]);
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)((longlong)param_1 + 0x444) = *(undefined1 *)((longlong)param_2 + 0x444);
  _Src = (undefined8 *)param_2[0x87];
  if (_Src == param_2 + 0x89) {
    param_1[0x87] = param_1 + 0x89;
    memcpy(param_1 + 0x89,_Src,(longlong)*(int *)(param_2 + 0x88) << 3);
  }
  else {
    param_1[0x87] = _Src;
    param_2[0x87] = param_2 + 0x89;
    *(undefined4 *)(param_2 + 0x88) = 8;
    *(undefined1 *)((longlong)param_2 + 0x444) = 0;
  }
  *(undefined4 *)(param_2 + 0x86) = 0;
  return param_1;
}



// FUNCTION 14256fc40 FUN_14256fc40 body=561 status=ok
// SIG undefined FUN_14256fc40(void)

longlong FUN_14256fc40(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  lVar4 = 0;
  do {
    if (*(char *)(param_1 + 0x134 + lVar4) != '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x128 + lVar4));
    }
    *(undefined4 *)(param_1 + 0x130 + lVar4) = *(undefined4 *)(param_2 + 0x130 + lVar4);
    *(undefined1 *)(param_1 + 0x134 + lVar4) = *(undefined1 *)(param_2 + 0x134 + lVar4);
    pvVar1 = *(void **)(param_2 + 0x128 + lVar4);
    pvVar3 = (void *)(param_2 + lVar4 + 0x138);
    if (pvVar3 == pvVar1) {
      pvVar3 = (void *)(param_1 + lVar4 + 0x138);
      *(void **)(param_1 + 0x128 + lVar4) = pvVar3;
      memcpy(pvVar3,pvVar1,(longlong)*(int *)(param_2 + 0x130 + lVar4) << 3);
    }
    else {
      *(void **)(param_1 + 0x128 + lVar4) = pvVar1;
      *(void **)(param_2 + 0x128 + lVar4) = pvVar3;
      *(undefined4 *)(param_2 + 0x130 + lVar4) = 3;
      *(undefined1 *)(param_2 + 0x134 + lVar4) = 0;
    }
    *(undefined4 *)(param_1 + 0x150 + lVar4) = *(undefined4 *)(param_2 + 0x150 + lVar4);
    if (*(char *)(param_1 + 0x164 + lVar4) != '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x158 + lVar4));
    }
    *(undefined4 *)(param_1 + 0x160 + lVar4) = *(undefined4 *)(param_2 + 0x160 + lVar4);
    *(undefined1 *)(param_1 + 0x164 + lVar4) = *(undefined1 *)(param_2 + 0x164 + lVar4);
    pvVar1 = *(void **)(param_2 + 0x158 + lVar4);
    pvVar3 = (void *)(param_2 + lVar4 + 0x166);
    if (pvVar3 == pvVar1) {
      pvVar3 = (void *)(param_1 + lVar4 + 0x166);
      *(void **)(param_1 + 0x158 + lVar4) = pvVar3;
      memcpy(pvVar3,pvVar1,(longlong)*(int *)(param_2 + 0x160 + lVar4) * 2);
    }
    else {
      *(void **)(param_1 + 0x158 + lVar4) = pvVar1;
      *(void **)(param_2 + 0x158 + lVar4) = pvVar3;
      *(undefined4 *)(param_2 + 0x160 + lVar4) = 4;
      *(undefined1 *)(param_2 + 0x164 + lVar4) = 0;
    }
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0x1e0);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  return param_1;
}



// FUNCTION 14256fe90 FUN_14256fe90 body=376 status=ok
// SIG undefined FUN_14256fe90(void)

void FUN_14256fe90(longlong param_1)

{
  *(undefined ***)(param_1 + 0x2b0) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x2f4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x2e8));
  }
  *(undefined ***)(param_1 + 0x2b0) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x2c4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x2b8));
  }
  *(undefined ***)(param_1 + 0x260) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x2a4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x298));
  }
  *(undefined ***)(param_1 + 0x260) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x274) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x268));
  }
  *(undefined ***)(param_1 + 0x210) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x254) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x248));
  }
  *(undefined ***)(param_1 + 0x210) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x224) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x218));
  }
  *(undefined ***)(param_1 + 0x1c0) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x204) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x1f8));
  }
  *(undefined ***)(param_1 + 0x1c0) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x1c8));
  }
  *(undefined ***)(param_1 + 0x170) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x1b4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x1a8));
  }
  *(undefined ***)(param_1 + 0x170) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x184) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x178));
  }
  *(undefined ***)(param_1 + 0x120) = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)(param_1 + 0x164) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x158));
  }
  *(undefined ***)(param_1 + 0x120) = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x128));
    return;
  }
  return;
}



// FUNCTION 142570010 FUN_142570010 body=287 status=ok
// SIG undefined FUN_142570010(void)

longlong FUN_142570010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1424a7ca0(param_1 + 0x10,param_2 + 0x10);
  FUN_1424a7ca0(param_1 + 0x50,param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  uVar5 = *(undefined4 *)(param_2 + 0xa0);
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  uVar7 = *(undefined4 *)(param_2 + 0xa8);
  uVar8 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar9 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar9);
        lVar9 = lVar9 + -0x40;
      } while (lVar9 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  return param_1;
}



// FUNCTION 142570130 FUN_142570130 body=173 status=ok
// SIG undefined FUN_142570130(void)

void FUN_142570130(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = icu_64::numparse::impl::DecimalMatcher::vftable;
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  FUN_140859a90(param_1 + 10);
  FUN_140859a90(param_1 + 2);
  return;
}



// FUNCTION 1425701e0 FUN_1425701e0 body=68 status=ok
// SIG undefined FUN_1425701e0(void)

void FUN_1425701e0(undefined8 *param_1)

{
  *param_1 = icu_64::numparse::impl::ScientificMatcher::vftable;
  FUN_140859a90(param_1 + 0x2a);
  FUN_140859a90(param_1 + 0x22);
  FUN_142570130(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  return;
}



// FUNCTION 142570230 FUN_142570230 body=166 status=ok
// SIG undefined FUN_142570230(void)

void FUN_142570230(undefined8 *param_1)

{
  *param_1 = icu_64::numparse::impl::CombinedCurrencyMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x2a4) != '\0') {
    FUN_1424da110(param_1[0x53]);
  }
  FUN_140859a90(param_1 + 0x4b);
  FUN_140859a90(param_1 + 0x43);
  FUN_140859a90(param_1 + 0x3b);
  FUN_140859a90(param_1 + 0x33);
  FUN_140859a90(param_1 + 0x2b);
  FUN_140859a90(param_1 + 0x23);
  FUN_140859a90(param_1 + 0x1b);
  FUN_140859a90(param_1 + 0x13);
  FUN_140859a90(param_1 + 10);
  FUN_140859a90(param_1 + 2);
  return;
}



// FUNCTION 1425702e0 FUN_1425702e0 body=3771 status=ok
// SIG undefined FUN_1425702e0(void)

longlong * FUN_1425702e0(longlong param_1,longlong param_2,char param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined1 local_f20 [224];
  undefined **local_e40;
  undefined **local_e38;
  undefined **local_e30;
  undefined2 local_e28;
  undefined **local_df0;
  undefined2 local_de8;
  undefined **local_db0;
  undefined2 local_da8;
  undefined **local_d70;
  undefined2 local_d68;
  undefined1 local_d2f;
  undefined **local_d28;
  undefined **local_d20;
  undefined2 local_d18;
  undefined **local_ce0;
  undefined2 local_cd8;
  undefined **local_ca0;
  undefined2 local_c98;
  undefined **local_c60;
  undefined2 local_c58;
  undefined1 local_c1f;
  undefined **local_c18;
  undefined **local_c10;
  undefined2 local_c08;
  undefined **local_bd0;
  undefined2 local_bc8;
  undefined **local_b90;
  undefined2 local_b88;
  undefined **local_b50;
  undefined2 local_b48;
  undefined1 local_b0f;
  undefined **local_b08;
  undefined **local_b00;
  undefined2 local_af8;
  undefined **local_ac0;
  undefined2 local_ab8;
  undefined **local_a80;
  undefined2 local_a78;
  undefined **local_a40;
  undefined2 local_a38;
  undefined1 local_9ff;
  undefined **local_9f8;
  undefined **local_9f0;
  undefined2 local_9e8;
  undefined **local_9b0;
  undefined2 local_9a8;
  undefined **local_970;
  undefined2 local_968;
  undefined **local_930;
  undefined2 local_928;
  undefined1 local_8ef;
  undefined **local_8e8;
  undefined **local_8e0;
  undefined2 local_8d8;
  undefined **local_8a0;
  undefined2 local_898;
  undefined **local_860;
  undefined2 local_858;
  undefined **local_820;
  undefined2 local_818;
  undefined1 local_7df;
  undefined1 local_7d8;
  undefined1 local_7d0 [32];
  undefined8 local_7b0;
  char local_7a4;
  undefined1 local_770 [64];
  undefined1 local_730 [64];
  undefined1 local_6f0 [32];
  undefined **local_6d0;
  undefined **local_6c8;
  undefined2 local_6c0;
  undefined **local_688;
  undefined2 local_680;
  undefined **local_648;
  undefined2 local_640;
  undefined **local_608;
  undefined2 local_600;
  undefined1 local_5c7;
  undefined1 local_5c0 [24];
  undefined1 local_5a8 [8];
  byte local_5a0;
  undefined **local_568;
  undefined **local_560;
  undefined1 local_558 [56];
  longlong local_520;
  undefined1 local_518 [16];
  undefined **local_508;
  undefined1 local_500 [40];
  undefined1 local_4d8;
  undefined1 local_4d0 [32];
  undefined **local_4b0;
  undefined1 local_4a8 [24];
  undefined1 local_490 [48];
  undefined **local_460;
  undefined1 local_458 [8];
  undefined1 local_450 [56];
  undefined1 local_418 [8];
  undefined1 local_410 [64];
  undefined1 local_3d0 [64];
  undefined1 local_390 [64];
  undefined1 local_350 [64];
  undefined1 local_310 [64];
  undefined1 local_2d0 [408];
  int local_138;
  longlong local_130;
  char local_124;
  undefined1 local_e0 [32];
  undefined1 *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  uint local_a0;
  undefined1 local_94 [12];
  int local_88 [2];
  longlong local_80;
  longlong local_70;
  longlong *local_68;
  undefined ***local_60;
  longlong *local_58;
  byte local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = param_3;
  FUN_1424a3ce0(local_f20,param_2 + 0x750);
  local_6d0 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_6c8 = &PTR_FUN_149e18960;
  local_6c0 = 2;
  local_688 = &PTR_FUN_149e18960;
  local_680 = 2;
  local_648 = &PTR_FUN_149e18960;
  local_640 = 2;
  local_608 = &PTR_FUN_149e18960;
  local_600 = 2;
  local_5c7 = 1;
  local_e40 = icu_64::number::impl::CurrencyPluralInfoAffixProvider::vftable;
  local_e38 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_e30 = &PTR_FUN_149e18960;
  local_e28 = 2;
  local_df0 = &PTR_FUN_149e18960;
  local_de8 = 2;
  local_db0 = &PTR_FUN_149e18960;
  local_da8 = 2;
  local_d70 = &PTR_FUN_149e18960;
  local_d68 = 2;
  local_d2f = 1;
  local_d28 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_d20 = &PTR_FUN_149e18960;
  local_d18 = 2;
  local_ce0 = &PTR_FUN_149e18960;
  local_cd8 = 2;
  local_ca0 = &PTR_FUN_149e18960;
  local_c98 = 2;
  local_c60 = &PTR_FUN_149e18960;
  local_c58 = 2;
  local_c1f = 1;
  local_c18 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_c10 = &PTR_FUN_149e18960;
  local_c08 = 2;
  local_bd0 = &PTR_FUN_149e18960;
  local_bc8 = 2;
  local_b90 = &PTR_FUN_149e18960;
  local_b88 = 2;
  local_b50 = &PTR_FUN_149e18960;
  local_b48 = 2;
  local_b0f = 1;
  local_b08 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_b00 = &PTR_FUN_149e18960;
  local_af8 = 2;
  local_ac0 = &PTR_FUN_149e18960;
  local_ab8 = 2;
  local_a80 = &PTR_FUN_149e18960;
  local_a78 = 2;
  local_a40 = &PTR_FUN_149e18960;
  local_a38 = 2;
  local_9ff = 1;
  local_9f8 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_9f0 = &PTR_FUN_149e18960;
  local_9e8 = 2;
  local_9b0 = &PTR_FUN_149e18960;
  local_9a8 = 2;
  local_970 = &PTR_FUN_149e18960;
  local_968 = 2;
  local_930 = &PTR_FUN_149e18960;
  local_928 = 2;
  local_8ef = 1;
  local_8e8 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  local_8e0 = &PTR_FUN_149e18960;
  local_8d8 = 2;
  local_8a0 = &PTR_FUN_149e18960;
  local_898 = 2;
  local_860 = &PTR_FUN_149e18960;
  local_858 = 2;
  local_820 = &PTR_FUN_149e18960;
  local_818 = 2;
  local_7df = 1;
  local_7d8 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    pppuVar11 = &local_6d0;
    FUN_14256c280(pppuVar11,param_1,param_4);
  }
  else {
    pppuVar11 = &local_e40;
    FUN_14256c720(pppuVar11,*(longlong *)(param_1 + 0x30),param_1,param_4);
  }
  if (0 < *param_4) {
    plVar15 = (longlong *)0x0;
    goto LAB_14257112f;
  }
  FUN_14262bc50(local_e0,param_1,local_f20,param_4);
  local_60 = pppuVar11;
  FUN_14256dd50(local_6f0,local_e0);
  piVar19 = param_4;
  FUN_14262b900(local_7d0,local_6f0,local_f20,param_2,param_4);
  bVar16 = *(char *)(param_1 + 0x1cc) != '\0';
  bVar17 = *(int *)(param_1 + 0x1d0) == 1;
  local_70 = param_2;
  FUN_14262b510(local_94,param_1);
  if (*param_4 < 1) {
    cVar6 = *(char *)(param_1 + 0x1c8);
    cVar1 = *(char *)(param_1 + 0x1c9);
    cVar2 = *(char *)(param_1 + 0x2f4);
    sVar7 = FUN_14262b730(local_94);
    local_4a = bVar16 || bVar17;
    bVar18 = cVar6 == '\0';
    uVar10 = bVar18 + 0x10;
    if (cVar1 == '\0') {
      uVar10 = (uint)bVar18;
    }
    uVar4 = uVar10 + 0x400;
    if (cVar2 == '\0') {
      uVar4 = uVar10;
    }
    uVar10 = 0x80;
    if (bVar16 || bVar17) {
      uVar10 = 0x30c;
    }
    uVar13 = uVar10 | uVar4 | 0x20;
    if (0 < sVar7) {
      uVar13 = uVar10 | uVar4;
    }
    if (local_49 == '\0') {
      cVar6 = (*(code *)(*local_60)[4])();
      if (cVar6 != '\0') goto LAB_1425706c1;
    }
    else {
LAB_1425706c1:
      uVar13 = uVar13 | 2;
    }
    uVar10 = uVar13 | 0x2000;
    if (local_49 != '\0') {
      uVar10 = uVar13;
    }
    local_58 = (longlong *)thunk_FUN_1424da030(0x1010);
    if (local_58 != (longlong *)0x0) {
      *local_58 = (longlong)icu_64::numparse::impl::NumberParserImpl::vftable;
      *(uint *)(local_58 + 1) = uVar10;
      *(undefined4 *)((longlong)local_58 + 0xc) = 0;
      local_58[2] = (longlong)(local_58 + 4);
      *(undefined4 *)(local_58 + 3) = 10;
      *(undefined1 *)((longlong)local_58 + 0x1c) = 0;
      *(undefined1 *)(local_58 + 0xe) = 0;
      FUN_142571700(local_58 + 0xf);
      local_58[0x1f9] = (longlong)icu_64::numparse::impl::RequireAffixValidator::vftable;
      local_58[0x1fa] = (longlong)icu_64::numparse::impl::RequireCurrencyValidator::vftable;
      local_58[0x1fb] = (longlong)icu_64::numparse::impl::RequireDecimalSeparatorValidator::vftable;
      local_58[0x1fd] = (longlong)icu_64::numparse::impl::RequireNumberValidator::vftable;
      local_58[0x1fe] = (longlong)icu_64::numparse::impl::MultiplierParseHandler::vftable;
      *(undefined4 *)(local_58 + 0x1ff) = 0;
      local_58[0x200] = 0;
      *(undefined4 *)(local_58 + 0x201) = 0;
    }
    FUN_14262cd50(&local_568,local_4a + 1);
    plVar5 = local_58;
    plVar15 = local_58 + 0xf;
    FUN_1424a7ca0(local_58 + 0x10,&local_560);
    plVar5[0x18] = local_520;
    local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(&local_560);
    local_c0 = local_7d0;
    local_b8 = local_70;
    local_a8 = local_f20;
    local_b0 = plVar15;
    local_a0 = uVar10;
    local_68 = plVar15;
    FUN_14262da70(&local_568,&local_c0);
    plVar15 = local_58 + 0x168;
    FUN_14256fa10(plVar15,&local_568);
    uVar20 = (undefined4)((ulonglong)piVar19 >> 0x20);
    if (0 < local_138) {
      lVar14 = 0;
      iVar8 = local_138;
      do {
        puVar3 = *(undefined8 **)(local_130 + lVar14 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          iVar8 = local_138;
        }
        uVar20 = (undefined4)((ulonglong)piVar19 >> 0x20);
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar8);
    }
    if (local_124 != '\0') {
      FUN_1424da110(local_130);
    }
    FUN_142570230(local_410);
    local_460 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_458);
    local_4b0 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_4a8);
    local_508 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_500);
    local_560 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(local_558);
    FUN_14262df40(&local_568,plVar15);
    plVar5 = local_58;
    plVar15 = local_58 + 0x107;
    FUN_14256fc40(plVar15,&local_568);
    lVar14 = local_70;
    FUN_14256fe90(&local_568);
    FUN_14262e470(plVar15,local_60,plVar5,local_68,CONCAT44(uVar20,uVar10),param_4);
    if (local_49 == '\0') {
      cVar6 = (*(code *)(*local_60)[4])();
      if (cVar6 != '\0') goto LAB_1425709a0;
    }
    else {
LAB_1425709a0:
      FUN_142630c80(&local_568,local_7d0,lVar14,uVar10,param_4);
      plVar5 = local_58;
      plVar15 = local_58 + 0xac;
      local_58[0xad] = (longlong)local_560;
      FUN_1424a7ca0(local_58 + 0xae,local_558);
      FUN_1424a7ca0(plVar5 + 0xb6,local_518);
      *(undefined1 *)(plVar5 + 0xbe) = local_4d8;
      FUN_1424a7ca0(plVar5 + 0xbf,local_4d0);
      FUN_1424a7ca0(plVar5 + 199,local_490);
      FUN_1424a7ca0(plVar5 + 0xcf,local_450);
      FUN_1424a7ca0(plVar5 + 0xd7,local_410);
      FUN_1424a7ca0(plVar5 + 0xdf,local_3d0);
      FUN_1424a7ca0(plVar5 + 0xe7,local_390);
      FUN_1424a7ca0(plVar5 + 0xef,local_350);
      FUN_1424a7ca0(plVar5 + 0xf7,local_310);
      FUN_142503340(plVar5 + 0xff,local_2d0);
      (**(code **)(*plVar5 + 8))(plVar5,plVar15);
      FUN_142570230(&local_568);
    }
    if (local_4a == 0) {
      cVar6 = (*(code *)(*local_60)[8])(local_60,&DAT_fffffffd,param_4);
      if (cVar6 != '\0') {
        FUN_14262d240(&local_568,lVar14);
        plVar5 = local_58;
        plVar15 = local_58 + 0x42;
        FUN_1424a7ca0(local_58 + 0x43,&local_560);
        plVar5[0x4b] = local_520;
        (**(code **)(*plVar5 + 8))(plVar5,plVar15);
        local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
        FUN_140859a90(&local_560);
      }
      cVar6 = (*(code *)(*local_60)[8])(local_60,0xfffffffc,param_4);
      if (cVar6 != '\0') {
        FUN_14262d330(&local_568,lVar14);
        plVar5 = local_58;
        plVar15 = local_58 + 0x4c;
        FUN_1424a7ca0(local_58 + 0x4d,&local_560);
        plVar5[0x55] = local_520;
        (**(code **)(*plVar5 + 8))(plVar5,plVar15);
        local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
        FUN_140859a90(&local_560);
      }
      FUN_14262d420(&local_568,lVar14,0);
      plVar5 = local_58;
      plVar15 = local_58 + 0x56;
      FUN_1424a7ca0(local_58 + 0x57,&local_560);
      plVar5[0x5f] = local_520;
      *(undefined1 *)(plVar5 + 0x60) = local_518[0];
      (**(code **)(*plVar5 + 8))(plVar5,plVar15);
      local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
      FUN_140859a90(&local_560);
      FUN_14262cf70(&local_568,lVar14,0);
      plVar5 = local_58;
      plVar15 = local_58 + 0x23;
      FUN_1424a7ca0(local_58 + 0x24,&local_560);
      plVar5[0x2c] = local_520;
      *(undefined1 *)(plVar5 + 0x2d) = local_518[0];
      (**(code **)(*plVar5 + 8))(plVar5,plVar15);
      local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
      FUN_140859a90(&local_560);
    }
    FUN_14262d070(&local_568,lVar14);
    plVar5 = local_58;
    plVar15 = local_58 + 0x2e;
    FUN_1424a7ca0(local_58 + 0x2f,&local_560);
    plVar5[0x37] = local_520;
    (**(code **)(*plVar5 + 8))(plVar5,plVar15);
    local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(&local_560);
    FUN_14262ce80(&local_568,lVar14);
    plVar5 = local_58;
    plVar15 = local_58 + 0x19;
    FUN_1424a7ca0(local_58 + 0x1a,&local_560);
    plVar5[0x22] = local_520;
    (**(code **)(*plVar5 + 8))(plVar5,plVar15);
    local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
    FUN_140859a90(&local_560);
    FUN_1424a6be0(local_5a8,param_1 + 0x188);
    if ((local_5a0 & 1) == 0) {
      uVar9 = FUN_14262cc20(local_68);
      cVar6 = FUN_142512960(uVar9,local_5a8);
      if (cVar6 == '\0') {
        FUN_14262d150(&local_568,local_5a8);
        plVar5 = local_58;
        plVar15 = local_58 + 0x38;
        FUN_1424a7ca0(local_58 + 0x39,&local_560);
        plVar5[0x41] = local_520;
        (**(code **)(*plVar5 + 8))(plVar5,plVar15);
        local_568 = icu_64::numparse::impl::SymbolMatcher::vftable;
        FUN_140859a90(&local_560);
      }
    }
    (**(code **)(*local_58 + 8))(local_58,local_68);
    FUN_14262f6c0(&local_568,lVar14,local_94,uVar10);
    plVar15 = local_58;
    uVar9 = FUN_142570010(local_58 + 0x61,&local_568);
    (**(code **)(*plVar15 + 8))(plVar15,uVar9);
    FUN_142570130(&local_568);
    if ((*(char *)(param_1 + 0x1d4) == '\0') || (0 < *(int *)(param_1 + 0x60))) {
      FUN_1426308a0(&local_568,lVar14,local_94);
      plVar5 = local_58;
      plVar15 = local_58 + 0x7a;
      FUN_1424a7ca0(local_58 + 0x7b,&local_560);
      FUN_142570010(plVar5 + 0x83,&local_520);
      FUN_1424a7ca0(plVar5 + 0x9c,local_458);
      FUN_1424a7ca0(plVar5 + 0xa4,local_418);
      (**(code **)(*plVar5 + 8))(plVar5,plVar15);
      local_568 = icu_64::numparse::impl::ScientificMatcher::vftable;
      FUN_140859a90(local_418);
      FUN_140859a90(local_458);
      FUN_142570130(&local_520);
      FUN_140859a90(&local_560);
    }
    (**(code **)(*local_58 + 8))(local_58,local_58 + 0x1fd);
    if (local_4a != 0) {
      (**(code **)(*local_58 + 8))(local_58,local_58 + 0x1f9);
    }
    if (local_49 != '\0') {
      (**(code **)(*local_58 + 8))(local_58,local_58 + 0x1fa);
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_142631720(&local_568,*(int *)(param_1 + 0x54) != 0 || *(char *)(param_1 + 0x41) != '\0');
      *(undefined1 *)(local_58 + 0x1fc) = local_560._0_1_;
      (**(code **)(*local_58 + 8))(local_58,local_58 + 0x1fb);
    }
    iVar8 = *(int *)(param_1 + 0x74);
    iVar12 = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x50);
    if ((iVar12 == 0) || (iVar8 == 1)) {
      if (iVar12 == 0) {
        if (iVar8 == 1) {
          FUN_14256d1a0(local_88);
        }
        else {
          FUN_14256d210(local_88,(double)iVar8);
        }
      }
      else {
        FUN_14256d1c0(local_88,iVar12);
      }
    }
    else {
      FUN_14256d380(local_88,(double)iVar8);
    }
    if ((local_88[0] != 0) || (local_80 != 0)) {
      FUN_14256cf90(local_5c0,local_88);
      FUN_1426317c0(&local_568,local_5c0);
      plVar5 = local_58;
      plVar15 = local_58 + 0x1fe;
      FUN_14256d110(local_58 + 0x1ff,&local_560);
      (**(code **)(*plVar5 + 8))(plVar5,plVar15);
      local_568 = icu_64::numparse::impl::MultiplierParseHandler::vftable;
      FUN_14256d170(&local_560);
    }
    plVar15 = local_58;
    *(undefined1 *)(local_58 + 0xe) = 1;
    FUN_14256d170(local_88);
    FUN_140859a90(local_5a8);
  }
  else {
    plVar15 = (longlong *)0x0;
  }
  FUN_140859a90(local_730);
  FUN_140859a90(local_770);
  if (local_7a4 != '\0') {
    FUN_1424da110(local_7b0);
  }
  thunk_FUN_1424b70d0(local_7d0);
  thunk_FUN_1424b70d0(local_e0);
LAB_14257112f:
  FUN_1424cad10(&local_e40);
  local_6d0 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(&local_608);
  FUN_140859a90(&local_648);
  FUN_140859a90(&local_688);
  FUN_140859a90(&local_6c8);
  FUN_142573db0(&local_6d0);
  FUN_1414b3f60(local_f20);
  return plVar15;
}



// FUNCTION 1425711b0 Unwind@1425711b0 body=87 status=ok
// SIG undefined Unwind@1425711b0(void)

void Unwind_1425711b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0xf00) + 0x1c) != '\0') {
    FUN_1424da110(*(undefined8 *)(*(longlong *)(param_2 + 0xf00) + 0x10));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf00));
  return;
}



// FUNCTION 142571210 Unwind@142571210 body=72 status=ok
// SIG undefined Unwind@142571210(void)

void Unwind_142571210(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 142571260 Unwind@142571260 body=72 status=ok
// SIG undefined Unwind@142571260(void)

void Unwind_142571260(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 1425712b0 Unwind@1425712b0 body=72 status=ok
// SIG undefined Unwind@1425712b0(void)

void Unwind_1425712b0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 142571300 Unwind@142571300 body=72 status=ok
// SIG undefined Unwind@142571300(void)

void Unwind_142571300(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 142571350 Unwind@142571350 body=72 status=ok
// SIG undefined Unwind@142571350(void)

void Unwind_142571350(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 1425713a0 Unwind@1425713a0 body=58 status=ok
// SIG undefined Unwind@1425713a0(void)

void Unwind_1425713a0(undefined8 param_1,longlong param_2)

{
  FUN_142570130(param_2 + 0x9f0);
  return;
}



// FUNCTION 1425713e0 Unwind@1425713e0 body=58 status=ok
// SIG undefined Unwind@1425713e0(void)

void Unwind_1425713e0(undefined8 param_1,longlong param_2)

{
  FUN_1425701e0(param_2 + 0x9f0);
  return;
}



// FUNCTION 142571420 Unwind@142571420 body=72 status=ok
// SIG undefined Unwind@142571420(void)

void Unwind_142571420(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::MultiplierParseHandler::vftable;
  FUN_14256d170(param_2 + 0x9f8);
  return;
}



// FUNCTION 142571470 Unwind@142571470 body=58 status=ok
// SIG undefined Unwind@142571470(void)

void Unwind_142571470(undefined8 param_1,longlong param_2)

{
  FUN_14256d170(param_2 + 0xed0);
  return;
}



// FUNCTION 1425714b0 Unwind@1425714b0 body=58 status=ok
// SIG undefined Unwind@1425714b0(void)

void Unwind_1425714b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x9b0);
  return;
}



// FUNCTION 1425714f0 Unwind@1425714f0 body=73 status=ok
// SIG undefined Unwind@1425714f0(void)

void Unwind_1425714f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf00) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xf00))(*(undefined8 **)(param_2 + 0xf00),1);
  }
  return;
}



// FUNCTION 142571540 Unwind@142571540 body=58 status=ok
// SIG undefined Unwind@142571540(void)

void Unwind_142571540(undefined8 param_1,longlong param_2)

{
  FUN_14256c8f0(param_2 + 0x788);
  return;
}



// FUNCTION 142571580 Unwind@142571580 body=58 status=ok
// SIG undefined Unwind@142571580(void)

void Unwind_142571580(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xe78);
  return;
}



// FUNCTION 1425715c0 Unwind@1425715c0 body=79 status=ok
// SIG undefined Unwind@1425715c0(void)

void Unwind_1425715c0(undefined8 param_1,longlong param_2)

{
  FUN_1424cad10(param_2 + 0x118);
  FUN_1424caee0(param_2 + 0x888);
  FUN_1414b3f60(param_2 + 0x38);
  return;
}



// FUNCTION 142571610 Unwind@142571610 body=58 status=ok
// SIG undefined Unwind@142571610(void)

void Unwind_142571610(undefined8 param_1,longlong param_2)

{
  FUN_142570230(param_2 + 0x9f0);
  return;
}



// FUNCTION 142571650 Unwind@142571650 body=72 status=ok
// SIG undefined Unwind@142571650(void)

void Unwind_142571650(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 1425716a0 Unwind@1425716a0 body=72 status=ok
// SIG undefined Unwind@1425716a0(void)

void Unwind_1425716a0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x9f0) = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_2 + 0x9f8);
  return;
}



// FUNCTION 1425716f0 FUN_1425716f0 body=1 status=ok
// SIG undefined FUN_1425716f0(void)

void FUN_1425716f0(void)

{
  return;
}



// FUNCTION 142571700 FUN_142571700 body=1170 status=ok
// SIG undefined FUN_142571700(void)

void FUN_142571700(undefined8 *param_1)

{
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  *param_1 = icu_64::numparse::impl::IgnorablesMatcher::vftable;
  param_1[0xb] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc) = 2;
  param_1[10] = icu_64::numparse::impl::InfinityMatcher::vftable;
  param_1[0x15] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x16) = 2;
  param_1[0x14] = icu_64::numparse::impl::MinusSignMatcher::vftable;
  param_1[0x20] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x21) = 2;
  param_1[0x1f] = icu_64::numparse::impl::NanMatcher::vftable;
  param_1[0x2a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2b) = 2;
  param_1[0x29] = icu_64::numparse::impl::PaddingMatcher::vftable;
  param_1[0x34] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x35) = 2;
  param_1[0x33] = icu_64::numparse::impl::PercentMatcher::vftable;
  param_1[0x3e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3f) = 2;
  param_1[0x3d] = icu_64::numparse::impl::PermilleMatcher::vftable;
  param_1[0x48] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x49) = 2;
  param_1[0x47] = icu_64::numparse::impl::PlusSignMatcher::vftable;
  param_1[0x52] = icu_64::numparse::impl::DecimalMatcher::vftable;
  param_1[0x54] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x55) = 2;
  param_1[0x5c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5d) = 2;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = icu_64::numparse::impl::ScientificMatcher::vftable;
  param_1[0x6c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6d) = 2;
  param_1[0x74] = icu_64::numparse::impl::DecimalMatcher::vftable;
  param_1[0x76] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x77) = 2;
  param_1[0x7e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7f) = 2;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8e) = 2;
  param_1[0x95] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x96) = 2;
  param_1[0x9d] = icu_64::numparse::impl::CombinedCurrencyMatcher::vftable;
  param_1[0x9f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa0) = 2;
  param_1[0xa7] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa8) = 2;
  param_1[0xb0] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb1) = 2;
  param_1[0xb8] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb9) = 2;
  param_1[0xc0] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc1) = 2;
  param_1[200] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc9) = 2;
  param_1[0xd0] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd1) = 2;
  param_1[0xd8] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd9) = 2;
  param_1[0xe0] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe1) = 2;
  param_1[0xe8] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe9) = 2;
  param_1[0xf0] = (longlong)param_1 + 0x78d;
  *(undefined4 *)(param_1 + 0xf1) = 0x28;
  *(undefined1 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78d) = 0;
  FUN_142572740(param_1 + 0xf8);
  param_1[0x15b] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x15c) = 2;
  param_1[0x15a] = icu_64::numparse::impl::MinusSignMatcher::vftable;
  param_1[0x166] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x167) = 2;
  param_1[0x165] = icu_64::numparse::impl::PlusSignMatcher::vftable;
  param_1[0x171] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x172) = 2;
  param_1[0x170] = icu_64::numparse::impl::PercentMatcher::vftable;
  param_1[0x17b] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x17c) = 2;
  param_1[0x17a] = icu_64::numparse::impl::PermilleMatcher::vftable;
  param_1[0x184] = icu_64::numparse::impl::CombinedCurrencyMatcher::vftable;
  param_1[0x186] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x187) = 2;
  param_1[0x18e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 399) = 2;
  param_1[0x197] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x198) = 2;
  param_1[0x19f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a0) = 2;
  param_1[0x1a7] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a8) = 2;
  param_1[0x1af] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1b0) = 2;
  param_1[0x1b7] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1b8) = 2;
  param_1[0x1bf] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1c0) = 2;
  param_1[0x1c7] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1c8) = 2;
  param_1[0x1cf] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1d0) = 2;
  param_1[0x1d7] = (longlong)param_1 + 0xec5;
  *(undefined4 *)(param_1 + 0x1d8) = 0x28;
  *(undefined1 *)((longlong)param_1 + 0xec4) = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec5) = 0;
  *(undefined4 *)(param_1 + 0x1df) = 0;
  param_1[0x1e0] = param_1 + 0x1e2;
  *(undefined4 *)(param_1 + 0x1e1) = 8;
  *(undefined1 *)((longlong)param_1 + 0xf0c) = 0;
  return;
}



// FUNCTION 142571ba0 Unwind@142571ba0 body=201 status=ok
// SIG undefined Unwind@142571ba0(void)

void Unwind_142571ba0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_142570230(*(undefined8 *)(param_2 + 0x78));
  FUN_1425701e0(*(undefined8 *)(param_2 + 0x70));
  FUN_142570130(*(undefined8 *)(param_2 + 0x68));
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  puVar1[0x47] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  puVar1[0x3d] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x58));
  puVar1[0x33] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x50));
  puVar1[0x29] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x48));
  puVar1[0x1f] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  puVar1[0x14] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  puVar1[10] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  *puVar1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142571c70 FUN_142571c70 body=430 status=ok
// SIG undefined FUN_142571c70(void)

void FUN_142571c70(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x1df);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[0x1e0] + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 0x1df);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (*(char *)((longlong)param_1 + 0xf0c) != '\0') {
    FUN_1424da110(param_1[0x1e0]);
  }
  FUN_142570230(param_1 + 0x184);
  param_1[0x17a] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x17b);
  param_1[0x170] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x171);
  param_1[0x165] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x166);
  param_1[0x15a] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x15b);
  FUN_14256fe90(param_1 + 0xf8);
  FUN_142570230(param_1 + 0x9d);
  param_1[0x6b] = icu_64::numparse::impl::ScientificMatcher::vftable;
  FUN_140859a90(param_1 + 0x95);
  FUN_140859a90(param_1 + 0x8d);
  FUN_142570130(param_1 + 0x74);
  FUN_140859a90(param_1 + 0x6c);
  FUN_142570130(param_1 + 0x52);
  param_1[0x47] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x48);
  param_1[0x3d] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x3e);
  param_1[0x33] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x34);
  param_1[0x29] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x2a);
  param_1[0x1f] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x20);
  param_1[0x14] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0x15);
  param_1[10] = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 0xb);
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  return;
}



// FUNCTION 142571e30 FUN_142571e30 body=142 status=ok
// SIG undefined FUN_142571e30(void)

void FUN_142571e30(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x18) <= (int)uVar2) && (0 < (int)uVar2)) {
    uVar1 = uVar2 * 2;
    _Dst = (void *)FUN_1424da030((ulonglong)uVar1 << 3);
    if (_Dst != (void *)0x0) {
      if ((int)*(uint *)(param_1 + 0x18) < (int)uVar2) {
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      if ((int)uVar1 <= (int)uVar2) {
        uVar2 = uVar1;
      }
      memcpy(_Dst,*(void **)(param_1 + 0x10),(longlong)(int)uVar2 << 3);
      if (*(char *)(param_1 + 0x1c) != '\0') {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      }
      *(void **)(param_1 + 0x10) = _Dst;
      *(uint *)(param_1 + 0x18) = uVar1;
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0xc) * 8) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



// FUNCTION 142571ec0 FUN_142571ec0 body=4 status=ok
// SIG undefined FUN_142571ec0(void)

undefined4 FUN_142571ec0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 142571ed0 FUN_142571ed0 body=340 status=ok
// SIG undefined FUN_142571ed0(void)

void FUN_142571ed0(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined8 param_5,int *param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_6 < 1) {
    FUN_14262c5e0(local_60,param_2,*(byte *)(param_1 + 8) & 1);
    FUN_14262c630(local_60,param_3);
    if (param_4 == '\0') {
      uVar6 = 1;
      if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
        uVar6 = 0xffffff9c;
      }
      local_68 = param_6;
      FUN_142572050(param_1,local_60,param_5,uVar6);
    }
    else if (0 < *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      do {
        iVar3 = FUN_14262c780(local_60);
        if (iVar3 == 0) break;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
        if (cVar2 == '\0') {
          iVar7 = iVar7 + 1;
        }
        else {
          iVar3 = FUN_14262c610(local_60);
          (**(code **)(*plVar1 + 0x10))(plVar1,local_60,param_5,param_6);
          if (0 < *param_6) break;
          iVar4 = FUN_14262c610(local_60);
          iVar7 = iVar7 + 1;
          if (iVar4 != iVar3) {
            iVar7 = 0;
          }
        }
      } while (iVar7 < *(int *)(param_1 + 0xc));
    }
    if (0 < *(int *)(param_1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar5 * 8);
        (**(code **)(*plVar1 + 0x20))(plVar1,param_5);
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xc));
    }
    FUN_14256f8b0(param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142572050 FUN_142572050 body=721 status=ok
// SIG undefined FUN_142572050(void)

void FUN_142572050(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_220 [72];
  undefined8 local_1d8;
  undefined1 local_1d0 [64];
  undefined1 local_190 [64];
  undefined8 local_150;
  undefined1 local_148 [72];
  undefined8 local_100;
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_1;
  iVar4 = FUN_14262c780(param_2);
  if ((param_4 != 0) && (iVar4 != 0)) {
    local_50 = param_4;
    FUN_142537d90(local_148,param_3);
    local_100 = *(undefined8 *)(param_3 + 0x48);
    local_70 = param_3 + 0x50;
    FUN_1424a6be0(local_f8);
    local_68 = param_3 + 0x90;
    FUN_1424a6be0(local_b8);
    local_78 = *(undefined8 *)(param_3 + 0xd0);
    local_58 = param_3;
    FUN_14256f7c0(local_220);
    iVar4 = FUN_14262c610();
    local_50 = local_50 + 1;
    for (local_4c = 0; (int)local_4c < *(int *)(local_60 + 0xc); local_4c = local_4c + 1) {
      plVar1 = *(longlong **)(*(longlong *)(local_60 + 0x10) + (ulonglong)local_4c * 8);
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      if (cVar2 != '\0') {
        iVar7 = 0;
        do {
          iVar5 = FUN_14262c780(param_2);
          if (iVar5 <= iVar7) break;
          uVar6 = FUN_14262c7e0(param_2,iVar7);
          FUN_142537dc0(local_220,local_148);
          local_1d8 = local_100;
          FUN_1424a7c80(local_1d0,local_f8);
          FUN_1424a7c80(local_190,local_b8);
          iVar7 = (iVar7 - (uint)(uVar6 < 0x10000)) + 2;
          local_150 = local_78;
          FUN_14262c750(param_2,iVar7);
          cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_220,param_5);
          FUN_14262c760(param_2);
          if (0 < *param_5) goto LAB_1425722d0;
          iVar5 = FUN_14262c610(param_2);
          if (iVar5 - iVar4 == iVar7) {
            FUN_142572050(local_60,param_2,local_220,local_50,param_5);
            if (0 < *param_5) goto LAB_1425722d0;
            cVar3 = FUN_14256fa00(local_220,local_58);
            if (cVar3 != '\0') {
              FUN_142537dc0(local_58,local_220);
              *(undefined8 *)(local_58 + 0x48) = local_1d8;
              FUN_1424a7c80(local_70,local_1d0);
              FUN_1424a7c80(local_68,local_190);
              *(undefined8 *)(local_58 + 0xd0) = local_150;
            }
          }
          FUN_14262c620(param_2,iVar4);
        } while (cVar2 != '\0');
      }
    }
LAB_1425722d0:
    FUN_140859a90(local_190);
    FUN_140859a90(local_1d0);
    FUN_142537d50(local_220);
    FUN_140859a90(local_b8);
    FUN_140859a90(local_f8);
    FUN_142537d50(local_148);
  }
  return;
}



// FUNCTION 142572330 Unwind@142572330 body=58 status=ok
// SIG undefined Unwind@142572330(void)

void Unwind_142572330(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x150);
  return;
}



// FUNCTION 142572370 Unwind@142572370 body=58 status=ok
// SIG undefined Unwind@142572370(void)

void Unwind_142572370(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x100);
  return;
}



// FUNCTION 1425723b0 Unwind@1425723b0 body=55 status=ok
// SIG undefined Unwind@1425723b0(void)

void Unwind_1425723b0(undefined8 param_1,longlong param_2)

{
  FUN_1424c8680(param_2 + 0x28);
  return;
}



// FUNCTION 1425723f0 Unwind@1425723f0 body=58 status=ok
// SIG undefined Unwind@1425723f0(void)

void Unwind_1425723f0(undefined8 param_1,longlong param_2)

{
  FUN_1424c8680(param_2 + 0x100);
  return;
}



// FUNCTION 142572430 FUN_142572430 body=100 status=ok
// SIG undefined FUN_142572430(void)

undefined8 * FUN_142572430(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::NumberParserImpl::vftable;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[0x1fe] = icu_64::numparse::impl::MultiplierParseHandler::vftable;
  FUN_14256d170(param_1 + 0x1ff);
  FUN_142571c70(param_1 + 0xf);
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    FUN_1424da110(param_1[2]);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425724a0 FUN_1425724a0 body=2 status=ok
// SIG undefined FUN_1425724a0(void)

void FUN_1425724a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1425724b0 FUN_1425724b0 body=3 status=ok
// SIG undefined FUN_1425724b0(void)

undefined8 FUN_1425724b0(void)

{
  return 0;
}



// FUNCTION 1425724c0 FUN_1425724c0 body=1 status=ok
// SIG undefined FUN_1425724c0(void)

void FUN_1425724c0(void)

{
  return;
}



// FUNCTION 1425724d0 FUN_1425724d0 body=70 status=ok
// SIG undefined FUN_1425724d0(void)

void FUN_1425724d0(undefined8 *param_1)

{
  *param_1 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x44) != '\0') {
    FUN_1424da110(param_1[7]);
  }
  *param_1 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FUN_1424da110(param_1[1]);
    return;
  }
  return;
}



// FUNCTION 142572520 FUN_142572520 body=83 status=ok
// SIG undefined FUN_142572520(void)

undefined8 * FUN_142572520(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x44) != '\0') {
    FUN_1424da110(param_1[7]);
  }
  *param_1 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FUN_1424da110(param_1[1]);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142572580 FUN_142572580 body=58 status=ok
// SIG undefined FUN_142572580(void)

undefined8 * FUN_142572580(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::ArraySeriesMatcher::vftable;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    FUN_1424da110(param_1[1]);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1425725c0 FUN_1425725c0 body=38 status=ok
// SIG undefined FUN_1425725c0(void)

undefined8 FUN_1425725c0(undefined8 param_1,int param_2)

{
  FUN_142570130();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425725f0 FUN_1425725f0 body=85 status=ok
// SIG undefined FUN_1425725f0(void)

undefined8 * FUN_1425725f0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::ScientificMatcher::vftable;
  FUN_140859a90(param_1 + 0x2a);
  FUN_140859a90(param_1 + 0x22);
  FUN_142570130(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572650 FUN_142572650 body=38 status=ok
// SIG undefined FUN_142572650(void)

undefined8 FUN_142572650(undefined8 param_1,int param_2)

{
  FUN_142570230();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572680 FUN_142572680 body=29 status=ok
// SIG undefined FUN_142572680(void)

undefined8 FUN_142572680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425726a0 FUN_1425726a0 body=3 status=ok
// SIG undefined FUN_1425726a0(void)

undefined8 FUN_1425726a0(void)

{
  return 0;
}



// FUNCTION 1425726b0 FUN_1425726b0 body=3 status=ok
// SIG undefined FUN_1425726b0(void)

undefined8 FUN_1425726b0(void)

{
  return 0;
}



// FUNCTION 1425726c0 FUN_1425726c0 body=29 status=ok
// SIG undefined FUN_1425726c0(void)

undefined8 FUN_1425726c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425726e0 FUN_1425726e0 body=29 status=ok
// SIG undefined FUN_1425726e0(void)

undefined8 FUN_1425726e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572700 FUN_142572700 body=52 status=ok
// SIG undefined FUN_142572700(void)

undefined8 * FUN_142572700(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::MultiplierParseHandler::vftable;
  FUN_14256d170(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572740 FUN_142572740 body=480 status=ok
// SIG undefined FUN_142572740(void)

undefined8 * FUN_142572740(undefined8 *param_1)

{
  *param_1 = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[4] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[8] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0xc] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x10] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x14] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x18] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x1c] = icu_64::numparse::impl::AffixMatcher::vftable;
  param_1[0x20] = icu_64::numparse::impl::AffixMatcher::vftable;
  FUN_142631be0();
  param_1[0x24] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x2b] = (longlong)param_1 + 0x166;
  *(undefined4 *)(param_1 + 0x2c) = 4;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined2 *)((longlong)param_1 + 0x166) = 0;
  FUN_142631be0();
  param_1[0x2e] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x35] = (longlong)param_1 + 0x1b6;
  *(undefined4 *)(param_1 + 0x36) = 4;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b6) = 0;
  FUN_142631be0();
  param_1[0x38] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x3f] = (longlong)param_1 + 0x206;
  *(undefined4 *)(param_1 + 0x40) = 4;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined2 *)((longlong)param_1 + 0x206) = 0;
  FUN_142631be0();
  param_1[0x42] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x49] = (longlong)param_1 + 0x256;
  *(undefined4 *)(param_1 + 0x4a) = 4;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  *(undefined2 *)((longlong)param_1 + 0x256) = 0;
  FUN_142631be0();
  param_1[0x4c] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x53] = (longlong)param_1 + 0x2a6;
  *(undefined4 *)(param_1 + 0x54) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a6) = 0;
  FUN_142631be0();
  param_1[0x56] = icu_64::numparse::impl::AffixPatternMatcher::vftable;
  param_1[0x5d] = (longlong)param_1 + 0x2f6;
  *(undefined4 *)(param_1 + 0x5e) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f6) = 0;
  return param_1;
}



// FUNCTION 142572920 Unwind@142572920 body=54 status=ok
// SIG undefined Unwind@142572920(void)

void Unwind_142572920(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x28);
  while (lVar1 != lVar2) {
    lVar2 = lVar2 + -0x50;
    FUN_1425724d0(lVar2);
  }
  return;
}



// FUNCTION 142572960 FUN_142572960 body=52 status=ok
// SIG undefined FUN_142572960(void)

undefined8 * FUN_142572960(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425729a0 FUN_1425729a0 body=52 status=ok
// SIG undefined FUN_1425729a0(void)

undefined8 * FUN_1425729a0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425729e0 FUN_1425729e0 body=52 status=ok
// SIG undefined FUN_1425729e0(void)

undefined8 * FUN_1425729e0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572a20 FUN_142572a20 body=52 status=ok
// SIG undefined FUN_142572a20(void)

undefined8 * FUN_142572a20(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572a60 FUN_142572a60 body=52 status=ok
// SIG undefined FUN_142572a60(void)

undefined8 * FUN_142572a60(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572aa0 FUN_142572aa0 body=52 status=ok
// SIG undefined FUN_142572aa0(void)

undefined8 * FUN_142572aa0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572ae0 FUN_142572ae0 body=52 status=ok
// SIG undefined FUN_142572ae0(void)

undefined8 * FUN_142572ae0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572b20 FUN_142572b20 body=52 status=ok
// SIG undefined FUN_142572b20(void)

undefined8 * FUN_142572b20(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::numparse::impl::SymbolMatcher::vftable;
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572b60 FUN_142572b60 body=29 status=ok
// SIG undefined FUN_142572b60(void)

undefined8 FUN_142572b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572b80 FUN_142572b80 body=29 status=ok
// SIG undefined FUN_142572b80(void)

undefined8 FUN_142572b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142572ba0 FUN_142572ba0 body=1 status=ok
// SIG undefined FUN_142572ba0(void)

void FUN_142572ba0(void)

{
  return;
}



// FUNCTION 142572bb0 FUN_142572bb0 body=1 status=ok
// SIG undefined FUN_142572bb0(void)

void FUN_142572bb0(void)

{
  return;
}



// FUNCTION 142572bc0 FUN_142572bc0 body=1 status=ok
// SIG undefined FUN_142572bc0(void)

void FUN_142572bc0(void)

{
  return;
}



// FUNCTION 142572bd0 FUN_142572bd0 body=243 status=ok
// SIG undefined FUN_142572bd0(void)

int FUN_142572bd0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(short *)(param_1 + 8) < 0) {
    if (0 < *(int *)(param_1 + 0xc)) {
LAB_142572c00:
      uVar6 = 0;
      iVar4 = 0;
      iVar5 = 0;
      do {
        uVar1 = FUN_1424a8030(param_1,iVar5);
        switch(uVar6) {
        case 0:
          uVar3 = (uint)(uVar1 != 0x27);
          uVar6 = (uint)(uVar1 == 0x27);
          break;
        case 1:
          uVar6 = (uint)(uVar1 != 0x27) * 2;
          goto LAB_142572c9d;
        case 2:
          uVar3 = (uint)(uVar1 != 0x27);
          uVar6 = uVar3 ^ 3;
          break;
        case 3:
          uVar6 = uVar1 == 0x27 ^ 3;
LAB_142572c9d:
          uVar3 = 1;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(short *)(param_1 + 8) < 0) {
          iVar2 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar2 = (int)*(short *)(param_1 + 8) >> 5;
        }
        iVar4 = iVar4 + uVar3;
        iVar5 = (iVar5 - (uint)(uVar1 < 0x10000)) + 2;
        if (iVar2 <= iVar5) {
          if (1 < uVar6 - 1) {
            return iVar4;
          }
          *param_2 = 1;
          return iVar4;
        }
      } while( true );
    }
  }
  else if (0 < *(short *)(param_1 + 8) >> 5) goto LAB_142572c00;
  return 0;
}



// FUNCTION 142572cf0 FUN_142572cf0 body=415 status=ok
// SIG undefined FUN_142572cf0(void)

undefined8 * FUN_142572cf0(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  iVar4 = 0;
  bVar1 = false;
  do {
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    if (iVar2 <= iVar4) {
      if (bVar1) {
        local_4a = 0x27;
        FUN_1424a6cf0(param_1,&local_4a,0,1);
      }
      return param_1;
    }
    uVar3 = FUN_1424a8030(param_2,iVar4);
    switch(uVar3) {
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2c:
switchD_142572d98_caseD_26:
      if (bVar1) {
        local_4a = 0x27;
        FUN_1424a6cf0(param_1,&local_4a,0,1);
        bVar1 = false;
        FUN_1424a7d60(param_1,uVar3);
      }
      else {
        FUN_1424a7d60(param_1,uVar3);
      }
      break;
    case 0x27:
      FUN_1424a6cf0(param_1,&DAT_1499e0130,0,0xffffffff);
      break;
    default:
      if ((uVar3 != 0xa4) && (uVar3 != 0x2030)) goto switchD_142572d98_caseD_26;
    case 0x25:
    case 0x2b:
    case 0x2d:
      if (bVar1) {
        FUN_1424a7d60(param_1,uVar3);
      }
      else {
        local_4a = 0x27;
        FUN_1424a6cf0(param_1,&local_4a,0,1);
        bVar1 = true;
        FUN_1424a7d60(param_1,uVar3);
      }
    }
    iVar4 = (iVar4 - (uint)(uVar3 < 0x10000)) + 2;
  } while( true );
}



// FUNCTION 142572ea0 Unwind@142572ea0 body=53 status=ok
// SIG undefined Unwind@142572ea0(void)

void Unwind_142572ea0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x20) = &DAT_1499e0130;
  return;
}



// FUNCTION 142572ee0 Unwind@142572ee0 body=52 status=ok
// SIG undefined Unwind@142572ee0(void)

void Unwind_142572ee0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142572f20 FUN_142572f20 body=535 status=ok
// SIG undefined FUN_142572f20(void)

int FUN_142572f20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined1 param_5,int *param_6)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong unaff_RBX;
  int iVar6;
  undefined4 unaff_EDI;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  longlong *local_80;
  longlong local_78;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = param_1 + 10;
  iVar6 = 0;
  uVar10 = 0;
  iVar9 = 0;
  local_80 = param_4;
  local_58 = param_3;
  local_50 = param_2;
  local_68 = unaff_EDI;
  do {
    if (uVar10 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar4 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar4 < 1) {
        return iVar6;
      }
    }
    else if (iVar9 == 0) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar4 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 8) >> 5;
      }
      if (iVar4 <= (int)uVar10) {
        return iVar6;
      }
    }
    else if (iVar9 == 2) {
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 < 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar3 = (int)sVar1 >> 5;
      }
      if ((uVar10 < uVar3) && (uVar10 == uVar3 - 1)) {
        lVar5 = local_78;
        if (((int)sVar1 & 2U) == 0) {
          lVar5 = *(longlong *)(param_1 + 0x18);
        }
        if (*(short *)(lVar5 + (ulonglong)uVar10 * 2) == 0x27) {
          return iVar6;
        }
      }
    }
    local_6c = uVar10;
    local_64 = iVar9;
    FUN_142573190(&local_c0,&local_6c,param_1,param_6);
    iVar9 = local_b8;
    uVar2 = local_bc;
    uVar10 = local_c0;
    if (0 < *param_6) {
      return iVar6;
    }
    if (local_b4 == 0xfffffff1) {
      uVar7 = 0xfffd;
      uVar8 = 7;
LAB_142572f90:
      uVar3 = FUN_1426098c0(local_50,iVar6 + (int)local_58,uVar7,uVar8,param_6);
      local_68 = uVar2;
    }
    else {
      uVar7 = local_bc;
      uVar8 = param_5;
      if (-1 < (int)local_b4) goto LAB_142572f90;
      local_5c = local_bc;
      if ((local_b4 < 0xfffffff1) || ((0x7fc1U >> (local_b4 + 0xf & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = (&DAT_1499eff2c)[(int)(local_b4 + 0xf)];
      (**(code **)(*local_80 + 8))(local_80,&local_c0,local_b4);
      uVar3 = FUN_142609a00(local_50,iVar6 + (int)local_58,&local_c0,
                            CONCAT71((int7)(unaff_RBX >> 8),uVar8) & 0xffffffff,param_6);
      FUN_140859a90(&local_c0);
      local_68 = local_5c;
    }
    unaff_RBX = (ulonglong)uVar3;
    iVar6 = iVar6 + uVar3;
    if ((int)uVar10 < 0) {
      return iVar6;
    }
  } while( true );
}



// FUNCTION 142573150 Unwind@142573150 body=55 status=ok
// SIG undefined Unwind@142573150(void)

void Unwind_142573150(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}


