// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14979c4e0 FUN_14979c4e0 body=905 status=ok
// SIG undefined FUN_14979c4e0(void)

undefined8 * FUN_14979c4e0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be210b0;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c0 = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x264);
  local_b0 = param_1 + 0x4d;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x26c);
  *(undefined1 *)(param_1 + 0x4e) = 1;
  local_a0 = param_1 + 0x4f;
  local_98 = param_1 + 0x51;
  local_90 = param_1 + 0x53;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x80;
  local_88 = param_1 + 0x57;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x40;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979c86a FUN_14979c86a body=25 status=ok
// SIG undefined FUN_14979c86a(void)

undefined8 FUN_14979c86a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979c8a2 FUN_14979c8a2 body=22 status=ok
// SIG undefined FUN_14979c8a2(void)

undefined8 FUN_14979c8a2(undefined8 param_1)

{
  FUN_14979c8b8();
  return param_1;
}



// FUNCTION 14979c8b8 FUN_14979c8b8 body=153 status=ok
// SIG undefined FUN_14979c8b8(void)

undefined8 * FUN_14979c8b8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x278,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979c952(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979c952 FUN_14979c952 body=1032 status=ok
// SIG undefined FUN_14979c952(void)

undefined8 * FUN_14979c952(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be21350;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3ff0000000000000;
  local_d0 = param_1 + 0x3f;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  local_c8 = param_1 + 0x40;
  local_c0 = param_1 + 0x43;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x21c);
  local_b0 = param_1 + 0x44;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x224);
  *(undefined1 *)(param_1 + 0x45) = 1;
  local_a0 = param_1 + 0x46;
  local_90 = param_1 + 0x48;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x80;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_98 = param_1 + 0x4a;
  local_88 = param_1 + 0x4e;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979cd5c FUN_14979cd5c body=25 status=ok
// SIG undefined FUN_14979cd5c(void)

undefined8 FUN_14979cd5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979cd94 FUN_14979cd94 body=22 status=ok
// SIG undefined FUN_14979cd94(void)

undefined8 FUN_14979cd94(undefined8 param_1)

{
  FUN_14979cdaa();
  return param_1;
}



// FUNCTION 14979cdaa FUN_14979cdaa body=153 status=ok
// SIG undefined FUN_14979cdaa(void)

undefined8 * FUN_14979cdaa(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x238,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979ce44(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979ce44 FUN_14979ce44 body=668 status=ok
// SIG undefined FUN_14979ce44(void)

undefined8 * FUN_14979ce44(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be21740;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_a8 = param_1 + 0x40;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 1;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x204);
  *(undefined1 *)(param_1 + 0x41) = 0;
  local_98 = param_1 + 0x42;
  local_90 = param_1 + 0x44;
  local_88 = param_1 + 0x46;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d0e2 FUN_14979d0e2 body=25 status=ok
// SIG undefined FUN_14979d0e2(void)

undefined8 FUN_14979d0e2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979d11a FUN_14979d11a body=22 status=ok
// SIG undefined FUN_14979d11a(void)

undefined8 FUN_14979d11a(undefined8 param_1)

{
  FUN_14979d130();
  return param_1;
}



// FUNCTION 14979d130 FUN_14979d130 body=153 status=ok
// SIG undefined FUN_14979d130(void)

undefined8 * FUN_14979d130(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979d1ca(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d1ca FUN_14979d1ca body=452 status=ok
// SIG undefined FUN_14979d1ca(void)

undefined8 * FUN_14979d1ca(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be219f0;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  local_90 = param_1 + 0x3c;
  local_88 = param_1 + 0x3e;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d390 FUN_14979d390 body=25 status=ok
// SIG undefined FUN_14979d390(void)

undefined8 FUN_14979d390(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979d3c8 FUN_14979d3c8 body=22 status=ok
// SIG undefined FUN_14979d3c8(void)

undefined8 FUN_14979d3c8(undefined8 param_1)

{
  FUN_14979d3de();
  return param_1;
}



// FUNCTION 14979d3de FUN_14979d3de body=153 status=ok
// SIG undefined FUN_14979d3de(void)

undefined8 * FUN_14979d3de(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x210,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979d478(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d478 FUN_14979d478 body=530 status=ok
// SIG undefined FUN_14979d478(void)

undefined8 * FUN_14979d478(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be21ca0;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  param_1[0x3a] = 0x3ff0000000000000;
  local_98 = param_1 + 0x3d;
  local_90 = param_1 + 0x3f;
  local_88 = param_1 + 0x41;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d68c FUN_14979d68c body=25 status=ok
// SIG undefined FUN_14979d68c(void)

undefined8 FUN_14979d68c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979d6c4 FUN_14979d6c4 body=22 status=ok
// SIG undefined FUN_14979d6c4(void)

undefined8 FUN_14979d6c4(undefined8 param_1)

{
  FUN_14979d6da();
  return param_1;
}



// FUNCTION 14979d6da FUN_14979d6da body=153 status=ok
// SIG undefined FUN_14979d6da(void)

undefined8 * FUN_14979d6da(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x210,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979d774(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d774 FUN_14979d774 body=516 status=ok
// SIG undefined FUN_14979d774(void)

undefined8 * FUN_14979d774(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be21f50;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  local_98 = param_1 + 0x3d;
  local_90 = param_1 + 0x3f;
  local_88 = param_1 + 0x41;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979d97a FUN_14979d97a body=25 status=ok
// SIG undefined FUN_14979d97a(void)

undefined8 FUN_14979d97a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979d9b2 FUN_14979d9b2 body=22 status=ok
// SIG undefined FUN_14979d9b2(void)

undefined8 FUN_14979d9b2(undefined8 param_1)

{
  FUN_14979d9c8();
  return param_1;
}



// FUNCTION 14979d9c8 FUN_14979d9c8 body=153 status=ok
// SIG undefined FUN_14979d9c8(void)

undefined8 * FUN_14979d9c8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979da62(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979da62 FUN_14979da62 body=452 status=ok
// SIG undefined FUN_14979da62(void)

undefined8 * FUN_14979da62(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be22200;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  local_90 = param_1 + 0x3c;
  local_88 = param_1 + 0x3e;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979dc28 FUN_14979dc28 body=25 status=ok
// SIG undefined FUN_14979dc28(void)

undefined8 FUN_14979dc28(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979dc60 FUN_14979dc60 body=22 status=ok
// SIG undefined FUN_14979dc60(void)

undefined8 FUN_14979dc60(undefined8 param_1)

{
  FUN_14979dc76();
  return param_1;
}



// FUNCTION 14979dc76 FUN_14979dc76 body=153 status=ok
// SIG undefined FUN_14979dc76(void)

undefined8 * FUN_14979dc76(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x260,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979dd10(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979dd10 FUN_14979dd10 body=603 status=ok
// SIG undefined FUN_14979dd10(void)

undefined8 * FUN_14979dd10(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be224b0;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0x3f80000000000000;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x1cc);
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_98 = param_1 + 0x46;
  local_90 = param_1 + 0x48;
  local_88 = param_1 + 0x4a;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979df6c FUN_14979df6c body=25 status=ok
// SIG undefined FUN_14979df6c(void)

undefined8 FUN_14979df6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979dfa4 FUN_14979dfa4 body=22 status=ok
// SIG undefined FUN_14979dfa4(void)

undefined8 FUN_14979dfa4(undefined8 param_1)

{
  FUN_14979dfba();
  return param_1;
}



// FUNCTION 14979dfba FUN_14979dfba body=153 status=ok
// SIG undefined FUN_14979dfba(void)

undefined8 * FUN_14979dfba(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979e054(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e054 FUN_14979e054 body=446 status=ok
// SIG undefined FUN_14979e054(void)

undefined8 * FUN_14979e054(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be22740;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x80;
  local_90 = param_1 + 0x3c;
  local_88 = param_1 + 0x3e;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e214 FUN_14979e214 body=25 status=ok
// SIG undefined FUN_14979e214(void)

undefined8 FUN_14979e214(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979e24c FUN_14979e24c body=22 status=ok
// SIG undefined FUN_14979e24c(void)

undefined8 FUN_14979e24c(undefined8 param_1)

{
  FUN_14979e262();
  return param_1;
}



// FUNCTION 14979e262 FUN_14979e262 body=153 status=ok
// SIG undefined FUN_14979e262(void)

undefined8 * FUN_14979e262(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x238,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979e2fc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e2fc FUN_14979e2fc body=727 status=ok
// SIG undefined FUN_14979e2fc(void)

undefined8 * FUN_14979e2fc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be22b40;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  local_b0 = param_1 + 0x3d;
  local_a8 = param_1 + 0x40;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f800000447a0000;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x204);
  *(undefined2 *)(param_1 + 0x41) = 0x100;
  local_98 = param_1 + 0x42;
  local_90 = param_1 + 0x44;
  local_88 = param_1 + 0x46;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e5d4 FUN_14979e5d4 body=25 status=ok
// SIG undefined FUN_14979e5d4(void)

undefined8 FUN_14979e5d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979e60c FUN_14979e60c body=22 status=ok
// SIG undefined FUN_14979e60c(void)

undefined8 FUN_14979e60c(undefined8 param_1)

{
  FUN_14979e622();
  return param_1;
}



// FUNCTION 14979e622 FUN_14979e622 body=153 status=ok
// SIG undefined FUN_14979e622(void)

undefined8 * FUN_14979e622(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979e6bc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e6bc FUN_14979e6bc body=454 status=ok
// SIG undefined FUN_14979e6bc(void)

undefined8 * FUN_14979e6bc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be23000;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 2;
  local_90 = param_1 + 0x3c;
  local_88 = param_1 + 0x3e;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e884 FUN_14979e884 body=25 status=ok
// SIG undefined FUN_14979e884(void)

undefined8 FUN_14979e884(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979e8bc FUN_14979e8bc body=22 status=ok
// SIG undefined FUN_14979e8bc(void)

undefined8 FUN_14979e8bc(undefined8 param_1)

{
  FUN_14979e8d2();
  return param_1;
}



// FUNCTION 14979e8d2 FUN_14979e8d2 body=153 status=ok
// SIG undefined FUN_14979e8d2(void)

undefined8 * FUN_14979e8d2(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x220,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979e96c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979e96c FUN_14979e96c body=642 status=ok
// SIG undefined FUN_14979e96c(void)

undefined8 * FUN_14979e96c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be23490;
  local_60 = param_1 + 0x33;
  local_a8 = param_1 + 0x3b;
  local_a0 = param_1 + 0x3d;
  local_98 = param_1 + 0x3f;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 2;
  local_90 = param_1 + 0x40;
  local_88 = param_1 + 0x42;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979ebf0 FUN_14979ebf0 body=25 status=ok
// SIG undefined FUN_14979ebf0(void)

undefined8 FUN_14979ebf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979ec28 FUN_14979ec28 body=22 status=ok
// SIG undefined FUN_14979ec28(void)

undefined8 FUN_14979ec28(undefined8 param_1)

{
  FUN_14979ec3e();
  return param_1;
}



// FUNCTION 14979ec3e FUN_14979ec3e body=153 status=ok
// SIG undefined FUN_14979ec3e(void)

undefined8 * FUN_14979ec3e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979ecd8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979ecd8 FUN_14979ecd8 body=313 status=ok
// SIG undefined FUN_14979ecd8(void)

undefined8 * FUN_14979ecd8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be23740;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979ee12 FUN_14979ee12 body=25 status=ok
// SIG undefined FUN_14979ee12(void)

undefined8 FUN_14979ee12(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979ee4a FUN_14979ee4a body=311 status=ok
// SIG undefined FUN_14979ee4a(void)

longlong FUN_14979ee4a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14979ef82(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979ef82 FUN_14979ef82 body=210 status=ok
// SIG undefined FUN_14979ef82(void)

void FUN_14979ef82(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar9 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar9;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c480;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(local_48 + 9) = param_4[4];
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar6;
  *(undefined4 *)(local_48 + 10) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar8;
  *(undefined4 *)(local_48 + 7) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
  *(undefined4 *)(local_48 + 8) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f056 FUN_14979f056 body=29 status=ok
// SIG undefined FUN_14979f056(void)

undefined8 FUN_14979f056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979f074 FUN_14979f074 body=101 status=ok
// SIG undefined FUN_14979f074(void)

undefined8 * FUN_14979f074(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c490;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14979f0da FUN_14979f0da body=29 status=ok
// SIG undefined FUN_14979f0da(void)

undefined8 FUN_14979f0da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979f0f8 FUN_14979f0f8 body=101 status=ok
// SIG undefined FUN_14979f0f8(void)

undefined8 * FUN_14979f0f8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c490;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14979f15e FUN_14979f15e body=311 status=ok
// SIG undefined FUN_14979f15e(void)

longlong FUN_14979f15e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14979f296(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f296 FUN_14979f296 body=226 status=ok
// SIG undefined FUN_14979f296(void)

void FUN_14979f296(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
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
  undefined8 uVar13;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar13 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar13;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c4a0;
  local_48[0xd] = *(undefined8 *)(param_4 + 0xc);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(local_48 + 0xb) = param_4[8];
  *(undefined4 *)((longlong)local_48 + 0x5c) = uVar10;
  *(undefined4 *)(local_48 + 0xc) = uVar11;
  *(undefined4 *)((longlong)local_48 + 100) = uVar12;
  *(undefined4 *)(local_48 + 9) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar7;
  *(undefined4 *)(local_48 + 10) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar9;
  *(undefined4 *)(local_48 + 7) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
  *(undefined4 *)(local_48 + 8) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f37a FUN_14979f37a body=29 status=ok
// SIG undefined FUN_14979f37a(void)

undefined8 FUN_14979f37a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979f398 FUN_14979f398 body=101 status=ok
// SIG undefined FUN_14979f398(void)

undefined8 * FUN_14979f398(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c4b0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14979f3fe FUN_14979f3fe body=29 status=ok
// SIG undefined FUN_14979f3fe(void)

undefined8 FUN_14979f3fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979f41c FUN_14979f41c body=101 status=ok
// SIG undefined FUN_14979f41c(void)

undefined8 * FUN_14979f41c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c4b0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14979f482 FUN_14979f482 body=311 status=ok
// SIG undefined FUN_14979f482(void)

longlong FUN_14979f482(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_149700a22(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x40;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f5ba FUN_14979f5ba body=22 status=ok
// SIG undefined FUN_14979f5ba(void)

undefined8 FUN_14979f5ba(undefined8 param_1)

{
  FUN_14979f5d0();
  return param_1;
}



// FUNCTION 14979f5d0 FUN_14979f5d0 body=153 status=ok
// SIG undefined FUN_14979f5d0(void)

undefined8 * FUN_14979f5d0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979f66a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f66a FUN_14979f66a body=401 status=ok
// SIG undefined FUN_14979f66a(void)

undefined8 * FUN_14979f66a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4da60;
  param_1[0x33] = 0x1400000014;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  local_60 = param_1 + 0x35;
  local_88 = param_1 + 0x3c;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f7fc FUN_14979f7fc body=25 status=ok
// SIG undefined FUN_14979f7fc(void)

undefined8 FUN_14979f7fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979f834 FUN_14979f834 body=22 status=ok
// SIG undefined FUN_14979f834(void)

undefined8 FUN_14979f834(undefined8 param_1)

{
  FUN_14979f84a();
  return param_1;
}



// FUNCTION 14979f84a FUN_14979f84a body=153 status=ok
// SIG undefined FUN_14979f84a(void)

undefined8 * FUN_14979f84a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979f8e4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979f8e4 FUN_14979f8e4 body=401 status=ok
// SIG undefined FUN_14979f8e4(void)

undefined8 * FUN_14979f8e4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4dd20;
  param_1[0x33] = 0x1400000014;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_60 = param_1 + 0x35;
  local_88 = param_1 + 0x3c;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979fa76 FUN_14979fa76 body=25 status=ok
// SIG undefined FUN_14979fa76(void)

undefined8 FUN_14979fa76(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979faae FUN_14979faae body=22 status=ok
// SIG undefined FUN_14979faae(void)

undefined8 FUN_14979faae(undefined8 param_1)

{
  FUN_14979fac4();
  return param_1;
}



// FUNCTION 14979fac4 FUN_14979fac4 body=153 status=ok
// SIG undefined FUN_14979fac4(void)

undefined8 * FUN_14979fac4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979fb5e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979fb5e FUN_14979fb5e body=656 status=ok
// SIG undefined FUN_14979fb5e(void)

undefined8 * FUN_14979fb5e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4dfc0;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x39] = 0x542480000;
  local_a8 = param_1 + 0x3a;
  *(undefined4 *)(param_1 + 0x3a) = 5;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x1d4);
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  local_98 = param_1 + 0x3b;
  local_90 = (undefined8 *)((longlong)param_1 + 0x1dc);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xbf800000;
  local_88 = param_1 + 0x3c;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1cc);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979fdf0 FUN_14979fdf0 body=25 status=ok
// SIG undefined FUN_14979fdf0(void)

undefined8 FUN_14979fdf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14979fe28 FUN_14979fe28 body=22 status=ok
// SIG undefined FUN_14979fe28(void)

undefined8 FUN_14979fe28(undefined8 param_1)

{
  FUN_14979fe3e();
  return param_1;
}



// FUNCTION 14979fe3e FUN_14979fe3e body=153 status=ok
// SIG undefined FUN_14979fe3e(void)

undefined8 * FUN_14979fe3e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x240,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14979fed8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979fed8 FUN_14979fed8 body=1188 status=ok
// SIG undefined FUN_14979fed8(void)

undefined8 * FUN_14979fed8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4e270;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3ff0000000000000;
  param_1[0x40] = 0x500000000;
  local_e0 = (undefined8 *)((longlong)param_1 + 0x204);
  local_d8 = param_1 + 0x41;
  param_1[0x41] = 0;
  local_d0 = (undefined8 *)((longlong)param_1 + 0x20c);
  local_c8 = param_1 + 0x42;
  param_1[0x42] = 0x542480000;
  local_c0 = (undefined8 *)((longlong)param_1 + 0x214);
  local_b8 = param_1 + 0x43;
  param_1[0x43] = &DAT_3f8000003f800000;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x21c);
  local_a0 = param_1 + 0x44;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x224);
  local_98 = param_1 + 0x45;
  local_90 = (undefined8 *)((longlong)param_1 + 0x22c);
  local_88 = param_1 + 0x46;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x40;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a037e FUN_1497a037e body=25 status=ok
// SIG undefined FUN_1497a037e(void)

undefined8 FUN_1497a037e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a03b6 FUN_1497a03b6 body=22 status=ok
// SIG undefined FUN_1497a03b6(void)

undefined8 FUN_1497a03b6(undefined8 param_1)

{
  FUN_1497a03cc();
  return param_1;
}



// FUNCTION 1497a03cc FUN_1497a03cc body=153 status=ok
// SIG undefined FUN_1497a03cc(void)

undefined8 * FUN_1497a03cc(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a0466(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a0466 FUN_1497a0466 body=636 status=ok
// SIG undefined FUN_1497a0466(void)

undefined8 * FUN_1497a0466(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4e510;
  param_1[0x33] = 0x500000005;
  *(undefined4 *)(param_1 + 0x34) = 5;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x1a4);
  local_a0 = param_1 + 0x35;
  local_98 = (undefined8 *)((longlong)param_1 + 0x1ac);
  local_90 = param_1 + 0x36;
  local_60 = param_1 + 0x37;
  local_88 = param_1 + 0x3e;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a06e4 FUN_1497a06e4 body=25 status=ok
// SIG undefined FUN_1497a06e4(void)

undefined8 FUN_1497a06e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a071c FUN_1497a071c body=22 status=ok
// SIG undefined FUN_1497a071c(void)

undefined8 FUN_1497a071c(undefined8 param_1)

{
  FUN_1497a0732();
  return param_1;
}



// FUNCTION 1497a0732 FUN_1497a0732 body=153 status=ok
// SIG undefined FUN_1497a0732(void)

undefined8 * FUN_1497a0732(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a07cc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a07cc FUN_1497a07cc body=983 status=ok
// SIG undefined FUN_1497a07cc(void)

undefined8 * FUN_1497a07cc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4e7c0;
  local_88 = param_1 + 0x33;
  FUN_1414db454();
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4f] = 0x3f800000bf800000;
  local_d0 = (undefined8 *)((longlong)param_1 + 0x27c);
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_c8 = (undefined8 *)((longlong)param_1 + 0x284);
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x52) = 0x3f000000;
  local_c0 = param_1 + 0x51;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x28c);
  local_b0 = param_1 + 0x52;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x294);
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x440000000;
  local_a0 = param_1 + 0x53;
  local_90 = (undefined8 *)((longlong)param_1 + 0x29c);
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x41200000;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x42480000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_98 = (undefined8 *)((longlong)param_1 + 0x2a4);
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4f;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_88,local_88,&local_60);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a0ba4 FUN_1497a0ba4 body=25 status=ok
// SIG undefined FUN_1497a0ba4(void)

undefined8 FUN_1497a0ba4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a0bdc FUN_1497a0bdc body=22 status=ok
// SIG undefined FUN_1497a0bdc(void)

undefined8 FUN_1497a0bdc(undefined8 param_1)

{
  FUN_1497a0bf2();
  return param_1;
}



// FUNCTION 1497a0bf2 FUN_1497a0bf2 body=153 status=ok
// SIG undefined FUN_1497a0bf2(void)

undefined8 * FUN_1497a0bf2(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x330,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a0c8c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a0c8c FUN_1497a0c8c body=1098 status=ok
// SIG undefined FUN_1497a0c8c(void)

undefined8 * FUN_1497a0c8c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4ea60;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  puVar1 = param_1 + 0x4b;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x50;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x5c] = 0x3f80000000000000;
  local_d8 = (undefined8 *)((longlong)param_1 + 0x2e4);
  *(undefined1 *)(param_1 + 0x5d) = 1;
  local_d0 = (undefined8 *)((longlong)param_1 + 0x2ec);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x5f) = 0x3f000000;
  local_c8 = param_1 + 0x5e;
  local_c0 = (undefined8 *)((longlong)param_1 + 0x2f4);
  local_b8 = param_1 + 0x5f;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x2fc);
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x440000000;
  local_a8 = param_1 + 0x60;
  local_98 = (undefined8 *)((longlong)param_1 + 0x304);
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x41200000;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x42480000;
  param_1[100] = 0;
  param_1[0x65] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x30c);
  local_88 = param_1 + 0x62;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x50;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_90,local_90,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a10d8 FUN_1497a10d8 body=120 status=ok
// SIG undefined FUN_1497a10d8(void)

void FUN_1497a10d8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1152 FUN_1497a1152 body=25 status=ok
// SIG undefined FUN_1497a1152(void)

undefined8 FUN_1497a1152(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a118a FUN_1497a118a body=22 status=ok
// SIG undefined FUN_1497a118a(void)

undefined8 FUN_1497a118a(undefined8 param_1)

{
  FUN_1497a11a0();
  return param_1;
}



// FUNCTION 1497a11a0 FUN_1497a11a0 body=153 status=ok
// SIG undefined FUN_1497a11a0(void)

undefined8 * FUN_1497a11a0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a123a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a123a FUN_1497a123a body=1054 status=ok
// SIG undefined FUN_1497a123a(void)

undefined8 * FUN_1497a123a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4ecf0;
  local_88 = param_1 + 0x33;
  FUN_1414db454();
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x100000080;
  local_d8 = (undefined8 *)((longlong)param_1 + 0x2a4);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3dcccccd;
  local_d0 = param_1 + 0x55;
  local_c8 = (undefined8 *)((longlong)param_1 + 0x2ac);
  local_c0 = param_1 + 0x56;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x2b4);
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x400000003f000000;
  local_b0 = param_1 + 0x57;
  local_a8 = (undefined8 *)((longlong)param_1 + 700);
  *(undefined8 *)((longlong)param_1 + 700) = 0x4120000000000004;
  local_98 = param_1 + 0x58;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x42480000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x2c4);
  local_90 = param_1 + 0x59;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x50;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x54;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_88,local_88,&local_60);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a165a FUN_1497a165a body=25 status=ok
// SIG undefined FUN_1497a165a(void)

undefined8 FUN_1497a165a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a1692 FUN_1497a1692 body=22 status=ok
// SIG undefined FUN_1497a1692(void)

undefined8 FUN_1497a1692(undefined8 param_1)

{
  FUN_1497a16a8();
  return param_1;
}



// FUNCTION 1497a16a8 FUN_1497a16a8 body=153 status=ok
// SIG undefined FUN_1497a16a8(void)

undefined8 * FUN_1497a16a8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x360,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a1742(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1742 FUN_1497a1742 body=1291 status=ok
// SIG undefined FUN_1497a1742(void)

undefined8 * FUN_1497a1742(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4ef90;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  puVar1 = param_1 + 0x50;
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x54;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_e8 = param_1 + 0x60;
  param_1[0x60] = 1;
  local_e0 = (undefined8 *)((longlong)param_1 + 0x304);
  local_d8 = param_1 + 0x61;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
  local_d0 = param_1 + 0x62;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 99) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f000000;
  local_c8 = (undefined8 *)((longlong)param_1 + 0x314);
  local_c0 = param_1 + 99;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x31c);
  local_a8 = param_1 + 100;
  param_1[100] = 0x440000000;
  *(undefined4 *)(param_1 + 0x65) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x42480000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x324);
  local_a0 = param_1 + 0x65;
  local_98 = param_1 + 0x66;
  local_88 = param_1 + 0x67;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x54;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_90,local_90,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1c4e FUN_1497a1c4e body=25 status=ok
// SIG undefined FUN_1497a1c4e(void)

undefined8 FUN_1497a1c4e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a1c86 FUN_1497a1c86 body=22 status=ok
// SIG undefined FUN_1497a1c86(void)

undefined8 FUN_1497a1c86(undefined8 param_1)

{
  FUN_1497a1c9c();
  return param_1;
}



// FUNCTION 1497a1c9c FUN_1497a1c9c body=153 status=ok
// SIG undefined FUN_1497a1c9c(void)

undefined8 * FUN_1497a1c9c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x268,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a1d36(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1d36 FUN_1497a1d36 body=314 status=ok
// SIG undefined FUN_1497a1d36(void)

undefined8 * FUN_1497a1d36(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4f220;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x3ff0000000000000;
  param_1[0x4c] = 0x3ff0000000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1e72 FUN_1497a1e72 body=25 status=ok
// SIG undefined FUN_1497a1e72(void)

undefined8 FUN_1497a1e72(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a1eaa FUN_1497a1eaa body=22 status=ok
// SIG undefined FUN_1497a1eaa(void)

undefined8 FUN_1497a1eaa(undefined8 param_1)

{
  FUN_1497a1ec0();
  return param_1;
}



// FUNCTION 1497a1ec0 FUN_1497a1ec0 body=153 status=ok
// SIG undefined FUN_1497a1ec0(void)

undefined8 * FUN_1497a1ec0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x308,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a1f5a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a1f5a FUN_1497a1f5a body=1505 status=ok
// SIG undefined FUN_1497a1f5a(void)

undefined8 * FUN_1497a1f5a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4f4c0;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  puVar1 = param_1 + 0x50;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x300000080;
  *(undefined1 **)((longlong)param_1 + 0x2a4) = &DAT_100000003;
  local_100 = (undefined8 *)((longlong)param_1 + 0x2a4);
  local_f8 = param_1 + 0x55;
  local_f0 = (undefined8 *)((longlong)param_1 + 0x2ac);
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f80000000000000;
  local_e8 = param_1 + 0x56;
  local_e0 = (undefined8 *)((longlong)param_1 + 0x2b4);
  local_d8 = param_1 + 0x57;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  local_c8 = param_1 + 0x58;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f000000;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x2c4);
  param_1[0x5a] = 0x440000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x42480000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_d0 = param_1 + 0x59;
  local_c0 = (undefined8 *)((longlong)param_1 + 0x2cc);
  local_b0 = param_1 + 0x5a;
  local_a8 = (undefined8 *)((longlong)param_1 + 0x2d4);
  local_a0 = param_1 + 0x5b;
  local_98 = param_1 + 0x5c;
  local_88 = param_1 + 0x5d;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x54;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_100;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_90,local_90,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a253c FUN_1497a253c body=25 status=ok
// SIG undefined FUN_1497a253c(void)

undefined8 FUN_1497a253c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a2574 FUN_1497a2574 body=22 status=ok
// SIG undefined FUN_1497a2574(void)

undefined8 FUN_1497a2574(undefined8 param_1)

{
  FUN_1497a258a();
  return param_1;
}



// FUNCTION 1497a258a FUN_1497a258a body=153 status=ok
// SIG undefined FUN_1497a258a(void)

undefined8 * FUN_1497a258a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x360,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a2624(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a2624 FUN_1497a2624 body=1433 status=ok
// SIG undefined FUN_1497a2624(void)

undefined8 * FUN_1497a2624(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4f760;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  puVar1 = param_1 + 0x50;
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x54;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  local_f8 = (undefined8 *)((longlong)param_1 + 0x304);
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x4264000043420000;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x42b80000;
  local_f0 = param_1 + 0x61;
  local_e8 = (undefined8 *)((longlong)param_1 + 0x30c);
  local_e0 = param_1 + 0x62;
  local_d8 = (undefined8 *)((longlong)param_1 + 0x314);
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined1 *)(param_1 + 99) = 1;
  local_d0 = (undefined8 *)((longlong)param_1 + 0x31c);
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x65) = 0x3f000000;
  local_c8 = param_1 + 100;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x324);
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x440000000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x41200000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x42480000;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_c0 = param_1 + 0x65;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x32c);
  local_a8 = param_1 + 0x66;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x334);
  local_98 = (undefined8 *)((longlong)param_1 + 0x33c);
  local_88 = param_1 + 0x68;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x54;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_90,local_90,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a2bbe FUN_1497a2bbe body=25 status=ok
// SIG undefined FUN_1497a2bbe(void)

undefined8 FUN_1497a2bbe(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a2bf6 FUN_1497a2bf6 body=22 status=ok
// SIG undefined FUN_1497a2bf6(void)

undefined8 FUN_1497a2bf6(undefined8 param_1)

{
  FUN_1497a2c0c();
  return param_1;
}



// FUNCTION 1497a2c0c FUN_1497a2c0c body=153 status=ok
// SIG undefined FUN_1497a2c0c(void)

undefined8 * FUN_1497a2c0c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x370,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a2ca6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a2ca6 FUN_1497a2ca6 body=1531 status=ok
// SIG undefined FUN_1497a2ca6(void)

undefined8 * FUN_1497a2ca6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4fa00;
  local_90 = param_1 + 0x33;
  FUN_1414db454();
  puVar1 = param_1 + 0x50;
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x54;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_100 = param_1 + 0x60;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  local_f8 = (undefined8 *)((longlong)param_1 + 0x314);
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x20000000a;
  *(undefined1 **)((longlong)param_1 + 0x31c) = &DAT_200000002;
  local_f0 = param_1 + 99;
  local_e8 = (undefined8 *)((longlong)param_1 + 0x31c);
  local_e0 = param_1 + 100;
  local_d8 = (undefined8 *)((longlong)param_1 + 0x324);
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x3f00000000000000;
  local_c8 = param_1 + 0x65;
  local_b8 = (undefined8 *)((longlong)param_1 + 0x32c);
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3fc00000;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x43340000;
  *(undefined4 *)(param_1 + 0x67) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x43340000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x69) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x42480000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_d0 = (undefined8 *)((longlong)param_1 + 0x334);
  local_c0 = param_1 + 0x67;
  local_b0 = (undefined8 *)((longlong)param_1 + 0x33c);
  local_a8 = param_1 + 0x68;
  local_a0 = (undefined8 *)((longlong)param_1 + 0x344);
  local_98 = (undefined8 *)((longlong)param_1 + 0x34c);
  local_88 = param_1 + 0x6a;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x54;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_100;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_f0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_e0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_d0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_c0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,local_90,local_90,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a32a2 FUN_1497a32a2 body=25 status=ok
// SIG undefined FUN_1497a32a2(void)

undefined8 FUN_1497a32a2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a32da FUN_1497a32da body=177 status=ok
// SIG undefined FUN_1497a32da(void)

void FUN_1497a32da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a338c(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a338c FUN_1497a338c body=226 status=ok
// SIG undefined FUN_1497a338c(void)

void FUN_1497a338c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)puVar3 + 0xc) = *param_5;
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = param_6;
  puVar3[6] = uVar1;
  *puVar3 = &PTR_FUN_14be6c660;
  puVar3[9] = 0;
  puVar3[10] = 0;
  FUN_144a69486(puVar3 + 7,param_4);
  local_50 = puVar3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3470 FUN_1497a3470 body=57 status=ok
// SIG undefined FUN_1497a3470(void)

undefined8 * FUN_1497a3470(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6c660;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a34aa FUN_1497a34aa body=101 status=ok
// SIG undefined FUN_1497a34aa(void)

undefined8 * FUN_1497a34aa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c670;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a3510 FUN_1497a3510 body=29 status=ok
// SIG undefined FUN_1497a3510(void)

undefined8 FUN_1497a3510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a352e FUN_1497a352e body=101 status=ok
// SIG undefined FUN_1497a352e(void)

undefined8 * FUN_1497a352e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c670;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a3594 FUN_1497a3594 body=177 status=ok
// SIG undefined FUN_1497a3594(void)

void FUN_1497a3594(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a3646(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3646 FUN_1497a3646 body=237 status=ok
// SIG undefined FUN_1497a3646(void)

void FUN_1497a3646(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c680;
  lVar2 = *(longlong *)(param_4 + 4);
  if (lVar2 == 0) {
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *(undefined4 *)(local_48 + 7) = *param_4;
    *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
    *(undefined4 *)(local_48 + 8) = uVar4;
    *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  }
  local_48[9] = lVar2;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(local_48 + 10) = param_4[6];
  *(undefined4 *)((longlong)local_48 + 0x54) = param_4[7];
  *(undefined8 *)(param_4 + 6) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3734 FUN_1497a3734 body=57 status=ok
// SIG undefined FUN_1497a3734(void)

undefined8 * FUN_1497a3734(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6c680;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a376e FUN_1497a376e body=101 status=ok
// SIG undefined FUN_1497a376e(void)

undefined8 * FUN_1497a376e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c690;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a37d4 FUN_1497a37d4 body=29 status=ok
// SIG undefined FUN_1497a37d4(void)

undefined8 FUN_1497a37d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a37f2 FUN_1497a37f2 body=101 status=ok
// SIG undefined FUN_1497a37f2(void)

undefined8 * FUN_1497a37f2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c690;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a3858 FUN_1497a3858 body=22 status=ok
// SIG undefined FUN_1497a3858(void)

undefined8 FUN_1497a3858(undefined8 param_1)

{
  FUN_1497a386e();
  return param_1;
}



// FUNCTION 1497a386e FUN_1497a386e body=153 status=ok
// SIG undefined FUN_1497a386e(void)

undefined8 * FUN_1497a386e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a3908(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3908 FUN_1497a3908 body=155 status=ok
// SIG undefined FUN_1497a3908(void)

undefined8 * FUN_1497a3908(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be4fca0;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  local_28 = param_1 + 0x35;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_40 = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  FUN_146fb8a66(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a39a4 FUN_1497a39a4 body=25 status=ok
// SIG undefined FUN_1497a39a4(void)

undefined8 FUN_1497a39a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a39dc FUN_1497a39dc body=22 status=ok
// SIG undefined FUN_1497a39dc(void)

undefined8 FUN_1497a39dc(undefined8 param_1)

{
  FUN_1497a39f2();
  return param_1;
}



// FUNCTION 1497a39f2 FUN_1497a39f2 body=224 status=ok
// SIG undefined FUN_1497a39f2(void)

undefined8 * FUN_1497a39f2(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be4ff30;
  local_40 = plVar1 + 0x35;
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  plVar1[0x36] = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3ad4 FUN_1497a3ad4 body=25 status=ok
// SIG undefined FUN_1497a3ad4(void)

undefined8 FUN_1497a3ad4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a3b0c FUN_1497a3b0c body=22 status=ok
// SIG undefined FUN_1497a3b0c(void)

undefined8 FUN_1497a3b0c(undefined8 param_1)

{
  FUN_1497a3b22();
  return param_1;
}



// FUNCTION 1497a3b22 FUN_1497a3b22 body=153 status=ok
// SIG undefined FUN_1497a3b22(void)

undefined8 * FUN_1497a3b22(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x238,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a3bbc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3bbc FUN_1497a3bbc body=454 status=ok
// SIG undefined FUN_1497a3bbc(void)

undefined8 * FUN_1497a3bbc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be50290;
  *(undefined1 *)(param_1 + 0x33) = 0;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x4024000000000000;
  param_1[0x38] = 0x4024000000000000;
  param_1[0x39] = 0x4024000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x4024000000000000;
  param_1[0x3e] = 0x4024000000000000;
  param_1[0x3f] = 0x4024000000000000;
  local_88 = param_1 + 0x40;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3d84 FUN_1497a3d84 body=25 status=ok
// SIG undefined FUN_1497a3d84(void)

undefined8 FUN_1497a3d84(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a3dbc FUN_1497a3dbc body=22 status=ok
// SIG undefined FUN_1497a3dbc(void)

undefined8 FUN_1497a3dbc(undefined8 param_1)

{
  FUN_1497a3dd2();
  return param_1;
}



// FUNCTION 1497a3dd2 FUN_1497a3dd2 body=153 status=ok
// SIG undefined FUN_1497a3dd2(void)

undefined8 * FUN_1497a3dd2(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1d8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a3e6c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3e6c FUN_1497a3e6c body=275 status=ok
// SIG undefined FUN_1497a3e6c(void)

undefined8 * FUN_1497a3e6c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be50530;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x41200000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x36;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x37;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a3f80 FUN_1497a3f80 body=25 status=ok
// SIG undefined FUN_1497a3f80(void)

undefined8 FUN_1497a3f80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a3fb8 FUN_1497a3fb8 body=22 status=ok
// SIG undefined FUN_1497a3fb8(void)

undefined8 FUN_1497a3fb8(undefined8 param_1)

{
  FUN_1497a3fce();
  return param_1;
}



// FUNCTION 1497a3fce FUN_1497a3fce body=214 status=ok
// SIG undefined FUN_1497a3fce(void)

undefined8 * FUN_1497a3fce(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be507e0;
  plVar1[0x33] = 0;
  local_40 = (longlong)plVar1 + 0x19c;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a40a6 FUN_1497a40a6 body=25 status=ok
// SIG undefined FUN_1497a40a6(void)

undefined8 FUN_1497a40a6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a40de FUN_1497a40de body=22 status=ok
// SIG undefined FUN_1497a40de(void)

undefined8 FUN_1497a40de(undefined8 param_1)

{
  FUN_1497a40f4();
  return param_1;
}



// FUNCTION 1497a40f4 FUN_1497a40f4 body=214 status=ok
// SIG undefined FUN_1497a40f4(void)

undefined8 * FUN_1497a40f4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be50a80;
  plVar1[0x33] = 0;
  local_40 = (longlong)plVar1 + 0x19c;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a41cc FUN_1497a41cc body=25 status=ok
// SIG undefined FUN_1497a41cc(void)

undefined8 FUN_1497a41cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a4204 FUN_1497a4204 body=22 status=ok
// SIG undefined FUN_1497a4204(void)

undefined8 FUN_1497a4204(undefined8 param_1)

{
  FUN_1497a421a();
  return param_1;
}



// FUNCTION 1497a421a FUN_1497a421a body=216 status=ok
// SIG undefined FUN_1497a421a(void)

undefined8 * FUN_1497a421a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be50d20;
  *(undefined2 *)(plVar1 + 0x33) = 0;
  local_40 = (longlong)plVar1 + 0x199;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a42f4 FUN_1497a42f4 body=25 status=ok
// SIG undefined FUN_1497a42f4(void)

undefined8 FUN_1497a42f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a432c FUN_1497a432c body=22 status=ok
// SIG undefined FUN_1497a432c(void)

undefined8 FUN_1497a432c(undefined8 param_1)

{
  FUN_1497a4342();
  return param_1;
}



// FUNCTION 1497a4342 FUN_1497a4342 body=153 status=ok
// SIG undefined FUN_1497a4342(void)

undefined8 * FUN_1497a4342(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a43dc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a43dc FUN_1497a43dc body=316 status=ok
// SIG undefined FUN_1497a43dc(void)

undefined8 * FUN_1497a43dc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be50fc0;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a451a FUN_1497a451a body=25 status=ok
// SIG undefined FUN_1497a451a(void)

undefined8 FUN_1497a451a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a4552 FUN_1497a4552 body=22 status=ok
// SIG undefined FUN_1497a4552(void)

undefined8 FUN_1497a4552(undefined8 param_1)

{
  FUN_1497a4568();
  return param_1;
}



// FUNCTION 1497a4568 FUN_1497a4568 body=153 status=ok
// SIG undefined FUN_1497a4568(void)

undefined8 * FUN_1497a4568(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x240,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a4602(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4602 FUN_1497a4602 body=355 status=ok
// SIG undefined FUN_1497a4602(void)

undefined8 * FUN_1497a4602(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be51270;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3ff0000000000000;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4766 FUN_1497a4766 body=25 status=ok
// SIG undefined FUN_1497a4766(void)

undefined8 FUN_1497a4766(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a479e FUN_1497a479e body=22 status=ok
// SIG undefined FUN_1497a479e(void)

undefined8 FUN_1497a479e(undefined8 param_1)

{
  FUN_1497a47b4();
  return param_1;
}



// FUNCTION 1497a47b4 FUN_1497a47b4 body=153 status=ok
// SIG undefined FUN_1497a47b4(void)

undefined8 * FUN_1497a47b4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a484e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a484e FUN_1497a484e body=360 status=ok
// SIG undefined FUN_1497a484e(void)

undefined8 * FUN_1497a484e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be51510;
  local_60 = param_1 + 0x33;
  local_88 = param_1 + 0x36;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a49b8 FUN_1497a49b8 body=25 status=ok
// SIG undefined FUN_1497a49b8(void)

undefined8 FUN_1497a49b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a49f0 FUN_1497a49f0 body=22 status=ok
// SIG undefined FUN_1497a49f0(void)

undefined8 FUN_1497a49f0(undefined8 param_1)

{
  FUN_1497a4a06();
  return param_1;
}



// FUNCTION 1497a4a06 FUN_1497a4a06 body=153 status=ok
// SIG undefined FUN_1497a4a06(void)

undefined8 * FUN_1497a4a06(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a4aa0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4aa0 FUN_1497a4aa0 body=264 status=ok
// SIG undefined FUN_1497a4aa0(void)

undefined8 * FUN_1497a4aa0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be517b0;
  local_58 = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x33) = 1;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4baa FUN_1497a4baa body=25 status=ok
// SIG undefined FUN_1497a4baa(void)

undefined8 FUN_1497a4baa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a4be2 FUN_1497a4be2 body=177 status=ok
// SIG undefined FUN_1497a4be2(void)

void FUN_1497a4be2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_146fda534(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4c94 FUN_1497a4c94 body=177 status=ok
// SIG undefined FUN_1497a4c94(void)

void FUN_1497a4c94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149728a8c(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4d46 FUN_1497a4d46 body=177 status=ok
// SIG undefined FUN_1497a4d46(void)

void FUN_1497a4d46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a4df8(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4df8 FUN_1497a4df8 body=226 status=ok
// SIG undefined FUN_1497a4df8(void)

void FUN_1497a4df8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
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
  undefined8 uVar13;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar13 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar13;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c800;
  local_48[0xd] = *(undefined8 *)(param_4 + 0xc);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(local_48 + 0xb) = param_4[8];
  *(undefined4 *)((longlong)local_48 + 0x5c) = uVar10;
  *(undefined4 *)(local_48 + 0xc) = uVar11;
  *(undefined4 *)((longlong)local_48 + 100) = uVar12;
  *(undefined4 *)(local_48 + 9) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar7;
  *(undefined4 *)(local_48 + 10) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar9;
  *(undefined4 *)(local_48 + 7) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
  *(undefined4 *)(local_48 + 8) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a4edc FUN_1497a4edc body=29 status=ok
// SIG undefined FUN_1497a4edc(void)

undefined8 FUN_1497a4edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a4efa FUN_1497a4efa body=101 status=ok
// SIG undefined FUN_1497a4efa(void)

undefined8 * FUN_1497a4efa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c810;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a4f60 FUN_1497a4f60 body=29 status=ok
// SIG undefined FUN_1497a4f60(void)

undefined8 FUN_1497a4f60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a4f7e FUN_1497a4f7e body=101 status=ok
// SIG undefined FUN_1497a4f7e(void)

undefined8 * FUN_1497a4f7e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c810;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a4fe4 FUN_1497a4fe4 body=177 status=ok
// SIG undefined FUN_1497a4fe4(void)

void FUN_1497a4fe4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a5096(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5096 FUN_1497a5096 body=210 status=ok
// SIG undefined FUN_1497a5096(void)

void FUN_1497a5096(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar9 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar9;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c820;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(local_48 + 9) = param_4[4];
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar6;
  *(undefined4 *)(local_48 + 10) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar8;
  *(undefined4 *)(local_48 + 7) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
  *(undefined4 *)(local_48 + 8) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a516a FUN_1497a516a body=29 status=ok
// SIG undefined FUN_1497a516a(void)

undefined8 FUN_1497a516a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a5188 FUN_1497a5188 body=101 status=ok
// SIG undefined FUN_1497a5188(void)

undefined8 * FUN_1497a5188(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c830;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a51ee FUN_1497a51ee body=29 status=ok
// SIG undefined FUN_1497a51ee(void)

undefined8 FUN_1497a51ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a520c FUN_1497a520c body=101 status=ok
// SIG undefined FUN_1497a520c(void)

undefined8 * FUN_1497a520c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c830;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a5272 FUN_1497a5272 body=177 status=ok
// SIG undefined FUN_1497a5272(void)

void FUN_1497a5272(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_146fca7ca(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5324 FUN_1497a5324 body=177 status=ok
// SIG undefined FUN_1497a5324(void)

void FUN_1497a5324(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_146fca4a8(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a53d6 FUN_1497a53d6 body=177 status=ok
// SIG undefined FUN_1497a53d6(void)

void FUN_1497a53d6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a5488(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5488 FUN_1497a5488 body=207 status=ok
// SIG undefined FUN_1497a5488(void)

void FUN_1497a5488(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c840;
  puVar6 = local_48 + 8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5558 FUN_1497a5558 body=29 status=ok
// SIG undefined FUN_1497a5558(void)

undefined8 FUN_1497a5558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a5576 FUN_1497a5576 body=101 status=ok
// SIG undefined FUN_1497a5576(void)

undefined8 * FUN_1497a5576(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c850;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a55dc FUN_1497a55dc body=29 status=ok
// SIG undefined FUN_1497a55dc(void)

undefined8 FUN_1497a55dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a55fa FUN_1497a55fa body=101 status=ok
// SIG undefined FUN_1497a55fa(void)

undefined8 * FUN_1497a55fa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c850;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a5660 FUN_1497a5660 body=177 status=ok
// SIG undefined FUN_1497a5660(void)

void FUN_1497a5660(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a5712(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5712 FUN_1497a5712 body=210 status=ok
// SIG undefined FUN_1497a5712(void)

void FUN_1497a5712(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar9 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar9;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6c860;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(local_48 + 10) = param_4[4];
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar6;
  *(undefined4 *)(local_48 + 0xb) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x5c) = uVar8;
  *(undefined4 *)(local_48 + 8) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar3;
  *(undefined4 *)(local_48 + 9) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a57e6 FUN_1497a57e6 body=29 status=ok
// SIG undefined FUN_1497a57e6(void)

undefined8 FUN_1497a57e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a5804 FUN_1497a5804 body=101 status=ok
// SIG undefined FUN_1497a5804(void)

undefined8 * FUN_1497a5804(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c870;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a586a FUN_1497a586a body=29 status=ok
// SIG undefined FUN_1497a586a(void)

undefined8 FUN_1497a586a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a5888 FUN_1497a5888 body=101 status=ok
// SIG undefined FUN_1497a5888(void)

undefined8 * FUN_1497a5888(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c870;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a58ee FUN_1497a58ee body=22 status=ok
// SIG undefined FUN_1497a58ee(void)

undefined8 FUN_1497a58ee(undefined8 param_1)

{
  FUN_1497a5904();
  return param_1;
}



// FUNCTION 1497a5904 FUN_1497a5904 body=153 status=ok
// SIG undefined FUN_1497a5904(void)

undefined8 * FUN_1497a5904(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x290,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a599e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a599e FUN_1497a599e body=459 status=ok
// SIG undefined FUN_1497a599e(void)

undefined8 * FUN_1497a599e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be289f0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  puVar2 = param_1 + 0x4d;
  local_90 = param_1 + 0x4f;
  local_88 = param_1 + 0x50;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 1;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar2;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_14971bf84(param_1,puVar2,puVar2,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5b6a FUN_1497a5b6a body=25 status=ok
// SIG undefined FUN_1497a5b6a(void)

undefined8 FUN_1497a5b6a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a5ba2 FUN_1497a5ba2 body=22 status=ok
// SIG undefined FUN_1497a5ba2(void)

undefined8 FUN_1497a5ba2(undefined8 param_1)

{
  FUN_1497a5bb8();
  return param_1;
}



// FUNCTION 1497a5bb8 FUN_1497a5bb8 body=153 status=ok
// SIG undefined FUN_1497a5bb8(void)

undefined8 * FUN_1497a5bb8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x288,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a5c52(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5c52 FUN_1497a5c52 body=463 status=ok
// SIG undefined FUN_1497a5c52(void)

undefined8 * FUN_1497a5c52(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be28cc0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  puVar2 = param_1 + 0x4d;
  local_90 = param_1 + 0x4f;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xffffffffffffffff;
  local_88 = (undefined8 *)((longlong)param_1 + 0x27c);
  *(undefined2 *)(param_1 + 0x50) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar2;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_14971bf84(param_1,puVar2,puVar2,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5e22 FUN_1497a5e22 body=25 status=ok
// SIG undefined FUN_1497a5e22(void)

undefined8 FUN_1497a5e22(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a5e5a FUN_1497a5e5a body=22 status=ok
// SIG undefined FUN_1497a5e5a(void)

undefined8 FUN_1497a5e5a(undefined8 param_1)

{
  FUN_1497a5e70();
  return param_1;
}



// FUNCTION 1497a5e70 FUN_1497a5e70 body=153 status=ok
// SIG undefined FUN_1497a5e70(void)

undefined8 * FUN_1497a5e70(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a5f0a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5f0a FUN_1497a5f0a body=203 status=ok
// SIG undefined FUN_1497a5f0a(void)

undefined8 * FUN_1497a5f0a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be28f80;
  local_50 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a5fd6 FUN_1497a5fd6 body=25 status=ok
// SIG undefined FUN_1497a5fd6(void)

undefined8 FUN_1497a5fd6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a600e FUN_1497a600e body=22 status=ok
// SIG undefined FUN_1497a600e(void)

undefined8 FUN_1497a600e(undefined8 param_1)

{
  FUN_1497a6024();
  return param_1;
}



// FUNCTION 1497a6024 FUN_1497a6024 body=153 status=ok
// SIG undefined FUN_1497a6024(void)

undefined8 * FUN_1497a6024(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a60be(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a60be FUN_1497a60be body=251 status=ok
// SIG undefined FUN_1497a60be(void)

undefined8 * FUN_1497a60be(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be29220;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x36;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a61ba FUN_1497a61ba body=25 status=ok
// SIG undefined FUN_1497a61ba(void)

undefined8 FUN_1497a61ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a61f2 FUN_1497a61f2 body=22 status=ok
// SIG undefined FUN_1497a61f2(void)

undefined8 FUN_1497a61f2(undefined8 param_1)

{
  FUN_1497a6208();
  return param_1;
}



// FUNCTION 1497a6208 FUN_1497a6208 body=153 status=ok
// SIG undefined FUN_1497a6208(void)

undefined8 * FUN_1497a6208(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a62a2(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a62a2 FUN_1497a62a2 body=292 status=ok
// SIG undefined FUN_1497a62a2(void)

undefined8 * FUN_1497a62a2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be295f0;
  puVar1 = param_1 + 0x33;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1b4);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_14971bf84(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a63c8 FUN_1497a63c8 body=25 status=ok
// SIG undefined FUN_1497a63c8(void)

undefined8 FUN_1497a63c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a6400 FUN_1497a6400 body=22 status=ok
// SIG undefined FUN_1497a6400(void)

undefined8 FUN_1497a6400(undefined8 param_1)

{
  FUN_1497a6416();
  return param_1;
}



// FUNCTION 1497a6416 FUN_1497a6416 body=217 status=ok
// SIG undefined FUN_1497a6416(void)

undefined8 * FUN_1497a6416(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be298b0;
  local_40 = plVar1 + 0x34;
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a64f0 FUN_1497a64f0 body=25 status=ok
// SIG undefined FUN_1497a64f0(void)

undefined8 FUN_1497a64f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a6528 FUN_1497a6528 body=22 status=ok
// SIG undefined FUN_1497a6528(void)

undefined8 FUN_1497a6528(undefined8 param_1)

{
  FUN_1497a653e();
  return param_1;
}



// FUNCTION 1497a653e FUN_1497a653e body=217 status=ok
// SIG undefined FUN_1497a653e(void)

undefined8 * FUN_1497a653e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be29b60;
  local_40 = plVar1 + 0x33;
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a6618 FUN_1497a6618 body=25 status=ok
// SIG undefined FUN_1497a6618(void)

undefined8 FUN_1497a6618(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a6650 FUN_1497a6650 body=312 status=ok
// SIG undefined FUN_1497a6650(void)

longlong FUN_1497a6650(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497a678a(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 3) {
            param_3 = lVar1 + 0x48;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a678a FUN_1497a678a body=208 status=ok
// SIG undefined FUN_1497a678a(void)

void FUN_1497a678a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1497a685c(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a685c FUN_1497a685c body=190 status=ok
// SIG undefined FUN_1497a685c(void)

undefined8 *
FUN_1497a685c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be6c960;
  param_1[7] = &PTR_FUN_14be6c970;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a691c FUN_1497a691c body=53 status=ok
// SIG undefined FUN_1497a691c(void)

longlong FUN_1497a691c(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a6952 FUN_1497a6952 body=101 status=ok
// SIG undefined FUN_1497a6952(void)

undefined8 * FUN_1497a6952(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c990;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a69b8 FUN_1497a69b8 body=49 status=ok
// SIG undefined FUN_1497a69b8(void)

undefined8 * FUN_1497a69b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1497a6a08 FUN_1497a6a08 body=32 status=ok
// SIG undefined FUN_1497a6a08(void)

undefined8 FUN_1497a6a08(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1497a6a28 FUN_1497a6a28 body=29 status=ok
// SIG undefined FUN_1497a6a28(void)

undefined8 FUN_1497a6a28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a6a46 FUN_1497a6a46 body=101 status=ok
// SIG undefined FUN_1497a6a46(void)

undefined8 * FUN_1497a6a46(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c990;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a6b5e FUN_1497a6b5e body=177 status=ok
// SIG undefined FUN_1497a6b5e(void)

void FUN_1497a6b5e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497a6c10(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a6c10 FUN_1497a6c10 body=208 status=ok
// SIG undefined FUN_1497a6c10(void)

void FUN_1497a6c10(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1497a6ce2(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a6ce2 FUN_1497a6ce2 body=190 status=ok
// SIG undefined FUN_1497a6ce2(void)

undefined8 *
FUN_1497a6ce2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be6c9a0;
  param_1[7] = &PTR_FUN_14be6c9b0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a6da2 FUN_1497a6da2 body=53 status=ok
// SIG undefined FUN_1497a6da2(void)

longlong FUN_1497a6da2(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a6dd8 FUN_1497a6dd8 body=101 status=ok
// SIG undefined FUN_1497a6dd8(void)

undefined8 * FUN_1497a6dd8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c9d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a6e3e FUN_1497a6e3e body=49 status=ok
// SIG undefined FUN_1497a6e3e(void)

undefined8 * FUN_1497a6e3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1497a6e8e FUN_1497a6e8e body=32 status=ok
// SIG undefined FUN_1497a6e8e(void)

undefined8 FUN_1497a6e8e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1497a6eae FUN_1497a6eae body=29 status=ok
// SIG undefined FUN_1497a6eae(void)

undefined8 FUN_1497a6eae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497a6ecc FUN_1497a6ecc body=101 status=ok
// SIG undefined FUN_1497a6ecc(void)

undefined8 * FUN_1497a6ecc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6c9d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497a6f32 FUN_1497a6f32 body=22 status=ok
// SIG undefined FUN_1497a6f32(void)

undefined8 FUN_1497a6f32(undefined8 param_1)

{
  FUN_1497a6f48();
  return param_1;
}



// FUNCTION 1497a6f48 FUN_1497a6f48 body=153 status=ok
// SIG undefined FUN_1497a6f48(void)

undefined8 * FUN_1497a6f48(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a6fe2(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a6fe2 FUN_1497a6fe2 body=251 status=ok
// SIG undefined FUN_1497a6fe2(void)

undefined8 * FUN_1497a6fe2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be51a50;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a70de FUN_1497a70de body=25 status=ok
// SIG undefined FUN_1497a70de(void)

undefined8 FUN_1497a70de(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a7116 FUN_1497a7116 body=22 status=ok
// SIG undefined FUN_1497a7116(void)

undefined8 FUN_1497a7116(undefined8 param_1)

{
  FUN_1497a712c();
  return param_1;
}



// FUNCTION 1497a712c FUN_1497a712c body=153 status=ok
// SIG undefined FUN_1497a712c(void)

undefined8 * FUN_1497a712c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a71c6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a71c6 FUN_1497a71c6 body=251 status=ok
// SIG undefined FUN_1497a71c6(void)

undefined8 * FUN_1497a71c6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be51ce0;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497a72c2 FUN_1497a72c2 body=25 status=ok
// SIG undefined FUN_1497a72c2(void)

undefined8 FUN_1497a72c2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497a72fa FUN_1497a72fa body=22 status=ok
// SIG undefined FUN_1497a72fa(void)

undefined8 FUN_1497a72fa(undefined8 param_1)

{
  FUN_1497a7310();
  return param_1;
}



// FUNCTION 1497a7310 FUN_1497a7310 body=153 status=ok
// SIG undefined FUN_1497a7310(void)

undefined8 * FUN_1497a7310(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497a73aa(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


