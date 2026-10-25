// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c926e8 FUN_148c926e8 body=59 status=ok
// SIG undefined FUN_148c926e8(void)

undefined8 FUN_148c926e8(longlong *param_1)

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



// FUNCTION 148c9272e FUN_148c9272e body=34 status=ok
// SIG undefined FUN_148c9272e(void)

void FUN_148c9272e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148c9279e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c9279e FUN_148c9279e body=61 status=ok
// SIG undefined FUN_148c9279e(void)

void FUN_148c9279e(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c927dc FUN_148c927dc body=54 status=ok
// SIG undefined FUN_148c927dc(void)

void FUN_148c927dc(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2,"My Button");
  FUN_1400b22c2(param_2 + 2,"Button Tooltip");
  return;
}



// FUNCTION 148c92812 FUN_148c92812 body=47 status=ok
// SIG undefined FUN_148c92812(void)

void FUN_148c92812(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,"My Button");
  FUN_1400b22c2(param_2 + 0x10,"Button Tooltip");
  return;
}



// FUNCTION 148c92842 FUN_148c92842 body=47 status=ok
// SIG undefined FUN_148c92842(void)

void FUN_148c92842(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c92888 FUN_148c92888 body=67 status=ok
// SIG undefined FUN_148c92888(void)

undefined1 FUN_148c92888(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c928f4 FUN_148c928f4 body=59 status=ok
// SIG undefined FUN_148c928f4(void)

undefined8 FUN_148c928f4(longlong *param_1)

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



// FUNCTION 148c92992 FUN_148c92992 body=51 status=ok
// SIG undefined FUN_148c92992(void)

void FUN_148c92992(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148c929d6 FUN_148c929d6 body=35 status=ok
// SIG undefined FUN_148c929d6(void)

void FUN_148c929d6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14110ce80(param_2);
  return;
}



// FUNCTION 148c92a10 FUN_148c92a10 body=54 status=ok
// SIG undefined FUN_148c92a10(void)

undefined1 FUN_148c92a10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c93106(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c92a6e FUN_148c92a6e body=59 status=ok
// SIG undefined FUN_148c92a6e(void)

undefined8 FUN_148c92a6e(longlong *param_1)

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



// FUNCTION 148c92ab4 FUN_148c92ab4 body=46 status=ok
// SIG undefined FUN_148c92ab4(void)

void FUN_148c92ab4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_14110ce80(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c92b30 FUN_148c92b30 body=1396 status=ok
// SIG undefined FUN_148c92b30(void)

longlong * FUN_148c92b30(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_2b8 [40];
  longlong local_290 [2];
  longlong *local_280 [2];
  longlong local_270 [2];
  longlong *local_260 [2];
  longlong local_250 [2];
  longlong *local_240 [2];
  longlong local_230 [2];
  longlong *local_220 [2];
  longlong local_210 [2];
  longlong *local_200 [2];
  longlong local_1f0 [2];
  longlong *local_1e0 [2];
  longlong local_1d0 [2];
  longlong *local_1c0 [2];
  longlong local_1b0 [2];
  longlong *local_1a0 [2];
  longlong local_190 [2];
  longlong *local_180 [2];
  longlong *local_170;
  ulonglong *local_168;
  longlong local_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  FUN_140056680(param_1 + 4,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 6) = 0x10001;
  FUN_140056680(param_1 + 7,&DAT_149dfb77a);
  FUN_1400b22c2(param_1 + 9,"Test Stepper Tooltip");
  FUN_1446ddc76(&local_160,"Option1",1);
  FUN_1400b22c2(local_190,"Option 1");
  FUN_140233b1a(local_180,local_190);
  FUN_14023423e(local_158,local_180);
  local_148 = 0;
  FUN_1446ddc76(local_140,"Option2",1);
  FUN_1400b22c2(local_1b0,"Option 2");
  FUN_140233b1a(local_1a0,local_1b0);
  FUN_14023423e(local_138,local_1a0);
  local_128 = 0;
  FUN_1446ddc76(local_120,"Option3",1);
  FUN_1400b22c2(local_1d0,"Option 3");
  FUN_140233b1a(local_1c0,local_1d0);
  FUN_14023423e(local_118,local_1c0);
  local_108 = 0;
  FUN_1446ddc76(local_100,"Option4",1);
  FUN_1400b22c2(local_1f0,"Option 4");
  FUN_140233b1a(local_1e0,local_1f0);
  FUN_14023423e(local_f8,local_1e0);
  local_e8 = 0;
  FUN_1446ddc76(local_e0,"Option5",1);
  FUN_1400b22c2(local_210,"Option 5");
  FUN_140233b1a(local_200,local_210);
  FUN_14023423e(local_d8,local_200);
  local_c8 = 0;
  FUN_1446ddc76(local_c0,"Option6",1);
  FUN_1400b22c2(local_230,"Option 6");
  FUN_140233b1a(local_220,local_230);
  FUN_14023423e(local_b8,local_220);
  local_a8 = 0;
  FUN_1446ddc76(local_a0,"Option7",1);
  FUN_1400b22c2(local_250,"Option 7");
  FUN_140233b1a(local_240,local_250);
  FUN_14023423e(local_98,local_240);
  local_88 = 0;
  FUN_1446ddc76(local_80,"Option8",1);
  FUN_1400b22c2(local_270,"Option 8");
  FUN_140233b1a(local_260,local_270);
  FUN_14023423e(local_78,local_260);
  local_68 = 0;
  FUN_1446ddc76(local_60,"Option9",1);
  FUN_1400b22c2(local_290,"Option 9");
  FUN_140233b1a(local_280,local_290);
  FUN_14023423e(local_58,local_280);
  local_48 = 0;
  local_168 = &local_40;
  local_170 = &local_160;
  FUN_148c930a6(param_1 + 2);
  lVar1 = 0x108;
  do {
    if (*(longlong **)(local_158 + lVar1 + -8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(local_158 + lVar1 + -8) + 0x10))();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x18);
  if (local_280[0] != (longlong *)0x0) {
    (**(code **)(*local_280[0] + 0x10))();
  }
  if (local_290[0] != 0) {
    FUN_1400020a8();
  }
  if (local_260[0] != (longlong *)0x0) {
    (**(code **)(*local_260[0] + 0x10))();
  }
  if (local_270[0] != 0) {
    FUN_1400020a8();
  }
  if (local_240[0] != (longlong *)0x0) {
    (**(code **)(*local_240[0] + 0x10))();
  }
  if (local_250[0] != 0) {
    FUN_1400020a8();
  }
  if (local_220[0] != (longlong *)0x0) {
    (**(code **)(*local_220[0] + 0x10))();
  }
  if (local_230[0] != 0) {
    FUN_1400020a8();
  }
  if (local_200[0] != (longlong *)0x0) {
    (**(code **)(*local_200[0] + 0x10))();
  }
  if (local_210[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1e0[0] != (longlong *)0x0) {
    (**(code **)(*local_1e0[0] + 0x10))();
  }
  if (local_1f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c0[0] != (longlong *)0x0) {
    (**(code **)(*local_1c0[0] + 0x10))();
  }
  if (local_1d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1a0[0] != (longlong *)0x0) {
    (**(code **)(*local_1a0[0] + 0x10))();
  }
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_180[0] != (longlong *)0x0) {
    (**(code **)(*local_180[0] + 0x10))();
  }
  if (local_190[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446ddc76(&local_160,"test_stepper_option",1);
  *param_1 = local_160;
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c930a6 FUN_148c930a6 body=96 status=ok
// SIG undefined FUN_148c930a6(void)

undefined8 * FUN_148c930a6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14110cecd(*param_1,*(undefined4 *)(param_1 + 1));
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 5;
  *(int *)(param_1 + 1) = (int)uVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && (int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145d333d4(param_1,uVar2 & 0xffffffff);
    FUN_14153c61c(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 148c93106 FUN_148c93106 body=89 status=ok
// SIG undefined FUN_148c93106(void)

undefined4 * FUN_148c93106(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_148c68022(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  param_1[0xc] = param_2[0xc];
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 148c93160 FUN_148c93160 body=69 status=ok
// SIG undefined FUN_148c93160(void)

void FUN_148c93160(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(param_2,"test_toggle_option",1);
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_1400b22c2(param_2 + 2,"Test Toggle Tooltip");
  return;
}



// FUNCTION 148c931a6 FUN_148c931a6 body=57 status=ok
// SIG undefined FUN_148c931a6(void)

void FUN_148c931a6(undefined8 param_1,longlong param_2)

{
  FUN_1446ddc76(param_2,"test_toggle_option",1);
  *(undefined1 *)(param_2 + 8) = 1;
  FUN_1400b22c2(param_2 + 0x10,"Test Toggle Tooltip");
  return;
}



// FUNCTION 148c93204 FUN_148c93204 body=78 status=ok
// SIG undefined FUN_148c93204(void)

undefined8 FUN_148c93204(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a787a6();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c9327a FUN_148c9327a body=59 status=ok
// SIG undefined FUN_148c9327a(void)

undefined8 FUN_148c9327a(longlong *param_1)

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



// FUNCTION 148c932c0 FUN_148c932c0 body=38 status=ok
// SIG undefined FUN_148c932c0(void)

void FUN_148c932c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c93364 FUN_148c93364 body=149 status=ok
// SIG undefined FUN_148c93364(void)

undefined8 FUN_148c93364(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      FUN_144a787a6();
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_144a787a6(lVar2 + 0x18,lVar1 + 0x18);
      *(undefined2 *)(lVar2 + 0x28) = *(undefined2 *)(lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x2a) = *(undefined1 *)(lVar1 + 0x2a);
      FUN_144a787a6(param_2 + lVar3 + 0x30,param_3 + lVar3 + 0x30);
      lVar3 = lVar3 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c93422 FUN_148c93422 body=59 status=ok
// SIG undefined FUN_148c93422(void)

undefined8 FUN_148c93422(longlong *param_1)

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



// FUNCTION 148c93468 FUN_148c93468 body=34 status=ok
// SIG undefined FUN_148c93468(void)

void FUN_148c93468(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148c9363e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c934d8 FUN_148c934d8 body=357 status=ok
// SIG undefined FUN_148c934d8(void)

longlong * FUN_148c934d8(longlong *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(param_1 + 1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  FUN_1400b22c2(param_1 + 6,"Rebind Tooltip");
  FUN_1400b22c2(&local_38,"leftalt");
  if (param_1 + 1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 2) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_2c;
  }
  FUN_1400b22c2(&local_38,"leftshift");
  if (param_1 + 3 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 4) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_2c;
  }
  FUN_1446ddc76(&local_38,"test_rebind_entry",1);
  *param_1 = local_38;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9363e FUN_148c9363e body=62 status=ok
// SIG undefined FUN_148c9363e(void)

void FUN_148c9363e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9367e FUN_148c9367e body=37 status=ok
// SIG undefined FUN_148c9367e(void)

void FUN_148c9367e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2a0);
  FUN_148c937fa(param_2);
  return;
}



// FUNCTION 148c936d0 FUN_148c936d0 body=63 status=ok
// SIG undefined FUN_148c936d0(void)

undefined1 FUN_148c936d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c93a32(param_2,param_3);
    param_3 = param_3 + 0x2a0;
    param_2 = param_2 + 0x2a0;
  }
  return 1;
}



// FUNCTION 148c93738 FUN_148c93738 body=59 status=ok
// SIG undefined FUN_148c93738(void)

undefined8 FUN_148c93738(longlong *param_1)

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



// FUNCTION 148c93784 FUN_148c93784 body=40 status=ok
// SIG undefined FUN_148c93784(void)

void FUN_148c93784(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2a0) == '\x01') {
    FUN_148c9398e(param_2);
    *(undefined1 *)(param_2 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 148c937fa FUN_148c937fa body=310 status=ok
// SIG undefined FUN_148c937fa(void)

undefined8 * FUN_148c937fa(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cd1e0;
  FUN_148c91cb2(param_1 + 0x16);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14153c466(param_1 + 0x26);
  FUN_1400b22c2(param_1 + 0x30,"Slider Tooltip");
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f2666663e800000;
  FUN_1400b22c2(param_1 + 0x32,"Initial Text");
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  FUN_1400b22c2(param_1 + 0x35,"Text Hint");
  FUN_1400b22c2(param_1 + 0x37,"Input Tooltip");
  FUN_1400b22c2(param_1 + 0x39,"My Button");
  FUN_1400b22c2(param_1 + 0x3b,"Button Tooltip");
  FUN_148c92b30(param_1 + 0x3d);
  FUN_1446ddc76(param_1 + 0x48,"test_toggle_option",1);
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_1400b22c2(param_1 + 0x4a,"Test Toggle Tooltip");
  FUN_148c934d8(param_1 + 0x4c);
  return param_1;
}



// FUNCTION 148c93930 FUN_148c93930 body=38 status=ok
// SIG undefined FUN_148c93930(void)

undefined8 FUN_148c93930(undefined8 param_1,int param_2)

{
  FUN_148c9398e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c93956 FUN_148c93956 body=55 status=ok
// SIG undefined FUN_148c93956(void)

void FUN_148c93956(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc070 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc070 = FUN_140002ddd(FUN_14660a369,uVar1,L"OakUIData_UIPlayground");
  }
  return;
}



// FUNCTION 148c9398e FUN_148c9398e body=164 status=ok
// SIG undefined FUN_148c9398e(void)

void FUN_148c9398e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cd1e0;
  FUN_148c9363e(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_14110ce80(param_1 + 0x3d);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_148c9279e(param_1 + 0x32);
  FUN_148c9256a(param_1 + 0x26);
  FUN_140d4710a(param_1 + 0x16);
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c93a32 FUN_148c93a32 body=402 status=ok
// SIG undefined FUN_148c93a32(void)

longlong FUN_148c93a32(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1489fb7d2();
  FUN_1457fd360(param_1 + 0xb0,param_2 + 0xb0);
  uVar2 = *(undefined4 *)(param_2 + 0x134);
  uVar3 = *(undefined4 *)(param_2 + 0x138);
  uVar4 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  uVar1 = *(undefined8 *)(param_2 + 0x15d);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x15d) = uVar1;
  FUN_140ae1244(param_1 + 0x168,param_2 + 0x168);
  FUN_144a787a6(param_1 + 0x180,param_2 + 0x180);
  FUN_144a787a6(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_148c93106(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  FUN_144a787a6(param_1 + 0x250,param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
  FUN_144a787a6(param_1 + 0x278,param_2 + 0x278);
  *(undefined2 *)(param_1 + 0x288) = *(undefined2 *)(param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x28a) = *(undefined1 *)(param_2 + 0x28a);
  FUN_144a787a6(param_1 + 0x290,param_2 + 0x290);
  return param_1;
}



// FUNCTION 148c93bc6 FUN_148c93bc6 body=132 status=ok
// SIG undefined FUN_148c93bc6(void)

void FUN_148c93bc6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cd370;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 148c93c4a FUN_148c93c4a body=109 status=ok
// SIG undefined FUN_148c93c4a(void)

void FUN_148c93c4a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cd370;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 148c93cdc FUN_148c93cdc body=63 status=ok
// SIG undefined FUN_148c93cdc(void)

undefined1 FUN_148c93cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c93e06(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c93d44 FUN_148c93d44 body=59 status=ok
// SIG undefined FUN_148c93d44(void)

undefined8 FUN_148c93d44(longlong *param_1)

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



// FUNCTION 148c93d90 FUN_148c93d90 body=40 status=ok
// SIG undefined FUN_148c93d90(void)

void FUN_148c93d90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_145c5b9c0(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c93e06 FUN_148c93e06 body=269 status=ok
// SIG undefined FUN_148c93e06(void)

longlong FUN_148c93e06(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0) || *(int *)(param_1 + 0xe0) == 0) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0xe0);
    FUN_140e1df98(param_1 + 0xd0,param_2 + 0xd0);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  return param_1;
}



// FUNCTION 148c93f38 FUN_148c93f38 body=47 status=ok
// SIG undefined FUN_148c93f38(void)

void FUN_148c93f38(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c93f7e FUN_148c93f7e body=54 status=ok
// SIG undefined FUN_148c93f7e(void)

undefined1 FUN_148c93f7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c94078(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c93fdc FUN_148c93fdc body=59 status=ok
// SIG undefined FUN_148c93fdc(void)

undefined8 FUN_148c93fdc(longlong *param_1)

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



// FUNCTION 148c94078 FUN_148c94078 body=74 status=ok
// SIG undefined FUN_148c94078(void)

longlong FUN_148c94078(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  return param_1;
}



// FUNCTION 148c940c4 FUN_148c940c4 body=51 status=ok
// SIG undefined FUN_148c940c4(void)

void FUN_148c940c4(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 148c9418c FUN_148c9418c body=63 status=ok
// SIG undefined FUN_148c9418c(void)

undefined1 FUN_148c9418c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c94350(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c941f4 FUN_148c941f4 body=59 status=ok
// SIG undefined FUN_148c941f4(void)

undefined8 FUN_148c941f4(longlong *param_1)

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



// FUNCTION 148c94240 FUN_148c94240 body=40 status=ok
// SIG undefined FUN_148c94240(void)

void FUN_148c94240(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_148c942b6(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c942b6 FUN_148c942b6 body=154 status=ok
// SIG undefined FUN_148c942b6(void)

void FUN_148c942b6(longlong *param_1)

{
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c94350 FUN_148c94350 body=361 status=ok
// SIG undefined FUN_148c94350(void)

longlong FUN_148c94350(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
    FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  if (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88)) {
    FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0)) {
    FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  }
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8)) {
    FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  }
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0)) {
    FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  return param_1;
}



// FUNCTION 148c944ca FUN_148c944ca body=44 status=ok
// SIG undefined FUN_148c944ca(void)

void FUN_148c944ca(undefined8 param_1,longlong *param_2)

{
  FUN_148c94606(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9450c FUN_148c9450c body=54 status=ok
// SIG undefined FUN_148c9450c(void)

undefined1 FUN_148c9450c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c94630(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c9456a FUN_148c9456a body=59 status=ok
// SIG undefined FUN_148c9456a(void)

undefined8 FUN_148c9456a(longlong *param_1)

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



// FUNCTION 148c94606 FUN_148c94606 body=41 status=ok
// SIG undefined FUN_148c94606(void)

void FUN_148c94606(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c942b6(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 148c94630 FUN_148c94630 body=95 status=ok
// SIG undefined FUN_148c94630(void)

undefined8 * FUN_148c94630(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c94606(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c94690(param_1,iVar1);
      FUN_148c94702(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c94690 FUN_148c94690 body=114 status=ok
// SIG undefined FUN_148c94690(void)

void FUN_148c94690(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c94702 FUN_148c94702 body=60 status=ok
// SIG undefined FUN_148c94702(void)

void FUN_148c94702(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c9473e(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 148c9473e FUN_148c9473e body=358 status=ok
// SIG undefined FUN_148c9473e(void)

undefined8 * FUN_148c9473e(undefined8 *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_144a787a6(param_1 + 3,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144a787a6(param_1 + 6,param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a787a6(param_1 + 9,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_144a787a6(param_1 + 0xf,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_144a787a6(param_1 + 0x15,param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_144a787a6(param_1 + 0x18,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  return param_1;
}



// FUNCTION 148c948a6 FUN_148c948a6 body=50 status=ok
// SIG undefined FUN_148c948a6(void)

void FUN_148c948a6(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_148c94606(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c948d8 FUN_148c948d8 body=99 status=ok
// SIG undefined FUN_148c948d8(void)

void FUN_148c948d8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cd920;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148c9493c FUN_148c9493c body=81 status=ok
// SIG undefined FUN_148c9493c(void)

void FUN_148c9493c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cd920;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 148c949b2 FUN_148c949b2 body=63 status=ok
// SIG undefined FUN_148c949b2(void)

undefined1 FUN_148c949b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c94bd4(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c94a1a FUN_148c94a1a body=59 status=ok
// SIG undefined FUN_148c94a1a(void)

undefined8 FUN_148c94a1a(longlong *param_1)

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



// FUNCTION 148c94a66 FUN_148c94a66 body=40 status=ok
// SIG undefined FUN_148c94a66(void)

void FUN_148c94a66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148c94b3a(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148c94adc FUN_148c94adc body=38 status=ok
// SIG undefined FUN_148c94adc(void)

undefined8 FUN_148c94adc(undefined8 param_1,int param_2)

{
  FUN_148c94b3a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c94b02 FUN_148c94b02 body=55 status=ok
// SIG undefined FUN_148c94b02(void)

void FUN_148c94b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc160 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc160 = FUN_140002ddd(FUN_14660a657,uVar1,L"OakUIData_Vault");
  }
  return;
}



// FUNCTION 148c94b3a FUN_148c94b3a body=100 status=ok
// SIG undefined FUN_148c94b3a(void)

void FUN_148c94b3a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cd920;
  FUN_148c94b9e(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c94b9e FUN_148c94b9e body=54 status=ok
// SIG undefined FUN_148c94b9e(void)

void FUN_148c94b9e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c94606(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148c94bd4 FUN_148c94bd4 body=102 status=ok
// SIG undefined FUN_148c94bd4(void)

longlong FUN_148c94bd4(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_148c94078(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  FUN_148c94c3a(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 148c94c3a FUN_148c94c3a body=95 status=ok
// SIG undefined FUN_148c94c3a(void)

undefined8 * FUN_148c94c3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c94b9e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c94c9a(param_1,iVar1);
      FUN_148c94cfc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c94c9a FUN_148c94c9a body=98 status=ok
// SIG undefined FUN_148c94c9a(void)

void FUN_148c94c9a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c94cfc FUN_148c94cfc body=52 status=ok
// SIG undefined FUN_148c94cfc(void)

void FUN_148c94cfc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c94d30(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 148c94d30 FUN_148c94d30 body=77 status=ok
// SIG undefined FUN_148c94d30(void)

undefined8 * FUN_148c94d30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c94690(param_1,iVar1,0);
    FUN_148c94702(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c94d7e FUN_148c94d7e body=108 status=ok
// SIG undefined FUN_148c94d7e(void)

void FUN_148c94d7e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cdab0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffffffffffff;
  FUN_1400b22c2(param_2 + 0x18,"vault");
  FUN_1400b22c2(param_2 + 0x1a,"Unknown Type");
  return;
}



// FUNCTION 148c94dea FUN_148c94dea body=92 status=ok
// SIG undefined FUN_148c94dea(void)

void FUN_148c94dea(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cdab0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffffffffffff;
  FUN_1400b22c2(param_2 + 0x18,"vault");
  FUN_1400b22c2(param_2 + 0x1a,"Unknown Type");
  return;
}



// FUNCTION 148c94e6a FUN_148c94e6a body=134 status=ok
// SIG undefined FUN_148c94e6a(void)

undefined8 FUN_148c94e6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_3 + 0xb8);
    FUN_144a787a6(param_2 + 0xc0,param_3 + 0xc0);
    FUN_144a787a6(param_2 + 0xd0,param_3 + 0xd0);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c94f18 FUN_148c94f18 body=59 status=ok
// SIG undefined FUN_148c94f18(void)

undefined8 FUN_148c94f18(longlong *param_1)

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



// FUNCTION 148c94f64 FUN_148c94f64 body=40 status=ok
// SIG undefined FUN_148c94f64(void)

void FUN_148c94f64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_145c54b54(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c94fda FUN_148c94fda body=57 status=ok
// SIG undefined FUN_148c94fda(void)

void FUN_148c94fda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc178 = FUN_140002ddd(FUN_14660a6ed,uVar1,L"OakWidgetData_VaultTracker");
  }
  return;
}



// FUNCTION 148c9505e FUN_148c9505e body=54 status=ok
// SIG undefined FUN_148c9505e(void)

undefined1 FUN_148c9505e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c950bc FUN_148c950bc body=59 status=ok
// SIG undefined FUN_148c950bc(void)

undefined8 FUN_148c950bc(longlong *param_1)

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



// FUNCTION 148c95102 FUN_148c95102 body=37 status=ok
// SIG undefined FUN_148c95102(void)

void FUN_148c95102(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c95178 FUN_148c95178 body=66 status=ok
// SIG undefined FUN_148c95178(void)

void FUN_148c95178(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 1,&DAT_149dfb77a);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x27) = 0;
  return;
}



// FUNCTION 148c951ba FUN_148c951ba body=48 status=ok
// SIG undefined FUN_148c951ba(void)

void FUN_148c951ba(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_140056680(param_2 + 1,&DAT_149dfb77a);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x27) = 0;
  return;
}



// FUNCTION 148c95208 FUN_148c95208 body=95 status=ok
// SIG undefined FUN_148c95208(void)

undefined8 FUN_148c95208(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_148c95346(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x13);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x13) = uVar1;
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c95290 FUN_148c95290 body=59 status=ok
// SIG undefined FUN_148c95290(void)

undefined8 FUN_148c95290(longlong *param_1)

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



// FUNCTION 148c952d6 FUN_148c952d6 body=34 status=ok
// SIG undefined FUN_148c952d6(void)

void FUN_148c952d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145afa252(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c95346 FUN_148c95346 body=95 status=ok
// SIG undefined FUN_148c95346(void)

undefined8 * FUN_148c95346(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145afa28e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1461460a6(param_1,iVar1);
      FUN_146146108(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c953a6 FUN_148c953a6 body=80 status=ok
// SIG undefined FUN_148c953a6(void)

void FUN_148c953a6(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  return;
}



// FUNCTION 148c953f6 FUN_148c953f6 body=57 status=ok
// SIG undefined FUN_148c953f6(void)

void FUN_148c953f6(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 148c95430 FUN_148c95430 body=47 status=ok
// SIG undefined FUN_148c95430(void)

void FUN_148c95430(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c95476 FUN_148c95476 body=79 status=ok
// SIG undefined FUN_148c95476(void)

undefined8 FUN_148c95476(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_3 + 0x24);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c954ee FUN_148c954ee body=59 status=ok
// SIG undefined FUN_148c954ee(void)

undefined8 FUN_148c954ee(longlong *param_1)

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



// FUNCTION 148c9558c FUN_148c9558c body=51 status=ok
// SIG undefined FUN_148c9558c(void)

void FUN_148c9558c(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148c955c0 FUN_148c955c0 body=37 status=ok
// SIG undefined FUN_148c955c0(void)

void FUN_148c955c0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b8);
  FUN_146147644(param_2);
  return;
}



// FUNCTION 148c95612 FUN_148c95612 body=63 status=ok
// SIG undefined FUN_148c95612(void)

undefined1 FUN_148c95612(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9573c(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 148c9567a FUN_148c9567a body=59 status=ok
// SIG undefined FUN_148c9567a(void)

undefined8 FUN_148c9567a(longlong *param_1)

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



// FUNCTION 148c956c6 FUN_148c956c6 body=40 status=ok
// SIG undefined FUN_148c956c6(void)

void FUN_148c956c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_145afa124(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 148c9573c FUN_148c9573c body=571 status=ok
// SIG undefined FUN_148c9573c(void)

longlong FUN_148c9573c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1489fb7d2();
  uVar1 = *(undefined8 *)(param_2 + 0xb5);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb5) = uVar1;
  FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_2 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  if (*(int *)(param_1 + 0x140) != *(int *)(param_2 + 0x140)) {
    *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  }
  plVar2 = *(longlong **)(param_2 + 0x148);
  plVar3 = *(longlong **)(param_1 + 0x148);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x148) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  plVar2 = *(longlong **)(param_2 + 0x158);
  plVar3 = *(longlong **)(param_1 + 0x158);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x158) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  FUN_148c95978(param_1 + 0x168,param_2 + 0x168);
  FUN_148c959d8(param_1 + 0x178,param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  if (*(int *)(param_1 + 400) != *(int *)(param_2 + 400)) {
    *(undefined1 *)(param_1 + 0x18c) = *(undefined1 *)(param_2 + 0x18c);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  }
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 148c95978 FUN_148c95978 body=95 status=ok
// SIG undefined FUN_148c95978(void)

undefined8 * FUN_148c95978(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145afa22c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c95a38(param_1,iVar1);
      FUN_148c95aab(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c959d8 FUN_148c959d8 body=95 status=ok
// SIG undefined FUN_148c959d8(void)

undefined8 * FUN_148c959d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145afa2b9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c95ae0(param_1,iVar1);
      FUN_148c95b53(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c95a38 FUN_148c95a38 body=115 status=ok
// SIG undefined FUN_148c95a38(void)

void FUN_148c95a38(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c95aab FUN_148c95aab body=52 status=ok
// SIG undefined FUN_148c95aab(void)

void FUN_148c95aab(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146145ff2(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148c95ae0 FUN_148c95ae0 body=115 status=ok
// SIG undefined FUN_148c95ae0(void)

void FUN_148c95ae0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c95b53 FUN_148c95b53 body=52 status=ok
// SIG undefined FUN_148c95b53(void)

void FUN_148c95b53(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146145f46(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c95b88 FUN_148c95b88 body=65 status=ok
// SIG undefined FUN_148c95b88(void)

void FUN_148c95b88(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ce200;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 148c95bca FUN_148c95bca body=49 status=ok
// SIG undefined FUN_148c95bca(void)

void FUN_148c95bca(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ce200;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 148c95c20 FUN_148c95c20 body=100 status=ok
// SIG undefined FUN_148c95c20(void)

undefined8 FUN_148c95c20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    if (*(int *)(param_2 + 0xb4) != *(int *)(param_3 + 0xb4)) {
      *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_3 + 0xb4);
    }
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c95cac FUN_148c95cac body=59 status=ok
// SIG undefined FUN_148c95cac(void)

undefined8 FUN_148c95cac(longlong *param_1)

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



// FUNCTION 148c95cf8 FUN_148c95cf8 body=38 status=ok
// SIG undefined FUN_148c95cf8(void)

void FUN_148c95cf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c95db6 FUN_148c95db6 body=54 status=ok
// SIG undefined FUN_148c95db6(void)

undefined1 FUN_148c95db6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c95f60(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c95e14 FUN_148c95e14 body=59 status=ok
// SIG undefined FUN_148c95e14(void)

undefined8 FUN_148c95e14(longlong *param_1)

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



// FUNCTION 148c95e5a FUN_148c95e5a body=34 status=ok
// SIG undefined FUN_148c95e5a(void)

void FUN_148c95e5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148c95f14(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c95eca FUN_148c95eca body=74 status=ok
// SIG undefined FUN_148c95eca(void)

longlong FUN_148c95eca(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 148c95f14 FUN_148c95f14 body=75 status=ok
// SIG undefined FUN_148c95f14(void)

void FUN_148c95f14(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c95f60 FUN_148c95f60 body=74 status=ok
// SIG undefined FUN_148c95f60(void)

longlong FUN_148c95f60(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c95fac FUN_148c95fac body=37 status=ok
// SIG undefined FUN_148c95fac(void)

void FUN_148c95fac(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc20);
  FUN_148c96122(param_2);
  return;
}



// FUNCTION 148c95ff8 FUN_148c95ff8 body=63 status=ok
// SIG undefined FUN_148c95ff8(void)

undefined1 FUN_148c95ff8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9634e(param_2,param_3);
    param_3 = param_3 + 0xc20;
    param_2 = param_2 + 0xc20;
  }
  return 1;
}



// FUNCTION 148c96060 FUN_148c96060 body=59 status=ok
// SIG undefined FUN_148c96060(void)

undefined8 FUN_148c96060(longlong *param_1)

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



// FUNCTION 148c960ac FUN_148c960ac body=40 status=ok
// SIG undefined FUN_148c960ac(void)

void FUN_148c960ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc20) == '\x01') {
    FUN_148c962ac(param_2);
    *(undefined1 *)(param_2 + 0xc20) = 0;
  }
  return;
}



// FUNCTION 148c96122 FUN_148c96122 body=300 status=ok
// SIG undefined FUN_148c96122(void)

undefined8 * FUN_148c96122(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_145854e74();
  *param_1 = &PTR_FUN_14b8ce500;
  *(undefined2 *)(param_1 + 0x16a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb54) = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x175] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x176) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x177] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x178) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x179] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x17a) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x17c) = (int)plVar2[1];
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x182) = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0;
  return param_1;
}



// FUNCTION 148c9624e FUN_148c9624e body=38 status=ok
// SIG undefined FUN_148c9624e(void)

undefined8 FUN_148c9624e(undefined8 param_1,int param_2)

{
  FUN_148c962ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c96274 FUN_148c96274 body=55 status=ok
// SIG undefined FUN_148c96274(void)

void FUN_148c96274(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc220 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc220 = FUN_140002ddd(FUN_14660aad1,uVar1,L"OakWidgetData_VendingMachine");
  }
  return;
}



// FUNCTION 148c962ac FUN_148c962ac body=162 status=ok
// SIG undefined FUN_148c962ac(void)

void FUN_148c962ac(longlong param_1)

{
  FUN_145d24fc7(*(undefined8 *)(param_1 + 0xbf0),*(undefined4 *)(param_1 + 0xbf8));
  if (*(longlong *)(param_1 + 0xbf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xbd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xbd8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xbc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xbc8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 3000) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 3000) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xba8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xb90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b3782(param_1);
  return;
}



// FUNCTION 148c9634e FUN_148c9634e body=606 status=ok
// SIG undefined FUN_148c9634e(void)

longlong FUN_148c9634e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_148c6ad5e();
  *(undefined2 *)(param_1 + 0xb50) = *(undefined2 *)(param_2 + 0xb50);
  if (*(int *)(param_1 + 0xb58) != *(int *)(param_2 + 0xb58)) {
    *(undefined1 *)(param_1 + 0xb54) = *(undefined1 *)(param_2 + 0xb54);
    *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  }
  if (*(int *)(param_1 + 0xb60) != *(int *)(param_2 + 0xb60)) {
    *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0xb5c);
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0xb60);
  }
  if (*(int *)(param_1 + 0xb78) != *(int *)(param_2 + 0xb78)) {
    FUN_144a787a6(param_1 + 0xb68,param_2 + 0xb68);
    *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  }
  if (*(int *)(param_1 + 0xb84) != *(int *)(param_2 + 0xb84)) {
    *(undefined1 *)(param_1 + 0xb80) = *(undefined1 *)(param_2 + 0xb80);
    *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_2 + 0xb84);
  }
  if (*(int *)(param_1 + 0xb8c) != *(int *)(param_2 + 0xb8c)) {
    *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
    *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0xb8c);
  }
  FUN_148c6b26e(param_1 + 0xb90,param_2 + 0xb90);
  *(undefined8 *)(param_1 + 0xba0) = *(undefined8 *)(param_2 + 0xba0);
  plVar1 = *(longlong **)(param_2 + 0xba8);
  plVar2 = *(longlong **)(param_1 + 0xba8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xba8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0xbb0);
  plVar1 = *(longlong **)(param_2 + 3000);
  plVar2 = *(longlong **)(param_1 + 3000);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 3000) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_2 + 0xbc0);
  plVar1 = *(longlong **)(param_2 + 0xbc8);
  plVar2 = *(longlong **)(param_1 + 0xbc8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xbc8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_2 + 0xbd0);
  plVar1 = *(longlong **)(param_2 + 0xbd8);
  plVar2 = *(longlong **)(param_1 + 0xbd8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xbd8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xbe0) = *(undefined4 *)(param_2 + 0xbe0);
  *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(param_2 + 0xbe8);
  if ((*(int *)(param_1 + 0xc00) == 0) || (*(int *)(param_1 + 0xc00) != *(int *)(param_2 + 0xc00)))
  {
    *(int *)(param_1 + 0xc00) = *(int *)(param_2 + 0xc00);
    FUN_148c813ae(param_1 + 0xbf0,param_2 + 0xbf0);
  }
  *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(param_2 + 0xc10);
  *(undefined8 *)(param_1 + 0xc08) = *(undefined8 *)(param_2 + 0xc08);
  return param_1;
}



// FUNCTION 148c96b42 FUN_148c96b42 body=158 status=ok
// SIG undefined FUN_148c96b42(void)

void FUN_148c96b42(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148eff104(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c96bfc FUN_148c96bfc body=126 status=ok
// SIG undefined FUN_148c96bfc(void)

void FUN_148c96bfc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_23 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcb18);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c96c88 FUN_148c96c88 body=427 status=ok
// SIG undefined FUN_148c96c88(void)

void FUN_148c96c88(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  (**(code **)(*param_1 + 0x7f8))(param_1,local_28,local_2c,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c96e34 FUN_148c96e34 body=158 status=ok
// SIG undefined FUN_148c96e34(void)

void FUN_148c96e34(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7b8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c96ed4 FUN_148c96ed4 body=115 status=ok
// SIG undefined FUN_148c96ed4(void)

void FUN_148c96ed4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcb38);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c96f4e FUN_148c96f4e body=333 status=ok
// SIG undefined FUN_148c96f4e(void)

void FUN_148c96f4e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x810))(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9709c FUN_148c9709c body=112 status=ok
// SIG undefined FUN_148c9709c(void)

void FUN_148c9709c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcb48);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9710e FUN_148c9710e body=241 status=ok
// SIG undefined FUN_148c9710e(void)

void FUN_148c9710e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7f0))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97210 FUN_148c97210 body=648 status=ok
// SIG undefined FUN_148c97210(void)

void FUN_148c97210(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_168;
  int local_15c;
  int local_158;
  undefined4 local_154;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  local_154 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_154);
  }
  local_158 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  iVar1 = local_158;
  local_15c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_15c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_15c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_15c != 0;
  local_170 = iVar1 != 0;
  local_178 = local_154;
  (**(code **)(*param_1 + 0x858))(param_1,local_38,local_50,local_150);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c974b0 FUN_148c974b0 body=47 status=ok
// SIG undefined FUN_148c974b0(void)

void FUN_148c974b0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbbcb98);
                    /* WARNING: Could not recover jumptable at 0x000148c974dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c974e0 FUN_148c974e0 body=72 status=ok
// SIG undefined FUN_148c974e0(void)

void FUN_148c974e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x838))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148c97510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x840))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerCancelFreeBoost_Validate");
  return;
}



// FUNCTION 148c97586 FUN_148c97586 body=198 status=ok
// SIG undefined FUN_148c97586(void)

void FUN_148c97586(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x828))(param_1,local_20);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerEnterVehicle_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x830))(param_1,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9764e FUN_148c9764e body=126 status=ok
// SIG undefined FUN_148c9764e(void)

void FUN_148c9764e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_23 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcbc8);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c976da FUN_148c976da body=481 status=ok
// SIG undefined FUN_148c976da(void)

void FUN_148c976da(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  cVar3 = (**(code **)(*param_1 + 0x7e0))(param_1,local_30,local_34,iVar2 != 0);
  if (cVar3 == '\0') {
    FUN_1468998ea(L"ServerLockWeaponActions_Validate");
  }
  else {
    local_48 = iVar1 != 0;
    (**(code **)(*param_1 + 0x7e8))(param_1,local_30,local_34,iVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c978bc FUN_148c978bc body=47 status=ok
// SIG undefined FUN_148c978bc(void)

void FUN_148c978bc(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbbcbd8);
                    /* WARNING: Could not recover jumptable at 0x000148c978e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c978ec FUN_148c978ec body=72 status=ok
// SIG undefined FUN_148c978ec(void)

void FUN_148c978ec(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x848))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148c9791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x850))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerRecomputeBoostCost_Validate");
  return;
}



// FUNCTION 148c97934 FUN_148c97934 body=100 status=ok
// SIG undefined FUN_148c97934(void)

void FUN_148c97934(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbbcbe8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9799a FUN_148c9799a body=376 status=ok
// SIG undefined FUN_148c9799a(void)

void FUN_148c9799a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x7c0))(param_1,local_20,local_24,local_28);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetCurrentWeapon_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7c8))(param_1,local_20,local_24,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97b14 FUN_148c97b14 body=115 status=ok
// SIG undefined FUN_148c97b14(void)

void FUN_148c97b14(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcc08);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97b8e FUN_148c97b8e body=381 status=ok
// SIG undefined FUN_148c97b8e(void)

void FUN_148c97b8e(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x800))(param_1,local_24,local_28,local_2c != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerStopWeaponActions_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x808))(param_1,local_24,local_28,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97d0c FUN_148c97d0c body=112 status=ok
// SIG undefined FUN_148c97d0c(void)

void FUN_148c97d0c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  uVar1 = FUN_14477b072(param_1 + -0x510,DAT_14cbbcc18);
  (**(code **)(*(longlong *)(param_1 + -0x510) + 0x248))(param_1 + -0x510,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97d7e FUN_148c97d7e body=289 status=ok
// SIG undefined FUN_148c97d7e(void)

void FUN_148c97d7e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 2000))(param_1,local_20,local_24);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerUnlockWeaponActions_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7d8))(param_1,local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97ea0 FUN_148c97ea0 body=156 status=ok
// SIG undefined FUN_148c97ea0(void)

void FUN_148c97ea0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd76b2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c97f7c FUN_148c97f7c body=48 status=ok
// SIG undefined FUN_148c97f7c(void)

longlong FUN_148c97f7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c97fb4 FUN_148c97fb4 body=48 status=ok
// SIG undefined FUN_148c97fb4(void)

longlong FUN_148c97fb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c97fec FUN_148c97fec body=48 status=ok
// SIG undefined FUN_148c97fec(void)

longlong FUN_148c97fec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98024 FUN_148c98024 body=48 status=ok
// SIG undefined FUN_148c98024(void)

longlong FUN_148c98024(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98054 FUN_148c98054 body=48 status=ok
// SIG undefined FUN_148c98054(void)

longlong FUN_148c98054(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9808c FUN_148c9808c body=48 status=ok
// SIG undefined FUN_148c9808c(void)

longlong FUN_148c9808c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c980bc FUN_148c980bc body=48 status=ok
// SIG undefined FUN_148c980bc(void)

longlong FUN_148c980bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c980f4 FUN_148c980f4 body=48 status=ok
// SIG undefined FUN_148c980f4(void)

longlong FUN_148c980f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98124 FUN_148c98124 body=48 status=ok
// SIG undefined FUN_148c98124(void)

longlong FUN_148c98124(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9815c FUN_148c9815c body=48 status=ok
// SIG undefined FUN_148c9815c(void)

longlong FUN_148c9815c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c981a4 FUN_148c981a4 body=48 status=ok
// SIG undefined FUN_148c981a4(void)

longlong FUN_148c981a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c981dc FUN_148c981dc body=48 status=ok
// SIG undefined FUN_148c981dc(void)

longlong FUN_148c981dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9820c FUN_148c9820c body=48 status=ok
// SIG undefined FUN_148c9820c(void)

longlong FUN_148c9820c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98244 FUN_148c98244 body=48 status=ok
// SIG undefined FUN_148c98244(void)

longlong FUN_148c98244(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9827c FUN_148c9827c body=48 status=ok
// SIG undefined FUN_148c9827c(void)

longlong FUN_148c9827c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c982b4 FUN_148c982b4 body=48 status=ok
// SIG undefined FUN_148c982b4(void)

longlong FUN_148c982b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c982ec FUN_148c982ec body=48 status=ok
// SIG undefined FUN_148c982ec(void)

longlong FUN_148c982ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98324 FUN_148c98324 body=48 status=ok
// SIG undefined FUN_148c98324(void)

longlong FUN_148c98324(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9835c FUN_148c9835c body=48 status=ok
// SIG undefined FUN_148c9835c(void)

longlong FUN_148c9835c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98394 FUN_148c98394 body=48 status=ok
// SIG undefined FUN_148c98394(void)

longlong FUN_148c98394(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c983cc FUN_148c983cc body=48 status=ok
// SIG undefined FUN_148c983cc(void)

longlong FUN_148c983cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98404 FUN_148c98404 body=48 status=ok
// SIG undefined FUN_148c98404(void)

longlong FUN_148c98404(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9844c FUN_148c9844c body=48 status=ok
// SIG undefined FUN_148c9844c(void)

longlong FUN_148c9844c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98484 FUN_148c98484 body=48 status=ok
// SIG undefined FUN_148c98484(void)

longlong FUN_148c98484(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c984bc FUN_148c984bc body=48 status=ok
// SIG undefined FUN_148c984bc(void)

longlong FUN_148c984bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c984f4 FUN_148c984f4 body=48 status=ok
// SIG undefined FUN_148c984f4(void)

longlong FUN_148c984f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9852c FUN_148c9852c body=48 status=ok
// SIG undefined FUN_148c9852c(void)

longlong FUN_148c9852c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98564 FUN_148c98564 body=48 status=ok
// SIG undefined FUN_148c98564(void)

longlong FUN_148c98564(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98594 FUN_148c98594 body=48 status=ok
// SIG undefined FUN_148c98594(void)

longlong FUN_148c98594(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c985c4 FUN_148c985c4 body=48 status=ok
// SIG undefined FUN_148c985c4(void)

longlong FUN_148c985c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c985fc FUN_148c985fc body=48 status=ok
// SIG undefined FUN_148c985fc(void)

longlong FUN_148c985fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2640;
  FUN_141309cc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9864e FUN_148c9864e body=48 status=ok
// SIG undefined FUN_148c9864e(void)

longlong FUN_148c9864e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98686 FUN_148c98686 body=48 status=ok
// SIG undefined FUN_148c98686(void)

longlong FUN_148c98686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c986b6 FUN_148c986b6 body=48 status=ok
// SIG undefined FUN_148c986b6(void)

longlong FUN_148c986b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c986f6 FUN_148c986f6 body=48 status=ok
// SIG undefined FUN_148c986f6(void)

longlong FUN_148c986f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98736 FUN_148c98736 body=48 status=ok
// SIG undefined FUN_148c98736(void)

longlong FUN_148c98736(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98766 FUN_148c98766 body=48 status=ok
// SIG undefined FUN_148c98766(void)

longlong FUN_148c98766(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9879a FUN_148c9879a body=48 status=ok
// SIG undefined FUN_148c9879a(void)

longlong FUN_148c9879a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c987ca FUN_148c987ca body=48 status=ok
// SIG undefined FUN_148c987ca(void)

longlong FUN_148c987ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4c0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98802 FUN_148c98802 body=157 status=ok
// SIG undefined FUN_148c98802(void)

undefined8 FUN_148c98802(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x1138,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c988a0 FUN_148c988a0 body=48 status=ok
// SIG undefined FUN_148c988a0(void)

longlong FUN_148c988a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4c8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c988d8 FUN_148c988d8 body=48 status=ok
// SIG undefined FUN_148c988d8(void)

longlong FUN_148c988d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98908 FUN_148c98908 body=48 status=ok
// SIG undefined FUN_148c98908(void)

longlong FUN_148c98908(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98940 FUN_148c98940 body=48 status=ok
// SIG undefined FUN_148c98940(void)

longlong FUN_148c98940(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4e0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98978 FUN_148c98978 body=48 status=ok
// SIG undefined FUN_148c98978(void)

longlong FUN_148c98978(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4e8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c989b0 FUN_148c989b0 body=48 status=ok
// SIG undefined FUN_148c989b0(void)

longlong FUN_148c989b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4f0;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c989e8 FUN_148c989e8 body=48 status=ok
// SIG undefined FUN_148c989e8(void)

longlong FUN_148c989e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4f8;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98a38 FUN_148c98a38 body=48 status=ok
// SIG undefined FUN_148c98a38(void)

longlong FUN_148c98a38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x500;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98a70 FUN_148c98a70 body=48 status=ok
// SIG undefined FUN_148c98a70(void)

longlong FUN_148c98a70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x508;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98aa8 FUN_148c98aa8 body=48 status=ok
// SIG undefined FUN_148c98aa8(void)

longlong FUN_148c98aa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x510;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98ae0 FUN_148c98ae0 body=48 status=ok
// SIG undefined FUN_148c98ae0(void)

longlong FUN_148c98ae0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x518;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98b28 FUN_148c98b28 body=48 status=ok
// SIG undefined FUN_148c98b28(void)

longlong FUN_148c98b28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98b60 FUN_148c98b60 body=48 status=ok
// SIG undefined FUN_148c98b60(void)

longlong FUN_148c98b60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98b90 FUN_148c98b90 body=48 status=ok
// SIG undefined FUN_148c98b90(void)

longlong FUN_148c98b90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_14157e22c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98bc0 FUN_148c98bc0 body=48 status=ok
// SIG undefined FUN_148c98bc0(void)

longlong FUN_148c98bc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x568;
  FUN_140945f4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c98bf0 FUN_148c98bf0 body=74 status=ok
// SIG undefined FUN_148c98bf0(void)

void FUN_148c98bf0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,600);
  FUN_1459653a2(param_2);
  *param_2 = &PTR_FUN_14b8d6c00;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined4 *)(param_2 + 0x49) = 0;
  return;
}



// FUNCTION 148c98c3a FUN_148c98c3a body=56 status=ok
// SIG undefined FUN_148c98c3a(void)

void FUN_148c98c3a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459653a2(param_2);
  *param_2 = &PTR_FUN_14b8d6c00;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined4 *)(param_2 + 0x49) = 0;
  return;
}



// FUNCTION 148c98c96 FUN_148c98c96 body=63 status=ok
// SIG undefined FUN_148c98c96(void)

undefined1 FUN_148c98c96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c98dfa(param_2,param_3);
    param_3 = param_3 + 600;
    param_2 = param_2 + 600;
  }
  return 1;
}



// FUNCTION 148c98cfe FUN_148c98cfe body=59 status=ok
// SIG undefined FUN_148c98cfe(void)

undefined8 FUN_148c98cfe(longlong *param_1)

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



// FUNCTION 148c98d4a FUN_148c98d4a body=40 status=ok
// SIG undefined FUN_148c98d4a(void)

void FUN_148c98d4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 600) == '\x01') {
    FUN_145c677a8(param_2);
    *(undefined1 *)(param_2 + 600) = 0;
  }
  return;
}



// FUNCTION 148c98dc0 FUN_148c98dc0 body=57 status=ok
// SIG undefined FUN_148c98dc0(void)

void FUN_148c98dc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc398 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc398 = FUN_140002ddd(FUN_14660b073,uVar1,L"OakWidgetData_VendingNavBar");
  }
  return;
}



// FUNCTION 148c98dfa FUN_148c98dfa body=84 status=ok
// SIG undefined FUN_148c98dfa(void)

longlong FUN_148c98dfa(longlong param_1,longlong param_2)

{
  FUN_148c89616();
  if ((*(int *)(param_1 + 0x248) == 0) || (*(int *)(param_1 + 0x248) != *(int *)(param_2 + 0x248)))
  {
    *(int *)(param_1 + 0x248) = *(int *)(param_2 + 0x248);
    FUN_14572901c(param_1 + 0x238,param_2 + 0x238);
  }
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  return param_1;
}



// FUNCTION 148c98e4e FUN_148c98e4e body=115 status=ok
// SIG undefined FUN_148c98e4e(void)

void FUN_148c98e4e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c98ec1 FUN_148c98ec1 body=52 status=ok
// SIG undefined FUN_148c98ec1(void)

void FUN_148c98ec1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c98ef6(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c98ef6 FUN_148c98ef6 body=126 status=ok
// SIG undefined FUN_148c98ef6(void)

undefined8 * FUN_148c98ef6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  *param_1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  param_1[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c98f76 FUN_148c98f76 body=68 status=ok
// SIG undefined FUN_148c98f76(void)

void FUN_148c98f76(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8d6d90;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c98fba FUN_148c98fba body=52 status=ok
// SIG undefined FUN_148c98fba(void)

void FUN_148c98fba(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8d6d90;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c99012 FUN_148c99012 body=63 status=ok
// SIG undefined FUN_148c99012(void)

undefined1 FUN_148c99012(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9913c(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c9907a FUN_148c9907a body=59 status=ok
// SIG undefined FUN_148c9907a(void)

undefined8 FUN_148c9907a(longlong *param_1)

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



// FUNCTION 148c990c6 FUN_148c990c6 body=40 status=ok
// SIG undefined FUN_148c990c6(void)

void FUN_148c990c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145c5ba28(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c9913c FUN_148c9913c body=74 status=ok
// SIG undefined FUN_148c9913c(void)

longlong FUN_148c9913c(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
    FUN_1458fe424(param_1 + 0xb0,param_2 + 0xb0);
  }
  return param_1;
}



// FUNCTION 148c991e2 FUN_148c991e2 body=86 status=ok
// SIG undefined FUN_148c991e2(void)

undefined8 FUN_148c991e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      if (*(int *)(param_2 + -4) != *(int *)(param_3 + -4)) {
        *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
        *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4);
      }
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c99260 FUN_148c99260 body=59 status=ok
// SIG undefined FUN_148c99260(void)

undefined8 FUN_148c99260(longlong *param_1)

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



// FUNCTION 148c992a6 FUN_148c992a6 body=38 status=ok
// SIG undefined FUN_148c992a6(void)

void FUN_148c992a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c9931c FUN_148c9931c body=37 status=ok
// SIG undefined FUN_148c9931c(void)

void FUN_148c9931c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2f8);
  FUN_1416950ee(param_2);
  return;
}



// FUNCTION 148c9936e FUN_148c9936e body=63 status=ok
// SIG undefined FUN_148c9936e(void)

undefined1 FUN_148c9936e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14408b46a(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148c993d6 FUN_148c993d6 body=59 status=ok
// SIG undefined FUN_148c993d6(void)

undefined8 FUN_148c993d6(longlong *param_1)

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



// FUNCTION 148c99422 FUN_148c99422 body=38 status=ok
// SIG undefined FUN_148c99422(void)

void FUN_148c99422(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_1415e6fa0(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 148c99496 FUN_148c99496 body=95 status=ok
// SIG undefined FUN_148c99496(void)

undefined8 * FUN_148c99496(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145846df0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c994f6(param_1,iVar1);
      FUN_148c99569(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c994f6 FUN_148c994f6 body=115 status=ok
// SIG undefined FUN_148c994f6(void)

void FUN_148c994f6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    iVar2 = (int)(uVar1 / 0x120);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x120,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c99569 FUN_148c99569 body=60 status=ok
// SIG undefined FUN_148c99569(void)

void FUN_148c99569(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14576e226(param_1,param_2);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return;
}



// FUNCTION 148c9962c FUN_148c9962c body=59 status=ok
// SIG undefined FUN_148c9962c(void)

undefined8 FUN_148c9962c(longlong *param_1)

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



// FUNCTION 148c996ce FUN_148c996ce body=37 status=ok
// SIG undefined FUN_148c996ce(void)

void FUN_148c996ce(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_14660c4b6(param_2);
  return;
}



// FUNCTION 148c9971a FUN_148c9971a body=63 status=ok
// SIG undefined FUN_148c9971a(void)

undefined1 FUN_148c9971a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c99842(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c99782 FUN_148c99782 body=59 status=ok
// SIG undefined FUN_148c99782(void)

undefined8 FUN_148c99782(longlong *param_1)

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



// FUNCTION 148c997ce FUN_148c997ce body=38 status=ok
// SIG undefined FUN_148c997ce(void)

void FUN_148c997ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14151928e(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148c99842 FUN_148c99842 body=301 status=ok
// SIG undefined FUN_148c99842(void)

undefined1 * FUN_148c99842(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_140bee9ec(param_1 + 0x30,param_2 + 0x30);
  param_1[0x40] = param_2[0x40];
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  param_1[0x68] = param_2[0x68];
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  param_1[0x80] = param_2[0x80];
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    param_1[0xf0] = param_2[0xf0];
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  return param_1;
}



// FUNCTION 148c99970 FUN_148c99970 body=114 status=ok
// SIG undefined FUN_148c99970(void)

void FUN_148c99970(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x110);
  FUN_1408f3f9e(param_2);
  param_2[0x1a] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f19999a;
  *param_2 = &PTR_FUN_14b8d74e0;
  *(undefined1 *)(param_2 + 0x1c) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 148c999e2 FUN_148c999e2 body=98 status=ok
// SIG undefined FUN_148c999e2(void)

void FUN_148c999e2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  param_2[0x1a] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f19999a;
  *param_2 = &PTR_FUN_14b8d74e0;
  *(undefined1 *)(param_2 + 0x1c) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 148c99a68 FUN_148c99a68 body=63 status=ok
// SIG undefined FUN_148c99a68(void)

undefined1 FUN_148c99a68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c99bcc(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148c99ad0 FUN_148c99ad0 body=59 status=ok
// SIG undefined FUN_148c99ad0(void)

undefined8 FUN_148c99ad0(longlong *param_1)

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



// FUNCTION 148c99b1c FUN_148c99b1c body=40 status=ok
// SIG undefined FUN_148c99b1c(void)

void FUN_148c99b1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_145c99f74(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c99b92 FUN_148c99b92 body=57 status=ok
// SIG undefined FUN_148c99b92(void)

void FUN_148c99b92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc890 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc890 = FUN_140002ddd(FUN_14660b3c0,uVar1,L"OakWidgetData_WeaponWheel");
  }
  return;
}



// FUNCTION 148c99bcc FUN_148c99bcc body=190 status=ok
// SIG undefined FUN_148c99bcc(void)

longlong FUN_148c99bcc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 200) != *(int *)(param_2 + 200)) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    uVar1 = *(undefined4 *)(param_2 + 0xb4);
    uVar2 = *(undefined4 *)(param_2 + 0xb8);
    uVar3 = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = uVar1;
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  }
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  FUN_148c99c8a(param_1 + 0xe8,param_2 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  return param_1;
}



// FUNCTION 148c99c8a FUN_148c99c8a body=95 status=ok
// SIG undefined FUN_148c99c8a(void)

undefined8 * FUN_148c99c8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c99fb8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c99cea(param_1,iVar1);
      FUN_148c99d60(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c99cea FUN_148c99cea body=118 status=ok
// SIG undefined FUN_148c99cea(void)

void FUN_148c99cea(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    iVar2 = (int)(uVar1 / 0xf8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c99d60 FUN_148c99d60 body=60 status=ok
// SIG undefined FUN_148c99d60(void)

void FUN_148c99d60(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14408bd36(param_1,param_2);
    param_1 = param_1 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return;
}



// FUNCTION 148c99d9e FUN_148c99d9e body=37 status=ok
// SIG undefined FUN_148c99d9e(void)

void FUN_148c99d9e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x198);
  FUN_1415823c8(param_2);
  return;
}



// FUNCTION 148c99df0 FUN_148c99df0 body=63 status=ok
// SIG undefined FUN_148c99df0(void)

undefined1 FUN_148c99df0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c99f76(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 148c99e58 FUN_148c99e58 body=59 status=ok
// SIG undefined FUN_148c99e58(void)

undefined8 FUN_148c99e58(longlong *param_1)

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



// FUNCTION 148c99ea4 FUN_148c99ea4 body=38 status=ok
// SIG undefined FUN_148c99ea4(void)

void FUN_148c99ea4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_140963198(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}


