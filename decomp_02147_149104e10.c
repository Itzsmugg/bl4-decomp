// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149104e10 FUN_149104e10 body=254 status=ok
// SIG undefined FUN_149104e10(void)

void FUN_149104e10(longlong param_1)

{
  double _X;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  _X = *(double *)(param_1 + 8);
  dVar4 = 0.0;
  if (0.0 <= _X) {
    if (_X < 0.0) {
      dVar4 = sqrt(_X);
    }
    else {
      dVar4 = SQRT(_X);
    }
  }
  *(double *)(param_1 + 0x10) = dVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149104f2a FUN_149104f2a body=225 status=ok
// SIG undefined FUN_149104f2a(void)

void FUN_149104f2a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 8) ^ 0x8000000000000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105026 FUN_149105026 body=225 status=ok
// SIG undefined FUN_149105026(void)

void FUN_149105026(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 8) & 0x7fffffffffffffff;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910512c FUN_14910512c body=232 status=ok
// SIG undefined FUN_14910512c(void)

void FUN_14910512c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(param_1 + 8);
  auVar4 = roundpd(auVar4,auVar4,1);
  *(double *)(param_1 + 0x10) = auVar4._0_8_;
  *(int *)(param_1 + 0x18) = (int)auVar4._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910523a FUN_14910523a body=232 status=ok
// SIG undefined FUN_14910523a(void)

void FUN_14910523a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(param_1 + 8);
  auVar4 = roundpd(auVar4,auVar4,2);
  *(double *)(param_1 + 0x10) = auVar4._0_8_;
  *(int *)(param_1 + 0x18) = (int)auVar4._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105354 FUN_149105354 body=244 status=ok
// SIG undefined FUN_149105354(void)

void FUN_149105354(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4._0_8_ = *(double *)(param_1 + 8) + 0.5;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  *(double *)(param_1 + 0x10) = auVar4._0_8_;
  *(int *)(param_1 + 0x18) = (int)auVar4._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105470 FUN_149105470 body=237 status=ok
// SIG undefined FUN_149105470(void)

void FUN_149105470(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0x10) =
       (int)((ulonglong)(longlong)ROUND(*(double *)(param_1 + 8) + *(double *)(param_1 + 8) + -0.5)
            >> 1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105572 FUN_149105572 body=222 status=ok
// SIG undefined FUN_149105572(void)

void FUN_149105572(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x10) = (float)*(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910567a FUN_14910567a body=249 status=ok
// SIG undefined FUN_14910567a(void)

void FUN_14910567a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined8 *)(param_1 + 0x10) =
       *(undefined8 *)
        (&DAT_149931170 +
        (ulonglong)(*(double *)(param_1 + 8) <= 0.0 && *(double *)(param_1 + 8) != 0.0) * 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105798 FUN_149105798 body=229 status=ok
// SIG undefined FUN_149105798(void)

void FUN_149105798(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = *(double *)(param_1 + 8);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(param_1 + 0x18);
  if (dVar2 <= dVar1) {
    uVar6 = SUB84(dVar2,0);
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)(param_1 + 0x10);
  if ((double)CONCAT44(uVar7,uVar6) <= dVar1) {
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar7,uVar6);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491058aa FUN_1491058aa body=237 status=ok
// SIG undefined FUN_1491058aa(void)

void FUN_1491058aa(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x20) =
       (*(double *)(param_1 + 0x10) - *(double *)(param_1 + 8)) * *(double *)(param_1 + 0x18) +
       *(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105a28 FUN_149105a28 body=313 status=ok
// SIG undefined FUN_149105a28(void)

void FUN_149105a28(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar4 = (double)(~-(ulonglong)(ABS(dVar4 - *(double *)(param_1 + 0x18)) <= 1e-08) &
                  (ulonglong)
                  ((*(double *)(param_1 + 8) - dVar4) / (*(double *)(param_1 + 0x18) - dVar4)));
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
  }
  *(double *)(param_1 + 0x38) =
       (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x20)) * dVar4 +
       *(double *)(param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105b8a FUN_149105b8a body=230 status=ok
// SIG undefined FUN_149105b8a(void)

void FUN_149105b8a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) = *(double *)(param_1 + 8) == *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105c9a FUN_149105c9a body=230 status=ok
// SIG undefined FUN_149105c9a(void)

void FUN_149105c9a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) = *(double *)(param_1 + 8) != *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105da2 FUN_149105da2 body=223 status=ok
// SIG undefined FUN_149105da2(void)

void FUN_149105da2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) =
       *(double *)(param_1 + 0x10) <= *(double *)(param_1 + 8) &&
       *(double *)(param_1 + 8) != *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105ea2 FUN_149105ea2 body=223 status=ok
// SIG undefined FUN_149105ea2(void)

void FUN_149105ea2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) =
       *(double *)(param_1 + 8) <= *(double *)(param_1 + 0x10) &&
       *(double *)(param_1 + 0x10) != *(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149105fa2 FUN_149105fa2 body=223 status=ok
// SIG undefined FUN_149105fa2(void)

void FUN_149105fa2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) = *(double *)(param_1 + 0x10) <= *(double *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491060a2 FUN_1491060a2 body=223 status=ok
// SIG undefined FUN_1491060a2(void)

void FUN_1491060a2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x18) = *(double *)(param_1 + 8) <= *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491061b6 FUN_1491061b6 body=243 status=ok
// SIG undefined FUN_1491061b6(void)

void FUN_1491061b6(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = *(double *)(param_1 + 0x10);
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= 9.99999993922529e-09) {
    uVar5 = 0xe0000000;
    uVar6 = 0x3e45798e;
  }
  *(bool *)(param_1 + 0x18) = ABS(*(double *)(param_1 + 8)) <= (double)CONCAT44(uVar6,uVar5);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491062e6 FUN_1491062e6 body=248 status=ok
// SIG undefined FUN_1491062e6(void)

void FUN_1491062e6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar4 = *(double *)(param_1 + 0x18);
  if (dVar4 <= 9.99999993922529e-09) {
    dVar4 = 9.99999993922529e-09;
  }
  *(bool *)(param_1 + 0x20) = ABS(*(double *)(param_1 + 8) - *(double *)(param_1 + 0x10)) <= dVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491063fc FUN_1491063fc body=227 status=ok
// SIG undefined FUN_1491063fc(void)

void FUN_1491063fc(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 8) * 57.29577951308232;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491064fc FUN_1491064fc body=227 status=ok
// SIG undefined FUN_1491064fc(void)

void FUN_1491064fc(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 8) * 0.017453292519943295;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491065e0 FUN_1491065e0 body=34 status=ok
// SIG undefined FUN_1491065e0(void)

void FUN_1491065e0(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  dVar2 = sin(**(double **)*param_2);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 149106602 FUN_149106602 body=224 status=ok
// SIG undefined FUN_149106602(void)

void FUN_149106602(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = sin(*(double *)(param_1 + 8));
  *(double *)(param_1 + 0x10) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491066e4 FUN_1491066e4 body=34 status=ok
// SIG undefined FUN_1491066e4(void)

void FUN_1491066e4(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  dVar2 = cos(**(double **)*param_2);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 149106706 FUN_149106706 body=224 status=ok
// SIG undefined FUN_149106706(void)

void FUN_149106706(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = cos(*(double *)(param_1 + 8));
  *(double *)(param_1 + 0x10) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491067e8 FUN_1491067e8 body=34 status=ok
// SIG undefined FUN_1491067e8(void)

void FUN_1491067e8(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  dVar2 = tan(**(double **)*param_2);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 14910680a FUN_14910680a body=224 status=ok
// SIG undefined FUN_14910680a(void)

void FUN_14910680a(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = tan(*(double *)(param_1 + 8));
  *(double *)(param_1 + 0x10) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491068ec FUN_1491068ec body=105 status=ok
// SIG undefined FUN_1491068ec(void)

void FUN_1491068ec(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = (double *)((undefined8 *)*param_2)[4];
  dVar1 = **(double **)*param_2;
  dVar3 = 0.0;
  if (ABS(dVar1) <= 1.0) {
    dVar3 = dVar1;
    if (1.0 <= dVar1) {
      dVar3 = 1.0;
    }
    dVar3 = asin((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar3 |
                         -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  }
  *pdVar2 = dVar3;
  return;
}



// FUNCTION 149106956 FUN_149106956 body=294 status=ok
// SIG undefined FUN_149106956(void)

void FUN_149106956(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = *(double *)(param_1 + 8);
  dVar5 = 0.0;
  if (ABS(dVar1) <= 1.0) {
    dVar5 = dVar1;
    if (1.0 <= dVar1) {
      dVar5 = 1.0;
    }
    dVar5 = asin((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar5 |
                         -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  }
  *(double *)(param_1 + 0x10) = dVar5;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149106a7e FUN_149106a7e body=105 status=ok
// SIG undefined FUN_149106a7e(void)

void FUN_149106a7e(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = (double *)((undefined8 *)*param_2)[4];
  dVar1 = **(double **)*param_2;
  dVar3 = 0.0;
  if (ABS(dVar1) <= 1.0) {
    dVar3 = dVar1;
    if (1.0 <= dVar1) {
      dVar3 = 1.0;
    }
    dVar3 = acos((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar3 |
                         -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  }
  *pdVar2 = dVar3;
  return;
}



// FUNCTION 149106ae8 FUN_149106ae8 body=294 status=ok
// SIG undefined FUN_149106ae8(void)

void FUN_149106ae8(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = *(double *)(param_1 + 8);
  dVar5 = 0.0;
  if (ABS(dVar1) <= 1.0) {
    dVar5 = dVar1;
    if (1.0 <= dVar1) {
      dVar5 = 1.0;
    }
    dVar5 = acos((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar5 |
                         -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  }
  *(double *)(param_1 + 0x10) = dVar5;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149106c10 FUN_149106c10 body=34 status=ok
// SIG undefined FUN_149106c10(void)

void FUN_149106c10(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  dVar2 = atan(**(double **)*param_2);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 149106c32 FUN_149106c32 body=224 status=ok
// SIG undefined FUN_149106c32(void)

void FUN_149106c32(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = atan(*(double *)(param_1 + 8));
  *(double *)(param_1 + 0x10) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149106d14 FUN_149106d14 body=42 status=ok
// SIG undefined FUN_149106d14(void)

void FUN_149106d14(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[8];
  uVar2 = FUN_144afd35e(*(undefined8 *)*param_2,*(undefined8 *)param_2[4]);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 149106d3e FUN_149106d3e body=229 status=ok
// SIG undefined FUN_149106d3e(void)

void FUN_149106d3e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar1 = FUN_144afd35e((int)*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149106e24 FUN_149106e24 body=81 status=ok
// SIG undefined FUN_149106e24(void)

void FUN_149106e24(undefined8 param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_149106f82(*(undefined8 *)*param_2,*(undefined8 *)param_2[4],*(undefined8 *)param_2[8],
                param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 149106e7c FUN_149106e7c body=260 status=ok
// SIG undefined FUN_149106e7c(void)

void FUN_149106e7c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x38;
  local_150 = param_1 + 0x30;
  local_158 = param_1 + 0x28;
  FUN_149106f82((int)*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149106f82 FUN_149106f82 body=463 status=ok
// SIG undefined FUN_149106f82(void)

void FUN_149106f82(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                  double *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  
  if ((((param_2 + param_3 < param_1) || (param_1 + param_3 < param_2)) ||
      (param_1 + param_2 < param_3)) || (((param_1 <= 0.0 || (param_2 <= 0.0)) || (param_3 <= 0.0)))
     ) {
    uVar1 = 0;
    *param_6 = 0.0;
    *param_5 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar2 = ((param_1 * param_1 + param_2 * param_2) - param_3 * param_3) /
            (param_2 * (param_1 + param_1));
    dVar3 = dVar2;
    if (1.0 <= dVar2) {
      dVar3 = 1.0;
    }
    dVar3 = acos((double)(-(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3));
    *param_6 = dVar3;
    dVar2 = ((param_3 * param_3 + param_1 * param_1) - param_2 * param_2) /
            ((param_1 + param_1) * param_3);
    dVar3 = dVar2;
    if (1.0 <= dVar2) {
      dVar3 = 1.0;
    }
    dVar3 = acos((double)(-(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3));
    *param_5 = dVar3;
    dVar3 = (3.1415927410125732 - *param_6) - dVar3;
    uVar1 = 1;
  }
  *param_4 = dVar3;
  *param_7 = uVar1;
  return;
}



// FUNCTION 149107152 FUN_149107152 body=34 status=ok
// SIG undefined FUN_149107152(void)

void FUN_149107152(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  dVar2 = exp(**(double **)*param_2);
  *pdVar1 = dVar2;
  return;
}



// FUNCTION 149107174 FUN_149107174 body=224 status=ok
// SIG undefined FUN_149107174(void)

void FUN_149107174(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = exp(*(double *)(param_1 + 8));
  *(double *)(param_1 + 0x10) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107292 FUN_149107292 body=266 status=ok
// SIG undefined FUN_149107292(void)

void FUN_149107292(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    dVar4 = 0.0;
    lVar1 = 0;
    do {
      dVar4 = dVar4 + *(double *)(*(longlong *)(param_1 + 8) + lVar1);
      *(double *)(param_1 + 0x18) = dVar4;
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar1);
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491073ea FUN_1491073ea body=285 status=ok
// SIG undefined FUN_1491073ea(void)

void FUN_1491073ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((longlong)iVar1 != 0) {
    dVar5 = 0.0;
    lVar2 = 0;
    do {
      dVar5 = dVar5 + *(double *)(*(longlong *)(param_1 + 8) + lVar2);
      *(double *)(param_1 + 0x18) = dVar5;
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 - lVar2 != 0);
    *(double *)(param_1 + 0x18) = dVar5 / (double)iVar1;
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107508 FUN_149107508 body=46 status=ok
// SIG undefined FUN_149107508(void)

undefined8 FUN_149107508(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_1466934f8();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149107536 FUN_149107536 body=46 status=ok
// SIG undefined FUN_149107536(void)

undefined8 FUN_149107536(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_14669374a();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149107566 FUN_149107566 body=204 status=ok
// SIG undefined FUN_149107566(void)

void FUN_149107566(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107642 FUN_149107642 body=216 status=ok
// SIG undefined FUN_149107642(void)

void FUN_149107642(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 8) = 0x40490fdb;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910772a FUN_14910772a body=216 status=ok
// SIG undefined FUN_14910772a(void)

void FUN_14910772a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 8) = 0x3fc90fdb;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107812 FUN_149107812 body=216 status=ok
// SIG undefined FUN_149107812(void)

void FUN_149107812(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 8) = 0x40c90fdb;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491078fa FUN_1491078fa body=216 status=ok
// SIG undefined FUN_1491078fa(void)

void FUN_1491078fa(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 8) = 0x402df854;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491079f0 FUN_1491079f0 body=224 status=ok
// SIG undefined FUN_1491079f0(void)

void FUN_1491079f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107aee FUN_149107aee body=224 status=ok
// SIG undefined FUN_149107aee(void)

void FUN_149107aee(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 8) - *(float *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107bec FUN_149107bec body=224 status=ok
// SIG undefined FUN_149107bec(void)

void FUN_149107bec(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107d00 FUN_149107d00 body=250 status=ok
// SIG undefined FUN_149107d00(void)

void FUN_149107d00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(uint *)(param_1 + 0x10) =
       ~-(uint)(ABS(*(float *)(param_1 + 0xc)) <= 1e-08) &
       (uint)(*(float *)(param_1 + 8) / *(float *)(param_1 + 0xc));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107dfc FUN_149107dfc body=73 status=ok
// SIG undefined FUN_149107dfc(void)

void FUN_149107dfc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined4 *)param_2[8];
  uVar2 = 0;
  if ((0.0 <= *(float *)param_2[4]) && (1e-08 < ABS(*(float *)param_2[4]))) {
    uVar2 = FUN_1447c7e44(*(undefined4 *)*param_2);
  }
  *puVar1 = uVar2;
  return;
}



// FUNCTION 149107e46 FUN_149107e46 body=259 status=ok
// SIG undefined FUN_149107e46(void)

void FUN_149107e46(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar4 = 0;
  if ((0.0 <= *(float *)(param_1 + 0xc)) && (1e-08 < ABS(*(float *)(param_1 + 0xc)))) {
    uVar4 = FUN_1447c7e44(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149107f66 FUN_149107f66 body=224 status=ok
// SIG undefined FUN_149107f66(void)

void FUN_149107f66(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 0xc) <= *(float *)(param_1 + 8)) {
    fVar4 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x10) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108064 FUN_149108064 body=224 status=ok
// SIG undefined FUN_149108064(void)

void FUN_149108064(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) <= *(float *)(param_1 + 0xc)) {
    fVar4 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x10) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108146 FUN_149108146 body=43 status=ok
// SIG undefined FUN_149108146(void)

void FUN_149108146(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  param_2 = (undefined8 *)*param_2;
  pfVar1 = (float *)param_2[8];
  fVar2 = powf(*(float *)*param_2,*(float *)param_2[4]);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 149108172 FUN_149108172 body=230 status=ok
// SIG undefined FUN_149108172(void)

void FUN_149108172(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = powf(*(float *)(param_1 + 8),*(float *)(param_1 + 0xc));
  *(float *)(param_1 + 0x10) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910825a FUN_14910825a body=62 status=ok
// SIG undefined FUN_14910825a(void)

void FUN_14910825a(undefined8 param_1,undefined8 *param_2)

{
  float _X;
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  _X = **(float **)*param_2;
  fVar2 = 0.0;
  if (0.0 <= _X) {
    if (_X < 0.0) {
      fVar2 = sqrtf(_X);
    }
    else {
      fVar2 = SQRT(_X);
    }
  }
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 149108298 FUN_149108298 body=251 status=ok
// SIG undefined FUN_149108298(void)

void FUN_149108298(longlong param_1)

{
  float _X;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  _X = *(float *)(param_1 + 8);
  fVar4 = 0.0;
  if (0.0 <= _X) {
    if (_X < 0.0) {
      fVar4 = sqrtf(_X);
    }
    else {
      fVar4 = SQRT(_X);
    }
  }
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491083ae FUN_1491083ae body=226 status=ok
// SIG undefined FUN_1491083ae(void)

void FUN_1491083ae(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8) ^ 0x80000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491084ac FUN_1491084ac body=226 status=ok
// SIG undefined FUN_1491084ac(void)

void FUN_1491084ac(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8) & 0x7fffffff;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491085b4 FUN_1491085b4 body=232 status=ok
// SIG undefined FUN_1491085b4(void)

void FUN_1491085b4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4 = roundps(ZEXT416(*(uint *)(param_1 + 8)),ZEXT416(*(uint *)(param_1 + 8)),1);
  *(float *)(param_1 + 0xc) = auVar4._0_4_;
  *(int *)(param_1 + 0x10) = (int)auVar4._0_4_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491086c2 FUN_1491086c2 body=232 status=ok
// SIG undefined FUN_1491086c2(void)

void FUN_1491086c2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4 = roundps(ZEXT416(*(uint *)(param_1 + 8)),ZEXT416(*(uint *)(param_1 + 8)),2);
  *(float *)(param_1 + 0xc) = auVar4._0_4_;
  *(int *)(param_1 + 0x10) = (int)auVar4._0_4_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491087de FUN_1491087de body=262 status=ok
// SIG undefined FUN_1491087de(void)

void FUN_1491087de(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  auVar4 = blendps(ZEXT416((uint)(*(float *)(param_1 + 8) + 0.5)),ZEXT816(0),0xe);
  auVar4 = roundps(auVar4,auVar4,1);
  *(float *)(param_1 + 0xc) = auVar4._0_4_;
  *(int *)(param_1 + 0x10) = (int)auVar4._0_4_;
  FUN_140f8ceac(&local_148);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910890a FUN_14910890a body=235 status=ok
// SIG undefined FUN_14910890a(void)

void FUN_14910890a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0xc) =
       (int)ROUND(*(float *)(param_1 + 8) + *(float *)(param_1 + 8) + -0.5) >> 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108a0a FUN_149108a0a body=222 status=ok
// SIG undefined FUN_149108a0a(void)

void FUN_149108a0a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x10) = (double)*(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108b10 FUN_149108b10 body=238 status=ok
// SIG undefined FUN_149108b10(void)

void FUN_149108b10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0xc) =
       *(undefined4 *)
        (&DAT_149e1eeb0 +
        (ulonglong)(*(float *)(param_1 + 8) <= 0.0 && *(float *)(param_1 + 8) != 0.0) * 4);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108c24 FUN_149108c24 body=229 status=ok
// SIG undefined FUN_149108c24(void)

void FUN_149108c24(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 8)) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  if (fVar4 <= *(float *)(param_1 + 0xc)) {
    fVar4 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x14) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108d36 FUN_149108d36 body=237 status=ok
// SIG undefined FUN_149108d36(void)

void FUN_149108d36(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x14) =
       (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x10) +
       *(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149108eb0 FUN_149108eb0 body=309 status=ok
// SIG undefined FUN_149108eb0(void)

void FUN_149108eb0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar4 = (float)(~-(uint)(ABS(fVar4 - *(float *)(param_1 + 0x10)) <= 1e-08) &
                 (uint)((*(float *)(param_1 + 8) - fVar4) / (*(float *)(param_1 + 0x10) - fVar4)));
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * fVar4 +
       *(float *)(param_1 + 0x14);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910900c FUN_14910900c body=229 status=ok
// SIG undefined FUN_14910900c(void)

void FUN_14910900c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(float *)(param_1 + 8) == *(float *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109118 FUN_149109118 body=229 status=ok
// SIG undefined FUN_149109118(void)

void FUN_149109118(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(float *)(param_1 + 8) != *(float *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910921e FUN_14910921e body=222 status=ok
// SIG undefined FUN_14910921e(void)

void FUN_14910921e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) =
       *(float *)(param_1 + 0xc) <= *(float *)(param_1 + 8) &&
       *(float *)(param_1 + 8) != *(float *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910931e FUN_14910931e body=222 status=ok
// SIG undefined FUN_14910931e(void)

void FUN_14910931e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) =
       *(float *)(param_1 + 8) <= *(float *)(param_1 + 0xc) &&
       *(float *)(param_1 + 0xc) != *(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910941e FUN_14910941e body=222 status=ok
// SIG undefined FUN_14910941e(void)

void FUN_14910941e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) <= *(float *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910951e FUN_14910951e body=222 status=ok
// SIG undefined FUN_14910951e(void)

void FUN_14910951e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(float *)(param_1 + 8) <= *(float *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109630 FUN_149109630 body=241 status=ok
// SIG undefined FUN_149109630(void)

void FUN_149109630(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 0xc);
  if (fVar4 <= 1e-08) {
    fVar4 = 1e-08;
  }
  *(bool *)(param_1 + 0x10) = ABS(*(float *)(param_1 + 8)) <= fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910975c FUN_14910975c body=246 status=ok
// SIG undefined FUN_14910975c(void)

void FUN_14910975c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = *(float *)(param_1 + 0x10);
  if (fVar4 <= 1e-08) {
    fVar4 = 1e-08;
  }
  *(bool *)(param_1 + 0x14) = ABS(*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc)) <= fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910987c FUN_14910987c body=227 status=ok
// SIG undefined FUN_14910987c(void)

void FUN_14910987c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(param_1 + 0xc + (ulonglong)(*(byte *)(param_1 + 8) ^ 1) * 4);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910997c FUN_14910997c body=227 status=ok
// SIG undefined FUN_14910997c(void)

void FUN_14910997c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) * 57.295776;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109a7c FUN_149109a7c body=227 status=ok
// SIG undefined FUN_149109a7c(void)

void FUN_149109a7c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) * 0.017453292;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109b60 FUN_149109b60 body=35 status=ok
// SIG undefined FUN_149109b60(void)

void FUN_149109b60(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  fVar2 = sinf(**(float **)*param_2);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 149109b84 FUN_149109b84 body=225 status=ok
// SIG undefined FUN_149109b84(void)

void FUN_149109b84(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = sinf(*(float *)(param_1 + 8));
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109c66 FUN_149109c66 body=35 status=ok
// SIG undefined FUN_149109c66(void)

void FUN_149109c66(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  fVar2 = cosf(**(float **)*param_2);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 149109c8a FUN_149109c8a body=225 status=ok
// SIG undefined FUN_149109c8a(void)

void FUN_149109c8a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = cosf(*(float *)(param_1 + 8));
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109d6c FUN_149109d6c body=35 status=ok
// SIG undefined FUN_149109d6c(void)

void FUN_149109d6c(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  fVar2 = tanf(**(float **)*param_2);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 149109d90 FUN_149109d90 body=225 status=ok
// SIG undefined FUN_149109d90(void)

void FUN_149109d90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = tanf(*(float *)(param_1 + 8));
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109e72 FUN_149109e72 body=97 status=ok
// SIG undefined FUN_149109e72(void)

void FUN_149109e72(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)((undefined8 *)*param_2)[4];
  fVar1 = **(float **)*param_2;
  fVar3 = 0.0;
  if (ABS(fVar1) <= 1.0) {
    fVar3 = fVar1;
    if (1.0 <= fVar1) {
      fVar3 = 1.0;
    }
    fVar3 = asinf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar3 | -(uint)(fVar1 < -1.0) & 0xbf800000)
                 );
  }
  *pfVar2 = fVar3;
  return;
}



// FUNCTION 149109ed4 FUN_149109ed4 body=286 status=ok
// SIG undefined FUN_149109ed4(void)

void FUN_149109ed4(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar1 = *(float *)(param_1 + 8);
  fVar5 = 0.0;
  if (ABS(fVar1) <= 1.0) {
    fVar5 = fVar1;
    if (1.0 <= fVar1) {
      fVar5 = 1.0;
    }
    fVar5 = asinf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar5 | -(uint)(fVar1 < -1.0) & 0xbf800000)
                 );
  }
  *(float *)(param_1 + 0xc) = fVar5;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149109ff4 FUN_149109ff4 body=97 status=ok
// SIG undefined FUN_149109ff4(void)

void FUN_149109ff4(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)((undefined8 *)*param_2)[4];
  fVar1 = **(float **)*param_2;
  fVar3 = 0.0;
  if (ABS(fVar1) <= 1.0) {
    fVar3 = fVar1;
    if (1.0 <= fVar1) {
      fVar3 = 1.0;
    }
    fVar3 = acosf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar3 | -(uint)(fVar1 < -1.0) & 0xbf800000)
                 );
  }
  *pfVar2 = fVar3;
  return;
}



// FUNCTION 14910a056 FUN_14910a056 body=286 status=ok
// SIG undefined FUN_14910a056(void)

void FUN_14910a056(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar1 = *(float *)(param_1 + 8);
  fVar5 = 0.0;
  if (ABS(fVar1) <= 1.0) {
    fVar5 = fVar1;
    if (1.0 <= fVar1) {
      fVar5 = 1.0;
    }
    fVar5 = acosf((float)(~-(uint)(fVar1 < -1.0) & (uint)fVar5 | -(uint)(fVar1 < -1.0) & 0xbf800000)
                 );
  }
  *(float *)(param_1 + 0xc) = fVar5;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a176 FUN_14910a176 body=35 status=ok
// SIG undefined FUN_14910a176(void)

void FUN_14910a176(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  fVar2 = atanf(**(float **)*param_2);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 14910a19a FUN_14910a19a body=225 status=ok
// SIG undefined FUN_14910a19a(void)

void FUN_14910a19a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = atanf(*(float *)(param_1 + 8));
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a27c FUN_14910a27c body=42 status=ok
// SIG undefined FUN_14910a27c(void)

void FUN_14910a27c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined4 *)param_2[8];
  uVar2 = FUN_144a7ed88(*(undefined4 *)*param_2,*(undefined4 *)param_2[4]);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 14910a2a6 FUN_14910a2a6 body=229 status=ok
// SIG undefined FUN_14910a2a6(void)

void FUN_14910a2a6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar4 = FUN_144a7ed88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a38c FUN_14910a38c body=81 status=ok
// SIG undefined FUN_14910a38c(void)

void FUN_14910a38c(undefined8 param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_14910a4ea(*(undefined4 *)*param_2,*(undefined4 *)param_2[4],*(undefined4 *)param_2[8],
                param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 14910a3e4 FUN_14910a3e4 body=260 status=ok
// SIG undefined FUN_14910a3e4(void)

void FUN_14910a3e4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x20;
  local_150 = param_1 + 0x1c;
  local_158 = param_1 + 0x18;
  FUN_14910a4ea(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x10),param_1 + 0x14);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a4ea FUN_14910a4ea body=435 status=ok
// SIG undefined FUN_14910a4ea(void)

void FUN_14910a4ea(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  if ((((param_2 + param_3 < param_1) || (param_1 + param_3 < param_2)) ||
      (param_1 + param_2 < param_3)) || (((param_1 <= 0.0 || (param_2 <= 0.0)) || (param_3 <= 0.0)))
     ) {
    uVar1 = 0;
    *param_6 = 0.0;
    *param_5 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar2 = ((param_1 * param_1 + param_2 * param_2) - param_3 * param_3) /
            (param_2 * (param_1 + param_1));
    fVar3 = fVar2;
    if (1.0 <= fVar2) {
      fVar3 = 1.0;
    }
    fVar3 = acosf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 | ~-(uint)(fVar2 < -1.0) & (uint)fVar3)
                 );
    *param_6 = fVar3;
    fVar2 = ((param_3 * param_3 + param_1 * param_1) - param_2 * param_2) /
            ((param_1 + param_1) * param_3);
    fVar3 = fVar2;
    if (1.0 <= fVar2) {
      fVar3 = 1.0;
    }
    fVar3 = acosf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 | ~-(uint)(fVar2 < -1.0) & (uint)fVar3)
                 );
    *param_5 = fVar3;
    fVar3 = (3.1415927 - *param_6) - fVar3;
    uVar1 = 1;
  }
  *param_4 = fVar3;
  *param_7 = uVar1;
  return;
}



// FUNCTION 14910a69e FUN_14910a69e body=35 status=ok
// SIG undefined FUN_14910a69e(void)

void FUN_14910a69e(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)((undefined8 *)*param_2)[4];
  fVar2 = expf(**(float **)*param_2);
  *pfVar1 = fVar2;
  return;
}



// FUNCTION 14910a6c2 FUN_14910a6c2 body=225 status=ok
// SIG undefined FUN_14910a6c2(void)

void FUN_14910a6c2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = expf(*(float *)(param_1 + 8));
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a7de FUN_14910a7de body=252 status=ok
// SIG undefined FUN_14910a7de(void)

void FUN_14910a7de(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    fVar4 = 0.0;
    lVar1 = 0;
    do {
      fVar4 = fVar4 + *(float *)(*(longlong *)(param_1 + 8) + lVar1);
      *(float *)(param_1 + 0x18) = fVar4;
      lVar1 = lVar1 + 4;
    } while ((longlong)*(int *)(param_1 + 0x10) * 4 != lVar1);
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910a926 FUN_14910a926 body=271 status=ok
// SIG undefined FUN_14910a926(void)

void FUN_14910a926(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((longlong)iVar1 != 0) {
    fVar5 = 0.0;
    lVar2 = 0;
    do {
      fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 8) + lVar2);
      *(float *)(param_1 + 0x18) = fVar5;
      lVar2 = lVar2 + 4;
    } while ((longlong)iVar1 * 4 - lVar2 != 0);
    *(float *)(param_1 + 0x18) = fVar5 / (float)iVar1;
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910aa36 FUN_14910aa36 body=46 status=ok
// SIG undefined FUN_14910aa36(void)

undefined8 FUN_14910aa36(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_146699c4e();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 14910aa64 FUN_14910aa64 body=46 status=ok
// SIG undefined FUN_14910aa64(void)

undefined8 FUN_14910aa64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_146699ea0();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 14910aa92 FUN_14910aa92 body=25 status=ok
// SIG undefined FUN_14910aa92(void)

undefined8 FUN_14910aa92(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14910aaae FUN_14910aaae body=204 status=ok
// SIG undefined FUN_14910aaae(void)

void FUN_14910aaae(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ab92 FUN_14910ab92 body=218 status=ok
// SIG undefined FUN_14910ab92(void)

void FUN_14910ab92(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ac84 FUN_14910ac84 body=218 status=ok
// SIG undefined FUN_14910ac84(void)

void FUN_14910ac84(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ad76 FUN_14910ad76 body=219 status=ok
// SIG undefined FUN_14910ad76(void)

void FUN_14910ad76(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ae76 FUN_14910ae76 body=228 status=ok
// SIG undefined FUN_14910ae76(void)

void FUN_14910ae76(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) / *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910af80 FUN_14910af80 body=228 status=ok
// SIG undefined FUN_14910af80(void)

void FUN_14910af80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) % *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b080 FUN_14910b080 body=223 status=ok
// SIG undefined FUN_14910b080(void)

void FUN_14910b080(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b17a FUN_14910b17a body=223 status=ok
// SIG undefined FUN_14910b17a(void)

void FUN_14910b17a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b25a FUN_14910b25a body=45 status=ok
// SIG undefined FUN_14910b25a(void)

void FUN_14910b25a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  
  param_2 = (undefined8 *)*param_2;
  piVar1 = (int *)param_2[8];
  fVar2 = powf((float)*(int *)*param_2,(float)*(int *)param_2[4]);
  *piVar1 = (int)fVar2;
  return;
}



// FUNCTION 14910b288 FUN_14910b288 body=235 status=ok
// SIG undefined FUN_14910b288(void)

void FUN_14910b288(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar4 = powf((float)*(int *)(param_1 + 8),(float)*(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = (int)fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b386 FUN_14910b386 body=215 status=ok
// SIG undefined FUN_14910b386(void)

void FUN_14910b386(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(int *)(param_1 + 0xc) = -*(int *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b474 FUN_14910b474 body=222 status=ok
// SIG undefined FUN_14910b474(void)

void FUN_14910b474(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = -*(int *)(param_1 + 8);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 0xc) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b568 FUN_14910b568 body=222 status=ok
// SIG undefined FUN_14910b568(void)

void FUN_14910b568(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0xc) = (float)*(int *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b65c FUN_14910b65c body=222 status=ok
// SIG undefined FUN_14910b65c(void)

void FUN_14910b65c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x10) = (double)*(int *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b752 FUN_14910b752 body=221 status=ok
// SIG undefined FUN_14910b752(void)

void FUN_14910b752(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 8) >> 0x1f | 1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b85c FUN_14910b85c body=231 status=ok
// SIG undefined FUN_14910b85c(void)

void FUN_14910b85c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910b960 FUN_14910b960 body=219 status=ok
// SIG undefined FUN_14910b960(void)

void FUN_14910b960(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 8) == *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ba58 FUN_14910ba58 body=219 status=ok
// SIG undefined FUN_14910ba58(void)

void FUN_14910ba58(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 8) != *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910bb50 FUN_14910bb50 body=219 status=ok
// SIG undefined FUN_14910bb50(void)

void FUN_14910bb50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) < *(int *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910bc48 FUN_14910bc48 body=219 status=ok
// SIG undefined FUN_14910bc48(void)

void FUN_14910bc48(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 8) < *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910bd40 FUN_14910bd40 body=219 status=ok
// SIG undefined FUN_14910bd40(void)

void FUN_14910bd40(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910be38 FUN_14910be38 body=219 status=ok
// SIG undefined FUN_14910be38(void)

void FUN_14910be38(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910bf4c FUN_14910bf4c body=252 status=ok
// SIG undefined FUN_14910bf4c(void)

void FUN_14910bf4c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  iVar4 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
    do {
      iVar4 = iVar4 + *(int *)(*(longlong *)(param_1 + 8) + lVar1);
      *(int *)(param_1 + 0x18) = iVar4;
      lVar1 = lVar1 + 4;
    } while ((longlong)*(int *)(param_1 + 0x10) * 4 != lVar1);
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c08a FUN_14910c08a body=266 status=ok
// SIG undefined FUN_14910c08a(void)

void FUN_14910c08a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  iVar5 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      iVar5 = iVar5 + *(int *)(*(longlong *)(param_1 + 8) + lVar2);
      *(int *)(param_1 + 0x18) = iVar5;
      lVar2 = lVar2 + 4;
    } while ((longlong)iVar1 * 4 - lVar2 != 0);
    *(int *)(param_1 + 0x18) = iVar5 / iVar1;
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c1ae FUN_14910c1ae body=224 status=ok
// SIG undefined FUN_14910c1ae(void)

void FUN_14910c1ae(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910c290(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c290 FUN_14910c290 body=421 status=ok
// SIG undefined FUN_14910c290(void)

void FUN_14910c290(int param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_144a83b10(&local_48,param_1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
  }
  if (-1 < param_1) {
    iVar2 = 8;
    if (param_2 < 8) {
      iVar2 = param_2;
    }
    iVar1 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar1 = 0;
    }
    while (iVar1 < iVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc02e00) && (FUN_144b3d300(&DAT_14cc02e00), DAT_14cc02e00 == -1))
      {
        DAT_14cc02df0 = 0;
        uRam000000014cc02df8 = 0;
        FUN_144a83b10(&DAT_14cc02df0,0);
        atexit((_func_5014 *)&LAB_14447a737);
        _Init_thread_footer(&DAT_14cc02e00);
      }
      FUN_140474144(&local_48,&DAT_14cc02df0,param_3);
      if (&local_48 == param_3) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
      }
      iVar1 = (int)param_3[1] + -1;
      if ((int)param_3[1] == 0) {
        iVar1 = 0;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14910c44e FUN_14910c44e body=224 status=ok
// SIG undefined FUN_14910c44e(void)

void FUN_14910c44e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910c530(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c530 FUN_14910c530 body=132 status=ok
// SIG undefined FUN_14910c530(void)

void FUN_14910c530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_14910c290(0,param_2,&local_28);
  puVar1 = local_28;
  if ((int)uStack_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar1,1);
  *param_3 = local_30;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14910c5b6 FUN_14910c5b6 body=46 status=ok
// SIG undefined FUN_14910c5b6(void)

undefined8 FUN_14910c5b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_14669effa();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 14910c5e4 FUN_14910c5e4 body=46 status=ok
// SIG undefined FUN_14910c5e4(void)

undefined8 FUN_14910c5e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_14669f24c();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 14910c612 FUN_14910c612 body=168 status=ok
// SIG undefined FUN_14910c612(void)

undefined8 FUN_14910c612(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x438) = 0x50000000d;
  FUN_14910c530(0xd,5,param_1 + 0x440);
  FUN_140056680(local_28,L"unexpected result");
  uVar1 = FUN_1402ca054(*(undefined8 *)(param_1 + 0x440),L"00013",5);
  FUN_146802182(param_1,uVar1,local_28,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c6cc FUN_14910c6cc body=228 status=ok
// SIG undefined FUN_14910c6cc(void)

void FUN_14910c6cc(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1448ac920(param_1 + 0x90,param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c7c2 FUN_14910c7c2 body=225 status=ok
// SIG undefined FUN_14910c7c2(void)

void FUN_14910c7c2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910c8a4(param_1 + 0x10,param_1 + 0x70);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910c8a4 FUN_14910c8a4 body=363 status=ok
// SIG undefined FUN_14910c8a4(void)

void FUN_14910c8a4(double *param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar7 = param_1[2];
  dVar12 = param_1[4];
  dVar13 = param_1[5];
  dVar8 = param_1[6];
  dVar18 = dVar6 + dVar6;
  dVar14 = dVar7 + dVar7;
  dVar3 = dVar5 * (dVar5 + dVar5);
  dVar9 = param_1[8];
  dVar10 = param_1[9];
  dVar11 = param_1[10];
  dVar1 = *param_1;
  dVar17 = param_1[3];
  dVar15 = dVar14 * dVar17;
  dVar16 = (dVar5 + dVar5) * param_1[3];
  dVar17 = dVar18 * dVar17;
  dVar4 = (dVar18 * dVar5 + dVar15) * dVar9;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (1.0 - (dVar7 * dVar14 + dVar6 * dVar18)) * dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = (dVar1 * dVar14 - dVar17) * dVar9;
  *(undefined8 *)(param_2[1] + 8) = 0;
  *(double *)param_2[2] = (dVar18 * dVar5 - dVar15) * dVar10;
  *(double *)(param_2[2] + 8) = (1.0 - (dVar7 * dVar14 + dVar3)) * dVar10;
  *(double *)param_2[3] = (dVar14 * dVar6 + dVar16) * dVar10;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(double *)param_2[4] = (dVar17 + dVar1 * dVar14) * dVar11;
  *(double *)(param_2[4] + 8) = (dVar14 * dVar6 - dVar16) * dVar11;
  *(double *)param_2[5] = (1.0 - (dVar3 + dVar6 * dVar18)) * dVar11;
  *(undefined8 *)(param_2[5] + 8) = 0;
  *(double *)param_2[6] = dVar12;
  *(double *)(param_2[6] + 8) = dVar13;
  *(double *)param_2[7] = dVar8;
  *(undefined8 *)(param_2[7] + 8) = 0x3ff0000000000000;
  return;
}



// FUNCTION 14910ca20 FUN_14910ca20 body=225 status=ok
// SIG undefined FUN_14910ca20(void)

void FUN_14910ca20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910cb02(param_1 + 0x10,param_1 + 0x70);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910cb02 FUN_14910cb02 body=363 status=ok
// SIG undefined FUN_14910cb02(void)

void FUN_14910cb02(double *param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar7 = param_1[2];
  dVar12 = param_1[4];
  dVar13 = param_1[5];
  dVar8 = param_1[6];
  dVar18 = dVar6 + dVar6;
  dVar14 = dVar7 + dVar7;
  dVar3 = dVar5 * (dVar5 + dVar5);
  dVar9 = param_1[8];
  dVar10 = param_1[9];
  dVar11 = param_1[10];
  dVar1 = *param_1;
  dVar17 = param_1[3];
  dVar15 = dVar14 * dVar17;
  dVar16 = (dVar5 + dVar5) * param_1[3];
  dVar17 = dVar18 * dVar17;
  dVar4 = (dVar18 * dVar5 + dVar15) * dVar9;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (1.0 - (dVar7 * dVar14 + dVar6 * dVar18)) * dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = (dVar1 * dVar14 - dVar17) * dVar9;
  *(undefined8 *)(param_2[1] + 8) = 0;
  *(double *)param_2[2] = (dVar18 * dVar5 - dVar15) * dVar10;
  *(double *)(param_2[2] + 8) = (1.0 - (dVar7 * dVar14 + dVar3)) * dVar10;
  *(double *)param_2[3] = (dVar14 * dVar6 + dVar16) * dVar10;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(double *)param_2[4] = (dVar17 + dVar1 * dVar14) * dVar11;
  *(double *)(param_2[4] + 8) = (dVar14 * dVar6 - dVar16) * dVar11;
  *(double *)param_2[5] = (1.0 - (dVar3 + dVar6 * dVar18)) * dVar11;
  *(undefined8 *)(param_2[5] + 8) = 0;
  *(double *)param_2[6] = dVar12;
  *(double *)(param_2[6] + 8) = dVar13;
  *(double *)param_2[7] = dVar8;
  *(undefined8 *)(param_2[7] + 8) = 0x3ff0000000000000;
  return;
}



// FUNCTION 14910ccd0 FUN_14910ccd0 body=323 status=ok
// SIG undefined FUN_14910ccd0(void)

void FUN_14910ccd0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ce14 FUN_14910ce14 body=187 status=ok
// SIG undefined FUN_14910ce14(void)

void FUN_14910ce14(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar16 = DAT_14c8464f0;
  uVar15 = DAT_14c8464e8;
  uVar14 = DAT_14c8464e0;
  param_2 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[4];
  puVar6 = (undefined8 *)param_2[8];
  puVar7 = (undefined8 *)param_2[0xc];
  puVar8 = (undefined8 *)param_2[0x10];
  uVar9 = puVar5[1];
  uVar1 = puVar5[2];
  uVar10 = *puVar6;
  uVar11 = puVar6[1];
  uVar2 = puVar6[2];
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  uVar3 = puVar7[2];
  *puVar8 = *puVar5;
  puVar8[1] = uVar9;
  puVar8[2] = uVar1;
  puVar8[3] = 0;
  puVar8[4] = uVar10;
  puVar8[5] = uVar11;
  puVar8[6] = uVar2;
  puVar8[7] = 0;
  puVar8[8] = uVar12;
  puVar8[9] = uVar13;
  puVar8[10] = uVar3;
  puVar8[0xb] = 0;
  puVar8[0xc] = uVar14;
  puVar8[0xd] = uVar15;
  puVar8[0xe] = uVar16;
  puVar8[0xf] = 0x3ff0000000000000;
  puVar8[0xc] = *puVar4;
  puVar8[0xd] = puVar4[1];
  puVar8[0xe] = puVar4[2];
  return;
}



// FUNCTION 14910ced0 FUN_14910ced0 body=217 status=ok
// SIG undefined FUN_14910ced0(void)

void FUN_14910ced0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910cfaa(param_1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910cfaa FUN_14910cfaa body=134 status=ok
// SIG undefined FUN_14910cfaa(void)

void FUN_14910cfaa(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14910d030 FUN_14910d030 body=97 status=ok
// SIG undefined FUN_14910d030(void)

void FUN_14910d030(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)puVar2[8];
  FUN_1447fea8d(local_98,*puVar2,puVar2[4]);
  puVar2 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d092 FUN_14910d092 body=258 status=ok
// SIG undefined FUN_14910d092(void)

void FUN_14910d092(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148 [12];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b8 = &PTR_FUN_14bad5c20;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_19c = 0;
  uStack_194 = 0;
  local_18c = 0;
  local_188 = 0x3f91111111111111;
  local_180 = 0x800;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_148;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1490d751a(&local_1b8);
  FUN_1447fea8d(local_a8,param_1 + 0x10,param_1 + 0x90);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0x110);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ceac(&local_1b8);
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d196 FUN_14910d196 body=93 status=ok
// SIG undefined FUN_14910d196(void)

void FUN_14910d196(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)((undefined8 *)*param_2)[4];
  FUN_14494412e(*(undefined8 *)*param_2,local_98);
  puVar2 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d1f4 FUN_14910d1f4 body=251 status=ok
// SIG undefined FUN_14910d1f4(void)

void FUN_14910d1f4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148 [12];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b8 = &PTR_FUN_14bad5c20;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_19c = 0;
  uStack_194 = 0;
  local_18c = 0;
  local_188 = 0x3f91111111111111;
  local_180 = 0x800;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_148;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1490d751a(&local_1b8);
  FUN_14494412e(param_1 + 0x10,local_a8);
  puVar2 = local_a8;
  puVar3 = (undefined8 *)(param_1 + 0x90);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ceac(&local_1b8);
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d2f0 FUN_14910d2f0 body=279 status=ok
// SIG undefined FUN_14910d2f0(void)

longlong FUN_14910d2f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [40];
  longlong local_150 [2];
  longlong local_140 [2];
  longlong *local_130;
  longlong *local_128;
  undefined1 local_11c [4];
  undefined **local_118 [2];
  undefined8 local_108 [12];
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118[0] = &PTR_FUN_14bb1bc10;
  puVar2 = &DAT_14c846400;
  puVar3 = local_a8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14910d408(param_2,local_118);
  FUN_140056680(local_140,L"Value");
  FUN_140056680(local_150,L"Transform");
  local_130 = local_150;
  local_128 = local_140;
  FUN_140ac5c08(param_2 + 0x30,local_11c,&local_130,0);
  local_130 = local_150;
  local_128 = local_140;
  FUN_140ac5c08(param_2 + 0x80,local_11c,&local_130,0);
  if (local_150[0] != 0) {
    FUN_1400020a8();
  }
  if (local_140[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d408 FUN_14910d408 body=211 status=ok
// SIG undefined FUN_14910d408(void)

undefined8 * FUN_14910d408(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466a0ade();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a0cdc();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14910d51c FUN_14910d51c body=252 status=ok
// SIG undefined FUN_14910d51c(void)

void FUN_14910d51c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x20) = (double)*(float *)(param_1 + 8);
  *(double *)(param_1 + 0x28) = (double)*(float *)(param_1 + 0xc);
  *(double *)(param_1 + 0x30) = (double)*(float *)(param_1 + 0x10);
  *(double *)(param_1 + 0x38) = (double)*(float *)(param_1 + 0x14);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d632 FUN_14910d632 body=230 status=ok
// SIG undefined FUN_14910d632(void)

void FUN_14910d632(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910d71a(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x30);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d71a FUN_14910d71a body=316 status=ok
// SIG undefined FUN_14910d71a(void)

void FUN_14910d71a(double *param_1,float param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = DAT_14c8463e8;
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar2))) ||
     (9.999999747378752e-05 < ABS(dVar3))) {
    dVar6 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    dVar4 = sin((double)param_2 * 0.5);
    dVar5 = cos((double)param_2 * 0.5);
    *param_3 = dVar6 * dVar1 * dVar4;
    param_3[1] = dVar2 * dVar6 * dVar4;
    param_3[2] = dVar3 * dVar6 * dVar4;
    param_3[3] = dVar5;
  }
  else {
    param_3[2] = DAT_14c8463e0;
    param_3[3] = dVar4;
    dVar1 = DAT_14c8463d8;
    *param_3 = DAT_14c8463d0;
    param_3[1] = dVar1;
  }
  return;
}



// FUNCTION 14910d856 FUN_14910d856 body=97 status=ok
// SIG undefined FUN_14910d856(void)

void FUN_14910d856(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined4 *)puVar1[8];
  FUN_14690c017(&local_38,*puVar1,*(undefined1 *)puVar1[4],0);
  puVar2[4] = local_28;
  puVar2[5] = uStack_24;
  puVar2[6] = uStack_20;
  puVar2[7] = uStack_1c;
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d8b8 FUN_14910d8b8 body=251 status=ok
// SIG undefined FUN_14910d8b8(void)

void FUN_14910d8b8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  FUN_14690c017(&local_48,param_1 + 8,*(undefined1 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x40) = local_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  *(undefined4 *)(param_1 + 0x48) = uStack_30;
  *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x30) = local_48;
  *(undefined4 *)(param_1 + 0x34) = uStack_44;
  *(undefined4 *)(param_1 + 0x38) = uStack_40;
  *(undefined4 *)(param_1 + 0x3c) = uStack_3c;
  FUN_140f8ceac(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910d9b4 FUN_14910d9b4 body=244 status=ok
// SIG undefined FUN_14910d9b4(void)

void FUN_14910d9b4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  FUN_144a7484c(param_1 + 8,&local_48);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x20) = local_48;
  *(undefined4 *)(param_1 + 0x24) = uStack_44;
  *(undefined4 *)(param_1 + 0x28) = uStack_40;
  *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
  FUN_140f8ceac(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910daaa FUN_14910daaa body=87 status=ok
// SIG undefined FUN_14910daaa(void)

void FUN_14910daaa(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_144a7484c(*(undefined8 *)*param_2,&local_38);
  puVar1[4] = local_28;
  puVar1[5] = uStack_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910db02 FUN_14910db02 body=244 status=ok
// SIG undefined FUN_14910db02(void)

void FUN_14910db02(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  FUN_144a7484c(param_1 + 8,&local_48);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x20) = local_48;
  *(undefined4 *)(param_1 + 0x24) = uStack_44;
  *(undefined4 *)(param_1 + 0x28) = uStack_40;
  *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
  FUN_140f8ceac(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910dc0c FUN_14910dc0c body=229 status=ok
// SIG undefined FUN_14910dc0c(void)

void FUN_14910dc0c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910dcf2(param_1 + 8,param_1 + 0x20,param_1 + 0x40);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910dcf2 FUN_14910dcf2 body=248 status=ok
// SIG undefined FUN_14910dcf2(void)

void FUN_14910dcf2(double *param_1,double *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = DAT_14c8463e8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((9.999999747378752e-05 < ABS(*param_1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
      (9.999999747378752e-05 < ABS(param_1[2]))) &&
     (((9.999999747378752e-05 < ABS(*param_2) || (9.999999747378752e-05 < ABS(param_2[1]))) ||
      (9.999999747378752e-05 < ABS(param_2[2]))))) {
    FUN_14915c690(&local_38,param_1);
    *(undefined8 *)(param_3 + 4) = local_28;
    *(undefined8 *)(param_3 + 6) = uStack_20;
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *(undefined8 *)(param_3 + 4) = DAT_14c8463e0;
  *(undefined8 *)(param_3 + 6) = uVar4;
  uVar3 = DAT_14c8463d8._4_4_;
  uVar2 = (undefined4)DAT_14c8463d8;
  uVar1 = DAT_14c8463d0._4_4_;
  *param_3 = (undefined4)DAT_14c8463d0;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14910de02 FUN_14910de02 body=229 status=ok
// SIG undefined FUN_14910de02(void)

void FUN_14910de02(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910dee8(param_1 + 0x10,param_1 + 0x30,param_1 + 0x48);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910dee8 FUN_14910dee8 body=530 status=ok
// SIG undefined FUN_14910dee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910dee8(double *param_1,undefined1 (*param_2) [16],float *param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14 = _DAT_149934d80;
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar4 = param_1[2];
  dVar12 = param_1[3];
  dVar7 = dVar4 * dVar4 + dVar1 * dVar1;
  dVar10 = dVar12 * dVar12 + dVar2 * dVar2;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar9);
  auVar11._0_8_ = auVar9._0_8_ * dVar4;
  auVar11._8_8_ = auVar9._8_8_ * dVar12;
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar11,auVar13);
  dVar1 = (double)((ulonglong)(dVar1 * auVar9._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_));
  dVar2 = (double)((ulonglong)(dVar2 * auVar9._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_));
  dVar12 = auVar13._0_8_;
  dVar7 = auVar13._8_8_;
  dVar4 = dVar7;
  if (1.0 <= dVar7) {
    dVar4 = 1.0;
  }
  dVar4 = acos((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar4));
  dVar7 = dVar12 * dVar12 + dVar1 * dVar1;
  dVar10 = dVar2 * dVar2 + 0.0;
  auVar6._0_8_ = dVar7 + dVar10;
  auVar6._8_8_ = dVar7 + dVar10;
  *param_3 = (float)(dVar4 + dVar4);
  auVar9._8_8_ = -(ulonglong)(1e-08 <= auVar6._8_8_);
  auVar9._0_8_ = -(ulonglong)(1e-08 <= auVar6._0_8_);
  auVar13 = sqrtpd(auVar6,auVar6);
  auVar13 = divpd(auVar14,auVar13);
  dVar2 = dVar2 * auVar13._8_8_;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar1 * auVar13._0_8_;
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14 = blendvpd(ZEXT816(0x3ff0000000000000),auVar14,auVar9);
  if ((-(ulonglong)(1e-08 <= auVar6._0_8_) & 1) == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar12 * auVar13._0_8_;
  }
  *param_2 = auVar14;
  *(double *)param_2[1] = dVar12;
  if (((ABS(auVar14._0_8_) <= 9.999999747378752e-05) &&
      (ABS(auVar14._8_8_) <= 9.999999747378752e-05)) && (ABS(dVar12) <= 9.999999747378752e-05)) {
    *(undefined8 *)*param_2 = 0x3ff0000000000000;
    *(undefined8 *)(*param_2 + 8) = 0;
    *(undefined8 *)param_2[1] = 0;
    *param_3 = 0.0;
  }
  fVar5 = *param_3;
  fVar3 = ABS(fVar5);
  *param_3 = fVar3;
  if (6.2831855 < fVar3) {
    fVar3 = (float)FUN_1447c7e44();
  }
  fVar5 = *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar5 < 0.0) * 4);
  if (3.1415927 < fVar3) {
    fVar5 = -fVar5;
  }
  *param_3 = fVar5 * (float)(~-(uint)(3.1415927 < fVar3) & (uint)fVar3 |
                            (uint)(6.2831855 - fVar3) & -(uint)(3.1415927 < fVar3));
  return;
}



// FUNCTION 14910e112 FUN_14910e112 body=233 status=ok
// SIG undefined FUN_14910e112(void)

void FUN_14910e112(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910e1fc(param_1 + 0x10,param_1 + 0x30,param_1 + 0x48,param_1 + 0x60);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910e1fc FUN_14910e1fc body=819 status=ok
// SIG undefined FUN_14910e1fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910e1fc(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = *param_1;
  dVar11 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar5 = dVar2 * dVar2 + dVar1 * dVar1;
  dVar9 = dVar3 * dVar3 + dVar11 * dVar11;
  auVar7._0_8_ = dVar5 + dVar9;
  auVar7._8_8_ = dVar5 + dVar9;
  uVar4 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar8);
  auVar10._0_8_ = auVar8._0_8_ * dVar2;
  auVar10._8_8_ = auVar8._8_8_ * dVar3;
  dVar5 = (double)((ulonglong)(dVar1 * auVar8._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_));
  dVar9 = (double)((ulonglong)(dVar11 * auVar8._8_8_) & uVar4);
  auVar8._8_4_ = (int)uVar4;
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar8._12_4_ = (int)(uVar4 >> 0x20);
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar8);
  dVar12 = auVar8._0_8_;
  dVar1 = dVar12 + dVar5 * -0.0;
  dVar2 = dVar9 * 0.0 + dVar12 * -0.0;
  dVar1 = dVar1 + dVar1;
  dVar2 = dVar2 + dVar2;
  dVar13 = auVar8._8_8_;
  dVar3 = dVar5 + dVar9 * -0.0;
  dVar6 = dVar9 * -0.0 + dVar5 * 0.0;
  dVar11 = dVar5 * 0.0 - dVar9;
  dVar11 = dVar11 + dVar11;
  *param_2 = (dVar9 * dVar11 - dVar1 * dVar12) + dVar13 * dVar2 + 1.0;
  param_2[1] = (dVar12 * dVar2 - dVar11 * dVar5) + dVar13 * dVar1 + 0.0;
  param_2[2] = (dVar5 * dVar1 - dVar2 * dVar9) + dVar13 * dVar11 + 0.0;
  dVar1 = dVar5 * -0.0 + dVar12 * 0.0;
  dVar11 = dVar9 * 0.0 - dVar12;
  dVar3 = dVar3 + dVar3;
  dVar1 = dVar1 + dVar1;
  dVar11 = dVar11 + dVar11;
  *param_3 = (dVar9 * dVar3 - dVar1 * dVar12) + dVar13 * dVar11 + 0.0;
  param_3[1] = (dVar12 * dVar11 - dVar3 * dVar5) + dVar13 * dVar1 + 1.0;
  param_3[2] = (dVar5 * dVar1 - dVar11 * dVar9) + dVar13 * dVar3 + 0.0;
  dVar11 = dVar12 * 0.0 - dVar5;
  dVar1 = dVar12 * -0.0 + dVar9;
  dVar6 = dVar6 + dVar6;
  dVar11 = dVar11 + dVar11;
  dVar1 = dVar1 + dVar1;
  *param_4 = (dVar9 * dVar6 - dVar11 * dVar12) + dVar13 * dVar1 + 0.0;
  param_4[1] = (dVar12 * dVar1 - dVar6 * dVar5) + dVar13 * dVar11 + 0.0;
  param_4[2] = (dVar5 * dVar11 - dVar1 * dVar9) + dVar13 * dVar6 + 1.0;
  return;
}



// FUNCTION 14910e530 FUN_14910e530 body=327 status=ok
// SIG undefined FUN_14910e530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910e530(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  pdVar2 = *(double **)*param_2;
  fVar1 = *(float *)((longlong *)*param_2)[4];
  dVar4 = pdVar2[3];
  dVar6 = dVar4;
  if (1.0 <= dVar4) {
    dVar6 = 1.0;
  }
  dVar3 = acos((double)(~-(ulonglong)(dVar4 < -1.0) & (ulonglong)dVar6 |
                       -(ulonglong)(dVar4 < -1.0) & 0xbff0000000000000));
  dVar4 = *pdVar2;
  dVar6 = pdVar2[1];
  dVar12 = pdVar2[2];
  dVar7 = dVar12 * dVar12 + dVar4 * dVar4;
  dVar10 = dVar6 * dVar6 + 0.0;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  auVar5._8_8_ = -(ulonglong)(1e-08 <= auVar8._8_8_);
  auVar5._0_8_ = -(ulonglong)(1e-08 <= auVar8._0_8_);
  auVar11 = sqrtpd(in_XMM4,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar11);
  auVar11._8_8_ = dVar6 * auVar9._8_8_;
  auVar11._0_8_ = dVar4 * auVar9._0_8_;
  auVar11 = blendvpd(ZEXT816(0x3ff0000000000000),auVar11,auVar5);
  if ((-(ulonglong)(1e-08 <= auVar8._0_8_) & 1) == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar12 * auVar9._0_8_;
  }
  dVar4 = (double)(fVar1 * (float)(dVar3 + dVar3)) * 0.5;
  dVar6 = sin(dVar4);
  dVar4 = cos(dVar4);
  *pdVar2 = auVar11._0_8_ * dVar6;
  pdVar2[1] = auVar11._8_8_ * dVar6;
  pdVar2[2] = dVar12 * dVar6;
  pdVar2[3] = dVar4;
  return;
}



// FUNCTION 14910e678 FUN_14910e678 body=217 status=ok
// SIG undefined FUN_14910e678(void)

void FUN_14910e678(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910e752(param_1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910e752 FUN_14910e752 body=323 status=ok
// SIG undefined FUN_14910e752(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910e752(longlong param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  fVar1 = *(float *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar5 = dVar3;
  if (1.0 <= dVar3) {
    dVar5 = 1.0;
  }
  dVar2 = acos((double)(~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar5 |
                       -(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000));
  dVar3 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x18);
  dVar11 = *(double *)(param_1 + 0x20);
  dVar6 = dVar11 * dVar11 + dVar3 * dVar3;
  dVar9 = dVar5 * dVar5 + 0.0;
  auVar7._0_8_ = dVar6 + dVar9;
  auVar7._8_8_ = dVar6 + dVar9;
  auVar4._8_8_ = -(ulonglong)(1e-08 <= auVar7._8_8_);
  auVar4._0_8_ = -(ulonglong)(1e-08 <= auVar7._0_8_);
  auVar10 = sqrtpd(in_XMM4,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar10);
  auVar10._8_8_ = dVar5 * auVar8._8_8_;
  auVar10._0_8_ = dVar3 * auVar8._0_8_;
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000),auVar10,auVar4);
  if ((-(ulonglong)(1e-08 <= auVar7._0_8_) & 1) == 0) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar11 * auVar8._0_8_;
  }
  dVar3 = (double)(fVar1 * (float)(dVar2 + dVar2)) * 0.5;
  dVar5 = sin(dVar3);
  dVar3 = cos(dVar3);
  *(double *)(param_1 + 0x10) = auVar10._0_8_ * dVar5;
  *(double *)(param_1 + 0x18) = auVar10._8_8_ * dVar5;
  *(double *)(param_1 + 0x20) = dVar11 * dVar5;
  *(double *)(param_1 + 0x28) = dVar3;
  return;
}



// FUNCTION 14910e896 FUN_14910e896 body=333 status=ok
// SIG undefined FUN_14910e896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910e896(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  double dVar13;
  
  param_2 = (longlong *)*param_2;
  pdVar2 = (double *)*param_2;
  fVar1 = *(float *)param_2[4];
  pdVar3 = (double *)param_2[8];
  dVar5 = pdVar2[3];
  dVar7 = dVar5;
  if (1.0 <= dVar5) {
    dVar7 = 1.0;
  }
  dVar4 = acos((double)(~-(ulonglong)(dVar5 < -1.0) & (ulonglong)dVar7 |
                       -(ulonglong)(dVar5 < -1.0) & 0xbff0000000000000));
  dVar5 = *pdVar2;
  dVar7 = pdVar2[1];
  dVar13 = pdVar2[2];
  dVar8 = dVar13 * dVar13 + dVar5 * dVar5;
  dVar11 = dVar7 * dVar7 + 0.0;
  auVar9._0_8_ = dVar8 + dVar11;
  auVar9._8_8_ = dVar8 + dVar11;
  auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
  auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
  auVar12 = sqrtpd(in_XMM4,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar12);
  auVar12._8_8_ = dVar7 * auVar10._8_8_;
  auVar12._0_8_ = dVar5 * auVar10._0_8_;
  auVar12 = blendvpd(ZEXT816(0x3ff0000000000000),auVar12,auVar6);
  if ((-(ulonglong)(1e-08 <= auVar9._0_8_) & 1) == 0) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar13 * auVar10._0_8_;
  }
  dVar5 = (double)(fVar1 * (float)(dVar4 + dVar4)) * 0.5;
  dVar7 = sin(dVar5);
  dVar5 = cos(dVar5);
  *pdVar3 = auVar12._0_8_ * dVar7;
  pdVar3[1] = auVar12._8_8_ * dVar7;
  pdVar3[2] = dVar13 * dVar7;
  pdVar3[3] = dVar5;
  return;
}



// FUNCTION 14910e9e4 FUN_14910e9e4 body=217 status=ok
// SIG undefined FUN_14910e9e4(void)

void FUN_14910e9e4(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910eabe(param_1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910eabe FUN_14910eabe body=323 status=ok
// SIG undefined FUN_14910eabe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910eabe(longlong param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  fVar1 = *(float *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x28);
  dVar5 = dVar3;
  if (1.0 <= dVar3) {
    dVar5 = 1.0;
  }
  dVar2 = acos((double)(~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar5 |
                       -(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000));
  dVar3 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x18);
  dVar11 = *(double *)(param_1 + 0x20);
  dVar6 = dVar11 * dVar11 + dVar3 * dVar3;
  dVar9 = dVar5 * dVar5 + 0.0;
  auVar7._0_8_ = dVar6 + dVar9;
  auVar7._8_8_ = dVar6 + dVar9;
  auVar4._8_8_ = -(ulonglong)(1e-08 <= auVar7._8_8_);
  auVar4._0_8_ = -(ulonglong)(1e-08 <= auVar7._0_8_);
  auVar10 = sqrtpd(in_XMM4,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar10);
  auVar10._8_8_ = dVar5 * auVar8._8_8_;
  auVar10._0_8_ = dVar3 * auVar8._0_8_;
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000),auVar10,auVar4);
  if ((-(ulonglong)(1e-08 <= auVar7._0_8_) & 1) == 0) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar11 * auVar8._0_8_;
  }
  dVar3 = (double)(fVar1 * (float)(dVar2 + dVar2)) * 0.5;
  dVar5 = sin(dVar3);
  dVar3 = cos(dVar3);
  *(double *)(param_1 + 0x40) = auVar10._0_8_ * dVar5;
  *(double *)(param_1 + 0x48) = auVar10._8_8_ * dVar5;
  *(double *)(param_1 + 0x50) = dVar11 * dVar5;
  *(double *)(param_1 + 0x58) = dVar3;
  return;
}



// FUNCTION 14910ec02 FUN_14910ec02 body=97 status=ok
// SIG undefined FUN_14910ec02(void)

void FUN_14910ec02(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined4 *)puVar1[8];
  FUN_14690c377(&local_30,*puVar1,*(undefined1 *)puVar1[4],0);
  *(undefined8 *)(puVar2 + 4) = local_20;
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ec64 FUN_14910ec64 body=251 status=ok
// SIG undefined FUN_14910ec64(void)

void FUN_14910ec64(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  FUN_14690c377(&local_38,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x48) = local_28;
  *(undefined4 *)(param_1 + 0x38) = local_38;
  *(undefined4 *)(param_1 + 0x3c) = uStack_34;
  *(undefined4 *)(param_1 + 0x40) = uStack_30;
  *(undefined4 *)(param_1 + 0x44) = uStack_2c;
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910ed60 FUN_14910ed60 body=87 status=ok
// SIG undefined FUN_14910ed60(void)

void FUN_14910ed60(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_1448052ee(*(undefined8 *)*param_2,&local_30);
  *(undefined8 *)(puVar1 + 4) = local_20;
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910edb8 FUN_14910edb8 body=244 status=ok
// SIG undefined FUN_14910edb8(void)

void FUN_14910edb8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  FUN_1448052ee(param_1 + 0x10,&local_38);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910eeae FUN_14910eeae body=200 status=ok
// SIG undefined FUN_14910eeae(void)

void FUN_14910eeae(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  param_2 = (undefined8 *)*param_2;
  pdVar9 = (double *)*param_2;
  pdVar10 = (double *)param_2[4];
  pdVar11 = (double *)param_2[8];
  dVar12 = *pdVar10;
  dVar13 = pdVar10[1];
  dVar14 = pdVar10[2];
  dVar15 = pdVar10[3];
  dVar1 = pdVar9[3];
  dVar2 = pdVar9[3];
  dVar3 = pdVar9[1];
  dVar4 = pdVar9[1];
  dVar5 = *pdVar9;
  dVar6 = *pdVar9;
  dVar7 = pdVar9[2];
  dVar8 = pdVar9[2];
  *pdVar11 = dVar13 * dVar7 * -1.0 + dVar14 * dVar3 + dVar5 * dVar15 * 1.0 + dVar1 * dVar12;
  pdVar11[1] = dVar12 * dVar8 * 1.0 + dVar15 * dVar4 + dVar6 * dVar14 * -1.0 + dVar2 * dVar13;
  pdVar11[2] = dVar15 * dVar7 * 1.0 + ((dVar5 * dVar13 * 1.0 + dVar1 * dVar14) - dVar3 * dVar12);
  pdVar11[3] = dVar14 * dVar8 * -1.0 + ((dVar6 * dVar12 * -1.0 + dVar2 * dVar15) - dVar4 * dVar13);
  return;
}



// FUNCTION 14910ef76 FUN_14910ef76 body=409 status=ok
// SIG undefined FUN_14910ef76(void)

void FUN_14910ef76(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar14 = &DAT_14c846480;
  puVar15 = local_f8;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  dVar9 = *(double *)(param_1 + 0x30);
  dVar10 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x40);
  dVar12 = *(double *)(param_1 + 0x48);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x18);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x10);
  dVar7 = *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x50) =
       dVar10 * dVar7 * -1.0 + dVar11 * dVar3 + dVar5 * dVar12 * 1.0 + dVar1 * dVar9;
  *(double *)(param_1 + 0x58) =
       dVar9 * dVar8 * 1.0 + dVar12 * dVar4 + dVar6 * dVar11 * -1.0 + dVar2 * dVar10;
  *(double *)(param_1 + 0x60) =
       dVar12 * dVar7 * 1.0 + ((dVar5 * dVar10 * 1.0 + dVar1 * dVar11) - dVar3 * dVar9);
  *(double *)(param_1 + 0x68) =
       dVar11 * dVar8 * -1.0 + ((dVar6 * dVar9 * -1.0 + dVar2 * dVar12) - dVar4 * dVar10);
  FUN_140f8ceac(&local_168);
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f110 FUN_14910f110 body=242 status=ok
// SIG undefined FUN_14910f110(void)

void FUN_14910f110(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x14) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x1c) ^ 0x80000000;
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x20) * -1.0;
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x28) * 1.0;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f204 FUN_14910f204 body=361 status=ok
// SIG undefined FUN_14910f204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910f204(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  FUN_144a44da6(&local_58,param_1 + 0x10,param_1 + 0x30,(double)*(float *)(param_1 + 0x50));
  dVar4 = local_48 * local_48 + local_58 * local_58;
  dVar7 = dStack_40 * dStack_40 + dStack_50 * dStack_50;
  auVar5._0_8_ = dVar4 + dVar7;
  auVar5._8_8_ = dVar4 + dVar7;
  auVar6 = sqrtpd(auVar5,auVar5);
  auVar8 = divpd(_DAT_149934d80,auVar6);
  auVar9._0_8_ = auVar8._0_8_ * local_48;
  auVar9._8_8_ = auVar8._8_8_ * dStack_40;
  auVar6._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar5._8_8_);
  auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_);
  auVar6 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar6);
  *(ulonglong *)(param_1 + 0x60) =
       (ulonglong)(local_58 * auVar8._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_);
  *(ulonglong *)(param_1 + 0x68) =
       (ulonglong)(dStack_50 * auVar8._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar5._8_8_);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar6;
  FUN_140f8ceac(&local_168);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f3a8 FUN_14910f3a8 body=249 status=ok
// SIG undefined FUN_14910f3a8(void)

void FUN_14910f3a8(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar8 = &DAT_14c846480;
  puVar9 = local_c8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pppuVar7 = &local_138;
  uVar3 = FUN_1490d751a();
  lVar6 = -(ulonglong)(*(double *)(param_1 + 0x38) == *(double *)(param_1 + 0x18));
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x30) == *(double *)(param_1 + 0x10));
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar4 = movmskpd(uVar3,auVar1);
  auVar2._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x48) == *(double *)(param_1 + 0x28));
  auVar2._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x40) == *(double *)(param_1 + 0x20));
  iVar5 = movmskpd((int)pppuVar7,auVar2);
  *(bool *)(param_1 + 0x50) = iVar4 + iVar5 * 4 == 0xf;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f4dc FUN_14910f4dc body=248 status=ok
// SIG undefined FUN_14910f4dc(void)

void FUN_14910f4dc(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar8 = &DAT_14c846480;
  puVar9 = local_c8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pppuVar7 = &local_138;
  uVar3 = FUN_1490d751a();
  lVar6 = -(ulonglong)(*(double *)(param_1 + 0x38) != *(double *)(param_1 + 0x18));
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x30) != *(double *)(param_1 + 0x10));
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar4 = movmskpd(uVar3,auVar1);
  auVar2._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x48) != *(double *)(param_1 + 0x28));
  auVar2._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x40) != *(double *)(param_1 + 0x20));
  uVar5 = movmskpd((int)pppuVar7,auVar2);
  *(bool *)(param_1 + 0x50) = (uVar5 & 0x3fffffff) != 0 || iVar4 != 0;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f604 FUN_14910f604 body=237 status=ok
// SIG undefined FUN_14910f604(void)

void FUN_14910f604(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar12 = &DAT_14c846480;
  puVar13 = local_c8;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar10 = (ulonglong)((*(byte *)(param_1 + 8) ^ 1) << 5);
  puVar1 = (undefined4 *)(param_1 + 0x10 + uVar10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0x20 + uVar10);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(undefined4 *)(param_1 + 0x50) = *puVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f73c FUN_14910f73c body=270 status=ok
// SIG undefined FUN_14910f73c(void)

void FUN_14910f73c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x50) =
       (float)(*(double *)(param_1 + 0x28) * *(double *)(param_1 + 0x48) +
              *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x40) +
              *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x30) +
              *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x38));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910f8bc FUN_14910f8bc body=333 status=ok
// SIG undefined FUN_14910f8bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14910f8bc(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_d8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar11 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar9._0_8_ = dVar8 + dVar11;
  auVar9._8_8_ = dVar8 + dVar11;
  auVar10 = sqrtpd(auVar9,auVar9);
  auVar12 = divpd(_DAT_149934d80,auVar10);
  auVar13._0_8_ = auVar12._0_8_ * dVar3;
  auVar13._8_8_ = auVar12._8_8_ * dVar4;
  auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar13,auVar10);
  *(ulonglong *)(param_1 + 0x30) =
       (ulonglong)(dVar1 * auVar12._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  *(ulonglong *)(param_1 + 0x38) =
       (ulonglong)(dVar2 * auVar12._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar10;
  FUN_140f8ceac(&local_148);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910fa1e FUN_14910fa1e body=229 status=ok
// SIG undefined FUN_14910fa1e(void)

void FUN_14910fa1e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910fb04(param_1 + 0x10,param_1 + 0x30,param_1 + 0x48);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910fb04 FUN_14910fb04 body=281 status=ok
// SIG undefined FUN_14910fb04(void)

void FUN_14910fb04(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_1[2];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar8 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar7 = param_1[3];
  dVar9 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar10 = dVar10 + dVar10;
  *param_3 = (dVar6 * dVar9 - dVar10 * dVar4) + dVar8 * dVar7 + dVar1;
  param_3[1] = (dVar4 * dVar8 - dVar9 * dVar5) + dVar7 * dVar10 + dVar2;
  param_3[2] = (dVar5 * dVar10 - dVar8 * dVar6) + dVar7 * dVar9 + dVar3;
  return;
}



// FUNCTION 14910fc32 FUN_14910fc32 body=229 status=ok
// SIG undefined FUN_14910fc32(void)

void FUN_14910fc32(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14910fd18(param_1 + 0x10,param_1 + 0x30,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910fd18 FUN_14910fd18 body=504 status=ok
// SIG undefined FUN_14910fd18(void)

void FUN_14910fd18(double *param_1,char *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[3];
  if (*param_2 == '\x02') {
    dVar6 = dVar2 - dVar3 * 0.0;
    dVar5 = dVar1 * 0.0 + dVar2 * -0.0;
    dVar8 = dVar3 * 0.0 - dVar1;
    dVar6 = dVar6 + dVar6;
    dVar5 = dVar5 + dVar5;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar4 * dVar6 + 0.0;
    dVar9 = dVar4 * dVar5 + 1.0;
  }
  else {
    if (*param_2 != '\x03') {
      dVar5 = dVar1 - dVar2 * 0.0;
      dVar6 = dVar2 * 0.0 + -dVar3;
      dVar8 = dVar3 * 0.0 + dVar1 * -0.0;
      dVar6 = dVar6 + dVar6;
      dVar5 = dVar5 + dVar5;
      dVar8 = dVar8 + dVar8;
      dVar7 = dVar4 * dVar6 + 0.0;
      dVar9 = dVar4 * dVar5 + 0.0;
      dVar4 = dVar8 * dVar4 + 1.0;
      goto LAB_14910fe3b;
    }
    dVar6 = dVar2 * 0.0 + dVar3 * -0.0;
    dVar8 = dVar3 - dVar1 * 0.0;
    dVar5 = dVar1 * 0.0 - dVar2;
    dVar6 = dVar6 + dVar6;
    dVar5 = dVar5 + dVar5;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar4 * dVar6 + 1.0;
    dVar9 = dVar4 * dVar5 + 0.0;
  }
  dVar4 = dVar8 * dVar4 + 0.0;
LAB_14910fe3b:
  *param_3 = (dVar3 * dVar6 - dVar5 * dVar1) + dVar4;
  param_3[1] = (dVar8 * dVar1 - dVar6 * dVar2) + dVar9;
  param_3[2] = dVar2 * dVar5 + -dVar3 * dVar8 + dVar7;
  return;
}



// FUNCTION 14910ff10 FUN_14910ff10 body=233 status=ok
// SIG undefined FUN_14910ff10(void)

void FUN_14910ff10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_140283bc2(param_1 + 0x10,param_1 + 0x30,param_1 + 0x50,param_1 + 0x70);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14910fffc FUN_14910fffc body=204 status=ok
// SIG undefined FUN_14910fffc(void)

void FUN_14910fffc(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491100ca FUN_1491100ca body=327 status=ok
// SIG undefined FUN_1491100ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491100ca(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  ulonglong *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  
  param_2 = (longlong *)*param_2;
  pdVar1 = (double *)*param_2;
  pdVar2 = (double *)param_2[4];
  puVar3 = (ulonglong *)param_2[8];
  dVar11 = pdVar2[2] * -1.0;
  dVar13 = pdVar2[3] * 1.0;
  dVar14 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar5 = pdVar1[2];
  dVar6 = pdVar1[3];
  dVar7 = pdVar2[1];
  dVar10 = pdVar2[1];
  dVar15 = dVar4 * dVar11 * -1.0 + ((dVar14 * dVar13 - *pdVar2 * dVar6 * 1.0) - dVar5 * dVar7);
  dVar16 = dVar14 * dVar11 * 1.0 + ((dVar4 * dVar13 - *pdVar2 * dVar5 * -1.0) - dVar6 * dVar10);
  dVar12 = dVar6 * dVar11 * 1.0 + dVar7 * dVar14 + (dVar13 * dVar5 - *pdVar2 * dVar4 * 1.0);
  dVar14 = dVar5 * dVar11 * -1.0 + dVar10 * dVar4 + (dVar13 * dVar6 - *pdVar2 * dVar14 * -1.0);
  dVar7 = dVar12 * dVar12 + dVar15 * dVar15;
  dVar10 = dVar14 * dVar14 + dVar16 * dVar16;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar9);
  auVar17._0_8_ = auVar9._0_8_ * dVar12;
  auVar17._8_8_ = auVar9._8_8_ * dVar14;
  *puVar3 = (ulonglong)(dVar15 * auVar9._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  puVar3[1] = (ulonglong)(dVar16 * auVar9._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar9);
  *(undefined1 (*) [16])(puVar3 + 2) = auVar9;
  return;
}



// FUNCTION 149110212 FUN_149110212 body=577 status=ok
// SIG undefined FUN_149110212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149110212(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = &PTR_FUN_14bad5c20;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  local_168 = 0x3f91111111111111;
  local_160 = 0x800;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_128;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1490d751a(&local_198);
  dVar12 = *(double *)(param_1 + 0x40) * -1.0;
  dVar14 = *(double *)(param_1 + 0x48) * 1.0;
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar8 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x38);
  dVar13 = *(double *)(param_1 + 0x30);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar16 = dVar2 * dVar12 * -1.0 + ((dVar1 * dVar14 - dVar13 * dVar4 * 1.0) - dVar3 * dVar8);
  dVar17 = dVar1 * dVar12 * 1.0 + ((dVar2 * dVar14 - dVar15 * dVar3 * -1.0) - dVar4 * dVar11);
  dVar13 = dVar4 * dVar12 * 1.0 + dVar8 * dVar1 + (dVar14 * dVar3 - dVar13 * dVar2 * 1.0);
  dVar15 = dVar3 * dVar12 * -1.0 + dVar11 * dVar2 + (dVar14 * dVar4 - dVar15 * dVar1 * -1.0);
  dVar8 = dVar13 * dVar13 + dVar16 * dVar16;
  dVar11 = dVar15 * dVar15 + dVar17 * dVar17;
  auVar9._0_8_ = dVar8 + dVar11;
  auVar9._8_8_ = dVar8 + dVar11;
  auVar10 = sqrtpd(auVar9,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar10);
  auVar18._0_8_ = auVar10._0_8_ * dVar13;
  auVar18._8_8_ = auVar10._8_8_ * dVar15;
  *(ulonglong *)(param_1 + 0x50) =
       (ulonglong)(dVar16 * auVar10._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  *(ulonglong *)(param_1 + 0x58) =
       (ulonglong)(dVar17 * auVar10._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar10);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar10;
  FUN_140f8ceac(&local_198);
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110454 FUN_149110454 body=282 status=ok
// SIG undefined FUN_149110454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149110454(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double *pdVar3;
  double *pdVar4;
  ulonglong *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  double dVar2;
  
  param_2 = (longlong *)*param_2;
  pdVar3 = (double *)*param_2;
  pdVar4 = (double *)param_2[4];
  puVar5 = (ulonglong *)param_2[8];
  dVar6 = *pdVar3;
  dVar7 = pdVar3[1];
  dVar8 = pdVar3[2];
  dVar9 = pdVar3[3];
  dVar10 = pdVar4[3];
  dVar11 = pdVar4[3];
  dVar14 = pdVar4[1];
  dVar17 = pdVar4[1];
  dVar1 = pdVar4[2];
  dVar2 = pdVar4[2];
  dVar12 = dVar7 * dVar1 * -1.0 + dVar8 * dVar14 + *pdVar4 * dVar9 * 1.0 + dVar10 * dVar6;
  dVar13 = dVar6 * dVar2 * 1.0 + dVar9 * dVar17 + *pdVar4 * dVar8 * -1.0 + dVar11 * dVar7;
  dVar10 = dVar9 * dVar1 * 1.0 + ((*pdVar4 * dVar7 * 1.0 + dVar10 * dVar8) - dVar14 * dVar6);
  dVar11 = dVar8 * dVar2 * -1.0 + ((*pdVar4 * dVar6 * -1.0 + dVar11 * dVar9) - dVar17 * dVar7);
  dVar14 = dVar10 * dVar10 + dVar12 * dVar12;
  dVar17 = dVar11 * dVar11 + dVar13 * dVar13;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar16 = divpd(_DAT_149934d80,auVar16);
  auVar18._0_8_ = auVar16._0_8_ * dVar10;
  auVar18._8_8_ = auVar16._8_8_ * dVar11;
  *puVar5 = (ulonglong)(dVar12 * auVar16._0_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  puVar5[1] = (ulonglong)(dVar13 * auVar16._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar16);
  *(undefined1 (*) [16])(puVar5 + 2) = auVar16;
  return;
}



// FUNCTION 14911056e FUN_14911056e body=519 status=ok
// SIG undefined FUN_14911056e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14911056e(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  double dVar2;
  double dVar4;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar10 = &DAT_14c846480;
  puVar11 = local_108;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  dVar5 = *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x18);
  dVar7 = *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x28);
  dVar12 = *(double *)(param_1 + 0x48);
  dVar13 = *(double *)(param_1 + 0x48);
  dVar16 = *(double *)(param_1 + 0x38);
  dVar19 = *(double *)(param_1 + 0x38);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x40);
  dVar4 = *(double *)(param_1 + 0x40);
  dVar14 = dVar6 * dVar3 * -1.0 + dVar7 * dVar16 + dVar1 * dVar8 * 1.0 + dVar12 * dVar5;
  dVar15 = dVar5 * dVar4 * 1.0 + dVar8 * dVar19 + dVar2 * dVar7 * -1.0 + dVar13 * dVar6;
  dVar12 = dVar8 * dVar3 * 1.0 + ((dVar1 * dVar6 * 1.0 + dVar12 * dVar7) - dVar16 * dVar5);
  dVar13 = dVar7 * dVar4 * -1.0 + ((dVar2 * dVar5 * -1.0 + dVar13 * dVar8) - dVar19 * dVar6);
  dVar16 = dVar12 * dVar12 + dVar14 * dVar14;
  dVar19 = dVar13 * dVar13 + dVar15 * dVar15;
  auVar17._0_8_ = dVar16 + dVar19;
  auVar17._8_8_ = dVar16 + dVar19;
  auVar18 = sqrtpd(auVar17,auVar17);
  auVar18 = divpd(_DAT_149934d80,auVar18);
  auVar20._0_8_ = auVar18._0_8_ * dVar12;
  auVar20._8_8_ = auVar18._8_8_ * dVar13;
  *(ulonglong *)(param_1 + 0x50) =
       (ulonglong)(dVar14 * auVar18._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
  *(ulonglong *)(param_1 + 0x58) =
       (ulonglong)(dVar15 * auVar18._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
  auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
  auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
  auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar18);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar18;
  FUN_140f8ceac(&local_178);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110776 FUN_149110776 body=161 status=ok
// SIG undefined FUN_149110776(void)

void FUN_149110776(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  puVar1 = (undefined4 *)*param_2;
  lVar2 = param_2[4];
  lVar3 = param_2[8];
  lVar4 = param_2[0xc];
  puVar5 = (undefined4 *)param_2[0x10];
  local_98 = &local_88;
  puVar7 = &DAT_14c846480;
  puVar8 = local_98;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_88._0_4_ = *puVar1;
  local_88._4_4_ = puVar1[1];
  uStack_80 = puVar1[2];
  uStack_7c = puVar1[3];
  local_78 = puVar1[4];
  uStack_74 = puVar1[5];
  uStack_70 = puVar1[6];
  uStack_6c = puVar1[7];
  FUN_149110e00(local_98,lVar2,lVar3,lVar4);
  *puVar5 = (undefined4)local_88;
  puVar5[1] = local_88._4_4_;
  puVar5[2] = uStack_80;
  puVar5[3] = uStack_7c;
  puVar5[4] = local_78;
  puVar5[5] = uStack_74;
  puVar5[6] = uStack_70;
  puVar5[7] = uStack_6c;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110818 FUN_149110818 body=315 status=ok
// SIG undefined FUN_149110818(void)

void FUN_149110818(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = &PTR_FUN_14bad5c20;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_178 = 0x3f91111111111111;
  local_170 = 0x800;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1490d751a(&local_1a8);
  local_1b8 = &local_98;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_98._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_98._4_4_ = *(undefined4 *)(param_1 + 0x14);
  uStack_90 = *(undefined4 *)(param_1 + 0x18);
  uStack_8c = *(undefined4 *)(param_1 + 0x1c);
  local_88 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = *(undefined4 *)(param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_7c = *(undefined4 *)(param_1 + 0x2c);
  FUN_149110e00(local_1b8,param_1 + 0x30,param_1 + 0x31,param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0xa4) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0xa8) = uStack_90;
  *(undefined4 *)(param_1 + 0xac) = uStack_8c;
  *(undefined4 *)(param_1 + 0xb0) = local_88;
  *(undefined4 *)(param_1 + 0xb4) = uStack_84;
  *(undefined4 *)(param_1 + 0xb8) = uStack_80;
  *(undefined4 *)(param_1 + 0xbc) = uStack_7c;
  FUN_140f8ceac(&local_1a8);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110954 FUN_149110954 body=279 status=ok
// SIG undefined FUN_149110954(void)

longlong FUN_149110954(longlong param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = &PTR_FUN_14bb1f5b0;
  local_68 = DAT_14c8463d0;
  uStack_60 = DAT_14c8463d8;
  local_58 = DAT_14c8463e0;
  uStack_50 = DAT_14c8463e8;
  local_80 = *(undefined4 *)(param_1 + 8);
  uStack_7c = *(undefined4 *)(param_1 + 0xc);
  uStack_78 = *(undefined4 *)(param_1 + 0x10);
  uStack_74 = *(undefined4 *)(param_1 + 0x14);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  FUN_149110a6c(param_2);
  FUN_140056680(local_98,L"Value");
  FUN_140056680(local_a8,L"Rotator");
  local_40 = local_a8;
  local_38 = local_98;
  FUN_140ac5c08(param_2 + 0x30,local_2c,&local_40,0);
  local_40 = local_a8;
  local_38 = local_98;
  FUN_140ac5c08(param_2 + 0x80,local_2c,&local_40,0);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110a6c FUN_149110a6c body=211 status=ok
// SIG undefined FUN_149110a6c(void)

undefined8 * FUN_149110a6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466a22b0();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a2506();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149110b40 FUN_149110b40 body=372 status=ok
// SIG undefined FUN_149110b40(void)

longlong FUN_149110b40(longlong param_1,longlong param_2)

{
  undefined1 auStack_f8 [40];
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  undefined **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = &PTR_FUN_14bb1f630;
  local_48 = DAT_14c8463e0;
  uStack_40 = DAT_14c8463e8;
  local_58 = DAT_14c8463d0;
  uStack_50 = DAT_14c8463d8;
  local_88 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined4 *)(param_1 + 0x20);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  uStack_70 = *(undefined4 *)(param_1 + 0x28);
  uStack_6c = *(undefined4 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x30);
  FUN_149110cb6(param_2);
  FUN_140056680(local_c0,L"Factor");
  FUN_140056680(local_d0,L"Scale");
  local_b0 = local_d0;
  local_a8 = local_c0;
  FUN_140ac5c08(param_2 + 0x30,local_9c,&local_b0,0);
  local_b0 = local_d0;
  local_a8 = local_c0;
  FUN_140ac5c08(param_2 + 0x80,local_9c,&local_b0,0);
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_c0,L"Result");
  FUN_140056680(local_d0,L"Value");
  local_b0 = local_d0;
  local_a8 = local_c0;
  FUN_140ac5c08(param_2 + 0x80,local_9c,&local_b0,0);
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110cb6 FUN_149110cb6 body=211 status=ok
// SIG undefined FUN_149110cb6(void)

undefined8 * FUN_149110cb6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466a2e4c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a304a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149110d8a FUN_149110d8a body=46 status=ok
// SIG undefined FUN_149110d8a(void)

undefined8 FUN_149110d8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_1466a3dd2();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149110db8 FUN_149110db8 body=46 status=ok
// SIG undefined FUN_149110db8(void)

undefined8 FUN_149110db8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_1466a4024();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149110de6 FUN_149110de6 body=25 status=ok
// SIG undefined FUN_149110de6(void)

undefined8 FUN_149110de6(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149110e00 FUN_149110e00 body=343 status=ok
// SIG undefined FUN_149110e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149110e00(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_148 [32];
  double local_128 [12];
  double local_c8 [2];
  undefined1 local_b8 [88];
  undefined1 local_60;
  undefined1 local_5f;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = *param_2;
  local_5f = *param_3;
  pdVar2 = (double *)&DAT_14c846480;
  pdVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  FUN_1449437a2(param_1,local_c8,param_4);
  dVar5 = (double)local_b8._0_8_ * (double)local_b8._0_8_ + local_c8[0] * local_c8[0];
  dVar8 = (double)local_b8._8_8_ * (double)local_b8._8_8_ + local_c8[1] * local_c8[1];
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  uVar4 = -(ulonglong)(1e-08 <= auVar6._8_8_);
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar9._0_8_ = auVar7._0_8_ * (double)local_b8._0_8_;
  auVar9._8_8_ = auVar7._8_8_ * (double)local_b8._8_8_;
  local_c8[0] = (double)((ulonglong)(local_c8[0] * auVar7._0_8_) &
                        -(ulonglong)(1e-08 <= auVar6._0_8_));
  local_c8[1] = (double)((ulonglong)(local_c8[1] * auVar7._8_8_) & uVar4);
  auVar7._8_4_ = (int)uVar4;
  auVar7._0_8_ = -(ulonglong)(1e-08 <= auVar6._0_8_);
  auVar7._12_4_ = (int)(uVar4 >> 0x20);
  local_b8._0_16_ = blendvpd(_DAT_149935300,auVar9,auVar7);
  FUN_14915a206(&local_60,local_128,local_c8);
  pdVar2 = local_128;
  pdVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  FUN_1459b4e90(0,local_c8,param_4,param_5);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149110f58 FUN_149110f58 body=57 status=ok
// SIG undefined FUN_149110f58(void)

void FUN_149110f58(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149111098(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 149110f92 FUN_149110f92 body=260 status=ok
// SIG undefined FUN_149110f92(void)

void FUN_149110f92(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x88;
  local_148 = param_1 + 0x84;
  FUN_149111098(param_1 + 8,param_1 + 0x38,param_1 + 0x68,param_1 + 0x80);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111098 FUN_149111098 body=829 status=ok
// SIG undefined FUN_149111098(void)

void FUN_149111098(double *param_1,double *param_2,double *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_178 [32];
  double *local_158;
  double *local_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_e8 = param_2[5] * 10000.0 + param_2[2];
  local_f0 = param_2[4] * 10000.0 + param_2[1];
  local_f8 = param_2[3] * 10000.0 + *param_2;
  local_100 = param_2[2] - param_2[5] * 10000.0;
  local_108 = param_2[1] - param_2[4] * 10000.0;
  local_110 = *param_2 - param_2[3] * 10000.0;
  local_118 = param_1[5] * 10000.0 + param_1[2];
  local_120 = param_1[4] * 10000.0 + param_1[1];
  local_128 = param_1[3] * 10000.0 + *param_1;
  local_130 = param_1[2] - param_1[5] * 10000.0;
  local_138 = param_1[1] - param_1[4] * 10000.0;
  local_140 = *param_1 - param_1[3] * 10000.0;
  local_150 = &local_e0;
  local_158 = &local_c8;
  FUN_144a0d30e();
  *param_3 = (local_c8 + local_e0) * 0.5;
  param_3[1] = (local_c0 + local_d8) * 0.5;
  param_3[2] = (local_b8 + local_d0) * 0.5;
  dVar1 = local_c8 - local_e0;
  dVar3 = local_c0 - local_d8;
  dVar2 = local_b8 - local_d0;
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar3))) ||
     (fVar4 = 0.0, 9.999999747378752e-05 < ABS(dVar2))) {
    fVar4 = (float)SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  }
  *param_4 = fVar4;
  *param_5 = (float)((local_b8 - param_1[2]) * param_1[5] +
                    (local_c8 - *param_1) * param_1[3] + (local_c0 - param_1[1]) * param_1[4]);
  *param_6 = (float)((local_d0 - param_2[2]) * param_2[5] +
                    (local_e0 - *param_2) * param_2[3] + (local_d8 - param_2[1]) * param_2[4]);
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491113d6 FUN_1491113d6 body=57 status=ok
// SIG undefined FUN_1491113d6(void)

void FUN_1491113d6(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149111512(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 149111410 FUN_149111410 body=257 status=ok
// SIG undefined FUN_149111410(void)

void FUN_149111410(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x84;
  local_148 = param_1 + 0x80;
  FUN_149111512(param_1 + 8,param_1 + 0x38,param_1 + 0x50,param_1 + 0x68);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111512 FUN_149111512 body=612 status=ok
// SIG undefined FUN_149111512(void)

void FUN_149111512(double *param_1,double *param_2,double *param_3,double *param_4,float *param_5,
                  float *param_6)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *param_3;
  dVar8 = param_3[1];
  dVar7 = param_3[2];
  dVar5 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
  if (((dVar5 != 1.0) || (dVar3 = dVar8, dVar4 = dVar7, dVar1 = dVar6, NAN(dVar5))) &&
     (dVar3 = DAT_14c8462c8, dVar4 = DAT_14c8462d0, dVar1 = DAT_14c8462c0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar3 = dVar8 * dVar5;
    dVar4 = dVar7 * dVar5;
    dVar1 = dVar6 * dVar5;
  }
  dVar6 = param_1[5] * dVar4 + param_1[3] * dVar1 + param_1[4] * dVar3;
  if (ABS(dVar6) <= 1e-08) {
    param_4[2] = DAT_14c8464f0;
    dVar6 = DAT_14c8464e8;
    *param_4 = DAT_14c8464e0;
    param_4[1] = dVar6;
    *param_6 = 0.0;
    fVar2 = 0.0;
  }
  else {
    dVar8 = param_2[2] * dVar4 + *param_2 * dVar1 + param_2[1] * dVar3;
    fVar2 = (float)(((dVar4 * dVar8 - param_1[2]) * dVar4 +
                    (dVar8 * dVar1 - *param_1) * dVar1 + (dVar3 * dVar8 - param_1[1]) * dVar3) /
                   dVar6);
    *param_6 = fVar2;
    dVar1 = (double)fVar2;
    dVar6 = param_1[5];
    dVar8 = param_1[4];
    dVar7 = param_1[2];
    dVar5 = param_1[1];
    *param_4 = dVar1 * param_1[3] + *param_1;
    param_4[1] = dVar8 * dVar1 + dVar5;
    param_4[2] = dVar6 * dVar1 + dVar7;
    *param_5 = 0.0;
    dVar6 = *param_1 - *param_4;
    if (ABS(dVar6) <= 9.999999747378752e-05) {
      dVar8 = param_1[2];
      dVar5 = param_1[1] - param_4[1];
      dVar7 = param_4[2];
      if ((ABS(dVar5) <= 9.999999747378752e-05) && (ABS(dVar8 - dVar7) <= 9.999999747378752e-05)) {
        return;
      }
    }
    else {
      dVar8 = param_1[2];
      dVar7 = param_4[2];
      dVar5 = param_1[1] - param_4[1];
    }
    fVar2 = (float)SQRT((dVar8 - dVar7) * (dVar8 - dVar7) + dVar6 * dVar6 + dVar5 * dVar5);
  }
  *param_5 = fVar2;
  return;
}



// FUNCTION 1491117bc FUN_1491117bc body=270 status=ok
// SIG undefined FUN_1491117bc(void)

void FUN_1491117bc(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)*(float *)(param_1 + 0x38);
  *(double *)(param_1 + 0x40) = dVar1 * *(double *)(param_1 + 0x20) + *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x28) * dVar1 + *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x30) * dVar1 + *(double *)(param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491118e0 FUN_1491118e0 body=232 status=ok
// SIG undefined FUN_1491118e0(void)

void FUN_1491118e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491119ca(param_1 + 8,param_1 + 0x40,param_1 + 0xa0);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491119ca FUN_1491119ca body=474 status=ok
// SIG undefined FUN_1491119ca(void)

void FUN_1491119ca(double *param_1,double *param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar9 = *param_1 * param_2[8];
  dVar10 = param_1[1] * param_2[9];
  dVar7 = param_1[2] * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar8 = param_2[2];
  dVar1 = param_2[3];
  dVar11 = dVar10 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar7 * dVar6 - dVar10 * dVar8;
  dVar13 = dVar9 * dVar8 - dVar5 * dVar7;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar4 = (dVar8 * dVar12 - dVar5 * dVar11) + param_2[3] * dVar13 + dVar10 + param_2[5];
  dVar10 = param_2[6];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (dVar11 * dVar6 - dVar13 * dVar8) + dVar1 * dVar12 + dVar9 + param_2[4];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_3 = auVar2;
  *(double *)param_3[1] = dVar11 * dVar1 + dVar7 + (dVar13 * dVar5 - dVar12 * dVar6) + dVar10;
  dVar7 = param_1[3] * param_2[8];
  dVar13 = param_1[4] * param_2[9];
  dVar8 = param_1[5] * param_2[10];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar1 = param_2[3];
  dVar10 = dVar13 * dVar4 - dVar7 * dVar5;
  dVar9 = dVar8 * dVar5 - dVar13 * dVar6;
  dVar11 = dVar7 * dVar6 - dVar4 * dVar8;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  dVar13 = (dVar6 * dVar9 - dVar4 * dVar10) + param_2[3] * dVar11 + dVar13;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = (dVar10 * dVar5 - dVar11 * dVar6) + dVar1 * dVar9 + dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_3[1] + 8) = auVar3;
  *(double *)(param_3[2] + 8) = dVar10 * dVar1 + dVar8 + (dVar11 * dVar4 - dVar9 * dVar5);
  return;
}



// FUNCTION 149111bb0 FUN_149111bb0 body=240 status=ok
// SIG undefined FUN_149111bb0(void)

void FUN_149111bb0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  local_70 = lVar8;
  FUN_149111dd6(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111ca2 FUN_149111ca2 body=306 status=ok
// SIG undefined FUN_149111ca2(void)

void FUN_149111ca2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xf0);
  local_28 = *(undefined4 *)(param_1 + 0xf8);
  local_158 = param_1 + 0x60;
  local_160 = param_1 + 0x40;
  local_168 = *(undefined1 *)(param_1 + 0x38);
  local_170 = *(undefined4 *)(param_1 + 0x34);
  local_178 = *(undefined1 *)(param_1 + 0x31);
  FUN_149111dd6(&local_30,param_1 + 0x100,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111dd6 FUN_149111dd6 body=269 status=ok
// SIG undefined FUN_149111dd6(void)

void FUN_149111dd6(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 *local_80;
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = (undefined4)param_1[1];
  local_48[2] = *param_1;
  local_78 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  local_68 = *param_8;
  uStack_64 = param_8[1];
  uStack_60 = param_8[2];
  uStack_5c = param_8[3];
  local_80 = &local_68;
  local_58 = *(undefined8 *)(param_8 + 4);
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  FUN_1491145a8(param_9);
  *param_2 = 0.0;
  if (0 < (int)param_1[1]) {
    fVar3 = 0.0;
    lVar1 = 8;
    lVar2 = 0;
    do {
      fVar3 = fVar3 + *(float *)(*param_1 + lVar1 * 4) * *(float *)(local_48[0] + lVar2 * 4);
      *param_2 = fVar3;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xc;
    } while (lVar2 < (int)param_1[1]);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111ee4 FUN_149111ee4 body=240 status=ok
// SIG undefined FUN_149111ee4(void)

void FUN_149111ee4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  local_70 = lVar8;
  FUN_14911210a(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149111fd6 FUN_149111fd6 body=306 status=ok
// SIG undefined FUN_149111fd6(void)

void FUN_149111fd6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xf0);
  local_28 = *(undefined4 *)(param_1 + 0xf8);
  local_158 = param_1 + 0x60;
  local_160 = param_1 + 0x40;
  local_168 = *(undefined1 *)(param_1 + 0x38);
  local_170 = *(undefined4 *)(param_1 + 0x34);
  local_178 = *(undefined1 *)(param_1 + 0x31);
  FUN_14911210a(&local_30,param_1 + 0x100,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911210a FUN_14911210a body=342 status=ok
// SIG undefined FUN_14911210a(void)

void FUN_14911210a(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 *local_80;
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = (undefined4)param_1[1];
  local_48[2] = *param_1;
  local_78 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  local_68 = *param_8;
  uStack_64 = param_8[1];
  uStack_60 = param_8[2];
  uStack_5c = param_8[3];
  local_80 = &local_68;
  local_58 = *(undefined8 *)(param_8 + 4);
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  FUN_149114ad8(param_9);
  param_2[2] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  if (0 < (int)param_1[1]) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar9 = param_2[2];
    lVar7 = 0xc;
    lVar8 = 0;
    do {
      lVar3 = *param_1;
      dVar10 = (double)*(float *)(local_48[0] + lVar8 * 4);
      dVar9 = dVar9 + *(double *)(lVar3 + lVar7 * 4) * dVar10;
      dVar2 = dVar2 + *(double *)(lVar3 + -8 + lVar7 * 4) * dVar10;
      dVar1 = dVar1 + dVar10 * *(double *)(lVar3 + -0x10 + lVar7 * 4);
      *param_2 = dVar1;
      param_2[1] = dVar2;
      param_2[2] = dVar9;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < (int)param_1[1]);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149112262 FUN_149112262 body=240 status=ok
// SIG undefined FUN_149112262(void)

void FUN_149112262(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  local_70 = lVar8;
  FUN_149112488(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149112354 FUN_149112354 body=306 status=ok
// SIG undefined FUN_149112354(void)

void FUN_149112354(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xf0);
  local_28 = *(undefined4 *)(param_1 + 0xf8);
  local_158 = param_1 + 0x60;
  local_160 = param_1 + 0x40;
  local_168 = *(undefined1 *)(param_1 + 0x38);
  local_170 = *(undefined4 *)(param_1 + 0x34);
  local_178 = *(undefined1 *)(param_1 + 0x31);
  FUN_149112488(&local_30,param_1 + 0x100,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149112488 FUN_149112488 body=351 status=ok
// SIG undefined FUN_149112488(void)

void FUN_149112488(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68 [3];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = (undefined4)param_1[1];
  local_50 = *param_1;
  local_98 = local_68;
  local_68[0] = 0;
  local_68[1] = 0;
  local_88 = *param_8;
  uStack_84 = param_8[1];
  uStack_80 = param_8[2];
  uStack_7c = param_8[3];
  local_a0 = &local_88;
  local_78 = *(undefined8 *)(param_8 + 4);
  local_a8 = param_7;
  local_b0 = param_6;
  local_b8 = param_5;
  FUN_149115004(param_9);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  if (0 < (int)param_1[1]) {
    fVar5 = 0.0;
    lVar3 = 0xb;
    lVar4 = 0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    do {
      lVar2 = *param_1;
      fVar1 = *(float *)(local_68[0] + lVar4 * 4);
      fVar5 = fVar5 + *(float *)(lVar2 + lVar3 * 4) * fVar1;
      fVar6 = fVar6 + *(float *)(lVar2 + -4 + lVar3 * 4) * fVar1;
      fVar7 = fVar7 + *(float *)(lVar2 + -8 + lVar3 * 4) * fVar1;
      fVar8 = fVar8 + fVar1 * *(float *)(lVar2 + -0xc + lVar3 * 4);
      *param_2 = fVar8;
      param_2[1] = fVar7;
      param_2[2] = fVar6;
      param_2[3] = fVar5;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (lVar4 < (int)param_1[1]);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491125e8 FUN_1491125e8 body=240 status=ok
// SIG undefined FUN_1491125e8(void)

void FUN_1491125e8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  local_70 = lVar8;
  FUN_14911280e(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491126da FUN_1491126da body=306 status=ok
// SIG undefined FUN_1491126da(void)

void FUN_1491126da(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xf0);
  local_28 = *(undefined4 *)(param_1 + 0xf8);
  local_158 = param_1 + 0x60;
  local_160 = param_1 + 0x40;
  local_168 = *(undefined1 *)(param_1 + 0x38);
  local_170 = *(undefined4 *)(param_1 + 0x34);
  local_178 = *(undefined1 *)(param_1 + 0x31);
  FUN_14911280e(&local_30,param_1 + 0x100,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911280e FUN_14911280e body=661 status=ok
// SIG undefined FUN_14911280e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14911280e(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8 [3];
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = (undefined4)param_1[1];
  local_90 = *param_1;
  local_d8 = local_a8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c8 = *param_8;
  uStack_c0 = param_8[1];
  local_e0 = &local_c8;
  local_b8 = param_8[2];
  local_e8 = param_7;
  local_f0 = param_6;
  local_f8 = param_5;
  FUN_149115534(param_9);
  dVar9 = DAT_14c8463e8;
  param_2[2] = DAT_14c8463e0;
  param_2[3] = dVar9;
  dVar9 = DAT_14c8463d8;
  *param_2 = DAT_14c8463d0;
  param_2[1] = dVar9;
  if ((int)param_1[1] < 1) {
    dVar9 = *param_2;
    dVar11 = param_2[1];
    dVar12 = param_2[2];
    dVar13 = param_2[3];
  }
  else {
    dVar9 = *param_2;
    dVar11 = param_2[1];
    dVar12 = param_2[2];
    dVar13 = param_2[3];
    lVar6 = 0xc;
    lVar7 = 0;
    dVar14 = param_2[2];
    dVar17 = *param_2;
    dVar10 = param_2[1];
    dVar18 = param_2[3];
    do {
      dVar2 = (double)*(float *)(local_a8[0] + lVar7 * 4);
      pdVar1 = (double *)(*param_1 + -0x10 + lVar6 * 4);
      dVar4 = *pdVar1 * dVar2;
      dVar5 = pdVar1[1] * dVar2;
      pdVar1 = (double *)(*param_1 + lVar6 * 4);
      dVar3 = dVar2 * *pdVar1;
      dVar2 = dVar2 * pdVar1[1];
      if (dVar2 * dVar18 + dVar14 * dVar3 + dVar9 * dVar4 + dVar5 * dVar11 < 0.0) {
        dVar3 = -dVar3;
        dVar2 = -dVar2;
        dVar4 = -dVar4;
        dVar5 = -dVar5;
      }
      dVar9 = dVar17 + dVar4;
      dVar11 = dVar10 + dVar5;
      dVar12 = dVar12 + dVar3;
      dVar13 = dVar13 + dVar2;
      *param_2 = dVar9;
      param_2[1] = dVar11;
      param_2[2] = dVar12;
      param_2[3] = dVar13;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
      dVar14 = dVar12;
      dVar17 = dVar9;
      dVar10 = dVar11;
      dVar18 = dVar13;
    } while (lVar7 < (int)param_1[1]);
  }
  dVar14 = dVar12 * dVar12 + dVar9 * dVar9;
  dVar17 = dVar13 * dVar13 + dVar11 * dVar11;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  uVar8 = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar16 = divpd(_DAT_149934d80,auVar16);
  auVar19._0_8_ = auVar16._0_8_ * dVar12;
  auVar19._8_8_ = auVar16._8_8_ * dVar13;
  *param_2 = (double)((ulonglong)(dVar9 * auVar16._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
  param_2[1] = (double)((ulonglong)(dVar11 * auVar16._8_8_) & uVar8);
  auVar16._8_4_ = (int)uVar8;
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  auVar16._12_4_ = (int)(uVar8 >> 0x20);
  auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar16);
  *(undefined1 (*) [16])(param_2 + 2) = auVar16;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149112aa4 FUN_149112aa4 body=240 status=ok
// SIG undefined FUN_149112aa4(void)

void FUN_149112aa4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = param_2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  local_70 = lVar8;
  FUN_149112cca(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149112b96 FUN_149112b96 body=306 status=ok
// SIG undefined FUN_149112b96(void)

void FUN_149112b96(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_168;
  longlong local_160;
  longlong local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xf0);
  local_28 = *(undefined4 *)(param_1 + 0xf8);
  local_158 = param_1 + 0x60;
  local_160 = param_1 + 0x40;
  local_168 = *(undefined1 *)(param_1 + 0x38);
  local_170 = *(undefined4 *)(param_1 + 0x34);
  local_178 = *(undefined1 *)(param_1 + 0x31);
  FUN_149112cca(&local_30,param_1 + 0x100,param_1 + 0x10,*(undefined1 *)(param_1 + 0x30));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149112cca FUN_149112cca body=882 status=ok
// SIG undefined FUN_149112cca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149112cca(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined4 *local_130;
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8 [3];
  longlong local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_d8 = (undefined4)param_1[1];
  local_e0 = *param_1;
  local_128 = local_f8;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_118 = *param_8;
  uStack_114 = param_8[1];
  uStack_110 = param_8[2];
  uStack_10c = param_8[3];
  local_130 = &local_118;
  local_108 = *(undefined8 *)(param_8 + 4);
  local_138 = param_7;
  local_140 = param_6;
  local_148 = param_5;
  FUN_149115a60(param_9);
  dVar14 = DAT_14c8463d0;
  dVar15 = DAT_14c8463d8;
  dVar19 = DAT_14c8464e0;
  dVar17 = DAT_14c8463e0;
  dVar18 = DAT_14c8463e8;
  dVar16 = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  dVar4 = DAT_14c8464f0;
  if ((longlong)(int)param_1[1] < 1) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = DAT_14c8464e8;
  }
  else {
    pdVar9 = (double *)(*param_1 + 0x70);
    lVar10 = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = DAT_14c8464e8;
    do {
      dVar8 = (double)*(float *)(local_f8[0] + lVar10 * 4);
      dVar6 = pdVar9[-10] * dVar8;
      dVar7 = pdVar9[-9] * dVar8;
      dVar2 = dVar8 * pdVar9[-8];
      dVar3 = dVar8 * pdVar9[-7];
      if (dVar3 * dVar18 + dVar17 * dVar2 + dVar14 * dVar6 + dVar15 * dVar7 < 0.0) {
        dVar2 = -dVar2;
        dVar3 = -dVar3;
        dVar6 = -dVar6;
        dVar7 = -dVar7;
      }
      dVar16 = dVar16 + *pdVar9 * dVar8;
      dVar12 = dVar12 + pdVar9[-1] * dVar8;
      dVar1 = dVar1 + pdVar9[-2] * dVar8;
      dVar4 = dVar4 + pdVar9[-4] * dVar8;
      auVar20._0_8_ = auVar20._0_8_ + pdVar9[-5] * dVar8;
      dVar19 = dVar19 + dVar8 * pdVar9[-6];
      dVar17 = dVar17 + dVar2;
      dVar18 = dVar18 + dVar3;
      dVar14 = dVar14 + dVar6;
      dVar15 = dVar15 + dVar7;
      lVar10 = lVar10 + 1;
      pdVar9 = pdVar9 + 0x10;
    } while ((int)param_1[1] != lVar10);
  }
  dVar2 = dVar17 * dVar17 + dVar14 * dVar14;
  dVar3 = dVar18 * dVar18 + dVar15 * dVar15;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar6 = dVar2 + auVar22._8_8_;
  uVar11 = -(ulonglong)(9.99999993922529e-09 <= dVar2 + dVar3);
  auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar6);
  auVar13._0_8_ = uVar11;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar2 + dVar3;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar21 = sqrtpd(auVar20,auVar5);
  auVar22 = divpd(_DAT_149934d80,auVar21);
  auVar23._0_8_ = auVar22._0_8_ * dVar17;
  auVar23._8_8_ = auVar22._8_8_ * dVar18;
  auVar21 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar13);
  *param_2 = (ulonglong)(dVar14 * auVar22._0_8_) & uVar11;
  param_2[1] = (ulonglong)(dVar15 * auVar22._8_8_) & -(ulonglong)(9.99999993922529e-09 <= dVar6);
  *(undefined1 (*) [16])(param_2 + 2) = auVar21;
  param_2[4] = (ulonglong)dVar19;
  param_2[5] = auVar20._0_8_;
  param_2[6] = (ulonglong)dVar4;
  param_2[7] = 0;
  auVar21._8_4_ = SUB84(dVar12,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar21;
  param_2[10] = (ulonglong)dVar16;
  param_2[0xb] = 0;
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14911303e FUN_14911303e body=224 status=ok
// SIG undefined FUN_14911303e(void)

void FUN_14911303e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  FUN_149113248(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113120 FUN_149113120 body=295 status=ok
// SIG undefined FUN_149113120(void)

void FUN_149113120(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined4 *)(param_1 + 200);
  local_150 = param_1 + 0x30;
  local_158 = *(undefined1 *)(param_1 + 0x28);
  local_160 = *(undefined4 *)(param_1 + 0x24);
  local_168 = *(undefined1 *)(param_1 + 0x21);
  FUN_149113248(&local_30,param_1 + 0xd0,param_1 + 8,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113248 FUN_149113248 body=218 status=ok
// SIG undefined FUN_149113248(void)

void FUN_149113248(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  longlong *local_50;
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = (undefined4)param_1[1];
  local_30 = *param_1;
  local_50 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = param_7;
  local_60 = param_6;
  local_68 = param_5;
  FUN_149115f8c(param_8);
  *param_2 = 0.0;
  if (0 < (int)param_1[1]) {
    fVar3 = 0.0;
    lVar1 = 0x18;
    lVar2 = 0;
    do {
      fVar3 = fVar3 + *(float *)(*param_1 + lVar1) * *(float *)(local_48[0] + lVar2 * 4);
      *param_2 = fVar3;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 < (int)param_1[1]);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113324 FUN_149113324 body=224 status=ok
// SIG undefined FUN_149113324(void)

void FUN_149113324(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  FUN_14911352e(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113406 FUN_149113406 body=295 status=ok
// SIG undefined FUN_149113406(void)

void FUN_149113406(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined4 *)(param_1 + 200);
  local_150 = param_1 + 0x30;
  local_158 = *(undefined1 *)(param_1 + 0x28);
  local_160 = *(undefined4 *)(param_1 + 0x24);
  local_168 = *(undefined1 *)(param_1 + 0x21);
  FUN_14911352e(&local_30,param_1 + 0xd0,param_1 + 8,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911352e FUN_14911352e body=291 status=ok
// SIG undefined FUN_14911352e(void)

void FUN_14911352e(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  longlong *local_50;
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = (undefined4)param_1[1];
  local_30 = *param_1;
  local_50 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = param_7;
  local_60 = param_6;
  local_68 = param_5;
  FUN_1491164b2(param_8);
  param_2[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
  if (0 < (int)param_1[1]) {
    dVar1 = *param_2;
    dVar8 = param_2[1];
    dVar9 = param_2[2];
    lVar6 = 10;
    lVar7 = 0;
    do {
      lVar2 = *param_1;
      dVar10 = (double)*(float *)(local_48[0] + lVar7 * 4);
      dVar9 = dVar9 + *(double *)(lVar2 + lVar6 * 4) * dVar10;
      dVar8 = dVar8 + *(double *)(lVar2 + -8 + lVar6 * 4) * dVar10;
      dVar1 = dVar1 + dVar10 * *(double *)(lVar2 + -0x10 + lVar6 * 4);
      *param_2 = dVar1;
      param_2[1] = dVar8;
      param_2[2] = dVar9;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 < (int)param_1[1]);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113652 FUN_149113652 body=224 status=ok
// SIG undefined FUN_149113652(void)

void FUN_149113652(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  FUN_14911385c(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113734 FUN_149113734 body=295 status=ok
// SIG undefined FUN_149113734(void)

void FUN_149113734(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined4 *)(param_1 + 200);
  local_150 = param_1 + 0x30;
  local_158 = *(undefined1 *)(param_1 + 0x28);
  local_160 = *(undefined4 *)(param_1 + 0x24);
  local_168 = *(undefined1 *)(param_1 + 0x21);
  FUN_14911385c(&local_30,param_1 + 0xd0,param_1 + 8,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911385c FUN_14911385c body=300 status=ok
// SIG undefined FUN_14911385c(void)

void FUN_14911385c(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong *local_60;
  longlong local_58 [3];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (undefined4)param_1[1];
  local_40 = *param_1;
  local_60 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = param_5;
  FUN_1491169dc(param_8);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  if (0 < (int)param_1[1]) {
    fVar5 = 0.0;
    lVar3 = 9;
    lVar4 = 0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    do {
      lVar2 = *param_1;
      fVar1 = *(float *)(local_58[0] + lVar4 * 4);
      fVar5 = fVar5 + *(float *)(lVar2 + lVar3 * 4) * fVar1;
      fVar6 = fVar6 + *(float *)(lVar2 + -4 + lVar3 * 4) * fVar1;
      fVar7 = fVar7 + *(float *)(lVar2 + -8 + lVar3 * 4) * fVar1;
      fVar8 = fVar8 + fVar1 * *(float *)(lVar2 + -0xc + lVar3 * 4);
      *param_2 = fVar8;
      param_2[1] = fVar7;
      param_2[2] = fVar6;
      param_2[3] = fVar5;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 10;
    } while (lVar4 < (int)param_1[1]);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911398a FUN_14911398a body=224 status=ok
// SIG undefined FUN_14911398a(void)

void FUN_14911398a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  FUN_149113b94(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113a6c FUN_149113a6c body=295 status=ok
// SIG undefined FUN_149113a6c(void)

void FUN_149113a6c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined4 *)(param_1 + 200);
  local_150 = param_1 + 0x30;
  local_158 = *(undefined1 *)(param_1 + 0x28);
  local_160 = *(undefined4 *)(param_1 + 0x24);
  local_168 = *(undefined1 *)(param_1 + 0x21);
  FUN_149113b94(&local_30,param_1 + 0xd0,param_1 + 8,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113b94 FUN_149113b94 body=611 status=ok
// SIG undefined FUN_149113b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149113b94(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  longlong local_98 [3];
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (undefined4)param_1[1];
  local_80 = *param_1;
  local_a0 = local_98;
  local_98[0] = 0;
  local_98[1] = 0;
  local_a8 = param_7;
  local_b0 = param_6;
  local_b8 = param_5;
  FUN_149116f06(param_8);
  dVar9 = DAT_14c8463e8;
  param_2[2] = DAT_14c8463e0;
  param_2[3] = dVar9;
  dVar9 = DAT_14c8463d8;
  *param_2 = DAT_14c8463d0;
  param_2[1] = dVar9;
  if ((int)param_1[1] < 1) {
    dVar9 = *param_2;
    dVar11 = param_2[1];
    dVar12 = param_2[2];
    dVar13 = param_2[3];
  }
  else {
    dVar9 = *param_2;
    dVar11 = param_2[1];
    dVar12 = param_2[2];
    dVar13 = param_2[3];
    lVar6 = 0xc;
    lVar7 = 0;
    dVar14 = param_2[2];
    dVar17 = *param_2;
    dVar10 = param_2[1];
    dVar18 = param_2[3];
    do {
      dVar2 = (double)*(float *)(local_98[0] + lVar7 * 4);
      pdVar1 = (double *)(*param_1 + -0x10 + lVar6 * 4);
      dVar4 = *pdVar1 * dVar2;
      dVar5 = pdVar1[1] * dVar2;
      pdVar1 = (double *)(*param_1 + lVar6 * 4);
      dVar3 = dVar2 * *pdVar1;
      dVar2 = dVar2 * pdVar1[1];
      if (dVar2 * dVar18 + dVar14 * dVar3 + dVar9 * dVar4 + dVar5 * dVar11 < 0.0) {
        dVar3 = -dVar3;
        dVar2 = -dVar2;
        dVar4 = -dVar4;
        dVar5 = -dVar5;
      }
      dVar9 = dVar17 + dVar4;
      dVar11 = dVar10 + dVar5;
      dVar12 = dVar12 + dVar3;
      dVar13 = dVar13 + dVar2;
      *param_2 = dVar9;
      param_2[1] = dVar11;
      param_2[2] = dVar12;
      param_2[3] = dVar13;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
      dVar14 = dVar12;
      dVar17 = dVar9;
      dVar10 = dVar11;
      dVar18 = dVar13;
    } while (lVar7 < (int)param_1[1]);
  }
  dVar14 = dVar12 * dVar12 + dVar9 * dVar9;
  dVar17 = dVar13 * dVar13 + dVar11 * dVar11;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  uVar8 = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar16 = divpd(_DAT_149934d80,auVar16);
  auVar19._0_8_ = auVar16._0_8_ * dVar12;
  auVar19._8_8_ = auVar16._8_8_ * dVar13;
  *param_2 = (double)((ulonglong)(dVar9 * auVar16._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
  param_2[1] = (double)((ulonglong)(dVar11 * auVar16._8_8_) & uVar8);
  auVar16._8_4_ = (int)uVar8;
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  auVar16._12_4_ = (int)(uVar8 >> 0x20);
  auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar16);
  *(undefined1 (*) [16])(param_2 + 2) = auVar16;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149113df8 FUN_149113df8 body=224 status=ok
// SIG undefined FUN_149113df8(void)

void FUN_149113df8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  lVar6 = param_2[4];
  lVar7 = param_2[8];
  uVar2 = *(undefined1 *)param_2[0xc];
  uVar3 = *(undefined1 *)param_2[0x10];
  uVar1 = *(undefined4 *)param_2[0x14];
  uVar4 = *(undefined1 *)param_2[0x18];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_88 = uVar3;
  local_80 = uVar1;
  local_78 = uVar4;
  FUN_149114002(&local_60,lVar6,lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149113eda FUN_149113eda body=295 status=ok
// SIG undefined FUN_149113eda(void)

void FUN_149113eda(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined4 *)(param_1 + 200);
  local_150 = param_1 + 0x30;
  local_158 = *(undefined1 *)(param_1 + 0x28);
  local_160 = *(undefined4 *)(param_1 + 0x24);
  local_168 = *(undefined1 *)(param_1 + 0x21);
  FUN_149114002(&local_30,param_1 + 0xd0,param_1 + 8,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149114002 FUN_149114002 body=831 status=ok
// SIG undefined FUN_149114002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149114002(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  longlong *local_f0;
  longlong local_e8 [3];
  longlong local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8 = (undefined4)param_1[1];
  local_d0 = *param_1;
  local_f0 = local_e8;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f8 = param_7;
  local_100 = param_6;
  local_108 = param_5;
  FUN_14911742c(param_8);
  dVar14 = DAT_14c8463d0;
  dVar15 = DAT_14c8463d8;
  dVar19 = DAT_14c8464e0;
  dVar17 = DAT_14c8463e0;
  dVar18 = DAT_14c8463e8;
  dVar16 = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  dVar4 = DAT_14c8464f0;
  if ((longlong)(int)param_1[1] < 1) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = DAT_14c8464e8;
  }
  else {
    pdVar9 = (double *)(*param_1 + 0x70);
    lVar10 = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = DAT_14c8464e8;
    do {
      dVar8 = (double)*(float *)(local_e8[0] + lVar10 * 4);
      dVar6 = pdVar9[-10] * dVar8;
      dVar7 = pdVar9[-9] * dVar8;
      dVar2 = dVar8 * pdVar9[-8];
      dVar3 = dVar8 * pdVar9[-7];
      if (dVar3 * dVar18 + dVar17 * dVar2 + dVar14 * dVar6 + dVar15 * dVar7 < 0.0) {
        dVar2 = -dVar2;
        dVar3 = -dVar3;
        dVar6 = -dVar6;
        dVar7 = -dVar7;
      }
      dVar16 = dVar16 + *pdVar9 * dVar8;
      dVar12 = dVar12 + pdVar9[-1] * dVar8;
      dVar1 = dVar1 + pdVar9[-2] * dVar8;
      dVar4 = dVar4 + pdVar9[-4] * dVar8;
      auVar20._0_8_ = auVar20._0_8_ + pdVar9[-5] * dVar8;
      dVar19 = dVar19 + dVar8 * pdVar9[-6];
      dVar17 = dVar17 + dVar2;
      dVar18 = dVar18 + dVar3;
      dVar14 = dVar14 + dVar6;
      dVar15 = dVar15 + dVar7;
      lVar10 = lVar10 + 1;
      pdVar9 = pdVar9 + 0x10;
    } while ((int)param_1[1] != lVar10);
  }
  dVar2 = dVar17 * dVar17 + dVar14 * dVar14;
  dVar3 = dVar18 * dVar18 + dVar15 * dVar15;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar6 = dVar2 + auVar22._8_8_;
  uVar11 = -(ulonglong)(9.99999993922529e-09 <= dVar2 + dVar3);
  auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar6);
  auVar13._0_8_ = uVar11;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar2 + dVar3;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar21 = sqrtpd(auVar20,auVar5);
  auVar22 = divpd(_DAT_149934d80,auVar21);
  auVar23._0_8_ = auVar22._0_8_ * dVar17;
  auVar23._8_8_ = auVar22._8_8_ * dVar18;
  auVar21 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar13);
  *param_2 = (ulonglong)(dVar14 * auVar22._0_8_) & uVar11;
  param_2[1] = (ulonglong)(dVar15 * auVar22._8_8_) & -(ulonglong)(9.99999993922529e-09 <= dVar6);
  *(undefined1 (*) [16])(param_2 + 2) = auVar21;
  param_2[4] = (ulonglong)dVar19;
  param_2[5] = auVar20._0_8_;
  param_2[6] = (ulonglong)dVar4;
  param_2[7] = 0;
  auVar21._8_4_ = SUB84(dVar12,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar21;
  param_2[10] = (ulonglong)dVar16;
  param_2[0xb] = 0;
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149114342 FUN_149114342 body=322 status=ok
// SIG undefined FUN_149114342(void)

ulonglong FUN_149114342(undefined8 *param_1)

{
  ulonglong uVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auStack_58 [40];
  ulonglong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar1 = 0;
  }
  else {
    pdVar2 = (double *)*param_1;
    pdVar3 = pdVar2 + (longlong)*(int *)(param_1 + 1) * 4;
    uVar1 = 0;
    do {
      fVar6 = (float)*pdVar2;
      local_30[0] = 0;
      if (fVar6 != 0.0) {
        local_30[0] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_30[0] = (ulonglong)(uint)fVar6;
      }
      fVar6 = (float)pdVar2[1];
      local_30[1] = 0;
      if (fVar6 != 0.0) {
        local_30[1] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_30[1] = (ulonglong)(uint)fVar6;
      }
      fVar6 = (float)pdVar2[2];
      local_30[2] = 0;
      if (fVar6 != 0.0) {
        local_30[2] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_30[2] = (ulonglong)(uint)fVar6;
      }
      fVar6 = (float)pdVar2[3];
      local_30[3] = 0;
      if (fVar6 != 0.0) {
        local_30[3] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_30[3] = (ulonglong)(uint)fVar6;
      }
      uVar1 = uVar1 ^ 0x1a929e4d6f47a654;
      lVar4 = 0;
      do {
        uVar5 = *(longlong *)((longlong)local_30 + lVar4) * -0x395b586ca42e166b;
        uVar1 = (uVar1 ^ (uVar5 >> 0x2f ^ uVar5) * -0x395b586ca42e166b) * -0x395b586ca42e166b;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x20);
      uVar1 = (uVar1 >> 0x2f ^ uVar1) * -0x395b586ca42e166b;
      uVar1 = uVar1 >> 0x2f ^ uVar1;
      pdVar2 = pdVar2 + 4;
    } while (pdVar2 != pdVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149114486 FUN_149114486 body=288 status=ok
// SIG undefined FUN_149114486(void)

ulonglong FUN_149114486(undefined8 *param_1)

{
  double *pdVar1;
  ulonglong uVar2;
  double *pdVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auStack_48 [32];
  ulonglong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar2 = 0;
  }
  else {
    pdVar3 = (double *)*param_1;
    pdVar1 = pdVar3 + (longlong)*(int *)(param_1 + 1) * 3;
    uVar2 = 0;
    do {
      fVar6 = (float)*pdVar3;
      local_28[0] = 0;
      if (fVar6 != 0.0) {
        local_28[0] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_28[0] = (ulonglong)(uint)fVar6;
      }
      fVar6 = (float)pdVar3[1];
      local_28[1] = 0;
      if (fVar6 != 0.0) {
        local_28[1] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_28[1] = (ulonglong)(uint)fVar6;
      }
      fVar6 = (float)pdVar3[2];
      local_28[2] = 0;
      if (fVar6 != 0.0) {
        local_28[2] = (ulonglong)(uint)fVar6;
      }
      if (NAN(fVar6)) {
        local_28[2] = (ulonglong)(uint)fVar6;
      }
      uVar2 = uVar2 ^ 0x53edf6ba1375bcbf;
      lVar4 = 0;
      do {
        uVar5 = *(longlong *)((longlong)local_28 + lVar4) * -0x395b586ca42e166b;
        uVar2 = (uVar2 ^ (uVar5 >> 0x2f ^ uVar5) * -0x395b586ca42e166b) * -0x395b586ca42e166b;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      uVar2 = (uVar2 >> 0x2f ^ uVar2) * -0x395b586ca42e166b;
      uVar2 = uVar2 >> 0x2f ^ uVar2;
      pdVar3 = pdVar3 + 3;
    } while (pdVar3 != pdVar1);
  }
  if ((local_28[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491145a8 FUN_1491145a8 body=1325 status=ok
// SIG undefined FUN_1491145a8(void)

void FUN_1491145a8(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong unaff_R13;
  void *pvVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_11c;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1401017f4(&local_1a8);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar5 = *param_2;
      unaff_R13 = 0;
      do {
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar19 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
        if (uStack_1a0._4_4_ < uVar19) {
          FUN_140e16be0(&local_1a8,uVar13 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + unaff_R13);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = *(undefined8 *)(puVar2 + 6);
        puVar3 = (undefined8 *)((longlong)local_1a8 + lVar24 * 0x20 + 0x10);
        *puVar3 = *(undefined8 *)(puVar2 + 4);
        puVar3[1] = uVar10;
        puVar2 = (undefined4 *)((longlong)local_1a8 + lVar24 * 0x20);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        unaff_R13 = unaff_R13 + 0x30;
      } while ((longlong)(int)lVar11 * 0x30 != unaff_R13);
    }
  }
  pvVar21 = local_1a8;
  pvVar23 = (void *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_7);
  iVar4 = *(int *)(param_1 + 0xf);
  iVar12 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_118 = local_1a8;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      pvVar20 = (void *)FUN_149114342();
      if (pvVar20 == param_1[0x10]) goto LAB_149114a26;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_188 = 0;
    local_178 = &PTR_LAB_14bb2bcd0;
    local_168 = param_8;
    local_160 = param_5;
    local_198 = &LAB_1491582bc;
    local_1b8 = pvVar21;
    local_1b0 = iVar4;
    local_170 = param_4;
    local_15c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      pvVar23 = pvVar21;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_14735390a(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppvVar1,pvVar21,(longlong)iVar12 << 5);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar21 = (void *)FUN_149114342(&local_118);
    param_1[0x10] = pvVar21;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcd0;
    local_128 = param_8;
    local_120 = param_5;
    local_158 = &LAB_1491582bc;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    local_11c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pvVar23 = (void *)CONCAT71((int7)((ulonglong)pvVar23 >> 8),param_7);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_149114a26:
  FUN_149158028(param_1,param_9,param_3,(ulonglong)pvVar23 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149114ad8 FUN_149114ad8 body=1321 status=ok
// SIG undefined FUN_149114ad8(void)

void FUN_149114ad8(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong unaff_R13;
  void *pvVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_11c;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1401017f4(&local_1a8);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar5 = *param_2;
      unaff_R13 = 0;
      do {
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar19 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
        if (uStack_1a0._4_4_ < uVar19) {
          FUN_140e16be0(&local_1a8,uVar13 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + unaff_R13);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = *(undefined8 *)(puVar2 + 6);
        puVar3 = (undefined8 *)((longlong)local_1a8 + lVar24 * 0x20 + 0x10);
        *puVar3 = *(undefined8 *)(puVar2 + 4);
        puVar3[1] = uVar10;
        puVar2 = (undefined4 *)((longlong)local_1a8 + lVar24 * 0x20);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        unaff_R13 = unaff_R13 + 0x40;
      } while ((longlong)(int)lVar11 * 0x40 != unaff_R13);
    }
  }
  pvVar21 = local_1a8;
  pvVar23 = (void *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_7);
  iVar4 = *(int *)(param_1 + 0xf);
  iVar12 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_118 = local_1a8;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      pvVar20 = (void *)FUN_149114342();
      if (pvVar20 == param_1[0x10]) goto LAB_149114f52;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_188 = 0;
    local_178 = &PTR_LAB_14bb2bcd0;
    local_168 = param_8;
    local_160 = param_5;
    local_198 = &LAB_1491582bc;
    local_1b8 = pvVar21;
    local_1b0 = iVar4;
    local_170 = param_4;
    local_15c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      pvVar23 = pvVar21;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_14735390a(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppvVar1,pvVar21,(longlong)iVar12 << 5);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar21 = (void *)FUN_149114342(&local_118);
    param_1[0x10] = pvVar21;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcd0;
    local_128 = param_8;
    local_120 = param_5;
    local_158 = &LAB_1491582bc;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    local_11c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pvVar23 = (void *)CONCAT71((int7)((ulonglong)pvVar23 >> 8),param_7);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_149114f52:
  FUN_149158028(param_1,param_9,param_3,(ulonglong)pvVar23 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


