// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ad6156 FUN_148ad6156 body=45 status=ok
// SIG undefined FUN_148ad6156(void)

longlong FUN_148ad6156(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584e6a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad6184 FUN_148ad6184 body=48 status=ok
// SIG undefined FUN_148ad6184(void)

longlong FUN_148ad6184(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_14584e6a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad62bc FUN_148ad62bc body=68 status=ok
// SIG undefined FUN_148ad62bc(void)

undefined8 FUN_148ad62bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ad6328 FUN_148ad6328 body=59 status=ok
// SIG undefined FUN_148ad6328(void)

undefined8 FUN_148ad6328(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad645a FUN_148ad645a body=59 status=ok
// SIG undefined FUN_148ad645a(void)

undefined8 FUN_148ad645a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad64fc FUN_148ad64fc body=107 status=ok
// SIG undefined FUN_148ad64fc(void)

void FUN_148ad64fc(undefined8 param_1,longlong param_2)

{
  FUN_14109baa4(param_2);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0x4b0177000000000;
  *(undefined8 *)(param_2 + 0xb8) = 0x3f8000003e4ccccd;
  *(undefined4 *)(param_2 + 0xc0) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x88) = 0x458ca00043960000;
  *(undefined8 *)(param_2 + 0x90) = 0x3d4ccccd44960000;
  *(undefined8 *)(param_2 + 0x98) = 0x4416000040a00000;
  return;
}



// FUNCTION 148ad6568 FUN_148ad6568 body=107 status=ok
// SIG undefined FUN_148ad6568(void)

void FUN_148ad6568(undefined8 param_1,longlong param_2)

{
  FUN_14109baa4(param_2);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0x4b0177000000000;
  *(undefined8 *)(param_2 + 0xb8) = 0x3f8000003e4ccccd;
  *(undefined4 *)(param_2 + 0xc0) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x88) = 0x458ca00043960000;
  *(undefined8 *)(param_2 + 0x90) = 0x3d4ccccd44960000;
  *(undefined8 *)(param_2 + 0x98) = 0x4416000040a00000;
  return;
}



// FUNCTION 148ad65f2 FUN_148ad65f2 body=139 status=ok
// SIG undefined FUN_148ad65f2(void)

undefined8 FUN_148ad65f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14115e0ba(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x8c);
    uVar2 = *(undefined4 *)(param_3 + 0x90);
    uVar3 = *(undefined4 *)(param_3 + 0x94);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x88);
    *(undefined4 *)(param_2 + 0x8c) = uVar1;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    *(undefined4 *)(param_2 + 0x94) = uVar3;
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_3 + 0x98);
    FUN_144a67f5c(param_2 + 0xa0,param_3 + 0xa0);
    uVar1 = *(undefined4 *)(param_3 + 0xb4);
    uVar2 = *(undefined4 *)(param_3 + 0xb8);
    uVar3 = *(undefined4 *)(param_3 + 0xbc);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xb4) = uVar1;
    *(undefined4 *)(param_2 + 0xb8) = uVar2;
    *(undefined4 *)(param_2 + 0xbc) = uVar3;
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148ad66a6 FUN_148ad66a6 body=59 status=ok
// SIG undefined FUN_148ad66a6(void)

undefined8 FUN_148ad66a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad66f2 FUN_148ad66f2 body=40 status=ok
// SIG undefined FUN_148ad66f2(void)

void FUN_148ad66f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14584e88e(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148ad6798 FUN_148ad6798 body=54 status=ok
// SIG undefined FUN_148ad6798(void)

undefined1 FUN_148ad6798(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ad68ac(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148ad67f6 FUN_148ad67f6 body=59 status=ok
// SIG undefined FUN_148ad67f6(void)

undefined8 FUN_148ad67f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad683c FUN_148ad683c body=34 status=ok
// SIG undefined FUN_148ad683c(void)

void FUN_148ad683c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14584e83e(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148ad68ac FUN_148ad68ac body=110 status=ok
// SIG undefined FUN_148ad68ac(void)

undefined8 * FUN_148ad68ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  FUN_144a67f5c(param_1 + 1,param_2 + 1);
  FUN_144a67f5c(param_1 + 3,param_2 + 3);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_144a67f5c(param_1 + 8,param_2 + 8);
  FUN_144a67f5c(param_1 + 10,param_2 + 10);
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x6e) = *(undefined8 *)((longlong)param_2 + 0x6e);
  return param_1;
}



// FUNCTION 148ad691c FUN_148ad691c body=132 status=ok
// SIG undefined FUN_148ad691c(void)

void FUN_148ad691c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_14109baa4(param_2 + 8);
  param_2[0x90] = 1;
  *(undefined8 *)(param_2 + 0x94) = 0x3fe666663f333333;
  *(undefined4 *)(param_2 + 0x9c) = 0x40733333;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_2 + 0xc0) = 0xffefffffffffffff;
  *(undefined8 *)(param_2 + 200) = 0x7fefffffffffffff;
  *(undefined8 *)(param_2 + 0xd0) = 0xffefffffffffffff;
  FUN_14109b97e(param_2);
  return;
}



// FUNCTION 148ad69a0 FUN_148ad69a0 body=132 status=ok
// SIG undefined FUN_148ad69a0(void)

void FUN_148ad69a0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_14109baa4(param_2 + 8);
  param_2[0x90] = 1;
  *(undefined8 *)(param_2 + 0x94) = 0x3fe666663f333333;
  *(undefined4 *)(param_2 + 0x9c) = 0x40733333;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_2 + 0xc0) = 0xffefffffffffffff;
  *(undefined8 *)(param_2 + 200) = 0x7fefffffffffffff;
  *(undefined8 *)(param_2 + 0xd0) = 0xffefffffffffffff;
  FUN_14109b97e(param_2);
  return;
}



// FUNCTION 148ad6a42 FUN_148ad6a42 body=199 status=ok
// SIG undefined FUN_148ad6a42(void)

undefined8 FUN_148ad6a42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar10);
      lVar2 = param_2 + 8 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_14115e0ba(lVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x94);
      uVar4 = *(undefined4 *)(puVar1 + 0x13);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x9c);
      *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(puVar1 + 0x12);
      *(undefined4 *)(lVar2 + 0x8c) = uVar3;
      *(undefined4 *)(lVar2 + 0x90) = uVar4;
      *(undefined4 *)(lVar2 + 0x94) = uVar5;
      *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(puVar1 + 0x14);
      FUN_140d02912(param_2 + lVar10 + 0xa8,param_3 + lVar10 + 0xa8);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xbc);
      uVar4 = *(undefined4 *)(puVar1 + 0x18);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc4);
      uVar6 = *(undefined4 *)(puVar1 + 0x19);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0xcc);
      uVar8 = *(undefined4 *)(puVar1 + 0x1a);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0xd4);
      *(undefined4 *)(lVar2 + 0xb0) = *(undefined4 *)(puVar1 + 0x17);
      *(undefined4 *)(lVar2 + 0xb4) = uVar3;
      *(undefined4 *)(lVar2 + 0xb8) = uVar4;
      *(undefined4 *)(lVar2 + 0xbc) = uVar5;
      *(undefined4 *)(lVar2 + 0xc0) = uVar6;
      *(undefined4 *)(lVar2 + 0xc4) = uVar7;
      *(undefined4 *)(lVar2 + 200) = uVar8;
      *(undefined4 *)(lVar2 + 0xcc) = uVar9;
      lVar10 = lVar10 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ad6b32 FUN_148ad6b32 body=59 status=ok
// SIG undefined FUN_148ad6b32(void)

undefined8 FUN_148ad6b32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad6b7e FUN_148ad6b7e body=40 status=ok
// SIG undefined FUN_148ad6b7e(void)

void FUN_148ad6b7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14584e7f0(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148ad6c1e FUN_148ad6c1e body=113 status=ok
// SIG undefined FUN_148ad6c1e(void)

undefined1 FUN_148ad6c1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ad6cb8 FUN_148ad6cb8 body=59 status=ok
// SIG undefined FUN_148ad6cb8(void)

undefined8 FUN_148ad6cb8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad6d5a FUN_148ad6d5a body=121 status=ok
// SIG undefined FUN_148ad6d5a(void)

void FUN_148ad6d5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar1;
  param_2[0x11] = DAT_14c8464f0;
  return;
}



// FUNCTION 148ad6dd4 FUN_148ad6dd4 body=121 status=ok
// SIG undefined FUN_148ad6dd4(void)

void FUN_148ad6dd4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar1;
  param_2[0x11] = DAT_14c8464f0;
  return;
}



// FUNCTION 148ad6e66 FUN_148ad6e66 body=68 status=ok
// SIG undefined FUN_148ad6e66(void)

undefined8 FUN_148ad6e66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ad6ed2 FUN_148ad6ed2 body=59 status=ok
// SIG undefined FUN_148ad6ed2(void)

undefined8 FUN_148ad6ed2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad7002 FUN_148ad7002 body=59 status=ok
// SIG undefined FUN_148ad7002(void)

undefined8 FUN_148ad7002(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad70a4 FUN_148ad70a4 body=139 status=ok
// SIG undefined FUN_148ad70a4(void)

void FUN_148ad70a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar1;
  param_2[0x11] = DAT_14c8464f0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148ad7130 FUN_148ad7130 body=139 status=ok
// SIG undefined FUN_148ad7130(void)

void FUN_148ad7130(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar1;
  param_2[0x11] = DAT_14c8464f0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148ad71e4 FUN_148ad71e4 body=125 status=ok
// SIG undefined FUN_148ad71e4(void)

undefined8 FUN_148ad71e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      *(undefined8 *)(param_2 + 0x90 + lVar1) = *(undefined8 *)(param_3 + 0x90 + lVar1);
      FUN_148ad7354(param_2 + lVar1 + 0x98,param_3 + lVar1 + 0x98);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ad728a FUN_148ad728a body=59 status=ok
// SIG undefined FUN_148ad728a(void)

undefined8 FUN_148ad728a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad72d6 FUN_148ad72d6 body=47 status=ok
// SIG undefined FUN_148ad72d6(void)

void FUN_148ad72d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148ad7354 FUN_148ad7354 body=89 status=ok
// SIG undefined FUN_148ad7354(void)

undefined8 * FUN_148ad7354(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ad73ae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ad73ae FUN_148ad73ae body=115 status=ok
// SIG undefined FUN_148ad73ae(void)

void FUN_148ad73ae(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ad7422 FUN_148ad7422 body=79 status=ok
// SIG undefined FUN_148ad7422(void)

void FUN_148ad7422(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b4884c(param_2);
  *param_2 = &PTR_FUN_14b520b80;
  param_2[0x115] = 0;
  param_2[0x116] = 0;
  *(undefined4 *)(param_2 + 0x117) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8bc) = 0x41f0000043800000;
  *(undefined4 *)((longlong)param_2 + 0x8c4) = 0x44368000;
  return;
}



// FUNCTION 148ad7472 FUN_148ad7472 body=79 status=ok
// SIG undefined FUN_148ad7472(void)

void FUN_148ad7472(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b4884c(param_2);
  *param_2 = &PTR_FUN_14b520b80;
  param_2[0x115] = 0;
  param_2[0x116] = 0;
  *(undefined4 *)(param_2 + 0x117) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8bc) = 0x41f0000043800000;
  *(undefined4 *)((longlong)param_2 + 0x8c4) = 0x44368000;
  return;
}



// FUNCTION 148ad74e6 FUN_148ad74e6 body=99 status=ok
// SIG undefined FUN_148ad74e6(void)

undefined1 FUN_148ad74e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411a1ca6(param_2,param_3);
    FUN_148ad764e(param_2 + 0x8a8,param_3 + 0x8a8);
    uVar1 = *(undefined4 *)(param_3 + 0x8bc);
    uVar2 = *(undefined4 *)(param_3 + 0x8c0);
    uVar3 = *(undefined4 *)(param_3 + 0x8c4);
    *(undefined4 *)(param_2 + 0x8b8) = *(undefined4 *)(param_3 + 0x8b8);
    *(undefined4 *)(param_2 + 0x8bc) = uVar1;
    *(undefined4 *)(param_2 + 0x8c0) = uVar2;
    *(undefined4 *)(param_2 + 0x8c4) = uVar3;
    param_2 = param_2 + 0x8d0;
    param_3 = param_3 + 0x8d0;
  }
  return 1;
}



// FUNCTION 148ad7572 FUN_148ad7572 body=59 status=ok
// SIG undefined FUN_148ad7572(void)

undefined8 FUN_148ad7572(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad75be FUN_148ad75be body=65 status=ok
// SIG undefined FUN_148ad75be(void)

void FUN_148ad75be(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11a) == '\x01') {
    *param_2 = &PTR_FUN_14b520b80;
    if (param_2[0x115] != 0) {
      FUN_1400020a8();
    }
    FUN_14064e066(param_2);
    *(undefined1 *)(param_2 + 0x11a) = 0;
  }
  return;
}



// FUNCTION 148ad764e FUN_148ad764e body=85 status=ok
// SIG undefined FUN_148ad764e(void)

undefined8 * FUN_148ad764e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ad76a4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ad76a4 FUN_148ad76a4 body=111 status=ok
// SIG undefined FUN_148ad76a4(void)

void FUN_148ad76a4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ad7714 FUN_148ad7714 body=68 status=ok
// SIG undefined FUN_148ad7714(void)

undefined8 * FUN_148ad7714(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520b80;
  if (param_1[0x115] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e066(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad7758 FUN_148ad7758 body=48 status=ok
// SIG undefined FUN_148ad7758(void)

void FUN_148ad7758(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148ad7788 FUN_148ad7788 body=48 status=ok
// SIG undefined FUN_148ad7788(void)

void FUN_148ad7788(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148ad77b8 FUN_148ad77b8 body=132 status=ok
// SIG undefined FUN_148ad77b8(void)

void FUN_148ad77b8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad783e FUN_148ad783e body=147 status=ok
// SIG undefined FUN_148ad783e(void)

void FUN_148ad783e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad78d2 FUN_148ad78d2 body=112 status=ok
// SIG undefined FUN_148ad78d2(void)

void FUN_148ad78d2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 148ad7942 FUN_148ad7942 body=147 status=ok
// SIG undefined FUN_148ad7942(void)

void FUN_148ad7942(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad79d6 FUN_148ad79d6 body=112 status=ok
// SIG undefined FUN_148ad79d6(void)

void FUN_148ad79d6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 148ad7a46 FUN_148ad7a46 body=147 status=ok
// SIG undefined FUN_148ad7a46(void)

void FUN_148ad7a46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad7ada FUN_148ad7ada body=31 status=ok
// SIG undefined FUN_148ad7ada(void)

undefined8 FUN_148ad7ada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad7b12 FUN_148ad7b12 body=60 status=ok
// SIG undefined FUN_148ad7b12(void)

void FUN_148ad7b12(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ac988f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51ede0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7b4e FUN_148ad7b4e body=60 status=ok
// SIG undefined FUN_148ad7b4e(void)

void FUN_148ad7b4e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ac988f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51ede0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7b8a FUN_148ad7b8a body=100 status=ok
// SIG undefined FUN_148ad7b8a(void)

void FUN_148ad7b8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ac988f0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b51ede0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ad7bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ad7bfc FUN_148ad7bfc body=31 status=ok
// SIG undefined FUN_148ad7bfc(void)

undefined8 FUN_148ad7bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad7c34 FUN_148ad7c34 body=60 status=ok
// SIG undefined FUN_148ad7c34(void)

void FUN_148ad7c34(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14b51eec0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51ee50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7c70 FUN_148ad7c70 body=60 status=ok
// SIG undefined FUN_148ad7c70(void)

void FUN_148ad7c70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14b51eec0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51ee50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7cac FUN_148ad7cac body=100 status=ok
// SIG undefined FUN_148ad7cac(void)

void FUN_148ad7cac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14b51eec0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b51ee50;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ad7d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ad7d20 FUN_148ad7d20 body=38 status=ok
// SIG undefined FUN_148ad7d20(void)

undefined8 FUN_148ad7d20(undefined8 param_1,int param_2)

{
  FUN_14117c806();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad7d46 FUN_148ad7d46 body=48 status=ok
// SIG undefined FUN_148ad7d46(void)

void FUN_148ad7d46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148ad7d76 FUN_148ad7d76 body=132 status=ok
// SIG undefined FUN_148ad7d76(void)

void FUN_148ad7d76(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad7dfc FUN_148ad7dfc body=31 status=ok
// SIG undefined FUN_148ad7dfc(void)

undefined8 FUN_148ad7dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad7e36 FUN_148ad7e36 body=68 status=ok
// SIG undefined FUN_148ad7e36(void)

void FUN_148ad7e36(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14ae6ba10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51f0f0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7e7a FUN_148ad7e7a body=68 status=ok
// SIG undefined FUN_148ad7e7a(void)

void FUN_148ad7e7a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14ae6ba10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51f0f0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad7ebe FUN_148ad7ebe body=108 status=ok
// SIG undefined FUN_148ad7ebe(void)

void FUN_148ad7ebe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14ae6ba10;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b51f0f0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ad7f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ad7f2a FUN_148ad7f2a body=62 status=ok
// SIG undefined FUN_148ad7f2a(void)

void FUN_148ad7f2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ad7f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ad7f68 FUN_148ad7f68 body=191 status=ok
// SIG undefined FUN_148ad7f68(void)

bool FUN_148ad7f68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_50 = param_6;
    local_58 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad8028 FUN_148ad8028 body=143 status=ok
// SIG undefined FUN_148ad8028(void)

void FUN_148ad8028(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad80b8 FUN_148ad80b8 body=143 status=ok
// SIG undefined FUN_148ad80b8(void)

void FUN_148ad80b8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad8148 FUN_148ad8148 body=31 status=ok
// SIG undefined FUN_148ad8148(void)

undefined8 FUN_148ad8148(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad8182 FUN_148ad8182 body=29 status=ok
// SIG undefined FUN_148ad8182(void)

bool FUN_148ad8182(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ad81a0 FUN_148ad81a0 body=26 status=ok
// SIG undefined FUN_148ad81a0(void)

bool FUN_148ad81a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ad81ba FUN_148ad81ba body=68 status=ok
// SIG undefined FUN_148ad81ba(void)

void FUN_148ad81ba(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14b51f1d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51f160;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad81fe FUN_148ad81fe body=68 status=ok
// SIG undefined FUN_148ad81fe(void)

void FUN_148ad81fe(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14b51f1d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b51f160;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148ad8242 FUN_148ad8242 body=108 status=ok
// SIG undefined FUN_148ad8242(void)

void FUN_148ad8242(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14b51f1d0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b51f160;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ad829f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ad82ae FUN_148ad82ae body=44 status=ok
// SIG undefined FUN_148ad82ae(void)

void FUN_148ad82ae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ad82d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ad82da FUN_148ad82da body=144 status=ok
// SIG undefined FUN_148ad82da(void)

bool FUN_148ad82da(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad836e FUN_148ad836e body=57 status=ok
// SIG undefined FUN_148ad836e(void)

undefined8 * FUN_148ad836e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520c50;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad83a8 FUN_148ad83a8 body=38 status=ok
// SIG undefined FUN_148ad83a8(void)

undefined8 FUN_148ad83a8(undefined8 param_1,int param_2)

{
  FUN_14581327e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad83ce FUN_148ad83ce body=52 status=ok
// SIG undefined FUN_148ad83ce(void)

undefined8 * FUN_148ad83ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520c60;
  FUN_1418c1796(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad8402 FUN_148ad8402 body=68 status=ok
// SIG undefined FUN_148ad8402(void)

undefined8 * FUN_148ad8402(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b520c48;
  param_1[2] = &PTR_FUN_14b520c50;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad8446 FUN_148ad8446 body=29 status=ok
// SIG undefined FUN_148ad8446(void)

undefined8 FUN_148ad8446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad8464 FUN_148ad8464 body=45 status=ok
// SIG undefined FUN_148ad8464(void)

undefined8 * FUN_148ad8464(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b51f240;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad8492 FUN_148ad8492 body=101 status=ok
// SIG undefined FUN_148ad8492(void)

undefined8 * FUN_148ad8492(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b517f30;
  *(undefined8 *)((longlong)puVar1 + 0x25) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2d) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x35) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x36) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad84f8 FUN_148ad84f8 body=105 status=ok
// SIG undefined FUN_148ad84f8(void)

undefined8 * FUN_148ad84f8(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_14b51f3a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_3;
  FUN_148ad9206(puVar1 + 2,param_3,1);
  *puVar1 = &PTR_FUN_14b51f260;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad8562 FUN_148ad8562 body=57 status=ok
// SIG undefined FUN_148ad8562(void)

undefined8 * FUN_148ad8562(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b51f3a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad859c FUN_148ad859c body=104 status=ok
// SIG undefined FUN_148ad859c(void)

undefined8 * FUN_148ad859c(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_LAB_14b51f3a0;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0;
  FUN_148ad9206(puVar2 + 2,0,1);
  *puVar2 = &PTR_FUN_14b51f260;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 148ad8604 FUN_148ad8604 body=66 status=ok
// SIG undefined FUN_148ad8604(void)

undefined8 * FUN_148ad8604(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_148ad9424(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b51f260;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad86a8 FUN_148ad86a8 body=90 status=ok
// SIG undefined FUN_148ad86a8(void)

int FUN_148ad86a8(longlong param_1,uint param_2,uint param_3,byte param_4,byte param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 <= param_3) {
    iVar5 = 0;
    do {
      uVar1 = (longlong)(int)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar1;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar1 & 0xffffffff;
      }
      if (param_2 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0x48)) {
        bVar2 = param_4;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + uVar4 * 0x48 + 0x15) & 1) != 0) {
          bVar2 = param_5;
        }
        iVar5 = iVar5 + (uint)bVar2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return iVar5;
}



// FUNCTION 148ad8758 FUN_148ad8758 body=474 status=ok
// SIG undefined FUN_148ad8758(void)

ulonglong FUN_148ad8758(longlong *param_1,int param_2,undefined8 param_3,longlong *param_4,
                       char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  
  iVar31 = *(int *)((longlong)param_1 + 0x2c);
  iVar24 = (**(code **)(*param_1 + 0xd8))();
  if (iVar24 < param_2 - iVar31) {
LAB_148ad877c:
    uVar28 = 0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x2c);
    uVar27 = -(int)((longlong)param_2 % (longlong)(int)uVar6);
    uVar28 = (ulonglong)uVar27;
    if ((int)uVar27 < 0) {
      uVar28 = (longlong)param_2 % (longlong)(int)uVar6 & 0xffffffff;
    }
    lVar7 = param_1[2];
    if (*(int *)(lVar7 + 0xc + uVar28 * 0x48) == param_2) {
      *(int *)((longlong)param_1 + 0x24) = param_2;
      *(int *)(param_1 + 5) = (int)uVar28;
      lVar29 = *(longlong *)(lVar7 + 8 + uVar28 * 0x48);
      *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar7 + 0xe + uVar28 * 0x48);
      param_4[1] = lVar29;
      plVar1 = (longlong *)(lVar7 + 0x18 + uVar28 * 0x48);
      lVar8 = plVar1[1];
      plVar2 = (longlong *)(lVar7 + 0x28 + uVar28 * 0x48);
      lVar20 = *plVar2;
      lVar21 = plVar2[1];
      puVar3 = (undefined8 *)(lVar7 + 0x34 + uVar28 * 0x48);
      uVar22 = *puVar3;
      uVar23 = puVar3[1];
      param_4[3] = *plVar1;
      param_4[4] = lVar8;
      param_4[5] = lVar20;
      param_4[6] = lVar21;
      *(undefined8 *)((longlong)param_4 + 0x34) = uVar22;
      *(undefined8 *)((longlong)param_4 + 0x3c) = uVar23;
    }
    else {
      uVar28 = 0;
      if ((int)uVar6 < 1 || param_5 != '\0') goto LAB_148ad877e;
      iVar31 = 0;
      do {
        uVar26 = (ulonglong)(uint)(param_2 + iVar31);
        if (param_2 + iVar31 < 1) {
          uVar26 = uVar28;
        }
        uVar27 = (uint)(uVar26 % (ulonglong)uVar6);
        if (*(int *)(lVar7 + 0xc + (uVar26 % (ulonglong)uVar6) * 0x48) == (int)uVar26)
        goto LAB_148ad8828;
        iVar31 = iVar31 + -1;
      } while (uVar6 + iVar31 != 0);
      uVar27 = 0xffffffff;
LAB_148ad8828:
      uVar30 = 0;
      do {
        uVar28 = (longlong)(int)(param_2 + uVar30) % (longlong)(int)uVar6;
        uVar25 = -(int)uVar28;
        uVar26 = (ulonglong)uVar25;
        if ((int)uVar25 < 0) {
          uVar26 = uVar28 & 0xffffffff;
        }
        if (param_2 + uVar30 == *(int *)(lVar7 + 0xc + uVar26 * 0x48)) {
          if (uVar27 == 0xffffffff) goto LAB_148ad877c;
          lVar8 = (ulonglong)uVar27 * 0x48;
          lVar29 = *(longlong *)(lVar7 + 8 + lVar8);
          *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar7 + 0xe + lVar8);
          param_4[1] = lVar29;
          puVar4 = (undefined4 *)(lVar7 + 0x18 + lVar8);
          uVar9 = puVar4[1];
          uVar10 = puVar4[2];
          uVar11 = puVar4[3];
          puVar5 = (undefined4 *)(lVar7 + 0x28 + lVar8);
          uVar12 = *puVar5;
          uVar13 = puVar5[1];
          uVar14 = puVar5[2];
          uVar15 = puVar5[3];
          puVar5 = (undefined4 *)(lVar7 + 0x34 + lVar8);
          uVar16 = *puVar5;
          uVar17 = puVar5[1];
          uVar18 = puVar5[2];
          uVar19 = puVar5[3];
          *(undefined4 *)(param_4 + 3) = *puVar4;
          *(undefined4 *)((longlong)param_4 + 0x1c) = uVar9;
          *(undefined4 *)(param_4 + 4) = uVar10;
          *(undefined4 *)((longlong)param_4 + 0x24) = uVar11;
          *(undefined4 *)(param_4 + 5) = uVar12;
          *(undefined4 *)((longlong)param_4 + 0x2c) = uVar13;
          *(undefined4 *)(param_4 + 6) = uVar14;
          *(undefined4 *)((longlong)param_4 + 0x34) = uVar15;
          *(undefined4 *)((longlong)param_4 + 0x34) = uVar16;
          *(undefined4 *)(param_4 + 7) = uVar17;
          *(undefined4 *)((longlong)param_4 + 0x3c) = uVar18;
          *(undefined4 *)(param_4 + 8) = uVar19;
          (**(code **)(*param_4 + 0x50))(param_4,param_1[2] + lVar8,param_1[2] + uVar26 * 0x48);
          iVar24 = param_2 - *(int *)(param_1[2] + 0xc + lVar8);
          iVar31 = -iVar24;
          if (iVar31 < 0) {
            iVar31 = iVar24;
          }
          *(int *)((longlong)param_4 + 0xc) = param_2;
          lVar29 = param_1[2];
          *(int *)(param_4 + 1) = iVar31 + *(int *)(lVar29 + 8 + lVar8);
          goto LAB_148ad8926;
        }
        uVar30 = uVar30 + 1;
      } while (uVar6 != uVar30);
      if (uVar27 == 0xffffffff) goto LAB_148ad877c;
      lVar8 = (ulonglong)uVar27 * 0x48;
      lVar29 = *(longlong *)(lVar7 + 8 + lVar8);
      *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar7 + 0xe + lVar8);
      param_4[1] = lVar29;
      plVar1 = (longlong *)(lVar7 + 0x18 + lVar8);
      lVar29 = plVar1[1];
      plVar2 = (longlong *)(lVar7 + 0x28 + lVar8);
      lVar20 = *plVar2;
      lVar21 = plVar2[1];
      puVar3 = (undefined8 *)(lVar7 + 0x34 + lVar8);
      uVar22 = *puVar3;
      uVar23 = puVar3[1];
      param_4[3] = *plVar1;
      param_4[4] = lVar29;
      param_4[5] = lVar20;
      param_4[6] = lVar21;
      *(undefined8 *)((longlong)param_4 + 0x34) = uVar22;
      *(undefined8 *)((longlong)param_4 + 0x3c) = uVar23;
      lVar29 = param_1[2];
      param_2 = param_2 - *(int *)(lVar29 + 0xc + lVar8);
      iVar31 = -param_2;
      if (iVar31 < 0) {
        iVar31 = param_2;
      }
      *(int *)(param_4 + 1) = iVar31 + *(int *)(lVar29 + 8 + lVar8);
LAB_148ad8926:
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
    }
    uVar28 = CONCAT71((int7)((ulonglong)lVar29 >> 8),1);
  }
LAB_148ad877e:
  return uVar28 & 0xffffffff;
}



// FUNCTION 148ad893c FUN_148ad893c body=102 status=ok
// SIG undefined FUN_148ad893c(void)

void FUN_148ad893c(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 <= param_3) {
    do {
      uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if ((param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0x48)) &&
         ((plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 0x48), param_5 == '\0' ||
          (*(char *)((longlong)plVar1 + 0x15) == '\x01')))) {
        (**(code **)(*plVar1 + 8))(plVar1,param_4);
      }
      param_2 = param_2 + 1;
    } while (param_3 + 1 != param_2);
  }
  return;
}



// FUNCTION 148ad89a2 FUN_148ad89a2 body=86 status=ok
// SIG undefined FUN_148ad89a2(void)

void FUN_148ad89a2(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (param_2 < iVar1) {
    do {
      uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0x48)) {
        (**(code **)(*param_3 + 0x28))(param_3,*(longlong *)(param_1 + 0x10) + uVar4 * 0x48);
        *(undefined4 *)(param_3 + 2) = 0xffffffff;
      }
      param_2 = param_2 + 1;
    } while (iVar1 != param_2);
  }
  return;
}



// FUNCTION 148ad8a66 FUN_148ad8a66 body=10 status=ok
// SIG undefined FUN_148ad8a66(void)

void FUN_148ad8a66(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148ad8a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



// FUNCTION 148ad8a70 FUN_148ad8a70 body=289 status=ok
// SIG undefined FUN_148ad8a70(void)

undefined8 FUN_148ad8a70(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined1 local_7c;
  char cStack_7b;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0xffffffff;
  uStack_84 = 0xffff;
  uStack_82 = 0xffff;
  local_80 = 0xffffffff;
  local_7c = 0;
  cStack_7b = '\0';
  local_90 = &PTR_FUN_14b517f30;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  uStack_5b = 1;
  uVar7 = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  iVar8 = *(int *)(param_1 + 0x2c);
  if (0 < iVar8) {
    lVar11 = 0x18;
    lVar10 = 0;
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(lVar3 + -0x10 + lVar11);
      uVar5 = *(undefined8 *)(lVar3 + -10 + lVar11);
      local_80 = (undefined4)((ulonglong)uVar5 >> 0x10);
      local_7c = (undefined1)((ulonglong)uVar5 >> 0x30);
      cStack_7b = (char)((ulonglong)uVar5 >> 0x38);
      local_88 = (undefined4)uVar4;
      uStack_84 = (undefined2)((ulonglong)uVar4 >> 0x20);
      uStack_82 = (undefined2)((ulonglong)uVar4 >> 0x30);
      puVar1 = (undefined8 *)(lVar3 + lVar11);
      local_78 = *puVar1;
      uStack_70 = *(undefined4 *)(puVar1 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar2 = (undefined4 *)(lVar3 + 0x10 + lVar11);
      uStack_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uVar6 = puVar2[3];
      lVar3 = lVar3 + 0x1c + lVar11;
      uStack_58 = *(undefined4 *)(lVar3 + 4);
      uStack_50 = *(undefined4 *)(lVar3 + 0xc);
      uStack_54 = (undefined2)*(undefined4 *)(lVar3 + 8);
      uStack_52 = (undefined2)((uint)*(undefined4 *)(lVar3 + 8) >> 0x10);
      local_5c = (undefined1)uVar6;
      uStack_5b = (undefined1)((uint)uVar6 >> 8);
      uStack_5a = (undefined2)((uint)uVar6 >> 0x10);
      cVar9 = param_3;
      if (cStack_7b != '\0') {
        cVar9 = param_4;
      }
      if (cVar9 == '\x01') {
        (**(code **)(*param_2 + 0x68))(param_2,(int)((ulonglong)uVar4 >> 0x20),&local_90);
        iVar8 = *(int *)(param_1 + 0x2c);
        uVar7 = 1;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x48;
    } while (lVar10 < iVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad8b92 FUN_148ad8b92 body=312 status=ok
// SIG undefined FUN_148ad8b92(void)

ulonglong FUN_148ad8b92(longlong param_1,longlong *param_2,uint param_3,uint param_4,char param_5,
                       char param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined1 local_7c;
  char cStack_7b;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0xffffffffffff;
  uStack_82 = 0xffff;
  local_80 = 0xffffffff;
  local_7c = 0;
  cStack_7b = '\0';
  local_90 = &PTR_FUN_14b517f30;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  uStack_5b = 1;
  uVar9 = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  if (param_3 <= param_4) {
    uVar9 = 0;
    do {
      uVar3 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar6 = -(int)uVar3;
      uVar7 = (ulonglong)uVar6;
      if ((int)uVar6 < 0) {
        uVar7 = uVar3 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar7 * 0x48)) {
        lVar1 = *(longlong *)(param_1 + 0x10) + uVar7 * 0x48;
        uVar2 = *(undefined8 *)(lVar1 + 0xe);
        local_80 = (undefined4)((ulonglong)uVar2 >> 0x10);
        local_7c = (undefined1)((ulonglong)uVar2 >> 0x30);
        cStack_7b = (char)((ulonglong)uVar2 >> 0x38);
        local_88 = (undefined6)*(undefined8 *)(lVar1 + 8);
        uStack_82 = (undefined2)((ulonglong)*(undefined8 *)(lVar1 + 8) >> 0x30);
        local_78 = *(undefined8 *)(lVar1 + 0x18);
        uStack_70 = *(undefined4 *)(lVar1 + 0x20);
        uStack_6c = *(undefined4 *)(lVar1 + 0x24);
        uStack_68 = *(undefined4 *)(lVar1 + 0x28);
        uStack_64 = *(undefined4 *)(lVar1 + 0x2c);
        uStack_60 = *(undefined4 *)(lVar1 + 0x30);
        uVar4 = *(undefined4 *)(lVar1 + 0x34);
        uStack_58 = *(undefined4 *)(lVar1 + 0x38);
        uStack_50 = *(undefined4 *)(lVar1 + 0x40);
        uStack_54 = (undefined2)*(undefined4 *)(lVar1 + 0x3c);
        uStack_52 = (undefined2)((uint)*(undefined4 *)(lVar1 + 0x3c) >> 0x10);
        local_5c = (undefined1)uVar4;
        uStack_5b = (undefined1)((uint)uVar4 >> 8);
        uStack_5a = (undefined2)((uint)uVar4 >> 0x10);
        cVar5 = param_5;
        if (cStack_7b != '\0') {
          cVar5 = param_6;
        }
        if (cVar5 == '\x01') {
          pppuVar8 = &local_90;
          (**(code **)(*param_2 + 0x68))(param_2,param_3,&local_90);
          uVar9 = CONCAT71((int7)((ulonglong)pppuVar8 >> 8),1);
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad8ccc FUN_148ad8ccc body=436 status=ok
// SIG undefined FUN_148ad8ccc(void)

undefined8 *
FUN_148ad8ccc(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  int local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar10 = 0;
  if (param_3 < param_4) {
    iVar10 = 0;
    uVar9 = param_3;
    do {
      uVar4 = (longlong)(int)uVar9 % (longlong)*(int *)(param_1 + 0x2c);
      uVar6 = -(int)uVar4;
      uVar7 = (ulonglong)uVar6;
      if ((int)uVar6 < 0) {
        uVar7 = uVar4 & 0xffffffff;
      }
      iVar10 = iVar10 + (uint)(uVar9 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar7 * 0x48
                                                 ));
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar2 = *(undefined1 *)(param_1 + 8);
  *plVar8 = (longlong)&PTR_LAB_14b51f3a0;
  *(undefined1 *)(plVar8 + 1) = uVar2;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0xffffffff;
  *(undefined4 *)(plVar8 + 5) = 0;
  *(int *)((longlong)plVar8 + 0x2c) = iVar10;
  FUN_148ad9206(plVar8 + 2,iVar10,1);
  *plVar8 = (longlong)&PTR_FUN_14b51f260;
  local_a0 = -1;
  uStack_9c = 0xffff;
  uStack_9a = 0xffff;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a8 = &PTR_FUN_14b517f30;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_73 = 1;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_68 = 0;
  if (param_3 < param_4) {
    do {
      uVar4 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar9 = -(int)uVar4;
      uVar7 = (ulonglong)uVar9;
      if ((int)uVar9 < 0) {
        uVar7 = uVar4 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar7 * 0x48)) {
        lVar1 = *(longlong *)(param_1 + 0x10) + uVar7 * 0x48;
        uVar3 = *(undefined8 *)(lVar1 + 8);
        local_98 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0xe) >> 0x10);
        local_94 = (undefined2)((ulonglong)*(undefined8 *)(lVar1 + 0xe) >> 0x30);
        uStack_9c = (undefined2)((ulonglong)uVar3 >> 0x20);
        uStack_9a = (undefined2)((ulonglong)uVar3 >> 0x30);
        local_90 = *(undefined8 *)(lVar1 + 0x18);
        uStack_88 = *(undefined4 *)(lVar1 + 0x20);
        uStack_84 = *(undefined4 *)(lVar1 + 0x24);
        uStack_80 = *(undefined4 *)(lVar1 + 0x28);
        uStack_7c = *(undefined4 *)(lVar1 + 0x2c);
        uStack_78 = *(undefined4 *)(lVar1 + 0x30);
        uVar5 = *(undefined4 *)(lVar1 + 0x34);
        uStack_70 = *(undefined4 *)(lVar1 + 0x38);
        uStack_68 = *(undefined4 *)(lVar1 + 0x40);
        uStack_6c = (undefined2)*(undefined4 *)(lVar1 + 0x3c);
        uStack_6a = (undefined2)((uint)*(undefined4 *)(lVar1 + 0x3c) >> 0x10);
        local_74 = (undefined1)uVar5;
        uStack_73 = (undefined1)((uint)uVar5 >> 8);
        uStack_72 = (undefined2)((uint)uVar5 >> 0x10);
        local_a0 = (int)((ulonglong)uVar3 >> 0x20) + param_5;
        (**(code **)(*plVar8 + 0x70))(plVar8,param_3,&local_a8);
      }
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
  }
  *param_2 = plVar8;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad8e82 FUN_148ad8e82 body=203 status=ok
// SIG undefined FUN_148ad8e82(void)

int FUN_148ad8e82(longlong *param_1,longlong param_2,int param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x2c) < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar1 = lVar2 + lVar7;
      *(undefined1 *)(lVar2 + 0x15 + lVar7) = param_5;
      *(undefined1 *)(lVar2 + 0x14 + lVar7) = 1;
      *(int *)(lVar2 + 0xc + lVar7) = *(int *)(lVar2 + 8 + lVar7) - param_3;
      cVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar1);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0xc + lVar7);
        if ((param_4 != '\0') && (iVar5 < iVar4)) {
          cVar3 = (**(code **)(*param_1 + 0x130))(param_1,lVar1);
          iVar4 = *(int *)(lVar2 + 0xc + lVar7);
          if (cVar3 != '\0') {
            iVar5 = iVar4;
          }
        }
        (**(code **)(*param_1 + 0x68))(param_1,iVar4,lVar1);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x48;
    } while (lVar6 < *(int *)(param_2 + 0x2c));
  }
  return iVar5;
}



// FUNCTION 148ad8f4e FUN_148ad8f4e body=27 status=ok
// SIG undefined FUN_148ad8f4e(void)

void FUN_148ad8f4e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 148ad8f6a FUN_148ad8f6a body=69 status=ok
// SIG undefined FUN_148ad8f6a(void)

void FUN_148ad8f6a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar1) + 0x30))
                (*(longlong *)(param_1 + 0x10) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x48;
    } while (lVar2 < *(int *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 148ad8fb0 FUN_148ad8fb0 body=146 status=ok
// SIG undefined FUN_148ad8fb0(void)

void FUN_148ad8fb0(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (-1 < *(int *)(param_2 + 0x2c)) {
    FUN_144a1a59e(param_3,*(int *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_4,*(undefined4 *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_5,*(undefined4 *)(param_2 + 0x2c),1);
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar4 = 4;
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(lVar3 + -8 + lVar4 * 4);
        uVar2 = *(undefined4 *)(lVar3 + lVar4 * 4);
        *(undefined4 *)(*param_3 + lVar5 * 4) = *(undefined4 *)(lVar3 + -4 + lVar4 * 4);
        *(undefined4 *)(*param_4 + lVar5 * 4) = uVar1;
        *(undefined4 *)(*param_5 + lVar5 * 4) = uVar2;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x12;
      } while (lVar5 < *(int *)(param_2 + 0x2c));
    }
  }
  return;
}



// FUNCTION 148ad90ac FUN_148ad90ac body=54 status=ok
// SIG undefined FUN_148ad90ac(void)

void FUN_148ad90ac(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x2c) != param_2)) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_148ad9206(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x2c);
    iVar1 = -iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 148ad90f8 FUN_148ad90f8 body=85 status=ok
// SIG undefined FUN_148ad90f8(void)

bool FUN_148ad90f8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x120))();
  lVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  if (((lVar2 == 0 || lVar1 == 0) || (*(int *)(lVar1 + 8) != *(int *)(lVar2 + 8))) ||
     (*(int *)(lVar1 + 0xc) != *(int *)(lVar2 + 0xc))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar1 + 0x10) == *(int *)(lVar2 + 0x10);
  }
  return bVar3;
}



// FUNCTION 148ad91b4 FUN_148ad91b4 body=82 status=ok
// SIG undefined FUN_148ad91b4(void)

ulonglong FUN_148ad91b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  uVar3 = (longlong)iVar1 % (longlong)*(int *)(param_1 + 0x2c);
  uVar4 = -(int)uVar3;
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
    uVar5 = uVar3 & 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar2 + 0xc + uVar5 * 0x48) == iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x28) = (int)uVar5;
    if (*(char *)(lVar2 + 0x14 + uVar5 * 0x48) == '\0') {
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2,lVar2 + uVar5 * 0x48);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 148ad9206 FUN_148ad9206 body=186 status=ok
// SIG undefined FUN_148ad9206(void)

void FUN_148ad9206(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_148ad92e2(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0x14) = 0;
      *puVar2 = &PTR_FUN_14b517f30;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x25) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x35) = 1;
      *(undefined8 *)((longlong)puVar2 + 0x36) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
      puVar2 = puVar2 + 9;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148ad9376(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ad92e2 FUN_148ad92e2 body=147 status=ok
// SIG undefined FUN_148ad92e2(void)

void FUN_148ad92e2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ad9376 FUN_148ad9376 body=62 status=ok
// SIG undefined FUN_148ad9376(void)

void FUN_148ad9376(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ad93b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 148ad93b4 FUN_148ad93b4 body=112 status=ok
// SIG undefined FUN_148ad93b4(void)

ulonglong FUN_148ad93b4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ad93ee;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_148ad93ee:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ad9424 FUN_148ad9424 body=115 status=ok
// SIG undefined FUN_148ad9424(void)

undefined8 * FUN_148ad9424(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b51f3a0;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148ad9498(param_1 + 2,iVar1);
    FUN_148ad9502(param_1[2],uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 148ad9498 FUN_148ad9498 body=106 status=ok
// SIG undefined FUN_148ad9498(void)

undefined8 FUN_148ad9498(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148ad9502 FUN_148ad9502 body=89 status=ok
// SIG undefined FUN_148ad9502(void)

void FUN_148ad9502(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  do {
    *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14aa2b2b0;
    uVar3 = *(undefined8 *)(param_2 + 0xe + lVar8);
    *(undefined8 *)(param_1 + 8 + lVar8) = *(undefined8 *)(param_2 + 8 + lVar8);
    *(undefined8 *)(param_1 + 0xe + lVar8) = uVar3;
    *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14b517f30;
    puVar1 = (undefined8 *)(param_2 + 0x18 + lVar8);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_2 + 0x28 + lVar8);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    puVar2 = (undefined8 *)(param_2 + 0x34 + lVar8);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + 0x18 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar1 = (undefined8 *)(param_1 + 0x28 + lVar8);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(param_1 + 0x34 + lVar8);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    lVar8 = lVar8 + 0x48;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148ad955c FUN_148ad955c body=191 status=ok
// SIG undefined FUN_148ad955c(void)

int FUN_148ad955c(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9971c) {
    FUN_144b3d300(&DAT_14cb9971c);
    if (DAT_14cb9971c == -1) {
      lVar2 = FUN_144800528();
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x110);
      }
      fVar5 = (*(float *)(lVar3 + 0xf4) * 0.001) / *(float *)(lVar3 + 0x168);
      iVar1 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
      iVar4 = 1;
      if (1 < iVar1) {
        iVar4 = iVar1;
      }
      DAT_14cb99718 = iVar4 << 2;
      _Init_thread_footer(&DAT_14cb9971c);
    }
  }
  return DAT_14cb99718;
}



// FUNCTION 148ad961c FUN_148ad961c body=29 status=ok
// SIG undefined FUN_148ad961c(void)

undefined8 FUN_148ad961c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad963a FUN_148ad963a body=45 status=ok
// SIG undefined FUN_148ad963a(void)

undefined8 * FUN_148ad963a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b51f4d0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad9668 FUN_148ad9668 body=99 status=ok
// SIG undefined FUN_148ad9668(void)

undefined8 * FUN_148ad9668(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa8);
  memset(puVar1 + 2,0,0x98);
  puVar1[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b517f90;
  memset(puVar1 + 3,0,0x8c);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad96cc FUN_148ad96cc body=105 status=ok
// SIG undefined FUN_148ad96cc(void)

undefined8 * FUN_148ad96cc(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_14b51f630;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_3;
  FUN_148ada3f6(puVar1 + 2,param_3,1);
  *puVar1 = &PTR_FUN_14b51f4f0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad9736 FUN_148ad9736 body=69 status=ok
// SIG undefined FUN_148ad9736(void)

undefined8 * FUN_148ad9736(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b51f630;
  FUN_148ada60c(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ad977c FUN_148ad977c body=104 status=ok
// SIG undefined FUN_148ad977c(void)

undefined8 * FUN_148ad977c(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_LAB_14b51f630;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0;
  FUN_148ada3f6(puVar2 + 2,0,1);
  *puVar2 = &PTR_FUN_14b51f4f0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 148ad97e4 FUN_148ad97e4 body=66 status=ok
// SIG undefined FUN_148ad97e4(void)

undefined8 * FUN_148ad97e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_148ada6a4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b51f4f0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad9880 FUN_148ad9880 body=241 status=ok
// SIG undefined FUN_148ad9880(void)

int FUN_148ad9880(longlong param_1,uint param_2,uint param_3,byte param_4,byte param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = 0xffffffffffffffff;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e8 = &PTR_FUN_14b517f90;
  iVar5 = 0;
  memset(local_d0,0,0x8c);
  if (param_2 <= param_3) {
    iVar5 = 0;
    do {
      uVar1 = (longlong)(int)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar1;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar1 & 0xffffffff;
      }
      if (param_2 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xa8)) {
        FUN_14098bcca(&local_e8,*(longlong *)(param_1 + 0x10) + uVar4 * 0xa8);
        bVar2 = param_4;
        if (local_d4._1_1_ != '\0') {
          bVar2 = param_5;
        }
        iVar5 = iVar5 + (uint)bVar2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  FUN_1411d537c(&local_e8);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad99cc FUN_148ad99cc body=390 status=ok
// SIG undefined FUN_148ad99cc(void)

ulonglong FUN_148ad99cc(longlong *param_1,int param_2,undefined8 param_3,longlong *param_4,
                       char param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar8;
  
  iVar10 = *(int *)((longlong)param_1 + 0x2c);
  iVar2 = (**(code **)(*param_1 + 0xd8))();
  if (iVar2 < param_2 - iVar10) {
LAB_148ad99f2:
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)((longlong)param_1 + 0x2c);
    uVar3 = -(int)((longlong)param_2 % (longlong)(int)uVar7);
    uVar5 = (ulonglong)uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = (longlong)param_2 % (longlong)(int)uVar7 & 0xffffffff;
    }
    lVar1 = param_1[2];
    if (*(int *)(lVar1 + 0xc + uVar5 * 0xa8) == param_2) {
      *(int *)((longlong)param_1 + 0x24) = param_2;
      *(int *)(param_1 + 5) = (int)uVar5;
      FUN_14098bcca(param_4,lVar1 + uVar5 * 0xa8);
      plVar8 = param_4;
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < 1 || param_5 != '\0') goto LAB_148ad99f4;
      iVar10 = 0;
      do {
        uVar6 = (ulonglong)(uint)(param_2 + iVar10);
        if (param_2 + iVar10 < 1) {
          uVar6 = uVar5;
        }
        uVar9 = uVar6 % (ulonglong)uVar7;
        if (*(int *)(lVar1 + 0xc + uVar9 * 0xa8) == (int)uVar6) goto LAB_148ad9a87;
        iVar10 = iVar10 + -1;
      } while (uVar7 + iVar10 != 0);
      uVar9 = 0xffffffff;
LAB_148ad9a87:
      uVar3 = 0;
      do {
        uVar5 = (longlong)(int)(param_2 + uVar3) % (longlong)(int)uVar7;
        uVar4 = -(int)uVar5;
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 0) {
          uVar6 = uVar5 & 0xffffffff;
        }
        if (param_2 + uVar3 == *(int *)(lVar1 + 0xc + uVar6 * 0xa8)) {
          if ((int)uVar9 == -1) goto LAB_148ad99f2;
          lVar11 = uVar9 * 0xa8;
          FUN_14098bcca(param_4,lVar1 + lVar11);
          (**(code **)(*param_4 + 0x50))(param_4,param_1[2] + lVar11,uVar6 * 0xa8 + param_1[2]);
          iVar2 = param_2 - *(int *)(param_1[2] + 0xc + lVar11);
          iVar10 = -iVar2;
          if (iVar10 < 0) {
            iVar10 = iVar2;
          }
          *(int *)((longlong)param_4 + 0xc) = param_2;
          plVar8 = (longlong *)param_1[2];
          *(int *)(param_4 + 1) = iVar10 + (int)plVar8[uVar9 * 0x15 + 1];
          goto LAB_148ad9b46;
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
      if ((int)uVar9 == -1) goto LAB_148ad99f2;
      lVar11 = uVar9 * 0xa8;
      FUN_14098bcca(param_4,lVar1 + lVar11);
      param_2 = param_2 - *(int *)(param_1[2] + 0xc + lVar11);
      iVar10 = -param_2;
      if (iVar10 < 0) {
        iVar10 = param_2;
      }
      uVar7 = iVar10 + *(int *)(param_1[2] + 8 + lVar11);
      plVar8 = (longlong *)(ulonglong)uVar7;
      *(uint *)(param_4 + 1) = uVar7;
LAB_148ad9b46:
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
    }
    uVar5 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  }
LAB_148ad99f4:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148ad9b52 FUN_148ad9b52 body=104 status=ok
// SIG undefined FUN_148ad9b52(void)

void FUN_148ad9b52(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (param_2 <= param_3) {
    do {
      uVar1 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar2 = -(int)uVar1;
      uVar3 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = uVar1 & 0xffffffff;
      }
      if ((param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar3 * 0xa8)) &&
         ((plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 0xa8), param_5 == '\0' ||
          (*(char *)((longlong)plVar4 + 0x15) == '\x01')))) {
        (**(code **)(*plVar4 + 8))(plVar4,param_4);
      }
      param_2 = param_2 + 1;
    } while (param_3 + 1 != param_2);
  }
  return;
}



// FUNCTION 148ad9bba FUN_148ad9bba body=88 status=ok
// SIG undefined FUN_148ad9bba(void)

void FUN_148ad9bba(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (param_2 < iVar1) {
    do {
      uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xa8)) {
        (**(code **)(*param_3 + 0x28))(param_3,*(longlong *)(param_1 + 0x10) + uVar4 * 0xa8);
        *(undefined4 *)(param_3 + 2) = 0xffffffff;
      }
      param_2 = param_2 + 1;
    } while (iVar1 != param_2);
  }
  return;
}



// FUNCTION 148ad9c12 FUN_148ad9c12 body=88 status=ok
// SIG undefined FUN_148ad9c12(void)

undefined8 FUN_148ad9c12(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
  uVar3 = -(int)uVar2;
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = uVar2 & 0xffffffff;
  }
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = (int)uVar4;
  FUN_14098bcca(uVar4 * 0xa8 + *(longlong *)(param_1 + 0x10),param_3);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + (longlong)*(int *)(param_1 + 0x28) * 0xa8);
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < iVar1) {
    iVar5 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar5;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 148ad9c6a FUN_148ad9c6a body=255 status=ok
// SIG undefined FUN_148ad9c6a(void)

undefined8 FUN_148ad9c6a(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0xffffffff;
  local_dc = 0;
  local_f0 = &PTR_FUN_14b517f90;
  uVar2 = 0;
  memset(local_d8,0,0x8c);
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar3 = 0;
    lVar4 = 0;
    uVar2 = 0;
    do {
      FUN_14098bcca(&local_f0,*(longlong *)(param_1 + 0x10) + lVar3);
      cVar1 = param_3;
      if (local_dc._1_1_ != '\0') {
        cVar1 = param_4;
      }
      if (cVar1 == '\x01') {
        (**(code **)(*param_2 + 0x68))(param_2,local_e8._4_4_,&local_f0);
        uVar2 = 1;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (lVar4 < *(int *)(param_1 + 0x2c));
  }
  FUN_1411d537c(&local_f0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad9d6a FUN_148ad9d6a body=272 status=ok
// SIG undefined FUN_148ad9d6a(void)

undefined8
FUN_148ad9d6a(longlong param_1,longlong *param_2,uint param_3,uint param_4,char param_5,char param_6
             )

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0xffffffff;
  local_dc = 0;
  local_f0 = &PTR_FUN_14b517f90;
  uVar5 = 0;
  memset(local_d8,0,0x8c);
  if (param_3 <= param_4) {
    uVar5 = 0;
    do {
      uVar1 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar1;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar1 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xa8)) {
        FUN_14098bcca(&local_f0,*(longlong *)(param_1 + 0x10) + uVar4 * 0xa8);
        cVar2 = param_5;
        if (local_dc._1_1_ != '\0') {
          cVar2 = param_6;
        }
        if (cVar2 == '\x01') {
          (**(code **)(*param_2 + 0x68))(param_2,param_3,&local_f0);
          uVar5 = 1;
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_4);
  }
  FUN_1411d537c(&local_f0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad9e7c FUN_148ad9e7c body=390 status=ok
// SIG undefined FUN_148ad9e7c(void)

undefined8 *
FUN_148ad9e7c(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar7 = 0;
  if (param_3 < param_4) {
    iVar7 = 0;
    uVar6 = param_3;
    do {
      uVar2 = (longlong)(int)uVar6 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      iVar7 = iVar7 + (uint)(uVar6 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xa8))
      ;
      uVar6 = uVar6 + 1;
    } while (param_4 != uVar6);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *plVar5 = (longlong)&PTR_LAB_14b51f630;
  *(undefined1 *)(plVar5 + 1) = uVar1;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0xffffffff;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(int *)((longlong)plVar5 + 0x2c) = iVar7;
  FUN_148ada3f6(plVar5 + 2,iVar7,1);
  *plVar5 = (longlong)&PTR_FUN_14b51f4f0;
  local_e0 = 0xffffffffffffffff;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e8 = &PTR_FUN_14b517f90;
  memset(local_d0,0,0x8c);
  if (param_3 < param_4) {
    do {
      uVar2 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar6 = -(int)uVar2;
      uVar4 = (ulonglong)uVar6;
      if ((int)uVar6 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xa8)) {
        FUN_14098bcca(&local_e8,*(longlong *)(param_1 + 0x10) + uVar4 * 0xa8);
        local_e0 = CONCAT44(local_e0._4_4_,local_e0._4_4_ + param_5);
        (**(code **)(*plVar5 + 0x70))(plVar5,param_3,&local_e8);
      }
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
  }
  *param_2 = plVar5;
  FUN_1411d537c(&local_e8);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ada004 FUN_148ada004 body=210 status=ok
// SIG undefined FUN_148ada004(void)

int FUN_148ada004(longlong *param_1,longlong param_2,int param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x2c) < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar1 = lVar2 + lVar7;
      *(undefined1 *)(lVar2 + 0x15 + lVar7) = param_5;
      *(undefined1 *)(lVar2 + 0x14 + lVar7) = 1;
      *(int *)(lVar2 + 0xc + lVar7) = *(int *)(lVar2 + 8 + lVar7) - param_3;
      cVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar1);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0xc + lVar7);
        if ((param_4 != '\0') && (iVar5 < iVar4)) {
          cVar3 = (**(code **)(*param_1 + 0x130))(param_1,lVar1);
          iVar4 = *(int *)(lVar2 + 0xc + lVar7);
          if (cVar3 != '\0') {
            iVar5 = iVar4;
          }
        }
        (**(code **)(*param_1 + 0x68))(param_1,iVar4,lVar1);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (lVar6 < *(int *)(param_2 + 0x2c));
  }
  return iVar5;
}



// FUNCTION 148ada0d6 FUN_148ada0d6 body=72 status=ok
// SIG undefined FUN_148ada0d6(void)

void FUN_148ada0d6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar1) + 0x30))
                (*(longlong *)(param_1 + 0x10) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xa8;
    } while (lVar2 < *(int *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 148ada11e FUN_148ada11e body=291 status=ok
// SIG undefined FUN_148ada11e(void)

void FUN_148ada11e(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (-1 < *(int *)(param_2 + 0x2c)) {
    FUN_144a1a59e(param_3,*(int *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_4,*(undefined4 *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_5,*(undefined4 *)(param_2 + 0x2c),1);
    local_e0 = 0xffffffffffffffff;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_e8 = &PTR_FUN_14b517f90;
    memset(local_d0,0,0x8c);
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        FUN_14098bcca(&local_e8,*(longlong *)(param_2 + 0x10) + lVar1);
        *(undefined4 *)(*param_3 + lVar2 * 4) = local_e0._4_4_;
        *(undefined4 *)(*param_4 + lVar2 * 4) = (undefined4)local_e0;
        *(undefined4 *)(*param_5 + lVar2 * 4) = local_d8;
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0xa8;
      } while (lVar2 < *(int *)(param_2 + 0x2c));
    }
    FUN_1411d537c(&local_e8);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ada29c FUN_148ada29c body=54 status=ok
// SIG undefined FUN_148ada29c(void)

void FUN_148ada29c(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x2c) != param_2)) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_148ada3f6(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x2c);
    iVar1 = -iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 148ada2e8 FUN_148ada2e8 body=85 status=ok
// SIG undefined FUN_148ada2e8(void)

bool FUN_148ada2e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x120))();
  lVar2 = (**(code **)(*param_2 + 0x120))(param_2);
  if (((lVar2 == 0 || lVar1 == 0) || (*(int *)(lVar1 + 8) != *(int *)(lVar2 + 8))) ||
     (*(int *)(lVar1 + 0xc) != *(int *)(lVar2 + 0xc))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar1 + 0x10) == *(int *)(lVar2 + 0x10);
  }
  return bVar3;
}



// FUNCTION 148ada3a4 FUN_148ada3a4 body=81 status=ok
// SIG undefined FUN_148ada3a4(void)

ulonglong FUN_148ada3a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  uVar5 = (longlong)iVar1 % (longlong)*(int *)(param_1 + 0x2c);
  uVar3 = -(int)uVar5;
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = uVar5 & 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar6 = uVar4 * 0xa8;
  if (*(int *)(lVar2 + 0xc + lVar6) == iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x28) = (int)uVar4;
    if (*(char *)(lVar2 + 0x14 + lVar6) == '\0') {
      uVar5 = (**(code **)(*param_2 + 0x38))(param_2,lVar2 + lVar6);
      return uVar5 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 148ada3f6 FUN_148ada3f6 body=134 status=ok
// SIG undefined FUN_148ada3f6(void)

void FUN_148ada3f6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148ada4d8(param_1,iVar1);
    }
    FUN_148ada480((longlong)iVar1 * 0xa8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148ada56c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148ada5ce(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ada480 FUN_148ada480 body=87 status=ok
// SIG undefined FUN_148ada480(void)

void FUN_148ada480(longlong param_1,int param_2)

{
  void *_Dst;
  
  if (param_2 != 0) {
    _Dst = (void *)(param_1 + 0x18);
    do {
      *(undefined8 *)((longlong)_Dst + -0x10) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)_Dst + -8) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + -4) = 0;
      *(undefined ***)((longlong)_Dst + -0x18) = &PTR_FUN_14b517f90;
      memset(_Dst,0,0x8c);
      _Dst = (void *)((longlong)_Dst + 0xa8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148ada4d8 FUN_148ada4d8 body=146 status=ok
// SIG undefined FUN_148ada4d8(void)

void FUN_148ada4d8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ada56c FUN_148ada56c body=98 status=ok
// SIG undefined FUN_148ada56c(void)

void FUN_148ada56c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xa8 + *param_1);
  FUN_148ada60c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xa8 + (longlong)_Dst),(longlong)iVar2 * 0xa8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148ada5ce FUN_148ada5ce body=62 status=ok
// SIG undefined FUN_148ada5ce(void)

void FUN_148ada5ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ada636(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa8,8);
  }
  return;
}



// FUNCTION 148ada60c FUN_148ada60c body=41 status=ok
// SIG undefined FUN_148ada60c(void)

void FUN_148ada60c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411d537c(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 148ada636 FUN_148ada636 body=110 status=ok
// SIG undefined FUN_148ada636(void)

ulonglong FUN_148ada636(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ada66f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa8,8);
      param_2 = param_2 / 0xa8;
    }
  }
LAB_148ada66f:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ada6a4 FUN_148ada6a4 body=115 status=ok
// SIG undefined FUN_148ada6a4(void)

undefined8 * FUN_148ada6a4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b51f630;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148ada718(param_1 + 2,iVar1);
    FUN_148ada77d(param_1[2],uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 148ada718 FUN_148ada718 body=101 status=ok
// SIG undefined FUN_148ada718(void)

undefined8 FUN_148ada718(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0xc30c30c30c30c31),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0xa8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 148ada77d FUN_148ada77d body=55 status=ok
// SIG undefined FUN_148ada77d(void)

void FUN_148ada77d(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_140d4e662(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148ada7b4 FUN_148ada7b4 body=191 status=ok
// SIG undefined FUN_148ada7b4(void)

int FUN_148ada7b4(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb99724) {
    FUN_144b3d300(&DAT_14cb99724);
    if (DAT_14cb99724 == -1) {
      lVar2 = FUN_144800528();
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x110);
      }
      fVar5 = (*(float *)(lVar3 + 0xf4) * 0.001) / *(float *)(lVar3 + 0x168);
      iVar1 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
      iVar4 = 1;
      if (1 < iVar1) {
        iVar4 = iVar1;
      }
      DAT_14cb99720 = iVar4 << 2;
      _Init_thread_footer(&DAT_14cb99724);
    }
  }
  return DAT_14cb99720;
}



// FUNCTION 148ada874 FUN_148ada874 body=39 status=ok
// SIG undefined FUN_148ada874(void)

undefined4 FUN_148ada874(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x178) * 0x98);
}



// FUNCTION 148ada89c FUN_148ada89c body=78 status=ok
// SIG undefined FUN_148ada89c(void)

float FUN_148ada89c(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8) + 8 +
                    (longlong)*(int *)(param_1 + 0x178) * 0x98) * -57.295776;
  _isnan((double)fVar1);
  return fVar1;
}



// FUNCTION 148ada8ea FUN_148ada8ea body=78 status=ok
// SIG undefined FUN_148ada8ea(void)

float FUN_148ada8ea(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8) + 0xc
                    + (longlong)*(int *)(param_1 + 0x178) * 0x98) * -57.295776;
  _isnan((double)fVar1);
  return fVar1;
}



// FUNCTION 148ada938 FUN_148ada938 body=39 status=ok
// SIG undefined FUN_148ada938(void)

undefined4 FUN_148ada938(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x178) * 0x98);
}



// FUNCTION 148ada960 FUN_148ada960 body=39 status=ok
// SIG undefined FUN_148ada960(void)

undefined4 FUN_148ada960(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8) + 0xc +
          (longlong)*(int *)(param_1 + 0x178) * 0x98);
}



// FUNCTION 148ada988 FUN_148ada988 body=29 status=ok
// SIG undefined FUN_148ada988(void)

void FUN_148ada988(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x170) + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0x000148ada9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(longlong **)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178),UNRECOVERED_JUMPTABLE)
  ;
  return;
}



// FUNCTION 148ada9a6 FUN_148ada9a6 body=25 status=ok
// SIG undefined FUN_148ada9a6(void)

void FUN_148ada9a6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = *(undefined8 *)(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *param_2 = *(undefined8 *)(param_1 + 0x110);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 148ada9c0 FUN_148ada9c0 body=38 status=ok
// SIG undefined FUN_148ada9c0(void)

ulonglong FUN_148ada9c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x980) + 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  *(undefined1 *)(lVar1 + (longlong)*(int *)(param_1 + 0x178) * 0x98)) ^ 1;
}



// FUNCTION 148adaaa0 FUN_148adaaa0 body=271 status=ok
// SIG undefined FUN_148adaaa0(void)

ulonglong FUN_148adaaa0(undefined4 *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  double local_78 [4];
  double local_58 [4];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  double local_20 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20[2] = (double)*(undefined8 *)(param_1 + 10);
  local_20[0] = *(double *)(param_1 + 6);
  local_20[1] = (double)*(undefined8 *)(param_1 + 8);
  local_28 = *(undefined8 *)(param_1 + 4);
  local_38._0_4_ = *param_1;
  local_38._4_4_ = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uVar5 = (ulonglong)(int)param_2[1];
  if ((longlong)uVar5 < 1) {
    uVar4 = CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 4) >> 8),1);
  }
  else {
    lVar3 = *param_2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      lVar7 = uVar6 * 0x30;
      local_58[2] = (double)*(undefined8 *)(lVar3 + 0x10 + lVar7);
      local_58[0] = *(double *)(lVar3 + lVar7);
      local_58[1] = ((double *)(lVar3 + lVar7))[1];
      lVar8 = 0;
      do {
        dVar2 = local_58[lVar8];
        if ((dVar2 < (double)(&local_38)[lVar8]) ||
           (local_20[lVar8] <= dVar2 && dVar2 != local_20[lVar8])) goto LAB_148adab8c;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      local_78[2] = (double)*(undefined8 *)(lVar3 + 0x28 + lVar7);
      pdVar1 = (double *)(lVar3 + 0x18 + lVar7);
      local_78[0] = *pdVar1;
      local_78[1] = pdVar1[1];
      lVar7 = 0;
      do {
        dVar2 = local_78[lVar7];
        if ((dVar2 < (double)(&local_38)[lVar7]) ||
           (local_20[lVar7] <= dVar2 && dVar2 != local_20[lVar7])) goto LAB_148adab8c;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      uVar6 = uVar6 + 1;
      uVar4 = (ulonglong)(uVar5 <= uVar6);
    } while (uVar6 != uVar5);
  }
LAB_148adab8c:
  if ((local_8 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148adabb0 FUN_148adabb0 body=994 status=ok
// SIG undefined FUN_148adabb0(void)

void FUN_148adabb0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar17 = *(longlong *)(param_1 + 0x1a0);
  if (0 < *(int *)(lVar17 + 0x40)) {
    lVar15 = 0xb0;
    lVar19 = 0;
    lVar16 = 0;
    lVar18 = 0;
    local_148 = param_1;
    do {
      lVar17 = *(longlong *)(lVar17 + 0x38);
      if (*(char *)(lVar17 + 0x9c + lVar19) == '\x01') {
        lVar6 = *(longlong *)(param_1 + 0x690);
        cVar13 = FUN_144729dda(lVar6 + lVar15);
        if (cVar13 != '\0') {
          lVar14 = FUN_14479d2ce(lVar6 + lVar15);
          *(undefined4 *)(lVar17 + 0x68 + lVar19) = *(undefined4 *)(lVar14 + 0x28);
        }
        param_1 = local_148;
        local_f0 = (double)*(float *)(lVar17 + 100 + lVar19);
        local_f8 = 0;
        local_e8 = 0;
        FUN_140d2943c(&local_f8,&local_110,*(longlong *)(local_148 + 0x670) + lVar16);
        *(undefined8 *)(lVar17 + 0x58 + lVar19) = local_100;
        puVar1 = (undefined4 *)(lVar17 + 0x48 + lVar19);
        *puVar1 = local_110;
        puVar1[1] = uStack_10c;
        puVar1[2] = uStack_108;
        puVar1[3] = uStack_104;
        FUN_148acb886(lVar17 + lVar19,param_2);
        local_118 = *(double *)(lVar17 + 0x88 + lVar19);
        pdVar2 = (double *)(lVar17 + 0x78 + lVar19);
        local_128 = *pdVar2;
        dStack_120 = pdVar2[1];
        FUN_1401c9a0e(&local_f8,&local_140,&local_128);
        local_118 = local_130;
        local_128 = local_140;
        dStack_120 = dStack_138;
        dVar3 = *(double *)(lVar6 + -0x70 + lVar15);
        dVar4 = *(double *)(lVar6 + -0x68 + lVar15);
        dVar5 = *(double *)(lVar6 + -0x60 + lVar15);
        dVar7 = *(double *)(param_1 + 0x128) * dVar4 - dVar3 * *(double *)(param_1 + 0x130);
        dVar8 = *(double *)(param_1 + 0x138) * dVar3 - dVar5 * *(double *)(param_1 + 0x128);
        dVar22 = *(double *)(param_1 + 0x130) * dVar5 - *(double *)(param_1 + 0x138) * dVar4;
        pdVar2 = (double *)(lVar6 + -0x70 + lVar15);
        dVar9 = local_140 * dVar8;
        dVar20 = local_130 * *pdVar2;
        dVar21 = local_130 * pdVar2[1];
        local_130 = dVar7 * local_140 + (dVar3 * dVar8 - dVar22 * dVar4) * dStack_138 +
                    dVar5 * local_130 + *(double *)(param_1 + 0x50) * 0.0;
        if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0xe0) == '\x01') {
          lVar17 = *(longlong *)(param_1 + 0x650) + lVar16;
        }
        else {
          lVar17 = lVar6 + lVar18 * 0x100 + 0x28;
        }
        local_158 = 0;
        local_140 = dVar20 + dStack_138 * (dVar4 * dVar7 - dVar8 * dVar5) + local_140 * dVar22 +
                    *(double *)(param_1 + 0x40) * 0.0;
        dStack_138 = dVar21 + dStack_138 * (dVar5 * dVar22 - dVar7 * dVar3) + dVar9 +
                     *(double *)(param_1 + 0x48) * 0.0;
        FUN_140c32aac(param_1,&local_140,lVar17,1);
      }
      else {
        *(undefined8 *)(lVar17 + 0x58 + lVar19) = DAT_14c8464f0;
        uVar12 = DAT_14c8464e8._4_4_;
        uVar11 = (undefined4)DAT_14c8464e8;
        uVar10 = DAT_14c8464e0._4_4_;
        puVar1 = (undefined4 *)(lVar17 + 0x48 + lVar19);
        *puVar1 = (undefined4)DAT_14c8464e0;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        *(undefined4 *)(lVar17 + 0x44 + lVar19) = 0;
        *(undefined1 *)(lVar17 + 0x9c + lVar19) = 0;
        FUN_148acb886(lVar17 + lVar19,param_2);
      }
      lVar18 = lVar18 + 1;
      lVar17 = *(longlong *)(param_1 + 0x1a0);
      lVar16 = lVar16 + 0x18;
      lVar15 = lVar15 + 0x100;
      lVar19 = lVar19 + 0xe8;
    } while (lVar18 < *(int *)(lVar17 + 0x40));
  }
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adaf94 FUN_148adaf94 body=311 status=ok
// SIG undefined FUN_148adaf94(void)

void FUN_148adaf94(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if (0 < *(int *)(lVar3 + 0x40)) {
    uVar1 = *(undefined8 *)(lVar3 + 0x58);
    lVar5 = 0x38;
    lVar6 = 10;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      fVar7 = 0.0;
      if (*(char *)(lVar2 + lVar6) == '\x01') {
        fVar7 = (float)FUN_140c35dcc(**(longlong **)(lVar3 + 0x58) + 0x18,
                                     (*(float *)(param_1 + 0x188) * 2236.942) / 100000.0);
        if (ABS(DAT_14c763b44) <= 0.01) {
          fVar7 = (float)FUN_148adb0cc(uVar1,fVar7 * *param_2,*(undefined4 *)(lVar2 + 0x12 + lVar6),
                                       (float)*(double *)
                                               (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48)
                                               + lVar5));
        }
        else {
          fVar7 = DAT_14c763b44 * *(float *)(lVar2 + 0x12 + lVar6);
        }
      }
      *(float *)(lVar2 + 0x5a + lVar6) = fVar7;
      lVar4 = lVar4 + 1;
      lVar3 = *(longlong *)(param_1 + 0x1a0);
      lVar5 = lVar5 + 0x88;
      lVar6 = lVar6 + 0xe8;
    } while (lVar4 < *(int *)(lVar3 + 0x40));
  }
  return;
}



// FUNCTION 148adb0cc FUN_148adb0cc body=210 status=ok
// SIG undefined FUN_148adb0cc(void)

float FUN_148adb0cc(undefined8 *param_1,float param_2,float param_3,float param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x02') {
    FUN_1458b1592(param_1 + 1,-param_2,&local_54,&local_58);
    param_3 = (param_3 / *(float *)((longlong)param_1 + 0x3c)) *
              (float)(~-(uint)(param_4 < 0.0) & local_58 |
                     (local_54 ^ 0x80000000) & -(uint)(param_4 < 0.0));
  }
  else {
    if ((cVar1 == '\x01') && (param_4 * param_2 <= 0.0)) {
      param_3 = param_3 * *(float *)((char *)*param_1 + 4);
    }
    param_3 = param_3 * param_2;
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adb1a0 FUN_148adb1a0 body=147 status=ok
// SIG undefined FUN_148adb1a0(void)

undefined8 FUN_148adb1a0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  
  uVar5 = FUN_14091baa4();
  plVar6 = (longlong *)FUN_14109baf6(uVar5);
  cVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (cVar4 == '\0') {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x40);
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
      lVar8 = 0;
      do {
        fVar10 = ABS(*(float *)(lVar2 + 0x30 + lVar8) * *(float *)(lVar2 + 0x2c + lVar8) -
                     (float)*(double *)(lVar2 + 0x48 + lVar8));
        pfVar1 = (float *)(*(longlong *)(lVar2 + lVar8) + 0x58);
        bVar9 = fVar10 != *pfVar1;
        bVar3 = *pfVar1 <= fVar10;
        uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + lVar8) >> 8),bVar3 && bVar9);
        if (bVar3 && bVar9) {
          return uVar5;
        }
        bVar9 = lVar7 * 0xe8 + -0xe8 != lVar8;
        lVar8 = lVar8 + 0xe8;
      } while (bVar9);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 148adb238 FUN_148adb238 body=41 status=ok
// SIG undefined FUN_148adb238(void)

void FUN_148adb238(undefined8 param_1,longlong *param_2)

{
  thunk_FUN_145ff07a2();
                    /* WARNING: Could not recover jumptable at 0x000148adb25e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  return;
}



// FUNCTION 148adb268 FUN_148adb268 body=1304 status=ok
// SIG undefined FUN_148adb268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148adb268(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar44 [16];
  
  FUN_148ad5c20();
  iVar2 = *(int *)(param_1 + 0xcb8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xcb0);
    lVar21 = 0;
    do {
      *(undefined4 *)(lVar3 + 0x48 + lVar21) = 0;
      *(undefined1 *)(lVar3 + lVar21) = 0;
      *(undefined1 *)(lVar3 + 0x4c + lVar21) = 0;
      *(undefined1 *)(lVar3 + 0x54 + lVar21) = 0;
      *(undefined4 *)(lVar3 + 0x50 + lVar21) = 0;
      *(undefined4 *)(lVar3 + 0x58 + lVar21) = 0;
      *(undefined8 *)(lVar3 + 0x40 + lVar21) = 0x3f800000;
      *(undefined8 *)(lVar3 + 0x70 + lVar21) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8;
      puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar21);
      *puVar1 = DAT_14c8464e0;
      puVar1[1] = uVar18;
      uVar18 = DAT_14c8464e8;
      puVar1 = (undefined8 *)(lVar3 + 8 + lVar21);
      *puVar1 = DAT_14c8464e0;
      puVar1[1] = uVar18;
      *(undefined8 *)(lVar3 + 0x18 + lVar21) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8;
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar21);
      *puVar1 = DAT_14c8464e0;
      puVar1[1] = uVar18;
      *(undefined8 *)(lVar3 + 0x30 + lVar21) = DAT_14c8464f0;
      *(undefined8 *)(lVar3 + 0x78 + lVar21) = 0;
      *(undefined2 *)(lVar3 + 0x80 + lVar21) = 0;
      lVar21 = lVar21 + 0x88;
    } while ((longlong)iVar2 * 0x88 != lVar21);
  }
  auVar17 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0xcc8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xcc0);
    uVar19 = (longlong)*(int *)(param_1 + 0xcc8) + 0x1fffffffffffffff;
    uVar20 = uVar19 & 0x1fffffffffffffff;
    auVar22._8_4_ = (int)uVar20;
    auVar22._0_8_ = uVar20;
    auVar22._12_4_ = (int)(uVar20 >> 0x20);
    lVar21 = 0;
    auVar23 = pmovsxbq(in_XMM1,0xf0e);
    auVar24 = pmovsxbq(in_XMM2,0xd0c);
    auVar25 = pmovsxbq(in_XMM3,0xb0a);
    auVar26 = pmovsxbq(in_XMM4,0x908);
    auVar27 = pmovsxbq(in_XMM5,0x706);
    auVar28 = pmovsxbq(unaff_XMM6,0x504);
    auVar29 = pmovsxbq(unaff_XMM7,0x302);
    auVar30 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar31._8_4_ = (int)lVar21;
      auVar31._0_8_ = lVar21;
      auVar31._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      auVar34 = auVar22 | auVar17;
      auVar36 = (auVar31 | auVar30) ^ auVar17;
      lVar33 = auVar34._0_8_;
      auVar37._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      lVar35 = auVar34._8_8_;
      auVar37._8_8_ = -(ulonglong)(lVar35 < auVar36._8_8_);
      auVar44 = pshuflw(unaff_XMM14,auVar37,0xe8);
      auVar36._8_4_ = 0xffffffff;
      auVar36._0_8_ = 0xffffffffffffffff;
      auVar36._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar44 ^ auVar36,auVar44 ^ auVar36);
      if ((auVar36._0_4_ & 1) != 0) {
        *(undefined1 *)(lVar3 + 4 + lVar21 * 8) = 0;
      }
      auVar37 = packssdw(auVar37,auVar37);
      auVar44._8_4_ = 0xffffffff;
      auVar44._0_8_ = 0xffffffffffffffff;
      auVar44._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar44,auVar37 ^ auVar44);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[1] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0xc + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar29) ^ auVar17;
      auVar38._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar38);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar4,auVar36 ^ auVar4);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[2] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x14 + lVar21 * 8) = 0;
      }
      auVar37 = pshufhw(auVar38,auVar38,0x84);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar5,auVar37 ^ auVar5);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[3] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x1c + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar28) ^ auVar17;
      auVar39._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar39,0xe8);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar6,auVar36 ^ auVar6);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[4] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x24 + lVar21 * 8) = 0;
      }
      auVar37 = packssdw(auVar39,auVar39);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar7,auVar37 ^ auVar7);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[5] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x2c + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar27) ^ auVar17;
      auVar40._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar40);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar8,auVar36 ^ auVar8);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[6] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x34 + lVar21 * 8) = 0;
      }
      auVar37 = pshufhw(auVar40,auVar40,0x84);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar9,auVar37 ^ auVar9);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[7] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x3c + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar26) ^ auVar17;
      auVar41._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar41,0xe8);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar10,auVar36 ^ auVar10);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[8] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x44 + lVar21 * 8) = 0;
      }
      auVar37 = packssdw(auVar41,auVar41);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar11,auVar37 ^ auVar11);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[9] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x4c + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar25) ^ auVar17;
      auVar42._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar42);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar12,auVar36 ^ auVar12);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[10] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x54 + lVar21 * 8) = 0;
      }
      auVar37 = pshufhw(auVar42,auVar42,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar13,auVar37 ^ auVar13);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[0xb] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x5c + lVar21 * 8) = 0;
      }
      auVar37 = (auVar31 | auVar24) ^ auVar17;
      auVar43._0_8_ = -(ulonglong)(lVar33 < auVar37._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar35 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar43,0xe8);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar14,auVar36 ^ auVar14);
      unaff_XMM14 = packsswb(auVar36,auVar36);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        *(undefined1 *)(lVar3 + 100 + lVar21 * 8) = 0;
      }
      auVar36 = packssdw(auVar43,auVar43);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar15,auVar36 ^ auVar15);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xd] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x6c + lVar21 * 8) = 0;
      }
      auVar36 = (auVar31 | auVar23) ^ auVar17;
      auVar32._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar35 < auVar36._8_8_);
      auVar36 = packssdw(auVar34,auVar32);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar34,auVar36 ^ auVar34);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xe] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x74 + lVar21 * 8) = 0;
      }
      auVar36 = pshufhw(auVar32,auVar32,0x84);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar16,auVar36 ^ auVar16);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xf] & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x7c + lVar21 * 8) = 0;
      }
      lVar21 = lVar21 + 0x10;
    } while ((uVar20 - ((uint)uVar19 & 0xf)) + 0x10 != lVar21);
  }
  return;
}



// FUNCTION 148adb782 FUN_148adb782 body=30 status=ok
// SIG undefined FUN_148adb782(void)

undefined4 FUN_148adb782(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x9f8) == '\x01') && (*(longlong *)(param_1 + 0x980) != 0)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x20);
  }
  return uVar1;
}



// FUNCTION 148adb7a0 FUN_148adb7a0 body=21 status=ok
// SIG undefined FUN_148adb7a0(void)

undefined4 FUN_148adb7a0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x9f8) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0xa8c);
  }
  return uVar1;
}



// FUNCTION 148adb7bc FUN_148adb7bc body=263 status=ok
// SIG undefined FUN_148adb7bc(void)

void FUN_148adb7bc(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined1 *param_8,
                  undefined4 *param_9,undefined1 *param_10,undefined4 *param_11,undefined8 *param_12
                  ,undefined4 *param_13,undefined4 *param_14,undefined1 *param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_2 = *param_1;
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *(undefined4 *)(param_1 + 8);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar4 = FUN_14479d2ce(param_1 + 0x38);
  *param_4 = uVar4;
  *param_5 = *(undefined4 *)(param_1 + 0x40);
  *param_6 = *(undefined4 *)(param_1 + 0x44);
  *param_7 = *(undefined4 *)(param_1 + 0x48);
  *param_8 = param_1[0x4c];
  *param_9 = *(undefined4 *)(param_1 + 0x50);
  *param_10 = param_1[0x54];
  *param_11 = *(undefined4 *)(param_1 + 0x58);
  param_12[2] = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *param_12 = *(undefined8 *)(param_1 + 0x60);
  param_12[1] = uVar4;
  *param_13 = *(undefined4 *)(param_1 + 0x78);
  *param_14 = *(undefined4 *)(param_1 + 0x7c);
  *param_15 = param_1[0x80];
  return;
}



// FUNCTION 148adb8c4 FUN_148adb8c4 body=356 status=ok
// SIG undefined FUN_148adb8c4(void)

undefined1 *
FUN_148adb8c4(undefined1 *param_1,undefined1 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
             undefined4 param_9,undefined1 param_10,undefined4 param_11,undefined8 *param_12,
             undefined4 param_13,undefined4 param_14,undefined1 param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *param_1 = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 8) = *param_3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 4);
  FUN_14485c47a(param_1 + 0x38,param_4);
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  *(undefined4 *)(param_1 + 0x48) = param_7;
  param_1[0x4c] = param_8;
  *(undefined4 *)(param_1 + 0x50) = param_9;
  param_1[0x54] = param_10;
  *(undefined4 *)(param_1 + 0x58) = param_11;
  uVar4 = param_12[1];
  *(undefined8 *)(param_1 + 0x60) = *param_12;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = param_12[2];
  *(undefined4 *)(param_1 + 0x78) = param_13;
  *(undefined4 *)(param_1 + 0x7c) = param_14;
  param_1[0x80] = param_15;
  return param_1;
}



// FUNCTION 148adba28 FUN_148adba28 body=108 status=ok
// SIG undefined FUN_148adba28(void)

void FUN_148adba28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  param_3[2] = param_1[0xe];
  uVar1 = param_1[0xd];
  *param_3 = param_1[0xc];
  param_3[1] = uVar1;
  param_4[2] = param_1[0x11];
  uVar1 = param_1[0x10];
  *param_4 = param_1[0xf];
  param_4[1] = uVar1;
  *param_5 = *(undefined4 *)(param_1 + 0x12);
  *param_6 = *(undefined4 *)((longlong)param_1 + 0x94);
  FUN_148ad7354(param_7,param_1 + 0x13);
  return;
}



// FUNCTION 148adba94 FUN_148adba94 body=140 status=ok
// SIG undefined FUN_148adba94(void)

undefined8 *
FUN_148adba94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar6 = param_1;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xe] = param_3[2];
  uVar4 = param_3[1];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar4;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0xf) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  param_1[0x11] = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0x12) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x94) = param_6;
  FUN_148ad7354(param_1 + 0x13,param_7);
  return param_1;
}



// FUNCTION 148adbb20 FUN_148adbb20 body=58 status=ok
// SIG undefined FUN_148adbb20(void)

void FUN_148adbb20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_4 = param_1[2];
  *param_5 = param_1[3];
  *param_6 = param_1[4];
  return;
}



// FUNCTION 148adbb5a FUN_148adbb5a body=40 status=ok
// SIG undefined FUN_148adbb5a(void)

undefined4 *
FUN_148adbb5a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return param_1;
}



// FUNCTION 148adbb82 FUN_148adbb82 body=230 status=ok
// SIG undefined FUN_148adbb82(void)

void FUN_148adbb82(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int *local_50;
  longlong *local_48;
  code *local_40;
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = param_2;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      lVar2 = FUN_1411f69f0();
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)) &&
         ((*param_3 != 0 && (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0))))
      {
        lVar3 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
        if ((lVar3 != 0) && (param_2 < *(int *)(param_1 + 0xc30))) {
          local_38 = &local_58;
          local_50 = &local_2c;
          local_40 = FUN_143f81898;
          local_58 = param_1;
          local_48 = param_3;
          FUN_144966906(lVar3 + 0x138);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adbc6a FUN_148adbc6a body=513 status=ok
// SIG undefined FUN_148adbc6a(void)

undefined8 * FUN_148adbc6a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  
  puVar6 = &DAT_14c846480;
  puVar7 = param_2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_2[0xe] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar4;
  uVar4 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar4;
  param_2[0x11] = DAT_14c8464f0;
  plVar1 = param_2 + 0x13;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  FUN_148ad5c72(param_1);
  lVar5 = *(longlong *)(param_1 + 0x980);
  *(undefined4 *)((longlong)param_2 + 0x94) = *(undefined4 *)(lVar5 + 0x20);
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar5 + 0x18);
  FUN_148adbe6c(plVar1,*(undefined4 *)(param_1 + 0xc30));
  iVar2 = *(int *)(param_1 + 0xc30);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xc28);
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar9);
      *(undefined4 *)(*plVar1 + 8 + lVar8) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x980) + 8) + 4 +
            (longlong)*(int *)(lVar3 + 0x178) * 0x98);
      uVar10 = (**(code **)(**(longlong **)(lVar3 + 0x170) + 0x5e8))
                         (*(longlong **)(lVar3 + 0x170),*(undefined4 *)(lVar3 + 0x178));
      *(undefined4 *)(*plVar1 + lVar8) = uVar10;
      fVar11 = *(float *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x980) + 8) + 8
                         + (longlong)*(int *)(lVar3 + 0x178) * 0x98) * -57.295776;
      _isnan((double)fVar11);
      *(float *)(*plVar1 + 4 + lVar8) = fVar11;
      *(undefined4 *)(*plVar1 + 0xc + lVar8) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x980) + 8) + 0x10 +
            (longlong)*(int *)(lVar3 + 0x178) * 0x98);
      *(undefined4 *)(*plVar1 + 0x10 + lVar8) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x980) + 8) + 0xc +
            (longlong)*(int *)(lVar3 + 0x178) * 0x98);
      lVar8 = lVar8 + 0x14;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  return param_2;
}



// FUNCTION 148adbe6c FUN_148adbe6c body=110 status=ok
// SIG undefined FUN_148adbe6c(void)

void FUN_148adbe6c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148ade18c(param_1,iVar1);
    }
    FUN_148ade176((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148ade220(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148adbedc FUN_148adbedc body=143 status=ok
// SIG undefined FUN_148adbedc(void)

void FUN_148adbedc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ad5dba();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_38;
      local_28 = FUN_143f81a30;
      local_38 = param_2;
      local_30 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adbf6c FUN_148adbf6c body=144 status=ok
// SIG undefined FUN_148adbf6c(void)

void FUN_148adbf6c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_14 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_38;
      local_30 = &local_14;
      local_28 = &LAB_143f81b46;
      local_38 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adbffe FUN_148adbffe body=144 status=ok
// SIG undefined FUN_148adbffe(void)

void FUN_148adbffe(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_14 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_38;
      local_30 = &local_14;
      local_28 = &LAB_143f81b74;
      local_38 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc090 FUN_148adc090 body=144 status=ok
// SIG undefined FUN_148adc090(void)

void FUN_148adc090(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_14 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_38;
      local_30 = &local_14;
      local_28 = &LAB_143f81bba;
      local_38 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc122 FUN_148adc122 body=144 status=ok
// SIG undefined FUN_148adc122(void)

void FUN_148adc122(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_14 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_38;
      local_30 = &local_14;
      local_28 = &LAB_143f81c00;
      local_38 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc1b4 FUN_148adc1b4 body=156 status=ok
// SIG undefined FUN_148adc1b4(void)

void FUN_148adc1b4(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81c2e;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc252 FUN_148adc252 body=156 status=ok
// SIG undefined FUN_148adc252(void)

void FUN_148adc252(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81c6c;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc2f0 FUN_148adc2f0 body=156 status=ok
// SIG undefined FUN_148adc2f0(void)

void FUN_148adc2f0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81caa;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc38e FUN_148adc38e body=156 status=ok
// SIG undefined FUN_148adc38e(void)

void FUN_148adc38e(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81ce8;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc42c FUN_148adc42c body=156 status=ok
// SIG undefined FUN_148adc42c(void)

void FUN_148adc42c(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81d26;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc4ca FUN_148adc4ca body=156 status=ok
// SIG undefined FUN_148adc4ca(void)

void FUN_148adc4ca(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_11 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_11;
      local_28 = &LAB_143f81d64;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc568 FUN_148adc568 body=157 status=ok
// SIG undefined FUN_148adc568(void)

void FUN_148adc568(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81da2;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc606 FUN_148adc606 body=157 status=ok
// SIG undefined FUN_148adc606(void)

void FUN_148adc606(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81de4;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc6a4 FUN_148adc6a4 body=157 status=ok
// SIG undefined FUN_148adc6a4(void)

void FUN_148adc6a4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81e26;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc742 FUN_148adc742 body=157 status=ok
// SIG undefined FUN_148adc742(void)

void FUN_148adc742(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81e68;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc7e0 FUN_148adc7e0 body=157 status=ok
// SIG undefined FUN_148adc7e0(void)

void FUN_148adc7e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81eaa;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc87e FUN_148adc87e body=157 status=ok
// SIG undefined FUN_148adc87e(void)

void FUN_148adc87e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_18;
      local_30 = &local_14;
      local_28 = &LAB_143f81eec;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc91c FUN_148adc91c body=156 status=ok
// SIG undefined FUN_148adc91c(void)

void FUN_148adc91c(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined1 local_15;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_15 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_14;
      local_30 = &local_15;
      local_28 = &LAB_143f81f2e;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adc9ba FUN_148adc9ba body=165 status=ok
// SIG undefined FUN_148adc9ba(void)

void FUN_148adc9ba(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_2;
  local_14 = param_3;
  FUN_148ad5400(param_1,0);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_14;
      local_30 = &local_18;
      local_28 = &LAB_143f81f6c;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adca60 FUN_148adca60 body=158 status=ok
// SIG undefined FUN_148adca60(void)

void FUN_148adca60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_18 = param_2;
  local_14 = param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_20 = &local_40;
      local_38 = &local_14;
      local_30 = &local_18;
      local_28 = &LAB_143f81fb6;
      local_40 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adcb00 FUN_148adcb00 body=336 status=ok
// SIG undefined FUN_148adcb00(void)

void FUN_148adcb00(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  code *local_b0;
  undefined1 **local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_1 + 0x118);
  local_54 = param_2;
  local_50 = param_3;
  local_4c = param_4;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_98 = &stack0x00000038;
      local_68 = &LAB_143f82008;
      local_a0 = param_1;
      local_90 = &local_54;
      local_88 = &local_50;
      local_80 = &local_4c;
      local_78 = &stack0x00000028;
      local_70 = &stack0x00000030;
      local_60 = &local_a0;
      FUN_144966906(lVar2 + 0x138);
      local_a0 = &stack0x00000038;
      local_b0 = FUN_143f820da;
      local_a8 = &local_a0;
      local_98 = param_1;
      local_90 = &local_54;
      local_88 = &local_4c;
      local_80 = &local_50;
      local_78 = &stack0x00000028;
      local_70 = &stack0x00000030;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adcc52 FUN_148adcc52 body=394 status=ok
// SIG undefined FUN_148adcc52(void)

void FUN_148adcc52(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    if (((ulonglong)param_3[3] & 4) == 0) {
      plVar1 = *(longlong **)(param_2 + 0x48);
      local_20 = 0.0;
      if (plVar1 == (longlong *)0x0) {
        local_18 = 0.0;
        local_10 = 0.0;
      }
      else {
        local_18 = 0.0;
        local_10 = 0.0;
        if (1 < *(byte *)((longlong)plVar1 + 0xc)) {
          lVar3 = (longlong)(int)plVar1[1];
          lVar2 = *(longlong *)(*plVar1 + 0x338);
          local_20 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + lVar3 * 8);
          local_10 = *(double *)(lVar2 + 0x10 + lVar3 * 0x18) * local_20;
          local_18 = *(double *)(lVar2 + 8 + lVar3 * 0x18) * local_20;
          local_20 = local_20 * *(double *)(lVar2 + lVar3 * 0x18);
        }
      }
      local_10 = local_10 + param_3[2];
      local_18 = local_18 + param_3[1];
      local_20 = local_20 + *param_3;
    }
    else {
      plVar1 = *(longlong **)(param_2 + 0x48);
      local_20 = 0.0;
      if (plVar1 == (longlong *)0x0) {
        local_18 = 0.0;
        local_10 = 0.0;
        dVar4 = 0.0;
      }
      else {
        local_18 = 0.0;
        local_10 = 0.0;
        dVar4 = 0.0;
        if (1 < *(byte *)((longlong)plVar1 + 0xc)) {
          lVar3 = (longlong)(int)plVar1[1];
          lVar2 = *(longlong *)(*plVar1 + 0x338);
          dVar4 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + lVar3 * 8);
          local_10 = *(double *)(lVar2 + 0x10 + lVar3 * 0x18) * dVar4;
          local_18 = *(double *)(lVar2 + 8 + lVar3 * 0x18) * dVar4;
          local_20 = *(double *)(lVar2 + lVar3 * 0x18) * dVar4;
        }
      }
      local_10 = param_3[2] * dVar4 + local_10;
      local_18 = param_3[1] * dVar4 + local_18;
      local_20 = dVar4 * *param_3 + local_20;
    }
    FUN_146ef9054(param_2,&local_20,0,1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adcdde FUN_148adcdde body=451 status=ok
// SIG undefined FUN_148adcdde(void)

void FUN_148adcdde(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    FUN_142a5e622(&local_68);
    dVar1 = param_3[5];
    dVar2 = *param_3;
    dVar3 = param_3[4];
    dVar4 = param_3[1];
    dVar5 = param_3[3];
    dVar6 = param_3[2];
    plVar7 = *(longlong **)(param_2 + 0x48);
    local_70 = 0.0;
    if (plVar7 == (longlong *)0x0) {
      local_78 = 0.0;
      local_80 = 0.0;
    }
    else {
      local_78 = 0.0;
      local_80 = 0.0;
      if (1 < *(byte *)((longlong)plVar7 + 0xc)) {
        lVar9 = (longlong)(int)plVar7[1];
        lVar8 = *(longlong *)(*plVar7 + 0x338);
        local_80 = *(double *)(*(longlong *)(*plVar7 + 0x3b0) + lVar9 * 8);
        local_70 = *(double *)(lVar8 + 0x10 + lVar9 * 0x18) * local_80;
        local_78 = *(double *)(lVar8 + 8 + lVar9 * 0x18) * local_80;
        local_80 = local_80 * *(double *)(lVar8 + lVar9 * 0x18);
      }
    }
    local_70 = dVar6 + local_70;
    local_78 = dVar4 + local_78;
    local_80 = dVar2 + local_80;
    FUN_146ef9054(param_2,&local_80,0,1);
    FUN_146ef94e6(&local_80,&local_98,*(undefined8 *)(param_2 + 0x48));
    local_70 = ((dVar5 - local_68) * dVar4 - dVar2 * (dVar3 - local_60)) + local_88;
    local_78 = ((dVar1 - local_58) * dVar2 - dVar6 * (dVar5 - local_68)) + local_90;
    local_80 = ((dVar3 - local_60) * dVar6 - dVar4 * (dVar1 - local_58)) + local_98;
    FUN_146ef91a2(param_2,&local_80,0,1);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adcfa2 FUN_148adcfa2 body=61 status=ok
// SIG undefined FUN_148adcfa2(void)

longlong FUN_148adcfa2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144b1fae4();
  if (lVar1 != 0) {
    lVar2 = FUN_144a83daa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148adcfe0 FUN_148adcfe0 body=90 status=ok
// SIG undefined FUN_148adcfe0(void)

void FUN_148adcfe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144b1fae4();
  if (lVar1 != 0) {
    lVar1 = FUN_148add03a(lVar1);
    if (lVar1 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0xd20) = lVar1;
      FUN_148add0ac(param_1 + 0x450,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148add03a FUN_148add03a body=102 status=ok
// SIG undefined FUN_148add03a(void)

void FUN_148add03a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141123890();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148add0ac FUN_148add0ac body=289 status=ok
// SIG undefined FUN_148add0ac(void)

void FUN_148add0ac(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_2 + 0x9d0);
  uVar9 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    *(undefined4 *)(param_1 + 0x8b0) = 0;
    if (*(uint *)(param_1 + 0x8b4) != uVar2) {
      FUN_148ade37c(param_1 + 0x8a8);
    }
    if (uVar9 != 0) {
      iVar3 = *(int *)(param_1 + 0x8b0);
      *(uint *)(param_1 + 0x8b0) = iVar3 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x8b4) - iVar3) < uVar2) {
        FUN_148ade3e8(param_1 + 0x8a8);
      }
      memset((void *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x8a8)),0,uVar9 * 0x38);
      if (0 < *(int *)(param_1 + 0x8b0)) {
        lVar6 = 8;
        lVar7 = 0;
        lVar8 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 0x8a8);
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(*(longlong *)(param_2 + 0x9c8) + lVar6);
          *(undefined8 *)(lVar4 + 0x30 + lVar7) = DAT_14c8464f0;
          uVar5 = DAT_14c8464e8;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
          *puVar1 = DAT_14c8464e0;
          puVar1[1] = uVar5;
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = DAT_14c846508;
          uVar5 = DAT_14c846500;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
          *puVar1 = DAT_14c8464f8;
          puVar1[1] = uVar5;
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x28;
          lVar7 = lVar7 + 0x38;
        } while (lVar8 < *(int *)(param_1 + 0x8b0));
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar9);
}



// FUNCTION 148add1ce FUN_148add1ce body=936 status=ok
// SIG undefined FUN_148add1ce(void)

void FUN_148add1ce(longlong param_1,longlong param_2,float param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [36];
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14477b7d6();
  lVar3 = *(longlong *)(param_2 + 0xd20);
  if (lVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x8b0);
    if (0 < iVar6) {
      lVar9 = 1;
      lVar10 = 0;
      do {
        if ((lVar10 < *(int *)(lVar3 + 0xc30)) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xc28) + lVar10 * 8), lVar4 != 0)) {
          lVar5 = *(longlong *)(param_1 + 0x8a8);
          if ((*(int *)(param_1 + 0x8b8) < 1) ||
             ((*(float *)(param_1 + 0x8c0) <= 0.0 || (*(float *)(param_1 + 0x8bc) <= 1e-08)))) {
            dVar13 = (double)(*(float *)(*(longlong *)
                                          (*(longlong *)(*(longlong *)(lVar4 + 0x170) + 0x980) + 8)
                                         + 8 + (longlong)*(int *)(lVar4 + 0x178) * 0x98) *
                             -57.295776);
            _isnan(dVar13);
            *(double *)(lVar5 + lVar9 * 8) = dVar13;
          }
          else {
            fVar16 = *(float *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar4 + 0x170) + 0x980) + 8) + 0xc +
                               (longlong)*(int *)(lVar4 + 0x178) * 0x98) * -57.295776;
            _isnan((double)fVar16);
            fVar11 = modff((fVar16 / *(float *)(param_1 + 0x8c0)) /
                           (360.0 / (float)*(int *)(param_1 + 0x8b8)),&local_f4);
            fVar12 = sinf(fVar11 * 6.2831855);
            fVar11 = *(float *)(param_1 + 0x8bc);
            fVar15 = 0.0;
            if (0.0 <= ABS(fVar16) - fVar11) {
              fVar15 = ABS(fVar16) - fVar11;
            }
            fVar15 = fVar15 / fVar11;
            if (1.0 <= fVar15) {
              fVar15 = 1.0;
            }
            if (fVar15 <= 0.0) {
              fVar15 = 0.0;
            }
            fVar16 = (fVar12 * fVar11 - fVar16) * fVar15 + fVar16;
            if (fVar11 <= fVar16) {
              fVar16 = fVar11;
            }
            if (fVar16 <= -fVar11) {
              fVar16 = -fVar11;
            }
            dVar13 = (double)(fVar16 * param_3) + *(double *)(lVar5 + lVar9 * 8);
            uVar7 = (uint)(dVar13 / 360.0);
            uVar8 = -uVar7;
            if ((int)uVar8 < 0) {
              uVar8 = uVar7;
            }
            if (1 < uVar8) {
              dVar13 = dVar13 - (double)((float)(int)(dVar13 / 360.0) * 360.0);
            }
            *(double *)(lVar5 + lVar9 * 8) = dVar13;
          }
          *(double *)(lVar5 + 8 + lVar9 * 8) =
               (double)*(float *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x170) + 0x980) + 8) + 4 +
                                 (longlong)*(int *)(lVar4 + 0x178) * 0x98);
          *(undefined8 *)(lVar5 + 0x10 + lVar9 * 8) = 0;
          dVar13 = *(double *)(lVar4 + 0x110);
          dVar1 = *(double *)(lVar4 + 0x118);
          dVar2 = *(double *)(lVar4 + 0x120);
          fVar11 = (float)(**(code **)(**(longlong **)(lVar4 + 0x170) + 0x5e8))
                                    (*(longlong **)(lVar4 + 0x170),*(undefined4 *)(lVar4 + 0x178));
          dVar14 = (double)fVar11;
          *(double *)(lVar5 + 0x18 + lVar9 * 8) = -dVar13 * dVar14;
          *(double *)(lVar5 + 0x20 + lVar9 * 8) = -dVar1 * dVar14;
          *(double *)(lVar5 + 0x28 + lVar9 * 8) = -dVar2 * dVar14;
          iVar6 = *(int *)(param_1 + 0x8b0);
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 7;
      } while (lVar10 < iVar6);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148add578 FUN_148add578 body=140 status=ok
// SIG undefined FUN_148add578(void)

void FUN_148add578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb998b8) {
    FUN_144b3d300(&DAT_14cb998b8);
    if (DAT_14cb998b8 == -1) {
      FUN_1446f470e(&DAT_14cb998b0,L"Vehicle",1);
      _Init_thread_footer(&DAT_14cb998b8);
    }
  }
  FUN_147c46922(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148add604 FUN_148add604 body=8 status=ok
// SIG undefined FUN_148add604(void)

undefined8 FUN_148add604(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



// FUNCTION 148add60c FUN_148add60c body=38 status=ok
// SIG undefined FUN_148add60c(void)

undefined8 FUN_148add60c(undefined8 param_1,int param_2)

{
  FUN_1457f5e28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148add632 FUN_148add632 body=38 status=ok
// SIG undefined FUN_148add632(void)

undefined8 FUN_148add632(undefined8 param_1,int param_2)

{
  FUN_1457f5f54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148add68a FUN_148add68a body=399 status=ok
// SIG undefined FUN_148add68a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148add68a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  float local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_14482f6fa(param_1 + 0xa0,0);
  }
  fVar3 = *(float *)(param_1 + 0x8c);
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    do {
      local_78[1] = 0.0;
      local_78[0] = 0.0;
      lVar2 = *(longlong *)(param_1 + 0x80) + 0x30;
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar2 = param_1;
      }
      FUN_14101b390(lVar2,local_78 + 1,local_78);
      lVar2 = *(longlong *)(param_1 + 0x80) + 0x30;
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar2 = param_1;
      }
      fVar3 = (float)FUN_1448c9f94(lVar2,fVar4,0);
      fVar3 = fVar3 / local_78[0];
      iVar1 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
        FUN_14475e4ac(param_1 + 0xa0,iVar1);
      }
      *(float *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4) = fVar3;
      fVar3 = *(float *)(param_1 + 0x8c);
      fVar4 = fVar4 + fVar3 / 20.0;
    } while (fVar4 <= fVar3);
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x88);
  *(short *)(param_1 + 0xb4) = (short)(int)fVar3;
  *(short *)(param_1 + 0xb6) = (short)(int)*(float *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_1 + 0x98);
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148add81a FUN_148add81a body=285 status=ok
// SIG undefined FUN_148add81a(void)

void FUN_148add81a(undefined2 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  param_1[0x3a] = *param_1;
  *(int *)(param_1 + 0x32) = (int)(longlong)*(float *)(param_1 + 0x14);
  *(int *)(param_1 + 0x34) = (int)(longlong)*(float *)(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x26) < 0) {
    FUN_14482f6fa(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x1a);
  iVar3 = *(int *)(param_1 + 8);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 4);
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar5 + lVar6);
      iVar4 = *(int *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x24) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x26) < iVar4 + 1U) {
        FUN_14475e4ac(plVar1,iVar4);
      }
      *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = uVar2;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar3 * 4 != lVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x2e) < 0) {
    FUN_14482f6fa(plVar1,0);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xc);
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar5 + lVar6);
      iVar4 = *(int *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x2e) < iVar4 + 1U) {
        FUN_14475e4ac(plVar1,iVar4);
      }
      *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = uVar2;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar3 * 4 != lVar6);
  }
  return;
}



// FUNCTION 148add938 FUN_148add938 body=31 status=ok
// SIG undefined FUN_148add938(void)

undefined8 FUN_148add938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148add974 FUN_148add974 body=93 status=ok
// SIG undefined FUN_148add974(void)

void FUN_148add974(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b521a80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148add9d2 FUN_148add9d2 body=126 status=ok
// SIG undefined FUN_148add9d2(void)

void FUN_148add9d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b521a80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148adda41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148adda50 FUN_148adda50 body=21 status=ok
// SIG undefined FUN_148adda50(void)

undefined8 FUN_148adda50(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148adda66 FUN_148adda66 body=31 status=ok
// SIG undefined FUN_148adda66(void)

undefined8 FUN_148adda66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148adda9e FUN_148adda9e body=93 status=ok
// SIG undefined FUN_148adda9e(void)

void FUN_148adda9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b521ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b521b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148addafc FUN_148addafc body=93 status=ok
// SIG undefined FUN_148addafc(void)

void FUN_148addafc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b521ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b521b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148addb5a FUN_148addb5a body=126 status=ok
// SIG undefined FUN_148addb5a(void)

void FUN_148addb5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b521ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b521b30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148addbc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148addc02 FUN_148addc02 body=29 status=ok
// SIG undefined FUN_148addc02(void)

bool FUN_148addc02(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148addc20 FUN_148addc20 body=26 status=ok
// SIG undefined FUN_148addc20(void)

bool FUN_148addc20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148addc3a FUN_148addc3a body=101 status=ok
// SIG undefined FUN_148addc3a(void)

void FUN_148addc3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b521c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148addca0 FUN_148addca0 body=134 status=ok
// SIG undefined FUN_148addca0(void)

void FUN_148addca0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b521c10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148addd17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148addd26 FUN_148addd26 body=39 status=ok
// SIG undefined FUN_148addd26(void)

void FUN_148addd26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148addd49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148addd4e FUN_148addd4e body=48 status=ok
// SIG undefined FUN_148addd4e(void)

void FUN_148addd4e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148addd7e FUN_148addd7e body=62 status=ok
// SIG undefined FUN_148addd7e(void)

void FUN_148addd7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148adddbc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 148adddbc FUN_148adddbc body=118 status=ok
// SIG undefined FUN_148adddbc(void)

ulonglong FUN_148adddbc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148adddf9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_148adddf9:
  return param_2 & 0xffffffff;
}



// FUNCTION 148adde32 FUN_148adde32 body=62 status=ok
// SIG undefined FUN_148adde32(void)

void FUN_148adde32(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148adde70(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148adde70 FUN_148adde70 body=93 status=ok
// SIG undefined FUN_148adde70(void)

ulonglong FUN_148adde70(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148addece FUN_148addece body=147 status=ok
// SIG undefined FUN_148addece(void)

void FUN_148addece(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148addf62 FUN_148addf62 body=132 status=ok
// SIG undefined FUN_148addf62(void)

void FUN_148addf62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148addfe8 FUN_148addfe8 body=132 status=ok
// SIG undefined FUN_148addfe8(void)

void FUN_148addfe8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ade06e FUN_148ade06e body=114 status=ok
// SIG undefined FUN_148ade06e(void)

void FUN_148ade06e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148ade0e0 FUN_148ade0e0 body=62 status=ok
// SIG undefined FUN_148ade0e0(void)

void FUN_148ade0e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ade11e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,1);
  }
  return;
}



// FUNCTION 148ade11e FUN_148ade11e body=88 status=ok
// SIG undefined FUN_148ade11e(void)

ulonglong FUN_148ade11e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,1);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 148ade176 FUN_148ade176 body=22 status=ok
// SIG undefined FUN_148ade176(void)

void FUN_148ade176(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x14);
    return;
  }
  return;
}



// FUNCTION 148ade18c FUN_148ade18c body=147 status=ok
// SIG undefined FUN_148ade18c(void)

void FUN_148ade18c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ade220 FUN_148ade220 body=62 status=ok
// SIG undefined FUN_148ade220(void)

void FUN_148ade220(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ade25e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 148ade25e FUN_148ade25e body=112 status=ok
// SIG undefined FUN_148ade25e(void)

ulonglong FUN_148ade25e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ade298;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_148ade298:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ade2ce FUN_148ade2ce body=62 status=ok
// SIG undefined FUN_148ade2ce(void)

void FUN_148ade2ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148ade30c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148ade30c FUN_148ade30c body=112 status=ok
// SIG undefined FUN_148ade30c(void)

ulonglong FUN_148ade30c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148ade346;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148ade346:
  return param_2 & 0xffffffff;
}



// FUNCTION 148ade37c FUN_148ade37c body=108 status=ok
// SIG undefined FUN_148ade37c(void)

void FUN_148ade37c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 148ade3e8 FUN_148ade3e8 body=143 status=ok
// SIG undefined FUN_148ade3e8(void)

void FUN_148ade3e8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148ade498 FUN_148ade498 body=45 status=ok
// SIG undefined FUN_148ade498(void)

longlong FUN_148ade498(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14105eafa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ade4c6 FUN_148ade4c6 body=48 status=ok
// SIG undefined FUN_148ade4c6(void)

longlong FUN_148ade4c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14105eafa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ade4f6 FUN_148ade4f6 body=48 status=ok
// SIG undefined FUN_148ade4f6(void)

longlong FUN_148ade4f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14105eafa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ade526 FUN_148ade526 body=48 status=ok
// SIG undefined FUN_148ade526(void)

longlong FUN_148ade526(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14105eafa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ade5dc FUN_148ade5dc body=59 status=ok
// SIG undefined FUN_148ade5dc(void)

undefined8 FUN_148ade5dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ade6f2 FUN_148ade6f2 body=59 status=ok
// SIG undefined FUN_148ade6f2(void)

undefined8 FUN_148ade6f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ade794 FUN_148ade794 body=36 status=ok
// SIG undefined FUN_148ade794(void)

undefined8 FUN_148ade794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148ade7d4 FUN_148ade7d4 body=93 status=ok
// SIG undefined FUN_148ade7d4(void)

void FUN_148ade7d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b524740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ade832 FUN_148ade832 body=126 status=ok
// SIG undefined FUN_148ade832(void)

void FUN_148ade832(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b524740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ade8a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ade8b0 FUN_148ade8b0 body=21 status=ok
// SIG undefined FUN_148ade8b0(void)

undefined8 FUN_148ade8b0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ade8c8 FUN_148ade8c8 body=97 status=ok
// SIG undefined FUN_148ade8c8(void)

void FUN_148ade8c8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x68] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x70))();
      param_1[0x68] = lVar3;
    }
    lVar1 = param_1[0x66];
    for (lVar3 = param_1[0x65]; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      plVar2 = *(longlong **)(lVar3 + 0x40);
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 148ade92a FUN_148ade92a body=145 status=ok
// SIG undefined FUN_148ade92a(void)

void FUN_148ade92a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x1c] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
      param_1[0x1c] = lVar3;
    }
    lVar3 = param_1[0xd];
    lVar1 = param_1[0xe];
    if (lVar3 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar3 + 0x40);
        local_30 = param_2;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ade9be FUN_148ade9be body=151 status=ok
// SIG undefined FUN_148ade9be(void)

void FUN_148ade9be(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x1c] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
      param_1[0x1c] = lVar3;
    }
    lVar3 = param_1[0x11];
    lVar1 = param_1[0x12];
    if (lVar3 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar3 + 0x40);
        local_30 = param_2;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adea58 FUN_148adea58 body=97 status=ok
// SIG undefined FUN_148adea58(void)

void FUN_148adea58(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x1c] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
      param_1[0x1c] = lVar3;
    }
    lVar1 = param_1[0x16];
    for (lVar3 = param_1[0x15]; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      plVar2 = *(longlong **)(lVar3 + 0x40);
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 148adeaba FUN_148adeaba body=169 status=ok
// SIG undefined FUN_148adeaba(void)

void FUN_148adeaba(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x1c] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
      param_1[0x1c] = lVar3;
    }
    lVar3 = param_1[0x19];
    lVar1 = param_1[0x1a];
    if (lVar3 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar3 + 0x40);
        local_3c = param_2;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_3c,param_3,param_4);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148adeb66 FUN_148adeb66 body=151 status=ok
// SIG undefined FUN_148adeb66(void)

void FUN_148adeb66(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    if (param_1[0x46] == 0) {
      lVar3 = (**(code **)(*param_1 + 0x40))();
      param_1[0x46] = lVar3;
    }
    lVar3 = param_1[0x27];
    lVar1 = param_1[0x28];
    if (lVar3 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar3 + 0x40);
        local_30 = param_2;
        if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


